// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 6

// Apply<Chaos::Softs::FSolverParticles> @ 14db7c640

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDAxialSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring> FVar12;
  float *pfVar13;
  TVector<float,3> *pTVar14;
  FName FVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  uint local_100;
  longlong local_f8;
  FColor_u_0 local_f0 [2];
  FName local_e8;
  FName local_e0;
  FName local_d8;
  longlong local_c8;
  FName local_c0 [17];
  
  uVar22 = 0;
  FVar12 = StatPtr_STAT_XPBD_AxialSpring;
  if (StatPtr_STAT_XPBD_AxialSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring>)0x0) {
    pFVar11 = ::FName::FName(local_c0,"STAT_XPBD_AxialSpring");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AxialSpring,*pFVar11,
                        L"Chaos XPBD Axial Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar4 = false;
  bVar3 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  bVar8 = false;
  bVar7 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar3 = true;
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e0.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_e0.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                   ,0x47);
        bVar4 = true;
        bVar3 = true;
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e8 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar7 = true;
      goto LAB_14db7c7c3;
    }
  }
  bVar4 = bVar8;
  bVar3 = bVar7;
  bVar7 = false;
  local_e8 = local_d8;
  FVar15 = local_d8;
LAB_14db7c7c3:
  fVar6 = __real_40000000;
  fVar5 = __real_3f800000;
  fVar23 = __real_38d1b717;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar24 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    fVar6 = __real_40000000;
    fVar5 = __real_3f800000;
    if ((fVar23 <= fVar24) && (uVar22 = 0, 0 < (int)this->_padding_)) {
      lVar16 = 0;
      local_128 = 0;
      do {
        uVar17 = ~uVar22 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar21 = this->_padding_;
        uVar9 = *(uint *)(lVar16 + 8 + lVar21);
        uVar10 = *(uint *)(lVar16 + lVar21);
        uVar18 = *(uint *)(lVar16 + 4 + lVar21);
        GetDelta<Chaos::Softs::FSolverParticles>
                  (this,(TVector<float,3> *)&local_110,param_1,param_2,uVar22,fVar24);
        uVar19 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar23 = fVar5 - *(float *)(this->_padding_ + local_128 * 4);
        uVar19 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar19 = uVar17;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar25 = *(float *)(this->_padding_ + local_128 * 4);
        if (fVar25 <= fVar23) {
          fVar25 = fVar23;
        }
        uVar19 = 0;
        if ((int)uVar10 < (int)param_1->_padding_) {
          uVar19 = ~uVar10 >> 0x1f;
        }
        fVar23 = fVar6 / (fVar25 + fVar5);
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (0.0 < *(float *)(param_1->_padding_ + (longlong)(int)uVar10 * 4)) {
          pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,uVar10);
          fVar25 = fVar23 * *pfVar13;
          pTVar14 = FSolverParticles::P(param_1,uVar10);
          *(float *)pTVar14 = *(float *)pTVar14 - local_110 * fVar25;
          *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar25 * local_10c;
          *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar25 * local_108;
        }
        uVar10 = 0;
        if ((int)uVar18 < (int)param_1->_padding_) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(float *)(param_1->_padding_ + (longlong)(int)uVar18 * 4) != 0.0) {
          uVar10 = 0;
          if ((int)uVar22 < (int)this->_padding_) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar21 = this->_padding_;
          pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,uVar18);
          fVar25 = fVar23 * *pfVar13 * *(float *)(lVar21 + local_128 * 4);
          pTVar14 = FSolverParticles::P(param_1,uVar18);
          *(float *)pTVar14 = local_110 * fVar25 + *(float *)pTVar14;
          *(float *)&pTVar14->field_0x4 = fVar25 * local_10c + *(float *)&pTVar14->field_0x4;
          *(float *)&pTVar14->field_0x8 = fVar25 * local_108 + *(float *)&pTVar14->field_0x8;
        }
        uVar10 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(float *)(param_1->_padding_ + (longlong)(int)uVar9 * 4) != 0.0) {
          uVar10 = 0;
          if ((int)uVar22 < (int)this->_padding_) {
            uVar10 = uVar17;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar21 = this->_padding_;
          pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,uVar9);
          fVar23 = fVar23 * *pfVar13 * (fVar5 - *(float *)(lVar21 + local_128 * 4));
          pTVar14 = FSolverParticles::P(param_1,uVar9);
          *(float *)pTVar14 = local_110 * fVar23 + *(float *)pTVar14;
          *(float *)&pTVar14->field_0x4 = fVar23 * local_10c + *(float *)&pTVar14->field_0x4;
          *(float *)&pTVar14->field_0x8 = fVar23 * local_108 + *(float *)&pTVar14->field_0x8;
        }
        local_128 = local_128 + 1;
        uVar22 = uVar22 + 1;
        lVar16 = lVar16 + 0xc;
        FVar15 = local_e8;
      } while ((int)uVar22 < (int)this->_padding_);
    }
  }
  else if (0 < (int)this->_padding_) {
    lVar16 = 0;
    local_f8 = 0;
    do {
      lVar21 = local_f8;
      uVar17 = ~uVar22 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar1 = *(byte *)(lVar21 + this->_padding_);
      if (((int)this->_padding_ <= (int)(uint)bVar1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar23 = *(float *)(this->_padding_ + (ulonglong)bVar1 * 4);
      uVar9 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar9 = uVar17;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar21 = this->_padding_;
      local_100 = *(uint *)(lVar16 + 4 + lVar21);
      uVar9 = *(uint *)(lVar16 + lVar21);
      lVar20 = (longlong)(int)uVar9;
      uVar10 = *(uint *)(lVar16 + 8 + lVar21);
      GetDelta<Chaos::Softs::FSolverParticles>
                (this,(TVector<float,3> *)&local_120,param_1,param_2,uVar22,fVar23);
      uVar18 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar21 = local_f8;
      fVar23 = fVar5 - *(float *)(this->_padding_ + local_f8 * 4);
      uVar18 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar18 = ~uVar9 >> 0x1f;
      fVar24 = *(float *)(this->_padding_ + lVar21 * 4);
      if (fVar24 <= fVar23) {
        fVar24 = fVar23;
      }
      uVar19 = 0;
      if ((int)uVar9 < (int)param_1->_padding_) {
        uVar19 = uVar18;
      }
      fVar23 = fVar6 / (fVar24 + fVar5);
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0.0 < *(float *)(param_1->_padding_ + lVar20 * 4)) {
        uVar19 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar19 = uVar18;
        }
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar24 = fVar23 * *(float *)(param_1->_padding_ + lVar20 * 4);
        uVar19 = 0;
        if ((int)uVar9 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar19 = uVar18;
        }
        fVar25 = local_120 * fVar24;
        fVar26 = fVar24 * local_11c;
        fVar24 = fVar24 * local_118;
        if ((uVar19 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar21 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        *(float *)(lVar21 + lVar20 * 0x10) = *(float *)(lVar21 + lVar20 * 0x10) - fVar25;
        *(float *)(lVar21 + 4 + lVar20 * 0x10) = *(float *)(lVar21 + 4 + lVar20 * 0x10) - fVar26;
        *(float *)(lVar21 + 8 + lVar20 * 0x10) = *(float *)(lVar21 + 8 + lVar20 * 0x10) - fVar24;
      }
      uVar9 = local_100;
      lVar21 = (longlong)(int)local_100;
      uVar19 = ~local_100 >> 0x1f;
      uVar18 = 0;
      if ((int)local_100 < (int)param_1->_padding_) {
        uVar18 = uVar19;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(float *)(param_1->_padding_ + lVar21 * 4) != 0.0) {
        uVar18 = 0;
        if ((int)uVar9 < (int)param_1->_padding_) {
          uVar18 = uVar19;
        }
        if ((uVar18 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_c8 = param_1->_padding_;
        uVar9 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar24 = fVar23 * *(float *)(local_c8 + lVar21 * 4) *
                 *(float *)(this->_padding_ + local_f8 * 4);
        fVar25 = fVar24 * local_120;
        uVar9 = 0;
        if ((int)local_100 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar9 = uVar19;
        }
        fVar26 = fVar24 * local_11c;
        fVar24 = fVar24 * local_118;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar20 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        *(float *)(lVar20 + lVar21 * 0x10) = fVar25 + *(float *)(lVar20 + lVar21 * 0x10);
        *(float *)(lVar20 + 4 + lVar21 * 0x10) = fVar26 + *(float *)(lVar20 + 4 + lVar21 * 0x10);
        *(float *)(lVar20 + 8 + lVar21 * 0x10) = fVar24 + *(float *)(lVar20 + 8 + lVar21 * 0x10);
      }
      lVar21 = (longlong)(int)uVar10;
      uVar18 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar9 = uVar18;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(float *)(param_1->_padding_ + lVar21 * 4) != 0.0) {
        uVar9 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar20 = this->_padding_;
        uVar9 = 0;
        if ((int)uVar10 < (int)param_1->_padding_) {
          uVar9 = uVar18;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar10 < *(int *)&(param_1->MPAndInvM).field_0x10) {
          uVar9 = uVar18;
        }
        fVar25 = fVar23 * *(float *)(param_1->_padding_ + lVar21 * 4) *
                 (fVar5 - *(float *)(lVar20 + local_f8 * 4));
        fVar23 = fVar25 * local_120;
        fVar24 = fVar25 * local_11c;
        fVar25 = fVar25 * local_118;
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar20 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
        *(float *)(lVar20 + lVar21 * 0x10) = fVar23 + *(float *)(lVar20 + lVar21 * 0x10);
        *(float *)(lVar20 + 4 + lVar21 * 0x10) = fVar24 + *(float *)(lVar20 + 4 + lVar21 * 0x10);
        *(float *)(lVar20 + 8 + lVar21 * 0x10) = fVar25 + *(float *)(lVar20 + 8 + lVar21 * 0x10);
      }
      uVar22 = uVar22 + 1;
      local_f8 = local_f8 + 1;
      lVar16 = lVar16 + 0xc;
      FVar15 = local_e8;
    } while ((int)uVar22 < (int)this->_padding_);
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 14db7daf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring> FVar15;
  float *pfVar16;
  TVector<float,3> *pTVar17;
  FName FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  longlong local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  FColor_u_0 local_100 [2];
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_d8 [20];
  
  uVar19 = 0;
  FVar15 = StatPtr_STAT_XPBD_AxialSpring;
  if (StatPtr_STAT_XPBD_AxialSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring>)0x0) {
    pFVar14 = ::FName::FName(local_d8,"STAT_XPBD_AxialSpring");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AxialSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AxialSpring,*pFVar14,
                        L"Chaos XPBD Axial Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar15;
  bVar8 = false;
  bVar7 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_f0.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                   ,0x47);
        bVar8 = true;
        bVar7 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar11 = true;
      goto LAB_14db7dc73;
    }
  }
  bVar8 = bVar12;
  bVar7 = bVar11;
  bVar11 = false;
  local_f8 = local_e8;
  FVar18 = local_e8;
LAB_14db7dc73:
  fVar10 = __real_40000000;
  fVar9 = __real_3f800000;
  fVar24 = __real_38d1b717;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar25 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    fVar10 = __real_40000000;
    fVar9 = __real_3f800000;
    if ((fVar24 <= fVar25) && (uVar20 = uVar19, uVar23 = uVar19, 0 < (int)this->_padding_)) {
      do {
        uVar21 = (uint)uVar20;
        uVar22 = ~uVar21 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar13 = uVar22;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = this->_padding_;
        iVar2 = *(int *)(uVar19 + 4 + lVar5);
        iVar3 = *(int *)(uVar19 + lVar5);
        iVar4 = *(int *)(uVar19 + 8 + lVar5);
        GetDelta<Chaos::Softs::FSolverParticlesRange>
                  (this,(TVector<float,3> *)&local_110,param_1,param_2,uVar21,fVar25);
        uVar13 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar13 = uVar22;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar24 = fVar9 - *(float *)(this->_padding_ + uVar23 * 4);
        uVar13 = 0;
        if ((int)uVar21 < (int)this->_padding_) {
          uVar13 = uVar22;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar26 = *(float *)(this->_padding_ + uVar23 * 4);
        if (fVar26 <= fVar24) {
          fVar26 = fVar24;
        }
        fVar24 = fVar10 / (fVar26 + fVar9);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar3);
        if (0.0 < *pfVar16) {
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pfVar16 = TDynamicParticles<float,3>::InvM
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar3);
          fVar26 = fVar24 * *pfVar16;
          fVar27 = local_110 * fVar26;
          fVar28 = fVar26 * local_10c;
          fVar26 = fVar26 * local_108;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                        *(int *)&param_1->field_0x10 + iVar3);
          *(float *)pTVar17 = *(float *)pTVar17 - fVar27;
          *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar28;
          *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar26;
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             iVar2 + *(int *)&param_1->field_0x10);
        if (*pfVar16 != 0.0) {
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar22;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = this->_padding_;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pfVar16 = TDynamicParticles<float,3>::InvM
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               iVar2 + *(int *)&param_1->field_0x10);
          fVar26 = fVar24 * *pfVar16 * *(float *)(lVar5 + uVar23 * 4);
          fVar27 = local_110 * fVar26;
          fVar28 = fVar26 * local_10c;
          fVar26 = fVar26 * local_108;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                        iVar2 + *(int *)&param_1->field_0x10);
          *(float *)pTVar17 = fVar27 + *(float *)pTVar17;
          *(float *)&pTVar17->field_0x4 = fVar28 + *(float *)&pTVar17->field_0x4;
          *(float *)&pTVar17->field_0x8 = fVar26 + *(float *)&pTVar17->field_0x8;
        }
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar4);
        if (*pfVar16 != 0.0) {
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pfVar16 = TDynamicParticles<float,3>::InvM
                              (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar4);
          uVar13 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar13 = uVar22;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          fVar24 = (fVar9 - *(float *)(this->_padding_ + uVar23 * 4)) * fVar24 * *pfVar16;
          fVar26 = local_110 * fVar24;
          fVar27 = fVar24 * local_10c;
          fVar24 = fVar24 * local_108;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Particles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                  ,0x57,L""), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                        iVar4 + *(int *)&param_1->field_0x10);
          *(float *)pTVar17 = fVar26 + *(float *)pTVar17;
          *(float *)&pTVar17->field_0x4 = fVar27 + *(float *)&pTVar17->field_0x4;
          *(float *)&pTVar17->field_0x8 = fVar24 + *(float *)&pTVar17->field_0x8;
        }
        uVar19 = uVar19 + 0xc;
        FVar18 = local_f8;
        uVar20 = (ulonglong)(uVar21 + 1);
        uVar23 = uVar23 + 1;
      } while ((int)(uVar21 + 1) < (int)this->_padding_);
    }
  }
  else if (0 < (int)this->_padding_) {
    local_128 = 0;
    uVar20 = uVar19;
    do {
      uVar22 = (uint)uVar20;
      uVar21 = ~uVar22 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar1 = *(byte *)(this->_padding_ + local_128);
      if (((int)this->_padding_ <= (int)(uint)bVar1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar24 = *(float *)(this->_padding_ + (ulonglong)bVar1 * 4);
      uVar13 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = this->_padding_;
      iVar2 = *(int *)(uVar19 + lVar5);
      iVar3 = *(int *)(uVar19 + 4 + lVar5);
      iVar4 = *(int *)(uVar19 + 8 + lVar5);
      GetDelta<Chaos::Softs::FSolverParticlesRange>
                (this,(TVector<float,3> *)&local_120,param_1,param_2,uVar22,fVar24);
      uVar13 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar24 = fVar9 - *(float *)(this->_padding_ + local_128 * 4);
      uVar13 = 0;
      if ((int)uVar22 < (int)this->_padding_) {
        uVar13 = uVar21;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar25 = *(float *)(this->_padding_ + local_128 * 4);
      if (fVar25 <= fVar24) {
        fVar25 = fVar24;
      }
      fVar24 = fVar10 / (fVar25 + fVar9);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar16 = TDynamicParticles<float,3>::InvM
                          (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar2);
      if (0.0 < *pfVar16) {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar2);
        fVar25 = fVar24 * *pfVar16;
        fVar26 = fVar25 * local_120;
        fVar27 = fVar25 * local_11c;
        fVar25 = fVar25 * local_118;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar2);
        *(float *)pTVar17 = *(float *)pTVar17 - fVar26;
        *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar27;
        *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar25;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar16 = TDynamicParticles<float,3>::InvM
                          (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                           *(int *)&param_1->field_0x10 + iVar3);
      if (*pfVar16 != 0.0) {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar3);
        uVar13 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar13 = uVar21;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar25 = fVar24 * *pfVar16 * *(float *)(this->_padding_ + local_128 * 4);
        fVar26 = fVar25 * local_120;
        fVar27 = fVar25 * local_11c;
        fVar25 = fVar25 * local_118;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar3);
        *(float *)pTVar17 = fVar26 + *(float *)pTVar17;
        *(float *)&pTVar17->field_0x4 = fVar27 + *(float *)&pTVar17->field_0x4;
        *(float *)&pTVar17->field_0x8 = fVar25 + *(float *)&pTVar17->field_0x8;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x57,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar16 = TDynamicParticles<float,3>::InvM
                          (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                           iVar4 + *(int *)&param_1->field_0x10);
      if (*pfVar16 != 0.0) {
        uVar13 = 0;
        if ((int)uVar22 < (int)this->_padding_) {
          uVar13 = uVar21;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar5 = this->_padding_;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pfVar16 = TDynamicParticles<float,3>::InvM
                            (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                             *(int *)&param_1->field_0x10 + iVar4);
        fVar26 = fVar24 * *pfVar16 * (fVar9 - *(float *)(lVar5 + local_128 * 4));
        fVar24 = fVar26 * local_120;
        fVar25 = fVar26 * local_11c;
        fVar26 = fVar26 * local_118;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                      *(int *)&param_1->field_0x10 + iVar4);
        *(float *)pTVar17 = fVar24 + *(float *)pTVar17;
        *(float *)&pTVar17->field_0x4 = fVar25 + *(float *)&pTVar17->field_0x4;
        *(float *)&pTVar17->field_0x8 = fVar26 + *(float *)&pTVar17->field_0x8;
      }
      local_128 = local_128 + 1;
      uVar20 = (ulonglong)(uVar22 + 1);
      uVar19 = uVar19 + 0xc;
      FVar18 = local_f8;
    } while ((int)(uVar22 + 1) < (int)this->_padding_);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// GetDelta<Chaos::Softs::FSolverParticles> @ 14db89090

TVector<float,3> * __thiscall
Chaos::Softs::FXPBDAxialSpringConstraints::GetDelta<Chaos::Softs::FSolverParticles>
          (FXPBDAxialSpringConstraints *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticles *param_1,float param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  lVar6 = this->_padding_;
  iVar3 = *(int *)(lVar6 + 4 + lVar15 * 0xc);
  iVar4 = *(int *)(lVar6 + lVar15 * 0xc);
  iVar5 = *(int *)(lVar6 + 8 + lVar15 * 0xc);
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  fVar19 = *(float *)(this->_padding_ + lVar15 * 4);
  fVar16 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar22 = __real_3f800000;
  fVar18 = __real_3f800000 - fVar19;
  fVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar16 = fVar17 * fVar19 + fVar16 * fVar18;
  if ((__real_38d1b717 <= param_4) &&
     ((fVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4),
      fVar17 != 0.0 || (fVar16 != 0.0)))) {
    fVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
    fVar17 = __real_322bcc77;
    fVar18 = fVar18 + fVar16;
    if ((fVar18 <= __real_322bcc77) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3332248899132850320>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                           ,0x90,"CombinedInvMass > (FSolverReal) (1.e-8f)"), bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TVector<float,3> *)(*pcVar8)();
      return pTVar11;
    }
    pTVar11 = FSolverParticles::P(param_1,iVar4);
    pTVar12 = FSolverParticles::P(param_1,iVar3);
    pTVar13 = FSolverParticles::P(param_1,iVar5);
    fVar16 = *(float *)&pTVar11->field_0x8 -
             ((*(float *)&pTVar12->field_0x8 - *(float *)&pTVar13->field_0x8) * fVar19 +
             *(float *)&pTVar13->field_0x8);
    fVar20 = *(float *)&pTVar11->field_0x4 -
             ((*(float *)&pTVar12->field_0x4 - *(float *)&pTVar13->field_0x4) * fVar19 +
             *(float *)&pTVar13->field_0x4);
    fVar19 = *(float *)pTVar11 -
             ((*(float *)pTVar12 - *(float *)pTVar13) * fVar19 + *(float *)pTVar13);
    fVar21 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16);
    if (fVar17 < fVar21) {
      fVar17 = fVar22 / fVar21;
      uVar10 = 0;
      if (param_3 < (int)this->_padding_) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      fVar1 = *(float *)(this->_padding_ + lVar15 * 4);
      uVar10 = 0;
      if (param_3 < (this->Lambdas).ArrayNum) {
        uVar10 = uVar14;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      pFVar7 = (this->Lambdas).AllocatorInstance.Data;
      fVar2 = *(float *)(pFVar7 + lVar15 * 4);
      fVar22 = fVar22 / (param_2 * param_4 * param_2);
      fVar22 = ((fVar21 - fVar1) - fVar2 * fVar22) / (fVar22 + fVar18);
      *(float *)(pFVar7 + lVar15 * 4) = fVar2 + fVar22;
      *(float *)__return_storage_ptr__ = fVar17 * fVar19 * fVar22;
      *(float *)&__return_storage_ptr__->field_0x4 = fVar17 * fVar20 * fVar22;
      *(float *)&__return_storage_ptr__->field_0x8 = fVar17 * fVar16 * fVar22;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetDelta<Chaos::Softs::FSolverParticlesRange> @ 14db89480

TVector<float,3> * __thiscall
Chaos::Softs::FXPBDAxialSpringConstraints::GetDelta<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAxialSpringConstraints *this,TVector<float,3> *__return_storage_ptr__,
          FSolverParticlesRange *param_1,float param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  TVector<float,3> *pTVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  lVar6 = this->_padding_;
  iVar3 = *(int *)(lVar6 + 4 + lVar15 * 0xc);
  iVar4 = *(int *)(lVar6 + lVar15 * 0xc);
  iVar5 = *(int *)(lVar6 + 8 + lVar15 * 0xc);
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  fVar19 = *(float *)(this->_padding_ + lVar15 * 4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  fVar16 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar5 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    pTVar11 = (TVector<float,3> *)(*pcVar8)();
    return pTVar11;
  }
  fVar17 = TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                      iVar3 + *(int *)&param_1->field_0x10);
  fVar20 = __real_3f800000;
  fVar16 = fVar17 * fVar19 + (__real_3f800000 - fVar19) * fVar16;
  if (__real_38d1b717 <= param_4) {
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Particles",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                           ,0x56,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      pTVar11 = (TVector<float,3> *)(*pcVar8)();
      return pTVar11;
    }
    fVar17 = TDynamicParticles<float,3>::InvM
                       (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                        *(int *)&param_1->field_0x10 + iVar4);
    if ((fVar17 != 0.0) || (fVar16 != 0.0)) {
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      fVar18 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar4);
      fVar17 = __real_322bcc77;
      fVar18 = fVar18 + fVar16;
      if ((fVar18 <= __real_322bcc77) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3332248899132850320>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAxialSpringConstraints.h"
                             ,0x90,"CombinedInvMass > (FSolverReal) (1.e-8f)"), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    *(int *)&param_1->field_0x10 + iVar4);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    iVar3 + *(int *)&param_1->field_0x10);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        pTVar11 = (TVector<float,3> *)(*pcVar8)();
        return pTVar11;
      }
      pTVar13 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                    iVar5 + *(int *)&param_1->field_0x10);
      fVar16 = *(float *)&pTVar11->field_0x8 -
               ((*(float *)&pTVar12->field_0x8 - *(float *)&pTVar13->field_0x8) * fVar19 +
               *(float *)&pTVar13->field_0x8);
      fVar21 = *(float *)&pTVar11->field_0x4 -
               ((*(float *)&pTVar12->field_0x4 - *(float *)&pTVar13->field_0x4) * fVar19 +
               *(float *)&pTVar13->field_0x4);
      fVar22 = *(float *)pTVar11 -
               ((*(float *)pTVar12 - *(float *)pTVar13) * fVar19 + *(float *)pTVar13);
      fVar19 = SQRT(fVar22 * fVar22 + fVar21 * fVar21 + fVar16 * fVar16);
      if (fVar17 < fVar19) {
        fVar17 = fVar20 / fVar19;
        uVar10 = 0;
        if (param_3 < (int)this->_padding_) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TVector<float,3> *)(*pcVar8)();
          return pTVar11;
        }
        fVar1 = *(float *)(this->_padding_ + lVar15 * 4);
        uVar10 = 0;
        if (param_3 < (this->Lambdas).ArrayNum) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          pTVar11 = (TVector<float,3> *)(*pcVar8)();
          return pTVar11;
        }
        pFVar7 = (this->Lambdas).AllocatorInstance.Data;
        fVar2 = *(float *)(pFVar7 + lVar15 * 4);
        fVar20 = fVar20 / (param_2 * param_4 * param_2);
        fVar19 = ((fVar19 - fVar1) - fVar2 * fVar20) / (fVar20 + fVar18);
        *(float *)(pFVar7 + lVar15 * 4) = fVar19 + fVar2;
        *(float *)__return_storage_ptr__ = fVar22 * fVar17 * fVar19;
        *(float *)&__return_storage_ptr__->field_0x4 = fVar21 * fVar17 * fVar19;
        *(float *)&__return_storage_ptr__->field_0x8 = fVar16 * fVar17 * fVar19;
        return __return_storage_ptr__;
      }
    }
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ~FXPBDAxialSpringConstraints @ 14dba0330

void __thiscall
Chaos::Softs::FXPBDAxialSpringConstraints::~FXPBDAxialSpringConstraints
          (FXPBDAxialSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDAxialSpringConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this);
  return;
}

// Init @ 14dc02520

void __thiscall Chaos::Softs::FXPBDAxialSpringConstraints::Init(FXPBDAxialSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Lambdas).AllocatorInstance.Data;
  iVar2 = (this->Lambdas).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Lambdas).ArrayNum != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    *(undefined4 *)pFVar3 = 0;
    pFVar3 = pFVar3 + 4;
  }
  return;
}

