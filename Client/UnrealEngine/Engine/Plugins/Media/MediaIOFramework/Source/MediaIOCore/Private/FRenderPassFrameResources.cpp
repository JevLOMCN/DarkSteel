// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// operator= @ 14d78d930

FRenderPassFrameResources * __thiscall
UE::MediaCapture::FRenderPassFrameResources::operator=
          (FRenderPassFrameResources *this,FRenderPassFrameResources *param_1)

{
  TMap<FName,TRefCountPtr<IPooledRenderTarget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>_>
  *pTVar1;
  TMap<FName,TRefCountPtr<IPooledRenderTarget>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>_>
  *this_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TMap<FName,TRefCountPtr<FRDGPooledBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>_>
  *pTVar4;
  TMap<FName,TRefCountPtr<FRDGPooledBuffer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>_>
  *this_01;
  void *pvVar5;
  
  pTVar1 = &param_1->PassTextureOutputs;
  this_00 = &this->PassTextureOutputs;
  this->LastRenderPassName = param_1->LastRenderPassName;
  if (this_00 != pTVar1) {
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PassTextureOutputs).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar2 = &(param_1->PassTextureOutputs).field_0x10;
    *(undefined8 *)this_00 = *(undefined8 *)pTVar1;
    puVar3 = &(this->PassTextureOutputs).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->PassTextureOutputs).field_0x8 =
         *(undefined4 *)&(param_1->PassTextureOutputs).field_0x8;
    *(undefined4 *)&(this->PassTextureOutputs).field_0xc =
         *(undefined4 *)&(param_1->PassTextureOutputs).field_0xc;
    *(undefined8 *)&(param_1->PassTextureOutputs).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->PassTextureOutputs).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar5 = *(void **)&(this->PassTextureOutputs).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->PassTextureOutputs).field_0x20 =
           *(undefined8 *)&(param_1->PassTextureOutputs).field_0x20;
      *(undefined8 *)&(param_1->PassTextureOutputs).field_0x20 = 0;
      *(undefined4 *)&(this->PassTextureOutputs).field_0x28 =
           *(undefined4 *)&(param_1->PassTextureOutputs).field_0x28;
      *(undefined4 *)&(this->PassTextureOutputs).field_0x2c =
           *(undefined4 *)&(param_1->PassTextureOutputs).field_0x2c;
      *(undefined8 *)&(param_1->PassTextureOutputs).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PassTextureOutputs).field_0x30 =
         *(undefined4 *)&(param_1->PassTextureOutputs).field_0x30;
    *(undefined4 *)&(this->PassTextureOutputs).field_0x34 =
         *(undefined4 *)&(param_1->PassTextureOutputs).field_0x34;
    *(undefined4 *)&(param_1->PassTextureOutputs).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PassTextureOutputs).field_0x34 = 0;
    if (*(longlong *)&(param_1->PassTextureOutputs).field_0x40 == 0) {
      *(undefined4 *)&(this->PassTextureOutputs).field_0x38 =
           *(undefined4 *)&(param_1->PassTextureOutputs).field_0x38;
    }
    pvVar5 = *(void **)&(this->PassTextureOutputs).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->PassTextureOutputs).field_0x40 =
         *(undefined8 *)&(param_1->PassTextureOutputs).field_0x40;
    *(undefined8 *)&(param_1->PassTextureOutputs).field_0x40 = 0;
    *(undefined4 *)&(this->PassTextureOutputs).field_0x48 =
         *(undefined4 *)&(param_1->PassTextureOutputs).field_0x48;
    *(undefined4 *)&(param_1->PassTextureOutputs).field_0x48 = 0;
  }
  pTVar4 = &param_1->PassBufferOutputs;
  this_01 = &this->PassBufferOutputs;
  if (this_01 != pTVar4) {
    TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_01,0,*(int *)&(this->PassBufferOutputs).field_0x8);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
    puVar2 = &(param_1->PassBufferOutputs).field_0x10;
    *(undefined8 *)this_01 = *(undefined8 *)pTVar4;
    puVar3 = &(this->PassBufferOutputs).field_0x10;
    *(undefined8 *)pTVar4 = 0;
    *(undefined4 *)&(this->PassBufferOutputs).field_0x8 =
         *(undefined4 *)&(param_1->PassBufferOutputs).field_0x8;
    *(undefined4 *)&(this->PassBufferOutputs).field_0xc =
         *(undefined4 *)&(param_1->PassBufferOutputs).field_0xc;
    *(undefined8 *)&(param_1->PassBufferOutputs).field_0x8 = 0;
    if (puVar3 != puVar2) {
      if (*(longlong *)&(param_1->PassBufferOutputs).field_0x20 == 0) {
        memmove(puVar3,puVar2,0x10);
      }
      pvVar5 = *(void **)&(this->PassBufferOutputs).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->PassBufferOutputs).field_0x20 =
           *(undefined8 *)&(param_1->PassBufferOutputs).field_0x20;
      *(undefined8 *)&(param_1->PassBufferOutputs).field_0x20 = 0;
      *(undefined4 *)&(this->PassBufferOutputs).field_0x28 =
           *(undefined4 *)&(param_1->PassBufferOutputs).field_0x28;
      *(undefined4 *)&(this->PassBufferOutputs).field_0x2c =
           *(undefined4 *)&(param_1->PassBufferOutputs).field_0x2c;
      *(undefined8 *)&(param_1->PassBufferOutputs).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PassBufferOutputs).field_0x30 =
         *(undefined4 *)&(param_1->PassBufferOutputs).field_0x30;
    *(undefined4 *)&(this->PassBufferOutputs).field_0x34 =
         *(undefined4 *)&(param_1->PassBufferOutputs).field_0x34;
    *(undefined4 *)&(param_1->PassBufferOutputs).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->PassBufferOutputs).field_0x34 = 0;
    if (*(longlong *)&(param_1->PassBufferOutputs).field_0x40 == 0) {
      *(undefined4 *)&(this->PassBufferOutputs).field_0x38 =
           *(undefined4 *)&(param_1->PassBufferOutputs).field_0x38;
    }
    pvVar5 = *(void **)&(this->PassBufferOutputs).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->PassBufferOutputs).field_0x40 =
         *(undefined8 *)&(param_1->PassBufferOutputs).field_0x40;
    *(undefined8 *)&(param_1->PassBufferOutputs).field_0x40 = 0;
    *(undefined4 *)&(this->PassBufferOutputs).field_0x48 =
         *(undefined4 *)&(param_1->PassBufferOutputs).field_0x48;
    *(undefined4 *)&(param_1->PassBufferOutputs).field_0x48 = 0;
  }
  return this;
}

