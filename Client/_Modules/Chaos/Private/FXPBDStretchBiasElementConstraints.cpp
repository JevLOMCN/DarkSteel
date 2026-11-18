// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// Apply<Chaos::Softs::FSolverParticles> @ 143f2b630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FSolverParticles *pFVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias> FVar10;
  uint uVar11;
  FName FVar12;
  longlong lVar13;
  char cVar14;
  ulonglong uVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  char local_res8 [8];
  FSolverParticles *local_res10;
  float local_res18 [2];
  char local_res20 [8];
  char local_278;
  char local_277;
  char local_276;
  char local_275;
  char local_274;
  byte local_273;
  char local_272;
  char local_271;
  char local_270;
  char local_26f;
  int local_26c;
  char local_268;
  float local_264;
  float local_260;
  float local_25c;
  FName local_258;
  float local_250;
  float local_24c;
  float local_248 [2];
  longlong local_240;
  int local_238 [2];
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FName local_208;
  FColor_u_0 local_200 [2];
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  FScriptContainerElement *local_1e0;
  longlong local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  FName local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  FName local_1a8;
  float local_198;
  float local_194;
  float local_190;
  longlong local_188;
  code *local_180;
  int **local_178;
  code *local_170;
  longlong **local_168;
  int *local_160;
  FXPBDStretchBiasElementConstraints *local_158;
  FSolverParticles *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  longlong *local_120;
  char *local_118;
  FXPBDStretchBiasElementConstraints *local_110;
  float *local_108;
  char *local_100;
  float *local_f8;
  char *local_f0;
  float *local_e8;
  char *local_e0;
  float *local_d8;
  char *local_d0;
  float *local_c8;
  char *local_c0;
  float *local_b8;
  FSolverParticles *local_b0;
  float *local_a8;
  
  bVar22 = CpuChannel->Enabled < 0;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (bVar22) {
    local_277 = '\0';
  }
  else {
    local_277 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId531,"FXPBDStretchBiasElementConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
               ,0x213);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId531);
  }
  cVar14 = !bVar22;
  uVar18 = 0;
  FVar10 = StatPtr_STAT_XPBD_StretchBias;
  if (StatPtr_STAT_XPBD_StretchBias == (FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias>)0x0) {
    pFVar9 = ::FName::FName(&local_208,"STAT_XPBD_StretchBias");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_StretchBias,*pFVar9,
                        L"Chaos XPBD Stretch Bias Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar16 = 0;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  local_273 = 0;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar16 = 1;
      local_273 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_1c0.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value;
        local_1c0.Number = FVar12.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                   ,0x214);
        bVar16 = 3;
        local_273 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_258 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      local_273 = bVar16 | 4;
      goto LAB_143f2b7f0;
    }
  }
  local_258 = local_1a8;
  FVar12 = local_1a8;
LAB_143f2b7f0:
  fVar28 = __real_38d1b717;
  if (((int)(this->StiffnessWarp)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessWarp)._padding_ -
                    *(float *)((longlong)&(this->StiffnessWarp)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_278 = '\0';
  }
  else {
    local_278 = '\x01';
  }
  if (((int)(this->StiffnessWeft)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessWeft)._padding_ -
                    *(float *)((longlong)&(this->StiffnessWeft)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res8[0] = '\0';
  }
  else {
    local_res8[0] = '\x01';
  }
  if (((int)(this->StiffnessBias)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessBias)._padding_ -
                    *(float *)((longlong)&(this->StiffnessBias)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((this->DampingRatio).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->DampingRatio).WeightedValue -
                    *(float *)&(this->DampingRatio).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_276 = '\0';
  }
  else {
    local_276 = '\x01';
  }
  if (((this->WarpScale).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->WarpScale).WeightedValue -
                    *(float *)&(this->WarpScale).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_275 = '\0';
  }
  else {
    local_275 = '\x01';
  }
  if (((this->WeftScale).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->WeftScale).WeightedValue -
                    *(float *)&(this->WeftScale).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_274 = '\0';
  }
  else {
    local_274 = '\x01';
  }
  local_250 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWarp);
  local_24c = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWeft);
  local_248[0] = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessBias);
  local_264 = FPBDWeightMap::operator_float(&this->DampingRatio);
  local_260 = FPBDWeightMap::operator_float(&this->WarpScale);
  local_25c = FPBDWeightMap::operator_float(&this->WeftScale);
  pFVar7 = local_res10;
  iVar3 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  piVar1 = &(this->Constraints).ArrayNum;
  uVar21 = 0;
  if ((iVar3 < 2) || (*piVar1 <= Chaos_XPBDStretchBias_ParallelConstraintCount)) {
    if ((local_278 == '\0') &&
       (((local_res8[0] == '\0' && (local_res20[0] == '\0')) && (local_276 == '\0')))) {
      local_1b8 = local_250;
      local_1b4 = local_24c;
      local_1b0 = local_248[0];
      if (((local_250 <= local_24c) || (fVar23 = local_250, local_250 <= local_248[0])) &&
         (fVar23 = local_248[0], local_248[0] <= local_24c)) {
        fVar23 = local_24c;
      }
      if ((fVar28 <= fVar23) && (0 < (this->Constraints).ArrayNum)) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,pFVar7,local_res18[0],(int)uVar18,(TVector<float,3> *)&local_1b8,local_264
                     ,local_260,local_25c);
          uVar21 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar21;
          FVar12 = local_258;
        } while ((int)uVar21 < (this->Constraints).ArrayNum);
      }
    }
    else {
      uVar19 = uVar18;
      if (0 < *piVar1) {
        do {
          uVar8 = (uint)uVar18;
          fVar28 = local_250;
          if (local_278 != '\0') {
            uVar11 = uVar21;
            if ((int)uVar8 < (int)(this->StiffnessWarp)._padding_) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar16 = *(byte *)(uVar19 + (this->StiffnessWarp)._padding_);
            if (((int)(this->StiffnessWarp)._padding_ <= (int)(uint)bVar16) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar28 = *(float *)((this->StiffnessWarp)._padding_ + (ulonglong)bVar16 * 4);
          }
          lVar17 = (longlong)(int)uVar8;
          fVar23 = local_24c;
          if (local_res8[0] != '\0') {
            uVar11 = uVar21;
            if ((int)uVar8 < (int)(this->StiffnessWeft)._padding_) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar16 = *(byte *)(lVar17 + (this->StiffnessWeft)._padding_);
            if (((int)(this->StiffnessWeft)._padding_ <= (int)(uint)bVar16) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar23 = *(float *)((this->StiffnessWeft)._padding_ + (ulonglong)bVar16 * 4);
          }
          fVar27 = local_248[0];
          if (local_res20[0] != '\0') {
            uVar11 = uVar21;
            if ((int)uVar8 < (int)(this->StiffnessBias)._padding_) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar16 = *(byte *)(lVar17 + (this->StiffnessBias)._padding_);
            if (((int)(this->StiffnessBias)._padding_ <= (int)(uint)bVar16) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar27 = *(float *)((this->StiffnessBias)._padding_ + (ulonglong)bVar16 * 4);
          }
          fVar26 = local_264;
          if (local_276 != '\0') {
            uVar11 = uVar21;
            if ((int)uVar8 < (this->DampingRatio).Indices.ArrayNum) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar2 = (this->DampingRatio).Indices.AllocatorInstance.Data[lVar17];
            if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar26 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          fVar25 = local_260;
          if (local_275 != '\0') {
            uVar11 = uVar21;
            if ((int)uVar8 < (this->WarpScale).Indices.ArrayNum) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar2 = (this->WarpScale).Indices.AllocatorInstance.Data[lVar17];
            if (((this->WarpScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar25 = *(float *)((this->WarpScale).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          fVar24 = local_25c;
          if (local_274 != '\0') {
            uVar11 = 0;
            if ((int)uVar8 < (this->WeftScale).Indices.ArrayNum) {
              uVar11 = ~uVar8 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar2 = (this->WeftScale).Indices.AllocatorInstance.Data[lVar17];
            if (((this->WeftScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar24 = *(float *)((this->WeftScale).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          local_198 = fVar23;
          local_194 = fVar28;
          local_190 = fVar27;
          ApplyHelper<Chaos::Softs::FSolverParticles>
                    (this,local_res10,local_res18[0],uVar8,(TVector<float,3> *)&local_198,fVar26,
                     fVar25,fVar24);
          uVar18 = (ulonglong)(uVar8 + 1);
          uVar19 = uVar19 + 1;
          FVar12 = local_258;
          cVar14 = local_277;
        } while ((int)(uVar8 + 1) < (this->Constraints).ArrayNum);
      }
    }
  }
  else {
    iVar3 = iVar3 + -1;
    lVar17 = (longlong)iVar3;
    local_240 = lVar17;
    if (((local_278 == '\0') && (local_res8[0] == '\0')) &&
       ((local_res20[0] == '\0' &&
        (((local_276 == '\0' && (local_275 == '\0')) && (local_274 == '\0')))))) {
      local_1d0 = local_24c;
      local_1cc = local_250;
      local_1c8 = local_248[0];
      if (((local_24c <= local_250) || (fVar23 = local_24c, local_24c <= local_248[0])) &&
         (fVar23 = local_248[0], local_248[0] <= local_250)) {
        fVar23 = local_250;
      }
      if (fVar28 <= fVar23) {
        if (bChaos_XPBDStretchBiasElement_ISPC_Enabled == false) {
          uVar19 = uVar18;
          if (0 < iVar3) {
            do {
              uVar11 = (uint)uVar19;
              uVar8 = uVar21;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar11 = uVar11 + 1;
              local_238[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar18 * 4);
              uVar8 = uVar21;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_160 = local_238;
              local_148 = local_res18;
              local_150 = pFVar7;
              local_140 = &local_1d0;
              local_180 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l27::<lambda_1>,void,int>
                          ::Call;
              local_138 = &local_264;
              local_130 = &local_260;
              local_128 = &local_25c;
              local_178 = &local_160;
              local_158 = this;
              PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.
                                          Data + uVar18 * 4 + 4) - local_238[0],
                                 (TFunctionRef<void___cdecl(int)> *)&local_180,false);
              uVar18 = uVar18 + 1;
              FVar12 = local_258;
              uVar19 = (ulonglong)uVar11;
              cVar14 = local_277;
            } while ((longlong)uVar18 < lVar17);
          }
        }
        else if (local_264 <= 0.0) {
          uVar19 = uVar18;
          if (0 < iVar3) {
            do {
              uVar11 = (uint)uVar18;
              uVar8 = uVar21;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar11 = uVar11 + 1;
              uVar18 = (ulonglong)uVar11;
              iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              uVar19 * 4);
              lVar13 = (longlong)iVar3;
              uVar8 = uVar21;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ApplyXPBDStretchBiasConstraints
                        (*(undefined8 *)&(pFVar7->MPAndInvM).field_0x8,
                         (this->Constraints).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->RestStretchLengths).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->DeltaUVInverse).AllocatorInstance.Data + lVar13 * 0x10,
                         (this->StiffnessScales).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->Lambdas).AllocatorInstance.Data + lVar13 * 0xc,local_res18[0],fVar28
                         ,&local_1d0,local_260,local_25c,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 uVar19 * 4 + 4) - iVar3);
              uVar19 = uVar19 + 1;
              FVar12 = local_258;
              cVar14 = local_277;
            } while ((longlong)uVar19 < lVar17);
          }
        }
        else {
          uVar19 = uVar18;
          if (0 < iVar3) {
            do {
              uVar11 = (uint)uVar19;
              uVar8 = 0;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar11 = uVar11 + 1;
              iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              uVar18 * 4);
              lVar13 = (longlong)iVar3;
              uVar8 = uVar21;
              if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar8 = ~uVar11 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              ApplyXPBDStretchBiasConstraintsWithDamping
                        (*(undefined8 *)&(pFVar7->MPAndInvM).field_0x8,pFVar7->_padding_,
                         (this->Constraints).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->RestStretchLengths).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->DeltaUVInverse).AllocatorInstance.Data + lVar13 * 0x10,
                         (this->StiffnessScales).AllocatorInstance.Data + lVar13 * 0xc,
                         (this->Lambdas).AllocatorInstance.Data + lVar13 * 0xc,local_res18[0],fVar28
                         ,&local_1d0,local_264,local_260,local_25c,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 uVar18 * 4 + 4) - iVar3);
              uVar18 = uVar18 + 1;
              FVar12 = local_258;
              uVar19 = (ulonglong)uVar11;
              cVar14 = local_277;
            } while ((longlong)uVar18 < lVar17);
          }
        }
      }
    }
    else if (bChaos_XPBDStretchBiasElement_ISPC_Enabled == false) {
      uVar19 = uVar18;
      if (0 < iVar3) {
        do {
          uVar11 = (uint)uVar18;
          uVar8 = uVar21;
          if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          uVar18 = (ulonglong)uVar11;
          local_240 = CONCAT44(local_240._4_4_,
                               *(undefined4 *)
                                ((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                uVar19 * 4));
          uVar8 = uVar21;
          if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_120 = &local_240;
          local_118 = &local_278;
          local_b0 = pFVar7;
          local_108 = &local_250;
          local_170 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l45::<lambda_2>,void,int>
                      ::Call;
          local_100 = local_res8;
          local_f8 = &local_24c;
          local_f0 = local_res20;
          local_e8 = local_248;
          local_e0 = &local_276;
          local_d8 = &local_264;
          local_d0 = &local_275;
          local_c8 = &local_260;
          local_c0 = &local_274;
          local_b8 = &local_25c;
          local_a8 = local_res18;
          local_168 = &local_120;
          local_110 = this;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar19 * 4 + 4) - (int)local_240,
                             (TFunctionRef<void___cdecl(int)> *)&local_170,false);
          uVar19 = uVar19 + 1;
          FVar12 = local_258;
          cVar14 = local_277;
        } while ((longlong)uVar19 < lVar17);
      }
    }
    else if ((local_276 != '\0') || (0.0 < local_264)) {
      if (0 < iVar3) {
        local_210 = (FScriptContainerElement *)0x0;
        uVar19 = uVar18;
        do {
          pFVar4 = local_210;
          uVar11 = (uint)uVar19;
          uVar8 = uVar21;
          if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 1;
          uVar19 = (ulonglong)uVar11;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          (longlong)pFVar4 * 4);
          lVar13 = (longlong)iVar3;
          uVar8 = uVar21;
          if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_26c = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              (longlong)pFVar4 * 4 + 4) - iVar3;
          local_1e0 = (this->WeftScale).Table.AllocatorInstance.Data;
          if (((this->WeftScale).Table.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_274 == '\0') {
            local_218 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar4 = (this->WeftScale).Indices.AllocatorInstance.Data;
            if (((this->WeftScale).Indices.ArrayNum < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_218 = pFVar4 + lVar13;
          }
          local_26f = local_274;
          local_1e8 = (this->WarpScale).Table.AllocatorInstance.Data;
          if (((this->WarpScale).Table.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_275 == '\0') {
            local_220 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar4 = (this->WarpScale).Indices.AllocatorInstance.Data;
            if (((this->WarpScale).Indices.ArrayNum < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_220 = pFVar4 + lVar13;
          }
          local_270 = local_275;
          local_1f0 = (this->DampingRatio).Table.AllocatorInstance.Data;
          if (((this->DampingRatio).Table.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_276 == '\0') {
            local_228 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar4 = (this->DampingRatio).Indices.AllocatorInstance.Data;
            if (((this->DampingRatio).Indices.ArrayNum < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_228 = pFVar4 + lVar13;
          }
          local_271 = local_276;
          local_1f8 = (FScriptContainerElement *)(this->StiffnessBias)._padding_;
          if (((int)(this->StiffnessBias)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_res20[0] == '\0') {
            local_230 = (FScriptContainerElement *)0x0;
          }
          else {
            lVar5 = (this->StiffnessBias)._padding_;
            if (((int)(this->StiffnessBias)._padding_ < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_230 = (FScriptContainerElement *)(lVar5 + lVar13);
          }
          local_272 = local_res20[0];
          local_188 = (this->StiffnessWeft)._padding_;
          if (((int)(this->StiffnessWeft)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar20 = uVar18;
          if (local_res8[0] != '\0') {
            lVar5 = (this->StiffnessWeft)._padding_;
            if (((int)(this->StiffnessWeft)._padding_ < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar20 = lVar5 + lVar13;
          }
          local_268 = local_res8[0];
          local_1d8 = (this->StiffnessWarp)._padding_;
          if (((int)(this->StiffnessWarp)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = uVar18;
          if (local_278 != '\0') {
            lVar5 = (this->StiffnessWarp)._padding_;
            if (((int)(this->StiffnessWarp)._padding_ < 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar22)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar15 = lVar5 + lVar13;
          }
          ApplyXPBDStretchBiasConstraintsWithDampingAndMaps
                    (*(undefined8 *)&(local_res10->MPAndInvM).field_0x8,local_res10->_padding_,
                     (this->Constraints).AllocatorInstance.Data + lVar13 * 0xc,
                     (this->RestStretchLengths).AllocatorInstance.Data + lVar13 * 0xc,
                     (this->DeltaUVInverse).AllocatorInstance.Data + lVar13 * 0x10,
                     (this->StiffnessScales).AllocatorInstance.Data + lVar13 * 0xc,
                     (this->Lambdas).AllocatorInstance.Data + lVar13 * 0xc,local_res18[0],fVar28,
                     local_278,uVar15,local_1d8,local_268,uVar20,local_188,local_272,local_230,
                     local_1f8,local_271,local_228,local_1f0,local_270,local_220,local_1e8,local_26f
                     ,local_218,local_1e0,local_26c);
          local_210 = local_210 + 1;
          FVar12 = local_258;
          cVar14 = local_277;
        } while ((longlong)local_210 < lVar17);
      }
    }
    else if (0 < iVar3) {
      local_218 = (FScriptContainerElement *)0x0;
      uVar19 = uVar18;
      do {
        pFVar4 = local_218;
        uVar11 = (uint)uVar19;
        uVar8 = uVar21;
        if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = uVar11 + 1;
        uVar19 = (ulonglong)uVar11;
        iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        (longlong)pFVar4 * 4);
        lVar13 = (longlong)iVar3;
        uVar8 = uVar21;
        if ((int)uVar11 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_26c = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pFVar4 * 4 + 4) - iVar3;
        local_210 = (this->WeftScale).Table.AllocatorInstance.Data;
        if (((this->WeftScale).Table.ArrayNum < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_274 == '\0') {
          local_230 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar4 = (this->WeftScale).Indices.AllocatorInstance.Data;
          if (((this->WeftScale).Indices.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_230 = pFVar4 + lVar13;
        }
        local_272 = local_274;
        local_1f8 = (this->WarpScale).Table.AllocatorInstance.Data;
        if (((this->WarpScale).Table.ArrayNum < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_275 == '\0') {
          local_228 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar4 = (this->WarpScale).Indices.AllocatorInstance.Data;
          if (((this->WarpScale).Indices.ArrayNum < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_228 = pFVar4 + lVar13;
        }
        local_271 = local_275;
        local_1f0 = (FScriptContainerElement *)(this->StiffnessBias)._padding_;
        if (((int)(this->StiffnessBias)._padding_ < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_res20[0] == '\0') {
          local_220 = (FScriptContainerElement *)0x0;
        }
        else {
          lVar5 = (this->StiffnessBias)._padding_;
          if (((int)(this->StiffnessBias)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_220 = (FScriptContainerElement *)(lVar13 + lVar5);
        }
        local_270 = local_res20[0];
        local_1e8 = (FScriptContainerElement *)(this->StiffnessWeft)._padding_;
        if (((int)(this->StiffnessWeft)._padding_ < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar20 = uVar18;
        if (local_res8[0] != '\0') {
          lVar5 = (this->StiffnessWeft)._padding_;
          if (((int)(this->StiffnessWeft)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar20 = lVar13 + lVar5;
        }
        local_26f = local_res8[0];
        local_1e0 = (FScriptContainerElement *)(this->StiffnessWarp)._padding_;
        if (((int)(this->StiffnessWarp)._padding_ < 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar22)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar15 = uVar18;
        if (local_278 != '\0') {
          lVar5 = (this->StiffnessWarp)._padding_;
          if (((int)(this->StiffnessWarp)._padding_ < 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar22)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar15 = lVar13 + lVar5;
        }
        ApplyXPBDStretchBiasConstraintsWithMaps
                  (*(undefined8 *)&(local_res10->MPAndInvM).field_0x8,
                   (this->Constraints).AllocatorInstance.Data + lVar13 * 0xc,
                   (this->RestStretchLengths).AllocatorInstance.Data + lVar13 * 0xc,
                   (this->DeltaUVInverse).AllocatorInstance.Data + lVar13 * 0x10,
                   (this->StiffnessScales).AllocatorInstance.Data + lVar13 * 0xc,
                   (this->Lambdas).AllocatorInstance.Data + lVar13 * 0xc,local_res18[0],fVar28,
                   local_278,uVar15,local_1e0,local_26f,uVar20,local_1e8,local_270,local_220,
                   local_1f0,local_271,local_228,local_1f8,local_272,local_230,local_210,local_26c);
        local_218 = local_218 + 1;
        FVar12 = local_258;
        cVar14 = local_277;
      } while ((longlong)local_218 < lVar17);
    }
  }
  bVar16 = local_273;
  if ((local_273 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar16 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar16 & 4) != 0) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  if (cVar14 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143f2ef60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TVector<float,3> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  code *pcVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias> FVar14;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar15;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar16;
  uint uVar17;
  uint uVar18;
  FName FVar19;
  uint uVar20;
  char cVar21;
  byte bVar22;
  FName FVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_res18 [2];
  char local_res20 [8];
  char local_2e8;
  char local_2e7;
  char local_2e6;
  char local_2e5;
  char local_2e4;
  char local_2e3;
  byte local_2e2;
  char local_2e1;
  char local_2e0;
  char local_2df;
  char local_2de;
  uint local_2dc;
  char local_2d8;
  char local_2d7;
  float local_2d4;
  FName local_2d0;
  float local_2c8;
  float local_2c4;
  FScriptContainerElement *local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0 [2];
  FName local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  int local_290;
  int local_28c;
  longlong local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FColor_u_0 local_270 [2];
  FScriptContainerElement *local_268;
  longlong local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  FScriptContainerElement *local_240;
  float local_238;
  float local_234;
  float local_230;
  FName local_228;
  FName local_220;
  float local_210;
  float local_20c;
  float local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  FScriptContainerElement *local_1f0;
  longlong local_1e8;
  code *local_1e0;
  int **local_1d8;
  code *local_1d0;
  int **local_1c8;
  int *local_1c0;
  FXPBDStretchBiasElementConstraints *local_1b8;
  FSolverParticlesRange *local_1b0;
  float *local_1a8;
  float *local_1a0;
  float *local_198;
  float *local_190;
  float *local_188;
  int *local_180;
  char *local_178;
  FXPBDStretchBiasElementConstraints *local_170;
  float *local_168;
  char *local_160;
  float *local_158;
  char *local_150;
  float *local_148;
  char *local_140;
  float *local_138;
  char *local_130;
  float *local_128;
  char *local_120;
  float *local_118;
  FSolverParticlesRange *local_110;
  float *local_108;
  FName local_100;
  TArrayView<Chaos::TVector<float,3>,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d8;
  TArrayView<Chaos::TVector<float,3>,int> local_c8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_a8 [6];
  
  bVar27 = CpuChannel->Enabled < 0;
  local_res18[0] = param_2;
  if (bVar27) {
    local_2e6 = '\0';
  }
  else {
    local_2e6 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId531,"FXPBDStretchBiasElementConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
               ,0x213);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId531);
  }
  cVar21 = !bVar27;
  uVar25 = 0;
  FVar14 = StatPtr_STAT_XPBD_StretchBias;
  if (StatPtr_STAT_XPBD_StretchBias == (FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias>)0x0) {
    pFVar13 = ::FName::FName(&local_100,"STAT_XPBD_StretchBias");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_XPBD_StretchBias>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_StretchBias,*pFVar13,
                        L"Chaos XPBD Stretch Bias Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar22 = 0;
  local_220.ComparisonIndex.Value = 0;
  local_220.Number = 0;
  local_2e2 = 0;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_270[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_270[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar22 = 1;
      local_2e2 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_228.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_228.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_228,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                   ,0x214);
        bVar22 = 3;
        local_2e2 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2d0 = FVar19;
      local_2a8 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      local_2e2 = bVar22 | 4;
      goto LAB_143f2f127;
    }
  }
  local_2a8 = local_220;
  FVar19 = local_220;
LAB_143f2f127:
  fVar33 = __real_38d1b717;
  if (((int)(this->StiffnessWarp)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessWarp)._padding_ -
                    *(float *)((longlong)&(this->StiffnessWarp)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e7 = '\0';
  }
  else {
    local_2e7 = '\x01';
  }
  if (((int)(this->StiffnessWeft)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessWeft)._padding_ -
                    *(float *)((longlong)&(this->StiffnessWeft)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((int)(this->StiffnessBias)._padding_ < 2) ||
     ((float)((uint)(*(float *)&(this->StiffnessBias)._padding_ -
                    *(float *)((longlong)&(this->StiffnessBias)._padding_ + 4)) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e8 = '\0';
  }
  else {
    local_2e8 = '\x01';
  }
  if (((this->DampingRatio).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->DampingRatio).WeightedValue -
                    *(float *)&(this->DampingRatio).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e5 = '\0';
  }
  else {
    local_2e5 = '\x01';
  }
  if (((this->WarpScale).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->WarpScale).WeightedValue -
                    *(float *)&(this->WarpScale).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e4 = '\0';
  }
  else {
    local_2e4 = '\x01';
  }
  if (((this->WeftScale).Table.ArrayNum < 2) ||
     ((float)((uint)(*(float *)&(this->WeftScale).WeightedValue -
                    *(float *)&(this->WeftScale).WeightedValue.field_0x4) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e3 = '\0';
  }
  else {
    local_2e3 = '\x01';
  }
  local_2b8 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWarp);
  local_2b4 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWeft);
  local_2b0[0] = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessBias);
  local_2d4 = FPBDWeightMap::operator_float(&this->DampingRatio);
  local_2c8 = FPBDWeightMap::operator_float(&this->WarpScale);
  local_2c4 = FPBDWeightMap::operator_float(&this->WeftScale);
  iVar3 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  piVar1 = &(this->Constraints).ArrayNum;
  uVar20 = 0;
  if ((iVar3 < 2) || (*piVar1 <= Chaos_XPBDStretchBias_ParallelConstraintCount)) {
    if ((local_2e7 == '\0') &&
       (((local_res20[0] == '\0' && (local_2e8 == '\0')) && (local_2e5 == '\0')))) {
      local_210 = local_2b8;
      local_20c = local_2b4;
      local_208 = local_2b0[0];
      if (((local_2b8 <= local_2b4) || (fVar28 = local_2b8, local_2b8 <= local_2b0[0])) &&
         (fVar28 = local_2b0[0], local_2b0[0] <= local_2b4)) {
        fVar28 = local_2b4;
      }
      if ((fVar33 <= fVar28) && (0 < (this->Constraints).ArrayNum)) {
        do {
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],(int)uVar25,(TVector<float,3> *)&local_210,
                     local_2d4,local_2c8,local_2c4);
          uVar20 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar20;
          FVar19 = local_2a8;
        } while ((int)uVar20 < (this->Constraints).ArrayNum);
      }
    }
    else {
      uVar26 = uVar25;
      if (0 < *piVar1) {
        do {
          uVar18 = (uint)uVar26;
          fVar33 = local_2b8;
          if (local_2e7 != '\0') {
            uVar17 = uVar20;
            if ((int)uVar18 < (int)(this->StiffnessWarp)._padding_) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            bVar22 = *(byte *)(uVar25 + (this->StiffnessWarp)._padding_);
            if (((int)(this->StiffnessWarp)._padding_ <= (int)(uint)bVar22) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar33 = *(float *)((this->StiffnessWarp)._padding_ + (ulonglong)bVar22 * 4);
          }
          lVar24 = (longlong)(int)uVar18;
          fVar28 = local_2b4;
          if (local_res20[0] != '\0') {
            uVar17 = uVar20;
            if ((int)uVar18 < (int)(this->StiffnessWeft)._padding_) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            bVar22 = *(byte *)(lVar24 + (this->StiffnessWeft)._padding_);
            if (((int)(this->StiffnessWeft)._padding_ <= (int)(uint)bVar22) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar28 = *(float *)((this->StiffnessWeft)._padding_ + (ulonglong)bVar22 * 4);
          }
          fVar32 = local_2b0[0];
          if (local_2e8 != '\0') {
            uVar17 = uVar20;
            if ((int)uVar18 < (int)(this->StiffnessBias)._padding_) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            bVar22 = *(byte *)(lVar24 + (this->StiffnessBias)._padding_);
            if (((int)(this->StiffnessBias)._padding_ <= (int)(uint)bVar22) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar32 = *(float *)((this->StiffnessBias)._padding_ + (ulonglong)bVar22 * 4);
          }
          fVar31 = local_2d4;
          if (local_2e5 != '\0') {
            uVar17 = uVar20;
            if ((int)uVar18 < (this->DampingRatio).Indices.ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar2 = (this->DampingRatio).Indices.AllocatorInstance.Data[lVar24];
            if (((this->DampingRatio).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar31 = *(float *)((this->DampingRatio).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          fVar30 = local_2c8;
          if (local_2e4 != '\0') {
            uVar17 = uVar20;
            if ((int)uVar18 < (this->WarpScale).Indices.ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar2 = (this->WarpScale).Indices.AllocatorInstance.Data[lVar24];
            if (((this->WarpScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar30 = *(float *)((this->WarpScale).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          fVar29 = local_2c4;
          if (local_2e3 != '\0') {
            uVar17 = 0;
            if ((int)uVar18 < (this->WeftScale).Indices.ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar2 = (this->WeftScale).Indices.AllocatorInstance.Data[lVar24];
            if (((this->WeftScale).Table.ArrayNum <= (int)(uint)(byte)FVar2) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar29 = *(float *)((this->WeftScale).Table.AllocatorInstance.Data +
                               (ulonglong)(byte)FVar2 * 4);
          }
          local_200 = fVar28;
          local_1fc = fVar33;
          local_1f8 = fVar32;
          ApplyHelper<Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],uVar18,(TVector<float,3> *)&local_200,fVar31,fVar30
                     ,fVar29);
          uVar26 = (ulonglong)(uVar18 + 1);
          uVar25 = uVar25 + 1;
          FVar19 = local_2a8;
          cVar21 = local_2e6;
        } while ((int)(uVar18 + 1) < (this->Constraints).ArrayNum);
      }
    }
  }
  else {
    iVar3 = iVar3 + -1;
    FVar23 = (FName)(longlong)iVar3;
    local_2d0 = FVar23;
    if (((local_2e7 == '\0') && (local_res20[0] == '\0')) &&
       ((local_2e8 == '\0' && (((local_2e5 == '\0' && (local_2e4 == '\0')) && (local_2e3 == '\0'))))
       )) {
      local_238 = local_2b4;
      local_234 = local_2b8;
      local_230 = local_2b0[0];
      if (((local_2b4 <= local_2b8) || (fVar28 = local_2b4, local_2b4 <= local_2b0[0])) &&
         (fVar28 = local_2b0[0], local_2b0[0] <= local_2b8)) {
        fVar28 = local_2b8;
      }
      if (fVar33 <= fVar28) {
        if (bChaos_XPBDStretchBiasElement_ISPC_Enabled == false) {
          uVar26 = uVar25;
          if (0 < iVar3) {
            do {
              uVar17 = (uint)uVar25;
              uVar18 = 0;
              if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar17 = uVar17 + 1;
              uVar25 = (ulonglong)uVar17;
              local_290 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                  uVar26 * 4);
              uVar18 = uVar20;
              if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_1c0 = &local_290;
              local_1a8 = local_res18;
              local_1a0 = &local_238;
              local_1e0 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l27::<lambda_1>,void,int>
                          ::Call;
              local_198 = &local_2d4;
              local_190 = &local_2c8;
              local_188 = &local_2c4;
              local_1d8 = &local_1c0;
              local_1b8 = this;
              local_1b0 = param_1;
              PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.
                                          Data + uVar26 * 4 + 4) - local_290,
                                 (TFunctionRef<void___cdecl(int)> *)&local_1e0,false);
              uVar26 = uVar26 + 1;
              FVar19 = local_2a8;
              cVar21 = local_2e6;
            } while ((longlong)uVar26 < (longlong)FVar23);
          }
        }
        else if (local_2d4 <= 0.0) {
          if (0 < iVar3) {
            local_2c0 = (FScriptContainerElement *)0x0;
            do {
              pFVar5 = local_2c0;
              uVar18 = (uint)uVar25;
              uVar20 = 0;
              if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar20 = ~uVar18 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_2dc = uVar18 + 1;
              iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              (longlong)pFVar5 * 4);
              lVar24 = (longlong)iVar3;
              uVar20 = 0;
              if ((int)local_2dc < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar20 = ~local_2dc >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar27)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar31 = local_2c4;
              fVar32 = local_2c8;
              fVar28 = local_res18[0];
              pFVar6 = (this->DeltaUVInverse).AllocatorInstance.Data;
              iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              (longlong)pFVar5 * 4 + 4);
              pFVar5 = (this->StiffnessScales).AllocatorInstance.Data;
              pFVar7 = (this->RestStretchLengths).AllocatorInstance.Data;
              pFVar9 = (this->Constraints).AllocatorInstance.Data;
              pFVar10 = (this->Lambdas).AllocatorInstance.Data;
              pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_e8);
              ApplyXPBDStretchBiasConstraints
                        (pTVar16->DataPtr,pFVar9 + lVar24 * 0xc,pFVar7 + lVar24 * 0xc,
                         pFVar6 + lVar24 * 0x10,pFVar5 + lVar24 * 0xc,pFVar10 + lVar24 * 0xc,fVar28,
                         fVar33,&local_238,fVar32,fVar31,iVar4 - iVar3);
              uVar25 = (ulonglong)local_2dc;
              local_2c0 = local_2c0 + 1;
              FVar19 = local_2a8;
              cVar21 = local_2e6;
            } while ((longlong)local_2c0 < (longlong)local_2d0);
          }
        }
        else if (0 < iVar3) {
          local_2c0 = (FScriptContainerElement *)0x0;
          do {
            pFVar5 = local_2c0;
            uVar18 = (uint)uVar25;
            uVar20 = 0;
            if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2dc = uVar18 + 1;
            iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pFVar5 * 4);
            lVar24 = (longlong)iVar3;
            uVar20 = 0;
            if ((int)local_2dc < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~local_2dc >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar30 = local_2c4;
            fVar31 = local_2c8;
            fVar32 = local_2d4;
            fVar28 = local_res18[0];
            iVar4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pFVar5 * 4 + 4);
            pFVar5 = (this->Lambdas).AllocatorInstance.Data;
            local_298 = (this->StiffnessScales).AllocatorInstance.Data + lVar24 * 0xc;
            local_2a0 = (this->DeltaUVInverse).AllocatorInstance.Data + lVar24 * 0x10;
            pFVar6 = (this->RestStretchLengths).AllocatorInstance.Data;
            pFVar7 = (this->Constraints).AllocatorInstance.Data;
            pTVar15 = FSolverParticlesRange::XArray(param_1,&local_f8);
            pTVar8 = pTVar15->DataPtr;
            pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,local_a8);
            ApplyXPBDStretchBiasConstraintsWithDamping
                      (pTVar16->DataPtr,pTVar8,pFVar7 + lVar24 * 0xc,pFVar6 + lVar24 * 0xc,local_2a0
                       ,local_298,pFVar5 + lVar24 * 0xc,fVar28,fVar33,&local_238,fVar32,fVar31,
                       fVar30,iVar4 - iVar3);
            uVar25 = (ulonglong)local_2dc;
            local_2c0 = local_2c0 + 1;
            FVar19 = local_2a8;
            cVar21 = local_2e6;
          } while ((longlong)local_2c0 < (longlong)local_2d0);
        }
      }
    }
    else if (bChaos_XPBDStretchBiasElement_ISPC_Enabled == false) {
      uVar26 = uVar25;
      if (0 < iVar3) {
        do {
          uVar17 = (uint)uVar26;
          uVar18 = uVar20;
          if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar17 = uVar17 + 1;
          local_28c = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              uVar25 * 4);
          uVar18 = uVar20;
          if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_180 = &local_28c;
          local_178 = &local_2e7;
          local_168 = &local_2b8;
          local_1d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l45::<lambda_2>,void,int>
                      ::Call;
          local_160 = local_res20;
          local_158 = &local_2b4;
          local_150 = &local_2e8;
          local_148 = local_2b0;
          local_140 = &local_2e5;
          local_138 = &local_2d4;
          local_130 = &local_2e4;
          local_128 = &local_2c8;
          local_120 = &local_2e3;
          local_118 = &local_2c4;
          local_108 = local_res18;
          local_1c8 = &local_180;
          local_170 = this;
          local_110 = param_1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar25 * 4 + 4) - local_28c,
                             (TFunctionRef<void___cdecl(int)> *)&local_1d0,false);
          uVar25 = uVar25 + 1;
          FVar19 = local_2a8;
          uVar26 = (ulonglong)uVar17;
          cVar21 = local_2e6;
        } while ((longlong)uVar25 < (longlong)FVar23);
      }
    }
    else if ((local_2e5 != '\0') || (0.0 < local_2d4)) {
      if (0 < iVar3) {
        local_298 = (FScriptContainerElement *)0x0;
        do {
          pFVar5 = local_298;
          uVar18 = (uint)uVar25;
          uVar20 = 0;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar18 = uVar18 + 1;
          uVar25 = (ulonglong)uVar18;
          iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                          (longlong)pFVar5 * 4);
          lVar24 = (longlong)iVar3;
          uVar20 = 0;
          if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_2dc = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                              (longlong)pFVar5 * 4 + 4) - iVar3;
          local_248 = (this->WeftScale).Table.AllocatorInstance.Data;
          if (((this->WeftScale).Table.ArrayNum < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_2e3 == '\0') {
            local_2a0 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar5 = (this->WeftScale).Indices.AllocatorInstance.Data;
            if (((this->WeftScale).Indices.ArrayNum < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2a0 = pFVar5 + lVar24;
          }
          local_2de = local_2e3;
          local_250 = (this->WarpScale).Table.AllocatorInstance.Data;
          if (((this->WarpScale).Table.ArrayNum < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_2e4 == '\0') {
            local_278 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar5 = (this->WarpScale).Indices.AllocatorInstance.Data;
            if (((this->WarpScale).Indices.ArrayNum < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_278 = pFVar5 + lVar24;
          }
          local_2df = local_2e4;
          local_258 = (this->DampingRatio).Table.AllocatorInstance.Data;
          if (((this->DampingRatio).Table.ArrayNum < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_2e5 == '\0') {
            local_280 = (FScriptContainerElement *)0x0;
          }
          else {
            pFVar5 = (this->DampingRatio).Indices.AllocatorInstance.Data;
            if (((this->DampingRatio).Indices.ArrayNum < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_280 = pFVar5 + lVar24;
          }
          local_2e0 = local_2e5;
          local_260 = (this->StiffnessBias)._padding_;
          if (((int)(this->StiffnessBias)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_2e8 == '\0') {
            local_288 = 0;
          }
          else {
            lVar11 = (this->StiffnessBias)._padding_;
            if (((int)(this->StiffnessBias)._padding_ < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_288 = lVar11 + lVar24;
          }
          local_2e1 = local_2e8;
          local_268 = (FScriptContainerElement *)(this->StiffnessWeft)._padding_;
          if (((int)(this->StiffnessWeft)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_res20[0] == '\0') {
            local_2c0 = (FScriptContainerElement *)0x0;
          }
          else {
            lVar11 = (this->StiffnessWeft)._padding_;
            if (((int)(this->StiffnessWeft)._padding_ < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2c0 = (FScriptContainerElement *)(lVar11 + lVar24);
          }
          local_2d8 = local_res20[0];
          local_1e8 = (this->StiffnessWarp)._padding_;
          if (((int)(this->StiffnessWarp)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_2e7 == '\0') {
            local_2d0.ComparisonIndex.Value = 0;
            local_2d0.Number = 0;
          }
          else {
            lVar11 = (this->StiffnessWarp)._padding_;
            if (((int)(this->StiffnessWarp)._padding_ < 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar27)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_2d0 = (FName)(lVar11 + lVar24);
          }
          fVar28 = local_res18[0];
          pFVar5 = (this->Lambdas).AllocatorInstance.Data;
          local_2d7 = local_2e7;
          local_1f0 = (this->StiffnessScales).AllocatorInstance.Data + lVar24 * 0xc;
          local_240 = (this->DeltaUVInverse).AllocatorInstance.Data + lVar24 * 0x10;
          pFVar6 = (this->RestStretchLengths).AllocatorInstance.Data;
          pFVar7 = (this->Constraints).AllocatorInstance.Data;
          pTVar15 = FSolverParticlesRange::XArray(param_1,&local_c8);
          pTVar8 = pTVar15->DataPtr;
          pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_b8);
          ApplyXPBDStretchBiasConstraintsWithDampingAndMaps
                    (pTVar16->DataPtr,pTVar8,pFVar7 + lVar24 * 0xc,pFVar6 + lVar24 * 0xc,local_240,
                     local_1f0,pFVar5 + lVar24 * 0xc,fVar28,fVar33,local_2d7,local_2d0,local_1e8,
                     local_2d8,local_2c0,local_268,local_2e1,local_288,local_260,local_2e0,local_280
                     ,local_258,local_2df,local_278,local_250,local_2de,local_2a0,local_248,
                     local_2dc);
          local_298 = local_298 + 1;
          FVar19 = local_2a8;
          cVar21 = local_2e6;
        } while ((longlong)local_298 < (longlong)FVar23);
      }
    }
    else if (0 < iVar3) {
      local_2a0 = (FScriptContainerElement *)0x0;
      do {
        pFVar5 = local_2a0;
        uVar18 = (uint)uVar25;
        uVar20 = 0;
        if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar18 = uVar18 + 1;
        uVar25 = (ulonglong)uVar18;
        iVar3 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                        (longlong)pFVar5 * 4);
        lVar24 = (longlong)iVar3;
        uVar20 = 0;
        if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar20 = ~uVar18 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_2dc = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pFVar5 * 4 + 4) - iVar3;
        local_298 = (this->WeftScale).Table.AllocatorInstance.Data;
        if (((this->WeftScale).Table.ArrayNum < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (local_2e3 == '\0') {
          local_2c0 = (FScriptContainerElement *)0x0;
        }
        else {
          pFVar5 = (this->WeftScale).Indices.AllocatorInstance.Data;
          if (((this->WeftScale).Indices.ArrayNum < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_2c0 = pFVar5 + lVar24;
        }
        local_2e1 = local_2e3;
        local_268 = (this->WarpScale).Table.AllocatorInstance.Data;
        if (((this->WarpScale).Table.ArrayNum < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (local_2e4 == '\0') {
          local_2d0.ComparisonIndex.Value = 0;
          local_2d0.Number = 0;
        }
        else {
          pFVar5 = (this->WarpScale).Indices.AllocatorInstance.Data;
          if (((this->WarpScale).Indices.ArrayNum < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_2d0 = (FName)((longlong)pFVar5 + lVar24);
        }
        local_2e0 = local_2e4;
        local_260 = (this->StiffnessBias)._padding_;
        if (((int)(this->StiffnessBias)._padding_ < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (local_2e8 == '\0') {
          local_288 = 0;
        }
        else {
          lVar11 = (this->StiffnessBias)._padding_;
          if (((int)(this->StiffnessBias)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_288 = lVar11 + lVar24;
        }
        local_2df = local_2e8;
        local_258 = (FScriptContainerElement *)(this->StiffnessWeft)._padding_;
        if (((int)(this->StiffnessWeft)._padding_ < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (local_res20[0] == '\0') {
          local_280 = (FScriptContainerElement *)0x0;
        }
        else {
          lVar11 = (this->StiffnessWeft)._padding_;
          if (((int)(this->StiffnessWeft)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_280 = (FScriptContainerElement *)(lVar11 + lVar24);
        }
        local_2de = local_res20[0];
        local_250 = (FScriptContainerElement *)(this->StiffnessWarp)._padding_;
        if (((int)(this->StiffnessWarp)._padding_ < 0) &&
           (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar27)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (local_2e7 == '\0') {
          local_278 = (FScriptContainerElement *)0x0;
        }
        else {
          lVar11 = (this->StiffnessWarp)._padding_;
          if (((int)(this->StiffnessWarp)._padding_ < 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar27)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_278 = (FScriptContainerElement *)(lVar11 + lVar24);
        }
        cVar21 = local_2e7;
        fVar28 = local_res18[0];
        pFVar5 = (this->DeltaUVInverse).AllocatorInstance.Data;
        local_248 = (this->StiffnessScales).AllocatorInstance.Data + lVar24 * 0xc;
        pFVar6 = (this->RestStretchLengths).AllocatorInstance.Data;
        pFVar7 = (this->Constraints).AllocatorInstance.Data;
        pFVar9 = (this->Lambdas).AllocatorInstance.Data;
        pTVar16 = FSolverParticlesRange::GetPAndInvM(param_1,&local_d8);
        ApplyXPBDStretchBiasConstraintsWithMaps
                  (pTVar16->DataPtr,pFVar7 + lVar24 * 0xc,pFVar6 + lVar24 * 0xc,
                   pFVar5 + lVar24 * 0x10,local_248,pFVar9 + lVar24 * 0xc,fVar28,fVar33,cVar21,
                   local_278,local_250,local_2de,local_280,local_258,local_2df,local_288,local_260,
                   local_2e0,local_2d0,local_268,local_2e1,local_2c0,local_298,local_2dc);
        local_2a0 = local_2a0 + 1;
        FVar19 = local_2a8;
        cVar21 = local_2e6;
      } while ((longlong)local_2a0 < (longlong)FVar23);
    }
  }
  bVar22 = local_2e2;
  if ((local_2e2 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar22 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar22 & 4) != 0) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticles> @ 143f33070

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5,float param_6,float param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar8 = 0;
  if (param_3 < (this->Constraints).ArrayNum) {
    uVar8 = uVar14;
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
  pFVar5 = (this->Constraints).AllocatorInstance.Data;
  iVar2 = *(int *)(pFVar5 + lVar15 * 0xc);
  iVar3 = *(int *)(pFVar5 + lVar15 * 0xc + 4);
  iVar4 = *(int *)(pFVar5 + lVar15 * 0xc + 8);
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  if (((*pfVar9 == 0.0) &&
      (pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3),
      *pfVar9 == 0.0)) &&
     (pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4),
     *pfVar9 == 0.0)) {
    return;
  }
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  pfVar10 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar22 = *pfVar9;
  fVar27 = *pfVar10;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  local_140 = fVar22 + fVar27 + *pfVar9;
  pTVar11 = FSolverParticles::P(param_1,iVar4);
  pTVar12 = FSolverParticles::P(param_1,iVar3);
  pTVar13 = FSolverParticles::P(param_1,iVar2);
  CalculateUVStretch(this,param_3,pTVar13,pTVar12,pTVar11,(TVector<float,3> *)&local_100,
                     (TVector<float,3> *)&local_f0);
  local_13c = SQRT(local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8);
  fVar22 = SQRT(local_f0 * local_f0 + local_ec * local_ec + local_e8 * local_e8);
  if (local_13c <= __real_322bcc77) {
    fVar27 = 0.0;
  }
  else {
    fVar27 = __real_3f800000 / local_13c;
  }
  if (fVar22 <= __real_322bcc77) {
    fVar25 = 0.0;
  }
  else {
    fVar25 = __real_3f800000 / fVar22;
  }
  fVar26 = local_100 * fVar27;
  fVar28 = local_f0 * fVar25;
  uVar8 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar8 = uVar14;
  }
  fVar18 = fVar27 * local_fc;
  fVar23 = fVar27 * local_f8;
  fVar19 = fVar25 * local_ec;
  fVar20 = fVar25 * local_e8;
  local_148 = fVar18;
  local_144 = fVar23;
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
  uVar8 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar8 = uVar14;
  }
  local_13c = local_13c -
              param_7 * *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar15 * 0xc)
  ;
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
  uVar8 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar8 = uVar14;
  }
  local_138 = fVar22 - param_6 * *(float *)((this->RestStretchLengths).AllocatorInstance.Data +
                                           lVar15 * 0xc + 4);
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
  fVar22 = *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar15 * 0xc + 8);
  uVar8 = 0;
  if (param_3 < (this->DeltaUVInverse).ArrayNum) {
    uVar8 = uVar14;
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
  pFVar5 = (this->DeltaUVInverse).AllocatorInstance.Data;
  fVar21 = *(float *)(pFVar5 + lVar15 * 0x10 + 8);
  fVar24 = *(float *)(pFVar5 + lVar15 * 0x10);
  fVar17 = *(float *)(pFVar5 + lVar15 * 0x10 + 4);
  local_198 = fVar26 * fVar24;
  local_190 = fVar24 * fVar23;
  local_194 = fVar18 * fVar24;
  local_168 = fVar26 * fVar17;
  local_160 = fVar17 * fVar23;
  local_1c8 = (float)((uint)local_198 ^ __xmm_80000000800000008000000080000000) - local_168;
  local_164 = fVar18 * fVar17;
  local_1c0 = (float)((uint)local_190 ^ __xmm_80000000800000008000000080000000) - local_160;
  local_1c4 = (float)((uint)local_194 ^ __xmm_80000000800000008000000080000000) - local_164;
  local_1a8 = fVar28 * fVar21;
  fVar16 = *(float *)(pFVar5 + lVar15 * 0x10 + 0xc);
  local_178 = fVar28 * fVar16;
  local_1a4 = fVar19 * fVar21;
  local_1d8 = (float)((uint)local_1a8 ^ __xmm_80000000800000008000000080000000) - local_178;
  local_1a0 = fVar20 * fVar21;
  local_170 = fVar20 * fVar16;
  local_1d0 = (float)((uint)local_1a0 ^ __xmm_80000000800000008000000080000000) - local_170;
  local_174 = fVar19 * fVar16;
  local_1d4 = (float)((uint)local_1a4 ^ __xmm_80000000800000008000000080000000) - local_174;
  local_188 = fVar26 * fVar25 * fVar21 + fVar28 * fVar27 * fVar24;
  local_184 = local_148 * fVar25 * fVar21 + fVar19 * fVar27 * fVar24;
  local_158 = fVar26 * fVar25 * fVar16 + fVar28 * fVar27 * fVar17;
  local_180 = fVar25 * local_144 * fVar21 + fVar20 * fVar27 * fVar24;
  local_1b8 = (float)((uint)local_188 ^ __xmm_80000000800000008000000080000000) - local_158;
  local_154 = local_148 * fVar25 * fVar16 + fVar19 * fVar27 * fVar17;
  local_150 = fVar25 * local_144 * fVar16 + fVar20 * fVar27 * fVar17;
  local_1b4 = (float)((uint)local_184 ^ __xmm_80000000800000008000000080000000) - local_154;
  local_1b0 = (float)((uint)local_180 ^ __xmm_80000000800000008000000080000000) - local_150;
  pTVar11 = FSolverParticles::GetP(param_1,iVar2);
  pTVar12 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar2);
  local_110 = *(float *)pTVar11 - *(float *)pTVar12;
  local_10c = *(float *)&pTVar11->field_0x4 - *(float *)&pTVar12->field_0x4;
  local_108 = *(float *)&pTVar11->field_0x8 - *(float *)&pTVar12->field_0x8;
  pTVar11 = FSolverParticles::GetP(param_1,iVar3);
  pTVar12 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar3);
  local_120 = *(float *)pTVar11 - *(float *)pTVar12;
  local_11c = *(float *)&pTVar11->field_0x4 - *(float *)&pTVar12->field_0x4;
  local_118 = *(float *)&pTVar11->field_0x8 - *(float *)&pTVar12->field_0x8;
  pTVar11 = FSolverParticles::GetP(param_1,iVar4);
  pTVar12 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar4);
  local_130 = *(float *)pTVar11 - *(float *)pTVar12;
  local_12c = *(float *)&pTVar11->field_0x4 - *(float *)&pTVar12->field_0x4;
  local_128 = *(float *)&pTVar11->field_0x8 - *(float *)&pTVar12->field_0x8;
  uVar8 = 0;
  if (param_3 < (this->StiffnessScales).ArrayNum) {
    uVar8 = uVar14;
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
  pFVar5 = (this->StiffnessScales).AllocatorInstance.Data;
  fVar24 = *(float *)(pFVar5 + lVar15 * 0xc + 8) * *(float *)&param_4->field_0x8;
  fVar21 = *(float *)(pFVar5 + lVar15 * 0xc + 4) * *(float *)&param_4->field_0x4;
  fVar27 = *(float *)(pFVar5 + lVar15 * 0xc);
  fVar25 = *(float *)param_4;
  uVar8 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar8 = uVar14;
  }
  fVar17 = (__real_3f800000 / SQRT(local_140)) * (param_5 + param_5);
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
  pFVar5 = (this->Lambdas).AllocatorInstance.Data;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar16 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar1 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar16 = CalcDLambda(fVar27 * fVar25,param_2,*(float *)(pFVar5 + lVar15 * 0xc),
                       SQRT(fVar27 * fVar25) * fVar17,*pfVar9,fVar1,fVar16,
                       (TVector<float,3> *)&local_110,(TVector<float,3> *)&local_120,
                       (TVector<float,3> *)&local_130,local_13c,(TVector<float,3> *)&local_1c8,
                       (TVector<float,3> *)&local_198,(TVector<float,3> *)&local_168);
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar27 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar25 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar21 = CalcDLambda(fVar21,param_2,*(float *)(pFVar5 + lVar15 * 0xc + 4),SQRT(fVar21) * fVar17,
                       *pfVar9,fVar25,fVar27,(TVector<float,3> *)&local_110,
                       (TVector<float,3> *)&local_120,(TVector<float,3> *)&local_130,local_138,
                       (TVector<float,3> *)&local_1d8,(TVector<float,3> *)&local_1a8,
                       (TVector<float,3> *)&local_178);
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar27 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar25 = *pfVar9;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar25 = CalcDLambda(fVar24,param_2,*(float *)(pFVar5 + lVar15 * 0xc + 8),SQRT(fVar24) * fVar17,
                       *pfVar9,fVar25,fVar27,(TVector<float,3> *)&local_110,
                       (TVector<float,3> *)&local_120,(TVector<float,3> *)&local_130,
                       (fVar19 * fVar18 + fVar28 * fVar26 + fVar20 * fVar23) - fVar22,
                       (TVector<float,3> *)&local_1b8,(TVector<float,3> *)&local_188,
                       (TVector<float,3> *)&local_158);
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2);
  fVar22 = *pfVar9;
  pTVar11 = FSolverParticles::P(param_1,iVar2);
  *(float *)pTVar11 =
       *(float *)pTVar11 - (fVar21 * local_1d8 + fVar16 * local_1c8 + fVar25 * local_1b8) * fVar22;
  *(float *)&pTVar11->field_0x4 =
       *(float *)&pTVar11->field_0x4 -
       (fVar21 * local_1d4 + fVar16 * local_1c4 + fVar25 * local_1b4) * fVar22;
  *(float *)&pTVar11->field_0x8 =
       *(float *)&pTVar11->field_0x8 -
       (fVar21 * local_1d0 + fVar16 * local_1c0 + fVar25 * local_1b0) * fVar22;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar22 = *pfVar9;
  pTVar11 = FSolverParticles::P(param_1,iVar3);
  *(float *)pTVar11 =
       *(float *)pTVar11 - (fVar16 * local_198 + local_1a8 * fVar21 + local_188 * fVar25) * fVar22;
  *(float *)&pTVar11->field_0x4 =
       *(float *)&pTVar11->field_0x4 -
       (fVar21 * local_1a4 + fVar16 * local_194 + fVar25 * local_184) * fVar22;
  *(float *)&pTVar11->field_0x8 =
       *(float *)&pTVar11->field_0x8 -
       (fVar21 * local_1a0 + fVar16 * local_190 + fVar25 * local_180) * fVar22;
  pfVar9 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar22 = *pfVar9;
  pTVar11 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar11 =
       *(float *)pTVar11 - (fVar21 * local_178 + local_168 * fVar16 + fVar25 * local_158) * fVar22;
  *(float *)&pTVar11->field_0x4 =
       *(float *)&pTVar11->field_0x4 -
       (fVar21 * local_174 + fVar16 * local_164 + fVar25 * local_154) * fVar22;
  *(float *)&pTVar11->field_0x8 =
       *(float *)&pTVar11->field_0x8 -
       (fVar21 * local_170 + fVar16 * local_160 + fVar25 * local_150) * fVar22;
  fVar22 = *(float *)(pFVar5 + lVar15 * 0xc + 4);
  fVar27 = *(float *)(pFVar5 + lVar15 * 0xc + 8);
  *(float *)(pFVar5 + lVar15 * 0xc) = fVar16 + *(float *)(pFVar5 + lVar15 * 0xc);
  *(float *)(pFVar5 + lVar15 * 0xc + 4) = fVar21 + fVar22;
  *(float *)(pFVar5 + lVar15 * 0xc + 8) = fVar25 + fVar27;
  return;
}

// ApplyHelper<Chaos::Softs::FSolverParticlesRange> @ 143f33d30

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  TVector<float,3> *pTVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  
  lVar18 = (longlong)param_3;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < (this->Constraints).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = (this->Constraints).AllocatorInstance.Data;
  iVar4 = *(int *)(pFVar7 + lVar18 * 0xc);
  iVar5 = *(int *)(pFVar7 + lVar18 * 0xc + 4);
  iVar6 = *(int *)(pFVar7 + lVar18 * 0xc + 8);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       iVar4 + *(int *)&param_1->field_0x10);
  if (((*pfVar11 == 0.0) && (pfVar11 = FSolverParticlesRange::InvM(param_1,iVar5), *pfVar11 == 0.0))
     && (pfVar11 = FSolverParticlesRange::InvM(param_1,iVar6), *pfVar11 == 0.0)) {
    return;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       iVar4 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       iVar6 + *(int *)&param_1->field_0x10);
  local_14c = *pfVar12 + *pfVar11 + *pfVar13;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar6 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar4 + *(int *)&param_1->field_0x10);
  CalculateUVStretch(this,param_3,pTVar16,pTVar15,pTVar14,(TVector<float,3> *)&local_110,
                     (TVector<float,3> *)&local_100);
  local_148 = SQRT(local_110 * local_110 + local_10c * local_10c + local_108 * local_108);
  fVar25 = SQRT(local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8);
  if (local_148 <= __real_322bcc77) {
    fVar31 = 0.0;
  }
  else {
    fVar31 = __real_3f800000 / local_148;
  }
  if (fVar25 <= __real_322bcc77) {
    fVar30 = 0.0;
  }
  else {
    fVar30 = __real_3f800000 / fVar25;
  }
  fVar26 = local_100 * fVar30;
  fVar23 = local_110 * fVar31;
  uVar10 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar10 = uVar17;
  }
  fVar21 = fVar31 * local_10c;
  fVar29 = fVar31 * local_108;
  fVar28 = fVar30 * local_fc;
  fVar19 = fVar30 * local_f8;
  local_158 = fVar26;
  local_154 = fVar21;
  local_150 = fVar29;
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar10 = uVar17;
  }
  local_148 = local_148 -
              param_7 * *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar18 * 0xc)
  ;
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar22 = *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar18 * 0xc + 4);
  uVar10 = 0;
  if (param_3 < (this->RestStretchLengths).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar24 = *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar18 * 0xc + 8);
  uVar10 = 0;
  if (param_3 < (this->DeltaUVInverse).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = (this->DeltaUVInverse).AllocatorInstance.Data;
  fVar27 = *(float *)(pFVar7 + lVar18 * 0x10 + 8);
  fVar1 = *(float *)(pFVar7 + lVar18 * 0x10);
  fVar20 = *(float *)(pFVar7 + lVar18 * 0x10 + 4);
  local_1a8 = fVar1 * fVar23;
  local_1a0 = fVar1 * fVar29;
  local_178 = fVar20 * fVar23;
  local_1a4 = fVar1 * fVar21;
  local_170 = fVar20 * fVar29;
  local_1d0 = (float)((uint)local_1a0 ^ __xmm_80000000800000008000000080000000) - local_170;
  local_174 = fVar20 * fVar21;
  local_1d8 = (float)((uint)local_1a8 ^ __xmm_80000000800000008000000080000000) - local_178;
  local_1d4 = (float)((uint)local_1a4 ^ __xmm_80000000800000008000000080000000) - local_174;
  local_1b0 = fVar27 * fVar19;
  local_1b8 = fVar27 * fVar26;
  fVar2 = *(float *)(pFVar7 + lVar18 * 0x10 + 0xc);
  local_188 = fVar2 * local_158;
  local_180 = fVar2 * fVar19;
  local_1b4 = fVar27 * fVar28;
  local_184 = fVar2 * fVar28;
  local_1e0 = (float)((uint)local_1b0 ^ __xmm_80000000800000008000000080000000) - local_180;
  local_1e8 = (float)((uint)local_1b8 ^ __xmm_80000000800000008000000080000000) - local_188;
  local_1e4 = (float)((uint)local_1b4 ^ __xmm_80000000800000008000000080000000) - local_184;
  local_198 = fVar30 * fVar23 * fVar27 + fVar31 * local_158 * fVar1;
  local_194 = fVar30 * local_154 * fVar27 + fVar31 * fVar28 * fVar1;
  local_168 = fVar30 * fVar23 * fVar2 + fVar31 * local_158 * fVar20;
  local_190 = fVar30 * local_150 * fVar27 + fVar31 * fVar19 * fVar1;
  local_1c8 = (float)((uint)local_198 ^ __xmm_80000000800000008000000080000000) - local_168;
  local_164 = fVar30 * local_154 * fVar2 + fVar31 * fVar28 * fVar20;
  local_160 = fVar30 * local_150 * fVar2 + fVar31 * fVar19 * fVar20;
  local_1c4 = (float)((uint)local_194 ^ __xmm_80000000800000008000000080000000) - local_164;
  local_1c0 = (float)((uint)local_190 ^ __xmm_80000000800000008000000080000000) - local_160;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar4 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       iVar4 + *(int *)&param_1->field_0x10);
  local_120 = *(float *)pTVar14 - *(float *)pTVar15;
  local_11c = *(float *)&pTVar14->field_0x4 - *(float *)&pTVar15->field_0x4;
  local_118 = *(float *)&pTVar14->field_0x8 - *(float *)&pTVar15->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  local_130 = *(float *)pTVar14 - *(float *)pTVar15;
  local_12c = *(float *)&pTVar14->field_0x4 - *(float *)&pTVar15->field_0x4;
  local_128 = *(float *)&pTVar14->field_0x8 - *(float *)&pTVar15->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                iVar6 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       iVar6 + *(int *)&param_1->field_0x10);
  local_140 = *(float *)pTVar14 - *(float *)pTVar15;
  local_13c = *(float *)&pTVar14->field_0x4 - *(float *)&pTVar15->field_0x4;
  local_138 = *(float *)&pTVar14->field_0x8 - *(float *)&pTVar15->field_0x8;
  uVar10 = 0;
  if (param_3 < (this->StiffnessScales).ArrayNum) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = (this->StiffnessScales).AllocatorInstance.Data;
  fVar31 = *(float *)param_4;
  fVar27 = *(float *)(pFVar7 + lVar18 * 0xc + 8) * *(float *)&param_4->field_0x8;
  fVar30 = *(float *)(pFVar7 + lVar18 * 0xc + 4) * *(float *)&param_4->field_0x4;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar17;
  }
  fVar1 = *(float *)(pFVar7 + lVar18 * 0xc);
  fVar20 = (__real_3f800000 / SQRT(local_14c)) * (param_5 + param_5);
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar7 = (this->Lambdas).AllocatorInstance.Data;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar2 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar3 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar31 = CalcDLambda(fVar31 * fVar1,param_2,*(float *)(pFVar7 + lVar18 * 0xc),
                       SQRT(fVar31 * fVar1) * fVar20,*pfVar11,fVar3,fVar2,
                       (TVector<float,3> *)&local_120,(TVector<float,3> *)&local_130,
                       (TVector<float,3> *)&local_140,local_148,(TVector<float,3> *)&local_1d8,
                       (TVector<float,3> *)&local_1a8,(TVector<float,3> *)&local_178);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar1 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar2 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar25 = CalcDLambda(fVar30,param_2,*(float *)(pFVar7 + lVar18 * 0xc + 4),SQRT(fVar30) * fVar20,
                       *pfVar11,fVar2,fVar1,(TVector<float,3> *)&local_120,
                       (TVector<float,3> *)&local_130,(TVector<float,3> *)&local_140,
                       fVar25 - param_6 * fVar22,(TVector<float,3> *)&local_1e8,
                       (TVector<float,3> *)&local_1b8,(TVector<float,3> *)&local_188);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar6);
  fVar30 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar22 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar30 = CalcDLambda(fVar27,param_2,*(float *)(pFVar7 + lVar18 * 0xc + 8),SQRT(fVar27) * fVar20,
                       *pfVar11,fVar22,fVar30,(TVector<float,3> *)&local_120,
                       (TVector<float,3> *)&local_130,(TVector<float,3> *)&local_140,
                       (fVar26 * fVar23 + fVar28 * fVar21 + fVar19 * fVar29) - fVar24,
                       (TVector<float,3> *)&local_1c8,(TVector<float,3> *)&local_198,
                       (TVector<float,3> *)&local_168);
  fVar19 = local_1d8 * fVar31;
  fVar23 = local_1d4 * fVar31;
  fVar22 = local_1e8 * fVar25;
  fVar24 = local_1e4 * fVar25;
  fVar27 = local_1e0 * fVar25;
  fVar21 = local_1c4 * fVar30;
  fVar26 = local_1d0 * fVar31;
  fVar29 = local_1c8 * fVar30;
  fVar28 = local_1c0 * fVar30;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar1 = *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar1 * (fVar22 + fVar19 + fVar29);
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar1 * (fVar24 + fVar23 + fVar21)
  ;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar1 * (fVar27 + fVar26 + fVar28)
  ;
  pfVar11 = FSolverParticlesRange::InvM(param_1,iVar5);
  fVar23 = *pfVar11;
  pTVar14 = FSolverParticlesRange::P(param_1,iVar5);
  *(float *)pTVar14 =
       *(float *)pTVar14 - (local_1b8 * fVar25 + local_1a8 * fVar31 + local_198 * fVar30) * fVar23;
  *(float *)&pTVar14->field_0x4 =
       *(float *)&pTVar14->field_0x4 -
       (local_1b4 * fVar25 + fVar31 * local_1a4 + local_194 * fVar30) * fVar23;
  *(float *)&pTVar14->field_0x8 =
       *(float *)&pTVar14->field_0x8 -
       (local_1b0 * fVar25 + fVar31 * local_1a0 + local_190 * fVar30) * fVar23;
  pfVar11 = FSolverParticlesRange::InvM(param_1,iVar6);
  fVar23 = *pfVar11;
  pTVar14 = FSolverParticlesRange::P(param_1,iVar6);
  *(float *)pTVar14 =
       *(float *)pTVar14 - (fVar25 * local_188 + fVar31 * local_178 + fVar30 * local_168) * fVar23;
  *(float *)&pTVar14->field_0x4 =
       *(float *)&pTVar14->field_0x4 -
       (local_184 * fVar25 + fVar31 * local_174 + local_164 * fVar30) * fVar23;
  *(float *)&pTVar14->field_0x8 =
       *(float *)&pTVar14->field_0x8 -
       (local_180 * fVar25 + fVar31 * local_170 + local_160 * fVar30) * fVar23;
  fVar23 = *(float *)(pFVar7 + lVar18 * 0xc + 4);
  fVar26 = *(float *)(pFVar7 + lVar18 * 0xc + 8);
  *(float *)(pFVar7 + lVar18 * 0xc) = fVar31 + *(float *)(pFVar7 + lVar18 * 0xc);
  *(float *)(pFVar7 + lVar18 * 0xc + 4) = fVar25 + fVar23;
  *(float *)(pFVar7 + lVar18 * 0xc + 8) = fVar30 + fVar26;
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f3c190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_e8;
  undefined4 local_e4;
  int local_e0 [2];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_a8;
  longlong local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FScriptContainerElement *local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  
  piVar14 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar14);
  }
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>
            (&local_68,&this->Constraints,param_1,this->ParticleOffset,
             this->ParticleCount + this->ParticleOffset);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d8,(this->Constraints).ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(this->Constraints).ArrayNum,Default);
  uVar18 = local_68.ArrayNum + 1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if (*piVar14 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar14);
  }
  uVar11 = (ulonglong)local_68.ArrayNum;
  local_e8 = 0;
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_68.AllocatorInstance.Data + uVar11 * 0x10);
  local_70 = local_68.ArrayNum;
  FVar12.Data = local_68.AllocatorInstance.Data;
  do {
    pTVar6 = local_48;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    piVar14 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar20 = &this->Constraints;
    local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data;
    if (local_68.ArrayNum != (uint)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data == pTVar6) {
      if ((local_e8 != (this->Constraints).ArrayNum) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReorderedIndex == Constraints.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                             ,0x17f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (pTVar17->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar19 + (longlong)*piVar14 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar8 == *piVar14) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar17->AllocatorInstance,piVar14);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8;
      if (pTVar20 != &local_a8) {
        pFVar19 = (pTVar20->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar20->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
        (this->Constraints).ArrayNum = local_a8.ArrayNum;
        (this->Constraints).ArrayMax = local_a8.ArrayMax;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->RestStretchLengths;
      if (pTVar1 != &local_b8) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_b8.AllocatorInstance.Data;
        (this->RestStretchLengths).ArrayNum = local_b8.ArrayNum;
        (this->RestStretchLengths).ArrayMax = local_b8.ArrayMax;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->DeltaUVInverse;
      if (pTVar2 != &local_c8) {
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar2->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
        (this->DeltaUVInverse).ArrayNum = local_c8.ArrayNum;
        (this->DeltaUVInverse).ArrayMax = local_c8.ArrayMax;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->StiffnessScales;
      if (pTVar1 != &local_d8) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_d8.AllocatorInstance.Data;
        (this->StiffnessScales).ArrayNum = local_d8.ArrayNum;
        (this->StiffnessScales).ArrayMax = local_d8.ArrayMax;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessWarp,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessWeft,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessBias,&local_90);
      FPBDWeightMap::ReorderIndices(&this->DampingRatio,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data,
                 local_68.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if ((this->ConstraintsPerColorStartIndex).ArrayNum < 2) {
        iVar8 = *piVar14;
        (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
        if (iVar8 < 2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&pTVar17->AllocatorInstance,0,piVar14);
          iVar8 = *piVar14;
        }
        pFVar19 = (pTVar17->AllocatorInstance).Data;
        local_e4 = 0;
        if (((pFVar19 <= (FScriptContainerElement *)&local_e4) &&
            ((FScriptContainerElement *)&local_e4 < pFVar19 + (longlong)iVar8 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar17->AllocatorInstance,piVar14);
        }
        (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e4;
        local_e0[0] = (this->Constraints).ArrayNum;
        pFVar19 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)local_e0) &&
            ((FScriptContainerElement *)local_e0 < pFVar19 + (longlong)*piVar14 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar17->AllocatorInstance,piVar14);
        }
        (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
        *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e0[0];
      }
      return;
    }
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar19 + (longlong)*piVar14 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar8 == *piVar14) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar17->AllocatorInstance,piVar14);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8;
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->AllocatorInstance).Data;
    local_50 = pFVar19 + uVar11 * 4;
    while( true ) {
      pFVar4 = local_50;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar4) break;
      uVar18 = *(uint *)pFVar19;
      lVar15 = (longlong)(int)uVar18;
      uVar16 = ~uVar18 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar18 < (this->Constraints).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)local_e8;
      local_98 = lVar15 * 0xc;
      pFVar4 = (this->Constraints).AllocatorInstance.Data;
      local_80 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)local_80;
      uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_a8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_80;
        uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      }
      *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_a8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar9 = 0;
      if ((int)uVar18 < (this->RestStretchLengths).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RestStretchLengths).AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_e8;
      local_80 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)local_80;
      uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_b8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_80;
        uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      }
      *(ulonglong *)(local_b8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar9 = 0;
      if ((int)uVar18 < (this->DeltaUVInverse).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)local_e8;
      pFVar4 = (this->DeltaUVInverse).AllocatorInstance.Data + lVar15 * 0x10;
      local_80 = *(undefined8 *)pFVar4;
      uStack_78 = *(undefined4 *)(pFVar4 + 8);
      uStack_74 = *(undefined4 *)(pFVar4 + 0xc);
      uVar9 = 0;
      if ((int)local_e8 < local_c8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      uVar22 = *(undefined4 *)pFVar4;
      uVar21 = *(undefined4 *)(pFVar4 + 4);
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = (undefined4)local_80;
        uVar21 = local_80._4_4_;
      }
      pFVar4 = local_c8.AllocatorInstance.Data + lVar13 * 0x10;
      *(undefined4 *)pFVar4 = uVar22;
      *(undefined4 *)(pFVar4 + 4) = uVar21;
      *(undefined4 *)(pFVar4 + 8) = uStack_78;
      *(undefined4 *)(pFVar4 + 0xc) = uStack_74;
      uVar9 = 0;
      if ((int)uVar18 < (this->StiffnessScales).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->StiffnessScales).AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_e8;
      uVar3 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)uVar3;
      uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_d8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      local_98 = uVar3;
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_98;
        uVar23 = (undefined4)((ulonglong)local_98 >> 0x20);
      }
      uVar9 = local_e8;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar10 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar15 * 4) = uVar9;
      local_e8 = local_e8 + 1;
      pFVar19 = pFVar19 + 4;
      FVar12.Data = (FScriptContainerElement *)local_58;
    }
    uVar11 = (ulonglong)local_70;
    FVar12.Data = FVar12.Data + 0x10;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f3d080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticlesRange *param_1)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_e8;
  undefined4 local_e4;
  int local_e0 [2];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_a8;
  longlong local_98;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  FScriptContainerElement *local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  
  piVar14 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar14);
  }
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>
            (&local_68,&this->Constraints,param_1,this->ParticleOffset,
             this->ParticleCount + this->ParticleOffset);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c8,(this->Constraints).ArrayNum,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d8,(this->Constraints).ArrayNum,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(this->Constraints).ArrayNum,Default);
  uVar18 = local_68.ArrayNum + 1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if (*piVar14 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar14);
  }
  uVar11 = (ulonglong)local_68.ArrayNum;
  local_e8 = 0;
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_68.AllocatorInstance.Data + uVar11 * 0x10);
  local_70 = local_68.ArrayNum;
  FVar12.Data = local_68.AllocatorInstance.Data;
  do {
    pTVar6 = local_48;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    piVar14 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar20 = &this->Constraints;
    local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data;
    if (local_68.ArrayNum != (uint)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data == pTVar6) {
      if ((local_e8 != (this->Constraints).ArrayNum) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ReorderedIndex == Constraints.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                             ,0x17f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (pTVar17->AllocatorInstance).Data;
      if (((pFVar19 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar19 + (longlong)*piVar14 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar8 == *piVar14) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar17->AllocatorInstance,piVar14);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8;
      if (pTVar20 != &local_a8) {
        pFVar19 = (pTVar20->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar20->AllocatorInstance).Data = local_a8.AllocatorInstance.Data;
        (this->Constraints).ArrayNum = local_a8.ArrayNum;
        (this->Constraints).ArrayMax = local_a8.ArrayMax;
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
        local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->RestStretchLengths;
      if (pTVar1 != &local_b8) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_b8.AllocatorInstance.Data;
        (this->RestStretchLengths).ArrayNum = local_b8.ArrayNum;
        (this->RestStretchLengths).ArrayMax = local_b8.ArrayMax;
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
        local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->DeltaUVInverse;
      if (pTVar2 != &local_c8) {
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar2->AllocatorInstance).Data = local_c8.AllocatorInstance.Data;
        (this->DeltaUVInverse).ArrayNum = local_c8.ArrayNum;
        (this->DeltaUVInverse).ArrayMax = local_c8.ArrayMax;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->StiffnessScales;
      if (pTVar1 != &local_d8) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_d8.AllocatorInstance.Data;
        (this->StiffnessScales).ArrayNum = local_d8.ArrayNum;
        (this->StiffnessScales).ArrayMax = local_d8.ArrayMax;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessWarp,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessWeft,&local_90);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->StiffnessBias,&local_90);
      FPBDWeightMap::ReorderIndices(&this->DampingRatio,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data,
                 local_68.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_68.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      if ((this->ConstraintsPerColorStartIndex).ArrayNum < 2) {
        iVar8 = *piVar14;
        (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
        if (iVar8 < 2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,2,&pTVar17->AllocatorInstance,0,piVar14);
          iVar8 = *piVar14;
        }
        pFVar19 = (pTVar17->AllocatorInstance).Data;
        local_e4 = 0;
        if (((pFVar19 <= (FScriptContainerElement *)&local_e4) &&
            ((FScriptContainerElement *)&local_e4 < pFVar19 + (longlong)iVar8 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar17->AllocatorInstance,piVar14);
        }
        (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e4;
        local_e0[0] = (this->Constraints).ArrayNum;
        pFVar19 = (pTVar17->AllocatorInstance).Data;
        if (((pFVar19 <= (FScriptContainerElement *)local_e0) &&
            ((FScriptContainerElement *)local_e0 < pFVar19 + (longlong)*piVar14 * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
        if (iVar8 == *piVar14) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar17->AllocatorInstance,piVar14);
        }
        (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
        *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e0[0];
      }
      return;
    }
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    if (((pFVar19 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar19 + (longlong)*piVar14 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar8 == *piVar14) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar17->AllocatorInstance,piVar14);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_e8;
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum;
    uVar11 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->AllocatorInstance).Data;
    local_50 = pFVar19 + uVar11 * 4;
    while( true ) {
      pFVar4 = local_50;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar12.Data)->ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar4) break;
      uVar18 = *(uint *)pFVar19;
      lVar15 = (longlong)(int)uVar18;
      uVar16 = ~uVar18 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar18 < (this->Constraints).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)local_e8;
      local_98 = lVar15 * 0xc;
      pFVar4 = (this->Constraints).AllocatorInstance.Data;
      local_80 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)local_80;
      uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_a8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_80;
        uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      }
      *(ulonglong *)(local_a8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_a8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar9 = 0;
      if ((int)uVar18 < (this->RestStretchLengths).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->RestStretchLengths).AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_e8;
      local_80 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)local_80;
      uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_b8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_80;
        uVar23 = (undefined4)((ulonglong)local_80 >> 0x20);
      }
      *(ulonglong *)(local_b8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_b8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar9 = 0;
      if ((int)uVar18 < (this->DeltaUVInverse).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar13 = (longlong)(int)local_e8;
      pFVar4 = (this->DeltaUVInverse).AllocatorInstance.Data + lVar15 * 0x10;
      local_80 = *(undefined8 *)pFVar4;
      uStack_78 = *(undefined4 *)(pFVar4 + 8);
      uStack_74 = *(undefined4 *)(pFVar4 + 0xc);
      uVar9 = 0;
      if ((int)local_e8 < local_c8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      uVar22 = *(undefined4 *)pFVar4;
      uVar21 = *(undefined4 *)(pFVar4 + 4);
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = (undefined4)local_80;
        uVar21 = local_80._4_4_;
      }
      pFVar4 = local_c8.AllocatorInstance.Data + lVar13 * 0x10;
      *(undefined4 *)pFVar4 = uVar22;
      *(undefined4 *)(pFVar4 + 4) = uVar21;
      *(undefined4 *)(pFVar4 + 8) = uStack_78;
      *(undefined4 *)(pFVar4 + 0xc) = uStack_74;
      uVar9 = 0;
      if ((int)uVar18 < (this->StiffnessScales).ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->StiffnessScales).AllocatorInstance.Data;
      lVar13 = (longlong)(int)local_e8;
      uVar3 = *(undefined8 *)(pFVar4 + local_98);
      uVar21 = (undefined4)uVar3;
      uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uVar22 = *(undefined4 *)(pFVar4 + local_98 + 8);
      uVar9 = 0;
      if ((int)local_e8 < local_d8.ArrayNum) {
        uVar9 = ~local_e8 >> 0x1f;
      }
      local_98 = uVar3;
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = (undefined4)local_98;
        uVar23 = (undefined4)((ulonglong)local_98 >> 0x20);
      }
      uVar9 = local_e8;
      *(ulonglong *)(local_d8.AllocatorInstance.Data + lVar13 * 0xc) = CONCAT44(uVar23,uVar21);
      *(undefined4 *)(local_d8.AllocatorInstance.Data + lVar13 * 0xc + 8) = uVar22;
      uVar10 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar15 * 4) = uVar9;
      local_e8 = local_e8 + 1;
      pFVar19 = pFVar19 + 4;
      FVar12.Data = (FScriptContainerElement *)local_58;
    }
    uVar11 = (ulonglong)local_70;
    FVar12.Data = FVar12.Data + 0x10;
  } while( true );
}

// InitConstraintsAndRestData<Chaos::Softs::FSolverParticles> @ 143f3da20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::
InitConstraintsAndRestData<Chaos::Softs::FSolverParticles>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,FTriangleMesh *param_2
          ,TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4,bool param_5)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  uint uVar35;
  float fVar36;
  undefined1 auStackY_238 [32];
  uint local_1e8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float local_1c4;
  float fStack_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float local_1ac;
  float fStack_1a8;
  float local_1a4;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  FTriangleMesh *local_148;
  longlong local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_148 = param_2;
  if (((param_2->MElements).ArrayNum != param_3->ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Elements.Num() == FaceVertexUVs.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                          ,0xfe,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar35 = (param_2->MElements).ArrayNum;
  local_1a0 = &this->Constraints;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar1 = &(this->Constraints).ArrayMax;
  if (*piVar1 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar35,&local_1a0->AllocatorInstance,(this->Constraints).ArrayNum,piVar1);
  }
  uVar35 = (param_2->MElements).ArrayNum;
  pTVar3 = &this->RestStretchLengths;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar1 = &(this->RestStretchLengths).ArrayMax;
  if (*piVar1 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar35,&pTVar3->AllocatorInstance,(this->RestStretchLengths).ArrayNum,piVar1);
  }
  uVar35 = (param_2->MElements).ArrayNum;
  pTVar4 = &this->DeltaUVInverse;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar1 = &(this->DeltaUVInverse).ArrayMax;
  if ((this->DeltaUVInverse).ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar35,&pTVar4->AllocatorInstance,(this->DeltaUVInverse).ArrayNum,piVar1);
  }
  uVar35 = (param_2->MElements).ArrayNum;
  pTVar18 = &this->StiffnessScales;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  piVar2 = &(this->StiffnessScales).ArrayMax;
  if (*piVar2 < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar35,&pTVar18->AllocatorInstance,(this->StiffnessScales).ArrayNum,piVar2);
  }
  fVar8 = __real_3f800000;
  iVar12 = (param_2->MElements).ArrayNum;
  local_1e8 = 0;
  if (0 < iVar12) {
    local_188 = 0;
    fVar28 = __real_322bcc77;
    uVar32 = __xmm_80000000800000008000000080000000;
    uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar33 = ___xmm_3f80000000000000000000003f800000;
    uVar34 = _UNK_15076b188;
    do {
      lVar15 = local_188;
      uVar14 = ~local_1e8 >> 0x1f;
      uVar20 = 0;
      if ((int)local_1e8 < iVar12) {
        uVar20 = uVar14;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = (local_148->MElements).AllocatorInstance.Data + lVar15 * 0xc;
      if (param_5) {
        uVar20 = *(uint *)pFVar13;
        uVar11 = 0;
        if ((int)uVar20 < (int)param_1->_padding_) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(float *)(param_1->_padding_ + (longlong)(int)uVar20 * 4) != 0.0) goto LAB_143f3dd87;
        uVar20 = *(uint *)(pFVar13 + 4);
        uVar11 = 0;
        if ((int)uVar20 < (int)param_1->_padding_) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(float *)(param_1->_padding_ + (longlong)(int)uVar20 * 4) != 0.0) ||
           (fVar19 = TDynamicParticles<float,3>::InvM
                               ((TDynamicParticles<float,3> *)param_1,*(uint *)(pFVar13 + 8)),
           fVar19 != 0.0)) goto LAB_143f3dd87;
      }
      else {
LAB_143f3dd87:
        pFVar17 = (local_1a0->AllocatorInstance).Data;
        if ((pFVar17 <= pFVar13) &&
           ((pFVar13 < pFVar17 + (longlong)local_1a0->ArrayMax * 0xc &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar12 = local_1a0->ArrayNum;
        if (iVar12 == local_1a0->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_1a0->AllocatorInstance,&local_1a0->ArrayMax);
        }
        lVar15 = local_188;
        local_1a0->ArrayNum = iVar12 + 1;
        pFVar17 = (local_1a0->AllocatorInstance).Data;
        *(undefined8 *)(pFVar17 + (longlong)iVar12 * 0xc) = *(undefined8 *)pFVar13;
        *(uint *)(pFVar17 + (longlong)iVar12 * 0xc + 8) = *(uint *)(pFVar13 + 8);
        uVar20 = 0;
        if ((int)local_1e8 < param_3->ArrayNum) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_168 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar15 * 0x18);
        uVar20 = 0;
        if ((int)local_1e8 < param_3->ArrayNum) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_170 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar15 * 0x18 + 8);
        uVar20 = 0;
        if ((int)local_1e8 < param_3->ArrayNum) {
          uVar20 = uVar14;
        }
        if ((uVar20 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar19 = (float)local_170 - (float)local_168;
        fVar23 = local_170._4_4_ - local_168._4_4_;
        uVar5 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar15 * 0x18 + 0x10);
        local_160._0_4_ = (float)uVar5;
        local_160._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        fVar25 = (float)local_160 - (float)local_168;
        fVar27 = local_160._4_4_ - local_168._4_4_;
        local_160 = uVar5;
        if (param_4) {
          fVar21 = fVar19 * fVar19 + fVar25 * fVar25;
          if (fVar21 <= fVar28) {
            local_198 = 0;
          }
          else {
            fVar21 = fVar8 / SQRT(fVar21);
            local_198 = CONCAT44(fVar21 * fVar25,fVar21 * fVar19);
          }
          local_158 = local_198;
          uVar5 = local_158;
          fVar19 = fVar23 * fVar23 + fVar27 * fVar27;
          if (fVar19 <= fVar28) {
            local_190 = 0;
          }
          else {
            fVar19 = fVar8 / SQRT(fVar19);
            local_190 = CONCAT44(fVar19 * fVar27,fVar19 * fVar23);
          }
          local_158._4_4_ = (float)((ulonglong)local_198 >> 0x20);
          local_158._0_4_ = (float)local_198;
          pFVar17 = (pTVar4->AllocatorInstance).Data;
          local_150 = local_190;
          uVar9 = local_150;
          local_150._4_4_ = (float)((ulonglong)local_190 >> 0x20);
          local_150._0_4_ = (float)local_190;
          fVar19 = local_150._4_4_ * (float)local_158 - local_158._4_4_ * (float)local_150;
          local_158 = uVar5;
          local_150 = uVar9;
          if (fVar28 <= (float)((uint)fVar19 & uVar35)) {
            fVar19 = fVar8 / fVar19;
            fStack_12c = fVar19 * (float)local_158;
            fStack_130 = (float)((uint)(fVar19 * local_158._4_4_) ^ uVar32);
            local_138 = fVar19 * local_150._4_4_;
            fStack_134 = (float)((uint)(fVar19 * (float)local_150) ^ uVar32);
            if (((pFVar17 <= (FScriptContainerElement *)&local_138) &&
                ((FScriptContainerElement *)&local_138 < pFVar17 + (longlong)*piVar1 * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = (this->DeltaUVInverse).ArrayNum;
            fVar28 = local_138;
            fVar19 = fStack_134;
            fVar23 = fStack_130;
            fVar25 = fStack_12c;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar4->AllocatorInstance,piVar1);
              fVar28 = local_138;
              fVar19 = fStack_134;
              fVar23 = fStack_130;
              fVar25 = fStack_12c;
            }
          }
          else {
            local_118 = uVar33;
            uStack_110 = uVar34;
            if (((pFVar17 <= (FScriptContainerElement *)&local_118) &&
                ((FScriptContainerElement *)&local_118 < pFVar17 + (longlong)*piVar1 * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = (this->DeltaUVInverse).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar4->AllocatorInstance,piVar1);
            }
            fVar28 = (float)local_118;
            fVar19 = local_118._4_4_;
            fVar23 = (float)uStack_110;
            fVar25 = uStack_110._4_4_;
          }
          (this->DeltaUVInverse).ArrayNum = iVar12 + 1;
          pFVar17 = (pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(float *)pFVar17 = fVar28;
          *(float *)(pFVar17 + 4) = fVar19;
          *(float *)(pFVar17 + 8) = fVar23;
          *(float *)(pFVar17 + 0xc) = fVar25;
          uVar35 = *(uint *)pFVar13;
          uVar32 = 0;
          if ((int)uVar35 < (int)param_1->_padding_) {
            uVar32 = ~uVar35 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_178 = (longlong)(int)uVar35 * 3;
          uVar35 = *(uint *)(pFVar13 + 4);
          lVar15 = (longlong)(int)uVar35;
          local_180 = param_1->_padding_;
          uVar32 = 0;
          if ((int)uVar35 < (int)param_1->_padding_) {
            uVar32 = ~uVar35 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar35 = *(uint *)(pFVar13 + 8);
          lVar16 = (longlong)(int)uVar35;
          local_140 = param_1->_padding_;
          uVar32 = 0;
          if ((int)uVar35 < (int)param_1->_padding_) {
            uVar32 = ~uVar35 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar28 = *(float *)pFVar17;
          fVar19 = *(float *)(pFVar17 + 4);
          fVar23 = *(float *)(pFVar17 + 0xc);
          fVar24 = *(float *)(local_140 + lVar15 * 0xc) - *(float *)(local_180 + local_178 * 4);
          lVar6 = param_1->_padding_;
          fVar22 = *(float *)(local_140 + 8 + lVar15 * 0xc) -
                   *(float *)(local_180 + 8 + local_178 * 4);
          fVar25 = *(float *)(lVar6 + 4 + lVar16 * 0xc) - *(float *)(local_180 + 4 + local_178 * 4);
          fVar31 = *(float *)(local_140 + 4 + lVar15 * 0xc) -
                   *(float *)(local_180 + 4 + local_178 * 4);
          fVar27 = *(float *)(lVar6 + lVar16 * 0xc) - *(float *)(local_180 + local_178 * 4);
          fVar36 = *(float *)(lVar6 + 8 + lVar16 * 0xc) - *(float *)(local_180 + 8 + local_178 * 4);
          local_180 = CONCAT44(local_180._4_4_,fVar25);
          fVar29 = fVar19 * fVar27 + fVar28 * fVar24;
          fVar30 = fVar19 * fVar25 + fVar28 * fVar31;
          fVar26 = fVar19 * fVar36 + fVar28 * fVar22;
          local_178 = CONCAT44(local_178._4_4_,fVar27);
          fVar28 = *(float *)(pFVar17 + 8);
          fVar21 = fVar23 * fVar36 + fVar28 * fVar22;
          fVar19 = fVar23 * fVar25 + fVar28 * fVar31;
          fVar28 = fVar23 * fVar27 + fVar28 * fVar24;
          local_1d0 = SQRT(fVar29 * fVar29 + fVar30 * fVar30 + fVar26 * fVar26);
          if (local_1d0 <= __real_322bcc77) {
            fVar23 = 0.0;
          }
          else {
            fVar23 = fVar8 / local_1d0;
          }
          fStack_1cc = SQRT(fVar19 * fVar19 + fVar28 * fVar28 + fVar21 * fVar21);
          if (fStack_1cc <= __real_322bcc77) {
            fVar25 = 0.0;
          }
          else {
            fVar25 = fVar8 / fStack_1cc;
          }
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          local_1c8 = fVar25 * fVar28 * fVar29 * fVar23 + fVar19 * fVar25 * fVar30 * fVar23 +
                      fVar26 * fVar23 * fVar21 * fVar25;
          if (((pFVar13 <= (FScriptContainerElement *)&local_1d0) &&
              ((FScriptContainerElement *)&local_1d0 <
               pFVar13 + (longlong)(this->RestStretchLengths).ArrayMax * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->RestStretchLengths).ArrayNum;
          if (iVar12 == (this->RestStretchLengths).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar3->AllocatorInstance,
                                &(this->RestStretchLengths).ArrayMax);
          }
          fVar28 = __real_322bcc77;
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          (this->RestStretchLengths).ArrayNum = iVar12 + 1;
          lVar15 = (longlong)iVar12;
          *(ulonglong *)(pFVar13 + lVar15 * 0xc) = CONCAT44(fStack_1cc,local_1d0);
          *(float *)(pFVar13 + lVar15 * 0xc + 8) = local_1c8;
          local_1c4 = fVar8;
          if (fVar28 <= *(float *)(pFVar13 + lVar15 * 0xc)) {
            local_1c4 = fVar8 / *(float *)(pFVar13 + lVar15 * 0xc);
          }
          fStack_1c0 = fVar8;
          if (fVar28 <= *(float *)(pFVar13 + lVar15 * 0xc + 4)) {
            fStack_1c0 = fVar8 / *(float *)(pFVar13 + lVar15 * 0xc + 4);
          }
          pFVar13 = (pTVar18->AllocatorInstance).Data;
          piVar2 = &(this->StiffnessScales).ArrayMax;
          fVar19 = fVar31 * fVar36 - fVar22 * (float)local_180;
          fVar25 = fVar24 * (float)local_180 - fVar31 * (float)local_178;
          fVar23 = fVar22 * (float)local_178 - fVar24 * fVar36;
          local_1bc = SQRT(SQRT(fVar23 * fVar23 + fVar19 * fVar19 + fVar25 * fVar25) *
                           __real_3f000000);
          if (((pFVar13 <= (FScriptContainerElement *)&local_1c4) &&
              ((FScriptContainerElement *)&local_1c4 < pFVar13 + (longlong)*piVar2 * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->StiffnessScales).ArrayNum;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar18->AllocatorInstance,piVar2);
          }
          uVar34 = _UNK_15076b188;
          uVar33 = ___xmm_3f80000000000000000000003f800000;
          uVar32 = __xmm_80000000800000008000000080000000;
          uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          lVar15 = (longlong)iVar12;
          (this->StiffnessScales).ArrayNum = iVar12 + 1;
          pFVar13 = (pTVar18->AllocatorInstance).Data;
          *(ulonglong *)(pFVar13 + lVar15 * 0xc) = CONCAT44(fStack_1c0,local_1c4);
          fVar19 = local_1bc;
        }
        else {
          pFVar13 = (pTVar4->AllocatorInstance).Data;
          fVar21 = fVar19 * fVar27 - fVar23 * fVar25;
          fVar22 = (float)((uint)fVar21 & uVar35);
          if (fVar28 <= fVar22) {
            fVar21 = fVar8 / fVar21;
            fStack_11c = fVar19 * fVar21;
            uStack_120 = (uint)(fVar25 * fVar21) ^ uVar32;
            local_128 = fVar27 * fVar21;
            uStack_124 = (uint)(fVar23 * fVar21) ^ uVar32;
            if (((pFVar13 <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = (this->DeltaUVInverse).ArrayNum;
            fVar21 = local_128;
            uVar20 = uStack_124;
            uVar14 = uStack_120;
            fVar24 = fStack_11c;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar4->AllocatorInstance,piVar1);
              fVar21 = local_128;
              uVar20 = uStack_124;
              uVar14 = uStack_120;
              fVar24 = fStack_11c;
            }
          }
          else {
            local_108 = uVar33;
            uStack_100 = uVar34;
            if (((pFVar13 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 < pFVar13 + (longlong)*piVar1 * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = (this->DeltaUVInverse).ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar4->AllocatorInstance,piVar1);
            }
            fVar21 = (float)local_108;
            uVar20 = local_108._4_4_;
            uVar14 = (uint)uStack_100;
            fVar24 = uStack_100._4_4_;
          }
          local_1b8 = 0x3f800000;
          (this->DeltaUVInverse).ArrayNum = iVar12 + 1;
          uStack_1b4 = 0x3f800000;
          uStack_1b0 = 0;
          pFVar13 = (pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(float *)pFVar13 = fVar21;
          *(uint *)(pFVar13 + 4) = uVar20;
          *(uint *)(pFVar13 + 8) = uVar14;
          *(float *)(pFVar13 + 0xc) = fVar24;
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 <
               pFVar13 + (longlong)(this->RestStretchLengths).ArrayMax * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->RestStretchLengths).ArrayNum;
          if (iVar12 == (this->RestStretchLengths).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar3->AllocatorInstance,
                                &(this->RestStretchLengths).ArrayMax);
          }
          (this->RestStretchLengths).ArrayNum = iVar12 + 1;
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar13 + (longlong)iVar12 * 0xc) = CONCAT44(uStack_1b4,local_1b8);
          *(undefined4 *)(pFVar13 + (longlong)iVar12 * 0xc + 8) = uStack_1b0;
          fVar19 = SQRT(fVar19 * fVar19 + fVar25 * fVar25);
          fVar23 = SQRT(fVar23 * fVar23 + fVar27 * fVar27);
          local_1ac = fVar8;
          if (fVar28 <= fVar19) {
            local_1ac = fVar8 / fVar19;
          }
          fStack_1a8 = fVar8;
          if (fVar28 <= fVar23) {
            fStack_1a8 = fVar8 / fVar23;
          }
          pFVar13 = (pTVar18->AllocatorInstance).Data;
          piVar2 = &(this->StiffnessScales).ArrayMax;
          local_1a4 = SQRT(fVar22 * __real_3f000000);
          if (((pFVar13 <= (FScriptContainerElement *)&local_1ac) &&
              ((FScriptContainerElement *)&local_1ac < pFVar13 + (longlong)*piVar2 * 0xc)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this->StiffnessScales).ArrayNum;
          if (iVar12 == *piVar2) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar18->AllocatorInstance,piVar2);
          }
          lVar15 = (longlong)iVar12;
          (this->StiffnessScales).ArrayNum = iVar12 + 1;
          pFVar13 = (pTVar18->AllocatorInstance).Data;
          *(ulonglong *)(pFVar13 + lVar15 * 0xc) = CONCAT44(fStack_1a8,local_1ac);
          fVar19 = local_1a4;
        }
        *(float *)(pFVar13 + lVar15 * 0xc + 8) = fVar19;
      }
      local_1e8 = local_1e8 + 1;
      local_188 = local_188 + 1;
      iVar12 = (local_148->MElements).ArrayNum;
    } while ((int)local_1e8 < iVar12);
  }
  return;
}

// InitConstraintsAndRestData<Chaos::Softs::FSolverParticlesRange> @ 143f3eb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::
InitConstraintsAndRestData<Chaos::Softs::FSolverParticlesRange>
          (FXPBDStretchBiasElementConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4,bool param_5)

{
  int *piVar1;
  int *piVar2;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  code *pcVar5;
  float fVar6;
  undefined8 uVar7;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar33;
  float fVar34;
  undefined1 auStackY_228 [32];
  uint local_1d8;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1bc;
  float fStack_1b8;
  float local_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  float local_1a4;
  float fStack_1a0;
  float local_19c;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong local_180;
  float local_178;
  TVector<float,3> *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_140;
  FTriangleMesh *local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  uint uStack_11c;
  uint uStack_118;
  float fStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_138 = param_2;
  if (((param_2->MElements).ArrayNum != param_3->ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Elements.Num() == FaceVertexUVs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                         ,0xfe,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar33 = (param_2->MElements).ArrayNum;
  local_198 = &this->Constraints;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar1 = &(this->Constraints).ArrayMax;
  if (*piVar1 < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar33,&local_198->AllocatorInstance,(this->Constraints).ArrayNum,piVar1);
  }
  uVar33 = (param_2->MElements).ArrayNum;
  local_140 = &this->RestStretchLengths;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar1 = &(this->RestStretchLengths).ArrayMax;
  if (*piVar1 < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar33,&local_140->AllocatorInstance,(this->RestStretchLengths).ArrayNum,piVar1
              );
  }
  uVar33 = (param_2->MElements).ArrayNum;
  pTVar3 = &this->DeltaUVInverse;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar1 = &(this->DeltaUVInverse).ArrayMax;
  if ((this->DeltaUVInverse).ArrayMax < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar33,&pTVar3->AllocatorInstance,(this->DeltaUVInverse).ArrayNum,piVar1);
  }
  uVar33 = (param_2->MElements).ArrayNum;
  pTVar17 = &this->StiffnessScales;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
  }
  piVar2 = &(this->StiffnessScales).ArrayMax;
  if (*piVar2 < (int)uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar33,&pTVar17->AllocatorInstance,(this->StiffnessScales).ArrayNum,piVar2);
  }
  fVar6 = __real_3f800000;
  iVar10 = (param_2->MElements).ArrayNum;
  local_1d8 = 0;
  if (0 < iVar10) {
    local_180 = 0;
    fVar24 = __real_322bcc77;
    uVar29 = __xmm_80000000800000008000000080000000;
    uVar33 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar31 = ___xmm_3f80000000000000000000003f800000;
    uVar32 = _UNK_15076b188;
    do {
      lVar13 = local_180;
      uVar15 = ~local_1d8 >> 0x1f;
      uVar19 = 0;
      if ((int)local_1d8 < iVar10) {
        uVar19 = uVar15;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar14 = (local_138->MElements).AllocatorInstance.Data + lVar13 * 0xc;
      if (param_5) {
        iVar10 = *(int *)pFVar14;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar10);
        if (fVar18 != 0.0) goto LAB_143f3ee64;
        iVar10 = *(int *)(pFVar14 + 4);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar10);
        if (fVar18 != 0.0) goto LAB_143f3ee64;
        iVar10 = *(int *)(pFVar14 + 8);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar10);
        if (fVar18 != 0.0) goto LAB_143f3ee64;
      }
      else {
LAB_143f3ee64:
        pFVar16 = (local_198->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar14) && (pFVar14 < pFVar16 + (longlong)local_198->ArrayMax * 0xc)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = local_198->ArrayNum;
        if (iVar10 == local_198->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&local_198->AllocatorInstance,&local_198->ArrayMax);
        }
        lVar13 = local_180;
        local_198->ArrayNum = iVar10 + 1;
        pFVar16 = (local_198->AllocatorInstance).Data;
        *(undefined8 *)(pFVar16 + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar14;
        *(int *)(pFVar16 + (longlong)iVar10 * 0xc + 8) = *(int *)(pFVar14 + 8);
        uVar19 = 0;
        if ((int)local_1d8 < param_3->ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_160 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar13 * 0x18);
        uVar19 = 0;
        if ((int)local_1d8 < param_3->ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_168 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar13 * 0x18 + 8);
        uVar19 = 0;
        if ((int)local_1d8 < param_3->ArrayNum) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar23 = (float)local_168 - (float)local_160;
        fVar25 = local_168._4_4_ - local_160._4_4_;
        uVar4 = *(undefined8 *)((param_3->AllocatorInstance).Data + lVar13 * 0x18 + 0x10);
        local_158._0_4_ = (float)uVar4;
        local_158._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar18 = (float)local_158 - (float)local_160;
        fVar21 = local_158._4_4_ - local_160._4_4_;
        local_158 = uVar4;
        if (param_4) {
          fVar20 = fVar18 * fVar18 + fVar23 * fVar23;
          if (fVar20 <= fVar24) {
            local_190 = 0;
          }
          else {
            fVar20 = fVar6 / SQRT(fVar20);
            local_190 = CONCAT44(fVar20 * fVar18,fVar20 * fVar23);
          }
          local_150 = local_190;
          uVar4 = local_150;
          fVar18 = fVar21 * fVar21 + fVar25 * fVar25;
          if (fVar18 <= fVar24) {
            local_188 = 0;
          }
          else {
            fVar18 = fVar6 / SQRT(fVar18);
            local_188 = CONCAT44(fVar18 * fVar21,fVar18 * fVar25);
          }
          local_150._4_4_ = (float)((ulonglong)local_190 >> 0x20);
          local_150._0_4_ = (float)local_190;
          pFVar16 = (pTVar3->AllocatorInstance).Data;
          local_148 = local_188;
          uVar7 = local_148;
          local_148._4_4_ = (float)((ulonglong)local_188 >> 0x20);
          local_148._0_4_ = (float)local_188;
          fVar18 = local_148._4_4_ * (float)local_150 - local_150._4_4_ * (float)local_148;
          local_150 = uVar4;
          local_148 = uVar7;
          if (fVar24 <= (float)((uint)fVar18 & uVar33)) {
            fVar18 = fVar6 / fVar18;
            fStack_124 = fVar18 * (float)local_150;
            fStack_128 = (float)((uint)(fVar18 * local_150._4_4_) ^ uVar29);
            local_130 = fVar18 * local_148._4_4_;
            fStack_12c = (float)((uint)(fVar18 * (float)local_148) ^ uVar29);
            if (((pFVar16 <= (FScriptContainerElement *)&local_130) &&
                ((FScriptContainerElement *)&local_130 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->DeltaUVInverse).ArrayNum;
            fVar24 = local_130;
            fVar18 = fStack_12c;
            fVar21 = fStack_128;
            fVar23 = fStack_124;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar3->AllocatorInstance,piVar1);
              fVar24 = local_130;
              fVar18 = fStack_12c;
              fVar21 = fStack_128;
              fVar23 = fStack_124;
            }
          }
          else {
            local_110 = uVar31;
            uStack_108 = uVar32;
            if (((pFVar16 <= (FScriptContainerElement *)&local_110) &&
                ((FScriptContainerElement *)&local_110 < pFVar16 + (longlong)*piVar1 * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->DeltaUVInverse).ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar3->AllocatorInstance,piVar1);
            }
            fVar24 = (float)local_110;
            fVar18 = local_110._4_4_;
            fVar21 = (float)uStack_108;
            fVar23 = uStack_108._4_4_;
          }
          (this->DeltaUVInverse).ArrayNum = iVar10 + 1;
          pFVar16 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(float *)pFVar16 = fVar24;
          *(float *)(pFVar16 + 4) = fVar18;
          *(float *)(pFVar16 + 8) = fVar21;
          *(float *)(pFVar16 + 0xc) = fVar23;
          iVar10 = *(int *)pFVar14;
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x56,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_170 = TParticles<float,3>::GetX
                                (*(TParticles<float,3> **)&param_1->field_0x8,
                                 *(int *)&param_1->field_0x10 + iVar10);
          iVar10 = *(int *)(pFVar14 + 4);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x56,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar11 = TParticles<float,3>::GetX
                              (*(TParticles<float,3> **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar10);
          iVar10 = *(int *)(pFVar14 + 8);
          if ((*(longlong *)&param_1->field_0x8 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Particles",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                 ,0x56,L""), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar12 = TParticles<float,3>::GetX
                              (*(TParticles<float,3> **)&param_1->field_0x8,
                               *(int *)&param_1->field_0x10 + iVar10);
          pTVar8 = local_140;
          fVar24 = *(float *)pFVar16;
          fVar18 = *(float *)(pFVar16 + 4);
          fVar21 = *(float *)(pFVar16 + 0xc);
          local_178 = *(float *)&pTVar12->field_0x4 - *(float *)&local_170->field_0x4;
          fVar23 = *(float *)pTVar12 - *(float *)local_170;
          fVar22 = *(float *)pTVar11 - *(float *)local_170;
          fVar20 = *(float *)&pTVar11->field_0x8 - *(float *)&local_170->field_0x8;
          fVar34 = *(float *)&pTVar12->field_0x8 - *(float *)&local_170->field_0x8;
          fVar27 = *(float *)&pTVar11->field_0x4 - *(float *)&local_170->field_0x4;
          fVar30 = fVar18 * fVar23 + fVar24 * fVar22;
          fVar25 = fVar18 * local_178 + fVar24 * fVar27;
          fVar28 = fVar18 * fVar34 + fVar24 * fVar20;
          local_170 = (TVector<float,3> *)CONCAT44(local_170._4_4_,fVar23);
          fVar24 = *(float *)(pFVar16 + 8);
          fVar18 = fVar21 * fVar34 + fVar24 * fVar20;
          fVar26 = fVar21 * local_178 + fVar24 * fVar27;
          fVar24 = fVar21 * fVar23 + fVar24 * fVar22;
          local_1c8 = SQRT(fVar30 * fVar30 + fVar25 * fVar25 + fVar28 * fVar28);
          if (local_1c8 <= __real_322bcc77) {
            fVar21 = 0.0;
          }
          else {
            fVar21 = fVar6 / local_1c8;
          }
          fStack_1c4 = SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar18 * fVar18);
          if (fStack_1c4 <= __real_322bcc77) {
            fVar23 = 0.0;
          }
          else {
            fVar23 = fVar6 / fStack_1c4;
          }
          pFVar14 = (local_140->AllocatorInstance).Data;
          local_1c0 = fVar25 * fVar21 * fVar26 * fVar23 + fVar21 * fVar30 * fVar24 * fVar23 +
                      fVar18 * fVar23 * fVar21 * fVar28;
          if (((pFVar14 <= (FScriptContainerElement *)&local_1c8) &&
              ((FScriptContainerElement *)&local_1c8 < pFVar14 + (longlong)local_140->ArrayMax * 0xc
              )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = pTVar8->ArrayNum;
          if (iVar10 == pTVar8->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
          }
          fVar24 = __real_322bcc77;
          pFVar14 = (pTVar8->AllocatorInstance).Data;
          pTVar8->ArrayNum = iVar10 + 1;
          lVar13 = (longlong)iVar10;
          *(ulonglong *)(pFVar14 + lVar13 * 0xc) = CONCAT44(fStack_1c4,local_1c8);
          *(float *)(pFVar14 + lVar13 * 0xc + 8) = local_1c0;
          local_1bc = fVar6;
          if (fVar24 <= *(float *)(pFVar14 + lVar13 * 0xc)) {
            local_1bc = fVar6 / *(float *)(pFVar14 + lVar13 * 0xc);
          }
          fStack_1b8 = fVar6;
          if (fVar24 <= *(float *)(pFVar14 + lVar13 * 0xc + 4)) {
            fStack_1b8 = fVar6 / *(float *)(pFVar14 + lVar13 * 0xc + 4);
          }
          pFVar14 = (pTVar17->AllocatorInstance).Data;
          piVar2 = &(this->StiffnessScales).ArrayMax;
          fVar18 = fVar27 * fVar34 - fVar20 * local_178;
          fVar23 = fVar22 * local_178 - fVar27 * local_170._0_4_;
          fVar21 = fVar20 * local_170._0_4_ - fVar22 * fVar34;
          local_1b4 = SQRT(SQRT(fVar21 * fVar21 + fVar18 * fVar18 + fVar23 * fVar23) *
                           __real_3f000000);
          if (((pFVar14 <= (FScriptContainerElement *)&local_1bc) &&
              ((FScriptContainerElement *)&local_1bc < pFVar14 + (longlong)*piVar2 * 0xc)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = (this->StiffnessScales).ArrayNum;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar17->AllocatorInstance,piVar2);
          }
          uVar32 = _UNK_15076b188;
          uVar31 = ___xmm_3f80000000000000000000003f800000;
          uVar29 = __xmm_80000000800000008000000080000000;
          uVar33 = __xmm_7fffffff7fffffff7fffffff7fffffff;
          lVar13 = (longlong)iVar10;
          (this->StiffnessScales).ArrayNum = iVar10 + 1;
          pFVar14 = (pTVar17->AllocatorInstance).Data;
          *(ulonglong *)(pFVar14 + lVar13 * 0xc) = CONCAT44(fStack_1b8,local_1bc);
          fVar18 = local_1b4;
        }
        else {
          pFVar14 = (pTVar3->AllocatorInstance).Data;
          fVar20 = fVar21 * fVar23 - fVar18 * fVar25;
          fVar22 = (float)((uint)fVar20 & uVar33);
          if (fVar24 <= fVar22) {
            fVar20 = fVar6 / fVar20;
            fStack_114 = fVar23 * fVar20;
            uStack_118 = (uint)(fVar18 * fVar20) ^ uVar29;
            local_120 = fVar21 * fVar20;
            uStack_11c = (uint)(fVar25 * fVar20) ^ uVar29;
            if (((pFVar14 <= (FScriptContainerElement *)&local_120) &&
                ((FScriptContainerElement *)&local_120 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->DeltaUVInverse).ArrayNum;
            fVar20 = local_120;
            uVar19 = uStack_11c;
            uVar15 = uStack_118;
            fVar26 = fStack_114;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar3->AllocatorInstance,piVar1);
              fVar20 = local_120;
              uVar19 = uStack_11c;
              uVar15 = uStack_118;
              fVar26 = fStack_114;
            }
          }
          else {
            local_100 = uVar31;
            uStack_f8 = uVar32;
            if (((pFVar14 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar10 = (this->DeltaUVInverse).ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar3->AllocatorInstance,piVar1);
            }
            fVar20 = (float)local_100;
            uVar19 = local_100._4_4_;
            uVar15 = (uint)uStack_f8;
            fVar26 = uStack_f8._4_4_;
          }
          pTVar8 = local_140;
          (this->DeltaUVInverse).ArrayNum = iVar10 + 1;
          local_1b0 = 0x3f800000;
          uStack_1ac = 0x3f800000;
          uStack_1a8 = 0;
          pFVar14 = (pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(float *)pFVar14 = fVar20;
          *(uint *)(pFVar14 + 4) = uVar19;
          *(uint *)(pFVar14 + 8) = uVar15;
          *(float *)(pFVar14 + 0xc) = fVar26;
          pFVar14 = (local_140->AllocatorInstance).Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_1b0) &&
              ((FScriptContainerElement *)&local_1b0 < pFVar14 + (longlong)local_140->ArrayMax * 0xc
              )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = pTVar8->ArrayNum;
          if (iVar10 == pTVar8->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
          }
          pTVar8->ArrayNum = iVar10 + 1;
          pFVar14 = (pTVar8->AllocatorInstance).Data;
          *(ulonglong *)(pFVar14 + (longlong)iVar10 * 0xc) = CONCAT44(uStack_1ac,local_1b0);
          *(undefined4 *)(pFVar14 + (longlong)iVar10 * 0xc + 8) = uStack_1a8;
          fVar18 = SQRT(fVar18 * fVar18 + fVar23 * fVar23);
          fVar21 = SQRT(fVar21 * fVar21 + fVar25 * fVar25);
          local_1a4 = fVar6;
          if (fVar24 <= fVar18) {
            local_1a4 = fVar6 / fVar18;
          }
          fStack_1a0 = fVar6;
          if (fVar24 <= fVar21) {
            fStack_1a0 = fVar6 / fVar21;
          }
          pFVar14 = (pTVar17->AllocatorInstance).Data;
          piVar2 = &(this->StiffnessScales).ArrayMax;
          local_19c = SQRT(fVar22 * __real_3f000000);
          if (((pFVar14 <= (FScriptContainerElement *)&local_1a4) &&
              ((FScriptContainerElement *)&local_1a4 < pFVar14 + (longlong)*piVar2 * 0xc)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar10 = (this->StiffnessScales).ArrayNum;
          if (iVar10 == *piVar2) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar17->AllocatorInstance,piVar2);
          }
          lVar13 = (longlong)iVar10;
          (this->StiffnessScales).ArrayNum = iVar10 + 1;
          pFVar14 = (pTVar17->AllocatorInstance).Data;
          *(ulonglong *)(pFVar14 + lVar13 * 0xc) = CONCAT44(fStack_1a0,local_1a4);
          fVar18 = local_19c;
        }
        *(float *)(pFVar14 + lVar13 * 0xc + 8) = fVar18;
      }
      local_1d8 = local_1d8 + 1;
      local_180 = local_180 + 1;
      iVar10 = (local_138->MElements).ArrayNum;
    } while ((int)local_1d8 < iVar10);
  }
  return;
}

// FXPBDStretchBiasElementConstraints @ 143f45c90

FXPBDStretchBiasElementConstraints * __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::FXPBDStretchBiasElementConstraints
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TArrayView<float_const_,int> *param_10,TArrayView<float_const_,int> *param_11,
          TVector<float,2> *param_12,TVector<float,2> *param_13,TVector<float,2> *param_14,
          TVector<float,2> *param_15,TVector<float,2> *param_16,TVector<float,2> *param_17,
          bool param_18,bool param_19)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  FXPBDStretchBiasElementConstraints *pFVar7;
  TVector<float,3> local_a8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_98;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_88;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_78;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_68;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_58;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_48 [3];
  
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->ParticleOffset = param_2;
  this->_padding_ = (longlong)&___7FXPBDStretchBiasElementConstraints_Softs_Chaos__6B_;
  this->ParticleCount = param_3;
  iVar1 = (this->Constraints).ArrayNum;
  local_98.DataPtr = (TVector<int,3> *)0x0;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  fVar5 = __real_4b189680;
  fVar4 = __real_447a0000;
  local_98.ArrayNum = iVar1;
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWarp,param_12,param_6,&local_98,param_2,param_3,0x10,__real_447a0000,
             __real_4b189680);
  local_88.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_88.ArrayNum = (this->Constraints).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_88.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWeft,param_13,param_7,&local_88,iVar2,iVar1,0x10,fVar4,fVar5);
  local_78.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_78.ArrayNum = (this->Constraints).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_78.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessBias,param_14,param_8,&local_78,iVar2,iVar1,0x10,fVar4,fVar5);
  local_68.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_68.ArrayNum = (this->Constraints).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_68.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->DampingRatio,param_15,param_9,&local_68,iVar2,iVar1,0x10,(void *)0x0);
  local_58.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = (this->Constraints).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_58.ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,param_16,param_10,&local_58,iVar2,iVar1,0x10,(void *)0x0);
  local_48[0].DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  local_48[0].ArrayNum = (this->Constraints).ArrayNum;
  iVar1 = this->ParticleCount;
  iVar2 = this->ParticleOffset;
  if (local_48[0].ArrayNum < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FXPBDStretchBiasElementConstraints *)(*pcVar3)();
      return pFVar7;
    }
  }
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,param_17,param_11,local_48,iVar2,iVar1,0x10,(void *)0x0);
  iVar1 = (this->Constraints).ArrayNum;
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->DeltaUVInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaUVInverse).ArrayNum = 0;
  (this->DeltaUVInverse).ArrayMax = 0;
  (this->RestStretchLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestStretchLengths).ArrayNum = 0;
  (this->RestStretchLengths).ArrayMax = 0;
  (this->StiffnessScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StiffnessScales).ArrayNum = 0;
  (this->StiffnessScales).ArrayMax = 0;
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->DmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmArray).ArrayNum = 0;
  (this->DmArray).ArrayMax = 0;
  this->bDmInitialized = false;
  (this->RestDmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestDmArray).ArrayNum = 0;
  (this->RestDmArray).ArrayMax = 0;
  this->XPBDAnisoStretchUse3dRestLengthsIndex = -1;
  this->XPBDAnisoStretchStiffnessWarpIndex = -1;
  this->XPBDAnisoStretchStiffnessWeftIndex = -1;
  this->XPBDAnisoStretchStiffnessBiasIndex = -1;
  this->XPBDAnisoStretchDampingIndex = -1;
  this->XPBDAnisoStretchWarpScaleIndex = -1;
  (this->XPBDAnisoStretchWeftScaleIndex).Index = -1;
  local_a8._0_8_ = 0;
  local_a8._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init(&this->Lambdas,&local_a8,iVar1);
  InitConstraintsAndRestData<Chaos::Softs::FSolverParticles>
            (this,param_1,param_4,param_5,param_18,param_19);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDStretchBiasElementConstraints @ 143f460d0

FXPBDStretchBiasElementConstraints * __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::FXPBDStretchBiasElementConstraints
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_6,FCollectionPropertyConstFacade *param_7,bool param_8)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  FXPBDStretchBiasElementConstraints *pFVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector<float,3> local_2c8;
  FCollectionPropertyConstFacade *local_2b8;
  TVector<float,2> local_2b0;
  FCollectionPropertyConstFacade *local_2a8;
  TVector<float,2> local_2a0;
  FCollectionPropertyConstFacade *local_298;
  TVector<float,2> local_290;
  FCollectionPropertyConstFacade *local_288;
  TVector<float,2> local_280;
  FCollectionPropertyConstFacade *local_278;
  TVector<float,2> local_270;
  FCollectionPropertyConstFacade *local_268;
  TVector<float,2> local_260;
  TArrayView<float_const_,int> local_258;
  TArrayView<float_const_,int> local_248;
  TArrayView<float_const_,int> local_238;
  TArrayView<float_const_,int> local_228;
  TArrayView<float_const_,int> local_218;
  TArrayView<float_const_,int> local_208;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1f8;
  FString local_1e8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1d8;
  FString local_1c8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1b8;
  FString local_1a8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_198;
  FString local_188;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_178;
  FString local_168;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88 [5];
  
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FXPBDStretchBiasElementConstraints_Softs_Chaos__6B_;
  this->ParticleOffset = param_2;
  this->ParticleCount = param_3;
  iVar10 = (this->Constraints).ArrayNum;
  local_1f8.DataPtr = (TVector<int,3> *)0x0;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1f8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessWarpName,&local_138);
  pFVar7 = ::FString::FString(&local_d8,pFVar7);
  local_2b8 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_1e8,&XPBDAnisoStretchStiffnessWarpName,(<lambda_1> *)&local_2b8,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_1e8);
  fVar3 = __real_4b189680;
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_258.DataPtr = (float *)0x0;
    local_258._8_8_ = (ulonglong)(uint)local_258._12_4_ << 0x20;
  }
  else {
    local_258.DataPtr = *(float **)&pTVar8->field_0x10;
    local_258._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessWarpName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    local_2b0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
    local_2b0._4_4_ = fVar11;
    local_2b0._0_4_ = fVar12;
  }
  fVar11 = __real_447a0000;
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWarp,&local_2b0,&local_258,&local_1f8,param_2,param_3,0x10,
             __real_447a0000,fVar3);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  local_1d8.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1d8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessWeftName,&local_128);
  pFVar7 = ::FString::FString(&local_c8,pFVar7);
  local_2a8 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_1c8,&XPBDAnisoStretchStiffnessWeftName,(<lambda_1> *)&local_2a8,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_1c8);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_248.DataPtr = (float *)0x0;
    local_248._8_8_ = (ulonglong)(uint)local_248._12_4_ << 0x20;
  }
  else {
    local_248.DataPtr = *(float **)&pTVar8->field_0x10;
    local_248._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessWeftName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    local_2a0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
    local_2a0._4_4_ = fVar12;
    local_2a0._0_4_ = fVar13;
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWeft,&local_2a0,&local_248,&local_1d8,iVar1,iVar5,0x10,fVar11,fVar3);
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  local_1b8.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1b8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessBiasName,&local_118);
  pFVar7 = ::FString::FString(&local_b8,pFVar7);
  local_298 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_1a8,&XPBDAnisoStretchStiffnessBiasName,(<lambda_1> *)&local_298,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_1a8);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_238.DataPtr = (float *)0x0;
    local_238._8_8_ = (ulonglong)(uint)local_238._12_4_ << 0x20;
  }
  else {
    local_238.DataPtr = *(float **)&pTVar8->field_0x10;
    local_238._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessBiasName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    local_290 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
    local_290._4_4_ = fVar12;
    local_290._0_4_ = fVar13;
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessBias,&local_290,&local_238,&local_1b8,iVar1,iVar5,0x10,fVar11,fVar3);
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_198.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_198.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchDampingName,&local_108);
  pFVar7 = ::FString::FString(&local_a8,pFVar7);
  local_288 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_188,&XPBDAnisoStretchDampingName,(<lambda_1> *)&local_288,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_188);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_228.DataPtr = (float *)0x0;
    local_228._8_8_ = (ulonglong)(uint)local_228._12_4_ << 0x20;
  }
  else {
    local_228.DataPtr = *(float **)&pTVar8->field_0x10;
    local_228._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchDampingName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
  }
  if (fVar11 <= fVar12) {
    fVar12 = fVar11;
  }
  if (fVar11 <= fVar13) {
    fVar13 = fVar11;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  local_280._4_4_ = fVar13;
  local_280._0_4_ = fVar12;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->DampingRatio,&local_280,&local_228,&local_198,iVar1,iVar5,0x10,(void *)0x0);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_178.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_178.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchWarpScaleName,&local_f8);
  pFVar7 = ::FString::FString(&local_98,pFVar7);
  local_278 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_168,&XPBDAnisoStretchWarpScaleName,(<lambda_1> *)&local_278,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_168);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_218.DataPtr = (float *)0x0;
    local_218._8_8_ = (ulonglong)(uint)local_218._12_4_ << 0x20;
  }
  else {
    local_218.DataPtr = *(float **)&pTVar8->field_0x10;
    local_218._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchWarpScaleName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar11 = 1.0;
    fVar12 = 1.0;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
  }
  if (fVar3 <= fVar11) {
    fVar11 = fVar3;
  }
  if (fVar3 <= fVar12) {
    fVar12 = fVar3;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_270._4_4_ = fVar12;
  local_270._0_4_ = fVar11;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_270,&local_218,&local_178,iVar1,iVar5,0x10,(void *)0x0);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  local_158.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_158.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchWeftScaleName,&local_e8);
  pFVar7 = ::FString::FString(local_88,pFVar7);
  local_268 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_148,&XPBDAnisoStretchWeftScaleName,(<lambda_1> *)&local_268,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_148);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_208.DataPtr = (float *)0x0;
    local_208._8_8_ = (ulonglong)(uint)local_208._12_4_ << 0x20;
  }
  else {
    local_208.DataPtr = *(float **)&pTVar8->field_0x10;
    local_208._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchWeftScaleName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar11 = 1.0;
    fVar12 = 1.0;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->LowValueArray);
  }
  if (fVar3 <= fVar11) {
    fVar11 = fVar3;
  }
  if (fVar3 <= fVar12) {
    fVar12 = fVar3;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_260._4_4_ = fVar12;
  local_260._0_4_ = fVar11;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_260,&local_208,&local_158,iVar1,iVar5,0x10,(void *)0x0);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->DeltaUVInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaUVInverse).ArrayNum = 0;
  (this->DeltaUVInverse).ArrayMax = 0;
  (this->RestStretchLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestStretchLengths).ArrayNum = 0;
  (this->RestStretchLengths).ArrayMax = 0;
  (this->StiffnessScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StiffnessScales).ArrayNum = 0;
  (this->StiffnessScales).ArrayMax = 0;
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->DmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmArray).ArrayNum = 0;
  (this->DmArray).ArrayMax = 0;
  this->bDmInitialized = false;
  (this->RestDmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestDmArray).ArrayNum = 0;
  (this->RestDmArray).ArrayMax = 0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchUse3dRestLengthsName);
  iVar10 = -1;
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchUse3dRestLengthsIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessWarpName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessWarpIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessWeftName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessWeftIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchStiffnessBiasName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessBiasIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchDampingName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchDampingIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchWarpScaleName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchWarpScaleIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchWeftScaleName);
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
  }
  (this->XPBDAnisoStretchWeftScaleIndex).Index = iVar10;
  local_2c8._0_8_ = 0;
  local_2c8._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&this->Lambdas,&local_2c8,(this->Constraints).ArrayNum);
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_7->KeyNameIndices,XPBDAnisoStretchUse3dRestLengthsName);
  if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) {
    bVar4 = true;
  }
  else {
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_7,*piVar9,&param_7->LowValueArray);
  }
  InitConstraintsAndRestData<Chaos::Softs::FSolverParticles>
            (this,param_1,param_4,param_5,bVar4,param_8);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDStretchBiasElementConstraints @ 143f46d40

FXPBDStretchBiasElementConstraints * __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::FXPBDStretchBiasElementConstraints
          (FXPBDStretchBiasElementConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,FCollectionPropertyConstFacade *param_5,bool param_6)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  FXPBDStretchBiasElementConstraints *pFVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector<float,3> local_2d8;
  FCollectionPropertyConstFacade *local_2c8;
  TVector<float,2> local_2c0;
  FCollectionPropertyConstFacade *local_2b8;
  TVector<float,2> local_2b0;
  FCollectionPropertyConstFacade *local_2a8;
  TVector<float,2> local_2a0;
  FCollectionPropertyConstFacade *local_298;
  TVector<float,2> local_290;
  FCollectionPropertyConstFacade *local_288;
  TVector<float,2> local_280;
  FCollectionPropertyConstFacade *local_278;
  TVector<float,2> local_270;
  TArrayView<float_const_,int> local_268;
  TArrayView<float_const_,int> local_258;
  TArrayView<float_const_,int> local_248;
  TArrayView<float_const_,int> local_238;
  TArrayView<float_const_,int> local_228;
  TArrayView<float_const_,int> local_218;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_208;
  FString local_1f8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1e8;
  FString local_1d8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1c8;
  FString local_1b8;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_1a8;
  FString local_198;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_188;
  FString local_178;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98 [5];
  
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  this->ParticleOffset = 0;
  this->_padding_ = (longlong)&___7FXPBDStretchBiasElementConstraints_Softs_Chaos__6B_;
  iVar10 = *(int *)&param_1->field_0x14;
  this->ParticleCount = iVar10;
  iVar5 = (this->Constraints).ArrayNum;
  local_208.DataPtr = (TVector<int,3> *)0x0;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_208.ArrayNum = iVar5;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessWarpName,&local_148);
  pFVar7 = ::FString::FString(&local_e8,pFVar7);
  local_2c8 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_1f8,&XPBDAnisoStretchStiffnessWarpName,(<lambda_1> *)&local_2c8,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_1f8);
  fVar3 = __real_4b189680;
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_268.DataPtr = (float *)0x0;
    local_268._8_8_ = (ulonglong)(uint)local_268._12_4_ << 0x20;
  }
  else {
    local_268.DataPtr = *(float **)&pTVar8->field_0x10;
    local_268._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessWarpName);
  if ((piVar9 == (int *)0x0) || (iVar5 = *piVar9, iVar5 == -1)) {
    local_2c0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar5,&param_5->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar5,&param_5->LowValueArray);
    local_2c0._4_4_ = fVar11;
    local_2c0._0_4_ = fVar12;
  }
  fVar11 = __real_447a0000;
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWarp,&local_2c0,&local_268,&local_208,0,iVar10,0x10,__real_447a0000,
             fVar3);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_1e8.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1e8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessWeftName,&local_138);
  pFVar7 = ::FString::FString(&local_d8,pFVar7);
  local_2b8 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_1d8,&XPBDAnisoStretchStiffnessWeftName,(<lambda_1> *)&local_2b8,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_1d8);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_258.DataPtr = (float *)0x0;
    local_258._8_8_ = (ulonglong)(uint)local_258._12_4_ << 0x20;
  }
  else {
    local_258.DataPtr = *(float **)&pTVar8->field_0x10;
    local_258._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessWeftName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    local_2b0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->LowValueArray);
    local_2b0._4_4_ = fVar12;
    local_2b0._0_4_ = fVar13;
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessWeft,&local_2b0,&local_258,&local_1e8,iVar1,iVar5,0x10,fVar11,fVar3);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  local_1c8.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1c8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchStiffnessBiasName,&local_128);
  pFVar7 = ::FString::FString(&local_c8,pFVar7);
  local_2a8 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_1b8,&XPBDAnisoStretchStiffnessBiasName,(<lambda_1> *)&local_2a8,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_1b8);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_248.DataPtr = (float *)0x0;
    local_248._8_8_ = (ulonglong)(uint)local_248._12_4_ << 0x20;
  }
  else {
    local_248.DataPtr = *(float **)&pTVar8->field_0x10;
    local_248._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessBiasName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    local_2a0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->HighValueArray);
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->LowValueArray);
    local_2a0._4_4_ = fVar12;
    local_2a0._0_4_ = fVar13;
  }
  FPBDStiffness::FPBDStiffness<3>
            (&this->StiffnessBias,&local_2a0,&local_248,&local_1c8,iVar1,iVar5,0x10,fVar11,fVar3);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  local_1a8.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_1a8.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchDampingName,&local_118);
  pFVar7 = ::FString::FString(&local_b8,pFVar7);
  local_298 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_198,&XPBDAnisoStretchDampingName,(<lambda_1> *)&local_298,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_198);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_238.DataPtr = (float *)0x0;
    local_238._8_8_ = (ulonglong)(uint)local_238._12_4_ << 0x20;
  }
  else {
    local_238.DataPtr = *(float **)&pTVar8->field_0x10;
    local_238._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchDampingName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar13 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->LowValueArray);
  }
  if (fVar11 <= fVar12) {
    fVar12 = fVar11;
  }
  if (fVar11 <= fVar13) {
    fVar13 = fVar11;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  local_290._4_4_ = fVar13;
  local_290._0_4_ = fVar12;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->DampingRatio,&local_290,&local_238,&local_1a8,iVar1,iVar5,0x10,(void *)0x0);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_188.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_188.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchWarpScaleName,&local_108);
  pFVar7 = ::FString::FString(&local_a8,pFVar7);
  local_288 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_178,&XPBDAnisoStretchWarpScaleName,(<lambda_1> *)&local_288,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_178);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_228.DataPtr = (float *)0x0;
    local_228._8_8_ = (ulonglong)(uint)local_228._12_4_ << 0x20;
  }
  else {
    local_228.DataPtr = *(float **)&pTVar8->field_0x10;
    local_228._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchWarpScaleName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar11 = 1.0;
    fVar12 = 1.0;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->LowValueArray);
  }
  if (fVar3 <= fVar11) {
    fVar11 = fVar3;
  }
  if (fVar3 <= fVar12) {
    fVar12 = fVar3;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_280._4_4_ = fVar12;
  local_280._0_4_ = fVar11;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_280,&local_228,&local_188,iVar1,iVar5,0x10,(void *)0x0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  local_168.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
  iVar10 = (this->Constraints).ArrayNum;
  iVar5 = this->ParticleCount;
  iVar1 = this->ParticleOffset;
  if (iVar10 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FXPBDStretchBiasElementConstraints *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_168.ArrayNum = iVar10;
  pFVar7 = ::FName::ToString(&XPBDAnisoStretchWeftScaleName,&local_f8);
  pFVar7 = ::FString::FString(local_98,pFVar7);
  local_278 = param_5;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_5,&local_158,&XPBDAnisoStretchWeftScaleName,(<lambda_1> *)&local_278,pFVar7,
             (int *)0x0);
  pTVar8 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                   *)param_4,&local_158);
  if (pTVar8 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_218.DataPtr = (float *)0x0;
    local_218._8_8_ = (ulonglong)(uint)local_218._12_4_ << 0x20;
  }
  else {
    local_218.DataPtr = *(float **)&pTVar8->field_0x10;
    local_218._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchWeftScaleName);
  if ((piVar9 == (int *)0x0) || (iVar10 = *piVar9, iVar10 == -1)) {
    fVar11 = 1.0;
    fVar12 = 1.0;
  }
  else {
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_5,iVar10,&param_5->LowValueArray);
  }
  if (fVar3 <= fVar11) {
    fVar11 = fVar3;
  }
  if (fVar3 <= fVar12) {
    fVar12 = fVar3;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_270._4_4_ = fVar12;
  local_270._0_4_ = fVar11;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_270,&local_218,&local_168,iVar1,iVar5,0x10,(void *)0x0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->DeltaUVInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeltaUVInverse).ArrayNum = 0;
  (this->DeltaUVInverse).ArrayMax = 0;
  (this->RestStretchLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestStretchLengths).ArrayNum = 0;
  (this->RestStretchLengths).ArrayMax = 0;
  (this->StiffnessScales).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StiffnessScales).ArrayNum = 0;
  (this->StiffnessScales).ArrayMax = 0;
  (this->Measure).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Measure).ArrayNum = 0;
  (this->Measure).ArrayMax = 0;
  (this->DmInverse).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmInverse).ArrayNum = 0;
  (this->DmInverse).ArrayMax = 0;
  (this->DmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DmArray).ArrayNum = 0;
  (this->DmArray).ArrayMax = 0;
  this->bDmInitialized = false;
  (this->RestDmArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestDmArray).ArrayNum = 0;
  (this->RestDmArray).ArrayMax = 0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchUse3dRestLengthsName);
  iVar10 = -1;
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchUse3dRestLengthsIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessWarpName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessWarpIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessWeftName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessWeftIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchStiffnessBiasName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchStiffnessBiasIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchDampingName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchDampingIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchWarpScaleName);
  if (piVar9 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar9;
  }
  (this->XPBDAnisoStretchWarpScaleIndex).Index = iVar5;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchWeftScaleName);
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
  }
  (this->XPBDAnisoStretchWeftScaleIndex).Index = iVar10;
  local_2d8._0_8_ = 0;
  local_2d8._8_4_ = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&this->Lambdas,&local_2d8,(this->Constraints).ArrayNum);
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_5->KeyNameIndices,XPBDAnisoStretchUse3dRestLengthsName);
  if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) {
    bVar4 = true;
  }
  else {
    bVar4 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_5,*piVar9,&param_5->LowValueArray);
  }
  InitConstraintsAndRestData<Chaos::Softs::FSolverParticlesRange>
            (this,param_1,param_2,param_3,bVar4,param_6);
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// ~FXPBDStretchBiasElementConstraints @ 143f4b3b0

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::~FXPBDStretchBiasElementConstraints
          (FXPBDStretchBiasElementConstraints *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FXPBDStretchBiasElementConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->RestDmArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DmArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DmInverse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Measure).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StiffnessScales).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestStretchLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeltaUVInverse).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeftScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WeftScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpScale).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpScale).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).Table.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).Indices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->StiffnessBias)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->StiffnessBias)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->StiffnessWeft)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->StiffnessWeft)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->StiffnessWarp)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->StiffnessWarp)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 143f501a0

void __thiscall
`Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential'::__l11::<lambda_1>
::operator()(void *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FXPBDStretchBiasElementConstraints *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float local_200 [4];
  longlong local_1f0;
  longlong local_1e8;
  float local_1e0 [4];
  float local_1d0 [4];
  float local_1c0 [4];
  float local_1b0;
  longlong *local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  longlong *local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128 [4];
  float local_118 [4];
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  
  lVar21 = 0;
  lVar5 = *(longlong *)((longlong)this + 8);
  uVar28 = 0;
  uVar27 = **(int **)this + param_1;
  uVar26 = ~uVar27 >> 0x1f;
  uVar13 = uVar28;
  if ((int)uVar27 < *(int *)(lVar5 + 0x10)) {
    uVar13 = uVar26;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  lVar15 = (longlong)(int)uVar27;
  lVar5 = *(longlong *)(lVar5 + 8);
  uVar13 = *(uint *)(lVar5 + lVar15 * 0xc);
  uVar3 = *(uint *)(lVar5 + 4 + lVar15 * 0xc);
  uVar4 = *(uint *)(lVar5 + 8 + lVar15 * 0xc);
  fVar29 = Chaos::TDynamicParticles<float,3>::InvM
                     (*(TDynamicParticles<float,3> **)((longlong)this + 0x10),uVar13);
  fVar54 = 0.0;
  if (((fVar29 != 0.0) ||
      (fVar29 = Chaos::TDynamicParticles<float,3>::InvM
                          (*(TDynamicParticles<float,3> **)((longlong)this + 0x10),uVar3),
      fVar29 != 0.0)) ||
     (fVar29 = Chaos::TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)((longlong)this + 0x10),uVar4),
     fVar29 != 0.0)) {
    pFVar6 = *(FXPBDStretchBiasElementConstraints **)((longlong)this + 8);
    pTVar16 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 0x10),uVar4)
    ;
    pTVar17 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)((longlong)this + 0x10),uVar3)
    ;
    pTVar18 = Chaos::Softs::FSolverParticles::P
                        (*(FSolverParticles **)((longlong)this + 0x10),uVar13);
    Chaos::Softs::FXPBDStretchBiasElementConstraints::CalculateUVStretch
              (pFVar6,uVar27,pTVar18,pTVar17,pTVar16,(TVector<float,3> *)&local_148,
               (TVector<float,3> *)&local_138);
    fVar51 = SQRT(local_148 * local_148 + local_144 * local_144 + local_140 * local_140);
    fVar29 = SQRT(local_138 * local_138 + local_134 * local_134 + local_130 * local_130);
    if (fVar51 <= __real_322bcc77) {
      fVar57 = 0.0;
    }
    else {
      fVar57 = __real_3f800000 / fVar51;
    }
    if (fVar29 <= __real_322bcc77) {
      fVar55 = 0.0;
    }
    else {
      fVar55 = __real_3f800000 / fVar29;
    }
    lVar5 = *(longlong *)((longlong)this + 8);
    lVar15 = (longlong)(int)uVar27;
    local_200[1] = fVar57 * local_144;
    uVar22 = uVar28;
    if ((int)uVar27 < *(int *)(lVar5 + 0x1d8)) {
      uVar22 = uVar26;
    }
    local_200[2] = fVar57 * local_140;
    local_1e0[1] = fVar55 * local_134;
    local_1e0[2] = fVar55 * local_130;
    local_200[0] = local_148 * fVar57;
    local_1e0[0] = local_138 * fVar55;
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar19 = *(longlong *)((longlong)this + 8);
    fVar35 = *(float *)(*(longlong *)(lVar5 + 0x1d0) + lVar15 * 0xc);
    uVar14 = 0;
    fVar36 = **(float **)((longlong)this + 0x18);
    uVar22 = uVar14;
    if ((int)uVar27 < *(int *)(lVar19 + 0x1d8)) {
      uVar22 = uVar26;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_19c = fVar29 - *(float *)(*(longlong *)(lVar19 + 0x1d0) + 4 + lVar15 * 0xc) *
                         **(float **)((longlong)this + 0x20);
    uVar22 = uVar14;
    if ((int)uVar27 < *(int *)(*(longlong *)((longlong)this + 8) + 0x1d8)) {
      uVar22 = uVar26;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar22 = uVar14;
    if ((int)uVar27 < *(int *)(lVar5 + 0x1c8)) {
      uVar22 = uVar26;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_1f0 = *(longlong *)(lVar5 + 0x1c0);
    local_1e8 = lVar15 * 0x10;
    fVar29 = *(float *)(local_1e8 + local_1f0);
    fVar41 = *(float *)(local_1e8 + 4 + local_1f0);
    local_180 = fVar29 * local_200[1];
    local_190 = fVar29 * local_200[2];
    local_16c = fVar41 * local_200[1];
    local_168 = fVar41 * local_200[2];
    local_170 = local_200[0] * fVar41;
    local_198 = local_200[0] * fVar29;
    fVar30 = (float)((uint)local_198 ^ __xmm_80000000800000008000000080000000) - local_170;
    local_188 = (float)((uint)local_180 ^ __xmm_80000000800000008000000080000000) - local_16c;
    fVar43 = *(float *)(local_1e8 + 8 + local_1f0);
    local_184 = fVar43 * local_1e0[1];
    local_18c = fVar43 * local_1e0[0];
    local_178 = (longlong *)
                CONCAT44(local_178._4_4_,
                         (float)((uint)local_190 ^ __xmm_80000000800000008000000080000000) -
                         local_168);
    fVar45 = fVar43 * local_1e0[2];
    fVar46 = *(float *)(local_1e8 + 0xc + local_1f0);
    fVar47 = fVar46 * local_1e0[1];
    local_164 = fVar46 * local_1e0[0];
    local_160 = fVar46 * local_1e0[2];
    local_158 = (float)((uint)local_18c ^ __xmm_80000000800000008000000080000000) - local_164;
    local_150 = (float)((uint)local_184 ^ __xmm_80000000800000008000000080000000) - fVar47;
    local_1a8 = (longlong *)
                CONCAT44(local_1a8._4_4_,
                         (float)((uint)fVar45 ^ __xmm_80000000800000008000000080000000) - local_160)
    ;
    plVar7 = *(longlong **)((longlong)this + 0x28);
    uVar24 = uVar3 - **(int **)((longlong)this + 0x30);
    local_1d0[0] = local_200[0] * fVar55 * fVar43 + fVar57 * local_1e0[0] * fVar29;
    uVar22 = uVar14;
    if ((int)uVar24 < (int)plVar7[1]) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    local_1c0[0] = local_200[0] * fVar55 * fVar46 + fVar57 * local_1e0[0] * fVar41;
    local_1d0[1] = fVar55 * local_200[1] * fVar43 + fVar57 * local_1e0[1] * fVar29;
    fVar37 = fVar55 * local_200[1] * fVar46 + fVar57 * local_1e0[1] * fVar41;
    fVar50 = 0.0;
    fVar52 = 0.0;
    local_1c0[1] = fVar37;
    local_1d0[2] = fVar55 * local_200[2] * fVar43 + fVar57 * local_1e0[2] * fVar29;
    fVar41 = fVar55 * local_200[2] * fVar46 + fVar57 * local_1e0[2] * fVar41;
    fVar29 = (float)((uint)local_1d0[1] ^ __xmm_80000000800000008000000080000000);
    local_194 = (float)((uint)local_1d0[0] ^ __xmm_80000000800000008000000080000000) - local_1c0[0];
    fVar43 = (float)((uint)local_1d0[2] ^ __xmm_80000000800000008000000080000000);
    local_1c0[2] = fVar41;
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    plVar8 = *(longlong **)((longlong)this + 0x28);
    lVar19 = (longlong)(int)uVar24;
    lVar5 = *plVar7;
    uVar24 = uVar13 - **(int **)((longlong)this + 0x30);
    uVar22 = uVar14;
    if ((int)uVar24 < (int)plVar8[1]) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar20 = (longlong)(int)uVar24;
    lVar25 = (longlong)(int)uVar4;
    lVar9 = *plVar8;
    local_128[0] = *(float *)(lVar5 + lVar19 * 0xc) - *(float *)(lVar9 + lVar20 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x28);
    local_128[1] = *(float *)(lVar5 + 4 + lVar19 * 0xc) - *(float *)(lVar9 + 4 + lVar20 * 0xc);
    uVar22 = uVar4 - **(int **)((longlong)this + 0x30);
    local_128[2] = *(float *)(lVar5 + 8 + lVar19 * 0xc) - *(float *)(lVar9 + 8 + lVar20 * 0xc);
    if ((int)uVar22 < (int)plVar7[1]) {
      uVar14 = ~uVar22 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar19 = (longlong)(int)uVar22;
    lVar5 = *plVar7;
    plVar7 = *(longlong **)((longlong)this + 0x28);
    uVar24 = uVar13 - **(int **)((longlong)this + 0x30);
    uVar14 = 0;
    uVar22 = uVar14;
    if ((int)uVar24 < (int)plVar7[1]) {
      uVar22 = ~uVar24 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar20 = (longlong)(int)uVar24;
    lVar9 = *plVar7;
    local_118[0] = *(float *)(lVar5 + lVar19 * 0xc) - *(float *)(lVar9 + lVar20 * 0xc);
    local_118[1] = *(float *)(lVar5 + 4 + lVar19 * 0xc) - *(float *)(lVar9 + 4 + lVar20 * 0xc);
    local_118[2] = *(float *)(lVar5 + 8 + lVar19 * 0xc) - *(float *)(lVar9 + 8 + lVar20 * 0xc);
    do {
      fVar46 = *(float *)((longlong)local_128 + lVar21);
      fVar56 = *(float *)((longlong)local_118 + lVar21);
      pfVar10 = (float *)((longlong)local_1e0 + lVar21);
      fVar54 = fVar46 * *(float *)((longlong)local_200 + lVar21) * *(float *)(local_1e8 + local_1f0)
               + fVar54 +
               fVar56 * *(float *)((longlong)local_200 + lVar21) *
               *(float *)(local_1e8 + 4 + local_1f0);
      pfVar1 = (float *)((longlong)local_1d0 + lVar21);
      pfVar2 = (float *)((longlong)local_1c0 + lVar21);
      lVar21 = lVar21 + 4;
      fVar52 = fVar46 * *pfVar1 + fVar52 + fVar56 * *pfVar2;
      fVar50 = *pfVar10 * fVar46 * *(float *)(local_1e8 + 8 + local_1f0) + fVar50 +
               *pfVar10 * fVar56 * *(float *)(local_1e8 + 0xc + local_1f0);
    } while (lVar21 < 0xc);
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar22 = uVar14;
    if ((int)uVar27 < *(int *)(lVar5 + 0x1e8)) {
      uVar22 = uVar26;
    }
    if ((uVar22 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pfVar10 = *(float **)((longlong)this + 0x38);
    lVar5 = *(longlong *)(lVar5 + 0x1e0);
    pFVar6 = *(FXPBDStretchBiasElementConstraints **)((longlong)this + 8);
    local_15c = pfVar10[2] * *(float *)(lVar5 + 8 + lVar15 * 0xc);
    fVar46 = pfVar10[1] * *(float *)(lVar5 + 4 + lVar15 * 0xc);
    fVar56 = *pfVar10 * *(float *)(lVar5 + lVar15 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x28);
    uVar22 = uVar4 - **(int **)((longlong)this + 0x30);
    uVar26 = uVar14;
    if ((int)uVar22 < (int)plVar7[1]) {
      uVar26 = ~uVar22 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar21 = (longlong)(int)uVar3;
    lVar5 = *plVar7;
    plVar7 = *(longlong **)((longlong)this + 0x28);
    uVar24 = uVar3 - **(int **)((longlong)this + 0x30);
    uVar26 = uVar14;
    if ((int)uVar24 < (int)plVar7[1]) {
      uVar26 = ~uVar24 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar15 = *plVar7;
    lVar19 = (longlong)(int)uVar13;
    plVar7 = *(longlong **)((longlong)this + 0x28);
    uVar23 = uVar13 - **(int **)((longlong)this + 0x30);
    uVar26 = uVar14;
    if ((int)uVar23 < (int)plVar7[1]) {
      uVar26 = ~uVar23 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    Chaos::Softs::FXPBDStretchBiasElementConstraints::CalculateUVStretch
              (pFVar6,uVar27,(TVector<float,3> *)(*plVar7 + (longlong)(int)uVar23 * 0xc),
               (TVector<float,3> *)(lVar15 + (longlong)(int)uVar24 * 0xc),
               (TVector<float,3> *)(lVar5 + (longlong)(int)uVar22 * 0xc),
               (TVector<float,3> *)&local_108,(TVector<float,3> *)&local_f8);
    fVar49 = local_15c;
    local_1b0 = *(float *)(local_1e8 + 4 + local_1f0);
    fVar44 = *(float *)(local_1e8 + local_1f0);
    fVar48 = local_1b0 * fVar57 * local_108;
    fVar40 = fVar44 * fVar57 * local_108;
    local_154 = local_1b0 * fVar57 * local_104;
    fVar42 = fVar44 * fVar57 * local_104;
    local_1b0 = local_1b0 * fVar57 * local_100;
    fVar44 = fVar44 * fVar57 * local_100;
    fVar57 = *(float *)(local_1e8 + 0xc + local_1f0);
    local_1a0 = (float)((uint)fVar40 ^ __xmm_80000000800000008000000080000000) - fVar48;
    fVar38 = (float)((uint)fVar42 ^ __xmm_80000000800000008000000080000000) - local_154;
    fVar31 = (float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000) - local_1b0;
    fVar53 = *(float *)(local_1e8 + 8 + local_1f0);
    fVar32 = fVar53 * fVar55 * local_f0;
    fVar39 = fVar53 * fVar55 * local_f4;
    fVar33 = fVar57 * fVar55 * local_f8;
    fVar53 = fVar53 * fVar55 * local_f8;
    fVar58 = fVar57 * fVar55 * local_f0;
    fVar34 = (float)((uint)fVar39 ^ __xmm_80000000800000008000000080000000);
    fVar57 = fVar57 * fVar55 * local_f4;
    local_1f0 = CONCAT44(local_1f0._4_4_,fVar53);
    fVar53 = (float)((uint)fVar53 ^ __xmm_80000000800000008000000080000000);
    local_1e8 = CONCAT44(local_1e8._4_4_,fVar57);
    fVar55 = (float)((uint)fVar32 ^ __xmm_80000000800000008000000080000000);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar54 = fVar54 * fVar56;
    fVar56 = fVar56 * (fVar51 - fVar35 * fVar36);
    uVar27 = ~uVar13 >> 0x1f;
    fVar51 = fVar54 * local_188;
    fVar35 = fVar54 * local_178._0_4_;
    uVar26 = uVar14;
    if ((int)uVar13 < (int)plVar7[1]) {
      uVar26 = uVar27;
    }
    local_178 = plVar7;
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar50 = fVar46 * fVar50;
    lVar5 = *local_178;
    fVar36 = fVar50 * local_158;
    *(float *)(lVar5 + lVar19 * 0xc) =
         fVar56 * fVar40 + fVar54 * fVar30 + *(float *)(lVar5 + lVar19 * 0xc);
    fVar30 = fVar56 * local_154;
    *(float *)(lVar5 + 4 + lVar19 * 0xc) =
         fVar56 * fVar42 + fVar51 + *(float *)(lVar5 + 4 + lVar19 * 0xc);
    fVar51 = fVar50 * local_150;
    fVar40 = fVar56 * local_1b0;
    *(float *)(lVar5 + 8 + lVar19 * 0xc) =
         fVar56 * fVar44 + fVar35 + *(float *)(lVar5 + 8 + lVar19 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar35 = fVar50 * local_1a8._0_4_;
    uVar26 = uVar14;
    if ((int)uVar13 < (int)plVar7[1]) {
      uVar26 = uVar27;
    }
    local_1a8 = plVar7;
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar49 = fVar49 * fVar52;
    lVar5 = *local_1a8;
    fVar52 = fVar49 * local_194;
    *(float *)(lVar5 + lVar19 * 0xc) = fVar56 * fVar48 + fVar36 + *(float *)(lVar5 + lVar19 * 0xc);
    fVar36 = fVar56 * local_1a0;
    *(float *)(lVar5 + 4 + lVar19 * 0xc) = fVar30 + fVar51 + *(float *)(lVar5 + 4 + lVar19 * 0xc);
    *(float *)(lVar5 + 8 + lVar19 * 0xc) = fVar40 + fVar35 + *(float *)(lVar5 + 8 + lVar19 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    if ((int)uVar13 < (int)plVar7[1]) {
      uVar14 = uVar27;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar46 = fVar46 * local_19c;
    fVar51 = fVar54 * local_198;
    uVar27 = ~uVar3 >> 0x1f;
    lVar5 = *plVar7;
    *(float *)(lVar5 + 4 + lVar19 * 0xc) =
         fVar56 * fVar38 + fVar49 * (fVar29 - fVar37) + *(float *)(lVar5 + 4 + lVar19 * 0xc);
    *(float *)(lVar5 + lVar19 * 0xc) = fVar36 + fVar52 + *(float *)(lVar5 + lVar19 * 0xc);
    *(float *)(lVar5 + 8 + lVar19 * 0xc) =
         fVar31 * fVar56 + fVar49 * (fVar43 - fVar41) + *(float *)(lVar5 + 8 + lVar19 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar35 = (float)local_1f0 * fVar46;
    uVar26 = 0;
    fVar29 = fVar54 * local_180;
    uVar13 = uVar26;
    if ((int)uVar3 < (int)plVar7[1]) {
      uVar13 = uVar27;
    }
    fVar36 = fVar54 * local_190;
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar5 = *plVar7;
    fVar41 = fVar50 * local_18c;
    fVar43 = fVar50 * local_184;
    *(float *)(lVar5 + 8 + lVar21 * 0xc) =
         fVar32 * fVar46 + fVar36 + *(float *)(lVar5 + 8 + lVar21 * 0xc);
    *(float *)(lVar5 + 4 + lVar21 * 0xc) =
         fVar39 * fVar46 + fVar29 + *(float *)(lVar5 + 4 + lVar21 * 0xc);
    *(float *)(lVar5 + lVar21 * 0xc) = fVar35 + fVar51 + *(float *)(lVar5 + lVar21 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar29 = (float)local_1e8 * fVar46;
    uVar13 = uVar26;
    if ((int)uVar3 < (int)plVar7[1]) {
      uVar13 = uVar27;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar51 = fVar49 * local_1d0[0];
    lVar5 = *plVar7;
    fVar35 = local_1d0[2] * fVar49;
    *(float *)(lVar5 + 4 + lVar21 * 0xc) = fVar29 + fVar43 + *(float *)(lVar5 + 4 + lVar21 * 0xc);
    *(float *)(lVar5 + lVar21 * 0xc) = fVar33 * fVar46 + fVar41 + *(float *)(lVar5 + lVar21 * 0xc);
    *(float *)(lVar5 + 8 + lVar21 * 0xc) =
         fVar58 * fVar46 + fVar50 * fVar45 + *(float *)(lVar5 + 8 + lVar21 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar29 = local_1d0[1] * fVar49;
    uVar13 = uVar26;
    if ((int)uVar3 < (int)plVar7[1]) {
      uVar13 = uVar27;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    fVar36 = fVar54 * local_170;
    uVar27 = ~uVar4 >> 0x1f;
    lVar5 = *plVar7;
    *(float *)(lVar5 + 4 + lVar21 * 0xc) =
         fVar29 + (fVar34 - fVar57) * fVar46 + *(float *)(lVar5 + 4 + lVar21 * 0xc);
    fVar29 = fVar54 * local_16c;
    fVar54 = fVar54 * local_168;
    *(float *)(lVar5 + lVar21 * 0xc) =
         (fVar53 - fVar33) * fVar46 + fVar51 + *(float *)(lVar5 + lVar21 * 0xc);
    *(float *)(lVar5 + 8 + lVar21 * 0xc) =
         fVar35 + (fVar55 - fVar58) * fVar46 + *(float *)(lVar5 + 8 + lVar21 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    uVar13 = uVar26;
    if ((int)uVar4 < (int)plVar7[1]) {
      uVar13 = uVar27;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar5 = *plVar7;
    *(float *)(lVar5 + lVar25 * 0xc) = fVar36 + *(float *)(lVar5 + lVar25 * 0xc);
    fVar51 = fVar50 * local_164;
    *(float *)(lVar5 + 4 + lVar25 * 0xc) = fVar29 + *(float *)(lVar5 + 4 + lVar25 * 0xc);
    fVar29 = fVar50 * local_160;
    *(float *)(lVar5 + 8 + lVar25 * 0xc) = fVar54 + *(float *)(lVar5 + 8 + lVar25 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    if ((int)uVar4 < (int)plVar7[1]) {
      uVar26 = uVar27;
    }
    if ((uVar26 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar5 = *plVar7;
    *(float *)(lVar5 + lVar25 * 0xc) = fVar51 + *(float *)(lVar5 + lVar25 * 0xc);
    *(float *)(lVar5 + 4 + lVar25 * 0xc) = fVar50 * fVar47 + *(float *)(lVar5 + 4 + lVar25 * 0xc);
    *(float *)(lVar5 + 8 + lVar25 * 0xc) = fVar29 + *(float *)(lVar5 + 8 + lVar25 * 0xc);
    plVar7 = *(longlong **)((longlong)this + 0x40);
    fVar29 = local_1c0[0] * fVar49;
    fVar54 = local_1c0[1] * fVar49;
    if ((int)uVar4 < (int)plVar7[1]) {
      uVar28 = uVar27;
    }
    fVar49 = local_1c0[2] * fVar49;
    if ((uVar28 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar5 = *plVar7;
    *(float *)(lVar5 + lVar25 * 0xc) = fVar29 + *(float *)(lVar5 + lVar25 * 0xc);
    *(float *)(lVar5 + 4 + lVar25 * 0xc) = fVar54 + *(float *)(lVar5 + 4 + lVar25 * 0xc);
    *(float *)(lVar5 + 8 + lVar25 * 0xc) = fVar49 + *(float *)(lVar5 + 8 + lVar25 * 0xc);
  }
  return;
}

// operator() @ 143f51f60

void __thiscall
`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l45::
<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar1 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar2 = **(float **)((longlong)this + 0x18);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x20),iVar1);
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar3 = **(float **)((longlong)this + 0x28);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x68),iVar1);
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar4 = **(float **)((longlong)this + 0x38);
  }
  else {
    fVar4 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xb0),iVar1);
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x48);
  }
  else {
    fVar5 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xf8),iVar1);
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x58);
  }
  else {
    fVar6 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x130),iVar1);
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x68);
  }
  else {
    fVar7 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x168),iVar1);
  }
  local_68 = fVar3;
  local_64 = fVar2;
  local_60 = fVar4;
  Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyHelper<Chaos::Softs::FSolverParticles>
            (*(FXPBDStretchBiasElementConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x70),**(float **)((longlong)this + 0x78),iVar1
             ,(TVector<float,3> *)&local_68,fVar5,fVar6,fVar7);
  return;
}

// operator() @ 143f52100

void __thiscall
`Chaos::Softs::FXPBDStretchBiasElementConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l45::<lambda_2>::operator()(void *this,int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar1 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar2 = **(float **)((longlong)this + 0x18);
  }
  else {
    fVar2 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x20),iVar1);
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar3 = **(float **)((longlong)this + 0x28);
  }
  else {
    fVar3 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x68),iVar1);
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar4 = **(float **)((longlong)this + 0x38);
  }
  else {
    fVar4 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xb0),iVar1);
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x48);
  }
  else {
    fVar5 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0xf8),iVar1);
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x58);
  }
  else {
    fVar6 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x130),iVar1);
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x68);
  }
  else {
    fVar7 = Chaos::Softs::FPBDWeightMap::operator[]
                      ((FPBDWeightMap *)(*(longlong *)((longlong)this + 0x10) + 0x168),iVar1);
  }
  local_68 = fVar3;
  local_64 = fVar2;
  local_60 = fVar4;
  Chaos::Softs::FXPBDStretchBiasElementConstraints::ApplyHelper<Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDStretchBiasElementConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x70),**(float **)((longlong)this + 0x78),
             iVar1,(TVector<float,3> *)&local_68,fVar5,fVar6,fVar7);
  return;
}

// AddInternalForceDifferential @ 143f54f40

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_res10 [2];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_res18;
  float local_res20 [2];
  float local_e8 [3];
  float local_dc;
  float local_d8;
  code *local_d0;
  int **local_c8;
  int *local_c0;
  FXPBDStretchBiasElementConstraints *local_b8;
  FSolverParticles *local_b0;
  float *local_a8;
  float *local_a0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_98;
  float *local_90;
  float *local_88;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_80;
  
  bVar8 = -1 < CpuChannel->Enabled;
  local_res18 = param_2;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1114,
               "STAT_ChaosCGAnisoBiasElementAddInternalForceDifferential",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
               ,0x45a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1114);
  }
  fVar9 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWarp);
  fVar10 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWeft);
  fVar11 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessBias);
  FPBDWeightMap::operator_float(&this->DampingRatio);
  local_e8[0] = FPBDWeightMap::operator_float(&this->WarpScale);
  local_res20[0] = FPBDWeightMap::operator_float(&this->WeftScale);
  local_e8[1] = 0.0;
  local_e8[2] = fVar10;
  local_dc = fVar9;
  local_d8 = fVar11;
  if ((param_3->ArrayNum != (int)param_1->_padding_) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ndf.Num() == InParticles.Size()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDStretchBiasElementConstraints.cpp"
                         ,0x466,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = local_res18;
  uVar6 = 0;
  iVar4 = (this->ConstraintsPerColorStartIndex).ArrayNum + -1;
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      local_res10[0] =
           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar7 * 4);
      uVar5 = 0;
      if ((int)uVar6 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_c0 = local_res10;
      local_a8 = local_res20;
      local_a0 = local_e8;
      local_98 = pTVar2;
      local_90 = local_e8 + 1;
      local_88 = local_e8 + 2;
      local_c8 = &local_c0;
      local_d0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FXPBDStretchBiasElementConstraints::AddInternalForceDifferential'::__l11::<lambda_1>,void,int>
                 ::Call;
      local_b8 = this;
      local_b0 = param_1;
      local_80 = param_3;
      PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 lVar7 * 4 + 4) - local_res10[0],
                         (TFunctionRef<void___cdecl(int)> *)&local_d0,false);
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddStretchBiasElementResidualAndHessian @ 143f55230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::AddStretchBiasElementResidualAndHessian
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,float param_4,TVector<float,3> *param_5,PMatrix<float,3,3> *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  TVector<float,3> *pTVar13;
  TVector<float,3> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_1d0;
  float local_1c8 [4];
  float local_1b8;
  float local_1b4;
  float local_1b0 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined1 local_188 [8];
  float local_180;
  undefined1 local_178 [8];
  float local_170;
  longlong local_168;
  float local_160;
  float local_158 [12];
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  TVector<float,3> *local_f0;
  PMatrix<float,3,3> *local_e8;
  
  local_f0 = param_5;
  local_e8 = param_6;
  lVar22 = (longlong)param_2;
  local_118 = param_3;
  local_108 = param_1;
  local_194 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWarp);
  local_1b8 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessWeft);
  fVar24 = FPBDWeightMap::operator_float((FPBDWeightMap *)&this->StiffnessBias);
  FPBDWeightMap::operator_float(&this->DampingRatio);
  fVar25 = FPBDWeightMap::operator_float(&this->WarpScale);
  fVar26 = FPBDWeightMap::operator_float(&this->WeftScale);
  uVar23 = (uint)~param_2 >> 0x1f;
  uVar11 = 0;
  if (param_2 < (this->DeltaUVInverse).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_168 = lVar22 * 0x10;
  pFVar19 = (this->DeltaUVInverse).AllocatorInstance.Data + local_168;
  uVar11 = 0;
  if (param_2 < (this->Constraints).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->Constraints).AllocatorInstance.Data;
  local_1b4 = *(float *)(pFVar4 + lVar22 * 0xc);
  iVar2 = *(int *)(pFVar4 + lVar22 * 0xc + 4);
  iVar3 = *(int *)(pFVar4 + lVar22 * 0xc + 8);
  local_190 = (float)iVar2;
  fVar27 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)local_1b4);
  fVar35 = 0.0;
  if (((fVar27 == 0.0) &&
      (fVar27 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar2),
      fVar27 == 0.0)) &&
     (fVar27 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3),
     fVar27 == 0.0)) {
    return;
  }
  pTVar12 = FSolverParticles::P(param_1,iVar3);
  pTVar13 = FSolverParticles::P(param_1,(int)local_190);
  pTVar14 = FSolverParticles::P(local_108,(int)local_1b4);
  CalculateUVStretch(this,param_2,pTVar14,pTVar13,pTVar12,(TVector<float,3> *)local_188,
                     (TVector<float,3> *)local_178);
  fVar27 = SQRT((float)local_188._4_4_ * (float)local_188._4_4_ +
                (float)local_188._0_4_ * (float)local_188._0_4_ + local_180 * local_180);
  fVar30 = SQRT((float)local_178._4_4_ * (float)local_178._4_4_ +
                (float)local_178._0_4_ * (float)local_178._0_4_ + local_170 * local_170);
  if (fVar27 <= __real_322bcc77) {
    fVar34 = 0.0;
  }
  else {
    fVar34 = __real_3f800000 / fVar27;
  }
  if (fVar30 <= __real_322bcc77) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = __real_3f800000 / fVar30;
  }
  lVar16 = 0;
  fVar28 = fVar34 * local_180;
  uVar20 = 0;
  fVar32 = (float)local_188._0_4_ * fVar34;
  uVar11 = uVar20;
  if (param_2 < (this->StiffnessScales).ArrayNum) {
    uVar11 = uVar23;
  }
  fVar31 = fVar34 * (float)local_188._4_4_;
  local_1a0 = (float)local_178._0_4_ * fVar33;
  local_114 = fVar32;
  local_19c = fVar33 * (float)local_178._4_4_;
  local_198 = fVar33 * local_170;
  local_160 = fVar31;
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = (this->StiffnessScales).AllocatorInstance.Data;
  fVar24 = fVar24 * *(float *)(pFVar4 + lVar22 * 0xc + 8);
  local_194 = local_194 * *(float *)(pFVar4 + lVar22 * 0xc + 4);
  local_1b8 = local_1b8 * *(float *)(pFVar4 + lVar22 * 0xc);
  uVar11 = uVar20;
  if (param_2 < (this->RestStretchLengths).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar29 = *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar22 * 0xc);
  uVar11 = uVar20;
  if (param_2 < (this->RestStretchLengths).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar1 = *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar22 * 0xc + 4);
  uVar11 = uVar20;
  if (param_2 < (this->RestStretchLengths).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar9 = local_194;
  fVar8 = StiffnessPaddingRatio;
  fVar26 = param_4 * param_4 * local_1b8 * fVar34 * (fVar27 - fVar26 * fVar29);
  uVar11 = uVar20;
  if (param_2 < (this->RestDmArray).ArrayNum) {
    uVar11 = uVar23;
  }
  local_110 = fVar26;
  fVar25 = param_4 * param_4 * local_194 * fVar33 * (fVar30 - fVar25 * fVar1);
  local_108 = (FSolverParticles *)CONCAT44(local_108._4_4_,fVar25);
  fVar27 = ((fVar32 * local_1a0 + fVar31 * local_19c + fVar28 * local_198) -
           *(float *)((this->RestStretchLengths).AllocatorInstance.Data + lVar22 * 0xc + 8)) *
           fVar24 * param_4 * param_4;
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_2 < (this->DmArray).ArrayNum) {
    uVar20 = uVar23;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 0;
  if (param_2 < (this->DmInverse).ArrayNum) {
    uVar11 = uVar23;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1b4 = 0.0;
  pFVar4 = (this->DmInverse).AllocatorInstance.Data + local_168;
  local_100 = *(undefined8 *)pFVar4;
  uStack_f8 = *(undefined8 *)(pFVar4 + 8);
  local_190 = (fVar9 + local_1b8 + fVar24) * fVar8;
  if (this->bDmInitialized != false) {
    uVar11 = 0;
    if (param_2 < (this->Measure).ArrayNum) {
      uVar11 = uVar23;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1b4 = param_4 * param_4 * *(float *)((this->Measure).AllocatorInstance.Data + lVar22 * 4);
  }
  lVar22 = (longlong)local_118;
  fVar30 = 0.0;
  local_1b0[0] = 0.0;
  local_1b0[1] = 0.0;
  local_1d0 = 0.0;
  local_1b0[2] = 0.0;
  if (local_118 == 0) {
    fVar25 = *(float *)(pFVar19 + 4);
    local_1c8[0] = 0.0;
    local_1c8[1] = 0.0;
    fVar26 = *(float *)pFVar19;
    fVar35 = *(float *)(pFVar19 + 8);
    fVar32 = *(float *)(pFVar19 + 0xc);
    local_1c8[2] = 0.0;
    local_1d0 = (float)((uint)(fVar32 * fVar33 * fVar28 + fVar25 * fVar34 * local_198) ^
                       __xmm_80000000800000008000000080000000) -
                (fVar35 * fVar33 * fVar28 + fVar26 * fVar34 * local_198);
    local_1b0[2] = local_1d0;
    fVar30 = (float)((uint)(fVar32 * fVar33 * local_160 + fVar25 * fVar34 * local_19c) ^
                    __xmm_80000000800000008000000080000000) -
             (fVar35 * fVar33 * local_160 + fVar26 * fVar34 * local_19c);
    fVar35 = (float)((uint)(fVar32 * fVar33 * local_114 + fVar25 * fVar34 * local_1a0) ^
                    __xmm_80000000800000008000000080000000) -
             (fVar35 * fVar33 * local_114 + fVar26 * fVar34 * local_1a0);
    local_1b0[1] = fVar30;
    local_1b0[0] = fVar35;
LAB_143f55b71:
    local_1c8[2] = 0.0;
    local_1c8[0] = 0.0;
    local_1c8[1] = 0.0;
    fVar25 = *(float *)pFVar19;
    fVar26 = *(float *)(pFVar19 + 8);
    fVar28 = *(float *)(pFVar19 + 4);
    lVar15 = lVar16;
    do {
      *(float *)((longlong)local_1c8 + lVar15) =
           ((((fVar27 * *(float *)((longlong)local_1b0 + lVar15) +
              *(float *)((longlong)local_1c8 + lVar15)) -
             fVar25 * local_110 * *(float *)(local_188 + lVar15)) -
            fVar26 * (float)local_108 * *(float *)(local_178 + lVar15)) -
           local_110 * *(float *)(local_188 + lVar15) * fVar28) -
           *(float *)(pFVar19 + 0xc) * (float)local_108 * *(float *)(local_178 + lVar15);
      lVar15 = lVar15 + 4;
    } while (lVar15 < 0xc);
    goto LAB_143f55c00;
  }
  local_1c8[0] = 0.0;
  local_1c8[1] = 0.0;
  local_1c8[2] = 0.0;
  if (local_118 == 1) {
    fVar35 = *(float *)pFVar19;
    fVar31 = *(float *)(pFVar19 + 8);
LAB_143f55957:
    local_1d0 = fVar33 * fVar28 * fVar31 + fVar34 * local_198 * fVar35;
    local_1b0[2] = local_1d0;
    fVar30 = fVar33 * local_160 * fVar31 + fVar34 * local_19c * fVar35;
    local_1b0[1] = fVar30;
    fVar35 = fVar33 * fVar32 * fVar31 + fVar34 * local_1a0 * fVar35;
    local_1b0[0] = fVar35;
  }
  else {
    if (local_118 == 2) {
      fVar35 = *(float *)(pFVar19 + 4);
      fVar31 = *(float *)(pFVar19 + 0xc);
      goto LAB_143f55957;
    }
    local_110 = fVar26;
    local_108._0_4_ = fVar25;
    if (local_118 < 1) goto LAB_143f55b71;
  }
  fVar28 = *(float *)(pFVar19 + (lVar22 + -1) * 4);
  fVar32 = *(float *)(pFVar19 + (lVar22 + 1) * 4);
  lVar15 = lVar16;
  do {
    *(float *)((longlong)local_1c8 + lVar15) =
         fVar25 * *(float *)(local_178 + lVar15) * fVar32 +
         fVar27 * *(float *)((longlong)local_1b0 + lVar15) +
         fVar26 * *(float *)(local_188 + lVar15) * fVar28 + *(float *)((longlong)local_1c8 + lVar15)
    ;
    lVar15 = lVar15 + 4;
  } while (lVar15 < 0xc);
LAB_143f55c00:
  local_128 = ___xmm_3f800000000000000000000000000000;
  uStack_120 = _UNK_150689648;
  local_158[0] = 0.0;
  local_158[1] = 0.0;
  local_158[4] = 0.0;
  local_158[5] = 0.0;
  local_158[8] = 0.0;
  local_158[9] = 0.0;
  local_158[2] = 0.0;
  local_158[3] = 0.0;
  local_158[6] = 0.0;
  local_158[7] = 0.0;
  local_158[10] = 0.0;
  local_158[0xb] = 0.0;
  fVar25 = fVar24 * param_4 * param_4;
  fVar24 = fVar34 * fVar34 * param_4 * param_4 * local_1b8;
  fVar26 = fVar33 * fVar33 * param_4 * param_4 * local_194;
  if (local_118 < 1) {
    fVar27 = *(float *)pFVar19;
    fVar34 = *(float *)(pFVar19 + 8);
    fVar33 = *(float *)(pFVar19 + 4);
    fVar28 = *(float *)(pFVar19 + 0xc);
    lVar22 = lVar16;
    do {
      fVar32 = *(float *)(local_188 + lVar22);
      fVar31 = *(float *)(local_178 + lVar22);
      pfVar21 = (float *)((longlong)local_158 + lVar22);
      lVar15 = lVar16;
      pfVar18 = pfVar21;
      do {
        fVar29 = *pfVar18;
        lVar17 = lVar16;
        do {
          lVar7 = lVar17 * 4;
          lVar6 = lVar17 + 2;
          lVar17 = lVar17 + 1;
          fVar29 = fVar32 * *(float *)(local_188 + lVar15) * (fVar33 + fVar27) *
                   fVar24 * *(float *)(pFVar19 + lVar7) + fVar29 +
                   fVar31 * *(float *)(local_178 + lVar15) * (fVar34 + fVar28) *
                   fVar26 * *(float *)(pFVar19 + lVar6 * 4);
        } while (lVar17 < 2);
        *pfVar18 = fVar29;
        lVar15 = lVar15 + 4;
        pfVar18 = pfVar18 + 4;
      } while (lVar15 < 0xc);
      fVar32 = fVar25 * *(float *)((longlong)local_1b0 + lVar22);
      *(undefined4 *)((longlong)&local_128 + lVar22) = 0;
      *(float *)((longlong)local_158 + lVar22 + 0x10) =
           fVar32 * fVar30 + *(float *)((longlong)local_158 + lVar22 + 0x10);
      *pfVar21 = fVar35 * fVar32 + *pfVar21;
      *(float *)((longlong)local_158 + lVar22 + 0x20) =
           fVar32 * local_1d0 + *(float *)((longlong)local_158 + lVar22 + 0x20);
      lVar22 = lVar22 + 4;
    } while (lVar22 < 0xc);
    local_100._4_4_ = local_100._4_4_ + (float)local_100;
    uStack_f8._4_4_ = uStack_f8._4_4_ + (float)uStack_f8;
  }
  else {
    fVar27 = *(float *)(pFVar19 + (lVar22 + -1) * 4);
    fVar34 = *(float *)(pFVar19 + (lVar22 + 1) * 4);
    fVar33 = *(float *)(pFVar19 + (lVar22 + -1) * 4);
    fVar28 = *(float *)(pFVar19 + (lVar22 + 1) * 4);
    do {
      fVar32 = fVar25 * *(float *)((longlong)local_1b0 + lVar16);
      fVar31 = fVar24 * fVar27 * fVar33 * *(float *)(local_188 + lVar16);
      fVar29 = fVar26 * fVar34 * fVar28 * *(float *)(local_178 + lVar16);
      *(float *)((longlong)local_158 + lVar16) =
           (float)local_178._0_4_ * fVar29 + fVar35 * fVar32 +
           (float)local_188._0_4_ * fVar31 + *(float *)((longlong)local_158 + lVar16);
      *(float *)((longlong)local_158 + lVar16 + 0x10) =
           fVar29 * (float)local_178._4_4_ + fVar31 * (float)local_188._4_4_ +
           fVar32 * fVar30 + *(float *)((longlong)local_158 + lVar16 + 0x10);
      *(float *)((longlong)local_158 + lVar16 + 0x20) =
           fVar29 * local_170 + fVar31 * local_180 +
           fVar32 * local_1d0 + *(float *)((longlong)local_158 + lVar16 + 0x20);
      *(undefined4 *)((longlong)&local_128 + lVar16) = 0;
      lVar16 = lVar16 + 4;
    } while (lVar16 < 0xc);
    local_100._4_4_ = *(float *)((longlong)&local_108 + lVar22 * 4 + 4);
    uStack_f8._4_4_ = *(float *)((longlong)&local_100 + lVar22 * 4 + 4);
  }
  fVar25 = (uStack_f8._4_4_ * uStack_f8._4_4_ + local_100._4_4_ * local_100._4_4_) *
           local_1b4 * local_190;
  *(float *)local_f0 = local_1c8[0] + *(float *)local_f0;
  *(float *)&local_f0->field_0x4 = local_1c8[1] + *(float *)&local_f0->field_0x4;
  *(float *)&local_f0->field_0x8 = local_1c8[2] + *(float *)&local_f0->field_0x8;
  *(float *)&local_e8->field_0x4 = local_158[1] + *(float *)&local_e8->field_0x4;
  *(float *)&local_e8->field_0x8 = local_158[2] + *(float *)&local_e8->field_0x8;
  *(float *)local_e8 = local_158[0] + fVar25 + *(float *)local_e8;
  *(float *)&local_e8->field_0x10 = local_158[4] + *(float *)&local_e8->field_0x10;
  *(float *)&local_e8->field_0x14 = local_158[5] + fVar25 + *(float *)&local_e8->field_0x14;
  *(float *)&local_e8->field_0x20 = local_158[8] + *(float *)&local_e8->field_0x20;
  *(float *)&local_e8->field_0x28 = local_158[10] + fVar25 + *(float *)&local_e8->field_0x28;
  *(float *)&local_e8->field_0x18 = local_158[6] + *(float *)&local_e8->field_0x18;
  *(float *)&local_e8->field_0x24 = local_158[9] + *(float *)&local_e8->field_0x24;
  return;
}

// CalculateUVStretch @ 143f594a0

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::CalculateUVStretch
          (FXPBDStretchBiasElementConstraints *this,int param_1,TVector<float,3> *param_2,
          TVector<float,3> *param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,
          TVector<float,3> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar11 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < (this->DeltaUVInverse).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
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
  pFVar7 = (this->DeltaUVInverse).AllocatorInstance.Data;
  fVar14 = *(float *)&param_3->field_0x8 - *(float *)&param_2->field_0x8;
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)param_2;
  fVar15 = *(float *)&param_3->field_0x4 - *(float *)&param_2->field_0x4;
  fVar3 = *(float *)(pFVar7 + lVar11 * 0x10);
  fVar4 = *(float *)(pFVar7 + lVar11 * 0x10 + 4);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)param_2;
  fVar13 = *(float *)&param_4->field_0x4 - *(float *)&param_2->field_0x4;
  fVar12 = *(float *)&param_4->field_0x8 - *(float *)&param_2->field_0x8;
  *(float *)param_5 = fVar4 * (fVar5 - fVar6) + fVar3 * (fVar1 - fVar2);
  *(float *)&param_5->field_0x4 = fVar4 * fVar13 + fVar3 * fVar15;
  *(float *)&param_5->field_0x8 = fVar4 * fVar12 + fVar3 * fVar14;
  fVar3 = *(float *)(pFVar7 + lVar11 * 0x10 + 8);
  fVar4 = *(float *)(pFVar7 + lVar11 * 0x10 + 0xc);
  *(float *)param_6 = fVar4 * (fVar5 - fVar6) + fVar3 * (fVar1 - fVar2);
  *(float *)&param_6->field_0x4 = fVar4 * fVar13 + fVar3 * fVar15;
  *(float *)&param_6->field_0x8 = fVar4 * fVar12 + fVar3 * fVar14;
  return;
}

// InitializeDmInvAndMeasures @ 143f6f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::InitializeDmInvAndMeasures
          (FXPBDStretchBiasElementConstraints *this,FSolverParticles *param_1)

{
  int *piVar1;
  TArray<Chaos::PMatrix<float,3,2>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [8];
  longlong local_150;
  float local_148;
  undefined4 uStack_144;
  float fStack_140;
  float fStack_13c;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  PMatrix<float,2,2> local_100;
  PMatrix<float,2,2> local_f0;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Measure,(this->Constraints).ArrayNum,Default);
  local_100.M[0] = 0.0;
  local_100.M[1] = 0.0;
  local_100.M[2] = 0.0;
  local_100.M[3] = 0.0;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_>::Init
            (&this->DmInverse,&local_100,(this->Constraints).ArrayNum);
  local_f0.M[0] = 0.0;
  local_f0.M[1] = 0.0;
  local_f0.M[2] = 0.0;
  local_f0.M[3] = 0.0;
  TArray<Chaos::PMatrix<float,2,2>,TSizedDefaultAllocator<32>_>::Init
            (&this->DmArray,&local_f0,(this->Constraints).ArrayNum);
  uVar3 = (this->Constraints).ArrayNum;
  uVar14 = (ulonglong)uVar3;
  pTVar2 = &this->RestDmArray;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar14);
  }
  piVar1 = &(this->RestDmArray).ArrayMax;
  (this->RestDmArray).ArrayNum = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,uVar3,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar3) {
    do {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_118) &&
          ((FScriptContainerElement *)&local_118 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = (this->RestDmArray).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x418,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->RestDmArray).ArrayNum = iVar9 + 1;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      pFVar4 = pFVar5 + (longlong)iVar9 * 0x18;
      *(undefined8 *)pFVar4 = local_118;
      *(undefined8 *)(pFVar4 + 8) = uStack_110;
      *(undefined8 *)(pFVar5 + (longlong)iVar9 * 0x18 + 0x10) = local_108;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar3 = __xmm_80000000800000008000000080000000;
  uVar12 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar15 = 0;
    local_120 = 0;
    local_138 = 0;
    local_150 = 0;
    do {
      lVar16 = local_150;
      uVar13 = ~uVar12 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->Constraints).AllocatorInstance.Data + lVar16 + 4);
      uVar11 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_128 = param_1->_padding_;
      local_130 = (longlong)(int)uVar10 * 3;
      uVar10 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->Constraints).AllocatorInstance.Data + local_150);
      lVar16 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = param_1->_padding_;
      fVar21 = *(float *)(local_128 + 8 + local_130 * 4) - *(float *)(lVar6 + 8 + lVar16 * 0xc);
      fVar22 = *(float *)(local_128 + 4 + local_130 * 4) - *(float *)(lVar6 + 4 + lVar16 * 0xc);
      fVar23 = *(float *)(local_128 + local_130 * 4) - *(float *)(lVar6 + lVar16 * 0xc);
      uVar10 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->Constraints).AllocatorInstance.Data + local_150 + 8);
      uVar11 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_130 = param_1->_padding_;
      local_128 = (longlong)(int)uVar10 * 3;
      uVar10 = 0;
      if ((int)uVar12 < (this->Constraints).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar10 = *(uint *)((this->Constraints).AllocatorInstance.Data + local_150);
      lVar16 = (longlong)(int)uVar10;
      uVar11 = 0;
      if ((int)uVar10 < (int)param_1->_padding_) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = param_1->_padding_;
      uStack_144 = 0;
      fVar25 = *(float *)(local_130 + 4 + local_128 * 4) - *(float *)(lVar6 + 4 + lVar16 * 0xc);
      fVar26 = *(float *)(local_130 + local_128 * 4) - *(float *)(lVar6 + lVar16 * 0xc);
      fVar24 = *(float *)(local_130 + 8 + local_128 * 4) - *(float *)(lVar6 + 8 + lVar16 * 0xc);
      uVar10 = 0;
      if ((int)uVar12 < (this->Measure).ArrayNum) {
        uVar10 = uVar13;
      }
      fVar20 = SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21);
      fVar19 = fVar24 * fVar22 - fVar25 * fVar21;
      fStack_140 = (fVar25 * fVar22 + fVar26 * fVar23 + fVar24 * fVar21) / fVar20;
      fVar18 = fVar26 * fVar21 - fVar24 * fVar23;
      fVar17 = fVar25 * fVar23 - fVar26 * fVar22;
      fVar17 = SQRT(fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17);
      fVar18 = fVar17 * __real_3f000000;
      fVar17 = fVar17 / fVar20;
      local_148 = fVar20;
      fStack_13c = fVar17;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar16 = local_138;
      *(float *)((this->Measure).AllocatorInstance.Data + local_138) = fVar18;
      uVar10 = 0;
      if ((int)uVar12 < (this->Measure).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(float *)((this->Measure).AllocatorInstance.Data + lVar16) <= 0.0) {
        local_158[0] = 0;
        `Chaos::Softs::FXPBDStretchBiasElementConstraints::InitializeDmInvAndMeasures'::__l4::
        <lambda_1>::operator()(local_158);
      }
      uVar10 = 0;
      if ((int)uVar12 < (this->DmInverse).ArrayNum) {
        uVar10 = uVar13;
      }
      fVar18 = __real_3f800000 / (fVar17 * fVar20);
      fVar19 = fStack_140 * fVar18;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar16 = local_120;
      pFVar4 = (this->DmInverse).AllocatorInstance.Data;
      *(float *)(pFVar4 + local_120) = fVar17 * fVar18;
      *(undefined4 *)(pFVar4 + local_120 + 4) = 0x80000000;
      *(uint *)(pFVar4 + local_120 + 8) = (uint)fVar19 ^ uVar3;
      *(float *)(pFVar4 + local_120 + 0xc) = fVar20 * fVar18;
      uVar10 = 0;
      if ((int)uVar12 < (this->DmArray).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->DmArray).AllocatorInstance.Data + lVar16;
      *(ulonglong *)pFVar4 = CONCAT44(uStack_144,local_148);
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(fStack_13c,fStack_140);
      uVar10 = 0;
      if ((int)uVar12 < (this->RestDmArray).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      local_120 = lVar16 + 0x10;
      local_150 = local_150 + 0xc;
      uVar12 = uVar12 + 1;
      local_138 = local_138 + 4;
      *(float *)(pFVar4 + lVar15) = fVar23;
      *(float *)(pFVar4 + lVar15 + 4) = fVar22;
      *(float *)(pFVar4 + lVar15 + 8) = fVar21;
      *(float *)(pFVar4 + lVar15 + 0xc) = fVar26;
      *(float *)(pFVar4 + lVar15 + 0x10) = fVar25;
      *(float *)(pFVar4 + lVar15 + 0x14) = fVar24;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar12 < (this->Constraints).ArrayNum);
  }
  this->bDmInitialized = true;
  return;
}

// SetProperties @ 143f75e50

void __thiscall
Chaos::Softs::FXPBDStretchBiasElementConstraints::SetProperties
          (FXPBDStretchBiasElementConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  longlong *plVar1;
  bool *pbVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  TVector<float,2> TVar7;
  ECollectionPropertyFlags EVar8;
  bool bVar9;
  byte bVar10;
  FString *pFVar11;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar12;
  FPBDWeightMap *pFVar13;
  TArrayView<unsigned_char_const_,int> *pTVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  undefined8 local_res20;
  undefined8 local_308;
  undefined8 local_300;
  TVector<float,2> local_2f8;
  TVector<float,2> local_2f0;
  undefined8 local_2e8;
  TVector2<float>_u_0 local_2e0;
  TVector2<float>_u_0 local_2d8;
  TVector2<float>_u_0 local_2d0;
  TArrayView<float_const_,int> local_2c8;
  TArrayView<float_const_,int> local_2b8;
  TArrayView<float_const_,int> local_2a8;
  TArrayView<float_const_,int> local_298;
  TArrayView<float_const_,int> local_288;
  TArrayView<float_const_,int> local_278;
  undefined1 local_268 [40];
  undefined8 local_240;
  bool local_238;
  float local_230;
  undefined8 local_22c;
  int local_224;
  undefined1 local_220 [40];
  undefined8 local_1f8;
  bool local_1f0;
  float local_1e8;
  undefined8 local_1e4;
  int local_1dc;
  undefined1 local_1d8 [40];
  undefined8 local_1b0;
  bool local_1a8;
  float local_1a0;
  undefined8 local_19c;
  int local_194;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_190;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_180;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_170;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_160;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_150;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_140;
  FPBDWeightMap local_130;
  FPBDWeightMap local_f8;
  FPBDWeightMap local_c0 [2];
  
  fVar6 = __real_4b189680;
  fVar16 = __real_447a0000;
  iVar3 = (this->XPBDAnisoStretchStiffnessWarpIndex).Index;
  if (iVar3 != -1) {
    pTVar14 = &param_1->FlagsArray;
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar3,pTVar14);
    if (((EVar8 & Animatable) != None) &&
       (EVar8 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->XPBDAnisoStretchStiffnessWarpIndex).Index,pTVar14),
       (char)EVar8 < '\0')) {
      if (((this->XPBDAnisoStretchStiffnessWarpIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xad,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = (this->XPBDAnisoStretchStiffnessWarpIndex).Index;
      local_308._4_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar3,&param_1->HighValueArray);
      local_308._0_4_ =
           FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                     (param_1,iVar3,&param_1->LowValueArray);
      if (((this->XPBDAnisoStretchStiffnessWarpIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xad,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchStiffnessWarpIndex).Index,pTVar14);
      if ((EVar8 & StringDirty) == None) {
        if (fVar6 <= (float)local_308) {
          local_308._0_4_ = fVar6;
        }
        if (fVar6 <= local_308._4_4_) {
          local_308._4_4_ = fVar6;
        }
        if ((float)local_308 <= 0.0) {
          local_308._0_4_ = 0.0;
        }
        if (local_308._4_4_ <= 0.0) {
          local_308._4_4_ = 0.0;
        }
        if (((float)local_308 == *(float *)&(this->StiffnessWarp)._padding_) &&
           (local_308._4_4_ == *(float *)((longlong)&(this->StiffnessWarp)._padding_ + 4))) {
          (this->StiffnessWarp)._padding_ = (longlong)local_308;
          plVar1 = &(this->StiffnessWarp)._padding_;
          *(char *)plVar1 = (char)*plVar1;
        }
        else {
          (this->StiffnessWarp)._padding_ = (longlong)local_308;
          plVar1 = &(this->StiffnessWarp)._padding_;
          *(byte *)plVar1 = (byte)*plVar1 | 1;
        }
      }
      else {
        if (((this->XPBDAnisoStretchStiffnessWarpIndex).Index == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("XPBDAnisoStretchStiffnessWarpIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                               ,0xad,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                            (param_1,(this->XPBDAnisoStretchStiffnessWarpIndex).Index,
                             &param_1->StringValueArray);
        local_190.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
        local_190.ArrayNum = (this->Constraints).ArrayNum;
        iVar3 = this->ParticleCount;
        iVar4 = this->ParticleOffset;
        if ((local_190.ArrayNum < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar11);
        if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_2c8.DataPtr = (float *)0x0;
          local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
        }
        else {
          local_2c8.DataPtr = *(float **)&pTVar12->field_0x10;
          local_2c8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
        }
        local_2e0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        FPBDWeightMap::FPBDWeightMap<3>
                  ((FPBDWeightMap *)local_268,(TVector<float,2> *)&local_2e0._s_0,&local_2c8,
                   &local_190,iVar4,iVar3,0x10,(void *)0x0);
        if (fVar6 <= (float)local_308) {
          local_308._0_4_ = fVar6;
        }
        local_268._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
        if (fVar6 <= local_308._4_4_) {
          local_308._4_4_ = fVar6;
        }
        local_230 = 1000.0;
        local_22c = 0x40dd0c55;
        local_224 = 0;
        if ((float)local_308 <= 0.0) {
          local_308._0_4_ = 0.0;
        }
        if (local_308._4_4_ <= 0.0) {
          local_308._4_4_ = 0.0;
        }
        if (((float)local_240 == (float)local_308) && (local_240._4_4_ == local_308._4_4_)) {
          bVar10 = 0;
        }
        else {
          bVar10 = 1;
        }
        local_238 = (bool)(local_238 | bVar10);
        local_240 = local_308;
        FPBDWeightMap::operator=((FPBDWeightMap *)&this->StiffnessWarp,(FPBDWeightMap *)local_268);
        (this->StiffnessWarp).ParameterFitBase = local_230;
        (this->StiffnessWarp).PrevDtOrMaxStiffness = local_22c._4_4_;
        (this->StiffnessWarp).ParameterFitLogBase = (float)local_22c;
        (this->StiffnessWarp).PrevNumIterations = local_224;
        if ((FScriptContainerElement *)local_268._24_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_268._24_8_);
        }
        if ((FScriptContainerElement *)local_268._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_268._8_8_);
        }
      }
    }
  }
  pTVar14 = &param_1->FlagsArray;
  iVar3 = (this->XPBDAnisoStretchStiffnessWeftIndex).Index;
  if (((iVar3 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar3,pTVar14), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchStiffnessWeftIndex).Index,pTVar14),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoStretchStiffnessWeftIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xae,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->XPBDAnisoStretchStiffnessWeftIndex).Index;
    local_308._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->HighValueArray);
    local_308._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->LowValueArray);
    if (((this->XPBDAnisoStretchStiffnessWeftIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xae,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoStretchStiffnessWeftIndex).Index,pTVar14);
    if ((EVar8 & StringDirty) == None) {
      if (fVar6 <= (float)local_308) {
        local_308._0_4_ = fVar6;
      }
      if (fVar6 <= local_308._4_4_) {
        local_308._4_4_ = fVar6;
      }
      if ((float)local_308 <= 0.0) {
        local_308._0_4_ = 0.0;
      }
      if (local_308._4_4_ <= 0.0) {
        local_308._4_4_ = 0.0;
      }
      if (((float)local_308 == *(float *)&(this->StiffnessWeft)._padding_) &&
         (local_308._4_4_ == *(float *)((longlong)&(this->StiffnessWeft)._padding_ + 4))) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      plVar1 = &(this->StiffnessWeft)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 | bVar10;
      (this->StiffnessWeft)._padding_ = (longlong)local_308;
    }
    else {
      if (((this->XPBDAnisoStretchStiffnessWeftIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchStiffnessWeftIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xae,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoStretchStiffnessWeftIndex).Index,
                           &param_1->StringValueArray);
      local_180.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
      local_180.ArrayNum = (this->Constraints).ArrayNum;
      iVar3 = this->ParticleCount;
      iVar4 = this->ParticleOffset;
      if ((local_180.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar11);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_2b8.DataPtr = (float *)0x0;
        local_2b8._8_8_ = (ulonglong)(uint)local_2b8._12_4_ << 0x20;
      }
      else {
        local_2b8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_2b8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      local_2d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap<3>
                ((FPBDWeightMap *)local_220,(TVector<float,2> *)&local_2d8._s_0,&local_2b8,
                 &local_180,iVar4,iVar3,0x10,(void *)0x0);
      if (fVar6 <= (float)local_308) {
        local_308._0_4_ = fVar6;
      }
      local_220._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      if (fVar6 <= local_308._4_4_) {
        local_308._4_4_ = fVar6;
      }
      local_1e8 = 1000.0;
      local_1e4 = 0x40dd0c55;
      local_1dc = 0;
      if ((float)local_308 <= 0.0) {
        local_308._0_4_ = 0.0;
      }
      if (local_308._4_4_ <= 0.0) {
        local_308._4_4_ = 0.0;
      }
      if (((float)local_1f8 == (float)local_308) && (local_1f8._4_4_ == local_308._4_4_)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      local_1f0 = (bool)(local_1f0 | bVar10);
      local_1f8 = local_308;
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->StiffnessWeft,(FPBDWeightMap *)local_220);
      (this->StiffnessWeft).ParameterFitBase = local_1e8;
      (this->StiffnessWeft).PrevDtOrMaxStiffness = local_1e4._4_4_;
      (this->StiffnessWeft).ParameterFitLogBase = (float)local_1e4;
      (this->StiffnessWeft).PrevNumIterations = local_1dc;
      if ((FScriptContainerElement *)local_220._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_220._24_8_);
      }
      if ((FScriptContainerElement *)local_220._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_220._8_8_);
      }
    }
  }
  iVar3 = (this->XPBDAnisoStretchStiffnessBiasIndex).Index;
  if (((iVar3 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar3,pTVar14), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchStiffnessBiasIndex).Index,pTVar14),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoStretchStiffnessBiasIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xaf,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->XPBDAnisoStretchStiffnessBiasIndex).Index;
    local_308._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->HighValueArray);
    local_308._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->LowValueArray);
    if (((this->XPBDAnisoStretchStiffnessBiasIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xaf,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoStretchStiffnessBiasIndex).Index,pTVar14);
    if ((EVar8 & StringDirty) == None) {
      if (fVar6 <= (float)local_308) {
        local_308._0_4_ = fVar6;
      }
      if (fVar6 <= local_308._4_4_) {
        local_308._4_4_ = fVar6;
      }
      if ((float)local_308 <= 0.0) {
        local_308._0_4_ = 0.0;
      }
      if (local_308._4_4_ <= 0.0) {
        local_308._4_4_ = 0.0;
      }
      if (((float)local_308 == *(float *)&(this->StiffnessBias)._padding_) &&
         (local_308._4_4_ == *(float *)((longlong)&(this->StiffnessBias)._padding_ + 4))) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      plVar1 = &(this->StiffnessBias)._padding_;
      *(byte *)plVar1 = (byte)*plVar1 | bVar10;
      (this->StiffnessBias)._padding_ = (longlong)local_308;
    }
    else {
      if (((this->XPBDAnisoStretchStiffnessBiasIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchStiffnessBiasIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xaf,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoStretchStiffnessBiasIndex).Index,
                           &param_1->StringValueArray);
      local_170.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
      local_170.ArrayNum = (this->Constraints).ArrayNum;
      iVar3 = this->ParticleCount;
      iVar4 = this->ParticleOffset;
      if ((local_170.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar11);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_2a8.DataPtr = (float *)0x0;
        local_2a8._8_8_ = (ulonglong)(uint)local_2a8._12_4_ << 0x20;
      }
      else {
        local_2a8.DataPtr = *(float **)&pTVar12->field_0x10;
        local_2a8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      local_2d0 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      FPBDWeightMap::FPBDWeightMap<3>
                ((FPBDWeightMap *)local_1d8,(TVector<float,2> *)&local_2d0._s_0,&local_2a8,
                 &local_170,iVar4,iVar3,0x10,(void *)0x0);
      if (fVar6 <= (float)local_308) {
        local_308._0_4_ = fVar6;
      }
      local_1d8._0_8_ = &___7FPBDStiffness_Softs_Chaos__6B_;
      if (fVar6 <= local_308._4_4_) {
        local_308._4_4_ = fVar6;
      }
      local_1a0 = 1000.0;
      local_19c = 0x40dd0c55;
      local_194 = 0;
      if ((float)local_308 <= 0.0) {
        local_308._0_4_ = 0.0;
      }
      if (local_308._4_4_ <= 0.0) {
        local_308._4_4_ = 0.0;
      }
      if (((float)local_1b0 == (float)local_308) && (local_1b0._4_4_ == local_308._4_4_)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      local_1a8 = (bool)(local_1a8 | bVar10);
      local_1b0 = local_308;
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->StiffnessBias,(FPBDWeightMap *)local_1d8);
      (this->StiffnessBias).ParameterFitBase = local_1a0;
      (this->StiffnessBias).PrevDtOrMaxStiffness = local_19c._4_4_;
      (this->StiffnessBias).ParameterFitLogBase = (float)local_19c;
      (this->StiffnessBias).PrevNumIterations = local_194;
      if ((FScriptContainerElement *)local_1d8._24_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._24_8_);
      }
      if ((FScriptContainerElement *)local_1d8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_1d8._8_8_);
      }
    }
  }
  iVar3 = (this->XPBDAnisoStretchDampingIndex).Index;
  if (((iVar3 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar3,pTVar14), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchDampingIndex).Index,pTVar14),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoStretchDampingIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb0,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->XPBDAnisoStretchDampingIndex).Index;
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar3,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->LowValueArray);
    local_res8._4_4_ = fVar15;
    local_2f8 = local_res8;
    if (fVar16 <= (float)local_res8) {
      local_res8._0_4_ = fVar16;
    }
    if (fVar16 <= fVar15) {
      fVar15 = fVar16;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    local_res8._4_4_ = fVar15;
    TVar7 = local_res8;
    if (((this->XPBDAnisoStretchDampingIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb0,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoStretchDampingIndex).Index,pTVar14);
    if ((EVar8 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&(this->DampingRatio).WeightedValue) &&
         (local_res8._4_4_ == *(float *)&(this->DampingRatio).WeightedValue.field_0x4)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      pbVar2 = &(this->DampingRatio).bIsDirty;
      *pbVar2 = (bool)(*pbVar2 | bVar10);
      (this->DampingRatio).WeightedValue = TVar7;
    }
    else {
      if (((this->XPBDAnisoStretchDampingIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xb0,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoStretchDampingIndex).Index,
                           &param_1->StringValueArray);
      local_160.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
      local_160.ArrayNum = (this->Constraints).ArrayNum;
      iVar3 = this->ParticleCount;
      iVar4 = this->ParticleOffset;
      if ((local_160.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar11);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_298.DataPtr = (float *)0x0;
        local_298._8_8_ = (ulonglong)(uint)local_298._12_4_ << 0x20;
      }
      else {
        local_298.DataPtr = *(float **)&pTVar12->field_0x10;
        local_298._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar13 = FPBDWeightMap::FPBDWeightMap<3>
                          (&local_130,(TVector<float,2> *)&local_res8,&local_298,&local_160,iVar4,
                           iVar3,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&this->DampingRatio,pFVar13);
      if (local_130.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Table.AllocatorInstance.Data);
      }
      if (local_130.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (this->XPBDAnisoStretchWarpScaleIndex).Index;
  if (((iVar3 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar3,pTVar14), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchWarpScaleIndex).Index,pTVar14),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoStretchWarpScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchWarpScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb1,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->XPBDAnisoStretchWarpScaleIndex).Index;
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar3,&param_1->HighValueArray);
    local_res20._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->LowValueArray);
    local_res20._4_4_ = fVar16;
    local_2f0 = local_res20;
    if (fVar6 <= (float)local_res20) {
      local_res20._0_4_ = fVar6;
    }
    if (fVar6 <= fVar16) {
      fVar16 = fVar6;
    }
    if ((float)local_res20 <= 0.0) {
      local_res20._0_4_ = 0.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    local_res20._4_4_ = fVar16;
    TVar7 = local_res20;
    if (((this->XPBDAnisoStretchWarpScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchWarpScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb1,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoStretchWarpScaleIndex).Index,pTVar14);
    if ((EVar8 & StringDirty) == None) {
      if (((float)local_res20 == *(float *)&(this->WarpScale).WeightedValue) &&
         (local_res20._4_4_ == *(float *)&(this->WarpScale).WeightedValue.field_0x4)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      pbVar2 = &(this->WarpScale).bIsDirty;
      *pbVar2 = (bool)(*pbVar2 | bVar10);
      (this->WarpScale).WeightedValue = TVar7;
    }
    else {
      if (((this->XPBDAnisoStretchWarpScaleIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchWarpScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xb1,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoStretchWarpScaleIndex).Index,
                           &param_1->StringValueArray);
      local_150.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
      local_150.ArrayNum = (this->Constraints).ArrayNum;
      iVar3 = this->ParticleCount;
      iVar4 = this->ParticleOffset;
      if ((local_150.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar11);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_288.DataPtr = (float *)0x0;
        local_288._8_8_ = (ulonglong)(uint)local_288._12_4_ << 0x20;
      }
      else {
        local_288.DataPtr = *(float **)&pTVar12->field_0x10;
        local_288._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar13 = FPBDWeightMap::FPBDWeightMap<3>
                          (&local_f8,(TVector<float,2> *)&local_res20,&local_288,&local_150,iVar4,
                           iVar3,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&this->WarpScale,pFVar13);
      if (local_f8.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Table.AllocatorInstance.Data);
      }
      if (local_f8.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar3 = (this->XPBDAnisoStretchWeftScaleIndex).Index;
  if (((iVar3 != -1) &&
      (EVar8 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar3,pTVar14), (EVar8 & Animatable) != None)) &&
     (EVar8 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoStretchWeftScaleIndex).Index,pTVar14),
     (char)EVar8 < '\0')) {
    if (((this->XPBDAnisoStretchWeftScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchWeftScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb2,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (this->XPBDAnisoStretchWeftScaleIndex).Index;
    local_308._4_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->HighValueArray);
    local_308._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar3,&param_1->LowValueArray);
    local_2e8 = local_308;
    if (fVar6 <= (float)local_308) {
      local_308._0_4_ = fVar6;
    }
    if (fVar6 <= local_308._4_4_) {
      local_308._4_4_ = fVar6;
    }
    if ((float)local_308 <= 0.0) {
      local_308._0_4_ = 0.0;
    }
    if (local_308._4_4_ <= 0.0) {
      local_308._4_4_ = 0.0;
    }
    local_300 = local_308;
    if (((this->XPBDAnisoStretchWeftScaleIndex).Index == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoStretchWeftScaleIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                           ,0xb2,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    EVar8 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoStretchWeftScaleIndex).Index,pTVar14);
    if ((EVar8 & StringDirty) == None) {
      if (((float)local_300 == *(float *)&(this->WeftScale).WeightedValue) &&
         (local_300._4_4_ == *(float *)&(this->WeftScale).WeightedValue.field_0x4)) {
        bVar10 = 0;
      }
      else {
        bVar10 = 1;
      }
      pbVar2 = &(this->WeftScale).bIsDirty;
      *pbVar2 = (bool)(*pbVar2 | bVar10);
      (this->WeftScale).WeightedValue = local_308;
    }
    else {
      if (((this->XPBDAnisoStretchWeftScaleIndex).Index == -1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoStretchWeftScaleIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDStretchBiasElementConstraints.h"
                             ,0xb2,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoStretchWeftScaleIndex).Index,
                           &param_1->StringValueArray);
      local_140.DataPtr = (TVector<int,3> *)(this->Constraints).AllocatorInstance.Data;
      local_140.ArrayNum = (this->Constraints).ArrayNum;
      iVar3 = this->ParticleCount;
      iVar4 = this->ParticleOffset;
      if ((local_140.ArrayNum < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar11);
      if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_278.DataPtr = (float *)0x0;
        local_278._8_8_ = (ulonglong)(uint)local_278._12_4_ << 0x20;
      }
      else {
        local_278.DataPtr = *(float **)&pTVar12->field_0x10;
        local_278._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
      }
      pFVar13 = FPBDWeightMap::FPBDWeightMap<3>
                          (local_c0,(TVector<float,2> *)&local_300,&local_278,&local_140,iVar4,iVar3
                           ,0x10,(void *)0x0);
      FPBDWeightMap::operator=(&this->WeftScale,pFVar13);
      if (local_c0[0].Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0[0].Table.AllocatorInstance.Data);
      }
      if (local_c0[0].Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0[0].Indices.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 1504a9df0

bool __thiscall
`Chaos::Softs::FXPBDStretchBiasElementConstraints::InitializeDmInvAndMeasures'::__l4::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9208195396252204181>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9208195396252204181>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

