// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// Apply<Chaos::Softs::FSolverParticles> @ 143c23060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *this_00;
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PBD_Bending> FVar8;
  ulonglong uVar9;
  uint uVar10;
  FName FVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res18 [2];
  char local_res20 [8];
  char local_178;
  byte local_177;
  char local_176;
  int local_174;
  FName local_170;
  FName local_168;
  float local_160;
  float local_15c;
  int local_158 [2];
  longlong local_150;
  FColor_u_0 local_148;
  float local_144;
  float local_140 [2];
  FName local_138;
  FName local_130;
  longlong local_128;
  FName local_120;
  longlong local_110;
  code *local_108;
  int **local_100;
  code *local_f8;
  int **local_f0;
  int *local_e8;
  FPBDBendingConstraints *local_e0;
  FSolverParticles *local_d8;
  float *local_d0;
  float *local_c8;
  float *local_c0;
  int *local_b8;
  char *local_b0;
  FPBDBendingConstraints *local_a8;
  float *local_a0;
  char *local_98;
  float *local_90;
  FSolverParticles *local_88;
  float *local_80;
  
  bVar19 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId152,"FPBDBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraints.cpp"
               ,0x98);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId152);
  }
  uVar13 = 0;
  FVar8 = StatPtr_STAT_PBD_Bending;
  if (StatPtr_STAT_PBD_Bending == (FThreadSafeStaticStat<FStat_STAT_PBD_Bending>)0x0) {
    pFVar7 = ::FName::FName(&local_138,"STAT_PBD_Bending");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PBD_Bending>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Bending,*pFVar7,
                       L"Chaos PBD Bending Constraint","STATGROUP_Chaos","STATCAT_Advanced",L"Chaos"
                       ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar14 = 0;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  local_177 = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar14 = 1;
      local_177 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_130.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraints.cpp"
                   ,0x99);
        bVar14 = 3;
        local_177 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_170 = FVar11;
      local_168 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      local_177 = bVar14 | 4;
      goto LAB_143c2322e;
    }
  }
  local_170 = local_120;
  FVar11 = local_120;
LAB_143c2322e:
  this_00 = &this->_padding_;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_178 = '\0';
  }
  else {
    local_178 = '\x01';
  }
  iVar2 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar16 = 0;
  if ((iVar2 < 1) || ((int)*plVar1 <= Chaos_Bending_ParallelConstraintCount)) {
    if ((local_res20[0] == '\0') && (local_178 == '\0')) {
      fVar20 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      fVar21 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,param_1,local_res18[0],(int)uVar13,fVar20,fVar21);
          uVar16 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar16;
        } while ((int)uVar16 < (int)*plVar1);
      }
    }
    else {
      fVar20 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      fVar21 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      uVar17 = uVar13;
      if (0 < (int)*plVar1) {
        do {
          uVar6 = (uint)uVar17;
          fVar23 = fVar20;
          if (local_res20[0] != '\0') {
            uVar10 = uVar16;
            if ((int)uVar6 < (int)this->_padding_) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar14 = *(byte *)(uVar13 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar14) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar23 = *(float *)(this->_padding_ + (ulonglong)bVar14 * 4);
          }
          fVar22 = fVar21;
          if (local_178 != '\0') {
            uVar10 = 0;
            if ((int)uVar6 < (int)this->_padding_) {
              uVar10 = ~uVar6 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar14 = *(byte *)((longlong)(int)uVar6 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar14) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar22 = *(float *)(this->_padding_ + (ulonglong)bVar14 * 4);
          }
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,param_1,local_res18[0],uVar6,fVar23,fVar22);
          uVar13 = uVar13 + 1;
          FVar11 = local_170;
          uVar17 = (ulonglong)(uVar6 + 1);
        } while ((int)(uVar6 + 1) < (int)*plVar1);
      }
    }
  }
  else {
    iVar2 = iVar2 + -1;
    lVar12 = (longlong)iVar2;
    local_150 = lVar12;
    if ((local_res20[0] == '\0') && (local_178 == '\0')) {
      local_160 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      local_15c = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      lVar18 = local_150;
      if (bChaos_Bending_ISPC_Enabled == false) {
        uVar17 = uVar13;
        if (0 < lVar12) {
          do {
            uVar10 = (uint)uVar13;
            uVar6 = uVar16;
            if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar10 = uVar10 + 1;
            uVar13 = (ulonglong)uVar10;
            local_158[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar17 * 4);
            uVar6 = uVar16;
            if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_e8 = local_158;
            local_d0 = local_res18;
            local_c8 = &local_160;
            local_108 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l17::<lambda_1>,void,int>
                        ::Call;
            local_c0 = &local_15c;
            local_100 = &local_e8;
            local_e0 = this;
            local_d8 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar17 * 4 + 4) - local_158[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_108,false);
            uVar17 = uVar17 + 1;
            FVar11 = local_170;
          } while ((longlong)uVar17 < lVar12);
        }
      }
      else {
        uVar17 = uVar13;
        if (0 < lVar12) {
          do {
            uVar10 = (uint)uVar17;
            uVar6 = 0;
            if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar10 = uVar10 + 1;
            iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            uVar13 * 4);
            lVar12 = (longlong)iVar2;
            uVar6 = uVar16;
            if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            ApplyBendingConstraints
                      (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                       lVar12 * 0x10 + this->_padding_,this->_padding_ + lVar12 * 4,
                       this->_padding_ + lVar12,local_160,local_15c,
                       *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               uVar13 * 4 + 4) - iVar2);
            uVar13 = uVar13 + 1;
            FVar11 = local_170;
            uVar17 = (ulonglong)uVar10;
          } while ((longlong)uVar13 < lVar18);
        }
      }
    }
    else if (bChaos_Bending_ISPC_Enabled == false) {
      local_144 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      local_140[0] = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      lVar18 = local_150;
      uVar17 = uVar13;
      if (0 < lVar12) {
        do {
          uVar10 = (uint)uVar17;
          uVar6 = uVar16;
          if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar10 = uVar10 + 1;
          local_174 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              uVar13 * 4);
          uVar6 = uVar16;
          if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_b8 = &local_174;
          local_b0 = local_res20;
          local_a0 = &local_144;
          local_f8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>,void,int>
                     ::Call;
          local_98 = &local_178;
          local_90 = local_140;
          local_80 = local_res18;
          local_f0 = &local_b8;
          local_a8 = this;
          local_88 = param_1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar13 * 4 + 4) - local_174,
                             (TFunctionRef<void___cdecl(int)> *)&local_f8,false);
          uVar13 = uVar13 + 1;
          FVar11 = local_170;
          uVar17 = (ulonglong)uVar10;
        } while ((longlong)uVar13 < lVar18);
      }
    }
    else if (0 < iVar2) {
      local_168.ComparisonIndex.Value = 0;
      local_168.Number = 0;
      uVar17 = uVar13;
      do {
        FVar11 = local_168;
        uVar10 = (uint)uVar17;
        uVar6 = uVar16;
        if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 1;
        uVar17 = (ulonglong)uVar10;
        iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        (longlong)FVar11 * 4);
        lVar18 = (longlong)iVar2;
        uVar6 = uVar16;
        if ((int)uVar10 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_150 = CONCAT44(local_150._4_4_,
                             *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)FVar11 * 4 + 4) - iVar2);
        local_110 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar15 = uVar13;
        if (local_178 != '\0') {
          lVar3 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar11 = local_168;
          uVar15 = lVar18 + lVar3;
        }
        local_176 = local_178;
        local_128 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = uVar13;
        if (local_res20[0] != '\0') {
          lVar3 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = lVar18 + lVar3;
          FVar11 = local_168;
        }
        ApplyBendingConstraintsWithMaps
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,lVar18 * 0x10 + this->_padding_,
                   this->_padding_ + lVar18 * 4,this->_padding_ + lVar18,local_res20[0],uVar9,
                   local_128,local_176,uVar15,local_110,(undefined4)local_150);
        local_168 = (FName)((longlong)FVar11 + 1);
        FVar11 = local_170;
      } while ((longlong)local_168 < lVar12);
    }
  }
  bVar14 = local_177;
  if ((local_177 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar14 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar14 & 4) != 0) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143c245e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *this_00;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PBD_Bending> FVar10;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar11;
  uint uVar12;
  uint uVar13;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res18 [2];
  char local_res20 [8];
  char local_1b8;
  byte local_1b7;
  char local_1b6;
  int local_1b4;
  FName local_1b0;
  float local_1a8;
  float local_1a4;
  int local_1a0 [2];
  longlong local_198;
  longlong local_190;
  FColor_u_0 local_188;
  float local_184;
  float local_180 [2];
  longlong local_178;
  FName local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  FName local_150;
  FName local_148;
  longlong local_138;
  code *local_130;
  int **local_128;
  code *local_120;
  int **local_118;
  int *local_110;
  FPBDBendingConstraints *local_108;
  FSolverParticlesRange *local_100;
  float *local_f8;
  float *local_f0;
  float *local_e8;
  int *local_e0;
  char *local_d8;
  FPBDBendingConstraints *local_d0;
  float *local_c8;
  char *local_c0;
  float *local_b8;
  FSolverParticlesRange *local_b0;
  float *local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_a0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_90 [5];
  
  bVar23 = -1 < CpuChannel->Enabled;
  local_res18[0] = param_2;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId152,"FPBDBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraints.cpp"
               ,0x98);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId152);
  }
  uVar20 = 0;
  FVar10 = StatPtr_STAT_PBD_Bending;
  if (StatPtr_STAT_PBD_Bending == (FThreadSafeStaticStat<FStat_STAT_PBD_Bending>)0x0) {
    pFVar9 = ::FName::FName(&local_150,"STAT_PBD_Bending");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_PBD_Bending>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBD_Bending,*pFVar9,
                        L"Chaos PBD Bending Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar17 = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  local_1b7 = 0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar17 = 1;
      local_1b7 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_170.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_170.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_170,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDBendingConstraints.cpp"
                   ,0x99);
        bVar17 = 3;
        local_1b7 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      local_1b7 = bVar17 | 4;
      goto LAB_143c247aa;
    }
  }
  local_1b0 = local_148;
  FVar14 = local_148;
LAB_143c247aa:
  this_00 = &this->_padding_;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_1b8 = '\0';
  }
  else {
    local_1b8 = '\x01';
  }
  iVar2 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar15 = 0;
  if ((iVar2 < 1) || ((int)*plVar1 <= Chaos_Bending_ParallelConstraintCount)) {
    if ((local_res20[0] == '\0') && (local_1b8 == '\0')) {
      fVar24 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      fVar25 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (0 < (int)*plVar1) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],(int)uVar20,fVar24,fVar25);
          uVar15 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar15;
        } while ((int)uVar15 < (int)*plVar1);
      }
    }
    else {
      fVar24 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      fVar25 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      uVar22 = uVar20;
      if (0 < (int)*plVar1) {
        do {
          uVar12 = (uint)uVar22;
          fVar27 = fVar24;
          if (local_res20[0] != '\0') {
            uVar13 = uVar15;
            if ((int)uVar12 < (int)this->_padding_) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar17 = *(byte *)(uVar20 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar17) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar27 = *(float *)(this->_padding_ + (ulonglong)bVar17 * 4);
          }
          fVar26 = fVar25;
          if (local_1b8 != '\0') {
            uVar13 = 0;
            if ((int)uVar12 < (int)this->_padding_) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar17 = *(byte *)((longlong)(int)uVar12 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar17) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar26 = *(float *)(this->_padding_ + (ulonglong)bVar17 * 4);
          }
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],uVar12,fVar27,fVar26);
          uVar20 = uVar20 + 1;
          FVar14 = local_1b0;
          uVar22 = (ulonglong)(uVar12 + 1);
        } while ((int)(uVar12 + 1) < (int)*plVar1);
      }
    }
  }
  else {
    iVar2 = iVar2 + -1;
    lVar18 = (longlong)iVar2;
    local_198 = lVar18;
    if ((local_res20[0] == '\0') && (local_1b8 == '\0')) {
      local_1a8 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      local_1a4 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      if (bChaos_Bending_ISPC_Enabled == false) {
        uVar22 = uVar20;
        if (0 < lVar18) {
          do {
            uVar13 = (uint)uVar22;
            uVar12 = 0;
            if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar13 = uVar13 + 1;
            local_1a0[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar20 * 4);
            uVar12 = uVar15;
            if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_110 = local_1a0;
            local_f8 = local_res18;
            local_f0 = &local_1a8;
            local_130 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l17::<lambda_1>,void,int>
                        ::Call;
            local_e8 = &local_1a4;
            local_128 = &local_110;
            local_108 = this;
            local_100 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar20 * 4 + 4) - local_1a0[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_130,false);
            uVar20 = uVar20 + 1;
            FVar14 = local_1b0;
            uVar22 = (ulonglong)uVar13;
          } while ((longlong)uVar20 < lVar18);
        }
      }
      else if (0 < lVar18) {
        local_190 = 0;
        do {
          lVar18 = local_190;
          uVar12 = (uint)uVar20;
          uVar15 = 0;
          if ((int)uVar12 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar12 = uVar12 + 1;
          uVar20 = (ulonglong)uVar12;
          iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar18 * 4
                          );
          lVar19 = (longlong)iVar2;
          uVar15 = 0;
          if ((int)uVar12 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar25 = local_1a4;
          fVar24 = local_1a8;
          lVar21 = this->_padding_;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          lVar18 * 4 + 4);
          lVar18 = this->_padding_;
          lVar4 = this->_padding_;
          pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_a0);
          ApplyBendingConstraints
                    (pTVar11->DataPtr,lVar4 + lVar19 * 0x10,lVar18 + lVar19 * 4,lVar21 + lVar19,
                     fVar24,fVar25,iVar3 - iVar2);
          local_190 = local_190 + 1;
          FVar14 = local_1b0;
        } while (local_190 < local_198);
      }
    }
    else if (bChaos_Bending_ISPC_Enabled == false) {
      local_184 = FPBDWeightMap::GetLow((FPBDWeightMap *)this_00);
      local_180[0] = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
      uVar22 = uVar20;
      if (0 < lVar18) {
        do {
          uVar13 = (uint)uVar22;
          uVar12 = uVar15;
          if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = uVar13 + 1;
          local_1b4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              uVar20 * 4);
          uVar12 = uVar15;
          if ((int)uVar13 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_e0 = &local_1b4;
          local_d8 = local_res20;
          local_c8 = &local_184;
          local_120 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::<lambda_2>,void,int>
                      ::Call;
          local_c0 = &local_1b8;
          local_b8 = local_180;
          local_a8 = local_res18;
          local_118 = &local_e0;
          local_d0 = this;
          local_b0 = param_1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar20 * 4 + 4) - local_1b4,
                             (TFunctionRef<void___cdecl(int)> *)&local_120,false);
          uVar20 = uVar20 + 1;
          FVar14 = local_1b0;
          uVar22 = (ulonglong)uVar13;
        } while ((longlong)uVar20 < lVar18);
      }
    }
    else if (0 < iVar2) {
      local_158 = 0;
      do {
        lVar19 = local_158;
        uVar12 = (uint)uVar20;
        uVar15 = 0;
        if ((int)uVar12 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = uVar12 + 1;
        uVar20 = (ulonglong)uVar12;
        iVar2 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar19 * 4);
        lVar21 = (longlong)iVar2;
        uVar15 = 0;
        if ((int)uVar12 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_190 = CONCAT44(local_190._4_4_,
                             *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar19 * 4 + 4) - iVar2);
        local_138 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1b8 == '\0') {
          local_168 = 0;
        }
        else {
          lVar19 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_168 = lVar21 + lVar19;
        }
        local_1b6 = local_1b8;
        local_178 = this->_padding_;
        local_198 = lVar21;
        if (((int)this->_padding_ < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_res20[0] == '\0') {
          local_160 = 0;
        }
        else {
          lVar19 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_160 = lVar21 + lVar19;
        }
        cVar7 = local_res20[0];
        lVar19 = this->_padding_;
        lVar4 = this->_padding_;
        lVar16 = local_198 * 0x10;
        lVar5 = this->_padding_;
        pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,local_90);
        ApplyBendingConstraintsWithMaps
                  (pTVar11->DataPtr,lVar16 + lVar5,lVar19 + lVar21 * 4,lVar4 + lVar21,cVar7,
                   local_160,local_178,local_1b6,local_168,local_138,(undefined4)local_190);
        local_158 = local_158 + 1;
        FVar14 = local_1b0;
      } while (local_158 < lVar18);
    }
  }
  bVar17 = local_1b7;
  if ((local_1b7 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar17 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar17 & 4) != 0) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticles> @ 143c270c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  TVector<float,3> *pTVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_d8 [32];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar14 = (longlong)param_3;
  uVar8 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = this->_padding_;
  iVar1 = *(int *)(lVar5 + lVar14 * 0x10);
  iVar2 = *(int *)(lVar5 + 4 + lVar14 * 0x10);
  iVar3 = *(int *)(lVar5 + 8 + lVar14 * 0x10);
  iVar4 = *(int *)(lVar5 + 0xc + lVar14 * 0x10);
  uVar8 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = this->_padding_;
  pTVar9 = FSolverParticles::P(param_1,*(int *)(lVar5 + lVar14 * 0x10));
  pTVar10 = FSolverParticles::P(param_1,*(int *)(lVar5 + 4 + lVar14 * 0x10));
  pTVar11 = FSolverParticles::P(param_1,*(int *)(lVar5 + 8 + lVar14 * 0x10));
  pTVar12 = FSolverParticles::P(param_1,*(int *)(lVar5 + 0xc + lVar14 * 0x10));
  FPBDBendingConstraintsBase::CalcGradients
            ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_98,pTVar9,pTVar10,pTVar11,
             pTVar12,(float *)0x0);
  fVar15 = FPBDBendingConstraintsBase::GetScalingFactor<Chaos::Softs::FSolverParticles>
                     ((FPBDBendingConstraintsBase *)this,param_1,param_3,
                      (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_98,param_4,
                      param_5);
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar1);
  fVar16 = fVar15 * *pfVar13;
  pTVar9 = FSolverParticles::P(param_1,iVar1);
  *(float *)pTVar9 = *(float *)pTVar9 - fVar16 * local_98;
  *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - fVar16 * local_94;
  *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - fVar16 * local_90;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar16 = fVar15 * *pfVar13;
  pTVar9 = FSolverParticles::P(param_1,iVar2);
  *(float *)pTVar9 = *(float *)pTVar9 - fVar16 * local_8c;
  *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - fVar16 * local_88;
  *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - fVar16 * local_84;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar16 = fVar15 * *pfVar13;
  pTVar9 = FSolverParticles::P(param_1,iVar3);
  *(float *)pTVar9 = *(float *)pTVar9 - fVar16 * local_80;
  *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - fVar16 * local_7c;
  *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - fVar16 * local_78;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar15 = fVar15 * *pfVar13;
  pTVar9 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar9 = *(float *)pTVar9 - fVar15 * local_74;
  *(float *)&pTVar9->field_0x4 = *(float *)&pTVar9->field_0x4 - fVar15 * local_70;
  *(float *)&pTVar9->field_0x8 = *(float *)&pTVar9->field_0x8 - fVar15 * local_6c;
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticlesRange> @ 143c27990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  TVector<float,3> *pTVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_e8 [32];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  lVar11 = (longlong)param_3;
  uVar8 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar8 = (uint)~param_3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = this->_padding_;
  iVar1 = *(int *)(lVar5 + lVar11 * 0x10);
  iVar2 = *(int *)(lVar5 + 4 + lVar11 * 0x10);
  iVar3 = *(int *)(lVar5 + 8 + lVar11 * 0x10);
  iVar4 = *(int *)(lVar5 + 0xc + lVar11 * 0x10);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticlesRange>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_b8,param_1,param_3);
  fVar12 = FPBDBendingConstraintsBase::GetScalingFactor<Chaos::Softs::FSolverParticlesRange>
                     ((FPBDBendingConstraintsBase *)this,param_1,param_3,
                      (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_b8,param_4,
                      param_5);
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar1);
  fVar13 = fVar12 * *pfVar9;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar1);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar13 * local_b8;
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar13 * local_b4;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar13 * local_b0;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar2);
  fVar13 = fVar12 * *pfVar9;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar2);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar13 * local_ac;
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar13 * local_a8;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar13 * local_a4;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar3);
  fVar13 = fVar12 * *pfVar9;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar13 * local_a0;
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar13 * local_9c;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar13 * local_98;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pfVar9 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      *(int *)&param_1->field_0x10 + iVar4);
  fVar12 = fVar12 * *pfVar9;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar12 * local_94;
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar12 * local_90;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar12 * local_8c;
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143c343f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FPBDBendingConstraints *this,FSolverParticles *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar9 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>
            (&local_78,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar9,*(int *)((longlong)&this->_padding_ + 4) + iVar9);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  uVar18 = local_78.ArrayNum + 1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar12 = (ulonglong)local_78.ArrayNum;
  local_c8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar12 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar13.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar7 = local_58;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    piVar16 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    plVar20 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data;
    if (local_78.ArrayNum != (uint)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data == pTVar7) {
      if (((pFVar19 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar19 + (longlong)*piVar16 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar17->AllocatorInstance,piVar16);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
      if ((TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)plVar20 != &local_a0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar20 = &this->_padding_;
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar20 != &local_b0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar20 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar20 != &local_c0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_c0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_c0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar19 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar19 + (longlong)*piVar16 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar16) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar17->AllocatorInstance,piVar16);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->AllocatorInstance).Data;
    local_60 = pFVar19 + uVar12 * 4;
    while( true ) {
      pFVar6 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar6) break;
      uVar18 = *(uint *)pFVar19;
      lVar21 = (longlong)(int)uVar18;
      uVar15 = ~uVar18 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      puVar1 = (undefined8 *)(this->_padding_ + lVar21 * 0x10);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar10 = 0;
      if ((int)local_c8[0] < local_a0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10) = uVar3;
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10 + 8) = uVar5;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar3 = *(undefined8 *)(this->_padding_ + lVar21 * 8);
      uVar10 = 0;
      if ((int)local_c8[0] < local_b0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar14 * 8) = uVar3;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar21 * 4);
      uVar10 = 0;
      if ((int)local_c8[0] < local_c0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = local_c8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar11 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar21 * 4) = uVar10;
      local_c8[0] = local_c8[0] + 1;
      pFVar19 = pFVar19 + 4;
      FVar13.Data = (FScriptContainerElement *)local_68;
    }
    uVar12 = (ulonglong)local_80;
    FVar13.Data = FVar13.Data + 0x10;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143c350a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDBendingConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FPBDBendingConstraints *this,FSolverParticlesRange *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar9 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
            (&local_78,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar9,*(int *)((longlong)&this->_padding_ + 4) + iVar9);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  uVar18 = local_78.ArrayNum + 1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar12 = (ulonglong)local_78.ArrayNum;
  local_c8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar12 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar13.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar7 = local_58;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    piVar16 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    plVar20 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data;
    if (local_78.ArrayNum != (uint)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data == pTVar7) {
      if (((pFVar19 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar19 + (longlong)*piVar16 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar17->AllocatorInstance,piVar16);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
      if ((TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)plVar20 != &local_a0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar20 = &this->_padding_;
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar20 != &local_b0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar20 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar20 != &local_c0) {
        if ((void *)*plVar20 != (void *)0x0) {
          FMemory::Free((void *)*plVar20);
        }
        *plVar20 = (longlong)local_c0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_c0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.AllocatorInstance.Data);
      }
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data,
                 local_78.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_78.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar19 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar19 + (longlong)*piVar16 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar16) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar17->AllocatorInstance,piVar16);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->AllocatorInstance).Data;
    local_60 = pFVar19 + uVar12 * 4;
    while( true ) {
      pFVar6 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar6) break;
      uVar18 = *(uint *)pFVar19;
      lVar21 = (longlong)(int)uVar18;
      uVar15 = ~uVar18 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      puVar1 = (undefined8 *)(this->_padding_ + lVar21 * 0x10);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar10 = 0;
      if ((int)local_c8[0] < local_a0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10) = uVar3;
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10 + 8) = uVar5;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar3 = *(undefined8 *)(this->_padding_ + lVar21 * 8);
      uVar10 = 0;
      if ((int)local_c8[0] < local_b0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar14 * 8) = uVar3;
      uVar10 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar21 * 4);
      uVar10 = 0;
      if ((int)local_c8[0] < local_c0.ArrayNum) {
        uVar10 = ~local_c8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = local_c8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar11 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar21 * 4) = uVar10;
      local_c8[0] = local_c8[0] + 1;
      pFVar19 = pFVar19 + 4;
      FVar13.Data = (FScriptContainerElement *)local_68;
    }
    uVar12 = (ulonglong)local_80;
    FVar13.Data = FVar13.Data + 0x10;
  } while( true );
}

// operator() @ 143c50c90

void __thiscall
`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l28::<lambda_2>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar2 = **(float **)((longlong)this + 0x18);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x30),iVar1);
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar3 = **(float **)((longlong)this + 0x28);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xb0),iVar1);
  }
  Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x30),**(float **)((longlong)this + 0x38),iVar1
             ,fVar2,fVar3);
  return;
}

// operator() @ 143c50d30

void __thiscall
`Chaos::Softs::FPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l28::
<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar2 = **(float **)((longlong)this + 0x18);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x30),iVar1);
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar3 = **(float **)((longlong)this + 0x28);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xb0),iVar1);
  }
  Chaos::Softs::FPBDBendingConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x30),**(float **)((longlong)this + 0x38),
             iVar1,fVar2,fVar3);
  return;
}

// SetProperties @ 143c754e0

void __thiscall
Chaos::Softs::FPBDBendingConstraints::SetProperties
          (FPBDBendingConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  TVector<float,2> TVar5;
  ECollectionPropertyFlags EVar6;
  bool bVar7;
  FString *pFVar8;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar9;
  FPBDWeightMap *pFVar10;
  byte bVar11;
  TArrayView<unsigned_char_const_,int> *pTVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  undefined8 local_res20;
  TVector2<float>_u_0 local_1b0;
  TVector2<float>_u_0 local_1a8;
  TArrayView<float_const_,int> local_1a0;
  TArrayView<float_const_,int> local_190;
  TArrayView<float_const_,int> local_180;
  undefined1 local_170 [40];
  undefined8 local_148;
  bool local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined1 local_128 [40];
  undefined8 local_100;
  bool local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_e0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  FPBDWeightMap local_b0 [2];
  
  fVar4 = __real_3f800000;
  iVar1 = (this->BendingElementStiffnessIndex).Index;
  if (iVar1 != -1) {
    pTVar12 = &param_1->FlagsArray;
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar12);
    if (((EVar6 & Animatable) != None) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->BendingElementStiffnessIndex).Index,pTVar12),
       (char)EVar6 < '\0')) {
      if (((this->BendingElementStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BendingElementStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                             ,0xe2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->BendingElementStiffnessIndex).Index;
      local_res20._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->HighValueArray);
      local_res20._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar1,&param_1->LowValueArray);
      if (((this->BendingElementStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BendingElementStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                             ,0xe2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BendingElementStiffnessIndex).Index,pTVar12);
      if ((EVar6 & StringDirty) == None) {
        if (fVar4 <= (float)local_res20) {
          local_res20._0_4_ = fVar4;
        }
        if (fVar4 <= local_res20._4_4_) {
          local_res20._4_4_ = fVar4;
        }
        if ((float)local_res20 <= 0.0) {
          local_res20._0_4_ = 0.0;
        }
        if (local_res20._4_4_ <= 0.0) {
          local_res20._4_4_ = 0.0;
        }
        if (((float)local_res20 == *(float *)&this->_padding_) &&
           (local_res20._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
          this->_padding_ = (longlong)local_res20;
          *(char *)&this->_padding_ = (char)this->_padding_;
        }
        else {
          this->_padding_ = (longlong)local_res20;
          *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
        }
      }
      else {
        if (((this->BendingElementStiffnessIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("BendingElementStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                               ,0xe2,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->BendingElementStiffnessIndex).Index,
                            &param_1->StringValueArray);
        local_e0.DataPtr = (TVector<int,2> *)this->_padding_;
        local_e0.ArrayNum = (int)this->_padding_;
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        lVar3 = this->_padding_;
        if ((local_e0.ArrayNum < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar8);
        if (pTVar9 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_1a0.DataPtr = (float *)0x0;
          local_1a0._8_8_ = (ulonglong)(uint)local_1a0._12_4_ << 0x20;
        }
        else {
          local_1a0.DataPtr = *(float **)&pTVar9->field_0x10;
          local_1a0._8_8_ = *(undefined8 *)&pTVar9->field_0x18;
        }
        local_1b0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap<2>
                  ((FPBDWeightMap *)local_170,(TVector<float,2> *)&local_1b0._s_0,&local_1a0,
                   &local_e0,(int)lVar3,iVar1,0x10,(void *)0x0);
        if (fVar4 <= (float)local_res20) {
          local_res20._0_4_ = fVar4;
        }
        local_170._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        if (fVar4 <= local_res20._4_4_) {
          local_res20._4_4_ = fVar4;
        }
        local_138 = 0x447a0000;
        local_134 = 0x40dd0c55;
        local_12c = 0;
        if ((float)local_res20 <= 0.0) {
          local_res20._0_4_ = 0.0;
        }
        if (local_res20._4_4_ <= 0.0) {
          local_res20._4_4_ = 0.0;
        }
        if (((float)local_148 == (float)local_res20) && (local_148._4_4_ == local_res20._4_4_)) {
          bVar11 = 0;
        }
        else {
          bVar11 = 1;
        }
        local_140 = (bool)(local_140 | bVar11);
        local_148 = local_res20;
        FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_170);
        *(undefined4 *)&this->_padding_ = local_138;
        *(undefined4 *)&this->_padding_ = local_134._4_4_;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_134;
        *(undefined4 *)((longlong)&this->_padding_ + 4) = local_12c;
        if ((FScriptContainerElement *)local_170._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_170._24_8_);
        }
        if ((FScriptContainerElement *)local_170._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_170._8_8_);
        }
      }
    }
  }
  pTVar12 = &param_1->FlagsArray;
  iVar1 = (this->BucklingRatioIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar12), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BucklingRatioIndex).Index,pTVar12), (char)EVar6 < '\0')) {
    if (((this->BucklingRatioIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                           ,0xe3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->BucklingRatioIndex).Index;
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar1,&param_1->LowValueArray);
    if (fVar4 <= (float)local_res8) {
      local_res8._0_4_ = fVar4;
    }
    if (fVar4 <= fVar13) {
      fVar13 = fVar4;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    local_res8._4_4_ = fVar13;
    TVar5 = local_res8;
    if (((this->BucklingRatioIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                           ,0xe3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->BucklingRatioIndex).Index,pTVar12);
    if ((EVar6 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&this->_padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar11;
      this->_padding_ = (longlong)TVar5;
    }
    else {
      if (((this->BucklingRatioIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BucklingRatioIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                             ,0xe3,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->BucklingRatioIndex).Index,&param_1->StringValueArray);
      local_d0.DataPtr = (TVector<int,2> *)this->_padding_;
      local_d0.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      if ((local_d0.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar8);
      if (pTVar9 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_190.DataPtr = (float *)0x0;
        local_190._8_8_ = (ulonglong)(uint)local_190._12_4_ << 0x20;
      }
      else {
        local_190.DataPtr = *(float **)&pTVar9->field_0x10;
        local_190._8_8_ = *(undefined8 *)&pTVar9->field_0x18;
      }
      pFVar10 = FPBDWeightMap::FPBDWeightMap<2>
                          (local_b0,(TVector<float,2> *)&local_res8,&local_190,&local_d0,(int)lVar3,
                           iVar1,0x10,(void *)0x0);
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,pFVar10);
      if (local_b0[0].Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Table.AllocatorInstance.Data);
      }
      if (local_b0[0].Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->BucklingStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar12), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->BucklingStiffnessIndex).Index,pTVar12), (char)EVar6 < '\0'))
  {
    if (((this->BucklingStiffnessIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BucklingStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                           ,0xe4,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->BucklingStiffnessIndex).Index;
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (((this->BucklingStiffnessIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("BucklingStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                           ,0xe4,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->BucklingStiffnessIndex).Index,pTVar12);
    if ((EVar6 & StringDirty) == None) {
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_res8._4_4_ = fVar13;
      local_res8._0_4_ = fVar14;
      if ((fVar14 == *(float *)&this->_padding_) &&
         (fVar13 == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar11;
      this->_padding_ = (longlong)local_res8;
    }
    else {
      if (((this->BucklingStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("BucklingStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDBendingConstraints.h"
                             ,0xe4,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar8 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->BucklingStiffnessIndex).Index,&param_1->StringValueArray);
      local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
      local_c0.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar3 = this->_padding_;
      if ((local_c0.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pTVar9 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar8);
      if (pTVar9 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_180.DataPtr = (float *)0x0;
        local_180._8_8_ = (ulonglong)(uint)local_180._12_4_ << 0x20;
      }
      else {
        local_180.DataPtr = *(float **)&pTVar9->field_0x10;
        local_180._8_8_ = *(undefined8 *)&pTVar9->field_0x18;
      }
      local_1a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap<2>
                ((FPBDWeightMap *)local_128,(TVector<float,2> *)&local_1a8._s_0,&local_180,&local_c0
                 ,(int)lVar3,iVar1,0x10,(void *)0x0);
      if (fVar4 <= fVar14) {
        fVar14 = fVar4;
      }
      local_128._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      if (fVar4 <= fVar13) {
        fVar13 = fVar4;
      }
      local_f0 = 0x447a0000;
      local_ec = 0x40dd0c55;
      local_e4 = 0;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      local_res8._4_4_ = fVar13;
      local_res8._0_4_ = fVar14;
      if (((float)local_100 == fVar14) && (local_100._4_4_ == fVar13)) {
        bVar11 = 0;
      }
      else {
        bVar11 = 1;
      }
      local_f8 = (bool)(local_f8 | bVar11);
      local_100 = local_res8;
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,(FPBDWeightMap *)local_128);
      *(undefined4 *)&this->_padding_ = local_f0;
      *(undefined4 *)&this->_padding_ = local_ec._4_4_;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = (undefined4)local_ec;
      *(undefined4 *)((longlong)&this->_padding_ + 4) = local_e4;
      if ((FScriptContainerElement *)local_128._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._24_8_);
      }
      if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_128._8_8_);
      }
    }
  }
  return;
}

