// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e1016e0

UScriptStruct * __cdecl FOptimusParameterBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusParameterBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusParameterBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusParameterBinding,(UObject *)pUVar1,
                         L"OptimusParameterBinding");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusParameterBinding.OuterSingleton;
}

// FOptimusParameterBinding @ 14e1557a0

FOptimusParameterBinding * __thiscall
FOptimusParameterBinding::FOptimusParameterBinding
          (FOptimusParameterBinding *this,FOptimusParameterBinding *param_1)

{
  (this->Name).Name = (param_1->Name).Name;
  (this->DataType).TypeName = (param_1->DataType).TypeName;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr =
       *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain,&param_1->DataDomain);
  this->bSupportAtomicIfCompatibleDataType = param_1->bSupportAtomicIfCompatibleDataType;
  this->bSupportRead = param_1->bSupportRead;
  return this;
}

// FOptimusParameterBinding @ 14e155810

FOptimusParameterBinding * __thiscall
FOptimusParameterBinding::FOptimusParameterBinding(FOptimusParameterBinding *this)

{
  (this->Name).Name = (FName)0x0;
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  (this->DataType).TypeName.ComparisonIndex = 0;
  (this->DataType).TypeName.Number = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FOptimusDataDomain::FOptimusDataDomain(&this->DataDomain);
  this->bSupportAtomicIfCompatibleDataType = false;
  this->bSupportRead = false;
  return this;
}

