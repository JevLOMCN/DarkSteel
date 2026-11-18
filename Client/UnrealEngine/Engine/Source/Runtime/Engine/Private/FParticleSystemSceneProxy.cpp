// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FParticleSystemSceneProxy @ 1480f41f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParticleSystemSceneProxy * __thiscall
FParticleSystemSceneProxy::FParticleSystemSceneProxy
          (FParticleSystemSceneProxy *this,FParticleSystemSceneProxyDesc *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  UMaterial *pUVar5;
  UParticleSystem *pUVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FNameEntryId FVar10;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FLinearColor *pFVar11;
  FName FVar12;
  byte bVar13;
  FName FVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  FNameEntryId local_res8;
  uint uStackX_c;
  FLinearColor_u_0 local_78;
  FLinearColor local_68 [5];
  
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  FVar14 = FVar12;
  if (param_1->SystemAsset != (UParticleSystem *)0x0) {
    FVar14 = (FName)param_1->SystemAsset->_padding_;
  }
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(FPrimitiveSceneProxyDesc *)param_1,FVar14);
  *(undefined ***)this = &___7FParticleSystemSceneProxy__6B_;
  (this->MeshEmitterLODIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshEmitterLODIndices).ArrayNum = 0;
  (this->MeshEmitterLODIndices).ArrayMax = 0;
  bVar13 = ((char)param_1->_padding_ * '\x02' ^ this->field_0x298) & 2U ^ this->field_0x298;
  this->field_0x298 = bVar13;
  bVar13 = (param_1->field_0xe0 * '\x02' ^ bVar13) & 4 ^ bVar13;
  this->field_0x298 = bVar13;
  this->field_0x298 = (param_1->bCanBeOccluded << 3 ^ bVar13 & 0xf7) & 0xef;
  (this->FeatureLevel).Value = *(uchar *)(*(longlong *)&this->field_0x220 + 8);
  (this->MaterialRelevance).field0_0x0 = (param_1->MaterialRelevance).field0_0x0;
  this->DynamicData = param_1->DynamicData;
  this->LastDynamicData = (FParticleDynamicData *)0x0;
  this_00 = ::operator_new(0xe0);
  if (this_00 != (FColoredMaterialRenderProxy *)0x0) {
    FVar10 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res8.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
    uStackX_c = 0;
    local_78._0_8_ = ___xmm_3f80000000000000000000003f800000;
    local_78._8_8_ = _UNK_15076b188;
    pFVar11 = GetSelectionColor(local_68,(FLinearColor *)&local_78._s_0,false,false,true);
    pUVar5 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
    if (pUVar5 != (UMaterial *)0x0) {
      FVar12 = (FName)(**(code **)(pUVar5->_padding_ + 0x310))();
    }
    FVar14.Number = uStackX_c;
    FVar14.ComparisonIndex.Value = local_res8.Value;
    FVar12 = (FName)FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                              (this_00,(FMaterialRenderProxy *)FVar12,pFVar11,FVar14);
  }
  this->DeselectedWireframeMaterialInstance = (FColoredMaterialRenderProxy *)FVar12;
  this->PendingLODDistance = 0.0;
  this->VisualizeLODIndex = param_1->VisualizeLODIndex;
  this->LastFramePreRendered = -1;
  FRenderResource::FRenderResource((FRenderResource *)&this->WorldSpacePrimitiveUniformBuffer);
  (this->WorldSpacePrimitiveUniformBuffer).Contents = (uchar *)0x0;
  (this->WorldSpacePrimitiveUniformBuffer)._padding_ =
       (longlong)&___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_;
  (this->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI =
       (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
  (this->WorldSpacePrimitiveUniformBuffer).BufferUsage = UniformBuffer_MultiFrame;
  (this->WorldSpacePrimitiveUniformBufferMutex).State = (atomic<unsigned_char>)0x0;
  (this->MeshBatchPool).Array.AllocatorInstance.SecondaryData = (ForElementType<void_*>)0x0;
  this->WorldSpaceUBHash = 0;
  (this->MeshBatchPool).Array.ArrayNum = 0;
  *(undefined8 *)&(this->MeshBatchPool).Array.ArrayMax = 4;
  (this->DynamicDataForThisFrame).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicDataForThisFrame).ArrayNum = 0;
  (this->DynamicDataForThisFrame).ArrayMax = 0;
  (this->PerfStatContext).WorldStats = (FParticlePerfStats *)0x0;
  (this->PerfStatContext).SystemStats = (FParticlePerfStats *)0x0;
  (this->PerfStatContext).ComponentStats = (FParticlePerfStats *)0x0;
  *(undefined8 *)&this->field_0x30 = 0x40400000;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x3c = 0x3f800000;
  this->LODMethod = param_1->LODMethod;
  this->field_0x82 = (param_1->field_0xe0 & 0xfc) << 5 | this->field_0x82 & 0x7f;
  uVar4 = this->field_0x298;
  if (((this->bCanBeOccluded != '\0') &&
      (pUVar6 = param_1->SystemAsset, pUVar6 != (UParticleSystem *)0x0)) &&
     ((pUVar6->OcclusionBoundsMethod).Value == '\x02')) {
    dVar1 = (pUVar6->CustomOcclusionBounds).Min.field0_0x0._s_0.X;
    dVar2 = (pUVar6->CustomOcclusionBounds).Min.field0_0x0._s_0.Z;
    dVar3 = (pUVar6->CustomOcclusionBounds).Min.field0_0x0._s_0.Y;
    dVar7 = (pUVar6->CustomOcclusionBounds).Max.field0_0x0._s_0.Z - dVar2;
    dVar8 = (pUVar6->CustomOcclusionBounds).Max.field0_0x0._s_0.X - dVar1;
    dVar9 = (pUVar6->CustomOcclusionBounds).Max.field0_0x0._s_0.Y - dVar3;
    dVar17 = dVar7 * __real_3fe0000000000000;
    dVar19 = dVar8 * __real_3fe0000000000000;
    dVar18 = dVar9 * __real_3fe0000000000000;
    (this->OcclusionBounds).Origin.field0_0x0._s_0.X = dVar19 + dVar1;
    (this->OcclusionBounds).Origin.field0_0x0._s_0.Y = dVar18 + dVar3;
    auVar15._0_8_ = dVar17 + dVar2;
    auVar15._8_8_ = 0;
    (this->OcclusionBounds).Origin.field0_0x0._s_0.Z = auVar15._0_8_;
    (this->OcclusionBounds).BoxExtent.field0_0x0._s_0.X = dVar19;
    (this->OcclusionBounds).BoxExtent.field0_0x0._s_0.Y = dVar18;
    (this->OcclusionBounds).BoxExtent.field0_0x0._s_0.Z = dVar17;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7) * __real_3fd0000000000000;
    auVar16 = sqrtpd(auVar15,auVar16);
    (this->OcclusionBounds).SphereRadius = auVar16._0_8_;
    this->field_0x298 = uVar4 | 0x10;
  }
  return this;
}

// ~FParticleSystemSceneProxy @ 1480f72e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::~FParticleSystemSceneProxy(FParticleSystemSceneProxy *this)

{
  TUniformBuffer<FPrimitiveUniformShaderParameters> *this_00;
  FColoredMaterialRenderProxy *pFVar1;
  FScriptContainerElement *pFVar2;
  uchar *puVar3;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> this_01;
  
  *(undefined ***)this = &___7FParticleSystemSceneProxy__6B_;
  ReleaseRenderThreadResourcesForEmitterData(this);
  this_00 = &this->WorldSpacePrimitiveUniformBuffer;
  (**(code **)(this_00->_padding_ + 0x20))(this_00);
  if (this->DynamicData != (FParticleDynamicData *)0x0) {
    FParticleDynamicData::_scalar_deleting_destructor_(this->DynamicData,1);
  }
  pFVar1 = this->DeselectedWireframeMaterialInstance;
  this->DynamicData = (FParticleDynamicData *)0x0;
  if (pFVar1 != (FColoredMaterialRenderProxy *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DeselectedWireframeMaterialInstance = (FColoredMaterialRenderProxy *)0x0;
  pFVar2 = (this->DynamicDataForThisFrame).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  ~TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&this->MeshBatchPool);
  puVar3 = (this->WorldSpacePrimitiveUniformBuffer).Contents;
  this_00->_padding_ = (longlong)&___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_;
  if (puVar3 != (uchar *)0x0) {
    FMemory::Free(puVar3);
  }
  this_01 = (this->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI;
  if (this_01 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this_00);
  pFVar2 = (this->MeshEmitterLODIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 1480f9580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FParticleSystemSceneProxy::UpdateData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulong64 *puVar1;
  int *piVar2;
  FParticlePerfStats *pFVar3;
  FParticleSystemSceneProxy *this_00;
  FParticlePerfStats *pFVar4;
  FParticlePerfStats *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateRTTime> FVar12;
  longlong lVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FNameEntryId FVar16;
  undefined1 uVar17;
  FName FVar18;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18;
  ulonglong local_res20;
  FName local_78;
  FStatMessage local_68;
  FParticlePerfStats *local_58;
  
  lVar13 = *(longlong *)((longlong)this + 8);
  local_res20 = 0;
  if (lVar13 == 0) {
    local_58 = (FParticlePerfStats *)0x0;
    local_68.StatData.Pad[0] = '\0';
    local_68.StatData.Pad[1] = '\0';
    local_68.StatData.Pad[2] = '\0';
    local_68.StatData.Pad[3] = '\0';
    local_68.StatData.Pad[4] = '\0';
    local_68.StatData.Pad[5] = '\0';
    local_68.StatData.Pad[6] = '\0';
    local_68.StatData.Pad[7] = '\0';
    local_68.NameAndInfo.Index.Value = 0;
    local_68.NameAndInfo.Number = 0;
  }
  else {
    local_68.StatData.Pad = *(uchar (*) [8])(lVar13 + 0x98);
    local_68.NameAndInfo = *(FStatNameAndInfo *)(lVar13 + 0xa0);
    local_58 = *(FParticlePerfStats **)(lVar13 + 0xa8);
  }
  lVar13 = *(longlong *)this;
  *(uchar (*) [8])(lVar13 + 0x390) = local_68.StatData.Pad;
  *(FStatNameAndInfo *)(lVar13 + 0x398) = local_68.NameAndInfo;
  *(FParticlePerfStats **)(lVar13 + 0x3a0) = local_58;
  if (__CsvProfilerStat285 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("ParticleUpdate");
    __CsvProfilerStat285 = true;
  }
  FCsvProfiler::BeginExclusiveStat("ParticleUpdate","CSV_ParticleUpdate");
  FVar12 = StatPtr_STAT_ParticleUpdateRTTime;
  if (StatPtr_STAT_ParticleUpdateRTTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateRTTime>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_res18.s,"STAT_ParticleUpdateRTTime");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateRTTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateRTTime,*pFVar11,
                        L"Update particles","STATGROUP_SceneUpdate","STATCAT_Advanced",
                        L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  uVar17 = 0;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  local_res8.s.LowPart = local_res8.s.LowPart & 0xffffff00;
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      uVar17 = 1;
      local_res8.s.LowPart._0_1_ = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar16.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x11e);
        uVar17 = 3;
        local_res8.s.LowPart._0_1_ = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar16.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      local_res8.s.LowPart = CONCAT31(local_res8.s.LowPart._1_3_,uVar17) | 4;
      local_78 = FVar18;
    }
  }
  bVar6 = false;
  bVar8 = false;
  pFVar11 = *(FName **)(*(longlong *)this + 0x70);
  FVar18 = *pFVar11;
  FVar16 = FVar18.ComparisonIndex.Value;
  uVar10 = FVar18.Number;
  if ((FVar16.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res18.s,(char *)pFVar11[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar16.Value;
        local_res18.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)pFVar11[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x11f);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar16.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      local_res20 = (ulonglong)FVar18 & 0xffffffff;
      bVar7 = true;
      goto LAB_1480f9803;
    }
  }
  bVar7 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_1480f9803:
  this_00 = *(FParticleSystemSceneProxy **)this;
  pFVar3 = (this_00->PerfStatContext).ComponentStats;
  pFVar4 = (this_00->PerfStatContext).WorldStats;
  pFVar5 = (this_00->PerfStatContext).SystemStats;
  local_58 = pFVar3;
  if (((pFVar4 == (FParticlePerfStats *)0x0) && (pFVar5 == (FParticlePerfStats *)0x0)) &&
     (pFVar3 == (FParticlePerfStats *)0x0)) {
    FParticleSystemSceneProxy::UpdateData_RenderThread
              (this_00,*(FParticleDynamicData **)((longlong)this + 8));
  }
  else {
    QueryPerformanceCounter(&local_res18);
    FParticleSystemSceneProxy::UpdateData_RenderThread
              (*(FParticleSystemSceneProxy **)this,*(FParticleDynamicData **)((longlong)this + 8));
    lVar13 = CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart);
    if (lVar13 != -1) {
      QueryPerformanceCounter(&local_res18);
      lVar13 = CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) - lVar13;
      if (pFVar4 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar4->RenderThreadStats).RenderUpdateCycles;
        *puVar1 = *puVar1 + lVar13;
        (pFVar4->RenderThreadStats).NumInstances = (pFVar4->RenderThreadStats).NumInstances + 1;
      }
      if (pFVar5 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar5->RenderThreadStats).RenderUpdateCycles;
        *puVar1 = *puVar1 + lVar13;
        (pFVar5->RenderThreadStats).NumInstances = (pFVar5->RenderThreadStats).NumInstances + 1;
      }
      if (pFVar3 != (FParticlePerfStats *)0x0) {
        puVar1 = &(pFVar3->RenderThreadStats).RenderUpdateCycles;
        *puVar1 = *puVar1 + lVar13;
        (pFVar3->RenderThreadStats).NumInstances = (pFVar3->RenderThreadStats).NumInstances + 1;
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_68.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar18.Number,(int)local_res20) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_68);
      piVar2 = &pFVar14->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  uVar9 = local_res8.s.LowPart;
  if ((local_res8.s.LowPart & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar9 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((uVar9 & 4) != 0) && (local_78 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_68.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)local_78 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_68);
      piVar2 = &pFVar14->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("ParticleUpdate");
  return;
}

// CanBeOccluded @ 148101ac0

bool __thiscall FParticleSystemSceneProxy::CanBeOccluded(FParticleSystemSceneProxy *this)

{
  if (this->bCanBeOccluded != '\0') {
    return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
  }
  return false;
}

// CreateRenderThreadResources @ 1481056a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::CreateRenderThreadResources
          (FParticleSystemSceneProxy *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  ForElementType<FDynamicEmitterDataBase_*> FVar2;
  longlong *plVar3;
  FName *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FParticleDynamicData *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  FNameEntryId FVar14;
  ulonglong uVar15;
  ForElementType<FDynamicEmitterDataBase_*> FVar16;
  bool bVar17;
  FColor_u_0 aFStackX_8 [4];
  FName FStackX_18;
  uint uStackX_20;
  uint uStackX_24;
  LARGE_INTEGER LStack_78;
  FName FStack_70;
  FStatMessage aFStack_60 [2];
  
  pFVar10 = this->DynamicData;
  if (pFVar10 != (FParticleDynamicData *)0x0) {
    uVar13 = 0;
    uVar15 = uVar13;
    if (0 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = (pFVar10->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar10->DynamicEmitterDataArray;
        if (FVar2 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
          FVar16 = FVar2;
        }
        plVar3 = *(longlong **)(uVar15 + (longlong)FVar16);
        if (plVar3 != (longlong *)0x0) {
          pFVar4 = (FName *)plVar3[1];
          bVar7 = false;
          bVar8 = false;
          FStack_70.ComparisonIndex.Value = 0;
          FStack_70.Number = 0;
          FVar5 = *pFVar4;
          FVar14 = FVar5.ComparisonIndex.Value;
          uVar9 = FVar5.Number;
          if ((FVar14.Value == 0) && (uVar9 == 0)) {
            (**(code **)(*plVar3 + 8))(plVar3,this);
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              aFStackX_8[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_8[0]._s_0,(char *)pFVar4[2])
              ;
              bVar7 = false;
              bVar8 = true;
              if (-1 < CpuChannel->Enabled) {
                FStackX_18.ComparisonIndex.Value = FVar14.Value;
                FStackX_18.Number = uVar9;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&FStackX_18,(wchar_t *)pFVar4[1],
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                           ,0xfd);
                bVar7 = true;
                bVar8 = true;
              }
            }
            bVar17 = FThreadStats::bPrimaryEnable != false;
            FVar11 = FStack_70;
            if (bVar17) {
              uStackX_20 = FVar14.Value;
              uStackX_24 = uVar9;
              FStack_70 = FVar5;
              FThreadStats::AddMessage(FVar5,CycleScopeStart);
              bVar7 = false;
              FVar11 = FVar5;
            }
            (**(code **)(*plVar3 + 8))(plVar3,this);
            if (bVar8) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar7) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar17) && (FVar11 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
                aFStack_60[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
                aFStack_60[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&LStack_78);
                aFStack_60[0].StatData.Pad[4] = '\0';
                aFStack_60[0].StatData.Pad[5] = '\0';
                aFStack_60[0].StatData.Pad[6] = '\0';
                aFStack_60[0].StatData.Pad[7] = '\0';
                aFStack_60[0].StatData.Pad[0] = LStack_78.s.LowPart._0_1_;
                aFStack_60[0].StatData.Pad[1] = LStack_78.s.LowPart._1_1_;
                aFStack_60[0].StatData.Pad[2] = LStack_78.s.LowPart._2_1_;
                aFStack_60[0].StatData.Pad[3] = LStack_78.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this_00,aFStack_60);
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
          }
        }
        pFVar10 = this->DynamicData;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) < (pFVar10->DynamicEmitterDataArray).ArrayNum);
    }
  }
  return;
}

// CreateRenderThreadResourcesForEmitterData @ 1481056b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::CreateRenderThreadResourcesForEmitterData
          (FParticleSystemSceneProxy *this)

{
  int *piVar1;
  ForElementType<FDynamicEmitterDataBase_*> FVar2;
  longlong *plVar3;
  FName *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FParticleDynamicData *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  FNameEntryId FVar14;
  ulonglong uVar15;
  ForElementType<FDynamicEmitterDataBase_*> FVar16;
  bool bVar17;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  pFVar10 = this->DynamicData;
  if (pFVar10 != (FParticleDynamicData *)0x0) {
    uVar13 = 0;
    uVar15 = uVar13;
    if (0 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = (pFVar10->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar10->DynamicEmitterDataArray;
        if (FVar2 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
          FVar16 = FVar2;
        }
        plVar3 = *(longlong **)(uVar15 + (longlong)FVar16);
        if (plVar3 != (longlong *)0x0) {
          pFVar4 = (FName *)plVar3[1];
          bVar7 = false;
          bVar8 = false;
          local_70.ComparisonIndex.Value = 0;
          local_70.Number = 0;
          FVar5 = *pFVar4;
          FVar14 = FVar5.ComparisonIndex.Value;
          uVar9 = FVar5.Number;
          if ((FVar14.Value == 0) && (uVar9 == 0)) {
            (**(code **)(*plVar3 + 8))(plVar3,this);
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_res8[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar4[2])
              ;
              bVar7 = false;
              bVar8 = true;
              if (-1 < CpuChannel->Enabled) {
                local_res18.ComparisonIndex.Value = FVar14.Value;
                local_res18.Number = uVar9;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_res18,(wchar_t *)pFVar4[1],
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                           ,0xfd);
                bVar7 = true;
                bVar8 = true;
              }
            }
            bVar17 = FThreadStats::bPrimaryEnable != false;
            FVar11 = local_70;
            if (bVar17) {
              local_res20 = FVar14.Value;
              uStackX_24 = uVar9;
              local_70 = FVar5;
              FThreadStats::AddMessage(FVar5,CycleScopeStart);
              bVar7 = false;
              FVar11 = FVar5;
            }
            (**(code **)(*plVar3 + 8))(plVar3,this);
            if (bVar8) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar7) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar17) && (FVar11 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
                local_60[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
                local_60[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&local_78);
                local_60[0].StatData.Pad[4] = '\0';
                local_60[0].StatData.Pad[5] = '\0';
                local_60[0].StatData.Pad[6] = '\0';
                local_60[0].StatData.Pad[7] = '\0';
                local_60[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
                local_60[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
                local_60[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
                local_60[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this_00,local_60);
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
          }
        }
        pFVar10 = this->DynamicData;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) < (pFVar10->DynamicEmitterDataArray).ArrayNum);
    }
  }
  return;
}

// DetermineLODDistance @ 148107240

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::DetermineLODDistance
          (FParticleSystemSceneProxy *this,FSceneView *param_1,int param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  double dVar6;
  
  if (this->LODMethod == 0) {
    dVar1 = *(double *)&this->field_0x180 - (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
    dVar5 = *(double *)&this->field_0x170 - (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
    dVar6 = *(double *)&this->field_0x178 - (param_1->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
    auVar2._0_8_ = dVar1 * dVar1;
    auVar2._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar6 * dVar6 + dVar5 * dVar5 + auVar2._0_8_;
    auVar3 = sqrtpd(auVar2,auVar3);
    fVar4 = (float)(auVar3._0_8_ * (double)param_1->LODDistanceFactor);
    if (param_2 != this->LastFramePreRendered) {
      this->PendingLODDistance = fVar4;
      this->LastFramePreRendered = param_2;
      return;
    }
    if (fVar4 < this->PendingLODDistance) {
      this->PendingLODDistance = fVar4;
    }
  }
  return;
}

// GatherSimpleLights @ 14810d3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::GatherSimpleLights
          (FParticleSystemSceneProxy *this,FSceneViewFamily *param_1,FSimpleLightArray *param_2)

{
  int *piVar1;
  byte bVar2;
  ForElementType<FDynamicEmitterDataBase_*> FVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FParticleSystemSceneProxy *pFVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  UWorld *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT> FVar15;
  FParticleDynamicData *pFVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FNameEntryId FVar19;
  ForElementType<FDynamicEmitterDataBase_*> FVar20;
  FName FVar21;
  longlong lVar22;
  FName FVar23;
  uint uVar24;
  undefined1 uVar25;
  bool bVar26;
  FParticleSystemSceneProxy *local_res8;
  FSceneViewFamily *local_res10;
  FSimpleLightArray *local_res18;
  uint local_res20;
  uint uStackX_24;
  undefined8 in_stack_fffffffffffffe98;
  char *pcVar27;
  FColor_u_0 local_124;
  FColor_u_0 local_120 [2];
  FName local_118;
  FName local_110;
  FName local_108;
  uint local_100;
  uint uStack_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_d8;
  FName local_c8;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FInGameScopedCycleCounter local_60 [2];
  
  bVar2 = this->field_0x298;
  local_res8 = this;
  local_res10 = param_1;
  local_res18 = param_2;
  pUVar13 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x220 + 0x410))();
  pcVar27 = (char *)(CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe98 >> 8),bVar2 >> 2) &
                    0xffffffffffffff01);
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (local_60,pUVar13,VFXSignificance,RenderThread,SUB81(pcVar27,0));
  FVar15 = StatPtr_STAT_ParticlesOverview_RT;
  if (StatPtr_STAT_ParticlesOverview_RT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_ParticlesOverview_RT");
    pcVar27 = "STATCAT_Advanced";
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT,*pFVar14,
                        L"RT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar15;
  bVar7 = false;
  bVar8 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar19 = FVar23.ComparisonIndex.Value;
  uVar24 = FVar23.Number;
  if ((FVar19.Value == 0) && (uVar24 == 0)) {
LAB_14810d54c:
    bVar8 = bVar11;
    bVar7 = bVar10;
    bVar10 = false;
    local_f8 = local_e8;
    FVar23 = local_e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar19.Value;
        local_118.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x1fd);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14810d54c;
    local_res20 = FVar19.Value;
    uStackX_24 = uVar24;
    local_f8 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar10 = true;
  }
  if (this->DynamicData == (FParticleDynamicData *)0x0) goto LAB_14810d9ac;
  pFVar14 = *(FName **)&this->field_0x70;
  uVar25 = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar21 = *pFVar14;
  local_res20 = local_res20 & 0xffffff00;
  FVar19 = FVar21.ComparisonIndex.Value;
  uVar24 = FVar21.Number;
  if ((FVar19.Value == 0) && (uVar24 == 0)) {
LAB_14810d64c:
    local_f0 = local_d8;
    FVar21 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_120[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_120[0]._s_0,(char *)pFVar14[2]);
      uVar25 = 1;
      local_res20 = CONCAT31(local_res20._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar19.Value;
        local_110.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)pFVar14[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x200);
        uVar25 = 3;
        local_res20 = CONCAT31(local_res20._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14810d64c;
    local_res20 = FVar19.Value;
    uStackX_24 = uVar24;
    local_f0 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    local_res20 = CONCAT31(local_res20._1_3_,uVar25) | 4;
  }
  pFVar9 = local_res8;
  pFVar16 = this->DynamicData;
  uVar24 = 0;
  if (0 < (pFVar16->DynamicEmitterDataArray).ArrayNum) {
    lVar22 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar24 < (pFVar16->DynamicEmitterDataArray).ArrayNum) {
        uVar12 = ~uVar24 >> 0x1f;
      }
      if (uVar12 == 0) {
        pcVar27 = (char *)(longlong)(int)uVar24;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar3 = (pFVar16->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
      FVar20 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar16->DynamicEmitterDataArray;
      if (FVar3 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
        FVar20 = FVar3;
      }
      plVar4 = *(longlong **)(lVar22 + (longlong)FVar20);
      if (plVar4 != (longlong *)0x0) {
        pFVar14 = (FName *)plVar4[1];
        bVar6 = false;
        bVar11 = false;
        local_c8.ComparisonIndex.Value = 0;
        local_c8.Number = 0;
        FVar23 = *pFVar14;
        FVar19 = FVar23.ComparisonIndex.Value;
        uVar12 = FVar23.Number;
        if ((FVar19.Value == 0) && (uVar12 == 0)) {
          (**(code **)(*plVar4 + 0x28))(plVar4,pFVar9,local_res10,local_res18);
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_res8 = (FParticleSystemSceneProxy *)((ulonglong)local_res8 & 0xffffffff00000000);
            FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8,(char *)pFVar14[2]);
            bVar6 = false;
            bVar11 = true;
            if (-1 < CpuChannel->Enabled) {
              local_108.ComparisonIndex.Value = FVar19.Value;
              local_108.Number = uVar12;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_108,(wchar_t *)pFVar14[1],
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                         ,0x206);
              bVar6 = true;
              bVar11 = true;
            }
          }
          bVar26 = FThreadStats::bPrimaryEnable != false;
          FVar21 = local_c8;
          if (bVar26) {
            local_100 = FVar19.Value;
            uStack_fc = uVar12;
            local_c8 = FVar23;
            FThreadStats::AddMessage(FVar23,CycleScopeStart);
            bVar6 = false;
            FVar21 = FVar23;
          }
          (**(code **)(*plVar4 + 0x28))(plVar4,pFVar9,local_res10,local_res18,pcVar27);
          if (bVar11) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar26) && (FVar21 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar17 == (FThreadStats *)0x0) {
              pFVar18 = FThreadStatsPool::Get();
              pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
            }
            if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
              local_98.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
              local_98.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_b0);
              local_98.StatData.Pad[4] = '\0';
              local_98.StatData.Pad[5] = '\0';
              local_98.StatData.Pad[6] = '\0';
              local_98.StatData.Pad[7] = '\0';
              local_98.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
              local_98.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
              local_98.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
              local_98.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(pFVar17,&local_98);
              piVar1 = &pFVar17->ScopeCount;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FThreadStats::Flush(pFVar17,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar17,false,false);
              }
            }
          }
        }
      }
      pFVar16 = pFVar9->DynamicData;
      uVar24 = uVar24 + 1;
      lVar22 = lVar22 + 8;
      FVar21 = local_f0;
      FVar23 = local_f8;
    } while ((int)uVar24 < (pFVar16->DynamicEmitterDataArray).ArrayNum);
  }
  uVar24 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar24 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((uVar24 & 4) != 0) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_88.NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_88);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
LAB_14810d9ac:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar10) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_78.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_78);
      piVar1 = &pFVar17->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(local_60);
  return;
}

// GetCustomOcclusionBounds @ 148110fa0

TBoxSphereBounds<double,double> * __thiscall
FParticleSystemSceneProxy::GetCustomOcclusionBounds
          (FParticleSystemSceneProxy *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double>_u_0 *pTVar8;
  TBoxSphereBounds<double,double> *pTVar9;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  TBoxSphereBounds<double,double> local_40;
  
  if (this->bCanBeOccluded == '\0') {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxy.h"
                       ,0x3f9,L"GetCustomOcclusionBounds> Should not be called on base scene proxy!"
                      );
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar9;
    }
    pTVar8 = &local_78;
    local_78._s_0.X = *(double *)&this->field_0x190;
    local_78._s_0.Y = *(double *)&this->field_0x198;
    local_78._s_0.Z = *(double *)&this->field_0x1a0;
    uStack_60 = *(undefined8 *)&this->field_0x1a8;
    local_58 = *(undefined8 *)&this->field_0x1b0;
    uStack_50 = *(undefined8 *)&this->field_0x1b8;
    local_48 = *(undefined8 *)&this->field_0x1c0;
  }
  else {
    pTVar8 = (TVector<double>_u_0 *)
             UE::Math::TBoxSphereBounds<double,double>::TransformBy
                       (&this->OcclusionBounds,&local_40,(TMatrix<double> *)&this->field_0x110);
  }
  dVar1 = (pTVar8->_s_0).Y;
  dVar3 = (pTVar8->_s_0).Z;
  dVar4 = (((TVector<double> *)(pTVar8->XYZ + 3))->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (((TVector<double> *)&(pTVar8->_s_0).X)->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar5 = pTVar8->XYZ[4];
  dVar6 = pTVar8->XYZ[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar4;
  dVar1 = pTVar8->XYZ[6];
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar6;
  __return_storage_ptr__->SphereRadius = dVar1;
  return __return_storage_ptr__;
}

// GetDynamicMeshElements @ 148114080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::GetDynamicMeshElements
          (FParticleSystemSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  ulong64 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  FName FVar4;
  ForElementType<FDynamicEmitterDataBase_*> FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  LARGE_INTEGER LVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  UWorld *pUVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_GetMeshElements> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT> FVar28;
  FThreadSafeStaticStat<FStat_STAT_ParticleRenderingTime> FVar29;
  FParticleDynamicData *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_ParticleDrawCalls> FVar31;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FPrimitiveDrawInterface *pFVar32;
  TBoxSphereBounds<double,double> *pTVar33;
  longlong lVar34;
  int iVar35;
  ulonglong uVar36;
  ForElementType<FDynamicEmitterDataBase_*> FVar37;
  FName FVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulonglong uVar42;
  FNameEntryId FVar43;
  ulonglong uVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  double dVar49;
  double dVar50;
  uint local_240;
  int local_238;
  FParticlePerfStats *local_230;
  FParticlePerfStats *local_228;
  FName local_220;
  FName local_218;
  FColor_u_0 local_210;
  FColor_u_0 local_20c;
  FColor_u_0 local_208;
  FColor_u_0 local_204;
  FColor_u_0 local_200 [2];
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  uint local_1d0;
  uint uStack_1cc;
  FName local_1c8;
  FName local_1c0;
  LARGE_INTEGER local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_198;
  FName local_188;
  FName local_178;
  FName local_168;
  FParticlePerfStats *local_158;
  FParticlePerfStats *pFStack_150;
  FParticlePerfStats *local_148;
  LARGE_INTEGER local_130;
  FName local_128;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  LARGE_INTEGER local_f0;
  FName local_e8;
  FInGameScopedCycleCounter local_e0;
  TVector<double>_u_0 local_d0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_88;
  TBoxSphereBounds<double,double> local_80;
  
  pUVar25 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x220 + 0x410))();
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_e0,pUVar25,VFXSignificance,RenderThread,this->bManagingSignificance);
  uVar42 = 0;
  uVar41 = 0;
  FVar27 = StatPtr_STAT_FParticleSystemSceneProxy_GetMeshElements;
  if (StatPtr_STAT_FParticleSystemSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_GetMeshElements>)0x0) {
    pFVar26 = ::FName::FName(&local_108,"STAT_FParticleSystemSceneProxy_GetMeshElements");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_FParticleSystemSceneProxy_GetMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_FParticleSystemSceneProxy_GetMeshElements,*pFVar26,
                        L"ParticleSystemSceneProxy GetMeshElements RT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_218 = *(FName *)FVar27;
  bVar7 = false;
  bVar15 = false;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  bVar18 = false;
  bVar12 = false;
  if ((local_218.ComparisonIndex.Value.Value == 0) && (local_218.Number == 0)) {
LAB_148114230:
    bVar15 = bVar12;
    bVar7 = bVar18;
    bVar18 = false;
    local_218 = local_1a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_210.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_210._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar7 = false;
      bVar15 = true;
      bVar18 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b0.ComparisonIndex.Value = local_218.ComparisonIndex.Value.Value;
        local_1b0.Number = local_218.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b0,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0xa3);
        bVar7 = true;
        bVar15 = true;
        bVar18 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148114230;
    FThreadStats::AddMessage(local_218,CycleScopeStart);
    bVar18 = true;
  }
  FVar28 = StatPtr_STAT_ParticlesOverview_RT;
  if (StatPtr_STAT_ParticlesOverview_RT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)0x0) {
    pFVar26 = ::FName::FName(&local_100,"STAT_ParticlesOverview_RT");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT,*pFVar26,
                        L"RT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_220 = *(FName *)FVar28;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar13 = false;
  bVar12 = false;
  if ((local_220.ComparisonIndex.Value.Value == 0) && (local_220.Number == 0)) {
LAB_14811435a:
    bVar14 = false;
    local_220 = local_198;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_20c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_20c._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f0.ComparisonIndex.Value = local_220.ComparisonIndex.Value.Value;
        local_1f0.Number = local_220.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f0,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0xa4);
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14811435a;
    FThreadStats::AddMessage(local_220,CycleScopeStart);
    bVar14 = true;
  }
  local_230 = (this->PerfStatContext).WorldStats;
  pFStack_150 = (this->PerfStatContext).SystemStats;
  local_228 = (this->PerfStatContext).SystemStats;
  local_148 = (this->PerfStatContext).ComponentStats;
  local_1b8.QuadPart = -1;
  local_158 = local_230;
  if (((local_230 != (FParticlePerfStats *)0x0) || (local_228 != (FParticlePerfStats *)0x0)) ||
     (local_148 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_130);
    local_1b8 = local_130;
  }
  if ((GbEnableGameThreadLODCalculation == false) && (iVar35 = param_1->ArrayNum, 0 < iVar35)) {
    uVar39 = 1;
    uVar36 = uVar42;
    uVar44 = uVar42;
    do {
      uVar40 = (uint)uVar36;
      if ((param_3 & uVar39) != 0) {
        uVar24 = uVar41;
        if ((int)uVar40 < iVar35) {
          uVar24 = ~uVar40 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar34 = *(longlong *)((param_1->AllocatorInstance).Data + uVar44);
        if (this->LODMethod == 0) {
          local_88 = *(double *)(lVar34 + 0xbd8);
          dVar45 = *(double *)&this->field_0x180 - local_88;
          dVar49 = *(double *)&this->field_0x170 - *(double *)(lVar34 + 0xbc8);
          dVar50 = *(double *)&this->field_0x178 - *(double *)(lVar34 + 0xbd0);
          auVar46._0_8_ = dVar45 * dVar45;
          auVar46._8_8_ = 0;
          auVar47._8_8_ = 0;
          auVar47._0_8_ = dVar50 * dVar50 + dVar49 * dVar49 + auVar46._0_8_;
          auVar47 = sqrtpd(auVar46,auVar47);
          fVar48 = (float)(auVar47._0_8_ * (double)*(float *)(lVar34 + 0x11c8));
          if (param_2->FrameNumber == this->LastFramePreRendered) {
            if (this->PendingLODDistance <= fVar48) goto LAB_148114505;
          }
          else {
            this->LastFramePreRendered = param_2->FrameNumber;
          }
          this->PendingLODDistance = fVar48;
        }
      }
LAB_148114505:
      iVar35 = param_1->ArrayNum;
      uVar36 = (ulonglong)(uVar40 + 1);
      uVar39 = uVar39 << 1 | (uint)((int)uVar39 < 0);
      uVar44 = uVar44 + 8;
    } while ((int)(uVar40 + 1) < iVar35);
    local_228 = pFStack_150;
    local_230 = local_158;
  }
  if ((param_2->EngineShowFlags).Particles == 0) goto LAB_148114d27;
  FVar29 = StatPtr_STAT_ParticleRenderingTime;
  if (StatPtr_STAT_ParticleRenderingTime ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleRenderingTime>)0x0) {
    pFVar26 = ::FName::FName(&local_f8,"STAT_ParticleRenderingTime");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_ParticleRenderingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleRenderingTime,*pFVar26,
                        L"Particle Render Time RT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar29;
  bVar21 = false;
  bVar11 = false;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  bVar19 = false;
  bVar8 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_148114673:
    bVar11 = bVar8;
    bVar21 = bVar19;
    bVar19 = false;
    local_1c0 = local_188;
    FVar38 = local_188;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar21 = false;
      bVar11 = true;
      bVar19 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_1e8.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e8,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0xb6);
        bVar21 = true;
        bVar11 = true;
        bVar19 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148114673;
    local_1c0 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar19 = true;
  }
  pFVar26 = *(FName **)&this->field_0x70;
  local_168.ComparisonIndex.Value = 0;
  local_168.Number = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  FVar4 = *pFVar26;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_204.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_204._s_0,(char *)pFVar26[2]);
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_1e0.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)pFVar26[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0xb7);
        bVar9 = true;
        bVar8 = true;
      }
    }
    bVar10 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_168 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar10 = true;
    }
  }
  if (GTrackParticleRenderingStats != false) {
    QueryPerformanceCounter(&local_f0);
  }
  pFVar30 = this->DynamicData;
  local_238 = 0;
  if ((pFVar30 != (FParticleDynamicData *)0x0) &&
     (local_240 = 0, 0 < (pFVar30->DynamicEmitterDataArray).ArrayNum)) {
    local_230 = (FParticlePerfStats *)0x0;
    uVar36 = uVar42;
    do {
      uVar40 = (uint)uVar36;
      uVar39 = uVar41;
      if ((int)uVar40 < (pFVar30->DynamicEmitterDataArray).ArrayNum) {
        uVar39 = ~uVar40 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar40 = local_240, bVar22)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (pFVar30->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
      FVar37 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar30->DynamicEmitterDataArray;
      if (FVar5 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
        FVar37 = FVar5;
      }
      local_1f8 = *(FName *)((longlong)FVar37 + (longlong)local_230);
      if ((local_1f8 != (FName)0x0) && ((*(byte *)((longlong)local_1f8 + 0x10) & 2) != 0)) {
        pFVar26 = *(FName **)((longlong)local_1f8 + 8);
        bVar22 = false;
        bVar16 = false;
        local_178.ComparisonIndex.Value = 0;
        local_178.Number = 0;
        bVar20 = false;
        bVar23 = false;
        FVar38 = *pFVar26;
        FVar43 = FVar38.ComparisonIndex.Value;
        uVar39 = FVar38.Number;
        if ((FVar43.Value == 0) && (uVar39 == 0)) {
LAB_1481148be:
          bVar16 = bVar23;
          bVar22 = bVar20;
          bVar20 = false;
          local_1c8 = local_178;
          FVar38 = local_178;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_200[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_200[0]._s_0,(char *)pFVar26[2]);
            bVar22 = false;
            bVar16 = true;
            bVar20 = false;
            bVar23 = true;
            if (-1 < CpuChannel->Enabled) {
              local_1d8.ComparisonIndex.Value = FVar43.Value;
              local_1d8.Number = uVar39;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_1d8,(wchar_t *)pFVar26[1],
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                         ,0xc5);
              bVar22 = true;
              bVar16 = true;
              bVar20 = true;
              bVar23 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_1481148be;
          local_1d0 = FVar43.Value;
          uStack_1cc = uVar39;
          local_1c8 = FVar38;
          local_178 = FVar38;
          FThreadStats::AddMessage(FVar38,CycleScopeStart);
          bVar20 = true;
        }
        FVar4 = local_1f8;
        this->DynamicData->EmitterIndex = local_240;
        iVar35 = param_1->ArrayNum;
        if (0 < iVar35) {
          uVar39 = 1;
          local_228 = (FParticlePerfStats *)0x0;
          uVar36 = uVar42;
          do {
            uVar40 = (uint)uVar36;
            if ((param_3 & uVar39) != 0) {
              uVar24 = uVar41;
              if ((int)uVar40 < iVar35) {
                uVar24 = ~uVar40 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              (**(code **)(*(longlong *)FVar4 + 0x18))
                        (FVar4,this,
                         *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)local_228),
                         param_2,uVar36,param_4);
              local_238 = local_238 + 1;
            }
            iVar35 = param_1->ArrayNum;
            local_228 = (FParticlePerfStats *)((longlong)local_228 + 8);
            uVar36 = (ulonglong)(uVar40 + 1);
            uVar39 = uVar39 << 1 | (uint)((int)uVar39 < 0);
            FVar38 = local_1c8;
          } while ((int)(uVar40 + 1) < iVar35);
        }
        if (bVar16) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        uVar40 = local_240;
        if (bVar20) {
          FThreadStats::AddMessage(FVar38,CycleScopeEnd);
        }
      }
      FVar38 = local_1c0;
      pFVar30 = this->DynamicData;
      local_240 = uVar40 + 1;
      uVar36 = (ulonglong)local_240;
      local_230 = (FParticlePerfStats *)((longlong)local_230 + 8);
    } while ((int)local_240 < (pFVar30->DynamicEmitterDataArray).ArrayNum);
    if ((local_238 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar31 = StatPtr_STAT_ParticleDrawCalls;
      if (StatPtr_STAT_ParticleDrawCalls == (FThreadSafeStaticStat<FStat_STAT_ParticleDrawCalls>)0x0
         ) {
        pFVar26 = ::FName::FName(&local_e8,"STAT_ParticleDrawCalls");
        FVar31 = (FThreadSafeStaticStat<FStat_STAT_ParticleDrawCalls>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleDrawCalls,*pFVar26,
                            L"Particle Draw Calls","STATGROUP_Particles","STATCAT_Advanced",
                            L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar4 = *(FName *)FVar31;
      local_1f8 = FVar4;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_118.NameAndInfo.Index = local_1f8.ComparisonIndex.Value;
        local_118.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
        local_128 = FVar4;
        local_118.StatData.Pad = (uchar  [8])(longlong)local_238;
        FThreadStats::AddStatMessage(this_00,&local_118);
        FStatsTrace::Add(&local_128,(longlong)local_238);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else {
          if (FThreadStats::bIsRawStatsActive == false) goto LAB_148114b9f;
          FThreadStats::FlushRawStats(this_00,false,false);
        }
        local_228 = pFStack_150;
        local_230 = local_158;
        goto LAB_148114bb0;
      }
    }
LAB_148114b9f:
    local_228 = pFStack_150;
    local_230 = local_158;
  }
LAB_148114bb0:
  if (((param_2->EngineShowFlags).Particles != 0) && (0 < param_1->ArrayNum)) {
    do {
      uVar41 = (uint)uVar42;
      if ((param_3 >> (uVar41 & 0x1f) & 1) != 0) {
        bVar3 = this->field_0x79;
        pFVar32 = FMeshElementCollector::GetPDI(param_4,uVar41);
        FPrimitiveSceneProxy::RenderBounds
                  ((FPrimitiveSceneProxy *)this,pFVar32,&param_2->EngineShowFlags,
                   (TBoxSphereBounds<double,double> *)&this->field_0x190,(bVar3 & 6) != 0);
        if ((this->bCanBeOccluded != '\0') && (this->bHasCustomOcclusionBounds != '\0')) {
          bVar3 = this->field_0x79;
          pTVar33 = UE::Math::TBoxSphereBounds<double,double>::TransformBy
                              (&this->OcclusionBounds,&local_80,
                               (TMatrix<double> *)&this->field_0x110);
          local_d0._s_0.X = (pTVar33->Origin).field0_0x0._s_0.X;
          local_d0._s_0.Y = (pTVar33->Origin).field0_0x0._s_0.Y;
          local_d0._s_0.Z = (pTVar33->Origin).field0_0x0._s_0.Z;
          dStack_b8 = (pTVar33->BoxExtent).field0_0x0._s_0.X;
          local_b0 = (pTVar33->BoxExtent).field0_0x0._s_0.Y;
          dStack_a8 = (pTVar33->BoxExtent).field0_0x0._s_0.Z;
          local_a0 = pTVar33->SphereRadius;
          pFVar32 = FMeshElementCollector::GetPDI(param_4,uVar41);
          FPrimitiveSceneProxy::RenderBounds
                    ((FPrimitiveSceneProxy *)this,pFVar32,&param_2->EngineShowFlags,
                     (TBoxSphereBounds<double,double> *)&local_d0._s_0,(bVar3 & 6) != 0);
        }
      }
      uVar42 = (ulonglong)(uVar41 + 1);
    } while ((int)(uVar41 + 1) < param_1->ArrayNum);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_168,CycleScopeEnd);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
LAB_148114d27:
  LVar17 = local_1b8;
  if (local_1b8.QuadPart != -1) {
    QueryPerformanceCounter(&local_120);
    lVar34 = local_120.QuadPart - (longlong)LVar17;
    if (local_230 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_230->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar34;
    }
    if (local_228 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_228->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar34;
    }
    if (local_148 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_148->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar34;
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_220,CycleScopeEnd);
  }
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(local_218,CycleScopeEnd);
  }
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_e0);
  return;
}

// GetMemoryFootprint @ 148116330

uint __thiscall FParticleSystemSceneProxy::GetMemoryFootprint(FParticleSystemSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x3b0;
}

// GetObjectPositionAndScale @ 148116ca0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::GetObjectPositionAndScale
          (FParticleSystemSceneProxy *this,FSceneView *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  uint uVar2;
  FParticleDynamicData *pFVar3;
  code *pcVar4;
  TVector2<double>_u_0 TVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  char *pcVar24;
  ForElementType<FDynamicEmitterDataBase_*> FVar25;
  float fVar26;
  double dStack_140;
  double dStack_130;
  double local_128;
  
  dVar20 = __real_3ff0000000000000;
  pFVar3 = this->DynamicData;
  dVar12 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.X;
  dVar13 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.Y;
  dVar1 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.Z;
  dVar14 = dVar12 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3] +
           (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3] * dVar13 +
           dVar1 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3] +
           (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3] * __real_3ff0000000000000;
  if (dVar14 <= __real_3ee4f8b580000000) {
    dVar14 = __real_3ee4f8b580000000;
  }
  dVar9 = (__real_3ff0000000000000 / dVar14) *
          (dVar13 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][1] +
           dVar12 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][1] +
           (param_1->ViewMatrices).ViewProjectionMatrix.M[2][1] * dVar1 +
          __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][1]);
  TVar5._8_4_ = SUB84(dVar9,0);
  TVar5._s_0.X = (__real_3ff0000000000000 / dVar14) *
                 (dVar13 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][0] +
                  dVar12 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][0] +
                  (param_1->ViewMatrices).ViewProjectionMatrix.M[2][0] * dVar1 +
                 __real_3ff0000000000000 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][0]);
  TVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  param_2->field0_0x0 = TVar5;
  pFVar3 = this->DynamicData;
  uVar2 = pFVar3->EmitterIndex;
  dVar14 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.X;
  local_128 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.Y;
  dVar1 = (pFVar3->SystemPositionForMacroUVs).field0_0x0._s_0.Z;
  fVar26 = pFVar3->SystemRadiusForMacroUVs;
  uVar22 = 0;
  if ((int)uVar2 < (pFVar3->DynamicEmitterDataArray).ArrayNum) {
    uVar22 = ~uVar2 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar25 = (pFVar3->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
  if (FVar25 == (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
    FVar25 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar3->DynamicEmitterDataArray;
  }
  pcVar24 = (char *)(**(code **)(**(longlong **)((longlong)FVar25 + (longlong)(int)uVar2 * 8) + 0x38
                                ))();
  if (*pcVar24 != '\0') {
    fVar26 = *(float *)(pcVar24 + 4);
    dVar12 = (double)*(float *)(pcVar24 + 8);
    dVar1 = (double)*(float *)(pcVar24 + 0xc);
    dVar13 = (double)*(float *)(pcVar24 + 0x10);
    dVar14 = *(double *)&this->field_0x110 * dVar12 + dVar1 * *(double *)&this->field_0x130 +
             dVar13 * *(double *)&this->field_0x150 + *(double *)&this->field_0x170 * 0.0;
    local_128 = *(double *)&this->field_0x118 * dVar12 + dVar1 * *(double *)&this->field_0x138 +
                dVar13 * *(double *)&this->field_0x158 + *(double *)&this->field_0x178 * 0.0;
    dVar1 = *(double *)&this->field_0x140 * dVar1 + *(double *)&this->field_0x120 * dVar12 +
            *(double *)&this->field_0x160 * dVar13 + *(double *)&this->field_0x180 * 0.0;
    iVar23 = _finite(dVar14);
    if ((((iVar23 == 0) || (iVar23 = _finite(local_128), iVar23 == 0)) ||
        (iVar23 = _finite(dVar1), iVar23 == 0)) && (1 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
  }
  (param_3->field0_0x0)._s_0.X = 0.0;
  (param_3->field0_0x0)._s_0.Y = 0.0;
  if (0.0 < fVar26) {
    dVar15 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][0];
    dVar10 = (double)fVar26;
    dVar9 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[0][0] + dVar14;
    dVar12 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[1][0] + local_128;
    dVar16 = (param_1->ViewMatrices).ViewProjectionMatrix.M[0][3];
    dVar11 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[2][0] + dVar1;
    dVar17 = (param_1->ViewMatrices).ViewProjectionMatrix.M[1][3];
    dVar18 = (param_1->ViewMatrices).ViewProjectionMatrix.M[2][3];
    auVar8._8_4_ = SUB84(dVar12,0);
    auVar8._0_8_ = dVar12;
    auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar19 = (param_1->ViewMatrices).ViewProjectionMatrix.M[3][3];
    dStack_130 = auVar8._8_8_;
    dVar13 = dStack_130 * dVar17 + dVar9 * dVar16 + dVar11 * dVar18 + dVar20 * dVar19;
    auVar6._8_4_ = SUB84(dVar13,0);
    auVar6._0_8_ = dVar12 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][2] +
                   dVar9 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][2] +
                   dVar11 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][2] +
                   dVar20 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][2];
    auVar6._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dVar14 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[0][1] + dVar14;
    local_128 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[1][1] + local_128;
    dVar1 = dVar10 * (param_1->ViewMatrices).TranslatedViewMatrix.M[2][1] + dVar1;
    dVar13 = local_128 * (param_1->ViewMatrices).ViewProjectionMatrix.M[1][1];
    auVar7._8_4_ = SUB84(dVar13,0);
    auVar7._0_8_ = local_128 * dVar15;
    auVar7._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dStack_140 = auVar7._8_8_;
    dStack_130 = auVar6._8_8_;
    dVar12 = (dVar12 * dVar15 + dVar9 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][0] +
              dVar11 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][0] +
             dVar20 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][0]) / dStack_130 -
             (param_2->field0_0x0)._s_0.X;
    if (__real_42a0000000000000 <= dVar12) {
      dVar12 = __real_42a0000000000000;
    }
    dVar1 = (dStack_140 + dVar14 * (param_1->ViewMatrices).ViewProjectionMatrix.M[0][1] +
             dVar1 * (param_1->ViewMatrices).ViewProjectionMatrix.M[2][1] +
            dVar20 * (param_1->ViewMatrices).ViewProjectionMatrix.M[3][1]) /
            (dVar14 * dVar16 + local_128 * dVar17 + dVar1 * dVar18 + dVar20 * dVar19) -
            (param_2->field0_0x0)._s_0.Y;
    if (__real_42a0000000000000 <= dVar1) {
      dVar1 = __real_42a0000000000000;
    }
    if ((((dVar12 == 0.0) || (dVar1 == 0.0)) ||
        ((iVar23 = _isnan(dVar12), iVar23 != 0 ||
         ((iVar23 = _finite(dVar12), iVar23 == 0 || (iVar23 = _isnan(dVar1), iVar23 != 0)))))) ||
       (iVar23 = _finite(dVar1), iVar23 == 0)) {
      if (GEnableMacroUVDebugSpam != 0) {
        if ((((((1 < (byte)LogParticles._0_1_) &&
               (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
               1 < (byte)LogParticles._0_1_)) &&
              (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              1 < (byte)LogParticles._0_1_)) &&
             ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              1 < (byte)LogParticles._0_1_ &&
              (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              1 < (byte)LogParticles._0_1_)))) &&
            (((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              1 < (byte)LogParticles._0_1_ &&
              ((UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)&PTR_u_ObjectNDCPositi_151a16498,
                           (FLogCategoryBase *)&LogParticles), 1 < (byte)LogParticles._0_1_ &&
               (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
               1 < (byte)LogParticles._0_1_)))) &&
             (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             1 < (byte)LogParticles._0_1_)))) &&
           (((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             1 < (byte)LogParticles._0_1_ &&
             (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             1 < (byte)LogParticles._0_1_)) &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_)))) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        if (((1 < (byte)LogParticles._0_1_) &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_)) &&
           ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_ &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_)))) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        if (((1 < (byte)LogParticles._0_1_) &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_)) &&
           ((UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_ &&
            (UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
            1 < (byte)LogParticles._0_1_)))) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
      }
    }
    else {
      (param_3->field0_0x0)._s_0.X = dVar20 / dVar12;
      (param_3->field0_0x0)._s_0.Y = __real_bff0000000000000 / dVar1;
    }
  }
  return;
}

// GetPooledMeshBatch @ 148118700

FMeshBatch * __thiscall
FParticleSystemSceneProxy::GetPooledMeshBatch(FParticleSystemSceneProxy *this)

{
  int *piVar1;
  TIndirectArray<FMeshBatch,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMeshBatch *pFVar6;
  ForElementType<void_*> FVar7;
  FMeshBatch *local_18 [2];
  
  pTVar2 = &this->MeshBatchPool;
  iVar5 = this->FirstFreeMeshBatch;
  if (iVar5 < (this->MeshBatchPool).Array.ArrayNum) {
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMeshBatch *)(*pcVar3)();
        return pFVar6;
      }
    }
    FVar7 = (this->MeshBatchPool).Array.AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<void_*>)0x0) {
      FVar7 = (ForElementType<void_*>)pTVar2;
    }
    pFVar6 = *(FMeshBatch **)((longlong)FVar7 + (longlong)iVar5 * 8);
  }
  else {
    pFVar6 = ::operator_new(0xe0);
    if (pFVar6 == (FMeshBatch *)0x0) {
      pFVar6 = (FMeshBatch *)0x0;
    }
    else {
      pFVar6 = FMeshBatch::FMeshBatch(pFVar6);
    }
    FVar7 = (this->MeshBatchPool).Array.AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<void_*>)0x0) {
      FVar7 = (ForElementType<void_*>)pTVar2;
    }
    local_18[0] = pFVar6;
    if (((ulonglong)FVar7 <= local_18) &&
       (local_18 <
        (FMeshBatch **)((longlong)FVar7 + (longlong)(this->MeshBatchPool).Array.ArrayMax * 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FMeshBatch *)(*pcVar3)();
        return pFVar6;
      }
    }
    iVar5 = (this->MeshBatchPool).Array.ArrayNum;
    piVar1 = &(this->MeshBatchPool).Array.ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<void_*>_>
                        (0x808,(ForElementType<void_*> *)pTVar2,piVar1);
    }
    (this->MeshBatchPool).Array.ArrayNum = iVar5 + 1;
    FVar7 = (this->MeshBatchPool).Array.AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<void_*>)0x0) {
      FVar7 = (ForElementType<void_*>)pTVar2;
    }
    *(FMeshBatch **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_18[0];
  }
  this->FirstFreeMeshBatch = this->FirstFreeMeshBatch + 1;
  return pFVar6;
}

// GetTypeHash @ 14811c4d0

ulong64 __thiscall FParticleSystemSceneProxy::GetTypeHash(FParticleSystemSceneProxy *this)

{
  return 0x15522b9b0;
}

// GetViewRelevance @ 14811cb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FParticleSystemSceneProxy::GetViewRelevance
          (FParticleSystemSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  pbVar6 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  __return_storage_ptr__->bRenderInMainPass = 1;
  *pbVar6 = *pbVar6 | 4;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  uVar3 = 0;
  if ((!bVar2) || (uVar5 = 4, (param_1->Family->EngineShowFlags).Particles == 0)) {
    uVar5 = uVar3;
  }
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  uVar4 = ((uint)(byte)this->field_0x7b << 4 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  uVar5 = uVar3;
  if (this->field_0x89 != '\x01') {
    uVar5 = 0x2000;
  }
  uVar5 = uVar5 | uVar4 & 0xffffdfff;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       ((uint)(byte)this->field_0x7f << 0xe ^ uVar5) & 0x4000 ^ uVar5 | 0x1002;
  if ((param_1->Family->EngineShowFlags).Wireframe == 0 &&
      (param_1->Family->EngineShowFlags).Materials == 1) {
    FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  }
  if (((param_1->Family->EngineShowFlags).Bounds != 0) ||
     ((param_1->Family->EngineShowFlags).VectorFields != 0)) {
    pbVar6 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
    *pbVar6 = *pbVar6 | 4;
  }
  pbVar6 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  if (this->DynamicData == (FParticleDynamicData *)0x0) {
    *pbVar6 = *pbVar6 | 4;
  }
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || ((this->field_0x82 & 0x72) != 0)))) &&
     (((__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar3 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = uVar3 >> 4;
  return __return_storage_ptr__;
}

// HasCustomOcclusionBounds @ 14811d5b0

bool __thiscall FParticleSystemSceneProxy::HasCustomOcclusionBounds(FParticleSystemSceneProxy *this)

{
  if (this->bCanBeOccluded != '\0') {
    return this->bHasCustomOcclusionBounds;
  }
  return false;
}

// OnTransformChanged @ 148124a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::OnTransformChanged
          (FParticleSystemSceneProxy *this,FRHICommandListBase *param_1)

{
  (**(code **)((this->WorldSpacePrimitiveUniformBuffer)._padding_ + 0x20))();
  this->WorldSpaceUBHash = 0;
  return;
}

// ReleaseRenderThreadResources @ 1481290d0

void __thiscall
FParticleSystemSceneProxy::ReleaseRenderThreadResources(FParticleSystemSceneProxy *this)

{
  ReleaseRenderThreadResourcesForEmitterData(this);
                    /* WARNING: Could not recover jumptable at 0x0001481290ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->WorldSpacePrimitiveUniformBuffer)._padding_ + 0x20))();
  return;
}

// ReleaseRenderThreadResourcesForEmitterData @ 148129100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::ReleaseRenderThreadResourcesForEmitterData
          (FParticleSystemSceneProxy *this)

{
  int *piVar1;
  ForElementType<FDynamicEmitterDataBase_*> FVar2;
  longlong *plVar3;
  FName *pFVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FParticleDynamicData *pFVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  FNameEntryId FVar14;
  ulonglong uVar15;
  ForElementType<FDynamicEmitterDataBase_*> FVar16;
  bool bVar17;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  pFVar10 = this->DynamicData;
  if (pFVar10 != (FParticleDynamicData *)0x0) {
    uVar13 = 0;
    uVar15 = uVar13;
    if (0 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (pFVar10->DynamicEmitterDataArray).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar2 = (pFVar10->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar10->DynamicEmitterDataArray;
        if (FVar2 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
          FVar16 = FVar2;
        }
        plVar3 = *(longlong **)(uVar15 + (longlong)FVar16);
        if (plVar3 != (longlong *)0x0) {
          pFVar4 = (FName *)plVar3[1];
          bVar7 = false;
          bVar8 = false;
          local_70.ComparisonIndex.Value = 0;
          local_70.Number = 0;
          FVar5 = *pFVar4;
          FVar14 = FVar5.ComparisonIndex.Value;
          uVar9 = FVar5.Number;
          if ((FVar14.Value == 0) && (uVar9 == 0)) {
            (**(code **)(*plVar3 + 0x10))(plVar3,this);
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_res8[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar4[2])
              ;
              bVar7 = false;
              bVar8 = true;
              if (-1 < CpuChannel->Enabled) {
                local_res18.ComparisonIndex.Value = FVar14.Value;
                local_res18.Number = uVar9;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_res18,(wchar_t *)pFVar4[1],
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                           ,0x10d);
                bVar7 = true;
                bVar8 = true;
              }
            }
            bVar17 = FThreadStats::bPrimaryEnable != false;
            FVar11 = local_70;
            if (bVar17) {
              local_res20 = FVar14.Value;
              uStackX_24 = uVar9;
              local_70 = FVar5;
              FThreadStats::AddMessage(FVar5,CycleScopeStart);
              bVar7 = false;
              FVar11 = FVar5;
            }
            (**(code **)(*plVar3 + 0x10))(plVar3,this);
            if (bVar8) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar7) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar17) && (FVar11 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
                local_60[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
                local_60[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&local_78);
                local_60[0].StatData.Pad[4] = '\0';
                local_60[0].StatData.Pad[5] = '\0';
                local_60[0].StatData.Pad[6] = '\0';
                local_60[0].StatData.Pad[7] = '\0';
                local_60[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
                local_60[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
                local_60[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
                local_60[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this_00,local_60);
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
          }
        }
        pFVar10 = this->DynamicData;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) < (pFVar10->DynamicEmitterDataArray).ArrayNum);
    }
  }
  return;
}

// UpdateData @ 148140970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FParticleSystemSceneProxy::UpdateData(FParticleSystemSceneProxy *this,FParticleDynamicData *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FParticleSystemSceneProxy *pFStack_70;
  FParticleDynamicData *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FParticleSystemSceneProxy *pFStack_40;
  FParticleDynamicData *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FParticleSystemSceneProxy::UpdateData'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticleSystemSceneProxy::UpdateData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticleSystemSceneProxy::UpdateData_::__l2::TSTR_ParticleUpdateDataCommand279>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FParticleSystemSceneProxy::UpdateData'::__l2::TSTR_ParticleUpdateDataCommand279>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// UpdateData_RenderThread @ 148140ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::UpdateData_RenderThread
          (FParticleSystemSceneProxy *this,FParticleDynamicData *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  FParticleDynamicData *this_00;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UWorld *pUVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT> FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  FInGameScopedCycleCounter local_38;
  
  pUVar6 = (UWorld *)(**(code **)(**(longlong **)&this->field_0x220 + 0x410))();
  FInGameScopedCycleCounter::FInGameScopedCycleCounter
            (&local_38,pUVar6,VFXSignificance,RenderThread,this->bManagingSignificance);
  FVar12.Value = 0;
  FVar8 = StatPtr_STAT_ParticlesOverview_RT;
  if (StatPtr_STAT_ParticlesOverview_RT ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_ParticlesOverview_RT");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT,*pFVar7,
                       L"RT Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                       L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ParticleSystemSceneProxy.cpp"
                   ,0x12a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_148140c66;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_148140c66:
  ReleaseRenderThreadResourcesForEmitterData(this);
  this_00 = this->DynamicData;
  if ((this_00 != param_1) && (this_00 != (FParticleDynamicData *)0x0)) {
    FParticleDynamicData::_scalar_deleting_destructor_(this_00,1);
  }
  this->DynamicData = param_1;
  CreateRenderThreadResourcesForEmitterData(this);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_48);
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
  FInGameScopedCycleCounter::~FInGameScopedCycleCounter(&local_38);
  return;
}

// UpdateWorldSpacePrimitiveUniformBuffer @ 148142ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer
          (FParticleSystemSceneProxy *this,FRHICommandListBase *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  FRHICommandListBase *pFVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  float *pfVar9;
  FPrimitiveUniformShaderParametersBuilder *this_01;
  FPrimitiveUniformShaderParameters *pFVar10;
  uchar *puVar11;
  uchar *puVar12;
  longlong lVar13;
  uint uVar14;
  FPrimitiveUniformShaderParameters *pFVar15;
  undefined1 auStack_508 [36];
  undefined4 local_4e4;
  undefined4 uStack_4e0;
  undefined8 local_4dc;
  FRHICommandListBase *local_4d0;
  undefined1 local_4c8 [664];
  float afStack_230 [2];
  TVector4<float>_u_0 local_228;
  TVector4<float>_u_0 local_218;
  TVector4<float>_u_0 local_208;
  TVector4<float>_u_0 local_1f8;
  TVector4<float>_u_0 local_1e8;
  TVector4<float>_u_0 local_1d8;
  TVector4<float>_u_0 local_1c8;
  TVector4<float>_u_0 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  float local_78;
  uint local_74;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_508;
  uVar14 = 0;
  uVar8 = uVar14;
  local_4d0 = param_1;
  if ((&this->field_0x50 != (undefined1 *)0x0) && (uVar8 = 0, *(int *)&this->field_0x58 != 0)) {
    uVar8 = (*FCrc::MemCrc32Func)(*(void **)&this->field_0x50,*(int *)&this->field_0x58 * 4,0);
  }
  this_00 = &this->WorldSpacePrimitiveUniformBufferMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar2 = (int)(this->WorldSpacePrimitiveUniformBuffer)._padding_;
  if ((iVar2 == -1) || (this->WorldSpaceUBHash != uVar8)) {
    this->WorldSpaceUBHash = uVar8;
    memset((FPrimitiveUniformShaderParametersBuilder *)local_4c8,0,0x460);
    pfVar9 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4c8)->Parameters).
              CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
    local_4c8._368_8_ = ___xmm_3f800000000000000000000000000000;
    local_4c8._376_8_ = _UNK_150689648;
    lVar13 = 9;
    local_4c8._448_8_ = ___xmm_3f800000000000000000000000000000;
    local_4c8._456_8_ = _UNK_150689648;
    do {
      ((TVector4<float>_u_0_s_0 *)(pfVar9 + -2))->X = 0.0;
      ((TVector4<float>_u_0_s_0 *)(pfVar9 + -2))->Y = 0.0;
      *pfVar9 = 0.0;
      pfVar9[1] = 1.0;
      pfVar9 = pfVar9 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    local_70 = local_70 & 0xfffffc00;
    local_4c8._656_8_ = 0;
    afStack_230[0] = 0.0;
    afStack_230[1] = 0.0;
    local_4e4 = 0xffffff00;
    local_228._0_8_ = 0;
    local_228._8_8_ = 0;
    uStack_4e0 = 0xffffff00;
    local_4c8._584_8_ = (TVector2<float>_u_0)0xffffff00ffffff00;
    local_218._0_8_ = 0;
    local_218._8_8_ = 0;
    local_208._0_8_ = 0;
    local_208._8_8_ = 0;
    local_4c8._624_8_ = (TIntVector2<unsigned_int>_u_0)0x0;
    local_1f8._0_8_ = 0;
    local_1f8._8_8_ = 0;
    local_4c8._640_4_ = 0.0;
    local_1e8._0_8_ = 0;
    local_1e8._8_8_ = 0;
    local_4c8._396_4_ = 0.0;
    local_1d8._0_8_ = 0;
    local_1d8._8_8_ = 0;
    local_4c8._412_4_ = 0.0;
    local_1c8._0_8_ = 0;
    local_1c8._8_8_ = 0;
    local_4c8._444_4_ = 0;
    local_1b8._0_8_ = 0;
    local_1b8._8_8_ = 0;
    local_4c8._428_4_ = 0xffffffff;
    local_1a8 = UE::Math::TMatrix<double>::Identity.M[0][0];
    dStack_1a0 = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_198 = UE::Math::TMatrix<double>::Identity.M[0][2];
    dStack_190 = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_188 = UE::Math::TMatrix<double>::Identity.M[1][0];
    dStack_180 = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_178 = UE::Math::TMatrix<double>::Identity.M[1][2];
    dStack_170 = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_168 = UE::Math::TMatrix<double>::Identity.M[2][0];
    dStack_160 = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_158 = UE::Math::TMatrix<double>::Identity.M[2][2];
    dStack_150 = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_148 = UE::Math::TMatrix<double>::Identity.M[3][0];
    dStack_140 = UE::Math::TMatrix<double>::Identity.M[3][1];
    local_90._s_0.X = (double)*(undefined8 *)&this->field_0x200;
    local_90._s_0.Y = (double)*(undefined8 *)&this->field_0x208;
    local_4c8._12_4_ = -1;
    local_138 = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_130 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_90._s_0.Z = (double)*(undefined8 *)&this->field_0x210;
    local_4c8._596_4_ = -1;
    local_a8._s_0.X = (double)*(undefined8 *)&this->field_0x190;
    local_a8._s_0.Y = (double)*(undefined8 *)&this->field_0x198;
    local_4c8._28_4_ = 0xffffffff;
    local_a8._s_0.Z = (double)*(undefined8 *)&this->field_0x1a0;
    local_78 = (float)*(double *)&this->field_0x1c0;
    local_4c8._476_4_ = 0xffffffff;
    local_4c8._492_4_ = 0xffffffff;
    local_4c8._496_4_ = 0xffffffff;
    local_4c8._592_4_ = 0xffffff;
    local_4c8._636_4_ = 0xffffffff;
    local_4c8._4_4_ = 0xffffffff;
    local_4c8._364_4_ = (undefined4)*(double *)&this->field_0x1a8;
    local_4c8._8_4_ = 0;
    local_4c8._556_4_ = 0xffffffff;
    local_4c8._572_4_ = 0;
    local_4c8._576_4_ = 0;
    local_4dc = 0;
    local_4c8._632_4_ = 0;
    local_4c8._524_4_ = (undefined4)*(double *)&this->field_0x1b0;
    local_4c8._540_4_ = (undefined4)*(double *)&this->field_0x1b8;
    bVar7 = this->field_0x82;
    local_4c8._512_4_ = (undefined4)(*(double *)&this->field_0x1c8 - *(double *)&this->field_0x1e0);
    local_4c8._516_4_ = (undefined4)(*(double *)&this->field_0x1d0 - *(double *)&this->field_0x1e8);
    local_4c8._520_4_ = (undefined4)(*(double *)&this->field_0x1d8 - *(double *)&this->field_0x1f0);
    local_4c8._528_4_ = (undefined4)(*(double *)&this->field_0x1c8 + *(double *)&this->field_0x1e0);
    local_4c8._532_4_ = (undefined4)(*(double *)&this->field_0x1d0 + *(double *)&this->field_0x1e8);
    local_4c8._536_4_ = (undefined4)(*(double *)&this->field_0x1d8 + *(double *)&this->field_0x1f0);
    if (((((char)bVar7 < '\0') || ((bVar7 & 0x10) != 0)) || ((bVar7 & 3) == 3)) ||
       ((bVar7 & 0x60) != 0)) {
      uVar14 = 0x40;
    }
    uVar14 = (byte)this->field_0x78 & 8 ^ 0xfe0381 | uVar14;
    local_74 = ((byte)this->field_0x89 ^ uVar14) & 7 ^ uVar14;
    bVar6 = FPrimitiveSceneProxy::UseSingleSampleShadowFromStationaryLights
                      ((FPrimitiveSceneProxy *)this);
    local_74 = (uint)bVar6 << 4 | local_74 & 0xffffffef;
    bVar7 = (**(code **)(**(longlong **)&this->field_0x220 + 0x1f8))();
    local_74 = local_74 ^ ((uint)bVar7 << 5 ^ local_74) & 0x20;
    this_01 = FPrimitiveUniformShaderParametersBuilder::CustomPrimitiveData
                        ((FPrimitiveUniformShaderParametersBuilder *)local_4c8,
                         (FCustomPrimitiveData *)&this->field_0x50);
    uVar8 = ((uint)(byte)this->field_0x82 * 2 ^ *(uint *)&this_01->field_0x458) & 0x20 ^
            *(uint *)&this_01->field_0x458;
    *(uint *)&this_01->field_0x458 = uVar8;
    *(uint *)&this_01->field_0x458 = ((uint)(byte)this->field_0x85 << 9 ^ uVar8) & 0x200 ^ uVar8;
    pFVar10 = FPrimitiveUniformShaderParametersBuilder::Build(this_01);
    puVar11 = (this->WorldSpacePrimitiveUniformBuffer).Contents;
    if (puVar11 == (uchar *)0x0) {
      puVar11 = FMemory::Malloc(800,0x10);
      (this->WorldSpacePrimitiveUniformBuffer).Contents = puVar11;
    }
    pFVar5 = local_4d0;
    lVar13 = 6;
    do {
      pFVar15 = pFVar10;
      puVar12 = puVar11;
      uVar4 = *(undefined8 *)&pFVar15->NumInstanceSceneDataEntries;
      pFVar10 = (FPrimitiveUniformShaderParameters *)((pFVar15->RelativeWorldToLocal).M + 2);
      *(undefined8 *)puVar12 = *(undefined8 *)pFVar15;
      *(undefined8 *)(puVar12 + 8) = uVar4;
      uVar4 = *(undefined8 *)((longlong)&(pFVar15->PositionHigh).field0_0x0 + 8);
      *(undefined8 *)(puVar12 + 0x10) = *(undefined8 *)&(pFVar15->PositionHigh).field0_0x0;
      *(undefined8 *)(puVar12 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[0] + 2);
      *(undefined8 *)(puVar12 + 0x20) = *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[0];
      *(undefined8 *)(puVar12 + 0x28) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[1] + 2);
      *(undefined8 *)(puVar12 + 0x30) = *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[1];
      *(undefined8 *)(puVar12 + 0x38) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[2] + 2);
      *(undefined8 *)(puVar12 + 0x40) = *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[2];
      *(undefined8 *)(puVar12 + 0x48) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->LocalToRelativeWorld).M[3] + 2);
      *(undefined8 *)(puVar12 + 0x50) = *(undefined8 *)(pFVar15->LocalToRelativeWorld).M[3];
      *(undefined8 *)(puVar12 + 0x58) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[0] + 2);
      *(undefined8 *)(puVar12 + 0x60) = *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[0];
      *(undefined8 *)(puVar12 + 0x68) = uVar4;
      uVar4 = *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[1] + 2);
      *(undefined8 *)(puVar12 + 0x70) = *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[1];
      *(undefined8 *)(puVar12 + 0x78) = uVar4;
      lVar13 = lVar13 + -1;
      puVar11 = puVar12 + 0x80;
    } while (lVar13 != 0);
    uVar4 = *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[2] + 2);
    *(undefined8 *)(puVar12 + 0x80) = *(undefined8 *)pFVar10;
    *(undefined8 *)(puVar12 + 0x88) = uVar4;
    uVar4 = *(undefined8 *)((pFVar15->RelativeWorldToLocal).M[3] + 2);
    *(undefined8 *)(puVar12 + 0x90) = *(undefined8 *)(pFVar15->RelativeWorldToLocal).M[3];
    *(undefined8 *)(puVar12 + 0x98) = uVar4;
    FRenderResource::UpdateRHI((FRenderResource *)&this->WorldSpacePrimitiveUniformBuffer,local_4d0)
    ;
    if (iVar2 == -1) {
      (**(code **)((this->WorldSpacePrimitiveUniformBuffer)._padding_ + 0x18))
                (&this->WorldSpacePrimitiveUniformBuffer,pFVar5);
    }
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// GetWorldSpacePrimitiveUniformBuffer @ 148200f80

FRHIUniformBuffer * __thiscall
FParticleSystemSceneProxy::GetWorldSpacePrimitiveUniformBuffer(FParticleSystemSceneProxy *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBuffer *pFVar3;
  
  if ((this->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI ==
      (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI ==
      (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRHIUniformBuffer *)(this->WorldSpacePrimitiveUniformBuffer).UniformBufferRHI;
}

