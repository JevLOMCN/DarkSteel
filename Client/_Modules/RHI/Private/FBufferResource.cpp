// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FBufferResource @ 145cd0c70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBufferResource * __thiscall
RHIValidation::FBufferResource::FBufferResource(FBufferResource *this,FRHIBufferCreateDesc *param_1)

{
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined2 *)&this->field_0x1c = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  this->field_0x24 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  this->field_0x54 = 1;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined2 *)&this->field_0x5c = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x48 = *(undefined8 *)&this->field_0x50;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined2 *)&this->field_0x84 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  this->field_0x7c = 1;
  *(undefined8 *)&this->field_0x70 = *(undefined8 *)&this->field_0x78;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xac = 0;
  FResource::InitBarrierTracking((FResource *)this,1,1,1,param_1->InitialState,param_1->DebugName);
  return this;
}

// InitBarrierTracking @ 145cdf350

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
RHIValidation::FBufferResource::InitBarrierTracking
          (FBufferResource *this,FRHIBufferCreateDesc *param_1)

{
  FResource::InitBarrierTracking((FResource *)this,1,1,1,param_1->InitialState,param_1->DebugName);
  return;
}

