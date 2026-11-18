// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 5

// DestroyObject @ 141e19a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FProjectDescriptor,SharedPointerInternals::DefaultDeleter<FProjectDescriptor>,1>
::DestroyObject(TReferenceControllerWithDeleter<FProjectDescriptor,SharedPointerInternals::DefaultDeleter<FProjectDescriptor>,1>
                *this)

{
  FProjectDescriptor *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FProjectDescriptor *)0x0) {
    FProjectDescriptor::~FProjectDescriptor(this_00);
    ::operator_delete(this_00,0x138);
    return;
  }
  return;
}

// DestroyObject @ 141e19a80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonValueString<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonValueString<wchar_t>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TJsonValueString<wchar_t>,SharedPointerInternals::DefaultDeleter<TJsonValueString<wchar_t>_>,1>
                *this)

{
  TJsonValueString<wchar_t> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TJsonValueString<wchar_t> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e19a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 0xa0))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141e19aa0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonObject,SharedPointerInternals::DefaultDeleter<FJsonObject>,1>::
DestroyObject(TReferenceControllerWithDeleter<FJsonObject,SharedPointerInternals::DefaultDeleter<FJsonObject>,1>
              *this)

{
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this->Object;
  if (this_00 !=
      (TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&this_00[1].field_0x10 = 0;
    if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00[1].field_0x8);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 141e19af0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FJsonValueObject,SharedPointerInternals::DefaultDeleter<FJsonValueObject>,1>
::DestroyObject(TReferenceControllerWithDeleter<FJsonValueObject,SharedPointerInternals::DefaultDeleter<FJsonValueObject>,1>
                *this)

{
  FJsonValueObject *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FJsonValueObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141e19b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 141e19b10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPlugin,SharedPointerInternals::DefaultDeleter<FPlugin>,1>::
DestroyObject(TReferenceControllerWithDeleter<FPlugin,SharedPointerInternals::DefaultDeleter<FPlugin>,1>
              *this)

{
  if (this->Object != (FPlugin *)0x0) {
    FPlugin::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

