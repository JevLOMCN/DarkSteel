// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPooledResource @ 147cc5ac0

FPooledResource * __thiscall
TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::FPooledResource::
FPooledResource(FPooledResource *this,FPooledResource *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIShaderResourceView *this_00;
  
  (this->Resource).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  pTVar1 = &(this->Resource).VertexBufferSRV;
  (this->Resource).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->Resource).Size = 0;
  if (this != param_1) {
    (this->Resource).VertexBufferRHI.Reference = (param_1->Resource).VertexBufferRHI.Reference;
    (param_1->Resource).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  }
  pTVar2 = &(param_1->Resource).VertexBufferSRV;
  if (pTVar1 != pTVar2) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  (this->Resource).Size = (param_1->Resource).Size;
  this->CreationArguments = param_1->CreationArguments;
  this->FrameFreed = param_1->FrameFreed;
  this->BucketIndex = param_1->BucketIndex;
  return this;
}

// FPooledResource @ 147cc5b40

FPooledResource * __thiscall
TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::FPooledResource::
FPooledResource(FPooledResource *this,FPooledResource *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIShaderResourceView *this_00;
  
  (this->Resource).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
  pTVar1 = &(this->Resource).VertexBufferSRV;
  (this->Resource).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->Resource).Size = 0;
  if (this != param_1) {
    (this->Resource).VertexBufferRHI.Reference = (param_1->Resource).VertexBufferRHI.Reference;
    (param_1->Resource).VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  }
  pTVar2 = &(param_1->Resource).VertexBufferSRV;
  if (pTVar1 != pTVar2) {
    this_00 = pTVar1->Reference;
    pTVar1->Reference = pTVar2->Reference;
    pTVar2->Reference = (FRHIShaderResourceView *)0x0;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  (this->Resource).Size = (param_1->Resource).Size;
  this->CreationArguments = param_1->CreationArguments;
  this->FrameFreed = param_1->FrameFreed;
  this->BucketIndex = param_1->BucketIndex;
  return this;
}

