// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FTransferResourceParams @ 144d41fa0

FTransferResourceParams * __thiscall
FTransferResourceParams::FTransferResourceParams
          (FTransferResourceParams *this,FTransferResourceParams *param_1)

{
  (this->Texture).Reference = (FRHITexture *)0x0;
  (this->Texture).Reference = (param_1->Texture).Reference;
  (param_1->Texture).Reference = (FRHITexture *)0x0;
  (this->Buffer).Reference = (FRHIBuffer *)0x0;
  (this->Buffer).Reference = (param_1->Buffer).Reference;
  (param_1->Buffer).Reference = (FRHIBuffer *)0x0;
  *(undefined8 *)&(this->Min).field0_0x0 = *(undefined8 *)&(param_1->Min).field0_0x0;
  (this->Min).field0_0x0._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->Max).field0_0x0 = *(undefined8 *)&(param_1->Max).field0_0x0;
  (this->Max).field0_0x0._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
  this->SrcGPUIndex = param_1->SrcGPUIndex;
  this->DestGPUIndex = param_1->DestGPUIndex;
  this->bPullData = param_1->bPullData;
  this->bLockStepGPUs = param_1->bLockStepGPUs;
  this->DelayedFence = param_1->DelayedFence;
  this->PreTransferFence = param_1->PreTransferFence;
  return this;
}

