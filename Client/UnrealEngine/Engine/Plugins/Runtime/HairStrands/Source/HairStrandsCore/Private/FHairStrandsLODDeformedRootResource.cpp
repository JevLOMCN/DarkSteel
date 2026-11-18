// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 5

// FHairStrandsLODDeformedRootResource @ 14e03ce20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODDeformedRootResource * __thiscall
FHairStrandsLODDeformedRootResource::FHairStrandsLODDeformedRootResource
          (FHairStrandsLODDeformedRootResource *this,FHairStrandsRestRootResource *param_1,
          EHairStrandsResourcesType param_2,uint param_3,FHairResourceName *param_4,FName *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRDGExternalBuffer *pFVar3;
  FHairStrandsLODDeformedRootResource *pFVar4;
  FHairStrandsLODRestRootResource *this_00;
  FHairStrandsRootBulkData *pFVar5;
  longlong lVar6;
  longlong lVar7;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  lVar6 = 2;
  lVar7 = 2;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_5;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&___7FHairStrandsLODDeformedRootResource__6B_;
  pFVar3 = this->DeformedUniqueTrianglePositionBuffer;
  this->Status = Invalid;
  this->AvailableCurveCount = 0;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  do {
    (pFVar3->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar3->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar3->Format = PF_Unknown;
    pFVar3 = pFVar3 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  this->SampleCount = 0;
  pFVar3 = this->DeformedSamplePositionsBuffer;
  lVar7 = 2;
  do {
    (pFVar3->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar3->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar3->Format = PF_Unknown;
    pFVar3 = pFVar3 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  pFVar3 = this->MeshSampleWeightsBuffer;
  do {
    (pFVar3->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar3->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar3->Format = PF_Unknown;
    pFVar3 = pFVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  this->CurrentIndex = 0;
  this->RootCount = 0;
  this->MeshLODIndex = param_3;
  this->CurveType = param_2;
  if (param_1 == (FHairStrandsRestRootResource *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRestResources",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x708,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsLODDeformedRootResource *)(*pcVar1)();
      return pFVar4;
    }
  }
  bVar2 = FHairStrandsRestRootResource::IsDataValid(param_1,param_3);
  if (bVar2) {
    this_00 = FHairStrandsRestRootResource::GetLOD(param_1,param_3);
    pFVar5 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
    this->RootCount = (pFVar5->Header).RootCount;
    pFVar5 = FHairStrandsLODRestRootResource::GetBulkData(this_00);
    this->SampleCount = (pFVar5->Header).SampleCount;
  }
  this->Status = Invalid;
  return this;
}

// ~FHairStrandsLODDeformedRootResource @ 14e03e6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsLODDeformedRootResource::~FHairStrandsLODDeformedRootResource
          (FHairStrandsLODDeformedRootResource *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  FRDGExternalBuffer *pFVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = 2;
  lVar8 = 2;
  pFVar6 = (FRDGExternalBuffer *)&this->CurrentIndex;
  do {
    pFVar2 = pFVar6[-1].UAV.Reference;
    lVar8 = lVar8 + -1;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = pFVar6[-1].SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = pFVar6[-1].Buffer.Reference;
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
    pFVar6 = pFVar6 + -1;
  } while (lVar8 != 0);
  lVar8 = 2;
  pFVar6 = this->MeshSampleWeightsBuffer;
  do {
    pFVar2 = pFVar6[-1].UAV.Reference;
    lVar8 = lVar8 + -1;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = pFVar6[-1].SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = pFVar6[-1].Buffer.Reference;
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
    pFVar6 = pFVar6 + -1;
  } while (lVar8 != 0);
  pFVar6 = (FRDGExternalBuffer *)&this->SampleCount;
  do {
    pFVar2 = pFVar6[-1].UAV.Reference;
    lVar7 = lVar7 + -1;
    if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    pFVar3 = pFVar6[-1].SRV.Reference;
    if (pFVar3 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = pFVar6[-1].Buffer.Reference;
    if (pFVar4 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    pFVar6 = pFVar6 + -1;
  } while (lVar7 != 0);
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

// GetFriendlyName @ 14e0502e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsLODDeformedRootResource::GetFriendlyName
          (FHairStrandsLODDeformedRootResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsLODDeformedRootResource ");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055e90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsLODDeformedRootResource::InternalAllocate
          (FHairStrandsLODDeformedRootResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FName *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  wchar_t *pwVar5;
  
  uVar2 = this->RootCount;
  if ((uVar2 != 0) && (this->Status == Invalid)) {
    uVar3 = this->SampleCount;
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    this->AvailableCurveCount = uVar2;
    this->Status = Initialized;
    if (uVar3 != 0) {
      pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer0(Strands)";
        }
      }
      InternalCreateStructuredBufferRDG<FHairStrandsMeshTrianglePositionFormat>
                (param_1,uVar3,this->DeformedSamplePositionsBuffer,pwVar5,pFVar1,Dynamic);
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer0(Strands)";
        }
      }
      InternalCreateStructuredBufferRDG<FHairStrandsMeshTrianglePositionFormat>
                (param_1,uVar3 + 4,this->MeshSampleWeightsBuffer,pwVar5,pFVar1,Dynamic);
      bVar4 = IsHairStrandContinuousDecimationReorderingEnabled();
      if (bVar4) {
        if (this->CurveType == Guides) {
          pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Guides)";
        }
        else {
          pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Cards)";
          if (this->CurveType == Strands) {
            pwVar5 = L"Hair.StrandsRootDeformed_DeformedSamplePositionsBuffer1(Strands)";
          }
        }
        InternalCreateStructuredBufferRDG<FHairStrandsMeshTrianglePositionFormat>
                  (param_1,this->SampleCount,this->DeformedSamplePositionsBuffer + 1,pwVar5,pFVar1,
                   Dynamic);
        if (this->CurveType == Guides) {
          pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Guides)";
        }
        else {
          pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Cards)";
          if (this->CurveType == Strands) {
            pwVar5 = L"Hair.StrandsRootDeformed_MeshSampleWeightsBuffer1(Strands)";
          }
        }
        InternalCreateStructuredBufferRDG<FHairStrandsMeshTrianglePositionFormat>
                  (param_1,uVar3 + 4,this->MeshSampleWeightsBuffer + 1,pwVar5,pFVar1,Dynamic);
      }
    }
    pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
    if (this->CurveType == Guides) {
      pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Guides)";
    }
    else {
      pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Cards)";
      if (this->CurveType == Strands) {
        pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer0(Strands)";
      }
    }
    InternalCreateVertexBufferRDG<FHairStrandsMeshTrianglePositionFormat>
              (param_1,this->RootCount * 3,this->DeformedUniqueTrianglePositionBuffer,pwVar5,pFVar1,
               Dynamic);
    bVar4 = IsHairStrandContinuousDecimationReorderingEnabled();
    if (bVar4) {
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRootDeformed_DeformedUniqueTrianglePosition0Buffer1(Strands)";
        }
      }
      InternalCreateVertexBufferRDG<FHairStrandsMeshTrianglePositionFormat>
                (param_1,this->RootCount * 3,this->DeformedUniqueTrianglePositionBuffer + 1,pwVar5,
                 pFVar1,Dynamic);
    }
  }
  return;
}

// InternalRelease @ 14e058760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsLODDeformedRootResource::InternalRelease(FHairStrandsLODDeformedRootResource *this)

{
  bool bVar1;
  
  this->Status = Invalid;
  this->AvailableCurveCount = 0;
  FRDGExternalBuffer::Release(this->DeformedUniqueTrianglePositionBuffer);
  FRDGExternalBuffer::Release(this->DeformedSamplePositionsBuffer);
  FRDGExternalBuffer::Release(this->MeshSampleWeightsBuffer);
  bVar1 = IsHairStrandContinuousDecimationReorderingEnabled();
  if (bVar1) {
    FRDGExternalBuffer::Release(this->DeformedUniqueTrianglePositionBuffer + 1);
    FRDGExternalBuffer::Release(this->DeformedSamplePositionsBuffer + 1);
    FRDGExternalBuffer::Release(this->MeshSampleWeightsBuffer + 1);
  }
  return;
}

