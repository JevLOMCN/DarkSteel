// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// Apply<Chaos::Softs::FSolverParticles> @ 143c22730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FPBDAxialSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring> FVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  FName local_f0;
  FName local_e8;
  FColor_u_0 local_e0 [2];
  FName local_d8;
  FName local_d0;
  longlong local_c0;
  FPBDAxialSpringConstraints *local_b8;
  FSolverParticles *local_b0;
  float local_a8;
  int local_a4;
  code *local_a0;
  FPBDAxialSpringConstraints **local_98;
  code *local_90;
  FPBDAxialSpringConstraints **local_88;
  FPBDAxialSpringConstraints *local_80;
  FSolverParticles *local_78;
  float local_70;
  int local_6c;
  float local_68;
  
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId106,"FPBDAxialSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
               ,0x6a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId106);
  }
  uVar17 = 0;
  uVar19 = 0;
  FVar12 = StatPtr_STAT_PBD_AxialSpring;
  if (StatPtr_STAT_PBD_AxialSpring == (FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring>)0x0) {
    pFVar11 = ::FName::FName(&local_e8,"STAT_PBD_AxialSpring");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_AxialSpring,*pFVar11,
                        L"Chaos PBD Axial Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_f0 = *(FName *)FVar12;
  bVar7 = false;
  bVar6 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((local_f0.ComparisonIndex.Value.Value != 0) || (local_f0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = local_f0.ComparisonIndex.Value.Value;
        local_d8.Number = local_f0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                   ,0x6b);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_f0,CycleScopeStart);
      bVar8 = true;
      goto LAB_143c228f3;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_f0 = local_d0;
LAB_143c228f3:
  iVar13 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar10 = 0;
  if ((iVar13 < 1) || ((int)*plVar1 <= Chaos_AxialSpring_ParallelConstraintCount)) {
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar22 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticles>(this,param_1,param_2,(int)uVar17,fVar22);
          uVar19 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)*plVar1);
      }
    }
    else {
      uVar20 = uVar17;
      if (0 < (int)this->_padding_) {
        do {
          uVar15 = (uint)uVar20;
          uVar19 = uVar10;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar19 = ~uVar15 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          bVar2 = *(byte *)(this->_padding_ + uVar17);
          if (((int)this->_padding_ <= (int)(uint)bVar2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,uVar15,*(float *)(this->_padding_ + (ulonglong)bVar2 * 4))
          ;
          uVar17 = uVar17 + 1;
          uVar20 = (ulonglong)(uVar15 + 1);
        } while ((int)(uVar15 + 1) < (int)this->_padding_);
      }
    }
  }
  else {
    iVar13 = iVar13 + -1;
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      lVar18 = (longlong)iVar13;
      fVar22 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (bChaos_AxialSpring_ISPC_Enabled == false) {
        uVar20 = uVar17;
        if (0 < lVar18) {
          do {
            uVar15 = (uint)uVar17;
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = uVar15 + 1;
            uVar17 = (ulonglong)uVar15;
            iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar20 * 4);
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_88 = &local_80;
            local_90 = UE::Core::Private::Function::
                       TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
                       ::Call;
            local_80 = this;
            local_78 = param_1;
            local_70 = param_2;
            local_6c = iVar13;
            local_68 = fVar22;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar20 * 4 + 4) - iVar13,
                               (TFunctionRef<void___cdecl(int)> *)&local_90,false);
            uVar20 = uVar20 + 1;
          } while ((longlong)uVar20 < lVar18);
        }
      }
      else {
        uVar20 = uVar17;
        if (0 < lVar18) {
          do {
            uVar15 = (uint)uVar20;
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar15 = uVar15 + 1;
            iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar17 * 4);
            lVar14 = (longlong)iVar13;
            uVar19 = uVar10;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar15 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ApplyAxialSpringConstraints
                      (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar14 * 0xc
                       ,this->_padding_ + lVar14 * 4,this->_padding_ + lVar14 * 4,fVar22,
                       *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               uVar17 * 4 + 4) - iVar13);
            uVar17 = uVar17 + 1;
            uVar20 = (ulonglong)uVar15;
          } while ((longlong)uVar17 < lVar18);
        }
      }
    }
    else if (bChaos_AxialSpring_ISPC_Enabled == false) {
      uVar20 = uVar17;
      if (0 < iVar13) {
        do {
          uVar16 = (uint)uVar17;
          uVar15 = uVar19;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          uVar17 = (ulonglong)uVar16;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar20 * 4
                          );
          uVar15 = uVar10;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_98 = &local_b8;
          local_a0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
                     ::Call;
          local_b8 = this;
          local_b0 = param_1;
          local_a8 = param_2;
          local_a4 = iVar3;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar20 * 4 + 4) - iVar3,
                             (TFunctionRef<void___cdecl(int)> *)&local_a0,false);
          uVar20 = uVar20 + 1;
        } while ((longlong)uVar20 < (longlong)iVar13);
      }
    }
    else {
      uVar20 = uVar17;
      if (0 < iVar13) {
        do {
          uVar15 = (uint)uVar20;
          uVar10 = uVar19;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar17 * 4
                          );
          uVar10 = uVar19;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          uVar17 * 4 + 4);
          local_c0 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar18 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar14 = (longlong)iVar3;
          ApplyAxialSpringConstraintsWithWeightMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar14 * 0xc,
                     this->_padding_ + lVar14 * 4,this->_padding_ + lVar14 * 4,lVar14 + lVar18,
                     local_c0,iVar4 - iVar3);
          uVar17 = uVar17 + 1;
          uVar20 = (ulonglong)uVar15;
        } while ((longlong)uVar17 < (longlong)iVar13);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_f0,CycleScopeEnd);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143c23c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring> FVar14;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  FName local_120;
  FColor_u_0 local_110 [2];
  FName local_108;
  FName local_100;
  longlong local_f8;
  longlong local_f0;
  FName local_e8;
  longlong local_d8;
  FPBDAxialSpringConstraints *local_d0;
  FSolverParticlesRange *local_c8;
  float local_c0;
  int local_bc;
  code *local_b8;
  FPBDAxialSpringConstraints **local_b0;
  code *local_a8;
  FPBDAxialSpringConstraints **local_a0;
  FPBDAxialSpringConstraints *local_98;
  FSolverParticlesRange *local_90;
  float local_88;
  int local_84;
  float local_80;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68 [3];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId106,"FPBDAxialSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
               ,0x6a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId106);
  }
  uVar22 = 0;
  uVar19 = 0;
  FVar14 = StatPtr_STAT_PBD_AxialSpring;
  if (StatPtr_STAT_PBD_AxialSpring == (FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring>)0x0) {
    pFVar13 = ::FName::FName(&local_108,"STAT_PBD_AxialSpring");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_PBD_AxialSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_AxialSpring,*pFVar13,
                        L"Chaos PBD Axial Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_120 = *(FName *)FVar14;
  bVar10 = false;
  bVar9 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((local_120.ComparisonIndex.Value.Value != 0) || (local_120.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_110[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_110[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = local_120.ComparisonIndex.Value.Value;
        local_100.Number = local_120.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDAxialSpringConstraints.cpp"
                   ,0x6b);
        bVar10 = true;
        bVar9 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_120,CycleScopeStart);
      bVar11 = true;
      goto LAB_143c23e4a;
    }
  }
  bVar10 = bVar12;
  bVar9 = bVar11;
  bVar11 = false;
  local_120 = local_e8;
LAB_143c23e4a:
  iVar16 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar16 < 1) || ((int)*plVar1 <= Chaos_AxialSpring_ParallelConstraintCount)) {
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      fVar25 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>(this,param_1,param_2,(int)uVar22,fVar25);
          uVar19 = (int)uVar22 + 1;
          uVar22 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)*plVar1);
      }
    }
    else {
      uVar20 = uVar22;
      if (0 < (int)this->_padding_) {
        do {
          uVar17 = (uint)uVar20;
          uVar19 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar19 = ~uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar2 = *(byte *)(uVar22 + this->_padding_);
          if (((int)this->_padding_ <= (int)(uint)bVar2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,uVar17,*(float *)(this->_padding_ + (ulonglong)bVar2 * 4))
          ;
          uVar22 = uVar22 + 1;
          uVar20 = (ulonglong)(uVar17 + 1);
        } while ((int)(uVar17 + 1) < (int)this->_padding_);
      }
    }
  }
  else {
    iVar16 = iVar16 + -1;
    if (((int)this->_padding_ < 2) ||
       ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
      lVar23 = (longlong)iVar16;
      fVar25 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (bChaos_AxialSpring_ISPC_Enabled == false) {
        uVar20 = uVar22;
        if (0 < lVar23) {
          do {
            uVar18 = (uint)uVar20;
            uVar17 = uVar19;
            if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar18 = uVar18 + 1;
            iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar22 * 4);
            uVar17 = 0;
            if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_a0 = &local_98;
            local_a8 = UE::Core::Private::Function::
                       TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
                       ::Call;
            local_98 = this;
            local_90 = param_1;
            local_88 = param_2;
            local_84 = iVar16;
            local_80 = fVar25;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar22 * 4 + 4) - iVar16,
                               (TFunctionRef<void___cdecl(int)> *)&local_a8,false);
            uVar22 = uVar22 + 1;
            uVar20 = (ulonglong)uVar18;
          } while ((longlong)uVar22 < lVar23);
        }
      }
      else {
        uVar20 = uVar22;
        if (0 < lVar23) {
          do {
            uVar17 = (uint)uVar20;
            uVar19 = 0;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar17 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar17 = uVar17 + 1;
            iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar22 * 4);
            lVar21 = (longlong)iVar16;
            uVar19 = 0;
            if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar17 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            uVar22 * 4 + 4);
            lVar5 = this->_padding_;
            lVar6 = this->_padding_;
            lVar7 = this->_padding_;
            pTVar15 = FSolverParticlesRange::GetPAndInvM(param_1,local_68);
            ApplyAxialSpringConstraints
                      (pTVar15->DataPtr,lVar6 + lVar21 * 0xc,lVar5 + lVar21 * 4,lVar7 + lVar21 * 4,
                       fVar25,iVar3 - iVar16);
            uVar22 = uVar22 + 1;
            uVar20 = (ulonglong)uVar17;
          } while ((longlong)uVar22 < lVar23);
        }
      }
    }
    else if (bChaos_AxialSpring_ISPC_Enabled == false) {
      uVar20 = uVar22;
      if (0 < iVar16) {
        do {
          uVar18 = (uint)uVar20;
          uVar17 = uVar19;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar18 = uVar18 + 1;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar22 * 4
                          );
          uVar17 = uVar19;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar18 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_b0 = &local_d0;
          local_b8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
                     ::Call;
          local_d0 = this;
          local_c8 = param_1;
          local_c0 = param_2;
          local_bc = iVar3;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar22 * 4 + 4) - iVar3,
                             (TFunctionRef<void___cdecl(int)> *)&local_b8,false);
          uVar22 = uVar22 + 1;
          uVar20 = (ulonglong)uVar18;
        } while ((longlong)uVar22 < (longlong)iVar16);
      }
    }
    else if (0 < iVar16) {
      local_f8 = 0;
      do {
        lVar23 = local_f8;
        uVar17 = (uint)uVar22;
        uVar19 = 0;
        if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar17 = uVar17 + 1;
        uVar22 = (ulonglong)uVar17;
        iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar23 * 4);
        lVar21 = (longlong)iVar3;
        uVar19 = 0;
        if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        lVar23 * 4 + 4);
        local_f0 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_d8 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = this->_padding_;
        lVar5 = this->_padding_;
        lVar6 = this->_padding_;
        pTVar15 = FSolverParticlesRange::GetPAndInvM(param_1,&local_78);
        ApplyAxialSpringConstraintsWithWeightMaps
                  (pTVar15->DataPtr,lVar5 + lVar21 * 0xc,lVar23 + lVar21 * 4,lVar6 + lVar21 * 4,
                   local_d8 + lVar21,local_f0,iVar4 - iVar3);
        local_f8 = local_f8 + 1;
      } while (local_f8 < iVar16);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(local_120,CycleScopeEnd);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticles> @ 143c26cd0

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
          (FPBDAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  TVector<float,3> *pTVar9;
  longlong lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a4;
  float local_a0;
  
  lVar10 = (longlong)param_3;
  uVar11 = (uint)~param_3 >> 0x1f;
  uVar7 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  iVar1 = *(int *)(lVar4 + 4 + lVar10 * 0xc);
  iVar2 = *(int *)(lVar4 + lVar10 * 0xc);
  iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0xc);
  FPBDAxialSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticles>
            ((FPBDAxialSpringConstraintsBase *)this,(TVector<float,3> *)&local_a8,param_1,param_3,
             param_4);
  uVar7 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar14 = __real_3f800000;
  fVar12 = __real_3f800000 - *(float *)(this->_padding_ + lVar10 * 4);
  uVar7 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar11;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar13 = *(float *)(this->_padding_ + lVar10 * 4);
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  fVar12 = __real_40000000 / (fVar13 + fVar14);
  pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  if (0.0 < *pfVar8) {
    pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
    fVar13 = fVar12 * *pfVar8;
    pTVar9 = FSolverParticles::P(param_1,iVar2);
    *(float *)pTVar9 = *(float *)pTVar9 - fVar13 * local_a8;
    *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - fVar13 * local_a4;
    *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - fVar13 * local_a0;
  }
  pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1);
  if (0.0 < *pfVar8) {
    uVar7 = 0;
    if (param_3 < (int)this->_padding_) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = this->_padding_;
    pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1);
    fVar13 = fVar12 * *pfVar8 * *(float *)(lVar4 + lVar10 * 4);
    pTVar9 = FSolverParticles::P(param_1,iVar1);
    *(float *)pTVar9 = fVar13 * local_a8 + *(float *)pTVar9;
    *(float *)&pTVar9->field_0x4 = fVar13 * local_a4 + *(float *)&pTVar9->field_0x4;
    *(float *)&pTVar9->field_0x8 = fVar13 * local_a0 + *(float *)&pTVar9->field_0x8;
  }
  pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  if (0.0 < *pfVar8) {
    uVar7 = 0;
    if (param_3 < (int)this->_padding_) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = this->_padding_;
    pfVar8 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
    fVar14 = fVar12 * *pfVar8 * (fVar14 - *(float *)(lVar4 + lVar10 * 4));
    pTVar9 = FSolverParticles::P(param_1,iVar3);
    *(float *)pTVar9 = fVar14 * local_a8 + *(float *)pTVar9;
    *(float *)&pTVar9->field_0x4 = fVar14 * local_a4 + *(float *)&pTVar9->field_0x4;
    *(float *)&pTVar9->field_0x8 = fVar14 * local_a0 + *(float *)&pTVar9->field_0x8;
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticlesRange> @ 143c27400

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
          (FPBDAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3
          ,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_98;
  float local_94;
  float local_90;
  
  lVar11 = (longlong)param_3;
  uVar12 = (uint)~param_3 >> 0x1f;
  uVar7 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = this->_padding_;
  iVar1 = *(int *)(lVar4 + 8 + lVar11 * 0xc);
  iVar2 = *(int *)(lVar4 + lVar11 * 0xc);
  iVar3 = *(int *)(lVar4 + 4 + lVar11 * 0xc);
  FPBDAxialSpringConstraintsBase::GetDelta<Chaos::Softs::FSolverParticlesRange>
            ((FPBDAxialSpringConstraintsBase *)this,(TVector<float,3> *)&local_98,param_1,param_3,
             param_4);
  uVar7 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar14 = __real_3f800000;
  fVar13 = __real_3f800000 - *(float *)(this->_padding_ + lVar11 * 4);
  uVar8 = 0;
  uVar7 = uVar8;
  if (param_3 < (int)this->_padding_) {
    uVar7 = uVar12;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar15 = *(float *)(this->_padding_ + lVar11 * 4);
  if (fVar15 <= fVar13) {
    fVar15 = fVar13;
  }
  fVar13 = __real_40000000 / (fVar15 + fVar14);
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
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar2);
  if (0.0 < *pfVar9) {
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
    pfVar9 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar2);
    fVar15 = fVar13 * *pfVar9;
    fVar16 = fVar15 * local_98;
    fVar17 = fVar15 * local_94;
    fVar15 = fVar15 * local_90;
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
    pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar2);
    *(float *)pTVar10 = *(float *)pTVar10 - fVar16;
    *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar17;
    *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar15;
  }
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
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar3);
  if (0.0 < *pfVar9) {
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
    pfVar9 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar3);
    uVar7 = uVar8;
    if (param_3 < (int)this->_padding_) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    fVar15 = fVar13 * *pfVar9 * *(float *)(this->_padding_ + lVar11 * 4);
    fVar17 = local_94 * fVar15;
    fVar16 = fVar15 * local_98;
    fVar15 = local_90 * fVar15;
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
    pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar3);
    *(float *)pTVar10 = fVar16 + *(float *)pTVar10;
    *(float *)&pTVar10->field_0x4 = fVar17 + *(float *)&pTVar10->field_0x4;
    *(float *)&pTVar10->field_0x8 = fVar15 + *(float *)&pTVar10->field_0x8;
  }
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
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar1);
  if (0.0 < *pfVar9) {
    if (param_3 < (int)this->_padding_) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar4 = this->_padding_;
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
    pfVar9 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar1);
    fVar14 = fVar13 * *pfVar9 * (fVar14 - *(float *)(lVar4 + lVar11 * 4));
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
    pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar1);
    *(float *)pTVar10 = fVar14 * local_98 + *(float *)pTVar10;
    *(float *)&pTVar10->field_0x4 = fVar14 * local_94 + *(float *)&pTVar10->field_0x4;
    *(float *)&pTVar10->field_0x8 = fVar14 * local_90 + *(float *)&pTVar10->field_0x8;
  }
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143c33db0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FPBDAxialSpringConstraints *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FSolverParticles *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res20 [8];
  uint local_b8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = (int)this->_padding_;
  local_res10 = __return_storage_ptr__;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>
            (&local_78,(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar6,*(int *)((longlong)&this->_padding_ + 4) + iVar6);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar16 = local_78.ArrayNum + 1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar10 = (ulonglong)local_78.ArrayNum;
  local_b8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar10 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar11.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar9 = local_58;
    piVar18 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar15 = &this->ConstraintsPerColorStartIndex;
    plVar13 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data;
    if (local_78.ArrayNum != (uint)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar17 = (pTVar15->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data == pTVar9) {
      if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar18 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar6 == *piVar18) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar15->AllocatorInstance,piVar18);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar6 + 1;
      *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_b8[0];
      if ((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)plVar13 != &local_90) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_90.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_90.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_90.ArrayMax;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar13 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar13 != &local_a0) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar13 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar13 != &local_b0) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,__return_storage_ptr__);
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar18 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    iVar6 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar6 == *piVar18) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar15->AllocatorInstance,piVar18);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar6 + 1;
    *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_b8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum;
    uVar10 = (ulonglong)(int)local_80;
    pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->AllocatorInstance).Data;
    local_60 = pFVar17 + uVar10 * 4;
    while( true ) {
      pFVar4 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar17 == pFVar4) break;
      uVar16 = *(uint *)pFVar17;
      lVar19 = (longlong)(int)uVar16;
      uVar14 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar1 = *(undefined8 *)(this->_padding_ + lVar19 * 0xc);
      uVar2 = *(undefined4 *)(this->_padding_ + 8 + lVar19 * 0xc);
      uVar7 = 0;
      if ((int)local_b8[0] < local_90.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar12 * 0xc) = uVar1;
      *(undefined4 *)(local_90.AllocatorInstance.Data + lVar12 * 0xc + 8) = uVar2;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar7 = 0;
      if ((int)local_b8[0] < local_a0.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      *(undefined4 *)(local_a0.AllocatorInstance.Data + lVar12 * 4) = uVar2;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar7 = 0;
      if ((int)local_b8[0] < local_b0.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      uVar7 = local_b8[0];
      __return_storage_ptr__ = local_res10;
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar12 * 4) = uVar2;
      uVar8 = 0;
      if ((int)uVar16 < local_res10->ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      uVar10 = (ulonglong)local_80;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar19 * 4) = uVar7;
      local_b8[0] = local_b8[0] + 1;
      pFVar17 = pFVar17 + 4;
      FVar11.Data = (FScriptContainerElement *)local_68;
    }
    uVar10 = (ulonglong)local_7c;
    FVar11.Data = FVar11.Data + 0x10;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143c34a60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FPBDAxialSpringConstraints *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FSolverParticlesRange *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int *piVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res20 [8];
  uint local_b8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = (int)this->_padding_;
  local_res10 = __return_storage_ptr__;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>
            (&local_78,(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar6,*(int *)((longlong)&this->_padding_ + 4) + iVar6);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)this->_padding_,Default);
  uVar16 = local_78.ArrayNum + 1;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar10 = (ulonglong)local_78.ArrayNum;
  local_b8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar10 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar11.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar9 = local_58;
    piVar18 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar15 = &this->ConstraintsPerColorStartIndex;
    plVar13 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data;
    if (local_78.ArrayNum != (uint)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar17 = (pTVar15->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data == pTVar9) {
      if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar18 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      iVar6 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar6 == *piVar18) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar15->AllocatorInstance,piVar18);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar6 + 1;
      *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_b8[0];
      if ((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)plVar13 != &local_90) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_90.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_90.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_90.ArrayMax;
        local_90.ArrayNum = 0;
        local_90.ArrayMax = 0;
        local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar13 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar13 != &local_a0) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar13 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar13 != &local_b0) {
        if ((void *)*plVar13 != (void *)0x0) {
          FMemory::Free((void *)*plVar13);
        }
        *plVar13 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,__return_storage_ptr__);
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar18 * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar9;
    }
    iVar6 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar6 == *piVar18) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar15->AllocatorInstance,piVar18);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar6 + 1;
    *(uint *)((pTVar15->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_b8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum;
    uVar10 = (ulonglong)(int)local_80;
    pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->AllocatorInstance).Data;
    local_60 = pFVar17 + uVar10 * 4;
    while( true ) {
      pFVar4 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar11.Data)->ArrayNum != (int)uVar10) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar17 == pFVar4) break;
      uVar16 = *(uint *)pFVar17;
      lVar19 = (longlong)(int)uVar16;
      uVar14 = ~uVar16 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar1 = *(undefined8 *)(this->_padding_ + lVar19 * 0xc);
      uVar2 = *(undefined4 *)(this->_padding_ + 8 + lVar19 * 0xc);
      uVar7 = 0;
      if ((int)local_b8[0] < local_90.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar12 * 0xc) = uVar1;
      *(undefined4 *)(local_90.AllocatorInstance.Data + lVar12 * 0xc + 8) = uVar2;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar7 = 0;
      if ((int)local_b8[0] < local_a0.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      *(undefined4 *)(local_a0.AllocatorInstance.Data + lVar12 * 4) = uVar2;
      uVar7 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar7 = uVar14;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      lVar12 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar19 * 4);
      uVar7 = 0;
      if ((int)local_b8[0] < local_b0.ArrayNum) {
        uVar7 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      uVar7 = local_b8[0];
      __return_storage_ptr__ = local_res10;
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar12 * 4) = uVar2;
      uVar8 = 0;
      if ((int)uVar16 < local_res10->ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar9;
      }
      uVar10 = (ulonglong)local_80;
      *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + lVar19 * 4) = uVar7;
      local_b8[0] = local_b8[0] + 1;
      pFVar17 = pFVar17 + 4;
      FVar11.Data = (FScriptContainerElement *)local_68;
    }
    uVar10 = (ulonglong)local_7c;
    FVar11.Data = FVar11.Data + 0x10;
  } while( true );
}

// ~FPBDAxialSpringConstraints @ 143c453f0

void __thiscall
Chaos::Softs::FPBDAxialSpringConstraints::~FPBDAxialSpringConstraints
          (FPBDAxialSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDAxialSpringConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this);
  return;
}

