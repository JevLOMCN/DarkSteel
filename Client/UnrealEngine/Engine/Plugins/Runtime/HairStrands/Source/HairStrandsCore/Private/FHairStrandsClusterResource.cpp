// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 8

// FHairStrandsClusterResource @ 14e03c590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsClusterResource * __thiscall
FHairStrandsClusterResource::FHairStrandsClusterResource
          (FHairStrandsClusterResource *this,FHairStrandsClusterBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&___7FHairStrandsClusterResource__6B_;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->ClusterInfoBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->ClusterInfoBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ClusterInfoBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->ClusterInfoBuffer).Format = PF_Unknown;
  (this->CurveToClusterIdBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveToClusterIdBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveToClusterIdBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CurveToClusterIdBuffer).Format = PF_Unknown;
  (this->PointLODBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointLODBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointLODBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PointLODBuffer).Format = PF_Unknown;
  this->BulkData = param_1;
  *(undefined4 *)&this->_padding_ = 0;
  return this;
}

// ~FHairStrandsClusterResource @ 14e03e300

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsClusterResource::~FHairStrandsClusterResource(FHairStrandsClusterResource *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->PointLODBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->PointLODBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->PointLODBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar2 = (this->CurveToClusterIdBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CurveToClusterIdBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->CurveToClusterIdBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar2 = (this->ClusterInfoBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->ClusterInfoBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->ClusterInfoBuffer).Buffer.Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  DestructItems<FHairStreamingRequest::FChunk,int>((FChunk *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// GetFriendlyName @ 14e050220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsClusterResource::GetFriendlyName
          (FHairStrandsClusterResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsClusterResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsClusterResource::InternalAllocate
          (FHairStrandsClusterResource *this,FRDGBuilder *param_1)

{
  FName *pFVar1;
  uint uVar2;
  FHairStrandsClusterBulkData *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("StreamingRequest.IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x5e8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->BulkData;
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  uVar2 = (pFVar3->Header).PointCount;
  if ((this->ClusterInfoBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0) {
    InternalCreateStructuredBufferRDG_FromHairBulkData<FHairClusterInfoFormat>
              (param_1,&(pFVar3->Data).PackedClusterInfos,(pFVar3->Header).ClusterCount,
               &this->ClusterInfoBuffer,L"Hair.StrandsCluster_ClusterInfoBuffer",pFVar1,Static);
  }
  InternalCreateVertexBufferRDG_FromHairBulkData<FHairClusterIndexFormat>
            (param_1,&(this->BulkData->Data).CurveToClusterIds,(this->BulkData->Header).CurveCount,
             &this->CurveToClusterIdBuffer,L"Hair.StrandsCluster_CurveToClusterIds",pFVar1,Static);
  InternalCreateVertexBufferRDG_FromHairBulkData<FHairClusterIndexFormat>
            (param_1,&(this->BulkData->Data).PointLODs,uVar2 + 7 >> 3,&this->PointLODBuffer,
             L"Hair.StrandsCluster_PointLOD",pFVar1,Static);
  return;
}

// InternalGetBulkData @ 14e058060

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsBulkCommon * __thiscall
FHairStrandsClusterResource::InternalGetBulkData(FHairStrandsClusterResource *this)

{
  return (FHairStrandsBulkCommon *)this->BulkData;
}

// InternalGetOrRequestData @ 14e0580b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHairStrandsClusterResource::InternalGetOrRequestData
          (FHairStrandsClusterResource *this,uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = FHairStreamingRequest::IsNone((FHairStreamingRequest *)&this->_padding_);
  if (bVar1) {
    bVar1 = FHairStrandsClusterBulkData::IsCookedBulkDataLoadedForCPUAccess(this->BulkData);
    if (bVar1) {
      *(uint *)&this->_padding_ = param_1;
      *(uint *)((longlong)&this->_padding_ + 4) = param_2;
      return true;
    }
    FHairStreamingRequest::Request
              ((FHairStreamingRequest *)&this->_padding_,param_1,param_2,
               (FHairStrandsBulkCommon *)this->BulkData,false,false,false,
               (FName *)((longlong)&this->_padding_ + 4),(bool *)0x0);
  }
  bVar1 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  return bVar1;
}

// InternalRelease @ 14e0583f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsClusterResource::InternalRelease(FHairStrandsClusterResource *this)

{
  FRDGExternalBuffer::Release(&this->ClusterInfoBuffer);
  FRDGExternalBuffer::Release(&this->CurveToClusterIdBuffer);
  FRDGExternalBuffer::Release(&this->PointLODBuffer);
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// InternalResetLoadedSize @ 14e058cd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsClusterResource::InternalResetLoadedSize(FHairStrandsClusterResource *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e058cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->BulkData + 0x28))();
  return;
}

