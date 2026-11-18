// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FRayTracingPipelineStateInitializer @ 145c88950

FRayTracingPipelineStateInitializer * __thiscall
FRayTracingPipelineStateInitializer::FRayTracingPipelineStateInitializer
          (FRayTracingPipelineStateInitializer *this,FRayTracingPipelineStateInitializer *param_1)

{
  FRHIRayTracingPipelineState *this_00;
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  this->bPartial = param_1->bPartial;
  this->bBackgroundCompilation = param_1->bBackgroundCompilation;
  (this->BasePipeline).Reference = (FRHIRayTracingPipelineState *)0x0;
  this_00 = (param_1->BasePipeline).Reference;
  (this->BasePipeline).Reference = this_00;
  if (this_00 != (FRHIRayTracingPipelineState *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this->ShaderBindingLayout = param_1->ShaderBindingLayout;
  iVar2 = (param_1->RayGenTable).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->RayGenTable).field_0xc;
  (this->RayGenTable).DataPtr = (param_1->RayGenTable).DataPtr;
  (this->RayGenTable).ArrayNum = iVar2;
  *(undefined4 *)&(this->RayGenTable).field_0xc = uVar3;
  iVar2 = (param_1->MissTable).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->MissTable).field_0xc;
  (this->MissTable).DataPtr = (param_1->MissTable).DataPtr;
  (this->MissTable).ArrayNum = iVar2;
  *(undefined4 *)&(this->MissTable).field_0xc = uVar3;
  iVar2 = (param_1->HitGroupTable).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->HitGroupTable).field_0xc;
  (this->HitGroupTable).DataPtr = (param_1->HitGroupTable).DataPtr;
  (this->HitGroupTable).ArrayNum = iVar2;
  *(undefined4 *)&(this->HitGroupTable).field_0xc = uVar3;
  iVar2 = (param_1->CallableTable).ArrayNum;
  uVar3 = *(undefined4 *)&(param_1->CallableTable).field_0xc;
  (this->CallableTable).DataPtr = (param_1->CallableTable).DataPtr;
  (this->CallableTable).ArrayNum = iVar2;
  *(undefined4 *)&(this->CallableTable).field_0xc = uVar3;
  return this;
}

// GetMaxLocalBindingDataSize @ 145caa370

uint __thiscall
FRayTracingPipelineStateInitializer::GetMaxLocalBindingDataSize
          (FRayTracingPipelineStateInitializer *this)

{
  FRHIRayTracingShader **ppFVar1;
  uint uVar2;
  uint uVar3;
  FRHIRayTracingShader **ppFVar4;
  
  ppFVar4 = (this->MissTable).DataPtr;
  ppFVar1 = ppFVar4 + (this->MissTable).ArrayNum;
  uVar3 = 0;
  for (; ppFVar4 != ppFVar1; ppFVar4 = ppFVar4 + 1) {
    uVar2 = (*ppFVar4)->LocalBindingDataSize;
    if ((*ppFVar4)->LocalBindingDataSize < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  }
  ppFVar4 = (this->HitGroupTable).DataPtr;
  ppFVar1 = ppFVar4 + (this->HitGroupTable).ArrayNum;
  for (; ppFVar4 != ppFVar1; ppFVar4 = ppFVar4 + 1) {
    uVar2 = (*ppFVar4)->LocalBindingDataSize;
    if ((*ppFVar4)->LocalBindingDataSize < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  }
  ppFVar4 = (this->CallableTable).DataPtr;
  ppFVar1 = ppFVar4 + (this->CallableTable).ArrayNum;
  for (; ppFVar4 != ppFVar1; ppFVar4 = ppFVar4 + 1) {
    uVar2 = (*ppFVar4)->LocalBindingDataSize;
    if ((*ppFVar4)->LocalBindingDataSize < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
  }
  return uVar3;
}

