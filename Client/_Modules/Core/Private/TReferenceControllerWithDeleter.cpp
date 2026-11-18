// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 53

// DestroyObject @ 1415be4f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTSTicker::FElement,SharedPointerInternals::DefaultDeleter<FTSTicker::FElement>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTSTicker::FElement,SharedPointerInternals::DefaultDeleter<FTSTicker::FElement>,1>
                *this)

{
  FElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FElement *)0x0) {
    if (*(longlong *)&pFVar1->Function != 0) {
      plVar2 = *(longlong **)&(pFVar1->Function).field_0x28;
      plVar3 = (longlong *)&(pFVar1->Function).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    ::operator_delete(pFVar1,0x50);
    return;
  }
  return;
}

// DestroyObject @ 1416346b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<int>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<int>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<FConsoleVariable<int>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<int>_>,1>
                *this)

{
  FConsoleVariable<int> *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FConsoleVariable<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416346c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416346d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<float>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<float>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<FConsoleVariable<float>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<float>_>,1>
                *this)

{
  FConsoleVariable<float> *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FConsoleVariable<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416346e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416346f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<FString>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<FString>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<FConsoleVariable<FString>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<FString>_>,1>
                *this)

{
  FConsoleVariable<FString> *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FConsoleVariable<FString> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141634710

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FConsoleVariable<bool>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<bool>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<FConsoleVariable<bool>,SharedPointerInternals::DefaultDeleter<FConsoleVariable<bool>_>,1>
                *this)

{
  FConsoleVariable<bool> *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FConsoleVariable<bool> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141634730

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FGenericProcessSentinel,SharedPointerInternals::DefaultDeleter<FGenericProcessSentinel>,1>
::DestroyObject(TReferenceControllerWithDeleter<FGenericProcessSentinel,SharedPointerInternals::DefaultDeleter<FGenericProcessSentinel>,1>
                *this)

{
  FGenericProcessSentinel *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FGenericProcessSentinel *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141634741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb430

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::BreakIterator,SharedPointerInternals::DefaultDeleter<icu_64::BreakIterator>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::BreakIterator,SharedPointerInternals::DefaultDeleter<icu_64::BreakIterator>,1>
                *this)

{
  BreakIterator *pBVar1;
  
  pBVar1 = this->Object;
  if (pBVar1 != (BreakIterator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pBVar1->_padding_)(pBVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::Collator,SharedPointerInternals::DefaultDeleter<icu_64::Collator>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::Collator,SharedPointerInternals::DefaultDeleter<icu_64::Collator>,1>
                *this)

{
  Collator *pCVar1;
  
  pCVar1 = this->Object;
  if (pCVar1 != (Collator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pCVar1)(pCVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::DateFormat,SharedPointerInternals::DefaultDeleter<icu_64::DateFormat>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::DateFormat,SharedPointerInternals::DefaultDeleter<icu_64::DateFormat>,1>
                *this)

{
  DateFormat *pDVar1;
  
  pDVar1 = this->Object;
  if (pDVar1 != (DateFormat *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pDVar1->_padding_)(pDVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb490

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::DecimalFormat,SharedPointerInternals::DefaultDeleter<icu_64::DecimalFormat>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::DecimalFormat,SharedPointerInternals::DefaultDeleter<icu_64::DecimalFormat>,1>
                *this)

{
  DecimalFormat *pDVar1;
  
  pDVar1 = this->Object;
  if (pDVar1 != (DecimalFormat *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pDVar1->_padding_)(pDVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb4b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FArchiveEntry,SharedPointerInternals::DefaultDeleter<FArchiveEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FArchiveEntry,SharedPointerInternals::DefaultDeleter<FArchiveEntry>,1>
                *this)

{
  FArchiveEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FArchiveEntry *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->KeyMetadataObj).SharedReferenceCount.ReferenceController);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Translation).MetadataObj.SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->Translation).Text.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Source).MetadataObj.SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->Source).Text.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Key).Str.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Namespace).Str.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x88);
    return;
  }
  return;
}

// DestroyObject @ 1416eb540

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCulture,SharedPointerInternals::DefaultDeleter<FCulture>,1>::
DestroyObject(TReferenceControllerWithDeleter<FCulture,SharedPointerInternals::DefaultDeleter<FCulture>,1>
              *this)

{
  if (this->Object != (FCulture *)0x0) {
    FCulture::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb560

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEvent,`FSharedEventRef::FSharedEventRef'::__l1::<lambda_4_>,1>::
DestroyObject(void *this)

{
  atomic<void_*> aVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FLockFreePointerListLIFORoot<64,1> *this_00;
  FIndexedLockFreeLink *pFVar5;
  
  aVar1 = *(atomic<void_*> *)((longlong)this + 0x10);
  this_00 = (FLockFreePointerListLIFORoot<64,1> *)TLazySingleton<TEventPool<0>_>::Get();
  if (aVar1 == (atomic<void_*>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Event",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                       ,0x9c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*(longlong *)aVar1 + 0x18))(aVar1);
  uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar4 == 0) {
    pFVar5 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
  }
  pFVar5->Payload = aVar1;
  FLockFreePointerListLIFORoot<64,1>::Push(this_00,uVar4);
  return;
}

// DestroyObject @ 1416eb600

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICUBreakIterator,SharedPointerInternals::DefaultDeleter<FICUBreakIterator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FICUBreakIterator,SharedPointerInternals::DefaultDeleter<FICUBreakIterator>,1>
                *this)

{
  FICUBreakIterator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FICUBreakIterator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb620

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICUCamelCaseBreakIterator,SharedPointerInternals::DefaultDeleter<FICUCamelCaseBreakIterator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FICUCamelCaseBreakIterator,SharedPointerInternals::DefaultDeleter<FICUCamelCaseBreakIterator>,1>
                *this)

{
  FICUCamelCaseBreakIterator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FICUCamelCaseBreakIterator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb640

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FICULineBreakIterator,SharedPointerInternals::DefaultDeleter<FICULineBreakIterator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FICULineBreakIterator,SharedPointerInternals::DefaultDeleter<FICULineBreakIterator>,1>
                *this)

{
  FICULineBreakIterator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FICULineBreakIterator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb660

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataObject,SharedPointerInternals::DefaultDeleter<FLocMetadataObject>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLocMetadataObject,SharedPointerInternals::DefaultDeleter<FLocMetadataObject>,1>
                *this)

{
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this->Object;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 1416eb6b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueArray,SharedPointerInternals::DefaultDeleter<FLocMetadataValueArray>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLocMetadataValueArray,SharedPointerInternals::DefaultDeleter<FLocMetadataValueArray>,1>
                *this)

{
  FLocMetadataValueArray *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLocMetadataValueArray *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb6c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb6d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueBoolean,SharedPointerInternals::DefaultDeleter<FLocMetadataValueBoolean>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLocMetadataValueBoolean,SharedPointerInternals::DefaultDeleter<FLocMetadataValueBoolean>,1>
                *this)

{
  FLocMetadataValueBoolean *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLocMetadataValueBoolean *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb6e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb6f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueObject,SharedPointerInternals::DefaultDeleter<FLocMetadataValueObject>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLocMetadataValueObject,SharedPointerInternals::DefaultDeleter<FLocMetadataValueObject>,1>
                *this)

{
  FLocMetadataValueObject *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLocMetadataValueObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb710

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLocMetadataValueString,SharedPointerInternals::DefaultDeleter<FLocMetadataValueString>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLocMetadataValueString,SharedPointerInternals::DefaultDeleter<FLocMetadataValueString>,1>
                *this)

{
  FLocMetadataValueString *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FLocMetadataValueString *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416eb721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1416eb730

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FManifestEntry,SharedPointerInternals::DefaultDeleter<FManifestEntry>,1>
::DestroyObject(TReferenceControllerWithDeleter<FManifestEntry,SharedPointerInternals::DefaultDeleter<FManifestEntry>,1>
                *this)

{
  FManifestEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FManifestEntry *)0x0) {
    DestructItems<FManifestContext,int>
              ((FManifestContext *)(pFVar1->Contexts).AllocatorInstance.Data,
               (pFVar1->Contexts).ArrayNum);
    pFVar2 = (pFVar1->Contexts).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Source).MetadataObj.SharedReferenceCount.ReferenceController);
    pFVar2 = (pFVar1->Source).Text.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Namespace).Str.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x48);
    return;
  }
  return;
}

// DestroyObject @ 1416eb7a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FText::FSortPredicate::FSortPredicateImplementation,SharedPointerInternals::DefaultDeleter<FText::FSortPredicate::FSortPredicateImplementation>,1>
::DestroyObject(TReferenceControllerWithDeleter<FText::FSortPredicate::FSortPredicateImplementation,SharedPointerInternals::DefaultDeleter<FText::FSortPredicate::FSortPredicateImplementation>,1>
                *this)

{
  FSortPredicateImplementation *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSortPredicateImplementation *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->ICUCollator).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 1416eb7e0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::RegexMatcher,SharedPointerInternals::DefaultDeleter<icu_64::RegexMatcher>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::RegexMatcher,SharedPointerInternals::DefaultDeleter<icu_64::RegexMatcher>,1>
                *this)

{
  RegexMatcher *this_00;
  
  this_00 = this->Object;
  if (this_00 != (RegexMatcher *)0x0) {
    icu_64::RegexMatcher::~RegexMatcher(this_00);
    icu_64::UMemory::operator_delete(this_00);
    return;
  }
  return;
}

// DestroyObject @ 1416eb810

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<icu_64::RegexPattern,SharedPointerInternals::DefaultDeleter<icu_64::RegexPattern>,1>
::DestroyObject(TReferenceControllerWithDeleter<icu_64::RegexPattern,SharedPointerInternals::DefaultDeleter<icu_64::RegexPattern>,1>
                *this)

{
  RegexPattern *this_00;
  
  this_00 = this->Object;
  if (this_00 != (RegexPattern *)0x0) {
    icu_64::RegexPattern::~RegexPattern(this_00);
    icu_64::UMemory::operator_delete(this_00);
    return;
  }
  return;
}

// DestroyObject @ 1417513b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_GenderForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_GenderForm>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextFormatArgumentModifier_GenderForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_GenderForm>,1>
                *this)

{
  FTextFormatArgumentModifier_GenderForm *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextFormatArgumentModifier_GenderForm *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417513c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1417513d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_HangulPostPositions,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_HangulPostPositions>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextFormatArgumentModifier_HangulPostPositions,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_HangulPostPositions>,1>
                *this)

{
  FTextFormatArgumentModifier_HangulPostPositions *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextFormatArgumentModifier_HangulPostPositions *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417513e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1417513f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextFormatArgumentModifier_PluralForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_PluralForm>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextFormatArgumentModifier_PluralForm,SharedPointerInternals::DefaultDeleter<FTextFormatArgumentModifier_PluralForm>,1>
                *this)

{
  FTextFormatArgumentModifier_PluralForm *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextFormatArgumentModifier_PluralForm *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141751401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1417c3e10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBasicMessageLog,SharedPointerInternals::DefaultDeleter<FBasicMessageLog>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBasicMessageLog,SharedPointerInternals::DefaultDeleter<FBasicMessageLog>,1>
                *this)

{
  FBasicMessageLog *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBasicMessageLog *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001417c3e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1418d6c50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMapErrorToken,SharedPointerInternals::DefaultDeleter<FMapErrorToken>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMapErrorToken,SharedPointerInternals::DefaultDeleter<FMapErrorToken>,1>
                *this)

{
  FMapErrorToken *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMapErrorToken *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d6c61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1419346b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FArchive,SharedPointerInternals::DefaultDeleter<FArchive>,1>::
DestroyObject(TReferenceControllerWithDeleter<FArchive,SharedPointerInternals::DefaultDeleter<FArchive>,1>
              *this)

{
  FArchive *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FArchive *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001419346c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1419346d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCsvProfilerThreadData,SharedPointerInternals::DefaultDeleter<FCsvProfilerThreadData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCsvProfilerThreadData,SharedPointerInternals::DefaultDeleter<FCsvProfilerThreadData>,1>
                *this)

{
  FCsvProfilerThreadData *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FCsvProfilerThreadData *)0x0) {
    FCsvProfilerThreadData::~FCsvProfilerThreadData(this_00);
    ::operator_delete(this_00,0xb8);
    return;
  }
  return;
}

// DestroyObject @ 141934710

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCsvThreadGroupStatProcessor,SharedPointerInternals::DefaultDeleter<FCsvThreadGroupStatProcessor>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCsvThreadGroupStatProcessor,SharedPointerInternals::DefaultDeleter<FCsvThreadGroupStatProcessor>,1>
                *this)

{
  if (this->Object != (FCsvThreadGroupStatProcessor *)0x0) {
    FCsvThreadGroupStatProcessor::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 141934730

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FModuleManager::FModuleInfo,SharedPointerInternals::DefaultDeleter<FModuleManager::FModuleInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FModuleManager::FModuleInfo,SharedPointerInternals::DefaultDeleter<FModuleManager::FModuleInfo>,1>
                *this)

{
  FModuleInfo *pFVar1;
  IModuleInterface *pIVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FModuleInfo *)0x0) {
    pIVar2 = (pFVar1->Module).Ptr;
    if (pIVar2 != (IModuleInterface *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    pFVar3 = (pFVar1->Filename).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (pFVar1->OriginalFilename).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x38);
    return;
  }
  return;
}

// DestroyObject @ 141a7df30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNameBatchAsyncLoader,SharedPointerInternals::DefaultDeleter<FNameBatchAsyncLoader>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNameBatchAsyncLoader,SharedPointerInternals::DefaultDeleter<FNameBatchAsyncLoader>,1>
                *this)

{
  FNameBatchAsyncLoader *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNameBatchAsyncLoader *)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar1->DoneEvent);
    pFVar2 = (pFVar1->Out).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    if ((void *)pFVar1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar1->_padding_);
    }
    ::operator_delete(pFVar1,0x60);
    return;
  }
  return;
}

// DestroyObject @ 141aa4a90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsProcessSentinel,SharedPointerInternals::DefaultDeleter<FWindowsProcessSentinel>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWindowsProcessSentinel,SharedPointerInternals::DefaultDeleter<FWindowsProcessSentinel>,1>
                *this)

{
  FWindowsProcessSentinel *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWindowsProcessSentinel *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141aa4aa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbcf0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_>,1>
                *this)

{
  TFunctionInstanceProvider<ISmoothie<1>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<ISmoothie<1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbd01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbd10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_>,1>
                *this)

{
  TFunctionInstanceProvider<TSmoothie<1>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<TSmoothie<1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbd30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_>,1>
                *this)

{
  TFunctionInstanceProvider<FBanana> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<FBanana> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbd41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbd50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_>,1>
                *this)

{
  TFunctionInstanceProvider<FStrawberry> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<FStrawberry> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbd61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbd70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_>,1>
                *this)

{
  TFunctionInstanceProvider<IBerry> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<IBerry> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbd81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbd90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_>,1>
                *this)

{
  TFunctionInstanceProvider<IFruit> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TFunctionInstanceProvider<IFruit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbdb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_>,1>
                *this)

{
  TSharedInstanceProvider<TSmoothie<1>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<TSmoothie<1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbdc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbdd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_>,1>
                *this)

{
  TSharedInstanceProvider<FBanana> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<FBanana> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbde1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbdf0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_>,1>
                *this)

{
  TSharedInstanceProvider<FStrawberry> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<FStrawberry> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbe01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbe10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IBerry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IBerry>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IBerry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IBerry>_>,1>
                *this)

{
  TSharedInstanceProvider<IBerry> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<IBerry> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbe21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbe30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IFruit>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IFruit>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IFruit>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IFruit>_>,1>
                *this)

{
  TSharedInstanceProvider<IFruit> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<IFruit> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbe41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbe50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TSmoothie<1>,SharedPointerInternals::DefaultDeleter<TSmoothie<1>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TSmoothie<1>,SharedPointerInternals::DefaultDeleter<TSmoothie<1>_>,1>
                *this)

{
  TSmoothie<1> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSmoothie<1> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbe61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbe70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_>,1>
                *this)

{
  TThreadInstanceProvider<TSmoothie<1>_> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TThreadInstanceProvider<TSmoothie<1>_> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbe81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbe90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<FBanana>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_>,1>
                *this)

{
  TThreadInstanceProvider<FBanana> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TThreadInstanceProvider<FBanana> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbeb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_>,1>
                *this)

{
  TThreadInstanceProvider<FStrawberry> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TThreadInstanceProvider<FStrawberry> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbed0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBanana,SharedPointerInternals::DefaultDeleter<FBanana>,1>::
DestroyObject(TReferenceControllerWithDeleter<FBanana,SharedPointerInternals::DefaultDeleter<FBanana>,1>
              *this)

{
  FBanana *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBanana *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141cfbef0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStrawberry,SharedPointerInternals::DefaultDeleter<FStrawberry>,1>::
DestroyObject(TReferenceControllerWithDeleter<FStrawberry,SharedPointerInternals::DefaultDeleter<FStrawberry>,1>
              *this)

{
  FStrawberry *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStrawberry *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141cfbf01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

