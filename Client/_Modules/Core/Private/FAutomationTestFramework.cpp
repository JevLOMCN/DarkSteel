// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 59

// FAutomationTestFramework @ 1418153b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAutomationTestFramework * __thiscall
FAutomationTestFramework::FAutomationTestFramework(FAutomationTestFramework *this)

{
  TSharedPtr<FTextFilterExpressionEvaluator,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FAutomationTestFramework *pFVar6;
  FTextFilterExpressionEvaluator *pFVar7;
  TNode *pTVar8;
  FTextFilterExpressionEvaluator *local_28;
  FSharedReferencer<1> FStack_20;
  
  pTVar8 = (TNode *)0x0;
  *(undefined8 *)&(this->PreTestingEvent).field_0x18 = 2;
  *(undefined8 *)&this->PreTestingEvent = 0;
  *(undefined8 *)&(this->PreTestingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PreTestingEvent).field_0x10 = 0;
  *(undefined8 *)&this->PostTestingEvent = 0;
  *(undefined8 *)&(this->PostTestingEvent).field_0x8 = 0;
  *(undefined8 *)&(this->PostTestingEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnTestStartEvent = 0;
  *(undefined8 *)&(this->OnTestStartEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestStartEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnTestEndEvent = 0;
  *(undefined8 *)&(this->OnTestEndEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestEndEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnScreenshotCompared = 0;
  *(undefined8 *)&(this->OnScreenshotCompared).field_0x8 = 0;
  *(undefined8 *)&(this->OnScreenshotCompared).field_0x10 = 0;
  *(undefined8 *)&this->OnScreenshotComparisonReport = 0;
  *(undefined8 *)&(this->OnScreenshotComparisonReport).field_0x8 = 0;
  *(undefined8 *)&(this->OnScreenshotComparisonReport).field_0x10 = 0;
  *(undefined8 *)&this->OnTestDataRetrieved = 0;
  *(undefined8 *)&(this->OnTestDataRetrieved).field_0x8 = 0;
  *(undefined8 *)&(this->OnTestDataRetrieved).field_0x10 = 0;
  *(undefined8 *)&this->OnPerformanceDataRetrieved = 0;
  *(undefined8 *)&(this->OnPerformanceDataRetrieved).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerformanceDataRetrieved).field_0x10 = 0;
  *(undefined8 *)&this->OnScreenshotTakenAndCompared = 0;
  *(undefined8 *)&(this->OnScreenshotTakenAndCompared).field_0x8 = 0;
  *(undefined8 *)&(this->OnScreenshotTakenAndCompared).field_0x10 = 0;
  *(undefined8 *)&this->OnBeforeAllTestsEvent = 0;
  *(undefined8 *)&(this->OnBeforeAllTestsEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeforeAllTestsEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnAfterAllTestsEvent = 0;
  *(undefined8 *)&(this->OnAfterAllTestsEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAfterAllTestsEvent).field_0x10 = 0;
  *(undefined8 *)&(this->PostTestingEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnTestStartEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnTestEndEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnScreenshotCompared).field_0x18 = 2;
  *(undefined8 *)&(this->OnScreenshotComparisonReport).field_0x18 = 2;
  *(undefined8 *)&(this->OnTestDataRetrieved).field_0x18 = 2;
  *(undefined8 *)&(this->OnPerformanceDataRetrieved).field_0x18 = 2;
  *(undefined8 *)&(this->OnScreenshotTakenAndCompared).field_0x18 = 2;
  *(undefined8 *)&(this->OnBeforeAllTestsEvent).field_0x18 = 2;
  *(undefined8 *)&(this->OnAfterAllTestsEvent).field_0x18 = 2;
  FOutputDevice::FOutputDevice((FOutputDevice *)&this->AutomationTestOutputDevice);
  (this->AutomationTestOutputDevice)._padding_ =
       (longlong)&___7FAutomationTestOutputDevice_FAutomationTestFramework__6B_;
  (this->AutomationTestOutputDevice).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  FFeedbackContext::FFeedbackContext((FFeedbackContext *)&this->AutomationTestMessageFilter);
  (this->AutomationTestMessageFilter)._padding_ =
       (longlong)&___7FAutomationTestMessageFilter_FAutomationTestFramework__6B_;
  (this->AutomationTestMessageFilter).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)0x0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->AutomationTestMessageFilter).ActionCS,4000);
  this->OriginalGWarn = (FFeedbackContext *)0x0;
  *(undefined8 *)&this->AutomationTestClassNameToInstanceMap = 0;
  *(undefined8 *)&(this->AutomationTestClassNameToInstanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->AutomationTestClassNameToInstanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x34 = 0;
  *(undefined8 *)&(this->AutomationTestClassNameToInstanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x48 = 0;
  *(undefined8 *)&(this->AllExistingTags).Elements = 0;
  *(undefined8 *)&(this->AllExistingTags).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllExistingTags).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllExistingTags).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllExistingTags).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllExistingTags).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllExistingTags).Elements.field_0x34 = 0;
  (this->AllExistingTags).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllExistingTags).HashSize = 0;
  *(undefined8 *)&this->TestFullNameToTagDataMap = 0;
  *(undefined8 *)&(this->TestFullNameToTagDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->TestFullNameToTagDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->TestFullNameToTagDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ImmutableTags = 0;
  *(undefined8 *)&(this->ImmutableTags).field_0x8 = 0;
  *(undefined8 *)&(this->ImmutableTags).field_0x20 = 0;
  *(undefined4 *)&(this->ImmutableTags).field_0x28 = 0;
  *(undefined4 *)&(this->ImmutableTags).field_0x2c = 0x80;
  *(undefined4 *)&(this->ImmutableTags).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ImmutableTags).field_0x34 = 0;
  *(undefined8 *)&(this->ImmutableTags).field_0x40 = 0;
  *(undefined4 *)&(this->ImmutableTags).field_0x48 = 0;
  pTVar4 = ::operator_new(0x18);
  pTVar5 = pTVar8;
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (IAutomationLatentCommand *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (IAutomationLatentCommand *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar4;
  }
  (this->LatentCommands).Tail = pTVar5;
  (this->LatentCommands).Head = pTVar5;
  pTVar4 = ::operator_new(0x18);
  pTVar5 = pTVar8;
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (IAutomationLatentCommand *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).Object = (IAutomationLatentCommand *)0x0;
    (pTVar4->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = pTVar4;
  }
  (this->NetworkCommands).Tail = (TNode *)pTVar5;
  pTVar1 = &this->TagFilter;
  (this->NetworkCommands).Head = (TNode *)pTVar5;
  this->RequestedTestFilter = SmokeFilter;
  this->StartTime = 0.0;
  this->bTestSuccessful = false;
  this->CurrentTest = (FAutomationTestBase *)0x0;
  (this->Parameters).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).Data.ArrayNum = 0;
  (this->Parameters).Data.ArrayMax = 0;
  (this->CurrentTestFullPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentTestFullPath).Data.ArrayNum = 0;
  (this->CurrentTestFullPath).Data.ArrayMax = 0;
  this->bDeveloperDirectoryIncluded = false;
  this->NetworkRoleIndex = 0;
  *(undefined8 *)&this->TestScreenshotCapturedDelegate = 0;
  *(undefined8 *)&(this->TestScreenshotCapturedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->TestScreenshotCapturedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->TestScreenshotAndTraceCapturedDelegate = 0;
  *(undefined8 *)&(this->TestScreenshotAndTraceCapturedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->TestScreenshotAndTraceCapturedDelegate).field_0x10 = 0;
  this->bForceSmokeTests = false;
  this->bCaptureStack = true;
  *(undefined8 *)&this->OnEnteringTestSectionEvent = 0;
  *(undefined8 *)&(this->OnEnteringTestSectionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnEnteringTestSectionEvent).field_0x20 = 0;
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x28 = 0;
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x34 = 0;
  *(undefined8 *)&(this->OnEnteringTestSectionEvent).field_0x40 = 0;
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x48 = 0;
  *(undefined8 *)&this->OnLeavingTestSectionEvent = 0;
  *(undefined8 *)&(this->OnLeavingTestSectionEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnLeavingTestSectionEvent).field_0x20 = 0;
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x28 = 0;
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x34 = 0;
  *(undefined8 *)&(this->OnLeavingTestSectionEvent).field_0x40 = 0;
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x48 = 0;
  pTVar1->Object = (FTextFilterExpressionEvaluator *)0x0;
  (this->TagFilter).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x388);
  if (pTVar5 == (TNode *)0x0) {
    local_28 = ___xmm_00000000000000000000000000000010;
    pFVar7 = (FTextFilterExpressionEvaluator *)&DAT_00000010;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&(pTVar5->Item).Object = 1;
    *(undefined4 *)((longlong)&(pTVar5->Item).Object + 4) = 1;
    pTVar5->NextNode =
         (TNode *)&
                  ___7__TIntrusiveReferenceController_VFTextFilterExpressionEvaluator___00_SharedPointerInternals__6B_
    ;
    FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
              ((FTextFilterExpressionEvaluator *)&(pTVar5->Item).SharedReferenceCount,BasicString);
    pFVar7 = (FTextFilterExpressionEvaluator *)&(pTVar5->Item).SharedReferenceCount;
    if ((pFVar7 == (FTextFilterExpressionEvaluator *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAutomationTestFramework *)(*pcVar2)();
      return pFVar6;
    }
    LOCK();
    *(int *)&(pTVar5->Item).Object = *(int *)&(pTVar5->Item).Object + 1;
    UNLOCK();
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)pTVar5;
    pTVar8 = pTVar5;
    local_28 = pFVar7;
  }
  if (pTVar1 != (TSharedPtr<FTextFilterExpressionEvaluator,1> *)&local_28) {
    pTVar1->Object = pFVar7;
    local_28 = (FTextFilterExpressionEvaluator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TagFilter).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar8);
  return this;
}

// ~FAutomationTestFramework @ 141816590

void __thiscall FAutomationTestFramework::~FAutomationTestFramework(FAutomationTestFramework *this)

{
  undefined1 *puVar1;
  TMap<FString,FAutomationTestBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>_>
  *this_00;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  ForElementType<FSetElementId> FVar7;
  bool bVar8;
  
  this_00 = &this->AutomationTestClassNameToInstanceMap;
  bVar8 = 1 < *(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x8);
  puVar1 = &(this->AutomationTestClassNameToInstanceMap).field_0xc;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x2c;
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->AutomationTestClassNameToInstanceMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x48 = 1;
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TagFilter).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->OnLeavingTestSectionEvent).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OnLeavingTestSectionEvent).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnLeavingTestSectionEvent);
  *(undefined4 *)&(this->OnEnteringTestSectionEvent).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OnEnteringTestSectionEvent).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnEnteringTestSectionEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->TestScreenshotAndTraceCapturedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestScreenshotCapturedDelegate);
  pFVar4 = (this->CurrentTestFullPath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Parameters).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->NetworkCommands).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->NetworkCommands).Tail = pTVar5->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar5->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar5,0x18);
    pTVar5 = (this->NetworkCommands).Tail;
  }
  pTVar6 = (this->LatentCommands).Tail;
  while (pTVar6 != (TNode *)0x0) {
    (this->LatentCommands).Tail = pTVar6->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar6->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar6,0x18);
    pTVar6 = (this->LatentCommands).Tail;
  }
  *(undefined4 *)&(this->ImmutableTags).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ImmutableTags).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImmutableTags);
  *(undefined4 *)&(this->TestFullNameToTagDataMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TestFullNameToTagDataMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TestFullNameToTagDataMap);
  (this->AllExistingTags).HashSize = 0;
  FVar7 = (this->AllExistingTags).Hash.SecondaryData;
  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllExistingTags).Elements);
  *(undefined4 *)&(this->AutomationTestClassNameToInstanceMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AutomationTestClassNameToInstanceMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  (this->AutomationTestMessageFilter)._padding_ =
       (longlong)&___7FAutomationTestMessageFilter_FAutomationTestFramework__6B_;
  LOCK();
  (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)0x0;
  UNLOCK();
  LOCK();
  (this->AutomationTestMessageFilter).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->AutomationTestMessageFilter).ActionCS);
  FFeedbackContext::~FFeedbackContext((FFeedbackContext *)&this->AutomationTestMessageFilter);
  (this->AutomationTestOutputDevice)._padding_ =
       (longlong)&___7FAutomationTestOutputDevice_FAutomationTestFramework__6B_;
  LOCK();
  (this->AutomationTestOutputDevice).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  FOutputDevice::~FOutputDevice((FOutputDevice *)&this->AutomationTestOutputDevice);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAfterAllTestsEvent).field_0x8,
             *(int *)&(this->OnAfterAllTestsEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnAfterAllTestsEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAfterAllTestsEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBeforeAllTestsEvent).field_0x8,
             *(int *)&(this->OnBeforeAllTestsEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnBeforeAllTestsEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeforeAllTestsEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnScreenshotTakenAndCompared).field_0x8,
             *(int *)&(this->OnScreenshotTakenAndCompared).field_0x10);
  pvVar3 = *(void **)&(this->OnScreenshotTakenAndCompared).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScreenshotTakenAndCompared);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPerformanceDataRetrieved).field_0x8,
             *(int *)&(this->OnPerformanceDataRetrieved).field_0x10);
  pvVar3 = *(void **)&(this->OnPerformanceDataRetrieved).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerformanceDataRetrieved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTestDataRetrieved).field_0x8,*(int *)&(this->OnTestDataRetrieved).field_0x10
            );
  pvVar3 = *(void **)&(this->OnTestDataRetrieved).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestDataRetrieved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnScreenshotComparisonReport).field_0x8,
             *(int *)&(this->OnScreenshotComparisonReport).field_0x10);
  pvVar3 = *(void **)&(this->OnScreenshotComparisonReport).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScreenshotComparisonReport);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnScreenshotCompared).field_0x8,
             *(int *)&(this->OnScreenshotCompared).field_0x10);
  pvVar3 = *(void **)&(this->OnScreenshotCompared).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnScreenshotCompared);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTestEndEvent).field_0x8,*(int *)&(this->OnTestEndEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnTestEndEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestEndEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTestStartEvent).field_0x8,*(int *)&(this->OnTestStartEvent).field_0x10);
  pvVar3 = *(void **)&(this->OnTestStartEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTestStartEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostTestingEvent).field_0x8,*(int *)&(this->PostTestingEvent).field_0x10);
  pvVar3 = *(void **)&(this->PostTestingEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostTestingEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PreTestingEvent).field_0x8,*(int *)&(this->PreTestingEvent).field_0x10);
  pvVar3 = *(void **)&(this->PreTestingEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// AddAnalyticsItemToCurrentTest @ 141818150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::AddAnalyticsItemToCurrentTest
          (FAutomationTestFramework *this,FString *param_1)

{
  if (this->CurrentTest != (FAutomationTestBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014181815f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentTest->_padding_ + 0x60))();
    return;
  }
  if (2 < (byte)LogAutomationTest._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
    return;
  }
  return;
}

// CanRunTestInEnvironment @ 14181da20

bool __thiscall
FAutomationTestFramework::CanRunTestInEnvironment
          (FAutomationTestFramework *this,FString *param_1,FString *param_2,bool *param_3)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  int iVar9;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::FString(&local_28,L" ");
  bVar2 = ::FString::Split(param_1,&local_28,&local_68,&local_38,CaseSensitive,FromStart);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) || (&local_68 == param_1)) {
LAB_14181db08:
    iVar5 = local_68.Data.ArrayNum;
  }
  else {
    iVar5 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_68.Data.ArrayNum = iVar5;
    if ((iVar5 != 0) || (local_68.Data.ArrayMax != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar5,local_68.Data.ArrayMax,(ForAnyElementType *)&local_68,iVar5,
                 &local_68.Data.ArrayMax);
      if (iVar5 != 0) {
        memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar5 * 2);
      }
      goto LAB_14181db08;
    }
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    iVar5 = 0;
  }
  pwVar8 = L"";
  iVar9 = 0;
  if (iVar5 != 0) {
    pwVar8 = (wchar_t *)local_68.Data.AllocatorInstance.Data;
    iVar9 = iVar5 + -1;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar8);
  iVar5 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&this->AutomationTestClassNameToInstanceMap,uVar4,&local_68);
  if (iVar5 != -1) {
    iVar5 = local_68.Data.ArrayNum + -1;
    FVar1.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar1.Data);
    iVar5 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                        *)&this->AutomationTestClassNameToInstanceMap,uVar4,&local_68);
    plVar7 = (longlong *)0x0;
    if (iVar5 != -1) {
      plVar7 = (longlong *)
               ((longlong)iVar5 * 0x20 + *(longlong *)&this->AutomationTestClassNameToInstanceMap);
    }
    plVar6 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    plVar6 = (longlong *)*plVar6;
    if (plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar6 + 0xe0))(plVar6,&local_38,param_2,param_3);
      if (cVar3 != '\0') {
        bVar2 = true;
        goto LAB_14181dd26;
      }
      if (param_2 != (FString *)0x0) {
        if ((param_2->Data).ArrayNum < 2) {
          ::FString::operator=(param_2,L"unknown reason");
        }
        ::FString::AppendChars(param_2,L" [code]",7);
        (**(code **)(*plVar6 + 0xb8))(plVar6,&local_28);
        FPaths::MakePlatformFilename(&local_28);
        iVar5 = (**(code **)(*plVar6 + 200))(plVar6);
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = 0;
        if ((1 < local_28.Data.ArrayNum) && (0 < iVar5)) {
          iVar9 = local_28.Data.ArrayNum + -1;
          if (local_28.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          ::FString::AppendChars(&local_58,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar9);
          ::FString::AppendChars(&local_58,L"(",1);
          local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = 0;
          local_48.Data.ArrayMax = 0;
          ::FString::AppendInt(&local_48,iVar5);
          iVar5 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar5);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          ::FString::AppendChars(&local_58,L")",1);
        }
        if (1 < local_58.Data.ArrayNum) {
          ::FString::AppendChars(param_2,L" [",2);
          iVar5 = local_58.Data.ArrayNum + -1;
          if (local_58.Data.ArrayNum == 0) {
            iVar5 = 0;
          }
          ::FString::AppendChars(param_2,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
          ::FString::AppendChars(param_2,L"]",1);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  bVar2 = false;
LAB_14181dd26:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ConcludeAutomationTests @ 14181f620

void __thiscall FAutomationTestFramework::ConcludeAutomationTests(FAutomationTestFramework *this)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *this_00;
  
  if (!GIsAutomationTesting) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x4c2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GIsAutomationTesting = false;
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::RemoveOutputDevice
            (this_00,(FOutputDevice *)&this->AutomationTestOutputDevice);
  GWarn = this->OriginalGWarn;
  LOCK();
  (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)0x0;
  UNLOCK();
  this->OriginalGWarn = (FFeedbackContext *)0x0;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PostTestingEvent);
  return;
}

// ContainsTest @ 14181f6d0

bool __thiscall
FAutomationTestFramework::ContainsTest(FAutomationTestFramework *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&this->AutomationTestClassNameToInstanceMap,uVar2,param_1);
  return iVar3 != -1;
}

// DequeueAllCommands @ 141820460

void __thiscall FAutomationTestFramework::DequeueAllCommands(FAutomationTestFramework *this)

{
  TSharedPtr<IAutomationLatentCommand,1> *pTVar1;
  TSharedPtr<IAutomationNetworkCommand,1> *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  IAutomationLatentCommand *local_48;
  FSharedReferencer<1> FStack_40;
  IAutomationNetworkCommand *local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar3 = ((this->LatentCommands).Tail)->NextNode;
  while (pTVar3 != (TNode *)0x0) {
    local_48 = (IAutomationLatentCommand *)0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar3 = ((this->LatentCommands).Tail)->NextNode;
    if (pTVar3 != (TNode *)0x0) {
      pTVar1 = &pTVar3->Item;
      if ((TSharedPtr<IAutomationLatentCommand,1> *)&local_48 != pTVar1) {
        local_48 = pTVar1->Object;
        pTVar1->Object = (IAutomationLatentCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_40,&(pTVar3->Item).SharedReferenceCount);
      }
      pTVar4 = (this->LatentCommands).Tail;
      (this->LatentCommands).Tail = pTVar3;
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<IAutomationLatentCommand,1> *)&local_28) {
        pTVar1->Object = (IAutomationLatentCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar3->Item).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
      if (pTVar4 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar4->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar4,0x18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
    pTVar3 = ((this->LatentCommands).Tail)->NextNode;
  }
  pTVar5 = ((this->NetworkCommands).Tail)->NextNode;
  while (pTVar5 != (TNode *)0x0) {
    local_38 = (IAutomationNetworkCommand *)0x0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = ((this->NetworkCommands).Tail)->NextNode;
    if (pTVar5 != (TNode *)0x0) {
      pTVar2 = &pTVar5->Item;
      if ((TSharedPtr<IAutomationNetworkCommand,1> *)&local_38 != pTVar2) {
        local_38 = pTVar2->Object;
        pTVar2->Object = (IAutomationNetworkCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_30,&(pTVar5->Item).SharedReferenceCount);
      }
      pTVar6 = (this->NetworkCommands).Tail;
      (this->NetworkCommands).Tail = pTVar5;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<IAutomationNetworkCommand,1> *)&local_18) {
        pTVar2->Object = (IAutomationNetworkCommand *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar5->Item).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
      if (pTVar6 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar6->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar6,0x18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    pTVar5 = ((this->NetworkCommands).Tail)->NextNode;
  }
  return;
}

// DumpAutomationTestExecutionInfo @ 141820e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::DumpAutomationTestExecutionInfo
          (FAutomationTestFramework *this,
          TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
          *param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ITextData IVar6;
  FText *pFVar7;
  FString *pFVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  uint *puVar12;
  char *pcVar13;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  undefined1 local_88 [12];
  uint uStack_7c;
  undefined1 *local_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 local_68;
  TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
  *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_88,L"UnrealEd",L"AutomationTest_Success",L"Success");
  pFVar8 = FText::ToString(pFVar7);
  uVar9 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = (pFVar8->Data).ArrayNum;
  lVar11 = (longlong)local_90;
  pFVar5 = (pFVar8->Data).AllocatorInstance.Data;
  if (local_90 == 0) {
    local_8c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90,0,&local_98,local_90,&local_8c);
    memcpy(local_98.Data,pFVar5,lVar11 * 2);
  }
  if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_88,L"UnrealEd",L"AutomationTest_Fail",L"Fail");
  pFVar8 = FText::ToString(pFVar7);
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = (pFVar8->Data).ArrayNum;
  lVar11 = (longlong)local_a0;
  pFVar5 = (pFVar8->Data).AllocatorInstance.Data;
  if (local_a0 == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
    memcpy(local_a8.Data,pFVar5,lVar11 * 2);
  }
  if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
  }
  iVar3 = *(int *)&param_1->field_0x28;
  local_78 = &param_1->field_0x10;
  uStack_54 = 1;
  local_40 = 0;
  iStack_44 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)local_78;
    }
    uVar4 = *puVar12;
    local_40 = 0;
    uVar9 = 0;
    while (uVar4 == 0) {
      lVar11 = (longlong)(int)uVar9;
      local_40 = local_40 + 0x20;
      uVar9 = uVar9 + 1;
      iStack_44 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar9) goto LAB_141820fe8;
      uVar4 = puVar12[lVar11 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_44 = (local_40 - 1) + (int)lVar11;
    if (iVar3 < iStack_44) {
      iStack_44 = iVar3;
    }
  }
LAB_141820fe8:
  uStack_48 = 0xffffffff;
  uStack_3c = iStack_6c;
  uStack_7c = uStack_54;
  local_88._8_4_ = uVar9;
  uStack_70 = 0xffffffff;
  local_68 = CONCAT44(iStack_6c,local_40);
  local_88._0_8_ = param_1;
  local_60 = param_1;
  uStack_58 = uVar9;
  local_50 = local_78;
  iStack_6c = iStack_44;
  if (iStack_44 < iVar3) {
    do {
      lVar11 = (longlong)iStack_6c * 0x80;
      IVar6 = *(ITextData *)local_88._0_8_;
      if (4 < (byte)LogAutomationTest._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
      }
      iVar3 = *(int *)(lVar11 + 0x58 + (longlong)IVar6);
      pcVar10 = *(char **)(lVar11 + 0x50 + (longlong)IVar6);
      pcVar13 = pcVar10 + (longlong)iVar3 * 0x58;
      while( true ) {
        if (*(int *)(lVar11 + 0x58 + (longlong)IVar6) != iVar3) {
          `TCheckedPointerIterator<FAutomationExecutionEntry_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pcVar10 == pcVar13) break;
        cVar2 = *pcVar10;
        if (cVar2 == '\0') {
          if (3 < (byte)LogAutomationTest._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
          }
LAB_1418211a2:
          pcVar10 = pcVar10 + 0x58;
        }
        else if (cVar2 == '\x01') {
          if ((byte)LogAutomationTest._0_1_ < 3) goto LAB_1418211a2;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
          pcVar10 = pcVar10 + 0x58;
        }
        else {
          if ((cVar2 != '\x02') || ((byte)LogAutomationTest._0_1_ < 2)) goto LAB_1418211a2;
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
          pcVar10 = pcVar10 + 0x58;
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// EnqueueLatentCommand @ 141822010

void __thiscall
FAutomationTestFramework::EnqueueLatentCommand
          (FAutomationTestFramework *this,TSharedPtr<IAutomationLatentCommand,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  TNode *pTVar5;
  
  if ((this->RequestedTestFilter &
      (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      SmokeFilter) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(RequestedTestFilter & EAutomationTestFlags_FilterMask) != EAutomationTestFlags::SmokeFilter"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x1da,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (GIsAutomationTesting == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x1dd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    (pTVar5->Item).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->LatentCommands).Head;
    (this->LatentCommands).Head = pTVar5;
    pTVar2->NextNode = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// EnqueueNetworkCommand @ 1418220f0

void __thiscall
FAutomationTestFramework::EnqueueNetworkCommand
          (FAutomationTestFramework *this,TSharedPtr<IAutomationNetworkCommand,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TNode *pTVar2;
  code *pcVar3;
  bool bVar4;
  TNode *pTVar5;
  
  if ((this->RequestedTestFilter &
      (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) ==
      SmokeFilter) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(RequestedTestFilter & EAutomationTestFlags_FilterMask) != EAutomationTestFlags::SmokeFilter"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x1e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (GIsAutomationTesting == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x1e8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    (pTVar5->Item).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->NetworkCommands).Head;
    (this->NetworkCommands).Head = pTVar5;
    pTVar2->NextNode = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ExecuteLatentCommands @ 141822de0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationTestFramework::ExecuteLatentCommands(FAutomationTestFramework *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  TSharedPtr<IAutomationLatentCommand,1> *pTVar9;
  IAutomationLatentCommand *pIVar10;
  IAutomationLatentCommand *pIVar11;
  LARGE_INTEGER local_res8;
  undefined8 local_48;
  FSharedReferencer<1> aFStack_40 [5];
  
  if ((!GIsAutomationTesting) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GIsAutomationTesting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                         ,0x2a4,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  dVar5 = __real_4170000000000000;
  pTVar1 = ((this->LatentCommands).Tail)->NextNode;
  if (((this->LatentCommands).Tail)->NextNode != (TNode *)0x0) {
    do {
      pIVar10 = (IAutomationLatentCommand *)0x0;
      pIVar11 = (IAutomationLatentCommand *)0x0;
      if (((this->LatentCommands).Tail)->NextNode == (TNode *)0x0) {
LAB_141822e9c:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      else {
        pTVar2 = ((this->LatentCommands).Tail)->NextNode;
        pIVar11 = (IAutomationLatentCommand *)
                  (pTVar2->Item).SharedReferenceCount.ReferenceController;
        pIVar10 = (pTVar2->Item).Object;
        if (pIVar11 != (IAutomationLatentCommand *)0x0) {
          LOCK();
          *(atomic<int> *)&pIVar11->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pIVar11->_padding_ + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (pIVar10 == (IAutomationLatentCommand *)0x0) goto LAB_141822e9c;
      }
      if (pIVar10->StartTime == 0.0) {
        QueryPerformanceCounter(&local_res8);
        pIVar10->StartTime =
             (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
      }
      cVar8 = (**(code **)(pIVar10->_padding_ + 8))(pIVar10);
      if (cVar8 == '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pIVar11);
        break;
      }
      if (((((this->LatentCommands).Tail)->NextNode == (TNode *)0x0) ||
          (pTVar9 = &((this->LatentCommands).Tail)->NextNode->Item,
          pTVar9 == (TSharedPtr<IAutomationLatentCommand,1> *)0x0)) || (pIVar10 != pTVar9->Object))
      {
        if (5 < (byte)LogAutomationTest._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
        }
      }
      else {
        pTVar2 = ((this->LatentCommands).Tail)->NextNode;
        if (pTVar2 != (TNode *)0x0) {
          pTVar3 = (this->LatentCommands).Tail;
          (this->LatentCommands).Tail = pTVar2;
          local_48 = 0;
          aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (&pTVar2->Item != (TSharedPtr<IAutomationLatentCommand,1> *)&local_48) {
            (pTVar2->Item).Object = (IAutomationLatentCommand *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(pTVar2->Item).SharedReferenceCount,aFStack_40);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (aFStack_40[0].ReferenceController);
          if (pTVar3 != (TNode *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pTVar3->Item).SharedReferenceCount.ReferenceController);
            ::operator_delete(pTVar3,0x18);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pIVar11);
    } while (((this->LatentCommands).Tail)->NextNode != (TNode *)0x0);
  }
  return pTVar1 == (TNode *)0x0;
}

// ExecuteNetworkCommands @ 141823010

bool __thiscall FAutomationTestFramework::ExecuteNetworkCommands(FAutomationTestFramework *this)

{
  TNode *pTVar1;
  code *pcVar2;
  IAutomationNetworkCommand *pIVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TSharedPtr<IAutomationNetworkCommand,1> local_18;
  
  if (!GIsAutomationTesting) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x2cb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pTVar1 = ((this->NetworkCommands).Tail)->NextNode;
  if (pTVar1 != (TNode *)0x0) {
    local_18.Object = (IAutomationNetworkCommand *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TQueue<TSharedPtr<IAutomationNetworkCommand,1>,1>::Dequeue(&this->NetworkCommands,&local_18);
    pIVar3 = local_18.Object;
    if (local_18.Object == (IAutomationNetworkCommand *)0x0) {
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
    uVar6 = (**(code **)(*(longlong *)pIVar3 + 8))(pIVar3);
    if (uVar6 == this->NetworkRoleIndex) {
      if (pIVar3 == (IAutomationNetworkCommand *)0x0) {
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
      (**(code **)(*(longlong *)pIVar3 + 0x10))(pIVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return pTVar1 == (TNode *)0x0;
}

// Get @ 1418246f0

FAutomationTestFramework * __cdecl FAutomationTestFramework::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAutomationTestFramework(&Framework);
      atexit(`FAutomationTestFramework::Get'::__l2::_dynamic_atexit_destructor_for__Framework__);
      _Init_thread_footer(&::_TSS0);
      return &Framework;
    }
  }
  return &Framework;
}

// GetAllExistingTags @ 1418247c0

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
FAutomationTestFramework::GetAllExistingTags
          (FAutomationTestFramework *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (__return_storage_ptr__,&this->AllExistingTags);
  return __return_storage_ptr__;
}

// GetOnEnteringTestSection @ 141826680

TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
FAutomationTestFramework::GetOnEnteringTestSection(FAutomationTestFramework *this,FString *param_1)

{
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *pTVar4;
  wchar_t *pwVar5;
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_res10;
  
  iVar1 = (param_1->Data).ArrayNum;
  this_00 = &this->OnEnteringTestSectionEvent;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,param_1);
  if (iVar3 == -1) {
    local_res10 = param_1;
    TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_res10);
  }
  pTVar4 = TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
           ::Find((TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
                   *)this_00,param_1);
  return pTVar4;
}

// GetOnLeavingTestSection @ 141826700

TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
FAutomationTestFramework::GetOnLeavingTestSection(FAutomationTestFramework *this,FString *param_1)

{
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *pTVar4;
  wchar_t *pwVar5;
  TKeyInitializer<FString_const_&> local_res8;
  FString *local_res10;
  
  iVar1 = (param_1->Data).ArrayNum;
  this_00 = &this->OnLeavingTestSectionEvent;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                      *)this_00,uVar2,param_1);
  if (iVar3 == -1) {
    local_res10 = param_1;
    TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_res10);
  }
  pTVar4 = TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
           ::Find((TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
                   *)this_00,param_1);
  return pTVar4;
}

// GetPossibleRestrictedPaths @ 1418269f0

void __thiscall
FAutomationTestFramework::GetPossibleRestrictedPaths
          (FAutomationTestFramework *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  IFileManager *pIVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res18 [16];
  FString local_58;
  FString local_48;
  
  uVar1 = param_2->ArrayNum;
  uVar8 = (ulonglong)(int)uVar1;
  pFVar15 = (param_2->AllocatorInstance).Data;
  pFVar12 = pFVar15 + uVar8 * 0x10;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  do {
    if (param_2->ArrayNum != (int)uVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar15 == pFVar12) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return;
    }
    uVar2 = (param_1->Data).ArrayNum;
    iVar7 = *(int *)(pFVar15 + 8) + -1;
    if (*(int *)(pFVar15 + 8) == 0) {
      iVar7 = 0;
    }
    if ((uVar2 == 0) && (iVar7 != -1)) {
      iVar6 = iVar7 + 2;
      pFVar13 = (param_1->Data).AllocatorInstance.Data;
LAB_141826a9b:
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar6 != 0) goto LAB_141826aa8;
      local_48.Data.ArrayMax = 0;
      local_48.Data.ArrayNum = uVar2;
    }
    else {
      iVar6 = iVar7 + 1;
      pFVar13 = (param_1->Data).AllocatorInstance.Data;
      if (uVar2 == 0) goto LAB_141826a9b;
LAB_141826aa8:
      local_48.Data.ArrayNum = uVar2;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar10 = uVar2 + iVar6;
      if ((int)uVar10 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar10,0,(ForAnyElementType *)&local_48,uVar2,&local_48.Data.ArrayMax);
      if (uVar2 != 0) {
        memcpy(local_48.Data.AllocatorInstance.Data,pFVar13,(longlong)(int)uVar2 * 2);
      }
    }
    ::FString::PathAppend(&local_48,*(wchar_t **)pFVar15,iVar7);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pIVar9 = IFileManager::Get();
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
    }
    cVar4 = (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9,FVar11.Data);
    if (cVar4 != '\0') {
      pFVar13 = (param_3->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar13 + (longlong)param_3->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = param_3->ArrayNum;
      if (iVar7 == param_3->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      FVar11.Data = local_58.Data.AllocatorInstance.Data;
      pFVar13 = (param_3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      param_3->ArrayNum = iVar7 + 1;
      *(FScriptContainerElement **)&pFVar13->field_0x0 = (FScriptContainerElement *)0x0;
      lVar14 = (longlong)local_58.Data.ArrayNum;
      *(int *)&pFVar13[8].field_0x0 = local_58.Data.ArrayNum;
      if (local_58.Data.ArrayNum == 0) {
        *(int *)(pFVar13 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)pFVar13,local_58.Data.ArrayNum,
                   (int *)(pFVar13 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar13->field_0x0,FVar11.Data,lVar14 * 2);
      }
      GetPossibleRestrictedPaths(this,&local_58,param_2,param_3);
    }
    pFVar15 = pFVar15 + 0x10;
    uVar8 = (ulonglong)uVar1;
  } while( true );
}

// GetTagsForAutomationTest @ 141827740

FString * __thiscall
FAutomationTestFramework::GetTagsForAutomationTest
          (FAutomationTestFramework *this,FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->TestFullNameToTagDataMap,param_1);
  if (pFVar1 != (FString *)0x0) {
    ::FString::FString(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTagsForAutomationTestAsArray @ 141827790

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationTestFramework::GetTagsForAutomationTestAsArray
          (FAutomationTestFramework *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->TestFullNameToTagDataMap,param_1);
  if (pFVar1 != (FString *)0x0) {
    pFVar1 = ::FString::Replace(pFVar1,&local_18,L"]",L"[",IgnoreCase);
    ::FString::ParseIntoArray(pFVar1,__return_storage_ptr__,L"[",true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetTestFullNamesMatchingTagPattern @ 141827810

void __thiscall
FAutomationTestFramework::GetTestFullNamesMatchingTagPattern
          (FAutomationTestFramework *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  FTextFilterExpressionEvaluator *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FString *pFVar8;
  ForAnyElementType _Src_00;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  longlong lVar12;
  uint *puVar13;
  FLLMScope local_res8 [2];
  int local_res10;
  FString *local_res18;
  FMemScope local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  ITextFilterExpressionContext local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  FText local_58;
  
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name897,L"AutomationTest/Framework");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name897,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name897,true);
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  pFVar8 = local_res18;
  iStack_6c = 0;
  local_b0 = &this->TestFullNameToTagDataMap;
  iStack_80 = 0;
  iVar10 = *(int *)&(this->TestFullNameToTagDataMap).field_0x28;
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->TestFullNameToTagDataMap).field_0x10;
  uStack_7c = 1;
  local_68 = iStack_80;
  if (iVar10 != 0) {
    puVar13 = *(uint **)&(this->TestFullNameToTagDataMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_a8.Array;
    }
    uVar4 = *puVar13;
    local_68 = iStack_6c;
    iStack_80 = iStack_6c;
    while (uVar4 == 0) {
      lVar12 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_141827950;
      uVar4 = puVar13[lVar12 + 1];
    }
    uStack_7c = -uVar4 & uVar4;
    uVar3 = (ulonglong)uStack_7c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res10 = (int)lVar12;
    iStack_6c = local_68 + -1 + local_res10;
    if (iVar10 < iStack_6c) {
      iStack_6c = iVar10;
    }
  }
LAB_141827950:
  uStack_70 = 0xffffffff;
  TStack_a8._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._28_4_ = iStack_6c;
  TStack_a8.BaseBitIndex = local_68;
  local_88 = local_b0;
  local_78 = (undefined1 *)TStack_a8.Array;
  iStack_64 = iStack_6c;
  TStack_a8.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar10) {
    do {
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = *(int *)(*(longlong *)local_b0 + 0x18 + (longlong)TStack_a8.CurrentBitIndex * 0x28)
      ;
      lVar12 = (longlong)local_d0;
      _Src = *(void **)(*(longlong *)local_b0 + 0x10 + (longlong)TStack_a8.CurrentBitIndex * 0x28);
      if (local_d0 == 0) {
        local_cc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
        memcpy(local_d8.Data,_Src,lVar12 * 2);
      }
      if ((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TagFilter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                           ,0x37a,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (this->TagFilter).Object;
      pFVar11 = FText::FromString(&local_58,pFVar8);
      FTextFilterExpressionEvaluator::SetFilterText(pFVar5,pFVar11);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      _Src_00.Data = local_d8.Data;
      lVar12 = (longlong)local_d0;
      pFVar5 = (this->TagFilter).Object;
      local_c8 = (ITextFilterExpressionContext)&___7FBasicStringFilterExpressionContext__6B_;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = local_d0;
      if (local_d0 == 0) {
        local_b4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0,0,&local_c0,local_d0,&local_b4);
        memcpy(local_c0.Data,_Src_00.Data,lVar12 * 2);
      }
      bVar9 = FTextFilterExpressionEvaluator::TestTextFilter(pFVar5,&local_c8);
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      local_c8 = (ITextFilterExpressionContext)&___7ITextFilterExpressionContext__6B_;
      if (bVar9) {
        pFVar2 = (FScriptContainerElement *)
                 (*(longlong *)local_b0 + (longlong)TStack_a8.CurrentBitIndex * 0x28);
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                           (FString *)pFVar2);
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetUserAutomationDirectory @ 141827f60

FString * __thiscall
FAutomationTestFramework::GetUserAutomationDirectory
          (FAutomationTestFramework *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Unreal Automation");
  pwVar1 = FWindowsPlatformProcess::UserDir();
  pFVar2 = ::FString::FString(&local_18,pwVar1);
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValidTestNames @ 141827fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::GetValidTestNames
          (FAutomationTestFramework *this,
          TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FAutomationTestBase *this_00;
  FScriptContainerElement *_Src;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  int iVar7;
  bool bVar8;
  EAutomationTestFlags EVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  EAutomationTestFlags EVar13;
  EAutomationTestFlags EVar14;
  FLLMScope local_res10 [2];
  int local_res18;
  LARGE_INTEGER local_res20;
  TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  LARGE_INTEGER local_e8;
  FMemScope local_e0;
  TMap<FString,FAutomationTestBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  TMap<FString,FAutomationTestBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> aTStack_a0 [3];
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name797,L"AutomationTest/Framework");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name797,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,&LLMScope_Name797,true);
  DestructItems<FAutomationTestInfo,int>
            ((FAutomationTestInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  EVar13 = RequiresUser|NonNullRHI;
  EVar14 = CommandletContext|ServerContext|ClientContext;
  if (PRIVATE_GIsRunningCommandlet == false) {
    EVar14 = ServerContext|ClientContext;
  }
  if (FCommandLine::bIsInitialized == false) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar8 = FParse::Param(FCommandLine::CmdLine,L"nullrhi");
  if ((bVar8) || (PRIVATE_GIsRunningCommandlet != false)) {
    EVar13 = RequiresUser;
  }
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (FCommandLine::bIsInitialized == false) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    }
    bIsUnattended = FParse::Param(FCommandLine::CmdLine,L"UNATTENDED");
    _Init_thread_footer(&::_TSS0);
  }
  dVar6 = __real_4024000000000000;
  if ((bIsUnattended != false) || (GIsAutomationTesting != false)) {
    EVar13 = EVar13 & ~RequiresUser;
  }
  local_d8 = &this->AutomationTestClassNameToInstanceMap;
  iStack_d0 = 0;
  iVar10 = *(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x28;
  local_c8 = &(this->AutomationTestClassNameToInstanceMap).field_0x10;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar10 != 0) {
    puVar12 = *(uint **)&(this->AutomationTestClassNameToInstanceMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_c8;
    }
    uVar2 = *puVar12;
    while (uVar2 == 0) {
      lVar11 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14182818d;
      uVar2 = puVar12[lVar11 + 1];
    }
    uStack_cc = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_bc = local_res18 + -1 + local_b8;
    if (iVar10 < iStack_bc) {
      iStack_bc = iVar10;
    }
  }
LAB_14182818d:
  uStack_c0 = 0xffffffff;
  aTStack_a0[0]._padding_ = CONCAT44(uStack_cc,iStack_d0);
  aTStack_a0[0].UnvisitedBitMask = 0xffffffff;
  aTStack_a0[0]._28_4_ = iStack_bc;
  aTStack_a0[0].BaseBitIndex = local_b8;
  iStack_b4 = iStack_bc;
  local_a8 = local_d8;
  aTStack_a0[0].Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  aTStack_a0[0].CurrentBitIndex = iStack_bc;
  if (iStack_bc < iVar10) {
    do {
      this_00 = *(FAutomationTestBase **)
                 ((longlong)aTStack_a0[0].CurrentBitIndex * 0x20 + 0x10 + *(longlong *)local_a8);
      if ((this_00 == (FAutomationTestBase *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurTest",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                             ,0x352,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar9 = (**(code **)(this_00->_padding_ + 8))(this_00);
      if (((EVar9 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext)) ==
           None) ||
         ((EVar9 & (ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext) &
          EVar14) != None)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      if (((EVar9 & (RequiresUser|NonNullRHI)) == None) ||
         ((EVar13 & EVar9 & (RequiresUser|NonNullRHI)) != None)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((((~(byte)(EVar9 >> 0x10) & 1) != 0) && (bVar8)) && (bVar5)) &&
         ((this->RequestedTestFilter & EVar9) != None)) {
        QueryPerformanceCounter(&local_res20);
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
        FAutomationTestBase::GenerateTestNames(this_00,&local_108);
        QueryPerformanceCounter(&local_e8);
        if ((dVar6 < (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4) &&
           (2 < (byte)LogAutomationTest._0_1_)) {
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_f0 = (this_00->TestName).Data.ArrayNum;
          lVar11 = (longlong)local_f0;
          _Src = (this_00->TestName).Data.AllocatorInstance.Data;
          if (local_f0 == 0) {
            local_ec = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_f0,0,&local_f8,local_f0,&local_ec);
            memcpy(local_f8.Data,_Src,lVar11 * 2);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data);
          }
        }
        if ((param_1 == &local_108) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_108.ArrayNum;
        iVar10 = 0;
        if (local_108.ArrayNum != 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x98,8,local_108.ArrayNum,&param_1->AllocatorInstance,
                              &param_1->ArrayNum,&param_1->ArrayMax);
          ConstructItems<FAutomationTestInfo,FAutomationTestInfo,int>
                    ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x98,
                     (FAutomationTestInfo *)local_108.AllocatorInstance.Data,iVar7);
          iVar10 = local_108.ArrayNum;
        }
        DestructItems<FAutomationTestInfo,int>
                  ((FAutomationTestInfo *)local_108.AllocatorInstance.Data,iVar10);
        if ((FAutomationTestInfo *)local_108.AllocatorInstance.Data != (FAutomationTestInfo *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
      }
      aTStack_a0[0].UnvisitedBitMask =
           aTStack_a0[0].UnvisitedBitMask & ~aTStack_a0[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(aTStack_a0);
    } while (aTStack_a0[0].CurrentBitIndex < (aTStack_a0[0].Array)->NumBits);
  }
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// InternalStartTest @ 141829290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::InternalStartTest
          (FAutomationTestFramework *this,FString *param_1,FString *param_2)

{
  FString *this_00;
  FScriptContainerElement *_Src;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  FString *pFVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  LARGE_INTEGER local_res8;
  FString local_98;
  FString local_88;
  FString local_78;
  void *local_68 [2];
  void *local_58 [2];
  FString local_48 [2];
  
  this_00 = &this->Parameters;
  ::FString::Empty(this_00);
  ::FString::Empty(&this->CurrentTestFullPath);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  ::FString::FString(&local_78,L" ");
  bVar3 = ::FString::Split(param_1,&local_78,&local_98,this_00,CaseSensitive,FromStart);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((!bVar3) && (&local_98 != param_1)) {
    iVar6 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_98.Data.ArrayNum = iVar6;
    if ((iVar6 == 0) && (local_98.Data.ArrayMax == 0)) {
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      iVar6 = 0;
      goto LAB_141829390;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar6,local_98.Data.ArrayMax,(ForAnyElementType *)&local_98,iVar6,
               &local_98.Data.ArrayMax);
    if (iVar6 != 0) {
      memcpy(local_98.Data.AllocatorInstance.Data,_Src,(longlong)iVar6 * 2);
    }
  }
  iVar6 = local_98.Data.ArrayNum;
LAB_141829390:
  iVar9 = iVar6 + -1;
  FVar11.Data = local_98.Data.AllocatorInstance.Data;
  if (iVar6 == 0) {
    iVar9 = 0;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar11.Data);
  iVar6 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&this->AutomationTestClassNameToInstanceMap,uVar5,&local_98);
  if (iVar6 != -1) {
    iVar6 = local_98.Data.ArrayNum + -1;
    FVar11.Data = local_98.Data.AllocatorInstance.Data;
    if (local_98.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar11.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar11.Data);
    iVar6 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                        *)&this->AutomationTestClassNameToInstanceMap,uVar5,&local_98);
    if (iVar6 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar6 * 0x20 + *(longlong *)&this->AutomationTestClassNameToInstanceMap;
    }
    plVar7 = (longlong *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      plVar7 = (longlong *)0x0;
    }
    pFVar1 = (FAutomationTestBase *)*plVar7;
    this->CurrentTest = pFVar1;
    if ((pFVar1 == (FAutomationTestBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentTest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                           ,0x501,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FAutomationTestExecutionInfo::Clear(&this->CurrentTest->ExecutionInfo);
    LOCK();
    (this->AutomationTestOutputDevice).CurTest = (atomic<FAutomationTestBase_*>)this->CurrentTest;
    UNLOCK();
    LOCK();
    (this->AutomationTestMessageFilter).CurTest = (atomic<FAutomationTestBase_*>)this->CurrentTest;
    UNLOCK();
    QueryPerformanceCounter(&local_res8);
    pFVar1 = this->CurrentTest;
    this->StartTime =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0xf8);
    pFVar8 = ::FString::FString(local_48,this_00);
    (*pcVar2)(pFVar1,pFVar8);
    ::FString::operator=(&this->CurrentTestFullPath,param_2);
    if ((this->RequestedTestFilter &
        (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter)) != None) {
      if ((AutomationTest::bLogTestStateTrace != false) &&
         (4 < (byte)LogAutomationTestStateTrace._0_1_)) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogAutomationTestStateTrace);
      }
      if (4 < (byte)LogAutomationTest._0_1_) {
        (**(code **)(this->CurrentTest->_padding_ + 0x10))(this->CurrentTest,local_68);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
        if (local_68[0] != (void *)0x0) {
          FMemory::Free(local_68[0]);
        }
      }
    }
    TMulticastDelegate<void___cdecl(FAutomationTestBase_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnTestStartEvent,this->CurrentTest);
    (**(code **)(this->CurrentTest->_padding_ + 0x10))(this->CurrentTest,local_58);
    ::FString::PrintfImpl(&local_88,L"AutomationTest %s");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar11.Data = local_88.Data.AllocatorInstance.Data;
    }
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar11.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                 ,0x51d);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
    bVar4 = (bool)(**(code **)(this->CurrentTest->_padding_ + 0xf0))(this->CurrentTest,this_00);
    this->bTestSuccessful = bVar4;
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return;
}

// InternalStopTest @ 1418296b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAutomationTestFramework::InternalStopTest
          (FAutomationTestFramework *this,FAutomationTestExecutionInfo *param_1)

{
  undefined1 *puVar1;
  TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAutomationTelemetryData,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FAutomationExecutionEntry,TSizedDefaultAllocator<32>_> *pTVar6;
  double dVar7;
  int iVar8;
  FAutomationTestBase *pFVar9;
  FAutomationTelemetryData *pFVar10;
  FAutomationExecutionEntry *pFVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  FPlatformRWLock *SRWLock;
  TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
  *this_00;
  double dVar15;
  LARGE_INTEGER local_res8;
  void *local_48 [4];
  
  if ((!GIsAutomationTesting) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GIsAutomationTesting",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                          ,0x554,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  if ((((this->LatentCommands).Tail)->NextNode != (TNode *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("LatentCommands.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                          ,0x555,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  if (((this->bTestSuccessful == false) || (0 < (this->CurrentTest->ExecutionInfo).Errors)) ||
     (bVar13 = FAutomationTestBase::HasMetExpectedMessages(this->CurrentTest,All), !bVar13)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  this->bTestSuccessful = bVar13;
  SRWLock = &this->CurrentTest->ActionCS;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                          ,0x43,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar9 = this->CurrentTest;
  this_00 = &pFVar9->ExpectedMessages;
  bVar13 = 1 < (pFVar9->ExpectedMessages).HashSize;
  if (!bVar13) {
    TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<FAutomationExpectedMessage>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(pFVar9->ExpectedMessages).Elements.field_0x8);
  puVar1 = &(pFVar9->ExpectedMessages).Elements.field_0xc;
  *(undefined4 *)&(pFVar9->ExpectedMessages).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar9->ExpectedMessages).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar9->ExpectedMessages).Elements.field_0x34 = 0;
  iVar8 = *(int *)&(pFVar9->ExpectedMessages).Elements.field_0x2c;
  *(undefined4 *)&(pFVar9->ExpectedMessages).Elements.field_0x28 = 0;
  if ((iVar8 < 0) || (0x80 < iVar8)) {
    *(undefined4 *)&(pFVar9->ExpectedMessages).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(pFVar9->ExpectedMessages).Elements.field_0x10,0);
  }
  if (bVar13) {
    (pFVar9->ExpectedMessages).HashSize = 1;
    TSet<FAutomationExpectedMessage,DefaultKeyFuncs<FAutomationExpectedMessage,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  (this->CurrentTest->ExecutionInfo).bSuccessful = this->bTestSuccessful;
  TMulticastDelegate<void___cdecl(FAutomationTestBase_*),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTestEndEvent,this->CurrentTest);
  QueryPerformanceCounter(&local_res8);
  dVar15 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
  dVar7 = this->StartTime;
  if ((this->RequestedTestFilter &
      (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter)) != None) {
    if (4 < (byte)LogAutomationTest._0_1_) {
      (**(code **)(this->CurrentTest->_padding_ + 0x10))(this->CurrentTest,local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
    }
    if ((AutomationTest::bLogTestStateTrace != false) &&
       (4 < (byte)LogAutomationTestStateTrace._0_1_)) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogAutomationTestStateTrace);
    }
  }
  pFVar9 = this->CurrentTest;
  param_1->bSuccessful = (pFVar9->ExecutionInfo).bSuccessful;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->AnalyticsItems,&(pFVar9->ExecutionInfo).AnalyticsItems);
  pTVar2 = &(pFVar9->ExecutionInfo).TelemetryItems;
  pTVar3 = &param_1->TelemetryItems;
  if (pTVar3 != pTVar2) {
    DestructItems<FAutomationTelemetryData,int>
              ((FAutomationTelemetryData *)(pTVar3->AllocatorInstance).Data,
               (param_1->TelemetryItems).ArrayNum);
    iVar8 = (pFVar9->ExecutionInfo).TelemetryItems.ArrayNum;
    piVar4 = &(param_1->TelemetryItems).ArrayMax;
    pFVar10 = (FAutomationTelemetryData *)(pTVar2->AllocatorInstance).Data;
    (param_1->TelemetryItems).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar8,*piVar4,&pTVar3->AllocatorInstance,iVar8,piVar4);
      ConstructItems<FAutomationTelemetryData,FAutomationTelemetryData,int>
                ((pTVar3->AllocatorInstance).Data,pFVar10,iVar8);
    }
  }
  ::FString::operator=(&param_1->TelemetryStorage,&(pFVar9->ExecutionInfo).TelemetryStorage);
  pTVar5 = &(pFVar9->ExecutionInfo).Entries;
  pTVar6 = &param_1->Entries;
  param_1->Duration = (pFVar9->ExecutionInfo).Duration;
  if (pTVar6 != pTVar5) {
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)(pTVar6->AllocatorInstance).Data,
               (param_1->Entries).ArrayNum);
    iVar8 = (pFVar9->ExecutionInfo).Entries.ArrayNum;
    piVar4 = &(param_1->Entries).ArrayMax;
    pFVar11 = (FAutomationExecutionEntry *)(pTVar5->AllocatorInstance).Data;
    (param_1->Entries).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar8,*piVar4,&pTVar6->AllocatorInstance,iVar8,piVar4);
      ConstructItems<FAutomationExecutionEntry,FAutomationExecutionEntry,int>
                ((pTVar6->AllocatorInstance).Data,pFVar11,iVar8);
    }
  }
  param_1->Errors = (pFVar9->ExecutionInfo).Errors;
  param_1->Warnings = (pFVar9->ExecutionInfo).Warnings;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->ContextStack,&(pFVar9->ExecutionInfo).ContextStack);
  param_1->Duration = (double)(float)(dVar15 - dVar7);
  LOCK();
  (this->AutomationTestOutputDevice).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  LOCK();
  (this->AutomationTestMessageFilter).CurTest = (atomic<FAutomationTestBase_*>)0x0;
  UNLOCK();
  this->CurrentTest = (FAutomationTestBase *)0x0;
  return this->bTestSuccessful;
}

// IsAnyOnEnteringTestSectionBound @ 141829f10

bool __thiscall
FAutomationTestFramework::IsAnyOnEnteringTestSectionBound(FAutomationTestFramework *this)

{
  undefined1 *puVar1;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FReadAccessScope local_b8;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar11 = *(int *)&(this->OnEnteringTestSectionEvent).field_0x34;
  iStack_78 = *(int *)&(this->OnEnteringTestSectionEvent).field_0x8;
  if (iStack_78 != iVar11) {
    iStack_98 = 0;
    puVar1 = &(this->OnEnteringTestSectionEvent).field_0x10;
    iVar4 = *(int *)&(this->OnEnteringTestSectionEvent).field_0x28;
    pTVar2 = &this->OnEnteringTestSectionEvent;
    uStack_94 = 1;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar4 != 0) {
      puVar17 = *(uint **)&(this->OnEnteringTestSectionEvent).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_141829fcf;
        uVar14 = puVar17[lVar10 + 1];
      }
      uStack_94 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_94 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iStack_84 = local_80 + -1 + local_res18;
      if (iVar4 < iStack_84) {
        iStack_84 = iVar4;
      }
    }
LAB_141829fcf:
    uVar14 = *(uint *)&(this->OnEnteringTestSectionEvent).field_0x28;
    iStack_78 = iStack_78 - iVar11;
    uStack_88 = 0xffffffff;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    iVar11 = (int)uVar14 >> 5;
    local_a0 = pTVar2;
    local_90 = puVar1;
    iStack_7c = iStack_84;
    local_70 = pTVar2;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar5 = *(uint *)&(this->OnEnteringTestSectionEvent).field_0x28;
    if (uVar14 != uVar5) {
      puVar16 = *(undefined1 **)&(this->OnEnteringTestSectionEvent).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14182a0d0;
        uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_14182a0d0:
    while( true ) {
      pTVar7 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_68.CurrentBitIndex == uVar14) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2)
         ) break;
      lVar10 = (longlong)TStack_68.CurrentBitIndex * 0x38 + *(longlong *)pTVar7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x10),&local_b8
                );
      iVar11 = *(int *)(lVar10 + 0x20);
      plVar12 = *(longlong **)(lVar10 + 0x18);
      plVar15 = plVar12 + (longlong)iVar11 * 2;
      while( true ) {
        if (*(int *)(lVar10 + 0x20) != iVar11) {
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (plVar12 == plVar15) break;
        if (((int)plVar12[1] != 0) && (*plVar12 != 0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
          return true;
        }
        plVar12 = plVar12 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b8);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return false;
}

// IsAnyOnLeavingTestSectionBound @ 14182a1a0

bool __thiscall
FAutomationTestFramework::IsAnyOnLeavingTestSectionBound(FAutomationTestFramework *this)

{
  undefined1 *puVar1;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FReadAccessScope local_b8;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar11 = *(int *)&(this->OnLeavingTestSectionEvent).field_0x34;
  iStack_78 = *(int *)&(this->OnLeavingTestSectionEvent).field_0x8;
  if (iStack_78 != iVar11) {
    iStack_98 = 0;
    puVar1 = &(this->OnLeavingTestSectionEvent).field_0x10;
    iVar4 = *(int *)&(this->OnLeavingTestSectionEvent).field_0x28;
    pTVar2 = &this->OnLeavingTestSectionEvent;
    uStack_94 = 1;
    local_80 = 0;
    iStack_84 = 0;
    if (iVar4 != 0) {
      puVar17 = *(uint **)&(this->OnLeavingTestSectionEvent).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar14 = *puVar17;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_98;
        local_80 = local_80 + 0x20;
        iStack_98 = iStack_98 + 1;
        iStack_84 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14182a25f;
        uVar14 = puVar17[lVar10 + 1];
      }
      uStack_94 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_94 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res18 = (int)lVar10;
      iStack_84 = local_80 + -1 + local_res18;
      if (iVar4 < iStack_84) {
        iStack_84 = iVar4;
      }
    }
LAB_14182a25f:
    uVar14 = *(uint *)&(this->OnLeavingTestSectionEvent).field_0x28;
    iStack_78 = iStack_78 - iVar11;
    uStack_88 = 0xffffffff;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
    TStack_68.CurrentBitIndex = iStack_84;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    TStack_68._28_4_ = iStack_84;
    TStack_68.BaseBitIndex = local_80;
    uStack_48 = CONCAT44(uStack_74,iStack_78);
    iVar11 = (int)uVar14 >> 5;
    local_a0 = pTVar2;
    local_90 = puVar1;
    iStack_7c = iStack_84;
    local_70 = pTVar2;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar5 = *(uint *)&(this->OnLeavingTestSectionEvent).field_0x28;
    if (uVar14 != uVar5) {
      puVar16 = *(undefined1 **)&(this->OnLeavingTestSectionEvent).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar11;
        uVar13 = uVar13 + 0x20;
        iVar11 = iVar11 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14182a360;
        uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_14182a360:
    while( true ) {
      pTVar7 = local_70;
      if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_68.CurrentBitIndex == uVar14) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2)
         ) break;
      lVar10 = (longlong)TStack_68.CurrentBitIndex * 0x38 + *(longlong *)pTVar7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar10 + 0x10),&local_b8
                );
      iVar11 = *(int *)(lVar10 + 0x20);
      plVar12 = *(longlong **)(lVar10 + 0x18);
      plVar15 = plVar12 + (longlong)iVar11 * 2;
      while( true ) {
        if (*(int *)(lVar10 + 0x20) != iVar11) {
          `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (plVar12 == plVar15) break;
        if (((int)plVar12[1] != 0) && (*plVar12 != 0)) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
          return true;
        }
        plVar12 = plVar12 + 2;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_b8);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
  }
  return false;
}

// IsTagImmutable @ 14182acb0

bool __thiscall
FAutomationTestFramework::IsTagImmutable
          (FAutomationTestFramework *this,FString *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  pwVar5 = L"";
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&this->ImmutableTags,uVar2,param_1);
  if (iVar3 != -1) {
    this_00 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              ::FindChecked((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                             *)&this->ImmutableTags,param_1);
    iVar1 = (param_2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (this_00,uVar2,param_2);
    if (iVar3 != -1) {
      return true;
    }
  }
  return false;
}

// LoadTestModules @ 14182b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAutomationTestFramework::LoadTestModules(FAutomationTestFramework *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FModuleManager *pFVar4;
  wchar_t *pwVar5;
  uint uVar6;
  longlong lVar7;
  FName local_res8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  if ((this->RequestedTestFilter &
      (NegativeFilter|StressFilter|PerfFilter|ProductFilter|EngineFilter|SmokeFilter)) !=
      SmokeFilter) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    FConfigCacheIni::GetArray
              (GConfig,L"/Script/Engine.AutomationTestSettings",L"EngineTestModules",&local_38,
               &GEngineIni);
    uVar6 = 0;
    if (0 < local_38.ArrayNum) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < local_38.ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(local_38.AllocatorInstance.Data + lVar7 + 8) == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = *(wchar_t **)(local_38.AllocatorInstance.Data + lVar7);
        }
        ::FName::FName(&local_res8,pwVar5);
        if ((local_res8 == (FName)0x0) || (bVar2 = ::FName::Equals(local_res8,L"None"), bVar2)) {
          if (2 < (byte)LogAutomationTest._0_1_) {
            ::FName::ToString(&local_res8,&local_18);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          pFVar4 = FModuleManager::Get();
          bVar2 = FModuleManager::IsModuleLoaded(pFVar4,local_res8);
          if (!bVar2) {
            if (4 < (byte)LogAutomationTest._0_1_) {
              ::FName::ToString(&local_res8,&local_28);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
              if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_28.Data.AllocatorInstance.Data);
              }
            }
            pFVar4 = FModuleManager::Get();
            FModuleManager::LoadModule(pFVar4,local_res8,None);
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < local_38.ArrayNum);
    }
    DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// LoadTestTagMappings @ 14182b2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::LoadTestTagMappings
          (FAutomationTestFramework *this,FString *param_1,bool param_2)

{
  FScriptContainerElement **ppFVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  IFileManager *pIVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement **ppFVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_b0;
  FRegexMatcher local_a0;
  FScriptContainerElement *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FRegexPattern local_48;
  
  pTVar7 = FPaths::GetRestrictedFolderNames();
  FVar15.Data = (FScriptContainerElement *)0x0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = pTVar7->ArrayNum;
  pFVar16 = (pTVar7->AllocatorInstance).Data;
  local_108.ArrayNum = iVar5;
  if (iVar5 == 0) {
    local_108.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&local_108.AllocatorInstance,iVar5,&local_108.ArrayMax);
    ConstructItems<FString,FString,int>(local_108.AllocatorInstance.Data,(FString *)pFVar16,iVar5);
  }
  ::FString::FString((FString *)&local_a0,L"Platforms");
  ::FString::FString((FString *)&local_a0.Implementation,L"Restricted");
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,2,&local_108.AllocatorInstance,&local_108.ArrayNum,&local_108.ArrayMax);
  ConstructItems<FString,FString,int>
            (local_108.AllocatorInstance.Data + (longlong)iVar5 * 0x10,(FString *)&local_a0,2);
  ppFVar13 = &local_80;
  lVar12 = 2;
  do {
    ppFVar1 = ppFVar13 + -2;
    ppFVar13 = ppFVar13 + -2;
    lVar12 = lVar12 + -1;
    if (*ppFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(*ppFVar1);
    }
  } while (lVar12 != 0);
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  if (!param_2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
    local_118.ArrayNum = iVar5 + 1;
    ::FString::FString((FString *)(local_118.AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                       param_1);
  }
  GetPossibleRestrictedPaths(this,param_1,&local_108,&local_118);
  uVar8 = (ulonglong)local_118.ArrayNum;
  local_80 = local_118.AllocatorInstance.Data + uVar8 * 0x10;
  local_res20 = local_118.ArrayNum;
  uVar10 = uVar8;
  FVar14.Data = local_118.AllocatorInstance.Data;
  while( true ) {
    pFVar16 = local_80;
    local_b8 = FVar14.Data;
    if ((int)uVar8 != (int)uVar10) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar14.Data == pFVar16) break;
    local_f8.ArrayNum = *(int *)(FVar14.Data + 8);
    lVar12 = (longlong)local_f8.ArrayNum;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_f8.ArrayNum == 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,8,0,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
    }
    else {
      pvVar2 = *(void **)FVar14.Data;
      uVar6 = local_f8.ArrayNum + 7;
      if ((int)uVar6 < local_f8.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar6,0,&local_f8.AllocatorInstance,local_f8.ArrayNum,&local_f8.ArrayMax);
      memcpy(local_f8.AllocatorInstance.Data,pvVar2,lVar12 * 2);
    }
    ::FString::PathAppend((FString *)&local_f8,L"Config",6);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_b0,&local_f8,7 - (uint)(local_f8.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_b0,L"Tests",5);
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
              (&local_c8,&local_b0,10 - (uint)(local_b0.ArrayNum != 0));
    ::FString::PathAppend((FString *)&local_c8,L"Tags.ini",8);
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
    FVar15.Data = local_c8.AllocatorInstance.Data;
    iVar5 = local_c8.ArrayNum;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    pIVar9 = IFileManager::Get();
    cVar3 = (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9);
    if (cVar3 != '\0') {
      if (4 < (byte)LogAutomationTest._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
      }
      local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.ArrayNum = 0;
      local_d8.ArrayMax = 0;
      FVar11.Data = (FScriptContainerElement *)L"";
      if (iVar5 != 0) {
        FVar11.Data = FVar15.Data;
      }
      bVar4 = FFileHelper::LoadFileToStringArray(&local_d8,(wchar_t *)FVar11.Data);
      if (bVar4) {
        ::FString::FString(&local_58,L"(.*)=(\\[.+\\])+");
        FRegexPattern::FRegexPattern(&local_48,&local_58,CaseInsensitive);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        iVar5 = local_d8.ArrayNum;
        uVar10 = (ulonglong)local_d8.ArrayNum;
        pFVar16 = local_d8.AllocatorInstance.Data + uVar10 * 0x10;
        FVar14.Data = local_d8.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar10 != iVar5) {
            `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (FVar14.Data == pFVar16) break;
          local_e8.Data.ArrayNum = *(int *)(FVar14.Data + 8);
          lVar12 = (longlong)local_e8.Data.ArrayNum;
          local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pvVar2 = *(void **)FVar14.Data;
          if (local_e8.Data.ArrayNum == 0) {
            local_e8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,
                       local_e8.Data.ArrayNum,&local_e8.Data.ArrayMax);
            memcpy(local_e8.Data.AllocatorInstance.Data,pvVar2,lVar12 * 2);
          }
          bVar4 = ::FString::StartsWith(&local_e8,L";",1,IgnoreCase);
          if (!bVar4) {
            FRegexMatcher::FRegexMatcher(&local_a0,&local_48,&local_e8);
            bVar4 = FRegexMatcher::FindNext(&local_a0);
            if (bVar4) {
              FRegexMatcher::GetCaptureGroup(&local_a0,&local_68,1);
              FRegexMatcher::GetCaptureGroup(&local_a0,&local_78,2);
              if ((1 < local_68.Data.ArrayNum) && (1 < local_78.Data.ArrayNum)) {
                RegisterAutomationTestTags(this,&local_68,&local_78,false);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0.Implementation.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a0.Pattern.Implementation.SharedReferenceCount.ReferenceController);
          }
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          uVar10 = local_d8._8_8_ & 0xffffffff;
          FVar14.Data = FVar14.Data + 0x10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.Implementation.SharedReferenceCount.ReferenceController);
        FVar14.Data = local_b8;
      }
      else if (1 < (byte)LogAutomationTest._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
      }
      DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
    }
    uVar8 = local_118._8_8_ & 0xffffffff;
    FVar14.Data = FVar14.Data + 0x10;
    uVar10 = (ulonglong)local_res20;
  }
  DestructItems<FString,int>((FString *)0x0,0);
  if (FVar15.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  return;
}

// LoadTestTagMappings @ 14182b8c0

void __thiscall FAutomationTestFramework::LoadTestTagMappings(FAutomationTestFramework *this)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  if (!bTagMappingFilesLoaded) {
    pFVar1 = FPaths::ProjectDir(&local_18);
    pFVar1 = FPaths::ConvertRelativePathToFull(&local_28,pFVar1);
    LoadTestTagMappings(this,pFVar1,false);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar1 = FPaths::EngineDir(&local_28);
    pFVar1 = FPaths::ConvertRelativePathToFull(&local_18,pFVar1);
    LoadTestTagMappings(this,pFVar1,true);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    bTagMappingFilesLoaded = true;
  }
  return;
}

// NeedLogBPTestMetadata @ 14182cb40

bool __cdecl FAutomationTestFramework::NeedLogBPTestMetadata(void)

{
  return AutomationTest::bLogBPTestMetadata;
}

// NeedPerformStereoTestVariants @ 14182cb50

bool __cdecl FAutomationTestFramework::NeedPerformStereoTestVariants(void)

{
  return AutomationTest::bEnableStereoTestVariants;
}

// NeedSkipStackWalk @ 14182cb60

bool __cdecl FAutomationTestFramework::NeedSkipStackWalk(void)

{
  return AutomationTest::bSkipStackWalk;
}

// NeedUseLightweightStereoTestVariants @ 14182cb70

bool __cdecl FAutomationTestFramework::NeedUseLightweightStereoTestVariants(void)

{
  return AutomationTest::bLightweightStereoTestVariants;
}

// NotifyPerformanceDataRetrieved @ 14182cba0

void __thiscall
FAutomationTestFramework::NotifyPerformanceDataRetrieved
          (FAutomationTestFramework *this,bool param_1,FString *param_2)

{
  TMulticastDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPerformanceDataRetrieved,param_1,param_2);
  return;
}

// NotifyScreenshotComparisonComplete @ 14182cbc0

void __thiscall
FAutomationTestFramework::NotifyScreenshotComparisonComplete
          (FAutomationTestFramework *this,FAutomationScreenshotCompareResults *param_1)

{
  TMulticastDelegate<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnScreenshotCompared,param_1);
  return;
}

// NotifyScreenshotComparisonReport @ 14182cbd0

void __thiscall
FAutomationTestFramework::NotifyScreenshotComparisonReport
          (FAutomationTestFramework *this,FAutomationScreenshotCompareResults *param_1)

{
  TMulticastDelegate<void___cdecl(FAutomationScreenshotCompareResults_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnScreenshotComparisonReport,param_1);
  return;
}

// NotifyScreenshotTakenAndCompared @ 14182cbf0

void __thiscall
FAutomationTestFramework::NotifyScreenshotTakenAndCompared(FAutomationTestFramework *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnScreenshotTakenAndCompared);
  return;
}

// NotifyTestDataRetrieved @ 14182cc10

void __thiscall
FAutomationTestFramework::NotifyTestDataRetrieved
          (FAutomationTestFramework *this,bool param_1,FString *param_2)

{
  TMulticastDelegate<void___cdecl(bool,FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnTestDataRetrieved,param_1,param_2);
  return;
}

// OnScreenshotAndTraceCaptured @ 14182cc30

TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
* __thiscall FAutomationTestFramework::OnScreenshotAndTraceCaptured(FAutomationTestFramework *this)

{
  return &this->TestScreenshotAndTraceCapturedDelegate;
}

// OnScreenshotCaptured @ 14182cc40

TDelegate<void___cdecl(TArray<FColor,TSizedDefaultAllocator<32>_>_const_&,FAutomationScreenshotData_const_&),FDefaultDelegateUserPolicy>
* __thiscall FAutomationTestFramework::OnScreenshotCaptured(FAutomationTestFramework *this)

{
  return &this->TestScreenshotCapturedDelegate;
}

// PrepForAutomationTests @ 14182d140

void __thiscall FAutomationTestFramework::PrepForAutomationTests(FAutomationTestFramework *this)

{
  code *pcVar1;
  bool bVar2;
  FOutputDeviceRedirector *this_00;
  
  if (GIsAutomationTesting) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x4b0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PreTestingEvent);
  this->OriginalGWarn = GWarn;
  LOCK();
  (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)GWarn;
  UNLOCK();
  GWarn = (FFeedbackContext *)&this->AutomationTestMessageFilter;
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::AddOutputDevice
            (this_00,(FOutputDevice *)&this->AutomationTestOutputDevice);
  GIsAutomationTesting = true;
  return;
}

// RegisterAutomationTest @ 14182dc60

bool __thiscall
FAutomationTestFramework::RegisterAutomationTest
          (FAutomationTestFramework *this,FString *param_1,FAutomationTestBase *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  FLLMScope local_res8 [2];
  TPairInitializer<FString_const_&,FAutomationTestBase_*_const_&> local_res10;
  FMemScope local_res20;
  FString *local_28;
  FAutomationTestBase ***local_20;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_res10.Value = (FAutomationTestBase **)param_2;
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&this->AutomationTestClassNameToInstanceMap,uVar2,param_1);
  if (iVar3 == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name363,L"AutomationTest/Framework");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res8,LLMScope_Name363,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,&LLMScope_Name363,true);
    local_20 = &local_res10.Value;
    local_28 = param_1;
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FAutomationTestBase_*_const_&>_>
              ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                *)&this->AutomationTestClassNameToInstanceMap,&local_res10,(bool *)&local_28);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
  }
  return iVar3 == -1;
}

// RegisterAutomationTestTags @ 14182dda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAutomationTestFramework::RegisterAutomationTestTags
          (FAutomationTestFramework *this,FString *param_1,FString *param_2,bool param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  FAutomationTestFramework *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  ForAnyElementType FVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ForElementType<unsigned_int> FVar22;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  ulong64 uVar23;
  undefined1 auStackY_478 [32];
  <lambda_1> local_448 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_440;
  TArray<FString,TSizedDefaultAllocator<32>_> local_430;
  FLLMScope local_420;
  FLLMScope local_41c;
  uint local_418;
  uint uStack_414;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_410;
  undefined4 local_408;
  uint uStack_404;
  uint uStack_400;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  FAutomationTestFramework *local_3d8;
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  TPairInitializer<FString_const_&,FString_&&> local_3c0;
  FString *local_3b0;
  FMemScope local_3a8;
  longlong *local_3a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_398;
  longlong *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  FString *local_338;
  FString *local_330;
  FString *local_328;
  FString *local_320;
  FScriptContainerElement *local_318;
  int iStack_310;
  undefined4 uStack_30c;
  FString *local_308;
  undefined1 *local_300;
  FScriptContainerElement *local_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  TArrayView<FString_const_,int> local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  TArrayView<FString_const_,int> local_2a8;
  TArrayView<FString_const_,int> local_298;
  FString local_288;
  undefined1 local_278 [32];
  ForElementType<unsigned_int> local_258;
  uint local_250;
  int local_24c;
  int local_248;
  int local_244;
  FScriptContainerElement local_240 [8];
  ForAnyElementType local_238;
  uint local_230;
  undefined1 local_228 [32];
  ForElementType<unsigned_int> local_208;
  uint local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  FScriptContainerElement local_1f0 [8];
  ForAnyElementType local_1e8;
  uint local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  void *local_198;
  ulonglong local_190;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_188;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_138;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_e8;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  uVar14 = 0;
  local_430.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_430.ArrayNum = 0;
  local_430.ArrayMax = 0;
  iVar8 = 0;
  local_3d8 = this;
  local_3b0 = param_2;
  if (param_3) {
    iVar9 = (param_1->Data).ArrayNum;
    if (iVar9 == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar8 = iVar9 + -1;
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar15);
    iVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&this->TestFullNameToTagDataMap,uVar7,param_1);
    if (iVar8 == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&LLMScope_Name387,L"AutomationTest/Framework");
        _Init_thread_footer(&::_TSS0);
      }
      FLLMScope::FLLMScope(&local_41c,LLMScope_Name387,false,None,Default,true);
      FMemScope::FMemScope((FMemScope *)&local_3c0.Value,&LLMScope_Name387,true);
      local_328 = param_1;
      local_320 = param_2;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&this->TestFullNameToTagDataMap,
                 (TPairInitializer<FString_const_&,FString_const_&> *)local_3d0,(bool *)&local_328);
      pFVar10 = ::FString::Replace(param_2,&local_2b8,L"]",L"",IgnoreCase);
      ::FString::ParseIntoArray(pFVar10,&local_430,L"[",true);
      if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
      }
      iVar9 = local_430.ArrayNum;
      local_318 = local_430.AllocatorInstance.Data;
      if ((local_430.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iStack_310 = iVar9;
      local_2a8._12_4_ = uStack_30c;
      local_2a8.ArrayNum = iVar9;
      local_2a8.DataPtr = (FString *)local_318;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append
                (&this->AllExistingTags,&local_2a8);
      iVar17 = (param_1->Data).ArrayNum;
      iVar9 = iVar17 + -1;
      if (iVar17 == 0) {
        pwVar15 = L"";
        iVar9 = 0;
      }
      else {
        pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
      iVar9 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                          *)&this->ImmutableTags,uVar7,param_1);
      if (iVar9 == -1) {
        local_300 = local_1d8;
        local_1a0 = 0;
        local_1d8._16_8_ = 0;
        local_1d8._24_8_ = 0;
        local_190 = 0;
        local_1d8._0_8_ = (void *)0x0;
        local_1d8._8_8_ = 0;
        local_1b8 = (void *)0x0;
        local_1b0 = 0;
        local_1ac = 0x80;
        local_1a4 = 0;
        local_198 = (void *)0x0;
        local_308 = param_1;
        local_1a8 = iVar9;
        TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>_>
                  ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                    *)&this->ImmutableTags,
                   (TPairInitializer<FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_&&>
                    *)(local_3d0 + 4),(bool *)&local_308);
        local_190 = local_190 & 0xffffffff00000000;
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_1d8,0);
        if (local_1b8 != (void *)0x0) {
          FMemory::Free(local_1b8);
        }
        if ((void *)local_1d8._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1d8._0_8_);
        }
      }
      pTVar11 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                ::FindChecked((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                               *)&this->ImmutableTags,param_1);
      iStack_2f0 = local_430.ArrayNum;
      local_2f8 = local_430.AllocatorInstance.Data;
      if ((local_430.ArrayNum < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_298._12_4_ = uStack_2ec;
      local_298.ArrayNum = iStack_2f0;
      local_298.DataPtr = (FString *)local_2f8;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append(pTVar11,&local_298);
      FMemScope::~FMemScope((FMemScope *)&local_3c0.Value);
      FLLMScope::~FLLMScope(&local_41c);
    }
    bVar5 = iVar8 == -1;
    goto LAB_14182eb8c;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&LLMScope_Name403,L"AutomationTest/Framework");
    _Init_thread_footer(&::_TSS1);
  }
  FLLMScope::FLLMScope(&local_420,LLMScope_Name403,false,None,Default,true);
  FMemScope::FMemScope(&local_3a8,&LLMScope_Name403,true);
  uVar7 = 1;
  pFVar10 = ::FString::Replace(param_2,&local_288,L"]",L"",IgnoreCase);
  ::FString::ParseIntoArray(pFVar10,&local_430,L"[",true);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  iVar8 = local_430.ArrayNum;
  local_348 = local_430.AllocatorInstance.Data;
  if ((local_430.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  iStack_340 = iVar8;
  local_2e8._12_4_ = uStack_33c;
  local_2e8.ArrayNum = iVar8;
  local_2e8.DataPtr = (FString *)local_348;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append
            (&this->AllExistingTags,&local_2e8);
  FVar16.Data = local_430.AllocatorInstance.Data;
  iVar8 = local_430.ArrayNum;
  uVar23 = (ulong64)local_430.ArrayNum;
  if ((local_430.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  local_208 = (ForElementType<unsigned_int>)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = -1;
  local_1f4 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  if (iVar8 != 0) {
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar23);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_228,iVar8);
    if (3 < (uint)iVar8) {
      uVar20 = (ulonglong)(((uint)iVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((local_1e0 == 0) || ((int)local_1e0 < (int)uVar7)) {
      local_1e0 = uVar7;
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,0,4);
      }
      if (uVar7 != 0) {
        uVar19 = uVar7;
        if (uVar7 < 2) {
          if (local_1e8.Data != (FScriptContainerElement *)0x0) {
            uVar19 = 0;
            goto LAB_14182e2f4;
          }
        }
        else {
LAB_14182e2f4:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_1e8,0,uVar19,4);
        }
        if (0 < (int)uVar7) {
          uVar21 = (ulonglong)uVar7;
          uVar20 = uVar14;
          do {
            FVar13.Data = local_1f0;
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_1e8.Data;
            }
            uVar12 = uVar20 & (longlong)(int)uVar7 - 1U;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(FVar13.Data + uVar12 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (local_1e0 != 0) {
        pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
        local_418 = 0;
        uStack_414 = 1;
        uStack_404 = 0;
        uStack_400 = 0;
        if (local_200 != 0) {
          FVar22 = (ForElementType<unsigned_int>)((longlong)local_228 + 0x10);
          if (local_208 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_208;
          }
          uVar7 = *(uint *)FVar22;
          uVar20 = uVar14;
          while (uVar7 == 0) {
            uStack_400 = (int)uVar20 + 0x20;
            uVar20 = (ulonglong)uStack_400;
            iVar8 = (int)uVar14;
            local_418 = iVar8 + 1;
            uVar14 = (ulonglong)local_418;
            if ((int)((local_200 - 1) + ((int)(local_200 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_418) goto LAB_14182e40d;
            uVar7 = ((uint *)((longlong)FVar22 + 4))[iVar8];
          }
          uStack_414 = -uVar7 & uVar7;
          uVar14 = (ulonglong)uStack_414 * 2 + 1;
          lVar2 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_404 = (uStack_400 - 1) + (int)lVar2;
          uVar14 = (ulonglong)uStack_404;
          if ((int)local_200 < (int)uStack_404) {
LAB_14182e40d:
            uVar14 = (ulonglong)local_200;
            uStack_404 = local_200;
          }
        }
        local_408 = 0xffffffff;
        local_3a0 = (longlong *)local_228;
        local_398._padding_ = CONCAT44(uStack_414,local_418);
        local_398.CurrentBitIndex = uStack_404;
        local_398.UnvisitedBitMask = 0xffffffff;
        local_398._28_4_ = uStack_3fc;
        local_398.BaseBitIndex = uStack_400;
        local_398.Array = pTStack_410;
        if ((int)uVar14 < (int)local_200) {
          do {
            iVar17 = (int)uVar14;
            puVar1 = (undefined8 *)(*local_3a0 + (longlong)iVar17 * 0x18);
            iVar9 = *(int *)(*local_3a0 + 8 + (longlong)iVar17 * 0x18);
            iVar8 = iVar9 + -1;
            if (iVar9 == 0) {
              pwVar15 = L"";
              iVar8 = 0;
            }
            else {
              pwVar15 = (wchar_t *)*puVar1;
            }
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar15);
            uVar7 = local_1e0 - 1 & uVar7;
            *(uint *)((longlong)puVar1 + 0x14) = uVar7;
            FVar13.Data = local_1f0;
            if (local_1e8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_1e8.Data;
            }
            uVar14 = (longlong)(int)local_1e0 - 1U & (longlong)(int)uVar7;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar13.Data + uVar14 * 4);
            *(int *)(FVar13.Data + uVar14 * 4) = iVar17;
            local_398.UnvisitedBitMask = local_398.UnvisitedBitMask & ~local_398._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_398);
            uVar14 = (ulonglong)(uint)local_398.CurrentBitIndex;
            this = local_3d8;
          } while (local_398.CurrentBitIndex < (local_398.Array)->NumBits);
        }
      }
    }
  }
  uVar14 = 0;
  pFVar18 = FVar16.Data + uVar23 * 0x10;
  for (; FVar16.Data != pFVar18; FVar16.Data = FVar16.Data + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_228,
               (FString *)local_3c8,(bool *)FVar16.Data);
  }
  this_00 = &this->TestFullNameToTagDataMap;
  local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = 0;
  local_440.ArrayMax = 0;
  pFVar10 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                    *)this_00,local_3b0);
  if (pFVar10 != (FString *)0x0) {
    pFVar10 = ::FString::Replace(pFVar10,&local_2d8,L"]",L"[",IgnoreCase);
    ::FString::ParseIntoArray(pFVar10,&local_440,L"[",true);
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
  }
  iVar8 = local_440.ArrayNum;
  uVar23 = (ulong64)local_440.ArrayNum;
  local_278._0_8_ = (FScriptContainerElement *)0x0;
  local_278._8_8_ = 0;
  local_258 = (ForElementType<unsigned_int>)0x0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = -1;
  local_244 = 0;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  if (local_440.ArrayNum != 0) {
    if (local_440.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum(uVar23);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_278,local_440.ArrayNum);
    if ((uint)iVar8 < 4) {
      uVar7 = 1;
    }
    else {
      uVar20 = (ulonglong)(((uint)iVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((local_230 == 0) || ((int)local_230 < (int)uVar7)) {
      local_230 = uVar7;
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_238,0,0,4);
      }
      if (uVar7 != 0) {
        uVar19 = uVar7;
        if (uVar7 < 2) {
          if (local_238.Data != (FScriptContainerElement *)0x0) {
            uVar19 = 0;
            goto LAB_14182e65f;
          }
        }
        else {
LAB_14182e65f:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_238,0,uVar19,4);
        }
        if (0 < (int)uVar7) {
          uVar21 = (ulonglong)uVar7;
          uVar20 = uVar14;
          do {
            FVar16.Data = local_240;
            if (local_238.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_238.Data;
            }
            uVar12 = (longlong)(int)uVar7 - 1U & uVar20;
            uVar20 = uVar20 + 1;
            *(undefined4 *)(FVar16.Data + uVar12 * 4) = 0xffffffff;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      if (local_230 != 0) {
        pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
        local_3f8 = 0;
        uStack_3f4 = 1;
        uStack_3e4 = 0;
        uStack_3e0 = 0;
        if (local_250 != 0) {
          FVar22 = (ForElementType<unsigned_int>)((longlong)local_278 + 0x10);
          if (local_258 != (ForElementType<unsigned_int>)0x0) {
            FVar22 = local_258;
          }
          uVar7 = *(uint *)FVar22;
          uVar20 = uVar14;
          while (uVar7 == 0) {
            uStack_3e0 = (int)uVar20 + 0x20;
            uVar20 = (ulonglong)uStack_3e0;
            iVar8 = (int)uVar14;
            local_3f8 = iVar8 + 1;
            uVar14 = (ulonglong)local_3f8;
            if ((int)((local_250 - 1) + ((int)(local_250 - 1) >> 0x1f & 0x1fU)) >> 5 <
                (int)local_3f8) goto LAB_14182e778;
            uVar7 = ((uint *)((longlong)FVar22 + 4))[iVar8];
          }
          uStack_3f4 = -uVar7 & uVar7;
          uVar14 = (ulonglong)uStack_3f4 * 2 + 1;
          lVar2 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uStack_3e4 = (int)uVar20 + -1 + (int)lVar2;
          uVar14 = (ulonglong)uStack_3e4;
          if ((int)local_250 < (int)uStack_3e4) {
LAB_14182e778:
            uVar14 = (ulonglong)local_250;
            uStack_3e4 = local_250;
          }
        }
        local_3e8 = 0xffffffff;
        local_378 = (longlong *)local_278;
        local_370._padding_ = CONCAT44(uStack_3f4,local_3f8);
        local_370.CurrentBitIndex = uStack_3e4;
        local_370.UnvisitedBitMask = 0xffffffff;
        local_370._28_4_ = uStack_3dc;
        local_370.BaseBitIndex = uStack_3e0;
        local_370.Array = pTStack_3f0;
        if ((int)uVar14 < (int)local_250) {
          do {
            iVar9 = (int)uVar14;
            puVar1 = (undefined8 *)(*local_378 + (longlong)iVar9 * 0x18);
            iVar8 = *(int *)(*local_378 + 8 + (longlong)iVar9 * 0x18);
            if (iVar8 == 0) {
              pwVar15 = L"";
              iVar8 = 0;
            }
            else {
              pwVar15 = (wchar_t *)*puVar1;
              iVar8 = iVar8 + -1;
            }
            uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar15);
            uVar7 = local_230 - 1 & uVar7;
            *(uint *)((longlong)puVar1 + 0x14) = uVar7;
            FVar16.Data = local_240;
            if (local_238.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_238.Data;
            }
            uVar14 = (longlong)(int)local_230 - 1U & (longlong)(int)uVar7;
            *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(FVar16.Data + uVar14 * 4);
            *(int *)(FVar16.Data + uVar14 * 4) = iVar9;
            local_370.UnvisitedBitMask = local_370.UnvisitedBitMask & ~local_370._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
            uVar14 = (ulonglong)(uint)local_370.CurrentBitIndex;
          } while (local_370.CurrentBitIndex < (local_370.Array)->NumBits);
        }
      }
    }
    uVar23 = local_440._8_8_ & 0xffffffff;
  }
  iVar8 = (int)uVar23;
  pFVar18 = local_440.AllocatorInstance.Data + (longlong)iVar8 * 0x10;
  FVar16.Data = local_440.AllocatorInstance.Data;
  while( true ) {
    iVar9 = (int)uVar23;
    if ((int)uVar23 != iVar8) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_448);
      iVar9 = local_440.ArrayNum;
    }
    if (FVar16.Data == pFVar18) break;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
              ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_278,
               (FString *)(local_3c8 + 4),(bool *)FVar16.Data);
    uVar23 = local_440._8_8_ & 0xffffffff;
    FVar16.Data = FVar16.Data + 0x10;
  }
  if ((longlong)local_440._8_8_ < 0) {
    DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,iVar9);
    iVar8 = local_440.ArrayMax;
    local_440._8_8_ = local_440._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_440.AllocatorInstance,0,&local_440.ArrayMax);
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,iVar9);
    local_440._8_8_ = local_440._8_8_ & 0xffffffff00000000;
  }
  pFVar4 = local_3d8;
  iVar8 = (param_1->Data).ArrayNum;
  if (iVar8 == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar17 = 0;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = iVar17;
  }
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar15);
  iVar8 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)&pFVar4->ImmutableTags,uVar7,param_1);
  if (iVar8 == -1) {
    local_188.Hash.InlineData[0] = '\0';
    local_188.Hash.InlineData[1] = '\0';
    local_188.Hash.InlineData[2] = '\0';
    local_188.Hash.InlineData[3] = '\0';
    local_188.Hash._padding_ = 0;
    local_188.Elements._16_8_ = 0;
    local_188.Elements._24_8_ = 0;
    pTVar11 = &local_188;
    local_188._72_8_ = 0;
    local_188.Elements._0_8_ = 0;
    iVar17 = 2;
    local_188.Elements._8_8_ = 0;
    local_188.Elements._32_8_ = 0;
    local_188.Elements._40_4_ = 0;
    local_188.Elements._44_4_ = 0x80;
    local_188.Elements._48_4_ = 0xffffffff;
    local_188.Elements._52_4_ = 0;
    local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  }
  else {
    pTVar11 = TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              ::FindChecked((TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
                             *)&pFVar4->ImmutableTags,param_1);
    local_138.Elements._0_8_ = 0;
    local_138.Elements._8_8_ = 0;
    local_138.Elements._32_8_ = 0;
    local_138.Elements._40_4_ = 0;
    local_138.Elements._44_4_ = 0x80;
    local_138.Elements._48_4_ = 0xffffffff;
    local_138.Elements._52_4_ = 0;
    local_138.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_138.HashSize = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=(&local_138,pTVar11);
    pTVar11 = &local_138;
  }
  pTVar11 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Intersect
                      ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_278,
                       &local_98,pTVar11);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Union
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_228,&local_e8,
             pTVar11);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  if (iVar17 != 0) {
    local_188._72_8_ = local_188._72_8_ & 0xffffffff00000000;
    if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_188.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188.Elements);
  }
  if (iVar8 != -1) {
    local_138.HashSize = 0;
    if (local_138.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_138.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138.Elements);
  }
  local_230 = 0;
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_278);
  DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
  if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  local_1e0 = 0;
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_228);
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Remove((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *)this_00,param_1);
  local_338 = param_1;
  local_330 = ::FString::
              JoinBy<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,_FAutomationTestFramework::RegisterAutomationTestTags_::__l13::<lambda_1>_>
                        (&local_2c8,&local_e8,L"",local_448[0]);
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this_00,&local_3c0,(bool *)&local_338);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  bVar5 = true;
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  FMemScope::~FMemScope(&local_3a8);
  FLLMScope::~FLLMScope(&local_420);
LAB_14182eb8c:
  DestructItems<FString,int>((FString *)local_430.AllocatorInstance.Data,local_430.ArrayNum);
  if (local_430.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.AllocatorInstance.Data);
  }
  return bVar5;
}

// RegisterComplexAutomationTestTags @ 14182ec70

bool __thiscall
FAutomationTestFramework::RegisterComplexAutomationTestTags
          (FAutomationTestFramework *this,FAutomationTestBase *param_1,FString *param_2,
          FString *param_3)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  longlong lVar4;
  int iVar5;
  FString local_28;
  void *local_18 [2];
  
  pFVar3 = (FString *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_18);
  pFVar3 = ::FString::AppendChar(pFVar3,L'.');
  iVar1 = (param_2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(pFVar3,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar5);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = (pFVar3->Data).ArrayNum;
  lVar4 = (longlong)local_28.Data.ArrayNum;
  _Src = (pFVar3->Data).AllocatorInstance.Data;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  bVar2 = RegisterAutomationTestTags(this,&local_28,param_3,true);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// ResetTests @ 14182ffd0

void __thiscall FAutomationTestFramework::ResetTests(FAutomationTestFramework *this)

{
  code *pcVar1;
  IFileManager *pIVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FString local_18;
  
  pIVar2 = IFileManager::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x68);
  pFVar3 = FPaths::AutomationTransientDir(&local_18);
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  (*pcVar1)(pIVar2,pwVar4,0,1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RunSmokeTests @ 141830110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FAutomationTestFramework::RunSmokeTests(FAutomationTestFramework *this)

{
  void *_Src;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  float fVar4;
  FFeedbackContext *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  FText *pFVar9;
  FAutomationTestFramework *pFVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  EAutomationTestFlags EVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStackY_228 [32];
  TArray<FAutomationTestInfo,TSizedDefaultAllocator<32>_> local_1e8;
  FString local_1d8;
  TPairInitializer<FString_const_&,FAutomationTestExecutionInfo_&&> local_1c8;
  FString local_1b8;
  FAutomationTestExecutionInfo local_1a8;
  FString *local_140;
  FAutomationTestExecutionInfo *local_138;
  FText local_130;
  FText local_120;
  FSlowTask local_108;
  TSet<TTuple<FString,FAutomationTestExecutionInfo>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId528,"FAutomationTestFramework::RunSmokeTests",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
               ,0x210);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId528);
  }
  EVar14 = this->RequestedTestFilter;
  bVar3 = true;
  this->RequestedTestFilter = SmokeFilter;
  local_1c8.Key._4_4_ = EVar14;
  if (this->bForceSmokeTests == false) {
    if (4 < (byte)LogAutomationTest._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
    }
  }
  else {
    uVar13 = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    GetValidTestNames(this,&local_1e8);
    pFVar5 = GWarn;
    if (0 < local_1e8.ArrayNum) {
      local_a8.Elements._0_8_ = 0;
      local_a8.Elements._8_8_ = 0;
      local_a8.Elements._32_8_ = 0;
      local_a8.Elements._40_4_ = 0;
      local_a8.Elements._44_4_ = 0x80;
      local_a8.Elements._48_4_ = 0xffffffff;
      local_a8.Elements._52_4_ = 0;
      local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_a8.HashSize = 0;
      pFVar9 = FText::FText(&local_130);
      FSlowTask::FSlowTask(&local_108,(float)local_1e8.ArrayNum,pFVar9,true,pFVar5);
      FSlowTask::Initialize(&local_108);
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      pFVar10 = Get();
      pFVar10->bCaptureStack = false;
      fVar4 = __real_3f800000;
      uVar16 = uVar13;
      if (0 < local_1e8.ArrayNum) {
        do {
          pFVar9 = FText::FText(&local_120);
          FSlowTask::EnterProgressFrame(&local_108,fVar4,pFVar9);
          if (local_120.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
          }
          uVar12 = (uint)uVar13;
          uVar8 = 0;
          if ((int)uVar12 < local_1e8.ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
          }
          iVar11 = local_1e8.ArrayNum;
          if ((*(uint *)(local_1e8.AllocatorInstance.Data + uVar16 + 0x88) & 0x1000000) != 0) {
            uVar8 = 0;
            if ((int)uVar12 < local_1e8.ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              uVar7 = (*pcVar1)();
              return (bool)uVar7;
            }
            local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d8.Data.ArrayNum = *(int *)(local_1e8.AllocatorInstance.Data + uVar16 + 0x28);
            lVar15 = (longlong)local_1d8.Data.ArrayNum;
            _Src = *(void **)(local_1e8.AllocatorInstance.Data + uVar16 + 0x20);
            if (local_1d8.Data.ArrayNum == 0) {
              local_1d8.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1d8.Data.ArrayNum,0,(ForAnyElementType *)&local_1d8,
                         local_1d8.Data.ArrayNum,&local_1d8.Data.ArrayMax);
              memcpy(local_1d8.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
            }
            local_140 = &local_1d8;
            local_1a8.Duration = 0.0;
            local_138 = &local_1a8;
            local_1a8.bSuccessful = false;
            local_1a8.AnalyticsItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.AnalyticsItems.ArrayNum = 0;
            local_1a8.AnalyticsItems.ArrayMax = 0;
            local_1a8.TelemetryItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.TelemetryItems.ArrayNum = 0;
            local_1a8.TelemetryItems.ArrayMax = 0;
            local_1a8.TelemetryStorage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.TelemetryStorage.Data.ArrayNum = 0;
            local_1a8.TelemetryStorage.Data.ArrayMax = 0;
            local_1a8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.Entries.ArrayNum = 0;
            local_1a8.Entries.ArrayMax = 0;
            local_1a8.Errors = 0;
            local_1a8.Warnings = 0;
            local_1a8.ContextStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a8.ContextStack.ArrayNum = 0;
            local_1a8.ContextStack.ArrayMax = 0;
            TSet<TTuple<FString,FAutomationTestExecutionInfo>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_const_&,FAutomationTestExecutionInfo_&&>_>
                      (&local_a8,&local_1c8,(bool *)&local_140);
            lVar15 = (longlong)(int)local_1c8.Key * 0x80 + local_a8.Elements._0_8_;
            FAutomationTestExecutionInfo::Clear(&local_1a8);
            DestructItems<FString,int>
                      ((FString *)local_1a8.ContextStack.AllocatorInstance.Data,
                       local_1a8.ContextStack.ArrayNum);
            if (local_1a8.ContextStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.ContextStack.AllocatorInstance.Data);
            }
            DestructItems<FAutomationExecutionEntry,int>
                      ((FAutomationExecutionEntry *)local_1a8.Entries.AllocatorInstance.Data,
                       local_1a8.Entries.ArrayNum);
            if ((FAutomationExecutionEntry *)local_1a8.Entries.AllocatorInstance.Data !=
                (FAutomationExecutionEntry *)0x0) {
              FMemory::Free(local_1a8.Entries.AllocatorInstance.Data);
            }
            if (local_1a8.TelemetryStorage.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.TelemetryStorage.Data.AllocatorInstance.Data);
            }
            DestructItems<FAutomationTelemetryData,int>
                      ((FAutomationTelemetryData *)local_1a8.TelemetryItems.AllocatorInstance.Data,
                       local_1a8.TelemetryItems.ArrayNum);
            if ((FAutomationTelemetryData *)local_1a8.TelemetryItems.AllocatorInstance.Data !=
                (FAutomationTelemetryData *)0x0) {
              FMemory::Free(local_1a8.TelemetryItems.AllocatorInstance.Data);
            }
            DestructItems<FString,int>
                      ((FString *)local_1a8.AnalyticsItems.AllocatorInstance.Data,
                       local_1a8.AnalyticsItems.ArrayNum);
            if (local_1a8.AnalyticsItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.AnalyticsItems.AllocatorInstance.Data);
            }
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.Data.ArrayNum = 0;
            local_1b8.Data.ArrayMax = 0;
            StartTestByName(this,&local_1d8,0,&local_1b8);
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
            bVar6 = StopTest(this,(FAutomationTestExecutionInfo *)(lVar15 + 0x10));
            if ((bVar3) && (bVar6)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
            }
            iVar11 = local_1e8.ArrayNum;
          }
          uVar13 = (ulonglong)(uVar12 + 1);
          uVar16 = uVar16 + 0x98;
        } while ((int)(uVar12 + 1) < iVar11);
      }
      pFVar10 = Get();
      pFVar10->bCaptureStack = true;
      dVar2 = SumDurations((TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
                            *)&local_a8);
      if (((bVar3 != false) && (bVar6 = FWindowsPlatformMisc::IsDebuggerPresent(), !bVar6)) &&
         (__real_4000000000000000 < dVar2)) {
        local_1c8.Value = (FAutomationTestExecutionInfo *)0x0;
        FindSlowestTest((TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
                         *)&local_a8,(double *)&local_1c8.Value);
        if (2 < (byte)LogAutomationTest._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
        }
      }
      DumpAutomationTestExecutionInfo
                (this,(TMap<FString,FAutomationTestExecutionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExecutionInfo,0>_>
                       *)&local_a8);
      FSlowTask::Destroy(&local_108);
      if (local_108.FrameMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.FrameMessage.TextData.Reference + 0x10))();
      }
      if (local_108.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.DefaultMessage.TextData.Reference + 0x10))();
      }
      local_a8.HashSize = 0;
      if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExecutionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExecutionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8.Elements);
      EVar14 = local_1c8.Key._4_4_;
    }
    DestructItems<FAutomationTestInfo,int>
              ((FAutomationTestInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
    if ((FAutomationTestInfo *)local_1e8.AllocatorInstance.Data != (FAutomationTestInfo *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
  }
  this->RequestedTestFilter = EVar14;
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// SaveTestTagMappings @ 141830700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::SaveTestTagMappings
          (FAutomationTestFramework *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_4)

{
  FName *pFVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  code *pcVar5;
  FConfigFile *pFVar6;
  FAutomationTestFramework *pFVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FString *pFVar11;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar12;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar13;
  IFileManager *pIVar14;
  FName *pFVar15;
  byte bVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStackY_4d8 [32];
  FString local_488;
  undefined1 local_478;
  FIdentityFunctor local_477;
  FIdentityFunctor local_476 [6];
  TArray<FString,TSizedDefaultAllocator<32>_> local_470;
  FString local_460;
  TArray<FString,TSizedDefaultAllocator<32>_> local_450;
  TArray<FString,TSizedDefaultAllocator<32>_> local_440;
  longlong local_430;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_428;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_418;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_408;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3f8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3d8;
  FString local_3c8;
  undefined8 local_3b8;
  FString local_3b0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3a0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_390;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_380;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_370;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_360;
  FString local_350;
  TPairInitializer<FString_const_&,FConfigFile_&&> local_340;
  FAutomationTestFramework *local_330;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_328;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_320;
  TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *local_318;
  int local_310;
  longlong *local_308;
  uint uStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FString local_2a8;
  FString *local_298;
  FConfigFile *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FName local_248;
  FReadAccessScope local_240;
  FReadAccessScope local_228 [2];
  undefined4 local_1f4;
  undefined1 local_1e8 [32];
  uint *local_1c8;
  uint local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
  local_198;
  FConfigFile local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  local_318 = param_4;
  local_340.Value = (FConfigFile *)param_3;
  local_330 = this;
  local_328 = param_1;
  local_320 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestFullNames.Num() == TestFilePaths.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                         ,0x3e0,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar11 = FPaths::ProjectDir(&local_288);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar19 = L"";
  }
  else {
    pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_2a8,pwVar19);
  FPaths::ConvertRelativePathToFull(&local_3c8,&local_2a8);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  pFVar11 = FPaths::EngineDir(&local_278);
  FPaths::ConvertRelativePathToFull(&local_3b0,pFVar11);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  pTVar12 = FPaths::GetRestrictedFolderNames();
  local_450.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar10 = pTVar12->ArrayNum;
  pFVar21 = (pTVar12->AllocatorInstance).Data;
  local_450.ArrayNum = iVar10;
  if (iVar10 == 0) {
    local_450.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar10,0,&local_450.AllocatorInstance,iVar10,&local_450.ArrayMax);
    ConstructItems<FString,FString,int>(local_450.AllocatorInstance.Data,(FString *)pFVar21,iVar10);
  }
  ::FString::FString(&local_268,L"Platforms");
  ::FString::FString(&local_258,L"Restricted");
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,2,&local_450.AllocatorInstance,&local_450.ArrayNum,&local_450.ArrayMax)
  ;
  ConstructItems<FString,FString,int>
            (local_450.AllocatorInstance.Data + (longlong)iVar10 * 0x10,&local_268,2);
  pFVar15 = &local_248;
  lVar20 = 2;
  do {
    pFVar1 = pFVar15 + -2;
    pFVar15 = pFVar15 + -2;
    lVar20 = lVar20 + -1;
    if (*pFVar1 != (FName)0x0) {
      FMemory::Free((void *)*pFVar1);
    }
  } while (lVar20 != 0);
  local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_470.ArrayNum = 0;
  local_470.ArrayMax = 0;
  GetPossibleRestrictedPaths(this,&local_3c8,&local_450,&local_470);
  local_440.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = 0;
  local_440.ArrayMax = 0;
  GetPossibleRestrictedPaths(this,&local_3b0,&local_450,&local_440);
  if (((local_470.AllocatorInstance.Data <= (FScriptContainerElement *)&local_3c8) &&
      ((FScriptContainerElement *)&local_3c8 <
       local_470.AllocatorInstance.Data + (longlong)local_470.ArrayMax * 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = local_470.ArrayNum;
  if (local_470.ArrayNum == local_470.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_470.AllocatorInstance,&local_470.ArrayMax);
  }
  FVar18.Data = local_3c8.Data.AllocatorInstance.Data;
  pFVar21 = local_470.AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  local_470.ArrayNum = iVar10 + 1;
  *(FScriptContainerElement **)pFVar21 = (FScriptContainerElement *)0x0;
  *(int *)(pFVar21 + 8) = local_3c8.Data.ArrayNum;
  if (local_3c8.Data.ArrayNum == 0) {
    *(int *)(pFVar21 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar21,local_3c8.Data.ArrayNum,
               (int *)(pFVar21 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar21,FVar18.Data,(longlong)local_3c8.Data.ArrayNum * 2);
  }
  uVar29 = 0;
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_1>_>_>
            ((FString *)local_470.AllocatorInstance.Data,local_470.ArrayNum,local_477,
             (<lambda_1> *)&local_477);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,_FAutomationTestFramework::SaveTestTagMappings_::__l2::<lambda_2>_>_>
            ((FString *)local_440.AllocatorInstance.Data,local_440.ArrayNum,local_476[0],
             (<lambda_2> *)local_476);
  local_460.Data.ArrayNum = 0;
  local_460.Data.ArrayMax = 0;
  local_488.Data.ArrayNum = 0;
  local_488.Data.ArrayMax = 0;
  local_198.Elements._8_8_ = 0;
  local_3b8 = 1;
  local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_488.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Elements._0_8_ = 0;
  local_198.Elements._32_8_ = 0;
  local_198.Elements._40_4_ = 0;
  local_198.Elements._44_4_ = 0x80;
  local_198.Elements._48_4_ = 0xffffffff;
  local_198.Elements._52_4_ = 0;
  local_198.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_198.HashSize = 0;
  if (0 < param_2->ArrayNum) {
    local_430 = 0;
    do {
      lVar20 = local_430;
      uVar22 = 0;
      ::FString::Empty(&local_488);
      uVar28 = ~uVar29 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar29 < param_2->ArrayNum) {
        uVar17 = uVar28;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = lVar20 * 0x10;
      pFVar21 = (param_2->AllocatorInstance).Data + lVar20;
      if ((FScriptContainerElement *)&local_460 != pFVar21) {
        iVar10 = *(int *)(pFVar21 + 8);
        pvVar3 = *(void **)pFVar21;
        local_460.Data.ArrayNum = iVar10;
        if ((iVar10 == 0) && (local_460.Data.ArrayMax == 0)) {
          local_460.Data.ArrayNum = 0;
          local_460.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar10,local_460.Data.ArrayMax,(ForAnyElementType *)&local_460,iVar10,
                     &local_460.Data.ArrayMax);
          if (iVar10 != 0) {
            memcpy(local_460.Data.AllocatorInstance.Data,pvVar3,(longlong)iVar10 * 2);
          }
        }
      }
      uVar26 = uVar22;
      if (0 < local_470.ArrayNum) {
        do {
          uVar25 = (uint)uVar22;
          uVar17 = 0;
          if ((int)uVar25 < local_470.ArrayNum) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar8 = FPaths::IsUnderDirectory
                            (&local_460,
                             (FString *)
                             (local_470.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10));
          if (bVar8) {
            uVar17 = 0;
            if ((int)uVar25 < local_470.ArrayNum) {
              uVar17 = ~uVar25 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_428.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar10 = *(int *)(local_470.AllocatorInstance.Data + uVar26 * 0x10 + 8);
            pvVar3 = *(void **)(local_470.AllocatorInstance.Data + uVar26 * 0x10);
            uVar17 = iVar10 + 7 +
                     (uint)(*(int *)(local_470.AllocatorInstance.Data + uVar26 * 0x10 + 8) == 0);
            local_428.ArrayNum = iVar10;
            if ((int)uVar17 < iVar10) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar17,0,&local_428.AllocatorInstance,iVar10,&local_428.ArrayMax);
            if (iVar10 != 0) {
              memcpy(local_428.AllocatorInstance.Data,pvVar3,(longlong)iVar10 * 2);
            }
            ::FString::PathAppend((FString *)&local_428,L"Config",6);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                      (&local_3a0,&local_428,7 - (uint)(local_428.ArrayNum != 0));
            ::FString::PathAppend((FString *)&local_3a0,L"Tests",5);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                      (&local_3e8,&local_3a0,10 - (uint)(local_3a0.ArrayNum != 0));
            ::FString::PathAppend((FString *)&local_3e8,L"Tags.ini",8);
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
            local_488.Data.AllocatorInstance.Data = local_3e8.AllocatorInstance.Data;
            local_488.Data.ArrayNum = local_3e8.ArrayNum;
            local_488.Data.ArrayMax = local_3e8.ArrayMax;
            local_3e8.ArrayNum = 0;
            local_3e8.ArrayMax = 0;
            local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3a0.AllocatorInstance.Data);
            }
            if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_428.AllocatorInstance.Data);
            }
            break;
          }
          uVar22 = (ulonglong)(uVar25 + 1);
          uVar26 = uVar26 + 1;
        } while ((int)(uVar25 + 1) < local_470.ArrayNum);
      }
      uVar22 = 0;
      if ((local_488.Data.ArrayNum < 2) && (uVar26 = uVar22, 0 < local_440.ArrayNum)) {
        do {
          uVar25 = (uint)uVar22;
          uVar17 = 0;
          if ((int)uVar25 < local_440.ArrayNum) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar8 = FPaths::IsUnderDirectory
                            (&local_460,
                             (FString *)
                             (local_440.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10));
          if (bVar8) {
            uVar17 = 0;
            if ((int)uVar25 < local_440.ArrayNum) {
              uVar17 = ~uVar25 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar21 = local_440.AllocatorInstance.Data + uVar26 * 0x10;
            local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            iVar10 = *(int *)(pFVar21 + 8);
            pvVar3 = *(void **)pFVar21;
            uVar17 = (*(int *)(pFVar21 + 8) == 0) + 7 + iVar10;
            local_418.ArrayNum = iVar10;
            if ((int)uVar17 < iVar10) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
            }
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar17,0,&local_418.AllocatorInstance,iVar10,&local_418.ArrayMax);
            if (iVar10 != 0) {
              memcpy(local_418.AllocatorInstance.Data,pvVar3,(longlong)iVar10 * 2);
            }
            ::FString::PathAppend((FString *)&local_418,L"Config",6);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                      (&local_390,&local_418,7 - (uint)(local_418.ArrayNum != 0));
            ::FString::PathAppend((FString *)&local_390,L"Tests",5);
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::
            TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                      (&local_3f8,&local_390,10 - (uint)(local_390.ArrayNum != 0));
            ::FString::PathAppend((FString *)&local_3f8,L"Tags.ini",8);
            if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_488.Data.AllocatorInstance.Data);
            }
            local_488.Data.AllocatorInstance.Data = local_3f8.AllocatorInstance.Data;
            local_488.Data.ArrayNum = local_3f8.ArrayNum;
            local_488.Data.ArrayMax = local_3f8.ArrayMax;
            local_3f8.ArrayNum = 0;
            local_3f8.ArrayMax = 0;
            local_3f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_390.AllocatorInstance.Data);
            }
            if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_418.AllocatorInstance.Data);
            }
            break;
          }
          uVar22 = (ulonglong)(uVar25 + 1);
          uVar26 = uVar26 + 1;
        } while ((int)(uVar25 + 1) < local_440.ArrayNum);
      }
      lVar24 = 0;
      if (local_488.Data.ArrayNum < 2) {
        bVar8 = FPaths::IsUnderDirectory(&local_460,&local_3b0);
        FVar18.Data = local_3b0.Data.AllocatorInstance.Data;
        if (bVar8) {
          iVar10 = local_3b0.Data.ArrayNum;
          local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar17 = iVar10 + 0xb + (uint)(iVar10 == 0);
          local_408.ArrayNum = iVar10;
          if ((int)uVar17 < iVar10) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar17,0,&local_408.AllocatorInstance,iVar10,&local_408.ArrayMax);
          if (iVar10 != 0) {
            memcpy(local_408.AllocatorInstance.Data,FVar18.Data,(longlong)iVar10 * 2);
          }
          ::FString::PathAppend((FString *)&local_408,L"Restricted",10);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_360,&local_408,0x11 - (uint)(local_408.ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_360,L"NotForLicensees",0xf);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_370,&local_360,8 - (uint)(local_360.ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_370,L"Config",6);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_380,&local_370,7 - (uint)(local_370.ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_380,L"Tests",5);
          TArray<wchar_t,TSizedDefaultAllocator<32>_>::
          TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                    (&local_3d8,&local_380,10 - (uint)(local_380.ArrayNum != 0));
          ::FString::PathAppend((FString *)&local_3d8,L"Tags.ini",8);
          if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_488.Data.AllocatorInstance.Data);
          }
          local_488.Data.AllocatorInstance.Data = local_3d8.AllocatorInstance.Data;
          local_488.Data.ArrayNum = local_3d8.ArrayNum;
          local_488.Data.ArrayMax = local_3d8.ArrayMax;
          local_3d8.ArrayNum = 0;
          local_3d8.ArrayMax = 0;
          local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.AllocatorInstance.Data);
          }
          if (local_370.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.AllocatorInstance.Data);
          }
          if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.AllocatorInstance.Data);
          }
          if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_408.AllocatorInstance.Data);
          }
        }
        if (1 < local_488.Data.ArrayNum) goto LAB_1418311cb;
        if (1 < (byte)LogAutomationTest._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAutomationTest);
        }
      }
      else {
LAB_1418311cb:
        uVar25 = 0;
        uVar17 = local_488.Data.ArrayNum - 1;
        if (local_488.Data.ArrayNum == 0) {
          uVar17 = uVar25;
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>
                           (uVar17,(wchar_t *)local_488.Data.AllocatorInstance.Data);
        iVar10 = TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_198,uVar17,&local_488);
        if (iVar10 == -1) {
          local_298 = &local_488;
          local_290 = FConfigFile::FConfigFile(&local_148);
          TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
                    (&local_198,&local_340,(bool *)&local_298);
          FConfigFile::~FConfigFile(&local_148);
          this_00 = FPlatformFileManager::Get();
          pIVar13 = FPlatformFileManager::GetPlatformFile(this_00);
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_488.Data.ArrayNum != 0) {
            FVar18.Data = local_488.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar13 + 0xa8))(pIVar13,FVar18.Data,0);
          pFVar6 = local_340.Value;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_340.Value,
                     &local_240);
          if (((int)pFVar6->_padding_ != 0) &&
             (plVar4 = (longlong *)pFVar6->_padding_, plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0x68))(plVar4,&local_488);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_240);
          pIVar14 = IFileManager::Get();
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_488.Data.ArrayNum != 0) {
            FVar18.Data = local_488.Data.AllocatorInstance.Data;
          }
          cVar9 = (**(code **)((longlong)*pIVar14 + 0x50))(pIVar14,FVar18.Data);
          if (cVar9 != '\0') {
            uVar17 = local_488.Data.ArrayNum - 1;
            FVar18.Data = local_488.Data.AllocatorInstance.Data;
            if (local_488.Data.ArrayNum == 0) {
              uVar17 = uVar25;
              FVar18.Data = (FScriptContainerElement *)L"";
            }
            uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar17,(wchar_t *)FVar18.Data);
            iVar10 = TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>(&local_198,uVar17,&local_488);
            lVar23 = lVar24;
            if (((iVar10 == -1) ||
                (lVar23 = (longlong)iVar10 * 0x100 + local_198.Elements._0_8_, lVar23 == 0)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FConfigFile::Combine((FConfigFile *)(lVar23 + 0x10),&local_488);
          }
        }
        uVar17 = local_488.Data.ArrayNum - 1;
        FVar18.Data = local_488.Data.AllocatorInstance.Data;
        if (local_488.Data.ArrayNum == 0) {
          uVar17 = uVar25;
          FVar18.Data = (FScriptContainerElement *)L"";
        }
        uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar17,(wchar_t *)FVar18.Data);
        iVar10 = TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>(&local_198,uVar17,&local_488);
        if (((iVar10 == -1) ||
            (lVar24 = (longlong)iVar10 * 0x100 + local_198.Elements._0_8_, lVar24 == 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar12 = local_328;
        pFVar7 = local_330;
        if ((int)uVar29 < local_328->ArrayNum) {
          uVar25 = uVar28;
        }
        if ((uVar25 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                  ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                          *)&pFVar7->TestFullNameToTagDataMap,
                         (FString *)((pTVar12->AllocatorInstance).Data + lVar20));
        uVar17 = 0;
        if ((int)uVar29 < pTVar12->ArrayNum) {
          uVar17 = uVar28;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar21 = (pTVar12->AllocatorInstance).Data;
        iVar2 = *(int *)(pFVar21 + lVar20 + 8);
        iVar10 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar10 = 0;
        }
        pFVar15 = ::FName::FName(&local_248,iVar10,*(wchar_t **)(pFVar21 + lVar20),
                                 (EFindName)local_3b8);
        FConfigFile::SetInSection((FConfigFile *)(lVar24 + 0x10),L"TestTagMapping",*pFVar15,pFVar11)
        ;
      }
      uVar29 = uVar29 + 1;
      local_430 = local_430 + 1;
      param_4 = local_318;
      param_2 = local_320;
    } while ((int)uVar29 < local_320->ArrayNum);
  }
  uVar28 = (uint)local_3b8;
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1c8 = (uint *)0x0;
  uVar29 = 0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  TMapBase<FString,FConfigFile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>_>
  ::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((TMapBase<FString,FConfigFile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>_>
              *)&local_198,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_1e8);
  uVar17 = local_1c0;
  local_2e8 = 0;
  uStack_2ec = local_2e8;
  if (local_1c0 != 0) {
    puVar27 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar27 = local_1c8;
    }
    uVar25 = *puVar27;
    local_2e8 = 0;
    uVar29 = 0;
    while (uVar25 == 0) {
      lVar20 = (longlong)(int)uVar29;
      local_2e8 = local_2e8 + 0x20;
      uVar29 = uVar29 + 1;
      uStack_2ec = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar29)
      goto LAB_1418315c3;
      uVar25 = puVar27[lVar20 + 1];
    }
    uVar28 = -uVar25 & uVar25;
    uVar22 = (ulonglong)uVar28 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_340.Key._4_4_ = (int)lVar20;
    uStack_2ec = (local_2e8 - 1) + local_340.Key._4_4_;
    if ((int)local_1c0 < (int)uStack_2ec) {
      uStack_2ec = local_1c0;
    }
  }
LAB_1418315c3:
  local_308 = (longlong *)local_1e8;
  uStack_2e4 = local_1f4;
  local_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  iStack_2e0 = local_1e8._8_4_ - local_1b4;
  uVar25 = local_1c0 & 0xffffffe0;
  uStack_2f0 = 0xffffffff;
  TStack_2d0.CurrentBitIndex = uStack_2ec;
  TStack_2d0.UnvisitedBitMask = 0xffffffff;
  TStack_2d0._padding_ = CONCAT44(uVar28,uVar29);
  iVar10 = (int)local_1c0 >> 5;
  TStack_2d0._28_4_ = local_1f4;
  TStack_2d0.BaseBitIndex = local_2e8;
  uStack_2b0 = CONCAT44(uStack_2dc,iStack_2e0);
  bVar16 = (byte)local_1c0;
  uStack_300 = uVar29;
  uStack_2fc = uVar28;
  local_2d8 = local_308;
  TStack_2d0.Array = local_2f8;
  if (((int)local_1c0 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar17 != local_1c0) {
    puVar27 = (uint *)(local_1e8 + 0x10);
    if (local_1c8 != (uint *)0x0) {
      puVar27 = local_1c8;
    }
    uVar29 = -1 << (bVar16 & 0x1f) & puVar27[iVar10];
    while (uVar29 == 0) {
      lVar20 = (longlong)iVar10;
      uVar25 = uVar25 + 0x20;
      iVar10 = iVar10 + 1;
      uVar17 = local_1c0;
      if ((int)((local_1c0 - 1) + ((int)(local_1c0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_141831713;
      uVar29 = puVar27[lVar20 + 1];
    }
    uVar22 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_310 = (int)lVar20;
    uVar17 = local_310 + -1 + uVar25;
    if ((int)local_1c0 < (int)uVar17) {
      uVar17 = local_1c0;
    }
  }
LAB_141831713:
  while( true ) {
    plVar4 = local_2d8;
    if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
      local_478 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
    }
    if (((TStack_2d0.CurrentBitIndex == uVar17) &&
        (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10))) &&
       (plVar4 == (longlong *)local_1e8)) {
      local_1a0 = 0;
      if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1a8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1e8);
      local_198.HashSize = 0;
      if (local_198.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_198.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FConfigFile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_198.Elements);
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_440.AllocatorInstance.Data,local_440.ArrayNum);
      if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_470.AllocatorInstance.Data,local_470.ArrayNum);
      if (local_470.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_450.AllocatorInstance.Data,local_450.ArrayNum);
      if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.AllocatorInstance.Data);
      }
      if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
      }
      if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      }
      return;
    }
    pFVar11 = (FString *)(*plVar4 + (longlong)TStack_2d0.CurrentBitIndex * 0x18);
    if (4 < (byte)LogAutomationTestFramework._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&::LOG_Static,(FLogCategoryBase *)&LogAutomationTestFramework);
    }
    iVar2 = (pFVar11->Data).ArrayNum;
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      pwVar19 = L"";
      iVar10 = 0;
    }
    else {
      pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    uVar29 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar19);
    iVar10 = TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>(&local_198,uVar29,pFVar11);
    lVar20 = 0;
    if (((iVar10 == -1) ||
        (lVar20 = (longlong)iVar10 * 0x100 + local_198.Elements._0_8_, lVar20 == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) break;
    local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_350.Data.ArrayNum = 0;
    local_350.Data.ArrayMax = 0;
    FConfigFile::Write((FConfigFile *)(lVar20 + 0x10),pFVar11,true,&local_350);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_4,local_228);
    if ((*(int *)&param_4->field_0x10 != 0) &&
       (plVar4 = *(longlong **)&param_4->field_0x8, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x68))(plVar4,pFVar11);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_228);
    TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetDeveloperDirectoryIncluded @ 141832790

void __thiscall
FAutomationTestFramework::SetDeveloperDirectoryIncluded(FAutomationTestFramework *this,bool param_1)

{
  this->bDeveloperDirectoryIncluded = param_1;
  return;
}

// SetRequestedTestFilter @ 141832c40

void __thiscall
FAutomationTestFramework::SetRequestedTestFilter
          (FAutomationTestFramework *this,EAutomationTestFlags param_1)

{
  this->RequestedTestFilter = param_1;
  return;
}

// ShouldTestContent @ 141832d70

bool __thiscall
FAutomationTestFramework::ShouldTestContent(FAutomationTestFramework *this,FString *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  FString *pFVar5;
  ForAnyElementType _Str;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  undefined1 local_res18 [16];
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FAutomationTestFramework::ShouldTestContent'::__l2::
           _dynamic_atexit_destructor_for__TestLevelFolders__);
    _Init_thread_footer(&::_TSS0);
  }
  if (TestLevelFolders.ArrayNum == 0) {
    FConfigCacheIni::GetArray
              (GConfig,L"/Script/Engine.AutomationTestSettings",L"TestLevelFolders",
               &TestLevelFolders,&GEngineIni);
  }
  iVar2 = TestLevelFolders.ArrayNum;
  bVar1 = false;
  pFVar6 = TestLevelFolders.AllocatorInstance.Data + (longlong)iVar2 * 0x10;
  FVar7.Data = TestLevelFolders.AllocatorInstance.Data;
  while( true ) {
    if (TestLevelFolders.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar7.Data == pFVar6) break;
    ::FString::PrintfImpl(&local_68,L"/%s/");
    if (local_68.Data.ArrayNum == 0) {
      _Str.Data = (FScriptContainerElement *)L"";
LAB_141832e80:
      sVar4 = wcslen((wchar_t *)_Str.Data);
      iVar3 = ::FString::Find(param_1,(wchar_t *)_Str.Data,(int)sVar4,IgnoreCase,FromStart,-1);
      if (iVar3 != -1) {
        bVar1 = true;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    else {
      _Str.Data = local_68.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_141832e80;
    }
    FVar7.Data = FVar7.Data + 0x10;
  }
  if (bVar1) {
    return true;
  }
  FPaths::ConvertRelativePathToFull(&local_48,param_1);
  pFVar5 = FPaths::GameDevelopersDir(&local_68);
  FPaths::ConvertRelativePathToFull(&local_58,pFVar5);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (this->bDeveloperDirectoryIncluded == false) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar7.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar2 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    bVar1 = ::FString::StartsWith(&local_48,(wchar_t *)FVar7.Data,iVar2,IgnoreCase);
    if (bVar1) {
      bVar1 = false;
      goto LAB_141832f72;
    }
  }
  bVar1 = true;
LAB_141832f72:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// StartTestByName @ 141833160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAutomationTestFramework::StartTestByName
          (FAutomationTestFramework *this,FString *param_1,int param_2,FString *param_3)

{
  TSharedPtr<IAutomationLatentCommand,1> *pTVar1;
  TSharedPtr<IAutomationNetworkCommand,1> *pTVar2;
  int iVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FOutputDeviceRedirector *this_00;
  FStaticBasicLogRecord *pFVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FString local_118;
  FString local_108;
  FAutomationTestExecutionInfo local_f8;
  IAutomationLatentCommand *local_88;
  FSharedReferencer<1> FStack_80;
  IAutomationNetworkCommand *local_78;
  FSharedReferencer<1> FStack_70;
  FString local_68;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  FString local_38;
  
  iVar12 = 0;
  if (GIsAutomationTesting) {
    pTVar4 = ((this->LatentCommands).Tail)->NextNode;
    while (pTVar4 != (TNode *)0x0) {
      local_88 = (IAutomationLatentCommand *)0x0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar4 = ((this->LatentCommands).Tail)->NextNode;
      if (pTVar4 != (TNode *)0x0) {
        pTVar1 = &pTVar4->Item;
        if ((TSharedPtr<IAutomationLatentCommand,1> *)&local_88 != pTVar1) {
          local_88 = pTVar1->Object;
          pTVar1->Object = (IAutomationLatentCommand *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_80,&(pTVar4->Item).SharedReferenceCount);
        }
        pTVar5 = (this->LatentCommands).Tail;
        (this->LatentCommands).Tail = pTVar4;
        local_58 = 0;
        FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<IAutomationLatentCommand,1> *)&local_58) {
          pTVar1->Object = (IAutomationLatentCommand *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar4->Item).SharedReferenceCount,&FStack_50);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_50.ReferenceController);
        if (pTVar5 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar5->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar5,0x18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      pTVar4 = ((this->LatentCommands).Tail)->NextNode;
    }
    pTVar6 = ((this->NetworkCommands).Tail)->NextNode;
    while (pTVar6 != (TNode *)0x0) {
      local_78 = (IAutomationNetworkCommand *)0x0;
      FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar6 = ((this->NetworkCommands).Tail)->NextNode;
      if (pTVar6 != (TNode *)0x0) {
        pTVar2 = &pTVar6->Item;
        if ((TSharedPtr<IAutomationNetworkCommand,1> *)&local_78 != pTVar2) {
          local_78 = pTVar2->Object;
          pTVar2->Object = (IAutomationNetworkCommand *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_70,&(pTVar6->Item).SharedReferenceCount);
        }
        pTVar7 = (this->NetworkCommands).Tail;
        (this->NetworkCommands).Tail = pTVar6;
        local_48 = 0;
        FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar2 != (TSharedPtr<IAutomationNetworkCommand,1> *)&local_48) {
          pTVar2->Object = (IAutomationNetworkCommand *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar6->Item).SharedReferenceCount,&FStack_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_40.ReferenceController);
        if (pTVar7 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar7->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar7,0x18);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_70.ReferenceController);
      pTVar6 = ((this->NetworkCommands).Tail)->NextNode;
    }
    local_f8.bSuccessful = false;
    local_f8.Duration = 0.0;
    local_f8.AnalyticsItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.AnalyticsItems.ArrayNum = 0;
    local_f8.AnalyticsItems.ArrayMax = 0;
    local_f8.TelemetryItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.TelemetryItems.ArrayNum = 0;
    local_f8.TelemetryItems.ArrayMax = 0;
    local_f8.TelemetryStorage.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.TelemetryStorage.Data.ArrayNum = 0;
    local_f8.TelemetryStorage.Data.ArrayMax = 0;
    local_f8.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Entries.ArrayNum = 0;
    local_f8.Entries.ArrayMax = 0;
    local_f8.Errors = 0;
    local_f8.Warnings = 0;
    local_f8.ContextStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ContextStack.ArrayNum = 0;
    local_f8.ContextStack.ArrayMax = 0;
    StopTest(this,&local_f8);
    FAutomationTestExecutionInfo::Clear(&local_f8);
    DestructItems<FString,int>
              ((FString *)local_f8.ContextStack.AllocatorInstance.Data,
               local_f8.ContextStack.ArrayNum);
    if (local_f8.ContextStack.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.ContextStack.AllocatorInstance.Data);
    }
    DestructItems<FAutomationExecutionEntry,int>
              ((FAutomationExecutionEntry *)local_f8.Entries.AllocatorInstance.Data,
               local_f8.Entries.ArrayNum);
    if ((FAutomationExecutionEntry *)local_f8.Entries.AllocatorInstance.Data !=
        (FAutomationExecutionEntry *)0x0) {
      FMemory::Free(local_f8.Entries.AllocatorInstance.Data);
    }
    if (local_f8.TelemetryStorage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.TelemetryStorage.Data.AllocatorInstance.Data);
    }
    DestructItems<FAutomationTelemetryData,int>
              ((FAutomationTelemetryData *)local_f8.TelemetryItems.AllocatorInstance.Data,
               local_f8.TelemetryItems.ArrayNum);
    if ((FAutomationTelemetryData *)local_f8.TelemetryItems.AllocatorInstance.Data !=
        (FAutomationTelemetryData *)0x0) {
      FMemory::Free(local_f8.TelemetryItems.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_f8.AnalyticsItems.AllocatorInstance.Data,
               local_f8.AnalyticsItems.ArrayNum);
    if (local_f8.AnalyticsItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AnalyticsItems.AllocatorInstance.Data);
    }
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Data.ArrayNum = 0;
  local_118.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FString::FString(&local_38,L" ");
  bVar10 = ::FString::Split(param_1,&local_38,&local_118,&local_68,CaseSensitive,FromStart);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar10) && (&local_118 != param_1)) {
    iVar3 = (param_1->Data).ArrayNum;
    pFVar8 = (param_1->Data).AllocatorInstance.Data;
    local_118.Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (local_118.Data.ArrayMax == 0)) {
      local_118.Data.ArrayNum = 0;
      local_118.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,local_118.Data.ArrayMax,(ForAnyElementType *)&local_118,iVar3,
                 &local_118.Data.ArrayMax);
      if (iVar3 != 0) {
        memcpy(local_118.Data.AllocatorInstance.Data,pFVar8,(longlong)iVar3 * 2);
      }
    }
  }
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((param_3->Data).ArrayNum < 2) {
    param_3 = param_1;
  }
  local_108.Data.ArrayNum = (param_3->Data).ArrayNum;
  lVar15 = (longlong)local_108.Data.ArrayNum;
  pFVar8 = (param_3->Data).AllocatorInstance.Data;
  if (local_108.Data.ArrayNum == 0) {
    local_108.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_108.Data.ArrayNum
               ,&local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,pFVar8,lVar15 * 2);
  }
  this->NetworkRoleIndex = param_2;
  if ((GIsSlowTask == false) && (GIsPlayInEditorWorld == false)) {
    if (local_118.Data.ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      iVar12 = local_118.Data.ArrayNum + -1;
      pwVar14 = (wchar_t *)local_118.Data.AllocatorInstance.Data;
    }
    uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar14);
    iVar12 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                         *)&this->AutomationTestClassNameToInstanceMap,uVar11,&local_118);
    if (iVar12 != -1) {
      if ((GIsAutomationTesting != false) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!GIsAutomationTesting",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                              ,0x4b0,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->PreTestingEvent);
      this->OriginalGWarn = GWarn;
      LOCK();
      (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)GWarn;
      UNLOCK();
      GWarn = (FFeedbackContext *)&this->AutomationTestMessageFilter;
      this_00 = GetGlobalLogSingleton();
      FOutputDeviceRedirector::AddOutputDevice
                (this_00,(FOutputDevice *)&this->AutomationTestOutputDevice);
      GIsAutomationTesting = true;
      InternalStartTest(this,param_1,&local_108);
      goto LAB_141833656;
    }
    if ((byte)LogAutomationTest._0_1_ < 2) goto LAB_141833656;
    pFVar13 = &::LOG_Static;
  }
  else {
    if ((byte)LogAutomationTest._0_1_ < 2) goto LAB_141833656;
    pFVar13 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar13,(FLogCategoryBase *)&LogAutomationTest);
LAB_141833656:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// StopTest @ 141833a60

bool __thiscall
FAutomationTestFramework::StopTest
          (FAutomationTestFramework *this,FAutomationTestExecutionInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FOutputDeviceRedirector *this_00;
  
  if (!GIsAutomationTesting) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x297,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = InternalStopTest(this,param_1);
  if (GIsAutomationTesting == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GIsAutomationTesting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x4c2,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  GIsAutomationTesting = false;
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::RemoveOutputDevice
            (this_00,(FOutputDevice *)&this->AutomationTestOutputDevice);
  GWarn = this->OriginalGWarn;
  LOCK();
  (this->AutomationTestMessageFilter).DestinationContext = (atomic<FFeedbackContext_*>)0x0;
  UNLOCK();
  this->OriginalGWarn = (FFeedbackContext *)0x0;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PostTestingEvent);
  return bVar2;
}

// TagsMatchPattern @ 141833df0

bool __thiscall
FAutomationTestFramework::TagsMatchPattern
          (FAutomationTestFramework *this,FString *param_1,FString *param_2)

{
  FTextFilterExpressionEvaluator *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FText *pFVar5;
  FText local_38;
  ITextFilterExpressionContext local_28;
  FString local_20;
  
  if ((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TagFilter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\AutomationTest.cpp"
                       ,0x37a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->TagFilter).Object;
  pFVar5 = FText::FromString(&local_38,param_2);
  FTextFilterExpressionEvaluator::SetFilterText(pFVar1,pFVar5);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if ((this->TagFilter).Object == (FTextFilterExpressionEvaluator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->TagFilter).Object;
  local_28 = (ITextFilterExpressionContext)&___7FBasicStringFilterExpressionContext__6B_;
  ::FString::FString(&local_20,param_1);
  bVar3 = FTextFilterExpressionEvaluator::TestTextFilter(pFVar1,&local_28);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// TriggerOnEnteringTestSection @ 141838560

void __thiscall
FAutomationTestFramework::TriggerOnEnteringTestSection
          (FAutomationTestFramework *this,FString *param_1)

{
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
            ::Find((TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
                    *)&this->OnEnteringTestSectionEvent,param_1);
  if (this_00 != (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (this_00,param_1);
    return;
  }
  return;
}

// TriggerOnLeavingTestSection @ 1418385a0

void __thiscall
FAutomationTestFramework::TriggerOnLeavingTestSection
          (FAutomationTestFramework *this,FString *param_1)

{
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
            ::Find((TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
                    *)&this->OnLeavingTestSectionEvent,param_1);
  if (this_00 != (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)0x0
     ) {
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (this_00,param_1);
    return;
  }
  return;
}

// UnregisterAutomationTest @ 14183a520

bool __thiscall
FAutomationTestFramework::UnregisterAutomationTest(FAutomationTestFramework *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  iVar4 = (param_1->Data).ArrayNum;
  pwVar6 = L"";
  iVar3 = iVar4 + -1;
  if (iVar4 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                      *)&this->AutomationTestClassNameToInstanceMap,uVar2,param_1);
  if ((iVar3 != -1) &&
     (*(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x8 !=
      *(int *)&(this->AutomationTestClassNameToInstanceMap).field_0x34)) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                *)&this->AutomationTestClassNameToInstanceMap,uVar2,param_1);
  }
  return iVar3 != -1;
}

// UnregisterAutomationTestTags @ 14183a5e0

bool __thiscall
FAutomationTestFramework::UnregisterAutomationTestTags
          (FAutomationTestFramework *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)&this->TestFullNameToTagDataMap,uVar2,param_1);
  if (iVar3 != -1) {
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Remove((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
            *)&this->TestFullNameToTagDataMap,param_1);
  }
  return iVar3 != -1;
}

// GetCurrentTest @ 141c93fd0

FAutomationTestBase * __thiscall
FAutomationTestFramework::GetCurrentTest(FAutomationTestFramework *this)

{
  return this->CurrentTest;
}

