// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 13

// ~FParallelMeshDrawCommandPass @ 144ef0dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::~FParallelMeshDrawCommandPass(FParallelMeshDrawCommandPass *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FBaseGraphTask *pFVar4;
  FVisibleMeshDrawCommand *pFVar5;
  FStaticMeshBatch **ppFVar6;
  EMeshDrawCommandCullingPayloadFlags *pEVar7;
  code *pcVar8;
  bool bVar9;
  
  if ((this->TaskEventRef).Reference != (FBaseGraphTask *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEventRef == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                       ,0x60e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar3 = (this->PassNameForStats).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->TaskEventRef).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)();
    }
  }
  FInstanceCullingContext::~FInstanceCullingContext(&(this->TaskContext).InstanceCullingContext);
  pFVar5 = (this->TaskContext).TempVisibleMeshDrawCommands.AllocatorInstance.Data;
  if (pFVar5 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&(this->TaskContext).MinimalPipelineStatePassSet);
  TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&(this->TaskContext).MeshDrawCommandStorage,0);
  pFVar3 = (this->TaskContext).MeshDrawCommandStorage.MeshDrawCommands.Chunks.Array.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  ppFVar6 = (this->TaskContext).MobileBasePassCSMDynamicMeshCommandBuildRequests.AllocatorInstance.
            Data;
  if (ppFVar6 != (FStaticMeshBatch **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar6);
  }
  pEVar7 = (this->TaskContext).DynamicMeshCommandBuildFlags.AllocatorInstance.Data;
  if (pEVar7 != (EMeshDrawCommandCullingPayloadFlags *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pEVar7);
  }
  ppFVar6 = (this->TaskContext).DynamicMeshCommandBuildRequests.AllocatorInstance.Data;
  if (ppFVar6 != (FStaticMeshBatch **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar6);
  }
  pFVar5 = (this->TaskContext).MobileBasePassCSMMeshDrawCommands.AllocatorInstance.Data;
  if (pFVar5 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  pFVar5 = (this->TaskContext).MeshDrawCommands.AllocatorInstance.Data;
  if (pFVar5 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar5);
  }
  return;
}

// operator() @ 144ef51a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>::operator()
          (void *this,FInstanceCullingContext *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  FParallelMeshDrawCommandPass::WaitForSetupTask(*(FParallelMeshDrawCommandPass **)this);
  lVar2 = *(longlong *)this;
  iVar5 = *(int *)(lVar2 + 0x60);
  lVar6 = *(longlong *)(lVar2 + 0x58);
  lVar1 = lVar6 + (longlong)iVar5 * 0x48;
  while( true ) {
    if (*(int *)(lVar2 + 0x60) != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVisibleMeshDrawCommand,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar6 == lVar1) break;
    if (*(int *)(lVar6 + 0x18) < 0) {
      FGPUScenePrimitiveCollector::CheckPrimitiveProcessed
                ((FGPUScenePrimitiveCollector *)(**(longlong **)this + 0x2900),
                 *(uint *)(lVar6 + 0x10) & 0x7fffffff,
                 (FGPUScene *)(*(longlong *)((longlong)this + 8) + 0x3500));
    }
    lVar6 = lVar6 + 0x48;
  }
  iVar5 = 0;
  lVar1 = **(longlong **)this;
  lVar2 = *(longlong *)(lVar1 + 0x2918);
  if (lVar2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar2 + 0x364);
  }
  if ((*(char *)(lVar1 + 0x2920) == '\0') && (lVar2 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCommitted || UploadData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x2918) != 0) {
    iVar5 = *(int *)(*(longlong *)(lVar1 + 0x2918) + 0x360);
  }
  FInstanceCullingContext::SetDynamicPrimitiveInstanceOffsets(param_1,iVar5,iVar7);
  return;
}

// BuildRenderingCommands @ 144efa760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::BuildRenderingCommands
          (FParallelMeshDrawCommandPass *this,FRDGBuilder *param_1,FGPUScene *param_2,
          FInstanceCullingDrawParams *param_3)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined4 uStack_1c;
  
  if ((this->TaskContext).InstanceCullingContext.bIsEnabled == false) {
    *(undefined8 *)&param_3->DrawIndirectArgsBuffer = 0;
    *(ulonglong *)&(param_3->DrawIndirectArgsBuffer).field_0x8 = CONCAT44(uStack_1c,4);
    param_3->InstanceDataByteOffset = 0;
    param_3->IndirectArgsByteOffset = 0;
    *(undefined8 *)&param_3->InstanceIdOffsetBuffer = 0;
    *(ulonglong *)&(param_3->InstanceIdOffsetBuffer).field_0x8 = CONCAT44(uStack_1c,8);
  }
  else {
    if (this->bHasInstanceCullingDrawParameters != false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bHasInstanceCullingDrawParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                         ,0x664,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pTVar2 = CVarDeferredMeshPassSetupTaskSync.Ref;
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (pTVar2->ShadowedValue[1] == 0) {
      FInstanceCullingContext::WaitForSetupTask(&(this->TaskContext).InstanceCullingContext);
    }
    FInstanceCullingContext::BuildRenderingCommands
              (&(this->TaskContext).InstanceCullingContext,param_1,param_2,param_3);
    this->bHasInstanceCullingDrawParameters = true;
  }
  return;
}

// Cleanup @ 144efad10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FParallelMeshDrawCommandPass::Cleanup(FParallelMeshDrawCommandPass *this)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  FMeshPassProcessor *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  
  if ((this->TaskEventRef).Reference != (FBaseGraphTask *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TaskEventRef == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                       ,0x5f0,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((1 < (this->PassNameForStats).Data.ArrayNum) &&
      (0 < (this->TaskContext).VisibleMeshDrawCommandsNum)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      if (4 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        if (4 < (byte)LogRenderer._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        }
      }
    }
  }
  pFVar4 = (this->TaskContext).MeshPassProcessor;
  if (pFVar4 != (FMeshPassProcessor *)0x0) {
    (**(code **)pFVar4->_padding_)();
    (this->TaskContext).MeshPassProcessor = (FMeshPassProcessor *)0x0;
  }
  pFVar4 = (this->TaskContext).MobileBasePassCSMMeshPassProcessor;
  if (pFVar4 != (FMeshPassProcessor *)0x0) {
    (**(code **)pFVar4->_padding_)();
    (this->TaskContext).MobileBasePassCSMMeshPassProcessor = (FMeshPassProcessor *)0x0;
  }
  this->MaxNumDraws = 0;
  ::FString::Empty(&this->PassNameForStats);
  (this->TaskContext).DynamicMeshElements =
       (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
        *)0x0;
  (this->TaskContext).DynamicMeshElementsPassRelevance =
       (TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0;
  piVar1 = &(this->TaskContext).MeshDrawCommands.ArrayMax;
  (this->TaskContext).MeshDrawCommands.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,0,&(this->TaskContext).MeshDrawCommands.AllocatorInstance,0,piVar1);
  }
  TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&(this->TaskContext).MeshDrawCommandStorage,0);
  (this->TaskContext).MeshDrawCommandStorage.MeshDrawCommands.NumElements = 0;
  puVar10 = &(this->TaskContext).MinimalPipelineStatePassSet.field_0x6c;
  puVar2 = &(this->TaskContext).MinimalPipelineStatePassSet.field_0x54;
  uVar3 = *(uint *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x34;
  iVar9 = *(uint *)puVar10 * 4;
  if (*(uint *)puVar10 < 2) {
    iVar9 = 0;
  }
  iVar7 = *(uint *)puVar2 * 4;
  if (*(uint *)puVar2 < 2) {
    iVar7 = 0;
  }
  iVar8 = uVar3 * 8;
  if (uVar3 < 2) {
    iVar8 = 0;
  }
  LOCK();
  FGraphicsMinimalPipelineStateId::CurrentLocalPipelineIdTableSize =
       (atomic<int>)
       ((int)FGraphicsMinimalPipelineStateId::CurrentLocalPipelineIdTableSize +
       iVar9 + iVar7 + iVar8 +
       *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0xc * 0xa0);
  UNLOCK();
  iVar9 = *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x54;
  *(undefined4 *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x50 = 0;
  if (iVar9 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)
                     &(this->TaskContext).MinimalPipelineStatePassSet.field_0x40,0,(int *)puVar2);
  }
  iVar9 = *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x50;
  if (iVar9 == *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x54) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)
                             &(this->TaskContext).MinimalPipelineStatePassSet.field_0x40,
                       (int *)puVar2);
  }
  puVar2 = &(this->TaskContext).MinimalPipelineStatePassSet.field_0x58;
  *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x50 = iVar9 + 1;
  iVar9 = *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x6c;
  *(undefined4 *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x68 = 0;
  if (iVar9 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar2,0,(int *)puVar10);
  }
  iVar9 = *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x68;
  if (iVar9 == *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x6c) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar2,(int *)puVar10);
  }
  *(int *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x68 = iVar9 + 1;
  puVar10 = *(undefined1 **)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x60;
  if (puVar10 == (undefined1 *)0x0) {
    puVar10 = puVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar10 + (longlong)iVar9 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&(this->TaskContext).MinimalPipelineStatePassSet);
  *(undefined8 *)&(this->TaskContext).MinimalPipelineStatePassSet.field_0x70 = 0;
  piVar1 = &(this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayMax;
  (this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,0,&(this->TaskContext).MobileBasePassCSMMeshDrawCommands.AllocatorInstance,0,
               piVar1);
  }
  piVar1 = &(this->TaskContext).DynamicMeshCommandBuildRequests.ArrayMax;
  (this->TaskContext).DynamicMeshCommandBuildRequests.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
              (8,8,0,&(this->TaskContext).DynamicMeshCommandBuildRequests.AllocatorInstance,0,piVar1
              );
  }
  piVar1 = &(this->TaskContext).TempVisibleMeshDrawCommands.ArrayMax;
  (this->TaskContext).TempVisibleMeshDrawCommands.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,0,&(this->TaskContext).TempVisibleMeshDrawCommands.AllocatorInstance,0,piVar1)
    ;
  }
  return;
}

// Dispatch @ 144f01e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::Dispatch
          (FParallelMeshDrawCommandPass *this,FRDGDispatchPassBuilder *param_1,
          FInstanceCullingDrawParams *param_2,float param_3)

{
  FViewInfo *local_28;
  float local_20;
  code *local_18;
  undefined8 *local_10;
  
  local_28 = (this->TaskContext).View;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FParallelMeshDrawCommandPass::Dispatch'::__l2::<lambda_1>,void,FRHICommandList_&>
             ::Call;
  local_20 = param_3;
  Dispatch(this,param_1,param_2,(TFunctionRef<void___cdecl(FRHICommandList_&)> *)&local_18);
  return;
}

// Dispatch @ 144f01ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::Dispatch
          (FParallelMeshDrawCommandPass *this,FRDGDispatchPassBuilder *param_1,
          FInstanceCullingDrawParams *param_2,TFunctionRef<void___cdecl(FRHICommandList_&)> *param_3
          )

{
  atomic<unsigned_int> *paVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  Type TVar11;
  FMeshDrawCommandOverrideArgs *pFVar12;
  FTaskGraphInterface *pFVar13;
  FRHICommandList *pFVar14;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  char cVar16;
  bool bVar17;
  undefined1 auStackY_158 [32];
  EExtendedTaskPriority local_107;
  ETaskPriority local_106 [6];
  FRHIBuffer *local_100;
  FRHIBuffer *pFStack_f8;
  FRHIUniformBuffer *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  TFunctionRef<void___cdecl(FRHICommandList_&)> *local_c8;
  FRDGDispatchPassBuilder *local_c0;
  FMeshDrawCommandOverrideArgs local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar17 = -1 < CpuChannel->Enabled;
  local_c8 = param_3;
  local_c0 = param_1;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1769,"ParallelMdcDispatchDraw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x6e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1769);
  }
  if (0 < this->MaxNumDraws) {
    if (((this->TaskContext).View == (FViewInfo *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TaskContext.View",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                           ,0x6ef,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    cVar16 = '\0';
    local_d0 = 0;
    local_f0 = (FRHIUniformBuffer *)0x0;
    local_e8 = 0;
    local_100 = (FRHIBuffer *)0x0;
    pFStack_f8 = (FRHIBuffer *)0x0;
    if (param_2 != (FInstanceCullingDrawParams *)0x0) {
      pFVar12 = GetMeshDrawCommandOverrideArgs(&local_b8,param_2);
      local_100 = pFVar12->InstanceBuffer;
      pFStack_f8 = pFVar12->IndirectArgsBuffer;
      local_f0 = pFVar12->InstanceCullingStaticUB;
      local_e8._0_4_ = pFVar12->InstanceDataByteOffset;
      local_e8._4_4_ = pFVar12->IndirectArgsByteOffset;
      if ((&pFVar12->RootConstants != (TOptional<UE::Math::TIntVector4<unsigned_int>_> *)&local_e0)
         && ((pFVar12->RootConstants).bIsSet != false)) {
        local_e0 = *(undefined8 *)&(pFVar12->RootConstants).TypedValue.field0_0x0;
        uStack_d8 = *(undefined8 *)((longlong)&(pFVar12->RootConstants).TypedValue.field0_0x0 + 8);
        cVar16 = '\x01';
        local_d0 = 1;
      }
    }
    local_80.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    pTVar2 = &this->TaskEventRef;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 4;
    if (pTVar2->Reference != (FBaseGraphTask *)0x0) {
      iVar9 = 0;
      if ((&local_80 <= pTVar2) && (iVar9 = 0, pTVar2 < &local_80.AllocatorInstance.SecondaryData))
      {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = local_80.ArrayNum;
        if (local_80.ArrayNum == local_80.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                            (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
        }
      }
      local_80.ArrayNum = iVar9 + 1;
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar15 = local_80.AllocatorInstance.SecondaryData;
      }
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar15 + (longlong)iVar9 * 8))->Reference =
           (FBaseGraphTask *)0x0;
      pFVar5 = pTVar2->Reference;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar15 + (longlong)iVar9 * 8))->Reference = pFVar5
      ;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
        UNLOCK();
      }
    }
    pTVar7 = CVarRHICmdWidth.Ref;
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar9 = pTVar7->ShadowedValue[1];
    pFVar13 = FTaskGraphInterface::Get();
    iVar10 = (**(code **)((longlong)*pFVar13 + 0x20))(pFVar13);
    pTVar7 = CVarRHICmdMinDrawsPerParallelCmdList.Ref;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->MaxNumDraws + -1 + pTVar7->ShadowedValue[1]) / pTVar7->ShadowedValue[1];
    if (iVar9 < iVar10) {
      iVar10 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar10) {
      do {
        pFVar14 = FRDGDispatchPassBuilder::CreateCommandList(param_1);
        (**(code **)local_c8)(*(undefined8 *)&local_c8->field_0x8,pFVar14);
        this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x140,8);
        if (this_00 == (FTaskBase *)0x0) {
          this_00 = (FTaskBase *)0x0;
        }
        else {
          FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_80);
          this_00->_padding_ =
               (longlong)&___7__TGraphTask_VFDrawVisibleMeshCommandsAnyThreadTask____6B_;
        }
        iVar4 = (this->TaskContext).InstanceFactor;
        this_00[1]._padding_ = (longlong)&(this->TaskContext).MeshDrawCommands;
        this_00[1]._padding_ = (longlong)&(this->TaskContext).MinimalPipelineStatePassSet;
        this_00[1]._padding_ = (longlong)local_100;
        this_00[1]._padding_ = (longlong)pFStack_f8;
        *(FRHIUniformBuffer **)&this_00[1].RefCount = local_f0;
        *(undefined4 *)&this_00[1].Pipe = (undefined4)local_e8;
        *(undefined4 *)((longlong)&this_00[1].Pipe + 4) = local_e8._4_4_;
        this_00[1]._padding_ = (longlong)pFVar14;
        this_00[1]._padding_ = (longlong)&(this->TaskContext).InstanceCullingContext;
        *(char *)&this_00[1].TraceId = cVar16;
        if (cVar16 != '\0') {
          this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)(undefined4)local_e0;
          this_00[1].ExtendedPriority = local_e0._4_1_;
          this_00[1].TaskTriggered = (atomic<bool>)local_e0._5_1_;
          this_00[1]._padding_ = local_e0._6_2_;
          this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)uStack_d8;
          this_00[1]._padding_ = uStack_d8._4_4_;
        }
        *(int *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = iVar4;
        *(int *)(this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData + 4) = iVar9;
        *(int *)&this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData = iVar10;
        TVar11 = FRenderTask::GetDesiredThread();
        UE::Tasks::Private::TranslatePriority(TVar11,local_106,&local_107);
        UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_106[0],local_107,None);
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
        iVar9 = iVar9 + 1;
        param_1 = local_c0;
      } while (iVar9 < iVar10);
    }
    FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
    if (local_80.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar15 = local_80.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar15,local_80.ArrayNum);
    if (local_80.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DispatchDraw @ 144f02370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::DispatchDraw
          (FParallelMeshDrawCommandPass *this,FParallelCommandListSet *param_1,
          FRHICommandList *param_2,FInstanceCullingDrawParams *param_3)

{
  atomic<unsigned_int> *paVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  atomic<unsigned_int> aVar3;
  FBaseGraphTask *pFVar4;
  code *pcVar5;
  FRHIUniformBuffer *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  Type TVar10;
  FMeshDrawCommandOverrideArgs *pFVar11;
  FTaskGraphInterface *pFVar12;
  FRHICommandList *pFVar13;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  char cVar15;
  bool bVar16;
  undefined1 auStackY_158 [32];
  EExtendedTaskPriority local_107;
  ETaskPriority local_106 [2];
  int local_104;
  FRHIBuffer *local_100;
  FRHIBuffer *local_f8;
  FRHIBuffer *local_f0;
  FRHIBuffer *pFStack_e8;
  FRHIUniformBuffer *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  FMeshDrawCommandOverrideArgs local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_80;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1661,"ParallelMdcDispatchDraw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x67d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1661);
  }
  if (0 < this->MaxNumDraws) {
    if (param_1 == (FParallelCommandListSet *)0x0) {
      Draw(this,param_2,param_3);
    }
    else {
      cVar15 = '\0';
      local_c0 = 0;
      local_e0 = (FRHIUniformBuffer *)0x0;
      local_d8 = 0;
      local_f0 = (FRHIBuffer *)0x0;
      pFStack_e8 = (FRHIBuffer *)0x0;
      if (param_3 != (FInstanceCullingDrawParams *)0x0) {
        pFVar11 = GetMeshDrawCommandOverrideArgs(&local_b8,param_3);
        local_e0 = pFVar11->InstanceCullingStaticUB;
        local_f0 = pFVar11->InstanceBuffer;
        pFStack_e8 = pFVar11->IndirectArgsBuffer;
        local_d8._0_4_ = pFVar11->InstanceDataByteOffset;
        local_d8._4_4_ = pFVar11->IndirectArgsByteOffset;
        if ((&pFVar11->RootConstants != (TOptional<UE::Math::TIntVector4<unsigned_int>_> *)&local_d0
            ) && ((pFVar11->RootConstants).bIsSet != false)) {
          local_d0 = *(undefined8 *)&(pFVar11->RootConstants).TypedValue.field0_0x0;
          uStack_c8 = *(undefined8 *)((longlong)&(pFVar11->RootConstants).TypedValue.field0_0x0 + 8)
          ;
          cVar15 = '\x01';
          local_c0 = 1;
        }
      }
      pTVar2 = &this->TaskEventRef;
      local_80.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 4;
      local_100 = local_f0;
      local_f8 = pFStack_e8;
      if (pTVar2->Reference != (FBaseGraphTask *)0x0) {
        iVar8 = 0;
        if ((&local_80 <= pTVar2) && (iVar8 = 0, pTVar2 < &local_80.AllocatorInstance.SecondaryData)
           ) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = local_80.ArrayNum;
          if (local_80.ArrayNum == local_80.ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                              (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
          }
        }
        local_80.ArrayNum = iVar8 + 1;
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
        if (local_80.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_80.AllocatorInstance.SecondaryData;
        }
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar14 + (longlong)iVar8 * 8))->Reference =
             (FBaseGraphTask *)0x0;
        pFVar4 = pTVar2->Reference;
        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar14 + (longlong)iVar8 * 8))->Reference =
             pFVar4;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
          UNLOCK();
        }
      }
      iVar8 = param_1->Width;
      pFVar12 = FTaskGraphInterface::Get();
      iVar9 = (**(code **)((longlong)*pFVar12 + 0x20))(pFVar12);
      pFVar6 = local_e0;
      if (iVar9 < iVar8) {
        iVar8 = iVar9;
      }
      local_104 = (this->MaxNumDraws + -1 + param_1->MinDrawsPerCommandList) /
                  param_1->MinDrawsPerCommandList;
      if (iVar8 < local_104) {
        local_104 = iVar8;
      }
      iVar8 = 0;
      if (0 < local_104) {
        do {
          pFVar13 = FParallelCommandListSet::NewParallelCommandList(param_1);
          this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x140,8);
          if (this_00 == (FTaskBase *)0x0) {
            this_00 = (FTaskBase *)0x0;
          }
          else {
            FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_80);
            this_00->_padding_ =
                 (longlong)&___7__TGraphTask_VFDrawVisibleMeshCommandsAnyThreadTask____6B_;
          }
          iVar9 = (this->TaskContext).InstanceFactor;
          this_00[1]._padding_ = (longlong)&(this->TaskContext).InstanceCullingContext;
          this_00[1]._padding_ = (longlong)&(this->TaskContext).MeshDrawCommands;
          this_00[1]._padding_ = (longlong)&(this->TaskContext).MinimalPipelineStatePassSet;
          this_00[1]._padding_ = (longlong)local_100;
          this_00[1]._padding_ = (longlong)local_f8;
          *(undefined4 *)&this_00[1].Pipe = (undefined4)local_d8;
          *(undefined4 *)((longlong)&this_00[1].Pipe + 4) = local_d8._4_4_;
          this_00[1]._padding_ = (longlong)pFVar13;
          *(FRHIUniformBuffer **)&this_00[1].RefCount = pFVar6;
          *(char *)&this_00[1].TraceId = cVar15;
          if (cVar15 != '\0') {
            this_00[1].StateChangeEvent = (TEventCount<unsigned_int>)(undefined4)local_d0;
            this_00[1].ExtendedPriority = local_d0._4_1_;
            this_00[1].TaskTriggered = (atomic<bool>)local_d0._5_1_;
            this_00[1]._padding_ = local_d0._6_2_;
            this_00[1].ExecutingThreadId = (atomic<unsigned_int>)(undefined4)uStack_c8;
            this_00[1]._padding_ = uStack_c8._4_4_;
          }
          *(int *)&this_00[1].Prerequisites.Prerequisites.AllocatorInstance.SecondaryData =
               local_104;
          *(int *)this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData = iVar9;
          *(int *)(this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData + 4) = iVar8;
          TVar10 = FRenderTask::GetDesiredThread();
          UE::Tasks::Private::TranslatePriority(TVar10,local_106,&local_107);
          UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_106[0],local_107,None);
          LOCK();
          this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
          LOCK();
          paVar1 = &this_00->RefCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
          FParallelCommandListSet::AddParallelCommandList(param_1,pFVar13);
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_104);
      }
      FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_80;
      if (local_80.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar14 = local_80.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_80.ArrayNum);
      if (local_80.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_80.AllocatorInstance.SecondaryData);
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DispatchPassSetup @ 144f027d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::DispatchPassSetup
          (FParallelMeshDrawCommandPass *this,FScene *param_1,FViewInfo *param_2,
          FInstanceCullingContext *param_3,Type param_4,Type param_5,FMeshPassProcessor *param_6,
          TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_7,TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *param_8,int param_9,
          TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_10,
          TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_11,int param_12,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_13,FMeshPassProcessor *param_14,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_15)

{
  longlong *plVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  atomic<unsigned_int> aVar5;
  Type TVar6;
  Type TVar7;
  EShadingPath EVar8;
  FTaskBase *pFVar9;
  EMeshDrawCommandCullingPayloadFlags *pEVar10;
  code *pcVar11;
  double dVar12;
  FVisibleMeshDrawCommand *pFVar13;
  FStaticMeshBatch **ppFVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TConsoleVariableData<int> *pTVar20;
  FScene *pFVar21;
  bool bVar22;
  EShaderPlatform EVar23;
  int iVar24;
  FNameEntryId FVar25;
  TRefCountPtr<FBaseGraphTask> TVar26;
  longlong lVar27;
  FTaskBase *this_00;
  undefined8 *puVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::DispatchPassSetup(FScene_*,FViewInfo_const_&,FInstanceCullingContext_&&,EMeshPass::Type,FExclusiveDepthStencil::Type,FMeshPassProcessor_*,TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_*,int,TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,FMeshPassProcessor_*,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*)_::_43_::FStat_STAT_MeshPassSetupImmediate>
  FVar30;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar31;
  ForElementType<FVisibleMeshDrawCommand> FVar32;
  undefined ***pppuVar33;
  FNameEntryId FVar34;
  FName FVar35;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar36;
  bool bVar37;
  undefined1 auStackY_1c8 [32];
  EExtendedTaskPriority local_168;
  ETaskPriority local_167 [3];
  FColor_u_0 local_164;
  FName local_160;
  FScene *local_158;
  TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_150;
  FName local_148;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_138;
  FInstanceCullingContext *local_130;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_128;
  TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_120;
  FConstructor local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  FMeshDrawCommandInitResourcesTask local_f0;
  LARGE_INTEGER local_e8;
  FStatMessage local_e0;
  longlong local_d0;
  FName local_c8;
  FName local_c0;
  undefined1 local_b8 [32];
  ForElementType<FVisibleMeshDrawCommand> local_98;
  int local_90;
  int local_8c;
  ForElementType<FStaticMeshBatch_const_*> local_88;
  undefined **local_78;
  FParallelMeshDrawCommandPass *local_70;
  ForAnyElementType local_68;
  undefined ***local_60;
  ForAnyElementType local_58;
  
  local_58.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_1c8);
  local_150 = param_11;
  local_120 = param_10;
  local_138 = param_15;
  local_128 = param_13;
  bVar37 = -1 < CpuChannel->Enabled;
  local_158 = param_1;
  local_130 = param_3;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1377,"ParallelMdcDispatchPassSetup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x561);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1377);
  }
  if ((((this->TaskEventRef).Reference != (FBaseGraphTask *)0x0) ||
      (param_6 == (FMeshPassProcessor *)0x0)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("!TaskEventRef.IsValid() && MeshPassProcessor != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                          ,0x562,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((param_4 == Num) !=
       (param_8 ==
       (TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)0x0)
      ) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(PassType == EMeshPass::Num) == (DynamicMeshElementsPassRelevance == nullptr)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                                ,0x563,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  this->MaxNumDraws = param_13->ArrayNum + param_9 + param_12;
  (this->TaskContext).DynamicMeshElements = param_7;
  (this->TaskContext).DynamicMeshElementsPassRelevance = param_8;
  (this->TaskContext).MeshPassProcessor = param_6;
  (this->TaskContext).MobileBasePassCSMMeshPassProcessor = param_14;
  (this->TaskContext).View = param_2;
  (this->TaskContext).Scene = local_158;
  (this->TaskContext).ShadingPath = (uint)(2 < (int)param_2->_padding_);
  EVar23 = FSceneInterface::GetShaderPlatform((FSceneInterface *)local_158);
  (this->TaskContext).ShaderPlatform = EVar23;
  (this->TaskContext).PassType = param_4;
  bVar22 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                       (FGenericStaticFeatureLevel)(Type)param_2->_padding_);
  (this->TaskContext).bUseGPUScene = bVar22;
  bVar22 = IsDynamicInstancingEnabled((Type)param_2->_padding_);
  (this->TaskContext).bDynamicInstancing = bVar22;
  (this->TaskContext).bReverseCulling = SUB81(param_2->_padding_,0);
  (this->TaskContext).bRenderSceneTwoSided = SUB81(param_2->_padding_,0);
  (this->TaskContext).BasePassDepthStencilAccess = param_5;
  TVar7 = local_158->DefaultBasePassDepthStencilAccess;
  (this->TaskContext).NumDynamicMeshCommandBuildRequestElements = param_12;
  (this->TaskContext).DefaultBasePassDepthStencilAccess = TVar7;
  (this->TaskContext).NumDynamicMeshElements = param_9;
  if (param_4 == Num) {
LAB_144f02a36:
    iVar24 = 1;
  }
  else {
    EVar8 = (this->TaskContext).ShadingPath;
    TVar6 = (this->TaskContext).PassType;
    if (((1 < (int)EVar8) || (WaterInfoTexturePass < TVar6)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShadingPath < EShadingPath::Num && PassType < EMeshPass::Num",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                            ,0x942,L""), bVar22)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((FPassProcessorManager::Flags[EVar8][TVar6] & MainView) == None) goto LAB_144f02a36;
    bVar22 = FSceneView::IsInstancedStereoPass((FSceneView *)param_2);
    iVar24 = 2;
    if (!bVar22) goto LAB_144f02a36;
  }
  (this->TaskContext).InstanceFactor = iVar24;
  FInstanceCullingContext::operator=(&(this->TaskContext).InstanceCullingContext,local_130);
  pTVar36 = local_150;
  pFVar21 = local_158;
  (this->TaskContext).TranslucencyPass = TPT_MAX;
  (this->TaskContext).TranslucentSortPolicy = (uint)(byte)param_2->_padding_;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).TranslucentSortAxis.field0_0x0._s_0.X = (double)param_2->_padding_;
  (this->TaskContext).TranslucentSortAxis.field0_0x0._s_0.Y = dVar12;
  (this->TaskContext).TranslucentSortAxis.field0_0x0._s_0.Z = (double)param_2->_padding_;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewOrigin.field0_0x0._s_0.X = (double)param_2->_padding_;
  (this->TaskContext).ViewOrigin.field0_0x0._s_0.Y = dVar12;
  (this->TaskContext).ViewOrigin.field0_0x0._s_0.Z = (double)param_2->_padding_;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[0][0] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[0][1] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[0][2] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[0][3] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[1][0] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[1][1] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[1][2] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[1][3] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[2][0] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[2][1] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[2][2] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[2][3] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[3][0] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[3][1] = dVar12;
  dVar12 = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[3][2] = (double)param_2->_padding_;
  (this->TaskContext).ViewMatrix.M[3][3] = dVar12;
  (this->TaskContext).PrimitiveBounds = &local_158->PrimitiveBounds;
  switch(param_4) {
  case TranslucencyStandard:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyStandard;
    break;
  case TranslucencyStandardModulate:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyStandardModulate;
    break;
  case TranslucencyAfterDOF:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyAfterDOF;
    break;
  case TranslucencyAfterDOFModulate:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyAfterDOFModulate;
    break;
  case TranslucencyAfterMotionBlur:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyAfterMotionBlur;
    break;
  case TranslucencyHoldout:
    (this->TaskContext).TranslucencyPass = TPT_TranslucencyHoldout;
    break;
  case TranslucencyAll:
    (this->TaskContext).TranslucencyPass = TPT_AllTranslucency;
  }
  pFVar13 = (this->TaskContext).MeshDrawCommands.AllocatorInstance.Data;
  iVar18 = (this->TaskContext).MeshDrawCommands.ArrayNum;
  iVar19 = (this->TaskContext).MeshDrawCommands.ArrayMax;
  iVar24 = local_128->ArrayNum;
  iVar17 = local_128->ArrayMax;
  (this->TaskContext).MeshDrawCommands.AllocatorInstance.Data = (local_128->AllocatorInstance).Data;
  (this->TaskContext).MeshDrawCommands.ArrayNum = iVar24;
  (this->TaskContext).MeshDrawCommands.ArrayMax = iVar17;
  (local_128->AllocatorInstance).Data = pFVar13;
  local_128->ArrayNum = iVar18;
  local_128->ArrayMax = iVar19;
  ppFVar14 = (this->TaskContext).DynamicMeshCommandBuildRequests.AllocatorInstance.Data;
  iVar18 = (this->TaskContext).DynamicMeshCommandBuildRequests.ArrayNum;
  iVar19 = (this->TaskContext).DynamicMeshCommandBuildRequests.ArrayMax;
  iVar24 = local_120->ArrayNum;
  iVar17 = local_120->ArrayMax;
  (this->TaskContext).DynamicMeshCommandBuildRequests.AllocatorInstance.Data =
       (local_120->AllocatorInstance).Data;
  (this->TaskContext).DynamicMeshCommandBuildRequests.ArrayNum = iVar24;
  (this->TaskContext).DynamicMeshCommandBuildRequests.ArrayMax = iVar17;
  (local_120->AllocatorInstance).Data = ppFVar14;
  local_120->ArrayNum = iVar18;
  local_120->ArrayMax = iVar19;
  iVar24 = local_150->ArrayNum;
  iVar17 = local_150->ArrayMax;
  pEVar10 = (this->TaskContext).DynamicMeshCommandBuildFlags.AllocatorInstance.Data;
  iVar18 = (this->TaskContext).DynamicMeshCommandBuildFlags.ArrayNum;
  iVar19 = (this->TaskContext).DynamicMeshCommandBuildFlags.ArrayMax;
  (this->TaskContext).DynamicMeshCommandBuildFlags.AllocatorInstance.Data =
       (local_150->AllocatorInstance).Data;
  (this->TaskContext).DynamicMeshCommandBuildFlags.ArrayNum = iVar24;
  (this->TaskContext).DynamicMeshCommandBuildFlags.ArrayMax = iVar17;
  (local_150->AllocatorInstance).Data = pEVar10;
  local_150->ArrayNum = iVar18;
  local_150->ArrayMax = iVar19;
  if (((this->TaskContext).ShadingPath == Mobile) && ((this->TaskContext).PassType == BasePass)) {
    pFVar13 = (this->TaskContext).MobileBasePassCSMMeshDrawCommands.AllocatorInstance.Data;
    iVar18 = (this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayNum;
    iVar19 = (this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayMax;
    iVar24 = local_138->ArrayNum;
    iVar17 = local_138->ArrayMax;
    (this->TaskContext).MobileBasePassCSMMeshDrawCommands.AllocatorInstance.Data =
         (local_138->AllocatorInstance).Data;
    (this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayNum = iVar24;
    (this->TaskContext).MobileBasePassCSMMeshDrawCommands.ArrayMax = iVar17;
    (local_138->AllocatorInstance).Data = pFVar13;
    local_138->ArrayNum = iVar18;
    local_138->ArrayMax = iVar19;
  }
  else if (((param_14 != (FMeshPassProcessor *)0x0) ||
           (local_138 !=
            (TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
             *)0x0)) &&
          (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("MobileBasePassCSMMeshPassProcessor == nullptr && InOutMobileBasePassCSMMeshDrawCommands == nullptr"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                               ,0x59f,L""), bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar24 = this->MaxNumDraws;
  if (iVar24 < 1) goto LAB_144f03275;
  if ((this->TaskContext).MeshDrawCommands.ArrayMax < iVar24) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,iVar24,&(this->TaskContext).MeshDrawCommands.AllocatorInstance,
               (this->TaskContext).MeshDrawCommands.ArrayNum,
               &(this->TaskContext).MeshDrawCommands.ArrayMax);
  }
  uVar31 = this->MaxNumDraws;
  if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
  }
  if ((this->TaskContext).TempVisibleMeshDrawCommands.ArrayMax < (int)uVar31) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
              (0x48,8,uVar31,&(this->TaskContext).TempVisibleMeshDrawCommands.AllocatorInstance,
               (this->TaskContext).TempVisibleMeshDrawCommands.ArrayNum,
               &(this->TaskContext).TempVisibleMeshDrawCommands.ArrayMax);
  }
  bVar22 = FApp::ShouldUseThreadingForPerformance();
  pTVar20 = CVarMeshDrawCommandsParallelPassSetup.Ref;
  if (bVar22) {
    bVar22 = IsInParallelRenderingThread();
    if ((!bVar22) &&
       (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pTVar20->ShadowedValue[1] < 1) || (GIsThreadedRendering == false)) goto LAB_144f02fbb;
    if ((GAllowOnDemandShaderCreation == 0) ||
       ((GRHIGlobals.SupportsMultithreadedShaderCreation == false &&
        (((2 < (int)GMaxRHIFeatureLevel ||
          (GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread != false)) ||
         (GIsRunningRHIInSeparateThread_InternalUseOnly == false)))))) {
      local_8c = 4;
      local_98.Data = (FVisibleMeshDrawCommand *)0x0;
      local_90 = 0;
      local_110._8_8_ = (FScene *)0x0;
      TVar26 = TGraphTask<FMeshDrawCommandPassSetupTask>::FConstructor::
               ConstructAndDispatchWhenReady<FMeshDrawCommandPassSetupTaskContext_&>
                         ((FConstructor *)(local_110 + 8),
                          (FMeshDrawCommandPassSetupTaskContext *)local_100);
      FVar32.Data = (FVisibleMeshDrawCommand *)local_b8;
      if ((FBaseGraphTask *)local_98.Data != (FBaseGraphTask *)0x0) {
        FVar32.Data = local_98.Data;
      }
      if (FVar32.Data <= TVar26.Reference) {
        FVar32.Data = (FVisibleMeshDrawCommand *)local_b8;
        if ((FBaseGraphTask *)local_98.Data != (FBaseGraphTask *)0x0) {
          FVar32.Data = local_98.Data;
        }
        if ((TVar26.Reference <
             (FBaseGraphTask *)
             (&((FBaseGraphTask *)FVar32.Data)->field_0x0 + (longlong)local_8c * 8)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
      if (local_90 == local_8c) {
        local_90 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_b8,
                              &local_8c);
      }
      lVar27 = (longlong)local_90;
      FVar32.Data = (FVisibleMeshDrawCommand *)local_b8;
      if ((FBaseGraphTask *)local_98.Data != (FBaseGraphTask *)0x0) {
        FVar32.Data = local_98.Data;
      }
      local_90 = local_90 + 1;
      *(undefined8 *)(&((FBaseGraphTask *)FVar32.Data)->field_0x0 + lVar27 * 8) = 0;
      *(undefined8 *)(&((FBaseGraphTask *)FVar32.Data)->field_0x0 + lVar27 * 8) =
           *(undefined8 *)TVar26.Reference;
      *(undefined8 *)TVar26.Reference = 0;
      if ((FViewInfo *)local_100._0_8_ != (FViewInfo *)0x0) {
        LOCK();
        plVar1 = (longlong *)(local_100._0_8_ + 0x30);
        lVar27 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar27 == 1) && ((FViewInfo *)local_100._0_8_ != (FViewInfo *)0x0)) {
          (**(code **)*(longlong *)local_100._0_8_)(local_100._0_8_,1);
        }
      }
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)local_b8);
        this_00->_padding_ = (longlong)&___7__TGraphTask_VFMeshDrawCommandInitResourcesTask____6B_;
      }
      this_00[1]._padding_ = (longlong)this;
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local,local_167,&local_168)
      ;
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_167[0],local_168,None);
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xe0);
      pTVar4 = &this->TaskEventRef;
      if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)&local_d0) {
        LOCK();
        paVar2 = &this_00->RefCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          puVar28 = (undefined8 *)this_00->_padding_;
LAB_144f02f86:
          (*(code *)*puVar28)(this_00,1);
        }
      }
      else {
        pFVar9 = (FTaskBase *)pTVar4->Reference;
        pTVar4->Reference = (FBaseGraphTask *)this_00;
        if (pFVar9 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar9->RefCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<unsigned_int>)0x1) {
            puVar28 = (undefined8 *)pFVar9->_padding_;
            this_00 = pFVar9;
            goto LAB_144f02f86;
          }
        }
      }
      FVar32.Data = (FVisibleMeshDrawCommand *)local_b8;
      if ((FBaseGraphTask *)local_98.Data != (FBaseGraphTask *)0x0) {
        FVar32.Data = local_98.Data;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar32.Data,local_90);
      if ((FBaseGraphTask *)local_98.Data != (FBaseGraphTask *)0x0) {
        FMemory::Free(local_98.Data);
      }
    }
    else {
      local_118.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TVar26 = TGraphTask<FMeshDrawCommandPassSetupTask>::FConstructor::
               ConstructAndDispatchWhenReady<FMeshDrawCommandPassSetupTaskContext_&>
                         (&local_118,(FMeshDrawCommandPassSetupTaskContext *)local_110);
      TRefCountPtr<FBaseGraphTask>::operator=
                (&this->TaskEventRef,(TRefCountPtr<FBaseGraphTask> *)TVar26.Reference);
      if ((FViewInfo *)local_110._0_8_ != (FViewInfo *)0x0) {
        LOCK();
        plVar1 = (longlong *)(local_110._0_8_ + 0x30);
        lVar27 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar27 == 1) && ((FViewInfo *)local_110._0_8_ != (FViewInfo *)0x0)) {
          (**(code **)*(longlong *)local_110._0_8_)(local_110._0_8_,1);
        }
      }
    }
  }
  else {
LAB_144f02fbb:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_MeshPassSetupImmediate ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::DispatchPassSetup(FScene_*,FViewInfo_const_&,FInstanceCullingContext_&&,EMeshPass::Type,FExclusiveDepthStencil::Type,FMeshPassProcessor_*,TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_*,int,TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,FMeshPassProcessor_*,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*)_::_43_::FStat_STAT_MeshPassSetupImmediate>
           )0x0) {
        pFVar29 = ::FName::FName(&local_c8,"STAT_MeshPassSetupImmediate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshPassSetupImmediate,*pFVar29,
                   L"STAT_MeshPassSetupImmediate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar30 = StatPtr_STAT_MeshPassSetupImmediate;
    if (StatPtr_STAT_MeshPassSetupImmediate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::DispatchPassSetup(FScene_*,FViewInfo_const_&,FInstanceCullingContext_&&,EMeshPass::Type,FExclusiveDepthStencil::Type,FMeshPassProcessor_*,TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_*,int,TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,FMeshPassProcessor_*,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*)_::_43_::FStat_STAT_MeshPassSetupImmediate>
         )0x0) {
      pFVar29 = ::FName::FName(&local_c0,"STAT_MeshPassSetupImmediate");
      FVar30 = (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::DispatchPassSetup(FScene_*,FViewInfo_const_&,FInstanceCullingContext_&&,EMeshPass::Type,FExclusiveDepthStencil::Type,FMeshPassProcessor_*,TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&,TArray<FMeshPassMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_*,int,TArray<FStaticMeshBatch_const_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,TArray<EMeshDrawCommandCullingPayloadFlags,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>,int,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&,FMeshPassProcessor_*,TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_*)_::_43_::FStat_STAT_MeshPassSetupImmediate>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshPassSetupImmediate,
                            *pFVar29,L"STAT_MeshPassSetupImmediate","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar35 = *(FName *)FVar30;
    bVar22 = false;
    bVar16 = false;
    local_148.ComparisonIndex.Value = 0;
    local_148.Number = 0;
    FVar25.Value = 0;
    FVar34 = FVar35.ComparisonIndex.Value;
    uVar31 = FVar35.Number;
    if ((FVar34.Value == 0) && (uVar31 == 0)) {
LAB_144f03109:
      bVar15 = false;
      FVar35 = local_148;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_164.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_164._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
        bVar22 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          local_160.ComparisonIndex.Value = FVar34.Value;
          local_160.Number = uVar31;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_160,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                     ,0x5bb);
          bVar22 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_144f03109;
      local_160.ComparisonIndex.Value = FVar34.Value;
      local_160.Number = uVar31;
      local_148 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar15 = true;
      FVar25.Value = local_148.ComparisonIndex.Value;
    }
    local_100._8_8_ = this;
    FMeshDrawCommandPassSetupTask::AnyThreadTask((FMeshDrawCommandPassSetupTask *)(local_100 + 8));
    if ((GAllowOnDemandShaderCreation == 0) ||
       ((GRHIGlobals.SupportsMultithreadedShaderCreation == false &&
        (((2 < (int)GMaxRHIFeatureLevel ||
          (GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread != false)) ||
         (GIsRunningRHIInSeparateThread_InternalUseOnly == false)))))) {
      local_f0.Context = &this->TaskContext;
      FMeshDrawCommandInitResourcesTask::AnyThreadTask(&local_f0);
    }
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar15) && (FVar35 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_e0.NameAndInfo.Number = FVar35.Number & 0xffff6fff | 0x6000;
        local_e0.NameAndInfo.Index.Value = FVar25.Value;
        QueryPerformanceCounter(&local_e8);
        local_e0.StatData.Pad[4] = '\0';
        local_e0.StatData.Pad[5] = '\0';
        local_e0.StatData.Pad[6] = '\0';
        local_e0.StatData.Pad[7] = '\0';
        local_e0.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
        local_e0.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
        local_e0.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
        local_e0.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_e0);
        piVar3 = &this_01->ScopeCount;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FParallelMeshDrawCommandPass::DispatchPassSetup'::`33'::<lambda_1>,0,0>
              ::_vftable_;
  local_88.Data =
       (FStaticMeshBatch **)
       UE::Core::Private::Function::
       TFunctionRefCaller<`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>,void,FInstanceCullingContext_&>
       ::Call;
  local_68.Data = (FScriptContainerElement *)pFVar21;
  local_70 = this;
  FInstanceCullingContext::BeginAsyncSetup
            (&(this->TaskContext).InstanceCullingContext,
             (TFunction<void___cdecl(FInstanceCullingContext_&)> *)&local_88);
  pTVar36 = local_150;
  if (local_88.Data != (FStaticMeshBatch **)0x0) {
    pppuVar33 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar33 = local_60;
    }
    (*(code *)(*pppuVar33)[2])();
    pTVar36 = local_150;
  }
LAB_144f03275:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pEVar10 = (pTVar36->AllocatorInstance).Data;
  if (pEVar10 != (EMeshDrawCommandCullingPayloadFlags *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pEVar10);
  }
  return;
}

// Draw @ 144f03840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::Draw
          (FParallelMeshDrawCommandPass *this,FRHICommandList *param_1,
          FInstanceCullingDrawParams *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FMeshDrawCommandOverrideArgs *pFVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::Draw(FRHICommandList_&,FInstanceCullingDrawParams_const_*)const_::_2_::FStat_STAT_MeshPassDrawImmediate>
  FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  bool bVar14;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  LARGE_INTEGER local_118;
  FName local_110;
  FStatMessage local_100;
  FMeshDrawCommandOverrideArgs local_f0;
  FName local_b8;
  FName local_b0;
  FMeshDrawCommandSceneArgs local_a8;
  FMeshDrawCommandOverrideArgs local_78;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1720,"ParallelMdcDispatchDraw",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
               ,0x6b8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1720);
  }
  if (this->MaxNumDraws < 1) goto LAB_144f03c2e;
  local_f0.RootConstants.bIsSet = false;
  local_f0.InstanceCullingStaticUB = (FRHIUniformBuffer *)0x0;
  local_f0.InstanceDataByteOffset = 0;
  local_f0.IndirectArgsByteOffset = 0;
  local_f0.InstanceBuffer = (FRHIBuffer *)0x0;
  local_f0.IndirectArgsBuffer = (FRHIBuffer *)0x0;
  if (param_2 != (FInstanceCullingDrawParams *)0x0) {
    pFVar8 = GetMeshDrawCommandOverrideArgs(&local_78,param_2);
    local_f0.InstanceBuffer = pFVar8->InstanceBuffer;
    local_f0.IndirectArgsBuffer = pFVar8->IndirectArgsBuffer;
    local_f0.InstanceCullingStaticUB = pFVar8->InstanceCullingStaticUB;
    local_f0.InstanceDataByteOffset = pFVar8->InstanceDataByteOffset;
    local_f0.IndirectArgsByteOffset = pFVar8->IndirectArgsByteOffset;
    if ((&pFVar8->RootConstants != &local_f0.RootConstants) &&
       ((pFVar8->RootConstants).bIsSet != false)) {
      local_f0.RootConstants.TypedValue.field0_0x0._0_8_ =
           *(undefined8 *)&(pFVar8->RootConstants).TypedValue.field0_0x0;
      local_f0.RootConstants.TypedValue.field0_0x0._8_8_ =
           *(undefined8 *)((longlong)&(pFVar8->RootConstants).TypedValue.field0_0x0 + 8);
      local_f0.RootConstants.bIsSet = true;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_MeshPassDrawImmediate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::Draw(FRHICommandList_&,FInstanceCullingDrawParams_const_*)const_::_2_::FStat_STAT_MeshPassDrawImmediate>
         )0x0) {
      pFVar9 = ::FName::FName(&local_b8,"STAT_MeshPassDrawImmediate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshPassDrawImmediate,*pFVar9,
                 L"STAT_MeshPassDrawImmediate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_MeshPassDrawImmediate;
  if (StatPtr_STAT_MeshPassDrawImmediate ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::Draw(FRHICommandList_&,FInstanceCullingDrawParams_const_*)const_::_2_::FStat_STAT_MeshPassDrawImmediate>
       )0x0) {
    pFVar9 = ::FName::FName(&local_b0,"STAT_MeshPassDrawImmediate");
    FVar10 = (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::Draw(FRHICommandList_&,FInstanceCullingDrawParams_const_*)const_::_2_::FStat_STAT_MeshPassDrawImmediate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshPassDrawImmediate,*pFVar9,
                          L"STAT_MeshPassDrawImmediate","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_144f03a8b:
    bVar5 = false;
    FVar13 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar12.Value;
        local_res20.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                   ,0x6c4);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_144f03a8b;
    local_118.s.LowPart = FVar12.Value;
    local_118.s.HighPart = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  if (((this->TaskEventRef).Reference != (FBaseGraphTask *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TaskEventRef == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                         ,0x6c6,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->TaskContext).bUseGPUScene == false) {
    local_a8.RootConstants.bIsSet = false;
    local_a8.PrimitiveIdsBuffer = (FRHIBuffer *)0x0;
    local_a8.IndirectArgsBuffer = (FRHIBuffer *)0x0;
    local_a8.PrimitiveIdOffset = 0;
    local_a8.IndirectArgsByteOffset = 0;
    local_a8.BatchedPrimitiveSlot = 0xff;
    SubmitMeshDrawCommandsRange
              (&(this->TaskContext).MeshDrawCommands,
               &(this->TaskContext).MinimalPipelineStatePassSet,&local_a8,0,
               (this->TaskContext).bDynamicInstancing,0,
               (this->TaskContext).MeshDrawCommands.ArrayNum,(this->TaskContext).InstanceFactor,
               param_1);
  }
  else {
    iVar2 = (this->TaskContext).MeshDrawCommands.ArrayNum;
    if (0 < iVar2) {
      FInstanceCullingContext::SubmitDrawCommands
                (&(this->TaskContext).InstanceCullingContext,&(this->TaskContext).MeshDrawCommands,
                 &(this->TaskContext).MinimalPipelineStatePassSet,&local_f0,0,iVar2,
                 (this->TaskContext).InstanceFactor,param_1);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_100.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_100.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_100);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_144f03c2e:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DumpInstancingStats @ 144f040d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::DumpInstancingStats(FParallelMeshDrawCommandPass *this)

{
  if (((1 < (this->PassNameForStats).Data.ArrayNum) &&
      (0 < (this->TaskContext).VisibleMeshDrawCommandsNum)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      if (4 < (byte)LogRenderer._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
        if (4 < (byte)LogRenderer._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
          return;
        }
      }
    }
  }
  return;
}

// IsOnDemandShaderCreationEnabled @ 144f1cce0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FParallelMeshDrawCommandPass::IsOnDemandShaderCreationEnabled(void)

{
  if ((GAllowOnDemandShaderCreation != 0) &&
     ((GRHIGlobals.SupportsMultithreadedShaderCreation ||
      ((((int)GMaxRHIFeatureLevel < 3 &&
        (!GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread)) &&
       (GIsRunningRHIInSeparateThread_InternalUseOnly)))))) {
    return true;
  }
  return false;
}

// SetDumpInstancingStats @ 144f28140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FParallelMeshDrawCommandPass::SetDumpInstancingStats
          (FParallelMeshDrawCommandPass *this,FString *param_1)

{
  ::FString::operator=(&this->PassNameForStats,param_1);
  return;
}

// WaitForSetupTask @ 144f34f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall FParallelMeshDrawCommandPass::WaitForSetupTask(FParallelMeshDrawCommandPass *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FName this_00;
  code *pcVar4;
  FBaseGraphTask *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::WaitForSetupTask(void)_::_5_::FStat_STAT_WaitForMeshPassSetupTask>
  FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  FName FVar13;
  undefined1 auStackY_e8 [32];
  FStatMessage local_88;
  LARGE_INTEGER local_78;
  FName local_70;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_60;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if ((this->TaskEventRef).Reference == (FBaseGraphTask *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_WaitForMeshPassSetupTask ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::WaitForSetupTask(void)_::_5_::FStat_STAT_WaitForMeshPassSetupTask>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_78.s,"STAT_WaitForMeshPassSetupTask");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForMeshPassSetupTask,*pFVar10,
                 L"STAT_WaitForMeshPassSetupTask","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_WaitForMeshPassSetupTask;
  if (StatPtr_STAT_WaitForMeshPassSetupTask ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::WaitForSetupTask(void)_::_5_::FStat_STAT_WaitForMeshPassSetupTask>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)&local_78.s,"STAT_WaitForMeshPassSetupTask");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FParallelMeshDrawCommandPass::WaitForSetupTask(void)_::_5_::FStat_STAT_WaitForMeshPassSetupTask>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitForMeshPassSetupTask,
                          *pFVar10,L"STAT_WaitForMeshPassSetupTask","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.StatData.Pad = local_88.StatData.Pad & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.StatData.Pad = (uchar  [8])FVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshDrawCommands.cpp"
                   ,0x5e8);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.StatData.Pad = (uchar  [8])FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_144f350b6;
    }
  }
  bVar7 = false;
  FVar13 = local_70;
LAB_144f350b6:
  this_00 = (FName)(this->TaskEventRef).Reference;
  bVar9 = IsInActualRenderingThread();
  if ((bVar9) && (((uint)ENamedThreads::FRenderThreadStatics::RenderThread_Local >> 8 & 1) != 0)) {
    local_78 = (LARGE_INTEGER)FTaskGraphInterface::Get();
    if (this_00 != (FName)0x0) {
      LOCK();
      *(int *)((longlong)this_00 + 0x30) = *(int *)((longlong)this_00 + 0x30) + 1;
      UNLOCK();
    }
    pcVar4 = *(code **)((longlong)*(FTaskGraphInterface *)local_78 + 0x60);
    local_60.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_38 = 1;
    local_88.StatData.Pad = (uchar  [8])this_00;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_60,1,&local_34);
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_60.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar12,(TRefCountPtr<FBaseGraphTask> *)&local_88,1);
    (*pcVar4)(local_78.QuadPart,&local_60);
    FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_60;
    if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar12 = local_60.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar12,local_38)
    ;
    if (local_60.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_60.SecondaryData);
    }
    if ((FName)local_88.StatData.Pad != (FName)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_88.StatData.Pad + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_88.StatData.Pad)(local_88.StatData.Pad,1);
      }
    }
  }
  else {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)this_00);
  }
  pFVar5 = (this->TaskEventRef).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->TaskEventRef).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_88.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_88.StatData.Pad = (uchar  [8])(local_78.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_88);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

