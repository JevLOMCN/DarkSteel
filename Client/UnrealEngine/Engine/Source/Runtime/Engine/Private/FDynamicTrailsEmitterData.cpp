// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// DoBufferFill @ 148170970

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
FDynamicTrailsEmitterData::DoBufferFill
          (FDynamicTrailsEmitterData *this,FAsyncBufferFillData *param_1)

{
  if ((((0 < param_1->VertexCount) && (0 < param_1->IndexCount)) &&
      (param_1->VertexData != (void *)0x0)) && (param_1->IndexData != (void *)0x0)) {
    (**(code **)(this->_padding_ + 0x78))();
    (**(code **)(this->_padding_ + 0x80))(this,param_1);
  }
  return;
}

// GetDynamicParameterVertexStride @ 148179970

int __thiscall
FDynamicTrailsEmitterData::GetDynamicParameterVertexStride(FDynamicTrailsEmitterData *this)

{
  return 0x10;
}

// GetDynamicVertexStride @ 148179980

int __thiscall
FDynamicTrailsEmitterData::GetDynamicVertexStride(FDynamicTrailsEmitterData *this,Type param_1)

{
  return 0x50;
}

// GetSource @ 14817e1f0

FDynamicEmitterReplayDataBase * __thiscall
FDynamicTrailsEmitterData::GetSource(FDynamicTrailsEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicEmitterReplayDataBase *pFVar3;
  
  if (this->SourcePointer != (FDynamicTrailsEmitterReplayData *)0x0) {
    return (FDynamicEmitterReplayDataBase *)this->SourcePointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SourcePointer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x83e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicEmitterReplayDataBase *)this->SourcePointer;
}

// GetSourceData @ 14817e250

FDynamicTrailsEmitterReplayData * __thiscall
FDynamicTrailsEmitterData::GetSourceData(FDynamicTrailsEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicTrailsEmitterReplayData *pFVar3;
  
  if (this->SourcePointer != (FDynamicTrailsEmitterReplayData *)0x0) {
    return this->SourcePointer;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SourcePointer",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\ParticleHelper.h"
                     ,0x844,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicTrailsEmitterReplayData *)(*pcVar1)();
    return pFVar3;
  }
  return this->SourcePointer;
}

// ~FDynamicTrailsEmitterData @ 1481c91a0

void __thiscall
FDynamicTrailsEmitterData::~FDynamicTrailsEmitterData(FDynamicTrailsEmitterData *this)

{
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  return;
}

// FillIndexData @ 1481ebaa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FDynamicTrailsEmitterData::FillIndexData
          (FDynamicTrailsEmitterData *this,FAsyncBufferFillData *param_1)

{
  short *psVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_TrailFillIndexTime> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  ulonglong uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  short *psVar19;
  FDynamicTrailsEmitterReplayData *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  uVar15 = 0;
  uVar11 = 0;
  FVar10 = StatPtr_STAT_TrailFillIndexTime;
  if (StatPtr_STAT_TrailFillIndexTime == (FThreadSafeStaticStat<FStat_STAT_TrailFillIndexTime>)0x0)
  {
    pFVar9 = ::FName::FName(&local_res10,"STAT_TrailFillIndexTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_TrailFillIndexTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailFillIndexTime,*pFVar9,
                        L"Trail FillIndex Time RT","STATGROUP_TrailParticles","STATCAT_Advanced",
                        L"Trail Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar21 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x140a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar21;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      goto LAB_1481ebc07;
    }
  }
  bVar4 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
  FVar13.Value = uVar11;
LAB_1481ebc07:
  pFVar20 = this->SourcePointer;
  sVar8 = 0;
  sVar7 = 0;
  psVar19 = param_1->IndexData;
  uVar16 = uVar15;
  uVar17 = uVar15;
  uVar22 = uVar15;
  if (0 < *(int *)((longlong)&pFVar20->_padding_ + 4)) {
    do {
      puVar18 = (uint *)((longlong)
                         (int)((uint)*(ushort *)(pFVar20->_padding_ + uVar15) *
                              (int)pFVar20->_padding_) + (longlong)pFVar20->TrailDataOffset +
                        pFVar20->_padding_);
      uVar11 = *puVar18 & 0xf0000000;
      if ((uVar11 == 0x40000000) || (uVar11 == 0x10000000)) {
        uVar11 = puVar18[2];
        uVar12 = (ulonglong)uVar11;
        if (uVar11 != 0) {
          psVar1 = psVar19 + 1;
          if ((int)uVar16 == 0) {
            *psVar19 = sVar8;
            psVar19 = psVar1;
            sVar6 = sVar7 + 1;
          }
          else {
            *psVar19 = sVar8 + -1;
            psVar19[2] = sVar8;
            psVar19 = psVar19 + 3;
            uVar17 = (ulonglong)((int)uVar17 + 4);
            *psVar19 = sVar8 + 1;
            sVar6 = sVar8;
          }
          psVar19 = psVar19 + 1;
          *psVar1 = sVar6;
          sVar8 = sVar8 + 2;
          sVar7 = sVar7 + 2;
          if (0 < (int)uVar11) {
            uVar17 = (ulonglong)((int)uVar17 + uVar11);
            sVar7 = sVar8;
            do {
              sVar8 = sVar7 + 1;
              *psVar19 = sVar7;
              psVar19 = psVar19 + 1;
              uVar12 = uVar12 - 1;
              sVar7 = sVar8;
            } while (uVar12 != 0);
          }
          uVar16 = (ulonglong)((int)uVar16 + 1);
        }
      }
      uVar11 = (uint)uVar17;
      pFVar20 = this->SourcePointer;
      uVar21 = (int)uVar22 + 1;
      uVar15 = uVar15 + 2;
      uVar22 = (ulonglong)uVar21;
    } while ((int)uVar21 < *(int *)((longlong)&pFVar20->_padding_ + 4));
  }
  param_1->OutTriangleCount = uVar11;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return uVar11;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return uVar11;
}

// FillVertexData @ 1481ee880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FDynamicTrailsEmitterData::FillVertexData
          (FDynamicTrailsEmitterData *this,FAsyncBufferFillData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!L\"FillVertexData: Base implementation should NOT be called!\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                     ,0x145a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetDynamicMeshElementsEmitter @ 1481f9a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FDynamicTrailsEmitterData::GetDynamicMeshElementsEmitter
          (FDynamicTrailsEmitterData *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  FParticleBeamTrailVertexFactory *this_00;
  undefined4 uVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ESceneDepthPriorityGroup EVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_TrailRenderingTime> FVar15;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesRenderCalls> FVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRHICommandListBase *pFVar17;
  FGlobalDynamicVertexBuffer *pFVar18;
  FGlobalDynamicIndexBuffer *pFVar19;
  FDynamicBeamTrailCollectorResources *pFVar20;
  TUniformBufferRef<FParticleBeamTrailUniformParameters> TVar21;
  ForElementType<FMeshBatchElement> this_03;
  FRHIUniformBuffer *pFVar22;
  FDynamicTrailsEmitterReplayData *pFVar23;
  FPrimitiveDrawInterface *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesTrianglesRendered> FVar25;
  FVertexBuffer *pFVar26;
  ForElementType<FMeshBatchElement> FVar27;
  FColoredMaterialRenderProxy *pFVar28;
  byte bVar29;
  longlong lVar30;
  undefined1 auStackY_2e8 [32];
  int local_270;
  FColor_u_0 local_250;
  Type local_24c;
  FName local_248;
  FName local_240;
  FName local_230;
  FIndexBuffer *local_228;
  FSceneViewFamily *local_220;
  FStatMessage local_218;
  FGlobalDynamicVertexBufferAllocation local_208;
  FGlobalDynamicVertexBufferAllocation local_1f0;
  FGlobalDynamicIndexBufferAllocation local_1d8;
  FName local_1c0;
  FName local_1b8;
  undefined1 local_1b0 [24];
  FAsyncBufferFillData local_198;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  FVar15 = StatPtr_STAT_TrailRenderingTime;
  local_220 = param_3;
  if (StatPtr_STAT_TrailRenderingTime == (FThreadSafeStaticStat<FStat_STAT_TrailRenderingTime>)0x0)
  {
    pFVar14 = ::FName::FName(&local_1c0,"STAT_TrailRenderingTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_TrailRenderingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailRenderingTime,*pFVar14,
                        L"Trail Render Time RT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar6 = false;
  bVar8 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  FVar2 = *(FName *)FVar15;
  bVar7 = false;
  bVar5 = false;
  bVar4 = false;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_250.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_250._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_248.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_248.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_248,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x136f);
        bVar6 = true;
        bVar8 = true;
        bVar5 = true;
        bVar4 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f9d4e;
    local_240 = FVar2;
    FThreadStats::AddMessage(FVar2,CycleScopeStart);
    bVar7 = true;
    bVar4 = bVar8;
    bVar5 = bVar6;
  }
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_TrailParticlesRenderCalls;
    if (StatPtr_STAT_TrailParticlesRenderCalls ==
        (FThreadSafeStaticStat<FStat_STAT_TrailParticlesRenderCalls>)0x0) {
      pFVar14 = ::FName::FName(&local_1b8,"STAT_TrailParticlesRenderCalls");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesRenderCalls>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesRenderCalls,
                          *pFVar14,L"Trail Ptcl Render Calls","STATGROUP_TrailParticles",
                          "STATCAT_Advanced",L"Trail Particles",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar2 = *(FName *)FVar16;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      local_218.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_218.StatData.Pad[0] = '\x01';
      local_218.StatData.Pad[1] = '\0';
      local_218.StatData.Pad[2] = '\0';
      local_218.StatData.Pad[3] = '\0';
      local_218.StatData.Pad[4] = '\0';
      local_218.StatData.Pad[5] = '\0';
      local_218.StatData.Pad[6] = '\0';
      local_218.StatData.Pad[7] = '\0';
      local_230 = FVar2;
      local_218.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_01,&local_218);
      FStatsTrace::Add(&local_230,1);
      if (this_01->ScopeCount == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_1481f9d4e:
  if ((((this->_padding_ & 2) != 0) && (pFVar23 = this->SourcePointer, 0 < pFVar23->VertexCount)) &&
     ((0 < *(int *)((longlong)&pFVar23->_padding_ + 4) &&
      ((2 < pFVar23->IndexCount && (GFXCascadeTrailRenderingEnabled != false)))))) {
    pFVar17 = (FRHICommandListBase *)FMeshElementCollector::GetRHICommandList(param_5);
    local_270 = 0;
    local_1f0.VertexOffset = 0;
    local_1d8.FirstIndex = 0;
    local_208.VertexOffset = 0;
    local_1f0.Buffer = (uchar *)0x0;
    local_1f0.VertexBuffer = (FVertexBuffer *)0x0;
    local_1d8.Buffer = (uchar *)0x0;
    local_1d8.IndexBuffer = (FIndexBuffer *)0x0;
    local_208.Buffer = (uchar *)0x0;
    local_208.VertexBuffer = (FVertexBuffer *)0x0;
    memset(&local_198,0,0x140);
    local_24c = FSceneViewFamily::GetFeatureLevel(param_3);
    iVar9 = (**(code **)(this->_padding_ + 0x40))(this,local_24c);
    if ((this->_padding_ & 1) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = (**(code **)(this->_padding_ + 0x48))(this);
    }
    (**(code **)(this->_padding_ + 0x68))(this,&local_198);
    pFVar18 = FMeshElementCollector::GetDynamicVertexBuffer(param_5);
    pFVar19 = FMeshElementCollector::GetDynamicIndexBuffer(param_5);
    FDynamicSpriteEmitterDataBase::BuildViewFillData
              ((FDynamicSpriteEmitterDataBase *)this,param_1,param_2,
               this->SourcePointer->VertexCount,iVar9,iVar10,pFVar19,pFVar18,&local_1f0,&local_1d8,
               &local_208,&local_198);
    (**(code **)(this->_padding_ + 0x68))(this);
    if ((local_198.OutTriangleCount != 0) && (this->bRenderGeometry != 0)) {
      if (*(char *)((longlong)&this->SourcePointer->_padding_ + 4) == '\0') {
        FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer(param_1,pFVar17);
      }
      pFVar20 = FMeshElementCollector::
                AllocateOneFrameResource<FDynamicBeamTrailCollectorResources,enum_ERHIFeatureLevel::Type_&>
                          (param_5,&local_24c);
      this_00 = &pFVar20->VertexFactory;
      *(undefined4 *)&(pFVar20->VertexFactory)._padding_ = 1;
      (pFVar20->VertexFactory).bUsesDynamicParameter = (bool)((byte)this->_padding_ & 1);
      (**(code **)(this_00->_padding_ + 0x18))(this_00,pFVar17);
      TVar21 = CreateBeamTrailUniformBuffer
                         ((FParticleSystemSceneProxy *)local_1b0,
                          (FDynamicSpriteEmitterReplayDataBase *)param_1,
                          (FSceneView *)this->SourcePointer);
      FParticleBeamTrailVertexFactory::SetBeamTrailUniformBuffer(this_00,TVar21);
      uVar11 = (**(code **)(this->_padding_ + 0x40))(this,param_2->FeatureLevel);
      FParticleBeamTrailVertexFactory::SetVertexBuffer
                (this_00,local_1f0.VertexBuffer,local_1f0.VertexOffset,uVar11);
      uVar12 = (**(code **)(this->_padding_ + 0x48))(this);
      uVar11 = 0;
      if (local_208.Buffer != (uchar *)0x0) {
        uVar11 = local_208.VertexOffset;
      }
      pFVar26 = (FVertexBuffer *)0x0;
      if (local_208.Buffer != (uchar *)0x0) {
        pFVar26 = local_208.VertexBuffer;
      }
      FParticleBeamTrailVertexFactory::SetDynamicParameterBuffer(this_00,pFVar26,uVar11,uVar12);
      uVar11 = local_1d8.FirstIndex;
      (pFVar20->VertexFactory).FirstIndex = local_1d8.FirstIndex;
      local_228 = local_1d8.IndexBuffer;
      (pFVar20->VertexFactory).IndexBuffer = local_1d8.IndexBuffer;
      (pFVar20->VertexFactory).OutTriangleCount = local_198.OutTriangleCount;
      this_03 = (ForElementType<FMeshBatchElement>)FMeshElementCollector::AllocateMesh(param_5);
      if ((*(int *)((longlong)this_03 + 0xa0) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar27 = this_03;
      if (*(ForElementType<FMeshBatchElement> *)((longlong)this_03 + 0x98) !=
          (ForElementType<FMeshBatchElement>)0x0) {
        FVar27 = *(ForElementType<FMeshBatchElement> *)((longlong)this_03 + 0x98);
      }
      *(FIndexBuffer **)((longlong)FVar27 + 0x18) = local_228;
      *(uint *)((longlong)FVar27 + 0x58) = uVar11;
      *(FParticleBeamTrailVertexFactory **)((longlong)this_03 + 0xa8) = this_00;
      *(undefined8 *)((longlong)this_03 + 0xb8) = 0;
      if (*(char *)((longlong)&this->SourcePointer->_padding_ + 4) == '\0') {
        pFVar22 = FParticleSystemSceneProxy::GetWorldSpacePrimitiveUniformBuffer(param_1);
      }
      else {
        pFVar22 = *(FRHIUniformBuffer **)&param_1->field_0x258;
      }
      *(FRHIUniformBuffer **)FVar27 = pFVar22;
      *(undefined4 *)((longlong)FVar27 + 0x68) = 0;
      *(int *)((longlong)FVar27 + 0x5c) = local_198.OutTriangleCount;
      *(int *)((longlong)FVar27 + 0x6c) = this->SourcePointer->VertexCount + -1;
      uVar11 = ((uint)(byte)param_1->field_0x78 ^ *(uint *)((longlong)this_03 + 0xd4)) & 1 ^
               *(uint *)((longlong)this_03 + 0xd4);
      *(uint *)((longlong)this_03 + 0xd4) = uVar11;
      *(uint *)((longlong)this_03 + 0xd4) =
           ((uint)(byte)param_1->field_0x298 * 2 ^ uVar11) & 4 ^ uVar11;
      EVar13 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)param_1,param_2);
      *(ESceneDepthPriorityGroup *)((longlong)this_03 + 0xd4) =
           (EVar13 << 10 ^ *(uint *)((longlong)this_03 + 0xd4)) & 0x1c00 ^
           *(uint *)((longlong)this_03 + 0xd4);
      bVar8 = AllowDebugViewmodes();
      if (((bVar8) && ((param_3->EngineShowFlags).Wireframe != 0)) &&
         ((local_220->EngineShowFlags).Materials == 0)) {
        pFVar28 = param_1->DeselectedWireframeMaterialInstance;
      }
      else {
        if (local_198.OutTriangleCount != this->SourcePointer->PrimitiveCount) {
          if (4 < (byte)LogParticles._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          }
          pFVar23 = this->SourcePointer;
          iVar9 = 0;
          bVar29 = LogParticles._0_1_;
          if (0 < *(int *)((longlong)&pFVar23->_padding_ + 4)) {
            lVar30 = 0;
            do {
              uVar11 = *(uint *)((longlong)
                                 (int)((uint)*(ushort *)(pFVar23->_padding_ + lVar30) *
                                      (int)pFVar23->_padding_) + (longlong)pFVar23->TrailDataOffset
                                + pFVar23->_padding_) & 0xf0000000;
              if (((uVar11 == 0x40000000) || (uVar11 == 0x10000000)) && (4 < bVar29)) {
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
                pFVar23 = this->SourcePointer;
                bVar29 = LogParticles._0_1_;
              }
              iVar9 = iVar9 + 1;
              lVar30 = lVar30 + 2;
            } while (iVar9 < *(int *)((longlong)&pFVar23->_padding_ + 4));
          }
          if ((4 < bVar29) &&
             (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             4 < (byte)LogParticles._0_1_)) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          }
        }
        if ((this->SourcePointer->PrimitiveCount < local_198.OutTriangleCount) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("OutTriangleCount <= SourcePointer->PrimitiveCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                               ,0x13e4,L"Data.OutTriangleCount = %4d vs. SourcePrimCount = %4d"),
           bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar28 = (FColoredMaterialRenderProxy *)this->_padding_;
      }
      *(FColoredMaterialRenderProxy **)((longlong)this_03 + 0xb0) = pFVar28;
      uVar11 = *(uint *)((longlong)this_03 + 0xd4);
      *(uint *)((longlong)this_03 + 0xd4) = uVar11 & 0xfffffcff | 0x2080;
      *(uint *)((longlong)this_03 + 0xd4) =
           -(uint)((param_1->field_0x79 & 6) != 0) & 0x4000 | uVar11 & 0xffffbcff | 0x2080;
      *(char *)((longlong)this_03 + 0xd9) = (char)param_1->VisualizeLODIndex;
      if (pFVar28 == (FColoredMaterialRenderProxy *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5704601362415752177>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                           ,0x13f1,"Mesh.MaterialRenderProxy != nullptr");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        FMeshElementCollector::AddMesh(param_5,param_4,(FMeshBatch *)this_03);
        local_270 = FMeshBatch::GetNumPrimitives((FMeshBatch *)this_03);
      }
      pcVar3 = *(code **)(this->_padding_ + 0x60);
      pFVar24 = FMeshElementCollector::GetPDI(param_5,param_4);
      (*pcVar3)(this,param_1,pFVar24);
      if ((local_270 != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar25 = StatPtr_STAT_TrailParticlesTrianglesRendered;
        if (StatPtr_STAT_TrailParticlesTrianglesRendered ==
            (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTrianglesRendered>)0x0) {
          pFVar14 = ::FName::FName((FName *)(local_1b0 + 8),"STAT_TrailParticlesTrianglesRendered");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesTrianglesRendered>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_TrailParticlesTrianglesRendered,*pFVar14,
                              L"Trail Ptcl Tris","STATGROUP_Particles","STATCAT_Advanced",
                              L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,(longlong)local_270,false);
      }
    }
    memset(&local_198,0,0x140);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(local_240,CycleScopeEnd);
  }
  return;
}

// GetIndexAllocInfo @ 1481fae30

void __thiscall
FDynamicTrailsEmitterData::GetIndexAllocInfo
          (FDynamicTrailsEmitterData *this,int *param_1,int *param_2)

{
  *param_1 = this->SourcePointer->IndexCount;
  *param_2 = this->SourcePointer->IndexStride;
  return;
}

// Init @ 148201cf0

void __thiscall FDynamicTrailsEmitterData::Init(FDynamicTrailsEmitterData *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)param_1;
  if (0x3fff < *(int *)((longlong)&this->SourcePointer->_padding_ + 4)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5704601362415752034>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x1362,"SourcePointer->ActiveParticleCount < (16 * 1024)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0x7ff < (int)this->SourcePointer->_padding_) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5704601362415752035>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                       ,0x1363,"SourcePointer->ParticleStride < (2 * 1024)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar4 = (**(code **)(*(longlong *)this->SourcePointer->_padding_ + 0x310))();
  this->_padding_ = lVar4;
  lVar4 = (**(code **)(this->_padding_ + 0x50))();
  iVar1 = *(int *)(lVar4 + 0xa0);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)(0 < iVar1);
  this->SourcePointer->_padding_ = 0;
  return;
}

// RenderDebug @ 148210e50

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
FDynamicTrailsEmitterData::RenderDebug
          (FDynamicTrailsEmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3,bool param_4)

{
  return;
}

