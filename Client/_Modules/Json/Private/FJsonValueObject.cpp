// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 7

// FJsonValueObject @ 141dc4d90

FJsonValueObject * __thiscall
FJsonValueObject::FJsonValueObject(FJsonValueObject *this,TSharedPtr<FJsonObject,1> *param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FJsonValueObject__6B_;
  (this->Value).Object = param_1->Object;
  (this->Value).SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FJsonObject *)0x0;
  *(undefined4 *)&this->_padding_ = 6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FJsonValueObject @ 141dc6580

void __thiscall FJsonValueObject::~FJsonValueObject(FJsonValueObject *this)

{
  this->_padding_ = (longlong)&___7FJsonValueObject__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Value).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FJsonValue__6B_;
  return;
}

// GetAllocatedSize @ 141dd5150

ulong64 __thiscall FJsonValueObject::GetAllocatedSize(FJsonValueObject *this)

{
  FJsonObject *this_00;
  ulong64 uVar1;
  
  this_00 = (this->Value).Object;
  if (this_00 != (FJsonObject *)0x0) {
    uVar1 = FJsonObject::GetAllocatedSize(this_00);
    return uVar1 + 0x50;
  }
  return 0;
}

// GetMemoryFootprint @ 141dd68a0

ulong64 __thiscall FJsonValueObject::GetMemoryFootprint(FJsonValueObject *this)

{
  FJsonObject *this_00;
  ulong64 uVar1;
  
  this_00 = (this->Value).Object;
  if (this_00 != (FJsonObject *)0x0) {
    uVar1 = FJsonObject::GetAllocatedSize(this_00);
    return uVar1 + 0x70;
  }
  return 0x20;
}

// GetType @ 141dd7430

FString * __thiscall
FJsonValueObject::GetType(FJsonValueObject *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Object");
  return __return_storage_ptr__;
}

// TryGetObject @ 141dfbf40

bool __thiscall
FJsonValueObject::TryGetObject(FJsonValueObject *this,TSharedPtr<FJsonObject,1> **param_1)

{
  *param_1 = &this->Value;
  return true;
}

// TryGetObject @ 141dfbf50

bool __thiscall
FJsonValueObject::TryGetObject(FJsonValueObject *this,TSharedPtr<FJsonObject,1> **param_1)

{
  *param_1 = &this->Value;
  return true;
}

