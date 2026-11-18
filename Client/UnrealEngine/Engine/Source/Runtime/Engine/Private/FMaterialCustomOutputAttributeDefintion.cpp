// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMaterialCustomOutputAttributeDefintion @ 147ef00e0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FMaterialCustomOutputAttributeDefintion * __thiscall
FMaterialCustomOutputAttributeDefintion::FMaterialCustomOutputAttributeDefintion
          (FMaterialCustomOutputAttributeDefintion *this,FGuid *param_1,UClass *param_2,
          FString *param_3,FString *param_4,int param_5,bool param_6,EMaterialProperty param_7,
          EMaterialValueType param_8,TVector4<double> *param_9,EShaderFrequency param_10,
          _func___cdecl_int_FMaterialCompiler_ptr_int_int_int *param_11)

{
  FMaterialAttributeDefintion::FMaterialAttributeDefintion
            ((FMaterialAttributeDefintion *)this,param_1,param_3,param_7,param_8,param_9,param_10,-1
             ,false,param_11);
  this->CustomOutputExpressionStaticClass = param_2;
  ::FString::FString(&this->FunctionName,param_4);
  this->OutputIndex = param_5;
  this->bNeedsPreviousFrameEvaluation = param_6;
  return this;
}

// FMaterialCustomOutputAttributeDefintion @ 147ef0190

FMaterialCustomOutputAttributeDefintion * __thiscall
FMaterialCustomOutputAttributeDefintion::FMaterialCustomOutputAttributeDefintion
          (FMaterialCustomOutputAttributeDefintion *this,
          FMaterialCustomOutputAttributeDefintion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&this->field_0x28 = uVar1;
  ::FString::FString((FString *)&this->field_0x30,(FString *)&param_1->field_0x30);
  *(undefined4 *)&this->field_0x40 = *(undefined4 *)&param_1->field_0x40;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&param_1->field_0x48;
  this->field_0x50 = param_1->field_0x50;
  *(undefined4 *)&this->field_0x54 = *(undefined4 *)&param_1->field_0x54;
  *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_1->field_0x58;
  this->field_0x60 = param_1->field_0x60;
  this->CustomOutputExpressionStaticClass = param_1->CustomOutputExpressionStaticClass;
  ::FString::FString(&this->FunctionName,&param_1->FunctionName);
  this->OutputIndex = param_1->OutputIndex;
  this->bNeedsPreviousFrameEvaluation = param_1->bNeedsPreviousFrameEvaluation;
  return this;
}

