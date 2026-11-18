// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FRHIBufferViewCache @ 14485e200

void __thiscall FRHIBufferViewCache::~FRHIBufferViewCache(FRHIBufferViewCache *this)

{
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar1;
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar2;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar3;
  
  FVar2 = (this->SRVs).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FVar2 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)
            &this->SRVs;
  }
  DestructItems<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int>
            ((TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_> *)FVar2,
             (this->SRVs).ArrayNum);
  FVar2 = (this->SRVs).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar1 = (this->UAVs).AllocatorInstance.SecondaryData;
  FVar3 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          this;
  if (FVar1 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar3 = FVar1;
  }
  DestructItems<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int>
            ((TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_> *)FVar3,
             (this->UAVs).ArrayNum);
  FVar1 = (this->UAVs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

