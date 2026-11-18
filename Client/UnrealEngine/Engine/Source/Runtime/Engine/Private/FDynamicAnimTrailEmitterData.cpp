// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FDynamicAnimTrailEmitterData @ 148160070

void __thiscall
FDynamicAnimTrailEmitterData::~FDynamicAnimTrailEmitterData(FDynamicAnimTrailEmitterData *this)

{
  this->_padding_ = (longlong)&___7FDynamicAnimTrailEmitterData__6B_;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  FDynamicTrailsEmitterData::~FDynamicTrailsEmitterData((FDynamicTrailsEmitterData *)this);
  return;
}

// FillVertexData @ 1481ecb60

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

int __thiscall
FDynamicAnimTrailEmitterData::FillVertexData
          (FDynamicAnimTrailEmitterData *this,FAsyncBufferFillData *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FDynamicAnimTrailEmitterData *pFVar11;
  FBaseParticle *pFVar12;
  FAnimTrailTypeDataPayload *pFVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime> FVar18;
  TVector4<float>_u_0 *pTVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  undefined1 uVar23;
  undefined8 *puVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  FAnimTrailTypeDataPayload *pFVar29;
  FBaseParticle *pFVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  FDynamicAnimTrailEmitterData *local_res8;
  uint local_res10;
  uint uStackX_14;
  int local_res18;
  float local_res20 [2];
  TVector4<float>_u_0 local_1f8;
  TVector4<float>_u_0 local_1e8;
  FColor_u_0 local_1d8 [4];
  FAnimTrailParticleRenderData local_1c8;
  FName local_178;
  longlong local_170;
  longlong local_168;
  FName local_160;
  FLinearColor_u_0 local_158;
  FName local_148;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  FBaseParticle *local_108;
  FName local_100;
  TVector<double> local_f8 [7];
  
  FVar18 = StatPtr_STAT_TrailFillVertexTime;
  local_res8 = this;
  if (StatPtr_STAT_TrailFillVertexTime == (FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime>)0x0
     ) {
    pFVar17 = ::FName::FName(&local_100,"STAT_TrailFillVertexTime");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_TrailFillVertexTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailFillVertexTime,*pFVar17,
                        L"Trail FillVertex Time RT","STATGROUP_TrailParticles","STATCAT_Advanced",
                        L"Trail Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar18;
  uVar23 = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_res10 = local_res10 & 0xffffff00;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d8[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      uVar23 = 1;
      local_res10 = CONCAT31(local_res10._1_3_,1);
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar21.Value;
        local_178.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x17ea);
        uVar23 = 3;
        local_res10 = CONCAT31(local_res10._1_3_,3);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10 = FVar21.Value;
      uStackX_14 = uVar16;
      local_160 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      local_res10 = CONCAT31(local_res10._1_3_,uVar23) | 4;
      goto LAB_1481eccf6;
    }
  }
  local_160 = local_148;
  FVar22 = local_148;
LAB_1481eccf6:
  pFVar11 = local_res8;
  uVar10 = _UNK_15076b1f8;
  uVar9 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar8 = __real_3f800000;
  pfVar25 = param_1->VertexData;
  puVar24 = param_1->DynamicParameterData;
  if (((this->_padding_ & 1) == 0) || (puVar24 == (undefined8 *)0x0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  lVar26 = (this->Source)._padding_;
  local_res18 = 0;
  fVar33 = __real_40000000 / (float)param_1->VertexCount;
  dVar4 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  dVar5 = (double)*(float *)&(this->Source)._padding_ * __real_4140000000000000;
  dVar6 = (double)*(float *)((longlong)&(this->Source)._padding_ + 4) * __real_4140000000000000;
  local_170 = lVar26;
  if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
    local_168 = 0;
    do {
      pFVar30 = (FBaseParticle *)
                ((int)((uint)*(ushort *)((pFVar11->Source)._padding_ + local_168) *
                      (int)(pFVar11->Source)._padding_) + lVar26);
      pFVar29 = (FAnimTrailTypeDataPayload *)
                ((longlong)&(pFVar30->OldLocation).field0_0x0 +
                (longlong)(pFVar11->Source).TrailDataOffset);
      uVar16 = (uint)pFVar29->_padding_;
      uVar20 = uVar16 & 0xf0000000;
      if (((uVar20 == 0x40000000) || (uVar20 == 0x10000000)) && ((uVar16 & 0x3fff) != 0x3fff)) {
        local_1c8.ParticleDataAddress = (uchar *)(pFVar11->Source)._padding_;
        local_1c8.Source = &pFVar11->Source;
        local_1c8.PrevPrevParticle = (FBaseParticle *)0x0;
        local_1c8.PrevPrevPayload = (FAnimTrailTypeDataPayload *)0x0;
        local_1c8.PrevParticle = (FBaseParticle *)0x0;
        local_1c8.PrevPayload = (FAnimTrailTypeDataPayload *)0x0;
        local_1c8.Particle = pFVar30;
        local_1c8.Payload = pFVar29;
        if (pFVar30 == (FBaseParticle *)0x0) {
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particle",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                              ,0x169f,L"");
          if (bVar14) {
            pcVar3 = (code *)swi(3);
            iVar15 = (*pcVar3)();
            return iVar15;
          }
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particle",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                              ,0x16a8,L"");
          if (bVar14) {
            pcVar3 = (code *)swi(3);
            iVar15 = (*pcVar3)();
            return iVar15;
          }
        }
        lVar27 = 0;
        uVar16 = (uint)pFVar29->_padding_ & 0x3fff;
        if (uVar16 == 0x3fff) {
          local_1c8.NextParticle = (FBaseParticle *)0x0;
          local_1c8.NextPayload = (FAnimTrailTypeDataPayload *)0x0;
        }
        else {
          local_1c8.NextParticle =
               (FBaseParticle *)
               (local_1c8.ParticleDataAddress + (int)(uVar16 * (int)(pFVar11->Source)._padding_));
          local_1c8.NextPayload =
               (FAnimTrailTypeDataPayload *)
               ((longlong)&((local_1c8.NextParticle)->OldLocation).field0_0x0 +
               (longlong)(pFVar11->Source).TrailDataOffset);
        }
        bVar14 = false;
        fVar32 = 0.0;
        pFVar12 = local_1c8.Particle;
        pFVar13 = local_1c8.Payload;
        lVar26 = local_170;
        if (bVar7) {
          lVar27 = 0x10;
          bVar14 = 0 < (int)(pFVar11->Source)._padding_;
        }
        while (local_1c8.Payload = pFVar13, local_1c8.Particle = pFVar12, local_170 = lVar26,
              pFVar30 != (FBaseParticle *)0x0) {
          iVar15 = *(int *)((longlong)&pFVar29->_padding_ + 4);
          local_108 = local_1c8.NextParticle;
          if (((iVar15 < 2) || (pFVar30 == (FBaseParticle *)0x0)) ||
             (local_1c8.PrevParticle == (FBaseParticle *)0x0)) {
            local_1e8._0_8_ = uVar9;
            local_1e8._8_8_ = uVar10;
            pTVar19 = &local_1e8;
            if (!bVar14) {
              pTVar19 = (TVector4<float>_u_0 *)0x0;
            }
            FAnimTrailParticleRenderData::CalcVertexData
                      (&local_1c8,0.0,local_f8,(TVector<double> *)&local_138._s_0,
                       (TVector<double> *)&local_120._s_0,local_res20,(float *)&local_res8,
                       (FLinearColor *)&local_158._s_0,(TVector4<float> *)&pTVar19->_s_0);
            fVar31 = fVar32;
            if ((pFVar11->_padding_ & 0x2000000000) != 0) {
              fVar31 = local_res20[0];
            }
            *pfVar25 = (float)(local_138._s_0.X - dVar4);
            pfVar25[1] = (float)(local_138._s_0.Y - dVar5);
            pfVar25[2] = (float)(local_138._s_0.Z - dVar6);
            dVar1 = ((local_1c8.Particle)->OldLocation).field0_0x0._s_0.Y;
            dVar2 = ((local_1c8.Particle)->OldLocation).field0_0x0._s_0.Z;
            pfVar25[4] = (float)(((local_1c8.Particle)->OldLocation).field0_0x0._s_0.X - dVar4);
            pfVar25[5] = (float)(dVar1 - dVar5);
            pfVar25[6] = (float)(dVar2 - dVar6);
            pfVar25[8] = local_res8._0_4_;
            pfVar25[9] = local_res8._0_4_;
            pfVar25[0x10] = fVar32;
            pfVar25[0x12] = fVar31;
            pfVar25[7] = 0.0;
            pfVar25[0x11] = 0.0;
            pfVar25[0x13] = 0.0;
            pfVar25[10] = (local_1c8.Particle)->Rotation;
            *(undefined8 *)(pfVar25 + 0xc) = local_158._0_8_;
            *(undefined8 *)(pfVar25 + 0xe) = local_158._8_8_;
            if (bVar7) {
              *puVar24 = local_1e8._0_8_;
              puVar24[1] = local_1e8._8_8_;
              puVar24 = (undefined8 *)((longlong)puVar24 + lVar27);
            }
            pfVar25[0x14] = (float)(local_120._s_0.X - dVar4);
            pfVar25[0x15] = (float)(local_120._s_0.Y - dVar5);
            pfVar25[0x16] = (float)(local_120._s_0.Z - dVar6);
            dVar1 = ((local_1c8.Particle)->OldLocation).field0_0x0._s_0.Y;
            dVar2 = ((local_1c8.Particle)->OldLocation).field0_0x0._s_0.Z;
            pfVar25[0x18] = (float)(((local_1c8.Particle)->OldLocation).field0_0x0._s_0.X - dVar4);
            pfVar25[0x19] = (float)(dVar1 - dVar5);
            pfVar25[0x1a] = (float)(dVar2 - dVar6);
            pfVar25[0x1c] = local_res8._0_4_;
            pfVar25[0x1d] = local_res8._0_4_;
            pfVar25[0x24] = fVar32;
            pfVar25[0x26] = fVar31;
            pfVar25[0x1b] = 0.0;
            pfVar25[0x25] = 1.0;
            pfVar25[0x27] = 1.0;
            pfVar25[0x1e] = (local_1c8.Particle)->Rotation;
            *(undefined8 *)(pfVar25 + 0x20) = local_158._0_8_;
            *(undefined8 *)(pfVar25 + 0x22) = local_158._8_8_;
            if (bVar7) {
              *puVar24 = local_1e8._0_8_;
              puVar24[1] = local_1e8._8_8_;
              puVar24 = (undefined8 *)((longlong)puVar24 + lVar27);
            }
            pfVar25 = pfVar25 + 0x28;
            fVar32 = fVar32 + fVar33;
          }
          else {
            iVar28 = iVar15 + -1;
            pTVar19 = &local_1f8;
            if (!bVar14) {
              pTVar19 = (TVector4<float>_u_0 *)0x0;
            }
            local_1f8._0_8_ = uVar9;
            local_1f8._8_8_ = uVar10;
            do {
              FAnimTrailParticleRenderData::CalcVertexData
                        (&local_1c8,(float)iVar28 * (fVar8 / (float)iVar15),local_f8,
                         (TVector<double> *)&local_138._s_0,(TVector<double> *)&local_120._s_0,
                         local_res20,(float *)&local_res8,(FLinearColor *)&local_158._s_0,
                         (TVector4<float> *)&pTVar19->_s_0);
              fVar31 = fVar32;
              if ((pFVar11->_padding_ & 0x2000000000) != 0) {
                fVar31 = local_res20[0];
              }
              *pfVar25 = (float)(local_138._s_0.X - dVar4);
              pfVar25[1] = (float)(local_138._s_0.Y - dVar5);
              pfVar25[2] = (float)(local_138._s_0.Z - dVar6);
              pfVar25[4] = (float)(local_138._s_0.X - dVar4);
              pfVar25[5] = (float)(local_138._s_0.Y - dVar5);
              pfVar25[6] = (float)(local_138._s_0.Z - dVar6);
              pfVar25[8] = local_res8._0_4_;
              pfVar25[9] = local_res8._0_4_;
              pfVar25[0x10] = fVar32;
              pfVar25[0x12] = fVar31;
              pfVar25[7] = 0.0;
              pfVar25[0x11] = 0.0;
              pfVar25[0x13] = 0.0;
              pfVar25[10] = (local_1c8.Particle)->Rotation;
              *(undefined8 *)(pfVar25 + 0xc) = local_158._0_8_;
              *(undefined8 *)(pfVar25 + 0xe) = local_158._8_8_;
              if (bVar7) {
                *puVar24 = local_1f8._0_8_;
                puVar24[1] = local_1f8._8_8_;
                puVar24 = (undefined8 *)((longlong)puVar24 + lVar27);
              }
              pfVar25[0x14] = (float)(local_120._s_0.X - dVar4);
              pfVar25[0x15] = (float)(local_120._s_0.Y - dVar5);
              pfVar25[0x16] = (float)(local_120._s_0.Z - dVar6);
              pfVar25[0x18] = (float)(local_120._s_0.X - dVar4);
              pfVar25[0x19] = (float)(local_120._s_0.Y - dVar5);
              pfVar25[0x1a] = (float)(local_120._s_0.Z - dVar6);
              pfVar25[0x1c] = local_res8._0_4_;
              pfVar25[0x1d] = local_res8._0_4_;
              pfVar25[0x24] = fVar32;
              pfVar25[0x26] = fVar31;
              pfVar25[0x1b] = 0.0;
              pfVar25[0x25] = 1.0;
              pfVar25[0x27] = 1.0;
              pfVar25[0x1e] = (local_1c8.Particle)->Rotation;
              *(undefined8 *)(pfVar25 + 0x20) = local_158._0_8_;
              *(undefined8 *)(pfVar25 + 0x22) = local_158._8_8_;
              if (bVar7) {
                *puVar24 = local_1f8._0_8_;
                puVar24[1] = local_1f8._8_8_;
                puVar24 = (undefined8 *)((longlong)puVar24 + lVar27);
              }
              pfVar25 = pfVar25 + 0x28;
              fVar32 = fVar32 + fVar33;
              iVar28 = iVar28 + -1;
            } while (-1 < iVar28);
          }
          pFVar29 = local_1c8.NextPayload;
          pFVar30 = local_1c8.NextParticle;
          local_1c8.PrevPrevParticle = local_1c8.PrevParticle;
          local_1c8.PrevPrevPayload = local_1c8.PrevPayload;
          local_1c8.PrevParticle = local_1c8.Particle;
          local_1c8.PrevPayload = local_1c8.Payload;
          pFVar12 = pFVar30;
          pFVar13 = pFVar29;
          lVar26 = local_170;
          if (local_108 != (FBaseParticle *)0x0) {
            uVar16 = (uint)(local_1c8.NextPayload)->_padding_ & 0x3fff;
            if (uVar16 == 0x3fff) {
              local_1c8.NextParticle = (FBaseParticle *)0x0;
              local_1c8.NextPayload = (FAnimTrailTypeDataPayload *)0x0;
              local_1c8.PrevParticle = local_1c8.Particle;
              local_1c8.PrevPayload = local_1c8.Payload;
            }
            else {
              local_1c8.NextParticle =
                   (FBaseParticle *)
                   (local_1c8.ParticleDataAddress +
                   (int)(uVar16 * (int)(local_1c8.Source)->_padding_));
              local_1c8.NextPayload =
                   (FAnimTrailTypeDataPayload *)
                   ((longlong)&((local_1c8.NextParticle)->OldLocation).field0_0x0 +
                   (longlong)(local_1c8.Source)->TrailDataOffset);
              local_1c8.PrevParticle = local_1c8.Particle;
              local_1c8.PrevPayload = local_1c8.Payload;
            }
          }
        }
      }
      local_res18 = local_res18 + 1;
      local_168 = local_168 + 2;
      FVar22 = local_160;
    } while (local_res18 < *(int *)((longlong)&(pFVar11->Source)._padding_ + 4));
  }
  uVar16 = local_res10;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar16 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar16 & 4) != 0) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return 0;
}

// Init @ 1482015d0

void __thiscall FDynamicAnimTrailEmitterData::Init(FDynamicAnimTrailEmitterData *this,bool param_1)

{
  this->_padding_ = (longlong)&this->Source;
  FDynamicTrailsEmitterData::Init((FDynamicTrailsEmitterData *)this,param_1);
  return;
}

// RenderDebug @ 14820eef0

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

void __thiscall
FDynamicAnimTrailEmitterData::RenderDebug
          (FDynamicAnimTrailEmitterData *this,FParticleSystemSceneProxy *param_1,
          FPrimitiveDrawInterface *param_2,FSceneView *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uchar uVar9;
  uint uVar10;
  ESceneDepthPriorityGroup EVar11;
  FBaseParticle *pFVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  FLinearColor_u_0 *pFVar16;
  FAnimTrailTypeDataPayload *pFVar17;
  FAnimTrailTypeDataPayload *pFVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float *pfVar25;
  float *pfVar26;
  ulonglong uVar27;
  FLinearColor *pFVar28;
  float local_3f8;
  byte local_3f4;
  byte local_3f3;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  uchar *local_3e0;
  FBaseParticle *local_3d8;
  FLinearColor_u_0 local_3d0;
  FAnimTrailTypeDataPayload *local_3c0;
  FBaseParticle *local_3b8;
  float local_3b0;
  TVector<double>_u_0 local_3a8;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  FAnimTrailParticleRenderData local_378;
  longlong local_328;
  TVector<double>_u_0 local_320;
  TVector<double>_u_0 local_308;
  FLinearColor_u_0 local_2f0;
  FLinearColor_u_0 local_2e0;
  FLinearColor_u_0 local_2d0;
  FLinearColor_u_0 local_2c0;
  FLinearColor_u_0 local_2b0;
  FLinearColor_u_0 local_2a0;
  FLinearColor_u_0 local_290;
  FLinearColor_u_0 local_280;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  FLinearColor_u_0 local_240;
  FLinearColor_u_0 local_230;
  FLinearColor_u_0 local_220;
  FLinearColor_u_0 local_210;
  float local_200;
  float local_1fc;
  float local_1f8 [2];
  FBaseParticle *local_1f0;
  longlong local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  double local_150;
  double local_148;
  double local_140;
  FLinearColor local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  fVar7 = __real_3e99999a;
  fVar6 = __real_437f0000;
  dVar5 = __real_4008000000000000;
  fVar4 = __real_3b808081;
  fVar3 = __real_3f800000;
  if ((this->_padding_ & 0xc00000000) != 0) {
    local_1e8 = (this->Source)._padding_;
    local_3f0 = 0;
    if (0 < *(int *)((longlong)&(this->Source)._padding_ + 4)) {
      local_328 = 0;
      fVar19 = __real_40000000;
      uVar22 = ___xmm_3f800000000000003f8000003f800000;
      uVar23 = _UNK_150a07f68;
      do {
        pFVar12 = (FBaseParticle *)
                  ((int)((uint)*(ushort *)((this->Source)._padding_ + local_328) *
                        (int)(this->Source)._padding_) + local_1e8);
        pFVar17 = (FAnimTrailTypeDataPayload *)
                  ((longlong)&(pFVar12->OldLocation).field0_0x0 +
                  (longlong)(this->Source).TrailDataOffset);
        uVar10 = (uint)pFVar17->_padding_ & 0xf0000000;
        if ((uVar10 == 0x40000000) || (uVar10 == 0x10000000)) {
          local_3e0 = (uchar *)(this->Source)._padding_;
          local_378.Source = &this->Source;
          fVar24 = 0.0;
          local_378.PrevParticle = (FBaseParticle *)0x0;
          local_378.PrevPayload = (FAnimTrailTypeDataPayload *)0x0;
          fVar21 = fVar19 / (float)(int)pFVar17->_padding_;
          local_378.PrevPrevParticle = (FBaseParticle *)0x0;
          local_378.PrevPrevPayload = (FAnimTrailTypeDataPayload *)0x0;
          local_378.NextParticle = (FBaseParticle *)0x0;
          local_378.NextPayload = (FAnimTrailTypeDataPayload *)0x0;
          local_3d8 = pFVar12;
          local_3c0 = pFVar17;
          local_3b0 = fVar21;
          local_378.ParticleDataAddress = local_3e0;
          local_378.Particle = pFVar12;
          local_378.Payload = pFVar17;
          if (pFVar12 == (FBaseParticle *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particle",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                               ,0x169f,L"");
            if (bVar8) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particle",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                               ,0x16a8,L"");
            if (bVar8) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar10 = (uint)pFVar17->_padding_ & 0x3fff;
          if (uVar10 == 0x3fff) {
            local_378.NextParticle = (FBaseParticle *)0x0;
            local_378.NextPayload = (FAnimTrailTypeDataPayload *)0x0;
          }
          else {
            local_378.NextParticle =
                 (FBaseParticle *)(local_3e0 + (int)(uVar10 * (int)(this->Source)._padding_));
            local_378.NextPayload =
                 (FAnimTrailTypeDataPayload *)
                 ((longlong)&((local_378.NextParticle)->OldLocation).field0_0x0 +
                 (longlong)(this->Source).TrailDataOffset);
          }
          fVar19 = __real_40000000;
          local_3b8 = local_378.NextParticle;
          if (pFVar12 != (FBaseParticle *)0x0) {
            local_3ec = (int)fVar6;
            local_3e8 = 0;
            do {
              pFVar18 = pFVar17;
              pFVar17 = local_378.NextPayload;
              local_3b8 = local_378.NextParticle;
              pFVar28 = &local_138;
              pfVar26 = &local_3f8;
              pfVar25 = &local_200;
              local_1f0 = local_3b8;
              FAnimTrailParticleRenderData::CalcVertexData
                        (&local_378,0.0,(TVector<double> *)&local_3a8._s_0,
                         (TVector<double> *)&local_320._s_0,(TVector<double> *)&local_308._s_0,
                         pfVar25,pfVar26,pFVar28,(TVector4<float> *)0x0);
              fVar24 = fVar24 + fVar21;
              local_3f3 = (byte)local_3e8;
              local_3f4 = (byte)local_3ec;
              local_3e8 = (int)(fVar24 * fVar6);
              local_3ec = (int)((fVar3 - fVar24) * fVar6);
              fVar19 = local_3f8;
              if ((this->_padding_ & 0x400000000) != 0) {
                uVar10 = (uint)pFVar18->_padding_ & 0xf0000000;
                if (uVar10 == 0x40000000) {
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  fVar19 = local_3f8;
                  local_2f0._s_0.R =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
                  local_2f0._s_0.G =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
                  local_2f0._s_0.B =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
                  local_2f0._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * fVar4;
                  DrawWireStar(param_2,(TVector<double> *)&local_3a8._s_0,local_3f8,
                               (FLinearColor *)&local_2f0._s_0,(uchar)EVar11);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  local_2e0._s_0.R =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
                  local_2e0._s_0.G =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
                  local_2e0._s_0.B =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
                  local_2e0._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * fVar4;
                  DrawWireStar(param_2,(TVector<double> *)&local_320._s_0,fVar19,
                               (FLinearColor *)&local_2e0._s_0,(uchar)EVar11);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar9 = (uchar)EVar11;
                  pFVar16 = &local_2d0;
                  local_2d0._s_0.R =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.R];
                  local_2d0._s_0.G =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.G];
                  local_2d0._s_0.B =
                       FLinearColor::sRGBToLinearTable[FColor::Green.field0_0x0._s_0.B];
                  local_2d0._s_0.A = (float)FColor::Green.field0_0x0._3_1_ * fVar4;
LAB_14820f695:
                  DrawWireStar(param_2,(TVector<double> *)&local_308._s_0,fVar19,
                               (FLinearColor *)&pFVar16->_s_0,uVar9);
                }
                else {
                  if (uVar10 == 0x10000000) {
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    fVar19 = local_3f8;
                    local_230._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
                    local_230._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
                    local_230._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
                    local_230._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar4;
                    DrawWireStar(param_2,(TVector<double> *)&local_3a8._s_0,local_3f8,
                                 (FLinearColor *)&local_230._s_0,(uchar)EVar11);
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    local_240._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
                    local_240._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
                    local_240._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
                    local_240._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar4;
                    DrawWireStar(param_2,(TVector<double> *)&local_320._s_0,fVar19,
                                 (FLinearColor *)&local_240._s_0,(uchar)EVar11);
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    uVar9 = (uchar)EVar11;
                    pFVar16 = &local_210;
                    local_210._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.R];
                    local_210._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.G];
                    local_210._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::Red.field0_0x0._s_0.B];
                    local_210._s_0.A = (float)FColor::Red.field0_0x0._3_1_ * fVar4;
                    goto LAB_14820f695;
                  }
                  if (uVar10 == 0x80000000) {
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    fVar19 = local_3f8;
                    local_220._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
                    local_220._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
                    local_220._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
                    local_220._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar4;
                    DrawWireStar(param_2,(TVector<double> *)&local_3a8._s_0,local_3f8,
                                 (FLinearColor *)&local_220._s_0,(uchar)EVar11);
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    local_2c0._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
                    local_2c0._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
                    local_2c0._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
                    local_2c0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar4;
                    DrawWireStar(param_2,(TVector<double> *)&local_320._s_0,fVar19,
                                 (FLinearColor *)&local_2c0._s_0,(uchar)EVar11);
                    EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                       ((FPrimitiveSceneProxy *)param_1,param_3);
                    uVar9 = (uchar)EVar11;
                    pFVar16 = &local_2b0;
                    local_2b0._s_0.R =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.R];
                    local_2b0._s_0.G =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.G];
                    local_2b0._s_0.B =
                         FLinearColor::sRGBToLinearTable[FColor::White.field0_0x0._s_0.B];
                    local_2b0._s_0.A = (float)FColor::White.field0_0x0._3_1_ * fVar4;
                    goto LAB_14820f695;
                  }
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  fVar19 = local_3f8;
                  uVar15 = (ulonglong)local_3f4;
                  uVar13 = (ulonglong)local_3f3;
                  fVar21 = local_3f8 * __real_3f000000;
                  local_2a0._s_0.A = 1.0;
                  local_2a0._s_0.R = FLinearColor::sRGBToLinearTable[uVar15];
                  local_2a0._s_0.G = FLinearColor::sRGBToLinearTable[uVar13];
                  local_2a0._s_0.B = FLinearColor::sRGBToLinearTable[0];
                  DrawWireStar(param_2,(TVector<double> *)&local_3a8._s_0,fVar21,
                               (FLinearColor *)&local_2a0._s_0,(uchar)EVar11);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  local_290._s_0.A = 1.0;
                  local_290._s_0.R = FLinearColor::sRGBToLinearTable[uVar15];
                  local_290._s_0.G = FLinearColor::sRGBToLinearTable[uVar13];
                  local_290._s_0.B = FLinearColor::sRGBToLinearTable[0];
                  DrawWireStar(param_2,(TVector<double> *)&local_320._s_0,fVar21,
                               (FLinearColor *)&local_290._s_0,(uchar)EVar11);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  local_280._s_0.A = 1.0;
                  local_280._s_0.R = FLinearColor::sRGBToLinearTable[uVar15];
                  local_280._s_0.G = FLinearColor::sRGBToLinearTable[uVar13];
                  local_280._s_0.B = FLinearColor::sRGBToLinearTable[0];
                  DrawWireStar(param_2,(TVector<double> *)&local_308._s_0,fVar21,
                               (FLinearColor *)&local_280._s_0,(uchar)EVar11);
                  pFVar12 = local_3d8;
                }
                if ((((this->_padding_ & 0x1000000000) != 0) && (pFVar12 != (FBaseParticle *)0x0))
                   && (local_378.PrevParticle != (FBaseParticle *)0x0)) {
                  pFVar28 = &local_138;
                  pfVar26 = &local_3f8;
                  pfVar25 = &local_1fc;
                  FAnimTrailParticleRenderData::CalcVertexData
                            (&local_378,fVar3,&local_118,&local_100,local_e8,pfVar25,pfVar26,pFVar28
                             ,(TVector4<float> *)0x0);
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar27 = (ulonglong)pFVar28 & 0xffffffffffffff00;
                  uVar15 = (ulonglong)pfVar26 & 0xffffffff00000000;
                  local_270 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
                  uVar13 = (ulonglong)pfVar25 & 0xffffffff00000000;
                  local_26c = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
                  local_268 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
                  local_264 = (float)FColor::Blue.field0_0x0._3_1_ * fVar4;
                  (*pcVar2)(param_2,&local_3a8,&local_118,&local_270,(char)EVar11,uVar13,uVar15,
                            uVar27);
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar27 = uVar27 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffff00000000;
                  local_260 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
                  uVar13 = uVar13 & 0xffffffff00000000;
                  local_25c = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
                  local_258 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
                  local_254 = (float)FColor::Blue.field0_0x0._3_1_ * fVar4;
                  (*pcVar2)(param_2,&local_320,&local_100,&local_260,(char)EVar11,uVar13,uVar15,
                            uVar27);
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  local_250 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.R];
                  uVar27 = uVar27 & 0xffffffffffffff00;
                  local_24c = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.G];
                  uVar15 = uVar15 & 0xffffffff00000000;
                  uVar13 = uVar13 & 0xffffffff00000000;
                  local_248 = FLinearColor::sRGBToLinearTable[FColor::Blue.field0_0x0._s_0.B];
                  local_244 = (float)FColor::Blue.field0_0x0._3_1_ * fVar4;
                  (*pcVar2)(param_2,&local_308,local_e8,&local_250,(char)EVar11,uVar13,uVar15,uVar27
                           );
                  iVar1 = *(int *)((longlong)&pFVar18->_padding_ + 4);
                  local_1e0 = local_3a8._s_0.X;
                  dStack_1d8 = local_3a8._s_0.Y;
                  local_384 = 0x3f800000;
                  local_1d0 = local_3a8._s_0.Z;
                  local_1c8 = local_320._s_0.X;
                  dStack_1c0 = local_320._s_0.Y;
                  local_1b8 = local_320._s_0.Z;
                  local_1b0 = local_308._s_0.X;
                  dStack_1a8 = local_308._s_0.Y;
                  local_1a0 = local_308._s_0.Z;
                  local_390 = FLinearColor::sRGBToLinearTable[(byte)local_3ec];
                  local_388 = FLinearColor::sRGBToLinearTable[0];
                  local_38c = FLinearColor::sRGBToLinearTable[(byte)local_3e8];
                  iVar14 = 0;
                  fVar19 = local_3f8;
                  if (0 < iVar1) {
                    do {
                      pFVar16 = &local_3d0;
                      pfVar26 = &local_3f8;
                      pfVar25 = local_1f8;
                      fVar21 = (float)iVar14 * (fVar3 / (float)iVar1);
                      FAnimTrailParticleRenderData::CalcVertexData
                                (&local_378,fVar21,(TVector<double> *)&local_198._s_0,
                                 (TVector<double> *)&local_168._s_0,
                                 (TVector<double> *)&local_180._s_0,pfVar25,pfVar26,
                                 (FLinearColor *)&pFVar16->_s_0,(TVector4<float> *)0x0);
                      pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      uVar27 = (ulonglong)pFVar16 & 0xffffffffffffff00;
                      uVar15 = (ulonglong)pfVar26 & 0xffffffff00000000;
                      uVar13 = (ulonglong)pfVar25 & 0xffffffff00000000;
                      (*pcVar2)(param_2,&local_1e0,&local_198,&local_3d0,(char)EVar11,uVar13,uVar15,
                                uVar27);
                      pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      uVar15 = uVar15 & 0xffffffff00000000;
                      uVar13 = uVar13 & 0xffffffff00000000;
                      (*pcVar2)(param_2,&local_1c8,&local_168,&local_3d0,(char)EVar11,uVar13,uVar15,
                                uVar27);
                      pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      uVar27 = uVar27 & 0xffffffffffffff00;
                      uVar15 = uVar15 & 0xffffffff00000000;
                      uVar13 = uVar13 & 0xffffffff00000000;
                      (*pcVar2)(param_2,&local_1b0,&local_180,&local_3d0,(char)EVar11,uVar13,uVar15,
                                uVar27);
                      fVar19 = local_3f8;
                      if (iVar14 != 0) {
                        local_3d0._s_0.R = fVar3 - fVar21;
                        local_3d0._s_0.G = local_3d0._s_0.R;
                        local_3d0._s_0.B = fVar21;
                      }
                      fVar21 = local_3f8 * fVar7;
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      DrawWireStar(param_2,(TVector<double> *)&local_198._s_0,fVar21,
                                   (FLinearColor *)&local_3d0._s_0,(uchar)EVar11);
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      DrawWireStar(param_2,(TVector<double> *)&local_168._s_0,fVar21,
                                   (FLinearColor *)&local_3d0._s_0,(uchar)EVar11);
                      EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                         ((FPrimitiveSceneProxy *)param_1,param_3);
                      DrawWireStar(param_2,(TVector<double> *)&local_180._s_0,fVar21,
                                   (FLinearColor *)&local_3d0._s_0,(uchar)EVar11);
                      local_1e0 = local_198._s_0.X;
                      dStack_1d8 = local_198._s_0.Y;
                      iVar14 = iVar14 + 1;
                      local_1d0 = local_198._s_0.Z;
                      local_1b8 = local_168._s_0.Z;
                      local_1a0 = local_180._s_0.Z;
                      local_1c8 = local_168._s_0.X;
                      dStack_1c0 = local_168._s_0.Y;
                      local_1b0 = local_180._s_0.X;
                      dStack_1a8 = local_180._s_0.Y;
                      pFVar18 = local_3c0;
                    } while (iVar14 < iVar1);
                  }
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar27 = uVar27 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffff00000000;
                  uVar13 = uVar13 & 0xffffffff00000000;
                  (*pcVar2)(param_2,&local_1e0,&local_118,&local_390,(char)EVar11,uVar13,uVar15,
                            uVar27);
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  uVar27 = uVar27 & 0xffffffffffffff00;
                  uVar15 = uVar15 & 0xffffffff00000000;
                  uVar13 = uVar13 & 0xffffffff00000000;
                  (*pcVar2)(param_2,&local_1c8,&local_100,&local_390,(char)EVar11,uVar13,uVar15,
                            uVar27);
                  pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                  EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                     ((FPrimitiveSceneProxy *)param_1,param_3);
                  pFVar28 = (FLinearColor *)(uVar27 & 0xffffffffffffff00);
                  pfVar26 = (float *)(uVar15 & 0xffffffff00000000);
                  pfVar25 = (float *)(uVar13 & 0xffffffff00000000);
                  (*pcVar2)(param_2,&local_1b0,local_e8,&local_390,(char)EVar11,pfVar25,pfVar26,
                            pFVar28);
                  uVar22 = ___xmm_3f800000000000003f8000003f800000;
                  uVar23 = _UNK_150a07f68;
                }
              }
              if ((this->_padding_ & 0x800000000) != 0) {
                pcVar2 = *(code **)(param_2->_padding_ + 0x30);
                dVar20 = (double)fVar19;
                local_148 = (double)(pFVar18->Tangent).field0_0x0._s_0.Y * dVar20 * dVar5 +
                            local_3a8._s_0.Y;
                local_140 = (double)(pFVar18->Tangent).field0_0x0._s_0.Z * dVar20 * dVar5 +
                            local_3a8._s_0.Z;
                local_150 = (double)(pFVar18->Tangent).field0_0x0._s_0.X * dVar20 * dVar5 +
                            local_3a8._s_0.X;
                EVar11 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                                   ((FPrimitiveSceneProxy *)param_1,param_3);
                local_128 = uVar22;
                uStack_120 = uVar23;
                (*pcVar2)(param_2,&local_3a8,&local_150,&local_128,(char)EVar11,
                          (ulonglong)pfVar25 & 0xffffffff00000000,
                          (ulonglong)pfVar26 & 0xffffffff00000000,
                          (ulonglong)pFVar28 & 0xffffffffffffff00);
              }
              local_378.PrevPrevParticle = local_378.PrevParticle;
              local_378.PrevPrevPayload = local_378.PrevPayload;
              local_378.PrevParticle = local_3d8;
              local_3d8 = local_3b8;
              fVar19 = __real_40000000;
              if (local_3b8 == (FBaseParticle *)0x0) break;
              uVar10 = (uint)pFVar17->_padding_ & 0x3fff;
              if (uVar10 == 0x3fff) {
                local_378.NextParticle = (FBaseParticle *)0x0;
                local_378.NextPayload = (FAnimTrailTypeDataPayload *)0x0;
              }
              else {
                local_378.NextParticle =
                     (FBaseParticle *)
                     (local_3e0 + (int)(uVar10 * (int)(local_378.Source)->_padding_));
                local_378.NextPayload =
                     (FAnimTrailTypeDataPayload *)
                     ((longlong)&((local_378.NextParticle)->OldLocation).field0_0x0 +
                     (longlong)(local_378.Source)->TrailDataOffset);
              }
              pFVar12 = local_3b8;
              fVar21 = local_3b0;
              local_3c0 = pFVar17;
              local_3b8 = local_378.NextParticle;
              local_378.PrevPayload = pFVar18;
              local_378.Particle = local_3d8;
              local_378.Payload = pFVar17;
            } while (local_1f0 != (FBaseParticle *)0x0);
          }
        }
        local_3f0 = local_3f0 + 1;
        local_328 = local_328 + 2;
      } while (local_3f0 < *(int *)((longlong)&(this->Source)._padding_ + 4));
    }
  }
  return;
}

