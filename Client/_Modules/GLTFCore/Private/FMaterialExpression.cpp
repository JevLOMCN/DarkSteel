// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 7

// FMaterialExpression @ 14e62ab60

FMaterialExpression * __thiscall
GLTF::FMaterialExpression::FMaterialExpression
          (FMaterialExpression *this,FMaterialExpression *param_1)

{
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  this->Type = param_1->Type;
  return this;
}

// FMaterialExpression @ 14e62ab80

FMaterialExpression * __thiscall
GLTF::FMaterialExpression::FMaterialExpression(FMaterialExpression *this,int param_1)

{
  this->Type = param_1;
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  return this;
}

// FMaterialExpression @ 14e62aba0

FMaterialExpression * __thiscall
GLTF::FMaterialExpression::FMaterialExpression(FMaterialExpression *this)

{
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  return this;
}

// ~FMaterialExpression @ 14e62be00

void __thiscall GLTF::FMaterialExpression::~FMaterialExpression(FMaterialExpression *this)

{
  this->_padding_ = (longlong)&___7FMaterialExpression_GLTF__6B_;
  return;
}

// ConnectExpression @ 14e631e40

void __thiscall
GLTF::FMaterialExpression::ConnectExpression
          (FMaterialExpression *this,FMaterialExpressionInput *param_1,int param_2)

{
  if (param_2 != -1) {
    param_1->Expression = this;
    param_1->OutputIndex = param_2;
  }
  return;
}

// GetInput @ 14e63c3e0

FMaterialExpressionInput * __thiscall
GLTF::FMaterialExpression::GetInput(FMaterialExpression *this,int param_1)

{
  return (FMaterialExpressionInput *)0x0;
}

// GetInputCount @ 14e63c790

int __thiscall GLTF::FMaterialExpression::GetInputCount(FMaterialExpression *this)

{
  return 0;
}

