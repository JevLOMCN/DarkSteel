// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusHalfEdgeDataProviderProxy @ 14e1520a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FOptimusHalfEdgeDataProviderProxy * __thiscall
FOptimusHalfEdgeDataProviderProxy::FOptimusHalfEdgeDataProviderProxy
          (FOptimusHalfEdgeDataProviderProxy *this,USkinnedMeshComponent *param_1,
          TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_> *param_2)

{
  FSkeletalMeshObject *pFVar1;
  
  pFVar1 = (FSkeletalMeshObject *)0x0;
  this->_padding_ = (longlong)&___7FOptimusHalfEdgeDataProviderProxy__6B_;
  if (param_1 != (USkinnedMeshComponent *)0x0) {
    pFVar1 = param_1->MeshObject;
  }
  this->SkeletalMeshObject = pFVar1;
  this->OnDemandHalfEdgeBuffers = param_2;
  this->bUseBufferFromRenderData = false;
  this->VertexToEdgeBufferSRV = (FRDGBufferSRV *)0x0;
  this->EdgeToTwinEdgeBufferSRV = (FRDGBufferSRV *)0x0;
  this->FallbackSRV = (FRDGBufferSRV *)0x0;
  return this;
}

// AllocateResources @ 14e17c650

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
FOptimusHalfEdgeDataProviderProxy::AllocateResources
          (FOptimusHalfEdgeDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *pFVar4;
  TArray<FHalfEdgeBuffers,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  FRDGBufferSRV *pFVar10;
  uint uVar11;
  TRefCountPtr<FRDGPooledBuffer> TVar12;
  uint uVar13;
  TRefCountPtr<FRDGPooledBuffer> local_res8;
  TRefCountPtr<FRDGPooledBuffer> local_res20;
  FRDGBufferSRVDesc local_a0;
  FRDGBufferSRVDesc local_80;
  FRDGBufferSRVDesc local_60;
  
  local_a0.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
  local_a0._padding_._0_4_ = 0xffffffff;
  local_a0._padding_._4_4_ = 0;
  local_a0._padding_ = 0;
  local_a0._padding_._0_1_ = 0;
  if ((((local_a0.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_a0._padding_._0_1_ = 0x1c;
  }
  pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_a0);
  this->FallbackSRV = pFVar10;
  uVar9 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  pFVar3 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar13 = ~uVar9 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar9 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar11 = uVar13;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = *(FSkeletalMeshLODRenderData **)
            ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  bVar8 = FSkeletalMeshHalfEdgeBuffer::IsReadyForRendering(&pFVar4->HalfEdgeBuffer);
  if (bVar8) {
    pFVar10 = this->FallbackSRV;
    this->VertexToEdgeBufferSRV = pFVar10;
    this->bUseBufferFromRenderData = true;
  }
  else {
    pTVar5 = this->OnDemandHalfEdgeBuffers;
    this->bUseBufferFromRenderData = false;
    uVar11 = 0;
    if ((int)uVar9 < pTVar5->ArrayNum) {
      uVar11 = uVar13;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar2 = (longlong)(int)uVar9 * 0x18;
    if ((pTVar5->AllocatorInstance).Data[lVar2] == (FScriptContainerElement)0x0) {
      pTVar5 = this->OnDemandHalfEdgeBuffers;
      uVar11 = 0;
      if ((int)uVar9 < pTVar5->ArrayNum) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FHalfEdgeBuffers::Init
                ((FHalfEdgeBuffers *)((pTVar5->AllocatorInstance).Data + lVar2),param_1,pFVar4);
    }
    pTVar5 = this->OnDemandHalfEdgeBuffers;
    uVar11 = 0;
    if ((int)uVar9 < pTVar5->ArrayNum) {
      uVar11 = uVar13;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_res8.Reference = *(FRDGPooledBuffer **)((pTVar5->AllocatorInstance).Data + lVar2 + 8);
    if (local_res8.Reference != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&(local_res8.Reference)->_padding_ = (int)(local_res8.Reference)->_padding_ + 1;
      UNLOCK();
    }
    local_80.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&local_res8,None);
    if (local_res8.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_res8.Reference)->_padding_;
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        TVar12.Reference = local_res8.Reference;
        if (plVar1 == (longlong *)0x0) {
          TVar12.Reference = (FRDGPooledBuffer *)0x0;
        }
        if (TVar12.Reference != (FRDGPooledBuffer *)0x0) {
          (**(code **)(TVar12.Reference)->_padding_)();
        }
      }
    }
    local_80._padding_._4_4_ = 0;
    local_80._padding_ = 0;
    local_80._padding_._0_4_ = 0xffffffff;
    local_80._padding_._0_1_ = 0;
    if ((((local_80.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_80._padding_._0_1_ = 0x1c;
    }
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_80);
    this->VertexToEdgeBufferSRV = pFVar10;
    pTVar5 = this->OnDemandHalfEdgeBuffers;
    uVar11 = 0;
    if ((int)uVar9 < pTVar5->ArrayNum) {
      uVar11 = uVar13;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_res20.Reference = *(FRDGPooledBuffer **)((pTVar5->AllocatorInstance).Data + lVar2 + 0x10);
    if (local_res20.Reference != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&(local_res20.Reference)->_padding_ = (int)(local_res20.Reference)->_padding_ + 1;
      UNLOCK();
    }
    local_60.Buffer = FRDGBuilder::RegisterExternalBuffer(param_1,&local_res20,None);
    if (local_res20.Reference != (FRDGPooledBuffer *)0x0) {
      plVar1 = &(local_res20.Reference)->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        TVar12.Reference = local_res20.Reference;
        if (plVar1 == (longlong *)0x0) {
          TVar12.Reference = (FRDGPooledBuffer *)0x0;
        }
        if (TVar12.Reference != (FRDGPooledBuffer *)0x0) {
          (**(code **)(TVar12.Reference)->_padding_)(TVar12.Reference,1);
        }
      }
    }
    local_60._padding_._0_4_ = 0xffffffff;
    local_60._padding_._4_4_ = 0;
    local_60._padding_ = 0;
    local_60._padding_._0_1_ = 0;
    if ((((local_60.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_60._padding_._0_1_ = 0x1c;
    }
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_60);
  }
  this->EdgeToTwinEdgeBufferSRV = pFVar10;
  return;
}

// GatherDispatchData @ 14e1b40d0

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
FOptimusHalfEdgeDataProviderProxy::GatherDispatchData
          (FOptimusHalfEdgeDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  FSkeletalMeshRenderData *pFVar3;
  FSkeletalMeshLODRenderData *this_00;
  FRHIShaderResourceView *pFVar4;
  FRHIShaderResourceView *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uchar *puVar11;
  FRHIShaderResourceView *pFVar12;
  int iVar13;
  FRHIShaderResourceView *pFVar14;
  
  uVar8 = (**(code **)(this->SkeletalMeshObject->_padding_ + 0xa0))();
  iVar13 = 0;
  pFVar3 = this->SkeletalMeshObject->SkeletalMeshRenderData;
  uVar10 = 0;
  if ((int)uVar8 < (pFVar3->LODRenderData).Array.ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = param_1->ParameterBufferOffset;
  puVar11 = param_1->ParameterBuffer;
  this_00 = *(FSkeletalMeshLODRenderData **)
             ((pFVar3->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  iVar1 = param_1->ParameterBufferStride;
  iVar2 = param_1->NumInvocations;
  pFVar4 = (this_00->HalfEdgeBuffer).VertexToEdgeBufferSRV.Reference;
  pFVar5 = (this_00->HalfEdgeBuffer).EdgeToTwinEdgeBufferSRV.Reference;
  pFVar12 = (GEmptyStructuredBufferWithUAV->ShaderResourceViewRHI).Reference;
  if ((iVar2 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((longlong)iVar1 & 0xfU) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (0 < iVar2) {
    pFVar14 = pFVar12;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      pFVar14 = pFVar4;
    }
    puVar11 = puVar11 + (longlong)iVar9 + 8;
    if (pFVar5 != (FRHIShaderResourceView *)0x0) {
      pFVar12 = pFVar5;
    }
    do {
      if ((iVar13 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(uint *)(puVar11 + -8) = (this_00->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
      iVar9 = FSkeletalMeshLODRenderData::GetTotalFaces(this_00);
      *(int *)(puVar11 + -4) = iVar9;
      iVar13 = iVar13 + 1;
      *(FRDGBufferSRV **)puVar11 = this->VertexToEdgeBufferSRV;
      *(FRDGBufferSRV **)(puVar11 + 8) = this->EdgeToTwinEdgeBufferSRV;
      *(uint *)(puVar11 + 0x10) = (uint)this->bUseBufferFromRenderData;
      *(FRHIShaderResourceView **)(puVar11 + 0x18) = pFVar14;
      *(FRHIShaderResourceView **)(puVar11 + 0x20) = pFVar12;
      puVar11 = puVar11 + iVar1;
    } while (iVar13 < iVar2);
  }
  return;
}

// IsValid @ 14e1f06f0

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
FOptimusHalfEdgeDataProviderProxy::IsValid
          (FOptimusHalfEdgeDataProviderProxy *this,FValidationData *param_1)

{
  FSkeletalMeshObject *pFVar1;
  FSkeletalMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  FRawStaticIndexBuffer16or32Interface *pFVar9;
  uint uVar10;
  
  if ((param_1->ParameterStructSize == 0x30) &&
     (pFVar1 = this->SkeletalMeshObject, pFVar1 != (FSkeletalMeshObject *)0x0)) {
    pFVar2 = pFVar1->SkeletalMeshRenderData;
    if ((pFVar2->LODRenderData).Array.ArrayNum == this->OnDemandHalfEdgeBuffers->ArrayNum) {
      uVar8 = (**(code **)(pFVar1->_padding_ + 0xa0))();
      uVar10 = 0;
      if ((int)uVar8 < (pFVar2->LODRenderData).Array.ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      lVar3 = *(longlong *)
               ((pFVar2->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      pFVar9 = FMultiSizeIndexContainer::GetIndexBuffer((FMultiSizeIndexContainer *)(lVar3 + 0x20));
      bVar5 = FSkeletalMeshHalfEdgeBuffer::IsReadyForRendering
                        ((FSkeletalMeshHalfEdgeBuffer *)(lVar3 + 0x488));
      if (bVar5) {
        return true;
      }
      cVar7 = (**(code **)(pFVar9->_padding_ + 0x48))(pFVar9);
      if (cVar7 != '\0') {
        bVar5 = FPositionVertexBuffer::GetAllowCPUAccess((FPositionVertexBuffer *)(lVar3 + 0xe8));
        return bVar5;
      }
    }
    else {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4971916947156369139>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceHalfEdge.cpp"
                         ,0x10d,
                         "SkeletalMeshObject->GetSkeletalMeshRenderData().LODRenderData.Num() == OnDemandHalfEdgeBuffers.Num()"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  return false;
}

