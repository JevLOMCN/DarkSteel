// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FMaterialUniformExpressionRuntimeVirtualTextureUniform @ 147fa4130

FMaterialUniformExpressionRuntimeVirtualTextureUniform * __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::
FMaterialUniformExpressionRuntimeVirtualTextureUniform
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this,
          FMaterialParameterInfo *param_1,int param_2,int param_3)

{
  FName FVar1;
  
  this->_padding_ = -1;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionRuntimeVirtualTextureUniform__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->bParameter = true;
  FVar1 = param_1->Name;
  (this->ParameterInfo).Name.ComparisonIndex.Value = FVar1.ComparisonIndex.Value.Value;
  (this->ParameterInfo).Name.DisplayIndex.Value = 0;
  (this->ParameterInfo).Name.Number = FVar1.Number;
  (this->ParameterInfo).Index = param_1->Index;
  (this->ParameterInfo).Association.Value = (param_1->Association).Value;
  this->TextureIndex = param_2;
  this->VectorIndex = param_3;
  return this;
}

// FMaterialUniformExpressionRuntimeVirtualTextureUniform @ 147fa4180

FMaterialUniformExpressionRuntimeVirtualTextureUniform * __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::
FMaterialUniformExpressionRuntimeVirtualTextureUniform
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this,int param_1,int param_2)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionRuntimeVirtualTextureUniform__6B_;
  this->bParameter = false;
  (this->ParameterInfo).Name.ComparisonIndex = 0;
  (this->ParameterInfo).Name.DisplayIndex = 0;
  (this->ParameterInfo).Name.Number = 0;
  (this->ParameterInfo).Index = -1;
  (this->ParameterInfo).Association.Value = '\x02';
  this->TextureIndex = param_1;
  this->VectorIndex = param_2;
  return this;
}

// FMaterialUniformExpressionRuntimeVirtualTextureUniform @ 147fa41d0

FMaterialUniformExpressionRuntimeVirtualTextureUniform * __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::
FMaterialUniformExpressionRuntimeVirtualTextureUniform
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionRuntimeVirtualTextureUniform__6B_;
  this->bParameter = false;
  (this->ParameterInfo).Name.ComparisonIndex = 0;
  (this->ParameterInfo).Name.DisplayIndex = 0;
  (this->ParameterInfo).Name.Number = 0;
  (this->ParameterInfo).Index = -1;
  (this->ParameterInfo).Association.Value = '\x02';
  this->TextureIndex = -1;
  this->VectorIndex = -1;
  return this;
}

// GetType @ 147fda0f0

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::GetType
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this)

{
  return &StaticType;
}

// IsConstant @ 147fe24d0

bool __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::IsConstant
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this)

{
  return false;
}

// IsIdentical @ 147fe2ae0

bool __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::IsIdentical
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this,
          FMaterialUniformExpression *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  lVar2 = (**(code **)(param_1->_padding_ + 8))(param_1);
  lVar3 = (*pcVar1)(this);
  if (lVar3 == lVar2) {
    local_18 = (uint)*(undefined8 *)((longlong)&param_1[1]._padding_ + 4);
    if (((((this->ParameterInfo).Name.ComparisonIndex.Value == local_18) &&
         ((this->ParameterInfo).Name.Number == *(uint *)((longlong)&param_1[1]._padding_ + 4))) &&
        ((this->ParameterInfo).Association.Value == (uchar)param_1[1].UniformIndex)) &&
       ((((this->ParameterInfo).Index == param_1[1].UniformOffset &&
         (this->TextureIndex == (int)param_1[2]._padding_)) &&
        (this->VectorIndex == *(int *)((longlong)&param_1[2]._padding_ + 4))))) {
      return true;
    }
  }
  return false;
}

// WriteNumberOpcodes @ 1480019e0

void __thiscall
FMaterialUniformExpressionRuntimeVirtualTextureUniform::WriteNumberOpcodes
          (FMaterialUniformExpressionRuntimeVirtualTextureUniform *this,FPreshaderData *param_1)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FScriptName local_28;
  int iStack_1c;
  undefined4 local_18 [4];
  
  if (this->bParameter == false) {
    local_28.ComparisonIndex.Value = 0;
    local_28.DisplayIndex.Value = 0;
    local_28.Number = 0;
    iStack_1c = -1;
    local_18[0] = CONCAT31(local_18[0]._1_3_,2);
  }
  else {
    local_28.ComparisonIndex.Value = (this->ParameterInfo).Name.ComparisonIndex.Value;
    local_28.DisplayIndex.Value = (this->ParameterInfo).Name.DisplayIndex.Value;
    local_28.Number = (this->ParameterInfo).Name.Number;
    iStack_1c = (this->ParameterInfo).Index;
    local_18[0] = *(undefined4 *)&(this->ParameterInfo).Association;
  }
  local_res8[0] = 0x2b;
  UE::Shader::FPreshaderData::WriteData(param_1,local_res8,1);
  UE::Shader::FPreshaderData::WriteName(param_1,&local_28);
  UE::Shader::FPreshaderData::WriteData(param_1,&iStack_1c,4);
  UE::Shader::FPreshaderData::WriteData(param_1,local_18,1);
  local_res10[0] = this->TextureIndex;
  UE::Shader::FPreshaderData::WriteData(param_1,local_res10,4);
  local_res18[0] = this->VectorIndex;
  UE::Shader::FPreshaderData::WriteData(param_1,local_res18,4);
  return;
}

