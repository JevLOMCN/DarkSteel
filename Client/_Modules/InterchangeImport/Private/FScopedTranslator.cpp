// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 3

// FScopedTranslator @ 14e6b5590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FScopedTranslator * __thiscall
UE::Interchange::Private::FScopedTranslator::FScopedTranslator
          (FScopedTranslator *this,FString *param_1,UInterchangeResultsContainer *param_2,
          TSharedPtr<UE::Interchange::FAnalyticsHelper,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FAnalyticsHelper *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UInterchangeSourceData *pUVar4;
  FUObjectItem *pFVar5;
  UInterchangeManager *this_00;
  UInterchangeTranslatorBase *pUVar6;
  
  (this->SourceTranslator).field0_0x0.DebugPtr = (UInterchangeTranslatorBase *)0x0;
  (this->PayloadSourceData).field0_0x0.DebugPtr = (UInterchangeSourceData *)0x0;
  UInterchangeManager::GetInterchangeManager();
  pUVar4 = UInterchangeManager::CreateSourceData(param_1);
  if ((GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UInterchangeSourceData *)0x0))
  {
    (this->PayloadSourceData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UInterchangeSourceData *)0x0) goto LAB_14e6b56ad;
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar4);
    (this->PayloadSourceData).field0_0x0.DebugPtr = pUVar4;
  }
  pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
  FUObjectItem::SetRootFlags(pFVar5,Async);
  this_00 = UInterchangeManager::GetInterchangeManager();
  pUVar6 = UInterchangeManager::GetTranslatorForSourceData
                     (this_00,(this->PayloadSourceData).field0_0x0.DebugPtr);
  if ((GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar6 == (UInterchangeTranslatorBase *)0x0)) {
    (this->SourceTranslator).field0_0x0.DebugPtr = pUVar6;
    if (pUVar6 == (UInterchangeTranslatorBase *)0x0) goto LAB_14e6b56ad;
  }
  else {
    GC::MarkAsReachable((UObject *)pUVar6);
    (this->SourceTranslator).field0_0x0.DebugPtr = pUVar6;
  }
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  pFVar2 = param_3->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pUVar6->AnalyticsHelper).SharedReferenceCount.ReferenceController;
  (pUVar6->AnalyticsHelper).Object = pFVar2;
  (pUVar6->AnalyticsHelper).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar5 = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)((longlong)&((this->SourceTranslator).field0_0x0.DebugPtr)->_padding_
                              + 4));
  FUObjectItem::SetRootFlags(pFVar5,Async);
  if (param_2 != (UInterchangeResultsContainer *)0x0) {
    pUVar6 = (this->SourceTranslator).field0_0x0.DebugPtr;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    (pUVar6->Results).field0_0x0.DebugPtr = param_2;
  }
LAB_14e6b56ad:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FScopedTranslator @ 14e6b99d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::Interchange::Private::FScopedTranslator::~FScopedTranslator(FScopedTranslator *this)

{
  UInterchangeSourceData *pUVar1;
  UInterchangeTranslatorBase *pUVar2;
  FUObjectItem *pFVar3;
  
  pUVar1 = (this->PayloadSourceData).field0_0x0.DebugPtr;
  if (pUVar1 != (UInterchangeSourceData *)0x0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4))
    ;
    FUObjectItem::ClearRootFlags(pFVar3,Async);
  }
  pUVar2 = (this->SourceTranslator).field0_0x0.DebugPtr;
  if (pUVar2 != (UInterchangeTranslatorBase *)0x0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4))
    ;
    FUObjectItem::ClearRootFlags(pFVar3,Async);
  }
  (this->PayloadSourceData).field0_0x0.DebugPtr = (UInterchangeSourceData *)0x0;
  (this->SourceTranslator).field0_0x0.DebugPtr = (UInterchangeTranslatorBase *)0x0;
  return;
}

// IsValid @ 14e6ce940

bool __thiscall UE::Interchange::Private::FScopedTranslator::IsValid(FScopedTranslator *this)

{
  return (this->SourceTranslator).field0_0x0.DebugPtr != (UInterchangeTranslatorBase *)0x0;
}

