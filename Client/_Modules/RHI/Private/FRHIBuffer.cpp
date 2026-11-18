// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// FRHIBuffer @ 145c86690

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FRHIBuffer * __thiscall FRHIBuffer::FRHIBuffer(FRHIBuffer *this,FRHIBufferCreateDesc *param_1)

{
  ERHIAccess EVar1;
  FName FVar2;
  wchar_t *pwVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FName *pFVar7;
  FName local_res8;
  
  FVar2 = param_1->OwnerName;
  pwVar3 = param_1->DebugName;
  EVar1 = param_1->InitialState;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_Buffer);
  this->_padding_ = (longlong)&___7FRHIViewableResource__6B_;
  this->_padding_ = 0;
  *(ERHIAccess *)&this->_padding_ = EVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  if (pwVar3 != (wchar_t *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,pwVar3);
    this->_padding_ = (longlong)*pFVar7;
  }
  this->_padding_ = (longlong)FVar2;
  RHIValidation::FBufferResource::FBufferResource((FBufferResource *)&this->_padding_,param_1);
  this->_padding_ = (longlong)&___7FRHIBuffer__6B_;
  uVar4 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  uVar5 = *(undefined4 *)&param_1->_padding_;
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->Desc).Size = *(undefined4 *)&param_1->_padding_;
  (this->Desc).Stride = uVar4;
  (this->Desc).Usage = uVar5;
  (this->Desc).GPUMask = (FRHIGPUMask)uVar6;
  return this;
}

