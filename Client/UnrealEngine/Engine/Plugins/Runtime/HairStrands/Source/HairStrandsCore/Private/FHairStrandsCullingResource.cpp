// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FHairStrandsCullingResource @ 14e03c660

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsCullingResource * __thiscall
FHairStrandsCullingResource::FHairStrandsCullingResource
          (FHairStrandsCullingResource *this,uint param_1,uint param_2,uint param_3,
          FHairResourceName *param_4,FName *param_5)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_5;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->ClusterCount = 0;
  this->MaxPointCount = 0;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  this->_padding_ = (longlong)&___7FHairStrandsCullingResource__6B_;
  (this->Resources).DrawIndirectBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Resources).DrawIndirectBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Resources).DrawIndirectBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Resources).DrawIndirectBuffer.Format = PF_Unknown;
  (this->Resources).DrawIndirectRasterComputeBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Resources).DrawIndirectRasterComputeBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Resources).DrawIndirectRasterComputeBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Resources).DrawIndirectRasterComputeBuffer.Format = PF_Unknown;
  (this->Resources).CulledCurveBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Resources).CulledCurveBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Resources).CulledCurveBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Resources).CulledCurveBuffer.Format = PF_Unknown;
  (this->Resources).CulledVertexIdBuffer.Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->Resources).CulledVertexIdBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->Resources).CulledVertexIdBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->Resources).CulledVertexIdBuffer.Format = PF_Unknown;
  (this->Resources).bCullingResultAvailable = false;
  this->MaxPointCount = param_1;
  this->ClusterCount = param_3;
  this->MaxCurveCount = param_2;
  *(undefined4 *)&this->_padding_ = 0;
  return this;
}

// GetFriendlyName @ 14e050250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsCullingResource::GetFriendlyName
          (FHairStrandsCullingResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsCullingResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e0556b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsCullingResource::InternalAllocate
          (FHairStrandsCullingResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FRDGBuffer *pFVar1;
  FRDGImportedBuffer *pFVar2;
  uint uVar3;
  uint uVar4;
  FName local_res8;
  FRDGImportedBuffer local_48 [2];
  
  if (this->ClusterCount != 0) {
    local_res8 = (FName)this->_padding_;
    uVar3 = this->MaxPointCount;
    uVar4 = this->MaxCurveCount;
    if (param_2 < this->MaxCurveCount) {
      uVar4 = param_2;
    }
    InternalCreateByteAddressBufferRDG
              (param_1,(ulonglong)(uVar4 << 2),&(this->Resources).CulledCurveBuffer,
               L"Hair.Cluster_CulledCurveBuffer",&local_res8,Dynamic);
    local_res8 = (FName)this->_padding_;
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    InternalCreateVertexBufferRDG<FHairStrandsUintFormat>
              (param_1,uVar3,&(this->Resources).CulledVertexIdBuffer,
               L"Hair.Cluster_CulledVertexIdBuffer",&local_res8,Dynamic);
    if ((this->Resources).DrawIndirectBuffer.Buffer.Reference == (FRDGPooledBuffer *)0x0) {
      local_res8 = (FName)this->_padding_;
      InternalCreateIndirectBufferRDG
                (param_1,&(this->Resources).DrawIndirectBuffer,L"Hair.Cluster_DrawIndirectBuffer",
                 &local_res8);
      local_res8 = (FName)this->_padding_;
      InternalCreateIndirectBufferRDG
                (param_1,&(this->Resources).DrawIndirectRasterComputeBuffer,
                 L"Hair.Cluster_DrawIndirectRasterComputeBuffer",&local_res8);
      pFVar2 = ::Register(local_48,param_1,&(this->Resources).DrawIndirectBuffer,None,None);
      pFVar1 = pFVar2->Buffer;
      FRDGUserValidation::ValidateSetAccessFinal
                (&param_1->UserValidation,(FRDGViewableResource *)pFVar1,IndirectArgs);
      *(ERHIAccess *)&pFVar1->_padding_ = IndirectArgs;
    }
  }
  return;
}

// InternalRelease @ 14e058430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsCullingResource::InternalRelease(FHairStrandsCullingResource *this)

{
  FRDGExternalBuffer::Release(&(this->Resources).DrawIndirectBuffer);
  FRDGExternalBuffer::Release(&(this->Resources).DrawIndirectRasterComputeBuffer);
  FRDGExternalBuffer::Release(&(this->Resources).CulledCurveBuffer);
  FRDGExternalBuffer::Release(&(this->Resources).CulledVertexIdBuffer);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

