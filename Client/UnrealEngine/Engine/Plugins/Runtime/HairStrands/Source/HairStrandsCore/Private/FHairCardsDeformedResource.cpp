// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FHairCardsDeformedResource @ 14e03bf20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairCardsDeformedResource * __thiscall
FHairCardsDeformedResource::FHairCardsDeformedResource
          (FHairCardsDeformedResource *this,FHairCardsBulkData *param_1,bool param_2,
          FHairResourceName *param_3,FName *param_4)

{
  FRDGExternalBuffer *pFVar1;
  longlong lVar2;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  this->_padding_ = (longlong)&___7FHairCommonResource__6B_;
  lVar2 = 2;
  *(FName *)((longlong)&this->_padding_ + 4) = *param_4;
  this->_padding_ = (longlong)&___7FHairCardsDeformedResource__6B_;
  pFVar1 = this->DeformedPositionBuffer;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined4 *)&this->_padding_ = 0x3fffff;
  do {
    (pFVar1->Buffer).Reference = (FRDGPooledBuffer *)0x0;
    (pFVar1->SRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar1->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
    pFVar1->Format = PF_Unknown;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->DeformedNormalBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
  (this->DeformedNormalBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->DeformedNormalBuffer).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->DeformedNormalBuffer).Format = PF_Unknown;
  this->BulkData = param_1;
  this->bInitializedData = param_2;
  return this;
}

// GetFriendlyName @ 14e050130

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairCardsDeformedResource::GetFriendlyName
          (FHairCardsDeformedResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairCardsDeformedResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e054da0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairCardsDeformedResource::InternalAllocate(FHairCardsDeformedResource *this,FRDGBuilder *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  FRDGExternalBuffer *pFVar3;
  uint uVar4;
  uint uVar5;
  FRDGPooledBuffer *pFVar6;
  FScriptContainerElement *pFVar7;
  FRDGPooledBuffer *pFVar8;
  longlong lVar9;
  TRefCountPtr<FRDGPooledBuffer> *pTVar10;
  FRDGImportedBuffer *pFVar11;
  FRDGBuffer *local_res8;
  undefined4 uStack_3c;
  FRDGBuffer *local_30;
  FRDGBufferSRV *pFStack_28;
  FShaderParametersMetadata *local_20;
  
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  pFVar3 = &this->DeformedNormalBuffer;
  if (this->bInitializedData == false) {
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,(this->BulkData->Positions).ArrayNum,this->DeformedPositionBuffer,
               L"Hair.CardsDeformedPosition(Current)",pFVar1,Dynamic);
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,(this->BulkData->Positions).ArrayNum,this->DeformedPositionBuffer + 1,
               L"Hair.CardsDeformedPosition(Previous)",pFVar1,Dynamic);
    InternalCreateVertexBufferRDG<FHairCardsNormalFormat>
              (param_1,(this->BulkData->Positions).ArrayNum * 2,pFVar3,L"Hair.CardsDeformedNormal",
               pFVar1,Dynamic);
    pFVar11 = ::Register((FRDGImportedBuffer *)&local_30,param_1,this->DeformedPositionBuffer,
                         CreateSRV,None);
    FRDGBuilder::UseExternalAccessMode(param_1,(FRDGViewableResource *)pFVar11->Buffer,SRVMask,All);
    pFVar11 = ::Register((FRDGImportedBuffer *)&local_30,param_1,this->DeformedPositionBuffer + 1,
                         CreateSRV,None);
    FRDGBuilder::UseExternalAccessMode
              (param_1,(FRDGViewableResource *)pFVar11->Buffer,SRVMask,Graphics);
  }
  else {
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,&this->BulkData->Positions,this->DeformedPositionBuffer,
               L"Hair.CardsDeformedPosition(Current)",pFVar1,Dynamic,NoCopy);
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,&this->BulkData->Positions,this->DeformedPositionBuffer + 1,
               L"Hair.CardsDeformedPosition(Previous)",pFVar1,Dynamic,NoCopy);
    uVar5 = (this->BulkData->Normals).ArrayNum;
    uVar4 = uVar5 * 4;
    if (uVar4 == 0) {
      pFVar6 = (pFVar3->Buffer).Reference;
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        (pFVar3->Buffer).Reference = (FRDGPooledBuffer *)0x0;
        plVar2 = &pFVar6->_padding_;
        LOCK();
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar9 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
    else {
      pFVar7 = (this->BulkData->Normals).AllocatorInstance.Data;
      local_30 = (FRDGBuffer *)CONCAT44(uVar5,4);
      pFStack_28 = (FRDGBufferSRV *)
                   CONCAT44(uStack_3c,VertexBuffer|ShaderResource|UnorderedAccess|Static);
      local_20 = (FShaderParametersMetadata *)0x0;
      local_res8 = FRDGBuilder::CreateBuffer
                             (param_1,(FRDGBufferDesc *)&local_30,L"Hair.CardsDeformedNormal",
                              MultiFrame);
      *(FName *)((longlong)&local_res8->_padding_ + 4) = *pFVar1;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FRDGBuilder::QueueBufferUpload(param_1,local_res8,pFVar7,(ulonglong)uVar4,NoCopy);
      }
      pTVar10 = FRDGBuilder::ConvertToExternalBuffer(param_1,local_res8);
      pFVar6 = (pFVar3->Buffer).Reference;
      pFVar8 = pTVar10->Reference;
      if (pFVar6 != pFVar8) {
        (pFVar3->Buffer).Reference = pFVar8;
        if (pFVar8 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar8->_padding_ = (int)pFVar8->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          plVar2 = &pFVar6->_padding_;
          LOCK();
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar9 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)pFVar6->_padding_)(pFVar6,1);
          }
        }
      }
      CreateExternalBufferViews(param_1,&local_res8,pFVar3,PF_R8G8B8A8_SNORM);
    }
  }
  pFVar11 = ::Register((FRDGImportedBuffer *)&local_30,param_1,pFVar3,CreateSRV,None);
  FRDGBuilder::UseExternalAccessMode
            (param_1,(FRDGViewableResource *)pFVar11->Buffer,SRVMask,Graphics);
  return;
}

// InternalRelease @ 14e058340

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairCardsDeformedResource::InternalRelease(FHairCardsDeformedResource *this)

{
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer);
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer + 1);
  FRDGExternalBuffer::Release(&this->DeformedNormalBuffer);
  return;
}

