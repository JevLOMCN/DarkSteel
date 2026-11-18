// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// GetDynamicMeshElementsEmitter @ 148114e30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSpriteDynamicEmitterData::GetDynamicMeshElementsEmitter
          (FGPUSpriteDynamicEmitterData *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2
          ,FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FRHICommandListBase *pFVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  FRHIResource *pFVar6;
  FRHIResource *pFVar7;
  FParticleSimulationResources *this_00;
  FParticleSimulationGPU *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  Type TVar15;
  int iVar16;
  ESceneDepthPriorityGroup EVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_GPUSpritePreRenderTime> FVar19;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar20;
  FShaderParametersMetadata *pFVar21;
  TRefCountPtr<FRHIUniformBuffer> TVar22;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar23;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  TStatId TVar26;
  FParticleStateTextures *pFVar27;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar28;
  FVertexFactory *pFVar29;
  FPrimitiveDrawInterface *pFVar30;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar31;
  uint uVar32;
  FName FVar33;
  ForElementType<FMeshBatchElement> FVar34;
  ForElementType<FMeshBatchElement> FVar35;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar36;
  bool bVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  FColor_u_0 local_174;
  FRHICommandListBase *local_170;
  FName local_168;
  byte local_160;
  FName local_158;
  FAllocationInfo local_150;
  FName local_138;
  FRHIResource *local_128;
  FParticleSimulationResources *local_120;
  LARGE_INTEGER local_118;
  FStatMessage local_110;
  FSourceLocation local_f8;
  TVector2<double>_u_0 local_d8;
  TVector2<double>_u_0 local_c8;
  FName local_b8;
  longlong local_b0 [3];
  longlong local_98;
  longlong lStack_90;
  TVector2<float>_u_0 local_88;
  ForAnyElementType FStack_80;
  undefined8 local_78;
  ForAnyElementType FStack_70;
  undefined8 local_68;
  ForAnyElementType FStack_60;
  undefined8 local_58;
  ForAnyElementType FStack_50;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  
  TVar15 = FSceneViewFamily::GetFeatureLevel(param_3);
  if ((param_5->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar4 = (FRHICommandListBase *)param_5->RHICmdList;
  if (FXConsoleVariables::bAllowGPUParticles == 0) {
    return;
  }
  if (GRHIGlobals.SupportsWideMRT == false) {
    return;
  }
  if (ZPULL(GPixelFormats[0x11],0,1) == 0) {
    return;
  }
  if (GRHIGlobals.SupportsTexture3D == false) {
    return;
  }
  if (GFXCascadeGpuSpriteRenderingEnabled == false) {
    return;
  }
  FVar19 = StatPtr_STAT_GPUSpritePreRenderTime;
  local_170 = pFVar4;
  if (StatPtr_STAT_GPUSpritePreRenderTime ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSpritePreRenderTime>)0x0) {
    pFVar18 = ::FName::FName(&local_b8,"STAT_GPUSpritePreRenderTime");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_GPUSpritePreRenderTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSpritePreRenderTime,*pFVar18,
                        L"Sprite PreRender Time","STATGROUP_GPUParticles","STATCAT_Advanced",
                        L"GPU Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar13 = false;
  bVar11 = false;
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  FVar33 = *(FName *)FVar19;
  bVar12 = false;
  bVar14 = false;
  if ((FVar33.ComparisonIndex.Value.Value == 0) && (FVar33.Number == 0)) {
LAB_148115036:
    bVar11 = bVar14;
    bVar13 = bVar12;
    bVar12 = false;
    FVar33 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar11 = true;
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar33.ComparisonIndex.Value.Value;
        local_158.Number = FVar33.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                   ,0xbb6);
        bVar13 = true;
        bVar11 = true;
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148115036;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar12 = true;
  }
  if ((this->Simulation == (FParticleSimulationGPU *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Simulation",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,3000,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this->Simulation->SimulationIndex == -1) ||
     ((this->Simulation->VertexBuffer).ParticleCount < 1)) goto LAB_1481159cc;
  local_98 = *(longlong *)&(this->EmitterDynamicParameters).LWCTile.field0_0x0;
  lStack_90 = *(longlong *)((longlong)&(this->EmitterDynamicParameters).LWCTile.field0_0x0 + 8);
  local_88 = (this->EmitterDynamicParameters).LocalToWorldScale.field0_0x0;
  FStack_80.Data = *(FScriptContainerElement **)&(this->EmitterDynamicParameters).EmitterInstRandom;
  local_78 = *(undefined8 *)&(this->EmitterDynamicParameters).AxisLockRight.field0_0x0;
  FStack_70.Data =
       *(FScriptContainerElement **)
        ((longlong)&(this->EmitterDynamicParameters).AxisLockRight.field0_0x0 + 8);
  local_68 = *(undefined8 *)&(this->EmitterDynamicParameters).AxisLockUp.field0_0x0;
  FStack_60.Data =
       *(FScriptContainerElement **)
        ((longlong)&(this->EmitterDynamicParameters).AxisLockUp.field0_0x0 + 8);
  local_58 = *(undefined8 *)&(this->EmitterDynamicParameters).DynamicColor.field0_0x0;
  FStack_50.Data =
       *(FScriptContainerElement **)
        ((longlong)&(this->EmitterDynamicParameters).DynamicColor.field0_0x0 + 8);
  _local_48 = *(undefined8 *)&(this->EmitterDynamicParameters).MacroUVParameters.field0_0x0;
  uStack_40 = *(FScriptContainerElement **)
               ((longlong)&(this->EmitterDynamicParameters).MacroUVParameters.field0_0x0 + 8);
  FParticleSystemSceneProxy::GetObjectPositionAndScale
            (param_1,param_2,(TVector2<double> *)&local_d8._s_0,(TVector2<double> *)&local_c8._s_0);
  fStack_44 = (float)local_d8._s_0.Y;
  local_48 = (float)local_d8._s_0.X;
  uStack_40._4_4_ = (float)local_c8._s_0.Y;
  uStack_40._0_4_ = (float)local_c8._s_0.X;
  if (this->bUseLocalSpace == false) {
    FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer(param_1,pFVar4);
  }
  bVar14 = this->bIsMaterialTranslucent;
  if ((FXConsoleVariables::bAllowGPUSorting == 0) || (bVar14 == false)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  paVar5 = &param_5->OneFrameResources->Next;
  local_120 = this->FXSystem->ParticleSimulationResources;
  aVar20 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x1b0,8);
  *(undefined8 *)((longlong)aVar20 + 8) = 0;
  *(undefined ***)aVar20 =
       &
       ___7__TObject_VFGPUSpriteCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar24.Next = *paVar5;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar20 + 8) = TVar24.Next;
    LOCK();
    aVar23 = *paVar5;
    bVar37 = TVar24.Next == aVar23;
    if (bVar37) {
      *paVar5 = aVar20;
      aVar23 = TVar24.Next;
    }
    UNLOCK();
    TVar24.Next = aVar23;
  } while (!bVar37);
  pFVar29 = (FVertexFactory *)((longlong)aVar20 + 0x18);
  *(undefined ***)((longlong)aVar20 + 0x10) = &___7FGPUSpriteCollectorResources__6B_;
  FVertexFactory::FVertexFactory(pFVar29,TVar15);
  pFVar29->_padding_ = (longlong)&___7FGPUSpriteVertexFactory__6B_;
  plVar2 = (longlong *)((longlong)aVar20 + 0x1a8);
  *(undefined8 *)((longlong)aVar20 + 0x168) = 0;
  *plVar2 = 0;
  (**(code **)(pFVar29->_padding_ + 0x18))(pFVar29,local_170);
  pFVar21 = FGPUSpriteEmitterDynamicUniformParameters::GetStructMetadata();
  if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar37)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TVar22 = RHICreateUniformBuffer
                     (&local_128,(FRHIUniformBufferLayout *)&local_98,
                      (EUniformBufferUsage)(pFVar21->Layout).Reference,ValidateResources);
  pFVar6 = (FRHIResource *)(TVar22.Reference)->_padding_;
  if (pFVar6 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar6);
    pFVar21 = FGPUSpriteEmitterDynamicUniformParameters::GetStructMetadata();
    if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar37)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((FName)(pFVar21->Layout).Reference != pFVar6[2].OwnerName) {
      pFVar21 = FGPUSpriteEmitterDynamicUniformParameters::GetStructMetadata();
      if (((pFVar21->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar37)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar37) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  if (local_128 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_128);
  }
  if (plVar2 != local_b0) {
    pFVar7 = (FRHIResource *)*plVar2;
    *plVar2 = (longlong)pFVar6;
    pFVar6 = pFVar7;
  }
  if (pFVar6 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar6);
  }
  TVar36 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
  TVar28 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
  if ((bVar10) && (TVar28 = TVar36, this->SortMode == PSORTMODE_DistanceToView)) {
    if ((this->FXSystem->ParticleSimulationResources->TileAllocator).bAllowResizing == false) {
      local_150.BufferSRV.Reference = (FRHIShaderResourceView *)0x0;
      local_150.BufferOffset = 0xffffffff;
      local_150.SortBatchId = -1;
      local_150.ElementIndex = -1;
      bVar14 = FFXSystem::AddSortedGPUSimulation
                         (this->FXSystem,local_170,this->Simulation,
                          &(param_2->ViewMatrices).ViewOrigin,bVar14,&local_150);
      TVar28 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
      if (bVar14) {
        paVar5 = &param_5->OneFrameResources->Next;
        aVar23 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x28,8);
        *(undefined8 *)((longlong)aVar23 + 8) = 0;
        *(undefined ***)aVar23 =
             &
             ___7__TObject_UFGPUSpriteMeshDataUserData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
        ;
        TVar28 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)((longlong)aVar23 + 0x10);
        TVar24.Next = *paVar5;
        do {
          *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)((longlong)aVar23 + 8) = TVar24.Next;
          LOCK();
          aVar25 = *paVar5;
          bVar14 = TVar24.Next == aVar25;
          if (bVar14) {
            *paVar5 = aVar23;
            aVar25 = TVar24.Next;
          }
          UNLOCK();
          TVar24.Next = aVar25;
        } while (!bVar14);
        *(undefined4 *)((longlong)aVar23 + 0x1c) = 0;
        *(undefined4 *)((longlong)aVar23 + 0x18) = 0;
        *(undefined ***)TVar28 = &___7FGPUSpriteMeshDataUserData__6B_;
        *(undefined8 *)((longlong)aVar23 + 0x20) = 0;
        *(uint *)((longlong)aVar23 + 0x18) = local_150.BufferOffset;
        if (local_150.BufferSRV.Reference == (FRHIShaderResourceView *)0x0) goto LAB_148115474;
        *(FRHIShaderResourceView **)((longlong)aVar23 + 0x20) = local_150.BufferSRV.Reference;
        FRHIResource::AddRef((FRHIResource *)local_150.BufferSRV.Reference);
      }
      if (local_150.BufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_150.BufferSRV.Reference);
      }
    }
    else if (2 < (byte)LogParticles._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_virtual_void___cdecl_FGPUSpriteDynamicEmitterData::GetDynamicMeshElementsEmitter(FParticleSystemSceneProxy_const*___ptr64,FSceneView_const*___ptr64,FSceneViewFamily_const&___ptr64,int,FMeshElementCollector&___ptr64)const___ptr64'
                  ::__l25::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
  }
LAB_148115474:
  if (((int)(this->Simulation->VertexBuffer)._padding_ == -1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Simulation->VertexBuffer.IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xbee,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  *(FRHIShaderResourceView **)((longlong)aVar20 + 0x170) =
       (this->Simulation->VertexBuffer).VertexBufferSRV.Reference;
  iVar3 = (this->Simulation->VertexBuffer).ParticleCount;
  TVar26 = FThreadSafeStaticStatInner<FStat_STAT_GPUSpriteRenderingTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_GPUSpriteRenderingTime,1> *)
                      &StatPtr_STAT_GPUSpriteRenderingTime);
  local_f8.Impl._Line = 0xbf5;
  local_f8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
  ;
  local_f8.Impl._Column = 6;
  local_f8.Impl._Function =
       "void __cdecl FGPUSpriteDynamicEmitterData::GetDynamicMeshElementsEmitter(const class FParticleSystemSceneProxy *,const class FSceneView *,const class FSceneViewFamily &,int,class FMeshElementCollector &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_168,*(TStatIdData **)&(TVar26.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f8);
  this_00 = this->FXSystem->ParticleSimulationResources;
  pFVar27 = FParticleSimulationResources::GetVisualizeStateTextures(this_00);
  *(TUniformBufferRef<FGPUSpriteEmitterUniformParameters> *)((longlong)aVar20 + 0x160) =
       this->Resources->UniformBuffer;
  pFVar6 = (FRHIResource *)*plVar2;
  pFVar7 = *(FRHIResource **)((longlong)aVar20 + 0x168);
  if (pFVar7 != pFVar6) {
    *(FRHIResource **)((longlong)aVar20 + 0x168) = pFVar6;
    if (pFVar6 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar6);
    }
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
    }
  }
  *(FRHITexture **)((longlong)aVar20 + 0x178) = (pFVar27->PositionTextureRHI).Reference;
  *(FRHITexture **)((longlong)aVar20 + 0x180) = (pFVar27->VelocityTextureRHI).Reference;
  *(FRHITexture **)((longlong)aVar20 + 0x188) =
       (this_00->RenderAttributesTexture).TextureRHI.Reference;
  *(undefined8 *)((longlong)aVar20 + 400) = *(undefined8 *)&(this_00->LWCTile).field0_0x0;
  *(float *)((longlong)aVar20 + 0x198) = (this_00->LWCTile).field0_0x0._s_0.Z;
  if ((local_120->TileAllocator).bAllowResizing == false) {
    fVar40 = 0.0;
    fVar39 = __real_3f800000;
    fVar38 = __real_3f800000;
  }
  else {
    fVar40 = __real_3f800000;
    fVar39 = (float)GParticleSimulationDynTextureSizeXY /
             (float)(local_120->SimulationResourcesSize).field0_0x0._s_0.X;
    fVar38 = (float)GParticleSimulationDynTextureSizeXY /
             (float)(local_120->SimulationResourcesSize).field0_0x0._s_0.Y;
  }
  *(float *)((longlong)aVar20 + 0x19c) = fVar39;
  *(float *)((longlong)aVar20 + 0x1a0) = fVar38;
  *(float *)((longlong)aVar20 + 0x1a4) = fVar40;
  iVar16 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           ::Add(&param_5->MeshBatchStorage,1);
  uVar32 = iVar16 / 0x49;
  uVar31 = 0;
  if ((int)uVar32 < (param_5->MeshBatchStorage).Chunks.Array.ArrayNum) {
    uVar31 = ~uVar32 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar34 = (ForElementType<FMeshBatchElement>)
           ((longlong)(param_5->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar32] +
           (ulonglong)(uint)(iVar16 % 0x49) * 0xe0);
  if ((*(int *)((longlong)FVar34 + 0xa0) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar35 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar34 + 0x98);
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar34 + 0x98) ==
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar35 = FVar34;
  }
  *(TGlobalResource<FParticleIndexBuffer,1> **)((longlong)FVar35 + 0x18) = &GParticleIndexBuffer;
  *(TUniformBufferRef<FPrimitiveUniformShaderParameters> *)((longlong)FVar35 + 0x38) = TVar28;
  *(undefined4 *)((longlong)FVar35 + 0x5c) = 0x20;
  *(int *)((longlong)FVar35 + 0x60) = (int)(iVar3 + (iVar3 >> 0x1f & 0xfU)) >> 4;
  *(undefined4 *)((longlong)FVar35 + 0x58) = 0;
  *(FVertexFactory **)((longlong)FVar34 + 0xa8) = pFVar29;
  *(undefined8 *)((longlong)FVar34 + 0xb8) = 0;
  if (this->bUseLocalSpace == false) {
    if (((param_1->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI ==
         (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("UniformBufferRHI.GetReference()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                            ,0x65,
                            L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                           ), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((param_1->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI ==
         (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("UniformBufferRHI.GetReference()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                            ,0x66,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar28 = (param_1->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI;
  }
  else {
    TVar28 = *(TUniformBufferRef<FPrimitiveUniformShaderParameters> *)&param_1->field_0x258;
  }
  *(TUniformBufferRef<FPrimitiveUniformShaderParameters> *)FVar35 = TVar28;
  *(undefined4 *)((longlong)FVar35 + 0x68) = 0;
  *(undefined4 *)((longlong)FVar35 + 0x6c) = 3;
  uVar32 = ((uint)(byte)param_1->field_0x78 ^ *(uint *)((longlong)FVar34 + 0xd4)) & 1 ^
           *(uint *)((longlong)FVar34 + 0xd4);
  *(uint *)((longlong)FVar34 + 0xd4) = uVar32;
  *(uint *)((longlong)FVar34 + 0xd4) = ((uint)(byte)param_1->field_0x298 * 2 ^ uVar32) & 4 ^ uVar32;
  EVar17 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_2);
  *(ESceneDepthPriorityGroup *)((longlong)FVar34 + 0xd4) =
       (EVar17 << 10 ^ *(uint *)((longlong)FVar34 + 0xd4)) & 0x1c00 ^
       *(uint *)((longlong)FVar34 + 0xd4);
  if ((this->MaterialProxy == (FMaterialRenderProxy *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xc38,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar32 = *(uint *)((longlong)FVar34 + 0xd4);
  *(FMaterialRenderProxy **)((longlong)FVar34 + 0xb0) = this->MaterialProxy;
  *(uint *)((longlong)FVar34 + 0xd4) = uVar32 & 0xfffffc7f | 0x2000;
  *(uint *)((longlong)FVar34 + 0xd4) =
       -(uint)((param_1->field_0x79 & 6) != 0) & 0x4000 | uVar32 & 0xffffbc7f | 0x2000;
  FMeshElementCollector::AddMesh(param_5,param_4,(FMeshBatch *)FVar34);
  if ((local_160 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_160 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_160 & 4) != 0) {
    FThreadStats::AddMessage(local_168,CycleScopeEnd);
  }
  pFVar8 = this->Simulation;
  local_160 = 0;
  if (((pFVar8 != (FParticleSimulationGPU *)0x0) &&
      ((pFVar8->LocalVectorField).Resource.Reference != (FVectorFieldResource *)0x0)) &&
     ((param_3->EngineShowFlags).VectorFields != 0)) {
    if (pFVar8->VectorFieldVisualizationVertexFactory ==
        (FVectorFieldVisualizationVertexFactory *)0x0) {
      pFVar29 = ::operator_new(0x140);
      if (pFVar29 == (FVertexFactory *)0x0) {
        pFVar29 = (FVertexFactory *)0x0;
      }
      else {
        FVertexFactory::FVertexFactory(pFVar29,TVar15);
        pFVar29->_padding_ = (longlong)&___7FVectorFieldVisualizationVertexFactory__6B_;
      }
      pFVar8->VectorFieldVisualizationVertexFactory =
           (FVectorFieldVisualizationVertexFactory *)pFVar29;
      (**(code **)(pFVar29->_padding_ + 0x18))(pFVar29,local_170);
    }
    if ((this->Simulation->VectorFieldVisualizationVertexFactory ==
         (FVectorFieldVisualizationVertexFactory *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Simulation->VectorFieldVisualizationVertexFactory",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                            ,0xc2a,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = this->Simulation;
    pFVar30 = FMeshElementCollector::GetPDI(param_5,param_4);
    DrawVectorFieldBounds(pFVar30,param_2,&pFVar8->LocalVectorField);
    GetVectorFieldMesh(this->Simulation->VectorFieldVisualizationVertexFactory,
                       &this->Simulation->LocalVectorField,param_4,param_5);
  }
LAB_1481159cc:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar12) && (FVar33 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_110.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_110.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_118);
      local_110.StatData.Pad[4] = '\0';
      local_110.StatData.Pad[5] = '\0';
      local_110.StatData.Pad[6] = '\0';
      local_110.StatData.Pad[7] = '\0';
      local_110.StatData.Pad[0] = local_118.s.LowPart._0_1_;
      local_110.StatData.Pad[1] = local_118.s.LowPart._1_1_;
      local_110.StatData.Pad[2] = local_118.s.LowPart._2_1_;
      local_110.StatData.Pad[3] = local_118.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_110);
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

// GetMacroUVOverride @ 1481162c0

/* WARNING: Enum "Type": Some values do not have unique names */

FMacroUVOverride * __thiscall
FGPUSpriteDynamicEmitterData::GetMacroUVOverride(FGPUSpriteDynamicEmitterData *this)

{
  return &this->MacroUVOverride;
}

// GetMaterialRenderProxy @ 1481162e0

/* WARNING: Enum "Type": Some values do not have unique names */

FMaterialRenderProxy * __thiscall
FGPUSpriteDynamicEmitterData::GetMaterialRenderProxy(FGPUSpriteDynamicEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialRenderProxy *pFVar3;
  
  if (this->MaterialProxy != (FMaterialRenderProxy *)0x0) {
    return this->MaterialProxy;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("MaterialProxy",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                     ,0xc3e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialRenderProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->MaterialProxy;
}

// GetSource @ 148119150

/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterReplayDataBase * __thiscall
FGPUSpriteDynamicEmitterData::GetSource(FGPUSpriteDynamicEmitterData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.Scale.field0_0x0._s_0.X = 1.0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData._padding_ = (longlong)&___7FDynamicEmitterReplayDataBase__6B_;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.Scale.field0_0x0._s_0.Y = 1.0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.eEmitterType = DET_Unknown;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.ActiveParticleCount = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.ParticleStride = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.DataContainer.MemBlockSize = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.DataContainer.ParticleDataNumBytes = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.DataContainer.ParticleIndicesNumShorts = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.DataContainer.ParticleData = (uchar *)0x0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.DataContainer.ParticleIndices = (ushort *)0x0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.MacroUVOverride.bOverride = false;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.MacroUVOverride._4_8_ = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData.MacroUVOverride.Position.field0_0x0._4_8_ = 0;
      `public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
      ::__l2::DummyData._64_8_ = 0x3f800000;
      atexit(`FGPUSpriteDynamicEmitterData::GetSource'::__l2::
             _dynamic_atexit_destructor_for__DummyData__);
      _Init_thread_footer(&`public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
              ::__l2::DummyData;
    }
  }
  return &`public:_virtual_struct_FDynamicEmitterReplayDataBase_const&___ptr64___cdecl_FGPUSpriteDynamicEmitterData::GetSource(void)const___ptr64'
          ::__l2::DummyData;
}

// ReleaseRenderThreadResources @ 1481290c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteDynamicEmitterData::ReleaseRenderThreadResources
          (FGPUSpriteDynamicEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  return;
}

// UpdateRenderThreadResourcesEmitter @ 148142080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FGPUSpriteDynamicEmitterData::UpdateRenderThreadResourcesEmitter
          (FGPUSpriteDynamicEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  int *piVar1;
  EShaderPlatform EVar2;
  undefined4 uVar3;
  uint uVar4;
  Type TVar5;
  FParticleSimulationGPU *pFVar6;
  FFXSystem *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  double dVar10;
  FScriptContainerElement *pFVar11;
  float fVar12;
  int iVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  FVectorFieldInstance *this_00;
  
  if (this->Simulation == (FParticleSimulationGPU *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Simulation",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                        ,0xb67,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar6 = this->Simulation;
  uVar9 = *(undefined8 *)
           ((longlong)&(this->PerFrameSimulationParameters).PointAttractor.field0_0x0 + 8);
  *(undefined8 *)&(pFVar6->PerFrameSimulationParameters).PointAttractor.field0_0x0 =
       *(undefined8 *)&(this->PerFrameSimulationParameters).PointAttractor.field0_0x0;
  *(undefined8 *)((longlong)&(pFVar6->PerFrameSimulationParameters).PointAttractor.field0_0x0 + 8) =
       uVar9;
  uVar9 = *(undefined8 *)
           ((longlong)
            &(this->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0 + 8)
  ;
  *(undefined8 *)
   &(pFVar6->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0 =
       *(undefined8 *)
        &(this->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0;
  *(undefined8 *)
   ((longlong)&(pFVar6->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0
   + 8) = uVar9;
  fVar12 = (this->PerFrameSimulationParameters).DeltaSecondsInFix;
  iVar13 = (this->PerFrameSimulationParameters).NumIterationsInFix;
  (pFVar6->PerFrameSimulationParameters).LocalToWorldScale.field0_0x0 =
       (this->PerFrameSimulationParameters).LocalToWorldScale.field0_0x0;
  (pFVar6->PerFrameSimulationParameters).DeltaSecondsInFix = fVar12;
  (pFVar6->PerFrameSimulationParameters).NumIterationsInFix = iVar13;
  iVar13 = (this->PerFrameSimulationParameters).NumIterationsInVar;
  uVar9 = *(undefined8 *)&(this->PerFrameSimulationParameters).DeltaSeconds;
  (pFVar6->PerFrameSimulationParameters).DeltaSecondsInVar =
       (this->PerFrameSimulationParameters).DeltaSecondsInVar;
  (pFVar6->PerFrameSimulationParameters).NumIterationsInVar = iVar13;
  *(undefined8 *)&(pFVar6->PerFrameSimulationParameters).DeltaSeconds = uVar9;
  uVar9 = *(undefined8 *)&(this->PerFrameSimulationParameters).field_0x48;
  *(undefined8 *)((longlong)&(pFVar6->PerFrameSimulationParameters).LWCTile.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(this->PerFrameSimulationParameters).LWCTile.field0_0x0 + 4);
  *(undefined8 *)&(pFVar6->PerFrameSimulationParameters).field_0x48 = uVar9;
  (this->Simulation->LocalVectorField).Intensity = this->LocalVectorFieldIntensity;
  (this->Simulation->LocalVectorField).Tightness = this->LocalVectorFieldTightness;
  uVar3 = *(undefined4 *)&(this->Simulation->LocalVectorField).field_0x1cc;
  *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc =
       (ZPULL(uVar3,0,1) ^ this->bLocalVectorFieldTileX) & 1 ^ uVar3;
  uVar4 = *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc;
  *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc =
       (uVar4 ^ *(uint *)&this->field_0x1e8) & 2 ^ uVar4;
  uVar4 = *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc;
  *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc =
       (uVar4 ^ *(uint *)&this->field_0x1e8) & 4 ^ uVar4;
  uVar4 = *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc;
  *(uint *)&(this->Simulation->LocalVectorField).field_0x1cc =
       (uVar4 ^ *(uint *)&this->field_0x1e8) & 8 ^ uVar4;
  this_00 = &this->Simulation->LocalVectorField;
  if ((this_00->Resource).Reference != (FVectorFieldResource *)0x0) {
    FVectorFieldInstance::UpdateTransforms(this_00,&this->LocalVectorFieldToWorld);
  }
  dVar10 = (this->SimulationBounds).Min.field0_0x0._s_0.Y;
  pFVar6 = this->Simulation;
  (pFVar6->Bounds).Min.field0_0x0._s_0.X = (this->SimulationBounds).Min.field0_0x0._s_0.X;
  (pFVar6->Bounds).Min.field0_0x0._s_0.Y = dVar10;
  dVar10 = (this->SimulationBounds).Max.field0_0x0._s_0.X;
  (pFVar6->Bounds).Min.field0_0x0._s_0.Z = (this->SimulationBounds).Min.field0_0x0._s_0.Z;
  (pFVar6->Bounds).Max.field0_0x0._s_0.X = dVar10;
  dVar10 = (this->SimulationBounds).Max.field0_0x0._s_0.Z;
  (pFVar6->Bounds).Max.field0_0x0._s_0.Y = (this->SimulationBounds).Max.field0_0x0._s_0.Y;
  (pFVar6->Bounds).Max.field0_0x0._s_0.Z = dVar10;
  uVar14 = (this->SimulationBounds).Pad[0];
  uVar15 = (this->SimulationBounds).Pad[1];
  uVar16 = (this->SimulationBounds).Pad[2];
  uVar17 = (this->SimulationBounds).Pad[3];
  uVar18 = (this->SimulationBounds).Pad[4];
  uVar19 = (this->SimulationBounds).Pad[5];
  uVar20 = (this->SimulationBounds).Pad[6];
  (pFVar6->Bounds).IsValid = (this->SimulationBounds).IsValid;
  (pFVar6->Bounds).Pad[0] = uVar14;
  (pFVar6->Bounds).Pad[1] = uVar15;
  (pFVar6->Bounds).Pad[2] = uVar16;
  (pFVar6->Bounds).Pad[3] = uVar17;
  (pFVar6->Bounds).Pad[4] = uVar18;
  (pFVar6->Bounds).Pad[5] = uVar19;
  (pFVar6->Bounds).Pad[6] = uVar20;
  if ((this->NewParticles).ArrayNum != 0) {
    pFVar6 = this->Simulation;
    iVar13 = (this->NewParticles).ArrayNum;
    iVar21 = (this->NewParticles).ArrayMax;
    pFVar11 = (pFVar6->NewParticles).AllocatorInstance.Data;
    iVar22 = (pFVar6->NewParticles).ArrayNum;
    iVar23 = (pFVar6->NewParticles).ArrayMax;
    (pFVar6->NewParticles).AllocatorInstance.Data = (this->NewParticles).AllocatorInstance.Data;
    (pFVar6->NewParticles).ArrayNum = iVar13;
    (pFVar6->NewParticles).ArrayMax = iVar21;
    (this->NewParticles).AllocatorInstance.Data = pFVar11;
    (this->NewParticles).ArrayNum = iVar22;
    (this->NewParticles).ArrayMax = iVar23;
  }
  if ((this->TilesToClear).ArrayNum != 0) {
    pFVar6 = this->Simulation;
    iVar13 = (this->TilesToClear).ArrayNum;
    iVar21 = (this->TilesToClear).ArrayMax;
    pFVar11 = (pFVar6->TilesToClear).AllocatorInstance.Data;
    iVar22 = (pFVar6->TilesToClear).ArrayNum;
    iVar23 = (pFVar6->TilesToClear).ArrayMax;
    (pFVar6->TilesToClear).AllocatorInstance.Data = (this->TilesToClear).AllocatorInstance.Data;
    (pFVar6->TilesToClear).ArrayNum = iVar13;
    (pFVar6->TilesToClear).ArrayMax = iVar21;
    (this->TilesToClear).AllocatorInstance.Data = pFVar11;
    (this->TilesToClear).ArrayNum = iVar22;
    (this->TilesToClear).ArrayMax = iVar23;
  }
  bVar24 = this->bIsMaterialTranslucent;
  bVar25 = IsFeatureLevelSupported
                     ((FStaticShaderPlatform)
                      GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FXSystem->FeatureLevel],
                      SM5);
  pFVar6 = this->Simulation;
  TVar5 = pFVar6->SimulationPhase;
  if (bVar24 != false) {
    if (pFVar6->bWantsCollision == false) goto LAB_14814234c;
    if (pFVar6->CollisionMode == SceneDepth) {
      pFVar6->SimulationPhase = (uint)bVar25 * 2;
      goto LAB_14814234c;
    }
  }
  if ((pFVar6->bWantsCollision != false) && (pFVar6->CollisionMode == DistanceField)) {
    EVar2 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FXSystem->FeatureLevel];
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bContainsValidPlatformInfo == 0) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x118,L"");
      if (bVar26) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar2].bSupportsDistanceFields == 0) {
      if ((bVar24 == false) || (!bVar25)) {
        this->Simulation->SimulationPhase = First;
      }
      else {
        this->Simulation->SimulationPhase = CollisionDepthBuffer;
      }
    }
    else {
      this->Simulation->SimulationPhase = CollisionDistanceField;
    }
  }
LAB_14814234c:
  pFVar6 = this->Simulation;
  if (pFVar6->SimulationPhase != TVar5) {
    pFVar7 = this->FXSystem;
    piVar1 = pFVar7->NumGPUSimulations + (int)TVar5;
    *piVar1 = *piVar1 + -1;
    piVar1 = pFVar7->NumGPUSimulations + (int)pFVar6->SimulationPhase;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

