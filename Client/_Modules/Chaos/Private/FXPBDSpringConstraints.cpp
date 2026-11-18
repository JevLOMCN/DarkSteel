// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 31

// Apply<Chaos::Softs::FSolverParticles> @ 143f29860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *plVar1;
  FScriptContainerElement FVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_XPBD_Spring> FVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  char cVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  char cVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong uVar26;
  int iVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  bool bVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  FName local_250;
  uint local_240;
  longlong local_230;
  FColor_u_0 local_220 [2];
  FName local_218;
  FName local_210;
  FXPBDSpringConstraints *local_200;
  FSolverParticles *local_1f8;
  float local_1f0;
  int local_1ec;
  char local_1e8;
  float local_1e4;
  char local_1e0;
  float local_1dc;
  FXPBDSpringConstraints *local_1d8;
  FSolverParticles *local_1d0;
  float local_1c8;
  int local_1c4;
  char local_1c0;
  float local_1bc;
  char local_1b8;
  float local_1b4;
  FXPBDSpringConstraints *local_1b0;
  FSolverParticles *local_1a8;
  float local_1a0;
  int local_19c;
  char local_198;
  float local_194;
  char local_190;
  float local_18c;
  FXPBDSpringConstraints *local_188;
  FSolverParticles *local_180;
  float local_178;
  int local_174;
  char local_170;
  float local_16c;
  char local_168;
  float local_164;
  FXPBDSpringConstraints *local_160;
  FSolverParticles *local_158;
  float local_150;
  int local_14c;
  char local_148;
  float local_144;
  char local_140;
  float local_13c;
  FXPBDSpringConstraints *local_138;
  FSolverParticles *local_130;
  float local_128;
  int local_124;
  char local_120;
  float local_11c;
  char local_118;
  float local_114;
  FXPBDSpringConstraints *local_110;
  FSolverParticles *local_108;
  float local_100;
  int local_fc;
  char local_f8;
  float local_f4;
  code *local_f0;
  FXPBDSpringConstraints **local_e8;
  code *local_e0;
  FXPBDSpringConstraints **local_d8;
  code *local_d0;
  FXPBDSpringConstraints **local_c8;
  code *local_c0;
  FXPBDSpringConstraints **local_b8;
  code *local_b0;
  FXPBDSpringConstraints **local_a8;
  code *local_a0;
  FXPBDSpringConstraints **local_98;
  code *local_90;
  FXPBDSpringConstraints **local_88;
  FName local_80 [9];
  
  bVar30 = -1 < CpuChannel->Enabled;
  if (bVar30) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId123,"FXPBDSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDSpringConstraints.cpp"
               ,0x7b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId123);
  }
  pFVar21 = (FScriptContainerElement *)0x0;
  FVar13 = StatPtr_STAT_XPBD_Spring;
  if (StatPtr_STAT_XPBD_Spring == (FThreadSafeStaticStat<FStat_STAT_XPBD_Spring>)0x0) {
    pFVar12 = ::FName::FName(local_80,"STAT_XPBD_Spring");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_XPBD_Spring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_Spring,*pFVar12,
                        L"Chaos XPBD Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_250 = *(FName *)FVar13;
  bVar6 = false;
  bVar7 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar8 = false;
  bVar31 = false;
  if ((local_250.ComparisonIndex.Value.Value == 0) && (local_250.Number == 0)) {
LAB_143f29a2b:
    bVar7 = bVar31;
    bVar6 = bVar8;
    bVar8 = false;
    local_250 = local_210;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_220[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_220[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      bVar31 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = local_250.ComparisonIndex.Value.Value;
        local_218.Number = local_250.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDSpringConstraints.cpp"
                   ,0x7c);
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
        bVar31 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143f29a2b;
    FThreadStats::AddMessage(local_250,CycleScopeStart);
    bVar8 = true;
  }
  plVar25 = &this->_padding_;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  if (((this->DampingRatio).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->DampingRatio).WeightedValue -
                    *(float *)&(this->DampingRatio).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  iVar27 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  uVar9 = 0;
  if ((iVar27 < 2) || ((int)*plVar1 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    fVar32 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar25);
    fVar33 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if ((0.0 < fVar33) || (cVar19 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (pFVar28 = pFVar21, 0 < (int)*plVar1)) {
        do {
          iVar27 = (int)pFVar28;
          fVar34 = fVar32;
          if (cVar23 != '\0') {
            fVar34 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar27);
          }
          fVar35 = fVar33;
          if (cVar19 != '\0') {
            fVar35 = FPBDWeightMap::operator[](&this->DampingRatio,iVar27);
          }
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar27,fVar34,fVar35);
          pFVar28 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1U);
        } while ((int)(iVar27 + 1U) < (int)*plVar1);
      }
      plVar25 = &this->_padding_;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar25 < 1) goto LAB_143f2b58f;
        do {
          iVar27 = (int)pFVar21;
          fVar34 = fVar32;
          if (cVar23 != '\0') {
            fVar34 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar27);
          }
          fVar35 = fVar33;
          if (cVar19 != '\0') {
            fVar35 = FPBDWeightMap::operator[](&this->DampingRatio,iVar27);
          }
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar27,fVar34,fVar35);
          iVar11 = (int)*plVar25;
          pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1U);
        } while ((int)(iVar27 + 1U) < iVar11);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar25 < 1) goto LAB_143f2b58f;
        do {
          iVar27 = (int)pFVar21;
          fVar34 = fVar32;
          if (cVar23 != '\0') {
            fVar34 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar27);
          }
          fVar35 = fVar33;
          if (cVar19 != '\0') {
            fVar35 = FPBDWeightMap::operator[](&this->DampingRatio,iVar27);
          }
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar27,fVar34,fVar35);
          iVar11 = (int)*plVar25;
          pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1U);
        } while ((int)(iVar27 + 1U) < iVar11);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar11 = (int)*plVar25;
        if (0 < iVar11) {
          do {
            iVar27 = (int)pFVar21;
            fVar34 = fVar32;
            if (cVar23 != '\0') {
              fVar34 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar27);
            }
            fVar35 = fVar33;
            if (cVar19 != '\0') {
              fVar35 = FPBDWeightMap::operator[](&this->DampingRatio,iVar27);
            }
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,iVar27,fVar34,fVar35);
            iVar11 = (int)*plVar25;
            pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1U);
          } while ((int)(iVar27 + 1U) < iVar11);
        }
      }
      else {
        iVar11 = (int)this->_padding_;
        pFVar28 = pFVar21;
        if (0 < iVar11) {
          do {
            uVar10 = (uint)pFVar28;
            fVar34 = fVar32;
            if (cVar23 != '\0') {
              uVar15 = uVar9;
              if ((int)uVar10 < (int)this->_padding_) {
                uVar15 = ~uVar10 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar2 = pFVar21[this->_padding_];
              if (((int)this->_padding_ <= (int)(uint)(byte)FVar2) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar34 = *(float *)(this->_padding_ + (ulonglong)(byte)FVar2 * 4);
            }
            fVar35 = fVar33;
            if (cVar19 != '\0') {
              uVar15 = 0;
              if ((int)uVar10 < (this->DampingRatio).Indices.ArrayNum) {
                uVar15 = ~uVar10 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar2 = (this->DampingRatio).Indices.AllocatorInstance.Data[(int)uVar10];
              if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              fVar35 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                                 (ulonglong)(byte)FVar2 * 4);
            }
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,uVar10,fVar34,fVar35);
            iVar11 = (int)this->_padding_;
            pFVar21 = pFVar21 + 1;
            pFVar28 = (FScriptContainerElement *)(ulonglong)(uVar10 + 1);
          } while ((int)(uVar10 + 1) < iVar11);
        }
      }
      uVar26 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (uVar29 = uVar26, 0 < iVar11)) {
        do {
          uVar9 = (uint)uVar29;
          fVar34 = fVar32;
          if (cVar23 != '\0') {
            uVar10 = 0;
            if ((int)uVar9 < (int)this->_padding_) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar3 = *(byte *)(this->_padding_ + uVar26);
            if (((int)this->_padding_ <= (int)(uint)bVar3) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar34 = *(float *)(this->_padding_ + (ulonglong)bVar3 * 4);
          }
          fVar35 = fVar33;
          if (cVar19 != '\0') {
            uVar10 = 0;
            if ((int)uVar9 < (this->DampingRatio).Indices.ArrayNum) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar2 = (this->DampingRatio).Indices.AllocatorInstance.Data[(int)uVar9];
            if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar35 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,uVar9,fVar34,fVar35);
          uVar26 = uVar26 + 1;
          uVar29 = (ulonglong)(uVar9 + 1);
        } while ((int)(uVar9 + 1) < (int)this->_padding_);
      }
    }
    else if (0 < (int)*plVar1) {
      do {
        iVar27 = (int)pFVar21;
        fVar33 = fVar32;
        if (cVar23 != '\0') {
          fVar33 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar27);
        }
        ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>(this,param_1,param_2,iVar27,fVar33,0.0);
        pFVar21 = (FScriptContainerElement *)(ulonglong)(iVar27 + 1U);
      } while ((int)(iVar27 + 1U) < (int)*plVar1);
    }
    goto LAB_143f2b58f;
  }
  lVar20 = (longlong)(iVar27 + -1);
  uVar10 = 0;
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar32 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar25);
    fVar33 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if ((0.0 < fVar33) || (cVar19 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) &&
         (pFVar28 = pFVar21, pFVar22 = pFVar21, 0 < lVar20)) {
        do {
          uVar16 = (uint)pFVar28;
          uVar15 = uVar10;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar22 * 4);
          uVar15 = uVar10;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_d8 = &local_200;
          local_e0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
                     ::Call;
          local_200 = this;
          local_1f8 = param_1;
          local_1f0 = param_2;
          local_1ec = iVar27;
          local_1e8 = cVar23;
          local_1e4 = fVar32;
          local_1e0 = cVar19;
          local_1dc = fVar33;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar22 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_e0,false);
          pFVar22 = pFVar22 + 1;
          pFVar28 = (FScriptContainerElement *)(ulonglong)uVar16;
        } while ((longlong)pFVar22 < lVar20);
      }
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        pFVar28 = pFVar21;
        pFVar22 = pFVar21;
        if (lVar20 < 1) goto LAB_143f2b58f;
        do {
          uVar15 = (uint)pFVar28;
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar22 * 4);
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_98 = &local_160;
          local_a0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
                     ::Call;
          local_160 = this;
          local_158 = param_1;
          local_150 = param_2;
          local_14c = iVar27;
          local_148 = cVar23;
          local_144 = fVar32;
          local_140 = cVar19;
          local_13c = fVar33;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar22 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_a0,false);
          pFVar22 = pFVar22 + 1;
          pFVar28 = (FScriptContainerElement *)(ulonglong)uVar15;
        } while ((longlong)pFVar22 < lVar20);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        pFVar28 = pFVar21;
        pFVar22 = pFVar21;
        if (lVar20 < 1) goto LAB_143f2b58f;
        do {
          uVar15 = (uint)pFVar28;
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar22 * 4);
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_a8 = &local_188;
          local_b0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
                     ::Call;
          local_188 = this;
          local_180 = param_1;
          local_178 = param_2;
          local_174 = iVar27;
          local_170 = cVar23;
          local_16c = fVar32;
          local_168 = cVar19;
          local_164 = fVar33;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar22 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_b0,false);
          pFVar22 = pFVar22 + 1;
          pFVar28 = (FScriptContainerElement *)(ulonglong)uVar15;
        } while ((longlong)pFVar22 < lVar20);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        pFVar28 = pFVar21;
        pFVar22 = pFVar21;
        if (lVar20 < 1) goto LAB_143f2b58f;
        do {
          uVar16 = (uint)pFVar28;
          uVar15 = uVar10;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar16 = uVar16 + 1;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar22 * 4);
          uVar15 = uVar9;
          if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_b8 = &local_1b0;
          local_c0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
                     ::Call;
          local_1b0 = this;
          local_1a8 = param_1;
          local_1a0 = param_2;
          local_19c = iVar27;
          local_198 = cVar23;
          local_194 = fVar32;
          local_190 = cVar19;
          local_18c = fVar33;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar22 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_c0,false);
          pFVar22 = pFVar22 + 1;
          pFVar28 = (FScriptContainerElement *)(ulonglong)uVar16;
        } while ((longlong)pFVar22 < lVar20);
      }
      else {
        pFVar28 = pFVar21;
        pFVar22 = pFVar21;
        if (0 < lVar20) {
          do {
            uVar16 = (uint)pFVar28;
            uVar15 = uVar10;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar16 = uVar16 + 1;
            iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pFVar22 * 4);
            uVar15 = uVar10;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_c8 = &local_1d8;
            local_d0 = UE::Core::Private::Function::
                       TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
                       ::Call;
            local_1d8 = this;
            local_1d0 = param_1;
            local_1c8 = param_2;
            local_1c4 = iVar27;
            local_1c0 = cVar23;
            local_1bc = fVar32;
            local_1b8 = cVar19;
            local_1b4 = fVar33;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pFVar22 * 4 + 4) - iVar27,
                               (TFunctionRef<void___cdecl(int)> *)&local_d0,false);
            pFVar22 = pFVar22 + 1;
            pFVar28 = (FScriptContainerElement *)(ulonglong)uVar16;
          } while ((longlong)pFVar22 < lVar20);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (pFVar28 = pFVar21, 0 < lVar20)) {
        do {
          uVar15 = (uint)pFVar21;
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          pFVar21 = (FScriptContainerElement *)(ulonglong)uVar15;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar28 * 4);
          uVar10 = uVar9;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_88 = &local_138;
          local_90 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
                     ::Call;
          local_138 = this;
          local_130 = param_1;
          local_128 = param_2;
          local_124 = iVar27;
          local_120 = cVar23;
          local_11c = fVar32;
          local_118 = cVar19;
          local_114 = fVar33;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar28 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_90,false);
          pFVar28 = pFVar28 + 1;
        } while ((longlong)pFVar28 < lVar20);
      }
    }
    else {
      pFVar28 = pFVar21;
      if (0 < lVar20) {
        do {
          uVar15 = (uint)pFVar21;
          uVar9 = uVar10;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          pFVar21 = (FScriptContainerElement *)(ulonglong)uVar15;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar28 * 4);
          uVar9 = uVar10;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_e8 = &local_110;
          local_f0 = UE::Core::Private::Function::
                     TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
                     ::Call;
          local_110 = this;
          local_108 = param_1;
          local_100 = param_2;
          local_fc = iVar27;
          local_f8 = cVar23;
          local_f4 = fVar32;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pFVar28 * 4 + 4) - iVar27,
                             (TFunctionRef<void___cdecl(int)> *)&local_f0,false);
          pFVar28 = pFVar28 + 1;
        } while ((longlong)pFVar28 < lVar20);
      }
    }
    goto LAB_143f2b58f;
  }
  bVar31 = Chaos_XPBDSpring_SplitDampingMode == 0;
  pFVar28 = pFVar21;
  if (cVar19 == '\0') {
    if (cVar23 == '\0') {
      fVar32 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar25);
      fVar33 = FPBDWeightMap::operator_float(&this->DampingRatio);
      if (fVar32 < 0.0) goto LAB_143f2b58f;
      if (fVar33 <= 0.0) {
LAB_143f29dba:
        if (lVar20 < 1) goto LAB_143f2b58f;
      }
      else {
        if (bVar31) {
          if (0 < lVar20) {
            do {
              uVar15 = (uint)pFVar28;
              uVar9 = 0;
              if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar15 = uVar15 + 1;
              iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pFVar21 * 4);
              lVar24 = (longlong)iVar27;
              uVar9 = uVar10;
              if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar9 = ~uVar15 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar31)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              ApplyXPBDSpringConstraintsWithDamping
                        (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                         this->_padding_ + lVar24 * 8,this->_padding_ + lVar24 * 4,
                         (this->Lambdas).AllocatorInstance.Data + lVar24 * 4,param_2,fVar32,fVar33,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pFVar21 * 4 + 4) - iVar27);
              pFVar21 = pFVar21 + 1;
              pFVar28 = (FScriptContainerElement *)(ulonglong)uVar15;
            } while ((longlong)pFVar21 < lVar20);
          }
          goto LAB_143f2b58f;
        }
        pFVar22 = pFVar21;
        pFVar17 = pFVar21;
        if (lVar20 < 1) goto LAB_143f29dba;
        do {
          uVar15 = (uint)pFVar17;
          uVar9 = uVar10;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar15 = uVar15 + 1;
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar22 * 4);
          lVar24 = (longlong)iVar27;
          uVar9 = uVar10;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          ApplyXPBDSpringDampingConstraints
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar24 * 8,this->_padding_ + lVar24 * 4,
                     (this->LambdasDamping).AllocatorInstance.Data + lVar24 * 4,param_2,fVar32,
                     fVar33,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                    (longlong)pFVar22 * 4 + 4) - iVar27);
          pFVar22 = pFVar22 + 1;
          pFVar17 = (FScriptContainerElement *)(ulonglong)uVar15;
        } while ((longlong)pFVar22 < lVar20);
      }
      do {
        uVar15 = (uint)pFVar28;
        uVar9 = uVar10;
        if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar15 = uVar15 + 1;
        iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)pFVar21 * 4);
        lVar24 = (longlong)iVar27;
        uVar9 = uVar10;
        if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ApplyXPBDSpringConstraints
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar24 * 8,
                   this->_padding_ + lVar24 * 4,(this->Lambdas).AllocatorInstance.Data + lVar24 * 4,
                   param_2,fVar32,
                   *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pFVar21 * 4 + 4) - iVar27);
        pFVar21 = pFVar21 + 1;
        pFVar28 = (FScriptContainerElement *)(ulonglong)uVar15;
      } while ((longlong)pFVar21 < lVar20);
      goto LAB_143f2b58f;
    }
    fVar32 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if (0.0 < fVar32) goto LAB_143f29f08;
LAB_143f2a40a:
    if (lVar20 < 1) goto LAB_143f2b58f;
  }
  else {
LAB_143f29f08:
    local_240 = 0;
    if (bVar31) {
      if (0 < lVar20) {
        local_230 = 0;
        do {
          uVar15 = (uint)pFVar28;
          uVar9 = uVar10;
          if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           local_230 * 4);
          lVar24 = (longlong)iVar27;
          uVar9 = uVar10;
          if ((int)(uVar15 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar9 = ~(uVar15 + 1) >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           local_230 * 4 + 4);
          pFVar28 = (this->DampingRatio).Table.AllocatorInstance.Data;
          if (((this->DampingRatio).Table.ArrayNum < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar22 = pFVar21;
          if (cVar19 != '\0') {
            pFVar22 = (this->DampingRatio).Indices.AllocatorInstance.Data;
            if (((this->DampingRatio).Indices.ArrayNum < 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar22 = pFVar22 + lVar24;
          }
          lVar4 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar31)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar17 = pFVar21;
          if (cVar23 != '\0') {
            lVar14 = this->_padding_;
            if (((int)this->_padding_ < 0) &&
               (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar31)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar17 = (FScriptContainerElement *)(lVar24 + lVar14);
          }
          ApplyXPBDSpringConstraintsWithDampingAndWeightMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar24 * 8,this->_padding_ + lVar24 * 4,
                     (this->Lambdas).AllocatorInstance.Data + lVar24 * 4,param_2,cVar23,pFVar17,
                     lVar4,cVar19,pFVar22,pFVar28,iVar11 - iVar27);
          local_230 = local_230 + 1;
          local_240 = local_240 + 1;
          pFVar28 = (FScriptContainerElement *)(ulonglong)local_240;
        } while (local_230 < lVar20);
      }
      goto LAB_143f2b58f;
    }
    if (lVar20 < 1) goto LAB_143f2a40a;
    local_230 = 0;
    pFVar22 = pFVar21;
    do {
      uVar15 = (uint)pFVar22;
      uVar9 = uVar10;
      if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + local_230 * 4
                       );
      lVar24 = (longlong)iVar27;
      uVar9 = uVar10;
      if ((int)(uVar15 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar9 = ~(uVar15 + 1) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       local_230 * 4 + 4);
      pFVar22 = (this->DampingRatio).Table.AllocatorInstance.Data;
      if (((this->DampingRatio).Table.ArrayNum < 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar31)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = pFVar21;
      if (cVar19 != '\0') {
        pFVar17 = (this->DampingRatio).Indices.AllocatorInstance.Data;
        if (((this->DampingRatio).Indices.ArrayNum < 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar31)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar17 = pFVar17 + lVar24;
      }
      lVar4 = this->_padding_;
      if (((int)this->_padding_ < 0) &&
         (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar31)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar18 = pFVar21;
      if (cVar23 != '\0') {
        lVar14 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar31)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar18 = (FScriptContainerElement *)(lVar24 + lVar14);
      }
      ApplyXPBDSpringDampingConstraintsWithWeightMaps
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                 this->_padding_ + lVar24 * 8,this->_padding_ + lVar24 * 4,
                 (this->LambdasDamping).AllocatorInstance.Data + lVar24 * 4,param_2,cVar23,pFVar18,
                 lVar4,cVar19,pFVar17,pFVar22,iVar11 - iVar27);
      local_230 = local_230 + 1;
      local_240 = local_240 + 1;
      pFVar22 = (FScriptContainerElement *)(ulonglong)local_240;
    } while (local_230 < lVar20);
  }
  do {
    uVar15 = (uint)pFVar28;
    uVar9 = uVar10;
    if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar9 = ~uVar15 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar27 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pFVar21 * 4);
    uVar9 = uVar10;
    if ((int)(uVar15 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar9 = ~(uVar15 + 1) >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pFVar21 * 4 + 4);
    lVar24 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = (longlong)iVar27;
    ApplyXPBDSpringConstraintsWithWeightMaps
              (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar14 * 8,
               this->_padding_ + lVar14 * 4,(this->Lambdas).AllocatorInstance.Data + lVar14 * 4,
               param_2,lVar4 + lVar14,lVar24,iVar11 - iVar27);
    pFVar21 = pFVar21 + 1;
    pFVar28 = (FScriptContainerElement *)(ulonglong)(uVar15 + 1);
  } while ((longlong)pFVar21 < lVar20);
LAB_143f2b58f:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(local_250,CycleScopeEnd);
  }
  if (bVar30) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143f2d090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong lVar6;
  TVector<float,3> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_XPBD_Spring> FVar17;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar18;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  char cVar25;
  longlong lVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  longlong local_res8;
  FName local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FColor_u_0 local_2c0 [2];
  FName local_2b8;
  FName local_2b0;
  FXPBDSpringConstraints *local_2a0;
  FSolverParticlesRange *local_298;
  float local_290;
  int local_28c;
  char local_288;
  float local_284;
  char local_280;
  float local_27c;
  FXPBDSpringConstraints *local_278;
  FSolverParticlesRange *local_270;
  float local_268;
  int local_264;
  char local_260;
  float local_25c;
  char local_258;
  float local_254;
  FXPBDSpringConstraints *local_250;
  FSolverParticlesRange *local_248;
  float local_240;
  int local_23c;
  char local_238;
  float local_234;
  char local_230;
  float local_22c;
  FXPBDSpringConstraints *local_228;
  FSolverParticlesRange *local_220;
  float local_218;
  int local_214;
  char local_210;
  float local_20c;
  char local_208;
  float local_204;
  FXPBDSpringConstraints *local_200;
  FSolverParticlesRange *local_1f8;
  float local_1f0;
  int local_1ec;
  char local_1e8;
  float local_1e4;
  char local_1e0;
  float local_1dc;
  FXPBDSpringConstraints *local_1d8;
  FSolverParticlesRange *local_1d0;
  float local_1c8;
  int local_1c4;
  char local_1c0;
  float local_1bc;
  char local_1b8;
  float local_1b4;
  FXPBDSpringConstraints *local_1b0;
  FSolverParticlesRange *local_1a8;
  float local_1a0;
  int local_19c;
  char local_198;
  float local_194;
  code *local_190;
  FXPBDSpringConstraints **local_188;
  code *local_180;
  FXPBDSpringConstraints **local_178;
  code *local_170;
  FXPBDSpringConstraints **local_168;
  code *local_160;
  FXPBDSpringConstraints **local_158;
  code *local_150;
  FXPBDSpringConstraints **local_148;
  code *local_140;
  FXPBDSpringConstraints **local_138;
  code *local_130;
  FXPBDSpringConstraints **local_128;
  FName local_120;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_108;
  TArrayView<Chaos::TVector<float,3>,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_c8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_98;
  TArrayView<Chaos::TVector<float,3>,int> local_88 [5];
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId123,"FXPBDSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDSpringConstraints.cpp"
               ,0x7b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId123);
  }
  uVar28 = 0;
  FVar17 = StatPtr_STAT_XPBD_Spring;
  if (StatPtr_STAT_XPBD_Spring == (FThreadSafeStaticStat<FStat_STAT_XPBD_Spring>)0x0) {
    pFVar16 = ::FName::FName(&local_120,"STAT_XPBD_Spring");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_XPBD_Spring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_Spring,*pFVar16,
                        L"Chaos XPBD Spring Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2f8 = *(FName *)FVar17;
  bVar12 = false;
  bVar13 = false;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  bVar14 = false;
  bVar34 = false;
  if ((local_2f8.ComparisonIndex.Value.Value == 0) && (local_2f8.Number == 0)) {
LAB_143f2d251:
    bVar13 = bVar34;
    bVar12 = bVar14;
    bVar14 = false;
    local_2f8 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c0[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar12 = false;
      bVar13 = true;
      bVar14 = false;
      bVar34 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = local_2f8.ComparisonIndex.Value.Value;
        local_2b8.Number = local_2f8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDSpringConstraints.cpp"
                   ,0x7c);
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
        bVar34 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143f2d251;
    FThreadStats::AddMessage(local_2f8,CycleScopeStart);
    bVar14 = true;
  }
  plVar27 = &this->_padding_;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar25 = '\0';
  }
  else {
    cVar25 = '\x01';
  }
  if (((this->DampingRatio).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->DampingRatio).WeightedValue -
                    *(float *)&(this->DampingRatio).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01';
  }
  iVar23 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar23 < 2) || ((int)*plVar1 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    fVar35 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar27);
    fVar36 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if ((0.0 < fVar36) || (cVar24 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (0 < (int)*plVar1)) {
        do {
          iVar23 = (int)uVar28;
          fVar37 = fVar35;
          if (cVar25 != '\0') {
            fVar37 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar23);
          }
          fVar38 = fVar36;
          if (cVar24 != '\0') {
            fVar38 = FPBDWeightMap::operator[](&this->DampingRatio,iVar23);
          }
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar23,fVar37,fVar38);
          uVar28 = (ulonglong)(iVar23 + 1U);
        } while ((int)(iVar23 + 1U) < (int)*plVar1);
      }
      plVar27 = &this->_padding_;
      uVar28 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar27 < 1) goto LAB_143f2eebc;
        do {
          iVar23 = (int)uVar28;
          fVar37 = fVar35;
          if (cVar25 != '\0') {
            fVar37 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar23);
          }
          fVar38 = fVar36;
          if (cVar24 != '\0') {
            fVar38 = FPBDWeightMap::operator[](&this->DampingRatio,iVar23);
          }
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar23,fVar37,fVar38);
          iVar15 = (int)*plVar27;
          uVar28 = (ulonglong)(iVar23 + 1U);
        } while ((int)(iVar23 + 1U) < iVar15);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar27 < 1) goto LAB_143f2eebc;
        do {
          iVar23 = (int)uVar28;
          fVar37 = fVar35;
          if (cVar25 != '\0') {
            fVar37 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar23);
          }
          fVar38 = fVar36;
          if (cVar24 != '\0') {
            fVar38 = FPBDWeightMap::operator[](&this->DampingRatio,iVar23);
          }
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar23,fVar37,fVar38);
          iVar15 = (int)*plVar27;
          uVar28 = (ulonglong)(iVar23 + 1U);
        } while ((int)(iVar23 + 1U) < iVar15);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar15 = (int)*plVar27;
        if (0 < iVar15) {
          do {
            iVar23 = (int)uVar28;
            fVar37 = fVar35;
            if (cVar25 != '\0') {
              fVar37 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar23);
            }
            fVar38 = fVar36;
            if (cVar24 != '\0') {
              fVar38 = FPBDWeightMap::operator[](&this->DampingRatio,iVar23);
            }
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,iVar23,fVar37,fVar38);
            iVar15 = (int)*plVar27;
            uVar28 = (ulonglong)(iVar23 + 1U);
          } while ((int)(iVar23 + 1U) < iVar15);
        }
      }
      else {
        iVar15 = (int)this->_padding_;
        uVar31 = uVar28;
        if (0 < iVar15) {
          do {
            uVar29 = (uint)uVar31;
            fVar37 = fVar35;
            if (cVar25 != '\0') {
              uVar20 = 0;
              if ((int)uVar29 < (int)this->_padding_) {
                uVar20 = ~uVar29 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              bVar2 = *(byte *)(uVar28 + this->_padding_);
              if (((int)this->_padding_ <= (int)(uint)bVar2) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              fVar37 = *(float *)(this->_padding_ + (ulonglong)bVar2 * 4);
            }
            fVar38 = fVar36;
            if (cVar24 != '\0') {
              uVar20 = 0;
              if ((int)uVar29 < (this->DampingRatio).Indices.ArrayNum) {
                uVar20 = ~uVar29 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              FVar3 = (this->DampingRatio).Indices.AllocatorInstance.Data[(int)uVar29];
              if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar3) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              fVar38 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                                 (ulonglong)(byte)FVar3 * 4);
            }
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,uVar29,fVar37,fVar38);
            iVar15 = (int)this->_padding_;
            uVar28 = uVar28 + 1;
            uVar31 = (ulonglong)(uVar29 + 1);
          } while ((int)(uVar29 + 1) < iVar15);
        }
      }
      uVar28 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (uVar31 = uVar28, 0 < iVar15)) {
        do {
          uVar29 = (uint)uVar31;
          fVar37 = fVar35;
          if (cVar25 != '\0') {
            uVar20 = 0;
            if ((int)uVar29 < (int)this->_padding_) {
              uVar20 = ~uVar29 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            bVar2 = *(byte *)(uVar28 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar2) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar37 = *(float *)(this->_padding_ + (ulonglong)bVar2 * 4);
          }
          fVar38 = fVar36;
          if (cVar24 != '\0') {
            uVar20 = 0;
            if ((int)uVar29 < (this->DampingRatio).Indices.ArrayNum) {
              uVar20 = ~uVar29 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVar3 = (this->DampingRatio).Indices.AllocatorInstance.Data[(int)uVar29];
            if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar3) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar38 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar3 * 4);
          }
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,uVar29,fVar37,fVar38);
          uVar28 = uVar28 + 1;
          uVar31 = (ulonglong)(uVar29 + 1);
        } while ((int)(uVar29 + 1) < (int)this->_padding_);
      }
    }
    else if (0 < (int)*plVar1) {
      do {
        iVar23 = (int)uVar28;
        fVar36 = fVar35;
        if (cVar25 != '\0') {
          fVar36 = FPBDWeightMap::operator[]((FPBDWeightMap *)&this->_padding_,iVar23);
        }
        ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                  (this,param_1,param_2,iVar23,fVar36,0.0);
        uVar28 = (ulonglong)(iVar23 + 1U);
      } while ((int)(iVar23 + 1U) < (int)*plVar1);
    }
    goto LAB_143f2eebc;
  }
  lVar30 = (longlong)(iVar23 + -1);
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar35 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar27);
    fVar36 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if ((0.0 < fVar36) || (cVar24 != '\0')) {
      uVar29 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (uVar31 = uVar28, uVar32 = uVar28, 0 < lVar30)
         ) {
        do {
          uVar21 = (uint)uVar31;
          uVar20 = uVar29;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar21 = uVar21 + 1;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar20 = uVar29;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_178 = &local_2a0;
          local_180 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
                      ::Call;
          local_2a0 = this;
          local_298 = param_1;
          local_290 = param_2;
          local_28c = iVar23;
          local_288 = cVar25;
          local_284 = fVar35;
          local_280 = cVar24;
          local_27c = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_180,false);
          uVar32 = uVar32 + 1;
          uVar31 = (ulonglong)uVar21;
        } while ((longlong)uVar32 < lVar30);
      }
      uVar20 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        uVar31 = uVar28;
        uVar32 = uVar28;
        if (lVar30 < 1) goto LAB_143f2eebc;
        do {
          uVar21 = (uint)uVar31;
          uVar29 = uVar20;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar21 = uVar21 + 1;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar29 = uVar20;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_148 = &local_200;
          local_150 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
                      ::Call;
          local_200 = this;
          local_1f8 = param_1;
          local_1f0 = param_2;
          local_1ec = iVar23;
          local_1e8 = cVar25;
          local_1e4 = fVar35;
          local_1e0 = cVar24;
          local_1dc = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_150,false);
          uVar32 = uVar32 + 1;
          uVar31 = (ulonglong)uVar21;
        } while ((longlong)uVar32 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        uVar31 = uVar28;
        uVar32 = uVar28;
        if (lVar30 < 1) goto LAB_143f2eebc;
        do {
          uVar22 = (uint)uVar31;
          uVar21 = uVar29;
          if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar22 = uVar22 + 1;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar21 = uVar29;
          if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_128 = &local_228;
          local_130 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
                      ::Call;
          local_228 = this;
          local_220 = param_1;
          local_218 = param_2;
          local_214 = iVar23;
          local_210 = cVar25;
          local_20c = fVar35;
          local_208 = cVar24;
          local_204 = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_130,false);
          uVar32 = uVar32 + 1;
          uVar31 = (ulonglong)uVar22;
        } while ((longlong)uVar32 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        uVar31 = uVar28;
        uVar32 = uVar28;
        if (lVar30 < 1) goto LAB_143f2eebc;
        do {
          uVar22 = (uint)uVar31;
          uVar21 = uVar29;
          if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar22 = uVar22 + 1;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar21 = uVar29;
          if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~uVar22 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_158 = &local_250;
          local_160 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
                      ::Call;
          local_250 = this;
          local_248 = param_1;
          local_240 = param_2;
          local_23c = iVar23;
          local_238 = cVar25;
          local_234 = fVar35;
          local_230 = cVar24;
          local_22c = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_160,false);
          uVar32 = uVar32 + 1;
          uVar31 = (ulonglong)uVar22;
        } while ((longlong)uVar32 < lVar30);
      }
      else {
        uVar31 = uVar28;
        uVar32 = uVar28;
        if (0 < lVar30) {
          do {
            uVar22 = (uint)uVar31;
            uVar21 = uVar29;
            if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar22 = uVar22 + 1;
            iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar32 * 4);
            uVar21 = uVar29;
            if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar21 = ~uVar22 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_170 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
                        ::Call;
            local_278 = this;
            local_270 = param_1;
            local_268 = param_2;
            local_264 = iVar23;
            local_260 = cVar25;
            local_25c = fVar35;
            local_258 = cVar24;
            local_254 = fVar36;
            local_168 = &local_278;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar32 * 4 + 4) - iVar23,
                               (TFunctionRef<void___cdecl(int)> *)&local_170,false);
            uVar32 = uVar32 + 1;
            uVar31 = (ulonglong)uVar22;
          } while ((longlong)uVar32 < lVar30);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (uVar31 = uVar28, 0 < lVar30)) {
        do {
          uVar21 = (uint)uVar28;
          uVar29 = uVar20;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar21 = uVar21 + 1;
          uVar28 = (ulonglong)uVar21;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar31 * 4);
          uVar29 = uVar20;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar21 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_138 = &local_1d8;
          local_140 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
                      ::Call;
          local_1d8 = this;
          local_1d0 = param_1;
          local_1c8 = param_2;
          local_1c4 = iVar23;
          local_1c0 = cVar25;
          local_1bc = fVar35;
          local_1b8 = cVar24;
          local_1b4 = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar31 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_140,false);
          uVar31 = uVar31 + 1;
        } while ((longlong)uVar31 < lVar30);
      }
    }
    else {
      uVar31 = uVar28;
      if (0 < lVar30) {
        do {
          uVar20 = (uint)uVar28;
          uVar29 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar20 = uVar20 + 1;
          uVar28 = (ulonglong)uVar20;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar31 * 4);
          uVar29 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_188 = &local_1b0;
          local_190 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
                      ::Call;
          local_1b0 = this;
          local_1a8 = param_1;
          local_1a0 = param_2;
          local_19c = iVar23;
          local_198 = cVar25;
          local_194 = fVar35;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar31 * 4 + 4) - iVar23,
                             (TFunctionRef<void___cdecl(int)> *)&local_190,false);
          uVar31 = uVar31 + 1;
        } while ((longlong)uVar31 < lVar30);
      }
    }
    goto LAB_143f2eebc;
  }
  bVar34 = Chaos_XPBDSpring_SplitDampingMode == 0;
  if (cVar24 == '\0') {
    if (cVar25 == '\0') {
      fVar35 = FPBDWeightMap::operator_float((FPBDWeightMap *)plVar27);
      fVar36 = FPBDWeightMap::operator_float(&this->DampingRatio);
      if (fVar35 < 0.0) goto LAB_143f2eebc;
      if (fVar36 <= 0.0) {
LAB_143f2d670:
        if (lVar30 < 1) goto LAB_143f2eebc;
      }
      else {
        if (bVar34) {
          if (0 < lVar30) {
            local_2e8 = 0;
            do {
              uVar20 = (uint)uVar28;
              uVar29 = 0;
              if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar29 = ~uVar20 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar20 = uVar20 + 1;
              iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               local_2e8 * 4);
              lVar26 = (longlong)iVar23;
              uVar29 = 0;
              if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar29 = ~uVar20 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar34)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pFVar4 = (this->Lambdas).AllocatorInstance.Data;
              iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               local_2e8 * 4 + 4);
              lVar5 = this->_padding_;
              lVar6 = this->_padding_;
              pTVar18 = FSolverParticlesRange::XArray(param_1,&local_a8);
              pTVar7 = pTVar18->DataPtr;
              pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_98);
              ApplyXPBDSpringConstraintsWithDamping
                        (pTVar19->DataPtr,pTVar7,lVar6 + lVar26 * 8,lVar5 + lVar26 * 4,
                         pFVar4 + lVar26 * 4,param_2,fVar35,fVar36,iVar15 - iVar23);
              uVar28 = (ulonglong)uVar20;
              local_2e8 = local_2e8 + 1;
            } while (local_2e8 < lVar30);
          }
          goto LAB_143f2eebc;
        }
        if (lVar30 < 1) goto LAB_143f2d670;
        local_2e0 = (FScriptContainerElement *)0x0;
        do {
          uVar20 = (uint)uVar28;
          uVar29 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_2e0 * 4);
          lVar26 = (longlong)iVar23;
          uVar29 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar4 = (this->LambdasDamping).AllocatorInstance.Data;
          iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_2e0 * 4 + 4);
          lVar5 = this->_padding_;
          lVar6 = this->_padding_;
          pTVar18 = FSolverParticlesRange::XArray(param_1,local_88);
          pTVar7 = pTVar18->DataPtr;
          pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_118);
          ApplyXPBDSpringDampingConstraints
                    (pTVar19->DataPtr,pTVar7,lVar6 + lVar26 * 8,lVar5 + lVar26 * 4,
                     pFVar4 + lVar26 * 4,param_2,fVar35,fVar36,iVar15 - iVar23);
          uVar28 = (ulonglong)uVar20;
          local_2e0 = (FScriptContainerElement *)((longlong)local_2e0 + 1);
        } while ((longlong)local_2e0 < lVar30);
      }
      uVar29 = 0;
      local_res8 = 0;
      do {
        uVar20 = 0;
        if ((int)uVar29 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar20 = ~uVar29 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar29 = uVar29 + 1;
        iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         local_res8 * 4);
        lVar26 = (longlong)iVar23;
        uVar20 = 0;
        if ((int)uVar29 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar20 = ~uVar29 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         local_res8 * 4 + 4);
        lVar5 = this->_padding_;
        lVar6 = this->_padding_;
        pFVar4 = (this->Lambdas).AllocatorInstance.Data;
        pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_108);
        ApplyXPBDSpringConstraints
                  (pTVar19->DataPtr,lVar6 + lVar26 * 8,lVar5 + lVar26 * 4,pFVar4 + lVar26 * 4,
                   param_2,fVar35,iVar15 - iVar23);
        local_res8 = local_res8 + 1;
      } while (local_res8 < lVar30);
      goto LAB_143f2eebc;
    }
    fVar35 = FPBDWeightMap::operator_float(&this->DampingRatio);
    if (0.0 < fVar35) goto LAB_143f2d7dd;
LAB_143f2dd45:
    if (lVar30 < 1) goto LAB_143f2eebc;
  }
  else {
LAB_143f2d7dd:
    if (bVar34) {
      local_res8._0_4_ = 0;
      if (0 < lVar30) {
        local_2d8 = (FScriptContainerElement *)0x0;
        do {
          uVar20 = (uint)uVar28;
          uVar29 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_2d8 * 4);
          lVar26 = (longlong)iVar23;
          uVar29 = 0;
          if ((int)(uVar20 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar29 = ~(uVar20 + 1) >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_2d8 * 4 + 4);
          pFVar4 = (this->DampingRatio).Table.AllocatorInstance.Data;
          if (((this->DampingRatio).Table.ArrayNum < 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (cVar24 == '\0') {
            local_2e0 = (FScriptContainerElement *)0x0;
          }
          else {
            local_2e0 = (this->DampingRatio).Indices.AllocatorInstance.Data;
            if (((this->DampingRatio).Indices.ArrayNum < 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_2e0 = local_2e0 + lVar26;
          }
          lVar5 = this->_padding_;
          if (((int)this->_padding_ < 0) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar34)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (cVar25 == '\0') {
            local_2f0 = 0;
          }
          else {
            local_2f0 = this->_padding_;
            if (((int)this->_padding_ < 0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar34)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_2f0 = local_2f0 + lVar26;
          }
          pFVar8 = (this->Lambdas).AllocatorInstance.Data;
          lVar6 = this->_padding_;
          lVar9 = this->_padding_;
          pTVar18 = FSolverParticlesRange::XArray(param_1,&local_f8);
          pTVar7 = pTVar18->DataPtr;
          pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
          ApplyXPBDSpringConstraintsWithDampingAndWeightMaps
                    (pTVar19->DataPtr,pTVar7,lVar9 + lVar26 * 8,lVar6 + lVar26 * 4,
                     pFVar8 + lVar26 * 4,param_2,cVar25,local_2f0,lVar5,cVar24,local_2e0,pFVar4,
                     iVar15 - iVar23);
          local_res8._0_4_ = (uint)local_res8 + 1;
          uVar28 = (ulonglong)(uint)local_res8;
          local_2d8 = (FScriptContainerElement *)((longlong)local_2d8 + 1);
        } while ((longlong)local_2d8 < lVar30);
      }
      goto LAB_143f2eebc;
    }
    uVar29 = 0;
    if (lVar30 < 1) goto LAB_143f2dd45;
    local_2f0 = 0;
    do {
      uVar21 = (uint)uVar28;
      uVar20 = 0;
      if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + local_2f0 * 4
                       );
      lVar26 = (longlong)iVar23;
      uVar20 = 0;
      if ((int)(uVar21 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar20 = ~(uVar21 + 1) >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       local_2f0 * 4 + 4);
      pFVar4 = (this->DampingRatio).Table.AllocatorInstance.Data;
      if (((this->DampingRatio).Table.ArrayNum < 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (cVar24 == '\0') {
        local_2d8 = (FScriptContainerElement *)0x0;
      }
      else {
        local_2d8 = (this->DampingRatio).Indices.AllocatorInstance.Data;
        if (((this->DampingRatio).Indices.ArrayNum < 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_2d8 = local_2d8 + lVar26;
      }
      lVar5 = this->_padding_;
      if (((int)this->_padding_ < 0) &&
         (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar34)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (cVar25 == '\0') {
        local_2e0 = (FScriptContainerElement *)0x0;
      }
      else {
        lVar6 = this->_padding_;
        if (((int)this->_padding_ < 0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar34)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_2e0 = (FScriptContainerElement *)(lVar6 + lVar26);
      }
      pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
      lVar6 = this->_padding_;
      lVar9 = this->_padding_;
      pTVar18 = FSolverParticlesRange::XArray(param_1,&local_d8);
      pTVar7 = pTVar18->DataPtr;
      pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_c8);
      ApplyXPBDSpringDampingConstraintsWithWeightMaps
                (pTVar19->DataPtr,pTVar7,lVar9 + lVar26 * 8,lVar6 + lVar26 * 4,pFVar8 + lVar26 * 4,
                 param_2,cVar25,local_2e0,lVar5,cVar24,local_2d8,pFVar4,iVar15 - iVar23);
      uVar29 = uVar29 + 1;
      uVar28 = (ulonglong)uVar29;
      local_2f0 = local_2f0 + 1;
    } while (local_2f0 < lVar30);
  }
  uVar29 = 0;
  local_2d8 = (FScriptContainerElement *)0x0;
  do {
    uVar20 = 0;
    if ((int)uVar29 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar20 = ~uVar29 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar34)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar23 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_2d8 * 4);
    lVar26 = (longlong)iVar23;
    uVar20 = 0;
    if ((int)(uVar29 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar20 = ~(uVar29 + 1) >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar34)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_2d8 * 4 + 4);
    lVar5 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar34)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar6 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar34)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    pFVar4 = (this->Lambdas).AllocatorInstance.Data;
    pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_b8);
    ApplyXPBDSpringConstraintsWithWeightMaps
              (pTVar19->DataPtr,lVar10 + lVar26 * 8,lVar9 + lVar26 * 4,pFVar4 + lVar26 * 4,param_2,
               lVar6 + lVar26,lVar5,iVar15 - iVar23);
    uVar29 = uVar29 + 1;
    local_2d8 = (FScriptContainerElement *)((longlong)local_2d8 + 1);
  } while ((longlong)local_2d8 < lVar30);
LAB_143f2eebc:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(local_2f8,CycleScopeEnd);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles> @ 143f30b20

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_a8;
  TVector<float,3> local_9c [8];
  
  lVar14 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar5 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar6 = (pTVar1->field0_0x0)._s_0.Y;
  uVar10 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (&local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar7 + lVar14 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar11;
  fVar15 = *(float *)&pTVar11->field_0x4;
  fVar16 = *(float *)&pTVar11->field_0x8;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->Lambdas).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_9c,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar7 + lVar14 * 4),param_4);
  fVar3 = *(float *)pTVar11;
  fVar15 = fVar15 + *(float *)&pTVar11->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar4 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar11 = fVar4 * (fVar2 + fVar3) + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar4 * fVar15 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar4 * fVar16 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar4 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar4 * (fVar2 + fVar3);
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar4 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar4 * fVar16;
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143f30e60

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar13 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar13 * 8);
  iVar5 = *(int *)(this->_padding_ + lVar13 * 8);
  iVar6 = (pTVar1->field0_0x0)._s_0.Y;
  uVar10 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar7 + lVar13 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar11;
  fVar15 = *(float *)&pTVar11->field_0x4;
  fVar16 = *(float *)&pTVar11->field_0x8;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->Lambdas).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar7 + lVar13 * 4),param_4);
  fVar3 = *(float *)pTVar11;
  fVar15 = fVar15 + *(float *)&pTVar11->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar11->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar4 = *pfVar12;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar11 = fVar4 * (fVar2 + fVar3) + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar4 * fVar15 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar4 * fVar16 + *(float *)&pTVar11->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar4 = *pfVar12;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar4 * (fVar2 + fVar3);
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar4 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar4 * fVar16;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles> @ 143f31270

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  TVector<float,3> local_88 [6];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar15 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar15 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       (float *)(pFVar8 + lVar15 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar7);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange> @ 143f314d0

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  TVector<float,3> local_a8 [9];
  
  lVar14 = (longlong)param_3;
  uVar15 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar8 + lVar14 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar7);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles> @ 143f31820

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  TVector<float,3> local_88 [6];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar15 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar15 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->Lambdas).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDeltaWithDamping<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       (float *)(pFVar8 + lVar15 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar7);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange> @ 143f31a80

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  TVector<float,3> local_a8 [9];
  
  lVar14 = (longlong)param_3;
  uVar15 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->Lambdas).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDeltaWithDamping<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar8 + lVar14 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar7);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles> @ 143f31dd0

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_a8;
  TVector<float,3> local_9c [8];
  
  lVar14 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar5 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar6 = (pTVar1->field0_0x0)._s_0.Y;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->Lambdas).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (&local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar7 + lVar14 * 4),param_4);
  fVar2 = *(float *)pTVar11;
  fVar15 = *(float *)&pTVar11->field_0x4;
  fVar16 = *(float *)&pTVar11->field_0x8;
  uVar10 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_9c,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar7 + lVar14 * 4),param_4,param_5);
  fVar3 = *(float *)pTVar11;
  fVar15 = fVar15 + *(float *)&pTVar11->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar4 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar11 = fVar4 * (fVar2 + fVar3) + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar4 * fVar15 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar4 * fVar16 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar4 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar4 * (fVar2 + fVar3);
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar4 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar4 * fVar16;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange> @ 143f32110

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar13 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar13 * 8);
  iVar5 = *(int *)(this->_padding_ + lVar13 * 8);
  iVar6 = (pTVar1->field0_0x0)._s_0.Y;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->Lambdas).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar7 + lVar13 * 4),param_4);
  fVar2 = *(float *)pTVar11;
  fVar15 = *(float *)&pTVar11->field_0x4;
  fVar16 = *(float *)&pTVar11->field_0x8;
  uVar10 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar10 = uVar14;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar7 + lVar13 * 4),param_4,param_5);
  fVar3 = *(float *)pTVar11;
  fVar15 = fVar15 + *(float *)&pTVar11->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar11->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar4 = *pfVar12;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar11 = fVar4 * (fVar2 + fVar3) + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar4 * fVar15 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar4 * fVar16 + *(float *)&pTVar11->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar4 = *pfVar12;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pTVar11 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar4 * (fVar2 + fVar3);
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar4 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar4 * fVar16;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles> @ 143f32520

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  TVector<float,3> local_88 [6];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar15 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar15 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->Lambdas).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       (float *)(pFVar8 + lVar15 * 4),param_4);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar7);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143f32780

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  TVector<float,3> local_a8 [9];
  
  lVar14 = (longlong)param_3;
  uVar15 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->Lambdas).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar8 + lVar14 * 4),param_4);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar7);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles> @ 143f32ac0

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  TVector<float,3> local_88 [6];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar15 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar15 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       (float *)(pFVar8 + lVar15 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar6);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar7);
  fVar5 = *pfVar13;
  pTVar12 = FSolverParticles::P(param_1,iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange> @ 143f32d20

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  TVector<float,3> local_a8 [9];
  
  lVar14 = (longlong)param_3;
  uVar15 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar14 * 8);
  iVar6 = *(int *)(this->_padding_ + lVar14 * 8);
  iVar7 = (pTVar1->field0_0x0)._s_0.Y;
  uVar11 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar15;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       (float *)(pFVar8 + lVar14 * 4),param_4,param_5);
  fVar2 = *(float *)pTVar12;
  fVar3 = *(float *)&pTVar12->field_0x4;
  fVar4 = *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar6);
  *(float *)pTVar12 = fVar5 * fVar2 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar12->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar7);
  fVar5 = *pfVar13;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar7);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar5 * fVar2;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar5 * fVar4;
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f3bc40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDSpringConstraints *this,FSolverParticles *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  int *piVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_b8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar13 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  iVar8 = (int)this->_padding_;
  local_68 = pTVar13;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>
            (&local_78,pTVar13,param_1,iVar8,*(int *)((longlong)&this->_padding_ + 4) + iVar8);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
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
  uVar11 = (ulonglong)local_78.ArrayNum;
  local_b8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar11 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar18.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar6 = local_58;
    pTVar12 = &this->ConstraintsPerColorStartIndex;
    piVar19 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    pFVar17 = (pTVar12->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar6) {
      if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar19 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar8 == *piVar19) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar12->AllocatorInstance,piVar19);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_b8[0];
      if (pTVar13 != &local_a0) {
        pFVar17 = (pTVar13->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (pTVar13->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
        pTVar13->ArrayNum = local_a0.ArrayNum;
        pTVar13->ArrayMax = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_b0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices(&this->DampingRatio,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
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
    if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar19 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar8 == *piVar19) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar12->AllocatorInstance,piVar19);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_b8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_80;
    pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_60 = pFVar17 + uVar11 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar17 == pFVar5) break;
      uVar16 = *(uint *)pFVar17;
      lVar20 = (longlong)(int)uVar16;
      uVar15 = ~uVar16 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar16 < (int)*(longlong *)&pTVar13->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_b8[0];
      uVar3 = *(undefined8 *)((pTVar13->AllocatorInstance).Data + lVar20 * 8);
      uVar9 = 0;
      if ((int)local_b8[0] < local_a0.ArrayNum) {
        uVar9 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 8) = uVar3;
      uVar9 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar20 * 4);
      uVar9 = 0;
      if ((int)local_b8[0] < local_b0.ArrayNum) {
        uVar9 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = local_b8[0];
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar10 = 0;
      if ((int)uVar16 < local_90.ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = (ulonglong)local_80;
      *(uint *)(local_90.AllocatorInstance.Data + lVar20 * 4) = uVar9;
      local_b8[0] = local_b8[0] + 1;
      pFVar17 = pFVar17 + 4;
      pTVar13 = local_68;
    }
    FVar18.Data = FVar18.Data + 0x10;
    uVar11 = (ulonglong)local_7c;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f3cb30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  int *piVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_b8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar13 = (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  iVar8 = (int)this->_padding_;
  local_68 = pTVar13;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>
            (&local_78,pTVar13,param_1,iVar8,*(int *)((longlong)&this->_padding_ + 4) + iVar8);
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
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
  uVar11 = (ulonglong)local_78.ArrayNum;
  local_b8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar11 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar18.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar6 = local_58;
    pTVar12 = &this->ConstraintsPerColorStartIndex;
    piVar19 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    pFVar17 = (pTVar12->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar6) {
      if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar19 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar8 == *piVar19) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar12->AllocatorInstance,piVar19);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_b8[0];
      if (pTVar13 != &local_a0) {
        pFVar17 = (pTVar13->AllocatorInstance).Data;
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        (pTVar13->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
        pTVar13->ArrayNum = local_a0.ArrayNum;
        pTVar13->ArrayMax = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_b0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDWeightMap::ReorderIndices(&this->DampingRatio,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
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
    if (((pFVar17 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar17 + (longlong)*piVar19 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar8 == *piVar19) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar12->AllocatorInstance,piVar19);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_b8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_80;
    pFVar17 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_60 = pFVar17 + uVar11 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar17 == pFVar5) break;
      uVar16 = *(uint *)pFVar17;
      lVar20 = (longlong)(int)uVar16;
      uVar15 = ~uVar16 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar16 < (int)*(longlong *)&pTVar13->ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_b8[0];
      uVar3 = *(undefined8 *)((pTVar13->AllocatorInstance).Data + lVar20 * 8);
      uVar9 = 0;
      if ((int)local_b8[0] < local_a0.ArrayNum) {
        uVar9 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 8) = uVar3;
      uVar9 = 0;
      if ((int)uVar16 < (int)this->_padding_) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)(int)local_b8[0];
      uVar2 = *(undefined4 *)(this->_padding_ + lVar20 * 4);
      uVar9 = 0;
      if ((int)local_b8[0] < local_b0.ArrayNum) {
        uVar9 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = local_b8[0];
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar10 = 0;
      if ((int)uVar16 < local_90.ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = (ulonglong)local_80;
      *(uint *)(local_90.AllocatorInstance.Data + lVar20 * 4) = uVar9;
      local_b8[0] = local_b8[0] + 1;
      pFVar17 = pFVar17 + 4;
      pTVar13 = local_68;
    }
    FVar18.Data = FVar18.Data + 0x10;
    uVar11 = (ulonglong)local_7c;
  } while( true );
}

// operator() @ 143f50080

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f50110

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f515b0

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  FEvolutionLinearSystem *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  
  lVar4 = *(longlong *)this;
  uVar10 = *(int *)((longlong)this + 0x20) + param_1;
  pFVar5 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  fVar1 = *(float *)((longlong)this + 0x28);
  fVar2 = *(float *)((longlong)this + 0x24);
  uVar9 = 0;
  if ((int)uVar10 < *(int *)(lVar4 + 0x20)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)this;
  fVar3 = *(float *)(*(longlong *)(lVar4 + 0x18) + (longlong)(int)uVar10 * 4);
  uVar9 = 0;
  if ((int)uVar10 < *(int *)(lVar6 + 0x10)) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  Chaos::Softs::Spring::UpdateSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,2> *)(*(longlong *)(lVar6 + 8) + (longlong)(int)uVar10 * 8),fVar3,fVar2,
             0.0,fVar1,pFVar5);
  return;
}

// operator() @ 143f51700

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::operator()
          (void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  FEvolutionLinearSystem *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar8 = *(int *)((longlong)this + 0x20) + param_1;
  if (*(char *)((longlong)this + 0x24) == '\0') {
    fVar9 = *(float *)((longlong)this + 0x28);
  }
  else {
    fVar9 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),uVar8);
  }
  if (*(char *)((longlong)this + 0x2c) == '\0') {
    fVar10 = *(float *)((longlong)this + 0x30);
  }
  else {
    fVar10 = Chaos::Softs::FPBDWeightMap::operator[]
                       ((FPBDWeightMap *)(*(longlong *)this + 0x78),uVar8);
  }
  lVar2 = *(longlong *)this;
  pFVar3 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  uVar7 = 0;
  if ((int)uVar8 < *(int *)(lVar2 + 0x20)) {
    uVar7 = ~uVar8 >> 0x1f;
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
  lVar4 = *(longlong *)this;
  fVar1 = *(float *)(*(longlong *)(lVar2 + 0x18) + (longlong)(int)uVar8 * 4);
  uVar7 = 0;
  if ((int)uVar8 < *(int *)(lVar4 + 0x10)) {
    uVar7 = ~uVar8 >> 0x1f;
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
  Chaos::Softs::Spring::UpdateSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,2> *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 8),fVar1,fVar9,0.0
             ,fVar10,pFVar3);
  return;
}

// operator() @ 143f522a0

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52330

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::
<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f523c0

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52450

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::
<lambda_3>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f524e0

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52570

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::
<lambda_4>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52600

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52690

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::
<lambda_5>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f52720

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>::
operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticles **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// operator() @ 143f527b0

void __thiscall
`Chaos::Softs::FXPBDSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::
<lambda_6>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar2 = *(float *)((longlong)this + 0x1c);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x30),iVar1);
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar3 = *(float *)((longlong)this + 0x24);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)this + 0x78),iVar1);
  }
  Chaos::Softs::FXPBDSpringConstraints::ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDSpringConstraints **)this,*(FSolverParticlesRange **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10),iVar1,fVar2,fVar3);
  return;
}

// UpdateLinearSystem @ 143f79ab0

void __thiscall
Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem
          (FXPBDSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          FEvolutionLinearSystem *param_3)

{
  longlong *this_00;
  float fVar1;
  byte bVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  char cVar10;
  longlong lVar11;
  char cVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  code *local_130;
  FXPBDSpringConstraints **local_128;
  code *local_120;
  FXPBDSpringConstraints **local_118;
  FXPBDSpringConstraints *local_110;
  FSolverParticlesRange *local_108;
  float local_100;
  FEvolutionLinearSystem *local_f8;
  int local_f0;
  char local_ec;
  float local_e8;
  char local_e4;
  float local_e0;
  FXPBDSpringConstraints *local_d8;
  FSolverParticlesRange *local_d0;
  float local_c8;
  FEvolutionLinearSystem *local_c0;
  int local_b8;
  float local_b4;
  float local_b0;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId548,"FXPBDSpringConstraints_UpdateLinearSystem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDSpringConstraints.cpp"
               ,0x224);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId548);
  }
  iVar4 = (int)this->_padding_;
  TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
            (&param_3->Matrix,iVar4 * 2,iVar4);
  this_00 = &this->_padding_;
  if (((int)this->_padding_ < 2) ||
     ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x01';
  }
  if (((this->DampingRatio).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->DampingRatio).WeightedValue -
                    *(float *)&(this->DampingRatio).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  iVar4 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar4 < 2) || ((int)this->_padding_ <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    if ((cVar10 == '\0') && (cVar12 == '\0')) {
      fVar14 = FPBDWeightMap::operator_float((FPBDWeightMap *)this_00);
      fVar15 = FPBDWeightMap::operator_float(&this->DampingRatio);
      if ((0.0 <= fVar14) && (uVar8 = 0, 0 < (int)this->_padding_)) {
        lVar11 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar17 = *(float *)(lVar11 + this->_padding_);
          uVar7 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Spring::UpdateSpringLinearSystem
                    (param_1,param_2,(TVector<int,2> *)(this->_padding_ + (longlong)(int)uVar8 * 8),
                     fVar17,fVar14,0.0,fVar15,param_3);
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 4;
        } while ((int)uVar8 < (int)this->_padding_);
      }
    }
    else {
      fVar14 = FPBDWeightMap::operator_float((FPBDWeightMap *)this_00);
      fVar15 = FPBDWeightMap::operator_float(&this->DampingRatio);
      uVar8 = 0;
      if (0 < (int)this->_padding_) {
        lVar11 = 0;
        do {
          fVar17 = fVar14;
          if (cVar10 != '\0') {
            uVar7 = 0;
            if ((int)uVar8 < (int)this->_padding_) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar2 = *(byte *)(lVar11 + this->_padding_);
            if (((int)this->_padding_ <= (int)(uint)bVar2) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar17 = *(float *)(this->_padding_ + (ulonglong)bVar2 * 4);
          }
          fVar16 = fVar15;
          if (cVar12 != '\0') {
            uVar7 = 0;
            if ((int)uVar8 < (this->DampingRatio).Indices.ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar3 = (this->DampingRatio).Indices.AllocatorInstance.Data[(int)uVar8];
            if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar3) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar16 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar3 * 4);
          }
          uVar7 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar1 = *(float *)(this->_padding_ + lVar11 * 4);
          uVar7 = 0;
          if ((int)uVar8 < (int)this->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Spring::UpdateSpringLinearSystem
                    (param_1,param_2,(TVector<int,2> *)(this->_padding_ + (longlong)(int)uVar8 * 8),
                     fVar1,fVar17,0.0,fVar16,param_3);
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 1;
        } while ((int)uVar8 < (int)this->_padding_);
      }
    }
  }
  else {
    lVar11 = (longlong)(iVar4 + -1);
    if ((cVar10 == '\0') && (cVar12 == '\0')) {
      fVar14 = FPBDWeightMap::operator_float((FPBDWeightMap *)this_00);
      fVar15 = FPBDWeightMap::operator_float(&this->DampingRatio);
      if ((0.0 <= fVar14) && (uVar8 = 0, 0 < lVar11)) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = uVar8 + 1;
          iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar9 * 4)
          ;
          uVar7 = 0;
          if ((int)uVar8 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_128 = &local_d8;
          local_130 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
                      ::Call;
          local_d8 = this;
          local_d0 = param_1;
          local_c8 = param_2;
          local_c0 = param_3;
          local_b8 = iVar4;
          local_b4 = fVar14;
          local_b0 = fVar15;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar9 * 4 + 4) - iVar4,
                             (TFunctionRef<void___cdecl(int)> *)&local_130,false);
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar11);
      }
    }
    else {
      fVar14 = FPBDWeightMap::operator_float((FPBDWeightMap *)this_00);
      fVar15 = FPBDWeightMap::operator_float(&this->DampingRatio);
      uVar8 = 0;
      if (0 < lVar11) {
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar8 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = uVar8 + 1;
          iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar9 * 4)
          ;
          uVar7 = 0;
          if ((int)uVar8 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_118 = &local_110;
          local_120 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
                      ::Call;
          local_110 = this;
          local_108 = param_1;
          local_100 = param_2;
          local_f8 = param_3;
          local_f0 = iVar4;
          local_ec = cVar10;
          local_e8 = fVar14;
          local_e4 = cVar12;
          local_e0 = fVar15;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar9 * 4 + 4) - iVar4,
                             (TFunctionRef<void___cdecl(int)> *)&local_120,false);
          lVar9 = lVar9 + 1;
        } while (lVar9 < lVar11);
      }
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

