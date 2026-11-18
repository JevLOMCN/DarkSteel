// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// FHairMeshesDeformedResource @ 14e03c2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FHairMeshesDeformedResource * __thiscall
FHairMeshesDeformedResource::FHairMeshesDeformedResource
          (FHairMeshesDeformedResource *this,FHairMeshesBulkData *param_1,bool param_2,
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
  this->_padding_ = (longlong)&___7FHairMeshesDeformedResource__6B_;
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
  this->BulkData = param_1;
  this->bInitializedData = param_2;
  this->CurrentIndex = 0;
  return this;
}

// GetFriendlyName @ 14e0501c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FHairMeshesDeformedResource::GetFriendlyName
          (FHairMeshesDeformedResource *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FHairMeshesDeformedResource");
  return __return_storage_ptr__;
}

// InternalAllocate @ 14e055390

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FHairMeshesDeformedResource::InternalAllocate
          (FHairMeshesDeformedResource *this,FRDGBuilder *param_1)

{
  FName *pFVar1;
  
  pFVar1 = (FName *)((longlong)&this->_padding_ + 4);
  if (this->bInitializedData == false) {
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,(this->BulkData->Positions).ArrayNum,this->DeformedPositionBuffer,
               L"Hair.MeshesDeformed(Current)",pFVar1,Dynamic);
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,(this->BulkData->Positions).ArrayNum,this->DeformedPositionBuffer + 1,
               L"Hair.MeshesDeformed(Previous)",pFVar1,Dynamic);
  }
  else {
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,&this->BulkData->Positions,this->DeformedPositionBuffer,
               L"Hair.MeshesDeformed(Current)",pFVar1,Dynamic,NoCopy);
    InternalCreateVertexBufferRDG<FHairCardsPositionFormat>
              (param_1,&this->BulkData->Positions,this->DeformedPositionBuffer + 1,
               L"Hair.MeshesDeformed(Previous)",pFVar1,Dynamic,NoCopy);
  }
  return;
}

// InternalRelease @ 14e0583b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FHairMeshesDeformedResource::InternalRelease(FHairMeshesDeformedResource *this)

{
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer);
  FRDGExternalBuffer::Release(this->DeformedPositionBuffer + 1);
  return;
}

