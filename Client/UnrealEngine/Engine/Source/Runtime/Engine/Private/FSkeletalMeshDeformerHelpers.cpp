// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// operator() @ 148628b10

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
`FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
            ((FRHICommandListBase *)param_1,*(FSkeletalMeshObject **)this,
             *(int *)((longlong)this + 8),*(bool *)((longlong)this + 0xc));
  return;
}

// AllocateVertexFactoryColorBuffer @ 14862e430

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryColorBuffer
          (FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2,FSkeletalMeshObject *param_3,
          int param_4,wchar_t *param_5)

{
  longlong *plVar1;
  uint uVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRHIShaderResourceView *this;
  ulong64 uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  FSkeletalMeshLODRenderData *pFVar9;
  FGPUBaseSkinVertexFactory *pFVar10;
  FMeshDeformerGeometry *pFVar11;
  FRDGBuffer *pFVar12;
  TRefCountPtr<FRDGPooledBuffer> *pTVar13;
  FRHIShaderResourceView *this_00;
  FResource *pFVar14;
  FResource *pFVar15;
  FRHIBufferSRVCreateInfo local_48;
  FRDGBufferDesc local_30;
  
  cVar7 = (**(code **)(param_3->_padding_ + 0x40))(param_3);
  if (cVar7 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar9 = FSkeletalMeshRenderData::GetPendingFirstLOD(param_3->SkeletalMeshRenderData,param_4);
  local_48.NumElements = 0x4109;
  local_48.Format = PF_G16;
  local_48._1_3_ = 0;
  local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
  uVar2 = (pFVar9->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  local_30.NumElements = uVar2;
  local_30.BytesPerElement = 4;
  local_30._12_4_ = local_48._12_4_;
  local_30.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_30.Metadata = (FShaderParametersMetadata *)0x0;
  local_48.StartOffsetBytes = uVar2;
  iVar8 = GetIndexOfFirstAvailableSection(param_3,param_4);
  pFVar10 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4,iVar8);
  uVar5 = (pFVar10->ShaderData).UpdatedFrameNumber;
  pFVar11 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4);
  pFVar3 = (pFVar11->Color).Reference;
  if ((((pFVar3 == (FRDGPooledBuffer *)0x0) || ((pFVar3->Desc).BytesPerElement != 4)) ||
      ((pFVar3->Desc).NumElements != uVar2)) ||
     ((pFVar3->Desc).Usage != (VertexBuffer|ShaderResource|UnorderedAccess|Static))) {
    pFVar12 = FRDGBuilder::CreateBuffer(param_1,&local_30,param_5,None);
    pTVar13 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar12);
    pFVar3 = (pFVar11->Color).Reference;
    pFVar4 = pTVar13->Reference;
    if (pFVar3 != pFVar4) {
      (pFVar11->Color).Reference = pFVar4;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar3->_padding_;
        LOCK();
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
    pFVar3 = (pFVar11->Color).Reference;
    local_48.Format = PF_R8G8B8A8;
    local_48.StartOffsetBytes = 0;
    local_48.NumElements = 0xffffffff;
    local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
    this_00 = FRHIBufferViewCache::GetOrCreateSRV
                        (&pFVar3->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                         (pFVar3->Buffer).Reference,&local_48);
    this = (pFVar11->ColorSRV).Reference;
    if (this != this_00) {
      (pFVar11->ColorSRV).Reference = this_00;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (this != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
    }
  }
  else {
    pFVar12 = FRDGBuilder::RegisterExternalBuffer(param_1,&pFVar11->Color,None);
    FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar12);
  }
  pFVar11->ColorUpdatedFrame = (uint)uVar5;
  if (pFVar12 != (FRDGBuffer *)0x0) {
    iVar8 = (param_2->Resources).ArrayNum;
    pFVar14 = (param_2->Resources).AllocatorInstance.Data;
    pFVar15 = pFVar14 + iVar8;
    for (; pFVar14 != pFVar15; pFVar14 = pFVar14 + 1) {
      if ((FRDGBuffer *)pFVar14->Resource == pFVar12) {
        return pFVar12;
      }
    }
    if (iVar8 == (param_2->Resources).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                        (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                         &(param_2->Resources).ArrayMax);
    }
    pFVar14 = (param_2->Resources).AllocatorInstance.Data;
    (param_2->Resources).ArrayNum = iVar8 + 1;
    pFVar14[iVar8].Resource = (FRDGViewableResource *)pFVar12;
    pFVar14[iVar8].Access = SRVMask|VertexOrIndexBuffer;
    pFVar14[iVar8].Pipelines = Graphics;
  }
  return pFVar12;
}

// AllocateVertexFactoryColorBuffer @ 14862e690

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryColorBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  FRDGExternalAccessQueue local_18;
  
  local_18.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_18.Resources.ArrayNum = 0;
  local_18.Resources.ArrayMax = 0;
  pFVar3 = AllocateVertexFactoryColorBuffer(param_1,&local_18,param_2,param_3,param_4);
  FRDGExternalAccessQueue::Submit(&local_18,param_1);
  if (local_18.Resources.ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x4fe,L"Submit must be called before destruction.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// AllocateVertexFactoryPositionBuffer @ 14862e710

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryPositionBuffer
          (FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2,FSkeletalMeshObject *param_3,
          int param_4,wchar_t *param_5)

{
  TRefCountPtr<FRDGPooledBuffer> *pTVar1;
  longlong *plVar2;
  TRefCountPtr<FRHIShaderResourceView> *pTVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRDGPooledBuffer *pFVar5;
  FRDGPooledBuffer *pFVar6;
  FSkeletalMeshRenderData *pFVar7;
  FRHIBuffer *this;
  FRHIBuffer *this_00;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FSkeletalMeshLODRenderData *pFVar14;
  FGPUBaseSkinVertexFactory *pFVar15;
  FMeshDeformerGeometry *pFVar16;
  FRDGBuffer *pFVar17;
  TRefCountPtr<FRDGPooledBuffer> *pTVar18;
  FRHIShaderResourceView *this_01;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar19;
  FResource *pFVar20;
  uint uVar21;
  FRHIShaderResourceView *pFVar22;
  FResource *pFVar23;
  longlong lVar24;
  uint uVar25;
  TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> local_98;
  uint local_88;
  FRHIBufferSRVCreateInfo local_80;
  TRefCountPtr<FRDGPooledBuffer> *local_68;
  FMeshDeformerGeometry *local_60;
  FSkeletalMeshLODRenderData *local_58;
  FRDGBufferDesc local_50;
  
  cVar10 = (**(code **)(param_3->_padding_ + 0x40))(param_3);
  if (cVar10 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar14 = FSkeletalMeshRenderData::GetPendingFirstLOD(param_3->SkeletalMeshRenderData,param_4);
  uVar21 = (pFVar14->StaticVertexBuffers).PositionVertexBuffer.NumVertices * 3;
  iVar12 = GetIndexOfFirstAvailableSection(param_3,param_4);
  pFVar15 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4,iVar12);
  local_88 = (uint)(pFVar15->ShaderData).UpdatedFrameNumber;
  pFVar16 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4);
  pFVar5 = (pFVar16->Position).Reference;
  pTVar1 = &pFVar16->Position;
  local_68 = pTVar1;
  local_60 = pFVar16;
  if (pFVar5 == (FRDGPooledBuffer *)0x0) {
LAB_14862e814:
    bVar11 = false;
  }
  else {
    if (local_88 == pFVar16->PositionUpdatedFrame) {
      pFVar17 = FRDGBuilder::RegisterExternalBuffer(param_1,pTVar1,None);
      FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar17);
      goto LAB_14862ebb8;
    }
    if ((((pFVar5->Desc).BytesPerElement != 4) || ((pFVar5->Desc).NumElements != uVar21)) ||
       ((pFVar5->Desc).Usage != (VertexBuffer|ShaderResource|UnorderedAccess|Static)))
    goto LAB_14862e814;
    bVar11 = true;
  }
  pFVar6 = (pFVar16->PrevPosition).Reference;
  pTVar18 = &pFVar16->PrevPosition;
  if (((pFVar6 == (FRDGPooledBuffer *)0x0) || ((pFVar6->Desc).BytesPerElement != 4)) ||
     (((pFVar6->Desc).NumElements != uVar21 ||
      ((pFVar6->Desc).Usage != (VertexBuffer|ShaderResource|UnorderedAccess|Static))))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (bVar11) {
    if (!bVar9) {
      if (!bVar11) goto LAB_14862e8e9;
      if (pTVar18 != pTVar1) {
        pTVar18->Reference = pFVar5;
        pTVar1->Reference = (FRDGPooledBuffer *)0x0;
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          plVar2 = &pFVar6->_padding_;
          LOCK();
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)pFVar6->_padding_)(pFVar6,1);
          }
        }
      }
      pTVar3 = &pFVar16->PositionSRV;
      pTVar4 = &pFVar16->PrevPositionSRV;
      if (pTVar4 != pTVar3) {
        pFVar22 = pTVar4->Reference;
        pTVar4->Reference = pTVar3->Reference;
        pTVar3->Reference = (FRHIShaderResourceView *)0x0;
        if (pFVar22 != (FRHIShaderResourceView *)0x0) goto LAB_14862e926;
      }
      goto LAB_14862e92b;
    }
    pTVar18->Reference = pFVar5;
    pFVar22 = (pFVar16->PositionSRV).Reference;
    pTVar1->Reference = pFVar6;
    (pFVar16->PositionSRV).Reference = (pFVar16->PrevPositionSRV).Reference;
    (pFVar16->PrevPositionSRV).Reference = pFVar22;
    pFVar17 = FRDGBuilder::RegisterExternalBuffer(param_1,pTVar1,None);
    FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar17);
  }
  else {
LAB_14862e8e9:
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      pTVar18->Reference = (FRDGPooledBuffer *)0x0;
      plVar2 = &pFVar6->_padding_;
      LOCK();
      lVar24 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
    pFVar22 = (pFVar16->PrevPositionSRV).Reference;
    if (pFVar22 != (FRHIShaderResourceView *)0x0) {
      (pFVar16->PrevPositionSRV).Reference = (FRHIShaderResourceView *)0x0;
LAB_14862e926:
      FRHIResource::Release((FRHIResource *)pFVar22);
    }
LAB_14862e92b:
    local_80.NumElements = 0x4109;
    local_80.Format = PF_G16;
    local_80._1_3_ = 0;
    local_50.NumElements = uVar21;
    local_50.BytesPerElement = 4;
    local_50._12_4_ = local_80._12_4_;
    local_50.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    local_80.RayTracingScene = (FRHIRayTracingScene *)0x0;
    local_50.Metadata = (FShaderParametersMetadata *)0x0;
    local_80.StartOffsetBytes = uVar21;
    pFVar17 = FRDGBuilder::CreateBuffer(param_1,&local_50,param_5,None);
    pTVar18 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar17);
    pFVar5 = pTVar1->Reference;
    pFVar6 = pTVar18->Reference;
    if (pFVar5 != pFVar6) {
      pTVar1->Reference = pFVar6;
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar6->_padding_ = (int)pFVar6->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar5 != (FRDGPooledBuffer *)0x0) {
        plVar2 = &pFVar5->_padding_;
        LOCK();
        lVar24 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar24 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar5->_padding_)(pFVar5,1);
        }
      }
    }
    local_80.Format = PF_R32_FLOAT;
    local_80.StartOffsetBytes = 0;
    local_80.NumElements = 0xffffffff;
    local_80.RayTracingScene = (FRHIRayTracingScene *)0x0;
    this_01 = FRHIBufferViewCache::GetOrCreateSRV
                        (&pTVar1->Reference->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                         (pTVar1->Reference->Buffer).Reference,&local_80);
    pFVar22 = (pFVar16->PositionSRV).Reference;
    if (pFVar22 != this_01) {
      (pFVar16->PositionSRV).Reference = this_01;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      if (pFVar22 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar22);
      }
    }
  }
  pFVar7 = param_3->SkeletalMeshRenderData;
  uVar21 = 0;
  if (param_4 < (pFVar7->LODRenderData).Array.ArrayNum) {
    uVar21 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar17 = (FRDGBuffer *)(*pcVar8)();
    return pFVar17;
  }
  pFVar14 = *(FSkeletalMeshLODRenderData **)
             ((pFVar7->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_4 * 8);
  local_58 = pFVar14;
  pTVar19 = FSkeletalMeshObject::GetRenderSections(param_3,param_4);
  uVar21 = pTVar19->ArrayNum;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  if ((int)uVar21 < 1) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
  }
  else {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar21,&local_98.AllocatorInstance,&local_98.ArrayNum,&local_98.ArrayMax
                       );
    DefaultConstructItems<TRefCountPtr<FRHIBuffer>,int>
              (local_98.AllocatorInstance.Data + (longlong)iVar12 * 8,uVar21);
  }
  pTVar1 = local_68;
  uVar25 = 0;
  if (0 < (int)uVar21) {
    lVar24 = 0;
    do {
      this = (pTVar1->Reference->Buffer).Reference;
      uVar13 = 0;
      if ((int)uVar25 < local_98.ArrayNum) {
        uVar13 = ~uVar25 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        pFVar17 = (FRDGBuffer *)(*pcVar8)();
        return pFVar17;
      }
      this_00 = *(FRHIBuffer **)(local_98.AllocatorInstance.Data + lVar24 * 8);
      if (this_00 != this) {
        *(FRHIBuffer **)(local_98.AllocatorInstance.Data + lVar24 * 8) = this;
        if (this != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this);
        }
        if (this_00 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      uVar25 = uVar25 + 1;
      lVar24 = lVar24 + 1;
      pFVar14 = local_58;
      pFVar16 = local_60;
    } while (lVar24 < (int)uVar21);
  }
  lVar24 = *(longlong *)&param_3[3].LODInfo.ArrayNum;
  bVar11 = false;
  if (lVar24 != 0) {
    bVar11 = (bool)(*(byte *)(lVar24 + 0x305) & 1);
  }
  FSkeletalMeshObjectGPUSkin::UpdateRayTracingGeometry_Internal
            (pFVar14,param_4,&local_98,(FRayTracingGeometry *)(param_3 + 1),bVar11,param_3);
  DestructItems<TRefCountPtr<FRHIBuffer>,int>
            ((TRefCountPtr<FRHIBuffer> *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
LAB_14862ebb8:
  pFVar16->PositionUpdatedFrame = local_88;
  if (pFVar17 != (FRDGBuffer *)0x0) {
    FRDGExternalAccessQueue::Validate
              (param_2,(FRDGViewableResource *)pFVar17,SRVMask|VertexOrIndexBuffer,Graphics);
    iVar12 = (param_2->Resources).ArrayNum;
    pFVar20 = (param_2->Resources).AllocatorInstance.Data;
    pFVar23 = pFVar20 + iVar12;
    for (; pFVar20 != pFVar23; pFVar20 = pFVar20 + 1) {
      if ((FRDGBuffer *)pFVar20->Resource == pFVar17) {
        return pFVar17;
      }
    }
    if (iVar12 == (param_2->Resources).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                          &(param_2->Resources).ArrayMax);
    }
    pFVar20 = (param_2->Resources).AllocatorInstance.Data;
    (param_2->Resources).ArrayNum = iVar12 + 1;
    pFVar20[iVar12].Resource = (FRDGViewableResource *)pFVar17;
    pFVar20[iVar12].Access = SRVMask|VertexOrIndexBuffer;
    pFVar20[iVar12].Pipelines = Graphics;
  }
  return pFVar17;
}

// AllocateVertexFactoryPositionBuffer @ 14862ec80

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryPositionBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3,bool param_4,
          wchar_t *param_5)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  FRDGExternalAccessQueue local_18;
  
  local_18.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_18.Resources.ArrayNum = 0;
  local_18.Resources.ArrayMax = 0;
  pFVar3 = AllocateVertexFactoryPositionBuffer(param_1,&local_18,param_2,param_3,param_5);
  FRDGExternalAccessQueue::Submit(&local_18,param_1);
  if (local_18.Resources.ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x4fe,L"Submit must be called before destruction.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// AllocateVertexFactoryTangentBuffer @ 14862ed10

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryTangentBuffer
          (FRDGBuilder *param_1,FRDGExternalAccessQueue *param_2,FSkeletalMeshObject *param_3,
          int param_4,wchar_t *param_5)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  FRDGPooledBuffer *pFVar3;
  FRHIShaderResourceView *this;
  code *pcVar4;
  uint uVar5;
  ulong64 uVar6;
  longlong lVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FSkeletalMeshLODRenderData *pFVar11;
  FGPUBaseSkinVertexFactory *pFVar12;
  FMeshDeformerGeometry *pFVar13;
  FRDGBuffer *pFVar14;
  TRefCountPtr<FRDGPooledBuffer> *pTVar15;
  FRHIShaderResourceView *this_00;
  FResource *pFVar16;
  EPixelFormat EVar17;
  FResource *pFVar18;
  ulonglong uVar19;
  FRHIBufferSRVCreateInfo local_58;
  FRDGBufferDesc local_40;
  
  cVar8 = (**(code **)(param_3->_padding_ + 0x40))(param_3);
  if (cVar8 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar11 = FSkeletalMeshRenderData::GetPendingFirstLOD(param_3->SkeletalMeshRenderData,param_4);
  local_58.NumElements = 0x4109;
  local_58.Format = PF_UYVY;
  local_58._1_3_ = 0;
  local_58.RayTracingScene = (FRHIRayTracingScene *)0x0;
  uVar5 = (pFVar11->StaticVertexBuffers).PositionVertexBuffer.NumVertices * 2;
  local_40.NumElements = uVar5;
  local_40.BytesPerElement = 8;
  local_40._12_4_ = local_58._12_4_;
  local_40.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_40.Metadata = (FShaderParametersMetadata *)0x0;
  local_58.StartOffsetBytes = uVar5;
  iVar10 = GetIndexOfFirstAvailableSection(param_3,param_4);
  pFVar12 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4,iVar10);
  uVar6 = (pFVar12->ShaderData).UpdatedFrameNumber;
  pFVar13 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                      ((FSkeletalMeshObjectGPUSkin *)param_3,param_4);
  pFVar2 = (pFVar13->Tangent).Reference;
  if ((((pFVar2 == (FRDGPooledBuffer *)0x0) || ((pFVar2->Desc).BytesPerElement != 8)) ||
      ((pFVar2->Desc).NumElements != uVar5)) ||
     ((pFVar2->Desc).Usage != (VertexBuffer|ShaderResource|UnorderedAccess|Static))) {
    pFVar14 = FRDGBuilder::CreateBuffer(param_1,&local_40,param_5,None);
    pTVar15 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar14);
    pFVar2 = (pFVar13->Tangent).Reference;
    pFVar3 = pTVar15->Reference;
    if (pFVar2 != pFVar3) {
      (pFVar13->Tangent).Reference = pFVar3;
      if (pFVar3 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar2 != (FRDGPooledBuffer *)0x0) {
        plVar1 = &pFVar2->_padding_;
        LOCK();
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
          (**(code **)pFVar2->_padding_)(pFVar2,1);
        }
      }
    }
    uVar19 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].bContainsValidPlatformInfo == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xc1,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pFVar14 = (FRDGBuffer *)(*pcVar4)();
      return pFVar14;
    }
    pFVar2 = (pFVar13->Tangent).Reference;
    EVar17 = PF_R16G16B16A16_SNORM;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar19].Language == LANGUAGE_OpenGL) {
      EVar17 = PF_R16G16B16A16_SINT;
    }
    local_58.NumElements = 0xffffffff;
    local_58.Format = EVar17;
    local_58.StartOffsetBytes = 0;
    local_58.RayTracingScene = (FRHIRayTracingScene *)0x0;
    this_00 = FRHIBufferViewCache::GetOrCreateSRV
                        (&pFVar2->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                         (pFVar2->Buffer).Reference,&local_58);
    this = (pFVar13->TangentSRV).Reference;
    if (this != this_00) {
      (pFVar13->TangentSRV).Reference = this_00;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (this != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this);
      }
    }
  }
  else {
    pFVar14 = FRDGBuilder::RegisterExternalBuffer(param_1,&pFVar13->Tangent,None);
    FRDGBuilder::UseInternalAccessMode(param_1,(FRDGViewableResource *)pFVar14);
  }
  pFVar13->TangentUpdatedFrame = (uint)uVar6;
  if (pFVar14 != (FRDGBuffer *)0x0) {
    iVar10 = (param_2->Resources).ArrayNum;
    pFVar16 = (param_2->Resources).AllocatorInstance.Data;
    pFVar18 = pFVar16 + iVar10;
    for (; pFVar16 != pFVar18; pFVar16 = pFVar16 + 1) {
      if ((FRDGBuffer *)pFVar16->Resource == pFVar14) {
        return pFVar14;
      }
    }
    if (iVar10 == (param_2->Resources).ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                         (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)param_2,
                          &(param_2->Resources).ArrayMax);
    }
    pFVar16 = (param_2->Resources).AllocatorInstance.Data;
    (param_2->Resources).ArrayNum = iVar10 + 1;
    pFVar16[iVar10].Resource = (FRDGViewableResource *)pFVar14;
    pFVar16[iVar10].Access = SRVMask|VertexOrIndexBuffer;
    pFVar16[iVar10].Pipelines = Graphics;
  }
  return pFVar14;
}

// AllocateVertexFactoryTangentBuffer @ 14862efd0

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::AllocateVertexFactoryTangentBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  FRDGExternalAccessQueue local_18;
  
  local_18.Resources.AllocatorInstance.Data = (FResource *)0x0;
  local_18.Resources.ArrayNum = 0;
  local_18.Resources.ArrayMax = 0;
  pFVar3 = AllocateVertexFactoryTangentBuffer(param_1,&local_18,param_2,param_3,param_4);
  FRDGExternalAccessQueue::Submit(&local_18,param_1);
  if (local_18.Resources.ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                       ,0x4fe,L"Submit must be called before destruction.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetAllocatedColorBuffer @ 148645070

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::GetAllocatedColorBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3)

{
  char cVar1;
  FMeshDeformerGeometry *pFVar2;
  FRDGBuffer *pFVar3;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (cVar1 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar3 = (FRDGBuffer *)0x0;
  pFVar2 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                     ((FSkeletalMeshObjectGPUSkin *)param_2,param_3);
  if ((pFVar2->Color).Reference != (FRDGPooledBuffer *)0x0) {
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(param_1,&pFVar2->Color,None);
  }
  return pFVar3;
}

// GetAllocatedPositionBuffer @ 1486450f0

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::GetAllocatedPositionBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3)

{
  char cVar1;
  FMeshDeformerGeometry *pFVar2;
  FRDGBuffer *pFVar3;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (cVar1 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar3 = (FRDGBuffer *)0x0;
  pFVar2 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                     ((FSkeletalMeshObjectGPUSkin *)param_2,param_3);
  if ((pFVar2->Position).Reference != (FRDGPooledBuffer *)0x0) {
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(param_1,&pFVar2->Position,None);
  }
  return pFVar3;
}

// GetAllocatedTangentBuffer @ 148645170

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

FRDGBuffer * __cdecl
FSkeletalMeshDeformerHelpers::GetAllocatedTangentBuffer
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3)

{
  char cVar1;
  FMeshDeformerGeometry *pFVar2;
  FRDGBuffer *pFVar3;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (cVar1 != '\0') {
    return (FRDGBuffer *)0x0;
  }
  pFVar3 = (FRDGBuffer *)0x0;
  pFVar2 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                     ((FSkeletalMeshObjectGPUSkin *)param_2,param_3);
  if ((pFVar2->Tangent).Reference != (FRDGPooledBuffer *)0x0) {
    pFVar3 = FRDGBuilder::RegisterExternalBuffer(param_1,&pFVar2->Tangent,None);
  }
  return pFVar3;
}

// GetBoneBufferForReading @ 1486456b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRHIShaderResourceView * __cdecl
FSkeletalMeshDeformerHelpers::GetBoneBufferForReading
          (FSkeletalMeshObject *param_1,int param_2,int param_3,bool param_4)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FGPUBaseSkinVertexFactory *pFVar5;
  FVertexBufferAndSRV *pFVar6;
  FRHIShaderResourceView *pFVar7;
  ulonglong uVar8;
  FVertexBufferAndSRV *pFVar9;
  
  cVar3 = (**(code **)(param_1->_padding_ + 0x40))();
  if (cVar3 == '\0') {
    pFVar5 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                       ((FSkeletalMeshObjectGPUSkin *)param_1,param_2,param_3);
    if (pFVar5 != (FGPUBaseSkinVertexFactory *)0x0) {
      bVar4 = false;
      if ((pFVar5->ShaderData).CurrentRevisionNumber - (pFVar5->ShaderData).PreviousRevisionNumber <
          2) {
        bVar4 = param_4;
      }
      uVar8 = (ulonglong)(pFVar5->ShaderData).CurrentBuffer;
      pFVar9 = (pFVar5->ShaderData).BoneBuffer.Elements + (bVar4 ^ uVar8);
      pFVar6 = pFVar9;
      if ((bVar4 != false) && ((pFVar9->VertexBufferRHI).Reference == (FRHIBuffer *)0x0)) {
        pFVar6 = (pFVar5->ShaderData).BoneBuffer.Elements + uVar8;
      }
      if ((pFVar6->VertexBufferRHI).Reference != (FRHIBuffer *)0x0) {
        if ((pFVar9->VertexBufferRHI).Reference == (FRHIBuffer *)0x0) {
          if ((bVar4 == false) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("bPrevious",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                 ,0xfe,
                                 L"Trying to access current bone buffer for reading, but it is null. BoneBuffer[0] = %p, BoneBuffer[1] = %p, CurrentRevisionNumber = %u, PreviousRevisionNumber = %u"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FRHIShaderResourceView *)(*pcVar2)();
            return pFVar7;
          }
          uVar1 = (pFVar5->ShaderData).CurrentBuffer;
          pFVar9 = (pFVar5->ShaderData).BoneBuffer.Elements + uVar1;
          if (((pFVar5->ShaderData).BoneBuffer.Elements[uVar1].VertexBufferRHI.Reference ==
               (FRHIBuffer *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Output->VertexBufferRHI.IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\GPUSkinVertexFactory.h"
                                 ,0x101,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FRHIShaderResourceView *)(*pcVar2)();
            return pFVar7;
          }
        }
        return (pFVar9->VertexBufferSRV).Reference;
      }
    }
  }
  return (FRHIShaderResourceView *)0x0;
}

// GetClothBuffersForReading @ 1486474b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FClothBuffers * __cdecl
FSkeletalMeshDeformerHelpers::GetClothBuffersForReading
          (FClothBuffers *__return_storage_ptr__,FSkeletalMeshObject *param_1,int param_2,
          int param_3,uint param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  undefined4 uVar16;
  FGPUBaseSkinVertexFactory *pFVar17;
  longlong *plVar18;
  FSkeletalMeshLODRenderData *pFVar19;
  FClothBuffers *pFVar20;
  undefined8 *puVar21;
  FVertexBufferAndSRV *pFVar22;
  TMatrix<float> *pTVar23;
  FRHIResource *local_res8;
  undefined8 local_d8;
  longlong lStack_c0;
  
  cVar13 = (**(code **)(param_1->_padding_ + 0x40))(param_1);
  uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  uVar10 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  uVar9 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  uVar8 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  uVar6 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  if (cVar13 == '\0') {
    pFVar17 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                        ((FSkeletalMeshObjectGPUSkin *)param_1,param_2,param_3);
    if (((pFVar17 == (FGPUBaseSkinVertexFactory *)0x0) ||
        (plVar18 = (longlong *)(**(code **)(pFVar17->_padding_ + 0x60))(pFVar17),
        plVar18 == (longlong *)0x0)) ||
       (bVar14 = FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::HasClothBufferForReading
                           ((ClothShaderType *)(plVar18 + 2),param_5), !bVar14)) {
      uVar12 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
      uVar11 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
      uVar10 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
      uVar9 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
      uVar8 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
      uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
      uVar6 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
      uVar5 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
      *(undefined8 *)__return_storage_ptr__ = 0;
      __return_storage_ptr__->ClothInfluenceBuffer = (FRHIShaderResourceView *)0x0;
      __return_storage_ptr__->ClothSimulatedPositionAndNormalBuffer = (FRHIShaderResourceView *)0x0;
      __return_storage_ptr__->_padding_ = 0;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[0] = uVar5;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[0] + 2) = uVar6;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[1] = uVar7;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[1] + 2) = uVar8;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[2] = uVar9;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[2] + 2) = uVar10;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[3] = uVar11;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[3] + 2) = uVar12;
    }
    else {
      pFVar19 = FSkeletalMeshRenderData::GetPendingFirstLOD(param_1->SkeletalMeshRenderData,param_2)
      ;
      uVar15 = 0;
      if (param_3 < (pFVar19->RenderSections).ArrayNum) {
        uVar15 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar20 = (FClothBuffers *)(*pcVar4)();
        return pFVar20;
      }
      pFVar1 = (pFVar19->RenderSections).AllocatorInstance.Data;
      puVar21 = (undefined8 *)(**(code **)(*plVar18 + 0x18))(plVar18,&local_res8);
      pFVar2 = (FRHIShaderResourceView *)*puVar21;
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
      uVar16 = (**(code **)(*plVar18 + 0x28))
                         (plVar18,*(undefined4 *)(pFVar1 + (longlong)param_3 * 0x118 + 0x10),0);
      local_d8 = CONCAT44(local_d8._4_4_,uVar16);
      pFVar22 = FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferForReading
                          ((ClothShaderType *)(plVar18 + 2),param_5);
      pFVar3 = (pFVar22->VertexBufferSRV).Reference;
      pTVar23 = FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothToLocalForReading
                          ((ClothShaderType *)(plVar18 + 2),param_5);
      *(undefined8 *)__return_storage_ptr__ = local_d8;
      __return_storage_ptr__->ClothInfluenceBuffer = pFVar2;
      uVar5 = *(undefined8 *)pTVar23->M[0];
      uVar6 = *(undefined8 *)(pTVar23->M[0] + 2);
      uVar7 = *(undefined8 *)pTVar23->M[1];
      uVar8 = *(undefined8 *)(pTVar23->M[1] + 2);
      uVar9 = *(undefined8 *)pTVar23->M[2];
      uVar10 = *(undefined8 *)(pTVar23->M[2] + 2);
      uVar11 = *(undefined8 *)pTVar23->M[3];
      uVar12 = *(undefined8 *)(pTVar23->M[3] + 2);
      __return_storage_ptr__->ClothSimulatedPositionAndNormalBuffer = pFVar3;
      __return_storage_ptr__->_padding_ = lStack_c0;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[0] = uVar5;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[0] + 2) = uVar6;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[1] = uVar7;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[1] + 2) = uVar8;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[2] = uVar9;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[2] + 2) = uVar10;
      *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[3] = uVar11;
      *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[3] + 2) = uVar12;
    }
  }
  else {
    *(undefined8 *)__return_storage_ptr__ = 0;
    __return_storage_ptr__->ClothInfluenceBuffer = (FRHIShaderResourceView *)0x0;
    __return_storage_ptr__->ClothSimulatedPositionAndNormalBuffer = (FRHIShaderResourceView *)0x0;
    __return_storage_ptr__->_padding_ = 0;
    *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[0] = uVar5;
    *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[0] + 2) = uVar6;
    *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[1] = uVar7;
    *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[1] + 2) = uVar8;
    *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[2] = uVar9;
    *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[2] + 2) = uVar10;
    *(undefined8 *)(__return_storage_ptr__->ClothToLocal).M[3] = uVar11;
    *(undefined8 *)((__return_storage_ptr__->ClothToLocal).M[3] + 2) = uVar12;
  }
  return __return_storage_ptr__;
}

// GetIndexOfFirstAvailableSection @ 14864b2b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
FSkeletalMeshDeformerHelpers::GetIndexOfFirstAvailableSection
          (FSkeletalMeshObject *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar5;
  uint uVar6;
  longlong lVar7;
  
  pTVar5 = FSkeletalMeshObject::GetRenderSections(param_1,param_2);
  uVar6 = 0;
  iVar4 = pTVar5->ArrayNum;
  if (iVar4 < 1) {
    return -1;
  }
  lVar7 = 0;
  while( true ) {
    uVar3 = 0;
    if ((int)uVar6 < iVar4) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    if ((pTVar5->AllocatorInstance).Data[lVar7 + 0x110] == (FScriptContainerElement)0x0) break;
    iVar4 = pTVar5->ArrayNum;
    uVar6 = uVar6 + 1;
    lVar7 = lVar7 + 0x118;
    if (iVar4 <= (int)uVar6) {
      return -1;
    }
  }
  return uVar6;
}

// GetMorphTargetBufferForReading @ 14864bdc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRHIShaderResourceView * __cdecl
FSkeletalMeshDeformerHelpers::GetMorphTargetBufferForReading
          (FSkeletalMeshObject *param_1,int param_2,int param_3,uint param_4,bool param_5)

{
  char cVar1;
  FGPUBaseSkinVertexFactory *this;
  FMorphVertexBuffer *pFVar2;
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x40))();
  if (cVar1 == '\0') {
    this = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                     ((FSkeletalMeshObjectGPUSkin *)param_1,param_2,param_3);
    if (this != (FGPUBaseSkinVertexFactory *)0x0) {
      pFVar2 = FGPUBaseSkinVertexFactory::GetMorphVertexBuffer(this,param_5);
      if (pFVar2 != (FMorphVertexBuffer *)0x0) {
        return (pFVar2->SRVValue).Reference;
      }
    }
  }
  return (FRHIShaderResourceView *)0x0;
}

// ResetVertexFactoryBufferOverrides @ 148660c00

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

void __cdecl
FSkeletalMeshDeformerHelpers::ResetVertexFactoryBufferOverrides
          (FSkeletalMeshObject *param_1,int param_2)

{
  FGPUSkinPassthroughVertexFactory *this;
  FSkeletalMeshRenderData *pFVar1;
  FSkeletalMeshLODRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMeshDeformerGeometry *this_00;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  FRHIResource *local_38;
  TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> local_30;
  
  cVar5 = (**(code **)(param_1->_padding_ + 0x40))();
  if (cVar5 == '\0') {
    bVar6 = IsInRenderingThread();
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                        ((FSkeletalMeshObjectGPUSkin *)param_1,param_2);
    if (((this_00->PositionUpdatedFrame != 0) || (this_00->TangentUpdatedFrame != 0)) ||
       (this_00->ColorUpdatedFrame != 0)) {
      FMeshDeformerGeometry::Reset(this_00);
      uVar7 = 0;
      if (param_2 < *(int *)&param_1[3].LODInfo.AllocatorInstance.Data) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = *(FGPUSkinPassthroughVertexFactory **)
              ((longlong)param_2 * 0xb0 + 0x28 + param_1[3]._padding_);
      if (this == (FGPUSkinPassthroughVertexFactory *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_29449852014296641>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshDeformerHelpers.cpp"
                           ,0x1bf,"TargetVertexFactory");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        FGPUSkinPassthroughVertexFactory::ResetVertexAttributes
                  (this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
      }
      pFVar1 = param_1->SkeletalMeshRenderData;
      uVar7 = 0;
      if (param_2 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar7 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = *(FSkeletalMeshLODRenderData **)
                ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_2 * 8);
      local_38 = (FRHIResource *)(pFVar2->StaticVertexBuffers).PositionVertexBuffer._padding_;
      if (local_38 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_38);
      }
      local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
      pTVar9 = FSkeletalMeshObject::GetRenderSections(param_1,param_2);
      uVar7 = pTVar9->ArrayNum;
      uVar10 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar10);
      }
      DestructItems<TRefCountPtr<FRHIBuffer>,int>
                ((TRefCountPtr<FRHIBuffer> *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
      if (local_30.ArrayMax != uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar7,&local_30.AllocatorInstance,0,&local_30.ArrayMax);
      }
      if (0 < (int)uVar7) {
        do {
          if (((local_30.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
              ((FScriptContainerElement *)&local_38 <
               local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = local_30.ArrayNum;
          if (local_30.ArrayNum == local_30.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_30.AllocatorInstance,&local_30.ArrayMax);
          }
          local_30.ArrayNum = iVar8 + 1;
          *(undefined8 *)(local_30.AllocatorInstance.Data + (longlong)iVar8 * 8) = 0;
          *(FRHIResource **)(local_30.AllocatorInstance.Data + (longlong)iVar8 * 8) = local_38;
          if (local_38 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(local_38);
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      lVar3 = *(longlong *)&param_1[3].LODInfo.ArrayNum;
      bVar6 = false;
      if (lVar3 != 0) {
        bVar6 = (bool)(*(byte *)(lVar3 + 0x305) & 1);
      }
      FSkeletalMeshObjectGPUSkin::UpdateRayTracingGeometry_Internal
                (pFVar2,param_2,&local_30,(FRayTracingGeometry *)(param_1 + 1),bVar6,param_1);
      DestructItems<TRefCountPtr<FRHIBuffer>,int>
                ((TRefCountPtr<FRHIBuffer> *)local_30.AllocatorInstance.Data,local_30.ArrayNum);
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      if (local_38 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_38);
      }
    }
  }
  return;
}

// UpdateVertexFactoryBufferOverrides @ 148673980

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

void __cdecl
FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
          (FRDGBuilder *param_1,FSkeletalMeshObject *param_2,int param_3,bool param_4)

{
  int *piVar1;
  int iVar2;
  void *this;
  TRDGEmptyLambdaPass<_public:_static_void___cdecl_FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides(FRDGBuilder_&,FSkeletalMeshObject_*,int,bool)_::_2_::<lambda_1>_>
  *pTVar3;
  <lambda_1> local_38;
  FRDGEventName local_28;
  
  local_28.EventFormat = L"";
  local_28.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.FormattedEventName.Data.ArrayNum = 0;
  local_28.FormattedEventName.Data.ArrayMax = 0;
  local_38.InMeshObject = param_2;
  local_38.InLodIndex = param_3;
  local_38.bInvalidatePreviousPosition = param_4;
  FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,&local_28,None);
  FRDGBuilder::FlushAccessModeQueue(param_1);
  this = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x198,8);
  pTVar3 = TRDGEmptyLambdaPass<`FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides'::__l2::<lambda_1>_>
           ::
           TRDGEmptyLambdaPass<_FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides_::__l2::<lambda_1>_>
                     (this,&local_28,NeverCull,&local_38);
  piVar1 = &(param_1->Passes).Array.ArrayMax;
  iVar2 = (param_1->Passes).Array.ArrayNum;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
  }
  (param_1->Passes).Array.ArrayNum = iVar2 + 1;
  (param_1->Passes).Array.AllocatorInstance.Data[iVar2] = (FRDGPass *)pTVar3;
  *(int *)&pTVar3->field_0x4c = (param_1->Passes).Array.ArrayNum + -1;
  FRDGBuilder::SetupEmptyPass(param_1,(FRDGPass *)pTVar3);
  if (local_28.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateVertexFactoryBufferOverrides @ 148673a70

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

void __cdecl
FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
          (FRHICommandListBase *param_1,FSkeletalMeshObject *param_2,int param_3)

{
  UpdateVertexFactoryBufferOverrides(param_1,param_2,param_3,false);
  return;
}

// UpdateVertexFactoryBufferOverrides @ 148673a80

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

void __cdecl
FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
          (FRHICommandListBase *param_1,FSkeletalMeshObject *param_2,int param_3,bool param_4)

{
  longlong lVar1;
  FGPUSkinPassthroughVertexFactory *this;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FMeshDeformerGeometry *pFVar6;
  FRHIShaderResourceView *pFVar7;
  FGPUBaseSkinVertexFactory *pFVar8;
  uint uVar9;
  FAddVertexAttributeDesc local_58;
  
  cVar3 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (cVar3 == '\0') {
    pFVar6 = FSkeletalMeshObjectGPUSkin::GetDeformerGeometry
                       ((FSkeletalMeshObjectGPUSkin *)param_2,param_3);
    pFVar7 = (FRHIShaderResourceView *)0x0;
    local_58.StreamBuffers.Elements[0] = (FRHIBuffer *)0x0;
    local_58.StreamBuffers.Elements[1] = (FRHIBuffer *)0x0;
    local_58.StreamBuffers.Elements[2] = (FRHIBuffer *)0x0;
    local_58.SRVs.Elements[0] = (FRHIShaderResourceView *)0x0;
    local_58.SRVs.Elements[1] = (FRHIShaderResourceView *)0x0;
    local_58.SRVs.Elements[2] = (FRHIShaderResourceView *)0x0;
    local_58.SRVs.Elements[3] = (FRHIShaderResourceView *)0x0;
    local_58.SRVs.Elements[4] = (FRHIShaderResourceView *)0x0;
    local_58.FrameNumber = pFVar6->PositionUpdatedFrame;
    bVar4 = false;
    if ((pFVar6->PositionSRV).Reference != (FRHIShaderResourceView *)0x0) {
      local_58.StreamBuffers.Elements[0] = (((pFVar6->Position).Reference)->Buffer).Reference;
      local_58.SRVs.Elements[0] = (pFVar6->PositionSRV).Reference;
      if (!param_4) {
        pFVar7 = (pFVar6->PrevPositionSRV).Reference;
      }
      bVar4 = true;
      local_58.SRVs.Elements[1] = pFVar7;
    }
    if ((pFVar6->TangentSRV).Reference != (FRHIShaderResourceView *)0x0) {
      local_58.StreamBuffers.Elements[1] = (((pFVar6->Tangent).Reference)->Buffer).Reference;
      local_58.SRVs.Elements[2] = (pFVar6->TangentSRV).Reference;
      bVar4 = true;
    }
    if ((pFVar6->ColorSRV).Reference == (FRHIShaderResourceView *)0x0) {
      if (!bVar4) {
        return;
      }
    }
    else {
      local_58.StreamBuffers.Elements[2] = (((pFVar6->Color).Reference)->Buffer).Reference;
      local_58.SRVs.Elements[3] = (pFVar6->ColorSRV).Reference;
    }
    uVar9 = 0;
    if (param_3 < *(int *)&param_2[3].LODInfo.AllocatorInstance.Data) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = param_2[3]._padding_;
    iVar5 = GetIndexOfFirstAvailableSection(param_2,param_3);
    pFVar8 = FSkeletalMeshObjectGPUSkin::GetBaseSkinVertexFactory
                       ((FSkeletalMeshObjectGPUSkin *)param_2,param_3,iVar5);
    this = *(FGPUSkinPassthroughVertexFactory **)((longlong)param_3 * 0xb0 + lVar1 + 0x28);
    if (this == (FGPUSkinPassthroughVertexFactory *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_29449852014296696>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshDeformerHelpers.cpp"
                         ,0x188,"TargetVertexFactory");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      FGPUSkinPassthroughVertexFactory::SetVertexAttributes(this,param_1,pFVar8,&local_58);
    }
  }
  return;
}

// UpdateVertexFactoryBufferOverrides @ 148673c40

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

void __cdecl
FSkeletalMeshDeformerHelpers::UpdateVertexFactoryBufferOverrides
          (FSkeletalMeshObject *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateVertexFactoryBufferOverrides
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,param_1,param_2,false);
  return;
}

