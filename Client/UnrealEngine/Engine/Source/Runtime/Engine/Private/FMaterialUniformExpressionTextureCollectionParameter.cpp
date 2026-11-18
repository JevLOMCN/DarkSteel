// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialUniformExpressionTextureCollectionParameter @ 147fa4450

FMaterialUniformExpressionTextureCollectionParameter * __thiscall
FMaterialUniformExpressionTextureCollectionParameter::
FMaterialUniformExpressionTextureCollectionParameter
          (FMaterialUniformExpressionTextureCollectionParameter *this,
          FMaterialParameterInfo *param_1,int param_2,int param_3,bool param_4)

{
  FName FVar1;
  
  *(bool *)&this->_padding_ = param_4;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTextureCollectionParameter__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = -1;
  *(int *)&this->_padding_ = param_2;
  *(int *)((longlong)&this->_padding_ + 4) = param_3;
  FVar1 = param_1->Name;
  (this->ParameterInfo).Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->ParameterInfo).Name.Number = FVar1.Number;
  (this->ParameterInfo).Name.DisplayIndex.Value = 0;
  (this->ParameterInfo).Index = param_1->Index;
  (this->ParameterInfo).Association.Value = (param_1->Association).Value;
  return this;
}

// GetTextureCollectionParameterInfo @ 147fd8d90

void __thiscall
FMaterialUniformExpressionTextureCollectionParameter::GetTextureCollectionParameterInfo
          (FMaterialUniformExpressionTextureCollectionParameter *this,
          FMaterialTextureCollectionParameterInfo *param_1)

{
  undefined8 uVar1;
  FNameEntryId FVar2;
  undefined3 uVar3;
  
  param_1->TextureCollectionIndex = (int)this->_padding_;
  param_1->bIsVirtualCollection = SUB81(this->_padding_,0);
  FVar2.Value = (this->ParameterInfo).Name.DisplayIndex.Value;
  uVar1 = *(undefined8 *)&(this->ParameterInfo).Name.Number;
  (param_1->ParameterInfo).Name.ComparisonIndex =
       (FNameEntryId)(this->ParameterInfo).Name.ComparisonIndex.Value;
  (param_1->ParameterInfo).Name.DisplayIndex = (FNameEntryId)FVar2.Value;
  *(undefined8 *)&(param_1->ParameterInfo).Name.Number = uVar1;
  uVar3 = *(undefined3 *)&(this->ParameterInfo).field_0x11;
  (param_1->ParameterInfo).Association =
       (TEnumAsByte<EMaterialParameterAssociation>)(this->ParameterInfo).Association.Value;
  *(undefined3 *)&(param_1->ParameterInfo).field_0x11 = uVar3;
  return;
}

// GetTextureCollectionParameterUniformExpression @ 147fd8dd0

FMaterialUniformExpressionTextureCollectionParameter * __thiscall
FMaterialUniformExpressionTextureCollectionParameter::GetTextureCollectionParameterUniformExpression
          (FMaterialUniformExpressionTextureCollectionParameter *this)

{
  return this;
}

// GetType @ 147fda130

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionTextureCollectionParameter::GetType
          (FMaterialUniformExpressionTextureCollectionParameter *this)

{
  return &StaticType;
}

// IsConstant @ 147fe24f0

bool __thiscall
FMaterialUniformExpressionTextureCollectionParameter::IsConstant
          (FMaterialUniformExpressionTextureCollectionParameter *this)

{
  return false;
}

// IsIdentical @ 147fe2d30

bool __thiscall
FMaterialUniformExpressionTextureCollectionParameter::IsIdentical
          (FMaterialUniformExpressionTextureCollectionParameter *this,
          FMaterialUniformExpression *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_18;
  
  pcVar2 = *(code **)(this->_padding_ + 8);
  lVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
  lVar4 = (*pcVar2)(this);
  if (lVar4 == lVar3) {
    uVar1 = param_1[1].UniformOffset;
    if (((((this->ParameterInfo).Name.ComparisonIndex.Value == uVar1) &&
         ((this->ParameterInfo).Name.Number == (uint)param_1[2]._padding_)) &&
        ((this->ParameterInfo).Association.Value == (uchar)param_1[2]._padding_)) &&
       ((this->ParameterInfo).Index == *(int *)((longlong)&param_1[2]._padding_ + 4))) {
      pcVar2 = *(code **)(param_1->_padding_ + 8);
      lVar3 = (**(code **)(this->_padding_ + 8))(this);
      lVar4 = (*pcVar2)(param_1);
      if ((lVar3 == lVar4) && ((int)this->_padding_ == (int)param_1[1]._padding_)) {
        return true;
      }
    }
  }
  return false;
}

