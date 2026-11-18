// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 11

// FHairStrandsLODRestRootResource @ 14e03cfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsLODRestRootResource * __thiscall
FHairStrandsLODRestRootResource::FHairStrandsLODRestRootResource
          (FHairStrandsLODRestRootResource *this,
          TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *param_1,int param_2,
          EHairStrandsResourcesType param_3,uint param_4,FHairResourceName *param_5,FName *param_6)

{
  code *pcVar1;
  bool bVar2;
  FHairStrandsRootBulkData *pFVar3;
  FHairStrandsLODRestRootResource *pFVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_6;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)&___7FHairStrandsLODRestRootResource__6B_;
  this->Status = Invalid;
  this->AvailableCurveCount = 0;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->UniqueTriangleIndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->UniqueTriangleIndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->UniqueTriangleIndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->UniqueTriangleIndexBuffer).Format = PF_Unknown;
  (this->RootToUniqueTriangleIndexBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->RootToUniqueTriangleIndexBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RootToUniqueTriangleIndexBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RootToUniqueTriangleIndexBuffer).Format = PF_Unknown;
  (this->RootBarycentricBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->RootBarycentricBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RootBarycentricBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RootBarycentricBuffer).Format = PF_Unknown;
  (this->RestUniqueTrianglePositionBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->RestUniqueTrianglePositionBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RestUniqueTrianglePositionBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RestUniqueTrianglePositionBuffer).Format = PF_Unknown;
  this->SampleCount = 0;
  (this->MeshInterpolationWeightsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshInterpolationWeightsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->MeshInterpolationWeightsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->MeshInterpolationWeightsBuffer).Format = PF_Unknown;
  (this->MeshSampleIndicesAndSectionsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->MeshSampleIndicesAndSectionsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->MeshSampleIndicesAndSectionsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->MeshSampleIndicesAndSectionsBuffer).Format = PF_Unknown;
  (this->RestSamplePositionsBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->RestSamplePositionsBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->RestSamplePositionsBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->RestSamplePositionsBuffer).Format = PF_Unknown;
  this->BulkDataArray = param_1;
  this->BulkDataIndex = param_2;
  this->CurveType = param_3;
  this->MeshLODIndex = param_4;
  pFVar3 = GetBulkData(this);
  if (this->MeshLODIndex != (pFVar3->Header).LODIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshLODIndex == GetBulkData().Header.LODIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x659,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FHairStrandsLODRestRootResource *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->Status = Invalid;
  pFVar3 = GetBulkData(this);
  this->SampleCount = (pFVar3->Header).SampleCount;
  return this;
}

// ~FHairStrandsLODRestRootResource @ 14e03e840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsLODRestRootResource::~FHairStrandsLODRestRootResource
          (FHairStrandsLODRestRootResource *this)

{
  longlong *plVar1;
  FRHIUnorderedAccessView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->RestSamplePositionsBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->RestSamplePositionsBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RestSamplePositionsBuffer).Buffer.Reference;
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
  pFVar2 = (this->MeshSampleIndicesAndSectionsBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->MeshSampleIndicesAndSectionsBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->MeshSampleIndicesAndSectionsBuffer).Buffer.Reference;
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
  pFVar2 = (this->MeshInterpolationWeightsBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->MeshInterpolationWeightsBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->MeshInterpolationWeightsBuffer).Buffer.Reference;
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
  pFVar2 = (this->RestUniqueTrianglePositionBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->RestUniqueTrianglePositionBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RestUniqueTrianglePositionBuffer).Buffer.Reference;
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
  pFVar2 = (this->RootBarycentricBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->RootBarycentricBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RootBarycentricBuffer).Buffer.Reference;
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
  pFVar2 = (this->RootToUniqueTriangleIndexBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->RootToUniqueTriangleIndexBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->RootToUniqueTriangleIndexBuffer).Buffer.Reference;
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
  pFVar2 = (this->UniqueTriangleIndexBuffer).UAV.Reference;
  if (pFVar2 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->UniqueTriangleIndexBuffer).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar4 = (this->UniqueTriangleIndexBuffer).Buffer.Reference;
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

// GetBulkData @ 14e04e820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRootBulkData * __thiscall
FHairStrandsLODRestRootResource::GetBulkData(FHairStrandsLODRestRootResource *this)

{
  uint uVar1;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHairStrandsRootBulkData *pFVar6;
  
  if ((this->BulkDataIndex < 0) || (this->BulkDataArray->ArrayNum <= this->BulkDataIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkDataArray.IsValidIndex(BulkDataIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                       ,0x1b3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRootBulkData *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar2 = this->BulkDataArray;
  uVar1 = this->BulkDataIndex;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRootBulkData *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FHairStrandsRootBulkData *)
         ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x1d8);
}

// GetBulkData @ 14e04e8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsRootBulkData * __thiscall
FHairStrandsLODRestRootResource::GetBulkData(FHairStrandsLODRestRootResource *this)

{
  uint uVar1;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHairStrandsRootBulkData *pFVar6;
  
  if ((this->BulkDataIndex < 0) || (this->BulkDataArray->ArrayNum <= this->BulkDataIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkDataArray.IsValidIndex(BulkDataIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                       ,0x1ad,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRootBulkData *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar2 = this->BulkDataArray;
  uVar1 = this->BulkDataIndex;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsRootBulkData *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FHairStrandsRootBulkData *)
         ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x1d8);
}

// GetFriendlyName @ 14e050310

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairStrandsLODRestRootResource::GetFriendlyName
          (FHairStrandsLODRestRootResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairStrandsLODRestRootResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e0560d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairStrandsLODRestRootResource::InternalAllocate
          (FHairStrandsLODRestRootResource *this,FRDGBuilder *param_1,uint param_2,uint param_3)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  FHairStrandsRootBulkData *pFVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
    Reset(this);
  }
  pFVar4 = GetBulkData(this);
  if ((pFVar4->Header).PointCount == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkData.Header.PointCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x67d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar9 = (pFVar4->Header).RootCount;
  uVar8 = uVar9;
  if (param_2 < uVar9) {
    uVar8 = param_2;
  }
  if (((this->Status != Completed) && (this->Status != Initialized)) ||
     (this->AvailableCurveCount < uVar8)) {
    pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
    if (this->CurveType == Guides) {
      pwVar5 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Guides)";
    }
    else {
      pwVar5 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar5 = L"Hair.StrandsRestRoot_RootTriangleBarycentricBuffer(Strands)";
      }
    }
    InternalCreateVertexBufferRDG_FromHairBulkData<FHairStrandsRootBarycentricFormat>
              (param_1,&(pFVar4->Data).RootBarycentricBuffer,uVar9,&this->RootBarycentricBuffer,
               pwVar5,pFVar1,Static);
    if (this->CurveType == Guides) {
      pwVar5 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Guides)";
    }
    else {
      pwVar5 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar5 = L"Hair.StrandsRestRoot_RootToUniqueTriangleIndexBuffer(Strands)";
      }
    }
    InternalCreateVertexBufferRDG_FromHairBulkData<FHairStrandsRootToUniqueTriangleIndexFormat>
              (param_1,&(pFVar4->Data).RootToUniqueTriangleIndexBuffer,(pFVar4->Header).RootCount,
               &this->RootToUniqueTriangleIndexBuffer,pwVar5,pFVar1,Static);
    if (this->CurveType == Guides) {
      pwVar5 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Guides)";
    }
    else {
      pwVar5 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar5 = L"Hair.StrandsRestRoot_UniqueTriangleIndexBuffer(Strands)";
      }
    }
    InternalCreateVertexBufferRDG_FromHairBulkData<FHairStrandsUniqueTriangleIndexFormat>
              (param_1,&(pFVar4->Data).UniqueTriangleIndexBuffer,
               (pFVar4->Header).UniqueTriangleCount,&this->UniqueTriangleIndexBuffer,pwVar5,pFVar1,
               Static);
    if (this->CurveType == Guides) {
      pwVar5 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Guides)";
    }
    else {
      pwVar5 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Cards)";
      if (this->CurveType == Strands) {
        pwVar5 = L"Hair.StrandsRestRoot_RestUniqueTrianglePosition0Buffer(Strands)";
      }
    }
    InternalCreateVertexBufferRDG_FromHairBulkData<FHairStrandsMeshTrianglePositionFormat>
              (param_1,&(pFVar4->Data).RestUniqueTrianglePositionBuffer,
               (pFVar4->Header).UniqueTriangleCount * 3,&this->RestUniqueTrianglePositionBuffer,
               pwVar5,pFVar1,Static);
    if (((pFVar4->Header).SampleCount != 0) &&
       ((this->MeshInterpolationWeightsBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0)) {
      uVar6 = FBulkData::GetBulkDataSize
                        ((FBulkData *)&(pFVar4->Data).MeshInterpolationWeightsBuffer.Data);
      iVar7 = (pFVar4->Header).SampleCount + 4;
      uVar9 = (uint)(uVar6 >> 2);
      if (iVar7 * iVar7 != uVar9) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("WeightCount == InteroplationWeightCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                           ,0x694,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRestRoot_MeshInterpolationWeightsBuffer(Strands)";
        }
      }
      InternalCreateStructuredBufferRDG_FromHairBulkData<FHairStrandsWeightFormat>
                (param_1,&(pFVar4->Data).MeshInterpolationWeightsBuffer,uVar9,
                 &this->MeshInterpolationWeightsBuffer,pwVar5,pFVar1,Static);
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRestRoot_MeshSampleIndicesAndSectionsBuffer(Strands)";
        }
      }
      InternalCreateVertexBufferRDG_FromHairBulkData<FHairStrandsRBFSampleIndexFormat>
                (param_1,&(pFVar4->Data).MeshSampleIndicesAndSectionsBuffer,
                 (pFVar4->Header).SampleCount,&this->MeshSampleIndicesAndSectionsBuffer,pwVar5,
                 pFVar1,Static);
      if (this->CurveType == Guides) {
        pwVar5 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Guides)";
      }
      else {
        pwVar5 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Cards)";
        if (this->CurveType == Strands) {
          pwVar5 = L"Hair.StrandsRestRoot_RestSamplePositionsBuffer(Strands)";
        }
      }
      InternalCreateStructuredBufferRDG_FromHairBulkData<FHairStrandsMeshTrianglePositionFormat>
                (param_1,&(pFVar4->Data).RestSamplePositionsBuffer,(pFVar4->Header).SampleCount,
                 &this->RestSamplePositionsBuffer,pwVar5,pFVar1,Static);
    }
    this->Status = Completed;
    this->AvailableCurveCount = uVar8;
    this->SampleCount = (pFVar4->Header).SampleCount;
  }
  return;
}

// InternalGetBulkData @ 14e058080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairStrandsBulkCommon * __thiscall
FHairStrandsLODRestRootResource::InternalGetBulkData(FHairStrandsLODRestRootResource *this)

{
  uint uVar1;
  TArray<FHairStrandsRootBulkData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FHairStrandsBulkCommon *pFVar6;
  
  if ((this->BulkDataIndex < 0) || (this->BulkDataArray->ArrayNum <= this->BulkDataIndex)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BulkDataArray.IsValidIndex(BulkDataIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Public\\GroomResources.h"
                       ,0x1b3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsBulkCommon *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar2 = this->BulkDataArray;
  uVar1 = this->BulkDataIndex;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FHairStrandsBulkCommon *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FHairStrandsBulkCommon *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x1d8)
  ;
}

// InternalGetOrRequestData @ 14e0581f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FHairStrandsLODRestRootResource::InternalGetOrRequestData
          (FHairStrandsLODRestRootResource *this,uint param_1,uint param_2)

{
  bool bVar1;
  FHairStrandsRootBulkData *this_00;
  
  bVar1 = FHairStreamingRequest::IsNone((FHairStreamingRequest *)&this->_padding_);
  if (bVar1) {
    this_00 = GetBulkData(this);
    bVar1 = FHairStrandsRootBulkData::IsCookedBulkDataLoadedForCPUAccess(this_00);
    if (bVar1) {
      *(uint *)&this->_padding_ = param_1;
      *(uint *)((longlong)&this->_padding_ + 4) = param_2;
      return true;
    }
    FHairStreamingRequest::Request
              ((FHairStreamingRequest *)&this->_padding_,param_1,param_2,
               (FHairStrandsBulkCommon *)this_00,false,false,false,
               (FName *)((longlong)&this->_padding_ + 4),(bool *)0x0);
  }
  bVar1 = FHairStreamingRequest::IsCompleted((FHairStreamingRequest *)&this->_padding_);
  return bVar1;
}

// InternalRelease @ 14e0587e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsLODRestRootResource::InternalRelease(FHairStrandsLODRestRootResource *this)

{
  this->Status = Invalid;
  FRDGExternalBuffer::Release(&this->RootBarycentricBuffer);
  FRDGExternalBuffer::Release(&this->RootToUniqueTriangleIndexBuffer);
  FRDGExternalBuffer::Release(&this->UniqueTriangleIndexBuffer);
  FRDGExternalBuffer::Release(&this->RestUniqueTrianglePositionBuffer);
  this->SampleCount = 0;
  FRDGExternalBuffer::Release(&this->MeshInterpolationWeightsBuffer);
  FRDGExternalBuffer::Release(&this->MeshSampleIndicesAndSectionsBuffer);
  FRDGExternalBuffer::Release(&this->RestSamplePositionsBuffer);
  this->AvailableCurveCount = 0;
  return;
}

// InternalResetLoadedSize @ 14e058d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairStrandsLODRestRootResource::InternalResetLoadedSize(FHairStrandsLODRestRootResource *this)

{
  code *UNRECOVERED_JUMPTABLE;
  FHairStrandsRootBulkData *pFVar1;
  
  if ((-1 < this->BulkDataIndex) && (this->BulkDataIndex < this->BulkDataArray->ArrayNum)) {
    pFVar1 = GetBulkData(this);
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00014e058d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pFVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// Reset @ 14e059f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairStrandsLODRestRootResource::Reset(FHairStrandsLODRestRootResource *this)

{
  code *pcVar1;
  bool bVar2;
  FHairStrandsRootBulkData *pFVar3;
  
  pFVar3 = GetBulkData(this);
  if (this->MeshLODIndex != (pFVar3->Header).LODIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshLODIndex == GetBulkData().Header.LODIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomResources.cpp"
                       ,0x659,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Status = Invalid;
  pFVar3 = GetBulkData(this);
  this->SampleCount = (pFVar3->Header).SampleCount;
  return;
}

