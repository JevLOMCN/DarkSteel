// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FMaterialUniformExpressionExternalTextureBase @ 147fa4040

FMaterialUniformExpressionExternalTextureBase * __thiscall
FMaterialUniformExpressionExternalTextureBase::FMaterialUniformExpressionExternalTextureBase
          (FMaterialUniformExpressionExternalTextureBase *this,FGuid *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionExternalTextureBase__6B_;
  this->_padding_ = -1;
  this->SourceTextureIndex = -1;
  uVar1 = param_1->B;
  uVar2 = param_1->C;
  uVar3 = param_1->D;
  (this->ExternalTextureGuid).A = param_1->A;
  (this->ExternalTextureGuid).B = uVar1;
  (this->ExternalTextureGuid).C = uVar2;
  (this->ExternalTextureGuid).D = uVar3;
  return this;
}

// FMaterialUniformExpressionExternalTextureBase @ 147fa4080

FMaterialUniformExpressionExternalTextureBase * __thiscall
FMaterialUniformExpressionExternalTextureBase::FMaterialUniformExpressionExternalTextureBase
          (FMaterialUniformExpressionExternalTextureBase *this,int param_1)

{
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMaterialUniformExpressionExternalTextureBase__6B_;
  this->SourceTextureIndex = param_1;
  (this->ExternalTextureGuid).A = 0;
  (this->ExternalTextureGuid).B = 0;
  (this->ExternalTextureGuid).C = 0;
  (this->ExternalTextureGuid).D = 0;
  return this;
}

// GetType @ 147fda0d0

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionExternalTextureBase::GetType
          (FMaterialUniformExpressionExternalTextureBase *this)

{
  return &StaticType;
}

// IsConstant @ 147fe24c0

bool __thiscall
FMaterialUniformExpressionExternalTextureBase::IsConstant
          (FMaterialUniformExpressionExternalTextureBase *this)

{
  return false;
}

// IsIdentical @ 147fe28b0

bool __thiscall
FMaterialUniformExpressionExternalTextureBase::IsIdentical
          (FMaterialUniformExpressionExternalTextureBase *this,FMaterialUniformExpression *param_1)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 8);
  lVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
  lVar4 = (*pcVar1)(this);
  if (((lVar4 == lVar3) && (this->SourceTextureIndex == (int)param_1[1]._padding_)) &&
     ((((this->ExternalTextureGuid).D == param_1[1].UniformOffset &&
       (this->ExternalTextureGuid).C == *(uint *)((longlong)&param_1[1]._padding_ + 4)) &&
      (this->ExternalTextureGuid).B == (uint)param_1[1]._padding_) &&
      (this->ExternalTextureGuid).A == *(uint *)((longlong)&param_1[1]._padding_ + 4))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// ResolveExternalTextureGUID @ 147fee970

FGuid * __thiscall
FMaterialUniformExpressionExternalTextureBase::ResolveExternalTextureGUID
          (FMaterialUniformExpressionExternalTextureBase *this,FGuid *__return_storage_ptr__,
          FMaterialRenderContext *param_1,TOptional<FName> param_2)

{
  FName local_res8 [4];
  
  if (*(int *)param_2.field0_0x0 == -1) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
  }
  else {
    local_res8[0] = *(FName *)param_2.field0_0x0;
  }
  FMaterialRenderContext::GetExternalTextureGuid
            (param_1,__return_storage_ptr__,&this->ExternalTextureGuid,local_res8,
             this->SourceTextureIndex);
  return __return_storage_ptr__;
}

