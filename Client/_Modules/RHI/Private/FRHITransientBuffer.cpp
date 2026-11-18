// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// BindDebugLabelName @ 145c921a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHITransientBuffer::BindDebugLabelName(FRHITransientBuffer *this,FRHICommandListBase *param_1)

{
  int iVar1;
  longlong lVar2;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar3;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar4;
  undefined1 local_res8 [8];
  
  FVar3 = (this->ViewCache).UAVs.AllocatorInstance.SecondaryData;
  iVar1 = (this->ViewCache).UAVs.ArrayNum;
  lVar2 = this->_padding_;
  if (FVar3 == (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar3 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
            )&this->ViewCache;
  }
  FVar4 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
          ((longlong)iVar1 * 0x10 + (longlong)FVar3);
  while( true ) {
    if ((this->ViewCache).UAVs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar4) break;
    (**(code **)(GDynamicRHI->_padding_ + 0x208))
              (GDynamicRHI,param_1,*(undefined8 *)((longlong)FVar3 + 8),lVar2);
    FVar3 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
            )((longlong)FVar3 + 0x10);
  }
  return;
}

// ~FRHITransientBuffer @ 145cd2a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRHITransientBuffer::~FRHITransientBuffer(FRHITransientBuffer *this)

{
  ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_> FVar1;
  ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_> FVar2;
  
  this->_padding_ = (longlong)&___7FRHITransientBuffer__6B_;
  FVar1 = (this->ViewCache).SRVs.AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FVar1 = (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)
            &(this->ViewCache).SRVs;
  }
  DestructItems<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>,int>
            ((TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_> *)FVar1,
             (this->ViewCache).SRVs.ArrayNum);
  FVar1 = (this->ViewCache).SRVs.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->ViewCache).UAVs.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FVar2 = (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
            )&this->ViewCache;
  }
  DestructItems<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>,int>
            ((TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_> *)FVar2,
             (this->ViewCache).UAVs.ArrayNum);
  FVar2 = (this->ViewCache).UAVs.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>
                )0x0) {
    FMemory::Free((void *)FVar2);
  }
  FRHITransientResource::~FRHITransientResource((FRHITransientResource *)this);
  return;
}

