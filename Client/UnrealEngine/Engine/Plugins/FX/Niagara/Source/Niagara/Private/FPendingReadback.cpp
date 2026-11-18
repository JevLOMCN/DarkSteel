// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FPendingReadback @ 1492d49f0

void __thiscall
FNiagaraGpuReadbackManager::FPendingReadback::~FPendingReadback(FPendingReadback *this)

{
  longlong *plVar1;
  FRHIGPUFence *this_00;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar2;
  longlong *plVar3;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar4;
  
  if (*(longlong *)&this->Callback != 0) {
    plVar1 = *(longlong **)&(this->Callback).field_0x28;
    plVar3 = (longlong *)&(this->Callback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  this_00 = (this->Fence).Reference;
  if (this_00 != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVar2 = (this->StagingBuffers).AllocatorInstance.SecondaryData;
  FVar4 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)this;
  if (FVar2 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar4 = FVar2;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar4,
             (this->StagingBuffers).ArrayNum);
  FVar2 = (this->StagingBuffers).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

