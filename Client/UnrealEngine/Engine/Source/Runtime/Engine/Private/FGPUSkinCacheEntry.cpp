// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetRayTracingSegmentVertexBuffers @ 147c5a480

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
FGPUSkinCacheEntry::GetRayTracingSegmentVertexBuffers
          (FGPUSkinCacheEntry *this,
          TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FRHIResource *local_38;
  FRHIResource *local_30;
  
  iVar1 = param_1->ArrayNum;
  uVar10 = (this->DispatchData).ArrayNum;
  bVar5 = false;
  bVar4 = false;
  if (iVar1 < (int)uVar10) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar10 - iVar1,&param_1->AllocatorInstance,&param_1->ArrayNum,
                       &param_1->ArrayMax);
    DefaultConstructItems<TRefCountPtr<FRHIBuffer>,int>
              ((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8,uVar10 - iVar1);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar1) {
      uVar9 = iVar1 - uVar10;
      if (((int)(uVar9 | uVar10) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 != 0) {
        TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (param_1,uVar10,uVar9);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
    }
  }
  uVar10 = 0;
  if (0 < (this->DispatchData).ArrayNum) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar10 < (this->DispatchData).ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar2 = *(undefined8 **)((this->DispatchData).AllocatorInstance.Data + lVar12 + 0xe8);
      if (puVar2 == (undefined8 *)0x0) {
        bVar4 = true;
        local_38 = (FRHIResource *)0x0;
        pFVar11 = (FScriptContainerElement *)&local_38;
      }
      else {
        local_30 = (FRHIResource *)*puVar2;
        bVar5 = true;
        if (local_30 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_30);
        }
        pFVar11 = (FScriptContainerElement *)&local_30;
      }
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data + lVar13;
      if (pFVar8 != pFVar11) {
        this_00 = *(FRHIResource **)pFVar8;
        *(undefined8 *)pFVar8 = *(undefined8 *)pFVar11;
        *(undefined8 *)pFVar11 = 0;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      if ((bVar4) && (bVar4 = false, local_38 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_38);
      }
      if ((bVar5) && (bVar5 = false, local_30 != (FRHIResource *)0x0)) {
        FRHIResource::Release(local_30);
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x140;
      lVar13 = lVar13 + 8;
    } while ((int)uVar10 < (this->DispatchData).ArrayNum);
  }
  return;
}

// SetupSection @ 147c831d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FGPUSkinCacheEntry::SetupSection
          (FGPUSkinCacheEntry *this,int param_1,FSkelMeshRenderSection *param_2,
          FGPUBaseSkinVertexFactory *param_3,FRecomputeTangentSection param_4,int param_5)

{
  FSkeletalMeshRenderData *pFVar1;
  FSkeletalMeshLODRenderData *this_00;
  FRHIResource *pFVar2;
  FRHIResource *pFVar3;
  FRHIShaderResourceView *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  FRHIResource *local_res20;
  FRHIResource *local_48 [2];
  
  uVar11 = 0;
  if (param_1 < (this->DispatchData).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
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
  pFVar10 = (this->DispatchData).AllocatorInstance.Data + (longlong)param_1 * 0x140;
  if ((*(FRWBuffersAllocation **)pFVar10 != (FRWBuffersAllocation *)0x0) &&
     (*(FRWBuffersAllocation **)pFVar10 != this->PositionAllocation)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Data.PositionTracker.Allocation || Data.PositionTracker.Allocation == PositionAllocation"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x313,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar11 = this->LOD;
  pFVar1 = this->GPUSkin->SkeletalMeshRenderData;
  uVar8 = 0;
  if ((int)uVar11 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  this_00 = *(FSkeletalMeshLODRenderData **)
             ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
  *(int *)(pFVar10 + 0x130) = param_5;
  *(FRWBuffersAllocation **)pFVar10 = this->PositionAllocation;
  *(int *)(pFVar10 + 0x30) = param_1;
  *(FSkelMeshRenderSection **)(pFVar10 + 0x28) = param_2;
  *(uint *)(pFVar10 + 0x4c) = param_2->NumVertices;
  *(uint *)(pFVar10 + 0x40) = param_2->BaseVertexIndex;
  *(uint *)(pFVar10 + 0x48) = param_2->BaseVertexIndex;
  puVar9 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x90))(param_3,&local_res8);
  pFVar2 = *(FRHIResource **)(pFVar10 + 0x58);
  pFVar3 = (FRHIResource *)*puVar9;
  if (pFVar2 != pFVar3) {
    *(FRHIResource **)(pFVar10 + 0x58) = pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  puVar9 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x98))(param_3,&local_res18);
  pFVar2 = *(FRHIResource **)(pFVar10 + 0x60);
  pFVar3 = (FRHIResource *)*puVar9;
  if (pFVar2 != pFVar3) {
    *(FRHIResource **)(pFVar10 + 0x60) = pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  puVar9 = (undefined8 *)(**(code **)(param_3->_padding_ + 0xa0))(param_3,&local_res20);
  pFVar2 = *(FRHIResource **)(pFVar10 + 0x68);
  pFVar3 = (FRHIResource *)*puVar9;
  if (pFVar2 != pFVar3) {
    *(FRHIResource **)(pFVar10 + 0x68) = pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res20 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res20);
  }
  uVar7 = (**(code **)(param_3->_padding_ + 0xa8))(param_3);
  *(undefined4 *)(pFVar10 + 0x50) = uVar7;
  puVar9 = (undefined8 *)(**(code **)(param_3->_padding_ + 0x88))(param_3,local_48);
  pFVar2 = *(FRHIResource **)(pFVar10 + 0x70);
  pFVar3 = (FRHIResource *)*puVar9;
  if (pFVar2 != pFVar3) {
    *(FRHIResource **)(pFVar10 + 0x70) = pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_48[0] != (FRHIResource *)0x0) {
    FRHIResource::Release(local_48[0]);
  }
  pFVar10[0x34] = (FScriptContainerElement)0x0;
  uVar7 = (**(code **)(param_3->_padding_ + 0x78))(param_3);
  *(undefined4 *)(pFVar10 + 0x3c) = uVar7;
  uVar11 = this->InputWeightStride;
  uVar8 = param_2->BaseVertexIndex;
  *(FGPUBaseSkinVertexFactory **)(pFVar10 + 0x20) = param_3;
  *(uint *)(pFVar10 + 0x44) = uVar11 * uVar8 >> 2;
  if (param_4.bEnable != 0) {
    if ((this_00->MultiSizeIndexContainer).IndexBuffer ==
        (FRawStaticIndexBuffer16or32Interface *)0x0) {
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
    pFVar4 = (((this_00->MultiSizeIndexContainer).IndexBuffer)->SRVValue).Reference;
    *(FRHIShaderResourceView **)(pFVar10 + 0x108) = pFVar4;
    *(uint *)(pFVar10 + 0x100) = param_2->NumTriangles;
    *(uint *)(pFVar10 + 0xfc) = param_2->BaseIndex;
    *(FRecomputeTangentSection *)(pFVar10 + 0xf8) = param_4;
    if (pFVar4 == (FRHIShaderResourceView *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.RecomputeTangents.IndexBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                         ,0x331,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  uVar11 = *(uint *)(pFVar10 + 0x30);
  uVar8 = FSkeletalMeshLODRenderData::FindSectionIndex(this_00,param_2);
  if (uVar11 != uVar8) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.SectionIndex == LodData.FindSectionIndex(*Section)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x334,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((*(longlong *)(pFVar10 + 0x58) == 0) || (*(longlong *)(pFVar10 + 0x70) == 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Data.TangentBufferSRV && Data.PositionBufferSRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinCache.cpp"
                       ,0x335,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// UpdateSkinWeightBuffer @ 147c8f000

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FGPUSkinCacheEntry::UpdateSkinWeightBuffer(FGPUSkinCacheEntry *this)

{
  FRHIShaderResourceView *pFVar1;
  FRHIShaderResourceView *pFVar2;
  GPUSkinBoneInfluenceType GVar3;
  FSkinWeightVertexBuffer *this_00;
  uint uVar4;
  
  this_00 = (FSkinWeightVertexBuffer *)
            (**(code **)(this->GPUSkin->_padding_ + 0x118))(this->GPUSkin,this->LOD);
  this->bUse16BitBoneIndex = (this_00->DataVertexBuffer).bUse16BitBoneIndex;
  this->bUse16BitBoneWeight = (this_00->DataVertexBuffer).bUse16BitBoneWeight;
  uVar4 = 0x100;
  if ((this_00->DataVertexBuffer).bUse16BitBoneWeight != false) {
    uVar4 = 0x200;
  }
  this->InputWeightIndexSize = ((this_00->DataVertexBuffer).bUse16BitBoneIndex != false) + 1 | uVar4
  ;
  this->InputWeightStride =
       ((uint)((this_00->DataVertexBuffer).bUse16BitBoneIndex != false) +
       ((this_00->DataVertexBuffer).bUse16BitBoneWeight != false) + 2) *
       (this_00->DataVertexBuffer).MaxBoneInfluences;
  pFVar1 = (this_00->DataVertexBuffer).SRVValue.Reference;
  pFVar2 = (this->InputWeightStreamSRV).Reference;
  if (pFVar2 != pFVar1) {
    (this->InputWeightStreamSRV).Reference = pFVar1;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  pFVar1 = (this_00->LookupVertexBuffer).SRVValue.Reference;
  pFVar2 = (this->InputWeightLookupStreamSRV).Reference;
  if (pFVar2 != pFVar1) {
    (this->InputWeightLookupStreamSRV).Reference = pFVar1;
    if (pFVar1 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
  }
  GVar3 = FSkinWeightVertexBuffer::GetBoneInfluenceType(this_00);
  if (GVar3 == DefaultBoneInfluence) {
    this->BoneInfluenceType = 4 < (int)(this_00->DataVertexBuffer).MaxBoneInfluences;
    return;
  }
  this->BoneInfluenceType = Unlimited;
  return;
}

