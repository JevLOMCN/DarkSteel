// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialUniformExpressionExternalTextureParameter @ 147fa40b0

FMaterialUniformExpressionExternalTextureParameter * __thiscall
FMaterialUniformExpressionExternalTextureParameter::
FMaterialUniformExpressionExternalTextureParameter
          (FMaterialUniformExpressionExternalTextureParameter *this,FName param_1,int param_2)

{
  this->_padding_ = -1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionExternalTextureParameter__6B_;
  *(int *)&this->_padding_ = param_2;
  this->ParameterName = param_1;
  return this;
}

// FMaterialUniformExpressionExternalTextureParameter @ 147fa40f0

FMaterialUniformExpressionExternalTextureParameter * __thiscall
FMaterialUniformExpressionExternalTextureParameter::
FMaterialUniformExpressionExternalTextureParameter
          (FMaterialUniformExpressionExternalTextureParameter *this)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionExternalTextureParameter__6B_;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// GetExternalTextureParameterInfo @ 147fd2830

void __thiscall
FMaterialUniformExpressionExternalTextureParameter::GetExternalTextureParameterInfo
          (FMaterialUniformExpressionExternalTextureParameter *this,
          FMaterialExternalTextureParameterInfo *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  uVar3 = *(undefined8 *)((longlong)&this->_padding_ + 4);
  (param_1->ExternalTextureGuid).A = (int)uVar2;
  (param_1->ExternalTextureGuid).B = (int)((ulonglong)uVar2 >> 0x20);
  (param_1->ExternalTextureGuid).C = (int)uVar3;
  (param_1->ExternalTextureGuid).D = (int)((ulonglong)uVar3 >> 0x20);
  param_1->SourceTextureIndex = (int)this->_padding_;
  FVar1 = this->ParameterName;
  (param_1->ParameterName).ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (param_1->ParameterName).DisplayIndex.Value = 0;
  (param_1->ParameterName).Number = FVar1.Number;
  return;
}

// GetExternalTextureParameterUniformExpression @ 147fd2870

FMaterialUniformExpressionExternalTextureParameter * __thiscall
FMaterialUniformExpressionExternalTextureParameter::GetExternalTextureParameterUniformExpression
          (FMaterialUniformExpressionExternalTextureParameter *this)

{
  return this;
}

// GetType @ 147fda0e0

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionExternalTextureParameter::GetType
          (FMaterialUniformExpressionExternalTextureParameter *this)

{
  return &StaticType;
}

// IsIdentical @ 147fe2a60

bool __thiscall
FMaterialUniformExpressionExternalTextureParameter::IsIdentical
          (FMaterialUniformExpressionExternalTextureParameter *this,
          FMaterialUniformExpression *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  lVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
  lVar4 = (*pcVar1)(this);
  if (((lVar4 == lVar3) && (this->ParameterName == (FName)param_1[2]._padding_)) &&
     (bVar2 = FMaterialUniformExpressionExternalTextureBase::IsIdentical
                        ((FMaterialUniformExpressionExternalTextureBase *)this,param_1), bVar2)) {
    return true;
  }
  return false;
}

