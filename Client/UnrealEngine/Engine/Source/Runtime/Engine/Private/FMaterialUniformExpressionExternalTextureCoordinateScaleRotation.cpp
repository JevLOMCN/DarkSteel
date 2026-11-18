// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// IsIdentical @ 147fe29d0

bool __thiscall
FMaterialUniformExpressionExternalTextureCoordinateScaleRotation::IsIdentical
          (FMaterialUniformExpressionExternalTextureCoordinateScaleRotation *this,
          FMaterialUniformExpression *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  pcVar2 = *(code **)(param_1->_padding_ + 8);
  lVar4 = (**(code **)(this->_padding_ + 8))();
  lVar5 = (*pcVar2)(param_1);
  if (((lVar4 == lVar5) &&
      (bVar3 = FMaterialUniformExpressionExternalTextureBase::IsIdentical
                         ((FMaterialUniformExpressionExternalTextureBase *)this,param_1), bVar3)) &&
     (uVar1 = (this->ParameterName).field0_0x0.TypedValue.ComparisonIndex.Value,
     (uVar1 != 0xffffffff) == ((int)param_1[2]._padding_ != -1))) {
    if (uVar1 == 0xffffffff) {
      return true;
    }
    return (this->ParameterName).field0_0x0 == *(TOptional<FName>_u_0 *)(param_1 + 2);
  }
  return false;
}

// WriteNumberOpcodes @ 148001940

void __thiscall
FMaterialUniformExpressionExternalTextureCoordinateScaleRotation::WriteNumberOpcodes
          (FMaterialUniformExpressionExternalTextureCoordinateScaleRotation *this,
          FPreshaderData *param_1)

{
  FName FVar1;
  undefined1 local_res8 [8];
  FScriptName local_18;
  
  local_18.Number = 0;
  if ((this->ParameterName).field0_0x0.TypedValue.ComparisonIndex.Value == 0xffffffff) {
    local_18.ComparisonIndex.Value = 0;
    local_18.DisplayIndex.Value = 0;
  }
  else {
    FVar1 = (this->ParameterName).field0_0x0.TypedValue;
    local_18.Number = FVar1.Number;
    local_18._0_8_ = (ulonglong)FVar1 & 0xffffffff;
  }
  local_res8[0] = 0x29;
  UE::Shader::FPreshaderData::WriteData(param_1,local_res8,1);
  UE::Shader::FPreshaderData::WriteName(param_1,&local_18);
  UE::Shader::FPreshaderData::WriteData(param_1,(void *)((longlong)&this->_padding_ + 4),0x10);
  UE::Shader::FPreshaderData::WriteData(param_1,&this->_padding_,4);
  return;
}

