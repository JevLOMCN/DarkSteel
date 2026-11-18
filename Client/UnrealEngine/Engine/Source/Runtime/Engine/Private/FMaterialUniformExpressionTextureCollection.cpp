// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialUniformExpressionTextureCollection @ 147fa4420

FMaterialUniformExpressionTextureCollection * __thiscall
FMaterialUniformExpressionTextureCollection::FMaterialUniformExpressionTextureCollection
          (FMaterialUniformExpressionTextureCollection *this,int param_1,int param_2,bool param_3)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionTextureCollection__6B_;
  this->_padding_ = -1;
  this->TextureCollectionIndex = param_1;
  this->TextureCollectionTypePrefixIndex = param_2;
  this->bIsVirtualCollection = param_3;
  return this;
}

// GetTextureCollectionParameterInfo @ 147fd8d70

void __thiscall
FMaterialUniformExpressionTextureCollection::GetTextureCollectionParameterInfo
          (FMaterialUniformExpressionTextureCollection *this,
          FMaterialTextureCollectionParameterInfo *param_1)

{
  param_1->TextureCollectionIndex = this->TextureCollectionIndex;
  param_1->bIsVirtualCollection = this->bIsVirtualCollection;
  return;
}

// GetTextureCollectionParameterUniformExpression @ 147fd8dc0

FMaterialUniformExpressionTextureCollectionParameter * __thiscall
FMaterialUniformExpressionTextureCollection::GetTextureCollectionParameterUniformExpression
          (FMaterialUniformExpressionTextureCollection *this)

{
  return (FMaterialUniformExpressionTextureCollectionParameter *)0x0;
}

// GetTextureCollectionUniformExpression @ 147fd8e50

FMaterialUniformExpressionTextureCollection * __thiscall
FMaterialUniformExpressionTextureCollection::GetTextureCollectionUniformExpression
          (FMaterialUniformExpressionTextureCollection *this)

{
  return this;
}

// GetType @ 147fda120

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionTextureCollection::GetType
          (FMaterialUniformExpressionTextureCollection *this)

{
  return &StaticType;
}

// IsIdentical @ 147fe2cd0

bool __thiscall
FMaterialUniformExpressionTextureCollection::IsIdentical
          (FMaterialUniformExpressionTextureCollection *this,FMaterialUniformExpression *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  pcVar1 = *(code **)(param_1->_padding_ + 8);
  lVar2 = (**(code **)(this->_padding_ + 8))();
  lVar3 = (*pcVar1)(param_1);
  if (lVar2 == lVar3) {
    bVar4 = this->TextureCollectionIndex == (int)param_1[1]._padding_;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

