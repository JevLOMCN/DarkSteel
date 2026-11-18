// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FRHICommandList_RecursiveHazardous @ 145c87560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandList_RecursiveHazardous * __thiscall
FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
          (FRHICommandList_RecursiveHazardous *this,IRHICommandContext *param_1)

{
  uint *puVar1;
  undefined1 local_res8 [8];
  
  puVar1 = (uint *)(**(code **)(param_1->_padding_ + 0xf0))(param_1,local_res8);
  FRHICommandListBase::FRHICommandListBase((FRHICommandListBase *)this,(FRHIGPUMask)*puVar1,false);
  *(undefined2 *)&this->field_0x6a = 0x101;
  if ((IRHICommandContext *)param_1->_padding_ != (IRHICommandContext *)0x0) {
    param_1 = (IRHICommandContext *)param_1->_padding_;
  }
  *(IRHICommandContext **)&this->field_0x38 = param_1;
  *(IRHICommandContext **)&this->field_0x40 = param_1;
  *(IRHICommandContext **)&this->field_0x50 = param_1;
  this->field_0x29b = this->field_0x29b | 0x10;
  return this;
}

// ~FRHICommandList_RecursiveHazardous @ 145c8afd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous
          (FRHICommandList_RecursiveHazardous *this)

{
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)this);
  if (*(longlong *)&this->field_0x10 != 0) {
    FRHICommandListBase::Execute((FRHICommandListBase *)this);
  }
  FRHICommandListBase::~FRHICommandListBase((FRHICommandListBase *)this);
  return;
}

