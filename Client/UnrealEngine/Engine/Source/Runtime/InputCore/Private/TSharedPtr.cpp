// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InputCore
// Functions: 6

// operator=<FInputKeyManager> @ 14238bd90

TSharedPtr<FInputKeyManager,1> * __thiscall
TSharedPtr<FInputKeyManager,1>::operator=<FInputKeyManager>
          (TSharedPtr<FInputKeyManager,1> *this,TRawPtrProxy<FInputKeyManager> *param_1)

{
  FInputKeyManager *pFVar1;
  TSharedPtr<FInputKeyManager,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFInputKeyManager__U__DefaultDeleter_UFInputKeyManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FInputKeyManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FKeyDetails> @ 14238be20

TSharedPtr<FKeyDetails,1> * __thiscall
TSharedPtr<FKeyDetails,1>::operator=<FKeyDetails>
          (TSharedPtr<FKeyDetails,1> *this,TRawPtrProxy<FKeyDetails> *param_1)

{
  FKeyDetails *pFVar1;
  TSharedPtr<FKeyDetails,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFKeyDetails__U__DefaultDeleter_UFKeyDetails___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// TSharedPtr<FCulture,1> @ 14238d730

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TSharedPtr<FCulture,1> * __thiscall
TSharedPtr<FCulture,1>::TSharedPtr<FCulture,1>(TSharedPtr<FCulture,1> *this,FNullTag *param_1)

{
  this->Object = (FCulture *)0x0;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~TSharedPtr<FCulture,1> @ 14238dca0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall TSharedPtr<FCulture,1>::~TSharedPtr<FCulture,1>(TSharedPtr<FCulture,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// operator= @ 14238e070

TSharedPtr<FKeyDetails,1> * __thiscall
TSharedPtr<FKeyDetails,1>::operator=
          (TSharedPtr<FKeyDetails,1> *this,TSharedPtr<FKeyDetails,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FKeyDetails *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14238e160

FKeyDetails * __thiscall TSharedPtr<FKeyDetails,1>::operator->(TSharedPtr<FKeyDetails,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FKeyDetails *pFVar3;
  
  if (this->Object != (FKeyDetails *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FKeyDetails *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

