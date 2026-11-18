// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// GetDynamicParameterVertexStride @ 148115ae0

int __thiscall
FDynamicSpriteEmitterData::GetDynamicParameterVertexStride(FDynamicSpriteEmitterData *this)

{
  return 0x10;
}

// GetDynamicVertexStride @ 148115b40

int __thiscall
FDynamicSpriteEmitterData::GetDynamicVertexStride(FDynamicSpriteEmitterData *this,Type param_1)

{
  return 0x40;
}

// GetSource @ 148119140

FDynamicEmitterReplayDataBase * __thiscall
FDynamicSpriteEmitterData::GetSource(FDynamicSpriteEmitterData *this)

{
  return (FDynamicEmitterReplayDataBase *)&this->Source;
}

// GetSourceData @ 148119230

FDynamicSpriteEmitterReplayDataBase * __thiscall
FDynamicSpriteEmitterData::GetSourceData(FDynamicSpriteEmitterData *this)

{
  return (FDynamicSpriteEmitterReplayDataBase *)&this->Source;
}

// GatherSimpleLights @ 1481f4100

void __thiscall
FDynamicSpriteEmitterData::GatherSimpleLights
          (FDynamicSpriteEmitterData *this,FParticleSystemSceneProxy *param_1,
          FSceneViewFamily *param_2,FSimpleLightArray *param_3)

{
  GatherParticleLightData
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source,
             (TMatrix<double> *)&param_1->field_0x110,param_2,param_3);
  return;
}

// GetDynamicMeshElementsEmitter @ 1481f88e0

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
FDynamicSpriteEmitterData::GetDynamicMeshElementsEmitter
          (FDynamicSpriteEmitterData *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  FVertexFactory *this_00;
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  Type TVar4;
  int iVar5;
  FRHICommandListBase *pFVar6;
  longlong lVar7;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar8;
  FRHIResource *pFVar9;
  FRHIResource *pFVar10;
  uchar *puVar11;
  FVertexBuffer *pFVar12;
  bool bVar13;
  bool bVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  ESceneDepthPriorityGroup EVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_SpriteRenderingTime> FVar25;
  longlong lVar26;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar28;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar29;
  FGlobalDynamicVertexBuffer *this_01;
  FGlobalDynamicVertexBufferAllocation *pFVar30;
  TStatId TVar31;
  FMaterial *pFVar32;
  FParticleOrder *pFVar33;
  FShaderParametersMetadata *pFVar34;
  TRefCountPtr<FRHIUniformBuffer> TVar35;
  undefined8 *puVar36;
  ForElementType<FMeshBatchElement> FVar37;
  TGlobalResource<FSixTriangleParticleIndexBuffer,1> *pTVar38;
  FRHIUniformBuffer *pFVar39;
  UMaterial *pUVar40;
  FPrimitiveDrawInterface *pFVar41;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar42;
  ForElementType<FMeshBatchElement> FVar43;
  code *pcVar44;
  undefined4 uVar45;
  uchar *puVar46;
  FVertexBuffer *pFVar47;
  undefined8 uVar48;
  int local_2f4;
  undefined4 local_2ec;
  int local_2e0;
  FColor_u_0 local_2d0 [2];
  FName local_2c8;
  byte local_2c0;
  FName local_2b8;
  byte local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  uchar *local_270;
  FRHIResource *local_268;
  longlong *local_260;
  TGlobalResource<FParticleEightTexCoordVertexBuffer,1> *local_258;
  LARGE_INTEGER local_250;
  FStatMessage local_248;
  FSourceLocation local_238;
  FSourceLocation local_218;
  TVector2<double>_u_0 local_1f8;
  TVector2<double>_u_0 local_1e8;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FName local_188;
  longlong local_180 [3];
  undefined8 local_168;
  undefined8 local_150;
  FGlobalDynamicVertexBufferAllocation local_148;
  FGlobalDynamicVertexBufferAllocation local_130;
  undefined1 local_118 [120];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TVector2<float>_u_0 local_78;
  undefined8 uStack_70;
  
  FVar25 = StatPtr_STAT_SpriteRenderingTime;
  if (StatPtr_STAT_SpriteRenderingTime == (FThreadSafeStaticStat<FStat_STAT_SpriteRenderingTime>)0x0
     ) {
    pFVar24 = ::FName::FName(&local_1d8,"STAT_SpriteRenderingTime");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_SpriteRenderingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteRenderingTime,*pFVar24,
                        L"Sprite Render Time RT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar42 = *(FName *)FVar25;
  bVar14 = false;
  bVar13 = false;
  local_2a0.ComparisonIndex.Value = 0;
  local_2a0.Number = 0;
  bVar17 = false;
  bVar16 = false;
  if ((FVar42.ComparisonIndex.Value.Value == 0) && (FVar42.Number == 0)) {
LAB_1481f8a5c:
    bVar14 = bVar17;
    bVar13 = bVar16;
    bVar16 = false;
    FVar42 = local_2a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d0[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2a8.ComparisonIndex.Value = FVar42.ComparisonIndex.Value.Value;
        local_2a8.Number = FVar42.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2a8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x2a5);
        bVar14 = true;
        bVar13 = true;
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f8a5c;
    FThreadStats::AddMessage(FVar42,CycleScopeStart);
    bVar16 = true;
  }
  TVar4 = param_2->FeatureLevel;
  if ((param_5->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar17)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  pFVar6 = (FRHICommandListBase *)param_5->RHICmdList;
  lVar26 = (**(code **)(this->_padding_ + 0x50))(this);
  if ((((this->_padding_ & 2) == 0) || (lVar26 == 0)) || (GFXCascadeSpriteRenderingEnabled == false)
     ) goto LAB_1481f996b;
  cVar3 = *(char *)(lVar26 + 0xc0);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      pcVar44 = *(code **)(this->_padding_ + 0x60);
      pFVar41 = FMeshElementCollector::GetPDI(param_5,param_4);
      uVar48 = 0;
    }
    else {
      if (cVar3 != '\x02') goto LAB_1481f996b;
      pcVar44 = *(code **)(this->_padding_ + 0x60);
      pFVar41 = FMeshElementCollector::GetPDI(param_5,param_4);
      uVar48 = 1;
    }
    (*pcVar44)(this,param_1,pFVar41,param_2,uVar48);
    goto LAB_1481f996b;
  }
  iVar5 = *(int *)(lVar26 + 0xc);
  iVar19 = (**(code **)(this->_padding_ + 0x40))(this,TVar4);
  lVar7 = *(longlong *)(lVar26 + 0x68);
  uVar45 = 4;
  local_2e0 = 4;
  local_2f4 = 2;
  if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
    local_2e0 = *(int *)(lVar7 + 4);
    local_2f4 = *(int *)(lVar7 + 8);
  }
  bVar17 = FSceneView::IsInstancedStereoPass(param_2);
  uVar20 = bVar17 + 1;
  if (((local_2e0 - 4U & 0xfffffffb) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumVerticesPerParticle == 4 || NumVerticesPerParticle == 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x2c2,L""), bVar17)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  local_258 = &GParticleEightTexCoordVertexBuffer;
  if (local_2e0 == 4) {
    local_258 = (TGlobalResource<FParticleEightTexCoordVertexBuffer,1> *)
                &GParticleTexCoordVertexBuffer;
  }
  paVar8 = &param_5->OneFrameResources->Next;
  aVar27 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(400,8);
  *(undefined8 *)((longlong)aVar27 + 8) = 0;
  *(undefined ***)aVar27 =
       &
       ___7__TObject_VFDynamicSpriteCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar28.Next = *paVar8;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar27 + 8) = TVar28.Next;
    LOCK();
    aVar29 = *paVar8;
    bVar17 = TVar28.Next == aVar29;
    if (bVar17) {
      *paVar8 = aVar27;
      aVar29 = TVar28.Next;
    }
    UNLOCK();
    TVar28.Next = aVar29;
  } while (!bVar17);
  this_00 = (FVertexFactory *)((longlong)aVar27 + 0x18);
  *(undefined ***)((longlong)aVar27 + 0x10) = &___7FDynamicSpriteCollectorResources__6B_;
  FVertexFactory::FVertexFactory(this_00,TVar4);
  *(undefined2 *)((longlong)aVar27 + 0x180) = 0x100;
  uVar21 = 0;
  *(undefined4 *)((longlong)aVar27 + 0x160) = 0;
  this_00->_padding_ = (longlong)&___7FParticleSpriteVertexFactory__6B_;
  local_260 = (longlong *)((longlong)aVar27 + 0x188);
  *(undefined8 *)((longlong)aVar27 + 0x168) = 0;
  *(undefined4 *)((longlong)aVar27 + 0x170) = 0;
  *(undefined8 *)((longlong)aVar27 + 0x178) = 0;
  *(undefined4 *)((longlong)aVar27 + 0x184) = 0;
  *(undefined8 *)((longlong)aVar27 + 0x188) = 0;
  *(undefined4 *)((longlong)aVar27 + 0x158) = 0;
  if ((*(byte *)(*(longlong *)(lVar26 + 0x68) + 0x28) & 1) != 0) {
    uVar45 = *(undefined4 *)(*(longlong *)(lVar26 + 0x68) + 4);
  }
  *(undefined4 *)((longlong)aVar27 + 0x160) = uVar45;
  if ((this->_padding_ & 1) != 0) {
    uVar21 = (**(code **)(this->_padding_ + 0x48))(this);
  }
  lVar7 = this->_padding_;
  *(undefined4 *)((longlong)aVar27 + 0x184) = uVar21;
  *(byte *)((longlong)aVar27 + 0x181) = (byte)lVar7 & 1;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,pFVar6);
  if (*(char *)(lVar26 + 0xbc) == '\0') {
    FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer(param_1,pFVar6);
  }
  this_01 = FMeshElementCollector::GetDynamicVertexBuffer(param_5);
  local_2ec = 0;
  puVar46 = (uchar *)0x0;
  pFVar47 = (FVertexBuffer *)0x0;
  pFVar30 = FGlobalDynamicVertexBuffer::Allocate(this_01,&local_148,uVar20 * iVar19 * iVar5);
  local_150 = *(undefined8 *)&pFVar30->VertexOffset;
  puVar11 = pFVar30->Buffer;
  pFVar12 = pFVar30->VertexBuffer;
  bVar17 = FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(this_01);
  if ((bVar17) && (2 < (byte)LogParticles._0_1_)) {
    local_290.ComparisonIndex.Value = *(uint *)&param_1->field_0x230;
    local_290.Number = *(uint *)&param_1->field_0x234;
    ::FName::ToString(&local_290,&local_1b8);
    local_288.ComparisonIndex.Value = *(uint *)&param_1->field_0x238;
    local_288.Number = *(uint *)&param_1->field_0x23c;
    ::FName::ToString(&local_288,&local_1c8);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  if ((this->_padding_ & 1) != 0) {
    pFVar30 = FGlobalDynamicVertexBuffer::Allocate(this_01,&local_130,uVar20 * iVar5 * 0x10);
    local_168 = *(undefined8 *)&pFVar30->VertexOffset;
    puVar46 = pFVar30->Buffer;
    pFVar47 = pFVar30->VertexBuffer;
    bVar17 = FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(this_01);
    if ((bVar17) && (2 < (byte)LogParticles._0_1_)) {
      local_280.ComparisonIndex.Value = *(uint *)&param_1->field_0x230;
      local_280.Number = *(uint *)&param_1->field_0x234;
      ::FName::ToString(&local_280,&local_198);
      local_278.ComparisonIndex.Value = *(uint *)&param_1->field_0x238;
      local_278.Number = *(uint *)&param_1->field_0x23c;
      ::FName::ToString(&local_278,&local_1a8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
        local_2ec = (undefined4)local_168;
        goto LAB_1481f8ecc;
      }
    }
    local_2ec = (undefined4)local_168;
  }
LAB_1481f8ecc:
  local_270 = puVar11;
  if ((puVar11 != (uchar *)0x0) && (((this->_padding_ & 1) == 0 || (puVar46 != (uchar *)0x0)))) {
    bVar17 = false;
    if (*(int *)(lVar26 + 0x44) != 0) {
      TVar31.StatIdPtr =
           (TStatIdData *)
           StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData
      ;
      if (StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData
          == (FThreadSafeStaticStat<FStat_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData>
              )0x0) {
        pFVar24 = ::FName::FName(&local_1d0,
                                 "STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData"
                                );
        TVar31.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &
                        StatPtr_STAT_FDynamicSpriteEmitterData_GetDynamicMeshElementsEmitter_GetParticleOrderData
                        ,*pFVar24,
                        L"DynamicSpriteEmitterData GetDynamicMeshElementsEmitter GetParticleOrderData RT"
                        ,"STATGROUP_Particles","STATCAT_Advanced",L"Particles",true,true,ST_int64,
                        true,false,MCR_Invalid);
      }
      local_238.Impl._Line = 0x2ec;
      local_238.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
      ;
      local_238.Impl._Column = 6;
      local_238.Impl._Function =
           "void __cdecl FDynamicSpriteEmitterData::GetDynamicMeshElementsEmitter(const class FParticleSystemSceneProxy *,const class FSceneView *,const class FSceneViewFamily &,int,class FMeshElementCollector &) const"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_2c8,TVar31,CycleStat|ClearEveryFrame,false,&local_238)
      ;
      if ((((FMaterialRenderProxy *)this->_padding_ != (FMaterialRenderProxy *)0x0) &&
          (pFVar32 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                               ((FMaterialRenderProxy *)this->_padding_,TVar4),
          pFVar32 != (FMaterial *)0x0)) &&
         (((bVar18 = IsTranslucentOnlyBlendMode(pFVar32), bVar18 ||
           (((iVar22 = (**(code **)(pFVar32->_padding_ + 0x268))(pFVar32), iVar22 == 5 ||
             (bVar18 = IsAlphaHoldoutBlendMode(pFVar32), bVar18)) || (*(int *)(lVar26 + 0x44) == 3))
           )) || (*(int *)(lVar26 + 0x44) == 4)))) {
        bVar17 = true;
      }
      if ((local_2c0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_2c0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_2c0 & 4) != 0) {
        FThreadStats::AddMessage(local_2c8,CycleScopeEnd);
      }
      local_2c0 = 0;
    }
    TVar31.StatIdPtr = (TStatIdData *)StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks;
    if (StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks ==
        (FThreadSafeStaticStat<FStat_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks>)0x0) {
      pFVar24 = ::FName::FName(&local_188,"STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks");
      TVar31.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_FDynamicSpriteEmitterData_PerParticleWorkOrTasks,*pFVar24,
                      L"DynamicSpriteEmitterData PerParticleWorkOrTasks RT","STATGROUP_Particles",
                      "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_218.Impl._Line = 0x2f9;
    local_218.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
    ;
    local_218.Impl._Column = 6;
    local_218.Impl._Function =
         "void __cdecl FDynamicSpriteEmitterData::GetDynamicMeshElementsEmitter(const class FParticleSystemSceneProxy *,const class FSceneView *,const class FSceneViewFamily &,int,class FMeshElementCollector &) const"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_2b8,TVar31,CycleStat|ClearEveryFrame,false,&local_218);
    pFVar33 = (FParticleOrder *)0x0;
    if (bVar17) {
      pFVar33 = TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Malloc
                          ((longlong)iVar5 << 3,0x10);
      FDynamicSpriteEmitterDataBase::SortSpriteParticles
                ((FDynamicSpriteEmitterDataBase *)this,*(int *)(lVar26 + 0x44),
                 *(bool *)(lVar26 + 0xbc),*(int *)(lVar26 + 0xc),*(uchar **)(lVar26 + 0x28),
                 *(int *)(lVar26 + 0x10),*(ushort **)(lVar26 + 0x30),param_2,
                 (TMatrix<double> *)&param_1->field_0x110,pFVar33);
    }
    GetVertexAndIndexData
              (this,local_270,puVar46,(void *)0x0,pFVar33,&(param_2->ViewMatrices).ViewOrigin,
               (TMatrix<double> *)&param_1->field_0x110,uVar20);
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar33);
    if ((local_2b0 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_2b0 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_2b0 & 4) != 0) {
      FThreadStats::AddMessage(local_2b8,CycleScopeEnd);
    }
    local_2b0 = 0;
    local_118._0_8_ = *(undefined8 *)&(this->UniformParameters).AxisLockRight.field0_0x0;
    local_118._8_8_ =
         *(longlong *)((longlong)&(this->UniformParameters).AxisLockRight.field0_0x0 + 8);
    local_118._16_8_ = *(undefined8 *)&(this->UniformParameters).AxisLockUp.field0_0x0;
    local_118._24_8_ =
         *(undefined8 *)((longlong)&(this->UniformParameters).AxisLockUp.field0_0x0 + 8);
    local_118._32_8_ = *(undefined8 *)&(this->UniformParameters).TangentSelector.field0_0x0;
    local_118._40_8_ =
         *(undefined8 *)((longlong)&(this->UniformParameters).TangentSelector.field0_0x0 + 8);
    local_118._48_8_ = *(undefined8 *)&(this->UniformParameters).NormalsSphereCenter.field0_0x0;
    local_118._56_8_ =
         *(undefined8 *)((longlong)&(this->UniformParameters).NormalsSphereCenter.field0_0x0 + 8);
    local_118._64_8_ =
         *(undefined8 *)&(this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0;
    local_118._72_8_ =
         *(undefined8 *)
          ((longlong)&(this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 8);
    local_118._80_8_ = *(undefined8 *)&(this->UniformParameters).SubImageSize.field0_0x0;
    local_118._88_8_ =
         *(undefined8 *)((longlong)&(this->UniformParameters).SubImageSize.field0_0x0 + 8);
    local_118._96_8_ = *(undefined8 *)&(this->UniformParameters).CameraFacingBlend.field0_0x0;
    local_118._104_8_ =
         *(undefined8 *)((longlong)&(this->UniformParameters).CameraFacingBlend.field0_0x0 + 8);
    local_98._0_4_ = (int)(this->UniformParameters).RotationScale;
    local_98._4_4_ = (int)(this->UniformParameters).RotationBias;
    uStack_90._0_4_ = (uint)(this->UniformParameters).NormalsType;
    uStack_90._4_4_ = (uint)(this->UniformParameters).InvDeltaSeconds;
    local_118._112_8_ = *(undefined8 *)&(this->UniformParameters).MacroUVParameters.field0_0x0;
    uStack_a0 = *(FScriptContainerElement **)
                 ((longlong)&(this->UniformParameters).MacroUVParameters.field0_0x0 + 8);
    local_88 = *(undefined8 *)&(this->UniformParameters).LWCTile.field0_0x0;
    uStack_80 = *(undefined8 *)((longlong)&(this->UniformParameters).LWCTile.field0_0x0 + 8);
    local_78 = (this->UniformParameters).PivotOffset.field0_0x0;
    uStack_70 = *(undefined8 *)&(this->UniformParameters).UseVelocityForMotionBlur;
    FParticleSystemSceneProxy::GetObjectPositionAndScale
              (param_1,param_2,(TVector2<double> *)&local_1f8._s_0,
               (TVector2<double> *)&local_1e8._s_0);
    local_118._116_4_ = (float)local_1f8._s_0.Y;
    local_118._112_4_ = (float)local_1f8._s_0.X;
    uStack_a0._4_4_ = (float)local_1e8._s_0.Y;
    uStack_a0._0_4_ = (float)local_1e8._s_0.X;
    pFVar34 = FParticleSpriteUniformParameters::GetStructMetadata();
    if (((pFVar34->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    TVar35 = RHICreateUniformBuffer
                       (&local_268,(FRHIUniformBufferLayout *)local_118,
                        (EUniformBufferUsage)(pFVar34->Layout).Reference,ValidateResources);
    pFVar9 = (FRHIResource *)(TVar35.Reference)->_padding_;
    if (pFVar9 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar9);
      pFVar34 = FParticleSpriteUniformParameters::GetStructMetadata();
      if (((pFVar34->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar17)) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      if ((FName)(pFVar34->Layout).Reference != pFVar9[2].OwnerName) {
        pFVar34 = FParticleSpriteUniformParameters::GetStructMetadata();
        if (((pFVar34->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x177,L""), bVar17)) {
          pcVar44 = (code *)swi(3);
          (*pcVar44)();
          return;
        }
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x96,
                            L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                           );
        if (bVar17) {
          pcVar44 = (code *)swi(3);
          (*pcVar44)();
          return;
        }
      }
    }
    if (local_268 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_268);
    }
    plVar15 = local_260;
    if (local_260 != local_180) {
      pFVar10 = (FRHIResource *)*local_260;
      *local_260 = (longlong)pFVar9;
      pFVar9 = pFVar10;
    }
    if (pFVar9 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar9);
    }
    pFVar9 = (FRHIResource *)*plVar15;
    pFVar10 = *(FRHIResource **)((longlong)aVar27 + 0x168);
    if (pFVar10 != pFVar9) {
      *(FRHIResource **)((longlong)aVar27 + 0x168) = pFVar9;
      if (pFVar9 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar9);
      }
      if (pFVar10 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar10);
      }
    }
    if ((*(int *)((longlong)aVar27 + 0xc0) != 3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Streams.Num() == 3",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                            ,0x113,L""), bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    puVar2 = (undefined8 *)((longlong)aVar27 + 0x38);
    if ((*(int *)((longlong)aVar27 + 0xc0) < 2) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    puVar36 = *(undefined8 **)((longlong)aVar27 + 0xb8);
    if (*(undefined8 **)((longlong)aVar27 + 0xb8) == (undefined8 *)0x0) {
      puVar36 = puVar2;
    }
    *(short *)((longlong)puVar36 + 0x1c) = (short)iVar19;
    *(undefined4 *)(puVar36 + 3) = (undefined4)local_150;
    puVar36[2] = pFVar12;
    uVar20 = (**(code **)(this->_padding_ + 0x48))(this);
    if ((*(int *)((longlong)aVar27 + 0xc0) != 3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Streams.Num() == 3",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                            ,0x122,L""), bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    if ((*(int *)((longlong)aVar27 + 0xc0) < 3) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    puVar36 = *(undefined8 **)((longlong)aVar27 + 0xb8);
    if (*(undefined8 **)((longlong)aVar27 + 0xb8) == (undefined8 *)0x0) {
      puVar36 = puVar2;
    }
    if (pFVar47 == (FVertexBuffer *)0x0) {
      if ((*(char *)((longlong)aVar27 + 0x181) != '\0') &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1634486397614161619>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                              ,0x12d,"!bUsesDynamicParameter"), bVar17)) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      puVar36[4] = &GNullDynamicParameterVertexBuffer;
      if ((*(short *)((longlong)puVar36 + 0x2c) != 0) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1634486397614161617>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                              ,0x12f,"DynamicParameterStream.Stride == 0"), bVar17)) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      local_2ec = 0;
    }
    else {
      if ((*(char *)((longlong)aVar27 + 0x181) == '\0') &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1634486397614161626>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                              ,0x126,"bUsesDynamicParameter"), bVar17)) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
      puVar36[4] = pFVar47;
      if ((*(ushort *)((longlong)puVar36 + 0x2c) != uVar20) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_1634486397614161624>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleVertexFactory.cpp"
                              ,0x128,"DynamicParameterStream.Stride == Stride"), bVar17)) {
        pcVar44 = (code *)swi(3);
        (*pcVar44)();
        return;
      }
    }
    *(undefined4 *)(puVar36 + 5) = local_2ec;
    lVar7 = *(longlong *)(lVar26 + 0x68);
    if ((*(byte *)(lVar7 + 0x28) & 1) != 0) {
      uVar48 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined4 *)((longlong)aVar27 + 0x170) = *(undefined4 *)(lVar7 + 4);
      *(undefined8 *)((longlong)aVar27 + 0x178) = uVar48;
    }
    if ((*(int *)((longlong)aVar27 + 0xc0) < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar44 = (code *)swi(3);
      (*pcVar44)();
      return;
    }
    puVar36 = *(undefined8 **)((longlong)aVar27 + 0xb8);
    if (*(undefined8 **)((longlong)aVar27 + 0xb8) == (undefined8 *)0x0) {
      puVar36 = puVar2;
    }
    *puVar36 = local_258;
  }
  iVar5 = *(int *)&(this->Source).field_0x98;
  iVar19 = *(int *)&(this->Source).field_0xc;
  if ((-1 < iVar5) && (iVar5 < iVar19)) {
    iVar19 = iVar5;
  }
  FVar37 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_5);
  if ((*(int *)((longlong)FVar37 + 0xa0) < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  FVar43 = FVar37;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar37 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar43 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar37 + 0x98);
  }
  if (((local_2f4 - 2U & 0xfffffffb) != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumTrianglesPerParticle == 2 || NumTrianglesPerParticle == 6",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x32e,L""), bVar17)) {
    pcVar44 = (code *)swi(3);
    (*pcVar44)();
    return;
  }
  *(int *)((longlong)FVar43 + 0x60) = iVar19;
  pTVar38 = &GSixTriangleParticleIndexBuffer;
  if (local_2f4 == 2) {
    pTVar38 = (TGlobalResource<FSixTriangleParticleIndexBuffer,1> *)&GParticleIndexBuffer;
  }
  *(TGlobalResource<FSixTriangleParticleIndexBuffer,1> **)((longlong)FVar43 + 0x18) = pTVar38;
  *(int *)((longlong)FVar43 + 0x5c) = local_2f4;
  *(undefined4 *)((longlong)FVar43 + 0x58) = 0;
  *(undefined8 *)((longlong)FVar37 + 0xb8) = 0;
  *(FVertexFactory **)((longlong)FVar37 + 0xa8) = this_00;
  if (*(char *)(lVar26 + 0xbc) == '\x01') {
    pFVar39 = *(FRHIUniformBuffer **)&param_1->field_0x258;
  }
  else {
    pFVar39 = FParticleSystemSceneProxy::GetWorldSpacePrimitiveUniformBuffer(param_1);
  }
  *(FRHIUniformBuffer **)FVar43 = pFVar39;
  *(undefined4 *)((longlong)FVar43 + 0x68) = 0;
  *(int *)((longlong)FVar43 + 0x6c) = local_2e0 * iVar19 + -1;
  *(uint *)((longlong)FVar37 + 0xd4) =
       ((uint)(byte)param_1->field_0x298 * 2 ^ *(uint *)((longlong)FVar37 + 0xd4)) & 4 ^
       *(uint *)((longlong)FVar37 + 0xd4);
  EVar23 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_2);
  *(ESceneDepthPriorityGroup *)((longlong)FVar37 + 0xd4) =
       (EVar23 << 10 ^ *(uint *)((longlong)FVar37 + 0xd4)) & 0x1c00 ^
       *(uint *)((longlong)FVar37 + 0xd4);
  if ((param_3->EngineShowFlags).Wireframe == 0) {
    lVar26 = this->_padding_;
  }
  else {
    pUVar40 = UMaterial::GetDefaultMaterial(MD_Surface);
    lVar26 = (**(code **)(pUVar40->_padding_ + 0x310))(pUVar40);
  }
  *(longlong *)((longlong)FVar37 + 0xb0) = lVar26;
  *(uint *)((longlong)FVar37 + 0xd4) = *(uint *)((longlong)FVar37 + 0xd4) & 0xfffffc7f;
  *(uint *)((longlong)FVar37 + 0xd4) = *(uint *)((longlong)FVar37 + 0xd4) | 0x2000;
  *(uint *)((longlong)FVar37 + 0xd4) =
       -(uint)((param_1->field_0x79 & 6) != 0) & 0x4000 |
       *(uint *)((longlong)FVar37 + 0xd4) & 0xffffbfff;
  *(char *)((longlong)FVar37 + 0xd9) = (char)param_1->VisualizeLODIndex;
  FMeshElementCollector::AddMesh(param_5,param_4,(FMeshBatch *)FVar37);
LAB_1481f996b:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar42 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_248.NameAndInfo.Index = FVar42.ComparisonIndex.Value;
      local_248.NameAndInfo.Number = FVar42.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_250);
      local_248.StatData.Pad[4] = '\0';
      local_248.StatData.Pad[5] = '\0';
      local_248.StatData.Pad[6] = '\0';
      local_248.StatData.Pad[7] = '\0';
      local_248.StatData.Pad[0] = local_250.s.LowPart._0_1_;
      local_248.StatData.Pad[1] = local_250.s.LowPart._1_1_;
      local_248.StatData.Pad[2] = local_250.s.LowPart._2_1_;
      local_248.StatData.Pad[3] = local_250.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_248);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// GetVertexAndIndexData @ 148200160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDynamicSpriteEmitterData::GetVertexAndIndexData
          (FDynamicSpriteEmitterData *this,void *param_1,void *param_2,void *param_3,
          FParticleOrder *param_4,TVector<double> *param_5,TMatrix<double> *param_6,uint param_7)

{
  float *pfVar1;
  FParticleOrder *pFVar2;
  char cVar3;
  FColor_u_0 FVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  FParticleOrder *pFVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime> FVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  FName FVar22;
  FBaseParticle *pFVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 local_254;
  float local_248;
  FColor_u_0 local_244;
  FName local_240;
  double local_238;
  double local_230;
  double local_228;
  FParticleOrder *local_220;
  double local_218;
  double local_210;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double local_1e8;
  FName local_1e0;
  double local_1d8;
  FName local_1d0;
  TVector<double>_u_0 local_1c8;
  FName local_1b0;
  TMatrix<double> *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  TMatrix<double> local_158 [2];
  
  local_220 = param_4;
  local_1a0 = param_6;
  FVar18 = StatPtr_STAT_ParticlePackingTime;
  if (StatPtr_STAT_ParticlePackingTime == (FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime>)0x0
     ) {
    pFVar17 = ::FName::FName(&local_1d0,"STAT_ParticlePackingTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlePackingTime,*pFVar17,
                        L"Particle Packing Time RT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar10 = false;
  bVar11 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  FVar22 = *(FName *)FVar18;
  bVar13 = false;
  bVar14 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_244.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_244._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_240 = FVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_240,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x19f);
        bVar10 = true;
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_240 = FVar22;
      local_1e0 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar13 = true;
      goto LAB_14820030d;
    }
  }
  bVar11 = bVar14;
  bVar10 = bVar13;
  bVar13 = false;
  local_1e0 = local_1b0;
  FVar22 = local_1b0;
LAB_14820030d:
  dVar8 = __real_3ff0000000000000;
  FVar4 = (FColor_u_0)*(FColor_u_0 *)&(this->Source).field_0x98;
  local_244 = (FColor_u_0)*(FColor_u_0 *)&(this->Source).field_0xc;
  if ((-1 < (int)FVar4.Bits) && ((int)FVar4.Bits < (int)local_244.Bits)) {
    local_244 = FVar4;
  }
  dVar31 = (param_5->field0_0x0)._s_0.X;
  local_208._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  pFVar2 = (FParticleOrder *)(param_5->field0_0x0)._s_0.Z;
  local_208._s_0.X = dVar31;
  local_208._s_0.Z = (double)pFVar2;
  if ((this->Source).field_0xbc == '\0') {
    dVar8 = 0.0;
    dVar7 = 0.0;
    local_188._8_8_ = 0;
    local_188._0_8_ = local_208._s_0.Y;
  }
  else {
    UE::Math::TMatrix<double>::Inverse(param_6,local_158);
    dVar33 = (param_5->field0_0x0)._s_0.X;
    dVar6 = (param_5->field0_0x0)._s_0.Y;
    dVar27 = (param_5->field0_0x0)._s_0.Z;
    dVar31 = local_158[0].M[1][0] * dVar6 + local_158[0].M[0][0] * dVar33 +
             local_158[0].M[2][0] * dVar27 + local_158[0].M[3][0] * dVar8;
    dVar7 = local_158[0].M[1][1] * dVar6 + local_158[0].M[0][1] * dVar33 +
            local_158[0].M[2][1] * dVar27 + local_158[0].M[3][1] * dVar8;
    pFVar2 = (FParticleOrder *)
             (local_158[0].M[1][2] * dVar6 + local_158[0].M[0][2] * dVar33 +
              local_158[0].M[2][2] * dVar27 + local_158[0].M[3][2] * dVar8);
    dVar8 = local_158[0].M[1][3] * dVar6 + local_158[0].M[0][3] * dVar33 +
            local_158[0].M[2][3] * dVar27 + local_158[0].M[3][3] * dVar8;
    local_188._8_4_ = SUB84(dVar7,0);
    local_188._0_8_ = dVar7;
    local_188._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  }
  pFVar12 = local_220;
  local_190 = *(longlong *)&(this->Source).field_0x28;
  local_1d0.ComparisonIndex.Value = *(uint *)&(this->Source).field_0x30;
  local_1d0.Number = *(uint *)&(this->Source).field_0x34;
  local_198 = (longlong)(int)local_244.Bits;
  local_254 = __real_3f800000;
  local_248 = 0.0;
  local_178._8_4_ = SUB84(dVar7,0);
  local_178._0_8_ = dVar31;
  local_178._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_168._8_4_ = SUB84(dVar8,0);
  local_168._0_8_ = pFVar2;
  local_168._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_240 = (FName)((double)*(float *)&(this->Source).field_0x8c * __real_4140000000000000);
  local_218 = (double)*(float *)&(this->Source).field_0x90 * __real_4140000000000000;
  local_210 = (double)*(float *)&(this->Source).field_0x94 * __real_4140000000000000;
  if (0 < (int)local_244.Bits) {
    lVar24 = 0;
    iVar25 = 1;
    uVar38 = (uint)__xmm_80000000000000008000000000000000;
    uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar35 = __real_3f800000;
    uVar44 = __real_3f800000;
    uVar45 = __real_3f800000;
    uVar46 = __real_3f800000;
    do {
      if (pFVar12 == (FParticleOrder *)0x0) {
        iVar15 = iVar25 + -1;
      }
      else {
        iVar15 = pFVar12[lVar24].ParticleIndex;
      }
      pFVar23 = (FBaseParticle *)
                ((int)((uint)*(ushort *)((longlong)local_1d0 + (longlong)iVar15 * 2) *
                      *(int *)&(this->Source).field_0x10) + local_190);
      cVar3 = (this->Source).field_0xbe;
      dVar8 = (double)(float)((uint)((pFVar23->Size).field0_0x0._s_0.X *
                                    *(float *)&(this->Source).field_0x38) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff);
      uVar43 = (uint)((ulonglong)dVar8 >> 0x20);
      if (((cVar3 == '\x01') || (cVar3 == '\0')) ||
         (dVar7 = (double)(float)((uint)((pFVar23->Size).field0_0x0._s_0.Y *
                                        *(float *)&(this->Source).field_0x3c) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff), cVar3 == '\x06')) {
        dVar7 = dVar8;
      }
      uVar42 = (uint)((ulonglong)dVar7 >> 0x20);
      uVar41 = SUB84(dVar7,0);
      local_1c8._s_0.X = (pFVar23->Location).field0_0x0._s_0.X;
      local_1c8._s_0.Y = (pFVar23->Location).field0_0x0._s_0.Y;
      local_1c8._s_0.Z = (pFVar23->Location).field0_0x0._s_0.Z;
      local_208._s_0.X = (pFVar23->OldLocation).field0_0x0._s_0.X;
      local_208._s_0.Y = (pFVar23->OldLocation).field0_0x0._s_0.Y;
      local_208._s_0.Z = (pFVar23->OldLocation).field0_0x0._s_0.Z;
      ApplyOrbitToPosition
                (pFVar23,(FDynamicSpriteEmitterReplayDataBase *)&this->Source,local_1a0,
                 (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_208._s_0);
      iVar15 = *(int *)&(this->Source).field_0xac;
      if (iVar15 == 0) {
        local_228 = local_1c8._s_0.Z;
        local_230 = local_1c8._s_0.Y;
        local_220 = (FParticleOrder *)local_208._s_0.Z;
        local_238 = local_1c8._s_0.X;
        local_1f0 = local_208._s_0.X;
        local_1e8 = local_208._s_0.Y;
      }
      else {
        dVar31 = dVar31 - local_1c8._s_0.X;
        fVar30 = *(float *)((longlong)&(pFVar23->OldLocation).field0_0x0 + (longlong)iVar15 + 4);
        dVar33 = (double)local_188._0_8_ - local_1c8._s_0.Y;
        dVar6 = (double)pFVar2 - local_1c8._s_0.Z;
        dVar27 = dVar33 * dVar33 + dVar31 * dVar31 + dVar6 * dVar6;
        if (__real_3e45798ee0000000 < dVar27) {
          local_1d8 = __real_3ff0000000000000 / SQRT(dVar27);
          dVar31 = dVar31 * local_1d8;
          dVar33 = dVar33 * local_1d8;
          dVar6 = dVar6 * local_1d8;
        }
        local_228 = (double)fVar30;
        dVar31 = local_228 * dVar31;
        dVar33 = local_228 * dVar33;
        local_228 = local_228 * dVar6;
        if ((float)dVar27 <= fVar30 * fVar30) {
          dVar31 = dVar31 * __real_4290000000000000;
          dVar33 = dVar33 * __real_4290000000000000;
          local_228 = local_228 * __real_4290000000000000;
        }
        local_238 = local_1c8._s_0.X + dVar31;
        local_220 = (FParticleOrder *)(local_208._s_0.Z + local_228);
        local_230 = local_1c8._s_0.Y + dVar33;
        local_228 = local_1c8._s_0.Z + local_228;
        uVar35 = local_254;
        local_1f0 = local_208._s_0.X + dVar31;
        local_1e8 = local_208._s_0.Y + dVar33;
      }
      iVar15 = *(int *)&(this->Source).field_0xb0;
      if (0 < iVar15) {
        local_248 = *(float *)((longlong)&(pFVar23->OldLocation).field0_0x0 + (longlong)iVar15);
      }
      iVar15 = *(int *)&(this->Source).field_0xa0;
      lVar19 = (longlong)iVar15;
      if (0 < iVar15) {
        uVar35 = *(undefined4 *)((longlong)&(pFVar23->OldLocation).field0_0x0 + lVar19 + 0xc);
        uVar44 = *(undefined4 *)((longlong)&(pFVar23->OldLocation).field0_0x0 + lVar19);
        uVar45 = *(undefined4 *)((longlong)&(pFVar23->OldLocation).field0_0x0 + lVar19 + 4);
        uVar46 = *(undefined4 *)((longlong)&(pFVar23->OldLocation).field0_0x0 + lVar19 + 8);
        local_254 = uVar35;
      }
      uVar16 = 0;
      uVar26 = SUB84(dVar8,0);
      fVar30 = __real_38d1b717;
      if (3 < param_7) {
        local_1d8 = (double)CONCAT44(uVar43 ^ uVar40,uVar26 ^ uVar38);
        uVar16 = (param_7 - 4 >> 2) + 1;
        uVar21 = (ulonglong)uVar16;
        pfVar20 = (float *)((longlong)param_1 + 0x18);
        uVar28 = uVar41 ^ uVar38;
        uVar29 = uVar42 ^ uVar40;
        uVar16 = uVar16 * 4;
        dVar31 = local_1d8;
        do {
          fVar30 = (float)(local_238 - (double)local_240);
          *(float *)param_1 = fVar30;
          fVar34 = (float)(local_228 - local_210);
          fVar32 = (float)(local_230 - local_218);
          fVar36 = (float)(local_1f0 - (double)local_240);
          pfVar20[-5] = fVar32;
          pfVar20[-4] = fVar34;
          pfVar20[-3] = pFVar23->RelativeTime;
          pfVar20[-2] = fVar36;
          fVar37 = (float)(local_1e8 - local_218);
          fVar39 = (float)((double)local_220 - local_210);
          pfVar20[-1] = fVar37;
          *pfVar20 = fVar39;
          pfVar20[1] = (float)(pFVar23->Flags & 0x1ffffff) * __real_38d1b717;
          pfVar1 = &(pFVar23->BaseSize).field0_0x0._s_0.Y;
          dVar27 = dVar7;
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            dVar31 = local_1d8;
            dVar27 = (double)CONCAT44(uVar29,uVar28);
          }
          dVar33 = dVar31;
          if (0.0 < (pFVar23->BaseSize).field0_0x0._s_0.X ||
              (pFVar23->BaseSize).field0_0x0._s_0.X == 0.0) {
            dVar33 = dVar8;
          }
          *(ulonglong *)(pfVar20 + 2) = CONCAT44((float)dVar27,(float)dVar33);
          fVar5 = pFVar23->Rotation;
          pfVar20[5] = local_248;
          pfVar20[4] = fVar5;
          uVar9 = *(undefined8 *)((longlong)&(pFVar23->Color).field0_0x0 + 8);
          *(undefined8 *)(pfVar20 + 6) = *(undefined8 *)&(pFVar23->Color).field0_0x0;
          *(undefined8 *)(pfVar20 + 8) = uVar9;
          if ((this->_padding_ & 1) != 0) {
            *(undefined4 *)param_2 = uVar44;
            *(undefined4 *)((longlong)param_2 + 4) = uVar45;
            *(undefined4 *)((longlong)param_2 + 8) = uVar46;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_254;
            param_2 = (void *)((longlong)param_2 + 0x10);
          }
          pfVar20[10] = fVar30;
          pfVar20[0xb] = fVar32;
          pfVar20[0xc] = fVar34;
          pfVar20[0xd] = pFVar23->RelativeTime;
          pfVar20[0xe] = fVar36;
          pfVar20[0xf] = fVar37;
          pfVar20[0x10] = fVar39;
          pfVar20[0x11] = (float)(pFVar23->Flags & 0x1ffffff) * __real_38d1b717;
          pfVar1 = &(pFVar23->BaseSize).field0_0x0._s_0.Y;
          dVar27 = dVar7;
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            dVar27 = (double)CONCAT44(uVar29,uVar28);
          }
          dVar33 = dVar31;
          if (0.0 < (pFVar23->BaseSize).field0_0x0._s_0.X ||
              (pFVar23->BaseSize).field0_0x0._s_0.X == 0.0) {
            dVar33 = dVar8;
          }
          *(ulonglong *)(pfVar20 + 0x12) = CONCAT44((float)dVar27,(float)dVar33);
          fVar5 = pFVar23->Rotation;
          pfVar20[0x15] = local_248;
          pfVar20[0x14] = fVar5;
          uVar9 = *(undefined8 *)((longlong)&(pFVar23->Color).field0_0x0 + 8);
          *(undefined8 *)(pfVar20 + 0x16) = *(undefined8 *)&(pFVar23->Color).field0_0x0;
          *(undefined8 *)(pfVar20 + 0x18) = uVar9;
          if ((this->_padding_ & 1) != 0) {
            *(undefined4 *)param_2 = uVar44;
            *(undefined4 *)((longlong)param_2 + 4) = uVar45;
            *(undefined4 *)((longlong)param_2 + 8) = uVar46;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_254;
            param_2 = (void *)((longlong)param_2 + 0x10);
          }
          pfVar20[0x1a] = fVar30;
          pfVar20[0x1b] = fVar32;
          pfVar20[0x1c] = fVar34;
          pfVar20[0x1d] = pFVar23->RelativeTime;
          pfVar20[0x1e] = fVar36;
          pfVar20[0x1f] = fVar37;
          pfVar20[0x20] = fVar39;
          pfVar20[0x21] = (float)(pFVar23->Flags & 0x1ffffff) * __real_38d1b717;
          pfVar1 = &(pFVar23->BaseSize).field0_0x0._s_0.Y;
          dVar27 = dVar7;
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            dVar27 = (double)CONCAT44(uVar29,uVar28);
          }
          dVar33 = dVar31;
          if (0.0 < (pFVar23->BaseSize).field0_0x0._s_0.X ||
              (pFVar23->BaseSize).field0_0x0._s_0.X == 0.0) {
            dVar33 = dVar8;
          }
          *(ulonglong *)(pfVar20 + 0x22) = CONCAT44((float)dVar27,(float)dVar33);
          fVar5 = pFVar23->Rotation;
          pfVar20[0x25] = local_248;
          pfVar20[0x24] = fVar5;
          uVar9 = *(undefined8 *)((longlong)&(pFVar23->Color).field0_0x0 + 8);
          *(undefined8 *)(pfVar20 + 0x26) = *(undefined8 *)&(pFVar23->Color).field0_0x0;
          *(undefined8 *)(pfVar20 + 0x28) = uVar9;
          if ((this->_padding_ & 1) != 0) {
            *(undefined4 *)param_2 = uVar44;
            *(undefined4 *)((longlong)param_2 + 4) = uVar45;
            *(undefined4 *)((longlong)param_2 + 8) = uVar46;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_254;
            param_2 = (void *)((longlong)param_2 + 0x10);
          }
          pfVar20[0x2a] = fVar30;
          pfVar20[0x2b] = fVar32;
          pfVar20[0x2c] = fVar34;
          pfVar20[0x2d] = pFVar23->RelativeTime;
          pfVar20[0x2e] = fVar36;
          pfVar20[0x2f] = fVar37;
          pfVar20[0x30] = fVar39;
          fVar30 = __real_38d1b717;
          uVar38 = (uint)__xmm_80000000000000008000000000000000;
          uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          pfVar20[0x31] = (float)(pFVar23->Flags & 0x1ffffff) * __real_38d1b717;
          pfVar1 = &(pFVar23->BaseSize).field0_0x0._s_0.Y;
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            dVar27 = (double)CONCAT44(uVar29,uVar28);
          }
          else {
            uVar28 = uVar41 ^ uVar38;
            uVar29 = uVar42 ^ uVar40;
            dVar27 = dVar7;
          }
          dVar33 = dVar31;
          if (0.0 < (pFVar23->BaseSize).field0_0x0._s_0.X ||
              (pFVar23->BaseSize).field0_0x0._s_0.X == 0.0) {
            dVar31 = (double)CONCAT44(uVar43 ^ uVar40,uVar26 ^ uVar38);
            dVar33 = dVar8;
          }
          *(ulonglong *)(pfVar20 + 0x32) = CONCAT44((float)dVar27,(float)dVar33);
          fVar32 = pFVar23->Rotation;
          pfVar20[0x35] = local_248;
          pfVar20[0x34] = fVar32;
          uVar9 = *(undefined8 *)((longlong)&(pFVar23->Color).field0_0x0 + 8);
          *(undefined8 *)(pfVar20 + 0x36) = *(undefined8 *)&(pFVar23->Color).field0_0x0;
          *(undefined8 *)(pfVar20 + 0x38) = uVar9;
          if ((this->_padding_ & 1) != 0) {
            *(undefined4 *)param_2 = uVar44;
            *(undefined4 *)((longlong)param_2 + 4) = uVar45;
            *(undefined4 *)((longlong)param_2 + 8) = uVar46;
            *(undefined4 *)((longlong)param_2 + 0xc) = local_254;
            param_2 = (void *)((longlong)param_2 + 0x10);
          }
          param_1 = (void *)((longlong)param_1 + 0x100);
          pfVar20 = pfVar20 + 0x40;
          uVar21 = uVar21 - 1;
          uVar35 = local_254;
        } while (uVar21 != 0);
      }
      if (uVar16 < param_7) {
        pfVar20 = (float *)((longlong)param_1 + 0x18);
        uVar21 = (ulonglong)(param_7 - uVar16);
        do {
          *(float *)param_1 = (float)(local_238 - (double)local_240);
          pfVar20[-5] = (float)(local_230 - local_218);
          pfVar20[-4] = (float)(local_228 - local_210);
          pfVar20[-3] = pFVar23->RelativeTime;
          pfVar20[-2] = (float)(local_1f0 - (double)local_240);
          pfVar20[-1] = (float)(local_1e8 - local_218);
          *pfVar20 = (float)((double)local_220 - local_210);
          pfVar20[1] = (float)(pFVar23->Flags & 0x1ffffff) * fVar30;
          pfVar1 = &(pFVar23->BaseSize).field0_0x0._s_0.Y;
          dVar31 = dVar7;
          if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
            dVar31 = (double)CONCAT44(uVar42 ^ uVar40,uVar41 ^ uVar38);
          }
          dVar27 = dVar8;
          if ((pFVar23->BaseSize).field0_0x0._s_0.X <= 0.0 &&
              (pFVar23->BaseSize).field0_0x0._s_0.X != 0.0) {
            dVar27 = (double)CONCAT44(uVar43 ^ uVar40,uVar26 ^ uVar38);
          }
          *(ulonglong *)(pfVar20 + 2) = CONCAT44((float)dVar31,(float)dVar27);
          fVar32 = pFVar23->Rotation;
          pfVar20[5] = local_248;
          pfVar20[4] = fVar32;
          uVar9 = *(undefined8 *)((longlong)&(pFVar23->Color).field0_0x0 + 8);
          *(undefined8 *)(pfVar20 + 6) = *(undefined8 *)&(pFVar23->Color).field0_0x0;
          *(undefined8 *)(pfVar20 + 8) = uVar9;
          if ((this->_padding_ & 1) != 0) {
            *(undefined4 *)param_2 = uVar44;
            *(undefined4 *)((longlong)param_2 + 4) = uVar45;
            *(undefined4 *)((longlong)param_2 + 8) = uVar46;
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar35;
            param_2 = (void *)((longlong)param_2 + 0x10);
          }
          param_1 = (void *)((longlong)param_1 + 0x40);
          pfVar20 = pfVar20 + 0x10;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      iVar25 = iVar25 + 1;
      lVar24 = lVar24 + 1;
      FVar22 = local_1e0;
      dVar31 = (double)local_178._0_8_;
      pFVar2 = (FParticleOrder *)local_168._0_8_;
    } while (lVar24 < local_198);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return true;
}

// Init @ 148201c90

void __thiscall FDynamicSpriteEmitterData::Init(FDynamicSpriteEmitterData *this,bool param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)param_1;
  lVar3 = (**(code **)(this->_padding_ + 0x50))();
  plVar2 = *(longlong **)&(this->Source).field_0x60;
  iVar1 = *(int *)(lVar3 + 0xa0);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)(0 < iVar1);
  lVar3 = (**(code **)(*plVar2 + 0x310))();
  this->_padding_ = lVar3;
  *(undefined8 *)&(this->Source).field_0x60 = 0;
  return;
}

// UpdateRenderThreadResourcesEmitter @ 148225870

void __thiscall
FDynamicSpriteEmitterData::UpdateRenderThreadResourcesEmitter
          (FDynamicSpriteEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  TMatrix<double> *pTVar22;
  undefined1 *puVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [2];
  
  lVar21 = (**(code **)(this->_padding_ + 0x50))();
  if (lVar21 != 0) {
    (this->UniformParameters).RotationScale = 1.0;
    (this->UniformParameters).RotationBias = 0.0;
    *(undefined8 *)&(this->UniformParameters).AxisLockRight.field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->UniformParameters).AxisLockRight.field0_0x0 + 8) = 0;
    *(undefined8 *)&(this->UniformParameters).AxisLockUp.field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->UniformParameters).AxisLockUp.field0_0x0 + 8) = 0;
    *(undefined8 *)&(this->UniformParameters).TangentSelector.field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->UniformParameters).TangentSelector.field0_0x0 + 8) = 0;
    (this->UniformParameters).InvDeltaSeconds = *(float *)(lVar21 + 0x88);
    *(undefined8 *)&(this->UniformParameters).LWCTile.field0_0x0 = *(undefined8 *)(lVar21 + 0x8c);
    (this->UniformParameters).LWCTile.field0_0x0._s_0.Z = *(float *)(lVar21 + 0x94);
    fVar18 = __real_3f800000;
    fVar32 = 0.0;
    fVar24 = __real_3f800000;
    if ((*(byte *)(*(longlong *)&(this->Source).field_0x68 + 0x28) & 2) == 0) {
      fVar24 = 0.0;
    }
    (this->UniformParameters).UseVelocityForMotionBlur = fVar24;
    puVar23 = &param_1->field_0x110;
    bVar1 = *(byte *)(lVar21 + 0xbf);
    if (*(char *)(lVar21 + 0xbe) == '\x03') {
      (this->UniformParameters).RotationScale = 0.0;
      (this->UniformParameters).TangentSelector.field0_0x0._s_0.Y = 1.0;
    }
    else if (bVar1 == 0) {
      if (*(char *)(lVar21 + 0xbe) == '\0') {
        (this->UniformParameters).TangentSelector.field0_0x0._s_0.W = 1.0;
      }
      else {
        (this->UniformParameters).TangentSelector.field0_0x0._s_0.X = 1.0;
      }
    }
    else {
      pTVar22 = &UE::Math::TMatrix<double>::Identity;
      if (*(char *)(lVar21 + 0xbc) != '\0') {
        pTVar22 = (TMatrix<double> *)puVar23;
      }
      ComputeLockedAxes((uint)bVar1,pTVar22,(TVector<double> *)&local_58[0]._s_0,
                        (TVector<double> *)&local_78._s_0);
      (this->UniformParameters).AxisLockRight.field0_0x0._s_0.X = (float)local_78._s_0.X;
      (this->UniformParameters).AxisLockRight.field0_0x0._s_0.Y = (float)local_78._s_0.Y;
      (this->UniformParameters).AxisLockRight.field0_0x0._s_0.Z = (float)local_78._s_0.Z;
      (this->UniformParameters).AxisLockRight.field0_0x0._s_0.W = 1.0;
      (this->UniformParameters).AxisLockUp.field0_0x0._s_0.X = (float)(double)local_58[0]._0_8_;
      (this->UniformParameters).AxisLockUp.field0_0x0._s_0.Y = (float)(double)local_58[0]._8_8_;
      (this->UniformParameters).AxisLockUp.field0_0x0._s_0.Z = (float)(double)local_58[0]._16_8_;
      (this->UniformParameters).AxisLockUp.field0_0x0._s_0.W = 1.0;
      if (bVar1 - 7 < 3) {
        (this->UniformParameters).TangentSelector.field0_0x0._s_0.Z = 1.0;
      }
      else {
        (this->UniformParameters).TangentSelector.field0_0x0._s_0.X = 1.0;
      }
      fVar24 = __real_3fc90fdb;
      if (bVar1 != 9) {
        fVar24 = 0.0;
      }
      (this->UniformParameters).RotationBias = fVar24;
    }
    fVar24 = fVar18;
    if (*(char *)(lVar21 + 0xcd) == '\0') {
      fVar24 = 0.0;
    }
    (this->UniformParameters).RemoveHMDRoll = fVar24;
    if (*(char *)(lVar21 + 0xbe) == '\x06') {
      fVar24 = *(float *)(lVar21 + 0xd4);
      fVar32 = *(float *)(lVar21 + 0xd0);
      (this->UniformParameters).TangentSelector.field0_0x0._s_0.W = 1.0;
      fVar32 = fVar32 * fVar32;
      fVar24 = fVar24 * fVar24 - fVar32;
      if (fVar24 <= fVar18) {
        fVar24 = fVar18;
      }
      fVar24 = fVar18 / fVar24;
      fVar32 = fVar24 * fVar32;
      fVar25 = fVar18;
    }
    else {
      fVar24 = 0.0;
      fVar25 = 0.0;
    }
    (this->UniformParameters).CameraFacingBlend.field0_0x0._s_0.X = fVar25;
    (this->UniformParameters).CameraFacingBlend.field0_0x0._s_0.Y = fVar24;
    (this->UniformParameters).CameraFacingBlend.field0_0x0._s_0.Z = fVar32;
    iVar2 = *(int *)(lVar21 + 0xb4);
    iVar3 = *(int *)(lVar21 + 0xb8);
    (this->UniformParameters).SubImageSize.field0_0x0._s_0.X = (float)iVar2;
    (this->UniformParameters).SubImageSize.field0_0x0._s_0.Y = (float)iVar3;
    (this->UniformParameters).SubImageSize.field0_0x0._s_0.Z = fVar18 / (float)iVar2;
    (this->UniformParameters).SubImageSize.field0_0x0._s_0.W = fVar18 / (float)iVar3;
    bVar1 = *(byte *)(lVar21 + 0xc1);
    (this->UniformParameters).NormalsType = (float)bVar1;
    uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.X =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Y = (float)uVar19;
    (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Z = (float)uVar20;
    *(undefined8 *)((longlong)&(this->UniformParameters).NormalsSphereCenter.field0_0x0 + 0xc) =
         0x3f800000;
    (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.Y = 0.0;
    (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.Z = 1.0;
    (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.W = 1.0;
    if (bVar1 != 0) {
      dVar7 = (double)*(float *)(lVar21 + 0x70);
      dVar8 = *(double *)&param_1->field_0x118;
      dVar28 = (double)*(float *)(lVar21 + 0x74);
      dVar4 = (double)*(float *)(lVar21 + 0x78);
      dVar9 = *(double *)&param_1->field_0x138;
      auVar26._8_4_ = SUB84(dVar28,0);
      auVar26._0_8_ = dVar28;
      auVar26._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar29._8_4_ = SUB84(dVar4,0);
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      dVar10 = *(double *)&param_1->field_0x158;
      dVar11 = *(double *)&param_1->field_0x178;
      auVar30._8_4_ = SUB84(__real_3ff0000000000000,0);
      auVar30._0_8_ = __real_3ff0000000000000;
      auVar30._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar12 = *(double *)&param_1->field_0x140;
      dVar13 = *(double *)&param_1->field_0x148;
      dVar14 = *(double *)&param_1->field_0x120;
      dVar15 = *(double *)&param_1->field_0x128;
      dVar16 = *(double *)&param_1->field_0x160;
      dVar17 = *(double *)&param_1->field_0x168;
      dVar5 = __real_3ff0000000000000 * *(double *)&param_1->field_0x180;
      dVar6 = __real_3ff0000000000000 * *(double *)&param_1->field_0x188;
      (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.X =
           (float)(dVar7 * *(double *)puVar23 + dVar28 * *(double *)&param_1->field_0x130 +
                   dVar4 * *(double *)&param_1->field_0x150 +
                  __real_3ff0000000000000 * *(double *)&param_1->field_0x170);
      (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Y =
           (float)(dVar7 * dVar8 + auVar26._8_8_ * dVar9 + auVar29._8_8_ * dVar10 +
                  auVar30._8_8_ * dVar11);
      (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.Z =
           (float)(dVar28 * dVar12 + dVar7 * dVar14 + dVar4 * dVar16 + dVar5);
      (this->UniformParameters).NormalsSphereCenter.field0_0x0._s_0.W =
           (float)(dVar28 * dVar13 + dVar7 * dVar15 + dVar4 * dVar17 + dVar6);
      if (bVar1 == 2) {
        dVar5 = (double)*(float *)(lVar21 + 0x7c);
        dVar6 = *(double *)&param_1->field_0x138;
        dVar28 = (double)*(float *)(lVar21 + 0x80);
        dVar4 = (double)*(float *)(lVar21 + 0x84);
        dVar7 = *(double *)&param_1->field_0x118;
        auVar27._8_4_ = SUB84(dVar5,0);
        auVar27._0_8_ = dVar5;
        auVar27._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar31._8_4_ = SUB84(dVar4,0);
        auVar31._0_8_ = dVar4;
        auVar31._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        dVar8 = *(double *)&param_1->field_0x158;
        dVar9 = *(double *)&param_1->field_0x178;
        dVar10 = *(double *)&param_1->field_0x140;
        dVar11 = *(double *)&param_1->field_0x148;
        dVar12 = *(double *)&param_1->field_0x120;
        dVar13 = *(double *)&param_1->field_0x128;
        dVar14 = *(double *)&param_1->field_0x160;
        dVar15 = *(double *)&param_1->field_0x168;
        dVar16 = *(double *)&param_1->field_0x180;
        dVar17 = *(double *)&param_1->field_0x188;
        (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.X =
             (float)(dVar28 * *(double *)&param_1->field_0x130 + dVar5 * *(double *)puVar23 +
                     dVar4 * *(double *)&param_1->field_0x150 +
                    *(double *)&param_1->field_0x170 * 0.0);
        (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.Y =
             (float)(dVar28 * dVar6 + auVar27._8_8_ * dVar7 + auVar31._8_8_ * dVar8 + dVar9 * 0.0);
        (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.Z =
             (float)(dVar28 * dVar10 + dVar5 * dVar12 + dVar4 * dVar14 + dVar16 * 0.0);
        (this->UniformParameters).NormalsCylinderUnitDirection.field0_0x0._s_0.W =
             (float)(dVar28 * dVar11 + dVar5 * dVar13 + dVar4 * dVar15 + dVar17 * 0.0);
      }
    }
    (this->UniformParameters).PivotOffset.field0_0x0 = *(TVector2<float>_u_0 *)(lVar21 + 0xc4);
  }
  return;
}

