// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 22

// Apply<Chaos::Softs::FSolverParticles> @ 143eedbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *plVar1;
  TVector<float,2> *pTVar2;
  TVector<float,2> *pTVar3;
  TVector<float,2> *pTVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  code *pcVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_XPBD_Bending> FVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FName FVar19;
  int iVar20;
  longlong lVar21;
  char cVar22;
  byte bVar23;
  FName FVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float *local_res8;
  float local_res18 [2];
  char local_res20;
  char local_2e8;
  char local_2e7;
  char local_2e6;
  byte local_2e5;
  uint local_2e4;
  FName local_2e0;
  TVector<float,2> *local_2d8;
  FName local_2d0;
  FScriptContainerElement *local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  float local_2b8 [2];
  FScriptContainerElement *local_2b0;
  int local_2a8;
  int local_2a4;
  int local_2a0 [2];
  TVector<float,2> *local_298;
  float *local_290;
  float *local_288;
  float *local_280;
  FScriptContainerElement *local_278;
  TVector<float,2> *local_270;
  TVector<float,2> *local_268;
  FName local_260;
  FName local_258;
  code *local_248;
  int **local_240;
  code *local_238;
  int **local_230;
  code *local_228;
  int **local_220;
  int *local_218;
  char *local_210;
  FXPBDBendingConstraints *local_208;
  undefined4 *local_200;
  char *local_1f8;
  undefined4 *local_1f0;
  char *local_1e8;
  float *local_1e0;
  FSolverParticles *local_1d8;
  float *local_1d0;
  int *local_1c8;
  char *local_1c0;
  FXPBDBendingConstraints *local_1b8;
  undefined4 *local_1b0;
  char *local_1a8;
  undefined4 *local_1a0;
  char *local_198;
  float *local_190;
  FSolverParticles *local_188;
  float *local_180;
  int *local_178;
  char *local_170;
  FXPBDBendingConstraints *local_168;
  undefined4 *local_160;
  char *local_158;
  undefined4 *local_150;
  char *local_148;
  float *local_140;
  FSolverParticles *local_138;
  float *local_130;
  FName local_128;
  TArrayView<float_const_,int> local_120;
  float *local_110;
  undefined8 uStack_108;
  float *local_100;
  undefined8 uStack_f8;
  float *local_f0;
  undefined8 uStack_e8;
  float *local_e0;
  undefined8 uStack_d8;
  float *local_d0;
  undefined8 uStack_c8;
  
  bVar30 = CpuChannel->Enabled < 0;
  local_res18[0] = param_2;
  if (bVar30) {
    local_res20 = '\0';
  }
  else {
    local_res20 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId280,"FXPBDBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
               ,0x118);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId280);
  }
  cVar22 = !bVar30;
  uVar25 = 0;
  FVar14 = StatPtr_STAT_XPBD_Bending;
  if (StatPtr_STAT_XPBD_Bending == (FThreadSafeStaticStat<FStat_STAT_XPBD_Bending>)0x0) {
    pFVar13 = ::FName::FName(&local_128,"STAT_XPBD_Bending");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_XPBD_Bending>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_Bending,*pFVar13,
                        L"Chaos XPBD Bending Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar23 = 0;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  local_2e5 = 0;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_143eedd69:
    local_2d0 = local_258;
    FVar19 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_298 = (TVector<float,2> *)((ulonglong)local_298 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_298,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar23 = 1;
      local_2e5 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_260.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_260.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_260,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                   ,0x119);
        bVar23 = 3;
        local_2e5 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143eedd69;
    local_2e0 = FVar19;
    local_2d0 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    local_2e5 = bVar23 | 4;
  }
  if (((this->XPBDStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e8 = '\0';
  }
  else {
    local_2e8 = '\x01';
  }
  if (((this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e7 = '\0';
  }
  else {
    local_2e7 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_2e6 = '\0';
  }
  else {
    local_2e6 = '\x01';
  }
  iVar20 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar20 < 1) || ((int)*plVar1 <= Chaos_XPBDBending_ParallelConstraintCount)) {
    pTVar2 = &(this->XPBDStiffness).MapView.OffsetRange;
    pTVar3 = &(this->XPBDBucklingStiffness).MapView.OffsetRange;
    pTVar4 = &(this->DampingRatio).MapView.OffsetRange;
    fVar6 = *(float *)pTVar2;
    fVar7 = *(float *)pTVar4;
    fVar8 = *(float *)pTVar3;
    if ((local_2e6 != '\0') || (local_2d8 = pTVar4, local_298 = pTVar2, 0.0 < fVar7)) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < (int)*plVar1) {
          do {
            iVar20 = (int)uVar25;
            fVar33 = fVar6;
            if (local_2e8 != '\0') {
              fVar33 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
              fVar32 = *(float *)pTVar2;
              pfVar15 = TArrayView<float_const_,int>::operator[]
                                  (&(this->XPBDStiffness).MapView.MapValues,iVar20);
              fVar33 = fVar33 * *pfVar15 + fVar32;
            }
            fVar32 = fVar8;
            if (local_2e7 != '\0') {
              fVar32 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
              fVar31 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
              pfVar15 = TArrayView<float_const_,int>::operator[]
                                  (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar20);
              fVar32 = fVar32 * *pfVar15 + fVar31;
            }
            fVar31 = fVar7;
            if (local_2e6 != '\0') {
              fVar31 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar9 = *(float *)pTVar4;
              pfVar15 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar20);
              fVar31 = fVar31 * *pfVar15 + fVar9;
            }
            ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,local_res18[0],iVar20,fVar33,fVar32,fVar31);
            uVar25 = (ulonglong)(iVar20 + 1U);
            FVar19 = local_2d0;
            cVar22 = local_res20;
          } while ((int)(iVar20 + 1U) < (int)*plVar1);
        }
        goto LAB_143eef47e;
      }
      local_2e0 = (FName)pTVar3;
      local_298 = pTVar2;
      if (0 < (int)*plVar1) {
        do {
          iVar20 = (int)uVar25;
          fVar33 = fVar6;
          if (local_2e8 != '\0') {
            fVar33 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
            fVar32 = *(float *)pTVar2;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->XPBDStiffness).MapView.MapValues,iVar20);
            fVar33 = fVar33 * *pfVar15 + fVar32;
          }
          fVar32 = fVar8;
          if (local_2e7 != '\0') {
            fVar32 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
            fVar31 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar20);
            fVar32 = fVar32 * *pfVar15 + fVar31;
          }
          fVar31 = fVar7;
          if (local_2e6 != '\0') {
            fVar31 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar9 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar15 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar20);
            fVar31 = fVar31 * *pfVar15 + fVar9;
          }
          ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,local_res18[0],iVar20,fVar33,fVar32,fVar31);
          uVar25 = (ulonglong)(iVar20 + 1U);
          FVar19 = local_2d0;
          cVar22 = local_res20;
        } while ((int)(iVar20 + 1U) < (int)*plVar1);
      }
    }
    local_298 = &(this->XPBDStiffness).MapView.OffsetRange;
    pTVar2 = local_298;
    iVar20 = 0;
    if (0 < (int)this->_padding_) {
      do {
        fVar33 = fVar6;
        if (local_2e8 != '\0') {
          fVar33 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
          fVar32 = *(float *)pTVar2;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->XPBDStiffness).MapView.MapValues,iVar20);
          fVar33 = fVar33 * *pfVar15 + fVar32;
        }
        fVar32 = fVar8;
        if (local_2e7 != '\0') {
          fVar32 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
          fVar31 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar20);
          fVar32 = fVar32 * *pfVar15 + fVar31;
        }
        fVar31 = fVar7;
        if (local_2e6 != '\0') {
          fVar31 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
          fVar9 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
          pfVar15 = TArrayView<float_const_,int>::operator[]
                              (&(this->DampingRatio).MapView.MapValues,iVar20);
          fVar31 = fVar31 * *pfVar15 + fVar9;
        }
        ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
                  (this,param_1,local_res18[0],iVar20,fVar33,fVar32,fVar31);
        iVar20 = iVar20 + 1;
        FVar19 = local_2d0;
        cVar22 = local_res20;
      } while (iVar20 < (int)this->_padding_);
    }
    goto LAB_143eef47e;
  }
  iVar20 = iVar20 + -1;
  FVar24 = (FName)(longlong)iVar20;
  local_2e0 = FVar24;
  if (bChaos_XPBDBending_ISPC_Enabled == false) {
    local_2c0 = *(undefined4 *)&(this->XPBDStiffness).MapView.OffsetRange;
    local_2bc = *(undefined4 *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
    local_2b8[0] = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar16 = 0;
    uVar28 = uVar25;
    if ((local_2e6 != '\0') || (0.0 < local_2b8[0])) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < iVar20) {
          do {
            uVar18 = (uint)uVar25;
            uVar17 = uVar16;
            if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar18 = uVar18 + 1;
            uVar25 = (ulonglong)uVar18;
            local_2a0[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar28 * 4);
            uVar17 = 0;
            if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar18 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_178 = local_2a0;
            local_170 = &local_2e8;
            local_160 = &local_2c0;
            local_228 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l58::<lambda_2>,void,int>
                        ::Call;
            local_158 = &local_2e7;
            local_150 = &local_2bc;
            local_148 = &local_2e6;
            local_140 = local_2b8;
            local_130 = local_res18;
            local_220 = &local_178;
            local_168 = this;
            local_138 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar28 * 4 + 4) - local_2a0[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_228,false);
            uVar28 = uVar28 + 1;
            FVar19 = local_2d0;
            cVar22 = local_res20;
          } while ((longlong)uVar28 < (longlong)FVar24);
        }
        goto LAB_143eef47e;
      }
      uVar26 = uVar25;
      uVar27 = uVar25;
      if (iVar20 < 1) goto LAB_143eeeddf;
      do {
        uVar18 = (uint)uVar26;
        uVar17 = 0;
        if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar18 = uVar18 + 1;
        local_2a8 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            uVar27 * 4);
        uVar17 = uVar16;
        if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_218 = &local_2a8;
        local_210 = &local_2e8;
        local_200 = &local_2c0;
        local_248 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
                    ::Call;
        local_1f8 = &local_2e7;
        local_1f0 = &local_2bc;
        local_1e8 = &local_2e6;
        local_1e0 = local_2b8;
        local_1d0 = local_res18;
        local_240 = &local_218;
        local_208 = this;
        local_1d8 = param_1;
        PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar27 * 4 + 4) - local_2a8,
                           (TFunctionRef<void___cdecl(int)> *)&local_248,false);
        uVar27 = uVar27 + 1;
        uVar26 = (ulonglong)uVar18;
        FVar11 = local_2e0;
      } while ((longlong)uVar27 < (longlong)FVar24);
    }
    else {
LAB_143eeeddf:
      FVar11 = FVar24;
      if (iVar20 < 1) goto LAB_143eef47e;
    }
    do {
      uVar18 = (uint)uVar28;
      uVar17 = uVar16;
      if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = uVar18 + 1;
      local_2a4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar25 * 4
                          );
      uVar17 = uVar16;
      if ((int)uVar18 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_1c8 = &local_2a4;
      local_1c0 = &local_2e8;
      local_1b0 = &local_2c0;
      local_238 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l60::<lambda_3>,void,int>
                  ::Call;
      local_1a8 = &local_2e7;
      local_1a0 = &local_2bc;
      local_198 = &local_2e6;
      local_190 = local_2b8;
      local_180 = local_res18;
      local_230 = &local_1c8;
      local_1b8 = this;
      local_188 = param_1;
      PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 uVar25 * 4 + 4) - local_2a4,
                         (TFunctionRef<void___cdecl(int)> *)&local_238,false);
      uVar25 = uVar25 + 1;
      FVar19 = local_2d0;
      uVar28 = (ulonglong)uVar18;
      cVar22 = local_res20;
    } while ((longlong)uVar25 < (longlong)FVar11);
    goto LAB_143eef47e;
  }
  if ((local_2e8 == '\0') && (local_2e7 == '\0')) {
    if (local_2e6 == '\0') {
      fVar6 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange;
      fVar7 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
      fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if ((0.0 < fVar6) || (0.0 < fVar7)) {
        if (0.0 < fVar8) {
          if (bChaos_XPBDBending_SplitLambdaDamping == false) {
            if (0 < iVar20) {
              local_2d8 = (TVector<float,2> *)0x0;
              do {
                pTVar2 = local_2d8;
                uVar17 = (uint)uVar25;
                uVar16 = 0;
                if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                uVar17 = uVar17 + 1;
                iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pTVar2 * 4);
                lVar29 = (longlong)iVar20;
                uVar16 = 0;
                if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                  uVar16 = ~uVar17 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar30)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                local_2c8 = (this->Lambdas).AllocatorInstance.Data + lVar29 * 4;
                ApplyXPBDBendingConstraintsWithDamping
                          (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                           (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                           this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,local_2c8,
                           local_res18[0],fVar6,fVar7,fVar8,
                           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pTVar2 * 4 + 4) - iVar20);
                uVar25 = (ulonglong)uVar17;
                local_2d8 = (TVector<float,2> *)((longlong)local_2d8 + 1);
                FVar19 = local_2d0;
                cVar22 = local_res20;
              } while ((longlong)local_2d8 < (longlong)local_2e0);
            }
            goto LAB_143eef47e;
          }
          if (0 < iVar20) {
            local_2d8 = (TVector<float,2> *)0x0;
            do {
              pTVar2 = local_2d8;
              uVar17 = (uint)uVar25;
              uVar16 = 0;
              if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar16 = ~uVar17 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_2e4 = uVar17 + 1;
              iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pTVar2 * 4);
              lVar29 = (longlong)iVar20;
              uVar16 = 0;
              if ((int)local_2e4 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar16 = ~local_2e4 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_2c8 = (this->LambdasDamping).AllocatorInstance.Data + lVar29 * 4;
              ApplyXPBDBendingDampingConstraints
                        (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                         (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                         this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,local_2c8,
                         local_res18[0],fVar6,fVar7,fVar8,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pTVar2 * 4 + 4) - iVar20);
              local_2d8 = (TVector<float,2> *)((longlong)local_2d8 + 1);
              uVar25 = (ulonglong)local_2e4;
              FVar19 = local_2d0;
              cVar22 = local_res20;
            } while ((longlong)local_2d8 < (longlong)local_2e0);
          }
        }
        FVar24 = local_2e0;
        uVar16 = 0;
        if (0 < (longlong)local_2e0) {
          lVar29 = 0;
          do {
            uVar17 = 0;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar16 = uVar16 + 1;
            iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             lVar29 * 4);
            lVar21 = (longlong)iVar20;
            uVar17 = 0;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            ApplyXPBDBendingConstraints
                      (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                       (this->ConstraintsIndex1).AllocatorInstance.Data + lVar21 * 4,
                       (this->ConstraintsIndex2).AllocatorInstance.Data + lVar21 * 4,
                       (this->ConstraintsIndex3).AllocatorInstance.Data + lVar21 * 4,
                       (this->ConstraintsIndex4).AllocatorInstance.Data + lVar21 * 4,
                       this->_padding_ + lVar21 * 4,this->_padding_ + lVar21,
                       (this->Lambdas).AllocatorInstance.Data + lVar21 * 4,local_res18[0],fVar6,
                       fVar7,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar29 * 4 + 4) - iVar20);
            lVar29 = lVar29 + 1;
            FVar19 = local_2d0;
            cVar22 = local_res20;
          } while (lVar29 < (longlong)FVar24);
        }
      }
      goto LAB_143eef47e;
    }
LAB_143eee427:
    local_2e4 = 0;
    if (bChaos_XPBDBending_SplitLambdaDamping == false) {
      if (0 < iVar20) {
        local_2b0 = (FScriptContainerElement *)&(this->DampingRatio).MapView.OffsetRange;
        local_268 = &(this->XPBDBucklingStiffness).MapView.OffsetRange;
        local_290 = (float *)0x0;
        local_270 = &(this->XPBDStiffness).MapView.OffsetRange;
        do {
          pfVar15 = local_290;
          uVar17 = (uint)uVar25;
          uVar16 = 0;
          if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar16 = *(uint *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pfVar15 * 4);
          lVar29 = (longlong)(int)uVar16;
          uVar18 = 0;
          if ((int)(uVar17 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~(uVar17 + 1) >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_2d8 = (TVector<float,2> *)
                      CONCAT44(local_2d8._4_4_,
                               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar15 * 4 + 4) - uVar16);
          if (local_2e6 == '\0') {
            local_2c8 = (FScriptContainerElement *)0x0;
          }
          else {
            local_110 = (this->DampingRatio).MapView.MapValues.DataPtr;
            uStack_108 = *(undefined8 *)&(this->DampingRatio).MapView.MapValues.ArrayNum;
            uVar17 = 0;
            if ((int)uVar16 < (int)*(undefined8 *)&(this->DampingRatio).MapView.MapValues.ArrayNum)
            {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar30)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_2c8 = (FScriptContainerElement *)(local_110 + lVar29);
          }
          if (local_2e7 == '\0') {
            local_280 = (float *)0x0;
          }
          else {
            local_d0 = (this->XPBDBucklingStiffness).MapView.MapValues.DataPtr;
            uStack_c8 = *(undefined8 *)&(this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum;
            local_280 = local_d0 + lVar29;
          }
          if (local_2e8 == '\0') {
            local_288 = (float *)0x0;
          }
          else {
            local_288 = (this->XPBDStiffness).MapView.MapValues.DataPtr + lVar29;
          }
          local_278 = (this->Lambdas).AllocatorInstance.Data + lVar29 * 4;
          ApplyXPBDBendingConstraintsWithDampingAndMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                     (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                     (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                     (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                     (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                     this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,local_278,local_res18[0],
                     local_2e8,local_270,local_288,local_2e7,local_268,local_280,local_2e6,local_2b0
                     ,local_2c8,local_2d8._0_4_);
          local_2e4 = local_2e4 + 1;
          uVar25 = (ulonglong)local_2e4;
          local_290 = (float *)((longlong)local_290 + 1);
          FVar19 = local_2d0;
          cVar22 = local_res20;
        } while ((longlong)local_290 < (longlong)FVar24);
      }
      goto LAB_143eef47e;
    }
    if (iVar20 < 1) goto LAB_143eee70e;
    local_278 = (FScriptContainerElement *)&(this->DampingRatio).MapView.OffsetRange;
    local_270 = &(this->XPBDBucklingStiffness).MapView.OffsetRange;
    local_2c8 = (FScriptContainerElement *)0x0;
    local_268 = &(this->XPBDStiffness).MapView.OffsetRange;
    do {
      pFVar12 = local_2c8;
      uVar17 = (uint)uVar25;
      uVar16 = 0;
      if ((int)uVar17 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pFVar12 * 4);
      lVar29 = (longlong)iVar20;
      uVar16 = 0;
      if ((int)(uVar17 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar16 = ~(uVar17 + 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_2d8 = (TVector<float,2> *)
                  CONCAT44(local_2d8._4_4_,
                           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pFVar12 * 4 + 4) - iVar20);
      if (local_2e6 == '\0') {
        local_290 = (float *)0x0;
      }
      else {
        local_120.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_120.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_120._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_290 = TArrayView<float_const_,int>::operator[](&local_120,iVar20);
      }
      lVar21 = lVar29 * 4;
      if (local_2e7 == '\0') {
        local_288 = (float *)0x0;
      }
      else {
        local_100 = (this->XPBDBucklingStiffness).MapView.MapValues.DataPtr;
        uStack_f8 = *(undefined8 *)&(this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum;
        local_288 = local_100 + lVar29;
      }
      if (local_2e8 == '\0') {
        local_280 = (float *)0x0;
      }
      else {
        local_f0 = (this->XPBDStiffness).MapView.MapValues.DataPtr;
        uStack_e8 = *(undefined8 *)&(this->XPBDStiffness).MapView.MapValues.ArrayNum;
        local_280 = local_f0 + lVar29;
      }
      local_2b0 = (this->LambdasDamping).AllocatorInstance.Data + lVar21;
      ApplyXPBDBendingDampingConstraintsWithMaps
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                 (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->ConstraintsIndex1).AllocatorInstance.Data + lVar21,
                 (this->ConstraintsIndex2).AllocatorInstance.Data + lVar21,
                 (this->ConstraintsIndex3).AllocatorInstance.Data + lVar21,
                 (this->ConstraintsIndex4).AllocatorInstance.Data + lVar21,this->_padding_ + lVar21,
                 this->_padding_ + lVar29,local_2b0,local_res18[0],local_2e8,local_268,local_280,
                 local_2e7,local_270,local_288,local_2e6,local_278,local_290,local_2d8._0_4_);
      local_2e4 = local_2e4 + 1;
      uVar25 = (ulonglong)local_2e4;
      local_2c8 = local_2c8 + 1;
    } while ((longlong)local_2c8 < (longlong)FVar24);
  }
  else {
    if ((local_2e6 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143eee427;
LAB_143eee70e:
    if (iVar20 < 1) goto LAB_143eef47e;
  }
  uVar16 = 0;
  lVar29 = 0;
  do {
    uVar17 = 0;
    if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar17 = ~uVar16 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar29 * 4);
    lVar21 = (longlong)iVar20;
    uVar17 = 0;
    if ((int)(uVar16 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar17 = ~(uVar16 + 1) >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar5 = lVar21 * 4;
    if (local_2e7 == '\0') {
      local_res8 = (float *)0x0;
    }
    else {
      local_res8 = (this->XPBDBucklingStiffness).MapView.MapValues.DataPtr + lVar21;
    }
    if (local_2e8 == '\0') {
      local_2c8 = (FScriptContainerElement *)0x0;
    }
    else {
      local_e0 = (this->XPBDStiffness).MapView.MapValues.DataPtr;
      uStack_d8 = *(undefined8 *)&(this->XPBDStiffness).MapView.MapValues.ArrayNum;
      local_2c8 = (FScriptContainerElement *)(local_e0 + lVar21);
    }
    ApplyXPBDBendingConstraintsWithMaps
              (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
               (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5,this->_padding_ + lVar5,
               this->_padding_ + lVar21,(this->Lambdas).AllocatorInstance.Data + lVar5,
               local_res18[0],local_2e8,&(this->XPBDStiffness).MapView.OffsetRange,local_2c8,
               local_2e7,&(this->XPBDBucklingStiffness).MapView.OffsetRange,local_res8,
               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       lVar29 * 4 + 4) - iVar20);
    uVar16 = uVar16 + 1;
    lVar29 = lVar29 + 1;
    FVar19 = local_2d0;
    cVar22 = local_res20;
  } while (lVar29 < (longlong)local_2e0);
LAB_143eef47e:
  bVar23 = local_2e5;
  if ((local_2e5 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar23 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar23 & 4) != 0) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  if (cVar22 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143ef6710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *plVar1;
  TVector<float,2> *pTVar2;
  TVector<float,2> *pTVar3;
  TVector<float,2> *pTVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  code *pcVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_XPBD_Bending> FVar19;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  FName FVar25;
  char cVar26;
  byte bVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  FName FVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_res18 [2];
  char local_res20;
  char local_358;
  char local_357;
  char local_356;
  char local_355;
  byte local_354;
  char local_353;
  uint local_350;
  char local_34c;
  TVector<float,2> *local_348;
  float *local_340;
  FName local_338;
  FName local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  FScriptContainerElement *local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  float local_2f8 [2];
  FScriptContainerElement *local_2f0;
  int local_2e8;
  int local_2e4;
  int local_2e0 [2];
  TVector<float,2> *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  FScriptContainerElement *local_2c0;
  FName local_2b8;
  FName local_2b0;
  code *local_2a0;
  int **local_298;
  code *local_290;
  int **local_288;
  code *local_280;
  int **local_278;
  int *local_270;
  char *local_268;
  FXPBDBendingConstraints *local_260;
  undefined4 *local_258;
  char *local_250;
  undefined4 *local_248;
  char *local_240;
  float *local_238;
  FSolverParticlesRange *local_230;
  float *local_228;
  int *local_220;
  char *local_218;
  FXPBDBendingConstraints *local_210;
  undefined4 *local_208;
  char *local_200;
  undefined4 *local_1f8;
  char *local_1f0;
  float *local_1e8;
  FSolverParticlesRange *local_1e0;
  float *local_1d8;
  int *local_1d0;
  char *local_1c8;
  FXPBDBendingConstraints *local_1c0;
  undefined4 *local_1b8;
  char *local_1b0;
  undefined4 *local_1a8;
  char *local_1a0;
  float *local_198;
  FSolverParticlesRange *local_190;
  float *local_188;
  FName local_180;
  TArrayView<float_const_,int> local_178;
  float *local_168;
  undefined8 uStack_160;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_158;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_148;
  float *local_138;
  undefined8 uStack_130;
  float *local_128;
  undefined8 uStack_120;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_118;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f8;
  float *local_e8;
  undefined8 uStack_e0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_d8;
  float *local_c8;
  undefined8 uStack_c0;
  
  bVar35 = CpuChannel->Enabled < 0;
  local_res18[0] = param_2;
  if (bVar35) {
    local_res20 = '\0';
  }
  else {
    local_res20 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId280,"FXPBDBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
               ,0x118);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId280);
  }
  cVar26 = !bVar35;
  uVar29 = 0;
  FVar19 = StatPtr_STAT_XPBD_Bending;
  if (StatPtr_STAT_XPBD_Bending == (FThreadSafeStaticStat<FStat_STAT_XPBD_Bending>)0x0) {
    pFVar18 = ::FName::FName(&local_180,"STAT_XPBD_Bending");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_XPBD_Bending>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_Bending,*pFVar18,
                        L"Chaos XPBD Bending Constraint","STATGROUP_Chaos","STATCAT_Advanced",
                        L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar19;
  bVar27 = 0;
  local_2b0.ComparisonIndex.Value = 0;
  local_2b0.Number = 0;
  local_354 = 0;
  if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_143ef68cd:
    local_338 = local_2b0;
    FVar25 = local_2b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2d8 = (TVector<float,2> *)((ulonglong)local_2d8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2d8,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar27 = 1;
      local_354 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_2b8.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_2b8.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                   ,0x119);
        bVar27 = 3;
        local_354 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ef68cd;
    local_338 = FVar25;
    local_330 = FVar25;
    FThreadStats::AddMessage(FVar25,CycleScopeStart);
    local_354 = bVar27 | 4;
  }
  if (((this->XPBDStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_358 = '\0';
  }
  else {
    local_358 = '\x01';
  }
  if (((this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_357 = '\0';
  }
  else {
    local_357 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_356 = '\0';
  }
  else {
    local_356 = '\x01';
  }
  iVar31 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar31 < 1) || ((int)*plVar1 <= Chaos_XPBDBending_ParallelConstraintCount)) {
    pTVar2 = &(this->XPBDStiffness).MapView.OffsetRange;
    pTVar3 = &(this->XPBDBucklingStiffness).MapView.OffsetRange;
    fVar6 = *(float *)pTVar2;
    pTVar4 = &(this->DampingRatio).MapView.OffsetRange;
    fVar7 = *(float *)pTVar4;
    fVar8 = *(float *)pTVar3;
    if ((local_356 != '\0') || (local_348 = pTVar4, local_2d8 = pTVar2, 0.0 < fVar7)) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < (int)*plVar1) {
          do {
            iVar31 = (int)uVar29;
            fVar38 = fVar6;
            if (local_358 != '\0') {
              fVar38 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
              fVar37 = *(float *)pTVar2;
              pfVar21 = TArrayView<float_const_,int>::operator[]
                                  (&(this->XPBDStiffness).MapView.MapValues,iVar31);
              fVar38 = fVar38 * *pfVar21 + fVar37;
            }
            fVar37 = fVar8;
            if (local_357 != '\0') {
              fVar37 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
              fVar36 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
              pfVar21 = TArrayView<float_const_,int>::operator[]
                                  (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar31);
              fVar37 = fVar37 * *pfVar21 + fVar36;
            }
            fVar36 = fVar7;
            if (local_356 != '\0') {
              fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar9 = *(float *)pTVar4;
              pfVar21 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar31);
              fVar36 = fVar36 * *pfVar21 + fVar9;
            }
            ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,local_res18[0],iVar31,fVar38,fVar37,fVar36);
            uVar29 = (ulonglong)(iVar31 + 1U);
            FVar25 = local_338;
            cVar26 = local_res20;
          } while ((int)(iVar31 + 1U) < (int)*plVar1);
        }
        goto LAB_143ef8149;
      }
      local_330 = (FName)pTVar3;
      local_2d8 = pTVar2;
      if (0 < (int)*plVar1) {
        do {
          iVar31 = (int)uVar29;
          fVar38 = fVar6;
          if (local_358 != '\0') {
            fVar38 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)pTVar2;
            pfVar21 = TArrayView<float_const_,int>::operator[]
                                (&(this->XPBDStiffness).MapView.MapValues,iVar31);
            fVar38 = fVar38 * *pfVar21 + fVar37;
          }
          fVar37 = fVar8;
          if (local_357 != '\0') {
            fVar37 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
            pfVar21 = TArrayView<float_const_,int>::operator[]
                                (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar31);
            fVar37 = fVar37 * *pfVar21 + fVar36;
          }
          fVar36 = fVar7;
          if (local_356 != '\0') {
            fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar9 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar21 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar31);
            fVar36 = fVar36 * *pfVar21 + fVar9;
          }
          ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],iVar31,fVar38,fVar37,fVar36);
          uVar29 = (ulonglong)(iVar31 + 1U);
          FVar25 = local_338;
          cVar26 = local_res20;
        } while ((int)(iVar31 + 1U) < (int)*plVar1);
      }
    }
    local_2d8 = &(this->XPBDStiffness).MapView.OffsetRange;
    pTVar2 = local_2d8;
    iVar31 = 0;
    if (0 < (int)this->_padding_) {
      do {
        fVar38 = fVar6;
        if (local_358 != '\0') {
          fVar38 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4;
          fVar37 = *(float *)pTVar2;
          pfVar21 = TArrayView<float_const_,int>::operator[]
                              (&(this->XPBDStiffness).MapView.MapValues,iVar31);
          fVar38 = fVar38 * *pfVar21 + fVar37;
        }
        fVar37 = fVar8;
        if (local_357 != '\0') {
          fVar37 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4;
          fVar36 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
          pfVar21 = TArrayView<float_const_,int>::operator[]
                              (&(this->XPBDBucklingStiffness).MapView.MapValues,iVar31);
          fVar37 = fVar37 * *pfVar21 + fVar36;
        }
        fVar36 = fVar7;
        if (local_356 != '\0') {
          fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
          fVar9 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
          pfVar21 = TArrayView<float_const_,int>::operator[]
                              (&(this->DampingRatio).MapView.MapValues,iVar31);
          fVar36 = fVar36 * *pfVar21 + fVar9;
        }
        ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
                  (this,param_1,local_res18[0],iVar31,fVar38,fVar37,fVar36);
        iVar31 = iVar31 + 1;
        FVar25 = local_338;
        cVar26 = local_res20;
      } while (iVar31 < (int)this->_padding_);
    }
    goto LAB_143ef8149;
  }
  iVar31 = iVar31 + -1;
  FVar30 = (FName)(longlong)iVar31;
  local_330 = FVar30;
  if (bChaos_XPBDBending_ISPC_Enabled == false) {
    local_300 = *(undefined4 *)&(this->XPBDStiffness).MapView.OffsetRange;
    local_2fc = *(undefined4 *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
    local_2f8[0] = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar23 = 0;
    uVar34 = uVar29;
    if ((local_356 != '\0') || (0.0 < local_2f8[0])) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < iVar31) {
          do {
            uVar24 = (uint)uVar34;
            uVar22 = uVar23;
            if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            uVar24 = uVar24 + 1;
            local_2e0[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar29 * 4);
            uVar22 = 0;
            if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar24 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            local_270 = local_2e0;
            local_268 = &local_358;
            local_258 = &local_300;
            local_280 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l58::<lambda_2>,void,int>
                        ::Call;
            local_250 = &local_357;
            local_248 = &local_2fc;
            local_240 = &local_356;
            local_238 = local_2f8;
            local_228 = local_res18;
            local_278 = &local_270;
            local_260 = this;
            local_230 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar29 * 4 + 4) - local_2e0[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_280,false);
            uVar29 = uVar29 + 1;
            FVar25 = local_338;
            uVar34 = (ulonglong)uVar24;
            cVar26 = local_res20;
          } while ((longlong)uVar29 < (longlong)FVar30);
        }
        goto LAB_143ef8149;
      }
      uVar28 = uVar29;
      uVar33 = uVar29;
      if (iVar31 < 1) goto LAB_143ef7ab6;
      do {
        uVar24 = (uint)uVar33;
        uVar22 = 0;
        if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        uVar24 = uVar24 + 1;
        local_2e8 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            uVar28 * 4);
        uVar22 = uVar23;
        if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        local_220 = &local_2e8;
        local_218 = &local_358;
        local_208 = &local_300;
        local_2a0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
                    ::Call;
        local_200 = &local_357;
        local_1f8 = &local_2fc;
        local_1f0 = &local_356;
        local_1e8 = local_2f8;
        local_1d8 = local_res18;
        local_298 = &local_220;
        local_210 = this;
        local_1e0 = param_1;
        PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar28 * 4 + 4) - local_2e8,
                           (TFunctionRef<void___cdecl(int)> *)&local_2a0,false);
        uVar28 = uVar28 + 1;
        uVar33 = (ulonglong)uVar24;
      } while ((longlong)uVar28 < (longlong)FVar30);
    }
    else {
LAB_143ef7ab6:
      if (iVar31 < 1) goto LAB_143ef8149;
    }
    do {
      uVar24 = (uint)uVar34;
      uVar22 = uVar23;
      if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar24 = uVar24 + 1;
      local_2e4 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + uVar29 * 4
                          );
      uVar22 = uVar23;
      if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar22 = ~uVar24 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      local_1d0 = &local_2e4;
      local_1c8 = &local_358;
      local_1b8 = &local_300;
      local_290 = UE::Core::Private::Function::
                  TFunctionRefCaller<`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l60::<lambda_3>,void,int>
                  ::Call;
      local_1b0 = &local_357;
      local_1a8 = &local_2fc;
      local_1a0 = &local_356;
      local_198 = local_2f8;
      local_188 = local_res18;
      local_288 = &local_1d0;
      local_1c0 = this;
      local_190 = param_1;
      PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 uVar29 * 4 + 4) - local_2e4,
                         (TFunctionRef<void___cdecl(int)> *)&local_290,false);
      uVar29 = uVar29 + 1;
      FVar25 = local_338;
      uVar34 = (ulonglong)uVar24;
      cVar26 = local_res20;
    } while ((longlong)uVar29 < (longlong)FVar30);
    goto LAB_143ef8149;
  }
  if ((local_358 == '\0') && (local_357 == '\0')) {
    if (local_356 == '\0') {
      fVar6 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange;
      fVar7 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
      fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if ((0.0 < fVar6) || (0.0 < fVar7)) {
        if (0.0 < fVar8) {
          if (bChaos_XPBDBending_SplitLambdaDamping == false) {
            if (0 < iVar31) {
              local_340 = (float *)0x0;
              do {
                pfVar21 = local_340;
                uVar22 = (uint)uVar29;
                uVar23 = 0;
                if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                  uVar23 = ~uVar22 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                uVar22 = uVar22 + 1;
                local_348 = (TVector<float,2> *)CONCAT44(local_348._4_4_,uVar22);
                iVar31 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pfVar21 * 4);
                lVar32 = (longlong)iVar31;
                uVar23 = 0;
                if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                  uVar23 = ~uVar22 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                fVar38 = local_res18[0];
                iVar10 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pfVar21 * 4 + 4);
                local_308 = (FScriptContainerElement *)(this->_padding_ + lVar32);
                local_310 = (FScriptContainerElement *)(this->_padding_ + lVar32 * 4);
                local_2f0 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar32 * 4;
                local_318 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar32 * 4;
                local_320 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar32 * 4;
                local_328 = (this->ConstraintsIndex1).AllocatorInstance.Data + lVar32 * 4;
                pFVar11 = (this->X3Array).AllocatorInstance.Data;
                pFVar12 = (this->X2Array).AllocatorInstance.Data;
                pFVar13 = (this->X1Array).AllocatorInstance.Data;
                pFVar14 = (this->Lambdas).AllocatorInstance.Data;
                pFVar15 = (this->X4Array).AllocatorInstance.Data;
                pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_158);
                ApplyXPBDBendingConstraintsWithDamping
                          (pTVar20->DataPtr,pFVar13 + lVar32 * 0xc,pFVar12 + lVar32 * 0xc,
                           pFVar11 + lVar32 * 0xc,pFVar15 + lVar32 * 0xc,local_328,local_320,
                           local_318,local_2f0,local_310,local_308,pFVar14 + lVar32 * 4,fVar38,fVar6
                           ,fVar7,fVar8,iVar10 - iVar31);
                uVar29 = (ulonglong)local_348 & 0xffffffff;
                local_340 = (float *)((longlong)local_340 + 1);
                FVar25 = local_338;
                cVar26 = local_res20;
              } while ((longlong)local_340 < (longlong)local_330);
            }
            goto LAB_143ef8149;
          }
          if (0 < iVar31) {
            local_340 = (float *)0x0;
            do {
              pfVar21 = local_340;
              uVar22 = (uint)uVar29;
              uVar23 = 0;
              if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar23 = ~uVar22 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              uVar22 = uVar22 + 1;
              local_348 = (TVector<float,2> *)CONCAT44(local_348._4_4_,uVar22);
              iVar31 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar21 * 4);
              lVar32 = (longlong)iVar31;
              uVar23 = 0;
              if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar23 = ~uVar22 >> 0x1f;
              }
              if ((uVar23 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              fVar38 = local_res18[0];
              local_350 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                  (longlong)pfVar21 * 4 + 4) - iVar31;
              local_318 = (FScriptContainerElement *)(this->_padding_ + lVar32);
              local_320 = (FScriptContainerElement *)(this->_padding_ + lVar32 * 4);
              local_328 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar32 * 4;
              local_2f0 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar32 * 4;
              local_310 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar32 * 4;
              local_308 = (this->ConstraintsIndex1).AllocatorInstance.Data + lVar32 * 4;
              pFVar11 = (this->X3Array).AllocatorInstance.Data;
              pFVar12 = (this->X2Array).AllocatorInstance.Data;
              pFVar13 = (this->X1Array).AllocatorInstance.Data;
              pFVar14 = (this->LambdasDamping).AllocatorInstance.Data;
              pFVar15 = (this->X4Array).AllocatorInstance.Data;
              pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_108);
              ApplyXPBDBendingDampingConstraints
                        (pTVar20->DataPtr,pFVar13 + lVar32 * 0xc,pFVar12 + lVar32 * 0xc,
                         pFVar11 + lVar32 * 0xc,pFVar15 + lVar32 * 0xc,local_308,local_310,local_2f0
                         ,local_328,local_320,local_318,pFVar14 + lVar32 * 4,fVar38,fVar6,fVar7,
                         fVar8,local_350);
              local_340 = (float *)((longlong)local_340 + 1);
              uVar29 = (ulonglong)local_348 & 0xffffffff;
              FVar25 = local_338;
              cVar26 = local_res20;
            } while ((longlong)local_340 < (longlong)local_330);
          }
        }
        if (0 < (longlong)local_330) {
          local_340 = (float *)0x0;
          uVar23 = 0;
          do {
            pfVar21 = local_340;
            uVar22 = 0;
            if ((int)uVar23 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            uVar23 = uVar23 + 1;
            local_348 = (TVector<float,2> *)CONCAT44(local_348._4_4_,uVar23);
            iVar31 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar21 * 4);
            lVar32 = (longlong)iVar31;
            uVar22 = 0;
            if ((int)uVar23 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            fVar8 = local_res18[0];
            iVar10 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar21 * 4 + 4);
            local_308 = (FScriptContainerElement *)(this->_padding_ + lVar32);
            local_310 = (FScriptContainerElement *)(this->_padding_ + lVar32 * 4);
            pFVar11 = (this->ConstraintsIndex4).AllocatorInstance.Data;
            pFVar12 = (this->ConstraintsIndex3).AllocatorInstance.Data;
            pFVar13 = (this->ConstraintsIndex2).AllocatorInstance.Data;
            pFVar14 = (this->ConstraintsIndex1).AllocatorInstance.Data;
            pFVar15 = (this->Lambdas).AllocatorInstance.Data;
            pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_148);
            ApplyXPBDBendingConstraints
                      (pTVar20->DataPtr,pFVar14 + lVar32 * 4,pFVar13 + lVar32 * 4,
                       pFVar12 + lVar32 * 4,pFVar11 + lVar32 * 4,local_310,local_308,
                       pFVar15 + lVar32 * 4,fVar8,fVar6,fVar7,iVar10 - iVar31);
            local_340 = (float *)((longlong)local_340 + 1);
            FVar25 = local_338;
            cVar26 = local_res20;
            uVar23 = (uint)local_348;
          } while ((longlong)local_340 < (longlong)local_330);
        }
      }
      goto LAB_143ef8149;
    }
LAB_143ef7045:
    local_350 = 0;
    if (bChaos_XPBDBending_SplitLambdaDamping == false) {
      if (0 < iVar31) {
        local_340 = (float *)0x0;
        do {
          pfVar21 = local_340;
          uVar22 = (uint)uVar29;
          uVar23 = 0;
          if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          uVar23 = *(uint *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                            (longlong)pfVar21 * 4);
          lVar32 = (longlong)(int)uVar23;
          uVar24 = 0;
          if ((int)(uVar22 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~(uVar22 + 1) >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          local_348 = (TVector<float,2> *)
                      CONCAT44(local_348._4_4_,
                               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar21 * 4 + 4) - uVar23);
          if (local_356 == '\0') {
            local_318 = (FScriptContainerElement *)0x0;
          }
          else {
            local_168 = (this->DampingRatio).MapView.MapValues.DataPtr;
            uStack_160 = *(undefined8 *)&(this->DampingRatio).MapView.MapValues.ArrayNum;
            uVar22 = 0;
            if ((int)uVar23 < (int)*(undefined8 *)&(this->DampingRatio).MapView.MapValues.ArrayNum)
            {
              uVar22 = ~uVar23 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar35)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            local_318 = (FScriptContainerElement *)(local_168 + lVar32);
          }
          cVar26 = local_356;
          fVar6 = local_res18[0];
          if (local_357 == '\0') {
            local_320 = (FScriptContainerElement *)0x0;
          }
          else {
            local_e8 = (this->XPBDBucklingStiffness).MapView.MapValues.DataPtr;
            uStack_e0 = *(undefined8 *)&(this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum;
            local_320 = (FScriptContainerElement *)(local_e8 + lVar32);
          }
          local_355 = local_357;
          if (local_358 == '\0') {
            local_328 = (FScriptContainerElement *)0x0;
          }
          else {
            local_328 = (FScriptContainerElement *)
                        ((this->XPBDStiffness).MapView.MapValues.DataPtr + lVar32);
          }
          local_353 = local_358;
          local_2c8 = (this->Lambdas).AllocatorInstance.Data + lVar32 * 4;
          local_2d0 = (FScriptContainerElement *)(this->_padding_ + lVar32);
          local_2c0 = (FScriptContainerElement *)(this->_padding_ + lVar32 * 4);
          local_308 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar32 * 4;
          local_310 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar32 * 4;
          local_2f0 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar32 * 4;
          pFVar11 = (this->ConstraintsIndex1).AllocatorInstance.Data;
          pFVar12 = (this->X3Array).AllocatorInstance.Data;
          pFVar13 = (this->X2Array).AllocatorInstance.Data;
          pFVar14 = (this->X1Array).AllocatorInstance.Data;
          pFVar15 = (this->X4Array).AllocatorInstance.Data;
          pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_d8);
          ApplyXPBDBendingConstraintsWithDampingAndMaps
                    (pTVar20->DataPtr,pFVar14 + lVar32 * 0xc,pFVar13 + lVar32 * 0xc,
                     pFVar12 + lVar32 * 0xc,pFVar15 + lVar32 * 0xc,pFVar11 + lVar32 * 4,local_2f0,
                     local_310,local_308,local_2c0,local_2d0,local_2c8,fVar6,local_353,
                     &(this->XPBDStiffness).MapView.OffsetRange,local_328,local_355,
                     &(this->XPBDBucklingStiffness).MapView.OffsetRange,local_320,cVar26,
                     &(this->DampingRatio).MapView.OffsetRange,local_318,(uint)local_348);
          local_350 = local_350 + 1;
          uVar29 = (ulonglong)local_350;
          local_340 = (float *)((longlong)local_340 + 1);
          FVar25 = local_338;
          cVar26 = local_res20;
        } while ((longlong)local_340 < (longlong)local_330);
      }
      goto LAB_143ef8149;
    }
    if (iVar31 < 1) goto LAB_143ef7357;
    local_318 = (FScriptContainerElement *)0x0;
    do {
      pFVar11 = local_318;
      uVar22 = (uint)uVar29;
      uVar23 = 0;
      if ((int)uVar22 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar31 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pFVar11 * 4);
      lVar32 = (longlong)iVar31;
      uVar23 = 0;
      if ((int)(uVar22 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar23 = ~(uVar22 + 1) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      local_348 = (TVector<float,2> *)
                  CONCAT44(local_348._4_4_,
                           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pFVar11 * 4 + 4) - iVar31);
      if (local_356 == '\0') {
        local_340 = (float *)0x0;
      }
      else {
        local_178.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_178.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_178._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_340 = TArrayView<float_const_,int>::operator[](&local_178,iVar31);
      }
      fVar6 = local_res18[0];
      lVar5 = lVar32 * 4;
      local_34c = local_356;
      if (local_357 == '\0') {
        local_328 = (FScriptContainerElement *)0x0;
      }
      else {
        local_138 = (this->XPBDBucklingStiffness).MapView.MapValues.DataPtr;
        uStack_130 = *(undefined8 *)&(this->XPBDBucklingStiffness).MapView.MapValues.ArrayNum;
        local_328 = (FScriptContainerElement *)(local_138 + lVar32);
      }
      local_353 = local_357;
      if (local_358 == '\0') {
        local_320 = (FScriptContainerElement *)0x0;
      }
      else {
        local_128 = (this->XPBDStiffness).MapView.MapValues.DataPtr;
        uStack_120 = *(undefined8 *)&(this->XPBDStiffness).MapView.MapValues.ArrayNum;
        local_320 = (FScriptContainerElement *)(local_128 + lVar32);
      }
      pFVar11 = (this->ConstraintsIndex1).AllocatorInstance.Data;
      local_355 = local_358;
      local_308 = (this->LambdasDamping).AllocatorInstance.Data + lVar5;
      local_310 = (FScriptContainerElement *)(this->_padding_ + lVar32);
      local_2f0 = (FScriptContainerElement *)(this->_padding_ + lVar5);
      local_2c0 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5;
      local_2d0 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5;
      local_2c8 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5;
      pFVar12 = (this->X3Array).AllocatorInstance.Data;
      pFVar13 = (this->X2Array).AllocatorInstance.Data;
      pFVar14 = (this->X1Array).AllocatorInstance.Data;
      pFVar15 = (this->X4Array).AllocatorInstance.Data;
      pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_118);
      ApplyXPBDBendingDampingConstraintsWithMaps
                (pTVar20->DataPtr,pFVar14 + lVar32 * 0xc,pFVar13 + lVar32 * 0xc,
                 pFVar12 + lVar32 * 0xc,pFVar15 + lVar32 * 0xc,pFVar11 + lVar5,local_2c8,local_2d0,
                 local_2c0,local_2f0,local_310,local_308,fVar6,local_355,
                 &(this->XPBDStiffness).MapView.OffsetRange,local_320,local_353,
                 &(this->XPBDBucklingStiffness).MapView.OffsetRange,local_328,local_34c,
                 &(this->DampingRatio).MapView.OffsetRange,local_340,(uint)local_348);
      local_350 = local_350 + 1;
      uVar29 = (ulonglong)local_350;
      local_318 = local_318 + 1;
    } while ((longlong)local_318 < (longlong)local_330);
  }
  else {
    if ((local_356 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143ef7045;
LAB_143ef7357:
    local_350 = 0;
    if (iVar31 < 1) goto LAB_143ef8149;
  }
  local_350 = 0;
  local_328 = (FScriptContainerElement *)0x0;
  do {
    pFVar11 = local_328;
    uVar23 = local_350;
    uVar22 = 0;
    if ((int)local_350 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar22 = ~local_350 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    iVar31 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pFVar11 * 4);
    lVar32 = (longlong)iVar31;
    uVar22 = 0;
    if ((int)(uVar23 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar22 = ~(uVar23 + 1) >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    cVar26 = local_357;
    fVar6 = local_res18[0];
    lVar5 = lVar32 * 4;
    local_348 = (TVector<float,2> *)
                CONCAT44(local_348._4_4_,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pFVar11 * 4 + 4) - iVar31);
    if (local_357 == '\0') {
      local_318 = (FScriptContainerElement *)0x0;
    }
    else {
      local_318 = (FScriptContainerElement *)
                  ((this->XPBDBucklingStiffness).MapView.MapValues.DataPtr + lVar32);
    }
    if (local_358 == '\0') {
      local_320 = (FScriptContainerElement *)0x0;
    }
    else {
      local_c8 = (this->XPBDStiffness).MapView.MapValues.DataPtr;
      uStack_c0 = *(undefined8 *)&(this->XPBDStiffness).MapView.MapValues.ArrayNum;
      local_320 = (FScriptContainerElement *)(local_c8 + lVar32);
    }
    lVar16 = this->_padding_;
    pFVar11 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    pFVar12 = (this->ConstraintsIndex2).AllocatorInstance.Data;
    pFVar13 = (this->ConstraintsIndex1).AllocatorInstance.Data;
    local_355 = local_358;
    local_2c8 = (this->Lambdas).AllocatorInstance.Data + lVar5;
    local_2d0 = (FScriptContainerElement *)(this->_padding_ + lVar32);
    pFVar14 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    pTVar20 = FSolverParticlesRange::GetPAndInvM(param_1,&local_f8);
    ApplyXPBDBendingConstraintsWithMaps
              (pTVar20->DataPtr,pFVar13 + lVar5,pFVar12 + lVar5,pFVar14 + lVar5,pFVar11 + lVar5,
               lVar16 + lVar5,local_2d0,local_2c8,fVar6,local_355,
               &(this->XPBDStiffness).MapView.OffsetRange,local_320,cVar26,
               &(this->XPBDBucklingStiffness).MapView.OffsetRange,local_318,
               (ulonglong)local_348 & 0xffffffff);
    local_350 = local_350 + 1;
    local_328 = local_328 + 1;
    FVar25 = local_338;
    cVar26 = local_res20;
  } while ((longlong)local_328 < (longlong)local_330);
LAB_143ef8149:
  bVar27 = local_354;
  if ((local_354 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar27 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar27 & 4) != 0) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  if (cVar26 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<1,0,Chaos::Softs::FSolverParticles> @ 143efad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  TVector<float,3> *pTVar17;
  TVector<float,3> *pTVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  float local_148;
  float local_144;
  int local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar20 = (longlong)param_3;
  iVar4 = (int)this->_padding_;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar12 = 0;
  if (param_3 < iVar4) {
    uVar12 = uVar19;
  }
  if ((uVar12 == 0) &&
     (local_158 = lVar20, local_150 = (longlong)iVar4,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar7 = this->_padding_;
  iVar4 = *(int *)(lVar7 + lVar20 * 0x10);
  local_144 = *(float *)(lVar7 + 4 + lVar20 * 0x10);
  iVar5 = *(int *)(lVar7 + 8 + lVar20 * 0x10);
  local_148 = *(float *)(lVar7 + 0xc + lVar20 * 0x10);
  iVar6 = (int)this->_padding_;
  uVar12 = 0;
  if (param_3 < iVar6) {
    uVar12 = uVar19;
  }
  local_140 = iVar5;
  local_13c = (float)iVar4;
  if ((uVar12 == 0) &&
     (local_158 = lVar20, local_150 = (longlong)iVar6,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(char *)(lVar20 + this->_padding_) != '\0') {
    param_4 = param_5;
  }
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)local_144);
  pfVar14 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar25 = *pfVar13;
  fVar1 = *pfVar14;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar24 = local_148;
  fVar2 = *pfVar13;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)local_148);
  fVar25 = fVar2 + *pfVar13 + fVar1 + fVar25;
  if ((fVar25 <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                          ,0xf9,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar15 = FSolverParticles::P(param_1,(int)fVar24);
  pTVar16 = FSolverParticles::P(param_1,local_140);
  pTVar17 = FSolverParticles::P(param_1,(int)local_144);
  pTVar18 = FSolverParticles::P(param_1,(int)local_13c);
  FPBDBendingConstraintsBase::CalcAngle(pTVar18,pTVar17,pTVar16,pTVar15);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticles>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,param_1,param_3);
  fVar2 = local_13c;
  pTVar15 = FSolverParticles::P(param_1,(int)local_13c);
  pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,(int)fVar2);
  fVar1 = local_144;
  local_114 = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar16->field_0x8;
  local_11c = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4;
  local_118 = *(float *)pTVar15 - *(float *)pTVar16;
  pTVar15 = FSolverParticles::P(param_1,(int)local_144);
  pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,(int)fVar1);
  local_120 = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar16->field_0x8;
  local_128 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4;
  local_124 = *(float *)pTVar15 - *(float *)pTVar16;
  pTVar15 = FSolverParticles::P(param_1,local_140);
  pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_140);
  local_12c = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar16->field_0x8;
  local_134 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4;
  local_130 = *(float *)pTVar15 - *(float *)pTVar16;
  pTVar15 = FSolverParticles::P(param_1,(int)local_148);
  pTVar16 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,(int)local_148);
  iVar4 = (this->LambdasDamping).ArrayNum;
  local_138 = *(float *)&pTVar15->field_0x8 - *(float *)&pTVar16->field_0x8;
  local_144 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4;
  local_13c = *(float *)pTVar15 - *(float *)pTVar16;
  uVar12 = 0;
  if (param_3 < iVar4) {
    uVar12 = uVar19;
  }
  if ((uVar12 == 0) &&
     (local_158 = lVar20, local_150 = (longlong)iVar4,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar8 = (this->LambdasDamping).AllocatorInstance.Data;
  fVar22 = (param_6 + param_6) * SQRT(param_4 / fVar25) * param_2;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar2);
  fVar25 = *pfVar13;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar1);
  iVar4 = local_140;
  fVar24 = *pfVar13;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_140);
  fVar10 = local_148;
  fVar23 = local_f4 * local_f4;
  fVar21 = local_f0 * local_f0;
  fVar3 = *pfVar13;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)local_148);
  local_148 = (float)((uint)((local_ec * local_13c + local_e8 * local_144 + local_e4 * local_138 +
                              local_f4 * local_134 + local_f8 * local_130 + local_f0 * local_12c +
                             local_100 * local_128 + local_104 * local_124 + local_fc * local_120 +
                             local_10c * local_11c + local_110 * local_118 + local_108 * local_114)
                            * fVar22) ^ __xmm_80000000800000008000000080000000) -
              *(float *)(pFVar8 + lVar20 * 4);
  fVar24 = local_148 /
           (((local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * *pfVar13 +
             (local_100 * local_100 + local_104 * local_104 + local_fc * local_fc) * fVar24 +
            (fVar23 + local_f8 * local_f8 + fVar21) * fVar3 +
            (local_10c * local_10c + local_110 * local_110 + local_108 * local_108) * fVar25) *
            fVar22 + __real_3f800000);
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar2);
  fVar25 = fVar24 * *pfVar13;
  pTVar15 = FSolverParticles::P(param_1,(int)fVar2);
  *(float *)pTVar15 = fVar25 * local_110 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar25 * local_10c + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar25 * local_108 + *(float *)&pTVar15->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar1);
  fVar25 = fVar24 * *pfVar13;
  pTVar15 = FSolverParticles::P(param_1,(int)fVar1);
  *(float *)pTVar15 = fVar25 * local_104 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar25 * local_100 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar25 * local_fc + *(float *)&pTVar15->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar25 = fVar24 * *pfVar13;
  pTVar15 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar15 = fVar25 * local_f8 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar25 * local_f4 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar25 * local_f0 + *(float *)&pTVar15->field_0x8;
  pfVar13 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar10);
  fVar25 = fVar24 * *pfVar13;
  pTVar15 = FSolverParticles::P(param_1,(int)fVar10);
  *(float *)pTVar15 = fVar25 * local_ec + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar25 * local_e8 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar25 * local_e4 + *(float *)&pTVar15->field_0x8;
  *(float *)(pFVar8 + lVar20 * 4) = fVar24 + *(float *)(pFVar8 + lVar20 * 4);
  return;
}

// ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange> @ 143efbc80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  TVector<float,3> *pTVar15;
  TVector<float,3> *pTVar16;
  longlong lVar17;
  uint uVar18;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  int local_148;
  int local_144;
  float local_140;
  TVector<float,3> *local_138;
  TVector<float,3> *local_130;
  float local_128;
  float *local_120;
  longlong local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar17 = (longlong)param_3;
  iVar3 = (int)this->_padding_;
  uVar18 = (uint)~param_3 >> 0x1f;
  uVar11 = 0;
  if (param_3 < iVar3) {
    uVar11 = uVar18;
  }
  local_128 = param_2;
  if ((uVar11 == 0) &&
     (local_158 = lVar17, local_150 = (longlong)iVar3,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = this->_padding_;
  iVar3 = *(int *)(lVar6 + 4 + lVar17 * 0x10);
  local_144 = *(int *)(lVar6 + 8 + lVar17 * 0x10);
  iVar4 = *(int *)(lVar6 + lVar17 * 0x10);
  local_148 = *(int *)(lVar6 + 0xc + lVar17 * 0x10);
  iVar5 = (int)this->_padding_;
  uVar11 = 0;
  if (param_3 < iVar5) {
    uVar11 = uVar18;
  }
  local_140 = (float)iVar3;
  local_118 = lVar17;
  if ((uVar11 == 0) &&
     (local_158 = lVar17, local_150 = (longlong)iVar5,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (*(char *)(this->_padding_ + lVar17) != '\0') {
    param_4 = param_5;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_138 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar3);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_144 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar14 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_148 + *(int *)&param_1->field_0x10);
  fVar21 = *pfVar14 + *pfVar13 + *pfVar12 + *(float *)local_138;
  if ((fVar21 <= 0.0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                          ,0xf9,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_138 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_148 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_130 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_144 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar24 = local_140;
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + (int)local_140);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  FPBDBendingConstraintsBase::CalcAngle(pTVar16,pTVar15,local_130,local_138);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticlesRange>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,param_1,param_3);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar19 = *(float *)pTVar15;
  fVar20 = *(float *)pTVar16;
  local_138 = (TVector<float,3> *)
              CONCAT44(local_138._4_4_,*(float *)&pTVar15->field_0x8 - *(float *)&pTVar16->field_0x8
                      );
  local_130 = (TVector<float,3> *)
              CONCAT44(local_130._4_4_,*(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4
                      );
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + (int)fVar24);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + (int)fVar24);
  fVar26 = *(float *)&pTVar15->field_0x8;
  local_140 = *(float *)&pTVar15->field_0x4 - *(float *)&pTVar16->field_0x4;
  fVar36 = *(float *)&pTVar16->field_0x8;
  local_120 = (float *)CONCAT44(local_120._4_4_,*(float *)pTVar15 - *(float *)pTVar16);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                local_144 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       local_144 + *(int *)&param_1->field_0x10);
  fVar25 = *(float *)&pTVar15->field_0x8;
  fVar29 = *(float *)&pTVar15->field_0x4;
  fVar27 = *(float *)pTVar15;
  fVar33 = *(float *)&pTVar16->field_0x8;
  fVar34 = *(float *)&pTVar16->field_0x4;
  fVar31 = *(float *)pTVar16;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                local_148 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar16 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       local_148 + *(int *)&param_1->field_0x10);
  fVar1 = *(float *)&pTVar15->field_0x8;
  fVar23 = *(float *)&pTVar15->field_0x4;
  fVar22 = *(float *)pTVar15;
  fVar28 = *(float *)&pTVar16->field_0x8;
  fVar2 = *(float *)&pTVar16->field_0x4;
  fVar30 = *(float *)pTVar16;
  iVar3 = (this->LambdasDamping).ArrayNum;
  uVar11 = 0;
  if (param_3 < iVar3) {
    uVar11 = uVar18;
  }
  if ((uVar11 == 0) &&
     (local_158 = lVar17, local_150 = (longlong)iVar3,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar9 = local_100;
  fVar35 = (fVar19 - fVar20) * local_110;
  pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
  fVar22 = (fVar22 - fVar30) * local_ec;
  fVar27 = (fVar27 - fVar31) * local_f8;
  fVar31 = (fVar23 - fVar2) * local_e8;
  fVar34 = (fVar29 - fVar34) * local_f4;
  fVar29 = (fVar1 - fVar28) * local_e4;
  fVar33 = (fVar25 - fVar33) * local_f0;
  fVar19 = local_120._0_4_ * local_104;
  fVar25 = (param_6 + param_6) * SQRT(param_4 / fVar21) * local_128;
  fVar36 = (fVar26 - fVar36) * local_fc;
  fVar26 = local_100 * local_140;
  fVar21 = local_130._0_4_ * local_10c;
  local_130 = (TVector<float,3> *)CONCAT44(local_130._4_4_,local_fc * local_fc);
  fVar20 = local_138._0_4_ * local_108;
  local_138 = (TVector<float,3> *)CONCAT44(local_138._4_4_,local_104 * local_104);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_120 = TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar4);
  fVar1 = local_10c;
  fVar23 = local_108 * local_108;
  fVar28 = local_110 * local_110;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + (int)fVar24);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar3 = local_144;
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_144);
  fVar2 = local_f4;
  fVar30 = local_f0 * local_f0;
  fVar32 = local_f8 * local_f8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar14 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_148 + *(int *)&param_1->field_0x10);
  fVar21 = ((float)((uint)((fVar26 + fVar19 + fVar36 + fVar35 + fVar21 + fVar20 +
                           fVar22 + fVar31 + fVar29 + fVar27 + fVar34 + fVar33) * fVar25) ^
                   __xmm_80000000800000008000000080000000) - *(float *)(pFVar7 + local_118 * 4)) /
           (((local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * *pfVar14 +
             (fVar2 * fVar2 + fVar32 + fVar30) * *pfVar13 +
            (fVar9 * fVar9 + local_138._0_4_ + local_130._0_4_) * *pfVar12 +
            (fVar1 * fVar1 + fVar28 + fVar23) * *local_120) * fVar25 + __real_3f800000);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar19 = fVar21 * *pfVar12;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar15 = fVar19 * local_110 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar19 * local_10c + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar19 * local_108 + *(float *)&pTVar15->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + (int)fVar24);
  fVar19 = fVar21 * *pfVar12;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + (int)fVar24);
  *(float *)pTVar15 = fVar19 * local_104 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar19 * local_100 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar19 * local_fc + *(float *)&pTVar15->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar3);
  fVar24 = fVar21 * *pfVar12;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar15 = fVar24 * local_f8 + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar24 * local_f4 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar24 * local_f0 + *(float *)&pTVar15->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar3 = local_148;
  pfVar12 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_148);
  fVar24 = fVar21 * *pfVar12;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar15 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar15 = fVar24 * local_ec + *(float *)pTVar15;
  *(float *)&pTVar15->field_0x4 = fVar24 * local_e8 + *(float *)&pTVar15->field_0x4;
  *(float *)&pTVar15->field_0x8 = fVar24 * local_e4 + *(float *)&pTVar15->field_0x8;
  *(float *)(pFVar7 + local_118 * 4) = fVar21 + *(float *)(pFVar7 + local_118 * 4);
  return;
}

// ApplyHelper<0,1,Chaos::Softs::FSolverParticles> @ 143efdea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  TVector<float,3> *pTVar13;
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
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  float local_138;
  int local_134;
  int local_130;
  FScriptContainerElement *local_128;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar18 = (longlong)param_3;
  iVar3 = (int)this->_padding_;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar18, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = this->_padding_;
  iVar3 = *(int *)(lVar6 + lVar18 * 0x10);
  local_138 = *(float *)(lVar6 + 4 + lVar18 * 0x10);
  iVar4 = *(int *)(lVar6 + 8 + lVar18 * 0x10);
  local_130 = *(int *)(lVar6 + 0xc + lVar18 * 0x10);
  iVar5 = (int)this->_padding_;
  local_128 = (FScriptContainerElement *)CONCAT44(local_128._4_4_,iVar3);
  uVar10 = 0;
  if (param_3 < iVar5) {
    uVar10 = uVar17;
  }
  local_134 = iVar4;
  if ((uVar10 == 0) &&
     (local_148 = lVar18, local_140 = (longlong)iVar5,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)(lVar18 + this->_padding_) != '\0') {
    param_4 = param_5;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)local_138);
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar21 = *pfVar11;
  fVar23 = *pfVar12;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  iVar3 = local_130;
  fVar22 = *pfVar11;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_130);
  if ((fVar22 + *pfVar11 + fVar23 + fVar21 <= 0.0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CombinedInvMass > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                         ,0xf9,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar13 = FSolverParticles::P(param_1,iVar3);
  pTVar14 = FSolverParticles::P(param_1,local_134);
  pTVar15 = FSolverParticles::P(param_1,(int)local_138);
  pTVar16 = FSolverParticles::P(param_1,(int)local_128);
  local_120 = FPBDBendingConstraintsBase::CalcAngle(pTVar16,pTVar15,pTVar14,pTVar13);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticles>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,param_1,param_3);
  iVar4 = (int)local_128;
  FSolverParticles::P(param_1,(int)local_128);
  TParticles<float,3>::GetX((TParticles<float,3> *)param_1,iVar4);
  fVar21 = local_138;
  FSolverParticles::P(param_1,(int)local_138);
  TParticles<float,3>::GetX((TParticles<float,3> *)param_1,(int)fVar21);
  FSolverParticles::P(param_1,local_134);
  TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_134);
  FSolverParticles::P(param_1,local_130);
  TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_130);
  iVar3 = (this->Lambdas).ArrayNum;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar18, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_128 = (this->Lambdas).AllocatorInstance.Data;
  iVar3 = (int)this->_padding_;
  fVar23 = param_4 * param_2 * param_2;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar17;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar18, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_138 = *(float *)(this->_padding_ + lVar18 * 4);
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar22 = *pfVar11;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar21);
  iVar3 = local_134;
  fVar1 = *pfVar11;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_134);
  iVar5 = local_130;
  fVar20 = local_fc * local_fc;
  fVar19 = local_f8 * local_f8;
  fVar2 = *pfVar11;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_130);
  pFVar8 = local_128;
  local_138 = (local_138 - local_120) * fVar23 - *(float *)(local_128 + lVar18 * 4);
  fVar22 = local_138 /
           (((local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * *pfVar11 +
             (local_108 * local_108 + local_10c * local_10c + local_104 * local_104) * fVar1 +
            (local_114 * local_114 + local_118 * local_118 + local_110 * local_110) * fVar22 +
            (fVar20 + local_100 * local_100 + fVar19) * fVar2) * fVar23 + __real_3f800000);
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar23 = fVar22 * *pfVar11;
  pTVar13 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar13 = local_118 * fVar23 + *(float *)pTVar13;
  *(float *)&pTVar13->field_0x4 = local_114 * fVar23 + *(float *)&pTVar13->field_0x4;
  *(float *)&pTVar13->field_0x8 = local_110 * fVar23 + *(float *)&pTVar13->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar21);
  fVar23 = fVar22 * *pfVar11;
  pTVar13 = FSolverParticles::P(param_1,(int)fVar21);
  *(float *)pTVar13 = fVar23 * local_10c + *(float *)pTVar13;
  *(float *)&pTVar13->field_0x4 = fVar23 * local_108 + *(float *)&pTVar13->field_0x4;
  *(float *)&pTVar13->field_0x8 = fVar23 * local_104 + *(float *)&pTVar13->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar21 = fVar22 * *pfVar11;
  pTVar13 = FSolverParticles::P(param_1,iVar3);
  *(float *)&pTVar13->field_0x4 = fVar21 * local_fc + *(float *)&pTVar13->field_0x4;
  *(float *)&pTVar13->field_0x8 = fVar21 * local_f8 + *(float *)&pTVar13->field_0x8;
  *(float *)pTVar13 = fVar21 * local_100 + *(float *)pTVar13;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar21 = fVar22 * *pfVar11;
  pTVar13 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar13 = fVar21 * local_f4 + *(float *)pTVar13;
  *(float *)&pTVar13->field_0x4 = fVar21 * local_f0 + *(float *)&pTVar13->field_0x4;
  *(float *)&pTVar13->field_0x8 = fVar21 * local_ec + *(float *)&pTVar13->field_0x8;
  *(float *)(pFVar8 + lVar18 * 4) = fVar22 + *(float *)(pFVar8 + lVar18 * 4);
  return;
}

// ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange> @ 143efeac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  TVector<float,3> *pTVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  int local_138;
  int local_134;
  TVector<float,3> *local_130;
  TVector<float,3> *local_128;
  TVector<float,3> *local_120;
  float *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar15 = (longlong)param_3;
  iVar1 = (int)this->_padding_;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  if (param_3 < iVar1) {
    uVar10 = uVar16;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar15, local_140 = (longlong)iVar1,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = this->_padding_;
  local_134 = *(int *)(lVar4 + 8 + lVar15 * 0x10);
  iVar1 = *(int *)(lVar4 + lVar15 * 0x10);
  iVar2 = *(int *)(lVar4 + 4 + lVar15 * 0x10);
  local_138 = *(int *)(lVar4 + 0xc + lVar15 * 0x10);
  iVar3 = (int)this->_padding_;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar16;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar15, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*(char *)(lVar15 + this->_padding_) != '\0') {
    param_4 = param_5;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_120 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar1);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar2);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_130 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         local_134 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_138 + *(int *)&param_1->field_0x10);
  if ((*pfVar11 + *(float *)local_130 + *(float *)local_128 + *(float *)local_120 <= 0.0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CombinedInvMass > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                         ,0xf9,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_120 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_138 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_134 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_130 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  *(int *)&param_1->field_0x10 + iVar2);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar1);
  fVar17 = FPBDBendingConstraintsBase::CalcAngle(pTVar12,local_130,local_128,local_120);
  local_130 = (TVector<float,3> *)CONCAT44(local_130._4_4_,fVar17);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticlesRange>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,param_1,param_3);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,*(int *)&param_1->field_0x10 + iVar1
                     );
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TParticles<float,3>::GetX
            (*(TParticles<float,3> **)&param_1->field_0x8,*(int *)&param_1->field_0x10 + iVar1);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,*(int *)&param_1->field_0x10 + iVar2
                     );
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TParticles<float,3>::GetX
            (*(TParticles<float,3> **)&param_1->field_0x8,*(int *)&param_1->field_0x10 + iVar2);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                      local_134 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TParticles<float,3>::GetX
            (*(TParticles<float,3> **)&param_1->field_0x8,local_134 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                      local_138 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x56,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TParticles<float,3>::GetX
            (*(TParticles<float,3> **)&param_1->field_0x8,local_138 + *(int *)&param_1->field_0x10);
  iVar3 = (this->Lambdas).ArrayNum;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar16;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar15, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_120 = (TVector<float,3> *)(this->Lambdas).AllocatorInstance.Data;
  iVar3 = (int)this->_padding_;
  fVar17 = param_4 * param_2 * param_2;
  uVar10 = 0;
  if (param_3 < iVar3) {
    uVar10 = uVar16;
  }
  if ((uVar10 == 0) &&
     (local_148 = lVar15, local_140 = (longlong)iVar3,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar7 = local_100;
  fVar19 = *(float *)(this->_padding_ + lVar15 * 4);
  fVar18 = local_fc * local_fc;
  fVar20 = local_104 * local_104;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_118 = TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar1);
  fVar6 = local_10c;
  fVar21 = local_108 * local_108;
  fVar22 = local_110 * local_110;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar2);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = local_134;
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_134);
  fVar8 = local_f4;
  fVar23 = local_f0 * local_f0;
  fVar24 = local_f8 * local_f8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_138 + *(int *)&param_1->field_0x10);
  pTVar12 = local_120;
  fVar17 = ((fVar19 - local_130._0_4_) * fVar17 - *(float *)((longlong)local_120 + lVar15 * 4)) /
           (((local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * *pfVar13 +
             (fVar8 * fVar8 + fVar24 + fVar23) * *pfVar11 +
            (fVar7 * fVar7 + fVar20 + fVar18) * *(float *)local_128 +
            (fVar6 * fVar6 + fVar22 + fVar21) * *local_118) * fVar17 + __real_3f800000);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar1);
  fVar19 = fVar17 * *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar1);
  *(float *)pTVar14 = fVar19 * local_110 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar19 * local_10c + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar19 * local_108 + *(float *)&pTVar14->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar2);
  fVar19 = fVar17 * *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar2);
  *(float *)pTVar14 = fVar19 * local_104 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar19 * local_100 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar19 * local_fc + *(float *)&pTVar14->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar3);
  fVar19 = fVar17 * *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar14 = fVar19 * local_f8 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar19 * local_f4 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar19 * local_f0 + *(float *)&pTVar14->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar1 = local_138;
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_138);
  fVar19 = fVar17 * *pfVar11;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Particles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                         ,0x57,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar1);
  *(float *)pTVar14 = fVar19 * local_ec + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar19 * local_e8 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar19 * local_e4 + *(float *)&pTVar14->field_0x8;
  *(float *)((longlong)pTVar12 + lVar15 * 4) = fVar17 + *(float *)((longlong)pTVar12 + lVar15 * 4);
  return;
}

// ApplyHelper<0,0,Chaos::Softs::FSolverParticles> @ 143f03250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  float fVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  TVector<float,3> *pTVar22;
  TVector<float,3> *pTVar23;
  longlong lVar24;
  uint uVar25;
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
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  int local_148;
  float local_144;
  int local_140;
  int local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  FScriptContainerElement *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_178;
  lVar24 = (longlong)param_3;
  iVar9 = (int)this->_padding_;
  uVar25 = (uint)~param_3 >> 0x1f;
  uVar17 = 0;
  if (param_3 < iVar9) {
    uVar17 = uVar25;
  }
  if ((uVar17 == 0) &&
     (local_158 = lVar24, local_150 = (longlong)iVar9,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar11 = this->_padding_;
  iVar9 = *(int *)(lVar11 + lVar24 * 0x10);
  local_148 = *(int *)(lVar11 + 4 + lVar24 * 0x10);
  local_140 = *(int *)(lVar11 + 8 + lVar24 * 0x10);
  local_13c = *(int *)(lVar11 + 0xc + lVar24 * 0x10);
  iVar10 = (int)this->_padding_;
  uVar17 = 0;
  if (param_3 < iVar10) {
    uVar17 = uVar25;
  }
  local_144 = (float)iVar9;
  if ((uVar17 == 0) &&
     (local_158 = lVar24, local_150 = (longlong)iVar10,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (*(char *)(lVar24 + this->_padding_) != '\0') {
    param_4 = param_5;
  }
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_148);
  pfVar19 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  iVar9 = local_140;
  fVar40 = *pfVar18;
  fVar33 = *pfVar19;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_140);
  iVar10 = local_13c;
  fVar37 = *pfVar18;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_13c);
  fVar40 = fVar37 + *pfVar18 + fVar33 + fVar40;
  if ((fVar40 <= 0.0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                          ,0xf9,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar20 = FSolverParticles::P(param_1,iVar10);
  pTVar21 = FSolverParticles::P(param_1,iVar9);
  pTVar22 = FSolverParticles::P(param_1,local_148);
  pTVar23 = FSolverParticles::P(param_1,(int)local_144);
  local_120 = FPBDBendingConstraintsBase::CalcAngle(pTVar23,pTVar22,pTVar21,pTVar20);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticles>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,param_1,param_3);
  fVar13 = local_144;
  pTVar20 = FSolverParticles::P(param_1,(int)local_144);
  pTVar21 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,(int)fVar13);
  fVar33 = *(float *)&pTVar20->field_0x8;
  fVar37 = *(float *)&pTVar20->field_0x4;
  fVar27 = *(float *)pTVar20;
  fVar1 = *(float *)&pTVar21->field_0x8;
  fVar2 = *(float *)&pTVar21->field_0x4;
  fVar3 = *(float *)pTVar21;
  pTVar20 = FSolverParticles::P(param_1,local_148);
  pTVar21 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_148);
  local_124 = *(float *)&pTVar20->field_0x8 - *(float *)&pTVar21->field_0x8;
  local_12c = *(float *)&pTVar20->field_0x4 - *(float *)&pTVar21->field_0x4;
  local_128 = *(float *)pTVar20 - *(float *)pTVar21;
  pTVar20 = FSolverParticles::P(param_1,local_140);
  pTVar21 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_140);
  fVar4 = *(float *)&pTVar20->field_0x4;
  fVar5 = *(float *)pTVar20;
  local_144 = *(float *)&pTVar20->field_0x8 - *(float *)&pTVar21->field_0x8;
  fVar6 = *(float *)&pTVar21->field_0x4;
  fVar7 = *(float *)pTVar21;
  pTVar20 = FSolverParticles::P(param_1,local_13c);
  pTVar21 = TParticles<float,3>::GetX((TParticles<float,3> *)param_1,local_13c);
  iVar9 = (this->Lambdas).ArrayNum;
  local_130 = *(float *)&pTVar20->field_0x8 - *(float *)&pTVar21->field_0x8;
  local_134 = *(float *)&pTVar20->field_0x4 - *(float *)&pTVar21->field_0x4;
  local_138 = *(float *)pTVar20 - *(float *)pTVar21;
  uVar17 = 0;
  if (param_3 < iVar9) {
    uVar17 = uVar25;
  }
  if ((uVar17 == 0) &&
     (local_158 = lVar24, local_150 = (longlong)iVar9,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar36 = local_ec * local_138;
  local_118 = (this->Lambdas).AllocatorInstance.Data;
  fVar38 = local_100 * local_12c;
  iVar9 = (int)this->_padding_;
  uVar17 = 0;
  if (param_3 < iVar9) {
    uVar17 = uVar25;
  }
  fVar43 = (param_6 + param_6) * SQRT(param_4 / fVar40) * param_2;
  fVar30 = local_f0 * local_144;
  fVar40 = local_e8 * local_134;
  fVar42 = param_4 * param_2 * param_2;
  fVar31 = local_e4 * local_130;
  fVar26 = local_104 * local_128;
  fVar32 = local_fc * local_124;
  fVar27 = local_110 * (fVar27 - fVar3);
  fVar37 = local_10c * (fVar37 - fVar2);
  fVar33 = local_108 * (fVar33 - fVar1);
  if ((uVar17 == 0) &&
     (local_158 = lVar24, local_150 = (longlong)iVar9,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  fVar1 = *(float *)(this->_padding_ + lVar24 * 4);
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar13);
  iVar9 = local_148;
  fVar41 = local_10c * local_10c;
  fVar28 = local_110 * local_110;
  fVar34 = local_108 * local_108;
  fVar2 = *pfVar18;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_148);
  iVar10 = local_140;
  fVar39 = local_100 * local_100;
  fVar29 = local_104 * local_104;
  fVar35 = local_fc * local_fc;
  fVar3 = *pfVar18;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_140);
  iVar14 = local_13c;
  fVar8 = *pfVar18;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,local_13c);
  pFVar15 = local_118;
  fVar33 = (((fVar1 - local_120) * fVar42 -
            (local_f4 * (fVar4 - fVar6) + local_f8 * (fVar5 - fVar7) + fVar30 +
             fVar36 + fVar40 + fVar31 + fVar38 + fVar26 + fVar32 + fVar37 + fVar27 + fVar33) *
            fVar43) - *(float *)(local_118 + lVar24 * 4)) /
           (((local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * *pfVar18 +
             (fVar39 + fVar29 + fVar35) * fVar3 +
            (fVar41 + fVar28 + fVar34) * fVar2 +
            (local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0) * fVar8) *
            (fVar42 + fVar43) + __real_3f800000);
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,(int)fVar13);
  fVar40 = fVar33 * *pfVar18;
  pTVar20 = FSolverParticles::P(param_1,(int)fVar13);
  *(float *)pTVar20 = fVar40 * local_110 + *(float *)pTVar20;
  *(float *)&pTVar20->field_0x4 = fVar40 * local_10c + *(float *)&pTVar20->field_0x4;
  *(float *)&pTVar20->field_0x8 = fVar40 * local_108 + *(float *)&pTVar20->field_0x8;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar40 = fVar33 * *pfVar18;
  pTVar20 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar20 = fVar40 * local_104 + *(float *)pTVar20;
  *(float *)&pTVar20->field_0x4 = fVar40 * local_100 + *(float *)&pTVar20->field_0x4;
  *(float *)&pTVar20->field_0x8 = fVar40 * local_fc + *(float *)&pTVar20->field_0x8;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar10);
  fVar40 = fVar33 * *pfVar18;
  pTVar20 = FSolverParticles::P(param_1,iVar10);
  *(float *)pTVar20 = fVar40 * local_f8 + *(float *)pTVar20;
  *(float *)&pTVar20->field_0x4 = fVar40 * local_f4 + *(float *)&pTVar20->field_0x4;
  *(float *)&pTVar20->field_0x8 = fVar40 * local_f0 + *(float *)&pTVar20->field_0x8;
  pfVar18 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar14);
  fVar40 = fVar33 * *pfVar18;
  pTVar20 = FSolverParticles::P(param_1,iVar14);
  *(float *)&pTVar20->field_0x4 = fVar40 * local_e8 + *(float *)&pTVar20->field_0x4;
  *(float *)&pTVar20->field_0x8 = fVar40 * local_e4 + *(float *)&pTVar20->field_0x8;
  *(float *)pTVar20 = fVar40 * local_ec + *(float *)pTVar20;
  *(float *)(pFVar15 + lVar24 * 4) = fVar33 + *(float *)(pFVar15 + lVar24 * 4);
  return;
}

// ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange> @ 143f04210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,int param_3,
          float param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  code *pcVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  float *pfVar21;
  TVector<float,3> *pTVar22;
  TVector<float,3> *pTVar23;
  float *pfVar24;
  uint uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  int local_158;
  int local_154;
  int local_150;
  TVector<float,3> *local_148;
  float *local_140;
  TVector<float,3> *local_138;
  float local_130;
  float *local_128;
  float *local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar26 = (longlong)param_3;
  iVar13 = (int)this->_padding_;
  uVar25 = (uint)~param_3 >> 0x1f;
  uVar20 = 0;
  if (param_3 < iVar13) {
    uVar20 = uVar25;
  }
  local_130 = param_2;
  if ((uVar20 == 0) &&
     (local_168 = lVar26, local_160 = (longlong)iVar13,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  lVar16 = this->_padding_;
  iVar13 = *(int *)(lVar16 + 4 + lVar26 * 0x10);
  local_158 = *(int *)(lVar16 + 8 + lVar26 * 0x10);
  iVar14 = *(int *)(lVar16 + lVar26 * 0x10);
  local_154 = *(int *)(lVar16 + 0xc + lVar26 * 0x10);
  iVar15 = (int)this->_padding_;
  uVar20 = 0;
  if (param_3 < iVar15) {
    uVar20 = uVar25;
  }
  local_150 = iVar13;
  if ((uVar20 == 0) &&
     (local_168 = lVar26, local_160 = (longlong)iVar15,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  if (*(char *)(lVar26 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_140 = TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar14);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_138 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar13);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_148 = (TVector<float,3> *)
              TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         local_158 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       local_154 + *(int *)&param_1->field_0x10);
  fVar29 = *pfVar21 + *(float *)local_148 + *(float *)local_138 + *local_140;
  if ((fVar29 <= 0.0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                          ,0xf9,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_128 = (float *)CONCAT44(local_128._4_4_,SQRT(param_5 / fVar29));
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_148 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_154 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_138 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                  local_158 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar13);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar23 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar14);
  fVar29 = FPBDBendingConstraintsBase::CalcAngle(pTVar23,pTVar22,local_138,local_148);
  local_138 = (TVector<float,3> *)CONCAT44(local_138._4_4_,fVar29);
  FPBDBendingConstraintsBase::GetGradients<Chaos::Softs::FSolverParticlesRange>
            ((FPBDBendingConstraintsBase *)this,
             (TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,param_1,param_3);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar14);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar23 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar14);
  fVar29 = *(float *)&pTVar22->field_0x4;
  fVar30 = *(float *)&pTVar23->field_0x4;
  local_140 = (float *)CONCAT44(local_140._4_4_,
                                *(float *)&pTVar22->field_0x8 - *(float *)&pTVar23->field_0x8);
  local_120 = (float *)CONCAT44(local_120._4_4_,*(float *)pTVar22 - *(float *)pTVar23);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                local_150 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar23 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       local_150 + *(int *)&param_1->field_0x10);
  fVar31 = *(float *)&pTVar22->field_0x8;
  fVar32 = *(float *)&pTVar22->field_0x4;
  fVar1 = *(float *)pTVar22;
  fVar35 = *(float *)&pTVar23->field_0x8;
  fVar36 = *(float *)&pTVar23->field_0x4;
  fVar2 = *(float *)pTVar23;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                local_158 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar23 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       local_158 + *(int *)&param_1->field_0x10);
  fVar33 = *(float *)&pTVar22->field_0x8;
  fVar34 = *(float *)&pTVar22->field_0x4;
  fVar3 = *(float *)pTVar22;
  fVar4 = *(float *)&pTVar23->field_0x8;
  fVar5 = *(float *)&pTVar23->field_0x4;
  fVar6 = *(float *)pTVar23;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                local_154 + *(int *)&param_1->field_0x10);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x56,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar23 = TParticles<float,3>::GetX
                      (*(TParticles<float,3> **)&param_1->field_0x8,
                       local_154 + *(int *)&param_1->field_0x10);
  fVar7 = *(float *)&pTVar22->field_0x8;
  fVar8 = *(float *)&pTVar22->field_0x4;
  fVar9 = *(float *)pTVar22;
  fVar10 = *(float *)&pTVar23->field_0x8;
  fVar11 = *(float *)&pTVar23->field_0x4;
  fVar12 = *(float *)pTVar23;
  iVar13 = (this->Lambdas).ArrayNum;
  uVar20 = 0;
  if (param_3 < iVar13) {
    uVar20 = uVar25;
  }
  if ((uVar20 == 0) &&
     (local_168 = lVar26, local_160 = (longlong)iVar13,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_148 = (TVector<float,3> *)(this->Lambdas).AllocatorInstance.Data;
  iVar13 = (int)this->_padding_;
  uVar20 = 0;
  if (param_3 < iVar13) {
    uVar20 = uVar25;
  }
  fVar28 = (param_6 + param_6) * local_128._0_4_ * local_130;
  fVar27 = param_5 * local_130 * local_130;
  local_140 = (float *)CONCAT44(local_140._4_4_,
                                ((fVar3 - fVar6) * local_100 + (fVar34 - fVar5) * local_fc +
                                 (fVar33 - fVar4) * local_f8 +
                                 (fVar9 - fVar12) * local_f4 + (fVar8 - fVar11) * local_f0 +
                                 (fVar7 - fVar10) * local_ec +
                                (fVar32 - fVar36) * local_108 + (fVar1 - fVar2) * local_10c +
                                (fVar31 - fVar35) * local_104 +
                                (fVar29 - fVar30) * local_114 + local_120._0_4_ * local_118 +
                                local_140._0_4_ * local_110) * fVar28);
  if ((uVar20 == 0) &&
     (local_168 = lVar26, local_160 = (longlong)iVar13,
     bVar19 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  fVar30 = local_108;
  fVar29 = *(float *)(this->_padding_ + lVar26 * 4);
  fVar31 = local_104 * local_104;
  fVar32 = local_10c * local_10c;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  local_120 = TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + iVar14);
  fVar1 = local_114;
  fVar35 = local_110 * local_110;
  fVar36 = local_118 * local_118;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar13 = local_150;
  local_128 = TDynamicParticles<float,3>::InvM
                        (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                         *(int *)&param_1->field_0x10 + local_150);
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar15 = local_158;
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_158);
  fVar2 = local_fc;
  fVar33 = local_f8 * local_f8;
  fVar34 = local_100 * local_100;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  iVar18 = local_154;
  pfVar24 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + local_154);
  fVar29 = (((fVar29 - local_138._0_4_) * fVar27 - local_140._0_4_) -
           *(float *)((longlong)local_148 + lVar26 * 4)) /
           (((local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * *pfVar24 +
             (fVar2 * fVar2 + fVar34 + fVar33) * *pfVar21 +
            (fVar1 * fVar1 + fVar36 + fVar35) * *local_120 +
            (fVar30 * fVar30 + fVar32 + fVar31) * *local_128) * (fVar27 + fVar28) + __real_3f800000)
  ;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar14);
  fVar30 = fVar29 * *pfVar21;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar14);
  *(float *)pTVar22 = fVar30 * local_118 + *(float *)pTVar22;
  *(float *)&pTVar22->field_0x4 = fVar30 * local_114 + *(float *)&pTVar22->field_0x4;
  *(float *)&pTVar22->field_0x8 = fVar30 * local_110 + *(float *)&pTVar22->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar13);
  fVar30 = fVar29 * *pfVar21;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar13);
  *(float *)pTVar22 = fVar30 * local_10c + *(float *)pTVar22;
  *(float *)&pTVar22->field_0x4 = fVar30 * local_108 + *(float *)&pTVar22->field_0x4;
  *(float *)&pTVar22->field_0x8 = fVar30 * local_104 + *(float *)&pTVar22->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar15);
  fVar30 = fVar29 * *pfVar21;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar15);
  *(float *)pTVar22 = fVar30 * local_100 + *(float *)pTVar22;
  *(float *)&pTVar22->field_0x4 = fVar30 * local_fc + *(float *)&pTVar22->field_0x4;
  *(float *)&pTVar22->field_0x8 = fVar30 * local_f8 + *(float *)&pTVar22->field_0x8;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pfVar21 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar18);
  fVar30 = fVar29 * *pfVar21;
  if ((*(longlong *)&param_1->field_0x8 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Particles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                          ,0x57,L""), bVar19)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pTVar22 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar18);
  *(float *)pTVar22 = fVar30 * local_f4 + *(float *)pTVar22;
  *(float *)&pTVar22->field_0x4 = fVar30 * local_f0 + *(float *)&pTVar22->field_0x4;
  *(float *)&pTVar22->field_0x8 = fVar30 * local_ec + *(float *)&pTVar22->field_0x8;
  *(float *)((longlong)local_148 + lVar26 * 4) =
       fVar29 + *(float *)((longlong)local_148 + lVar26 * 4);
  return;
}

// Init<Chaos::Softs::FSolverParticles> @ 143f08f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::Init<Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  float fVar9;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  piVar1 = &(this->Lambdas).ArrayMax;
  piVar2 = &(this->Lambdas).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->Lambdas).AllocatorInstance,piVar2,piVar1);
  memset((this->Lambdas).AllocatorInstance.Data + (longlong)iVar8 * 4,0,(longlong)iVar3 << 2);
  piVar1 = &(this->LambdasDamping).ArrayMax;
  piVar2 = &(this->LambdasDamping).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->LambdasDamping).AllocatorInstance,piVar2,piVar1);
  memset((this->LambdasDamping).AllocatorInstance.Data + (longlong)iVar8 * 4,0,(longlong)iVar3 << 2)
  ;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X1Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X2Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X3Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X4Array,(int)this->_padding_,Default);
  if ((bChaos_Bending_ISPC_Enabled == false) ||
     (iVar3 = (int)this->_padding_, (this->ConstraintsIndex1).ArrayNum != iVar3)) {
    FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticles>
              ((FPBDBendingConstraintsBase *)this,param_1);
  }
  else if (((int)this->_padding_ < 2) ||
          ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar9 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    InitXPBDBendingConstraintsIsBuckled
              (param_1->_padding_,(this->ConstraintsIndex1).AllocatorInstance.Data,
               (this->ConstraintsIndex2).AllocatorInstance.Data,
               (this->ConstraintsIndex3).AllocatorInstance.Data,
               (this->ConstraintsIndex4).AllocatorInstance.Data,this->_padding_,this->_padding_,
               (this->X1Array).AllocatorInstance.Data,(this->X2Array).AllocatorInstance.Data,
               (this->X3Array).AllocatorInstance.Data,(this->X4Array).AllocatorInstance.Data,
               CONCAT44(uVar10,fVar9),CONCAT44(uVar11,iVar3));
  }
  else {
    lVar4 = this->_padding_;
    if ((int)this->_padding_ < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = this->_padding_;
    if ((int)this->_padding_ < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    InitXPBDBendingConstraintsIsBuckledWithMaps
              (param_1->_padding_,(this->ConstraintsIndex1).AllocatorInstance.Data,
               (this->ConstraintsIndex2).AllocatorInstance.Data,
               (this->ConstraintsIndex3).AllocatorInstance.Data,
               (this->ConstraintsIndex4).AllocatorInstance.Data,this->_padding_,this->_padding_,
               (this->X1Array).AllocatorInstance.Data,(this->X2Array).AllocatorInstance.Data,
               (this->X3Array).AllocatorInstance.Data,(this->X4Array).AllocatorInstance.Data,lVar5,
               lVar4,iVar3);
  }
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143f09780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  bool bVar17;
  int iVar18;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar19;
  float fVar20;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar22;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_80;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_70 [3];
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  piVar1 = &(this->Lambdas).ArrayMax;
  piVar2 = &(this->Lambdas).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar3,&(this->Lambdas).AllocatorInstance,piVar2,piVar1);
  memset((this->Lambdas).AllocatorInstance.Data + (longlong)iVar18 * 4,0,(longlong)iVar3 << 2);
  piVar1 = &(this->LambdasDamping).ArrayMax;
  piVar2 = &(this->LambdasDamping).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar3,&(this->LambdasDamping).AllocatorInstance,piVar2,piVar1);
  memset((this->LambdasDamping).AllocatorInstance.Data + (longlong)iVar18 * 4,0,(longlong)iVar3 << 2
        );
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X1Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X2Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X3Array,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->X4Array,(int)this->_padding_,Default);
  if ((bChaos_Bending_ISPC_Enabled == false) ||
     (iVar3 = (int)this->_padding_, (this->ConstraintsIndex1).ArrayNum != iVar3)) {
    FPBDBendingConstraintsBase::Init<Chaos::Softs::FSolverParticlesRange>
              ((FPBDBendingConstraintsBase *)this,param_1);
  }
  else if (((int)this->_padding_ < 2) ||
          ((float)((uint)(*(float *)&this->_padding_ - *(float *)((longlong)&this->_padding_ + 4)) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    fVar20 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    pFVar6 = (this->X4Array).AllocatorInstance.Data;
    pFVar7 = (this->X3Array).AllocatorInstance.Data;
    pFVar8 = (this->X2Array).AllocatorInstance.Data;
    pFVar9 = (this->ConstraintsIndex2).AllocatorInstance.Data;
    pFVar10 = (this->X1Array).AllocatorInstance.Data;
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    pFVar13 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    pFVar14 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    pFVar15 = (this->ConstraintsIndex1).AllocatorInstance.Data;
    pTVar19 = FSolverParticlesRange::XArray(param_1,&local_80);
    InitXPBDBendingConstraintsIsBuckled
              (pTVar19->DataPtr,pFVar15,pFVar9,pFVar14,pFVar13,lVar5,lVar4,pFVar10,pFVar8,pFVar7,
               pFVar6,CONCAT44(uVar21,fVar20),CONCAT44(uVar22,iVar3));
  }
  else {
    lVar4 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar5 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar17)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar6 = (this->X4Array).AllocatorInstance.Data;
    pFVar7 = (this->X3Array).AllocatorInstance.Data;
    pFVar8 = (this->X2Array).AllocatorInstance.Data;
    pFVar9 = (this->ConstraintsIndex2).AllocatorInstance.Data;
    pFVar10 = (this->X1Array).AllocatorInstance.Data;
    lVar11 = this->_padding_;
    lVar12 = this->_padding_;
    pFVar13 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    pFVar14 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    local_80.DataPtr = (TVector<float,3> *)(this->ConstraintsIndex1).AllocatorInstance.Data;
    pTVar19 = FSolverParticlesRange::XArray(param_1,local_70);
    InitXPBDBendingConstraintsIsBuckledWithMaps
              (pTVar19->DataPtr,local_80.DataPtr,pFVar9,pFVar14,pFVar13,lVar12,lVar11,pFVar10,pFVar8
               ,pFVar7,pFVar6,lVar5,lVar4,iVar3);
  }
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f0b9a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDBendingConstraints *this,FSolverParticles *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int *piVar20;
  longlong lVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar13 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  iVar9 = (int)this->_padding_;
  local_68 = pTVar13;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>
            (&local_78,pTVar13,param_1,iVar9,*(int *)((longlong)&this->_padding_ + 4) + iVar9);
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
  uVar17 = local_78.ArrayNum + 1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar12 = (ulonglong)local_78.ArrayNum;
  local_c8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar12 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar19.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar7 = local_58;
    pTVar16 = &this->ConstraintsPerColorStartIndex;
    piVar20 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    pFVar18 = (pTVar16->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data == pTVar7) {
      if (((pFVar18 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar18 + (longlong)*piVar20 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar20) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar16->AllocatorInstance,piVar20);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
      if (pTVar13 != &local_a0) {
        pFVar18 = (pTVar13->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar13->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
        pTVar13->ArrayNum = local_a0.ArrayNum;
        pTVar13->ArrayMax = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar1 != &local_b0) {
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
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_c0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_c0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_c0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->XPBDStiffness,&local_90,(this->XPBDStiffness).MapValues.ArrayNum);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->XPBDBucklingStiffness,&local_90,
                 (this->XPBDBucklingStiffness).MapValues.ArrayNum);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex1,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex2,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex3,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex4,(int)this->_padding_,Default);
      uVar17 = 0;
      if (0 < (int)this->_padding_) {
        lVar21 = 0;
        lVar14 = 0;
        do {
          uVar15 = ~uVar17 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex1).ArrayNum) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex1).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 4 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex2).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex2).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 8 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex3).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex3).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 0xc + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex4).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar17 = uVar17 + 1;
          lVar14 = lVar14 + 0x10;
          *(undefined4 *)((this->ConstraintsIndex4).AllocatorInstance.Data + lVar21) = uVar3;
          lVar21 = lVar21 + 4;
        } while ((int)uVar17 < (int)this->_padding_);
      }
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
    if (((pFVar18 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar18 + (longlong)*piVar20 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar20) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar16->AllocatorInstance,piVar20);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum;
    uVar12 = (ulonglong)(int)local_80;
    pFVar18 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->AllocatorInstance).Data;
    local_60 = pFVar18 + uVar12 * 4;
    while( true ) {
      pFVar2 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum != (int)uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar18 == pFVar2) break;
      uVar17 = *(uint *)pFVar18;
      lVar21 = (longlong)(int)uVar17;
      uVar15 = ~uVar17 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar17 < (int)*(longlong *)&pTVar13->ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      pFVar2 = (pTVar13->AllocatorInstance).Data + lVar21 * 0x10;
      uVar4 = *(undefined8 *)pFVar2;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10) = uVar4;
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10 + 8) = uVar6;
      uVar10 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar21 * 8);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar14 * 8) = uVar4;
      uVar10 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar3 = *(undefined4 *)(this->_padding_ + lVar21 * 4);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = local_c8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar14 * 4) = uVar3;
      uVar11 = 0;
      if ((int)uVar17 < local_90.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = (ulonglong)local_80;
      *(uint *)(local_90.AllocatorInstance.Data + lVar21 * 4) = uVar10;
      local_c8[0] = local_c8[0] + 1;
      pFVar18 = pFVar18 + 4;
      pTVar13 = local_68;
    }
    uVar12 = (ulonglong)local_7c;
    FVar19.Data = FVar19.Data + 0x10;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f0e120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDBendingConstraints *this,FSolverParticlesRange *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ForAnyElementType FVar19;
  int *piVar20;
  longlong lVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_c8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  uint local_7c;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  pTVar13 = (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_;
  iVar9 = (int)this->_padding_;
  local_68 = pTVar13;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
            (&local_78,pTVar13,param_1,iVar9,*(int *)((longlong)&this->_padding_ + 4) + iVar9);
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
  uVar17 = local_78.ArrayNum + 1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar12 = (ulonglong)local_78.ArrayNum;
  local_c8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar12 * 0x10);
  local_7c = local_78.ArrayNum;
  FVar19.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar7 = local_58;
    pTVar16 = &this->ConstraintsPerColorStartIndex;
    piVar20 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    if (local_78.ArrayNum != (uint)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    pFVar18 = (pTVar16->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data == pTVar7) {
      if (((pFVar18 <= (FScriptContainerElement *)local_c8) &&
          ((FScriptContainerElement *)local_c8 < pFVar18 + (longlong)*piVar20 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar20) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar16->AllocatorInstance,piVar20);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
      if (pTVar13 != &local_a0) {
        pFVar18 = (pTVar13->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar13->AllocatorInstance).Data = local_a0.AllocatorInstance.Data;
        pTVar13->ArrayNum = local_a0.ArrayNum;
        pTVar13->ArrayMax = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar1 = &this->_padding_;
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar1 != &local_b0) {
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
      plVar1 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar1 != &local_c0) {
        if ((void *)*plVar1 != (void *)0x0) {
          FMemory::Free((void *)*plVar1);
        }
        *plVar1 = (longlong)local_c0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_c0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->XPBDStiffness,&local_90,(this->XPBDStiffness).MapValues.ArrayNum);
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->XPBDBucklingStiffness,&local_90,
                 (this->XPBDBucklingStiffness).MapValues.ArrayNum);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex1,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex2,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex3,(int)this->_padding_,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->ConstraintsIndex4,(int)this->_padding_,Default);
      uVar17 = 0;
      if (0 < (int)this->_padding_) {
        lVar21 = 0;
        lVar14 = 0;
        do {
          uVar15 = ~uVar17 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex1).ArrayNum) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex1).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = uVar15;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 4 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex2).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex2).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 8 + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex3).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)((this->ConstraintsIndex3).AllocatorInstance.Data + lVar21) = uVar3;
          uVar10 = 0;
          if ((int)uVar17 < (int)this->_padding_) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar3 = *(undefined4 *)(lVar14 + 0xc + this->_padding_);
          uVar10 = 0;
          if ((int)uVar17 < (this->ConstraintsIndex4).ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar17 = uVar17 + 1;
          lVar14 = lVar14 + 0x10;
          *(undefined4 *)((this->ConstraintsIndex4).AllocatorInstance.Data + lVar21) = uVar3;
          lVar21 = lVar21 + 4;
        } while ((int)uVar17 < (int)this->_padding_);
      }
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
    if (((pFVar18 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar18 + (longlong)*piVar20 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar20) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar16->AllocatorInstance,piVar20);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c8[0];
    local_80 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum;
    uVar12 = (ulonglong)(int)local_80;
    pFVar18 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->AllocatorInstance).Data;
    local_60 = pFVar18 + uVar12 * 4;
    while( true ) {
      pFVar2 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar19.Data)->ArrayNum != (int)uVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar18 == pFVar2) break;
      uVar17 = *(uint *)pFVar18;
      lVar21 = (longlong)(int)uVar17;
      uVar15 = ~uVar17 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar17 < (int)*(longlong *)&pTVar13->ArrayNum) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      pFVar2 = (pTVar13->AllocatorInstance).Data + lVar21 * 0x10;
      uVar4 = *(undefined8 *)pFVar2;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10) = uVar4;
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar14 * 0x10 + 8) = uVar6;
      uVar10 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar21 * 8);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar14 * 8) = uVar4;
      uVar10 = 0;
      if ((int)uVar17 < (int)this->_padding_) {
        uVar10 = uVar15;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)local_c8[0];
      uVar3 = *(undefined4 *)(this->_padding_ + lVar21 * 4);
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
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = local_c8[0];
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar14 * 4) = uVar3;
      uVar11 = 0;
      if ((int)uVar17 < local_90.ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = (ulonglong)local_80;
      *(uint *)(local_90.AllocatorInstance.Data + lVar21 * 4) = uVar10;
      local_c8[0] = local_c8[0] + 1;
      pFVar18 = pFVar18 + 4;
      pTVar13 = local_68;
    }
    uVar12 = (ulonglong)local_7c;
    FVar19.Data = FVar19.Data + 0x10;
  } while( true );
}

// operator() @ 143f17650

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>::
operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),iVar4
             ,fVar7,fVar5,fVar6);
  return;
}

// operator() @ 143f17aa0

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::
<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),
             iVar4,fVar7,fVar5,fVar6);
  return;
}

// operator() @ 143f18940

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l58::<lambda_2>::
operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),iVar4
             ,fVar7,fVar5,fVar6);
  return;
}

// operator() @ 143f18a90

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l58::
<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),
             iVar4,fVar7,fVar5,fVar6);
  return;
}

// operator() @ 143f19470

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l60::<lambda_3>::
operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),iVar4
             ,fVar7,fVar5,fVar6);
  return;
}

// operator() @ 143f195c0

void __thiscall
`Chaos::Softs::FXPBDBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l60::
<lambda_3>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = **(int **)this + param_1;
  if (**(char **)((longlong)this + 8) == '\0') {
    fVar7 = **(float **)((longlong)this + 0x18);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar5 = *(float *)(lVar2 + 0x14c);
    fVar7 = *(float *)(lVar2 + 0x148);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x138),iVar4);
    fVar7 = fVar5 * *pfVar3 + fVar7;
  }
  if (**(char **)((longlong)this + 0x20) == '\0') {
    fVar5 = **(float **)((longlong)this + 0x28);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar6 = *(float *)(lVar2 + 0x17c);
    fVar5 = *(float *)(lVar2 + 0x178);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x168),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (**(char **)((longlong)this + 0x30) == '\0') {
    fVar6 = **(float **)((longlong)this + 0x38);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar1 * *pfVar3 + fVar6;
  }
  Chaos::Softs::FXPBDBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x40),**(float **)((longlong)this + 0x48),
             iVar4,fVar7,fVar5,fVar6);
  return;
}

// AddBendingResidualAndHessian @ 143f1ca70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::AddBendingResidualAndHessian
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          float param_4,TVector<float,3> *param_5,PMatrix<float,3,3> *param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float,3> *pTVar5;
  TVector<float,3> *pTVar6;
  TVector<float,3> *pTVar7;
  TVector<float,3> *pTVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res18 [2];
  int local_res20;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  fVar11 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange;
  fVar12 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
  lVar10 = (longlong)param_2;
  uVar9 = (uint)~param_2 >> 0x1f;
  uVar4 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar4 = uVar9;
  }
  local_res20 = param_3;
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = this->_padding_;
  pTVar5 = FSolverParticles::P(param_1,*(int *)(lVar1 + lVar10 * 0x10));
  pTVar6 = FSolverParticles::P(param_1,*(int *)(lVar1 + 4 + lVar10 * 0x10));
  pTVar7 = FSolverParticles::P(param_1,*(int *)(lVar1 + 8 + lVar10 * 0x10));
  pTVar8 = FSolverParticles::P(param_1,*(int *)(lVar1 + 0xc + lVar10 * 0x10));
  local_78 = ___xmm_00000003000000000000000100000002;
  uStack_70 = _UNK_150b29d28;
  local_88 = (undefined1  [8])0x0;
  local_80 = 0.0;
  local_res18[0] = 0.0;
  ComputeGradTheta(pTVar7,pTVar6,pTVar5,pTVar8,
                   *(int *)((longlong)&local_78 + (longlong)local_res20 * 4),
                   (TVector<float,3> *)local_88,local_res18);
  uVar4 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar13 = local_res18[0] - *(float *)(this->_padding_ + lVar10 * 4);
  uVar4 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)(lVar10 + this->_padding_) == '\0') {
    fVar12 = fVar11;
  }
  fVar12 = param_4 * param_4 * fVar12;
  fVar13 = fVar12 * fVar13;
  *(float *)param_5 = *(float *)param_5 - fVar13 * (float)local_88._0_4_;
  fVar11 = fVar12 * (float)local_88._0_4_;
  *(float *)&param_5->field_0x4 = *(float *)&param_5->field_0x4 - (float)local_88._4_4_ * fVar13;
  *(float *)&param_5->field_0x8 = *(float *)&param_5->field_0x8 - local_80 * fVar13;
  *(undefined8 *)&param_6->field_0x30 = 0;
  *(undefined4 *)&param_6->field_0x38 = 0;
  *(float *)&param_6->field_0x10 = (float)local_88._4_4_ * fVar11 + *(float *)&param_6->field_0x10;
  *(float *)param_6 = fVar11 * (float)local_88._0_4_ + *(float *)param_6;
  fVar13 = fVar12 * (float)local_88._4_4_;
  fVar12 = fVar12 * local_80;
  *(float *)&param_6->field_0x20 = local_80 * fVar11 + *(float *)&param_6->field_0x20;
  *(float *)&param_6->field_0x14 = (float)local_88._4_4_ * fVar13 + *(float *)&param_6->field_0x14;
  *(float *)&param_6->field_0x4 = fVar13 * (float)local_88._0_4_ + *(float *)&param_6->field_0x4;
  *(float *)&param_6->field_0x18 = (float)local_88._4_4_ * fVar12 + *(float *)&param_6->field_0x18;
  *(float *)&param_6->field_0x24 = local_80 * fVar13 + *(float *)&param_6->field_0x24;
  *(float *)&param_6->field_0x28 = local_80 * fVar12 + *(float *)&param_6->field_0x28;
  *(float *)&param_6->field_0x8 = fVar12 * (float)local_88._0_4_ + *(float *)&param_6->field_0x8;
  return;
}

// AddInternalForceDifferential @ 143f1d000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::AddInternalForceDifferential
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ForAnyElementType FVar13;
  FXPBDBendingConstraints *pFVar14;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  TVector<float,3> *pTVar21;
  uint *puVar22;
  TVector<float,3> *pTVar23;
  uint uVar24;
  TVector<float,3> *pTVar25;
  TVector<float,3> *pTVar26;
  longlong lVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_198 [32];
  ForAnyElementType local_148;
  undefined8 local_140;
  TVector<float,3> local_138;
  float local_12c;
  uint local_128;
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  longlong local_110;
  FSolverParticles *local_108;
  FXPBDBendingConstraints *local_100;
  uint *local_f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  fVar3 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange;
  fVar4 = *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange;
  local_108 = param_1;
  local_100 = this;
  local_f0 = param_3;
  if ((param_3->ArrayNum != (int)param_1->_padding_) &&
     (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3047942319203418851>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDBendingConstraints.cpp"
                          ,0x2e3,"ndf.Num() == InParticles.Size()"), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar12 = _UNK_150b29d28;
  uVar11 = ___xmm_00000003000000000000000100000002;
  local_128 = 0;
  if (0 < (int)this->_padding_) {
    local_110 = 0;
    do {
      lVar20 = local_110;
      uVar24 = ~local_128;
      uVar18 = 0;
      if ((int)local_128 < (int)this->_padding_) {
        uVar18 = uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar22 = (uint *)(lVar20 * 0x10 + this->_padding_);
      uVar18 = *puVar22;
      uVar17 = 0;
      if ((int)uVar18 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      local_f8 = puVar22;
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar17 = puVar22[1];
      pTVar26 = (TVector<float,3> *)
                ((longlong)(int)uVar18 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
      uVar18 = 0;
      if ((int)uVar17 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = puVar22[2];
      pTVar25 = (TVector<float,3> *)
                ((longlong)(int)uVar17 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
      uVar17 = 0;
      if ((int)uVar18 < *(int *)&(param_1->MPAndInvM).field_0x10) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar17 = puVar22[3];
      pTVar21 = (TVector<float,3> *)
                ((longlong)(int)uVar18 * 0x10 + *(longlong *)&(local_108->MPAndInvM).field_0x8);
      uVar18 = 0;
      if ((int)uVar17 < *(int *)&(local_108->MPAndInvM).field_0x10) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_12c = 0.0;
      local_148.Data = (FScriptContainerElement *)0x0;
      pTVar23 = (TVector<float,3> *)
                ((longlong)(int)uVar17 * 0x10 + *(longlong *)&(local_108->MPAndInvM).field_0x8);
      local_140 = 0;
      local_138._0_8_ = 0;
      local_138._8_4_ = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,4,&local_148,0,(int *)((longlong)&local_140 + 4));
      if (((local_148.Data <= &local_138) &&
          (&local_138 < (TVector<float,3> *)(local_148.Data + (longlong)local_140._4_4_ * 0xc))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = (int)local_140;
      if ((int)local_140 == local_140._4_4_) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_148,(int *)((longlong)&local_140 + 4));
      }
      iVar1 = iVar19 + 1;
      *(undefined8 *)(local_148.Data + (longlong)iVar19 * 0xc) = local_138._0_8_;
      *(undefined4 *)(local_148.Data + (longlong)iVar19 * 0xc + 8) = local_138._8_4_;
      local_140._0_4_ = iVar1;
      if (((local_148.Data <= &local_138) &&
          (&local_138 < (TVector<float,3> *)(local_148.Data + (longlong)local_140._4_4_ * 0xc))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)local_140 == local_140._4_4_) {
        local_140._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_148,(int *)((longlong)&local_140 + 4));
      }
      iVar19 = (int)local_140 + 1;
      *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0xc) = local_138._0_8_;
      *(undefined4 *)(local_148.Data + (longlong)(int)local_140 * 0xc + 8) = local_138._8_4_;
      local_140._0_4_ = iVar19;
      if (((local_148.Data <= &local_138) &&
          (&local_138 < (TVector<float,3> *)(local_148.Data + (longlong)local_140._4_4_ * 0xc))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)local_140 == local_140._4_4_) {
        local_140._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_148,(int *)((longlong)&local_140 + 4));
      }
      iVar19 = (int)local_140 + 1;
      *(undefined8 *)(local_148.Data + (longlong)(int)local_140 * 0xc) = local_138._0_8_;
      *(undefined4 *)(local_148.Data + (longlong)(int)local_140 * 0xc + 8) = local_138._8_4_;
      local_140._0_4_ = iVar19;
      if (((local_148.Data <= &local_138) &&
          (&local_138 < (TVector<float,3> *)(local_148.Data + (longlong)local_140._4_4_ * 0xc))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((int)local_140 == local_140._4_4_) {
        local_140._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_148,(int *)((longlong)&local_140 + 4));
      }
      lVar20 = (longlong)(int)local_140;
      local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
      *(undefined8 *)(local_148.Data + lVar20 * 0xc) = local_138._0_8_;
      *(undefined4 *)(local_148.Data + lVar20 * 0xc + 8) = local_138._8_4_;
      local_120.Data = (FScriptContainerElement *)0x0;
      local_118 = 4;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,4,0,&local_120,4,&local_114);
      local_e8 = uVar11;
      uStack_e0 = uVar12;
      *(undefined8 *)local_120.Data = uVar11;
      *(undefined8 *)(local_120.Data + 8) = uVar12;
      if ((local_118 < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)local_120.Data;
      if (((int)local_140 < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ComputeGradTheta(pTVar21,pTVar25,pTVar26,pTVar23,iVar19,(TVector<float,3> *)local_148.Data,
                       &local_12c);
      if ((local_118 < 2) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)(local_120.Data + 4);
      if (((int)local_140 < 2) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ComputeGradTheta(pTVar21,pTVar25,pTVar26,pTVar23,iVar19,
                       (TVector<float,3> *)(local_148.Data + 0xc),&local_12c);
      if ((local_118 < 3) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)(local_120.Data + 8);
      if (((int)local_140 < 3) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ComputeGradTheta(pTVar21,pTVar25,pTVar26,pTVar23,iVar19,
                       (TVector<float,3> *)(local_148.Data + 0x18),&local_12c);
      if ((local_118 < 4) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar19 = *(int *)(local_120.Data + 0xc);
      if (((int)local_140 < 4) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      ComputeGradTheta(pTVar21,pTVar25,pTVar26,pTVar23,iVar19,
                       (TVector<float,3> *)(local_148.Data + 0x24),&local_12c);
      pFVar14 = local_100;
      lVar20 = local_110;
      uVar18 = 0;
      if ((int)local_128 < (int)local_100->_padding_) {
        uVar18 = uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar22 = local_f8;
      fVar29 = fVar3;
      if (*(char *)(lVar20 + pFVar14->_padding_) != '\0') {
        fVar29 = fVar4;
      }
      iVar19 = 0;
      lVar20 = 0;
      fVar28 = 0.0;
      lVar27 = 0;
      do {
        if (((int)local_140 <= iVar19) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar13.Data = local_148.Data;
        uVar18 = puVar22[lVar20];
        uVar24 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar24 = ~uVar18 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar5 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0xc);
        fVar6 = *(float *)(FVar13.Data + lVar27);
        if (((int)local_140 <= iVar19) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar13.Data = local_148.Data;
        uVar18 = puVar22[lVar20];
        uVar24 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar24 = ~uVar18 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        fVar7 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0xc + 4);
        fVar8 = *(float *)(FVar13.Data + lVar27 + 4);
        if (((int)local_140 <= iVar19) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar13.Data = local_148.Data;
        uVar18 = puVar22[lVar20];
        uVar24 = 0;
        if ((int)uVar18 < param_2->ArrayNum) {
          uVar24 = ~uVar18 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar19 = iVar19 + 1;
        lVar20 = lVar20 + 1;
        lVar2 = lVar27 + 8;
        lVar27 = lVar27 + 0xc;
        fVar28 = fVar28 + fVar5 * fVar6 + fVar7 * fVar8 +
                 *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0xc + 8) *
                 *(float *)(FVar13.Data + lVar2);
      } while (iVar19 < 4);
      if (((int)local_140 < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar15 = local_f0;
      uVar18 = *puVar22;
      lVar20 = (longlong)(int)uVar18;
      fVar28 = fVar28 * fVar29;
      fVar29 = *(float *)local_148.Data;
      fVar5 = *(float *)(local_148.Data + 4);
      fVar6 = *(float *)(local_148.Data + 8);
      uVar24 = 0;
      if ((int)uVar18 < local_f0->ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar15->AllocatorInstance).Data;
      fVar7 = *(float *)(pFVar9 + lVar20 * 0xc + 4);
      fVar8 = *(float *)(pFVar9 + lVar20 * 0xc + 8);
      *(float *)(pFVar9 + lVar20 * 0xc) = fVar28 * fVar29 + *(float *)(pFVar9 + lVar20 * 0xc);
      *(float *)(pFVar9 + lVar20 * 0xc + 4) = fVar28 * fVar5 + fVar7;
      *(float *)(pFVar9 + lVar20 * 0xc + 8) = fVar28 * fVar6 + fVar8;
      if (((int)local_140 < 2) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = puVar22[1];
      lVar20 = (longlong)(int)uVar18;
      fVar29 = *(float *)(local_148.Data + 0xc);
      fVar5 = *(float *)(local_148.Data + 0x10);
      fVar6 = *(float *)(local_148.Data + 0x14);
      uVar24 = 0;
      if ((int)uVar18 < pTVar15->ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar15->AllocatorInstance).Data;
      *(float *)(pFVar9 + lVar20 * 0xc) = fVar28 * fVar29 + *(float *)(pFVar9 + lVar20 * 0xc);
      *(float *)(pFVar9 + lVar20 * 0xc + 4) = fVar28 * fVar5 + *(float *)(pFVar9 + lVar20 * 0xc + 4)
      ;
      *(float *)(pFVar9 + lVar20 * 0xc + 8) = fVar28 * fVar6 + *(float *)(pFVar9 + lVar20 * 0xc + 8)
      ;
      if (((int)local_140 < 3) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = puVar22[2];
      lVar20 = (longlong)(int)uVar18;
      fVar29 = *(float *)(local_148.Data + 0x18);
      fVar5 = *(float *)(local_148.Data + 0x1c);
      fVar6 = *(float *)(local_148.Data + 0x20);
      uVar24 = 0;
      if ((int)uVar18 < pTVar15->ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar15->AllocatorInstance).Data;
      *(float *)(pFVar9 + lVar20 * 0xc) = fVar28 * fVar29 + *(float *)(pFVar9 + lVar20 * 0xc);
      *(float *)(pFVar9 + lVar20 * 0xc + 4) = fVar28 * fVar5 + *(float *)(pFVar9 + lVar20 * 0xc + 4)
      ;
      *(float *)(pFVar9 + lVar20 * 0xc + 8) = fVar28 * fVar6 + *(float *)(pFVar9 + lVar20 * 0xc + 8)
      ;
      if (((int)local_140 < 4) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar18 = puVar22[3];
      lVar20 = (longlong)(int)uVar18;
      fVar29 = *(float *)(local_148.Data + 0x24);
      fVar5 = *(float *)(local_148.Data + 0x28);
      fVar6 = *(float *)(local_148.Data + 0x2c);
      uVar24 = 0;
      if ((int)uVar18 < pTVar15->ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar15->AllocatorInstance).Data;
      *(float *)(pFVar9 + lVar20 * 0xc) = fVar28 * fVar29 + *(float *)(pFVar9 + lVar20 * 0xc);
      *(float *)(pFVar9 + lVar20 * 0xc + 4) = fVar28 * fVar5 + *(float *)(pFVar9 + lVar20 * 0xc + 4)
      ;
      *(float *)(pFVar9 + lVar20 * 0xc + 8) = fVar28 * fVar6 + *(float *)(pFVar9 + lVar20 * 0xc + 8)
      ;
      if (local_120.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data);
      }
      if ((TVector<float,3> *)local_148.Data != (TVector<float,3> *)0x0) {
        FMemory::Free(local_148.Data);
      }
      local_128 = local_128 + 1;
      local_110 = local_110 + 1;
      this = local_100;
      param_1 = local_108;
    } while ((int)local_128 < (int)local_100->_padding_);
  }
  return;
}

// ComputeTotalEnergy @ 143f1ed80

float __thiscall
Chaos::Softs::FXPBDBendingConstraints::ComputeTotalEnergy
          (FXPBDBendingConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_res8;
  float local_res20;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  longlong local_f0;
  longlong local_e8;
  
  local_100 = *(float *)&(this->XPBDStiffness).MapView.OffsetRange;
  local_fc = 0.0;
  if (0.0 < param_2) {
    local_100 = param_2;
  }
  uVar10 = 0;
  if ((int)this->_padding_ < 1) {
    return 0.0;
  }
  local_e8 = 0;
  local_f0 = 0;
  uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  while( true ) {
    uVar5 = 0;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar11 = (float)(*pcVar2)();
      return fVar11;
    }
    lVar7 = this->_padding_;
    uVar5 = *(uint *)(local_f0 + lVar7);
    uVar4 = 0;
    if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar11 = (float)(*pcVar2)();
      return fVar11;
    }
    uVar4 = *(uint *)(local_f0 + 4 + lVar7);
    pfVar8 = (float *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
    uVar5 = 0;
    if ((int)uVar4 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar11 = (float)(*pcVar2)();
      return fVar11;
    }
    pfVar9 = (float *)((longlong)(int)uVar4 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
    uVar5 = *(uint *)(local_f0 + 8 + lVar7);
    uVar4 = 0;
    if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar11 = (float)(*pcVar2)();
      return fVar11;
    }
    pfVar6 = (float *)((longlong)(int)uVar5 * 0x10 + *(longlong *)&(param_1->MPAndInvM).field_0x8);
    uVar5 = *(uint *)(local_f0 + 0xc + lVar7);
    lVar7 = (longlong)(int)uVar5;
    uVar4 = 0;
    if ((int)uVar5 < *(int *)&(param_1->MPAndInvM).field_0x10) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar11 = (float)(*pcVar2)();
      return fVar11;
    }
    fVar11 = pfVar8[1];
    fVar15 = *pfVar8;
    fVar14 = pfVar8[2];
    lVar1 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    fVar22 = pfVar9[1] - fVar11;
    fVar20 = *pfVar9 - fVar15;
    fVar24 = pfVar9[2] - fVar14;
    fVar25 = *(float *)(lVar1 + 8 + lVar7 * 0x10) - fVar14;
    fVar26 = *(float *)(lVar1 + lVar7 * 0x10) - fVar15;
    fVar16 = *(float *)(lVar1 + 4 + lVar7 * 0x10) - fVar11;
    fVar12 = fVar20 * fVar20 + fVar22 * fVar22 + fVar24 * fVar24;
    fVar21 = fVar20;
    fVar23 = fVar22;
    fVar13 = fVar24;
    if ((fVar12 != __real_3f800000) &&
       (fVar21 = (float)uVar19, fVar23 = (float)uVar18, fVar13 = (float)uVar17,
       __real_322bcc77 <= fVar12)) {
      fVar13 = __real_3f800000 / SQRT(fVar12);
      fVar21 = fVar20 * fVar13;
      fVar23 = fVar22 * fVar13;
      fVar13 = fVar24 * fVar13;
    }
    fVar12 = (pfVar6[1] - fVar11) * fVar23 + (*pfVar6 - fVar15) * fVar21 +
             (pfVar6[2] - fVar14) * fVar13;
    fVar22 = (pfVar6[2] - fVar14) - fVar12 * fVar13;
    fVar20 = (*pfVar6 - fVar15) - fVar12 * fVar21;
    fVar12 = (pfVar6[1] - fVar11) - fVar12 * fVar23;
    fVar11 = fVar26 * fVar21 + fVar16 * fVar23 + fVar25 * fVar13;
    fVar25 = fVar25 - fVar11 * fVar13;
    fVar16 = fVar16 - fVar11 * fVar23;
    fVar26 = fVar26 - fVar11 * fVar21;
    fVar14 = fVar12 * fVar12 + fVar20 * fVar20 + fVar22 * fVar22;
    fVar11 = fVar20;
    fVar15 = fVar12;
    local_108 = fVar22;
    if ((fVar14 != __real_3f800000) &&
       (fVar11 = (float)uVar19, fVar15 = (float)uVar18, local_108 = (float)uVar17,
       __real_322bcc77 <= fVar14)) {
      fVar14 = __real_3f800000 / SQRT(fVar14);
      fVar11 = fVar20 * fVar14;
      fVar15 = fVar12 * fVar14;
      local_108 = fVar22 * fVar14;
    }
    fVar14 = fVar16 * fVar16 + fVar26 * fVar26 + fVar25 * fVar25;
    local_res8 = fVar26;
    local_res20 = fVar16;
    local_104 = fVar25;
    if ((fVar14 != __real_3f800000) &&
       (local_res8 = (float)uVar19, local_res20 = (float)uVar18, local_104 = (float)uVar17,
       __real_322bcc77 <= fVar14)) {
      fVar14 = __real_3f800000 / SQRT(fVar14);
      local_res8 = fVar26 * fVar14;
      local_res20 = fVar16 * fVar14;
      local_104 = fVar25 * fVar14;
    }
    fVar24 = fVar25 * fVar12 - fVar16 * fVar22;
    fVar25 = fVar26 * fVar22 - fVar25 * fVar20;
    fVar22 = fVar16 * fVar20 - fVar26 * fVar12;
    fVar20 = fVar25 * fVar25 + fVar24 * fVar24 + fVar22 * fVar22;
    fVar14 = fVar22;
    fVar12 = fVar24;
    fVar16 = fVar25;
    if ((fVar20 != __real_3f800000) &&
       (fVar14 = (float)uVar17, fVar12 = (float)uVar19, fVar16 = (float)uVar18,
       __real_322bcc77 <= fVar20)) {
      fVar16 = __real_3f800000 / SQRT(fVar20);
      fVar14 = fVar22 * fVar16;
      fVar12 = fVar24 * fVar16;
      fVar16 = fVar25 * fVar16;
    }
    fVar15 = fVar11 * local_res8 + fVar15 * local_res20 + local_108 * local_104;
    fVar11 = __real_bf800000;
    if ((__real_bf800000 <= fVar15) && (fVar11 = fVar15, __real_3f800000 <= fVar15)) {
      fVar11 = __real_3f800000;
    }
    fVar11 = acosf(fVar11);
    fVar11 = __real_40490fdb - fVar11;
    uVar5 = 0;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
       uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X, bVar3)) break;
    uVar10 = uVar10 + 1;
    local_f0 = local_f0 + 0x10;
    fVar11 = fVar11 * (fVar21 * fVar12 + fVar23 * fVar16 + fVar13 * fVar14) -
             *(float *)(this->_padding_ + local_e8 * 4);
    local_e8 = local_e8 + 1;
    local_fc = local_fc + fVar11 * fVar11 * local_100 * __real_3f000000;
    if ((int)this->_padding_ <= (int)uVar10) {
      return local_fc;
    }
  }
  pcVar2 = (code *)swi(3);
  fVar11 = (float)(*pcVar2)();
  return fVar11;
}

// SetProperties @ 143f25660

void __thiscall
Chaos::Softs::FXPBDBendingConstraints::SetProperties
          (FXPBDBendingConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  TVector<float,2> TVar5;
  ECollectionPropertyFlags EVar6;
  bool bVar7;
  byte bVar8;
  FString *pFVar9;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar10;
  FPBDWeightMap *pFVar11;
  FScriptContainerElement **ppFVar12;
  TArrayView<unsigned_char_const_,int> *pTVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_res8;
  TArrayView<float_const_,int> local_260;
  TArrayView<float_const_,int> local_250;
  TArrayView<float_const_,int> local_240;
  TArrayView<float_const_,int> local_230;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_220;
  FScriptContainerElement *local_208;
  int iStack_200;
  FScriptContainerElement *local_1f8;
  undefined4 local_1f0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1e8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  FScriptContainerElement *local_1b8;
  undefined4 local_1b0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  FScriptContainerElement *local_188;
  undefined4 local_180;
  undefined1 local_178 [40];
  float local_150;
  float local_14c;
  undefined1 local_148 [40];
  float local_120;
  float local_11c;
  undefined1 local_118 [40];
  float local_f0;
  float local_ec;
  FScriptContainerElement *local_e8 [2];
  FScriptContainerElement *local_d8 [2];
  FScriptContainerElement *local_c8 [2];
  FPBDWeightMap local_b8 [2];
  
  fVar16 = __real_4b189680;
  iVar1 = (this->XPBDBendingElementStiffnessIndex).Index;
  if (iVar1 != -1) {
    pTVar13 = &param_1->FlagsArray;
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar13);
    if (((EVar6 & Animatable) != None) &&
       (EVar6 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->XPBDBendingElementStiffnessIndex).Index,pTVar13),
       (char)EVar6 < '\0')) {
      if (((this->XPBDBendingElementStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingElementStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                             ,0x194,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (this->XPBDBendingElementStiffnessIndex).Index;
      fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->HighValueArray);
      fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->LowValueArray);
      if (fVar16 <= fVar14) {
        fVar14 = fVar16;
      }
      if (fVar16 <= fVar15) {
        fVar15 = fVar16;
      }
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      if (((this->XPBDBendingElementStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingElementStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                             ,0x194,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBendingElementStiffnessIndex).Index,pTVar13);
      if ((EVar6 & StringDirty) == None) {
        *(float *)&(this->XPBDStiffness).MapView.OffsetRange = fVar15;
        *(float *)&(this->XPBDStiffness).MapView.OffsetRange.field_0x4 = fVar14 - fVar15;
      }
      else {
        if (((this->XPBDBendingElementStiffnessIndex).Index == -1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("XPBDBendingElementStiffnessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                               ,0x194,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->XPBDBendingElementStiffnessIndex).Index,
                            &param_1->StringValueArray);
        local_220.DataPtr = (TVector<int,2> *)this->_padding_;
        iVar1 = (int)this->_padding_;
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        if ((iVar1 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_220.ArrayNum = iVar1;
        pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar9);
        if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_260._8_8_ = (ulonglong)(uint)local_260._12_4_ << 0x20;
          local_260.DataPtr = (float *)0x0;
        }
        else {
          local_260.DataPtr = *(float **)&pTVar10->field_0x10;
          local_260._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
        }
        FPBDFlatWeightMap::CalculateMapValues<2>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)local_178,&local_260,&local_220,
                   (int)lVar4,iVar2);
        local_208 = (FScriptContainerElement *)local_178._0_8_;
        if (((int)local_178._8_4_ < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_200 = local_178._8_4_;
        local_178._16_4_ = iVar1;
        if (local_178._8_4_ == iVar1) {
          ppFVar12 = local_e8;
          local_e8[0] = local_208;
        }
        else {
          ppFVar12 = &local_1f8;
          local_1f8 = (FScriptContainerElement *)0x0;
          local_1f0 = 0;
        }
        local_178._24_8_ = *ppFVar12;
        local_178._32_8_ = ppFVar12[1];
        local_14c = fVar14 - fVar15;
        local_150 = fVar15;
        FPBDFlatWeightMap::operator=(&this->XPBDStiffness,(FPBDFlatWeightMap *)local_178);
        if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_178._0_8_);
        }
      }
    }
  }
  pTVar13 = &param_1->FlagsArray;
  iVar1 = (this->XPBDBucklingRatioIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar13), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBucklingRatioIndex).Index,pTVar13), (char)EVar6 < '\0'))
  {
    if (((this->XPBDBucklingRatioIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x196,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDBucklingRatioIndex).Index;
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar1,&param_1->LowValueArray);
    if (__real_3f800000 <= (float)local_res8) {
      local_res8._0_4_ = __real_3f800000;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (__real_3f800000 <= fVar14) {
      fVar14 = __real_3f800000;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    local_res8._4_4_ = fVar14;
    TVar5 = local_res8;
    if (((this->XPBDBucklingRatioIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x196,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDBucklingRatioIndex).Index,pTVar13);
    if ((EVar6 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&this->_padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar8 = 0;
      }
      else {
        bVar8 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar8;
      this->_padding_ = (longlong)TVar5;
    }
    else {
      if (((this->XPBDBucklingRatioIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBucklingRatioIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                             ,0x196,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->XPBDBucklingRatioIndex).Index,&param_1->StringValueArray);
      local_1e8.DataPtr = (TVector<int,2> *)this->_padding_;
      local_1e8.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((local_1e8.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar9);
      if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_250.DataPtr = (float *)0x0;
        local_250._8_8_ = (ulonglong)(uint)local_250._12_4_ << 0x20;
      }
      else {
        local_250.DataPtr = *(float **)&pTVar10->field_0x10;
        local_250._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
      }
      pFVar11 = FPBDWeightMap::FPBDWeightMap<2>
                          (local_b8,(TVector<float,2> *)&local_res8,&local_250,&local_1e8,(int)lVar4
                           ,iVar1,0x10,(void *)0x0);
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,pFVar11);
      if (local_b8[0].Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Table.AllocatorInstance.Data);
      }
      if (local_b8[0].Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8[0].Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->XPBDBucklingStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar13), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBucklingStiffnessIndex).Index,pTVar13),
     (char)EVar6 < '\0')) {
    if (((this->XPBDBucklingStiffnessIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBucklingStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x197,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDBucklingStiffnessIndex).Index;
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (fVar16 <= fVar14) {
      fVar14 = fVar16;
    }
    if (fVar16 <= fVar15) {
      fVar15 = fVar16;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((this->XPBDBucklingStiffnessIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBucklingStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x197,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDBucklingStiffnessIndex).Index,pTVar13);
    if ((EVar6 & StringDirty) == None) {
      *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange = fVar15;
      *(float *)&(this->XPBDBucklingStiffness).MapView.OffsetRange.field_0x4 = fVar14 - fVar15;
    }
    else {
      if (((this->XPBDBucklingStiffnessIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBucklingStiffnessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                             ,0x197,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->XPBDBucklingStiffnessIndex).Index,
                          &param_1->StringValueArray);
      local_1d8.DataPtr = (TVector<int,2> *)this->_padding_;
      iVar1 = (int)this->_padding_;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1d8.ArrayNum = iVar1;
      pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar9);
      if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_240._8_8_ = (ulonglong)(uint)local_240._12_4_ << 0x20;
        local_240.DataPtr = (float *)0x0;
      }
      else {
        local_240.DataPtr = *(float **)&pTVar10->field_0x10;
        local_240._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_148,&local_240,&local_1d8,
                 (int)lVar4,iVar2);
      local_1c8 = (FScriptContainerElement *)local_148._0_8_;
      if (((int)local_148._8_4_ < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_1c0 = local_148._8_4_;
      local_148._16_4_ = iVar1;
      if (local_148._8_4_ == iVar1) {
        ppFVar12 = local_d8;
        local_d8[0] = local_1c8;
      }
      else {
        local_1b8 = (FScriptContainerElement *)0x0;
        local_1b0 = 0;
        ppFVar12 = &local_1b8;
      }
      local_148._24_8_ = *ppFVar12;
      local_148._32_8_ = ppFVar12[1];
      local_11c = fVar14 - fVar15;
      local_120 = fVar15;
      FPBDFlatWeightMap::operator=(&this->XPBDBucklingStiffness,(FPBDFlatWeightMap *)local_148);
      if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_148._0_8_);
      }
    }
  }
  iVar1 = (this->XPBDBendingElementDampingIndex).Index;
  if (((iVar1 != -1) &&
      (EVar6 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar13), (EVar6 & Animatable) != None)) &&
     (EVar6 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDBendingElementDampingIndex).Index,pTVar13),
     (char)EVar6 < '\0')) {
    if (((this->XPBDBendingElementDampingIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBendingElementDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x195,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDBendingElementDampingIndex).Index;
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (__real_447a0000 <= fVar14) {
      fVar14 = __real_447a0000;
    }
    if (__real_447a0000 <= fVar16) {
      fVar16 = __real_447a0000;
    }
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    if (((this->XPBDBendingElementDampingIndex).Index == -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDBendingElementDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                           ,0x195,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar6 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDBendingElementDampingIndex).Index,pTVar13);
    if ((EVar6 & StringDirty) == None) {
      *(float *)&(this->DampingRatio).MapView.OffsetRange = fVar14;
      *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 = fVar16 - fVar14;
    }
    else {
      if (((this->XPBDBendingElementDampingIndex).Index == -1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDBendingElementDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDBendingConstraints.h"
                             ,0x195,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->XPBDBendingElementDampingIndex).Index,
                          &param_1->StringValueArray);
      local_1a8.DataPtr = (TVector<int,2> *)this->_padding_;
      iVar1 = (int)this->_padding_;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((iVar1 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_1a8.ArrayNum = iVar1;
      pTVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar9);
      if (pTVar10 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_230.DataPtr = (float *)0x0;
        local_230._8_8_ = (ulonglong)(uint)local_230._12_4_ << 0x20;
      }
      else {
        local_230.DataPtr = *(float **)&pTVar10->field_0x10;
        local_230._8_8_ = *(undefined8 *)&pTVar10->field_0x18;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_118,&local_230,&local_1a8,
                 (int)lVar4,iVar2);
      local_198 = (FScriptContainerElement *)local_118._0_8_;
      if (((int)local_118._8_4_ < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_190 = local_118._8_4_;
      local_118._16_4_ = iVar1;
      if (local_118._8_4_ == iVar1) {
        ppFVar12 = local_c8;
        local_c8[0] = local_198;
      }
      else {
        local_188 = (FScriptContainerElement *)0x0;
        ppFVar12 = &local_188;
        local_180 = 0;
      }
      local_118._24_8_ = *ppFVar12;
      local_118._32_8_ = ppFVar12[1];
      local_ec = fVar16 - fVar14;
      local_f0 = fVar14;
      FPBDFlatWeightMap::operator=(&this->DampingRatio,(FPBDFlatWeightMap *)local_118);
      if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_118._0_8_);
      }
    }
  }
  return;
}

