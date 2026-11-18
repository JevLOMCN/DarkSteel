// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusSkinnedMeshDataProviderProxy @ 14e1567f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusSkinnedMeshDataProviderProxy * __thiscall
FOptimusSkinnedMeshDataProviderProxy::FOptimusSkinnedMeshDataProviderProxy
          (FOptimusSkinnedMeshDataProviderProxy *this,USkinnedMeshComponent *param_1)

{
  FSkeletalMeshObject *pFVar1;
  
  this->_padding_ = (longlong)&___7FOptimusSkinnedMeshDataProviderProxy__6B_;
  pFVar1 = (FSkeletalMeshObject *)0x0;
  (this->IndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TangentsSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->TexCoordsSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->ColorsSRV).Reference = (FRHIShaderResourceView *)0x0;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar1 = param_1->MeshObject;
  }
  this->SkeletalMeshObject = pFVar1;
  return this;
}

// AllocateResources @ 14e17d850

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshDataProviderProxy::AllocateResources
          (FOptimusSkinnedMeshDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  FRHIShaderResourceView *pFVar4;
  FRHIShaderResourceView *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  uint uVar10;
  FRHIResource *local_res8;
  FRHIResource *local_res10;
  FRHIResource *local_res20;
  
  uVar7 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar2 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar10 = 0;
  if ((int)uVar7 < (pFVar2->LODRenderData).Array.ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)
           ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
  if (*(longlong *)(lVar3 + 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                       ,0x51,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x90))
                     (*(longlong **)(lVar3 + 0x28),&local_res8,param_1->_padding_);
  pTVar1 = &this->IndexBufferSRV;
  if (pTVar1 != (TRefCountPtr<FRHIShaderResourceView> *)puVar8) {
    pFVar4 = pTVar1->Reference;
    pTVar1->Reference = (FRHIShaderResourceView *)*puVar8;
    *puVar8 = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar9 = FStaticMeshVertexBuffer::GetOrCreateTangentsSRV
                    ((FStaticMeshVertexBuffer *)(lVar3 + 0x30),(FRHICommandListBase *)&local_res10);
  pTVar1 = &this->TangentsSRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
    pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  TVar9 = FStaticMeshVertexBuffer::GetOrCreateTexCoordsSRV
                    ((FStaticMeshVertexBuffer *)(lVar3 + 0x30),(FRHICommandListBase *)&local_res20);
  pTVar1 = &this->TexCoordsSRV;
  if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
    pFVar4 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar9.Reference;
    *(undefined8 *)TVar9.Reference = 0;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  pFVar4 = *(FRHIShaderResourceView **)(lVar3 + 0x168);
  this_00 = (this->ColorsSRV).Reference;
  if (this_00 != pFVar4) {
    (this->ColorsSRV).Reference = pFVar4;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// GatherDispatchData @ 14e1b5050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FOptimusSkinnedMeshDataProviderProxy::GatherDispatchData
          (FOptimusSkinnedMeshDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FSkeletalMeshRenderData *pFVar4;
  uchar *puVar5;
  FSkeletalMeshLODRenderData *this_00;
  FRHIShaderResourceView *pFVar6;
  FRHIShaderResourceView *pFVar7;
  FRHIShaderResourceView *pFVar8;
  FRHIShaderResourceView *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  FRHIShaderResourceView *pFVar14;
  FRHIShaderResourceView *pFVar15;
  FRHIShaderResourceView *pFVar16;
  int iVar17;
  uint *puVar18;
  
  uVar12 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  iVar17 = 0;
  pFVar4 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar13 = 0;
  if ((int)uVar12 < (pFVar4->LODRenderData).Array.ArrayNum) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar1 = param_1->ParameterBufferOffset;
  puVar5 = param_1->ParameterBuffer;
  this_00 = *(FSkeletalMeshLODRenderData **)
             ((pFVar4->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar12 * 8);
  iVar2 = param_1->ParameterBufferStride;
  iVar3 = param_1->NumInvocations;
  pFVar6 = (GWhiteVertexBufferWithSRV->ShaderResourceViewRHI).Reference;
  if ((iVar3 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x3f,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x40,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BytesBetweenElements % alignof(ElementType) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                          ,0x41,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (0 < iVar3) {
    puVar18 = (uint *)(puVar5 + (longlong)iVar1 + 8);
    do {
      pFVar16 = (this->TangentsSRV).Reference;
      pFVar15 = (this->IndexBufferSRV).Reference;
      pFVar7 = (this_00->StaticVertexBuffers).PositionVertexBuffer.PositionComponentSRV.Reference;
      pFVar8 = (this->ColorsSRV).Reference;
      pFVar9 = (this->TexCoordsSRV).Reference;
      if ((iVar17 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                              ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar18[-2] = (this_00->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      uVar13 = FSkeletalMeshLODRenderData::GetTotalFaces(this_00);
      puVar18[-1] = uVar13;
      *puVar18 = (this_00->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
      pFVar14 = pFVar6;
      if (pFVar15 != (FRHIShaderResourceView *)0x0) {
        pFVar14 = pFVar15;
      }
      *(FRHIShaderResourceView **)(puVar18 + 2) = pFVar14;
      pFVar15 = pFVar6;
      if (pFVar7 != (FRHIShaderResourceView *)0x0) {
        pFVar15 = pFVar7;
      }
      *(FRHIShaderResourceView **)(puVar18 + 4) = pFVar15;
      pFVar15 = pFVar6;
      if (pFVar16 != (FRHIShaderResourceView *)0x0) {
        pFVar15 = pFVar16;
      }
      *(FRHIShaderResourceView **)(puVar18 + 6) = pFVar15;
      pFVar16 = pFVar6;
      if (pFVar9 != (FRHIShaderResourceView *)0x0) {
        pFVar16 = pFVar9;
      }
      *(FRHIShaderResourceView **)(puVar18 + 8) = pFVar16;
      pFVar16 = pFVar6;
      if (pFVar8 != (FRHIShaderResourceView *)0x0) {
        pFVar16 = pFVar8;
      }
      *(FRHIShaderResourceView **)(puVar18 + 10) = pFVar16;
      puVar18[0xc] = -(uint)(pFVar8 != (FRHIShaderResourceView *)0x0);
      iVar17 = iVar17 + 1;
      puVar18 = (uint *)((longlong)puVar18 + (longlong)iVar2);
    } while (iVar17 < iVar3);
  }
  return;
}

// IsValid @ 14e1f0b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FOptimusSkinnedMeshDataProviderProxy::IsValid
          (FOptimusSkinnedMeshDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x40) {
    return this->SkeletalMeshObject != (FSkeletalMeshObject *)0x0;
  }
  return false;
}

