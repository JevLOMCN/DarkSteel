// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// ~FSimpleMeshDrawCommandPass @ 145407ab0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FSimpleMeshDrawCommandPass::~FSimpleMeshDrawCommandPass(FSimpleMeshDrawCommandPass *this)

{
  FScriptContainerElement *pFVar1;
  FVisibleMeshDrawCommand *pFVar2;
  
  (this->DynamicPassMeshDrawListContext)._padding_ = (longlong)&___7FMeshPassDrawListContext__6B_;
  TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->DynamicMeshDrawCommandStorage,0);
  pFVar1 = (this->DynamicMeshDrawCommandStorage).MeshDrawCommands.Chunks.Array.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&this->GraphicsMinimalPipelineStateSet);
  FInstanceCullingContext::~FInstanceCullingContext(&this->InstanceCullingContext);
  pFVar2 = (this->VisibleMeshDrawCommands).AllocatorInstance.Data;
  if (pFVar2 != (FVisibleMeshDrawCommand *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  return;
}

// FSimpleMeshDrawCommandPass @ 1456658e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

FSimpleMeshDrawCommandPass * __thiscall
FSimpleMeshDrawCommandPass::FSimpleMeshDrawCommandPass
          (FSimpleMeshDrawCommandPass *this,FSceneView *param_1,FInstanceCullingManager *param_2,
          bool param_3)

{
  ForElementType<int> *pFVar1;
  code *pcVar2;
  TTypeCompatibleBytes<int> TVar3;
  bool bVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  TTypeCompatibleBytes<int> TVar7;
  FSimpleMeshDrawCommandPass *pFVar8;
  FSceneView *pFVar9;
  FInstanceCullingContext *pFVar10;
  longlong lVar11;
  undefined1 auStackY_208 [32];
  TRefCountPtr<IPooledRenderTarget> local_1b8 [2];
  ForElementType<int> *local_1a8;
  uchar auStack_1a0 [4];
  undefined4 uStack_19c;
  TArrayView<int_const_,int> local_198;
  ForElementType<int> local_188;
  ForElementType<int> local_180;
  FInstanceCullingContext local_178;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  (this->VisibleMeshDrawCommands).AllocatorInstance.Data = (FVisibleMeshDrawCommand *)0x0;
  (this->VisibleMeshDrawCommands).ArrayNum = 0;
  (this->VisibleMeshDrawCommands).ArrayMax = 0;
  (this->InstanceCullingContext).ViewIds.AllocatorInstance.SecondaryData.Data = (int *)0x0;
  (this->InstanceCullingContext).InstanceCullingManager = (FInstanceCullingManager *)0x0;
  (this->InstanceCullingContext).ShaderPlatform = SP_NumPlatforms;
  (this->InstanceCullingContext).ViewIds.ArrayNum = 0;
  (this->InstanceCullingContext).ViewIds.ArrayMax = 6;
  (this->InstanceCullingContext).PrevHZB.Reference = (IPooledRenderTarget *)0x0;
  *(undefined8 *)&(this->InstanceCullingContext).SyncPrerequisitesFunc = 0;
  *(undefined8 *)&(this->InstanceCullingContext).SyncPrerequisitesFunc.field_0x28 = 0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.AllocatorInstance.Data =
       (FMeshDrawCommandInfo *)0x0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.ArrayNum = 0;
  (this->InstanceCullingContext).MeshDrawCommandInfos.ArrayMax = 0;
  (this->InstanceCullingContext).IndirectArgs.AllocatorInstance.Data =
       (FRHIDrawIndexedIndirectParameters *)0x0;
  (this->InstanceCullingContext).IndirectArgs.ArrayNum = 0;
  (this->InstanceCullingContext).IndirectArgs.ArrayMax = 0;
  (this->InstanceCullingContext).DrawCommandDescs.AllocatorInstance.Data =
       (TIntVector2<unsigned_int> *)0x0;
  (this->InstanceCullingContext).DrawCommandDescs.ArrayNum = 0;
  (this->InstanceCullingContext).DrawCommandDescs.ArrayMax = 0;
  (this->InstanceCullingContext).PayloadData.AllocatorInstance.Data = (FPayloadData *)0x0;
  (this->InstanceCullingContext).PayloadData.ArrayNum = 0;
  (this->InstanceCullingContext).PayloadData.ArrayMax = 0;
  (this->InstanceCullingContext).InstanceIdOffsets.AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceCullingContext).InstanceIdOffsets.ArrayNum = 0;
  (this->InstanceCullingContext).InstanceIdOffsets.ArrayMax = 0;
  (this->InstanceCullingContext).DrawCommandCompactionData.AllocatorInstance.Data =
       (FCompactionData *)0x0;
  (this->InstanceCullingContext).DrawCommandCompactionData.ArrayNum = 0;
  (this->InstanceCullingContext).DrawCommandCompactionData.ArrayMax = 0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.AllocatorInstance.Data = (uint *)0x0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.ArrayNum = 0;
  (this->InstanceCullingContext).CompactionBlockDataIndices.ArrayMax = 0;
  (this->InstanceCullingContext).bIsEnabled = false;
  (this->InstanceCullingContext).InstanceCullingMode = Normal;
  (this->InstanceCullingContext).Flags = None;
  (this->InstanceCullingContext).TotalInstances = 0;
  (this->InstanceCullingContext).NumCompactionInstances = 0;
  (this->InstanceCullingContext).DynamicInstanceIdOffset = -1;
  (this->InstanceCullingContext).DynamicInstanceIdNum = -1;
  (this->InstanceCullingContext).LoadBalancers.Elements[0] =
       (FInstanceProcessingGPULoadBalancer *)0x0;
  (this->InstanceCullingContext).LoadBalancers.Elements[1] =
       (FInstanceProcessingGPULoadBalancer *)0x0;
  (this->InstanceCullingContext).MeshDrawCommandPassStats = (FMeshDrawCommandPassStats *)0x0;
  (this->InstanceCullingContext).SingleInstanceProcessingMode = UnCulled;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FGraphicsMinimalPipelineStateInitializer,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FGraphicsMinimalPipelineStateInitializer,0>,TSizedDefaultAllocator<32>_>
              *)&this->GraphicsMinimalPipelineStateSet);
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FMeshDrawCommand,16384,TSizedDefaultAllocator<32>_>
            (&(this->DynamicMeshDrawCommandStorage).MeshDrawCommands,0);
  (this->DynamicPassMeshDrawListContext).GraphicsMinimalPipelineStateSet =
       &this->GraphicsMinimalPipelineStateSet;
  (this->DynamicPassMeshDrawListContext).NeedsShaderInitialisation = &this->bNeedsInitialization;
  (this->DynamicPassMeshDrawListContext).DrawListStorage = &this->DynamicMeshDrawCommandStorage;
  (this->DynamicPassMeshDrawListContext)._padding_ =
       (longlong)&___7FDynamicPassMeshDrawListContext__6B_;
  (this->DynamicPassMeshDrawListContext).DrawList = &this->VisibleMeshDrawCommands;
  this->InstanceFactor = 1;
  this->bNeedsInitialization = false;
  this->bSupportsScenePrimitives = false;
  this->bUsingStereo = false;
  this->bWasDrawCommandsSetup = false;
  this->PrimitiveIdVertexBuffer = (FRHIBuffer *)0x0;
  if (param_1->bIsViewInfo == false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("View.bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SimpleMeshDrawCommandPass.cpp"
                       ,0xd,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FSimpleMeshDrawCommandPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  pFVar1 = (ForElementType<int> *)
           ((longlong)param_1[1].PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64 + 4);
  local_180.InlineData[1].Pad[0] = '\x02';
  local_180.InlineData[1].Pad[1] = '\0';
  local_180.InlineData[1].Pad[2] = '\0';
  local_180.InlineData[1].Pad[3] = '\0';
  TVar7.Pad[0] = '\0';
  TVar7.Pad[1] = '\0';
  TVar7.Pad[2] = '\0';
  TVar7.Pad[3] = '\0';
  local_180.InlineData[0].Pad[0] = '\0';
  local_180.InlineData[0].Pad[1] = '\0';
  local_180.InlineData[0].Pad[2] = '\0';
  local_180.InlineData[0].Pad[3] = '\0';
  if ((&local_188 <= pFVar1) && (pFVar1 < &local_180)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FSimpleMeshDrawCommandPass *)(*pcVar2)();
      return pFVar8;
    }
    TVar7.Pad = local_180.InlineData[0].Pad;
    if (local_180.InlineData[0].Pad == local_180.InlineData[1].Pad) {
      TVar7.Pad = (uchar  [4])
                  UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<int>_>
                            (0x404,&local_188,(int *)(local_180.InlineData + 1));
    }
  }
  local_180.InlineData[0].Pad = TVar7.Pad + 1;
  *(undefined4 *)local_188.InlineData[(int)TVar7.Pad].Pad = *(undefined4 *)pFVar1->InlineData[0].Pad
  ;
  if (((param_3) && (param_1->bIsInstancedStereoEnabled != false)) &&
     (param_1->bIsMobileMultiViewEnabled == false)) {
    bVar4 = IStereoRendering::IsStereoEyeView(param_1);
    if (bVar4) {
      this->bUsingStereo = true;
      pFVar9 = FSceneView::GetInstancedSceneView(param_1);
      if (pFVar9 == (FSceneView *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ViewInfo->GetInstancedView() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SimpleMeshDrawCommandPass.cpp"
                           ,0x15,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FSimpleMeshDrawCommandPass *)(*pcVar2)();
          return pFVar8;
        }
      }
      pFVar9 = FSceneView::GetInstancedSceneView(param_1);
      pFVar1 = (ForElementType<int> *)
               ((longlong)pFVar9[1].PreviousViewTransform.TypedValue.Rotation.ZW.m128d_f64 + 4);
      if ((&local_188 <= pFVar1) &&
         (pFVar1 < local_188.InlineData + (int)local_180.InlineData[1].Pad)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FSimpleMeshDrawCommandPass *)(*pcVar2)();
          return pFVar8;
        }
      }
      if (local_180.InlineData[0].Pad == local_180.InlineData[1].Pad) {
        local_180.InlineData[0].Pad =
             (uchar  [4])
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<int>_>
                       (0x404,&local_188,(int *)(local_180.InlineData + 1));
      }
      lVar11 = (longlong)(int)local_180.InlineData[0].Pad;
      local_180.InlineData[0].Pad = local_180.InlineData[0].Pad + 1;
      *(undefined4 *)local_188.InlineData[lVar11].Pad = *(undefined4 *)pFVar1->InlineData[0].Pad;
      goto LAB_145665c3a;
    }
  }
  this->bUsingStereo = false;
LAB_145665c3a:
  TVar7.Pad = local_180.InlineData[0].Pad;
  bVar4 = this->bUsingStereo;
  local_1a8 = &local_188;
  local_1b8[0].Reference = (IPooledRenderTarget *)0x0;
  if ((int)local_180.InlineData[0].Pad < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FSimpleMeshDrawCommandPass *)(*pcVar2)();
      return pFVar8;
    }
  }
  TVar3.Pad = local_180.InlineData[0].Pad;
  local_180.InlineData[0].Pad[0] = TVar7.Pad[0];
  local_180.InlineData[0].Pad[1] = TVar7.Pad[1];
  local_180.InlineData[0].Pad[2] = TVar7.Pad[2];
  local_180.InlineData[0].Pad[3] = TVar7.Pad[3];
  auStack_1a0[0] = local_180.InlineData[0].Pad[0];
  auStack_1a0[1] = local_180.InlineData[0].Pad[1];
  auStack_1a0[2] = local_180.InlineData[0].Pad[2];
  auStack_1a0[3] = local_180.InlineData[0].Pad[3];
  local_180.InlineData[0].Pad = TVar3.Pad;
  EVar6 = FSceneView::GetShaderPlatform(param_1);
  local_198._12_4_ = uStack_19c;
  local_198.ArrayNum._0_1_ = auStack_1a0[0];
  local_198.ArrayNum._1_1_ = auStack_1a0[1];
  local_198.ArrayNum._2_1_ = auStack_1a0[2];
  local_198.ArrayNum._3_1_ = auStack_1a0[3];
  local_198.DataPtr = (int *)local_1a8;
  pFVar10 = FInstanceCullingContext::FInstanceCullingContext
                      (&local_178,L"SimpleMDCPass",EVar6,param_2,&local_198,local_1b8,
                       (uint)(bVar4 != false),None,UnCulled);
  FInstanceCullingContext::operator=(&this->InstanceCullingContext,pFVar10);
  FInstanceCullingContext::~FInstanceCullingContext(&local_178);
  if (local_1b8[0].Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)((local_1b8[0].Reference)->_padding_ + 0x38))();
  }
  this->InstanceFactor = param_1->InstanceFactor;
  return this;
}

// BuildRenderingCommands @ 145675120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleMeshDrawCommandPass::BuildRenderingCommands
          (FSimpleMeshDrawCommandPass *this,FRDGBuilder *param_1,FSceneView *param_2,
          FGPUScene *param_3,FInstanceCullingDrawParams *param_4)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FIdentityFunctor local_res8 [8];
  int local_res20 [2];
  int local_38 [4];
  
  ApplyViewOverridesToMeshDrawCommands
            (param_2,&this->VisibleMeshDrawCommands,&this->DynamicMeshDrawCommandStorage,
             &this->GraphicsMinimalPipelineStateSet,&this->bNeedsInitialization);
  AlgoImpl::
  IntroSortInternal<FVisibleMeshDrawCommand,int,FIdentityFunctor,TDereferenceWrapper<FVisibleMeshDrawCommand,FCompareFMeshDrawCommands>_>
            ((this->VisibleMeshDrawCommands).AllocatorInstance.Data,
             (this->VisibleMeshDrawCommands).ArrayNum,local_res8[0],
             (FCompareFMeshDrawCommands *)local_res8);
  if (param_3->bIsEnabled != false) {
    iVar4 = 0;
    local_38[1] = 0;
    local_38[0] = 0;
    local_res20[0] = 0;
    if (this->bWasDrawCommandsSetup == false) {
      FInstanceCullingContext::SetupDrawCommands
                (&this->InstanceCullingContext,&this->VisibleMeshDrawCommands,true,param_3->Scene,
                 local_38 + 1,local_38,local_res20);
      this->bWasDrawCommandsSetup = true;
    }
    if (param_2->bIsViewInfo == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("View.bIsViewInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SimpleMeshDrawCommandPass.cpp"
                         ,0x32,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar1 = param_2[1].PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
    if (dVar1 == 0.0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((longlong)dVar1 + 0x364);
    }
    if ((*(char *)param_2[1].PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64 == '\0') &&
       (dVar1 != 0.0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCommitted || UploadData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                         ,0x74,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar1 = param_2[1].PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
    if (dVar1 != 0.0) {
      iVar4 = *(int *)((longlong)dVar1 + 0x360);
    }
    FInstanceCullingContext::SetDynamicPrimitiveInstanceOffsets
              (&this->InstanceCullingContext,iVar4,iVar5);
    FInstanceCullingContext::BuildRenderingCommands
              (&this->InstanceCullingContext,param_1,param_3,param_4);
    this->bSupportsScenePrimitives = true;
  }
  return;
}

// BuildRenderingCommands @ 1456752d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleMeshDrawCommandPass::BuildRenderingCommands
          (FSimpleMeshDrawCommandPass *this,FRDGBuilder *param_1,FSceneView *param_2,FScene *param_3
          ,FInstanceCullingDrawParams *param_4)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FIdentityFunctor local_res8 [8];
  int local_res20 [2];
  int local_38 [4];
  
  ApplyViewOverridesToMeshDrawCommands
            (param_2,&this->VisibleMeshDrawCommands,&this->DynamicMeshDrawCommandStorage,
             &this->GraphicsMinimalPipelineStateSet,&this->bNeedsInitialization);
  AlgoImpl::
  IntroSortInternal<FVisibleMeshDrawCommand,int,FIdentityFunctor,TDereferenceWrapper<FVisibleMeshDrawCommand,FCompareFMeshDrawCommands>_>
            ((this->VisibleMeshDrawCommands).AllocatorInstance.Data,
             (this->VisibleMeshDrawCommands).ArrayNum,local_res8[0],
             (FCompareFMeshDrawCommands *)local_res8);
  if ((param_3->GPUScene).bIsEnabled != false) {
    iVar4 = 0;
    local_38[1] = 0;
    local_38[0] = 0;
    local_res20[0] = 0;
    if (this->bWasDrawCommandsSetup == false) {
      FInstanceCullingContext::SetupDrawCommands
                (&this->InstanceCullingContext,&this->VisibleMeshDrawCommands,true,
                 (param_3->GPUScene).Scene,local_38 + 1,local_38,local_res20);
      this->bWasDrawCommandsSetup = true;
    }
    if (param_2->bIsViewInfo == false) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("View.bIsViewInfo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SimpleMeshDrawCommandPass.cpp"
                         ,0x32,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar1 = param_2[1].PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
    if (dVar1 == 0.0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((longlong)dVar1 + 0x364);
    }
    if ((*(char *)param_2[1].PreviousViewTransform.TypedValue.Scale3D.ZW.m128d_f64 == '\0') &&
       (dVar1 != 0.0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bCommitted || UploadData == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                         ,0x74,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar1 = param_2[1].PreviousViewTransform.TypedValue.Scale3D.XY.m128d_f64[1];
    if (dVar1 != 0.0) {
      iVar4 = *(int *)((longlong)dVar1 + 0x360);
    }
    FInstanceCullingContext::SetDynamicPrimitiveInstanceOffsets
              (&this->InstanceCullingContext,iVar4,iVar5);
    FInstanceCullingContext::BuildRenderingCommands
              (&this->InstanceCullingContext,param_1,&param_3->GPUScene,param_4);
    this->bSupportsScenePrimitives = true;
  }
  return;
}

// SubmitDraw @ 1456a3e60

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __thiscall
FSimpleMeshDrawCommandPass::SubmitDraw
          (FSimpleMeshDrawCommandPass *this,FRHICommandList *param_1,
          FInstanceCullingDrawParams *param_2)

{
  int iVar1;
  uint uVar2;
  FMeshDrawCommandOverrideArgs *pFVar3;
  FMeshDrawCommandOverrideArgs local_78;
  FMeshDrawCommandOverrideArgs local_40;
  
  iVar1 = (this->VisibleMeshDrawCommands).ArrayNum;
  if (0 < iVar1) {
    if (this->bSupportsScenePrimitives == false) {
      local_78.RootConstants.TypedValue.field0_0x0._s_0.W._0_1_ = 0;
      local_78.InstanceCullingStaticUB._4_4_ = 0;
      local_78.InstanceBuffer = (FRHIBuffer *)0x0;
      local_78.IndirectArgsBuffer = (FRHIBuffer *)0x0;
      local_78.InstanceDataByteOffset._0_1_ = 0xff;
      if ((this->InstanceCullingContext).bUsesUniformBufferView == false) {
        pFVar3 = GetMeshDrawCommandOverrideArgs(&local_40,param_2);
        local_78.InstanceBuffer = pFVar3->InstanceBuffer;
      }
      else {
        local_78.InstanceDataByteOffset._0_1_ =
             (this->InstanceCullingContext).InstanceCullingStaticSlot;
      }
      local_78.InstanceCullingStaticUB._0_4_ = 0;
      uVar2 = FInstanceCullingContext::GetInstanceIdBufferStride
                        ((this->InstanceCullingContext).ShaderPlatform);
      SubmitMeshDrawCommandsRange
                (&this->VisibleMeshDrawCommands,&this->GraphicsMinimalPipelineStateSet,
                 (FMeshDrawCommandSceneArgs *)&local_78,uVar2,false,0,
                 (this->VisibleMeshDrawCommands).ArrayNum,this->InstanceFactor,param_1);
    }
    else {
      uVar2 = this->InstanceFactor;
      pFVar3 = GetMeshDrawCommandOverrideArgs(&local_78,param_2);
      FInstanceCullingContext::SubmitDrawCommands
                (&this->InstanceCullingContext,&this->VisibleMeshDrawCommands,
                 &this->GraphicsMinimalPipelineStateSet,pFVar3,0,iVar1,uVar2,param_1);
    }
  }
  return;
}

