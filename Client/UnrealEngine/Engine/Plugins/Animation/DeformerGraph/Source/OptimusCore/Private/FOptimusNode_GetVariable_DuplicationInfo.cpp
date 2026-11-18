// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e102030

UScriptStruct * __cdecl FOptimusNode_GetVariable_DuplicationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo,
                         (UObject *)pUVar1,L"OptimusNode_GetVariable_DuplicationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo.OuterSingleton;
}

// FOptimusNode_GetVariable_DuplicationInfo @ 14e155680

FOptimusNode_GetVariable_DuplicationInfo * __thiscall
FOptimusNode_GetVariable_DuplicationInfo::FOptimusNode_GetVariable_DuplicationInfo
          (FOptimusNode_GetVariable_DuplicationInfo *this)

{
  (this->VariableName).ComparisonIndex = 0;
  (this->VariableName).Number = 0;
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
  (this->DefaultValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultValue).Data.ArrayNum = 0;
  (this->DefaultValue).Data.ArrayMax = 0;
  return this;
}

