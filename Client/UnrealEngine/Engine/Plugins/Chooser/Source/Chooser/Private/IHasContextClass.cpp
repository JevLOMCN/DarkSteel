// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 6

// ~IHasContextClass @ 14a87e5e0

void __thiscall IHasContextClass::~IHasContextClass(IHasContextClass *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7IHasContextClass__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContextClassChanged).field_0x8,
             *(int *)&(this->OnContextClassChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnContextClassChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextClassChanged);
  return;
}

// Compile @ 14a8832c0

void __thiscall IHasContextClass::Compile(IHasContextClass *this,bool param_1)

{
  return;
}

// GetContextData @ 14a889bd0

TArrayView<FInstancedStruct_const_,int> * __thiscall
IHasContextClass::GetContextData
          (IHasContextClass *this,TArrayView<FInstancedStruct_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FInstancedStruct *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetContextOwnerAsset @ 14a889e00

UObject * __thiscall IHasContextClass::GetContextOwnerAsset(IHasContextClass *this)

{
  return (UObject *)0x0;
}

// GetContextOwnerName @ 14a889e20

FString * __thiscall
IHasContextClass::GetContextOwnerName(IHasContextClass *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// _getUObject @ 14a892d40

UObject * __thiscall IHasContextClass::_getUObject(IHasContextClass *this)

{
  return (UObject *)0x0;
}

