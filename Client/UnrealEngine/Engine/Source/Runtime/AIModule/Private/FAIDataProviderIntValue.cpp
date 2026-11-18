// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f12570

UScriptStruct * __cdecl FAIDataProviderIntValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderIntValue,(UObject *)pUVar1,
                         L"AIDataProviderIntValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderIntValue.OuterSingleton;
}

// FAIDataProviderIntValue @ 146f288a0

FAIDataProviderIntValue * __thiscall
FAIDataProviderIntValue::FAIDataProviderIntValue(FAIDataProviderIntValue *this)

{
  FFieldClass *pFVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAIDataProviderIntValue__6B_;
  this->DefaultValue = 0;
  pFVar1 = FIntProperty::StaticClass();
  this->_padding_ = (longlong)pFVar1;
  return this;
}

// GetValue @ 146f5aa80

int __thiscall FAIDataProviderIntValue::GetValue(FAIDataProviderIntValue *this)

{
  int *piVar1;
  
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    piVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
    if (piVar1 != (int *)0x0) {
      return *piVar1;
    }
  }
  return this->DefaultValue;
}

// ValueToString @ 146f7cc70

FString * __thiscall
FAIDataProviderIntValue::ValueToString
          (FAIDataProviderIntValue *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

