// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e100eb0

UScriptStruct * __cdecl FOptimusNode_ResourceAccessorBase_DuplicationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo
                         ,(UObject *)pUVar1,L"OptimusNode_ResourceAccessorBase_DuplicationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNode_ResourceAccessorBase_DuplicationInfo.
         OuterSingleton;
}

// FOptimusNode_ResourceAccessorBase_DuplicationInfo @ 14e155710

FOptimusNode_ResourceAccessorBase_DuplicationInfo * __thiscall
FOptimusNode_ResourceAccessorBase_DuplicationInfo::FOptimusNode_ResourceAccessorBase_DuplicationInfo
          (FOptimusNode_ResourceAccessorBase_DuplicationInfo *this)

{
  (this->ResourceName).ComparisonIndex = 0;
  (this->ResourceName).Number = 0;
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
  return this;
}

