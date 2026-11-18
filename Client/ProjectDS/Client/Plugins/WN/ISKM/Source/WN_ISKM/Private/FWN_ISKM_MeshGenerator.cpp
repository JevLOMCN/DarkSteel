// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 5

// AllocateMeshBatch @ 14a8439b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

FMeshBatch * __thiscall
FWN_ISKM_MeshGenerator::AllocateMeshBatch
          (FWN_ISKM_MeshGenerator *this,int param_1,int param_2,FSkelMeshRenderSection *param_3,
          FMaterialRenderProxy *param_4,FWN_ISKM_OneFrameBatchElement *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  FMeshElementCollector *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ESceneDepthPriorityGroup EVar7;
  uint uVar8;
  FMeshBatch *pFVar9;
  
  this_00 = this->Collector;
  iVar5 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
          Add(&this_00->MeshBatchStorage,1);
  uVar8 = iVar5 / 0x49;
  uVar6 = 0;
  if ((int)uVar8 < (this_00->MeshBatchStorage).Chunks.Array.ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMeshBatch *)(*pcVar3)();
      return pFVar9;
    }
  }
  pFVar9 = (FMeshBatch *)
           ((longlong)(this_00->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar8] +
           (ulonglong)(uint)(iVar5 % 0x49) * 0xe0);
  pFVar9->ReverseCulling = 0;
  pFVar9->Type = 0;
  pFVar9->bUseForDepthPass = -(uint)((this->Proxy->_padding_ & 0xc000000) != 0) >> 4;
  EVar7 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                    ((FPrimitiveSceneProxy *)this->Proxy,this->View);
  uVar8 = ((EVar7 & 7) << 10 ^ *(uint *)&pFVar9->field_0xd4 & 0xffffe3ff) & 0xfffeffff | 0x2000;
  *(uint *)&pFVar9->field_0xd4 = uVar8;
  uVar8 = ((uint)param_3->bCastShadow << 2 ^ uVar8) & 4 ^ uVar8;
  *(uint *)&pFVar9->field_0xd4 = uVar8;
  bVar2 = *(byte *)((longlong)&this->Proxy->_padding_ + 5);
  pFVar9->LODIndex = (schar)param_1;
  pFVar9->SegmentIndex = param_2;
  pFVar9->VisualizeLODIndex = (schar)param_1;
  pFVar9->MaterialRenderProxy = param_4;
  *(uint *)&pFVar9->field_0xd4 = (((uint)bVar2 * 2 ^ uVar8) & 0x20 ^ uVar8) & 0xffff7fff | 8;
  pFVar9->VertexFactory = (FVertexFactory *)param_5->VertexFactory;
  return pFVar9;
}

// CreateUniformBuffer @ 14a846f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FWN_ISKM_MeshGenerator::CreateUniformBuffer(FWN_ISKM_MeshGenerator *this)

{
  TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> *pTVar1;
  UWN_ISKM_Profile *pUVar2;
  FWN_ISKM_Proxy *pFVar3;
  FWN_ISKM_Proxy *pFVar4;
  TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> this_00;
  TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> this_01;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  undefined8 local_58 [2];
  undefined1 local_48 [48];
  
  local_48._0_4_ = (this->Proxy->Profile->SkeletonInfo).NumBones;
  pUVar2 = this->Proxy->Profile;
  if (((pUVar2->BoneTransformBufferPtr).Object == (FWN_ISKM_BoneTransformBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->Proxy;
  local_48._8_8_ = (((pUVar2->BoneTransformBufferPtr).Object)->SRVRHI).Reference;
  if (((pFVar3->BuffersPtr).Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->Proxy;
  local_48._16_8_ = (((pFVar3->BuffersPtr).Object)->GlobalFrameIndicesSRV_A).Reference;
  if (((pFVar4->BuffersPtr).Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = this->Proxy;
  local_48._24_8_ = (((pFVar4->BuffersPtr).Object)->GlobalFrameIndicesSRV_B).Reference;
  if (((pFVar3->BuffersPtr).Object == (FWN_ISKM_Buffers *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48._32_8_ = (((pFVar3->BuffersPtr).Object)->AnimBlendingWeightsSRV).Reference;
  pFVar7 = FWN_ISKM_VertexFactoryParameters::GetStructMetadata();
  if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar8 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)local_48,
                     (EUniformBufferUsage)(pFVar7->Layout).Reference,ValidateResources);
  this_00 = (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)(TVar8.Reference)->_padding_;
  if (this_00 != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar7 = FWN_ISKM_VertexFactoryParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
      pFVar7 = FWN_ISKM_VertexFactoryParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pTVar1 = &this->UniformBuffer;
  if (pTVar1 == (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> *)local_58) {
    if (this_00 != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  else {
    this_01 = *pTVar1;
    *pTVar1 = this_00;
    if (this_01 != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  return;
}

// GenerateBatches @ 14a848a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshGenerator::GenerateBatches
          (FWN_ISKM_MeshGenerator *this,bool param_1,FSceneView *param_2,int param_3)

{
  int iVar1;
  UMaterial *pUVar2;
  FWN_ISKM_Proxy *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FNameEntryId FVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ISKM_GenerateBatches> FVar14;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FColoredMaterialRenderProxy *pFVar15;
  FName FVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  FNameEntryId local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  FName local_78;
  FName local_70;
  FLinearColor_u_0 local_60 [2];
  
  pFVar15 = (FColoredMaterialRenderProxy *)0x0;
  FVar14 = StatPtr_STAT_ISKM_GenerateBatches;
  if (StatPtr_STAT_ISKM_GenerateBatches ==
      (FThreadSafeStaticStat<FStat_STAT_ISKM_GenerateBatches>)0x0) {
    pFVar13 = ::FName::FName(&local_78,"STAT_ISKM_GenerateBatches");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ISKM_GenerateBatches>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ISKM_GenerateBatches,*pFVar13,
                        L"GenerateBatches","STATGROUP_ISKM","STATCAT_Advanced",L"ISKM",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar10 = FVar16.ComparisonIndex.Value;
  uVar17 = FVar16.Number;
  if ((FVar10.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar10.Value;
        local_res8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Renderer.cpp"
                   ,0x36);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Value = FVar10.Value;
      uStackX_1c = uVar17;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_14a848baf;
    }
  }
  bVar7 = false;
  FVar16 = local_70;
LAB_14a848baf:
  this->bForShadow = param_1;
  this->View = param_2;
  this->ViewIndex = param_3;
  CreateUniformBuffer(this);
  bVar9 = AllowDebugViewmodes();
  if ((bVar9) && ((this->ViewFamily->EngineShowFlags).Wireframe != 0)) {
    this_00 = ::operator_new(0xe0);
    if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
      FVar10 = FNameEntryId::FromValidEName((EName)local_res20);
      uStackX_1c = 0;
      local_res18.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
      local_60[0]._0_8_ = ___xmm_3f8000003f8000003f00000000000000;
      local_60[0]._8_8_ = _UNK_152242e48;
      pUVar2 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
      if (pUVar2 != (UMaterial *)0x0) {
        pFVar15 = (FColoredMaterialRenderProxy *)(**(code **)(pUVar2->_padding_ + 0x310))();
      }
      FVar5.Number = uStackX_1c;
      FVar5.ComparisonIndex.Value = local_res18.Value;
      pFVar15 = FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                          (this_00,(FMaterialRenderProxy *)pFVar15,(FLinearColor *)&local_60[0]._s_0
                           ,FVar5);
    }
    this->WireframeMaterialProxy = pFVar15;
    FMeshElementCollector::RegisterOneFrameMaterialProxy
              (this->Collector,(FMaterialRenderProxy *)pFVar15);
  }
  iVar11 = (**(code **)(this->Proxy->SkeletalMesh->_padding_ + 0x3d0))();
  uVar17 = 0;
  if (0 < iVar11) {
    lVar19 = 0;
    do {
      pFVar3 = this->Proxy;
      iVar1 = (pFVar3->LodInfos).ArrayNum;
      if (this->bForShadow == false) {
        uVar12 = 0;
        if ((int)uVar17 < iVar1) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = (pFVar3->LodInfos).AllocatorInstance.Data;
      }
      else {
        uVar12 = 0;
        if ((int)uVar17 < iVar1) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar18 = (pFVar3->LodInfos).AllocatorInstance.Data + 0x10;
      }
      if (((TArray<FWN_ISKM_LodInstanceRun,TSizedDefaultAllocator<32>_> *)(pFVar18 + lVar19))->
          ArrayNum != 0) {
        GenerateLODBatches(this,uVar17,
                           (TArray<FWN_ISKM_LodInstanceRun,TSizedDefaultAllocator<32>_> *)
                           (pFVar18 + lVar19));
      }
      uVar17 = uVar17 + 1;
      lVar19 = lVar19 + 0x20;
    } while ((int)uVar17 < iVar11);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// GenerateLODBatches @ 14a848da0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshGenerator::GenerateLODBatches
          (FWN_ISKM_MeshGenerator *this,int param_1,
          TArray<FWN_ISKM_LodInstanceRun,TSizedDefaultAllocator<32>_> *param_2)

{
  FWN_ISKM_OneFrameBatchElement *pFVar1;
  ForElementType<unsigned_int> *pFVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  ushort uVar5;
  int iVar6;
  FSkeletalMeshRenderData *pFVar7;
  FWN_ISKM_Proxy *pFVar8;
  longlong lVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar10;
  FWN_ISKM_Proxy *pFVar11;
  FWN_ISKM_MeshRenderData *pFVar12;
  TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> this_00;
  TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> this_01;
  FColoredMaterialRenderProxy *pFVar13;
  FSkelMeshRenderSection *pFVar14;
  ForElementType<FMaterialRenderProxy_*> FVar15;
  FMeshElementCollector *this_02;
  longlong lVar16;
  code *pcVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  ESceneDepthPriorityGroup EVar21;
  uint uVar22;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar23;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  ForElementType<FMeshBatchElement> FVar26;
  FColoredMaterialRenderProxy *pFVar27;
  byte bVar28;
  ForElementType<FMaterialRenderProxy_*> FVar29;
  ForElementType<FMeshBatchElement> FVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  longlong lVar34;
  longlong local_48;
  
  lVar33 = (longlong)param_1;
  pFVar7 = this->Proxy->SkeletalMeshRenderData;
  iVar19 = (pFVar7->LODRenderData).Array.ArrayNum;
  if (iVar19 != 0) {
    iVar6 = param_2->ArrayNum;
    uVar31 = 0;
    if (param_1 < iVar19) {
      uVar31 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar8 = this->Proxy;
    lVar9 = *(longlong *)((pFVar7->LODRenderData).Array.AllocatorInstance.Data + lVar33 * 8);
    paVar10 = &this->Collector->OneFrameResources->Next;
    aVar23 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x38,8);
    *(undefined8 *)((longlong)aVar23 + 8) = 0;
    pFVar1 = (FWN_ISKM_OneFrameBatchElement *)((longlong)aVar23 + 0x10);
    *(undefined ***)aVar23 =
         &
         ___7__TObject_UFWN_ISKM_OneFrameBatchElement_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
    ;
    TVar24.Next = *paVar10;
    do {
      *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
        *)((longlong)aVar23 + 8) = TVar24.Next;
      LOCK();
      aVar25 = *paVar10;
      bVar18 = TVar24.Next == aVar25;
      if (bVar18) {
        *paVar10 = aVar23;
        aVar25 = TVar24.Next;
      }
      UNLOCK();
      TVar24.Next = aVar25;
    } while (!bVar18);
    *(undefined8 *)((longlong)aVar23 + 0x18) = 0;
    pFVar2 = (ForElementType<unsigned_int> *)((longlong)aVar23 + 0x28);
    pFVar2->Data = (uint *)0x0;
    *(undefined4 *)((longlong)aVar23 + 0x30) = 0;
    *(undefined8 *)((longlong)aVar23 + 0x20) = 0;
    piVar3 = (int *)((longlong)aVar23 + 0x34);
    *piVar3 = 0;
    pFVar1->_padding_ = (longlong)&___7FWN_ISKM_OneFrameBatchElement__6B_;
    pFVar11 = this->Proxy;
    if (((pFVar11->MeshRenderDataPtr).Object == (FWN_ISKM_MeshRenderData *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar12 = (pFVar11->MeshRenderDataPtr).Object;
    uVar31 = 0;
    if (param_1 < (pFVar12->LODDatas).ArrayNum) {
      uVar31 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    *(uchar **)((longlong)aVar23 + 0x18) =
         (pFVar12->LODDatas).AllocatorInstance.InlineData[lVar33].Pad + 0x30;
    this_00 = this->UniformBuffer;
    this_01 = *(TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> *)((longlong)aVar23 + 0x20);
    if (this_01 != this_00) {
      *(TUniformBufferRef<FWN_ISKM_VertexFactoryParameters> *)((longlong)aVar23 + 0x20) = this_00;
      if (this_00 != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (this_01 != (TUniformBufferRef<FWN_ISKM_VertexFactoryParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    uVar31 = iVar6 * 2;
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if (*piVar3 < (int)uVar31) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                (4,4,uVar31,pFVar2,*(int *)((longlong)aVar23 + 0x30),piVar3);
    }
    uVar31 = 0;
    if (0 < iVar6) {
      lVar34 = 0;
      do {
        uVar22 = 0;
        if ((int)uVar31 < param_2->ArrayNum) {
          uVar22 = ~uVar31 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data + lVar34 * 8;
        if ((((FScriptContainerElement *)pFVar2->Data <= pFVar4) &&
            (pFVar4 < (FScriptContainerElement *)pFVar2->Data + (longlong)*piVar3 * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        iVar19 = *(int *)((longlong)aVar23 + 0x30);
        if (iVar19 == *piVar3) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                             (0x404,pFVar2,piVar3);
        }
        *(int *)((longlong)aVar23 + 0x30) = iVar19 + 1;
        pFVar32 = pFVar4 + 4;
        pFVar2->Data[iVar19] = *(uint *)pFVar4;
        if ((((FScriptContainerElement *)pFVar2->Data <= pFVar32) &&
            (pFVar32 < (FScriptContainerElement *)pFVar2->Data + (longlong)*piVar3 * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        iVar19 = *(int *)((longlong)aVar23 + 0x30);
        if (iVar19 == *piVar3) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<unsigned_int>_>
                             (0x404,pFVar2,piVar3);
        }
        *(int *)((longlong)aVar23 + 0x30) = iVar19 + 1;
        uVar31 = uVar31 + 1;
        lVar34 = lVar34 + 1;
        pFVar2->Data[iVar19] = *(uint *)pFVar32;
      } while (lVar34 < iVar6);
    }
    iVar19 = *(int *)(lVar9 + 0x18);
    local_48 = (longlong)iVar19;
    bVar28 = pFVar8->LODDatas[lVar33].bAllMaterialsSame;
    if (this->bForShadow != false) {
      if (bVar28 != 0) {
        bVar28 = (~pFVar8->LODDatas[lVar33].bAnySectionCastShadow ^
                 pFVar8->LODDatas[lVar33].bAllSectionsCastShadow) & 1;
      }
      if (pFVar8->LODDatas[lVar33].bAnySectionCastShadow == 0) {
        return;
      }
    }
    pFVar13 = this->WireframeMaterialProxy;
    if (bVar28 == 0) {
      uVar31 = 0;
      if (0 < iVar19) {
        lVar33 = 0;
        do {
          uVar22 = 0;
          if ((int)uVar31 < *(int *)(lVar9 + 0x18)) {
            uVar22 = ~uVar31 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          lVar34 = *(longlong *)(lVar9 + 0x10);
          if (pFVar13 == (FColoredMaterialRenderProxy *)0x0) {
            pFVar8 = this->Proxy;
            uVar5 = *(ushort *)(lVar33 + lVar34);
            if (((pFVar8->MaterialProxies).ArrayNum <= (int)(uint)uVar5) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            FVar15 = (pFVar8->MaterialProxies).AllocatorInstance.SecondaryData;
            FVar29 = (ForElementType<FMaterialRenderProxy_*>)&pFVar8->MaterialProxies;
            if (FVar15 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
              FVar29 = FVar15;
            }
            pFVar27 = *(FColoredMaterialRenderProxy **)((longlong)FVar29 + (ulonglong)uVar5 * 8);
          }
          else {
            pFVar27 = this->WireframeMaterialProxy;
          }
          if ((this->bForShadow == false) || (*(char *)(lVar33 + 0xd + lVar34) != '\0')) {
            this_02 = this->Collector;
            iVar19 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                     ::Add(&this_02->MeshBatchStorage,1);
            uVar22 = iVar19 / 0x49;
            uVar20 = 0;
            if ((int)uVar22 < (this_02->MeshBatchStorage).Chunks.Array.ArrayNum) {
              uVar20 = ~uVar22 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            FVar26 = (ForElementType<FMeshBatchElement>)
                     ((ulonglong)(uint)(iVar19 % 0x49) * 0xe0 +
                     (longlong)
                     (this_02->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar22]);
            *(uint *)((longlong)FVar26 + 0xd4) = *(uint *)((longlong)FVar26 + 0xd4) & 0xfffffc7e;
            *(uint *)((longlong)FVar26 + 0xd4) =
                 -(uint)((this->Proxy->_padding_ & 0xc000000) != 0) & 0x10 |
                 *(uint *)((longlong)FVar26 + 0xd4) & 0xffffffef;
            EVar21 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)this->Proxy,this->View);
            uVar22 = ((EVar21 & 7) << 10 ^ *(uint *)((longlong)FVar26 + 0xd4) & 0xffffe3ff) &
                     0xfffeffff | 0x2000;
            *(uint *)((longlong)FVar26 + 0xd4) = uVar22;
            uVar22 = ((uint)*(byte *)(lVar33 + 0xd + lVar34) << 2 ^ uVar22) & 4 ^ uVar22;
            *(uint *)((longlong)FVar26 + 0xd4) = uVar22;
            bVar28 = *(byte *)((longlong)&this->Proxy->_padding_ + 5);
            *(FColoredMaterialRenderProxy **)((longlong)FVar26 + 0xb0) = pFVar27;
            uVar22 = ((uint)bVar28 * 2 ^ uVar22) & 0x20 ^ uVar22;
            *(schar *)((longlong)FVar26 + 0xd2) = (schar)param_1;
            *(schar *)((longlong)FVar26 + 0xd9) = (schar)param_1;
            *(uint *)((longlong)FVar26 + 0xcc) = uVar31;
            *(uint *)((longlong)FVar26 + 0xd4) = uVar22 & 0xffff7fff | 8;
            *(FVertexFactory **)((longlong)FVar26 + 0xa8) =
                 *(FVertexFactory **)((longlong)aVar23 + 0x18);
            *(uint *)((longlong)FVar26 + 0xd4) =
                 -(uint)(pFVar13 != (FColoredMaterialRenderProxy *)0x0) & 0x40 |
                 uVar22 & 0xffff7fbf | 8;
            if ((*(int *)((longlong)FVar26 + 0xa0) < 1) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            FVar30 = FVar26;
            if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98) !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar30 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98);
            }
            pFVar7 = this->Proxy->SkeletalMeshRenderData;
            uVar22 = 0;
            if (param_1 < (pFVar7->LODRenderData).Array.ArrayNum) {
              uVar22 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            lVar16 = *(longlong *)
                      ((pFVar7->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8)
            ;
            *(FWN_ISKM_OneFrameBatchElement **)((longlong)FVar30 + 0x38) = pFVar1;
            *(undefined4 *)((longlong)FVar30 + 0x70) = 0;
            if ((*(longlong *)(lVar16 + 0x28) == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IndexBuffer != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                                    ,0x56,L""), bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            *(longlong *)((longlong)FVar30 + 0x18) = *(longlong *)(lVar16 + 0x28);
            *(longlong *)FVar30 = this->Proxy->_padding_;
            *(uint *)((longlong)FVar30 + 0x7c) =
                 (*(uint *)((longlong)FVar30 + 0x7c) & 0xffffff00 | 0x3800) ^ param_1 & 0xfU | 0x400
            ;
            *(int *)((longlong)FVar30 + 0x60) = *(int *)((longlong)aVar23 + 0x30) / 2;
            if ((*(int *)((longlong)aVar23 + 0x30) < 1) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            *(longlong *)((longlong)FVar30 + 0x30) = *(longlong *)((longlong)aVar23 + 0x28);
            *(undefined4 *)((longlong)FVar30 + 0x74) = 0;
            *(undefined4 *)((longlong)FVar30 + 0x78) = 0x3f800000;
            *(uint *)((longlong)FVar30 + 0x7c) =
                 (param_1 << 0xe ^ *(uint *)((longlong)FVar30 + 0x7c)) & 0xffc03fff ^ param_1 << 0xe
            ;
            *(undefined4 *)((longlong)FVar30 + 0x58) = *(undefined4 *)(lVar33 + 4 + lVar34);
            *(undefined4 *)((longlong)FVar30 + 0x5c) = *(undefined4 *)(lVar33 + 8 + lVar34);
            *(undefined4 *)((longlong)FVar30 + 0x68) = *(undefined4 *)(lVar33 + 0x10 + lVar34);
            *(int *)((longlong)FVar30 + 0x6c) = *(int *)(lVar9 + 300) + -1;
            FMeshElementCollector::AddMesh(this->Collector,this->ViewIndex,(FMeshBatch *)FVar26);
          }
          uVar31 = uVar31 + 1;
          lVar33 = lVar33 + 0x118;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
      }
    }
    else {
      if ((iVar19 < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar14 = *(FSkelMeshRenderSection **)(lVar9 + 0x10);
      if (pFVar13 == (FColoredMaterialRenderProxy *)0x0) {
        pFVar11 = this->Proxy;
        uVar5 = pFVar14->MaterialIndex;
        if (((pFVar11->MaterialProxies).ArrayNum <= (int)(uint)uVar5) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        FVar15 = (pFVar11->MaterialProxies).AllocatorInstance.SecondaryData;
        FVar29 = (ForElementType<FMaterialRenderProxy_*>)&pFVar11->MaterialProxies;
        if (FVar15 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar29 = FVar15;
        }
        pFVar27 = *(FColoredMaterialRenderProxy **)((longlong)FVar29 + (ulonglong)uVar5 * 8);
      }
      else {
        pFVar27 = this->WireframeMaterialProxy;
      }
      FVar26 = (ForElementType<FMeshBatchElement>)
               AllocateMeshBatch(this,param_1,0,pFVar14,(FMaterialRenderProxy *)pFVar27,pFVar1);
      *(uint *)((longlong)FVar26 + 0xd4) = *(uint *)((longlong)FVar26 + 0xd4) & 0xffffffbf;
      *(uint *)((longlong)FVar26 + 0xd4) =
           *(uint *)((longlong)FVar26 + 0xd4) |
           -(uint)(pFVar13 != (FColoredMaterialRenderProxy *)0x0) & 0x40;
      if ((*(int *)((longlong)FVar26 + 0xa0) < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      FVar30 = FVar26;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar30 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar26 + 0x98);
      }
      UpdateBatchElementCommonSettings(this,param_1,pFVar1,(FMeshBatchElement *)FVar30);
      *(undefined4 *)((longlong)FVar30 + 0x58) = 0;
      *(int *)((longlong)FVar30 + 0x5c) = pFVar8->LODDatas[lVar33].NumSectionsTriangles;
      *(undefined4 *)((longlong)FVar30 + 0x68) = 0;
      *(int *)((longlong)FVar30 + 0x6c) = *(int *)(lVar9 + 300) + -1;
      FMeshElementCollector::AddMesh(this->Collector,this->ViewIndex,(FMeshBatch *)FVar26);
    }
  }
  return;
}

// UpdateBatchElementCommonSettings @ 14a8575c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FWN_ISKM_MeshGenerator::UpdateBatchElementCommonSettings
          (FWN_ISKM_MeshGenerator *this,int param_1,FWN_ISKM_OneFrameBatchElement *param_2,
          FMeshBatchElement *param_3)

{
  FSkeletalMeshRenderData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  pFVar1 = this->Proxy->SkeletalMeshRenderData;
  uVar5 = 0;
  if (param_1 < (pFVar1->LODRenderData).Array.ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)
           ((pFVar1->LODRenderData).Array.AllocatorInstance.Data + (longlong)param_1 * 8);
  param_3->UserData = param_2;
  param_3->UserIndex = 0;
  if (*(longlong *)(lVar2 + 0x28) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IndexBuffer != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\MultiSizeIndexContainer.h"
                       ,0x56,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_3->IndexBuffer = *(FIndexBuffer **)(lVar2 + 0x28);
  param_3->PrimitiveUniformBuffer = (FRHIUniformBuffer *)this->Proxy->_padding_;
  *(uint *)&param_3->field_0x7c =
       (*(uint *)&param_3->field_0x7c & 0xffffff00 | 0x3800) ^ param_1 & 0xfU | 0x400;
  param_3->NumInstances = (param_2->SingleLODRuns).ArrayNum / 2;
  if ((param_2->SingleLODRuns).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_3->field5_0x30 = (FMeshBatchElement_u_48)(param_2->SingleLODRuns).AllocatorInstance.Data;
  param_3->MinScreenSize = 0.0;
  param_3->MaxScreenSize = 1.0;
  *(uint *)&param_3->field_0x7c =
       (param_1 << 0xe ^ *(uint *)&param_3->field_0x7c) & 0xffc03fff ^ param_1 << 0xe;
  return;
}

