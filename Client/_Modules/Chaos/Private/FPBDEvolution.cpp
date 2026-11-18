// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 59

// GetGravity @ 143a6b290

TVector<float,3> * __thiscall
Chaos::Softs::FPBDEvolution::GetGravity(FPBDEvolution *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  if (*(uint *)&this->field_0x18 <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupId < TArrayCollection::Size()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)
         (*(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + (longlong)(int)param_1 * 0xc)
  ;
}

// ResetConstraintRules @ 143a8f890

void __thiscall Chaos::Softs::FPBDEvolution::ResetConstraintRules(FPBDEvolution *this)

{
  int *piVar1;
  int iVar2;
  TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *pTVar3;
  
  piVar1 = &(this->MConstraintInits).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
           (this->MConstraintInits).AllocatorInstance.Data;
  iVar2 = (this->MConstraintInits).ArrayNum;
  if ((this->MConstraintInits).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintInits).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->MConstraintInits).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintInits).ArrayNum = 0;
  }
  piVar1 = &(this->MConstraintRules).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
           (this->MConstraintRules).AllocatorInstance.Data;
  iVar2 = (this->MConstraintRules).ArrayNum;
  if ((this->MConstraintRules).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintRules).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->MConstraintRules).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintRules).ArrayNum = 0;
  }
  piVar1 = &(this->MPostCollisionConstraintRules).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
           (this->MPostCollisionConstraintRules).AllocatorInstance.Data;
  iVar2 = (this->MPostCollisionConstraintRules).ArrayNum;
  if ((this->MPostCollisionConstraintRules).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MPostCollisionConstraintRules).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->MPostCollisionConstraintRules).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MPostCollisionConstraintRules).ArrayNum = 0;
  }
  piVar1 = &(this->MConstraintPostprocessings).ArrayMax;
  pTVar3 = (TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
           (this->MConstraintPostprocessings).AllocatorInstance.Data;
  iVar2 = (this->MConstraintPostprocessings).ArrayNum;
  if ((this->MConstraintPostprocessings).ArrayMax < 0) {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintPostprocessings).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,0,&(this->MConstraintPostprocessings).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>(pTVar3,iVar2)
    ;
    (this->MConstraintPostprocessings).ArrayNum = 0;
  }
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::Reset(&this->MConstraintInitsActiveView,0);
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::Reset(&this->MConstraintRulesActiveView,0);
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::Reset(&this->MPostCollisionConstraintRulesActiveView,0);
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::Reset(&this->MConstraintPostprocessingsActiveView,0);
  return;
}

// SetGravity @ 143a91e70

void __thiscall
Chaos::Softs::FPBDEvolution::SetGravity(FPBDEvolution *this,TVector<float,3> *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if ((*(uint *)&this->field_0x18 <= param_2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GroupId < TArrayCollection::Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDEvolution.h"
                         ,0x90,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined4 *)&param_1->field_0x8;
  uVar6 = 0;
  if ((int)param_2 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
  *(undefined8 *)(lVar3 + (longlong)(int)param_2 * 0xc) = uVar1;
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)param_2 * 0xc) = uVar2;
  return;
}

// PreIterationUpdate<1,1,1> @ 143c38c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces> FVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar14;
  uint uVar15;
  TFunctionRef<void___cdecl(int)> *pTVar16;
  FNameEntryId FVar17;
  longlong lVar18;
  longlong lVar19;
  FName FVar20;
  FName FVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res8 [2];
  int local_res18 [4];
  FSolverParticles *local_2a8;
  undefined4 local_2a0 [2];
  FVelocityAndPressureField *local_298;
  uint local_290;
  uint uStack_28c;
  FColor_u_0 local_288;
  FColor_u_0 local_284;
  FColor_u_0 local_280 [2];
  longlong local_278;
  longlong local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_240;
  FName local_230;
  LARGE_INTEGER local_220;
  LARGE_INTEGER local_218;
  FStatMessage local_210;
  FStatMessage local_200;
  code *local_1f0;
  FPBDEvolution **local_1e8;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  FPBDEvolution *local_1c0;
  int *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FVelocityAndPressureField *local_1a0;
  FPerParticleDampVelocity *local_198;
  float local_190;
  float local_18c;
  float local_188;
  FPerParticleDampVelocity local_178;
  FPBDEvolution *local_138;
  int *local_130;
  longlong local_128;
  longlong local_120;
  FVelocityAndPressureField *local_118;
  FPerParticleDampVelocity *local_110;
  undefined4 *local_108;
  uint *local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  FPBDEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  FPerParticleDampVelocity *local_c0;
  undefined4 *local_b8;
  uint *local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  FName local_98;
  FName local_90;
  FName local_88 [10];
  
  uVar22 = 0;
  uVar15 = uVar22;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar18 = (longlong)(int)local_res8[0];
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = (longlong)(int)local_res8[0];
  local_278 = lVar18 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar18 = (longlong)(int)local_res8[0];
  local_270 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar19 * 0xc;
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_298 = (FVelocityAndPressureField *)
              (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar18 * 0x198);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
                ::__l5::__CpuProfilerEventSpecId299,"ChaosPBDVelocityFieldUpdateForces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
               ::__l5::__CpuProfilerEventSpecId299);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces;
  if (StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)0x0) {
    pFVar9 = ::FName::FName(&local_98,"STAT_ChaosPBDVelocityFieldUpdateForces");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces
                        ,*pFVar9,L"Chaos PBD Velocity Field Update Forces","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  FVar17 = FVar21.ComparisonIndex.Value;
  uVar15 = FVar21.Number;
  if ((FVar17.Value == 0) && (uVar15 == 0)) {
    FVelocityAndPressureField::UpdateForces(local_298,&this->MParticles,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_288.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_288._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar17.Value;
        local_268.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,300);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable != false;
    FVar20 = local_250;
    if (bVar23) {
      local_290 = FVar17.Value;
      uStack_28c = uVar15;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar4 = false;
      FVar20 = FVar21;
    }
    FVelocityAndPressureField::UpdateForces(local_298,&this->MParticles,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar23) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_210.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
        local_210.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_220);
        local_210.StatData.Pad[4] = '\0';
        local_210.StatData.Pad[5] = '\0';
        local_210.StatData.Pad[6] = '\0';
        local_210.StatData.Pad[7] = '\0';
        local_210.StatData.Pad[0] = local_220.s.LowPart._0_1_;
        local_210.StatData.Pad[1] = local_220.s.LowPart._1_1_;
        local_210.StatData.Pad[2] = local_220.s.LowPart._2_1_;
        local_210.StatData.Pad[3] = local_220.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_210);
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
  }
  local_2a8 = &this->MParticles;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar18 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar22 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_178.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar18 * 4);
  local_178.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_178.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_178.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_178.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_178.LocalDampingSpace = CenterOfMass;
  local_178.bPropertyIndicesInitialized = false;
  bVar7 = -1 < CpuChannel->Enabled;
  local_178.AngularCoefficient = local_178.LinearCoefficient;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
                ::__l8::__CpuProfilerEventSpecId307,"ChaosPBDVelocityDampUpdateState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
               ::__l8::__CpuProfilerEventSpecId307);
  }
  FVar11 = StatPtr_STAT_ChaosPBDVelocityDampUpdateState;
  if (StatPtr_STAT_ChaosPBDVelocityDampUpdateState ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_ChaosPBDVelocityDampUpdateState");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityDampUpdateState,
                        *pFVar9,L"Chaos PBD Velocity Damping State Update","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar11;
  bVar4 = false;
  bVar3 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
    FPerParticleDampVelocity::UpdatePositionBasedState(&local_178,local_2a8,local_res18[0],param_3);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_284.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_284._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_260.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x134);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable != false;
    FVar20 = local_240;
    if (bVar23) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar4 = false;
      FVar20 = FVar21;
    }
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_178,&this->MParticles,local_res18[0],param_3);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar23) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_200.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
        local_200.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_218);
        local_200.StatData.Pad[4] = '\0';
        local_200.StatData.Pad[5] = '\0';
        local_200.StatData.Pad[6] = '\0';
        local_200.StatData.Pad[7] = '\0';
        local_200.StatData.Pad[0] = local_218.s.LowPart._0_1_;
        local_200.StatData.Pad[1] = local_218.s.LowPart._1_1_;
        local_200.StatData.Pad[2] = local_218.s.LowPart._2_1_;
        local_200.StatData.Pad[3] = local_218.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_200);
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
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar14 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_88,"STAT_ChaosClothSolverIntegrate");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar3 = false;
  bVar4 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_258.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar23 = true;
      goto LAB_143c394df;
    }
  }
  bVar23 = false;
  FVar21 = local_230;
LAB_143c394df:
  fVar6 = __real_42700000;
  lVar18 = (longlong)(int)local_res8[0];
  local_2a0[0] = 0x42700000;
  uVar15 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar26 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar18 * 4);
  if (__real_3f800000 <= fVar26) {
    fVar26 = __real_3f800000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (fVar26 <= __real_3f7ff972) {
    fVar24 = __real_3f800000;
    fVar25 = param_1;
    if (__real_322bcc77 < fVar26) {
      fVar26 = logf(__real_3f800000 - fVar26);
      fVar24 = expf(fVar26 * fVar6 * param_1);
      fVar25 = (fVar24 - fVar5) / (fVar26 * fVar6);
    }
  }
  else {
    fVar24 = 0.0;
    fVar25 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_d8 = local_278;
      local_d0 = local_270;
      local_c8 = local_298;
      local_c0 = &local_178;
      local_b8 = local_2a0;
      local_b0 = local_res8;
      local_1c8 = &local_e8;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_e8 = this;
      local_e0 = local_res18;
      local_a8 = fVar24;
      local_a4 = fVar25;
      local_a0 = param_1;
    }
    else {
      pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
      local_128 = local_278;
      local_120 = local_270;
      local_118 = local_298;
      local_110 = &local_178;
      local_108 = local_2a0;
      local_100 = local_res8;
      local_1d8 = &local_138;
      local_1e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_138 = this;
      local_130 = local_res18;
      local_f8 = fVar24;
      local_f4 = fVar25;
      local_f0 = param_1;
    }
  }
  else {
    pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1f0;
    local_1b0 = local_278;
    local_1a8 = local_270;
    local_1a0 = local_298;
    local_198 = &local_178;
    local_1e8 = &local_1c0;
    local_1f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1c0 = this;
    local_1b8 = local_res18;
    local_190 = fVar24;
    local_18c = fVar25;
    local_188 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar16,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<1,1,0> @ 143c39810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar11;
  uint uVar12;
  TFunctionRef<void___cdecl(int)> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_250 [2];
  FVelocityAndPressureField *local_248;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  longlong local_238;
  longlong local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_208;
  LARGE_INTEGER local_1f8;
  FStatMessage local_1f0;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  code *local_1c0;
  FPBDEvolution **local_1b8;
  FPBDEvolution *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  FVelocityAndPressureField *local_190;
  undefined2 *local_188;
  float local_180;
  float local_17c;
  float local_178;
  FPBDEvolution *local_170;
  int *local_168;
  longlong local_160;
  longlong local_158;
  FVelocityAndPressureField *local_150;
  undefined2 *local_148;
  undefined4 *local_140;
  uint *local_138;
  float local_130;
  float local_12c;
  float local_128;
  FPBDEvolution *local_120;
  int *local_118;
  longlong local_110;
  longlong local_108;
  FVelocityAndPressureField *local_100;
  undefined2 *local_f8;
  undefined4 *local_f0;
  uint *local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  FName local_d0;
  FName local_c8 [2];
  undefined2 local_b8 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar18 = 0;
  uVar12 = uVar18;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_238 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_230 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_248 = (FVelocityAndPressureField *)
              (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar14 * 0x198);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>(float,int,int,int)___ptr64'
                ::__l5::__CpuProfilerEventSpecId299,"ChaosPBDVelocityFieldUpdateForces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>(float,int,int,int)___ptr64'
               ::__l5::__CpuProfilerEventSpecId299);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces;
  if (StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)0x0) {
    pFVar9 = ::FName::FName(&local_d0,"STAT_ChaosPBDVelocityFieldUpdateForces");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces
                        ,*pFVar9,L"Chaos PBD Velocity Field Update Forces","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
    FVelocityAndPressureField::UpdateForces(local_248,&this->MParticles,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_228.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,300);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar19 = FThreadStats::bPrimaryEnable != false;
    FVar16 = local_218;
    if (bVar19) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = false;
      FVar16 = FVar17;
    }
    FVelocityAndPressureField::UpdateForces(local_248,&this->MParticles,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_1f0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
        local_1f0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1f0.StatData.Pad[4] = '\0';
        local_1f0.StatData.Pad[5] = '\0';
        local_1f0.StatData.Pad[6] = '\0';
        local_1f0.StatData.Pad[7] = '\0';
        local_1f0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1f0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1f0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1f0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_1f0);
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
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar14 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar18 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar14 * 4);
  local_88 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_80 = _UNK_15060db28;
  local_b8[0] = 0;
  bVar7 = -1 < CpuChannel->Enabled;
  local_b0 = local_b4;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar11 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_c8,"STAT_ChaosClothSolverIntegrate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_220.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar19 = true;
      goto LAB_143c39e28;
    }
  }
  bVar19 = false;
  FVar17 = local_208;
LAB_143c39e28:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_250[0] = 0x42700000;
  uVar12 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar22 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar22 <= __real_3f7ff972) {
    fVar20 = __real_3f800000;
    fVar21 = param_1;
    if (__real_322bcc77 < fVar22) {
      fVar22 = logf(__real_3f800000 - fVar22);
      fVar20 = expf(fVar22 * fVar6 * param_1);
      fVar21 = (fVar20 - fVar5) / (fVar22 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1c0;
      local_110 = local_238;
      local_108 = local_230;
      local_100 = local_248;
      local_f8 = local_b8;
      local_f0 = local_250;
      local_e8 = local_res8;
      local_1b8 = &local_120;
      local_1c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_120 = this;
      local_118 = local_res18;
      local_e0 = fVar20;
      local_dc = fVar21;
      local_d8 = param_1;
    }
    else {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_160 = local_238;
      local_158 = local_230;
      local_150 = local_248;
      local_148 = local_b8;
      local_140 = local_250;
      local_138 = local_res8;
      local_1c8 = &local_170;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_170 = this;
      local_168 = local_res18;
      local_130 = fVar20;
      local_12c = fVar21;
      local_128 = param_1;
    }
  }
  else {
    pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
    local_1a0 = local_238;
    local_198 = local_230;
    local_190 = local_248;
    local_188 = local_b8;
    local_1d8 = &local_1b0;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1b0 = this;
    local_1a8 = local_res18;
    local_180 = fVar20;
    local_17c = fVar21;
    local_178 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar13,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<1,0,1> @ 143c3a130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar11;
  uint uVar12;
  TFunctionRef<void___cdecl(int)> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_250;
  FColor_u_0 local_24c;
  FColor_u_0 local_248 [2];
  longlong local_240;
  longlong local_238;
  longlong local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_208;
  LARGE_INTEGER local_1f8;
  FStatMessage local_1f0;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  code *local_1c0;
  FPBDEvolution **local_1b8;
  FPBDEvolution *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  FPerParticleDampVelocity *local_188;
  float local_180;
  float local_17c;
  float local_178;
  FPerParticleDampVelocity local_168;
  FPBDEvolution *local_128;
  int *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  FPerParticleDampVelocity *local_100;
  undefined4 *local_f8;
  uint *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  FPBDEvolution *local_d8;
  int *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  FPerParticleDampVelocity *local_b0;
  undefined4 *local_a8;
  uint *local_a0;
  float local_98;
  float local_94;
  float local_90;
  FName local_88;
  FName local_80 [9];
  
  uVar18 = 0;
  uVar12 = uVar18;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_240 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_238 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_230 = lVar14 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar18 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_168.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar15 * 4);
  local_168.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_168.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_168.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_168.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_168.LocalDampingSpace = CenterOfMass;
  local_168.bPropertyIndicesInitialized = false;
  bVar7 = -1 < CpuChannel->Enabled;
  local_168.AngularCoefficient = local_168.LinearCoefficient;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>(float,int,int,int)___ptr64'
                ::__l8::__CpuProfilerEventSpecId307,"ChaosPBDVelocityDampUpdateState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>(float,int,int,int)___ptr64'
               ::__l8::__CpuProfilerEventSpecId307);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityDampUpdateState;
  if (StatPtr_STAT_ChaosPBDVelocityDampUpdateState ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)0x0) {
    pFVar9 = ::FName::FName(&local_88,"STAT_ChaosPBDVelocityDampUpdateState");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityDampUpdateState,
                        *pFVar9,L"Chaos PBD Velocity Damping State Update","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_168,&this->MParticles,local_res18[0],param_3);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_24c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_24c._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_228.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x134);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar19 = FThreadStats::bPrimaryEnable != false;
    FVar16 = local_218;
    if (bVar19) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = false;
      FVar16 = FVar17;
    }
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_168,&this->MParticles,local_res18[0],param_3);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_1f0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
        local_1f0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1f0.StatData.Pad[4] = '\0';
        local_1f0.StatData.Pad[5] = '\0';
        local_1f0.StatData.Pad[6] = '\0';
        local_1f0.StatData.Pad[7] = '\0';
        local_1f0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1f0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1f0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1f0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_1f0);
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
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar11 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_80,"STAT_ChaosClothSolverIntegrate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_248[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_248[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_220.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar19 = true;
      goto LAB_143c3a746;
    }
  }
  bVar19 = false;
  FVar17 = local_208;
LAB_143c3a746:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_250 = 0x42700000;
  uVar12 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar22 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar22 <= __real_3f7ff972) {
    fVar20 = __real_3f800000;
    fVar21 = param_1;
    if (__real_322bcc77 < fVar22) {
      fVar22 = logf(__real_3f800000 - fVar22);
      fVar20 = expf(fVar22 * fVar6 * param_1);
      fVar21 = (fVar20 - fVar5) / (fVar22 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1c0;
      local_c8 = local_240;
      local_c0 = local_238;
      local_b8 = local_230;
      local_b0 = &local_168;
      local_a8 = &local_250;
      local_a0 = local_res8;
      local_1b8 = &local_d8;
      local_1c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_d8 = this;
      local_d0 = local_res18;
      local_98 = fVar20;
      local_94 = fVar21;
      local_90 = param_1;
    }
    else {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_118 = local_240;
      local_110 = local_238;
      local_108 = local_230;
      local_100 = &local_168;
      local_f8 = &local_250;
      local_f0 = local_res8;
      local_1c8 = &local_128;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_128 = this;
      local_120 = local_res18;
      local_e8 = fVar20;
      local_e4 = fVar21;
      local_e0 = param_1;
    }
  }
  else {
    pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
    local_1a0 = local_240;
    local_198 = local_238;
    local_190 = local_230;
    local_188 = &local_168;
    local_1d8 = &local_1b0;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1b0 = this;
    local_1a8 = local_res18;
    local_180 = fVar20;
    local_17c = fVar21;
    local_178 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar13,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<1,0,0> @ 143c3aa60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar10;
  uint uVar11;
  TFunctionRef<void___cdecl(int)> *pTVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_218;
  FColor_u_0 local_214;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  FName local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  FName local_1e8;
  code *local_1d8;
  FPBDEvolution **local_1d0;
  code *local_1c8;
  FPBDEvolution **local_1c0;
  code *local_1b8;
  FPBDEvolution **local_1b0;
  FPBDEvolution *local_1a8;
  int *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined2 *local_180;
  float local_178;
  float local_174;
  float local_170;
  FPBDEvolution *local_168;
  int *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined2 *local_140;
  undefined4 *local_138;
  uint *local_130;
  float local_128;
  float local_124;
  float local_120;
  FPBDEvolution *local_118;
  int *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined2 *local_f0;
  undefined4 *local_e8;
  uint *local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  FName local_c8 [2];
  undefined2 local_b8 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar17 = 0;
  uVar11 = uVar17;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_210 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_208 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_200 = lVar14 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar17 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar15 * 4);
  local_88 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_80 = _UNK_15060db28;
  local_b8[0] = 0;
  bVar7 = -1 < CpuChannel->Enabled;
  local_b0 = local_b4;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar10 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_c8,"STAT_ChaosClothSolverIntegrate");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  FVar13 = FVar16.ComparisonIndex.Value;
  uVar11 = FVar16.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_214.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_214._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar13.Value;
        local_1f8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f0 = FVar13.Value;
      uStack_1ec = uVar11;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      goto LAB_143c3ae18;
    }
  }
  bVar3 = false;
  FVar16 = local_1e8;
LAB_143c3ae18:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_218 = 0x42700000;
  uVar11 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar18 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar18) {
    fVar18 = __real_3f800000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (fVar18 <= __real_3f7ff972) {
    fVar20 = param_1;
    fVar19 = __real_3f800000;
    if (__real_322bcc77 < fVar18) {
      fVar18 = logf(__real_3f800000 - fVar18);
      fVar19 = expf(fVar18 * fVar6 * param_1);
      fVar20 = (fVar19 - fVar5) / (fVar18 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar19 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1b8;
      local_108 = local_210;
      local_100 = local_208;
      local_f8 = local_200;
      local_f0 = local_b8;
      local_e8 = &local_218;
      local_e0 = local_res8;
      local_1b0 = &local_118;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_118 = this;
      local_110 = local_res18;
      local_d8 = fVar19;
      local_d4 = fVar20;
      local_d0 = param_1;
    }
    else {
      pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1c8;
      local_158 = local_210;
      local_150 = local_208;
      local_148 = local_200;
      local_140 = local_b8;
      local_138 = &local_218;
      local_130 = local_res8;
      local_1c0 = &local_168;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_168 = this;
      local_160 = local_res18;
      local_128 = fVar19;
      local_124 = fVar20;
      local_120 = param_1;
    }
  }
  else {
    pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
    local_198 = local_210;
    local_190 = local_208;
    local_188 = local_200;
    local_180 = local_b8;
    local_1d0 = &local_1a8;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1a8 = this;
    local_1a0 = local_res18;
    local_178 = fVar19;
    local_174 = fVar20;
    local_170 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar12,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<0,1,1> @ 143c3b100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces> FVar10;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar14;
  uint uVar15;
  TFunctionRef<void___cdecl(int)> *pTVar16;
  FNameEntryId FVar17;
  longlong lVar18;
  longlong lVar19;
  FName FVar20;
  FName FVar21;
  uint uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res8 [2];
  int local_res18 [4];
  FSolverParticles *local_2a8;
  undefined4 local_2a0 [2];
  FVelocityAndPressureField *local_298;
  uint local_290;
  uint uStack_28c;
  FColor_u_0 local_288;
  FColor_u_0 local_284;
  FColor_u_0 local_280 [2];
  longlong local_278;
  longlong local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_240;
  FName local_230;
  LARGE_INTEGER local_220;
  LARGE_INTEGER local_218;
  FStatMessage local_210;
  FStatMessage local_200;
  code *local_1f0;
  FPBDEvolution **local_1e8;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  FPBDEvolution *local_1c0;
  int *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FVelocityAndPressureField *local_1a0;
  FPerParticleDampVelocity *local_198;
  float local_190;
  float local_18c;
  float local_188;
  FPerParticleDampVelocity local_178;
  FPBDEvolution *local_138;
  int *local_130;
  longlong local_128;
  longlong local_120;
  FVelocityAndPressureField *local_118;
  FPerParticleDampVelocity *local_110;
  undefined4 *local_108;
  uint *local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  FPBDEvolution *local_e8;
  int *local_e0;
  longlong local_d8;
  longlong local_d0;
  FVelocityAndPressureField *local_c8;
  FPerParticleDampVelocity *local_c0;
  undefined4 *local_b8;
  uint *local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  FName local_98;
  FName local_90;
  FName local_88 [10];
  
  uVar22 = 0;
  uVar15 = uVar22;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar18 = (longlong)(int)local_res8[0];
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar19 = (longlong)(int)local_res8[0];
  local_278 = lVar18 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar18 = (longlong)(int)local_res8[0];
  local_270 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar19 * 0xc;
  uVar15 = uVar22;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_298 = (FVelocityAndPressureField *)
              (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar18 * 0x198);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
                ::__l5::__CpuProfilerEventSpecId299,"ChaosPBDVelocityFieldUpdateForces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
               ::__l5::__CpuProfilerEventSpecId299);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces;
  if (StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)0x0) {
    pFVar9 = ::FName::FName(&local_98,"STAT_ChaosPBDVelocityFieldUpdateForces");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces
                        ,*pFVar9,L"Chaos PBD Velocity Field Update Forces","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_250.ComparisonIndex.Value = 0;
  local_250.Number = 0;
  FVar17 = FVar21.ComparisonIndex.Value;
  uVar15 = FVar21.Number;
  if ((FVar17.Value == 0) && (uVar15 == 0)) {
    FVelocityAndPressureField::UpdateForces(local_298,&this->MParticles,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_288.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_288._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar17.Value;
        local_268.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,300);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable != false;
    FVar20 = local_250;
    if (bVar23) {
      local_290 = FVar17.Value;
      uStack_28c = uVar15;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar4 = false;
      FVar20 = FVar21;
    }
    FVelocityAndPressureField::UpdateForces(local_298,&this->MParticles,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar23) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_210.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
        local_210.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_220);
        local_210.StatData.Pad[4] = '\0';
        local_210.StatData.Pad[5] = '\0';
        local_210.StatData.Pad[6] = '\0';
        local_210.StatData.Pad[7] = '\0';
        local_210.StatData.Pad[0] = local_220.s.LowPart._0_1_;
        local_210.StatData.Pad[1] = local_220.s.LowPart._1_1_;
        local_210.StatData.Pad[2] = local_220.s.LowPart._2_1_;
        local_210.StatData.Pad[3] = local_220.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_210);
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
  }
  local_2a8 = &this->MParticles;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar18 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar22 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_178.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar18 * 4);
  local_178.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_178.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_178.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_178.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_178.LocalDampingSpace = CenterOfMass;
  local_178.bPropertyIndicesInitialized = false;
  bVar7 = -1 < CpuChannel->Enabled;
  local_178.AngularCoefficient = local_178.LinearCoefficient;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
                ::__l8::__CpuProfilerEventSpecId307,"ChaosPBDVelocityDampUpdateState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
               ::__l8::__CpuProfilerEventSpecId307);
  }
  FVar11 = StatPtr_STAT_ChaosPBDVelocityDampUpdateState;
  if (StatPtr_STAT_ChaosPBDVelocityDampUpdateState ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)0x0) {
    pFVar9 = ::FName::FName(&local_90,"STAT_ChaosPBDVelocityDampUpdateState");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityDampUpdateState,
                        *pFVar9,L"Chaos PBD Velocity Damping State Update","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar11;
  bVar4 = false;
  bVar3 = false;
  local_240.ComparisonIndex.Value = 0;
  local_240.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
    FPerParticleDampVelocity::UpdatePositionBasedState(&local_178,local_2a8,local_res18[0],param_3);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_284.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_284._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_260.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x134);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar23 = FThreadStats::bPrimaryEnable != false;
    FVar20 = local_240;
    if (bVar23) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar4 = false;
      FVar20 = FVar21;
    }
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_178,&this->MParticles,local_res18[0],param_3);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar23) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_200.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
        local_200.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_218);
        local_200.StatData.Pad[4] = '\0';
        local_200.StatData.Pad[5] = '\0';
        local_200.StatData.Pad[6] = '\0';
        local_200.StatData.Pad[7] = '\0';
        local_200.StatData.Pad[0] = local_218.s.LowPart._0_1_;
        local_200.StatData.Pad[1] = local_218.s.LowPart._1_1_;
        local_200.StatData.Pad[2] = local_218.s.LowPart._2_1_;
        local_200.StatData.Pad[3] = local_218.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar12,&local_200);
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
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar14 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_88,"STAT_ChaosClothSolverIntegrate");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar3 = false;
  bVar4 = false;
  local_230.ComparisonIndex.Value = 0;
  local_230.Number = 0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_258.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_258.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_258,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar23 = true;
      goto LAB_143c3b98f;
    }
  }
  bVar23 = false;
  FVar21 = local_230;
LAB_143c3b98f:
  fVar6 = __real_42700000;
  lVar18 = (longlong)(int)local_res8[0];
  local_2a0[0] = 0x42700000;
  uVar15 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar15 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar26 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar18 * 4);
  if (__real_3f800000 <= fVar26) {
    fVar26 = __real_3f800000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (fVar26 <= __real_3f7ff972) {
    fVar24 = __real_3f800000;
    fVar25 = param_1;
    if (__real_322bcc77 < fVar26) {
      fVar26 = logf(__real_3f800000 - fVar26);
      fVar24 = expf(fVar26 * fVar6 * param_1);
      fVar25 = (fVar24 - fVar5) / (fVar26 * fVar6);
    }
  }
  else {
    fVar24 = 0.0;
    fVar25 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_d8 = local_278;
      local_d0 = local_270;
      local_c8 = local_298;
      local_c0 = &local_178;
      local_b8 = local_2a0;
      local_b0 = local_res8;
      local_1c8 = &local_e8;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_e8 = this;
      local_e0 = local_res18;
      local_a8 = fVar24;
      local_a4 = fVar25;
      local_a0 = param_1;
    }
    else {
      pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
      local_128 = local_278;
      local_120 = local_270;
      local_118 = local_298;
      local_110 = &local_178;
      local_108 = local_2a0;
      local_100 = local_res8;
      local_1d8 = &local_138;
      local_1e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_138 = this;
      local_130 = local_res18;
      local_f8 = fVar24;
      local_f4 = fVar25;
      local_f0 = param_1;
    }
  }
  else {
    pTVar16 = (TFunctionRef<void___cdecl(int)> *)&local_1f0;
    local_1b0 = local_278;
    local_1a8 = local_270;
    local_1a0 = local_298;
    local_198 = &local_178;
    local_1e8 = &local_1c0;
    local_1f0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1c0 = this;
    local_1b8 = local_res18;
    local_190 = fVar24;
    local_18c = fVar25;
    local_188 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar16,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar23) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<0,1,0> @ 143c3bcc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar11;
  uint uVar12;
  TFunctionRef<void___cdecl(int)> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_250 [2];
  FVelocityAndPressureField *local_248;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  longlong local_238;
  longlong local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_208;
  LARGE_INTEGER local_1f8;
  FStatMessage local_1f0;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  code *local_1c0;
  FPBDEvolution **local_1b8;
  FPBDEvolution *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  FVelocityAndPressureField *local_190;
  undefined2 *local_188;
  float local_180;
  float local_17c;
  float local_178;
  FPBDEvolution *local_170;
  int *local_168;
  longlong local_160;
  longlong local_158;
  FVelocityAndPressureField *local_150;
  undefined2 *local_148;
  undefined4 *local_140;
  uint *local_138;
  float local_130;
  float local_12c;
  float local_128;
  FPBDEvolution *local_120;
  int *local_118;
  longlong local_110;
  longlong local_108;
  FVelocityAndPressureField *local_100;
  undefined2 *local_f8;
  undefined4 *local_f0;
  uint *local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  FName local_d0;
  FName local_c8 [2];
  undefined2 local_b8 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar18 = 0;
  uVar12 = uVar18;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_238 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_230 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_248 = (FVelocityAndPressureField *)
              (*(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8 + lVar14 * 0x198);
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>(float,int,int,int)___ptr64'
                ::__l5::__CpuProfilerEventSpecId299,"ChaosPBDVelocityFieldUpdateForces",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>(float,int,int,int)___ptr64'
               ::__l5::__CpuProfilerEventSpecId299);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces;
  if (StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)0x0) {
    pFVar9 = ::FName::FName(&local_d0,"STAT_ChaosPBDVelocityFieldUpdateForces");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityFieldUpdateForces>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityFieldUpdateForces
                        ,*pFVar9,L"Chaos PBD Velocity Field Update Forces","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
    FVelocityAndPressureField::UpdateForces(local_248,&this->MParticles,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_228.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,300);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar19 = FThreadStats::bPrimaryEnable != false;
    FVar16 = local_218;
    if (bVar19) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = false;
      FVar16 = FVar17;
    }
    FVelocityAndPressureField::UpdateForces(local_248,&this->MParticles,param_1);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_1f0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
        local_1f0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1f0.StatData.Pad[4] = '\0';
        local_1f0.StatData.Pad[5] = '\0';
        local_1f0.StatData.Pad[6] = '\0';
        local_1f0.StatData.Pad[7] = '\0';
        local_1f0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1f0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1f0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1f0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_1f0);
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
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar14 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar18 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar14 * 4);
  local_88 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_80 = _UNK_15060db28;
  local_b8[0] = 0;
  bVar7 = -1 < CpuChannel->Enabled;
  local_b0 = local_b4;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar11 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_c8,"STAT_ChaosClothSolverIntegrate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_220.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar19 = true;
      goto LAB_143c3c2d8;
    }
  }
  bVar19 = false;
  FVar17 = local_208;
LAB_143c3c2d8:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_250[0] = 0x42700000;
  uVar12 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar22 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar22 <= __real_3f7ff972) {
    fVar20 = __real_3f800000;
    fVar21 = param_1;
    if (__real_322bcc77 < fVar22) {
      fVar22 = logf(__real_3f800000 - fVar22);
      fVar20 = expf(fVar22 * fVar6 * param_1);
      fVar21 = (fVar20 - fVar5) / (fVar22 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1c0;
      local_110 = local_238;
      local_108 = local_230;
      local_100 = local_248;
      local_f8 = local_b8;
      local_f0 = local_250;
      local_e8 = local_res8;
      local_1b8 = &local_120;
      local_1c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_120 = this;
      local_118 = local_res18;
      local_e0 = fVar20;
      local_dc = fVar21;
      local_d8 = param_1;
    }
    else {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_160 = local_238;
      local_158 = local_230;
      local_150 = local_248;
      local_148 = local_b8;
      local_140 = local_250;
      local_138 = local_res8;
      local_1c8 = &local_170;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_170 = this;
      local_168 = local_res18;
      local_130 = fVar20;
      local_12c = fVar21;
      local_128 = param_1;
    }
  }
  else {
    pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
    local_1a0 = local_238;
    local_198 = local_230;
    local_190 = local_248;
    local_188 = local_b8;
    local_1d8 = &local_1b0;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1b0 = this;
    local_1a8 = local_res18;
    local_180 = fVar20;
    local_17c = fVar21;
    local_178 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar13,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<0,0,1> @ 143c3c5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar11;
  uint uVar12;
  TFunctionRef<void___cdecl(int)> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  FName FVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_250;
  FColor_u_0 local_24c;
  FColor_u_0 local_248 [2];
  longlong local_240;
  longlong local_238;
  longlong local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_208;
  LARGE_INTEGER local_1f8;
  FStatMessage local_1f0;
  code *local_1e0;
  FPBDEvolution **local_1d8;
  code *local_1d0;
  FPBDEvolution **local_1c8;
  code *local_1c0;
  FPBDEvolution **local_1b8;
  FPBDEvolution *local_1b0;
  int *local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  FPerParticleDampVelocity *local_188;
  float local_180;
  float local_17c;
  float local_178;
  FPerParticleDampVelocity local_168;
  FPBDEvolution *local_128;
  int *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  FPerParticleDampVelocity *local_100;
  undefined4 *local_f8;
  uint *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  FPBDEvolution *local_d8;
  int *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  FPerParticleDampVelocity *local_b0;
  undefined4 *local_a8;
  uint *local_a0;
  float local_98;
  float local_94;
  float local_90;
  FName local_88;
  FName local_80 [9];
  
  uVar18 = 0;
  uVar12 = uVar18;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar12 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_240 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_238 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar12 = uVar18;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_230 = lVar14 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar18 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_168.LinearCoefficient =
       *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar15 * 4);
  local_168.LocalDampingCoefficientIndex.Index = ___xmm_ffffffffffffffffffffffffffffffff;
  local_168.LocalDampingLinearCoefficientIndex.Index = _UNK_15060db24;
  local_168.LocalDampingAngularCoefficientIndex.Index = _UNK_15060db28;
  local_168.LocalDampingSpaceIndex.Index = _UNK_15060db2c;
  local_168.LocalDampingSpace = CenterOfMass;
  local_168.bPropertyIndicesInitialized = false;
  bVar7 = -1 < CpuChannel->Enabled;
  local_168.AngularCoefficient = local_168.LinearCoefficient;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>(float,int,int,int)___ptr64'
                ::__l8::__CpuProfilerEventSpecId307,"ChaosPBDVelocityDampUpdateState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x133);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>(float,int,int,int)___ptr64'
               ::__l8::__CpuProfilerEventSpecId307);
  }
  FVar10 = StatPtr_STAT_ChaosPBDVelocityDampUpdateState;
  if (StatPtr_STAT_ChaosPBDVelocityDampUpdateState ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)0x0) {
    pFVar9 = ::FName::FName(&local_88,"STAT_ChaosPBDVelocityDampUpdateState");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDVelocityDampUpdateState>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDVelocityDampUpdateState,
                        *pFVar9,L"Chaos PBD Velocity Damping State Update","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar4 = false;
  bVar3 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_168,&this->MParticles,local_res18[0],param_3);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_24c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_24c._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_228.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x134);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar19 = FThreadStats::bPrimaryEnable != false;
    FVar16 = local_218;
    if (bVar19) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = false;
      FVar16 = FVar17;
    }
    FPerParticleDampVelocity::UpdatePositionBasedState
              (&local_168,&this->MParticles,local_res18[0],param_3);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_1f0.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
        local_1f0.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1f0.StatData.Pad[4] = '\0';
        local_1f0.StatData.Pad[5] = '\0';
        local_1f0.StatData.Pad[6] = '\0';
        local_1f0.StatData.Pad[7] = '\0';
        local_1f0.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1f0.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1f0.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1f0.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_1f0);
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
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar11 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_80,"STAT_ChaosClothSolverIntegrate");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar3 = false;
  bVar4 = false;
  local_208.ComparisonIndex.Value = 0;
  local_208.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_248[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_248[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_220.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar19 = true;
      goto LAB_143c3cbf6;
    }
  }
  bVar19 = false;
  FVar17 = local_208;
LAB_143c3cbf6:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_250 = 0x42700000;
  uVar12 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar12 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar22 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar22) {
    fVar22 = __real_3f800000;
  }
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  if (fVar22 <= __real_3f7ff972) {
    fVar20 = __real_3f800000;
    fVar21 = param_1;
    if (__real_322bcc77 < fVar22) {
      fVar22 = logf(__real_3f800000 - fVar22);
      fVar20 = expf(fVar22 * fVar6 * param_1);
      fVar21 = (fVar20 - fVar5) / (fVar22 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar21 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1c0;
      local_c8 = local_240;
      local_c0 = local_238;
      local_b8 = local_230;
      local_b0 = &local_168;
      local_a8 = &local_250;
      local_a0 = local_res8;
      local_1b8 = &local_d8;
      local_1c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_d8 = this;
      local_d0 = local_res18;
      local_98 = fVar20;
      local_94 = fVar21;
      local_90 = param_1;
    }
    else {
      pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1d0;
      local_118 = local_240;
      local_110 = local_238;
      local_108 = local_230;
      local_100 = &local_168;
      local_f8 = &local_250;
      local_f0 = local_res8;
      local_1c8 = &local_128;
      local_1d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_128 = this;
      local_120 = local_res18;
      local_e8 = fVar20;
      local_e4 = fVar21;
      local_e0 = param_1;
    }
  }
  else {
    pTVar13 = (TFunctionRef<void___cdecl(int)> *)&local_1e0;
    local_1a0 = local_240;
    local_198 = local_238;
    local_190 = local_230;
    local_188 = &local_168;
    local_1d8 = &local_1b0;
    local_1e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1b0 = this;
    local_1a8 = local_res18;
    local_180 = fVar20;
    local_17c = fVar21;
    local_178 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar13,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PreIterationUpdate<0,0,0> @ 143c3cf10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>
          (FPBDEvolution *this,float param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate> FVar10;
  uint uVar11;
  TFunctionRef<void___cdecl(int)> *pTVar12;
  FNameEntryId FVar13;
  longlong lVar14;
  longlong lVar15;
  FName FVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_res8 [2];
  int local_res18 [4];
  undefined4 local_218;
  FColor_u_0 local_214;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  FName local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  FName local_1e8;
  code *local_1d8;
  FPBDEvolution **local_1d0;
  code *local_1c8;
  FPBDEvolution **local_1c0;
  code *local_1b8;
  FPBDEvolution **local_1b0;
  FPBDEvolution *local_1a8;
  int *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined2 *local_180;
  float local_178;
  float local_174;
  float local_170;
  FPBDEvolution *local_168;
  int *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined2 *local_140;
  undefined4 *local_138;
  uint *local_130;
  float local_128;
  float local_124;
  float local_120;
  FPBDEvolution *local_118;
  int *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined2 *local_f0;
  undefined4 *local_e8;
  uint *local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  FName local_c8 [2];
  undefined2 local_b8 [2];
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar17 = 0;
  uVar11 = uVar17;
  if (param_2 < *(int *)&(this->MParticleGroupIds).field_0x10) {
    uVar11 = (uint)~param_2 >> 0x1f;
  }
  local_res18[0] = param_2;
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] =
       *(uint *)(*(longlong *)&(this->MParticleGroupIds).field_0x8 + (longlong)param_2 * 4);
  lVar14 = (longlong)(int)local_res8[0];
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupForceRules).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_210 = lVar14 * 0x30 + *(longlong *)&(this->MGroupForceRules).field_0x8;
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar14 = (longlong)(int)local_res8[0];
  local_208 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8 + lVar15 * 0xc;
  uVar11 = uVar17;
  if ((int)local_res8[0] < *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar15 = (longlong)(int)local_res8[0];
  local_200 = lVar14 * 0x198 + *(longlong *)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if ((int)local_res8[0] < *(int *)&(this->MGroupLocalDampings).field_0x10) {
    uVar17 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b4 = *(undefined4 *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar15 * 4);
  local_88 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_80 = _UNK_15060db28;
  local_b8[0] = 0;
  bVar7 = -1 < CpuChannel->Enabled;
  local_b0 = local_b4;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>(float,int,int,int)___ptr64'
                ::__l9::__CpuProfilerEventSpecId313,"ChaosClothSolverIntegrate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x139);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>(float,int,int,int)___ptr64'
               ::__l9::__CpuProfilerEventSpecId313);
  }
  FVar10 = StatPtr_STAT_ChaosClothSolverIntegrate;
  if (StatPtr_STAT_ChaosClothSolverIntegrate ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)0x0) {
    pFVar9 = ::FName::FName(local_c8,"STAT_ChaosClothSolverIntegrate");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_ChaosClothSolverIntegrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosClothSolverIntegrate,*pFVar9
                        ,L"Chaos PBD Integrate","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  FVar13 = FVar16.ComparisonIndex.Value;
  uVar11 = FVar16.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_214.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_214._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar13.Value;
        local_1f8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x13a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f0 = FVar13.Value;
      uStack_1ec = uVar11;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      goto LAB_143c3d2c8;
    }
  }
  bVar3 = false;
  FVar16 = local_1e8;
LAB_143c3d2c8:
  fVar6 = __real_42700000;
  lVar14 = (longlong)(int)local_res8[0];
  local_218 = 0x42700000;
  uVar11 = 0;
  if ((int)local_res8[0] < *(int *)&(this->MGroupDampings).field_0x10) {
    uVar11 = ~local_res8[0] >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar5 = __real_3f800000;
  fVar18 = *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar14 * 4);
  if (__real_3f800000 <= fVar18) {
    fVar18 = __real_3f800000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (fVar18 <= __real_3f7ff972) {
    fVar20 = param_1;
    fVar19 = __real_3f800000;
    if (__real_322bcc77 < fVar18) {
      fVar18 = logf(__real_3f800000 - fVar18);
      fVar19 = expf(fVar18 * fVar6 * param_1);
      fVar20 = (fVar19 - fVar5) / (fVar18 * fVar6);
    }
  }
  else {
    fVar20 = 0.0;
    fVar19 = 0.0;
  }
  if (this->bDoQuasistatics == false) {
    if (this->bUsePerParticleDamping == false) {
      pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1b8;
      local_108 = local_210;
      local_100 = local_208;
      local_f8 = local_200;
      local_f0 = local_b8;
      local_e8 = &local_218;
      local_e0 = local_res8;
      local_1b0 = &local_118;
      local_1b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l27::<lambda_3>,void,int>
                  ::Call;
      local_118 = this;
      local_110 = local_res18;
      local_d8 = fVar19;
      local_d4 = fVar20;
      local_d0 = param_1;
    }
    else {
      pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1c8;
      local_158 = local_210;
      local_150 = local_208;
      local_148 = local_200;
      local_140 = local_b8;
      local_138 = &local_218;
      local_130 = local_res8;
      local_1c0 = &local_168;
      local_1c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l25::<lambda_2>,void,int>
                  ::Call;
      local_168 = this;
      local_160 = local_res18;
      local_128 = fVar19;
      local_124 = fVar20;
      local_120 = param_1;
    }
  }
  else {
    pTVar12 = (TFunctionRef<void___cdecl(int)> *)&local_1d8;
    local_198 = local_210;
    local_190 = local_208;
    local_188 = local_200;
    local_180 = local_b8;
    local_1d0 = &local_1a8;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l21::<lambda_1>,void,int>
                ::Call;
    local_1a8 = this;
    local_1a0 = local_res18;
    local_178 = fVar19;
    local_174 = fVar20;
    local_170 = param_1;
  }
  PhysicsParallelFor(param_3 - local_res18[0],pTVar12,param_3 - local_res18[0] < param_4);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FPBDEvolution @ 143c43dd0

FPBDEvolution * __thiscall
Chaos::Softs::FPBDEvolution::FPBDEvolution
          (FPBDEvolution *this,FSolverParticles *param_1,FSolverCollisionParticles *param_2,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_3,int param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,bool param_10,
          bool param_11)

{
  FSolverParticles *this_00;
  longlong *plVar1;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar2;
  longlong *plVar3;
  TArrayCollectionArray<Chaos::Softs::FPAndInvM> *pTVar4;
  TArrayCollectionArray<Chaos::TVector<float,3>_> *pTVar5;
  FSolverCollisionParticles *this_01;
  
  this_00 = &this->MParticles;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(undefined ***)this = &___7FPBDEvolution_Softs_Chaos__6B_;
  TParticles<float,3>::TParticles<float,3>
            ((TParticles<float,3> *)this_00,(TParticles<float,3> *)param_1);
  plVar1 = &(this->MParticles)._padding_;
  this_00->_padding_ = (longlong)&___7__TDynamicParticles_M_02_Chaos__6B_;
  *plVar1 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->MParticles)._padding_ = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  (this->MParticles)._padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->MParticles)._padding_ = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  plVar3 = &(this->MParticles)._padding_;
  (this->MParticles)._padding_ = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  *plVar3 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MParticles)._padding_ = 0;
  (this->MParticles)._padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&(this->MParticles)._padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&(this->MParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *plVar3 = (longlong)&___7__TArrayCollectionArray_M_Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->MParticles)._padding_)
  ;
  TArrayCollection::AddArray
            ((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)&(this->MParticles)._padding_)
  ;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)plVar3);
  pTVar4 = &(this->MParticles).MPAndInvM;
  this_00->_padding_ = (longlong)&___7FSolverParticles_Softs_Chaos__6B_;
  *(undefined ***)pTVar4 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MParticles).MPAndInvM.field_0x8 = 0;
  *(undefined8 *)&(this->MParticles).MPAndInvM.field_0x8 =
       *(undefined8 *)&(param_1->MPAndInvM).field_0x8;
  *(undefined8 *)&(param_1->MPAndInvM).field_0x8 = 0;
  *(undefined4 *)&(this->MParticles).MPAndInvM.field_0x10 =
       *(undefined4 *)&(param_1->MPAndInvM).field_0x10;
  *(undefined4 *)&(this->MParticles).MPAndInvM.field_0x14 =
       *(undefined4 *)&(param_1->MPAndInvM).field_0x14;
  *(undefined8 *)&(param_1->MPAndInvM).field_0x10 = 0;
  *(undefined ***)pTVar4 = &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_00,(TArrayCollectionArrayBase *)pTVar4);
  this_01 = &this->MCollisionParticles;
  (this->MParticlesActiveView).Items = this_00;
  (this->MParticlesActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MParticlesActiveView).Ranges.ArrayNum = 0;
  (this->MParticlesActiveView).Ranges.ArrayMax = 0;
  TParticles<float,3>::TParticles<float,3>
            ((TParticles<float,3> *)this_01,(TParticles<float,3> *)param_2);
  plVar1 = &(this->MCollisionParticles)._padding_;
  this_01->_padding_ = (longlong)&___7__TSimpleGeometryParticles_M_02_Chaos__6B_;
  *plVar1 = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MCollisionParticles)._padding_ = 0;
  (this->MCollisionParticles)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->MCollisionParticles)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->MCollisionParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  *plVar1 = (longlong)&___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  (this->MCollisionParticles)._padding_ = (longlong)&___7TArrayCollectionArrayBase_Chaos__6B_;
  (this->MCollisionParticles)._padding_ = 0;
  (this->MCollisionParticles)._padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&(this->MCollisionParticles)._padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&(this->MCollisionParticles)._padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  (this->MCollisionParticles)._padding_ =
       (longlong)&___7__TArrayCollectionArray_V__TRefCountPtr_VFImplicitObject_Chaos_____Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)plVar1);
  TArrayCollection::AddArray
            ((TArrayCollection *)this_01,
             (TArrayCollectionArrayBase *)&(this->MCollisionParticles)._padding_);
  pTVar2 = &(this->MCollisionParticles).MV;
  pTVar5 = &(this->MCollisionParticles).MW;
  this_01->_padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  *(undefined ***)pTVar2 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticles).MV.field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).MV.field_0x8 = *(undefined8 *)&(param_2->MV).field_0x8
  ;
  *(undefined8 *)&(param_2->MV).field_0x8 = 0;
  *(undefined4 *)&(this->MCollisionParticles).MV.field_0x10 =
       *(undefined4 *)&(param_2->MV).field_0x10;
  *(undefined4 *)&(this->MCollisionParticles).MV.field_0x14 =
       *(undefined4 *)&(param_2->MV).field_0x14;
  *(undefined8 *)&(param_2->MV).field_0x10 = 0;
  *(undefined ***)pTVar2 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar5 = &___7TArrayCollectionArrayBase_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticles).MW.field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticles).MW.field_0x8 = *(undefined8 *)&(param_2->MW).field_0x8
  ;
  *(undefined8 *)&(param_2->MW).field_0x8 = 0;
  *(undefined4 *)&(this->MCollisionParticles).MW.field_0x10 =
       *(undefined4 *)&(param_2->MW).field_0x10;
  *(undefined4 *)&(this->MCollisionParticles).MW.field_0x14 =
       *(undefined4 *)&(param_2->MW).field_0x14;
  *(undefined8 *)&(param_2->MW).field_0x10 = 0;
  *(undefined ***)pTVar5 = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)pTVar2);
  TArrayCollection::AddArray((TArrayCollection *)this_01,(TArrayCollectionArrayBase *)pTVar5);
  *(undefined ***)&this->MCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  *(undefined ***)&this->MGroupVelocityAndPressureFields =
       &___7__TArrayCollectionArray_VFVelocityAndPressureField_Softs_Chaos___Chaos__6B_;
  *(undefined ***)&this->MCollisionParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  *(undefined ***)&this->MParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  (this->MCollisionParticlesActiveView).Items = this_01;
  *(undefined ***)&this->MGroupGravityAccelerations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MCollisionParticlesActiveView).Ranges.ArrayNum = 0;
  (this->MCollisionParticlesActiveView).Ranges.ArrayMax = 0;
  (this->RemovedCollisionIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedCollisionIndices).ArrayNum = 0;
  (this->RemovedCollisionIndices).ArrayMax = 0;
  *(undefined8 *)&(this->MCollisionTransforms).field_0x8 = 0;
  *(undefined ***)&this->MGroupForceRules =
       &
       ___7__TArrayCollectionArray_V__TFunction___A6AXAEAVFSolverParticles_Softs_Chaos__MH_Z___Chaos__6B_
  ;
  (this->MConstraintInits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintInits).ArrayNum = 0;
  (this->MConstraintInits).ArrayMax = 0;
  (this->MConstraintInitsActiveView).Items = &this->MConstraintInits;
  (this->MConstraintRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintRules).ArrayNum = 0;
  (this->MConstraintRules).ArrayMax = 0;
  (this->MConstraintRulesActiveView).Items = &this->MConstraintRules;
  *(undefined8 *)&(this->MCollisionTransforms).field_0x10 = 0;
  *(undefined8 *)&(this->MCollided).field_0x8 = 0;
  *(undefined8 *)&(this->MCollided).field_0x10 = 0;
  *(undefined ***)&this->MCollided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MCollisionParticleGroupIds).field_0x8 = 0;
  *(undefined8 *)&(this->MCollisionParticleGroupIds).field_0x10 = 0;
  *(undefined8 *)&(this->MParticleGroupIds).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleGroupIds).field_0x10 = 0;
  (this->MCollisionContacts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MCollisionContacts).ArrayNum = 0;
  (this->MCollisionContacts).ArrayMax = 0;
  (this->MCollisionNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MCollisionNormals).ArrayNum = 0;
  (this->MCollisionNormals).ArrayMax = 0;
  (this->MCollisionPhis).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MCollisionPhis).ArrayNum = 0;
  (this->MCollisionPhis).ArrayMax = 0;
  *(undefined8 *)&(this->MGroupGravityAccelerations).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupGravityAccelerations).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupVelocityAndPressureFields).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupVelocityAndPressureFields).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupForceRules).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupForceRules).field_0x10 = 0;
  *(undefined8 *)&(this->MGroupCollisionThicknesses).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupCollisionThicknesses).field_0x10 = 0;
  *(undefined ***)&this->MGroupCollisionThicknesses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined8 *)&(this->MGroupCoefficientOfFrictions).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupCoefficientOfFrictions).field_0x10 = 0;
  *(undefined ***)&this->MGroupCoefficientOfFrictions = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined8 *)&(this->MGroupDampings).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupDampings).field_0x10 = 0;
  *(undefined ***)&this->MGroupDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined8 *)&(this->MGroupLocalDampings).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupLocalDampings).field_0x10 = 0;
  *(undefined ***)&this->MGroupLocalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  *(undefined8 *)&(this->MGroupUseCCDs).field_0x8 = 0;
  *(undefined8 *)&(this->MGroupUseCCDs).field_0x10 = 0;
  *(undefined ***)&this->MGroupUseCCDs = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->MParticleDampings).field_0x8 = 0;
  *(undefined8 *)&(this->MParticleDampings).field_0x10 = 0;
  *(undefined ***)&this->MParticleDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  (this->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintInitsActiveView).Ranges.ArrayNum = 0;
  (this->MConstraintInitsActiveView).Ranges.ArrayMax = 0;
  (this->MConstraintRulesActiveView).Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPostCollisionConstraintRules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPostCollisionConstraintRules).ArrayNum = 0;
  (this->MPostCollisionConstraintRules).ArrayMax = 0;
  (this->MPostCollisionConstraintRulesActiveView).Items = &this->MPostCollisionConstraintRules;
  (this->MConstraintPostprocessings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MConstraintPostprocessings).ArrayNum = 0;
  (this->MConstraintPostprocessings).ArrayMax = 0;
  (this->MConstraintPostprocessingsActiveView).Items = &this->MConstraintPostprocessings;
  this->MNumIterations = param_4;
  this->bDoQuasistatics = param_10;
  this->MCollisionThickness = param_5;
  this->MCoefficientOfFriction = param_7;
  (this->MConstraintRulesActiveView).Ranges.ArrayNum = 0;
  (this->MConstraintRulesActiveView).Ranges.ArrayMax = 0;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.ArrayNum = 0;
  (this->MPostCollisionConstraintRulesActiveView).Ranges.ArrayMax = 0;
  (this->MConstraintPostprocessingsActiveView).Ranges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MConstraintPostprocessingsActiveView).Ranges.ArrayNum = 0;
  (this->MConstraintPostprocessingsActiveView).Ranges.ArrayMax = 0;
  *(undefined8 *)&this->MKinematicUpdate = 0;
  *(undefined8 *)&(this->MKinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->MCollisionKinematicUpdate = 0;
  *(undefined8 *)&(this->MCollisionKinematicUpdate).field_0x28 = 0;
  *(undefined8 *)&this->MGravity = 0;
  *(undefined4 *)&(this->MGravity).field_0x8 = 0xc4752a8f;
  this->bUsePerParticleDamping = param_11;
  this->MDamping = param_8;
  this->MLocalDamping = param_9;
  this->MTime = 0.0;
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupGravityAccelerations
            );
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MGroupVelocityAndPressureFields);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupForceRules);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupCollisionThicknesses
            );
  TArrayCollection::AddArray
            ((TArrayCollection *)this,
             (TArrayCollectionArrayBase *)&this->MGroupCoefficientOfFrictions);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupDampings);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupLocalDampings);
  TArrayCollection::AddArray
            ((TArrayCollection *)this,(TArrayCollectionArrayBase *)&this->MGroupUseCCDs);
  AddGroups(this,1);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MParticles,
             (TArrayCollectionArrayBase *)&this->MParticleGroupIds);
  if (this->bUsePerParticleDamping != false) {
    TArrayCollection::AddArray
              ((TArrayCollection *)&this->MParticles,
               (TArrayCollectionArrayBase *)&this->MParticleDampings);
  }
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MCollisionParticles,
             (TArrayCollectionArrayBase *)&this->MCollisionTransforms);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MCollisionParticles,
             (TArrayCollectionArrayBase *)&this->MCollided);
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->MCollisionParticles,
             (TArrayCollectionArrayBase *)&this->MCollisionParticleGroupIds);
  return this;
}

// ~FPBDEvolution @ 143c45620

void __thiscall Chaos::Softs::FPBDEvolution::~FPBDEvolution(FPBDEvolution *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7FPBDEvolution_Softs_Chaos__6B_;
  if (*(longlong *)&this->MCollisionKinematicUpdate != 0) {
    plVar1 = *(longlong **)&(this->MCollisionKinematicUpdate).field_0x28;
    plVar4 = (longlong *)&(this->MCollisionKinematicUpdate).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->MKinematicUpdate != 0) {
    plVar1 = *(longlong **)&(this->MKinematicUpdate).field_0x28;
    plVar4 = (longlong *)&(this->MKinematicUpdate).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (this->MConstraintPostprocessingsActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MConstraintPostprocessings).AllocatorInstance.Data,
             (this->MConstraintPostprocessings).ArrayNum);
  pFVar2 = (this->MConstraintPostprocessings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MPostCollisionConstraintRulesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MPostCollisionConstraintRules).AllocatorInstance.Data,
             (this->MPostCollisionConstraintRules).ArrayNum);
  pFVar2 = (this->MPostCollisionConstraintRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MConstraintRulesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MConstraintRules).AllocatorInstance.Data,(this->MConstraintRules).ArrayNum);
  pFVar2 = (this->MConstraintRules).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)> *)
             (this->MConstraintInits).AllocatorInstance.Data,(this->MConstraintInits).ArrayNum);
  pFVar2 = (this->MConstraintInits).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->MParticleDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar3 = *(void **)&(this->MParticleDampings).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupUseCCDs = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupUseCCDs).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupLocalDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupLocalDampings).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupDampings = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupDampings).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupCoefficientOfFrictions = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupCoefficientOfFrictions).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupCollisionThicknesses = &___7__TArrayCollectionArray_M_Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupCollisionThicknesses).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupForceRules =
       &
       ___7__TArrayCollectionArray_V__TFunction___A6AXAEAVFSolverParticles_Softs_Chaos__MH_Z___Chaos__6B_
  ;
  DestructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>,int>
            (*(TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)> **)
              &(this->MGroupForceRules).field_0x8,*(int *)&(this->MGroupForceRules).field_0x10);
  pvVar3 = *(void **)&(this->MGroupForceRules).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupVelocityAndPressureFields =
       &___7__TArrayCollectionArray_VFVelocityAndPressureField_Softs_Chaos___Chaos__6B_;
  DestructItems<Chaos::Softs::FVelocityAndPressureField,int>
            (*(FVelocityAndPressureField **)&(this->MGroupVelocityAndPressureFields).field_0x8,
             *(int *)&(this->MGroupVelocityAndPressureFields).field_0x10);
  pvVar3 = *(void **)&(this->MGroupVelocityAndPressureFields).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MGroupGravityAccelerations =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar3 = *(void **)&(this->MGroupGravityAccelerations).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (this->MCollisionPhis).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MCollisionNormals).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MCollisionContacts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&this->MParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar3 = *(void **)&(this->MParticleGroupIds).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MCollisionParticleGroupIds = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar3 = *(void **)&(this->MCollisionParticleGroupIds).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MCollided = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar3 = *(void **)&(this->MCollided).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&this->MCollisionTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar3 = *(void **)&(this->MCollisionTransforms).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (this->RemovedCollisionIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&(this->MCollisionParticles).MW =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  (this->MCollisionParticles)._padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  pvVar3 = *(void **)&(this->MCollisionParticles).MW.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined ***)&(this->MCollisionParticles).MV =
       &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar3 = *(void **)&(this->MCollisionParticles).MV.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSimpleGeometryParticles<float,3>::~TSimpleGeometryParticles<float,3>
            ((TSimpleGeometryParticles<float,3> *)&this->MCollisionParticles);
  pFVar2 = (this->MParticlesActiveView).Ranges.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined ***)&(this->MParticles).MPAndInvM =
       &___7__TArrayCollectionArray_UFPAndInvM_Softs_Chaos___Chaos__6B_;
  pvVar3 = *(void **)&(this->MParticles).MPAndInvM.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TDynamicParticles<float,3>::~TDynamicParticles<float,3>
            ((TDynamicParticles<float,3> *)&this->MParticles);
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

// operator() @ 143c46800

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l23::<lambda_10>::operator()
          (void *this,FSolverParticles *param_1,int param_2)

{
  if (CpuChannel->Enabled < 0) {
    Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyFriction
              (*(FPerParticlePBDCollisionConstraint **)this,param_1,*(float *)((longlong)this + 8),
               param_2);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId713,"ChaosPBDCollisionRuleFriction",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
             ,0x2c9);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
  Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyFriction
            (*(FPerParticlePBDCollisionConstraint **)this,param_1,*(float *)((longlong)this + 8),
             param_2);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 143c49410

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l3::<lambda_1>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = *(longlong *)this;
  uVar7 = 0;
  if (param_2 < *(int *)(lVar9 + 0x210)) {
    uVar7 = (uint)~param_2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  uVar7 = *(uint *)(*(longlong *)(lVar9 + 0x208) + (longlong)param_2 * 4);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = ~uVar7 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar2 + 0x270)) {
    uVar5 = uVar8;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x268);
  lVar6 = lVar9 * 0x198;
  fVar1 = *(float *)(lVar6 + 0x140 + lVar2);
  if (((fVar1 != 0.0) || (fVar1 + *(float *)(lVar6 + 0x144 + lVar2) != 0.0)) ||
     ((0.0 < *(float *)(lVar6 + 0x168 + lVar2) &&
      (((((0.0 < *(float *)(lVar6 + 0xe0 + lVar2) || (*(float *)(lVar6 + 0xe4 + lVar2) != 0.0)) ||
         (0.0 < *(float *)(lVar6 + 0x110 + lVar2))) ||
        ((*(float *)(lVar6 + 0x114 + lVar2) != 0.0 || (0.0 < *(float *)(lVar6 + 0x80 + lVar2))))) ||
       ((*(float *)(lVar6 + 0x84 + lVar2) != 0.0 ||
        ((0.0 < *(float *)(lVar6 + 0xb0 + lVar2) || (*(float *)(lVar6 + 0xb4 + lVar2) != 0.0))))))))
     )) {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x2e8)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = *(longlong *)this;
    if (*(float *)(*(longlong *)(lVar2 + 0x2e0) + lVar9 * 4) <= 0.0) {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x288)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)(*(longlong *)(lVar6 + 0x280) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x288)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)(*(longlong *)(lVar6 + 0x280) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
  }
  else {
    lVar2 = *(longlong *)this;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar2 + 0x2e8)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar6 = *(longlong *)this;
    if (*(float *)(*(longlong *)(lVar2 + 0x2e0) + lVar9 * 4) <= 0.0) {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x288)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)(*(longlong *)(lVar6 + 0x280) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
    else {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x288)) {
        uVar5 = uVar8;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)(*(longlong *)(lVar6 + 0x280) + lVar9 * 0x30) == 0) {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
      else {
        Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>
                  (*(FPBDEvolution **)this,*(float *)((longlong)this + 8),param_2,param_3,
                   *(int *)((longlong)this + 0xc));
      }
    }
  }
  return;
}

// operator() @ 143c4da30

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4dad0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4db70

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4dc10

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4dcb0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4dd50

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4ddf0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4de90

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l21::<lambda_1>::operator()
          (void *this,int param_1)

{
  FSolverParticles *this_00;
  longlong lVar1;
  float *pfVar2;
  TVector<float,3> *pTVar3;
  int iVar4;
  
  iVar4 = **(int **)((longlong)this + 8) + param_1;
  pfVar2 = Chaos::TDynamicParticles<float,3>::InvM
                     ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),iVar4);
  lVar1 = *(longlong *)this;
  this_00 = (FSolverParticles *)(lVar1 + 0x20);
  if (*pfVar2 != 0.0) {
    pTVar3 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)this_00,iVar4);
    Chaos::Softs::FSolverParticles::SetP(this_00,iVar4,pTVar3);
    return;
  }
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                *)(lVar1 + 0x3c0),this_00,*(float *)((longlong)this + 0x38),
               *(float *)(lVar1 + 0x440),iVar4);
  return;
}

// operator() @ 143c4e7d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l7::<lambda_2>::operator()
          (void *this,FSolverCollisionParticles *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  TVector<float,3> TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  TVector<float,3> *pTVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [4];
  
  lVar14 = (longlong)param_2;
  uVar13 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = (undefined8 *)(param_1->_padding_ + lVar14 * 0x10);
  uVar11 = *puVar1;
  uVar6 = puVar1[1];
  pTVar10 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_2);
  uVar8 = _UNK_150689548;
  uVar7 = ___xmm_000000003f8000003f8000003f800000;
  lVar2 = *(longlong *)this;
  TVar5 = *pTVar10;
  uVar13 = 0;
  if (param_2 < *(int *)(lVar2 + 0x1c8)) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x1c0);
  puVar1 = (undefined8 *)(lVar2 + lVar14 * 0x30);
  *puVar1 = uVar11;
  puVar1[1] = uVar6;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = (undefined1  [12])TVar5;
  *(undefined1 (*) [16])(lVar2 + 0x10 + lVar14 * 0x30) = auVar4;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar14 * 0x30);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  lVar14 = *(longlong *)this;
  local_res10[0] = *(undefined4 *)((longlong)this + 8);
  local_res8[0] = *(undefined4 *)(lVar14 + 0x440);
  local_res18[0] = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar14 + 0x3f0));
  pcVar3 = *(code **)(lVar14 + 0x3f0);
  plVar12 = (longlong *)(lVar14 + 0x400);
  if (*(longlong **)(lVar14 + 0x418) != (longlong *)0x0) {
    plVar12 = *(longlong **)(lVar14 + 0x418);
  }
  uVar11 = (**(code **)(*plVar12 + 8))();
  (*pcVar3)(uVar11,param_1,local_res10,local_res8,local_res18);
  return;
}

// operator() @ 143c4f010

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
    ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                   **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
                 *(float *)((longlong)this + 0x48),uVar13);
    Chaos::Softs::FVelocityAndPressureField::Apply
              (*(FVelocityAndPressureField **)((longlong)this + 0x20),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FPerParticleDampVelocity::ApplyFast
              (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c4f3c0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
    ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                   **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
                 *(float *)((longlong)this + 0x48),uVar13);
    Chaos::Softs::FVelocityAndPressureField::Apply
              (*(FVelocityAndPressureField **)((longlong)this + 0x20),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c4f760

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
    ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                   **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
                 *(float *)((longlong)this + 0x48),uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FPerParticleDampVelocity::ApplyFast
              (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c4fb00

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
    ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                   **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
                 *(float *)((longlong)this + 0x48),uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c4fe80

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    Chaos::Softs::FVelocityAndPressureField::Apply
              (*(FVelocityAndPressureField **)((longlong)this + 0x20),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FPerParticleDampVelocity::ApplyFast
              (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c50220

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    Chaos::Softs::FVelocityAndPressureField::Apply
              (*(FVelocityAndPressureField **)((longlong)this + 0x20),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c505a0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FPerParticleDampVelocity::ApplyFast
              (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
               (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),
               uVar13);
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c50920

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l25::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  float *pfVar10;
  TVector<float,3> *pTVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float local_94;
  float local_90;
  
  lVar6 = *(longlong *)this;
  uVar13 = **(int **)((longlong)this + 8) + param_1;
  uVar15 = **(uint **)((longlong)this + 0x38);
  uVar12 = 0;
  if ((int)uVar15 < *(int *)(lVar6 + 0x2d0)) {
    uVar12 = ~uVar15 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar7 = *(longlong *)(lVar6 + 0x2c8);
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x318)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar1 = __real_3f800000;
  lVar14 = (longlong)(int)uVar13;
  fVar17 = *(float *)(*(longlong *)(lVar6 + 0x310) + lVar14 * 4) *
           *(float *)(lVar7 + (longlong)(int)uVar15 * 4);
  if (__real_3f800000 <= fVar17) {
    fVar17 = __real_3f800000;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  if (fVar17 <= __real_3f7ff972) {
    fVar18 = *(float *)((longlong)this + 0x48);
    fVar16 = __real_3f800000;
    if (__real_322bcc77 < fVar17) {
      fVar17 = logf(__real_3f800000 - fVar17);
      fVar17 = fVar17 * __real_42700000;
      fVar16 = expf(fVar17 * fVar18);
      fVar18 = (fVar16 - fVar1) / fVar17;
    }
  }
  else {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  pfVar10 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
  if (*pfVar10 == 0.0) {
    lVar6 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar6 + 0x3c0),(FSolverParticles *)(lVar6 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar6 + 0x440),uVar13);
  }
  else {
    uVar4 = **(undefined8 **)((longlong)this + 0x18);
    uVar5 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(undefined8 *)pTVar11 = uVar4;
    *(undefined4 *)&pTVar11->field_0x8 = uVar5;
    pTVar11 = Chaos::TDynamicParticles<float,3>::Acceleration
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    fVar1 = *(float *)((longlong)this + 0x48);
    fVar17 = *(float *)pTVar11;
    fVar2 = *(float *)&pTVar11->field_0x4;
    fVar3 = *(float *)&pTVar11->field_0x8;
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar1 * fVar17 + *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar1 * fVar2 + *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar1 * fVar3 + *(float *)&pTVar11->field_0x8;
    lVar6 = *(longlong *)this;
    pTVar11 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar6 + 0x20),uVar13);
    lVar7 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar13 < *(int *)(lVar7 + 0x70)) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x68);
    local_98 = (float)*(undefined8 *)(lVar7 + lVar14 * 0xc) * fVar18 + *(float *)pTVar11;
    local_94 = *(float *)(lVar7 + 4 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x4;
    local_90 = *(float *)(lVar7 + 8 + lVar14 * 0xc) * fVar18 + *(float *)&pTVar11->field_0x8;
    Chaos::Softs::FSolverParticles::SetP
              ((FSolverParticles *)(lVar6 + 0x20),uVar13,(TVector<float,3> *)&local_98);
    pTVar11 = Chaos::TDynamicParticles<float,3>::V
                        ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar13);
    *(float *)pTVar11 = fVar16 * *(float *)pTVar11;
    *(float *)&pTVar11->field_0x4 = fVar16 * *(float *)&pTVar11->field_0x4;
    *(float *)&pTVar11->field_0x8 = fVar16 * *(float *)&pTVar11->field_0x8;
  }
  return;
}

// operator() @ 143c515d0

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l9::<lambda_3>::operator()
          (void *this,
          TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined4 local_res18 [4];
  
  uVar5 = 0;
  if (param_2 < param_1->ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res18[0] = *(undefined4 *)((longlong)this + 8);
  pFVar1 = (param_1->AllocatorInstance).Data;
  lVar2 = *(longlong *)this;
  lVar8 = (longlong)param_2 * 0x30;
  UE::Core::Private::Function::CheckCallable(*(void **)(pFVar1 + lVar8));
  pcVar3 = *(code **)(pFVar1 + lVar8);
  pFVar7 = pFVar1 + lVar8 + 0x10;
  if (*(FScriptContainerElement **)(pFVar1 + lVar8 + 0x28) != (FScriptContainerElement *)0x0) {
    pFVar7 = *(FScriptContainerElement **)(pFVar1 + lVar8 + 0x28);
  }
  uVar6 = (**(code **)(*(longlong *)pFVar7 + 8))();
  (*pcVar3)(uVar6,lVar2 + 0x20,local_res18);
  return;
}

// operator() @ 143c516a0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,1>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x48),uVar14);
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c51920

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,1,0>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x48),uVar14);
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c51b90

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,1>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x48),uVar14);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c51e00

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<1,0,0>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
  ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,int)>
                 **)((longlong)this + 0x10),(FSolverParticles *)(*(longlong *)this + 0x20),
               *(float *)((longlong)this + 0x48),uVar14);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c52050

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,1>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c522c0

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,1,0>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  Chaos::Softs::FVelocityAndPressureField::Apply
            (*(FVelocityAndPressureField **)((longlong)this + 0x20),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c52510

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,1>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  Chaos::Softs::FPerParticleDampVelocity::ApplyFast
            (*(FPerParticleDampVelocity **)((longlong)this + 0x28),
             (FSolverParticles *)(*(longlong *)this + 0x20),*(float *)((longlong)this + 0x48),uVar14
            );
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c52760

void __thiscall
`Chaos::Softs::FPBDEvolution::PreIterationUpdate<0,0,0>'::__l27::<lambda_3>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  uint uVar13;
  uint uVar14;
  float local_58;
  float local_54;
  float local_50;
  
  uVar14 = **(int **)((longlong)this + 8) + param_1;
  pfVar11 = Chaos::TDynamicParticles<float,3>::InvM
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  if (*pfVar11 == 0.0) {
    lVar7 = *(longlong *)this;
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::Softs::FSolverParticles_&,float,float,int)>
                  *)(lVar7 + 0x3c0),(FSolverParticles *)(lVar7 + 0x20),
                 *(float *)((longlong)this + 0x48),*(float *)(lVar7 + 0x440),uVar14);
    return;
  }
  uVar6 = *(undefined4 *)(*(undefined8 **)((longlong)this + 0x18) + 1);
  uVar5 = **(undefined8 **)((longlong)this + 0x18);
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(undefined8 *)pTVar12 = uVar5;
  *(undefined4 *)&pTVar12->field_0x8 = uVar6;
  pTVar12 = Chaos::TDynamicParticles<float,3>::Acceleration
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  fVar1 = *(float *)((longlong)this + 0x48);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)pTVar12 = fVar1 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar1 * fVar4 + *(float *)&pTVar12->field_0x8;
  lVar7 = *(longlong *)this;
  pTVar12 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)(lVar7 + 0x20),uVar14);
  lVar8 = *(longlong *)this;
  uVar13 = 0;
  if ((int)uVar14 < *(int *)(lVar8 + 0x70)) {
    uVar13 = ~uVar14 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  fVar1 = *(float *)((longlong)this + 0x44);
  lVar8 = *(longlong *)(lVar8 + 0x68);
  uVar5 = *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 0xc);
  local_50 = fVar1 * *(float *)(lVar8 + 8 + (longlong)(int)uVar14 * 0xc) +
             *(float *)&pTVar12->field_0x8;
  local_58 = fVar1 * (float)uVar5 + *(float *)pTVar12;
  local_54 = fVar1 * (float)((ulonglong)uVar5 >> 0x20) + *(float *)&pTVar12->field_0x4;
  Chaos::Softs::FSolverParticles::SetP
            ((FSolverParticles *)(lVar7 + 0x20),uVar14,(TVector<float,3> *)&local_58);
  fVar1 = *(float *)((longlong)this + 0x40);
  pTVar12 = Chaos::TDynamicParticles<float,3>::V
                      ((TDynamicParticles<float,3> *)(*(longlong *)this + 0x20),uVar14);
  *(float *)&pTVar12->field_0x8 = fVar1 * *(float *)&pTVar12->field_0x8;
  *(float *)pTVar12 = fVar1 * *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar1 * *(float *)&pTVar12->field_0x4;
  return;
}

// operator() @ 143c52bd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_4>::operator()
          (void *this,
          TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintRule> FVar13;
  undefined8 uVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58 [3];
  
  uVar19 = (ulonglong)param_2;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId620,"ChaosPBDConstraintRule",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x26c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId620);
  }
  FVar13 = StatPtr_STAT_ChaosPBDConstraintRule;
  if (StatPtr_STAT_ChaosPBDConstraintRule ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintRule>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_ChaosPBDConstraintRule");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintRule>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDConstraintRule,*pFVar12,
                        L"Chaos PBD Constraint Rules","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_90.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x26d);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143c52db7;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_88 = local_80;
  FVar16 = local_80;
LAB_143c52db7:
  if (param_2 < param_3) {
    lVar17 = uVar19 * 0x30;
    do {
      uVar18 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar3 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar17));
      pcVar4 = *(code **)(pFVar2 + lVar17);
      pFVar15 = *(FScriptContainerElement **)(pFVar2 + lVar17 + 0x10 + 0x18);
      if (pFVar15 == (FScriptContainerElement *)0x0) {
        pFVar15 = pFVar2 + lVar17 + 0x10;
      }
      uVar14 = (**(code **)(*(longlong *)pFVar15 + 8))();
      (*pcVar4)(uVar14,lVar3 + 0x20);
      uVar19 = (ulonglong)(uVar18 + 1);
      lVar17 = lVar17 + 0x30;
      FVar16 = local_88;
      bVar5 = bVar6;
      bVar7 = bVar8;
    } while ((int)(uVar18 + 1) < param_3);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143c52ff0

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l13::<lambda_5>::operator()
          (void *this,FSolverParticles *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId634,"ChaosPBDCollisionRuleP",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x27a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId634);
  }
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_2 < *(int *)(lVar1 + 0x210)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)this;
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x208) + (longlong)param_2 * 4);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar2 + 0x300)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (*(char *)((longlong)(int)uVar5 + *(longlong *)(lVar2 + 0x2f8)) == '\0') {
    Chaos::Softs::FPerParticlePBDCollisionConstraint::ApplyRange
              (*(FPerParticlePBDCollisionConstraint **)((longlong)this + 8),param_1,
               *(float *)((longlong)this + 0x18),param_2,param_3);
  }
  else {
    Chaos::Softs::FPerParticlePBDCCDCollisionConstraint::ApplyRange
              (*(FPerParticlePBDCCDCollisionConstraint **)((longlong)this + 0x10),param_1,
               *(float *)((longlong)this + 0x18),param_2,param_3);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143c53170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_6>::operator()
          (void *this,
          TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostCollisionConstraintRule> FVar13;
  undefined8 uVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58 [3];
  
  uVar19 = (ulonglong)param_2;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId650,"ChaosPBDPostCollisionConstraintRule",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x28a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId650);
  }
  FVar13 = StatPtr_STAT_ChaosPBDPostCollisionConstraintRule;
  if (StatPtr_STAT_ChaosPBDPostCollisionConstraintRule ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostCollisionConstraintRule>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_ChaosPBDPostCollisionConstraintRule");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostCollisionConstraintRule>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_ChaosPBDPostCollisionConstraintRule,*pFVar12,
                        L"Chaos PBD Post Collision Constraint Rules","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_90.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x28b);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143c53357;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_88 = local_80;
  FVar16 = local_80;
LAB_143c53357:
  if (param_2 < param_3) {
    lVar17 = uVar19 * 0x30;
    do {
      uVar18 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar3 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar17));
      pcVar4 = *(code **)(pFVar2 + lVar17);
      pFVar15 = *(FScriptContainerElement **)(pFVar2 + lVar17 + 0x10 + 0x18);
      if (pFVar15 == (FScriptContainerElement *)0x0) {
        pFVar15 = pFVar2 + lVar17 + 0x10;
      }
      uVar14 = (**(code **)(*(longlong *)pFVar15 + 8))();
      (*pcVar4)(uVar14,lVar3 + 0x20);
      uVar19 = (ulonglong)(uVar18 + 1);
      lVar17 = lVar17 + 0x30;
      FVar16 = local_88;
      bVar5 = bVar6;
      bVar7 = bVar8;
    } while ((int)(uVar18 + 1) < param_3);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143c53590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l14::<lambda_7>::operator()
          (void *this,
          TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings> FVar13;
  undefined8 uVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar15;
  FName FVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  FColor_u_0 local_98 [2];
  FName local_90;
  FName local_88;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FName local_58 [3];
  
  uVar19 = (ulonglong)param_2;
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId665,"ChaosPBDConstraintPostprocessings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x299);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId665);
  }
  FVar13 = StatPtr_STAT_ChaosPBDConstraintPostprocessings;
  if (StatPtr_STAT_ChaosPBDConstraintPostprocessings ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings>)0x0) {
    pFVar12 = ::FName::FName(local_58,"STAT_ChaosPBDConstraintPostprocessings");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDConstraintPostprocessings
                        ,*pFVar12,L"Chaos PBD Constraint Postprocessings","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar9 = false;
  bVar10 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) ||
     (bVar5 = bVar6, bVar7 = bVar8, FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_90.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x29a);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    bVar5 = bVar6;
    bVar7 = bVar8;
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_143c53777;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_88 = local_80;
  FVar16 = local_80;
LAB_143c53777:
  if (param_2 < param_3) {
    lVar17 = uVar19 * 0x30;
    do {
      uVar18 = (uint)uVar19;
      uVar11 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar3 = *(longlong *)this;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar2 + lVar17));
      pcVar4 = *(code **)(pFVar2 + lVar17);
      pFVar15 = *(FScriptContainerElement **)(pFVar2 + lVar17 + 0x10 + 0x18);
      if (pFVar15 == (FScriptContainerElement *)0x0) {
        pFVar15 = pFVar2 + lVar17 + 0x10;
      }
      uVar14 = (**(code **)(*(longlong *)pFVar15 + 8))();
      (*pcVar4)(uVar14,lVar3 + 0x20);
      uVar19 = (ulonglong)(uVar18 + 1);
      lVar17 = lVar17 + 0x30;
      FVar16 = local_88;
      bVar5 = bVar6;
      bVar7 = bVar8;
    } while ((int)(uVar18 + 1) < param_3);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_68.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_68);
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
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 143c539b0

void __thiscall
`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l20::<lambda_9>::operator()
          (void *this,FSolverParticles *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  TVector<float,3> *pTVar12;
  TVector<float,3> *pTVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  
  lVar14 = (longlong)param_2;
  pTVar12 = Chaos::Softs::FSolverParticles::GetP(param_1,param_2);
  pTVar13 = Chaos::TParticles<float,3>::GetX((TParticles<float,3> *)param_1,param_2);
  fVar16 = __real_3f800000 / *(float *)this;
  fVar1 = *(float *)pTVar12;
  fVar2 = *(float *)pTVar13;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar13->field_0x4;
  fVar5 = *(float *)&pTVar12->field_0x8;
  fVar6 = *(float *)&pTVar13->field_0x8;
  uVar15 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = param_1->_padding_;
  *(float *)(lVar9 + lVar14 * 0xc) = (fVar1 - fVar2) * fVar16;
  *(float *)(lVar9 + 4 + lVar14 * 0xc) = (fVar3 - fVar4) * fVar16;
  *(float *)(lVar9 + 8 + lVar14 * 0xc) = (fVar5 - fVar6) * fVar16;
  pTVar12 = Chaos::Softs::FSolverParticles::GetP(param_1,param_2);
  uVar7 = *(undefined8 *)pTVar12;
  uVar8 = *(undefined4 *)&pTVar12->field_0x8;
  uVar15 = 0;
  if (param_2 < (int)param_1->_padding_) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  lVar9 = param_1->_padding_;
  *(undefined8 *)(lVar9 + lVar14 * 0xc) = uVar7;
  *(undefined4 *)(lVar9 + 8 + lVar14 * 0xc) = uVar8;
  return;
}

// AddCollisionParticle @ 143c55330

int __thiscall
Chaos::Softs::FPBDEvolution::AddCollisionParticle(FPBDEvolution *this,uint param_1,bool param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res8;
  
  iVar4 = (this->RemovedCollisionIndices).ArrayNum;
  if (iVar4 == 0) {
    iVar4 = (int)(this->MCollisionParticles)._padding_;
    local_res8 = CONCAT44(0xffffffff,iVar4);
    TArrayCollection::ResizeHelper((TArrayCollection *)&this->MCollisionParticles,iVar4 + 1);
    piVar1 = (int *)((longlong)&(this->MCollisionParticles)._padding_ + 4);
    *piVar1 = *piVar1 + 1;
  }
  else {
    if (iVar4 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = (this->RemovedCollisionIndices).ArrayNum;
    iVar5 = iVar4 + -1;
    local_res8 = *(undefined8 *)
                  ((this->RemovedCollisionIndices).AllocatorInstance.Data + (longlong)iVar4 * 8 + -8
                  );
    (this->RemovedCollisionIndices).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&(this->RemovedCollisionIndices).AllocatorInstance,iVar5,
               &(this->RemovedCollisionIndices).ArrayMax);
  }
  iVar4 = (int)local_res8;
  if ((-1 < iVar4) && (iVar4 < (int)(this->MCollisionParticles)._padding_)) {
    if (iVar4 < 0 || *(int *)&(this->MCollisionParticleGroupIds).field_0x10 <= iVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
    *(uint *)(*(longlong *)&(this->MCollisionParticleGroupIds).field_0x8 + (longlong)iVar4 * 4) =
         param_1;
    if (local_res8._4_4_ == -1) {
      TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::AddRange
                (&this->MCollisionParticlesActiveView,1,param_2);
    }
    else {
      TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::ActivateRange
                (&this->MCollisionParticlesActiveView,local_res8._4_4_,param_2);
    }
  }
  return iVar4;
}

// AddCollisionParticleRange @ 143c554d0

int __thiscall
Chaos::Softs::FPBDEvolution::AddCollisionParticleRange
          (FPBDEvolution *this,int param_1,uint param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar5 = (int)(this->MCollisionParticles)._padding_;
  uVar8 = (ulonglong)iVar5;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MCollisionParticles,param_1 + iVar5);
  piVar1 = (int *)((longlong)&(this->MCollisionParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  if (iVar5 < (int)(this->MCollisionParticles)._padding_) {
    lVar7 = uVar8 * 4;
    do {
      uVar6 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar6 < *(int *)&(this->MCollisionParticleGroupIds).field_0x10) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar8 = (ulonglong)(uVar6 + 1);
      *(uint *)(lVar7 + *(longlong *)&(this->MCollisionParticleGroupIds).field_0x8) = param_2;
      lVar7 = lVar7 + 4;
    } while ((int)(uVar6 + 1) < (int)(this->MCollisionParticles)._padding_);
  }
  TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::AddRange
            (&this->MCollisionParticlesActiveView,param_1,param_3);
  return iVar5;
}

// AddConstraintInitRange @ 143c55f70

int __thiscall
Chaos::Softs::FPBDEvolution::AddConstraintInitRange(FPBDEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MConstraintInits).AllocatorInstance,
                     &(this->MConstraintInits).ArrayNum,&(this->MConstraintInits).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MConstraintInits).AllocatorInstance.Data + (longlong)iVar1 * 0x30,param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MConstraintInitsActiveView,param_1,param_2);
  return iVar1;
}

// AddConstraintPostprocessingsRange @ 143c56010

int __thiscall
Chaos::Softs::FPBDEvolution::AddConstraintPostprocessingsRange
          (FPBDEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MConstraintPostprocessings).AllocatorInstance,
                     &(this->MConstraintPostprocessings).ArrayNum,
                     &(this->MConstraintPostprocessings).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MConstraintPostprocessings).AllocatorInstance.Data + (longlong)iVar1 * 0x30,
             param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MConstraintPostprocessingsActiveView,param_1,param_2);
  return iVar1;
}

// AddConstraintRuleRange @ 143c560b0

int __thiscall
Chaos::Softs::FPBDEvolution::AddConstraintRuleRange(FPBDEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MConstraintRules).AllocatorInstance,
                     &(this->MConstraintRules).ArrayNum,&(this->MConstraintRules).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MConstraintRules).AllocatorInstance.Data + (longlong)iVar1 * 0x30,param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MConstraintRulesActiveView,param_1,param_2);
  return iVar1;
}

// AddGroups @ 143c56f20

void __thiscall Chaos::Softs::FPBDEvolution::AddGroups(FPBDEvolution *this,int param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = *(uint *)&this->field_0x18;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)this,param_1 + uVar10);
  }
  if (uVar10 < *(uint *)&this->field_0x18) {
    do {
      uVar2 = *(undefined8 *)&this->MGravity;
      uVar3 = *(undefined4 *)&(this->MGravity).field_0x8;
      uVar8 = ~uVar10 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupGravityAccelerations).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&(this->MGroupGravityAccelerations).field_0x8;
      lVar9 = (longlong)(int)uVar10;
      *(undefined8 *)(lVar4 + lVar9 * 0xc) = uVar2;
      *(undefined4 *)(lVar4 + 8 + lVar9 * 0xc) = uVar3;
      fVar1 = this->MCollisionThickness;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupCollisionThicknesses).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(*(longlong *)&(this->MGroupCollisionThicknesses).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MCoefficientOfFriction;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupCoefficientOfFrictions).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(*(longlong *)&(this->MGroupCoefficientOfFrictions).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MDamping;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupDampings).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(*(longlong *)&(this->MGroupDampings).field_0x8 + lVar9 * 4) = fVar1;
      fVar1 = this->MLocalDamping;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupLocalDampings).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(float *)(*(longlong *)&(this->MGroupLocalDampings).field_0x8 + lVar9 * 4) = fVar1;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->MGroupUseCCDs).field_0x10) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(undefined1 *)(lVar9 + *(longlong *)&(this->MGroupUseCCDs).field_0x8) = 0;
    } while (uVar10 < *(uint *)&this->field_0x18);
  }
  return;
}

// AddParticleRange @ 143c57740

int __thiscall
Chaos::Softs::FPBDEvolution::AddParticleRange
          (FPBDEvolution *this,int param_1,uint param_2,bool param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (param_1 == 0) {
    return -1;
  }
  uVar3 = (uint)(this->MParticles)._padding_;
  uVar12 = (ulonglong)(int)uVar3;
  plVar1 = &(this->MParticles)._padding_;
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MParticles,param_1 + uVar3);
  piVar2 = (int *)((longlong)&(this->MParticles)._padding_ + 4);
  *piVar2 = *piVar2 + 1;
  uVar10 = 0;
  iVar6 = (int)*plVar1;
  if ((int)uVar3 < iVar6) {
    lVar13 = uVar12 * 4;
    uVar9 = uVar12;
    do {
      uVar7 = (uint)uVar9;
      uVar8 = uVar10;
      if ((int)uVar7 < *(int *)&(this->MParticleGroupIds).field_0x10) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar9 = (ulonglong)(uVar7 + 1);
      *(uint *)(lVar13 + *(longlong *)&(this->MParticleGroupIds).field_0x8) = param_2;
      lVar13 = lVar13 + 4;
      iVar6 = (int)*plVar1;
    } while ((int)(uVar7 + 1) < iVar6);
  }
  if ((this->bUsePerParticleDamping != false) && ((int)uVar3 < iVar6)) {
    lVar13 = uVar12 * 4;
    uVar8 = uVar3;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&(this->MParticleDampings).field_0x10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar13 + *(longlong *)&(this->MParticleDampings).field_0x8) = 0;
      lVar13 = lVar13 + 4;
    } while ((int)uVar8 < (int)(this->MParticles)._padding_);
  }
  if (*(uint *)&this->field_0x18 <= param_2) {
    AddGroups(this,(param_2 - *(uint *)&this->field_0x18) + 1);
  }
  iVar6 = (this->MParticlesActiveView).Ranges.ArrayNum;
  pTVar11 = &(this->MParticlesActiveView).Ranges;
  if (iVar6 != 0) {
    uVar10 = 0;
    if ((int)(iVar6 - 1U) < iVar6) {
      uVar10 = ~(iVar6 - 1U) >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    uVar10 = *(uint *)((pTVar11->AllocatorInstance).Data +
                      (longlong)(this->MParticlesActiveView).Ranges.ArrayNum * 4 + -4) >> 1;
  }
  piVar2 = &(this->MParticlesActiveView).Ranges.ArrayMax;
  iVar6 = (this->MParticlesActiveView).Ranges.ArrayNum;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar11->AllocatorInstance,piVar2);
    (this->MParticlesActiveView).Ranges.ArrayNum = iVar6;
  }
  (this->MParticlesActiveView).Ranges.ArrayNum = iVar6 + 1;
  *(uint *)((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 4) =
       (param_1 + uVar10) * 2 | (uint)param_3;
  return uVar3;
}

// AddPostCollisionConstraintRuleRange @ 143c579a0

int __thiscall
Chaos::Softs::FPBDEvolution::AddPostCollisionConstraintRuleRange
          (FPBDEvolution *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,0x10,param_1,&(this->MPostCollisionConstraintRules).AllocatorInstance,
                     &(this->MPostCollisionConstraintRules).ArrayNum,
                     &(this->MPostCollisionConstraintRules).ArrayMax);
  DefaultConstructItems<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,int>
            ((this->MPostCollisionConstraintRules).AllocatorInstance.Data + (longlong)iVar1 * 0x30,
             param_1);
  iVar1 = TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
          ::AddRange(&this->MPostCollisionConstraintRulesActiveView,param_1,param_2);
  return iVar1;
}

// AdvanceOneTimeStep @ 143c57c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(FPBDEvolution *this,float param_1)

{
  int *piVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *pTVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TConsoleVariableData<bool> *pTVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<bool> *pTVar16;
  LARGE_INTEGER LVar17;
  LPCRITICAL_SECTION p_Var18;
  bool bVar19;
  TStatId TVar20;
  ulonglong uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRule> FVar23;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings> FVar24;
  FThreadStats *pFVar25;
  FThreadStatsPool *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostIterationUpdates> FVar27;
  longlong lVar28;
  FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRuleFriction> FVar29;
  ulonglong uVar30;
  FNameEntryId FVar31;
  FName FVar32;
  uint uVar33;
  uint uVar34;
  byte bVar35;
  FScriptContainerElement *pFVar36;
  FScriptContainerElement *pFVar37;
  char cVar38;
  FPBDEvolution *pFVar39;
  bool bVar40;
  bool bVar41;
  undefined1 auStackY_5d8 [32];
  byte local_577;
  char local_576;
  bool local_575;
  uint local_570 [2];
  FName local_568;
  undefined1 local_560;
  undefined1 local_55f [3];
  uint local_55c;
  FColor_u_0 local_558 [2];
  uint local_550;
  uint uStack_54c;
  FName local_548;
  FName local_540;
  FCycleCounter local_538;
  FCycleCounter local_528;
  FCycleCounter local_518;
  FCycleCounter local_508;
  FCycleCounter local_4f8;
  FCycleCounter local_4e8;
  FColor_u_0 local_4d8 [2];
  uint local_4d0 [2];
  uint local_4c8 [2];
  float local_4c0;
  float local_4bc;
  FColor_u_0 local_4b8;
  FColor_u_0 local_4b4;
  LARGE_INTEGER local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_490;
  FName local_480;
  FName local_470;
  FPBDEvolution *local_460;
  LARGE_INTEGER local_458;
  LARGE_INTEGER local_450;
  FPBDEvolution *local_448;
  float local_440;
  uint local_43c;
  FStatMessage local_438;
  FStatMessage local_428;
  FStatMessage local_418;
  FSourceLocation local_408;
  FSourceLocation local_3e8;
  FSourceLocation local_3c8;
  FSourceLocation local_3a8;
  FSourceLocation local_388;
  FSourceLocation local_368;
  code *local_348;
  FPBDEvolution **local_340;
  FPBDEvolution *local_338;
  float local_330;
  code *local_328;
  FPBDEvolution **local_320;
  FPBDEvolution *local_318;
  float local_310;
  FPBDEvolution *local_308;
  float local_300;
  code *local_2f8;
  FPBDEvolution **local_2f0;
  code *local_2e8;
  FPBDEvolution **local_2e0;
  FPBDEvolution *local_2d8;
  float local_2d0;
  code *local_2c8;
  FPBDEvolution **local_2c0;
  code *local_2b8;
  FPBDEvolution **local_2b0;
  code *local_2a8;
  float *local_2a0;
  code *local_298;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_290;
  undefined1 *local_288;
  float local_280;
  code *local_278;
  undefined1 **local_270;
  code *local_268;
  TPBDActiveView<Chaos::Softs::FSolverParticles> **local_260;
  FPBDEvolution *local_258;
  float local_250;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_248;
  uint local_240;
  code **local_238;
  TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_210;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  LPCRITICAL_SECTION local_1e0;
  FPBDEvolution *local_1d8;
  undefined1 *local_1d0;
  TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> **local_1c8;
  float local_1c0;
  TPBDActiveView<Chaos::Softs::FSolverParticles> *local_1b8;
  code **local_1b0;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_1a8;
  uint *local_1a0;
  FName local_198 [2];
  FName local_188 [4];
  FName local_168 [3];
  FName local_150;
  undefined1 local_148 [8];
  TPBDActiveView<Chaos::Softs::FSolverCollisionParticles> *local_140;
  undefined1 *local_138;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_130;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_128;
  TArray<float,TSizedDefaultAllocator<32>_> *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  TSparseArray<TSparseSetElement<TTuple<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_108;
  void *local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  LPCRITICAL_SECTION local_a8;
  TArray<Chaos::TVector<int,2>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  local_460 = this;
  if (CpuChannel->Enabled < 0) {
    local_576 = '\0';
  }
  else {
    local_576 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId470,"FPBDEvolution_AdvanceOneTimeStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x1d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId470);
  }
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDVAdvanceTime,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDVAdvanceTime,1> *)
                      &StatPtr_STAT_ChaosPBDVAdvanceTime);
  uVar30 = 0;
  local_3e8.Impl._Line = 0x1d7;
  local_3e8.Impl._Column = 2;
  local_3e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
  ;
  local_538.StatId.ComparisonIndex.Value = 0;
  local_538.StatId.Number = 0;
  local_3e8.Impl._Function =
       "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
  local_538.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_538,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3e8);
  this->MTime = param_1 + this->MTime;
  pTVar14 = CVarChaosPBDEvolutionUseNestedParallelFor.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_143c57d4d:
    uVar21 = uVar30;
  }
  else {
    bVar19 = IsInGameThread();
    uVar21 = 1;
    if (bVar19) goto LAB_143c57d4d;
  }
  pTVar16 = CVarChaosPBDEvolutionParallelIntegrate.Ref;
  bVar40 = pTVar14->ShadowedValue[uVar21] == false;
  local_575 = bVar40;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_143c57d79:
    uVar21 = uVar30;
  }
  else {
    bVar19 = IsInGameThread();
    uVar21 = 1;
    if (bVar19) goto LAB_143c57d79;
  }
  pTVar15 = CVarChaosPBDEvolutionMinParallelBatchSize.Ref;
  if (pTVar16->ShadowedValue[uVar21] == false) {
    uVar34 = 0x7fffffff;
  }
  else {
    bVar19 = IsInParallelGameThread();
    if (bVar19) {
LAB_143c57da8:
      uVar21 = uVar30;
    }
    else {
      bVar19 = IsInGameThread();
      uVar21 = 4;
      if (bVar19) goto LAB_143c57da8;
    }
    uVar34 = *(uint *)((longlong)pTVar15->ShadowedValue + uVar21);
  }
  pTVar14 = CVarChaosPBDEvolutionWriteCCDContacts.Ref;
  local_55c = uVar34;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_143c57dd0:
    uVar21 = uVar30;
  }
  else {
    bVar19 = IsInGameThread();
    uVar21 = 1;
    if (bVar19) goto LAB_143c57dd0;
  }
  bVar19 = pTVar14->ShadowedValue[uVar21];
  bVar41 = -1 < CpuChannel->Enabled;
  if (bVar41) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId484,"ChaosPBDPreIterationUpdates",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x1e4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId484);
  }
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDPreIterationUpdates,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDPreIterationUpdates,1> *)
                      &StatPtr_STAT_ChaosPBDPreIterationUpdates);
  local_3c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
  ;
  local_3c8.Impl._Line = 0x1e5;
  local_3c8.Impl._Column = 3;
  local_518.StatId.ComparisonIndex.Value = 0;
  local_518.StatId.Number = 0;
  local_518.EmittedEvent = 0;
  local_3c8.Impl._Function =
       "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
  FCycleCounter::Start
            (&local_518,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3c8);
  local_340 = &local_448;
  local_348 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l3::<lambda_1>,void,Chaos::Softs::FSolverParticles_&,int,int>
              ::Call;
  local_448 = this;
  local_440 = param_1;
  local_43c = uVar34;
  TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
            (&this->MParticlesActiveView,
             (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_348,
             bVar40);
  if ((local_518.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_518.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_518.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_518.StatId,CycleScopeEnd);
  }
  local_518.EmittedEvent = '\0';
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)&this->MCollisionKinematicUpdate != 0) {
    bVar40 = -1 < CpuChannel->Enabled;
    if (bVar40) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId549,"ChaosPBDCollisionKinematicUpdate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                 ,0x225);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId549);
    }
    TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDCollisionKinematicUpdate,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDCollisionKinematicUpdate,1> *
                        )&StatPtr_STAT_ChaosPBDCollisionKinematicUpdate);
    local_408.Impl._Line = 0x226;
    local_408.Impl._Column = 4;
    local_408.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
    ;
    local_508.StatId.ComparisonIndex.Value = 0;
    local_508.StatId.Number = 0;
    local_508.EmittedEvent = 0;
    local_408.Impl._Function =
         "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
    FCycleCounter::Start
              (&local_508,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_408);
    local_320 = &local_338;
    local_328 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l7::<lambda_2>,void,Chaos::Softs::FSolverCollisionParticles_&,int>
                ::Call;
    local_338 = this;
    local_330 = param_1;
    TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::SequentialFor
              (&this->MCollisionParticlesActiveView,
               (TFunctionRef<void___cdecl(Chaos::Softs::FSolverCollisionParticles_&,int)> *)
               &local_328);
    if ((local_508.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_508.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_508.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_508.StatId,CycleScopeEnd);
    }
    local_508.EmittedEvent = '\0';
    if (bVar40) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId564,"ChaosPBDClearCollidedArray",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x234);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId564);
  }
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDClearCollidedArray,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDClearCollidedArray,1> *)
                      &StatPtr_STAT_ChaosPBDClearCollidedArray);
  local_3a8.Impl._Line = 0x235;
  local_3a8.Impl._Column = 4;
  local_3a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
  ;
  local_4f8.StatId.ComparisonIndex.Value = 0;
  local_4f8.StatId.Number = 0;
  local_4f8.EmittedEvent = 0;
  local_3a8.Impl._Function =
       "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
  FCycleCounter::Start
            (&local_4f8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3a8);
  memset(*(void **)&(this->MCollided).field_0x8,0,(longlong)*(int *)&(this->MCollided).field_0x10);
  if ((local_4f8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4f8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4f8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_4f8.StatId,CycleScopeEnd);
  }
  local_4f8.EmittedEvent = '\0';
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId572,"ChaosXPBDConstraintsInit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x23c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId572);
  }
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosXPBDConstraintsInit,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosXPBDConstraintsInit,1> *)
                      &StatPtr_STAT_ChaosXPBDConstraintsInit);
  local_388.Impl._Line = 0x23d;
  local_388.Impl._Column = 3;
  local_388.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
  ;
  local_4e8.StatId.ComparisonIndex.Value = 0;
  local_4e8.StatId.Number = 0;
  local_4e8.EmittedEvent = 0;
  local_388.Impl._Function =
       "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
  FCycleCounter::Start
            (&local_4e8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_388);
  pFVar36 = (this->MConstraintInitsActiveView).Ranges.AllocatorInstance.Data;
  iVar9 = (this->MConstraintInitsActiveView).Ranges.ArrayNum;
  pFVar37 = pFVar36 + (longlong)iVar9 * 4;
  local_318 = this;
  local_310 = param_1;
  while( true ) {
    if ((this->MConstraintInitsActiveView).Ranges.ArrayNum != iVar9) {
      `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_577);
    }
    cVar38 = local_576;
    if (pFVar36 == pFVar37) break;
    uVar34 = *(uint *)pFVar36;
    uVar33 = uVar34 >> 1;
    if ((((uVar34 & 1) != 0) && (uVar34 >> 1 != 0)) && ((uint)uVar30 < uVar33)) {
      do {
        local_570[0] = (uint)uVar30;
        UE::Core::Private::Function::
        TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l9::<lambda_3>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int>
        ::Call(&local_318,(this->MConstraintInitsActiveView).Items,(int *)local_570);
        uVar34 = (uint)uVar30 + 1;
        uVar30 = (ulonglong)uVar34;
      } while ((int)uVar34 < (int)uVar33);
    }
    uVar30 = (ulonglong)uVar33;
    pFVar36 = pFVar36 + 4;
  }
  if ((local_4e8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4e8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4e8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_4e8.StatId,CycleScopeEnd);
  }
  local_4e8.EmittedEvent = '\0';
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar2 = &this->MCollisionContacts;
  (this->MCollisionContacts).ArrayNum = 0;
  if ((this->MCollisionContacts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar2->AllocatorInstance,0,&(this->MCollisionContacts).ArrayMax);
  }
  pTVar3 = &this->MCollisionNormals;
  (this->MCollisionNormals).ArrayNum = 0;
  if ((this->MCollisionNormals).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar3->AllocatorInstance,0,&(this->MCollisionNormals).ArrayMax);
  }
  pTVar4 = &this->MCollisionPhis;
  (this->MCollisionPhis).ArrayNum = 0;
  if ((this->MCollisionPhis).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,&(this->MCollisionPhis).ArrayMax);
  }
  local_138 = &(this->MCollided).field_0x8;
  pTVar5 = &this->MCollisionParticlesActiveView;
  local_b0 = &(this->MGroupCoefficientOfFrictions).field_0x8;
  puVar6 = &(this->MCollisionParticleGroupIds).field_0x8;
  local_108._0_8_ = 0;
  puVar7 = &(this->MParticleGroupIds).field_0x8;
  local_108._8_8_ = 0;
  local_108._32_8_ = 0;
  local_108._40_4_ = 0;
  local_108._52_4_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  puVar8 = &(this->MGroupCollisionThicknesses).field_0x8;
  local_148[0] = 1;
  local_108._44_4_ = 0x80;
  local_108._48_4_ = 0xffffffff;
  local_140 = pTVar5;
  local_130 = pTVar2;
  local_128 = pTVar3;
  local_120 = pTVar4;
  local_118 = puVar7;
  local_110 = puVar6;
  local_b8 = puVar8;
  if ((bVar19 == false) || (local_a8 = ::operator_new(0x28), local_a8 == (LPCRITICAL_SECTION)0x0)) {
    local_a8 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    InitializeCriticalSectionAndSpinCount(local_a8,4000);
  }
  local_220 = &(this->MCollisionTransforms).field_0x8;
  local_218 = &(this->MCollided).field_0x8;
  local_210 = &this->MCollisionContacts;
  local_208 = &this->MCollisionNormals;
  local_1e8 = &(this->MGroupCoefficientOfFrictions).field_0x8;
  local_228 = pTVar5;
  local_200 = puVar7;
  local_1f8 = puVar6;
  local_1f0 = puVar8;
  if ((bVar19 == false) || (local_1e0 = ::operator_new(0x28), local_1e0 == (LPCRITICAL_SECTION)0x0))
  {
    local_1e0 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    InitializeCriticalSectionAndSpinCount(local_1e0,4000);
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId612,"ChaosPBDIterationLoop",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x264);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId612);
  }
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDIterationLoop,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ChaosPBDIterationLoop,1> *)
                      &StatPtr_STAT_ChaosPBDIterationLoop);
  local_368.Impl._Line = 0x265;
  local_368.Impl._Column = 3;
  local_368.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
  ;
  local_368.Impl._Function =
       "void __cdecl Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep(const float)";
  local_528.StatId.ComparisonIndex.Value = 0;
  local_528.StatId.Number = 0;
  local_528.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_528,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_368);
  local_570[0] = 0;
  bVar40 = local_575;
  if (0 < this->MNumIterations) {
    do {
      local_2f0 = &local_308;
      local_2f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_4>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
                  ::Call;
      local_308 = this;
      local_300 = param_1;
      TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
      ::RangeFor(&this->MConstraintRulesActiveView,
                 (TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int)>
                  *)&local_2f8,bVar40);
      bVar41 = -1 < CpuChannel->Enabled;
      if (bVar41) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId629,"ChaosPBDCollisionRule",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x275);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId629);
      }
      FVar23 = StatPtr_STAT_ChaosPBDCollisionRule;
      if (StatPtr_STAT_ChaosPBDCollisionRule ==
          (FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRule>)0x0) {
        pFVar22 = ::FName::FName(local_168,"STAT_ChaosPBDCollisionRule");
        FVar23 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRule>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDCollisionRule,
                            *pFVar22,L"Chaos PBD Collision Rule","STATGROUP_Chaos",
                            "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar32 = *(FName *)FVar23;
      bVar11 = false;
      bVar13 = false;
      local_4a0.ComparisonIndex.Value = 0;
      local_4a0.Number = 0;
      FVar31 = FVar32.ComparisonIndex.Value;
      uVar34 = FVar32.Number;
      if ((FVar31.Value == 0) && (uVar34 == 0)) {
LAB_143c5871d:
        bVar12 = false;
        FVar32 = local_4a0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_4d8[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_4d8[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
          bVar11 = false;
          bVar13 = true;
          if (-1 < CpuChannel->Enabled) {
            local_4a8.ComparisonIndex.Value = FVar31.Value;
            local_4a8.Number = uVar34;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_4a8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                       ,0x276);
            bVar11 = true;
            bVar13 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_143c5871d;
        local_550 = FVar31.Value;
        uStack_54c = uVar34;
        local_4a0 = FVar32;
        FThreadStats::AddMessage(FVar32,CycleScopeStart);
        bVar12 = true;
      }
      bVar40 = local_575;
      local_1d0 = local_148;
      local_1c8 = &local_228;
      local_2e0 = &local_1d8;
      local_2e8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l13::<lambda_5>,void,Chaos::Softs::FSolverParticles_&,int,int>
                  ::Call;
      local_1d8 = this;
      local_1c0 = param_1;
      TPBDActiveView<Chaos::Softs::FSolverParticles>::RangeFor
                (&this->MParticlesActiveView,
                 (TFunctionRef<void___cdecl(Chaos::Softs::FSolverParticles_&,int,int)> *)&local_2e8,
                 local_575);
      if (bVar13) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar12) {
        FThreadStats::AddMessage(FVar32,CycleScopeEnd);
      }
      if (bVar41) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      local_2c0 = &local_2d8;
      local_2c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l12::<lambda_6>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
                  ::Call;
      local_2d8 = this;
      local_2d0 = param_1;
      TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
      ::RangeFor(&this->MPostCollisionConstraintRulesActiveView,
                 (TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int)>
                  *)&local_2c8,bVar40);
      local_570[0] = local_570[0] + 1;
    } while ((int)local_570[0] < this->MNumIterations);
  }
  bVar40 = -1 < CpuChannel->Enabled;
  if (bVar40) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId660,"ChaosPBDConstraintPostprocessings",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
               ,0x294);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId660);
  }
  FVar24 = StatPtr_STAT_ChaosPBDConstraintPostprocessings;
  if (StatPtr_STAT_ChaosPBDConstraintPostprocessings ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings>)0x0) {
    pFVar22 = ::FName::FName(local_188,"STAT_ChaosPBDConstraintPostprocessings");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDConstraintPostprocessings>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDConstraintPostprocessings
                        ,*pFVar22,L"Chaos PBD Constraint Postprocessings","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar24;
  bVar41 = false;
  bVar11 = false;
  local_470.ComparisonIndex.Value = 0;
  local_470.Number = 0;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar34 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar34 == 0)) {
LAB_143c5898e:
    bVar13 = false;
    FVar32 = local_470;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4b4._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar41 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_548.ComparisonIndex.Value = FVar31.Value;
        local_548.Number = uVar34;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_548,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x295);
        bVar41 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c5898e;
    local_548.ComparisonIndex.Value = FVar31.Value;
    local_548.Number = uVar34;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar13 = true;
  }
  local_2b0 = &local_258;
  local_2b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l14::<lambda_7>,void,TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int>
              ::Call;
  local_258 = this;
  local_250 = param_1;
  TPBDActiveView<TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_>
  ::RangeFor(&this->MConstraintPostprocessingsActiveView,
             (TFunctionRef<void___cdecl(TArray<TFunction<void___cdecl(Chaos::Softs::FSolverParticles_&,float)>,TSizedDefaultAllocator<32>_>_&,int,int)>
              *)&local_2b8,local_575);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar41) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      local_438.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_438.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_4b0);
      local_438.StatData.Pad = (uchar  [8])(local_4b0.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar25,&local_438);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if (bVar40) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar27 = StatPtr_STAT_ChaosPBDPostIterationUpdates;
  if (StatPtr_STAT_ChaosPBDPostIterationUpdates ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostIterationUpdates>)0x0) {
    pFVar22 = ::FName::FName(local_198,"STAT_ChaosPBDPostIterationUpdates");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDPostIterationUpdates>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDPostIterationUpdates,
                        *pFVar22,L"Chaos PBD Post Iteration Updates","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar27;
  bVar35 = 0;
  local_480.ComparisonIndex.Value = 0;
  local_480.Number = 0;
  local_577 = 0;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_143c58bed:
    local_568 = local_480;
    FVar32 = local_480;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_558[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_558[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar35 = 1;
      local_577 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_568 = FVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_568,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x2a3);
        bVar35 = 3;
        local_577 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c58bed;
    local_568 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    local_577 = bVar35 | 4;
  }
  uVar34 = local_55c;
  pFVar37 = (this->MParticlesActiveView).Ranges.AllocatorInstance.Data;
  if (bChaos_PostIterationUpdates_ISPC_Enabled == false) {
    iVar9 = (this->MParticlesActiveView).Ranges.ArrayNum;
    local_2a0 = &local_4bc;
    uVar33 = 0;
    local_2a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l20::<lambda_9>,void,Chaos::Softs::FSolverParticles_&,int>
                ::Call;
    pFVar36 = pFVar37 + (longlong)iVar9 * 4;
    local_4bc = param_1;
    while( true ) {
      local_570[0] = uVar33;
      if ((this->MParticlesActiveView).Ranges.ArrayNum != iVar9) {
        `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_55f);
      }
      FVar32 = local_568;
      pFVar39 = local_460;
      cVar38 = local_576;
      if (pFVar37 == pFVar36) break;
      uVar10 = *(uint *)pFVar37;
      uVar33 = uVar10 >> 1;
      if (((uVar10 & 1) != 0) && (uVar10 >> 1 != 0)) {
        local_238 = &local_2a8;
        local_298 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_290 = &local_248;
        local_248 = &this->MParticlesActiveView;
        local_240 = local_570[0];
        PhysicsParallelFor(uVar33 - local_570[0],(TFunctionRef<void___cdecl(int)> *)&local_298,
                           (int)(uVar33 - local_570[0]) < (int)uVar34);
      }
      pFVar37 = pFVar37 + 4;
    }
  }
  else {
    local_558[0] = (FColor_u_0)(this->MParticlesActiveView).Ranges.ArrayNum;
    uVar30 = (ulonglong)(int)local_558[0].Bits;
    uVar34 = 0;
    local_4b0.QuadPart = (longlong)pFVar37 + uVar30 * 4;
    local_4c0 = param_1;
    while( true ) {
      LVar17 = local_4b0;
      local_570[0] = uVar34;
      if ((this->MParticlesActiveView).Ranges.ArrayNum != (int)uVar30) {
        `TCheckedPointerIterator<Chaos::FActiveViewRange_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_560);
      }
      pFVar39 = this;
      if (pFVar37 == (FScriptContainerElement *)LVar17.QuadPart) break;
      uVar33 = *(uint *)pFVar37;
      uVar34 = uVar33 >> 1;
      if (((uVar33 & 1) != 0) && (uVar33 >> 1 != 0)) {
        local_4d0[0] = uVar34;
        local_4c8[0] = local_570[0];
        UE::Core::Private::Function::
        TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l18::<lambda_8>,void,Chaos::Softs::FSolverParticles_&,int,int>
        ::Call(&local_4c0,(this->MParticlesActiveView).Items,(int *)local_4c8,(int *)local_4d0);
      }
      uVar30 = (ulonglong)local_558[0].Bits;
      pFVar37 = pFVar37 + 4;
    }
  }
  bVar35 = local_577;
  if ((local_577 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar35 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((((bVar35 & 4) != 0) && (FVar32 != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      local_418.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_418.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_458);
      local_418.StatData.Pad[4] = '\0';
      local_418.StatData.Pad[5] = '\0';
      local_418.StatData.Pad[6] = '\0';
      local_418.StatData.Pad[7] = '\0';
      local_418.StatData.Pad[0] = local_458.s.LowPart._0_1_;
      local_418.StatData.Pad[1] = local_458.s.LowPart._1_1_;
      local_418.StatData.Pad[2] = local_458.s.LowPart._2_1_;
      local_418.StatData.Pad[3] = local_458.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&local_418);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if ((local_528.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_528.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_528.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_528.StatId,CycleScopeEnd);
  }
  local_528.EmittedEvent = '\0';
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar14 = CVarChaosPBDEvolutionFastPositionBasedFriction.Ref;
  bVar19 = IsInParallelGameThread();
  if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
    lVar28 = 0;
  }
  else {
    lVar28 = 1;
  }
  if ((pTVar14->ShadowedValue[lVar28] != false) || (pFVar39->MCoefficientOfFriction <= 0.0))
  goto LAB_143c5915b;
  FVar29 = StatPtr_STAT_ChaosPBDCollisionRuleFriction;
  if (StatPtr_STAT_ChaosPBDCollisionRuleFriction ==
      (FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRuleFriction>)0x0) {
    pFVar22 = ::FName::FName(&local_150,"STAT_ChaosPBDCollisionRuleFriction");
    FVar29 = (FThreadSafeStaticStat<FStat_STAT_ChaosPBDCollisionRuleFriction>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ChaosPBDCollisionRuleFriction,
                        *pFVar22,L"Chaos PBD Collider Friction","STATGROUP_Chaos","STATCAT_Advanced"
                        ,L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar29;
  bVar19 = false;
  bVar40 = false;
  local_490.ComparisonIndex.Value = 0;
  local_490.Number = 0;
  FVar31 = FVar32.ComparisonIndex.Value;
  uVar34 = FVar32.Number;
  if ((FVar31.Value == 0) && (uVar34 == 0)) {
LAB_143c58fba:
    bVar41 = false;
    FVar32 = local_490;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_4b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_4b8._s_0,(char *)*(FName *)((longlong)FVar29 + 0x10));
      bVar19 = false;
      bVar40 = true;
      if (-1 < CpuChannel->Enabled) {
        local_540.ComparisonIndex.Value = FVar31.Value;
        local_540.Number = uVar34;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_540,(wchar_t *)*(FName *)((longlong)FVar29 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                   ,0x2c5);
        bVar19 = true;
        bVar40 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143c58fba;
    local_540.ComparisonIndex.Value = FVar31.Value;
    local_540.Number = uVar34;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar41 = true;
  }
  local_288 = local_148;
  local_270 = &local_288;
  local_278 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::Softs::FPBDEvolution::AdvanceOneTimeStep'::__l23::<lambda_10>,void,Chaos::Softs::FSolverParticles_&,int>
              ::Call;
  local_550 = local_55c;
  local_280 = param_1;
  TPBDActiveView<Chaos::Softs::FSolverParticles>::GetActiveRanges
            (&pFVar39->MParticlesActiveView,&local_98);
  local_1b0 = &local_278;
  local_1a8 = &local_98;
  local_1a0 = &local_550;
  local_260 = &local_1b8;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::TPBDActiveView<Chaos::Softs::FSolverParticles>::ParallelFor'::__l2::<lambda_1>,void,int>
              ::Call;
  local_1b8 = &pFVar39->MParticlesActiveView;
  PhysicsParallelFor(local_98.ArrayNum,(TFunctionRef<void___cdecl(int)> *)&local_268,local_575);
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<Chaos::TVector<int,2>_>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  if (bVar40) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar41) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      local_428.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
      local_428.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_450);
      local_428.StatData.Pad[4] = '\0';
      local_428.StatData.Pad[5] = '\0';
      local_428.StatData.Pad[6] = '\0';
      local_428.StatData.Pad[7] = '\0';
      local_428.StatData.Pad[0] = local_450.s.LowPart._0_1_;
      local_428.StatData.Pad[1] = local_450.s.LowPart._1_1_;
      local_428.StatData.Pad[2] = local_450.s.LowPart._2_1_;
      local_428.StatData.Pad[3] = local_450.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&local_428);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
LAB_143c5915b:
  p_Var18 = local_1e0;
  if (local_1e0 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(local_1e0);
    ::operator_delete(p_Var18,0x28);
  }
  p_Var18 = local_a8;
  if (local_a8 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(local_a8);
    ::operator_delete(p_Var18,0x28);
  }
  local_c0 = 0;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Chaos::Softs::FPerParticlePBDCollisionConstraint::FVelocityConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108);
  if ((local_538.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_538.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_538.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_538.StatId,CycleScopeEnd);
  }
  local_538.EmittedEvent = '\0';
  if (cVar38 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveCollisionParticle @ 143c6e010

void __thiscall
Chaos::Softs::FPBDEvolution::RemoveCollisionParticle(FPBDEvolution *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArray<Chaos::Softs::FPBDEvolution::FParticleVievToken,TSizedDefaultAllocator<32>_> *pTVar7;
  int local_18;
  int iStack_14;
  
  if ((-1 < param_1) && (param_1 < (int)(this->MCollisionParticles)._padding_)) {
    uVar5 = 0;
    if (param_1 < *(int *)&(this->MCollisionParticleGroupIds).field_0x10) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(int *)(*(longlong *)&(this->MCollisionParticleGroupIds).field_0x8 + (longlong)param_1 * 4) =
         param_1;
    TPBDActiveView<Chaos::Softs::FSolverCollisionParticles>::ActivateRange
              (&this->MCollisionParticlesActiveView,param_2,false);
    pTVar7 = &this->RemovedCollisionIndices;
    pFVar2 = (pTVar7->AllocatorInstance).Data;
    local_18 = param_1;
    iStack_14 = param_2;
    if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar2 + (longlong)(this->RemovedCollisionIndices).ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = (this->RemovedCollisionIndices).ArrayNum;
    piVar1 = &(this->RemovedCollisionIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar7->AllocatorInstance,piVar1);
    }
    (this->RemovedCollisionIndices).ArrayNum = iVar6 + 1;
    *(ulonglong *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) =
         CONCAT44(iStack_14,local_18);
    return;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3771769369437143284>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDEvolution.cpp"
                     ,0xf4,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// ResetCollisionParticles @ 143c713d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDEvolution::ResetCollisionParticles(FPBDEvolution *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  TArrayCollection::ResizeHelper((TArrayCollection *)&this->MCollisionParticles,param_1);
  piVar1 = (int *)((longlong)&(this->MCollisionParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar5 = 0;
  if (0 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_1 < (int)(*(uint *)((this->MCollisionParticlesActiveView).Ranges.AllocatorInstance.
                                    Data + lVar6) >> 1)) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&(this->MCollisionParticlesActiveView).Ranges,uVar5,Default);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while ((int)uVar5 < (this->MCollisionParticlesActiveView).Ranges.ArrayNum);
  }
  return;
}

// ResetGroups @ 143c714e0

void __thiscall Chaos::Softs::FPBDEvolution::ResetGroups(FPBDEvolution *this)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  *(undefined4 *)&this->field_0x18 = 0;
  plVar4 = *(longlong **)&this->field_0x8;
  iVar2 = *(int *)&this->field_0x10;
  plVar1 = plVar4 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x10 != iVar2) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar4 == plVar1) break;
    plVar3 = (longlong *)*plVar4;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,0);
    }
    plVar4 = plVar4 + 1;
  }
  AddGroups(this,1);
  return;
}

// ResetParticles @ 143c71570

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::Softs::FPBDEvolution::ResetParticles(FPBDEvolution *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *(undefined4 *)&(this->MParticles)._padding_ = 0;
  plVar9 = (longlong *)(this->MParticles)._padding_;
  iVar3 = (int)(this->MParticles)._padding_;
  plVar2 = plVar9 + iVar3;
  while( true ) {
    if ((int)(this->MParticles)._padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar9 == plVar2) break;
    if ((longlong *)*plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar9 + 8))();
    }
    plVar9 = plVar9 + 1;
  }
  piVar1 = (int *)((longlong)&(this->MParticles)._padding_ + 4);
  *piVar1 = *piVar1 + 1;
  uVar8 = 0;
  if (0 < (this->MParticlesActiveView).Ranges.ArrayNum) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->MParticlesActiveView).Ranges.ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(uint *)((this->MParticlesActiveView).Ranges.AllocatorInstance.Data + lVar10) &
          0xfffffffe) != 0) {
        TArray<Chaos::FActiveViewRange,TSizedDefaultAllocator<32>_>::SetNum
                  (&(this->MParticlesActiveView).Ranges,uVar8,Default);
        break;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 4;
    } while ((int)uVar8 < (this->MParticlesActiveView).Ranges.ArrayNum);
  }
  *(undefined4 *)&this->field_0x18 = 0;
  plVar9 = *(longlong **)&this->field_0x8;
  iVar3 = *(int *)&this->field_0x10;
  plVar2 = plVar9 + iVar3;
  while( true ) {
    if (*(int *)&this->field_0x10 != iVar3) {
      `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar9 == plVar2) break;
    plVar4 = (longlong *)*plVar9;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,0);
    }
    plVar9 = plVar9 + 1;
  }
  AddGroups(this,1);
  return;
}

