// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// FParticleAnimTrailEmitterInstance @ 1481c7670

FParticleAnimTrailEmitterInstance * __thiscall
FParticleAnimTrailEmitterInstance::FParticleAnimTrailEmitterInstance
          (FParticleAnimTrailEmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  FParticleTrailsEmitterInstance_Base::FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this,param_1);
  this->_padding_ = (longlong)&___7FParticleAnimTrailEmitterInstance__6B_;
  this->TrailTypeData = (UParticleModuleTypeDataAnimTrail *)0x0;
  this->SpawnPerUnitModule = (UParticleModuleSpawnPerUnit *)0x0;
  (this->FirstSocketName).ComparisonIndex = 0;
  (this->FirstSocketName).Number = 0;
  (this->SecondSocketName).ComparisonIndex = 0;
  (this->SecondSocketName).Number = 0;
  this->Owner = (void *)0x0;
  this->bTagTrailAsDead = false;
  this->bTrailEnabled = false;
  this->HeadOnlyParticles = 0;
  this->Width = 1.0;
  this->WidthMode = ETrailWidthMode_FromCentre;
  return this;
}

// ~FParticleAnimTrailEmitterInstance @ 1481c91c0

void __thiscall
FParticleAnimTrailEmitterInstance::~FParticleAnimTrailEmitterInstance
          (FParticleAnimTrailEmitterInstance *this)

{
  this->_padding_ = (longlong)&___7FParticleAnimTrailEmitterInstance__6B_;
  FParticleTrailsEmitterInstance_Base::~FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this);
  return;
}

// BeginTrail @ 1481d56c0

void __thiscall
FParticleAnimTrailEmitterInstance::BeginTrail(FParticleAnimTrailEmitterInstance *this)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  
  iVar1 = 0;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    lVar2 = 0;
    do {
      puVar3 = (uint *)((longlong)
                        (int)((uint)*(ushort *)(lVar2 + this->_padding_) * (int)this->_padding_) +
                        (longlong)*(int *)((longlong)&this->_padding_ + 4) + this->_padding_);
      if ((puVar3[1] == 0) && ((*puVar3 & 0xf0000000) == 0x40000000)) {
        *puVar3 = *puVar3 & 0xfffffff | 0x10000000;
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 2;
    } while (iVar1 < *(int *)((longlong)&this->_padding_ + 4));
  }
  this->bTagTrailAsDead = false;
  this->bTrailEnabled = true;
  return;
}

// DetermineVertexAndTriangleCount @ 1481e0db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::DetermineVertexAndTriangleCount
          (FParticleAnimTrailEmitterInstance *this)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  UParticleModuleTypeDataAnimTrail *pUVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  FName *this_00;
  UObjectBaseUtility *this_01;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  int *piVar21;
  longlong lVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  float fVar31;
  float fVar32;
  int local_res8;
  int local_res10;
  int local_res18;
  longlong local_c8;
  FString local_c0;
  FString local_b0 [7];
  
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = __real_322bcc77;
  pUVar6 = this->TrailTypeData;
  this->_padding_ = 0;
  this->HeadOnlyParticles = 0;
  fVar12 = __real_43340000;
  fVar2 = pUVar6->DistanceTessellationStepSize;
  fVar3 = pUVar6->WidthTessellationStepSize;
  local_res8 = 0;
  local_res10 = 0;
  fVar4 = pUVar6->TangentTessellationStepSize;
  fVar26 = FGenericPlatformMath::Fmod(fVar4,__real_43340000);
  fVar10 = __real_bf000000;
  fVar9 = __real_3f800000;
  local_res18 = 0;
  iVar17 = 0;
  iVar25 = 0;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    local_c8 = 0;
    do {
      iVar25 = 0;
      iVar17 = (int)this->_padding_;
      lVar19 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      lVar18 = (longlong)(int)((uint)*(ushort *)(local_c8 + this->_padding_) * iVar17) +
               this->_padding_;
      uVar14 = *(uint *)(lVar19 + lVar18);
      piVar1 = (int *)(lVar19 + lVar18);
      uVar16 = uVar14 & 0xf0000000;
      if (((uVar16 == 0x40000000) || (uVar16 == 0x10000000)) && ((uVar14 & 0x3fff) == 0x3fff)) {
        piVar1[7] = 0;
        piVar1[2] = 0;
        this->HeadOnlyParticles = this->HeadOnlyParticles + 1;
      }
      else if ((uVar16 == 0x80000000) && (uVar14 = (int)uVar14 >> 0xe & 0x3fff, uVar14 != 0x3fff)) {
        lVar22 = (longlong)(int)(uVar14 * iVar17) + this->_padding_;
        piVar21 = (int *)(lVar22 + lVar19);
        piVar24 = (int *)0x0;
        lVar19 = lVar18;
        while (lVar23 = lVar22, piVar20 = piVar1, lVar18 != lVar23) {
          iVar17 = 1;
          if (fVar8 < (float)((uint)fVar2 & uVar11)) {
            dVar7 = *(double *)(lVar19 + 0x18) - *(double *)(lVar23 + 0x18);
            dVar27 = *(double *)(lVar19 + 0x20) - *(double *)(lVar23 + 0x20);
            dVar30 = *(double *)(lVar19 + 0x28) - *(double *)(lVar23 + 0x28);
            auVar28._0_8_ = dVar27 * dVar27;
            auVar28._8_8_ = 0;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = dVar7 * dVar7 + auVar28._0_8_ + dVar30 * dVar30;
            auVar29 = sqrtpd(auVar28,auVar29);
            iVar13 = (int)((float)auVar29._0_8_ / this->TrailTypeData->DistanceTessellationStepSize)
            ;
            iVar17 = FXConsoleVariables::MaxDistanceTessellation;
            if (iVar13 < FXConsoleVariables::MaxDistanceTessellation) {
              iVar17 = iVar13;
            }
            iVar17 = iVar17 + 1;
          }
          if (fVar8 < (float)((uint)fVar4 & uVar11)) {
            fVar32 = (((float)piVar20[0xe] * (float)piVar21[0xe] +
                       (float)piVar20[0xd] * (float)piVar21[0xd] +
                      (float)piVar20[0xf] * (float)piVar21[0xf]) - fVar9) * fVar10;
            fVar31 = fVar32;
            if (((pUVar6->bEnablePreviousTangentRecalculation != 0) && (piVar24 != (int *)0x0)) &&
               (fVar31 = (((float)piVar20[0xe] * (float)piVar24[0xe] +
                           (float)piVar20[0xd] * (float)piVar24[0xd] +
                          (float)piVar20[0xf] * (float)piVar24[0xf]) - fVar9) * fVar10,
               fVar31 <= fVar32)) {
              fVar31 = fVar32;
            }
            iVar15 = (int)((fVar12 / fVar26) * fVar31);
            iVar13 = FXConsoleVariables::MaxTangentTessellation;
            if (iVar15 < FXConsoleVariables::MaxTangentTessellation) {
              iVar13 = iVar15;
            }
            iVar17 = iVar17 + iVar13;
          }
          if (fVar8 < (float)((uint)fVar3 & uVar11)) {
            fVar32 = (float)((uint)((float)piVar20[0x10] - (float)piVar21[0x10]) & uVar11);
            fVar31 = fVar32;
            if ((piVar24 != (int *)0x0) &&
               (fVar31 = (float)((uint)((float)piVar24[0x10] - (float)piVar20[0x10]) & uVar11),
               fVar31 <= fVar32)) {
              fVar31 = fVar32;
            }
            iVar17 = iVar17 + (int)(fVar31 / this->TrailTypeData->WidthTessellationStepSize);
          }
          piVar20[7] = iVar17;
          *(int *)&this->_padding_ = (int)this->_padding_ + iVar17 * 2;
          iVar25 = iVar25 + iVar17 * 2;
          uVar14 = *piVar21 >> 0xe & 0x3fff;
          if (uVar14 == 0x3fff) goto LAB_1481e1254;
          lVar22 = (longlong)(int)(uVar14 * (int)this->_padding_) + this->_padding_;
          piVar1 = piVar21;
          piVar21 = (int *)(*(int *)((longlong)&this->_padding_ + 4) + lVar22);
          piVar24 = piVar20;
          lVar19 = lVar23;
        }
        piVar21 = piVar20;
        if (0 < GbEnableCircularAnimTrailDump) {
          if (2 < (byte)LogParticles._0_1_) {
            this_00 = UParticleEmitter::GetEmitterName((UParticleEmitter *)this->_padding_);
            ::FName::ToString(this_00,local_b0);
            this_01 = (UObjectBaseUtility *)(**(code **)(*(longlong *)this->_padding_ + 0xd8))();
            UObjectBaseUtility::GetFullName(this_01,&local_c0,(UObject *)0x0,None);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if (local_b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
            }
          }
          if (1 < GbEnableCircularAnimTrailDump) {
            (**(code **)(this->_padding_ + 0x250))(this);
          }
        }
LAB_1481e1254:
        *(int *)&this->_padding_ = (int)this->_padding_ + 2;
        piVar21[2] = iVar25;
        piVar21[7] = 1;
        local_res10 = local_res10 + 2 + iVar25;
        local_res8 = local_res8 + 1;
      }
      local_res18 = local_res18 + 1;
      local_c8 = local_c8 + 2;
      iVar17 = local_res8;
      iVar25 = local_res10;
    } while (local_res18 < *(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar17;
  if (0 < iVar17) {
    *(int *)((longlong)&this->_padding_ + 4) = iVar25 + (iVar17 + -2) * 2;
    return;
  }
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  return;
}

// EndTrail @ 1481e3380

void __thiscall FParticleAnimTrailEmitterInstance::EndTrail(FParticleAnimTrailEmitterInstance *this)

{
  this->bTagTrailAsDead = true;
  this->bTrailEnabled = false;
  (this->FirstSocketName).ComparisonIndex = 0;
  (this->FirstSocketName).Number = 0;
  (this->SecondSocketName).ComparisonIndex = 0;
  (this->SecondSocketName).Number = 0;
  return;
}

// FillReplayData @ 1481ebe40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleAnimTrailEmitterInstance::FillReplayData
          (FParticleAnimTrailEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleAnimTrailEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_FillReplayData>
  FVar9;
  UParticleLODLevel *pUVar10;
  longlong lVar11;
  UObjectBaseUtility *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar12;
  UMaterialInterface *pUVar13;
  LARGE_INTEGER LVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FString local_58;
  FStatMessage local_48;
  
  FVar15.Value = 0;
  local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleAnimTrailEmitterInstance_FillReplayData ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleAnimTrailEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_FillReplayData>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_ParticleAnimTrailEmitterInstance_FillReplayData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleAnimTrailEmitterInstance_FillReplayData,*pFVar8,
                 L"STAT_ParticleAnimTrailEmitterInstance_FillReplayData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_ParticleAnimTrailEmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleAnimTrailEmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleAnimTrailEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_FillReplayData>
       )0x0) {
    pFVar8 = ::FName::FName(local_res18,"STAT_ParticleAnimTrailEmitterInstance_FillReplayData");
    FVar9 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleAnimTrailEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_FillReplayData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleAnimTrailEmitterInstance_FillReplayData,*pFVar8,
                         L"STAT_ParticleAnimTrailEmitterInstance_FillReplayData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar14 = *(LARGE_INTEGER *)FVar9;
  bVar3 = false;
  bVar5 = false;
  if ((LVar14.s.LowPart == 0) && (LVar14.s.HighPart == 0)) {
LAB_1481ebfb0:
    bVar4 = false;
    LVar14._0_4_ = 0;
    LVar14._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0x1020);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481ebfb0;
    local_res8 = LVar14;
    FThreadStats::AddMessage((FName)LVar14.s,CycleScopeStart);
    bVar4 = true;
    FVar15.Value = LVar14.s.LowPart;
  }
  if ((((0 < *(int *)((longlong)&this->_padding_ + 4)) && ((this->_padding_ & 1) != 0)) &&
      (pUVar10 = UParticleEmitter::GetLODLevel((UParticleEmitter *)this->_padding_,0),
      pUVar10 != (UParticleLODLevel *)0x0)) && (pUVar10->bEnabled != 0)) {
    DetermineVertexAndTriangleCount(this);
    if (*(int *)((longlong)&this->_padding_ + 4) + 2 < 0x10000) {
      bVar6 = FParticleEmitterInstance::FillReplayData((FParticleEmitterInstance *)this,param_1);
      if (bVar6) {
        if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
          param_1->eEmitterType = DET_AnimTrail;
          pUVar13 = FParticleTrailsEmitterInstance_Base::GetCurrentMaterial
                              ((FParticleTrailsEmitterInstance_Base *)this);
          param_1[1]._padding_ = (longlong)pUVar13;
          *(undefined2 *)&param_1[1].field_0x5c = 0;
          *(undefined4 *)((longlong)&param_1[2].DataContainer.ParticleData + 4) =
               *(undefined4 *)((longlong)&this->_padding_ + 4);
          *(undefined4 *)((longlong)&param_1[2].DataContainer.ParticleIndices + 4) = 1;
          param_1[2].DataContainer.ParticleDataNumBytes = (int)this->_padding_;
          param_1[2].DataContainer.ParticleIndicesNumShorts =
               *(int *)((longlong)&this->_padding_ + 4) + (int)this->_padding_ * 2;
          param_1[2].DataContainer.MemBlockSize = *(int *)((longlong)&this->_padding_ + 4);
          *(int *)&param_1[2].DataContainer.ParticleIndices = (int)this->_padding_;
          *(undefined4 *)&param_1[2].DataContainer.field_0xc = 2;
          bVar6 = true;
          *(undefined4 *)&param_1[2].DataContainer.ParticleData =
               *(undefined4 *)((longlong)&this->_padding_ + 4);
          goto LAB_1481ec14b;
        }
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        if ((0 < iVar2) && (iVar2 != this->HeadOnlyParticles)) {
          cVar7 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
          if (cVar7 != '\0') {
            lVar12 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
            if (lVar12 != 0) {
              lVar11 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
              local_res8 = *(LARGE_INTEGER *)(lVar11 + 0x18);
              ::FName::ToString((FName *)&local_res8.s,&local_58);
            }
            ::FString::PrintfImpl
                      ((FString *)&local_48,
                       L"ANIMTRAIL: GetDynamicData -- TriangleCount == 0 (APC = %4d) for PSys %s");
            if ((lVar12 != 0) &&
               ((uchar  [8])local_58.Data.AllocatorInstance.Data != (uchar  [8])0x0)) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (4 < (byte)LogParticles._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)&PTR_u__s_151a3cfc8,
                         (FLogCategoryBase *)&LogParticles);
            }
            if (local_48.StatData.Pad != (uchar  [8])0x0) {
              FMemory::Free((void *)local_48.StatData.Pad);
            }
          }
          (**(code **)(this->_padding_ + 0x250))(this);
        }
      }
    }
    else if ((((2 < (byte)LogParticles._0_1_) &&
              (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_)) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             2 < (byte)LogParticles._0_1_)) &&
            (((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_ &&
              (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_)) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             2 < (byte)LogParticles._0_1_)))) {
      lVar11 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
      lVar12 = *(longlong *)this->_padding_;
      if (lVar11 == 0) {
        (**(code **)(lVar12 + 0x80))((longlong *)this->_padding_,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        local_48.StatData.Pad = (uchar  [8])local_58.Data.AllocatorInstance.Data;
      }
      else {
        this_00 = (UObjectBaseUtility *)(**(code **)(lVar12 + 0xd8))();
        UObjectBaseUtility::GetPathName(this_00,(FString *)&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      if (local_48.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_48.StatData.Pad);
      }
    }
  }
  bVar6 = false;
LAB_1481ec14b:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && ((FName)LVar14.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = LVar14.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
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
  return bVar6;
}

// ForceUpdateBoundingBox @ 1481f2c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FParticleAnimTrailEmitterInstance::ForceUpdateBoundingBox(FParticleAnimTrailEmitterInstance *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  longlong lVar18;
  TTransform<double> *this_00;
  TMatrix<double> *pTVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ushort *puVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  longlong local_1e0;
  float local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  TVector<double>_u_0 local_188;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_208;
  if ((*(int *)(this->_padding_ + 0x48) < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate->LODLevels.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xe4c,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = this->_padding_;
  iVar5 = *(int *)(lVar7 + 0x48);
  if (iVar5 < 1) {
    local_1e8 = 0;
    local_1e0 = (longlong)iVar5;
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar7 = **(longlong **)(lVar7 + 0x40);
  if ((lVar7 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xe4e,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if ((*(byte *)(*(longlong *)(lVar7 + 0x30) + 0x71) & 1) == 0) {
    lVar18 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    plVar21 = (longlong *)this->_padding_;
    uVar14 = *(undefined4 *)(lVar18 + 0x24);
    uVar15 = *(undefined4 *)(lVar18 + 0x28);
    uVar16 = *(undefined4 *)(lVar18 + 0x2c);
    lVar20 = *(longlong *)(lVar18 + 0x30);
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(lVar18 + 0x20);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar14;
    *(undefined4 *)&this->_padding_ = uVar15;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar16;
    this->_padding_ = lVar20;
    lVar18 = (**(code **)(*plVar21 + 0x10))();
    lVar20 = *(longlong *)(lVar18 + 0x28);
    uVar24 = *(double *)(lVar18 + 0x30);
    this->_padding_ = *(longlong *)(lVar18 + 0x20);
    this->_padding_ = lVar20;
  }
  else {
    this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->_padding_ = uVar24;
    this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->_padding_ = uVar24;
    uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  plVar21 = &this->_padding_;
  this->_padding_ = uVar24;
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  iVar5 = *(int *)((longlong)&this->_padding_ + 4);
  lVar20 = (longlong)iVar5;
  if (0 < iVar5) {
    puVar23 = (ushort *)this->_padding_;
    iVar6 = (int)this->_padding_;
    lVar22 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    local_1a0 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_198 = _UNK_150b2d318;
    local_1b8 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_1b0 = _UNK_150b28868;
    lVar18 = (longlong)(int)((uint)*puVar23 * iVar6) + this->_padding_;
    local_1c0 = *(double *)(lVar18 + 0x28);
    local_1d0 = *(double *)(lVar18 + 0x18);
    dStack_1c8 = *(double *)(lVar18 + 0x20);
    local_1d8 = *(float *)(lVar18 + 0x40 + lVar22);
    dVar26 = _UNK_150b2d318;
    dVar9 = __real_c7efffffe0000000;
    dVar2 = _UNK_150b2d318;
    dVar3 = __real_c7efffffe0000000;
    dVar10 = _UNK_150b28868;
    dVar11 = __real_47efffffe0000000;
    local_1a8 = __real_47efffffe0000000;
    dVar12 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dVar31 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dVar13 = ___xmm_47efffffe000000047efffffe0000000;
    dVar30 = ___xmm_47efffffe000000047efffffe0000000;
    dVar25 = _UNK_150b28868;
    if (0 < iVar5) {
      do {
        uVar4 = *puVar23;
        puVar23 = puVar23 + 1;
        lVar18 = (longlong)(int)((uint)uVar4 * iVar6) + this->_padding_;
        dVar30 = *(double *)(lVar18 + 0x18);
        dVar2 = *(double *)(lVar18 + 0x20);
        dVar3 = *(double *)(lVar18 + 0x28);
        fVar1 = *(float *)(lVar18 + 0x40 + lVar22);
        dVar25 = dVar3 - local_1c0;
        local_1c0 = *(double *)(lVar18 + 0x28);
        auVar29._0_8_ =
             (dVar2 - dStack_1c8) * (dVar2 - dStack_1c8) +
             (dVar30 - local_1d0) * (dVar30 - local_1d0) + dVar25 * dVar25;
        auVar29._8_8_ = 0;
        auVar29 = sqrtpd(in_XMM4,auVar29);
        in_XMM4._8_8_ = auVar29._8_8_;
        in_XMM4._0_8_ =
             auVar29._0_8_ * __real_3fd0000000000000 +
             (double)((fVar1 - local_1d8) * __real_3e800000 + fVar1);
        local_1d0 = *(double *)(lVar18 + 0x18);
        dStack_1c8 = *(double *)(lVar18 + 0x20);
        dVar25 = in_XMM4._0_8_ + dVar30;
        dVar27 = in_XMM4._0_8_ + dVar2;
        dVar28 = in_XMM4._0_8_ + dVar3;
        dVar30 = dVar30 - in_XMM4._0_8_;
        dVar2 = dVar2 - in_XMM4._0_8_;
        dVar3 = dVar3 - in_XMM4._0_8_;
        dVar31 = dVar30;
        if (dVar30 <= dVar12) {
          dVar31 = dVar12;
        }
        if (dVar13 <= dVar30) {
          dVar30 = dVar13;
        }
        if (dVar31 <= dVar25) {
          dVar31 = dVar25;
        }
        if (dVar25 <= dVar30) {
          dVar30 = dVar25;
        }
        dVar25 = dVar2;
        if (dVar10 <= dVar2) {
          dVar25 = dVar10;
        }
        if (dVar2 <= dVar26) {
          dVar2 = dVar26;
        }
        local_1a8 = dVar3;
        if (dVar11 <= dVar3) {
          local_1a8 = dVar11;
        }
        if (dVar3 <= dVar9) {
          dVar3 = dVar9;
        }
        if (dVar27 <= dVar25) {
          dVar25 = dVar27;
        }
        if (dVar2 <= dVar27) {
          dVar2 = dVar27;
        }
        if (dVar28 <= local_1a8) {
          local_1a8 = dVar28;
        }
        if (dVar3 <= dVar28) {
          dVar3 = dVar28;
        }
        lVar20 = lVar20 + -1;
        dVar26 = dVar2;
        dVar9 = dVar3;
        dVar10 = dVar25;
        dVar11 = local_1a8;
        dVar12 = dVar31;
        dVar13 = dVar30;
        local_1d8 = fVar1;
      } while (lVar20 != 0);
    }
    if ((char)this->_padding_ == '\0') {
      this->_padding_ = (longlong)dVar30;
      this->_padding_ = (longlong)dVar25;
      *(undefined1 *)&this->_padding_ = 1;
      *plVar21 = (longlong)dVar30;
      this->_padding_ = (longlong)dVar25;
      this->_padding_ = (longlong)local_1a8;
      this->_padding_ = (longlong)local_1a8;
    }
    else {
      dVar26 = dVar30;
      if ((double)*plVar21 <= dVar30) {
        dVar26 = (double)*plVar21;
      }
      dVar9 = dVar25;
      if ((double)this->_padding_ <= dVar25) {
        dVar9 = (double)this->_padding_;
      }
      *plVar21 = (longlong)dVar26;
      dVar26 = (double)this->_padding_;
      if (local_1a8 <= (double)this->_padding_) {
        dVar26 = local_1a8;
      }
      this->_padding_ = (longlong)dVar9;
      dVar9 = local_1a8;
      if (local_1a8 <= (double)this->_padding_) {
        dVar9 = (double)this->_padding_;
      }
      dVar10 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar30) {
        dVar10 = dVar30;
      }
      this->_padding_ = (longlong)dVar26;
      dVar30 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar25) {
        dVar30 = dVar25;
      }
      this->_padding_ = (longlong)dVar9;
      this->_padding_ = (longlong)dVar10;
      this->_padding_ = (longlong)dVar30;
    }
    dVar30 = (double)*plVar21;
    if (dVar31 <= (double)*plVar21) {
      dVar30 = dVar31;
    }
    dVar26 = (double)this->_padding_;
    if (dVar2 <= (double)this->_padding_) {
      dVar26 = dVar2;
    }
    if (dVar2 <= (double)this->_padding_) {
      dVar2 = (double)this->_padding_;
    }
    *plVar21 = (longlong)dVar30;
    dVar30 = (double)this->_padding_;
    if (dVar3 <= (double)this->_padding_) {
      dVar30 = dVar3;
    }
    this->_padding_ = (longlong)dVar26;
    dVar26 = (double)this->_padding_;
    if ((double)this->_padding_ <= dVar31) {
      dVar26 = dVar31;
    }
    this->_padding_ = (longlong)dVar2;
    this->_padding_ = (longlong)dVar30;
    dVar30 = (double)this->_padding_;
    if ((double)this->_padding_ <= dVar3) {
      dVar30 = dVar3;
    }
    this->_padding_ = (longlong)dVar26;
    this->_padding_ = (longlong)dVar30;
  }
  if ((*(byte *)(*(longlong *)(lVar7 + 0x30) + 0x71) & 1) != 0) {
    this_00 = (TTransform<double> *)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_148);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)plVar21,(TBox<double> *)&local_188._s_0,pTVar19);
    *plVar21 = (longlong)local_188._s_0.X;
    this->_padding_ = (longlong)local_188._s_0.Y;
    this->_padding_ = (longlong)local_188._s_0.Z;
    this->_padding_ = lStack_170;
    this->_padding_ = local_168;
    this->_padding_ = lStack_160;
    this->_padding_ = local_158;
  }
  return;
}

// GetAllocatedSize @ 1481f4250

void __thiscall
FParticleAnimTrailEmitterInstance::GetAllocatedSize
          (FParticleAnimTrailEmitterInstance *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar4 = iVar2;
  iVar3 = iVar2;
  if (this->_padding_ != 0) {
    iVar3 = (int)this->_padding_;
    iVar4 = iVar3 * *(int *)((longlong)&this->_padding_ + 4);
    iVar3 = iVar3 * *(int *)((longlong)&this->_padding_ + 4);
  }
  if (this->_padding_ != 0) {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4) * 2;
    iVar2 = *(int *)((longlong)&this->_padding_ + 4) * 2;
  }
  *param_1 = iVar1 + 800 + iVar4;
  *param_2 = iVar2 + 800 + iVar3;
  return;
}

// GetDynamicData @ 1481f5b60

/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterDataBase * __thiscall
FParticleAnimTrailEmitterInstance::GetDynamicData
          (FParticleAnimTrailEmitterInstance *this,bool param_1,Type param_2)

{
  int *piVar1;
  uint uVar2;
  LARGE_INTEGER LVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleAnimTrailEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData>
  FVar9;
  UParticleLODLevel *pUVar10;
  FDynamicEmitterDataBase *this_00;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_DynamicAnimTrailCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem> FVar15;
  uint uVar16;
  FDynamicEmitterDataBase *pFVar17;
  LARGE_INTEGER local_res8;
  undefined1 local_res10;
  FName local_res20;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  pFVar17 = (FDynamicEmitterDataBase *)0x0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleAnimTrailEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_ParticleAnimTrailEmitterInstance_GetDynamicData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData,*pFVar8,
                 L"STAT_ParticleAnimTrailEmitterInstance_GetDynamicData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData;
  if (StatPtr_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleAnimTrailEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData>
       )0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_ParticleAnimTrailEmitterInstance_GetDynamicData");
    FVar9 = (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleAnimTrailEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleAnimTrailEmitterInstance_GetDynamicData,*pFVar8,
                         L"STAT_ParticleAnimTrailEmitterInstance_GetDynamicData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar3 = *(LARGE_INTEGER *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  if ((LVar3.s.LowPart == 0) && (LVar3.s.HighPart == 0)) {
LAB_1481f5cca:
    bVar5 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar3;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0xf63);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f5cca;
    local_res8 = LVar3;
    FThreadStats::AddMessage((FName)LVar3.s,CycleScopeStart);
    bVar5 = true;
    local_58 = LVar3;
  }
  pUVar10 = UParticleEmitter::GetLODLevel((UParticleEmitter *)this->_padding_,0);
  cVar7 = (**(code **)(this->_padding_ + 0x118))(this,pUVar10);
  if ((cVar7 != '\0') && ((this->_padding_ & 1) != 0)) {
    this_00 = FDynamicEmitterDataBase::operator_new(0x140);
    if (this_00 != (FDynamicEmitterDataBase *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                (this_00,(pUVar10->RequiredModule).field0_0x0.DebugPtr);
      uVar2 = *(uint *)((longlong)&this_00[2]._padding_ + 4);
      *(uint *)&this_00[1].StatID.StatIdPtr = *(uint *)&this_00[1].StatID.StatIdPtr & 0xfffffffe;
      this_00[1]._padding_ = 0;
      *(uint *)((longlong)&this_00[2]._padding_ + 4) = uVar2 & 0xffffffc2 | 2;
      this_00->_padding_ = (longlong)&___7FDynamicAnimTrailEmitterData__6B_;
      *(undefined4 *)&this_00[2]._padding_ = 0xffffffff;
      *(undefined4 *)&this_00[2].StatID.StatIdPtr = 0x41480000;
      *(undefined8 *)((longlong)&this_00[2].StatID.StatIdPtr + 4) = 0x41c80000;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)(this_00 + 3));
      this_00[0xc]._padding_ = 0;
      this_00[3]._padding_ = (longlong)&___7FDynamicTrailsEmitterReplayData__6B_;
      this_00[0xc].StatID.StatIdPtr = (TStatIdData *)0x0;
      *(undefined4 *)&this_00[0xc].field_0x10 = 0xffffffff;
      this_00[0xc].EmitterIndex = 0;
      *(undefined4 *)&this_00[0xd]._padding_ = 1;
      *(undefined4 *)((longlong)&this_00[0xd]._padding_ + 4) = 1;
      pFVar17 = this_00;
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar11 = StatPtr_STAT_DynamicEmitterCount;
      if (StatPtr_STAT_DynamicEmitterCount ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)0x0) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterCount");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterCount,*pFVar8,
                            L"DynEmitter Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar3 = *(LARGE_INTEGER *)FVar11;
      local_res8 = LVar3;
      if ((((FName)LVar3.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_48.NameAndInfo.Number = LVar3.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = '\x01';
        local_48.StatData.Pad[1] = '\0';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar3;
        local_48.NameAndInfo.Index.Value = LVar3.s.LowPart;
        FThreadStats::AddStatMessage(pFVar12,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,1);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar14 = StatPtr_STAT_DynamicAnimTrailCount;
        if (StatPtr_STAT_DynamicAnimTrailCount ==
            (FThreadSafeStaticStat<FStat_STAT_DynamicAnimTrailCount>)0x0) {
          pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicAnimTrailCount");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_DynamicAnimTrailCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicAnimTrailCount,
                              *pFVar8,L"DynAnimTrail Count","STATGROUP_ParticleMem",
                              "STATCAT_Advanced",L"Particle Mem",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        LVar3 = *(LARGE_INTEGER *)FVar14;
        local_res8 = LVar3;
        if ((((FName)LVar3.QuadPart != (FName)0x0) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_48.NameAndInfo.Number = LVar3.s.HighPart & 0xffffafffU | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res8 = LVar3;
          local_48.NameAndInfo.Index.Value = LVar3.s.LowPart;
          FThreadStats::AddStatMessage(pFVar12,&local_48);
          FStatsTrace::Add((FName *)&local_res8.s,1);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar15 = StatPtr_STAT_DynamicEmitterMem;
      if (StatPtr_STAT_DynamicEmitterMem == (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)0x0
         ) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterMem");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterMem,*pFVar8,
                            L"DynEmitter Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar3 = *(LARGE_INTEGER *)FVar15;
      local_res8 = LVar3;
      if ((((FName)LVar3.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_48.NameAndInfo.Number = LVar3.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = '@';
        local_48.StatData.Pad[1] = '\x01';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar3;
        local_48.NameAndInfo.Index.Value = LVar3.s.LowPart;
        FThreadStats::AddStatMessage(pFVar12,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,0x140);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    uVar2 = *(uint *)((longlong)&pFVar17[2]._padding_ + 4);
    uVar16 = uVar2 & 0xffffffe3;
    *(uint *)((longlong)&pFVar17[2]._padding_ + 4) = uVar16 | 3;
    uVar16 = uVar16 | 0x23;
    if (this->TrailTypeData->TilingDistance <= 0.0) {
      uVar16 = uVar2 & 0xffffffc3 | 3;
    }
    *(uint *)((longlong)&pFVar17[2]._padding_ + 4) = uVar16;
    cVar7 = (**(code **)(this->_padding_ + 0x220))(this,pFVar17 + 3);
    if (cVar7 != '\0') {
      (*(code *)((undefined8 *)pFVar17->_padding_)[0xe])(pFVar17,local_res10);
      goto LAB_1481f61cb;
    }
    (**(code **)pFVar17->_padding_)(pFVar17,1);
  }
  pFVar17 = (FDynamicEmitterDataBase *)0x0;
LAB_1481f61cb:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)local_58.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58._0_4_;
      local_48.NameAndInfo.Number = local_58.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_48);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return pFVar17;
}

// GetReplayData @ 1481fe260

FDynamicEmitterReplayDataBase * __thiscall
FParticleAnimTrailEmitterInstance::GetReplayData(FParticleAnimTrailEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDynamicTrailsEmitterReplayData *pFVar4;
  FDynamicEmitterReplayDataBase *pFVar5;
  
  if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  if ((this->_padding_ & 1) == 0) {
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  pFVar4 = ::operator_new(0xf8);
  if (pFVar4 == (FDynamicTrailsEmitterReplayData *)0x0) {
    pFVar4 = (FDynamicTrailsEmitterReplayData *)0x0;
  }
  else {
    pFVar4 = FDynamicTrailsEmitterReplayData::FDynamicTrailsEmitterReplayData(pFVar4);
    if (pFVar4 != (FDynamicTrailsEmitterReplayData *)0x0) goto LAB_1481fe2c8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewEmitterReplayData != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                     ,0xfa8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
    return pFVar5;
  }
LAB_1481fe2c8:
  cVar3 = (**(code **)(this->_padding_ + 0x220))(this,pFVar4);
  if (cVar3 == '\0') {
    if (pFVar4 != (FDynamicTrailsEmitterReplayData *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  return (FDynamicEmitterReplayDataBase *)pFVar4;
}

// GetResourceSizeEx @ 1481fe3c0

void __thiscall
FParticleAnimTrailEmitterInstance::GetResourceSizeEx
          (FParticleAnimTrailEmitterInstance *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if ((TVar1 == EstimatedTotal) ||
     (lVar2 = (**(code **)(*(longlong *)this->_padding_ + 0xf8))(), lVar2 != 0)) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (this->_padding_ != 0) {
      iVar3 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4);
    }
    if (this->_padding_ != 0) {
      iVar4 = *(int *)((longlong)&this->_padding_ + 4) * 2;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,800);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar3);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar4);
    lVar2 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    if ((int)this->_padding_ == 0) {
      lVar2 = lVar2 * 5;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,lVar2 << 4);
  }
  return;
}

// GetSpawnPerUnitAmount @ 1481fee10

bool __thiscall
FParticleAnimTrailEmitterInstance::GetSpawnPerUnitAmount
          (FParticleAnimTrailEmitterInstance *this,float param_1,int param_2,int *param_3,
          float *param_4)

{
  return false;
}

// HasCompleted @ 1482012d0

bool __thiscall
FParticleAnimTrailEmitterInstance::HasCompleted(FParticleAnimTrailEmitterInstance *this)

{
  if ((this->bTrailEnabled == false) && (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
    return true;
  }
  return false;
}

// InitParameters @ 148203500

void __thiscall
FParticleAnimTrailEmitterInstance::InitParameters
          (FParticleAnimTrailEmitterInstance *this,UParticleEmitter *param_1)

{
  int *piVar1;
  uint uVar2;
  UParticleModuleTypeDataAnimTrail *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UParticleLODLevel *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_38;
  FString local_28;
  FString local_18;
  
  FParticleEmitterInstance::InitParameters((FParticleEmitterInstance *)this,param_1);
  pUVar7 = UParticleEmitter::GetLODLevel(param_1,0);
  pwVar10 = L"";
  if (pUVar7 == (UParticleLODLevel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0xb54,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((pUVar7->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0) {
    pUVar8 = Z_Construct_UClass_UParticleModuleTypeDataAnimTrail_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar7->TypeDataModule,pUVar8);
    if ((bVar5) &&
       (pUVar3 = (UParticleModuleTypeDataAnimTrail *)(pUVar7->TypeDataModule).field0_0x0.DebugPtr,
       pUVar3 != (UParticleModuleTypeDataAnimTrail *)0x0)) {
      uVar2 = (uint)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      this->TrailTypeData = pUVar3;
      *(uint *)&this->_padding_ = (uVar2 ^ pUVar3->bDeadTrailsOnDeactivate) & 1 ^ uVar2;
      iVar6 = *piVar1;
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar6 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,(ForAnyElementType *)&this->_padding_,0,piVar1);
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,1,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,piVar1)
      ;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)(this->_padding_ + (longlong)iVar6 * 4) = 0;
      iVar6 = *piVar1;
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar6 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,(ForAnyElementType *)&this->_padding_,0,piVar1);
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,1,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,piVar1)
      ;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)(this->_padding_ + (longlong)iVar6 * 4) = 0;
      iVar6 = *piVar1;
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar6 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,1,(ForAnyElementType *)&this->_padding_,0,piVar1);
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,1,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,piVar1)
      ;
      *(undefined4 *)(this->_padding_ + (longlong)iVar6 * 4) = 0;
      this->_padding_ = 0;
      return;
    }
    pFVar9 = GetTypeName<UParticleModuleTypeDataAnimTrail>(&local_38);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UParticleModuleTypeDataBase>
                       (&local_28,(pUVar7->TypeDataModule).field0_0x0.DebugPtr);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar10,pwVar11);
  }
  pFVar9 = GetTypeName<UParticleModuleTypeDataAnimTrail>(&local_18);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar10);
}

// IsTrailActive @ 148205e00

bool __thiscall
FParticleAnimTrailEmitterInstance::IsTrailActive(FParticleAnimTrailEmitterInstance *this)

{
  return this->bTrailEnabled;
}

// IsTrailEmitter @ 148205e10

bool __thiscall
FParticleAnimTrailEmitterInstance::IsTrailEmitter(FParticleAnimTrailEmitterInstance *this)

{
  return true;
}

// PrintAllActiveParticles @ 14820b830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::PrintAllActiveParticles(FParticleAnimTrailEmitterInstance *this)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (4 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  iVar3 = 0;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    lVar4 = 0;
    do {
      uVar1 = *(ushort *)(this->_padding_ + lVar4);
      lVar2 = (longlong)(int)((uint)uVar1 * (int)this->_padding_) + this->_padding_;
      (**(code **)(this->_padding_ + 0x248))
                (this,lVar2,*(int *)((longlong)&this->_padding_ + 4) + lVar2,uVar1,0xffffffff);
      if (4 < (byte)LogParticles._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 2;
    } while (iVar3 < *(int *)((longlong)&this->_padding_ + 4));
  }
  if ((byte)LogParticles._0_1_ < 5) {
    return;
  }
  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  return;
}

// PrintParticleData @ 14820b920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::PrintParticleData
          (FParticleAnimTrailEmitterInstance *this,FBaseParticle *param_1,
          FTrailsBaseTypeDataPayload *param_2,int param_3,int param_4)

{
  if ((4 < (byte)LogParticles._0_1_) &&
     (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
     4 < (byte)LogParticles._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  return;
}

// PrintTrails @ 14820bab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::PrintTrails(FParticleAnimTrailEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_48 [2];
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    if (((4 < (byte)LogParticles._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
        4 < (byte)LogParticles._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
       4 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    uVar5 = 0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    uVar9 = uVar5;
    uVar10 = uVar5;
    if (0 < iVar3) {
LAB_14820bb80:
      iVar3 = (int)uVar5;
      local_48[0] = (uint)*(ushort *)(uVar10 + this->_padding_);
      lVar7 = (longlong)(int)(local_48[0] * (int)this->_padding_) + this->_padding_;
      puVar8 = (uint *)(*(int *)((longlong)&this->_padding_ + 4) + lVar7);
      if (((*puVar8 & 0xf0000000) == 0x40000000) || ((*puVar8 & 0xf0000000) == 0x10000000)) {
        if ((local_30.Data <= (FScriptContainerElement *)local_48) &&
           ((FScriptContainerElement *)local_48 < local_30.Data + (longlong)local_28._4_4_ * 4)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = (int)local_28;
        }
        if (iVar3 == local_28._4_4_) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_30,(int *)((longlong)&local_28 + 4));
        }
        local_28 = CONCAT44(local_28._4_4_,iVar3 + 1);
        *(uint *)(local_30.Data + (longlong)iVar3 * 4) = local_48[0];
        do {
          for (FVar4.Data = local_40.Data; FVar4.Data != local_40.Data + (longlong)(int)local_38 * 4
              ; FVar4.Data = FVar4.Data + 4) {
            if (*(uint *)FVar4.Data == local_48[0]) {
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ParticlesVisited.Contains(CurrentIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                 ,0x10b2,L"");
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              break;
            }
          }
          iVar3 = (int)local_38;
          if ((local_40.Data <= (FScriptContainerElement *)local_48) &&
             ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)local_38._4_4_ * 4)) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            iVar3 = (int)local_38;
          }
          if (iVar3 == local_38._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_40,(int *)((longlong)&local_38 + 4));
          }
          local_38 = CONCAT44(local_38._4_4_,iVar3 + 1);
          *(uint *)(local_40.Data + (longlong)iVar3 * 4) = local_48[0];
          (**(code **)(this->_padding_ + 0x248))(this,lVar7,puVar8,local_48[0],(int)local_28 + -1);
          uVar6 = *puVar8 & 0x3fff;
          if (uVar6 == 0x3fff) goto LAB_14820bdaf;
          if (4 < (byte)LogParticles._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
          }
          lVar7 = (longlong)(int)(uVar6 * (int)this->_padding_) + this->_padding_;
          puVar8 = (uint *)(*(int *)((longlong)&this->_padding_ + 4) + lVar7);
          local_48[0] = uVar6;
        } while( true );
      }
      goto LAB_14820bdce;
    }
LAB_14820bdfc:
    if ((int)local_38 != iVar3) {
      (**(code **)(this->_padding_ + 0x250))(this);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
LAB_14820bdaf:
  if (4 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
  }
  uVar5 = local_28 & 0xffffffff;
LAB_14820bdce:
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  uVar6 = (int)uVar9 + 1;
  uVar9 = (ulonglong)uVar6;
  uVar10 = uVar10 + 2;
  if (iVar3 <= (int)uVar6) goto LAB_14820bdfc;
  goto LAB_14820bb80;
}

// RecalculateTangentAndInterpolationParam @ 14820c730

void __thiscall
FParticleAnimTrailEmitterInstance::RecalculateTangentAndInterpolationParam
          (FParticleAnimTrailEmitterInstance *this,FBaseParticle *param_1,
          FAnimTrailTypeDataPayload *param_2,FBaseParticle *param_3,
          FAnimTrailTypeDataPayload *param_4,FBaseParticle *param_5,
          FAnimTrailTypeDataPayload *param_6)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  TVector<double>_u_0 local_78 [4];
  
  if ((param_3 == (FBaseParticle *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrParticle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0xb75,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1 == (FBaseParticle *)0x0) {
    if ((param_5 == (FBaseParticle *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PrevParticle || NextParticle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                           ,0xb76,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar1 = (param_3->Location).field0_0x0._s_0.X - (param_5->Location).field0_0x0._s_0.X;
    dVar12 = (param_3->Location).field0_0x0._s_0.Y - (param_5->Location).field0_0x0._s_0.Y;
    dVar2 = (param_3->Location).field0_0x0._s_0.Z - (param_5->Location).field0_0x0._s_0.Z;
    auVar7._0_8_ = dVar1 * dVar1;
    auVar7._8_8_ = 0;
    auVar8._0_8_ = dVar12 * dVar12 + auVar7._0_8_ + dVar2 * dVar2;
    auVar8._8_8_ = 0;
    auVar7 = sqrtpd(auVar7,auVar8);
    fVar15 = (float)auVar7._0_8_;
    local_78[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_78[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_322bcc77 < fVar15) {
      dVar10 = (double)(__real_3f800000 / fVar15);
      local_78[0]._0_8_ = dVar10 * dVar1;
      local_78[0]._8_8_ = dVar10 * dVar12;
      local_78[0]._16_8_ = dVar10 * dVar2;
    }
  }
  else {
    dVar1 = (param_1->Location).field0_0x0._s_0.X;
    dVar2 = (param_1->Location).field0_0x0._s_0.Y;
    dVar12 = dVar1 - (param_3->Location).field0_0x0._s_0.X;
    dVar10 = dVar2 - (param_3->Location).field0_0x0._s_0.Y;
    dVar4 = (param_1->Location).field0_0x0._s_0.Z - (param_3->Location).field0_0x0._s_0.Z;
    auVar6._0_8_ = dVar12 * dVar12;
    auVar6._8_8_ = 0;
    auVar9._0_8_ = dVar10 * dVar10 + auVar6._0_8_ + dVar4 * dVar4;
    auVar9._8_8_ = 0;
    auVar7 = sqrtpd(auVar6,auVar9);
    fVar15 = (float)auVar7._0_8_;
    local_78[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_78[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_322bcc77 < fVar15) {
      dVar11 = (double)(__real_3f800000 / fVar15);
      local_78[0]._0_8_ = dVar11 * dVar12;
      local_78[0]._8_8_ = dVar11 * dVar10;
      local_78[0]._16_8_ = dVar11 * dVar4;
    }
    if (param_5 != (FBaseParticle *)0x0) {
      local_78[0]._0_8_ = dVar1 - (param_5->Location).field0_0x0._s_0.X;
      local_78[0]._8_8_ = dVar2 - (param_5->Location).field0_0x0._s_0.Y;
      local_78[0]._16_8_ =
           (param_1->Location).field0_0x0._s_0.Z - (param_5->Location).field0_0x0._s_0.Z;
      uVar13 = (uint)local_78[0]._0_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar14 = (uint)((ulonglong)local_78[0]._0_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar14,uVar13) &&
            (double)CONCAT44(uVar14,uVar13) != __real_3f1a36e2e0000000) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_78[0]._8_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)local_78[0]._8_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
          ) || (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)local_78[0]._16_8_ >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 (uint)local_78[0]._16_8_ &
                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_78[0]._s_0,__real_3e45798ee0000000);
      }
    }
  }
  param_4->InterpolationParameter = SQRT(fVar15);
  (param_4->Tangent).field0_0x0._s_0.X = (float)(double)local_78[0]._0_8_;
  (param_4->Tangent).field0_0x0._s_0.Y = (float)(double)local_78[0]._8_8_;
  (param_4->Tangent).field0_0x0._s_0.Z = (float)(double)local_78[0]._16_8_;
  return;
}

// SetTrailSourceData @ 1482192a0

void __thiscall
FParticleAnimTrailEmitterInstance::SetTrailSourceData
          (FParticleAnimTrailEmitterInstance *this,FName param_1,FName param_2,
          ETrailWidthMode param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InFirstSocketName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0xfff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSecondSocketName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x1000,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->SecondSocketName = param_2;
  this->WidthMode = param_3;
  this->Width = param_4;
  this->FirstSocketName = param_1;
  return;
}

// SetupTrailModules @ 148219650

void __thiscall
FParticleAnimTrailEmitterInstance::SetupTrailModules(FParticleAnimTrailEmitterInstance *this)

{
  int *piVar1;
  TArray<TObjectPtr<UParticleModule>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UParticleModuleSpawnPerUnit *pUVar4;
  UParticleModuleSpawnPerUnit *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UParticleLODLevel *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  pUVar10 = UParticleEmitter::GetLODLevel((UParticleEmitter *)this->_padding_,0);
  if ((pUVar10 == (UParticleLODLevel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0xda8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar14 = 0;
  if (0 < (pUVar10->Modules).ArrayNum) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < (pUVar10->Modules).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar4 = *(UParticleModuleSpawnPerUnit **)((pUVar10->Modules).AllocatorInstance.Data + lVar15)
      ;
      if (pUVar4 != (UParticleModuleSpawnPerUnit *)0x0) {
        pUVar11 = Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
        iVar13 = (int)pUVar11->_padding_;
        if ((iVar13 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
            &pUVar11->_padding_)) {
          this->SpawnPerUnitModule = pUVar4;
          iVar13 = (pUVar10->UpdateModules).ArrayNum + -1;
          if (-1 < iVar13) {
            lVar12 = (longlong)iVar13;
            pTVar2 = &pUVar10->UpdateModules;
            lVar16 = lVar12 * 8;
            do {
              if (((pUVar10->UpdateModules).ArrayNum <= iVar13) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar5 = *(UParticleModuleSpawnPerUnit **)((pTVar2->AllocatorInstance).Data + lVar16);
              if ((pUVar5 != (UParticleModuleSpawnPerUnit *)0x0) && (pUVar5 == pUVar4)) {
                if (((pUVar10->UpdateModules).ArrayNum <= iVar13) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar3 = (pTVar2->AllocatorInstance).Data + lVar12 * 8;
                iVar9 = ((pUVar10->UpdateModules).ArrayNum - iVar13) + -1;
                if (iVar9 != 0) {
                  memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
                }
                piVar1 = &(pUVar10->UpdateModules).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&pTVar2->AllocatorInstance,(pUVar10->UpdateModules).ArrayNum,
                           &(pUVar10->UpdateModules).ArrayMax);
              }
              lVar12 = lVar12 + -1;
              lVar16 = lVar16 + -8;
              iVar13 = iVar13 + -1;
            } while (-1 < iVar13);
          }
          iVar13 = (pUVar10->SpawnModules).ArrayNum + -1;
          if (-1 < iVar13) {
            lVar12 = (longlong)iVar13;
            lVar16 = lVar12 * 8;
            do {
              if (((pUVar10->SpawnModules).ArrayNum <= iVar13) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar5 = *(UParticleModuleSpawnPerUnit **)
                        ((pUVar10->SpawnModules).AllocatorInstance.Data + lVar16);
              if ((pUVar5 != (UParticleModuleSpawnPerUnit *)0x0) && (pUVar5 == pUVar4)) {
                if (((pUVar10->SpawnModules).ArrayNum <= iVar13) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar3 = (pUVar10->SpawnModules).AllocatorInstance.Data + lVar12 * 8;
                iVar9 = ((pUVar10->SpawnModules).ArrayNum - iVar13) + -1;
                if (iVar9 != 0) {
                  memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
                }
                piVar1 = &(pUVar10->SpawnModules).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&(pUVar10->SpawnModules).AllocatorInstance,
                           (pUVar10->SpawnModules).ArrayNum,&(pUVar10->SpawnModules).ArrayMax);
              }
              lVar12 = lVar12 + -1;
              lVar16 = lVar16 + -8;
              iVar13 = iVar13 + -1;
            } while (-1 < iVar13);
          }
          iVar13 = (pUVar10->SpawningModules).ArrayNum + -1;
          if (-1 < iVar13) {
            lVar12 = (longlong)iVar13;
            lVar16 = lVar12 * 8;
            do {
              if (((pUVar10->SpawningModules).ArrayNum <= iVar13) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pUVar5 = *(UParticleModuleSpawnPerUnit **)
                        ((pUVar10->SpawningModules).AllocatorInstance.Data + lVar16);
              if ((pUVar5 != (UParticleModuleSpawnPerUnit *)0x0) && (pUVar5 == pUVar4)) {
                if (((pUVar10->SpawningModules).ArrayNum <= iVar13) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pFVar3 = (pUVar10->SpawningModules).AllocatorInstance.Data + lVar12 * 8;
                iVar9 = ((pUVar10->SpawningModules).ArrayNum - iVar13) + -1;
                if (iVar9 != 0) {
                  memmove(pFVar3,pFVar3 + 8,(longlong)iVar9 << 3);
                }
                piVar1 = &(pUVar10->SpawningModules).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,&(pUVar10->SpawningModules).AllocatorInstance,
                           (pUVar10->SpawningModules).ArrayNum,&(pUVar10->SpawningModules).ArrayMax)
                ;
              }
              lVar12 = lVar12 + -1;
              lVar16 = lVar16 + -8;
              iVar13 = iVar13 + -1;
            } while (-1 < iVar13);
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < (pUVar10->Modules).ArrayNum);
  }
  return;
}

// Spawn @ 14821ac00

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FParticleAnimTrailEmitterInstance::Spawn(FParticleAnimTrailEmitterInstance *this,float param_1)

{
  int iVar1;
  float fVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_TrailParticles> FVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ushort *puVar19;
  float fVar20;
  uint local_res8 [4];
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  FAnimTrailParticleSpawnParams local_68 [2];
  ulonglong uVar15;
  
  lVar13 = this->_padding_;
  uVar18 = 0;
  if ((*(int *)(lVar13 + 0x48) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar20 = (float)(*pcVar4)();
    return fVar20;
  }
  lVar13 = **(longlong **)(lVar13 + 0x40);
  if ((lVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0xcfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar20 = (float)(*pcVar4)();
    return fVar20;
  }
  if ((*(longlong *)(lVar13 + 0x30) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel->RequiredModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0xcff,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar20 = (float)(*pcVar4)();
    return fVar20;
  }
  fVar20 = *(float *)&this->_padding_;
  iVar8 = (int)ROUND((fVar20 + fVar20) - __real_3f000000) >> 1;
  iVar1 = iVar8 + 1;
  iVar12 = *(int *)((longlong)&this->_padding_ + 4) + iVar1;
  *(float *)&this->_padding_ = fVar20 - (float)iVar8;
  if (0x3ffe < iVar12) {
    return fVar20;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) <= iVar12) &&
     (cVar6 = (**(code **)(this->_padding_ + 0x18))
                        (this,(int)SQRT((float)iVar12) + iVar12 + 1,param_1 < __real_3e800000),
     cVar6 == '\0')) {
    return fVar20;
  }
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  local_res8[0] = 0xffffffff;
  uVar17 = local_res8[0];
  if (0 < iVar12) {
    puVar19 = (ushort *)this->_padding_;
    uVar15 = uVar18;
    do {
      lVar13 = (longlong)(int)((uint)*puVar19 * (int)this->_padding_) +
               (longlong)*(int *)((longlong)&this->_padding_ + 4);
      if (((*(uint *)(lVar13 + this->_padding_) & 0xf0000000) == 0x40000000) &&
         (uVar17 = (uint)*puVar19, *(int *)(lVar13 + 4 + this->_padding_) == 0)) break;
      uVar14 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
      puVar19 = puVar19 + 1;
      uVar17 = local_res8[0];
    } while ((int)uVar14 < iVar12);
  }
  local_res8[0] = uVar17;
  bVar5 = __real_322bcc77 <
          (float)((uint)this->TrailTypeData->TilingDistance & __xmm_7fffffff7fffffff7fffffff7fffffff
                 );
  lVar13 = (**(code **)(*(longlong *)this->_padding_ + 0x138))();
  uVar15 = *(ulonglong *)(lVar13 + 0xd0);
  if (uVar15 != 0) {
    pUVar9 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar12 = (int)pUVar9->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)(uVar15 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) + (longlong)iVar12 * 8)
        == &pUVar9->_padding_)) goto LAB_14821ae29;
  }
  uVar15 = uVar18;
LAB_14821ae29:
  if ((this->TrailTypeData == (UParticleModuleTypeDataAnimTrail *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TrailTypeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0xd5e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    fVar20 = (float)(*pcVar4)();
    return fVar20;
  }
  if (((uVar15 != 0) && (0 < iVar1)) && (this->bTrailEnabled != false)) {
    if (((int)this->_padding_ < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      fVar20 = (float)(*pcVar4)();
      return fVar20;
    }
    fVar20 = *(float *)&this->_padding_;
    fVar2 = *(float *)this->_padding_;
    if (((int)this->_padding_ < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      fVar20 = (float)(*pcVar4)();
      return fVar20;
    }
    local_68[0].FirstSpawnIndex = *(int *)((longlong)&this->_padding_ + 4);
    local_68[0].ElapsedTime = *(float *)&this->_padding_;
    local_68[0].InvCount = (int)(__real_3f800000 / (float)iVar1);
    local_68[0].LastTime = *(float *)this->_padding_;
    local_68[0].SpawnIndex = iVar8;
    local_68[0].DeltaTime = param_1;
    local_68[0].TimeDiff = fVar20 - fVar2;
    local_68[0].bTilingTrail = bVar5;
    SpawnParticle(this,(int *)local_res8,local_68);
    lVar13 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    if ((lVar13 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar11 = StatPtr_STAT_TrailParticles;
      if (StatPtr_STAT_TrailParticles == (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)0x0) {
        pFVar10 = ::FName::FName(&local_res20,"STAT_TrailParticles");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticles,*pFVar10,
                            L"Trail Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
                            ,true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar11;
      local_res18 = (uint)FVar3.ComparisonIndex.Value;
      uStackX_1c = FVar3.Number;
      FThreadStats::AddMessage<__int64>(FVar3,Add,lVar13,false);
    }
  }
  lVar13 = this->_padding_;
  if (((int)this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar20 = (float)(*pcVar4)();
    return fVar20;
  }
  *(int *)this->_padding_ = (int)lVar13;
  if (this->bTagTrailAsDead == true) {
    uVar15 = uVar18;
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      do {
        lVar13 = this->_padding_;
        lVar16 = (longlong)(int)((uint)*(ushort *)(uVar15 + this->_padding_) * (int)this->_padding_)
                 + (longlong)*(int *)((longlong)&this->_padding_ + 4);
        if ((*(int *)(lVar16 + 4 + lVar13) == 0) &&
           ((*(uint *)(lVar16 + lVar13) & 0xf0000000) == 0x40000000)) {
          *(uint *)(lVar16 + lVar13) = *(uint *)(lVar16 + lVar13) & 0xfffffff | 0x10000000;
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar15 = uVar15 + 2;
      } while ((int)uVar17 < *(int *)((longlong)&this->_padding_ + 4));
    }
    this->bTagTrailAsDead = false;
  }
  TickCount = TickCount + 1;
  return *(float *)&this->_padding_;
}

// SpawnParticle @ 14821c750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::SpawnParticle
          (FParticleAnimTrailEmitterInstance *this,int *param_1,
          FAnimTrailParticleSpawnParams *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  ETrailWidthMode EVar4;
  UParticleModule *pUVar5;
  FName FVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  UClass *pUVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned> FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_TrailParticles> FVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  uint uVar22;
  longlong *plVar23;
  uint *puVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  uchar auVar28 [8];
  uint *puVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined1 auStackY_2f8 [32];
  longlong local_298;
  double local_270;
  double dStack_268;
  double local_260;
  FName local_238;
  FName local_230;
  FStatMessage local_228;
  FStatMessage local_218;
  FParticleAnimTrailEmitterInstance *local_208;
  uint local_200;
  float local_1fc;
  undefined1 (*local_1f8) [16];
  FParticleAnimTrailEmitterInstance *local_1f0;
  undefined4 local_1e8;
  float local_1e4;
  undefined1 (*local_1e0) [16];
  undefined8 local_1d8;
  float local_1d0;
  FName local_1cc;
  FName local_1c4;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined1 local_188 [32];
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  lVar13 = this->_padding_;
  if ((*(int *)(lVar13 + 0x48) < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  fVar34 = param_2->DeltaTime;
  fVar35 = param_2->TimeDiff;
  lVar13 = **(longlong **)(lVar13 + 0x40);
  uVar11 = (uint)*(ushort *)
                  (this->_padding_ + (longlong)(param_2->FirstSpawnIndex + param_2->SpawnIndex) * 2)
  ;
  pauVar26 = (undefined1 (*) [16])((longlong)(int)(uVar11 * (int)this->_padding_) + this->_padding_)
  ;
  puVar29 = (uint *)(*pauVar26 + *(int *)((longlong)&this->_padding_ + 4));
  (**(code **)(this->_padding_ + 200))
            (this,pauVar26,&this->_padding_,&UE::Math::TVector<double>::ZeroVector);
  uVar22 = 0;
  if (0 < *(int *)(lVar13 + 0x78)) {
    local_298 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar22 < *(int *)(lVar13 + 0x78)) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar5 = *(UParticleModule **)(local_298 + *(longlong *)(lVar13 + 0x70));
      if ((pUVar5 != (UParticleModule *)0x0) && ((bool)pUVar5->bEnabled)) {
        pcVar7 = *(code **)(pUVar5->_padding_ + 0x2b8);
        local_200 = FParticleEmitterInstance::GetModuleDataOffset
                              ((FParticleEmitterInstance *)this,pUVar5);
        local_208 = this;
        local_1fc = fVar34;
        local_1f8 = pauVar26;
        (*pcVar7)(pUVar5,&local_208);
      }
      local_298 = local_298 + 8;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < *(int *)(lVar13 + 0x78));
  }
  fVar9 = __real_3f800000;
  pauVar21 = (undefined1 (*) [16])0x0;
  if (__real_3f800000 / *(float *)(pauVar26[9] + 4) < __real_3a83126f) {
    *(undefined4 *)(pauVar26[9] + 4) = 0x4479ffff;
  }
  plVar23 = *(longlong **)(lVar13 + 0x48);
  if (plVar23 != (longlong *)0x0) {
    local_1e8 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_1f0 = this;
    local_1e4 = fVar34;
    local_1e0 = pauVar26;
    (**(code **)(*plVar23 + 0x2b8))(plVar23,&local_1f0);
  }
  (**(code **)(this->_padding_ + 0xd0))(this,pauVar26,fVar9,fVar34);
  lVar13 = (**(code **)(*(longlong *)this->_padding_ + 0x138))();
  plVar23 = *(longlong **)(lVar13 + 0xd0);
  if (plVar23 == (longlong *)0x0) {
LAB_14821c9d9:
    plVar23 = (longlong *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UMeshComponent_NoRegister();
    iVar3 = (int)pUVar14->_padding_;
    if ((*(int *)(plVar23[2] + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar23[2] + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar14->_padding_)) goto LAB_14821c9d9;
  }
  if ((this->TrailTypeData == (UParticleModuleTypeDataAnimTrail *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TrailTypeData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xc3a,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((plVar23 == (longlong *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MeshComp",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xc3b,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(*plVar23 + 0x520))(plVar23,local_188,this->FirstSocketName,0);
  (**(code **)(*plVar23 + 0x520))(plVar23,local_128,this->SecondSocketName,0);
  *puVar29 = *puVar29 | 0xfffffff;
  local_270 = local_108 - local_168._0_8_;
  puVar29[1] = 0;
  local_260 = local_f8 - local_158;
  dStack_268 = dStack_100 - local_168._8_8_;
  local_1a8 = local_f8;
  puVar29[3] = (uint)(fVar35 + param_2->LastTime);
  iVar3 = param_2->SpawnIndex;
  puVar29[9] = puVar29[9] & 0xfffffffe;
  puVar29[6] = 1;
  puVar29[4] = (uint)(float)iVar3;
  local_1b8 = local_108;
  dStack_1b0 = dStack_100;
  fVar34 = (float)SQRT(dStack_268 * dStack_268 + local_270 * local_270 + local_260 * local_260);
  if (fVar34 <= __real_322bcc77) {
    local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_260 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar30 = (double)(fVar9 / fVar34);
    local_260 = local_260 * dVar30;
    local_270 = local_270 * dVar30;
    dStack_268 = dStack_268 * dVar30;
    local_1a0 = local_270;
    dStack_198 = dStack_268;
    local_190 = local_260;
  }
  EVar4 = this->WidthMode;
  if (EVar4 == ETrailWidthMode_FromCentre) {
    fVar35 = fVar34 * __real_3f000000;
    fVar34 = fVar35 * this->Width;
LAB_14821cc4f:
    dVar30 = (double)fVar35;
    auVar33._0_8_ = local_168._0_8_ + dVar30 * local_270;
    local_158 = local_158 + dVar30 * local_260;
    auVar33._8_8_ = local_168._8_8_ + dVar30 * dStack_268;
  }
  else {
    if (EVar4 == ETrailWidthMode_FromFirst) {
      fVar34 = fVar34 * this->Width * __real_3f000000;
      fVar35 = fVar34;
      goto LAB_14821cc4f;
    }
    if (EVar4 == ETrailWidthMode_FromSecond) {
      fVar34 = fVar34 * this->Width * __real_3f000000;
      dVar30 = (double)fVar34;
      local_158 = local_f8 - dVar30 * local_260;
      auVar33._8_8_ = dStack_100 - dVar30 * dStack_268;
      auVar33._0_8_ = local_108 - dVar30 * local_270;
    }
    else {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      auVar33 = local_168;
    }
  }
  *(undefined1 (*) [16])(pauVar26[1] + 8) = auVar33;
  *pauVar26 = auVar33;
  *(double *)(pauVar26[2] + 8) = local_158;
  *(double *)pauVar26[1] = local_158;
  local_1d0 = (float)local_260;
  puVar29[0x10] = (uint)fVar34;
  local_1d8 = CONCAT44((float)dStack_268,(float)local_270);
  *(undefined8 *)(puVar29 + 10) = local_1d8;
  puVar29[0xc] = (uint)local_1d0;
  if (*param_1 == -1) {
    *puVar29 = 0x4fffffff;
    if (((int)this->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined4 *)this->_padding_ = 0;
    puVar29[5] = 0;
    puVar29[0x11] = 0;
    pauVar27 = pauVar21;
    goto LAB_14821cf7a;
  }
  pauVar27 = (undefined1 (*) [16])((longlong)(*param_1 * (int)this->_padding_) + this->_padding_);
  pauVar21 = (undefined1 (*) [16])(*pauVar27 + *(int *)((longlong)&this->_padding_ + 4));
  if ((*(uint *)*pauVar21 & 0xf0000000) == 0x40000000) {
    if ((*(uint *)*pauVar21 & 0x3fff) != 0x3fff) goto LAB_14821ce35;
    fVar34 = *(float *)(*pauVar21 + 0xc);
    *(uint *)*pauVar21 = (uVar11 & 0x3fff) << 0xe | 0x80003fff;
    if (((float)puVar29[3] < fVar34) && (4 < (byte)LogParticles._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    }
    *puVar29 = *puVar29 | 0xfffc000;
    *puVar29 = *param_1 & 0x3fffU | 0x4fffc000;
    (**(code **)(this->_padding_ + 0x260))(this,0,0,pauVar26);
    pauVar20 = pauVar26;
    puVar24 = puVar29;
    pauVar25 = pauVar27;
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("((StartTrailData->Flags & 0xf0000000) == 0x40000000)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                        ,0xca7,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_14821ce35:
    if (((*(uint *)*pauVar21 & 0x3fff) == 0x3fff) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("((StartTrailData->Flags & 0x00003fff) >> 0) != (0x00003fff >> 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                            ,0xca8,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar34 = *(float *)(*pauVar21 + 0xc);
    *(uint *)*pauVar21 = (*(uint *)*pauVar21 & 0x3fff | 0x20000000) ^ (uVar11 & 0x3fff) << 0xe;
    if (((float)puVar29[3] < fVar34) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                            ,0xcb0,L"BAD SPAWN TIME! Curr %8.6f, Start %8.6f"), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *puVar29 = *puVar29 | 0xfffc000;
    puVar24 = (uint *)0x0;
    *puVar29 = *param_1 & 0x3fffU | 0x4fffc000;
    pauVar20 = (undefined1 (*) [16])0x0;
    pauVar25 = pauVar26;
  }
  (**(code **)(this->_padding_ + 0x260))(this,pauVar20,puVar24,pauVar25);
  if (this->TrailTypeData->bEnablePreviousTangentRecalculation == 1 &&
      this->TrailTypeData->bTangentRecalculationEveryFrame == 0) {
    (**(code **)(this->_padding_ + 0x260))(this,pauVar26,puVar29,pauVar27);
    *(undefined8 *)(puVar29 + 0xd) = *(undefined8 *)(pauVar21[3] + 4);
    puVar29[0xf] = *(uint *)(pauVar21[3] + 0xc);
  }
LAB_14821cf7a:
  if (param_2->bTilingTrail == true) {
    if (*param_1 == -1) {
      puVar29[5] = 0;
    }
    else {
      if ((pauVar27 == (undefined1 (*) [16])0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartParticle",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                              ,0xce0,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pauVar21 == (undefined1 (*) [16])0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartTrailData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                              ,0xce1,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar30 = *(double *)pauVar26[2] - *(double *)pauVar27[2];
      dVar32 = *(double *)(pauVar26[1] + 8) - *(double *)(pauVar27[1] + 8);
      dVar31 = *(double *)(pauVar26[2] + 8) - *(double *)(pauVar27[2] + 8);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar30 * dVar30 + dVar32 * dVar32 + dVar31 * dVar31;
      auVar33 = sqrtpd(auVar33,auVar8);
      if (((int)this->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(float *)this->_padding_ = (float)((double)*(float *)this->_padding_ + auVar33._0_8_);
      if (((int)this->_padding_ < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar29[5] = (uint)(*(float *)this->_padding_ / this->TrailTypeData->TilingDistance);
    }
  }
  *param_1 = uVar11;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + 1;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar16 = StatPtr_STAT_TrailParticlesSpawned;
    if (StatPtr_STAT_TrailParticlesSpawned ==
        (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)0x0) {
      pFVar15 = ::FName::FName(&local_1cc,"STAT_TrailParticlesSpawned");
      FVar16 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesSpawned,*pFVar15,
                          L"Trail Ptcls Spawned","STATGROUP_Particles","STATCAT_Advanced",
                          L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar16;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_228.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_228.StatData.Pad[0] = '\x01';
      local_228.StatData.Pad[1] = '\0';
      local_228.StatData.Pad[2] = '\0';
      local_228.StatData.Pad[3] = '\0';
      local_228.StatData.Pad[4] = '\0';
      local_228.StatData.Pad[5] = '\0';
      local_228.StatData.Pad[6] = '\0';
      local_228.StatData.Pad[7] = '\0';
      local_238 = FVar6;
      local_228.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_228);
      FStatsTrace::Add(&local_238,1);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  auVar28 = (uchar  [8])(longlong)*(int *)((longlong)&this->_padding_ + 4);
  if ((auVar28 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar19 = StatPtr_STAT_TrailParticles;
    if (StatPtr_STAT_TrailParticles == (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)0x0) {
      pFVar15 = ::FName::FName(&local_1c4,"STAT_TrailParticles");
      FVar19 = (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticles,*pFVar15,
                          L"Trail Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar19;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      local_218.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_230 = FVar6;
      local_218.StatData.Pad = auVar28;
      local_218.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar17,&local_218);
      FStatsTrace::Add(&local_230,(long64)auVar28);
      if (pFVar17->ScopeCount == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  return;
}

// Tick_RecalculateTangents @ 148221c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::Tick_RecalculateTangents
          (FParticleAnimTrailEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FName *this_00;
  UObjectBaseUtility *this_01;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  FString local_48;
  FString local_38;
  
  if (this->TrailTypeData->bTangentRecalculationEveryFrame == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  iVar6 = 0;
  if (iVar1 < 1) {
    return;
  }
  iVar2 = (int)this->_padding_;
  lVar9 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  puVar5 = (ushort *)this->_padding_;
  while( true ) {
    lVar12 = (longlong)(int)((uint)*puVar5 * iVar2) + this->_padding_;
    puVar11 = (uint *)(lVar9 + lVar12);
    if (((*(uint *)(lVar9 + lVar12) & 0xf0000000) == 0x40000000) && (puVar11[1] == 0)) break;
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 1;
    if (iVar1 <= iVar6) {
      return;
    }
  }
  if (lVar12 == 0) {
    return;
  }
  if ((*(uint *)(lVar9 + lVar12) & 0x3fff) == 0x3fff) {
    return;
  }
  lVar7 = 0;
  puVar13 = (uint *)0x0;
  if ((*puVar11 & 0x3fff) != 0x3fff) {
    lVar7 = (longlong)(int)((*puVar11 & 0x3fff) * iVar2) + this->_padding_;
    puVar13 = (uint *)(lVar7 + lVar9);
  }
  lVar9 = lVar12;
  if (lVar7 == 0) {
    return;
  }
  while (lVar12 != lVar7) {
    lVar10 = 0;
    puVar8 = (uint *)0x0;
    if (((lVar7 != 0) && (puVar13 != (uint *)0x0)) && ((*puVar13 & 0x3fff) != 0x3fff)) {
      lVar10 = (longlong)(int)((*puVar13 & 0x3fff) * (int)this->_padding_) + this->_padding_;
      puVar8 = (uint *)(*(int *)((longlong)&this->_padding_ + 4) + lVar10);
    }
    if ((lVar7 == lVar9) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrParticle != PrevParticle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                           ,0xbc0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((lVar7 == lVar10) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrParticle != NextParticle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                           ,0xbc1,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)(this->_padding_ + 0x260))(this,lVar9,puVar11,lVar7,puVar13,lVar10,puVar8);
    lVar9 = lVar7;
    lVar7 = lVar10;
    puVar11 = puVar13;
    puVar13 = puVar8;
    if (lVar10 == 0) {
      return;
    }
  }
  if (GbEnableCircularAnimTrailDump < 1) {
    return;
  }
  if (2 < (byte)LogParticles._0_1_) {
    this_00 = UParticleEmitter::GetEmitterName((UParticleEmitter *)this->_padding_);
    ::FName::ToString(this_00,&local_38);
    this_01 = (UObjectBaseUtility *)(**(code **)(*(longlong *)this->_padding_ + 0xd8))();
    UObjectBaseUtility::GetFullName(this_01,&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (GbEnableCircularAnimTrailDump < 2) {
    return;
  }
  (**(code **)(this->_padding_ + 0x250))(this);
  return;
}

// UpdateBoundingBox @ 148223ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleAnimTrailEmitterInstance::UpdateBoundingBox
          (FParticleAnimTrailEmitterInstance *this,float param_1)

{
  FColor_u_0 FVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  FName FVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  char cVar24;
  bool bVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds> FVar27;
  longlong lVar28;
  longlong lVar29;
  TTransform<double> *this_00;
  TMatrix<double> *pTVar30;
  longlong lVar31;
  FName FVar32;
  longlong *plVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  undefined1 auStackY_288 [32];
  FColor_u_0 local_228 [2];
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  double local_1f8;
  double dStack_1f0;
  longlong local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  FName local_1b8;
  undefined1 local_1a8 [16];
  TVector<double>_u_0 local_198;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  lVar35 = 0;
  FVar27 = StatPtr_STAT_ParticleUpdateBounds;
  if (StatPtr_STAT_ParticleUpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)0x0) {
    pFVar26 = ::FName::FName(&local_210,"STAT_ParticleUpdateBounds");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateBounds,*pFVar26,
                        L"Update Bounds Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar27;
  bVar21 = false;
  bVar23 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_148223d05:
    bVar22 = false;
    FVar32 = local_208;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar21 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218 = FVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0xdd8);
        bVar21 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148223d05;
    local_220 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar22 = true;
  }
  lVar28 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
  cVar24 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
  if (((cVar24 == '\0') && (lVar28 != 0)) && ((*(byte *)(lVar28 + 0xf4) & 2) == 0)) {
    bVar20 = true;
  }
  else {
    bVar20 = false;
  }
  if ((*(int *)(this->_padding_ + 0x48) < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate->LODLevels.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xddd,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar28 = this->_padding_;
  if ((*(int *)(lVar28 + 0x48) < 1) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar28 = **(longlong **)(lVar28 + 0x40);
  local_1e0 = lVar28;
  if ((lVar28 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0xddf,L""), bVar25)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar20) {
    if ((*(byte *)(*(longlong *)(lVar28 + 0x30) + 0x71) & 1) == 0) {
      lVar29 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
      plVar33 = (longlong *)this->_padding_;
      uVar17 = *(undefined4 *)(lVar29 + 0x24);
      uVar18 = *(undefined4 *)(lVar29 + 0x28);
      uVar19 = *(undefined4 *)(lVar29 + 0x2c);
      lVar31 = *(longlong *)(lVar29 + 0x30);
      *(undefined4 *)&this->_padding_ = *(undefined4 *)(lVar29 + 0x20);
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar17;
      *(undefined4 *)&this->_padding_ = uVar18;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar19;
      this->_padding_ = lVar31;
      lVar29 = (**(code **)(*plVar33 + 0x10))();
      lVar31 = *(longlong *)(lVar29 + 0x28);
      uVar36 = *(double *)(lVar29 + 0x30);
      this->_padding_ = *(longlong *)(lVar29 + 0x20);
      this->_padding_ = lVar31;
    }
    else {
      this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      this->_padding_ = uVar36;
      this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      this->_padding_ = uVar36;
      uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    this->_padding_ = uVar36;
  }
  *(undefined1 *)&this->_padding_ = 1;
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  iVar5 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar5 < 1) {
    if (!bVar20) goto LAB_148224402;
  }
  else {
    local_1f8 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dStack_1f0 = _UNK_150b2d318;
    lVar31 = (longlong)(int)((uint)*(ushort *)this->_padding_ * (int)this->_padding_) +
             this->_padding_;
    local_1b8 = __real_47efffffe0000000;
    local_220 = __real_c7efffffe0000000;
    local_1c8 = ___xmm_47efffffe000000047efffffe0000000;
    dStack_1c0 = _UNK_150b28868;
    local_228[0] = *(FColor_u_0 *)
                    ((longlong)*(int *)((longlong)&this->_padding_ + 4) + 0x40 + lVar31);
    local_1d8 = (double)this->_padding_ + *(double *)(lVar31 + 0x18);
    dVar39 = (double)this->_padding_ + *(double *)(lVar31 + 0x20);
    local_218 = (FName)((double)this->_padding_ + *(double *)(lVar31 + 0x28));
    bVar4 = *(byte *)(this->_padding_ + 0x37);
    local_1a8._8_8_ = 0;
    local_1a8._0_8_ = dVar39;
    uStack_1d0 = 0;
    FVar9 = __real_c7efffffe0000000;
    dVar16 = _UNK_150b2d318;
    dVar15 = ___xmm_c7efffffe0000000c7efffffe0000000;
    dVar42 = _UNK_150b28868;
    dVar41 = ___xmm_47efffffe000000047efffffe0000000;
    FVar13 = __real_47efffffe0000000;
    if (0 < iVar5) {
      do {
        iVar6 = *(int *)((longlong)&this->_padding_ + 4);
        puVar34 = (undefined8 *)
                  ((longlong)
                   (int)((uint)*(ushort *)(this->_padding_ + lVar35 * 2) * (int)this->_padding_) +
                  this->_padding_);
        uVar7 = *(uint *)((longlong)puVar34 + 0x6c);
        *(uint *)((longlong)puVar34 + 0x6c) = uVar7 & 0xfdffffff;
        if (((uVar7 >> 0x19 & 1) == 0) || ((~bVar4 & 1) == 0)) {
          bVar25 = false;
          uVar36 = (undefined8)(param_1 * *(float *)(puVar34 + 8));
          uVar10 = (undefined8)(param_1 * *(float *)((longlong)puVar34 + 0x44));
          uVar11 = (undefined8)(param_1 * *(float *)(puVar34 + 9));
        }
        else {
          bVar25 = true;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        dVar38 = (double)puVar34[3];
        dVar2 = (double)puVar34[4];
        dVar3 = (double)puVar34[5];
        puVar34[3] = (double)uVar36 + dVar38;
        puVar34[4] = (double)uVar10 + dVar2;
        puVar34[5] = (double)uVar11 + dVar3;
        if (bVar25) {
          fVar43 = 0.0;
        }
        else {
          fVar43 = param_1 * *(float *)((longlong)puVar34 + 0x5c);
        }
        fVar43 = fVar43 + *(float *)((longlong)puVar34 + 0x3c);
        *(float *)((longlong)puVar34 + 0x3c) = fVar43;
        dVar38 = (double)uVar36 + dVar38 + (double)this->_padding_;
        puVar34[3] = dVar38;
        dVar2 = (double)uVar10 + dVar2 + (double)this->_padding_;
        puVar34[4] = dVar2;
        dVar3 = (double)uVar11 + dVar3 + (double)this->_padding_;
        puVar34[5] = dVar3;
        *puVar34 = puVar34[3];
        puVar34[1] = puVar34[4];
        puVar34[2] = puVar34[5];
        if (bVar20) {
          FVar1 = *(FColor_u_0 *)((longlong)iVar6 + 0x40 + (longlong)puVar34);
          dVar37 = dVar3 - (double)local_218;
          local_218 = *(FName *)(puVar34 + 5);
          dVar39 = SQRT((dVar2 - dVar39) * (dVar2 - dVar39) +
                        (dVar38 - local_1d8) * (dVar38 - local_1d8) + dVar37 * dVar37) *
                   __real_3fd0000000000000 +
                   (double)(((float)FVar1 - (float)local_228[0]) * __real_3e800000 + (float)FVar1);
          local_1d8 = (double)puVar34[3];
          uStack_1d0 = puVar34[4];
          dVar40 = dVar39 + dVar38;
          dVar37 = dVar39 + dVar2;
          dVar38 = dVar38 - dVar39;
          dVar2 = dVar2 - dVar39;
          FVar9 = (FName)(dVar39 + dVar3);
          FVar12 = (FName)(dVar3 - dVar39);
          dVar39 = dVar38;
          if (dVar38 <= dVar15) {
            dVar39 = dVar15;
          }
          if (dVar41 <= dVar38) {
            dVar38 = dVar41;
          }
          dVar15 = dVar39;
          if (dVar39 <= dVar40) {
            dVar15 = dVar40;
          }
          dVar41 = dVar38;
          if (dVar40 <= dVar38) {
            dVar41 = dVar40;
          }
          dVar39 = dVar2;
          if (dVar42 <= dVar2) {
            dVar39 = dVar42;
          }
          if (dVar2 <= dVar16) {
            dVar2 = dVar16;
          }
          FVar14 = FVar12;
          if ((double)FVar12 <= (double)local_220) {
            FVar14 = local_220;
          }
          if ((double)FVar13 <= (double)FVar12) {
            FVar12 = FVar13;
          }
          dVar42 = dVar39;
          if (dVar37 <= dVar39) {
            dVar42 = dVar37;
          }
          dVar16 = dVar2;
          if (dVar2 <= dVar37) {
            dVar16 = dVar37;
          }
          local_220 = FVar14;
          if ((double)FVar14 <= (double)FVar9) {
            local_220 = FVar9;
          }
          FVar13 = FVar12;
          if ((double)FVar9 <= (double)FVar12) {
            FVar13 = FVar9;
          }
          local_1a8._8_4_ = (int)uStack_1d0;
          local_1a8._0_8_ = uStack_1d0;
          local_1a8._12_4_ = (int)((ulonglong)uStack_1d0 >> 0x20);
          local_228[0] = FVar1;
          local_1b8 = FVar13;
        }
        FVar9 = local_220;
        fVar43 = FGenericPlatformMath::Fmod(fVar43,__real_40c90fdb);
        lVar35 = lVar35 + 1;
        *(float *)((longlong)puVar34 + 0x3c) = fVar43;
        lVar28 = local_1e0;
        dVar39 = (double)local_1a8._0_8_;
      } while (lVar35 < iVar5);
    }
    plVar33 = &this->_padding_;
    if (!bVar20) goto LAB_148224402;
    if ((char)this->_padding_ == '\0') {
      this->_padding_ = (longlong)dVar41;
      this->_padding_ = (longlong)dVar42;
      *(undefined1 *)&this->_padding_ = 1;
      *plVar33 = (longlong)dVar41;
      this->_padding_ = (longlong)dVar42;
      this->_padding_ = (longlong)local_1b8;
      this->_padding_ = (longlong)local_1b8;
    }
    else {
      dVar39 = dVar42;
      if ((double)this->_padding_ <= dVar42) {
        dVar39 = (double)this->_padding_;
      }
      dVar38 = (double)*plVar33;
      if (dVar41 <= (double)*plVar33) {
        dVar38 = dVar41;
      }
      if (dVar41 <= (double)this->_padding_) {
        dVar41 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar39;
      *plVar33 = (longlong)dVar38;
      FVar12 = (FName)this->_padding_;
      if ((double)FVar13 <= (double)this->_padding_) {
        FVar12 = FVar13;
      }
      this->_padding_ = (longlong)dVar41;
      if ((double)FVar13 <= (double)this->_padding_) {
        FVar13 = (FName)this->_padding_;
      }
      this->_padding_ = (longlong)FVar12;
      dVar39 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar42) {
        dVar39 = dVar42;
      }
      this->_padding_ = (longlong)FVar13;
      this->_padding_ = (longlong)dVar39;
    }
    dVar39 = dVar15;
    if ((double)*plVar33 <= dVar15) {
      dVar39 = (double)*plVar33;
    }
    if (dVar15 <= (double)this->_padding_) {
      dVar15 = (double)this->_padding_;
    }
    dVar41 = (double)this->_padding_;
    if (dVar16 <= (double)this->_padding_) {
      dVar41 = dVar16;
    }
    if (dVar16 <= (double)this->_padding_) {
      dVar16 = (double)this->_padding_;
    }
    *plVar33 = (longlong)dVar39;
    FVar13 = (FName)this->_padding_;
    if ((double)FVar9 <= (double)this->_padding_) {
      FVar13 = FVar9;
    }
    this->_padding_ = (longlong)dVar41;
    if ((double)FVar9 <= (double)this->_padding_) {
      FVar9 = (FName)this->_padding_;
    }
    this->_padding_ = (longlong)dVar15;
    this->_padding_ = (longlong)dVar16;
    this->_padding_ = (longlong)FVar13;
    this->_padding_ = (longlong)FVar9;
  }
  if ((*(byte *)(*(longlong *)(lVar28 + 0x30) + 0x71) & 1) != 0) {
    this_00 = (TTransform<double> *)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pTVar30 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_158);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&this->_padding_,(TBox<double> *)&local_198._s_0,pTVar30);
    this->_padding_ = (longlong)local_198._s_0.X;
    this->_padding_ = (longlong)local_198._s_0.Y;
    this->_padding_ = (longlong)local_198._s_0.Z;
    this->_padding_ = lStack_180;
    this->_padding_ = local_178;
    this->_padding_ = lStack_170;
    this->_padding_ = local_168;
  }
LAB_148224402:
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// UpdateSourceData @ 148226050

void __thiscall
FParticleAnimTrailEmitterInstance::UpdateSourceData
          (FParticleAnimTrailEmitterInstance *this,float param_1,bool param_2)

{
  return;
}

