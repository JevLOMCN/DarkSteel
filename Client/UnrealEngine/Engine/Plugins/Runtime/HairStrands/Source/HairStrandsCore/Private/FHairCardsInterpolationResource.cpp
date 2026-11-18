// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FHairCardsInterpolationResource @ 14e03bff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairCardsInterpolationResource * __thiscall
FHairCardsInterpolationResource::FHairCardsInterpolationResource
          (FHairCardsInterpolationResource *this,FHairCardsInterpolationBulkData *param_1,
          FHairResourceName *param_2,FName *param_3)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_3;
  this->_padding_ = (longlong)&___7FHairCardsInterpolationResource__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  (this->InterpolationBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->InterpolationBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  *(undefined8 *)&(this->InterpolationBuffer).Format = 0;
  (this->InterpolationBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->InterpolationBuffer).Format = PF_Unknown;
  this->BulkData = param_1;
  return this;
}

// GetFriendlyName @ 14e050160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairCardsInterpolationResource::GetFriendlyName
          (FHairCardsInterpolationResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairCardsInterplationResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardsInterpolationResource::InternalAllocate
          (FHairCardsInterpolationResource *this,FRDGBuilder *param_1)

{
  longlong *plVar1;
  uint uVar2;
  FHairCardsInterpolationBulkData *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  FRDGPooledBuffer *pFVar6;
  longlong lVar7;
  FRDGBuffer *pFVar8;
  TRefCountPtr<FRDGPooledBuffer> *pTVar9;
  FRDGBuffer *local_res8;
  FRDGBufferDesc local_48;
  
  pFVar3 = this->BulkData;
  pFVar4 = (this->InterpolationBuffer).Buffer.Reference;
  uVar2 = (pFVar3->Interpolation).ArrayNum;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    (this->InterpolationBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar4->_padding_;
    LOCK();
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  if ((uVar2 & 0x3fffffff) != 0) {
    local_48._0_8_ = CONCAT44(uVar2,4) & 0x3fffffffffffffff;
    local_48.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|Static;
    local_48.Metadata = (FShaderParametersMetadata *)0x0;
    pFVar8 = FRDGBuilder::CreateBuffer
                       (param_1,&local_48,L"Hair.CardsInterpolation_InterpolationBuffer",MultiFrame)
    ;
    *(undefined8 *)((longlong)&pFVar8->_padding_ + 4) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    pFVar5 = (pFVar3->Interpolation).AllocatorInstance.Data;
    local_res8 = pFVar8;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FRDGBuilder::QueueBufferUpload(param_1,pFVar8,pFVar5,(ulonglong)(uVar2 << 2),None);
    }
    pTVar9 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar8);
    pFVar4 = (this->InterpolationBuffer).Buffer.Reference;
    pFVar6 = pTVar9->Reference;
    if (pFVar4 != pFVar6) {
      (this->InterpolationBuffer).Buffer.Reference = pFVar6;
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar4->_padding_;
        LOCK();
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
    CreateExternalBufferViews(param_1,&local_res8,&this->InterpolationBuffer,PF_R32_UINT);
  }
  return;
}

// InternalRelease @ 14e058380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FHairCardsInterpolationResource::InternalRelease(FHairCardsInterpolationResource *this)

{
  FRDGExternalBuffer::Release(&this->InterpolationBuffer);
  return;
}

