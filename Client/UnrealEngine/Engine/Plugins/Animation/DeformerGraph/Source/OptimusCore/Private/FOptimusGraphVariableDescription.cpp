// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// StaticStruct @ 14e111dd0

UScriptStruct * __cdecl FOptimusGraphVariableDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusGraphVariableDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusGraphVariableDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusGraphVariableDescription,
                         (UObject *)pUVar1,L"OptimusGraphVariableDescription");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusGraphVariableDescription.OuterSingleton;
}

// FOptimusGraphVariableDescription @ 14e151f40

FOptimusGraphVariableDescription * __thiscall
FOptimusGraphVariableDescription::FOptimusGraphVariableDescription
          (FOptimusGraphVariableDescription *this,FOptimusGraphVariableDescription *param_1)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  (this->ValueType).ValueTypePtr = (param_1->ValueType).ValueTypePtr;
  uVar2 = *(undefined3 *)&(param_1->ValueId).field_0x1;
  FVar3.Value = (param_1->ValueId).Name.ComparisonIndex.Value;
  (this->ValueId).Type = (param_1->ValueId).Type;
  *(undefined3 *)&(this->ValueId).field_0x1 = uVar2;
  (this->ValueId).Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  (this->ValueId).Name.Number = (param_1->ValueId).Name.Number;
  this->Offset = param_1->Offset;
  this->CachedArrayIndexStart = param_1->CachedArrayIndexStart;
  (this->Value_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value_DEPRECATED).AllocatorInstance.Data =
       (param_1->Value_DEPRECATED).AllocatorInstance.Data;
  (param_1->Value_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value_DEPRECATED).ArrayNum = (param_1->Value_DEPRECATED).ArrayNum;
  (this->Value_DEPRECATED).ArrayMax = (param_1->Value_DEPRECATED).ArrayMax;
  (param_1->Value_DEPRECATED).ArrayNum = 0;
  (param_1->Value_DEPRECATED).ArrayMax = 0;
  (this->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data =
       (param_1->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data;
  (param_1->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderValue_DEPRECATED).ShaderValue.ArrayNum =
       (param_1->ShaderValue_DEPRECATED).ShaderValue.ArrayNum;
  (this->ShaderValue_DEPRECATED).ShaderValue.ArrayMax =
       (param_1->ShaderValue_DEPRECATED).ShaderValue.ArrayMax;
  (param_1->ShaderValue_DEPRECATED).ShaderValue.ArrayNum = 0;
  (param_1->ShaderValue_DEPRECATED).ShaderValue.ArrayMax = 0;
  (this->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data =
       (param_1->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data;
  (param_1->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderValue_DEPRECATED).ArrayList.ArrayNum =
       (param_1->ShaderValue_DEPRECATED).ArrayList.ArrayNum;
  (this->ShaderValue_DEPRECATED).ArrayList.ArrayMax =
       (param_1->ShaderValue_DEPRECATED).ArrayList.ArrayMax;
  (param_1->ShaderValue_DEPRECATED).ArrayList.ArrayNum = 0;
  (param_1->ShaderValue_DEPRECATED).ArrayList.ArrayMax = 0;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr =
       *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr;
  uVar1 = *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x10 = uVar1;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->SourceObject_DEPRECATED).SoftObjectPtr.field_0x20 = 0;
  return this;
}

// FOptimusGraphVariableDescription @ 14e152030

FOptimusGraphVariableDescription * __thiscall
FOptimusGraphVariableDescription::FOptimusGraphVariableDescription
          (FOptimusGraphVariableDescription *this)

{
  undefined1 *this_00;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->ValueType).ValueTypePtr = (FShaderValueType *)0x0;
  (this->ValueId).Type = Invalid;
  (this->ValueId).Name.ComparisonIndex = 0;
  (this->ValueId).Name.Number = 0;
  this->Offset = 0;
  this->CachedArrayIndexStart = 0;
  (this->Value_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value_DEPRECATED).ArrayNum = 0;
  (this->Value_DEPRECATED).ArrayMax = 0;
  (this->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ShaderValue_DEPRECATED).ShaderValue.ArrayNum = 0;
  (this->ShaderValue_DEPRECATED).ShaderValue.ArrayMax = 0;
  (this->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderValue_DEPRECATED).ArrayList.ArrayNum = 0;
  (this->ShaderValue_DEPRECATED).ArrayList.ArrayMax = 0;
  this_00 = &(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// ~FOptimusGraphVariableDescription @ 14e1613a0

void __thiscall
FOptimusGraphVariableDescription::~FOptimusGraphVariableDescription
          (FOptimusGraphVariableDescription *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = *(void **)&(this->SourceObject_DEPRECATED).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FArrayShaderValue,int>
            ((FArrayShaderValue *)(this->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data,
             (this->ShaderValue_DEPRECATED).ArrayList.ArrayNum);
  pFVar2 = (this->ShaderValue_DEPRECATED).ArrayList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ShaderValue_DEPRECATED).ShaderValue.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Value_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

