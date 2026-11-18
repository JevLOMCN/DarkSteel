// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetExternalTextureParameterInfo @ 147fd2810

void __thiscall
FMaterialUniformExpressionExternalTexture::GetExternalTextureParameterInfo
          (FMaterialUniformExpressionExternalTexture *this,
          FMaterialExternalTextureParameterInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)&this->field_0x20;
  uVar2 = *(undefined4 *)&this->field_0x24;
  uVar3 = *(undefined4 *)&this->field_0x28;
  (param_1->ExternalTextureGuid).A = *(undefined4 *)&this->field_0x1c;
  (param_1->ExternalTextureGuid).B = uVar1;
  (param_1->ExternalTextureGuid).C = uVar2;
  (param_1->ExternalTextureGuid).D = uVar3;
  param_1->SourceTextureIndex = *(int *)&this->field_0x18;
  return;
}

// GetExternalTextureParameterUniformExpression @ 147fd2860

FMaterialUniformExpressionExternalTextureParameter * __thiscall
FMaterialUniformExpressionExternalTexture::GetExternalTextureParameterUniformExpression
          (FMaterialUniformExpressionExternalTexture *this)

{
  return (FMaterialUniformExpressionExternalTextureParameter *)0x0;
}

// GetExternalTextureUniformExpression @ 147fd2890

FMaterialUniformExpressionExternalTexture * __thiscall
FMaterialUniformExpressionExternalTexture::GetExternalTextureUniformExpression
          (FMaterialUniformExpressionExternalTexture *this)

{
  return this;
}

// GetType @ 147fda0c0

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionExternalTexture::GetType(FMaterialUniformExpressionExternalTexture *this)

{
  return &StaticType;
}

