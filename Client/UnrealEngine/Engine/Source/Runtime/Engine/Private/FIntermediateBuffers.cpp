// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FIntermediateBuffers @ 14733f740

FIntermediateBuffers * __thiscall
FSkeletalMeshStreamIn::FIntermediateBuffers::FIntermediateBuffers(FIntermediateBuffers *this)

{
  (this->TangentsVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->TexCoordVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->PositionVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->ColorVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->SkinWeightVertexBuffer).DataVertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->SkinWeightVertexBuffer).LookupVertexBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->ClothVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->IndexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->AltSkinWeightVertexBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AltSkinWeightVertexBuffers).ArrayNum = 0;
  (this->AltSkinWeightVertexBuffers).ArrayMax = 0;
  (this->HalfEdgeBuffer).VertexToEdgeBufferRHI.Reference = (FRHIBuffer *)0x0;
  (this->HalfEdgeBuffer).EdgeToTwinEdgeBufferRHI.Reference = (FRHIBuffer *)0x0;
  return this;
}

// ~FIntermediateBuffers @ 147341b00

void __thiscall
FSkeletalMeshStreamIn::FIntermediateBuffers::~FIntermediateBuffers(FIntermediateBuffers *this)

{
  FRHIBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->HalfEdgeBuffer).EdgeToTwinEdgeBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->HalfEdgeBuffer).VertexToEdgeBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  DestructItems<TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo>,int>
            ((TTuple<FSkinWeightProfileStack,FSkinWeightRHIInfo> *)
             (this->AltSkinWeightVertexBuffers).AllocatorInstance.Data,
             (this->AltSkinWeightVertexBuffers).ArrayNum);
  pFVar2 = (this->AltSkinWeightVertexBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar1 = (this->IndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ClothVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SkinWeightVertexBuffer).LookupVertexBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SkinWeightVertexBuffer).DataVertexBufferRHI.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ColorVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TexCoordVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TangentsVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// CreateFromCPUData @ 147349190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateBuffers::CreateFromCPUData
          (FIntermediateBuffers *this,FRHICommandListBase *param_1,
          FSkeletalMeshLODRenderData *param_2)

{
  FSkinWeightRHIInfo *pFVar1;
  FRHIBuffer *pFVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  FSkinWeightRHIInfo *pFVar4;
  FRHIInfo *pFVar5;
  TRefCountPtr<FRHIBuffer> *pTVar6;
  FRHIInfo *pFVar7;
  TRefCountPtr<FRHIBuffer> *pTVar8;
  FRHIResource *local_res8;
  FSkinWeightRHIInfo local_28;
  
  TVar3 = FStaticMeshVertexBuffer::CreateTangentsRHIBuffer
                    (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  if ((FRHIBuffer *)this != TVar3.Reference) {
    pFVar2 = (this->TangentsVertexBuffer).Reference;
    (this->TangentsVertexBuffer).Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FStaticMeshVertexBuffer::CreateTexCoordRHIBuffer
                    (&(param_2->StaticVertexBuffers).StaticMeshVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  pTVar6 = &this->TexCoordVertexBuffer;
  if ((FRHIBuffer *)pTVar6 != TVar3.Reference) {
    pFVar2 = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FPositionVertexBuffer::CreateRHIBuffer
                    (&(param_2->StaticVertexBuffers).PositionVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  pTVar6 = &this->PositionVertexBuffer;
  if ((FRHIBuffer *)pTVar6 != TVar3.Reference) {
    pFVar2 = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FColorVertexBuffer::CreateRHIBuffer
                    (&(param_2->StaticVertexBuffers).ColorVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  pTVar6 = &this->ColorVertexBuffer;
  if ((FRHIBuffer *)pTVar6 != TVar3.Reference) {
    pFVar2 = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  FSkinWeightProfilesData::CreateRHIBuffers
            (&param_2->SkinWeightProfilesData,param_1,&this->AltSkinWeightVertexBuffers);
  pFVar4 = FSkinWeightVertexBuffer::CreateRHIBuffer
                     (&param_2->SkinWeightVertexBuffer,&local_28,param_1);
  pFVar1 = &this->SkinWeightVertexBuffer;
  if (pFVar1 != pFVar4) {
    pFVar2 = (pFVar1->DataVertexBufferRHI).Reference;
    (pFVar1->DataVertexBufferRHI).Reference = (pFVar4->DataVertexBufferRHI).Reference;
    (pFVar4->DataVertexBufferRHI).Reference = (FRHIBuffer *)0x0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pTVar6 = &pFVar4->LookupVertexBufferRHI;
  pTVar8 = &(this->SkinWeightVertexBuffer).LookupVertexBufferRHI;
  if (pTVar8 != pTVar6) {
    pFVar2 = pTVar8->Reference;
    pTVar8->Reference = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)0x0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_28.LookupVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.LookupVertexBufferRHI.Reference);
  }
  if (local_28.DataVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.DataVertexBufferRHI.Reference);
  }
  TVar3 = FSkeletalMeshVertexClothBuffer::CreateRHIBuffer
                    (&param_2->ClothVertexBuffer,(FRHICommandListBase *)&local_res8);
  pTVar6 = &this->ClothVertexBuffer;
  if ((FRHIBuffer *)pTVar6 != TVar3.Reference) {
    pFVar2 = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar3 = FMultiSizeIndexContainer::CreateRHIBuffer
                    (&param_2->MultiSizeIndexContainer,(FRHICommandListBase *)&local_res8);
  pTVar6 = &this->IndexBuffer;
  if ((FRHIBuffer *)pTVar6 != TVar3.Reference) {
    pFVar2 = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar5 = FSkeletalMeshHalfEdgeBuffer::CreateRHIBuffer
                     (&param_2->HalfEdgeBuffer,(FRHIInfo *)&local_28,param_1);
  pFVar7 = &this->HalfEdgeBuffer;
  if (pFVar7 != pFVar5) {
    pFVar2 = (pFVar7->VertexToEdgeBufferRHI).Reference;
    (pFVar7->VertexToEdgeBufferRHI).Reference = (pFVar5->VertexToEdgeBufferRHI).Reference;
    (pFVar5->VertexToEdgeBufferRHI).Reference = (FRHIBuffer *)0x0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pTVar6 = &pFVar5->EdgeToTwinEdgeBufferRHI;
  pTVar8 = &(this->HalfEdgeBuffer).EdgeToTwinEdgeBufferRHI;
  if (pTVar8 != pTVar6) {
    pFVar2 = pTVar8->Reference;
    pTVar8->Reference = pTVar6->Reference;
    pTVar6->Reference = (FRHIBuffer *)0x0;
    if (pFVar2 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  if (local_28.LookupVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.LookupVertexBufferRHI.Reference);
  }
  if (local_28.DataVertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_28.DataVertexBufferRHI.Reference);
  }
  return;
}

// TransferBuffers @ 14735a5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshStreamIn::FIntermediateBuffers::TransferBuffers
          (FIntermediateBuffers *this,FSkeletalMeshLODRenderData *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  FRHIInfo local_18;
  
  FStaticMeshVertexBuffer::InitRHIForStreaming
            (&(param_1->StaticVertexBuffers).StaticMeshVertexBuffer,
             (this->TangentsVertexBuffer).Reference,(this->TexCoordVertexBuffer).Reference,param_2);
  FPositionVertexBuffer::InitRHIForStreaming
            (&(param_1->StaticVertexBuffers).PositionVertexBuffer,
             (this->PositionVertexBuffer).Reference,param_2);
  FColorVertexBuffer::InitRHIForStreaming
            (&(param_1->StaticVertexBuffers).ColorVertexBuffer,(this->ColorVertexBuffer).Reference,
             param_2);
  FSkinWeightDataVertexBuffer::InitRHIForStreaming
            (&(param_1->SkinWeightVertexBuffer).DataVertexBuffer,
             (this->SkinWeightVertexBuffer).DataVertexBufferRHI.Reference,param_2);
  FSkinWeightLookupVertexBuffer::InitRHIForStreaming
            (&(param_1->SkinWeightVertexBuffer).LookupVertexBuffer,
             (this->SkinWeightVertexBuffer).LookupVertexBufferRHI.Reference,param_2);
  FSkeletalMeshVertexClothBuffer::InitRHIForStreaming
            (&param_1->ClothVertexBuffer,(this->ClothVertexBuffer).Reference,param_2);
  FMultiSizeIndexContainer::InitRHIForStreaming
            (&param_1->MultiSizeIndexContainer,(this->IndexBuffer).Reference,param_2);
  FSkinWeightProfilesData::InitRHIForStreaming
            (&param_1->SkinWeightProfilesData,&this->AltSkinWeightVertexBuffers,param_2);
  local_18.VertexToEdgeBufferRHI.Reference = (this->HalfEdgeBuffer).VertexToEdgeBufferRHI.Reference;
  if (local_18.VertexToEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_18.VertexToEdgeBufferRHI.Reference);
  }
  local_18.EdgeToTwinEdgeBufferRHI.Reference =
       (this->HalfEdgeBuffer).EdgeToTwinEdgeBufferRHI.Reference;
  if (local_18.EdgeToTwinEdgeBufferRHI.Reference != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_18.EdgeToTwinEdgeBufferRHI.Reference);
  }
  FSkeletalMeshHalfEdgeBuffer::InitRHIForStreaming(&param_1->HalfEdgeBuffer,&local_18,param_2);
  return;
}

// FIntermediateBuffers @ 148776e00

FIntermediateBuffers * __thiscall
FStaticMeshStreamIn::FIntermediateBuffers::FIntermediateBuffers(FIntermediateBuffers *this)

{
  (this->TangentsVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->TexCoordVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->PositionVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->ColorVertexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->IndexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->ReversedIndexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->DepthOnlyIndexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->ReversedDepthOnlyIndexBuffer).Reference = (FRHIBuffer *)0x0;
  (this->WireframeIndexBuffer).Reference = (FRHIBuffer *)0x0;
  return this;
}

// ~FIntermediateBuffers @ 14877ecc0

void __thiscall
FStaticMeshStreamIn::FIntermediateBuffers::~FIntermediateBuffers(FIntermediateBuffers *this)

{
  FRHIBuffer *pFVar1;
  
  pFVar1 = (this->WireframeIndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ReversedDepthOnlyIndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->DepthOnlyIndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ReversedIndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->IndexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->ColorVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->PositionVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TexCoordVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->TangentsVertexBuffer).Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
    return;
  }
  return;
}

// CreateFromCPUData @ 148791050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateBuffers::CreateFromCPUData
          (FIntermediateBuffers *this,FRHICommandListBase *param_1,FStaticMeshLODResources *param_2)

{
  FRHIBuffer *pFVar1;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIBuffer> *pTVar3;
  FRHIResource *local_res8;
  
  TVar2 = FStaticMeshVertexBuffer::CreateTangentsRHIBuffer
                    (&(param_2->VertexBuffers).StaticMeshVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  if ((FRHIBuffer *)this != TVar2.Reference) {
    pFVar1 = (this->TangentsVertexBuffer).Reference;
    (this->TangentsVertexBuffer).Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar2 = FStaticMeshVertexBuffer::CreateTexCoordRHIBuffer
                    (&(param_2->VertexBuffers).StaticMeshVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  pTVar3 = &this->TexCoordVertexBuffer;
  if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
    pFVar1 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar2 = FPositionVertexBuffer::CreateRHIBuffer
                    (&(param_2->VertexBuffers).PositionVertexBuffer,
                     (FRHICommandListBase *)&local_res8);
  pTVar3 = &this->PositionVertexBuffer;
  if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
    pFVar1 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar2 = FColorVertexBuffer::CreateRHIBuffer
                    (&(param_2->VertexBuffers).ColorVertexBuffer,(FRHICommandListBase *)&local_res8)
  ;
  pTVar3 = &this->ColorVertexBuffer;
  if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
    pFVar1 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar2 = FRawStaticIndexBuffer::CreateRHIBuffer
                    (&param_2->IndexBuffer,(FRHICommandListBase *)&local_res8);
  pTVar3 = &this->IndexBuffer;
  if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
    pFVar1 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar2 = FRawStaticIndexBuffer::CreateRHIBuffer
                    (&param_2->DepthOnlyIndexBuffer,(FRHICommandListBase *)&local_res8);
  pTVar3 = &this->DepthOnlyIndexBuffer;
  if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
    pFVar1 = pTVar3->Reference;
    pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (pFVar1 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar1);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if (param_2->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    TVar2 = FRawStaticIndexBuffer::CreateRHIBuffer
                      (&param_2->AdditionalIndexBuffers->ReversedIndexBuffer,
                       (FRHICommandListBase *)&local_res8);
    pTVar3 = &this->ReversedIndexBuffer;
    if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
      pFVar1 = pTVar3->Reference;
      pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
      (TVar2.Reference)->_padding_ = 0;
      if (pFVar1 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar2 = FRawStaticIndexBuffer::CreateRHIBuffer
                      (&param_2->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,
                       (FRHICommandListBase *)&local_res8);
    pTVar3 = &this->ReversedDepthOnlyIndexBuffer;
    if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
      pFVar1 = pTVar3->Reference;
      pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
      (TVar2.Reference)->_padding_ = 0;
      if (pFVar1 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    TVar2 = FRawStaticIndexBuffer::CreateRHIBuffer
                      (&param_2->AdditionalIndexBuffers->WireframeIndexBuffer,
                       (FRHICommandListBase *)&local_res8);
    pTVar3 = &this->WireframeIndexBuffer;
    if ((FRHIBuffer *)pTVar3 != TVar2.Reference) {
      pFVar1 = pTVar3->Reference;
      pTVar3->Reference = (FRHIBuffer *)(TVar2.Reference)->_padding_;
      (TVar2.Reference)->_padding_ = 0;
      if (pFVar1 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// TransferBuffers @ 1487ca170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStaticMeshStreamIn::FIntermediateBuffers::TransferBuffers
          (FIntermediateBuffers *this,FStaticMeshLODResources *param_1,
          FRHIResourceReplaceBatcher *param_2)

{
  FStaticMeshVertexBuffer::InitRHIForStreaming
            (&(param_1->VertexBuffers).StaticMeshVertexBuffer,(this->TangentsVertexBuffer).Reference
             ,(this->TexCoordVertexBuffer).Reference,param_2);
  FPositionVertexBuffer::InitRHIForStreaming
            (&(param_1->VertexBuffers).PositionVertexBuffer,(this->PositionVertexBuffer).Reference,
             param_2);
  FColorVertexBuffer::InitRHIForStreaming
            (&(param_1->VertexBuffers).ColorVertexBuffer,(this->ColorVertexBuffer).Reference,param_2
            );
  FRawStaticIndexBuffer::InitRHIForStreaming
            (&param_1->IndexBuffer,(this->IndexBuffer).Reference,param_2);
  FRawStaticIndexBuffer::InitRHIForStreaming
            (&param_1->DepthOnlyIndexBuffer,(this->DepthOnlyIndexBuffer).Reference,param_2);
  if (param_1->AdditionalIndexBuffers != (FAdditionalStaticMeshIndexBuffers *)0x0) {
    FRawStaticIndexBuffer::InitRHIForStreaming
              (&param_1->AdditionalIndexBuffers->ReversedIndexBuffer,
               (this->ReversedIndexBuffer).Reference,param_2);
    FRawStaticIndexBuffer::InitRHIForStreaming
              (&param_1->AdditionalIndexBuffers->ReversedDepthOnlyIndexBuffer,
               (this->ReversedDepthOnlyIndexBuffer).Reference,param_2);
    FRawStaticIndexBuffer::InitRHIForStreaming
              (&param_1->AdditionalIndexBuffers->WireframeIndexBuffer,
               (this->WireframeIndexBuffer).Reference,param_2);
  }
  return;
}

