// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 14

// Apply<Chaos::Softs::FSolverParticles> @ 14db7bc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>
          (FPBDAnimDriveConstraint *this,FSolverParticles *param_1,float param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  TFunctionRef<void___cdecl(int)> *pTVar10;
  FNameEntryId FVar11;
  FName FVar12;
  float fVar13;
  float local_res8;
  uint uStackX_c;
  float local_res18 [2];
  FColor_u_0 local_res20 [2];
  float local_208 [2];
  FName local_200;
  FName local_1f8;
  LARGE_INTEGER local_1e8;
  FStatMessage local_1e0;
  FScriptContainerElement *local_1d0;
  int local_1c8;
  FScriptContainerElement *local_1c0;
  int local_1b8;
  code *local_1b0;
  FPBDAnimDriveConstraint **local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  FScriptContainerElement *local_190;
  int local_188;
  code *local_180;
  FPBDAnimDriveConstraint **local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement *local_160;
  int local_158;
  code *local_150;
  FPBDAnimDriveConstraint **local_148;
  FScriptContainerElement *local_140;
  int local_138;
  FScriptContainerElement *local_130;
  int local_128;
  code *local_120;
  FPBDAnimDriveConstraint **local_118;
  FPBDAnimDriveConstraint *local_110;
  FSolverParticles *local_108;
  float *local_100;
  FScriptContainerElement **local_f8;
  FScriptContainerElement **local_f0;
  FPBDAnimDriveConstraint *local_e8;
  FSolverParticles *local_e0;
  float local_d8;
  float *local_d0;
  FScriptContainerElement **local_c8;
  FScriptContainerElement **local_c0;
  FPBDAnimDriveConstraint *local_b8;
  FSolverParticles *local_b0;
  float *local_a8;
  float *local_a0;
  FScriptContainerElement **local_98;
  FScriptContainerElement **local_90;
  FPBDAnimDriveConstraint *local_88;
  FSolverParticles *local_80;
  float *local_78;
  float *local_70;
  float *local_68;
  FScriptContainerElement **local_60;
  FScriptContainerElement **local_58;
  FName local_50 [3];
  
  FVar8 = StatPtr_STAT_PBD_AnimDriveConstraint;
  local_res18[0] = param_2;
  if (StatPtr_STAT_PBD_AnimDriveConstraint ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint>)0x0) {
    pFVar7 = ::FName::FName(local_50,"STAT_PBD_AnimDriveConstraint");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_AnimDriveConstraint,*pFVar7,
                       L"Chaos PBD Anim Drive Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar9 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar11.Value;
        local_200.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                   ,0x8a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = (float)FVar11.Value;
      uStackX_c = uVar9;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14db7bdcf;
    }
  }
  bVar4 = false;
  FVar12 = local_1f8;
LAB_14db7bdcf:
  fVar13 = __real_38d1b717;
  if (((int)(this->Stiffness)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                    *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res8 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Stiffness);
    if (((int)(this->Damping)._padding_ < 2) ||
       ((float)((uint)(*(float *)&(this->Damping)._padding_ -
                      *(float *)((longlong)&(this->Damping)._padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar13)) {
      local_208[0] = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Damping);
      local_140 = (this->AnimationPositions->AllocatorInstance).Data +
                  (longlong)this->ParticleOffset * 0xc;
      local_138 = this->ParticleCount;
      if (local_138 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_130 = (this->AnimationVelocities->AllocatorInstance).Data +
                  (longlong)this->ParticleOffset * 0xc;
      local_128 = this->ParticleCount;
      if (local_128 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_78 = &local_res8;
      pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_120;
      local_70 = local_208;
      local_68 = local_res18;
      local_60 = &local_140;
      local_58 = &local_130;
      local_118 = &local_88;
      local_120 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_4>,void,int>
                  ::Call;
      local_88 = this;
      local_80 = param_1;
    }
    else {
      local_170 = (this->AnimationPositions->AllocatorInstance).Data +
                  (longlong)this->ParticleOffset * 0xc;
      local_168 = this->ParticleCount;
      if (local_168 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_160 = (this->AnimationVelocities->AllocatorInstance).Data +
                  (longlong)this->ParticleOffset * 0xc;
      local_158 = this->ParticleCount;
      if (local_158 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_a8 = &local_res8;
      pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_150;
      local_a0 = local_res18;
      local_98 = &local_170;
      local_90 = &local_160;
      local_148 = &local_b8;
      local_150 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l15::<lambda_3>,void,int>
                  ::Call;
      local_b8 = this;
      local_b0 = param_1;
    }
  }
  else if (((int)(this->Damping)._padding_ < 2) ||
          ((float)((uint)(*(float *)&(this->Damping)._padding_ -
                         *(float *)((longlong)&(this->Damping)._padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar13 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Damping);
    local_1a0 = (this->AnimationPositions->AllocatorInstance).Data +
                (longlong)this->ParticleOffset * 0xc;
    local_198 = this->ParticleCount;
    if (local_198 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_190 = (this->AnimationVelocities->AllocatorInstance).Data +
                (longlong)this->ParticleOffset * 0xc;
    local_188 = this->ParticleCount;
    if (local_188 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_d0 = local_res18;
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_180;
    local_c8 = &local_1a0;
    local_c0 = &local_190;
    local_178 = &local_e8;
    local_180 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l10::<lambda_2>,void,int>
                ::Call;
    local_e8 = this;
    local_e0 = param_1;
    local_d8 = fVar13;
  }
  else {
    local_1d0 = (this->AnimationPositions->AllocatorInstance).Data +
                (longlong)this->ParticleOffset * 0xc;
    local_1c8 = this->ParticleCount;
    if (local_1c8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1c0 = (this->AnimationVelocities->AllocatorInstance).Data +
                (longlong)this->ParticleOffset * 0xc;
    local_1b8 = this->ParticleCount;
    if (local_1b8 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_100 = local_res18;
    pTVar10 = (TFunctionRef<void___cdecl(int)> *)&local_1b0;
    local_f8 = &local_1d0;
    local_f0 = &local_1c0;
    local_1a8 = &local_110;
    local_1b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l8::<lambda_1>,void,int>
                ::Call;
    local_110 = this;
    local_108 = param_1;
  }
  PhysicsParallelFor(this->ParticleCount,pTVar10,false);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1e0.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_1e0.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1e8);
      local_1e0.StatData.Pad[4] = '\0';
      local_1e0.StatData.Pad[5] = '\0';
      local_1e0.StatData.Pad[6] = '\0';
      local_1e0.StatData.Pad[7] = '\0';
      local_1e0.StatData.Pad[0] = local_1e8.s.LowPart._0_1_;
      local_1e0.StatData.Pad[1] = local_1e8.s.LowPart._1_1_;
      local_1e0.StatData.Pad[2] = local_1e8.s.LowPart._2_1_;
      local_1e0.StatData.Pad[3] = local_1e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1e0);
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
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 14db7d400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDAnimDriveConstraint *this,FSolverParticlesRange *param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  float fVar10;
  LARGE_INTEGER local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  FStatMessage local_c8;
  LARGE_INTEGER local_b8 [2];
  LARGE_INTEGER local_a8 [2];
  FPBDAnimDriveConstraint *local_98;
  FSolverParticlesRange *local_90;
  LARGE_INTEGER *local_88;
  LARGE_INTEGER *local_80;
  LARGE_INTEGER *local_78;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_70;
  TArrayView<Chaos::TVector<float,3>_const_,int> *local_68;
  FName local_60;
  
  FVar6 = StatPtr_STAT_PBD_AnimDriveConstraint;
  local_res18.s.LowPart = (DWORD)param_2;
  if (StatPtr_STAT_PBD_AnimDriveConstraint ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_res20.s,"STAT_PBD_AnimDriveConstraint");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PBD_AnimDriveConstraint>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_AnimDriveConstraint,*pFVar5,
                       L"Chaos PBD Anim Drive Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].s.LowPart = 0.0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0].s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8[0]._0_4_ = FVar8.Value;
        local_res8[0]._4_4_ = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8[0].s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                   ,0x8a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8[0]._0_4_ = FVar8.Value;
      local_res8[0]._4_4_ = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_14db7d545;
    }
  }
  bVar3 = false;
  FVar9 = local_60;
LAB_14db7d545:
  fVar10 = __real_38d1b717;
  if (((int)(this->Stiffness)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->Stiffness)._padding_ -
                    *(float *)((longlong)&(this->Stiffness)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res8[0]._0_4_ = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Stiffness);
    if (((int)(this->Damping)._padding_ < 2) ||
       ((float)((uint)(*(float *)&(this->Damping)._padding_ -
                      *(float *)((longlong)&(this->Damping)._padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar10)) {
      local_res20.s.LowPart = (DWORD)FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Damping);
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                 (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_a8[0].s,
                 this->AnimationPositions);
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                 (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_b8[0].s,
                 this->AnimationVelocities);
      local_88 = local_res8;
      local_80 = &local_res20;
      local_78 = &local_res18;
      local_70 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)local_a8;
      local_68 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)local_b8;
      local_c8.StatData.Pad =
           (uchar  [8])
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_4>,void,int>
           ::Call;
    }
    else {
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                 (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_a8[0].s,
                 this->AnimationPositions);
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
                 (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_b8[0].s,
                 this->AnimationVelocities);
      local_88 = local_res8;
      local_80 = &local_res18;
      local_78 = local_a8;
      local_70 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)local_b8;
      local_c8.StatData.Pad =
           (uchar  [8])
           UE::Core::Private::Function::
           TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l15::<lambda_3>,void,int>
           ::Call;
    }
  }
  else if (((int)(this->Damping)._padding_ < 2) ||
          ((float)((uint)(*(float *)&(this->Damping)._padding_ -
                         *(float *)((longlong)&(this->Damping)._padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar10 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->Damping);
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
               (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_a8[0].s,
               this->AnimationPositions);
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
               (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_b8[0].s,
               this->AnimationVelocities);
    local_80 = &local_res18;
    local_88 = (LARGE_INTEGER *)CONCAT44(local_88._4_4_,fVar10);
    local_78 = local_a8;
    local_70 = (TArrayView<Chaos::TVector<float,3>_const_,int> *)local_b8;
    local_c8.StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l10::<lambda_2>,void,int>
         ::Call;
  }
  else {
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
               (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_b8[0].s,
               this->AnimationPositions);
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::
    GetConstArrayView<Chaos::TVector<float,3>_>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,
               (TArrayView<Chaos::TVector<float,3>_const_,int> *)&local_a8[0].s,
               this->AnimationVelocities);
    local_88 = &local_res18;
    local_80 = local_b8;
    local_78 = local_a8;
    local_c8.StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l8::<lambda_1>,void,int>
         ::Call;
  }
  local_c8.NameAndInfo = (FStatNameAndInfo)&local_98;
  local_98 = this;
  local_90 = param_1;
  PhysicsParallelFor(this->ParticleCount,(TFunctionRef<void___cdecl(int)> *)&local_c8,false);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c8.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar9 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(local_res8);
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_res8[0]._0_1_;
      local_c8.StatData.Pad[1] = local_res8[0]._1_1_;
      local_c8.StatData.Pad[2] = local_res8[0]._2_1_;
      local_c8.StatData.Pad[3] = local_res8[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c8);
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
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticles> @ 14db7e8f0

void __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticles>
          (FPBDAnimDriveConstraint *this,FSolverParticles *param_1,float param_2,float param_3,
          float param_4,int param_5,TVector<float,3> *param_6,TVector<float,3> *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  int iVar8;
  
  iVar8 = this->ParticleOffset + param_5;
  pfVar5 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  if (*pfVar5 != 0.0) {
    pTVar6 = FSolverParticles::P(param_1,iVar8);
    fVar1 = *(float *)&param_6->field_0x4;
    fVar2 = *(float *)param_6;
    *(float *)&pTVar6->field_0x8 =
         *(float *)&pTVar6->field_0x8 -
         (*(float *)&pTVar6->field_0x8 - *(float *)&param_6->field_0x8) * param_2;
    *(float *)&pTVar6->field_0x4 =
         *(float *)&pTVar6->field_0x4 - (*(float *)&pTVar6->field_0x4 - fVar1) * param_2;
    *(float *)pTVar6 = *(float *)pTVar6 - (*(float *)pTVar6 - fVar2) * param_2;
    pTVar7 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar8);
    fVar1 = *(float *)&pTVar7->field_0x8;
    fVar2 = *(float *)&param_7->field_0x8;
    fVar3 = *(float *)param_7;
    fVar4 = *(float *)pTVar7;
    *(float *)&pTVar6->field_0x4 =
         *(float *)&pTVar6->field_0x4 -
         ((*(float *)&pTVar6->field_0x4 - *(float *)&pTVar7->field_0x4) -
         param_4 * *(float *)&param_7->field_0x4) * param_3;
    *(float *)&pTVar6->field_0x8 =
         *(float *)&pTVar6->field_0x8 -
         ((*(float *)&pTVar6->field_0x8 - fVar1) - param_4 * fVar2) * param_3;
    *(float *)pTVar6 = *(float *)pTVar6 - ((*(float *)pTVar6 - fVar4) - param_4 * fVar3) * param_3;
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticlesRange> @ 14db7ea40

void __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
          (FPBDAnimDriveConstraint *this,FSolverParticlesRange *param_1,float param_2,float param_3,
          float param_4,int param_5,TVector<float,3> *param_6,TVector<float,3> *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  float *pfVar7;
  TVector<float,3> *pTVar8;
  TVector<float,3> *pTVar9;
  int iVar10;
  
  iVar10 = param_5 + this->ParticleOffset;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pfVar7 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar10);
  if (*pfVar7 != 0.0) {
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar8 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar10);
    fVar1 = *(float *)&param_6->field_0x4;
    fVar2 = *(float *)param_6;
    *(float *)&pTVar8->field_0x8 =
         *(float *)&pTVar8->field_0x8 -
         (*(float *)&pTVar8->field_0x8 - *(float *)&param_6->field_0x8) * param_2;
    *(float *)&pTVar8->field_0x4 =
         *(float *)&pTVar8->field_0x4 - (*(float *)&pTVar8->field_0x4 - fVar1) * param_2;
    *(float *)pTVar8 = *(float *)pTVar8 - (*(float *)pTVar8 - fVar2) * param_2;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar9 = TParticles<float,3>::GetX
                       (*(TParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar10);
    fVar1 = *(float *)&pTVar9->field_0x8;
    fVar2 = *(float *)&param_7->field_0x8;
    fVar3 = *(float *)param_7;
    fVar4 = *(float *)pTVar9;
    *(float *)&pTVar8->field_0x4 =
         *(float *)&pTVar8->field_0x4 -
         ((*(float *)&pTVar8->field_0x4 - *(float *)&pTVar9->field_0x4) -
         param_4 * *(float *)&param_7->field_0x4) * param_3;
    *(float *)&pTVar8->field_0x8 =
         *(float *)&pTVar8->field_0x8 -
         ((*(float *)&pTVar8->field_0x8 - fVar1) - param_4 * fVar2) * param_3;
    *(float *)pTVar8 = *(float *)pTVar8 - ((*(float *)pTVar8 - fVar4) - param_4 * fVar3) * param_3;
  }
  return;
}

// FPBDAnimDriveConstraint @ 14db920f0

FPBDAnimDriveConstraint * __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::FPBDAnimDriveConstraint
          (FPBDAnimDriveConstraint *this,int param_1,int param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_01;
  FCollectionPropertyConstFacade *this_02;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  int *piVar7;
  int iVar8;
  float *pfVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TArrayView<float_const_,int> local_88;
  FString local_78;
  FString local_68 [4];
  
  this->ParticleOffset = param_1;
  this->AnimationVelocities = param_4;
  this->AnimationPositions = param_3;
  this->ParticleCount = param_2;
  pFVar6 = ::FName::ToString(&AnimDriveStiffnessName,&local_78);
  pFVar6 = ::FString::FString(local_68,pFVar6);
  this_02 = param_6;
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)param_6;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_6,(FString *)&local_88,&AnimDriveStiffnessName,(<lambda_1> *)&param_4,pFVar6,
             (int *)0x0);
  pfVar3 = local_88.DataPtr;
  pwVar10 = L"";
  iVar5 = local_88.ArrayNum;
  pfVar9 = (float *)L"";
  if (iVar5 != 0) {
    pfVar9 = local_88.DataPtr;
  }
  iVar8 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar8 = 0;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)pfVar9);
  this_01 = param_5;
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar4,(FString *)&local_88);
  fVar2 = __real_3f800000;
  if ((iVar5 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_88.DataPtr = (float *)0x0;
    local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  }
  else {
    local_88.DataPtr = *(float **)(lVar1 + 0x10);
    local_88._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  this_00 = &this_02->KeyNameIndices;
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x3f8000003f800000;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,AnimDriveStiffnessName);
  if ((piVar7 != (int *)0x0) && (iVar5 = *piVar7, iVar5 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar5,&this_02->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar5,&this_02->LowValueArray);
    param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)CONCAT44(fVar11,fVar12)
    ;
  }
  fVar11 = __real_447a0000;
  FPBDStiffness::FPBDStiffness
            (&this->Stiffness,(TVector<float,2> *)&param_4,&local_88,param_2,0x10,__real_447a0000,
             fVar2);
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::ToString(&AnimDriveDampingName,&local_78);
  pFVar6 = ::FString::FString(local_68,pFVar6);
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)this_02;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_02,(FString *)&local_88,&AnimDriveDampingName,(<lambda_1> *)&param_4,pFVar6,
             (int *)0x0);
  pfVar3 = local_88.DataPtr;
  iVar5 = 0;
  if (local_88.ArrayNum != 0) {
    iVar5 = local_88.ArrayNum + -1;
    pwVar10 = (wchar_t *)local_88.DataPtr;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar4,(FString *)&local_88);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_88.DataPtr = (float *)0x0;
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  }
  else {
    local_88.DataPtr = *(float **)(lVar1 + 0x10);
    local_88._8_8_ = *(ulonglong *)(lVar1 + 0x18);
  }
  param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x3f8000003f800000;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,AnimDriveDampingName);
  if ((piVar7 != (int *)0x0) && (iVar5 = *piVar7, iVar5 != -1)) {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar5,&this_02->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_02,iVar5,&this_02->LowValueArray);
    param_4 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)CONCAT44(fVar12,fVar13)
    ;
  }
  FPBDStiffness::FPBDStiffness
            (&this->Damping,(TVector<float,2> *)&param_4,&local_88,param_2,0x10,fVar11,fVar2);
  if (pfVar3 != (float *)0x0) {
    FMemory::Free(pfVar3);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,AnimDriveStiffnessName);
  if (piVar7 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar7;
  }
  (this->AnimDriveStiffnessIndex).Index = iVar5;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,AnimDriveDampingName);
  if (piVar7 == (int *)0x0) {
    (this->AnimDriveDampingIndex).Index = -1;
    return this;
  }
  (this->AnimDriveDampingIndex).Index = *piVar7;
  return this;
}

// operator() @ 14dba8080

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l8::<lambda_1>::
operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x18),param_1);
  fVar4 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x60),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticles>
            (this_00,*(FSolverParticles **)((longlong)this + 8),fVar3,fVar4,
             **(float **)((longlong)this + 0x10),param_1,pTVar2,pTVar1);
  return;
}

// operator() @ 14dba8140

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l8::
<lambda_1>::operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x18),param_1);
  fVar4 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x60),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x18),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (this_00,*(FSolverParticlesRange **)((longlong)this + 8),fVar3,fVar4,
             **(float **)((longlong)this + 0x10),param_1,pTVar2,pTVar1);
  return;
}

// operator() @ 14dbad9e0

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l10::<lambda_2>::
operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x18),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticles>
            (this_00,*(FSolverParticles **)((longlong)this + 8),fVar3,
             *(float *)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),param_1,pTVar2,
             pTVar1);
  return;
}

// operator() @ 14dbada80

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l10::
<lambda_2>::operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x18),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (this_00,*(FSolverParticlesRange **)((longlong)this + 8),fVar3,
             *(float *)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),param_1,pTVar2,
             pTVar1);
  return;
}

// operator() @ 14dbaecb0

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l15::<lambda_3>::
operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x60),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticles>
            (this_00,*(FSolverParticles **)((longlong)this + 8),**(float **)((longlong)this + 0x10),
             fVar3,**(float **)((longlong)this + 0x18),param_1,pTVar2,pTVar1);
  return;
}

// operator() @ 14dbaed50

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l15::
<lambda_3>::operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  float fVar3;
  
  fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                    ((FPBDWeightMap *)(*(longlong *)this + 0x60),param_1);
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x20),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (this_00,*(FSolverParticlesRange **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),fVar3,**(float **)((longlong)this + 0x18),param_1,
             pTVar2,pTVar1);
  return;
}

// operator() @ 14dbaf9b0

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_4>::
operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x30),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticles>
            (this_00,*(FSolverParticles **)((longlong)this + 8),**(float **)((longlong)this + 0x10),
             **(float **)((longlong)this + 0x18),**(float **)((longlong)this + 0x20),param_1,pTVar2,
             pTVar1);
  return;
}

// operator() @ 14dbafa40

void __thiscall
`Chaos::Softs::FPBDAnimDriveConstraint::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::
<lambda_4>::operator()(void *this,int param_1)

{
  FPBDAnimDriveConstraint *this_00;
  TVector<float,3> *pTVar1;
  TVector<float,3> *pTVar2;
  
  this_00 = *(FPBDAnimDriveConstraint **)this;
  pTVar1 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x30),
                      param_1);
  pTVar2 = TArrayView<Chaos::TVector<float,3>_const_,int>::operator[]
                     (*(TArrayView<Chaos::TVector<float,3>_const_,int> **)((longlong)this + 0x28),
                      param_1);
  Chaos::Softs::FPBDAnimDriveConstraint::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (this_00,*(FSolverParticlesRange **)((longlong)this + 8),
             **(float **)((longlong)this + 0x10),**(float **)((longlong)this + 0x18),
             **(float **)((longlong)this + 0x20),param_1,pTVar2,pTVar1);
  return;
}

// SetProperties @ 14dc15960

void __thiscall
Chaos::Softs::FPBDAnimDriveConstraint::SetProperties
          (FPBDAnimDriveConstraint *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  ECollectionPropertyFlags EVar5;
  bool bVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  byte bVar9;
  TArrayView<unsigned_char_const_,int> *pTVar10;
  undefined8 local_res8;
  TVector2<float>_u_0 local_res20;
  TVector2<float>_u_0 local_138;
  TArrayView<float_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  undefined1 local_110 [40];
  undefined8 local_e8;
  bool local_e0;
  float local_d8;
  undefined8 local_d4;
  int local_cc;
  undefined1 local_c8 [40];
  undefined8 local_a0;
  bool local_98;
  float local_90;
  undefined8 local_8c;
  int local_84;
  
  fVar4 = __real_3f800000;
  iVar2 = (this->AnimDriveStiffnessIndex).Index;
  if (iVar2 != -1) {
    pTVar10 = &param_1->FlagsArray;
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar2,pTVar10);
    if (((EVar5 & Animatable) != None) &&
       (EVar5 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->AnimDriveStiffnessIndex).Index,pTVar10),
       (char)EVar5 < '\0')) {
      if (((this->AnimDriveStiffnessIndex).Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimDriveStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                             ,0xe2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = (this->AnimDriveStiffnessIndex).Index;
      local_res8._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->HighValueArray);
      local_res8._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar2,&param_1->LowValueArray);
      if (((this->AnimDriveStiffnessIndex).Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimDriveStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                             ,0xe2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->AnimDriveStiffnessIndex).Index,pTVar10);
      if ((EVar5 & StringDirty) == None) {
        if (fVar4 <= (float)local_res8) {
          local_res8._0_4_ = fVar4;
        }
        if (fVar4 <= local_res8._4_4_) {
          local_res8._4_4_ = fVar4;
        }
        if ((float)local_res8 <= 0.0) {
          local_res8._0_4_ = 0.0;
        }
        if (local_res8._4_4_ <= 0.0) {
          local_res8._4_4_ = 0.0;
        }
        if (((float)local_res8 == *(float *)&(this->Stiffness)._padding_) &&
           (local_res8._4_4_ == *(float *)((longlong)&(this->Stiffness)._padding_ + 4))) {
          (this->Stiffness)._padding_ = (longlong)local_res8;
          plVar1 = &(this->Stiffness)._padding_;
          *(char *)plVar1 = (char)*plVar1;
        }
        else {
          (this->Stiffness)._padding_ = (longlong)local_res8;
          plVar1 = &(this->Stiffness)._padding_;
          *(byte *)plVar1 = (byte)*plVar1 | 1;
        }
      }
      else {
        if (((this->AnimDriveStiffnessIndex).Index == -1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AnimDriveStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                               ,0xe2,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->AnimDriveStiffnessIndex).Index,&param_1->StringValueArray
                           );
        iVar2 = this->ParticleCount;
        pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar7);
        if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_130.DataPtr = (float *)0x0;
          local_130._8_8_ = (ulonglong)(uint)local_130._12_4_ << 0x20;
        }
        else {
          local_130.DataPtr = *(float **)&pTVar8->field_0x10;
          local_130._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
        }
        local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap
                  ((FPBDWeightMap *)local_110,(TVector<float,2> *)&local_res20._s_0,&local_130,iVar2
                   ,0x10);
        if (fVar4 <= (float)local_res8) {
          local_res8._0_4_ = fVar4;
        }
        if (fVar4 <= local_res8._4_4_) {
          local_res8._4_4_ = fVar4;
        }
        local_110._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        local_d8 = 1000.0;
        local_d4._0_4_ = 6.9077554;
        local_d4._4_4_ = 0.0;
        local_cc = 0;
        if ((float)local_res8 <= 0.0) {
          local_res8._0_4_ = 0.0;
        }
        if (local_res8._4_4_ <= 0.0) {
          local_res8._4_4_ = 0.0;
        }
        if (((float)local_e8 == (float)local_res8) && (local_e8._4_4_ == local_res8._4_4_)) {
          bVar9 = 0;
        }
        else {
          bVar9 = 1;
        }
        local_e0 = (bool)(local_e0 | bVar9);
        local_e8 = local_res8;
        FPBDStiffness::operator=(&this->Stiffness,(FPBDStiffness *)local_110);
        if ((FScriptContainerElement *)local_110._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_110._24_8_);
        }
        if ((FScriptContainerElement *)local_110._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_110._8_8_);
        }
      }
    }
  }
  pTVar10 = &param_1->FlagsArray;
  iVar2 = (this->AnimDriveDampingIndex).Index;
  if (((iVar2 != -1) &&
      (EVar5 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar2,pTVar10), (EVar5 & Animatable) != None)) &&
     (EVar5 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->AnimDriveDampingIndex).Index,pTVar10), (char)EVar5 < '\0'))
  {
    if (((this->AnimDriveDampingIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimDriveDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                           ,0xe3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = (this->AnimDriveDampingIndex).Index;
    local_res8._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar2,&param_1->LowValueArray);
    if (((this->AnimDriveDampingIndex).Index == -1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AnimDriveDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                           ,0xe3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar5 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->AnimDriveDampingIndex).Index,pTVar10);
    if ((EVar5 & StringDirty) == None) {
      if (fVar4 <= (float)local_res8) {
        local_res8._0_4_ = fVar4;
      }
      if (fVar4 <= local_res8._4_4_) {
        local_res8._4_4_ = fVar4;
      }
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (local_res8._4_4_ <= 0.0) {
        local_res8._4_4_ = 0.0;
      }
      if (((float)local_res8 == *(float *)&(this->Damping)._padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&(this->Damping)._padding_ + 4))) {
        bVar9 = 0;
      }
      else {
        bVar9 = 1;
      }
      plVar1 = &(this->Damping)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 | bVar9;
      (this->Damping)._padding_ = (longlong)local_res8;
    }
    else {
      if (((this->AnimDriveDampingIndex).Index == -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AnimDriveDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDAnimDriveConstraint.h"
                             ,0xe3,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->AnimDriveDampingIndex).Index,&param_1->StringValueArray);
      iVar2 = this->ParticleCount;
      pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar7);
      if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_120.DataPtr = (float *)0x0;
        local_120._8_8_ = (ulonglong)(uint)local_120._12_4_ << 0x20;
      }
      else {
        local_120.DataPtr = *(float **)&pTVar8->field_0x10;
        local_120._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
      }
      local_138 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap
                ((FPBDWeightMap *)local_c8,(TVector<float,2> *)&local_138._s_0,&local_120,iVar2,0x10
                );
      if (fVar4 <= (float)local_res8) {
        local_res8._0_4_ = fVar4;
      }
      if (fVar4 <= local_res8._4_4_) {
        local_res8._4_4_ = fVar4;
      }
      local_c8._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      local_90 = 1000.0;
      local_8c._0_4_ = 6.9077554;
      local_8c._4_4_ = 0.0;
      local_84 = 0;
      if ((float)local_res8 <= 0.0) {
        local_res8._0_4_ = 0.0;
      }
      if (local_res8._4_4_ <= 0.0) {
        local_res8._4_4_ = 0.0;
      }
      if (((float)local_a0 == (float)local_res8) && (local_a0._4_4_ == local_res8._4_4_)) {
        bVar9 = 0;
      }
      else {
        bVar9 = 1;
      }
      local_98 = (bool)(local_98 | bVar9);
      local_a0 = local_res8;
      FPBDStiffness::operator=(&this->Damping,(FPBDStiffness *)local_c8);
      if ((FScriptContainerElement *)local_c8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._24_8_);
      }
      if ((FScriptContainerElement *)local_c8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_c8._8_8_);
      }
    }
  }
  return;
}

