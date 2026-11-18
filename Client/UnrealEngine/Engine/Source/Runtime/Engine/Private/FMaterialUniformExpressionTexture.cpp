// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FMaterialUniformExpressionTexture @ 147fa42f0

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpressionTexture::FMaterialUniformExpressionTexture
          (FMaterialUniformExpressionTexture *this,int param_1,short param_2,short param_3,
          EMaterialSamplerType param_4)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTexture__6B_;
  this->_padding_ = -1;
  this->TextureIndex = param_1;
  this->TextureLayerIndex = param_2;
  this->MaterialCacheTagIndex = -1;
  this->PageTableLayerIndex = param_3;
  this->SamplerSource = SSM_Wrap_WorldGroupSettings;
  this->bVirtualTexture = true;
  return this;
}

// FMaterialUniformExpressionTexture @ 147fa4340

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpressionTexture::FMaterialUniformExpressionTexture
          (FMaterialUniformExpressionTexture *this,int param_1,EMaterialSamplerType param_2)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTexture__6B_;
  this->_padding_ = -1;
  this->TextureIndex = param_1;
  this->TextureLayerIndex = -1;
  this->MaterialCacheTagIndex = -1;
  this->PageTableLayerIndex = -1;
  this->SamplerSource = SSM_Wrap_WorldGroupSettings;
  this->bVirtualTexture = false;
  return this;
}

// FMaterialUniformExpressionTexture @ 147fa4390

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpressionTexture::FMaterialUniformExpressionTexture
          (FMaterialUniformExpressionTexture *this,int param_1,EMaterialSamplerType param_2,
          ESamplerSourceMode param_3,bool param_4)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTexture__6B_;
  this->bVirtualTexture = param_4;
  this->_padding_ = -1;
  this->TextureIndex = param_1;
  this->TextureLayerIndex = -1;
  this->MaterialCacheTagIndex = -1;
  this->PageTableLayerIndex = -1;
  this->SamplerSource = param_3;
  return this;
}

// FMaterialUniformExpressionTexture @ 147fa43e0

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpressionTexture::FMaterialUniformExpressionTexture
          (FMaterialUniformExpressionTexture *this)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTexture__6B_;
  this->TextureIndex = -1;
  this->TextureLayerIndex = -1;
  this->MaterialCacheTagIndex = -1;
  this->PageTableLayerIndex = -1;
  this->SamplerSource = SSM_FromTextureAsset;
  this->bVirtualTexture = false;
  return this;
}

// GetTextureParameterInfo @ 147fd9300

void __thiscall
FMaterialUniformExpressionTexture::GetTextureParameterInfo
          (FMaterialUniformExpressionTexture *this,FMaterialTextureParameterInfo *param_1)

{
  param_1->TextureIndex = this->TextureIndex;
  (param_1->SamplerSource).Value = (char)this->SamplerSource;
  param_1->VirtualTextureLayerIndex = (uchar)this->TextureLayerIndex;
  return;
}

// GetTextureParameterUniformExpression @ 147fd9320

FMaterialUniformExpressionTextureParameter * __thiscall
FMaterialUniformExpressionTexture::GetTextureParameterUniformExpression
          (FMaterialUniformExpressionTexture *this)

{
  return (FMaterialUniformExpressionTextureParameter *)0x0;
}

// GetTextureUniformExpression @ 147fd9530

FMaterialUniformExpressionTexture * __thiscall
FMaterialUniformExpressionTexture::GetTextureUniformExpression
          (FMaterialUniformExpressionTexture *this)

{
  return this;
}

// GetType @ 147fda110

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionTexture::GetType(FMaterialUniformExpressionTexture *this)

{
  return &StaticType;
}

// IsIdentical @ 147fe2c40

bool __thiscall
FMaterialUniformExpressionTexture::IsIdentical
          (FMaterialUniformExpressionTexture *this,FMaterialUniformExpression *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 8);
  lVar3 = (**(code **)(this->_padding_ + 8))();
  lVar4 = (*pcVar1)(param_1);
  if ((((lVar3 == lVar4) && (this->TextureIndex == (int)param_1[1]._padding_)) &&
      (this->TextureLayerIndex == *(short *)((longlong)&param_1[1]._padding_ + 4))) &&
     (((this->PageTableLayerIndex == (short)param_1[1]._padding_ &&
       (this->MaterialCacheTagIndex == *(short *)((longlong)&param_1[1]._padding_ + 6))) &&
      (this->bVirtualTexture == (bool)(char)param_1[1].UniformOffset)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

