// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// StaticStruct @ 146f125f0

UScriptStruct * __cdecl FAIDataProviderBoolValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderBoolValue,(UObject *)pUVar1,
                         L"AIDataProviderBoolValue");
  }
  return Z_Registration_Info_UScriptStruct_FAIDataProviderBoolValue.OuterSingleton;
}

// FAIDataProviderBoolValue @ 146f28800

FAIDataProviderBoolValue * __thiscall
FAIDataProviderBoolValue::FAIDataProviderBoolValue(FAIDataProviderBoolValue *this)

{
  FFieldClass *pFVar1;
  
  this->DefaultValue = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAIDataProviderBoolValue__6B_;
  pFVar1 = FBoolProperty::StaticClass();
  this->_padding_ = (longlong)pFVar1;
  return this;
}

// GetValue @ 146f5aa00

bool __thiscall FAIDataProviderBoolValue::GetValue(FAIDataProviderBoolValue *this)

{
  undefined1 *puVar1;
  
  if ((FProperty *)this->_padding_ != (FProperty *)0x0) {
    puVar1 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       ((FProperty *)this->_padding_,(UObject *)this->_padding_,0);
    if (puVar1 != (undefined1 *)0x0) {
      return (bool)*puVar1;
    }
  }
  return this->DefaultValue;
}

// ValueToString @ 146f7cbf0

FString * __thiscall
FAIDataProviderBoolValue::ValueToString
          (FAIDataProviderBoolValue *this,FString *__return_storage_ptr__)

{
  FCoreTexts *pFVar1;
  FString *pFVar2;
  
  pFVar1 = FCoreTexts::Get();
  if (this->DefaultValue == false) {
    pFVar1 = (FCoreTexts *)&pFVar1->False;
  }
  pFVar2 = FText::ToString(pFVar1->True);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  return __return_storage_ptr__;
}

