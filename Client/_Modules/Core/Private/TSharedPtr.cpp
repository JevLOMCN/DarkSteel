// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 51

// operator= @ 1416217b0

TSharedPtr<IConsoleVariable,1> * __thiscall
TSharedPtr<IConsoleVariable,1>::operator=
          (TSharedPtr<IConsoleVariable,1> *this,TSharedPtr<IConsoleVariable,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  if (this == param_1) {
    return this;
  }
  this->Object = param_1->Object;
  param_1->Object = (IConsoleVariable *)0x0;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar4 = (this->SharedReferenceCount).ReferenceController;
  if (pTVar3 != pTVar4) {
    (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    (this->SharedReferenceCount).ReferenceController = pTVar3;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)pTVar4->_padding_)(pTVar4);
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      return this;
    }
  }
  return this;
}

// TSharedPtr<FLocMetadataValue,1><FLocMetadataValueArray> @ 1416c9210

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueArray>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueArray> *param_1)

{
  FLocMetadataValueArray *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FLocMetadataValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueArray__U__DefaultDeleter_VFLocMetadataValueArray___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FLocMetadataValue,1><FLocMetadataValueBoolean> @ 1416c9320

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueBoolean>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueBoolean> *param_1)

{
  FLocMetadataValueBoolean *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FLocMetadataValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueBoolean__U__DefaultDeleter_VFLocMetadataValueBoolean___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FLocMetadataValue,1><FLocMetadataValueObject> @ 1416c9430

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueObject>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueObject> *param_1)

{
  FLocMetadataValueObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FLocMetadataValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueObject__U__DefaultDeleter_VFLocMetadataValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FLocMetadataValue,1><FLocMetadataValueString> @ 1416c9540

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::TSharedPtr<FLocMetadataValue,1><FLocMetadataValueString>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueString> *param_1)

{
  FLocMetadataValueString *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FLocMetadataValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueString__U__DefaultDeleter_VFLocMetadataValueString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<icu_64::DecimalFormat> @ 1416c96f0

TSharedPtr<icu_64::DecimalFormat,1> * __thiscall
TSharedPtr<icu_64::DecimalFormat,1>::operator=<icu_64::DecimalFormat>
          (TSharedPtr<icu_64::DecimalFormat,1> *this,TRawPtrProxy<icu_64::DecimalFormat> *param_1)

{
  DecimalFormat *pDVar1;
  TSharedPtr<icu_64::DecimalFormat,1> local_18;
  
  pDVar1 = param_1->Object;
  local_18.Object = pDVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VDecimalFormat_icu_64__U__DefaultDeleter_VDecimalFormat_icu_64___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pDVar1;
  }
  if (this != &local_18) {
    this->Object = pDVar1;
    local_18.Object = (DecimalFormat *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FICUBreakIterator> @ 1416c9780

TSharedPtr<IBreakIterator,1> * __thiscall
TSharedPtr<IBreakIterator,1>::operator=<FICUBreakIterator>
          (TSharedPtr<IBreakIterator,1> *this,TRawPtrProxy<FICUBreakIterator> *param_1)

{
  FICUBreakIterator *pFVar1;
  TSharedPtr<IBreakIterator,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IBreakIterator *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFICUBreakIterator__U__DefaultDeleter_VFICUBreakIterator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IBreakIterator *)pFVar1;
    local_18.Object = (IBreakIterator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FICULineBreakIterator> @ 1416c9810

TSharedPtr<IBreakIterator,1> * __thiscall
TSharedPtr<IBreakIterator,1>::operator=<FICULineBreakIterator>
          (TSharedPtr<IBreakIterator,1> *this,TRawPtrProxy<FICULineBreakIterator> *param_1)

{
  FICULineBreakIterator *pFVar1;
  TSharedPtr<IBreakIterator,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IBreakIterator *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFICULineBreakIterator__U__DefaultDeleter_VFICULineBreakIterator___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IBreakIterator *)pFVar1;
    local_18.Object = (IBreakIterator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLocMetadataObject> @ 1416c98a0

TSharedPtr<FLocMetadataObject,1> * __thiscall
TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>
          (TSharedPtr<FLocMetadataObject,1> *this,TRawPtrProxy<FLocMetadataObject> *param_1)

{
  FLocMetadataObject *pFVar1;
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataObject__U__DefaultDeleter_VFLocMetadataObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLocMetadataValueArray> @ 1416c9930

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueArray>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueArray> *param_1)

{
  FLocMetadataValueArray *pFVar1;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FLocMetadataValue *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueArray__U__DefaultDeleter_VFLocMetadataValueArray___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FLocMetadataValue *)pFVar1;
    local_18.Object = (FLocMetadataValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLocMetadataValueBoolean> @ 1416c99c0

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueBoolean>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueBoolean> *param_1)

{
  FLocMetadataValueBoolean *pFVar1;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FLocMetadataValue *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueBoolean__U__DefaultDeleter_VFLocMetadataValueBoolean___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FLocMetadataValue *)pFVar1;
    local_18.Object = (FLocMetadataValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLocMetadataValueObject> @ 1416c9a50

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueObject>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueObject> *param_1)

{
  FLocMetadataValueObject *pFVar1;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FLocMetadataValue *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueObject__U__DefaultDeleter_VFLocMetadataValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FLocMetadataValue *)pFVar1;
    local_18.Object = (FLocMetadataValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FLocMetadataValueString> @ 1416c9ae0

TSharedPtr<FLocMetadataValue,1> * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator=<FLocMetadataValueString>
          (TSharedPtr<FLocMetadataValue,1> *this,TRawPtrProxy<FLocMetadataValueString> *param_1)

{
  FLocMetadataValueString *pFVar1;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (FLocMetadataValue *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataValueString__U__DefaultDeleter_VFLocMetadataValueString___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (FLocMetadataValue *)pFVar1;
    local_18.Object = (FLocMetadataValue *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator*<FLocMetadataObject> @ 1416c9dc0

FLocMetadataObject * __thiscall
TSharedPtr<FLocMetadataObject,1>::operator*<FLocMetadataObject>
          (TSharedPtr<FLocMetadataObject,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *pFVar3;
  
  if (this->Object != (FLocMetadataObject *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocMetadataObject *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator*<FLocMetadataValue> @ 1416c9e10

FLocMetadataValue * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator*<FLocMetadataValue>(TSharedPtr<FLocMetadataValue,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataValue *pFVar3;
  
  if (this->Object != (FLocMetadataValue *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocMetadataValue *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1416da880

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FCulture * __thiscall TSharedPtr<FCulture,1>::operator->(TSharedPtr<FCulture,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FCulture *pFVar3;
  
  if (this->Object != (FCulture *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCulture *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1417157d0

TSharedRef<FArchiveEntry,1> * __thiscall
TSharedPtr<FArchiveEntry,1>::ToSharedRef
          (TSharedPtr<FArchiveEntry,1> *this,TSharedRef<FArchiveEntry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FArchiveEntry,1> *pTVar4;
  
  if (this->Object == (FArchiveEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FArchiveEntry,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FArchiveEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FArchiveEntry,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 141715870

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedRef<FCulture,1> * __thiscall
TSharedPtr<FCulture,1>::ToSharedRef
          (TSharedPtr<FCulture,1> *this,TSharedRef<FCulture,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FCulture,1> *pTVar4;
  
  if (this->Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FCulture,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FCulture,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_GenderForm> @ 1417224d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<ITextFormatArgumentModifier,1> * __thiscall
TSharedPtr<ITextFormatArgumentModifier,1>::
TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_GenderForm>
          (TSharedPtr<ITextFormatArgumentModifier,1> *this,
          TRawPtrProxy<FTextFormatArgumentModifier_GenderForm> *param_1)

{
  FTextFormatArgumentModifier_GenderForm *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ITextFormatArgumentModifier *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextFormatArgumentModifier_GenderForm__U__DefaultDeleter_VFTextFormatArgumentModifier_GenderForm___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_HangulPostPositions> @ 141722540

TSharedPtr<ITextFormatArgumentModifier,1> * __thiscall
TSharedPtr<ITextFormatArgumentModifier,1>::
TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_HangulPostPositions>
          (TSharedPtr<ITextFormatArgumentModifier,1> *this,
          TRawPtrProxy<FTextFormatArgumentModifier_HangulPostPositions> *param_1)

{
  FTextFormatArgumentModifier_HangulPostPositions *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ITextFormatArgumentModifier *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextFormatArgumentModifier_HangulPostPositions__U__DefaultDeleter_VFTextFormatArgumentModifier_HangulPostPositions___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_PluralForm> @ 1417225b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<ITextFormatArgumentModifier,1> * __thiscall
TSharedPtr<ITextFormatArgumentModifier,1>::
TSharedPtr<ITextFormatArgumentModifier,1><FTextFormatArgumentModifier_PluralForm>
          (TSharedPtr<ITextFormatArgumentModifier,1> *this,
          TRawPtrProxy<FTextFormatArgumentModifier_PluralForm> *param_1)

{
  FTextFormatArgumentModifier_PluralForm *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (ITextFormatArgumentModifier *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTextFormatArgumentModifier_PluralForm__U__DefaultDeleter_VFTextFormatArgumentModifier_PluralForm___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 141739c10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
TSharedPtr<FCulture,1>::operator=(TSharedPtr<FCulture,1> *this,TSharedPtr<FCulture,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FCulture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14173b6b0

FLocalizationResourceTextSource * __thiscall
TSharedPtr<FLocalizationResourceTextSource,1>::operator->
          (TSharedPtr<FLocalizationResourceTextSource,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocalizationResourceTextSource *pFVar3;
  
  if (this->Object != (FLocalizationResourceTextSource *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocalizationResourceTextSource *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14173b700

FStringTableReferenceData * __thiscall
TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1>::operator->
          (TSharedPtr<FTextHistory_StringTableEntry::FStringTableReferenceData,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FStringTableReferenceData *pFVar3;
  
  if (this->Object != (FStringTableReferenceData *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FStringTableReferenceData *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<FBasicMessageLog> @ 1417873c0

TSharedPtr<IMessageLog,1> * __thiscall
TSharedPtr<IMessageLog,1>::operator=<FBasicMessageLog>
          (TSharedPtr<IMessageLog,1> *this,TRawPtrProxy<FBasicMessageLog> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FBasicMessageLog *pFVar4;
  FBasicMessageLog *pFVar5;
  longlong *plVar6;
  FSharedReferencer<1> FVar7;
  TSharedPtr<IMessageLog,1> local_18;
  
  pFVar4 = param_1->Object;
  local_18.Object = (IMessageLog *)pFVar4;
  FVar7.ReferenceController = ::operator_new(0x18);
  if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (FVar7.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar7.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBasicMessageLog__U__DefaultDeleter_VFBasicMessageLog___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    FVar7.ReferenceController[1]._padding_ = (longlong)pFVar4;
  }
  pFVar5 = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
  if ((pFVar5 != (FBasicMessageLog *)0x0) &&
     (((plVar1 = &pFVar5->_padding_, pFVar5->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar5->_padding_ = (longlong)pFVar5;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)*plVar1) {
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar1;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *plVar1 = (longlong)FVar7.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (this != &local_18) {
    this->Object = (IMessageLog *)pFVar4;
    local_18.Object = (IMessageLog *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
    FVar7.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return this;
}

// TSharedPtr<FCsvProfilerThreadData,1><FCsvProfilerThreadData> @ 141903250

TSharedPtr<FCsvProfilerThreadData,1> * __thiscall
TSharedPtr<FCsvProfilerThreadData,1>::TSharedPtr<FCsvProfilerThreadData,1><FCsvProfilerThreadData>
          (TSharedPtr<FCsvProfilerThreadData,1> *this,TRawPtrProxy<FCsvProfilerThreadData> *param_1)

{
  FCsvProfilerThreadData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFCsvProfilerThreadData__U__DefaultDeleter_VFCsvProfilerThreadData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14191dfe0

FPreloadableFile * __thiscall
TSharedPtr<FPreloadableFile,1>::operator->(TSharedPtr<FPreloadableFile,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPreloadableFile *pFVar3;
  
  if (this->Object != (FPreloadableFile *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPreloadableFile *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<FLocMetadataObject,1><FLocMetadataObject> @ 141bcea80

TSharedPtr<FLocMetadataObject,1> * __thiscall
TSharedPtr<FLocMetadataObject,1>::TSharedPtr<FLocMetadataObject,1><FLocMetadataObject>
          (TSharedPtr<FLocMetadataObject,1> *this,TRawPtrProxy<FLocMetadataObject> *param_1)

{
  FLocMetadataObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLocMetadataObject__U__DefaultDeleter_VFLocMetadataObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 141bed200

TSharedPtr<FArchiveEntry,1> * __thiscall
TSharedPtr<FArchiveEntry,1>::operator=
          (TSharedPtr<FArchiveEntry,1> *this,TSharedPtr<FArchiveEntry,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FArchiveEntry *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator= @ 141bed240

TSharedPtr<FLocMetadataObject,1> * __thiscall
TSharedPtr<FLocMetadataObject,1>::operator=
          (TSharedPtr<FLocMetadataObject,1> *this,FNullTag *param_1)

{
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  local_18.Object = (FLocMetadataObject *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 141bed470

FArchiveEntry * __thiscall
TSharedPtr<FArchiveEntry,1>::operator->(TSharedPtr<FArchiveEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FArchiveEntry *pFVar3;
  
  if (this->Object != (FArchiveEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FArchiveEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 141bed4c0

FLocMetadataObject * __thiscall
TSharedPtr<FLocMetadataObject,1>::operator->(TSharedPtr<FLocMetadataObject,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataObject *pFVar3;
  
  if (this->Object != (FLocMetadataObject *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocMetadataObject *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 141bed510

FLocMetadataValue * __thiscall
TSharedPtr<FLocMetadataValue,1>::operator->(TSharedPtr<FLocMetadataValue,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FLocMetadataValue *pFVar3;
  
  if (this->Object != (FLocMetadataValue *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLocMetadataValue *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 141bed560

FManifestEntry * __thiscall
TSharedPtr<FManifestEntry,1>::operator->(TSharedPtr<FManifestEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FManifestEntry *pFVar3;
  
  if (this->Object != (FManifestEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FManifestEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_> @ 141ccd7c0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<ISmoothie<1>_>_> *param_1)

{
  TFunctionInstanceProvider<ISmoothie<1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IInstanceProvider *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_U__ISmoothie__00_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_U__ISmoothie__00_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_> @ 141ccd830

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IBerry>_> *param_1)

{
  TFunctionInstanceProvider<IBerry> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IInstanceProvider *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_UIBerry_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_UIBerry_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_> @ 141ccd8a0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<IFruit>_> *param_1)

{
  TFunctionInstanceProvider<IFruit> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IInstanceProvider *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_UIFruit_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_UIFruit_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IBerry>_> @ 141ccda90

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IBerry>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<IBerry>_> *param_1)

{
  TSharedInstanceProvider<IBerry> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IInstanceProvider *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSharedInstanceProvider_UIBerry_____TTypeContainer__00__U__DefaultDeleter_U__TSharedInstanceProvider_UIBerry_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IFruit>_> @ 141ccdb00

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1><TTypeContainer<1>::TSharedInstanceProvider<IFruit>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<IFruit>_> *param_1)

{
  TSharedInstanceProvider<IFruit> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IInstanceProvider *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSharedInstanceProvider_UIFruit_____TTypeContainer__00__U__DefaultDeleter_U__TSharedInstanceProvider_UIFruit_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<void,1><TSmoothie<1>_> @ 141ccdb70

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::TSharedPtr<void,1><TSmoothie<1>_>
          (TSharedPtr<void,1> *this,TRawPtrProxy<TSmoothie<1>_> *param_1)

{
  TSmoothie<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSmoothie__00__U__DefaultDeleter_U__TSmoothie__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<void,1><FBanana> @ 141ccdd20

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::TSharedPtr<void,1><FBanana>
          (TSharedPtr<void,1> *this,TRawPtrProxy<FBanana> *param_1)

{
  FBanana *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFBanana__U__DefaultDeleter_UFBanana___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<void,1><FStrawberry> @ 141ccded0

TSharedPtr<void,1> * __thiscall
TSharedPtr<void,1>::TSharedPtr<void,1><FStrawberry>
          (TSharedPtr<void,1> *this,TRawPtrProxy<FStrawberry> *param_1)

{
  FStrawberry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFStrawberry__U__DefaultDeleter_UFStrawberry___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_> @ 141cce1b0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<TSmoothie<1>_>_> *param_1)

{
  TFunctionInstanceProvider<TSmoothie<1>_> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_U__TSmoothie__00_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_> @ 141cce240

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<FBanana>_> *param_1)

{
  TFunctionInstanceProvider<FBanana> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_UFBanana_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_UFBanana_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_> @ 141cce2d0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TFunctionInstanceProvider<FStrawberry>_> *param_1)

{
  TFunctionInstanceProvider<FStrawberry> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TFunctionInstanceProvider_UFStrawberry_____TTypeContainer__00__U__DefaultDeleter_U__TFunctionInstanceProvider_UFStrawberry_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_> @ 141cce360

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<TSmoothie<1>_>_> *param_1)

{
  TSharedInstanceProvider<TSmoothie<1>_> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSharedInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__U__DefaultDeleter_U__TSharedInstanceProvider_U__TSmoothie__00_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_> @ 141cce3f0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<FBanana>_> *param_1)

{
  TSharedInstanceProvider<FBanana> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSharedInstanceProvider_UFBanana_____TTypeContainer__00__U__DefaultDeleter_U__TSharedInstanceProvider_UFBanana_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_> @ 141cce480

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TSharedInstanceProvider<FStrawberry>_> *param_1)

{
  TSharedInstanceProvider<FStrawberry> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TSharedInstanceProvider_UFStrawberry_____TTypeContainer__00__U__DefaultDeleter_U__TSharedInstanceProvider_UFStrawberry_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_> @ 141cce510

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<TSmoothie<1>_>_> *param_1)

{
  TThreadInstanceProvider<TSmoothie<1>_> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TThreadInstanceProvider_U__TSmoothie__00_____TTypeContainer__00__U__DefaultDeleter_U__TThreadInstanceProvider_U__TSmoothie__00_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_> @ 141cce5a0

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<FBanana>_> *param_1)

{
  TThreadInstanceProvider<FBanana> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TThreadInstanceProvider_UFBanana_____TTypeContainer__00__U__DefaultDeleter_U__TThreadInstanceProvider_UFBanana_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_> @ 141cce630

TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> * __thiscall
TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>::
operator=<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_>
          (TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> *this,
          TRawPtrProxy<TTypeContainer<1>::TThreadInstanceProvider<FStrawberry>_> *param_1)

{
  TThreadInstanceProvider<FStrawberry> *pTVar1;
  TSharedPtr<TTypeContainer<1>::IInstanceProvider,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = (IInstanceProvider *)pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_U__TThreadInstanceProvider_UFStrawberry_____TTypeContainer__00__U__DefaultDeleter_U__TThreadInstanceProvider_UFStrawberry_____TTypeContainer__00___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = (IInstanceProvider *)pTVar1;
    local_18.Object = (IInstanceProvider *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

