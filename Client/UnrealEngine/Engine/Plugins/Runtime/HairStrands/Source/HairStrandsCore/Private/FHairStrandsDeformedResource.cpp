// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 9

// GetResourcesSize @ 14e0191e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall FHairStrandsDeformedResource::GetResourcesSize(FHairStrandsDeformedResource *this)

{
  FRDGPooledBuffer *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pFVar1 = this->DeformedPositionBuffer[0].Buffer.Reference;
  iVar2 = 0;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = this->DeformedPositionBuffer[1].Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->TangentBuffer).Buffer.Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  pFVar1 = (this->DeformerBuffer).Buffer.Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    iVar2 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  return iVar2 + iVar5 + iVar4 + iVar3;
}

// FHairStrandsDeformedResource @ 14e03c770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsDeformedResource * __thiscall
FHairStrandsDeformedResource::FHairStrandsDeformedResource
          (FHairStrandsDeformedResource *this,FHairStrandsBulkData *param_1,
          EHairStrandsResourcesType param_2,FHairResourceName *param_3,FName *param_4)

{
  FHairStrandsBulkData *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  uint uVar12;
  FRDGExternalBuffer *pFVar13;
  longlong lVar14;
  longlong lVar15;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  lVar14 = 2;
  lVar15 = 2;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_4;
  this->_padding_ = (longlong)&___7FHairStrandsDeformedResource__6B_;
  pFVar13 = this->DeformedPositionBuffer;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  do {
    (pFVar13->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar13->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar13->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar13->Format = PF_Unknown;
    pFVar13 = pFVar13 + 1;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  pFVar13 = this->DeformedOffsetBuffer;
  do {
    (pFVar13->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar13->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar13->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar13->Format = PF_Unknown;
    pFVar13 = pFVar13 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  (this->TangentBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->TangentBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->TangentBuffer).Format = PF_Unknown;
  (this->DeformerBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DeformerBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->DeformerBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->DeformerBuffer).Format = PF_Unknown;
  (this->DeformerPointAttributeBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DeformerPointAttributeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->DeformerPointAttributeBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->DeformerPointAttributeBuffer).Format = PF_Unknown;
  (this->DeformerCurveAttributeBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DeformerCurveAttributeBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->DeformerCurveAttributeBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->DeformerCurveAttributeBuffer).Format = PF_Unknown;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar9 = __real_3fe0000000000000;
  this->PositionOffset[0].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->PositionOffset[0].field0_0x0._s_0.Y = (double)uVar11;
  this->PositionOffset[0].field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->PositionOffset[1].field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->PositionOffset[1].field0_0x0._s_0.Y = (double)uVar11;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->BulkData = param_1;
  this->PositionOffset[1].field0_0x0._s_0.Z = (double)uVar11;
  *(undefined8 *)&(this->ExternalBuffers).field_0x8 = 0;
  this->CurrentIndex = 0;
  this->UniqueViewIDs[0] = 0;
  this->UniqueViewIDs[1] = 0;
  this->CurveType = param_2;
  *(undefined8 *)&this->ExternalBuffers = 0;
  *(undefined8 *)&(this->ExternalBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalBuffers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalBuffers).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalBuffers).field_0x48 = 0;
  pFVar1 = this->BulkData;
  uVar12 = this->CurrentIndex;
  dVar6 = (pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.Y;
  dVar4 = (pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.Z;
  dVar7 = (pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.Y;
  dVar8 = (pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.Z;
  this->PositionOffset[uVar12].field0_0x0._s_0.X =
       ((pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.X +
       (pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.X) * dVar9;
  dVar5 = _UNK_150689678;
  dVar10 = ___xmm_3fe00000000000003fe0000000000000;
  dVar4 = (dVar8 + dVar4) * _UNK_150689678;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = (dVar7 + dVar6) * ___xmm_3fe00000000000003fe0000000000000;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&this->PositionOffset[uVar12].field0_0x0 + 8) = auVar2;
  pFVar1 = this->BulkData;
  uVar12 = 1 - this->CurrentIndex;
  dVar4 = (pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.Y;
  dVar6 = (pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.Y;
  dVar5 = ((pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.Z +
          (pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.Z) * dVar5;
  this->PositionOffset[uVar12].field0_0x0._s_0.X =
       ((pFVar1->Header).BoundingBox.Min.field0_0x0._s_0.X +
       (pFVar1->Header).BoundingBox.Max.field0_0x0._s_0.X) * dVar9;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = (dVar4 + dVar6) * dVar10;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)&this->PositionOffset[uVar12].field0_0x0 + 8) = auVar3;
  return this;
}

// ~FHairStrandsDeformedResource @ 14e03e430

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsDeformedResource::~FHairStrandsDeformedResource(FHairStrandsDeformedResource *this)

{
  longlong *plVar1;
  void *pvVar2;
  FRHIUnorderedAccessView *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FRDGPooledBuffer *pFVar5;
  longlong lVar6;
  FRDGExternalBuffer *pFVar7;
  longlong lVar8;
  longlong lVar9;
  
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
  pFVar3 = (this->DeformerCurveAttributeBuffer).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->DeformerCurveAttributeBuffer).SRV.Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->DeformerCurveAttributeBuffer).Buffer.Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar3 = (this->DeformerPointAttributeBuffer).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->DeformerPointAttributeBuffer).SRV.Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->DeformerPointAttributeBuffer).Buffer.Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar3 = (this->DeformerBuffer).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->DeformerBuffer).SRV.Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->DeformerBuffer).Buffer.Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar3 = (this->TangentBuffer).UAV.Reference;
  if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->TangentBuffer).SRV.Reference;
  if (pFVar4 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar4);
  }
  pFVar5 = (this->TangentBuffer).Buffer.Reference;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  lVar8 = 2;
  lVar9 = 2;
  pFVar7 = &this->TangentBuffer;
  do {
    pFVar3 = pFVar7[-1].UAV.Reference;
    lVar9 = lVar9 + -1;
    if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = pFVar7[-1].SRV.Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = pFVar7[-1].Buffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar7 = pFVar7 + -1;
  } while (lVar9 != 0);
  pFVar7 = this->DeformedOffsetBuffer;
  do {
    pFVar3 = pFVar7[-1].UAV.Reference;
    lVar8 = lVar8 + -1;
    if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = pFVar7[-1].SRV.Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    pFVar5 = pFVar7[-1].Buffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar9 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
    pFVar7 = pFVar7 + -1;
  } while (lVar8 != 0);
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

// GetDeformerBuffer @ 14e04fe80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FHairStrandsDeformedResource::GetDeformerBuffer
          (FHairStrandsDeformedResource *this,FRDGBuilder *param_1)

{
  FRDGExternalBuffer *pFVar1;
  wchar_t *pwVar2;
  
  pFVar1 = &this->DeformerBuffer;
  if ((pFVar1->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    if (this->CurveType == Guides) {
      pwVar2 = L"Hair.StrandsDeformed_DeformerBuffer(Guides)";
    }
    else {
      pwVar2 = L"Hair.StrandsDeformed_DeformerBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar2 = L"Hair.StrandsDeformed_DeformerBuffer(Strands)";
      }
    }
    InternalCreateByteAddressBufferRDG
              (param_1,(ulonglong)
                       ((this->BulkData->Header).Strides.PositionStride *
                       (this->BulkData->Header).PointCount),pFVar1,pwVar2,
               (FName *)((longlong)&this->_padding_ + 4),Dynamic);
  }
  return pFVar1;
}

// GetDeformerCurveAttributeBuffer @ 14e04ff00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FHairStrandsDeformedResource::GetDeformerCurveAttributeBuffer
          (FHairStrandsDeformedResource *this,FRDGBuilder *param_1)

{
  FHairStrandsBulkData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGExternalBuffer *pFVar5;
  uint uVar6;
  wchar_t *pwVar7;
  
  if ((this->DeformerCurveAttributeBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0) {
    return &this->DeformerCurveAttributeBuffer;
  }
  pFVar1 = this->BulkData;
  uVar6 = (pFVar1->Header).Strides.CurveAttributeChunkElementCount;
  uVar4 = 0x3fffff;
  if ((pFVar1->Header).CurveCount < 0x3fffff) {
    uVar4 = (pFVar1->Header).CurveCount;
  }
  uVar6 = (((uVar4 - 1) + uVar6) / uVar6) * (pFVar1->Header).Strides.CurveAttributeChunkStride;
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x5a4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGExternalBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (this->CurveType == Guides) {
    pwVar7 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Guides)";
  }
  else {
    pwVar7 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Cards)";
    if (this->CurveType == Strands) {
      pwVar7 = L"Hair.StrandsDeformed_DeformerCurveAttributeBuffer(Strands)";
    }
  }
  InternalCreateByteAddressBufferRDG
            (param_1,(ulonglong)uVar6,&this->DeformerCurveAttributeBuffer,pwVar7,
             (FName *)((longlong)&this->_padding_ + 4),Dynamic);
  return &this->DeformerCurveAttributeBuffer;
}

// GetDeformerPointAttributeBuffer @ 14e050010

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGExternalBuffer * __thiscall
FHairStrandsDeformedResource::GetDeformerPointAttributeBuffer
          (FHairStrandsDeformedResource *this,FRDGBuilder *param_1)

{
  FHairStrandsBulkData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  long64 lVar5;
  FRDGExternalBuffer *pFVar6;
  uint uVar7;
  wchar_t *pwVar8;
  
  pFVar6 = &this->DeformerPointAttributeBuffer;
  if (((pFVar6->Buffer).Reference == (FRDGPooledBuffer *)0x0) &&
     (((this->BulkData->Header).Flags & 2) != 0)) {
    lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&(this->BulkData->Data).PointAttributes.Data);
    if (0 < lVar5) {
      pFVar1 = this->BulkData;
      uVar7 = (pFVar1->Header).Strides.PointAttributeChunkElementCount;
      uVar4 = 0xffffff;
      if ((pFVar1->Header).PointCount < 0xffffff) {
        uVar4 = (pFVar1->Header).PointCount;
      }
      uVar7 = (((uVar4 - 1) + uVar7) / uVar7) * (pFVar1->Header).Strides.PointAttributeChunkStride;
      if (uVar7 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                           ,0x5b0,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FRDGExternalBuffer *)(*pcVar2)();
          return pFVar6;
        }
      }
      if (this->CurveType == Guides) {
        pwVar8 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Guides)";
      }
      else {
        pwVar8 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar8 = L"Hair.StrandsDeformedt_DeformerPointAttributeBuffer(Strands)";
        }
      }
      InternalCreateByteAddressBufferRDG
                (param_1,(ulonglong)uVar7,pFVar6,pwVar8,(FName *)((longlong)&this->_padding_ + 4),
                 Dynamic);
    }
  }
  return pFVar6;
}

// GetFriendlyName @ 14e050280

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsDeformedResource::GetFriendlyName
          (FHairStrandsDeformedResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsDeformedResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsDeformedResource::InternalAllocate
          (FHairStrandsDeformedResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FName *pFVar1;
  FRDGExternalBuffer *pFVar2;
  FHairStrandsBulkData *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGPooledBuffer *pFVar5;
  FRDGBuffer *pFVar6;
  FRDGBuffer *pFVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FRDGImportedBuffer *pFVar11;
  FRDGBuffer *pFVar12;
  FRDGBuffer *pFVar13;
  TRefCountPtr<FRDGPooledBuffer> *pTVar14;
  uint uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FRDGBuffer *local_res8;
  FRDGImportedBuffer local_b8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  uVar15 = (this->BulkData->Header).PointCount;
  if (param_3 < uVar15) {
    uVar15 = param_3;
  }
  pFVar11 = ::Register((FRDGImportedBuffer *)&local_98,param_1,this->DeformedPositionBuffer,None,
                       None);
  local_b8.UAV = pFVar11->UAV;
  pFVar6 = pFVar11->Buffer;
  pFVar11 = ::Register(&local_b8,param_1,this->DeformedPositionBuffer + 1,None,None);
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  pFVar7 = pFVar11->Buffer;
  if (this->CurveType == Guides) {
    pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Guides)";
  }
  else {
    pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Cards)";
    if (this->CurveType == Strands) {
      pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer0(Strands)";
    }
  }
  pFVar12 = InternalCreateByteAddressBufferRDG
                      (param_1,(ulonglong)(uVar15 * (this->BulkData->Header).Strides.PositionStride)
                       ,this->DeformedPositionBuffer,pwVar17,pFVar1,Dynamic);
  if (this->CurveType == Guides) {
    pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Guides)";
  }
  else {
    pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Cards)";
    if (this->CurveType == Strands) {
      pwVar17 = L"Hair.StrandsDeformed_DeformedPositionBuffer1(Strands)";
    }
  }
  pFVar13 = InternalCreateByteAddressBufferRDG
                      (param_1,(ulonglong)(uVar15 * (this->BulkData->Header).Strides.PositionStride)
                       ,this->DeformedPositionBuffer + 1,pwVar17,pFVar1,Dynamic);
  if (this->CurveType == Guides) {
    pwVar17 = L"Hair.StrandsDeformed_TangentBuffer(Guides)";
  }
  else {
    pwVar17 = L"Hair.StrandsDeformed_TangentBuffer(Cards)";
    if (this->CurveType == Strands) {
      pwVar17 = L"Hair.StrandsDeformed_TangentBuffer(Strands)";
    }
  }
  InternalCreateVertexBufferRDG<FHairStrandsTangentFormat>
            (param_1,uVar15 * 2,&this->TangentBuffer,pwVar17,pFVar1,Dynamic);
  if (pFVar6 != (FRDGBuffer *)0x0) {
    uVar15 = (pFVar12->Desc).NumElements * (pFVar12->Desc).BytesPerElement;
    uVar9 = (pFVar6->Desc).NumElements * (pFVar6->Desc).BytesPerElement;
    if (uVar9 < uVar15) {
      uVar15 = uVar9;
    }
    AddCopyBufferPass(param_1,pFVar12,0,pFVar6,0,(ulonglong)uVar15);
    AddCopyBufferPass(param_1,pFVar13,0,pFVar7,0,(ulonglong)uVar15);
  }
  pFVar2 = this->DeformedOffsetBuffer;
  if ((pFVar2->Buffer).Reference == (FRDGPooledBuffer *)0x0) {
    pFVar3 = this->BulkData;
    local_b8.Buffer = (FRDGBuffer *)0x0;
    local_b8.SRV = (FRDGBufferSRV *)0x0;
    fStack_8c = 1.0;
    fVar20 = (float)(((pFVar3->Header).BoundingBox.Min.field0_0x0._s_0.X +
                     (pFVar3->Header).BoundingBox.Max.field0_0x0._s_0.X) * __real_3fe0000000000000);
    fVar19 = (float)(((pFVar3->Header).BoundingBox.Min.field0_0x0._s_0.Z +
                     (pFVar3->Header).BoundingBox.Max.field0_0x0._s_0.Z) * __real_3fe0000000000000);
    fVar18 = (float)(((pFVar3->Header).BoundingBox.Min.field0_0x0._s_0.Y +
                     (pFVar3->Header).BoundingBox.Max.field0_0x0._s_0.Y) * __real_3fe0000000000000);
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1010,(ForAnyElementType *)&local_b8,(int *)((longlong)&local_b8.SRV + 4));
    uVar15 = iVar10 + 1;
    local_b8.SRV = (FRDGBufferSRV *)CONCAT44(local_b8.SRV._4_4_,uVar15);
    plVar16 = &(local_b8.Buffer)->_padding_ + (longlong)iVar10 * 2;
    *(float *)plVar16 = fVar20;
    *(float *)((longlong)plVar16 + 4) = fVar18;
    *(float *)(plVar16 + 1) = fVar19;
    *(float *)((longlong)plVar16 + 0xc) = fStack_8c;
    if (this->CurveType == Guides) {
      pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Guides)";
    }
    else {
      pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Cards)";
      if (this->CurveType == Strands) {
        pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer0(Strands)";
      }
    }
    local_98 = fVar20;
    fStack_94 = fVar18;
    fStack_90 = fVar19;
    if ((uVar15 & 0xfffffff) == 0) {
      pFVar4 = (pFVar2->Buffer).Reference;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        (pFVar2->Buffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar16 = &pFVar4->_padding_;
        LOCK();
        lVar8 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (plVar16 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    else {
      local_res8 = CreateStructuredBuffer
                             (param_1,pwVar17,0x10,uVar15,local_b8.Buffer,(longlong)(int)uVar15 << 4
                              ,None);
      *(FName *)((longlong)&local_res8->_padding_ + 4) = *pFVar1;
      pTVar14 = FRDGBuilder::ConvertToExternalBuffer(param_1,local_res8);
      pFVar4 = (pFVar2->Buffer).Reference;
      pFVar5 = pTVar14->Reference;
      if (pFVar4 != pFVar5) {
        (pFVar2->Buffer).Reference = pFVar5;
        if (pFVar5 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          plVar16 = &pFVar4->_padding_;
          LOCK();
          lVar8 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if (((int)lVar8 == 1) && (plVar16 != (longlong *)0x0)) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
      CreateExternalBufferViews(param_1,&local_res8,pFVar2,PF_Unknown);
    }
    if (this->CurveType == Guides) {
      pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Guides)";
    }
    else {
      pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Cards)";
      if (this->CurveType == Strands) {
        pwVar17 = L"Hair.StrandsDeformed_DeformedOffsetBuffer1(Strands)";
      }
    }
    if (((ulonglong)local_b8.SRV & 0xfffffff) == 0) {
      pFVar4 = this->DeformedOffsetBuffer[1].Buffer.Reference;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        this->DeformedOffsetBuffer[1].Buffer.Reference = (FRDGPooledBuffer *)0x0;
        plVar16 = &pFVar4->_padding_;
        LOCK();
        lVar8 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if (((int)lVar8 == 1) && (plVar16 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    else {
      local_res8 = CreateStructuredBuffer
                             (param_1,pwVar17,0x10,(uint)local_b8.SRV,local_b8.Buffer,
                              (longlong)(int)(uint)local_b8.SRV << 4,None);
      *(FName *)((longlong)&local_res8->_padding_ + 4) = *pFVar1;
      pTVar14 = FRDGBuilder::ConvertToExternalBuffer(param_1,local_res8);
      pFVar4 = this->DeformedOffsetBuffer[1].Buffer.Reference;
      pFVar5 = pTVar14->Reference;
      if (pFVar4 != pFVar5) {
        this->DeformedOffsetBuffer[1].Buffer.Reference = pFVar5;
        if (pFVar5 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          plVar16 = &pFVar4->_padding_;
          LOCK();
          lVar8 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if (((int)lVar8 == 1) && (plVar16 != (longlong *)0x0)) {
            (**(code **)pFVar4->_padding_)(pFVar4,1);
          }
        }
      }
      CreateExternalBufferViews(param_1,&local_res8,this->DeformedOffsetBuffer + 1,PF_Unknown);
    }
    if (local_b8.Buffer != (FRDGBuffer *)0x0) {
      FMemory::Free(local_b8.Buffer);
    }
  }
  return;
}

// InternalRelease @ 14e058490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsDeformedResource::InternalRelease(FHairStrandsDeformedResource *this)

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
  
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer);
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer + 1);
  FRDGExternalBuffer::Release(&this->TangentBuffer);
  FRDGExternalBuffer::Release(&this->DeformerBuffer);
  FRDGExternalBuffer::Release(&this->DeformerPointAttributeBuffer);
  FRDGExternalBuffer::Release(&this->DeformerCurveAttributeBuffer);
  FRDGExternalBuffer::Release(this->DeformedOffsetBuffer);
  FRDGExternalBuffer::Release(this->DeformedOffsetBuffer + 1);
  iVar11 = 0;
  puVar1 = &(this->ExternalBuffers).field_0x10;
  iVar3 = *(int *)&(this->ExternalBuffers).field_0x28;
  uVar6 = 1;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e05859d;
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
LAB_14e05859d:
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
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e0586a0;
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
LAB_14e0586a0:
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

