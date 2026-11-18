// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// Accumulate @ 14dff7250

void __thiscall
FGroomComponentMemoryStats::Accumulate
          (FGroomComponentMemoryStats *this,FGroomComponentMemoryStats *param_1)

{
  this->Guides = this->Guides + param_1->Guides;
  this->Strands = this->Strands + param_1->Strands;
  this->Cards = this->Cards + param_1->Cards;
  this->Meshes = this->Meshes + param_1->Meshes;
  return;
}

// Get @ 14e012f50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGroomComponentMemoryStats * __cdecl
FGroomComponentMemoryStats::Get
          (FGroomComponentMemoryStats *__return_storage_ptr__,FHairGroupInstance *param_1)

{
  int iVar1;
  FHairStrandsDeformedResource *pFVar2;
  FHairStrandsDeformedRootResource *pFVar3;
  FHairStrandsCullingResource *pFVar4;
  FRDGPooledBuffer *pFVar5;
  FHairStrandsRaytracingResource *pFVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  
  __return_storage_ptr__->Guides = 0;
  __return_storage_ptr__->Strands = 0;
  __return_storage_ptr__->Cards = 0;
  __return_storage_ptr__->Meshes = 0;
  pFVar2 = (param_1->Guides).DeformedResource;
  uVar15 = 0;
  uVar9 = uVar15;
  if (pFVar2 != (FHairStrandsDeformedResource *)0x0) {
    uVar9 = FHairStrandsDeformedResource::GetResourcesSize(pFVar2);
  }
  pFVar3 = (param_1->Guides).DeformedRootResource;
  __return_storage_ptr__->Guides = uVar9;
  uVar9 = uVar15;
  uVar13 = uVar15;
  if (pFVar3 != (FHairStrandsDeformedRootResource *)0x0) {
    uVar9 = FHairStrandsDeformedRootResource::GetResourcesSize(pFVar3);
    uVar13 = __return_storage_ptr__->Strands;
  }
  __return_storage_ptr__->Guides = __return_storage_ptr__->Guides + uVar9;
  pFVar2 = (param_1->Strands).DeformedResource;
  uVar9 = uVar15;
  if (pFVar2 != (FHairStrandsDeformedResource *)0x0) {
    uVar9 = FHairStrandsDeformedResource::GetResourcesSize(pFVar2);
  }
  pFVar3 = (param_1->Strands).DeformedRootResource;
  __return_storage_ptr__->Strands = uVar9 + uVar13;
  uVar9 = uVar15;
  if (pFVar3 != (FHairStrandsDeformedRootResource *)0x0) {
    uVar9 = FHairStrandsDeformedRootResource::GetResourcesSize(pFVar3);
  }
  pFVar4 = (param_1->Strands).CullingResource;
  uVar13 = uVar15;
  if (pFVar4 != (FHairStrandsCullingResource *)0x0) {
    pFVar5 = (pFVar4->Resources).DrawIndirectBuffer.Buffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      uVar13 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement;
    }
    pFVar5 = (pFVar4->Resources).DrawIndirectRasterComputeBuffer.Buffer.Reference;
    uVar11 = uVar15;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      uVar11 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement;
    }
    pFVar5 = (pFVar4->Resources).CulledCurveBuffer.Buffer.Reference;
    uVar10 = uVar15;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      uVar10 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement;
    }
    pFVar5 = (pFVar4->Resources).CulledVertexIdBuffer.Buffer.Reference;
    if (pFVar5 == (FRDGPooledBuffer *)0x0) {
      uVar13 = uVar10 + uVar11 + uVar13;
    }
    else {
      uVar13 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement + uVar10 + uVar11 +
               uVar13;
    }
  }
  uVar11 = uVar15;
  if (((param_1->Strands).RenRaytracingResourceOwned != false) &&
     (pFVar6 = (param_1->Strands).RenRaytracingResource,
     pFVar6 != (FHairStrandsRaytracingResource *)0x0)) {
    pFVar5 = (pFVar6->PositionBuffer).Buffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      uVar11 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement;
    }
    pFVar5 = (pFVar6->IndexBuffer).Buffer.Reference;
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      uVar11 = (pFVar5->Desc).NumElements * (pFVar5->Desc).BytesPerElement + uVar11;
    }
  }
  iVar1 = (param_1->Cards).LODs.ArrayNum;
  pFVar14 = (param_1->Cards).LODs.AllocatorInstance.Data;
  __return_storage_ptr__->Strands = uVar11 + __return_storage_ptr__->Strands + uVar9 + uVar13;
  pFVar12 = pFVar14 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((param_1->Cards).LODs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupInstance::FCards::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar12) break;
    lVar7 = *(longlong *)(pFVar14 + 8);
    if (lVar7 == 0) {
      __return_storage_ptr__->Cards = __return_storage_ptr__->Cards;
      pFVar14 = pFVar14 + 0x68;
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x60);
      uVar9 = uVar15;
      if (lVar8 != 0) {
        uVar9 = *(int *)(lVar8 + 0x14) * *(int *)(lVar8 + 0x10);
      }
      lVar7 = *(longlong *)(lVar7 + 0x80);
      if (lVar7 == 0) {
        __return_storage_ptr__->Cards = __return_storage_ptr__->Cards + uVar9;
        pFVar14 = pFVar14 + 0x68;
      }
      else {
        __return_storage_ptr__->Cards =
             __return_storage_ptr__->Cards + *(int *)(lVar7 + 0x14) * *(int *)(lVar7 + 0x10) + uVar9
        ;
        pFVar14 = pFVar14 + 0x68;
      }
    }
  }
  iVar1 = (param_1->Meshes).LODs.ArrayNum;
  pFVar14 = (param_1->Meshes).LODs.AllocatorInstance.Data;
  pFVar12 = pFVar14 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((param_1->Meshes).LODs.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FHairGroupInstance::FMeshes::FLOD_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar12) break;
    lVar7 = *(longlong *)(pFVar14 + 8);
    if (lVar7 == 0) {
      __return_storage_ptr__->Meshes = __return_storage_ptr__->Meshes;
      pFVar14 = pFVar14 + 0x30;
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x60);
      uVar9 = uVar15;
      if (lVar8 != 0) {
        uVar9 = *(int *)(lVar8 + 0x14) * *(int *)(lVar8 + 0x10);
      }
      lVar7 = *(longlong *)(lVar7 + 0x80);
      if (lVar7 == 0) {
        __return_storage_ptr__->Meshes = __return_storage_ptr__->Meshes + uVar9;
        pFVar14 = pFVar14 + 0x30;
      }
      else {
        __return_storage_ptr__->Meshes =
             __return_storage_ptr__->Meshes +
             *(int *)(lVar7 + 0x14) * *(int *)(lVar7 + 0x10) + uVar9;
        pFVar14 = pFVar14 + 0x30;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTotalSize @ 14e019990

uint __thiscall FGroomComponentMemoryStats::GetTotalSize(FGroomComponentMemoryStats *this)

{
  return this->Meshes + this->Cards + this->Strands + this->Guides;
}

