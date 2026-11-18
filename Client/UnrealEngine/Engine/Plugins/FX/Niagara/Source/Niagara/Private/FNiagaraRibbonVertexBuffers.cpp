// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraRibbonVertexBuffers @ 149334c70

FNiagaraRibbonVertexBuffers * __thiscall
FNiagaraRibbonVertexBuffers::FNiagaraRibbonVertexBuffers(FNiagaraRibbonVertexBuffers *this)

{
  (this->SortedIndicesBuffer).PixelFormat = PF_R32_UINT;
  (this->SortedIndicesBuffer).ElementBytes = 4;
  (this->SortedIndicesBuffer).NumBytes = 0;
  (this->SortedIndicesBuffer).DebugName = L"RibbonSortedIndices";
  (this->TangentsAndDistancesBuffer).DebugName = L"TangentsAndDistancesBuffer";
  (this->MultiRibbonIndicesBuffer).DebugName = L"MultiRibbonIndicesBuffer";
  (this->RibbonLookupTableBuffer).DebugName = L"RibbonLookupTableBuffer";
  (this->SegmentsBuffer).DebugName = L"SegmentsBuffer";
  (this->GPUComputeCommandBuffer).DebugName = L"GPUComputeCommandBuffer";
  (this->SortedIndicesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->SortedIndicesBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->SortedIndicesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentsAndDistancesBuffer).PixelFormat = PF_R32_FLOAT;
  (this->TangentsAndDistancesBuffer).ElementBytes = 4;
  (this->TangentsAndDistancesBuffer).NumBytes = 0;
  (this->TangentsAndDistancesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->TangentsAndDistancesBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->TangentsAndDistancesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->MultiRibbonIndicesBuffer).PixelFormat = PF_R32_UINT;
  (this->MultiRibbonIndicesBuffer).ElementBytes = 4;
  (this->MultiRibbonIndicesBuffer).NumBytes = 0;
  (this->MultiRibbonIndicesBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->MultiRibbonIndicesBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->MultiRibbonIndicesBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RibbonLookupTableBuffer).PixelFormat = PF_R32_UINT;
  (this->RibbonLookupTableBuffer).ElementBytes = 4;
  (this->RibbonLookupTableBuffer).NumBytes = 0;
  (this->RibbonLookupTableBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->RibbonLookupTableBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RibbonLookupTableBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->SegmentsBuffer).PixelFormat = PF_R32_UINT;
  (this->SegmentsBuffer).ElementBytes = 4;
  (this->SegmentsBuffer).NumBytes = 0;
  (this->SegmentsBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->SegmentsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->SegmentsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->GPUComputeCommandBuffer).PixelFormat = PF_R32_UINT;
  (this->GPUComputeCommandBuffer).ElementBytes = 4;
  (this->GPUComputeCommandBuffer).NumBytes = 0;
  (this->GPUComputeCommandBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->GPUComputeCommandBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->GPUComputeCommandBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  this->bJustCreatedCommandBuffer = false;
  return this;
}

// InitializeOrUpdateBuffers @ 149358560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRibbonVertexBuffers::InitializeOrUpdateBuffers
          (FNiagaraRibbonVertexBuffers *this,FRHICommandListBase *param_1,
          FNiagaraRibbonGenerationConfig *param_2,
          TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *param_3,FNiagaraDataBuffer *param_4,
          int param_5,bool param_6)

{
  FRHIBuffer *pFVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_6) {
    uVar8 = param_4->NumInstances;
    if (param_2->bHasFullRibbonIDs == 0 && param_2->bHasSimpleRibbonIDs == 0) {
      uVar10 = 1;
    }
    else {
      uVar10 = uVar8;
      if (0 < param_2->MaxNumRibbons) {
        uVar10 = param_2->MaxNumRibbons;
      }
    }
    uVar7 = uVar10;
    if ((int)uVar8 < (int)uVar10) {
      uVar7 = uVar8;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->SortedIndicesBuffer,param_1,uVar8,param_5,SRVMask|VertexOrIndexBuffer,false,
               None);
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->TangentsAndDistancesBuffer,param_1,uVar8 * 4,param_5 * 4,SRVMask,false,None);
    uVar9 = 0;
    if (param_2->bHasFullRibbonIDs != 0 || param_2->bHasSimpleRibbonIDs != 0) {
      uVar9 = uVar8;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->MultiRibbonIndicesBuffer,param_1,uVar9,param_5,SRVMask,false,None);
    uVar9 = 1;
    if (1 < (int)uVar7) {
      uVar9 = uVar7;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->RibbonLookupTableBuffer,param_1,uVar9 << 3,uVar10 * 8,SRVMask,false,None);
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->SegmentsBuffer,param_1,uVar8,param_5,SRVMask,false,None);
    bVar6 = this->bJustCreatedCommandBuffer;
    bVar5 = FNiagaraRibbonGpuBuffer::Allocate
                      (&this->GPUComputeCommandBuffer,param_1,0xf,0xf,SRVMask|IndirectArgs,false,
                       DrawIndirect);
    this->bJustCreatedCommandBuffer = (bool)(bVar5 | bVar6);
  }
  else {
    if (param_3->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GeneratedGeometryData.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                         ,0x218,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((param_3->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = 0;
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->SortedIndicesBuffer,param_1,(param_3->Object->SortedIndices).ArrayNum,param_5,
               SRVMask|VertexOrIndexBuffer,true,None);
    if ((param_3->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->TangentsAndDistancesBuffer,param_1,
               (param_3->Object->TangentAndDistances).ArrayNum << 2,param_5 * 4,SRVMask,true,None);
    if (param_2->bHasFullRibbonIDs != 0 || param_2->bHasSimpleRibbonIDs != 0) {
      if ((param_3->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = (param_3->Object->MultiRibbonIndices).ArrayNum;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->MultiRibbonIndicesBuffer,param_1,uVar8,param_5,SRVMask,true,None);
    if ((param_3->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNiagaraRibbonGpuBuffer::Allocate
              (&this->RibbonLookupTableBuffer,param_1,
               (param_3->Object->RibbonInfoLookup).ArrayNum << 3,param_5 * 8,SRVMask,true,None);
    (this->SegmentsBuffer).NumBytes = 0;
    pFVar1 = (this->SegmentsBuffer).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->SegmentsBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->SegmentsBuffer).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->SegmentsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->SegmentsBuffer).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->SegmentsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    (this->GPUComputeCommandBuffer).NumBytes = 0;
    pFVar1 = (this->GPUComputeCommandBuffer).Buffer.Reference;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      (this->GPUComputeCommandBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
    pFVar2 = (this->GPUComputeCommandBuffer).UAV.Reference;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      (this->GPUComputeCommandBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = (this->GPUComputeCommandBuffer).SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      (this->GPUComputeCommandBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    this->bJustCreatedCommandBuffer = false;
  }
  return;
}

