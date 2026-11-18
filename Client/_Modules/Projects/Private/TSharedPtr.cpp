// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 4

// TSharedPtr<FProjectDescriptor,1><FProjectDescriptor> @ 141e03860

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FProjectDescriptor,1> * __thiscall
TSharedPtr<FProjectDescriptor,1>::TSharedPtr<FProjectDescriptor,1><FProjectDescriptor>
          (TSharedPtr<FProjectDescriptor,1> *this,TRawPtrProxy<FProjectDescriptor> *param_1)

{
  FProjectDescriptor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFProjectDescriptor__U__DefaultDeleter_UFProjectDescriptor___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_> @ 141e038d0

TSharedPtr<FJsonValue,1> * __thiscall
TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><TJsonValueString<wchar_t>_>
          (TSharedPtr<FJsonValue,1> *this,TRawPtrProxy<TJsonValueString<wchar_t>_> *param_1)

{
  TJsonValueString<wchar_t> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FJsonValue *)param_1->Object;
  pTVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TJsonValueString__W__U__DefaultDeleter_V__TJsonValueString__W___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pTVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonObject,1><FJsonObject> @ 141e03940

TSharedPtr<FJsonObject,1> * __thiscall
TSharedPtr<FJsonObject,1>::TSharedPtr<FJsonObject,1><FJsonObject>
          (TSharedPtr<FJsonObject,1> *this,TRawPtrProxy<FJsonObject> *param_1)

{
  FJsonObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonObject__U__DefaultDeleter_VFJsonObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FJsonValue,1><FJsonValueObject> @ 141e039b0

TSharedPtr<FJsonValue,1> * __thiscall
TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
          (TSharedPtr<FJsonValue,1> *this,TRawPtrProxy<FJsonValueObject> *param_1)

{
  FJsonValueObject *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FJsonValue *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFJsonValueObject__U__DefaultDeleter_VFJsonValueObject___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

