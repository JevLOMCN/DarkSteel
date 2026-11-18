// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// FTaskTranslator @ 14e4d7e40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FTaskTranslator * __thiscall
UE::Interchange::FTaskTranslator::FTaskTranslator
          (FTaskTranslator *this,int param_1,
          TWeakPtr<UE::Interchange::FImportAsyncHelper,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FInterchangeTaskBase_Interchange_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTaskTranslator_Interchange_UE__6B_;
  this->_padding_ = -1;
  this->SourceIndex = param_1;
  (this->WeakAsyncHelper).Object = param_2->Object;
  pTVar3 = (param_2->WeakReferenceCount).ReferenceController;
  (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))();
    }
  }
  return this;
}

// Execute @ 14e4f1ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FTaskTranslator::Execute(FTaskTranslator *this)

{
  uint uVar1;
  UObject *pUVar2;
  UInterchangeResultsContainer *pUVar3;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  uint uVar8;
  FImportAsyncHelper *pFVar9;
  FImportAsyncHelper *pFVar10;
  FImportAsyncHelper *pFVar11;
  bool bVar12;
  FGCScopeGuard local_res8;
  char local_res9;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"UE::Interchange::FTaskTranslator::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskTranslator.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
  }
  local_res9 = '\0';
  bVar6 = IsInGameThread();
  if (!bVar6) {
    if (local_res9 != '\0') {
      FGCScopeGuard::~FGCScopeGuard(&local_res8);
    }
    FGCScopeGuard::FGCScopeGuard(&local_res8);
    local_res9 = '\x01';
  }
  pFVar10 = (FImportAsyncHelper *)(this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  pFVar9 = pFVar10;
  pFVar11 = (FImportAsyncHelper *)0x0;
  if (pFVar10 != (FImportAsyncHelper *)0x0) {
    aVar5 = *(atomic<int> *)&pFVar10->_padding_;
    do {
      pFVar9 = (FImportAsyncHelper *)0x0;
      pFVar11 = (FImportAsyncHelper *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14e4f1f65;
      LOCK();
      aVar7 = *(atomic<int> *)&pFVar10->_padding_;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        *(atomic<int> *)&pFVar10->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    pFVar11 = (this->WeakAsyncHelper).Object;
    pFVar9 = pFVar10;
    if (pFVar11 != (FImportAsyncHelper *)0x0) goto LAB_14e4f1fb1;
  }
LAB_14e4f1f65:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncHelper.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskTranslator.cpp"
                     ,0x1f,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar10 = pFVar9;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14e4f1fb1:
  uVar1 = this->SourceIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar11->Translators).ArrayNum)) {
    uVar8 = 0;
    if ((int)uVar1 < (pFVar11->Translators).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar2 = *(UObject **)((pFVar11->Translators).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)
    ;
    if (pUVar2 != (UObject *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable(pUVar2);
      }
      if (((((pFVar11->AssetImportResult).Object)->Results).field0_0x0.DebugPtr ==
           (UInterchangeResultsContainer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AsyncHelper->AssetImportResult->GetResults() != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskTranslator.cpp"
                             ,0x27,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(longlong *)&pUVar2[1].field_0x8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Translator->SourceData != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskTranslator.cpp"
                             ,0x28,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = (((pFVar11->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UInterchangeResultsContainer *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar3);
      }
      *(UInterchangeResultsContainer **)(pUVar2 + 1) = pUVar3;
      uVar1 = this->SourceIndex;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (pFVar11->BaseNodeContainers).ArrayNum)) {
        uVar8 = 0;
        if ((int)uVar1 < (pFVar11->BaseNodeContainers).ArrayNum) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(longlong *)
              ((pFVar11->BaseNodeContainers).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) != 0
            ) && ((pFVar11->bCancel).field_0x0 == '\0')) {
          uVar1 = this->SourceIndex;
          uVar8 = 0;
          if ((int)uVar1 < (pFVar11->BaseNodeContainers).ArrayNum) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(*(longlong *)pUVar2 + 0x2d8))
                    (pUVar2,*(undefined8 *)
                             ((pFVar11->BaseNodeContainers).AllocatorInstance.Data +
                             (longlong)(int)uVar1 * 8));
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  if (local_res9 != '\0') {
    FGCScopeGuard::~FGCScopeGuard(&local_res8);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f98e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall
UE::Interchange::FTaskTranslator::GetTaskThread(FTaskTranslator *this)

{
  FImportAsyncHelper *pFVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar4 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f9910;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    pFVar1 = (this->WeakAsyncHelper).Object;
    if ((pFVar1 != (FImportAsyncHelper *)0x0) && (pFVar1->bRunSynchronous != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return GameThread;
    }
  }
LAB_14e4f9910:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return AsyncThread;
}

