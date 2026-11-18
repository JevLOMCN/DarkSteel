// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f125b0

UScriptStruct * __cdecl FAIDataProviderFloatValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderFloatValue,(UObject *)pUVar1,
                         L"AIDataProviderFloatValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderFloatValue.OuterSingleton;
}

// FAIDataProviderFloatValue @ 146f28850

FAIDataProviderFloatValue * __thiscall
FAIDataProviderFloatValue::FAIDataProviderFloatValue(FAIDataProviderFloatValue *this)

{
  FFieldClass *pFVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAIDataProviderFloatValue__6B_;
  this->DefaultValue = 0.0;
  pFVar1 = FFloatProperty::StaticClass();
  this->_padding_ = (longlong)pFVar1;
  return this;
}

// GetValue @ 146f5aa40

float __thiscall FAIDataProviderFloatValue::GetValue(FAIDataProviderFloatValue *this)

{
  float *pfVar1;
  
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    pfVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
    if (pfVar1 != (float *)0x0) {
      return *pfVar1;
    }
  }
  return this->DefaultValue;
}

// ValueToString @ 146f7cc40

FString * __thiscall
FAIDataProviderFloatValue::ValueToString
          (FAIDataProviderFloatValue *this,FString *__return_storage_ptr__)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)this->DefaultValue,1);
  return __return_storage_ptr__;
}

