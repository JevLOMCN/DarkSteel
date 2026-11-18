// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 10

// GetResourcesSize @ 14dfc9380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FHairStrandsRestResource::GetResourcesSize(FHairStrandsRestResource *this)

{
  FRDGPooledBuffer *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pFVar1 = (this->PositionBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->PositionOffsetBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->TangentBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->PointAttributeBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->CurveAttributeBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar10 = 0;
  }
  else {
    iVar10 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->PointToCurveBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->CurveBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->CurveMappingBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  uVar3 = iVar2 + iVar10 + iVar9 + iVar8 + iVar7 + iVar4 + iVar5 + iVar6;
  pFVar1 = (this->PointMappingBuffer).Buffer.Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    return (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement + uVar3;
  }
  return uVar3;
}

// FHairStrandsRestResource @ 14e03d410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRestResource * __thiscall
FHairStrandsRestResource::FHairStrandsRestResource
          (FHairStrandsRestResource *this,FHairStrandsBulkData *param_1,
          EHairStrandsResourcesType param_2,FHairResourceName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  FHairStrandsRestResource *pFVar3;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_4;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  this->_padding_ = (longlong)&___7FHairStrandsRestResource__6B_;
  (this->PositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->PositionBuffer).Format = 0;
  (this->PositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionOffsetBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PositionOffsetBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PositionOffsetBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->PositionOffsetBuffer).Format = PF_Unknown;
  (this->TangentBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->TangentBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->TangentBuffer).Format = PF_Unknown;
  (this->PointAttributeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointAttributeBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->PointAttributeBuffer).Format = 0;
  (this->PointAttributeBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointAttributeBuffer).Format = PF_Unknown;
  (this->CurveAttributeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveAttributeBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->CurveAttributeBuffer).Format = 0;
  (this->CurveAttributeBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveAttributeBuffer).Format = PF_Unknown;
  (this->CurveMappingBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveMappingBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->CurveMappingBuffer).Format = 0;
  (this->CurveMappingBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveMappingBuffer).Format = PF_Unknown;
  (this->PointMappingBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointMappingBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->PointMappingBuffer).Format = 0;
  (this->PointMappingBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->PointMappingBuffer).Format = PF_Unknown;
  (this->PointToCurveBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PointToCurveBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->PointToCurveBuffer).Format = 0;
  (this->PointToCurveBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->CurveBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CurveBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->CurveBuffer).Format = PF_Unknown;
  this->BulkData = param_1;
  (this->CurveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveData).ArrayNum = 0;
  (this->CurveData).ArrayMax = 0;
  *(undefined8 *)&this->ExternalBuffers = 0;
  *(undefined8 *)&(this->ExternalBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalBuffers).field_0x20 = 0;
  this->CurveType = param_2;
  this->CachedTangentPointCount = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x48 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (((this->BulkData->Header).Flags & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!!(BulkData.Header.Flags & FHairStrandsBulkData::DataFlags_HasData)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x4b4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FHairStrandsRestResource *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FHairStrandsRestResource @ 14e03eaa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsRestResource::~FHairStrandsRestResource(FHairStrandsRestResource *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FRHIUnorderedAccessView *pFVar4;
  FRHIShaderResourceView *pFVar5;
  FRDGPooledBuffer *pFVar6;
  longlong lVar7;
  
  *(undefined4 *)&(this->ExternalBuffers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExternalBuffers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FRDGExternalBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FRDGExternalBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FRDGExternalBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalBuffers);
  pFVar3 = (this->CurveData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->CurveBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->CurveBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->CurveBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->PointToCurveBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->PointToCurveBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->PointToCurveBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->PointMappingBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->PointMappingBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->PointMappingBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->CurveMappingBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->CurveMappingBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->CurveMappingBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->CurveAttributeBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->CurveAttributeBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->CurveAttributeBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->PointAttributeBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->PointAttributeBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->PointAttributeBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->TangentBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->TangentBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->TangentBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->PositionOffsetBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->PositionOffsetBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->PositionOffsetBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  pFVar4 = (this->PositionBuffer).UAV.Reference;
  if (pFVar4 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->PositionBuffer).SRV.Reference;
  if (pFVar5 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar5);
  }
  pFVar6 = (this->PositionBuffer).Buffer.Reference;
  if (pFVar6 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar6->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
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

// GetFriendlyName @ 14e050370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsRestResource::GetFriendlyName
          (FHairStrandsRestResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsResource");
  return __return_storage_ptr__;
}

// GetTangentBuffer @ 14e054530

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FHairStrandsRestResource::GetTangentBuffer
          (FHairStrandsRestResource *this,FRDGExternalBuffer *__return_storage_ptr__,
          FRDGBuilder *param_1,FGlobalShaderMap *param_2,uint param_3,uint param_4)

{
  FRDGPooledBuffer *pFVar1;
  FRDGBufferUAV *pFVar2;
  FRDGBufferSRV *pFVar3;
  
  pFVar1 = (this->TangentBuffer).Buffer.Reference;
  if ((pFVar1 == (FRDGPooledBuffer *)0x0) || ((pFVar1->Desc).NumElements >> 1 < param_3)) {
    InternalCreateVertexBufferRDG<FHairStrandsTangentFormat>
              (param_1,param_3 * 2,&this->TangentBuffer,L"Hair.StrandsRest_TangentBuffer",
               (FName *)((longlong)&this->_padding_ + 4),Dynamic);
  }
  else if (param_3 <= this->CachedTangentPointCount) goto LAB_14e0545eb;
  pFVar2 = RegisterAsUAV(param_1,&this->TangentBuffer,None);
  pFVar3 = RegisterAsSRV(param_1,&this->PositionBuffer);
  AddHairTangentPass(param_1,param_2,param_3,(FHairGroupPublicData *)0x0,pFVar3,pFVar2);
  this->CachedTangentPointCount = param_3;
LAB_14e0545eb:
  FRDGExternalBuffer::FRDGExternalBuffer(__return_storage_ptr__,&this->TangentBuffer);
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e056650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsRestResource::InternalAllocate(FHairStrandsRestResource *this,FRDGBuilder *param_1)

{
  longlong *plVar1;
  FRDGExternalBuffer *pFVar2;
  undefined8 uVar3;
  uint uVar4;
  FHairStrandsBulkData *pFVar5;
  FChunk *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGPooledBuffer *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  FHairTranscoding *pFVar16;
  TRefCountPtr<FRDGPooledBuffer> *pTVar17;
  FRDGImportedBuffer *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  FHairBulkContainer *pFVar21;
  wchar_t *pwVar22;
  FName *pFVar23;
  FRDGBuffer *local_res8;
  ForAnyElementType local_398;
  undefined8 local_390;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_388;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_378;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_368;
  undefined1 local_358;
  undefined2 uStack_357;
  undefined1 uStack_355;
  undefined4 uStack_354;
  undefined4 uStack_350;
  float fStack_34c;
  undefined8 local_348;
  float fStack_340;
  uint uStack_33c;
  float fStack_31c;
  undefined1 local_318;
  undefined2 uStack_317;
  undefined1 uStack_315;
  undefined4 uStack_314;
  undefined4 uStack_310;
  float fStack_30c;
  undefined8 local_308;
  float fStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f4;
  undefined2 uStack_2f3;
  undefined1 uStack_2f1;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float fStack_2e8;
  undefined8 local_2e4;
  float fStack_2dc;
  undefined4 uStack_2d8;
  undefined1 local_2d0;
  undefined2 uStack_2cf;
  undefined1 uStack_2cd;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  float fStack_2c4;
  undefined8 local_2c0;
  float fStack_2b8;
  undefined4 uStack_2b4;
  undefined1 local_2ac;
  undefined2 uStack_2ab;
  undefined1 uStack_2a9;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  float fStack_2a0;
  undefined8 local_29c;
  float fStack_294;
  undefined4 uStack_290;
  undefined1 local_288;
  undefined2 uStack_287;
  undefined1 uStack_285;
  undefined4 uStack_284;
  undefined4 uStack_280;
  float fStack_27c;
  undefined8 local_278;
  float fStack_270;
  undefined4 uStack_26c;
  undefined1 local_264;
  undefined2 uStack_263;
  undefined1 uStack_261;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float fStack_258;
  undefined8 local_254;
  float fStack_24c;
  undefined4 uStack_248;
  FRDGImportedBuffer local_240;
  FHairTranscoding local_228;
  FHairTranscoding local_1f8;
  FHairTranscoding local_1c8;
  FHairTranscoding local_198;
  FHairTranscoding local_168;
  FHairTranscoding local_138;
  FHairTranscoding local_108;
  FHairTranscoding local_d8;
  FRDGImportedBuffer local_a8;
  FRDGImportedBuffer local_90;
  FRDGImportedBuffer local_78 [3];
  
  bVar14 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  if (!bVar14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("StreamingRequest.IsCompleted()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                        ,0x4cf,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar5 = this->BulkData;
  uVar4 = (pFVar5->Header).PointCount;
  uVar19 = 0;
  if (((pFVar5->Header).Flags & 4) == 0) {
    uStack_317 = 0;
    uStack_315 = 0;
    local_318 = 0;
    uStack_314 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uStack_310 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    fStack_30c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_308 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fStack_300 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_2fc = 0;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PositionBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PositionBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PositionBuffer(Strands)";
      }
    }
    local_1f8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
    local_1f8.PositionOffset.field0_0x0._4_8_ =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_310);
    local_1f8.UncompressedOffsetInBytes = 0;
    pFVar21 = &(pFVar5->Data).Positions;
    local_1f8._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
    pFVar16 = &local_1f8;
    local_1f8.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
    ;
  }
  else {
    uVar3 = *(undefined8 *)&(pFVar5->Header).Transcoding.PositionOffset.field0_0x0;
    pFVar21 = &(pFVar5->Data).TranscodedPositions;
    fStack_34c = (pFVar5->Header).Transcoding.PositionOffset.field0_0x0._s_0.Z;
    uStack_354 = (undefined4)uVar3;
    uStack_350 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_348 = *(undefined8 *)&(pFVar5->Header).Transcoding.PositionScale.field0_0x0;
    fStack_340 = (pFVar5->Header).Transcoding.PositionScale.field0_0x0._s_0.Z;
    pFVar6 = (pFVar5->Data).TranscodedPositions.ChunkRequest;
    local_358 = 1;
    uStack_33c = 0;
    if (pFVar6 != (FChunk *)0x0) {
      uVar19 = (pFVar6->Offset >> 4) * 0x18;
      uStack_33c = (pFVar6->TotalSize >> 4) * 0x18;
    }
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PositionBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PositionBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PositionBuffer(Strands)";
      }
    }
    local_228._1_2_ = uStack_357;
    local_228.bEnabled = true;
    local_228._3_1_ = uStack_355;
    local_228.PositionOffset.field0_0x0._0_4_ = uStack_354;
    local_228.PositionOffset.field0_0x0._4_8_ = CONCAT44(fStack_34c,uStack_350);
    pFVar16 = &local_228;
    local_228.UncompressedTotalSizeInBytes = uStack_33c;
    local_228.PositionScale.field0_0x0._s_0.Z = fStack_340;
    local_228.PositionScale.field0_0x0._0_8_ = local_348;
    local_228.UncompressedOffsetInBytes = uVar19;
  }
  pFVar23 = (FName *)((longlong)&this->_padding_ + 4);
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,pFVar21,&this->PositionBuffer,pwVar22,pFVar23,Static,pFVar16);
  fStack_2e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fStack_2dc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uStack_2f3 = 0;
  uStack_2f1 = 0;
  local_2f4 = 0;
  uStack_2f0 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_2ec = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_2e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_2d8 = 0;
  if (this->CurveType == Guides) {
    pwVar22 = L"Hair.StrandsRest_CurveAttributeBuffer(Guides)";
  }
  else {
    pwVar22 = L"Hair.StrandsRest_CurveAttributeBuffer(Cards)";
    if (this->CurveType == Strands) {
      pwVar22 = L"Hair.StrandsRest_CurveAttributeBuffer(Strands)";
    }
  }
  local_1c8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
  local_1c8.PositionOffset.field0_0x0._4_8_ =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_2ec);
  local_1c8._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
  local_1c8.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_1c8.UncompressedOffsetInBytes = 0;
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,&(this->BulkData->Data).CurveAttributes,&this->CurveAttributeBuffer,pwVar22,
             pFVar23,Static,&local_1c8);
  if (((this->BulkData->Header).Flags & 2) == 0) {
    if ((this->PointAttributeBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0) {
      local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.ArrayNum = 0;
      local_388.ArrayMax = 0;
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_388.AllocatorInstance,&local_388.ArrayMax);
      local_388.ArrayNum = iVar15 + 1;
      *(undefined4 *)(local_388.AllocatorInstance.Data + (longlong)iVar15 * 4) = 0;
      if (this->CurveType == Guides) {
        pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Guides)";
      }
      else {
        pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Strands)";
        }
      }
      InternalCreateByteAddressBufferRDG<unsigned_int>
                (param_1,&local_388,PF_R32_UINT,&this->PointAttributeBuffer,pwVar22,pFVar23,Static);
      pFVar18 = ::Register(&local_a8,param_1,&this->PointAttributeBuffer,CreateSRV,None);
      local_240.UAV = pFVar18->UAV;
      FRDGBuilder::UseExternalAccessMode
                (param_1,(FRDGViewableResource *)pFVar18->Buffer,SRVMask,Graphics);
      if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
    }
  }
  else {
    uStack_2cf = 0;
    uStack_2cd = 0;
    local_2d0 = 0;
    uStack_2cc = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uStack_2c8 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    fStack_2c4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_2c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fStack_2b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_2b4 = 0;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PointAttributeBuffer(Strands)";
      }
    }
    local_198._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
    local_198.PositionOffset.field0_0x0._4_8_ =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_2c8);
    local_198.UncompressedOffsetInBytes = 0;
    local_198._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
    local_198.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
    ;
    InternalCreateByteAddressBufferRDG_FromHairBulkData
              (param_1,&(this->BulkData->Data).PointAttributes,&this->PointAttributeBuffer,pwVar22,
               pFVar23,Static,&local_198);
  }
  if (((this->BulkData->Header).Flags & 0x20) == 0) {
    local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_378.ArrayNum = 0;
    local_378.ArrayMax = 0;
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_378.AllocatorInstance,&local_378.ArrayMax);
    local_378.ArrayNum = iVar15 + 1;
    *(undefined4 *)(local_378.AllocatorInstance.Data + (longlong)iVar15 * 4) = 0;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Strands)";
      }
    }
    InternalCreateByteAddressBufferRDG<unsigned_int>
              (param_1,&local_378,PF_R32_UINT,&this->PointMappingBuffer,pwVar22,pFVar23,Static);
    pFVar18 = ::Register(&local_240,param_1,&this->PointMappingBuffer,CreateSRV,None);
    local_a8.UAV = pFVar18->UAV;
    FRDGBuilder::UseExternalAccessMode
              (param_1,(FRDGViewableResource *)pFVar18->Buffer,SRVMask,Graphics);
    if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.AllocatorInstance.Data);
    }
  }
  else {
    uStack_2ab = 0;
    uStack_2a9 = 0;
    local_2ac = 0;
    uStack_2a8 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uStack_2a4 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    fStack_2a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_29c = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fStack_294 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_290 = 0;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PointMappingBuffer(Strands)";
      }
    }
    local_168._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
    local_168.PositionOffset.field0_0x0._4_8_ =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_2a4);
    local_168._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
    local_168.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
    ;
    local_168.UncompressedOffsetInBytes = 0;
    InternalCreateByteAddressBufferRDG_FromHairBulkData
              (param_1,&(this->BulkData->Data).PointMapping,&this->PointMappingBuffer,pwVar22,
               pFVar23,Static,&local_168);
  }
  if (((this->BulkData->Header).Flags & 0x40) == 0) {
    if ((this->CurveMappingBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0) {
      local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_368.ArrayNum = 0;
      local_368.ArrayMax = 0;
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_368.AllocatorInstance,&local_368.ArrayMax);
      local_368.ArrayNum = iVar15 + 1;
      *(undefined4 *)(local_368.AllocatorInstance.Data + (longlong)iVar15 * 4) = 0;
      if (this->CurveType == Guides) {
        pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Guides)";
      }
      else {
        pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Strands)";
        }
      }
      InternalCreateByteAddressBufferRDG<unsigned_int>
                (param_1,&local_368,PF_R32_UINT,&this->CurveMappingBuffer,pwVar22,pFVar23,Static);
      pFVar18 = ::Register(&local_90,param_1,&this->CurveMappingBuffer,CreateSRV,None);
      local_240.UAV = pFVar18->UAV;
      FRDGBuilder::UseExternalAccessMode
                (param_1,(FRDGViewableResource *)pFVar18->Buffer,SRVMask,Graphics);
      if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.AllocatorInstance.Data);
      }
    }
  }
  else {
    uStack_287 = 0;
    uStack_285 = 0;
    local_288 = 0;
    uStack_284 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uStack_280 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    fStack_27c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_278 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    fStack_270 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uStack_26c = 0;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_CurveMappingBuffer(Strands)";
      }
    }
    local_138._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
    local_138.PositionOffset.field0_0x0._4_8_ =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_280);
    local_138._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
    local_138.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
    ;
    local_138.UncompressedOffsetInBytes = 0;
    InternalCreateByteAddressBufferRDG_FromHairBulkData
              (param_1,&(this->BulkData->Data).CurveMapping,&this->CurveMappingBuffer,pwVar22,
               pFVar23,Static,&local_138);
  }
  fStack_258 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fStack_24c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uStack_263 = 0;
  uStack_261 = 0;
  local_264 = 0;
  uStack_260 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_25c = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_254 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_248 = 0;
  if (this->CurveType == Guides) {
    pwVar22 = L"Hair.StrandsRest_CurveBuffer(Guides)";
  }
  else {
    pwVar22 = L"Hair.StrandsRest_CurveBuffer(Cards)";
    if (this->CurveType == Strands) {
      pwVar22 = L"Hair.StrandsRest_CurveBuffer(Strands)";
    }
  }
  local_108._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
  local_108.PositionOffset.field0_0x0._4_8_ =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_25c);
  local_108._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
  local_108.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_108.UncompressedOffsetInBytes = 0;
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,&(this->BulkData->Data).Curves,&this->CurveBuffer,pwVar22,pFVar23,Static,
             &local_108);
  fStack_34c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fStack_340 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uStack_357 = 0;
  uStack_355 = 0;
  local_358 = 0;
  uStack_354 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_350 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  local_348 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uStack_33c = 0;
  if (this->CurveType == Guides) {
    pwVar22 = L"Hair.StrandsRest_PointToCurveBuffer(Guides)";
  }
  else {
    pwVar22 = L"Hair.StrandsRest_PointToCurveBuffer(Cards)";
    if (this->CurveType == Strands) {
      pwVar22 = L"Hair.StrandsRest_PointToCurveBuffer(Strands)";
    }
  }
  local_d8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ << 0x20;
  local_d8.PositionOffset.field0_0x0._4_8_ =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,uStack_350);
  local_d8._24_8_ = ZEXT48((uint)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z);
  local_d8.PositionScale.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_d8.UncompressedOffsetInBytes = 0;
  InternalCreateByteAddressBufferRDG_FromHairBulkData
            (param_1,&(this->BulkData->Data).PointToCurve,&this->PointToCurveBuffer,pwVar22,pFVar23,
             Static,&local_d8);
  if ((this->TangentBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0) {
    InternalCreateVertexBufferRDG<FHairStrandsTangentFormat>
              (param_1,uVar4 * 2,&this->TangentBuffer,L"Hair.StrandsRest_TangentBuffer",pFVar23,
               Dynamic);
    this->CachedTangentPointCount = 0;
  }
  pFVar2 = &this->PositionOffsetBuffer;
  if ((pFVar2->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    pFVar5 = this->BulkData;
    local_398.Data = (FScriptContainerElement *)0x0;
    local_390 = 0;
    dVar10 = ((pFVar5->Header).BoundingBox.Max.field0_0x0._s_0.X +
             (pFVar5->Header).BoundingBox.Min.field0_0x0._s_0.X) * __real_3fe0000000000000;
    fStack_31c = 1.0;
    dVar12 = ((pFVar5->Header).BoundingBox.Max.field0_0x0._s_0.Z +
             (pFVar5->Header).BoundingBox.Min.field0_0x0._s_0.Z) * __real_3fe0000000000000;
    dVar11 = ((pFVar5->Header).BoundingBox.Max.field0_0x0._s_0.Y +
             (pFVar5->Header).BoundingBox.Min.field0_0x0._s_0.Y) * __real_3fe0000000000000;
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1010,&local_398,(int *)((longlong)&local_390 + 4));
    uVar4 = iVar15 + 1;
    local_390 = CONCAT44(local_390._4_4_,uVar4);
    pFVar20 = local_398.Data + (longlong)iVar15 * 0x10;
    *(float *)pFVar20 = (float)dVar10;
    *(float *)(pFVar20 + 4) = (float)dVar11;
    *(float *)(pFVar20 + 8) = (float)dVar12;
    *(float *)(pFVar20 + 0xc) = fStack_31c;
    if (this->CurveType == Guides) {
      pwVar22 = L"Hair.StrandsRest_PositionOffsetBuffer(Guides)";
    }
    else {
      pwVar22 = L"Hair.StrandsRest_PositionOffsetBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar22 = L"Hair.StrandsRest_PositionOffsetBuffer(Strands)";
      }
    }
    if ((uVar4 & 0xfffffff) == 0) {
      pFVar7 = (pFVar2->Buffer).Reference;
      if (pFVar7 != (FRDGPooledBuffer *)0x0) {
        (pFVar2->Buffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar1 = &pFVar7->_padding_;
        LOCK();
        lVar13 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
    else {
      local_res8 = CreateStructuredBuffer
                             (param_1,pwVar22,0x10,uVar4,local_398.Data,(longlong)(int)uVar4 << 4,
                              None);
      *(FName *)((longlong)&local_res8->_padding_ + 4) = *pFVar23;
      pTVar17 = FRDGBuilder::ConvertToExternalBuffer(param_1,local_res8);
      pFVar7 = (pFVar2->Buffer).Reference;
      pFVar8 = pTVar17->Reference;
      if (pFVar7 != pFVar8) {
        (pFVar2->Buffer).Reference = pFVar8;
        if (pFVar8 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar7->_padding_;
          LOCK();
          lVar13 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar13 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
          }
        }
      }
      CreateExternalBufferViews(param_1,&local_res8,pFVar2,PF_Unknown);
    }
    pFVar18 = ::Register(local_78,param_1,pFVar2,CreateSRV,None);
    FRDGBuilder::UseExternalAccessMode
              (param_1,(FRDGViewableResource *)pFVar18->Buffer,SRVMask,Graphics);
    if (local_398.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data);
    }
  }
  return;
}

// InternalGetBulkData @ 14e058090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsBulkCommon * __thiscall
FHairStrandsRestResource::InternalGetBulkData(FHairStrandsRestResource *this)

{
  return (FHairStrandsBulkCommon *)this->BulkData;
}

// InternalGetOrRequestData @ 14e0582a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHairStrandsRestResource::InternalGetOrRequestData
          (FHairStrandsRestResource *this,uint param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = FHairStreamingRequest::IsNone((FHairStreamingRequest *)&this->_padding_);
  if (bVar1) {
    bVar1 = FHairStrandsBulkData::IsCookedBulkDataLoadedForCPUAccess(this->BulkData);
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

// InternalRelease @ 14e058a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsRestResource::InternalRelease(FHairStrandsRestResource *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  FRDGExternalBuffer::Release(&this->PositionBuffer);
  FRDGExternalBuffer::Release(&this->PositionOffsetBuffer);
  FRDGExternalBuffer::Release(&this->CurveAttributeBuffer);
  FRDGExternalBuffer::Release(&this->PointAttributeBuffer);
  FRDGExternalBuffer::Release(&this->PointToCurveBuffer);
  FRDGExternalBuffer::Release(&this->TangentBuffer);
  FRDGExternalBuffer::Release(&this->CurveBuffer);
  FRDGExternalBuffer::Release(&this->CurveMappingBuffer);
  FRDGExternalBuffer::Release(&this->PointMappingBuffer);
  iVar11 = 0;
  puVar1 = &(this->ExternalBuffers).field_0x10;
  *(undefined4 *)&this->_padding_ = 0;
  this->CachedTangentPointCount = 0;
  uVar6 = 1;
  iVar3 = *(int *)&(this->ExternalBuffers).field_0x28;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ExternalBuffers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e058b3d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e058b3d:
  uVar10 = *(uint *)&(this->ExternalBuffers).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->ExternalBuffers).field_0x8 -
                       *(int *)&(this->ExternalBuffers).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->ExternalBuffers).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->ExternalBuffers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e058c40;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e058c40:
  while( true ) {
    if (*(int *)&(this->ExternalBuffers).field_0x8 - *(int *)&(this->ExternalBuffers).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FRDGExternalBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FRDGExternalBuffer::Release
              ((FRDGExternalBuffer *)
               ((longlong)TStack_50.CurrentBitIndex * 0x38 +
               *(longlong *)&this->ExternalBuffers + 0x10));
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// InternalResetLoadedSize @ 14e058d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsRestResource::InternalResetLoadedSize(FHairStrandsRestResource *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014e058d5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->BulkData->_padding_ + 0x28))();
  return;
}

