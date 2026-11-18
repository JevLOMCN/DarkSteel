// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e114d20

UScriptStruct * __cdecl FOptimusValueDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusValueDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusValueDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValueDescription,(UObject *)pUVar1,
                         L"OptimusValueDescription");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusValueDescription.OuterSingleton;
}

// FOptimusValueDescription @ 14e156a10

FOptimusValueDescription * __thiscall
FOptimusValueDescription::FOptimusValueDescription
          (FOptimusValueDescription *this,FOptimusValueDescription *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  undefined8 uVar3;
  
  (this->DataType).TypeName = (param_1->DataType).TypeName;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr =
       *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  uVar3 = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x10 = uVar3;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->DataType).TypeObject.SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x20 = 0;
  this->ValueUsage = param_1->ValueUsage;
  pUVar1 = (param_1->Value).Value.Value.ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (param_1->Value).Value.Value.StructMemory;
  (this->Value).Value.Value.ScriptStruct.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Value).Value.Value.StructMemory = puVar2;
  (param_1->Value).Value.Value.ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (param_1->Value).Value.Value.StructMemory = (uchar *)0x0;
  (this->ShaderValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ShaderValue.AllocatorInstance.Data =
       (param_1->ShaderValue).ShaderValue.AllocatorInstance.Data;
  (param_1->ShaderValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ShaderValue.ArrayNum = (param_1->ShaderValue).ShaderValue.ArrayNum;
  (this->ShaderValue).ShaderValue.ArrayMax = (param_1->ShaderValue).ShaderValue.ArrayMax;
  (param_1->ShaderValue).ShaderValue.ArrayNum = 0;
  (param_1->ShaderValue).ShaderValue.ArrayMax = 0;
  (this->ShaderValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ArrayList.AllocatorInstance.Data =
       (param_1->ShaderValue).ArrayList.AllocatorInstance.Data;
  (param_1->ShaderValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ArrayList.ArrayNum = (param_1->ShaderValue).ArrayList.ArrayNum;
  (this->ShaderValue).ArrayList.ArrayMax = (param_1->ShaderValue).ArrayList.ArrayMax;
  (param_1->ShaderValue).ArrayList.ArrayNum = 0;
  (param_1->ShaderValue).ArrayList.ArrayMax = 0;
  return this;
}

// FOptimusValueDescription @ 14e156b00

FOptimusValueDescription * __thiscall
FOptimusValueDescription::FOptimusValueDescription(FOptimusValueDescription *this)

{
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
  this->ValueUsage = None;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->Value);
  (this->ShaderValue).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ShaderValue.ArrayNum = 0;
  (this->ShaderValue).ShaderValue.ArrayMax = 0;
  (this->ShaderValue).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue).ArrayList.ArrayNum = 0;
  (this->ShaderValue).ArrayList.ArrayMax = 0;
  return this;
}

