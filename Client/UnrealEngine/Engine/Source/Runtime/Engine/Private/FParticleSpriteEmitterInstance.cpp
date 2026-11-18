// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FParticleSpriteEmitterInstance @ 1480f4170

FParticleSpriteEmitterInstance * __thiscall
FParticleSpriteEmitterInstance::FParticleSpriteEmitterInstance
          (FParticleSpriteEmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  FParticleEmitterInstance::FParticleEmitterInstance((FParticleEmitterInstance *)this,param_1);
  *(undefined ***)this = &___7FParticleSpriteEmitterInstance__6B_;
  return this;
}

// ~FParticleSpriteEmitterInstance @ 1480f7280

void __thiscall
FParticleSpriteEmitterInstance::~FParticleSpriteEmitterInstance
          (FParticleSpriteEmitterInstance *this)

{
  *(undefined ***)this = &___7FParticleSpriteEmitterInstance__6B_;
  FParticleEmitterInstance::~FParticleEmitterInstance((FParticleEmitterInstance *)this);
  return;
}

// FillReplayData @ 14810a570

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleSpriteEmitterInstance::FillReplayData
          (FParticleSpriteEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleSpriteEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_FillReplayData>
  FVar7;
  UMaterialInterface *pUVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar12.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ParticleSpriteEmitterInstance_FillReplayData ==
          (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleSpriteEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_FillReplayData>
           )0x0) {
        pFVar6 = ::FName::FName((FName *)&local_res8.s,
                                "STAT_ParticleSpriteEmitterInstance_FillReplayData");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_ParticleSpriteEmitterInstance_FillReplayData,*pFVar6,
                   L"STAT_ParticleSpriteEmitterInstance_FillReplayData","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar7 = StatPtr_STAT_ParticleSpriteEmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleSpriteEmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleSpriteEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_FillReplayData>
       )0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_ParticleSpriteEmitterInstance_FillReplayData");
    FVar7 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleSpriteEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_FillReplayData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleSpriteEmitterInstance_FillReplayData,*pFVar6,
                         L"STAT_ParticleSpriteEmitterInstance_FillReplayData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_14810a6f2:
    bVar3 = false;
    FVar11.ComparisonIndex.Value = 0;
    FVar11.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xc43);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14810a6f2;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar9;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar3 = true;
    FVar12.Value = FVar10.Value;
  }
  if (0 < *(int *)&this->field_0x18c) {
    bVar5 = FParticleEmitterInstance::FillReplayData((FParticleEmitterInstance *)this,param_1);
    if (bVar5) {
      param_1->eEmitterType = DET_Sprite;
      pUVar8 = FParticleEmitterInstance::GetCurrentMaterial((FParticleEmitterInstance *)this);
      param_1[1]._padding_ = (longlong)pUVar8;
      bVar5 = true;
      goto LAB_14810a72c;
    }
  }
  bVar5 = false;
LAB_14810a72c:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  return bVar5;
}

// GetAllocatedSize @ 14810fea0

void __thiscall
FParticleSpriteEmitterInstance::GetAllocatedSize
          (FParticleSpriteEmitterInstance *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar4 = iVar2;
  iVar3 = iVar2;
  if (*(longlong *)&this->field_0x168 != 0) {
    iVar4 = *(int *)&this->field_0x188 * *(int *)&this->field_0x18c;
    iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
  }
  if (*(longlong *)&this->field_0x170 != 0) {
    iVar1 = *(int *)&this->field_0x18c * 2;
    iVar2 = *(int *)&this->field_0x194 * 2;
  }
  *param_1 = iVar1 + 0x280 + iVar4;
  *param_2 = iVar2 + 0x280 + iVar3;
  return;
}

// GetDynamicData @ 148113860

/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterDataBase * __thiscall
FParticleSpriteEmitterInstance::GetDynamicData
          (FParticleSpriteEmitterInstance *this,bool param_1,Type param_2)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleSpriteEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_GetDynamicData>
  FVar8;
  FDynamicSpriteEmitterData *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_DynamicSpriteCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem> FVar14;
  FDynamicSpriteEmitterData *this_00;
  LARGE_INTEGER local_res8;
  bool local_res10;
  FName local_res20;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  this_00 = (FDynamicSpriteEmitterData *)0x0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleSpriteEmitterInstance_GetDynamicData ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleSpriteEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_GetDynamicData>
         )0x0) {
      pFVar7 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_ParticleSpriteEmitterInstance_GetDynamicData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleSpriteEmitterInstance_GetDynamicData,*pFVar7,
                 L"STAT_ParticleSpriteEmitterInstance_GetDynamicData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_ParticleSpriteEmitterInstance_GetDynamicData;
  if (StatPtr_STAT_ParticleSpriteEmitterInstance_GetDynamicData ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleSpriteEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_GetDynamicData>
       )0x0) {
    pFVar7 = ::FName::FName(&local_res20,"STAT_ParticleSpriteEmitterInstance_GetDynamicData");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleSpriteEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleSpriteEmitterInstance_GetDynamicData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleSpriteEmitterInstance_GetDynamicData,*pFVar7,
                         L"STAT_ParticleSpriteEmitterInstance_GetDynamicData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar2 = *(LARGE_INTEGER *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  if ((LVar2.s.LowPart == 0) && (LVar2.s.HighPart == 0)) {
LAB_1481139ca:
    bVar4 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar2;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xbd8);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481139ca;
    local_res8 = LVar2;
    FThreadStats::AddMessage((FName)LVar2.s,CycleScopeStart);
    bVar4 = true;
    local_58 = LVar2;
  }
  cVar6 = (**(code **)(*(longlong *)this + 0x118))(this,*(undefined8 *)&this->field_0x18);
  if ((cVar6 != '\0') && ((this->field_0x160 & 1) != 0)) {
    pFVar9 = FDynamicEmitterDataBase::operator_new(0x1b0);
    if (pFVar9 != (FDynamicSpriteEmitterData *)0x0) {
      *(uint *)&pFVar9->_padding_ = (uint)pFVar9->_padding_ & 0xfffffffe;
      *(uint *)&pFVar9->_padding_ = (uint)pFVar9->_padding_ & 0xfffffffe;
      pFVar9->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
      pFVar9->_padding_ = (longlong)&___7FDynamicSpriteEmitterData__6B_;
      *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0xffffffff;
      pFVar9->_padding_ = 0;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)&pFVar9->Source);
      *(undefined ***)&pFVar9->Source = &___7FDynamicSpriteEmitterReplayData__6B_;
      *(undefined8 *)&(pFVar9->UniformParameters).AxisLockRight.field0_0x0 = 0;
      (pFVar9->UniformParameters).AxisLockRight.field0_0x0._s_0.Z = 0.0;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).AxisLockRight.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).AxisLockUp.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).AxisLockUp.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).TangentSelector.field0_0x0 + 4) = 0;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).TangentSelector.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).NormalsSphereCenter.field0_0x0 + 4) = 0
      ;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).NormalsSphereCenter.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)
       ((longlong)&(pFVar9->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 4) = 0;
      *(undefined8 *)
       ((longlong)&(pFVar9->UniformParameters).NormalsCylinderUnitDirection.field0_0x0 + 0xc) =
           0x3f800000;
      *(undefined8 *)((longlong)&(pFVar9->UniformParameters).SubImageSize.field0_0x0 + 4) = 0;
      (pFVar9->UniformParameters).SubImageSize.field0_0x0._s_0.W = 1.0;
      *(undefined8 *)&(pFVar9->UniformParameters).MacroUVParameters.field0_0x0 = 0;
      (pFVar9->UniformParameters).MacroUVParameters.field0_0x0._s_0.Z = 0.0;
      (pFVar9->UniformParameters).MacroUVParameters.field0_0x0._s_0.W = 1.0;
      this_00 = pFVar9;
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar10 = StatPtr_STAT_DynamicEmitterCount;
      if (StatPtr_STAT_DynamicEmitterCount ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)0x0) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterCount");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterCount,*pFVar7,
                            L"DynEmitter Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar2 = *(LARGE_INTEGER *)FVar10;
      local_res8 = LVar2;
      if ((((FName)LVar2.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_48.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = '\x01';
        local_48.StatData.Pad[1] = '\0';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar2;
        local_48.NameAndInfo.Index.Value = LVar2.s.LowPart;
        FThreadStats::AddStatMessage(pFVar11,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,1);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar13 = StatPtr_STAT_DynamicSpriteCount;
        if (StatPtr_STAT_DynamicSpriteCount ==
            (FThreadSafeStaticStat<FStat_STAT_DynamicSpriteCount>)0x0) {
          pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicSpriteCount");
          FVar13 = (FThreadSafeStaticStat<FStat_STAT_DynamicSpriteCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicSpriteCount,*pFVar7,
                              L"DynSprite Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                              L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
        }
        LVar2 = *(LARGE_INTEGER *)FVar13;
        local_res8 = LVar2;
        if ((((FName)LVar2.QuadPart != (FName)0x0) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar11 == (FThreadStats *)0x0) {
            pFVar12 = FThreadStatsPool::Get();
            pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
          }
          local_48.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res8 = LVar2;
          local_48.NameAndInfo.Index.Value = LVar2.s.LowPart;
          FThreadStats::AddStatMessage(pFVar11,&local_48);
          FStatsTrace::Add((FName *)&local_res8.s,1);
          if (pFVar11->ScopeCount == 0) {
            FThreadStats::Flush(pFVar11,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar11,false,false);
          }
        }
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar14 = StatPtr_STAT_DynamicEmitterMem;
      if (StatPtr_STAT_DynamicEmitterMem == (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)0x0
         ) {
        pFVar7 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterMem");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterMem,*pFVar7,
                            L"DynEmitter Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar2 = *(LARGE_INTEGER *)FVar14;
      local_res8 = LVar2;
      if ((((FName)LVar2.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_48.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = 0xb0;
        local_48.StatData.Pad[1] = '\x01';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar2;
        local_48.NameAndInfo.Index.Value = LVar2.s.LowPart;
        FThreadStats::AddStatMessage(pFVar11,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,0x1b0);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    cVar6 = (**(code **)(*(longlong *)this + 0x220))(this,&this_00->Source);
    if (cVar6 != '\0') {
      FDynamicSpriteEmitterData::Init(this_00,local_res10);
      goto LAB_148113ed1;
    }
    if (this_00 != (FDynamicSpriteEmitterData *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  this_00 = (FDynamicSpriteEmitterData *)0x0;
LAB_148113ed1:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && ((FName)local_58.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58._0_4_;
      local_48.NameAndInfo.Number = local_58.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar11,&local_48);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  return (FDynamicEmitterDataBase *)this_00;
}

// GetReplayData @ 148118dc0

FDynamicEmitterReplayDataBase * __thiscall
FParticleSpriteEmitterInstance::GetReplayData(FParticleSpriteEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDynamicSpriteEmitterReplayDataBase *this_00;
  FDynamicEmitterReplayDataBase *pFVar4;
  
  if ((0 < *(int *)&this->field_0x18c) && ((this->field_0x160 & 1) != 0)) {
    this_00 = ::operator_new(0xd8);
    if (this_00 == (FDynamicSpriteEmitterReplayDataBase *)0x0) {
      this_00 = (FDynamicSpriteEmitterReplayDataBase *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewEmitterReplayData != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xc03,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase(this_00);
      this_00->_padding_ = (longlong)&___7FDynamicSpriteEmitterReplayData__6B_;
    }
    cVar3 = (**(code **)(*(longlong *)this + 0x220))(this,this_00);
    if (cVar3 != '\0') {
      return (FDynamicEmitterReplayDataBase *)this_00;
    }
    if (this_00 != (FDynamicSpriteEmitterReplayDataBase *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return (FDynamicEmitterReplayDataBase *)0x0;
}

// GetResourceSizeEx @ 148118fe0

void __thiscall
FParticleSpriteEmitterInstance::GetResourceSizeEx
          (FParticleSpriteEmitterInstance *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if ((TVar1 == EstimatedTotal) ||
     (lVar2 = (**(code **)(**(longlong **)&this->field_0x10 + 0xf8))(), lVar2 != 0)) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (*(longlong *)&this->field_0x168 != 0) {
      iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
    }
    if (*(longlong *)&this->field_0x170 != 0) {
      iVar4 = *(int *)&this->field_0x194 * 2;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x1b0);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar3);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar4);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)&this->field_0x194 << 6);
    if (0 < *(int *)&this->field_0x30) {
      FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)*(int *)&this->field_0x194 << 4);
    }
  }
  return;
}

