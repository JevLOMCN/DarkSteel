// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FRDGPooledBuffer @ 1456dc8b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPooledBuffer * __thiscall
FRDGPooledBuffer::FRDGPooledBuffer
          (FRDGPooledBuffer *this,FRHICommandListBase *param_1,TRefCountPtr<FRHIBuffer> param_2,
          FRDGBufferDesc *param_3,uint param_4,wchar_t *param_5)

{
  uint uVar1;
  EBufferUsageFlags EVar2;
  undefined4 uVar3;
  FRHIShaderResourceView *pFVar4;
  FRHIBufferSRVCreateInfo local_28;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRDGPooledBuffer__6B_;
  uVar1 = param_3->NumElements;
  EVar2 = param_3->Usage;
  uVar3 = *(undefined4 *)&param_3->field_0xc;
  (this->Desc).BytesPerElement = param_3->BytesPerElement;
  (this->Desc).NumElements = uVar1;
  (this->Desc).Usage = EVar2;
  *(undefined4 *)&(this->Desc).field_0xc = uVar3;
  (this->Desc).Metadata = param_3->Metadata;
  (this->Buffer).Reference = (FRHIBuffer *)0x0;
  (this->Buffer).Reference = (FRHIBuffer *)(param_2.Reference)->_padding_;
  (param_2.Reference)->_padding_ = 0;
  this->CachedSRV = (FRHIShaderResourceView *)0x0;
  (this->ViewCache).UAVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)0x0;
  (this->ViewCache).UAVs.ArrayNum = 0;
  (this->ViewCache).UAVs.ArrayMax = 1;
  (this->ViewCache).SRVs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0;
  (this->ViewCache).SRVs.ArrayNum = 0;
  (this->ViewCache).SRVs.ArrayMax = 1;
  this->Name = param_5;
  this->NumAllocatedElements = param_4;
  this->CommittedSizeInBytes = 0xffffffffffffffff;
  this->NameUpdatedViewCacheNum = 0;
  this->LastUsedFrame = 0;
  (this->Fences).bIsSet = false;
  if ((param_3->Usage & (StructuredBuffer|ByteAddressBuffer)) != None) {
    local_28.RayTracingScene = (FRHIRayTracingScene *)0x0;
    local_28.Format = PF_Unknown;
    local_28._1_3_ = 0;
    local_28.StartOffsetBytes = 0;
    local_28.NumElements = 0xffffffff;
    local_28._12_4_ = 0;
    pFVar4 = FRHIBufferViewCache::GetOrCreateSRV
                       (&this->ViewCache,param_1,(this->Buffer).Reference,&local_28);
    this->CachedSRV = pFVar4;
  }
  *(undefined4 *)&(this->Fences).TypedValue.field_0x11 = 0x1000000;
  (this->Fences).TypedValue.Graphics = 0xffffffff;
  (this->Fences).TypedValue.AsyncCompute = 0xffffffff;
  (this->Fences).TypedValue.GraphicsForkJoin.Min = 0xffffffff;
  (this->Fences).TypedValue.GraphicsForkJoin.Max = 0;
  (this->Fences).TypedValue.Pipelines = None;
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  return this;
}

