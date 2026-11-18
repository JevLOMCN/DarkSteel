// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 36

// Apply<Chaos::Softs::FSolverParticles> @ 143ee9220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,float param_2)

{
  longlong *plVar1;
  TVector<float,2> *pTVar2;
  TVector<float,2> *pTVar3;
  TVector<float,2> *pTVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending> FVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FName FVar17;
  int iVar18;
  float *pfVar19;
  char cVar20;
  byte bVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_res18 [2];
  char local_res20 [8];
  char local_5d8;
  char local_5d7;
  char local_5d6;
  char local_5d5;
  char local_5d4;
  char local_5d3;
  char local_5d2;
  byte local_5d1;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  uint local_5c0;
  longlong local_5b8;
  FName local_5b0;
  TVector<float,2> *local_5a8;
  FScriptContainerElement *local_5a0;
  float *local_598;
  float *local_590;
  float *local_588;
  float *local_580;
  float *local_578;
  float *local_570;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560 [2];
  TVector<float,2> *local_558;
  TVector<float,2> *local_550;
  FScriptContainerElement *local_548;
  int local_540 [2];
  float *local_538;
  int local_530 [2];
  float local_528;
  float local_524;
  float local_520;
  float local_518;
  float local_514;
  float local_510;
  TVector<float,2> *local_508;
  TVector<float,2> *local_500;
  TVector<float,2> *local_4f8;
  TVector<float,2> *local_4f0;
  FScriptContainerElement *local_4e8;
  FScriptContainerElement *local_4e0;
  FScriptContainerElement *local_4d8;
  FName local_4d0;
  FName local_4c8;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  float local_4a0;
  float local_49c;
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  code *local_470;
  FXPBDAnisotropicBendingConstraints **local_468;
  code *local_460;
  FXPBDAnisotropicBendingConstraints **local_458;
  code *local_450;
  FXPBDAnisotropicBendingConstraints **local_448;
  code *local_440;
  int **local_438;
  code *local_430;
  int **local_428;
  code *local_420;
  TVector<float,2> ***local_418;
  FXPBDAnisotropicBendingConstraints *local_410;
  FSolverParticles *local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  float local_3f4;
  float *local_3f0;
  float *local_3e8;
  FXPBDAnisotropicBendingConstraints *local_3e0;
  FSolverParticles *local_3d8;
  int local_3d0;
  uint local_3cc;
  int local_3c8;
  float local_3c4;
  float *local_3c0;
  float *local_3b8;
  float local_3b0;
  FXPBDAnisotropicBendingConstraints *local_3a8;
  FSolverParticles *local_3a0;
  int local_398;
  int local_394;
  int local_390;
  float local_38c;
  float *local_388;
  float *local_380;
  float local_378;
  TVector<float,2> **local_370;
  char *local_368;
  FXPBDAnisotropicBendingConstraints *local_360;
  float *local_358;
  char *local_350;
  float *local_348;
  char *local_340;
  undefined4 *local_338;
  char *local_330;
  undefined4 *local_328;
  char *local_320;
  undefined4 *local_318;
  char *local_310;
  float *local_308;
  char *local_300;
  float *local_2f8;
  FSolverParticles *local_2f0;
  float *local_2e8;
  int *local_2e0;
  char *local_2d8;
  FXPBDAnisotropicBendingConstraints *local_2d0;
  float *local_2c8;
  char *local_2c0;
  float *local_2b8;
  char *local_2b0;
  undefined4 *local_2a8;
  char *local_2a0;
  undefined4 *local_298;
  char *local_290;
  undefined4 *local_288;
  char *local_280;
  float *local_278;
  char *local_270;
  float *local_268;
  FSolverParticles *local_260;
  float *local_258;
  int *local_250;
  char *local_248;
  FXPBDAnisotropicBendingConstraints *local_240;
  float *local_238;
  char *local_230;
  float *local_228;
  char *local_220;
  undefined4 *local_218;
  char *local_210;
  undefined4 *local_208;
  char *local_200;
  undefined4 *local_1f8;
  char *local_1f0;
  float *local_1e8;
  char *local_1e0;
  float *local_1d8;
  FSolverParticles *local_1d0;
  float *local_1c8;
  FName local_1c0;
  TArrayView<float_const_,int> local_1b8;
  TArrayView<float_const_,int> local_1a8;
  float *local_198;
  undefined8 uStack_190;
  float *local_188;
  undefined8 uStack_180;
  float *local_178;
  undefined8 uStack_170;
  float *local_168;
  undefined8 uStack_160;
  float *local_158;
  undefined8 uStack_150;
  float *local_148;
  undefined8 uStack_140;
  float *local_138;
  undefined8 uStack_130;
  float *local_128;
  undefined8 uStack_120;
  float *local_118;
  undefined8 uStack_110;
  float *local_108;
  undefined8 uStack_100;
  float *local_f8;
  undefined8 uStack_f0;
  
  bVar30 = CpuChannel->Enabled < 0;
  local_res18[0] = param_2;
  if (bVar30) {
    local_5d3 = '\0';
  }
  else {
    local_5d3 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId704,"FXPBDAnisotropicBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
               ,0x2c0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId704);
  }
  cVar20 = !bVar30;
  uVar23 = 0;
  uVar14 = 0;
  FVar12 = StatPtr_STAT_XPBD_AnisoBending;
  if (StatPtr_STAT_XPBD_AnisoBending == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending>)0x0) {
    pFVar11 = ::FName::FName(&local_1c0,"STAT_XPBD_AnisoBending");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoBending,*pFVar11,
                        L"Chaos XPBD Anisotropic Bending Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar21 = 0;
  local_4c8.ComparisonIndex.Value = 0;
  local_4c8.Number = 0;
  local_5d1 = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_143ee93e3:
    local_5b0 = local_4c8;
    FVar17 = local_4c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_550 = (TVector<float,2> *)((ulonglong)local_550 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_550,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar21 = 1;
      local_5d1 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_4d0.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_4d0.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_4d0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                   ,0x2c1);
        bVar21 = 3;
        local_5d1 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ee93e3;
    local_5b0 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    local_5d1 = bVar21 | 4;
  }
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d8 = '\0';
  }
  else {
    local_5d8 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d7 = '\0';
  }
  else {
    local_5d7 = '\x01';
  }
  if (((this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d6 = '\0';
  }
  else {
    local_5d6 = '\x01';
  }
  if (((this->BucklingStiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d5 = '\0';
  }
  else {
    local_5d5 = '\x01';
  }
  if (((this->BucklingStiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d4 = '\0';
  }
  else {
    local_5d4 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_5d2 = '\0';
  }
  else {
    local_5d2 = '\x01';
  }
  iVar18 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar18 < 1) || ((int)*plVar1 <= Chaos_XPBDBending_ParallelConstraintCount)) {
    fVar31 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    fVar6 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
    local_5d0 = fVar36;
    local_5cc = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    pTVar2 = &(this->BucklingStiffnessWeft).MapView.OffsetRange;
    pTVar3 = &(this->BucklingStiffnessBias).MapView.OffsetRange;
    pTVar4 = &(this->DampingRatio).MapView.OffsetRange;
    local_5c4 = *(float *)pTVar2;
    fVar7 = *(float *)pTVar4;
    local_5c8 = *(float *)pTVar3;
    if ((local_5d2 != '\0') ||
       (local_5a8 = pTVar2, local_558 = pTVar4, local_550 = pTVar3, 0.0 < fVar7)) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < (int)*plVar1) {
          do {
            fVar35 = local_5cc;
            iVar18 = (int)uVar23;
            fVar38 = fVar31;
            if (local_res20[0] != '\0') {
              fVar38 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar18);
              fVar38 = fVar38 * *pfVar13 + fVar37;
            }
            fVar37 = fVar6;
            if (local_5d8 != '\0') {
              fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar34 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar18);
              fVar37 = fVar37 * *pfVar13 + fVar34;
            }
            if (local_5d7 != '\0') {
              fVar34 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar18);
              fVar36 = fVar34 * *pfVar13 + fVar36;
            }
            if (local_5d6 != '\0') {
              fVar34 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar35 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar18);
              fVar35 = fVar34 * *pfVar13 + fVar35;
            }
            fVar34 = local_5c4;
            if (local_5d5 != '\0') {
              fVar34 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar33 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar18);
              fVar34 = fVar34 * *pfVar13 + fVar33;
            }
            fVar33 = local_5c8;
            if (local_5d4 != '\0') {
              fVar33 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
              fVar32 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessBias).MapView.MapValues,iVar18);
              fVar33 = fVar33 * *pfVar13 + fVar32;
            }
            fVar32 = fVar7;
            if (local_5d2 != '\0') {
              fVar32 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar13 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar18);
              fVar32 = fVar32 * *pfVar13 + fVar8;
            }
            local_488 = fVar34;
            local_484 = fVar35;
            local_480 = fVar33;
            local_47c = fVar37;
            local_478 = fVar38;
            local_474 = fVar36;
            ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,local_res18[0],iVar18,(TVector<float,3> *)&local_47c,
                       (TVector<float,3> *)&local_488,fVar32);
            uVar23 = (ulonglong)(iVar18 + 1U);
            fVar36 = local_5d0;
            cVar20 = local_5d3;
          } while ((int)(iVar18 + 1U) < (int)*plVar1);
        }
        goto LAB_143eeb7e9;
      }
      local_548 = (FScriptContainerElement *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_5a8 = pTVar2;
      local_558 = pTVar4;
      local_550 = pTVar3;
      if (0 < (int)*plVar1) {
        do {
          fVar35 = local_5cc;
          iVar18 = (int)uVar23;
          fVar38 = fVar31;
          if (local_res20[0] != '\0') {
            fVar38 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar18);
            fVar38 = fVar38 * *pfVar13 + fVar37;
          }
          fVar37 = fVar6;
          if (local_5d8 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar34 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar18);
            fVar37 = fVar37 * *pfVar13 + fVar34;
          }
          if (local_5d7 != '\0') {
            fVar34 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar18);
            fVar36 = fVar34 * *pfVar13 + fVar36;
          }
          if (local_5d6 != '\0') {
            fVar34 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar18);
            fVar35 = fVar34 * *pfVar13 + fVar35;
          }
          fVar34 = local_5c4;
          if (local_5d5 != '\0') {
            fVar34 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar33 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar18);
            fVar34 = fVar34 * *pfVar13 + fVar33;
          }
          fVar33 = local_5c8;
          if (local_5d4 != '\0') {
            fVar33 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
            fVar32 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessBias).MapView.MapValues,iVar18);
            fVar33 = fVar33 * *pfVar13 + fVar32;
          }
          fVar32 = fVar7;
          if (local_5d2 != '\0') {
            fVar32 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar13 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar18);
            fVar32 = fVar32 * *pfVar13 + fVar8;
          }
          local_4b8 = fVar34;
          local_4b4 = fVar35;
          local_4b0 = fVar33;
          local_4ac = fVar37;
          local_4a8 = fVar38;
          local_4a4 = fVar36;
          ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,local_res18[0],iVar18,(TVector<float,3> *)&local_4ac,
                     (TVector<float,3> *)&local_4b8,fVar32);
          uVar23 = (ulonglong)(iVar18 + 1U);
          FVar17 = local_5b0;
          fVar36 = local_5d0;
          cVar20 = local_5d3;
        } while ((int)(iVar18 + 1U) < (int)*plVar1);
      }
    }
    local_550 = &(this->BucklingStiffnessBias).MapView.OffsetRange;
    pTVar3 = local_550;
    local_558 = &(this->DampingRatio).MapView.OffsetRange;
    local_5a8 = &(this->BucklingStiffnessWeft).MapView.OffsetRange;
    pTVar2 = local_5a8;
    iVar18 = 0;
    if (0 < (int)this->_padding_) {
      do {
        fVar35 = local_5cc;
        fVar38 = fVar31;
        if (local_res20[0] != '\0') {
          fVar38 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWarp).MapView.MapValues,iVar18);
          fVar38 = fVar38 * *pfVar13 + fVar37;
        }
        fVar37 = fVar6;
        if (local_5d8 != '\0') {
          fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar34 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWeft).MapView.MapValues,iVar18);
          fVar37 = fVar37 * *pfVar13 + fVar34;
        }
        if (local_5d7 != '\0') {
          fVar34 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
          fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessBias).MapView.MapValues,iVar18);
          fVar36 = fVar34 * *pfVar13 + fVar36;
        }
        if (local_5d6 != '\0') {
          fVar34 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar35 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar18);
          fVar35 = fVar34 * *pfVar13 + fVar35;
        }
        fVar34 = local_5c4;
        if (local_5d5 != '\0') {
          fVar34 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar33 = *(float *)pTVar2;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar18);
          fVar34 = fVar34 * *pfVar13 + fVar33;
        }
        fVar33 = local_5c8;
        if (local_5d4 != '\0') {
          fVar33 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
          fVar32 = *(float *)pTVar3;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessBias).MapView.MapValues,iVar18);
          fVar33 = fVar33 * *pfVar13 + fVar32;
        }
        fVar32 = fVar7;
        if (local_5d2 != '\0') {
          fVar32 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
          fVar8 = *(float *)local_558;
          pfVar13 = TArrayView<float_const_,int>::operator[]
                              (&(this->DampingRatio).MapView.MapValues,iVar18);
          fVar32 = fVar32 * *pfVar13 + fVar8;
        }
        local_4a0 = fVar34;
        local_49c = fVar35;
        local_498 = fVar33;
        local_494 = fVar37;
        local_490 = fVar38;
        local_48c = fVar36;
        ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
                  (this,param_1,local_res18[0],iVar18,(TVector<float,3> *)&local_494,
                   (TVector<float,3> *)&local_4a0,fVar32);
        iVar18 = iVar18 + 1;
        FVar17 = local_5b0;
        fVar36 = local_5d0;
        cVar20 = local_5d3;
      } while (iVar18 < (int)this->_padding_);
    }
    goto LAB_143eeb7e9;
  }
  iVar18 = iVar18 + -1;
  lVar25 = (longlong)iVar18;
  local_5b8 = lVar25;
  if (bChaos_XPBDBending_ISPC_Enabled == false) {
    local_5cc = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    local_5d0 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    local_5c4 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    local_568 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    local_564 = *(undefined4 *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
    local_560[0] = *(undefined4 *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
    local_5c8 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
    if ((local_5d2 != '\0') || (0.0 < local_5c4)) {
      uVar24 = 0;
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        uVar26 = uVar23;
        if (0 < iVar18) {
          do {
            uVar16 = (uint)uVar26;
            uVar14 = uVar24;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar16 = uVar16 + 1;
            local_558 = (TVector<float,2> *)
                        CONCAT44(local_558._4_4_,
                                 *(undefined4 *)
                                  ((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                  uVar23 * 4));
            uVar14 = uVar24;
            if ((int)uVar16 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar14 = ~uVar16 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_368 = local_res20;
            local_358 = &local_5cc;
            local_420 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_5>,void,int>
                        ::Call;
            local_350 = &local_5d8;
            local_348 = &local_5d0;
            local_340 = &local_5d7;
            local_338 = &local_568;
            local_330 = &local_5d6;
            local_328 = &local_564;
            local_320 = &local_5d5;
            local_318 = local_560;
            local_310 = &local_5d4;
            local_308 = &local_5c8;
            local_300 = &local_5d2;
            local_2f8 = &local_5c4;
            local_2e8 = local_res18;
            local_418 = &local_370;
            local_370 = &local_558;
            local_360 = this;
            local_2f0 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar23 * 4 + 4) - (int)local_558,
                               (TFunctionRef<void___cdecl(int)> *)&local_420,false);
            uVar23 = uVar23 + 1;
            FVar17 = local_5b0;
            uVar26 = (ulonglong)uVar16;
            cVar20 = local_5d3;
          } while ((longlong)uVar23 < lVar25);
        }
      }
      else {
        uVar26 = uVar23;
        uVar27 = uVar23;
        if (0 < iVar18) {
          do {
            uVar15 = (uint)uVar27;
            uVar16 = uVar14;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar15 = uVar15 + 1;
            local_530[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar26 * 4);
            uVar16 = uVar14;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_2e0 = local_530;
            local_2d8 = local_res20;
            local_2c8 = &local_5cc;
            local_2c0 = &local_5d8;
            local_2b8 = &local_5d0;
            local_2b0 = &local_5d7;
            local_2a8 = &local_568;
            local_2a0 = &local_5d6;
            local_298 = &local_564;
            local_290 = &local_5d5;
            local_288 = local_560;
            local_280 = &local_5d4;
            local_278 = &local_5c8;
            local_270 = &local_5d2;
            local_268 = &local_5c4;
            local_258 = local_res18;
            local_438 = &local_2e0;
            local_440 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::<lambda_4>,void,int>
                        ::Call;
            local_2d0 = this;
            local_260 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar26 * 4 + 4) - local_530[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_440,false);
            cVar20 = local_5d3;
            uVar26 = uVar26 + 1;
            uVar28 = uVar23;
            uVar27 = (ulonglong)uVar15;
          } while ((longlong)uVar26 < lVar25);
          do {
            uVar15 = (uint)uVar28;
            uVar16 = uVar14;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar15 = uVar15 + 1;
            local_540[0] = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   uVar23 * 4);
            uVar16 = uVar24;
            if ((int)uVar15 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_250 = local_540;
            local_248 = local_res20;
            local_238 = &local_5cc;
            local_230 = &local_5d8;
            local_228 = &local_5d0;
            local_220 = &local_5d7;
            local_218 = &local_568;
            local_210 = &local_5d6;
            local_208 = &local_564;
            local_200 = &local_5d5;
            local_1f8 = local_560;
            local_1f0 = &local_5d4;
            local_1e8 = &local_5c8;
            local_1e0 = &local_5d2;
            local_1d8 = &local_5c4;
            local_1c8 = local_res18;
            local_428 = &local_250;
            local_430 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l75::<lambda_6>,void,int>
                        ::Call;
            local_240 = this;
            local_1d0 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar23 * 4 + 4) - local_540[0],
                               (TFunctionRef<void___cdecl(int)> *)&local_430,false);
            uVar23 = uVar23 + 1;
            FVar17 = local_5b0;
            uVar28 = (ulonglong)uVar15;
          } while ((longlong)uVar23 < lVar25);
        }
      }
    }
    goto LAB_143eeb7e9;
  }
  if (((((local_res20[0] == '\0') && (local_5d8 == '\0')) && (local_5d7 == '\0')) &&
      ((local_5d6 == '\0' && (local_5d5 == '\0')))) && (local_5d4 == '\0')) {
    if (local_5d2 == '\0') {
      local_518 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_514 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_510 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      local_528 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
      local_524 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
      local_520 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
      fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((local_518 <= local_514) || (fVar36 = local_518, local_518 <= local_510)) &&
         (fVar36 = local_510, local_510 <= local_514)) {
        fVar36 = local_514;
      }
      if (fVar36 <= 0.0) {
        if (((local_528 <= local_524) || (fVar36 = local_528, local_528 <= local_520)) &&
           (fVar36 = local_520, local_520 <= local_524)) {
          fVar36 = local_524;
        }
        if (fVar36 <= 0.0) goto LAB_143eeb7e9;
      }
      if (0.0 < fVar6) {
        if (bChaos_XPBDBending_SplitLambdaDamping == false) {
          if (0 < iVar18) {
            local_598 = (float *)0x0;
            do {
              pfVar13 = local_598;
              uVar14 = (uint)uVar23;
              uVar24 = 0;
              if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar24 = ~uVar14 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar14 = uVar14 + 1;
              local_5a8 = (TVector<float,2> *)CONCAT44(local_5a8._4_4_,uVar14);
              iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar13 * 4);
              lVar29 = (longlong)iVar18;
              uVar24 = 0;
              if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar24 = ~uVar14 >> 0x1f;
              }
              if ((uVar24 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              iVar22 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar13 * 4 + 4) - iVar18;
              if (iVar22 < Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                           Chaos_XPBDBending_ISPC_ParallelBatchSize) {
                local_5a0 = (this->Lambdas).AllocatorInstance.Data + lVar29 * 4;
                ApplyXPBDAnisotropicBendingConstraintsWithDamping
                          (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                           (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                           (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                           (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                           this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,
                           (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc
                           ,local_5a0,local_res18[0],&local_518,&local_528,fVar6,iVar22);
                lVar25 = local_5b8;
                uVar14 = (uint)local_5a8;
              }
              else {
                local_388 = &local_518;
                local_380 = &local_528;
                local_458 = &local_3a8;
                local_460 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l34::<lambda_2>,void,int>
                            ::Call;
                local_390 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
                local_38c = local_res18[0];
                local_3a8 = this;
                local_3a0 = param_1;
                local_398 = iVar18;
                local_394 = iVar22;
                local_378 = fVar6;
                PhysicsParallelFor((Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + iVar22) /
                                   Chaos_XPBDBending_ISPC_ParallelBatchSize,
                                   (TFunctionRef<void___cdecl(int)> *)&local_460,false);
                local_598 = pfVar13;
              }
              uVar23 = (ulonglong)uVar14;
              local_598 = (float *)((longlong)local_598 + 1);
              FVar17 = local_5b0;
              cVar20 = local_5d3;
            } while ((longlong)local_598 < lVar25);
          }
          goto LAB_143eeb7e9;
        }
        if (0 < lVar25) {
          local_598 = (float *)0x0;
          do {
            pfVar13 = local_598;
            uVar14 = (uint)uVar23;
            uVar24 = 0;
            if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar24 = ~uVar14 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar14 = uVar14 + 1;
            local_5a8 = (TVector<float,2> *)CONCAT44(local_5a8._4_4_,uVar14);
            iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar13 * 4);
            lVar29 = (longlong)iVar18;
            uVar24 = 0;
            if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar24 = ~uVar14 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_5c0 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                (longlong)pfVar13 * 4 + 4) - iVar18;
            if ((int)local_5c0 <
                Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                Chaos_XPBDBending_ISPC_ParallelBatchSize) {
              local_5a0 = (this->LambdasDamping).AllocatorInstance.Data + lVar29 * 4;
              ApplyXPBDAnisotropicBendingDampingConstraints
                        (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                         (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                         (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                         (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                         this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,
                         (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc,
                         local_5a0,local_res18[0],&local_518,&local_528,fVar6,local_5c0);
              uVar14 = (uint)local_5a8;
            }
            else {
              local_3c0 = &local_518;
              local_3b8 = &local_528;
              local_468 = &local_3e0;
              local_470 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l25::<lambda_1>,void,int>
                          ::Call;
              local_3c8 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
              local_3c4 = local_res18[0];
              local_3e0 = this;
              local_3d8 = param_1;
              local_3d0 = iVar18;
              local_3cc = local_5c0;
              local_3b0 = fVar6;
              PhysicsParallelFor((int)(Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + local_5c0) /
                                 Chaos_XPBDBending_ISPC_ParallelBatchSize,
                                 (TFunctionRef<void___cdecl(int)> *)&local_470,false);
              local_598 = pfVar13;
            }
            uVar23 = (ulonglong)uVar14;
            local_598 = (float *)((longlong)local_598 + 1);
            FVar17 = local_5b0;
            cVar20 = local_5d3;
          } while ((longlong)local_598 < lVar25);
        }
      }
      lVar25 = local_5b8;
      uVar26 = 0;
      uVar23 = uVar26;
      if (0 < local_5b8) {
        do {
          uVar14 = (uint)uVar23;
          uVar24 = 0;
          if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar14 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar14 = uVar14 + 1;
          local_5a8 = (TVector<float,2> *)CONCAT44(local_5a8._4_4_,uVar14);
          iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar26 * 4);
          uVar24 = 0;
          if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar14 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar29 = (longlong)iVar18;
          iVar22 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar26 * 4 + 4) - iVar18;
          if (iVar22 < Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                       Chaos_XPBDBending_ISPC_ParallelBatchSize) {
            ApplyXPBDAnisotropicBendingConstraints
                      (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                       (this->ConstraintsIndex1).AllocatorInstance.Data + lVar29 * 4,
                       (this->ConstraintsIndex2).AllocatorInstance.Data + lVar29 * 4,
                       (this->ConstraintsIndex3).AllocatorInstance.Data + lVar29 * 4,
                       (this->ConstraintsIndex4).AllocatorInstance.Data + lVar29 * 4,
                       this->_padding_ + lVar29 * 4,this->_padding_ + lVar29,
                       (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc,
                       (this->Lambdas).AllocatorInstance.Data + lVar29 * 4,local_res18[0],&local_518
                       ,&local_528,iVar22);
            uVar14 = (uint)local_5a8;
          }
          else {
            local_3f0 = &local_518;
            local_3e8 = &local_528;
            local_3f8 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
            local_448 = &local_410;
            local_450 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l41::<lambda_3>,void,int>
                        ::Call;
            local_3f4 = local_res18[0];
            local_410 = this;
            local_408 = param_1;
            local_400 = iVar18;
            local_3fc = iVar22;
            PhysicsParallelFor((Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + iVar22) /
                               Chaos_XPBDBending_ISPC_ParallelBatchSize,
                               (TFunctionRef<void___cdecl(int)> *)&local_450,false);
          }
          uVar26 = uVar26 + 1;
          FVar17 = local_5b0;
          uVar23 = (ulonglong)uVar14;
          cVar20 = local_5d3;
        } while ((longlong)uVar26 < lVar25);
      }
      goto LAB_143eeb7e9;
    }
LAB_143ee9e07:
    if (bChaos_XPBDBending_SplitLambdaDamping == false) {
      local_5c0 = 0;
      if (0 < lVar25) {
        local_548 = (FScriptContainerElement *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
        local_4e8 = (FScriptContainerElement *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
        local_598 = (float *)0x0;
        local_4f0 = &(this->BucklingStiffnessWarp).MapView.OffsetRange;
        local_4f8 = &(this->StiffnessBias).MapView.OffsetRange;
        local_500 = &(this->StiffnessWeft).MapView.OffsetRange;
        local_508 = &(this->StiffnessWarp).MapView.OffsetRange;
        do {
          pfVar13 = local_598;
          uVar24 = (uint)uVar23;
          uVar14 = 0;
          if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar13 * 4);
          lVar29 = (longlong)iVar18;
          uVar14 = 0;
          if ((int)(uVar24 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~(uVar24 + 1) >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_5a8 = (TVector<float,2> *)
                      CONCAT44(local_5a8._4_4_,
                               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar13 * 4 + 4) - iVar18);
          if (local_5d2 == '\0') {
            local_5a0 = (FScriptContainerElement *)0x0;
          }
          else {
            local_1b8.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_1b8.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_1b8._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_5a0 = (FScriptContainerElement *)
                        TArrayView<float_const_,int>::operator[](&local_1b8,iVar18);
          }
          lVar5 = lVar29 * 4;
          if (local_5d4 == '\0') {
            local_570 = (float *)0x0;
          }
          else {
            local_168 = (this->BucklingStiffnessBias).MapView.MapValues.DataPtr;
            uStack_160 = *(undefined8 *)&(this->BucklingStiffnessBias).MapView.MapValues.ArrayNum;
            local_570 = local_168 + lVar29;
          }
          if (local_5d5 == '\0') {
            local_578 = (float *)0x0;
          }
          else {
            local_578 = (this->BucklingStiffnessWeft).MapView.MapValues.DataPtr + lVar29;
          }
          if (local_5d6 == '\0') {
            local_580 = (float *)0x0;
          }
          else {
            local_580 = (this->BucklingStiffnessWarp).MapView.MapValues.DataPtr + lVar29;
          }
          if (local_5d7 == '\0') {
            local_588 = (float *)0x0;
          }
          else {
            local_588 = (this->StiffnessBias).MapView.MapValues.DataPtr + lVar29;
          }
          if (local_5d8 == '\0') {
            local_590 = (float *)0x0;
          }
          else {
            local_590 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar29;
          }
          if (local_res20[0] == '\0') {
            local_538 = (float *)0x0;
          }
          else {
            local_158 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
            uStack_150 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
            local_538 = local_158 + lVar29;
          }
          local_4d8 = (this->Lambdas).AllocatorInstance.Data + lVar5;
          local_4e0 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc;
          ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                     (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                     (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5,
                     (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5,
                     (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5,
                     (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5,
                     this->_padding_ + lVar5,this->_padding_ + lVar29,local_4e0,local_4d8,
                     local_res18[0],local_res20[0],local_508,local_538,local_5d8,local_500,local_590
                     ,local_5d7,local_4f8,local_588,local_5d6,local_4f0,local_580,local_5d5,
                     local_4e8,local_578,local_5d4,local_548,local_570,local_5d2,
                     &(this->DampingRatio).MapView.OffsetRange,local_5a0,(uint)local_5a8);
          local_5c0 = local_5c0 + 1;
          uVar23 = (ulonglong)local_5c0;
          local_598 = (float *)((longlong)local_598 + 1);
          FVar17 = local_5b0;
          cVar20 = local_5d3;
        } while ((longlong)local_598 < lVar25);
      }
      goto LAB_143eeb7e9;
    }
    local_5c0 = 0;
    if (lVar25 < 1) goto LAB_143eea273;
    local_4e0 = (FScriptContainerElement *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
    local_4d8 = (FScriptContainerElement *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
    local_5a0 = (FScriptContainerElement *)0x0;
    local_508 = &(this->BucklingStiffnessWarp).MapView.OffsetRange;
    local_500 = &(this->StiffnessBias).MapView.OffsetRange;
    local_4f8 = &(this->StiffnessWeft).MapView.OffsetRange;
    local_4f0 = &(this->StiffnessWarp).MapView.OffsetRange;
    do {
      pFVar10 = local_5a0;
      uVar24 = (uint)uVar23;
      uVar14 = 0;
      if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pFVar10 * 4);
      lVar29 = (longlong)iVar18;
      uVar14 = 0;
      if ((int)(uVar24 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar14 = ~(uVar24 + 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_5a8 = (TVector<float,2> *)
                  CONCAT44(local_5a8._4_4_,
                           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pFVar10 * 4 + 4) - iVar18);
      if (local_5d2 == '\0') {
        local_598 = (float *)0x0;
      }
      else {
        local_1a8.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_1a8.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_1a8._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_598 = TArrayView<float_const_,int>::operator[](&local_1a8,iVar18);
      }
      lVar5 = lVar29 * 4;
      if (local_5d4 == '\0') {
        local_538 = (float *)0x0;
      }
      else {
        local_188 = (this->BucklingStiffnessBias).MapView.MapValues.DataPtr;
        uStack_180 = *(undefined8 *)&(this->BucklingStiffnessBias).MapView.MapValues.ArrayNum;
        local_538 = local_188 + lVar29;
      }
      if (local_5d5 == '\0') {
        local_590 = (float *)0x0;
      }
      else {
        local_148 = (this->BucklingStiffnessWeft).MapView.MapValues.DataPtr;
        uStack_140 = *(undefined8 *)&(this->BucklingStiffnessWeft).MapView.MapValues.ArrayNum;
        local_590 = local_148 + lVar29;
      }
      if (local_5d6 == '\0') {
        local_588 = (float *)0x0;
      }
      else {
        local_138 = (this->BucklingStiffnessWarp).MapView.MapValues.DataPtr;
        uStack_130 = *(undefined8 *)&(this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum;
        local_588 = local_138 + lVar29;
      }
      if (local_5d7 == '\0') {
        local_580 = (float *)0x0;
      }
      else {
        local_128 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_120 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        local_580 = local_128 + lVar29;
      }
      if (local_5d8 == '\0') {
        local_578 = (float *)0x0;
      }
      else {
        local_118 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
        uStack_110 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
        local_578 = local_118 + lVar29;
      }
      if (local_res20[0] == '\0') {
        local_570 = (float *)0x0;
      }
      else {
        local_108 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_100 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        local_570 = local_108 + lVar29;
      }
      local_4e8 = (this->LambdasDamping).AllocatorInstance.Data + lVar5;
      local_548 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc;
      ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
                 (this->X1Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X2Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X3Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->X4Array).AllocatorInstance.Data + lVar29 * 0xc,
                 (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5,
                 (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5,
                 (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5,
                 (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5,this->_padding_ + lVar5,
                 this->_padding_ + lVar29,local_548,local_4e8,local_res18[0],local_res20[0],
                 local_4f0,local_570,local_5d8,local_4f8,local_578,local_5d7,local_500,local_580,
                 local_5d6,local_508,local_588,local_5d5,local_4d8,local_590,local_5d4,local_4e0,
                 local_538,local_5d2,&(this->DampingRatio).MapView.OffsetRange,local_598,
                 (uint)local_5a8);
      local_5c0 = local_5c0 + 1;
      uVar23 = (ulonglong)local_5c0;
      local_5a0 = local_5a0 + 1;
    } while ((longlong)local_5a0 < lVar25);
  }
  else {
    if ((local_5d2 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143ee9e07;
LAB_143eea273:
    if (lVar25 < 1) goto LAB_143eeb7e9;
  }
  lVar25 = local_5b8;
  uVar14 = 0;
  local_590 = (float *)0x0;
  do {
    pfVar13 = local_590;
    pfVar19 = (float *)0x0;
    uVar24 = 0;
    if ((int)uVar14 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar24 = ~uVar14 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pfVar13 * 4);
    lVar29 = (longlong)iVar18;
    uVar24 = 0;
    if ((int)(uVar14 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar24 = ~(uVar14 + 1) >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar5 = lVar29 * 4;
    if (local_5d4 == '\0') {
      local_5a0 = (FScriptContainerElement *)0x0;
    }
    else {
      local_5a0 = (FScriptContainerElement *)
                  ((this->BucklingStiffnessBias).MapView.MapValues.DataPtr + lVar29);
    }
    if (local_5d5 == '\0') {
      local_570 = (float *)0x0;
    }
    else {
      local_570 = (this->BucklingStiffnessWeft).MapView.MapValues.DataPtr + lVar29;
    }
    if (local_5d6 == '\0') {
      local_578 = (float *)0x0;
    }
    else {
      local_198 = (this->BucklingStiffnessWarp).MapView.MapValues.DataPtr;
      uStack_190 = *(undefined8 *)&(this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum;
      local_578 = local_198 + lVar29;
    }
    if (local_5d7 == '\0') {
      local_580 = (float *)0x0;
    }
    else {
      local_f8 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_f0 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_580 = local_f8 + lVar29;
    }
    if (local_5d8 == '\0') {
      local_588 = (float *)0x0;
    }
    else {
      local_178 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
      uStack_170 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
      local_588 = local_178 + lVar29;
    }
    if (local_res20[0] != '\0') {
      pfVar19 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar29;
    }
    ApplyXPBDAnisotropicBendingConstraintsWithMaps
              (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,
               (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5,
               (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5,this->_padding_ + lVar5,
               this->_padding_ + lVar29,
               (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar29 * 0xc,
               (this->Lambdas).AllocatorInstance.Data + lVar5,local_res18[0],local_res20[0],
               &(this->StiffnessWarp).MapView.OffsetRange,pfVar19,local_5d8,
               &(this->StiffnessWeft).MapView.OffsetRange,local_588,local_5d7,
               &(this->StiffnessBias).MapView.OffsetRange,local_580,local_5d6,
               &(this->BucklingStiffnessWarp).MapView.OffsetRange,local_578,local_5d5,
               &(this->BucklingStiffnessWeft).MapView.OffsetRange,local_570,local_5d4,
               &(this->BucklingStiffnessBias).MapView.OffsetRange,local_5a0,
               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pfVar13 * 4 + 4) - iVar18);
    uVar14 = uVar14 + 1;
    local_590 = (float *)((longlong)local_590 + 1);
    FVar17 = local_5b0;
    cVar20 = local_5d3;
  } while ((longlong)local_590 < lVar25);
LAB_143eeb7e9:
  bVar21 = local_5d1;
  if ((local_5d1 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar21 & 4) != 0) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143ef1a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  longlong *plVar1;
  TVector<float,2> *pTVar2;
  TVector<float,2> *pTVar3;
  TVector<float,2> *pTVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  code *pcVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending> FVar17;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar18;
  float *pfVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  FName FVar24;
  char cVar25;
  byte bVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  FName FVar30;
  uint uVar31;
  int iVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_res18 [2];
  char local_res20 [8];
  char local_648;
  char local_647;
  char local_646;
  char local_645;
  char local_644;
  char local_643;
  char local_642;
  char local_641;
  char local_640;
  char local_63f;
  char local_63e;
  char local_63d;
  byte local_63c;
  float local_638;
  char local_634;
  float local_630;
  char local_62c;
  float local_628;
  float local_624;
  TVector<float,2> *local_620;
  FScriptContainerElement *local_618;
  FScriptContainerElement *local_610;
  FScriptContainerElement *local_608;
  float *local_600;
  FName local_5f8;
  FScriptContainerElement *local_5f0;
  FScriptContainerElement *local_5e8;
  FScriptContainerElement *local_5e0;
  FScriptContainerElement *local_5d8;
  FName local_5d0;
  undefined4 local_5c8 [2];
  FScriptContainerElement *local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0 [2];
  TVector<float,2> *local_5a8;
  int local_5a0;
  int local_59c;
  TVector<float,2> *local_598;
  FScriptContainerElement *local_590;
  FScriptContainerElement *local_588;
  float local_580;
  float local_57c;
  float local_578;
  float local_570;
  float local_56c;
  float local_568;
  FScriptContainerElement *local_560;
  FScriptContainerElement *local_558;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  FName local_540;
  float local_538;
  float local_534;
  float local_530;
  FName local_528;
  float local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e4;
  float local_4e0;
  code *local_4d8;
  FXPBDAnisotropicBendingConstraints **local_4d0;
  code *local_4c8;
  FXPBDAnisotropicBendingConstraints **local_4c0;
  code *local_4b8;
  FXPBDAnisotropicBendingConstraints **local_4b0;
  code *local_4a8;
  int **local_4a0;
  code *local_498;
  int **local_490;
  code *local_488;
  TVector<float,2> ***local_480;
  FXPBDAnisotropicBendingConstraints *local_478;
  FSolverParticlesRange *local_470;
  int local_468;
  int local_464;
  int local_460;
  float local_45c;
  float *local_458;
  float *local_450;
  FXPBDAnisotropicBendingConstraints *local_448;
  FSolverParticlesRange *local_440;
  int local_438;
  float local_434;
  int local_430;
  float local_42c;
  float *local_428;
  float *local_420;
  float local_418;
  FXPBDAnisotropicBendingConstraints *local_410;
  FSolverParticlesRange *local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  float local_3f4;
  float *local_3f0;
  float *local_3e8;
  float local_3e0;
  TVector<float,2> **local_3d8;
  char *local_3d0;
  FXPBDAnisotropicBendingConstraints *local_3c8;
  float *local_3c0;
  char *local_3b8;
  undefined4 *local_3b0;
  char *local_3a8;
  undefined4 *local_3a0;
  char *local_398;
  undefined4 *local_390;
  char *local_388;
  undefined4 *local_380;
  char *local_378;
  float *local_370;
  char *local_368;
  float *local_360;
  FSolverParticlesRange *local_358;
  float *local_350;
  int *local_348;
  char *local_340;
  FXPBDAnisotropicBendingConstraints *local_338;
  float *local_330;
  char *local_328;
  undefined4 *local_320;
  char *local_318;
  undefined4 *local_310;
  char *local_308;
  undefined4 *local_300;
  char *local_2f8;
  undefined4 *local_2f0;
  char *local_2e8;
  float *local_2e0;
  char *local_2d8;
  float *local_2d0;
  FSolverParticlesRange *local_2c8;
  float *local_2c0;
  int *local_2b8;
  char *local_2b0;
  FXPBDAnisotropicBendingConstraints *local_2a8;
  float *local_2a0;
  char *local_298;
  undefined4 *local_290;
  char *local_288;
  undefined4 *local_280;
  char *local_278;
  undefined4 *local_270;
  char *local_268;
  undefined4 *local_260;
  char *local_258;
  float *local_250;
  char *local_248;
  float *local_240;
  FSolverParticlesRange *local_238;
  float *local_230;
  FName local_228;
  TArrayView<float_const_,int> local_220;
  TArrayView<float_const_,int> local_210;
  float *local_200;
  undefined8 uStack_1f8;
  float *local_1f0;
  undefined8 uStack_1e8;
  float *local_1e0;
  undefined8 uStack_1d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1d0;
  float *local_1c0;
  undefined8 uStack_1b8;
  float *local_1b0;
  undefined8 uStack_1a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_190;
  float *local_180;
  undefined8 uStack_178;
  float *local_170;
  undefined8 uStack_168;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_160;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_150;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_140;
  float *local_130;
  undefined8 uStack_128;
  float *local_120;
  undefined8 uStack_118;
  float *local_110;
  undefined8 uStack_108;
  float *local_100;
  undefined8 uStack_f8;
  
  bVar35 = CpuChannel->Enabled < 0;
  local_res18[0] = param_2;
  if (bVar35) {
    local_643 = '\0';
  }
  else {
    local_643 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId704,"FXPBDAnisotropicBendingConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
               ,0x2c0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId704);
  }
  cVar25 = !bVar35;
  uVar29 = 0;
  uVar21 = 0;
  FVar17 = StatPtr_STAT_XPBD_AnisoBending;
  if (StatPtr_STAT_XPBD_AnisoBending == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending>)0x0) {
    pFVar16 = ::FName::FName(&local_228,"STAT_XPBD_AnisoBending");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoBending>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoBending,*pFVar16,
                        L"Chaos XPBD Anisotropic Bending Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar17;
  bVar26 = 0;
  local_528.ComparisonIndex.Value = 0;
  local_528.Number = 0;
  local_63c = 0;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_143ef1c47:
    local_5d0 = local_528;
    FVar24 = local_528;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_598 = (TVector<float,2> *)((ulonglong)local_598 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_598,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar26 = 1;
      local_63c = 1;
      if (-1 < CpuChannel->Enabled) {
        local_540.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_540.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_540,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                   ,0x2c1);
        bVar26 = 3;
        local_63c = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ef1c47;
    local_5f8 = FVar24;
    local_5d0 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    local_63c = bVar26 | 4;
  }
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_res20[0] = '\0';
  }
  else {
    local_res20[0] = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_648 = '\0';
  }
  else {
    local_648 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_647 = '\0';
  }
  else {
    local_647 = '\x01';
  }
  if (((this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_646 = '\0';
  }
  else {
    local_646 = '\x01';
  }
  if (((this->BucklingStiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_645 = '\0';
  }
  else {
    local_645 = '\x01';
  }
  if (((this->BucklingStiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_644 = '\0';
  }
  else {
    local_644 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    local_642 = '\0';
  }
  else {
    local_642 = '\x01';
  }
  iVar32 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar1 = &this->_padding_;
  if ((iVar32 < 1) || ((int)*plVar1 <= Chaos_XPBDBending_ParallelConstraintCount)) {
    fVar36 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    fVar6 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
    local_630 = fVar41;
    local_638 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    pTVar2 = &(this->BucklingStiffnessWeft).MapView.OffsetRange;
    pTVar3 = &(this->BucklingStiffnessBias).MapView.OffsetRange;
    pTVar4 = &(this->DampingRatio).MapView.OffsetRange;
    local_624 = *(float *)pTVar2;
    fVar7 = *(float *)pTVar4;
    local_628 = *(float *)pTVar3;
    if ((local_642 != '\0') ||
       (local_620 = pTVar2, local_5a8 = pTVar4, local_598 = pTVar3, 0.0 < fVar7)) {
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        if (0 < (int)*plVar1) {
          do {
            fVar40 = local_638;
            iVar32 = (int)uVar29;
            fVar43 = fVar36;
            if (local_res20[0] != '\0') {
              fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar32);
              fVar43 = fVar43 * *pfVar19 + fVar42;
            }
            fVar42 = fVar6;
            if (local_648 != '\0') {
              fVar42 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar39 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar32);
              fVar42 = fVar42 * *pfVar19 + fVar39;
            }
            if (local_647 != '\0') {
              fVar39 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar32);
              fVar41 = fVar39 * *pfVar19 + fVar41;
            }
            if (local_646 != '\0') {
              fVar39 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar40 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar32);
              fVar40 = fVar39 * *pfVar19 + fVar40;
            }
            fVar39 = local_624;
            if (local_645 != '\0') {
              fVar39 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar38 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar32);
              fVar39 = fVar39 * *pfVar19 + fVar38;
            }
            fVar38 = local_628;
            if (local_644 != '\0') {
              fVar38 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
              fVar37 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->BucklingStiffnessBias).MapView.MapValues,iVar32);
              fVar38 = fVar38 * *pfVar19 + fVar37;
            }
            fVar37 = fVar7;
            if (local_642 != '\0') {
              fVar37 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar19 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar32);
              fVar37 = fVar37 * *pfVar19 + fVar8;
            }
            local_4f4 = fVar39;
            local_4f0 = fVar40;
            local_4ec = fVar38;
            local_4e8 = fVar42;
            local_4e4 = fVar43;
            local_4e0 = fVar41;
            ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,local_res18[0],iVar32,(TVector<float,3> *)&local_4e8,
                       (TVector<float,3> *)&local_4f4,fVar37);
            uVar29 = (ulonglong)(iVar32 + 1U);
            fVar41 = local_630;
            cVar25 = local_643;
          } while ((int)(iVar32 + 1U) < (int)*plVar1);
        }
        goto LAB_143ef41c0;
      }
      local_5c0 = (FScriptContainerElement *)&(this->StiffnessWeft).MapView.OffsetRange;
      uVar28 = uVar29;
      local_620 = pTVar2;
      local_5a8 = pTVar4;
      local_598 = pTVar3;
      if (0 < (int)*plVar1) {
        do {
          fVar40 = local_638;
          iVar32 = (int)uVar28;
          fVar43 = fVar36;
          if (local_res20[0] != '\0') {
            fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar32);
            fVar43 = fVar43 * *pfVar19 + fVar42;
          }
          fVar42 = fVar6;
          if (local_648 != '\0') {
            fVar42 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar39 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar32);
            fVar42 = fVar42 * *pfVar19 + fVar39;
          }
          if (local_647 != '\0') {
            fVar39 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar32);
            fVar41 = fVar39 * *pfVar19 + fVar41;
          }
          if (local_646 != '\0') {
            fVar39 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar32);
            fVar40 = fVar39 * *pfVar19 + fVar40;
          }
          fVar39 = local_624;
          if (local_645 != '\0') {
            fVar39 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar32);
            fVar39 = fVar39 * *pfVar19 + fVar38;
          }
          fVar38 = local_628;
          if (local_644 != '\0') {
            fVar38 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->BucklingStiffnessBias).MapView.MapValues,iVar32);
            fVar38 = fVar38 * *pfVar19 + fVar37;
          }
          fVar37 = fVar7;
          if (local_642 != '\0') {
            fVar37 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar32);
            fVar37 = fVar37 * *pfVar19 + fVar8;
          }
          local_518 = fVar39;
          local_514 = fVar40;
          local_510 = fVar38;
          local_50c = fVar42;
          local_508 = fVar43;
          local_504 = fVar41;
          ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,local_res18[0],iVar32,(TVector<float,3> *)&local_50c,
                     (TVector<float,3> *)&local_518,fVar37);
          FVar24 = local_5d0;
          uVar28 = (ulonglong)(iVar32 + 1U);
          fVar41 = local_630;
          cVar25 = local_643;
        } while ((int)(iVar32 + 1U) < (int)*plVar1);
      }
    }
    local_598 = &(this->BucklingStiffnessBias).MapView.OffsetRange;
    pTVar3 = local_598;
    local_5a8 = &(this->DampingRatio).MapView.OffsetRange;
    local_620 = &(this->BucklingStiffnessWeft).MapView.OffsetRange;
    pTVar2 = local_620;
    if (0 < (int)this->_padding_) {
      do {
        fVar40 = local_638;
        iVar32 = (int)uVar29;
        fVar43 = fVar36;
        if (local_res20[0] != '\0') {
          fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWarp).MapView.MapValues,iVar32);
          fVar43 = fVar43 * *pfVar19 + fVar42;
        }
        fVar42 = fVar6;
        if (local_648 != '\0') {
          fVar42 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar39 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWeft).MapView.MapValues,iVar32);
          fVar42 = fVar42 * *pfVar19 + fVar39;
        }
        if (local_647 != '\0') {
          fVar39 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
          fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessBias).MapView.MapValues,iVar32);
          fVar41 = fVar39 * *pfVar19 + fVar41;
        }
        if (local_646 != '\0') {
          fVar39 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar40 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessWarp).MapView.MapValues,iVar32);
          fVar40 = fVar39 * *pfVar19 + fVar40;
        }
        fVar39 = local_624;
        if (local_645 != '\0') {
          fVar39 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar38 = *(float *)pTVar2;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessWeft).MapView.MapValues,iVar32);
          fVar39 = fVar39 * *pfVar19 + fVar38;
        }
        fVar38 = local_628;
        if (local_644 != '\0') {
          fVar38 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4;
          fVar37 = *(float *)pTVar3;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->BucklingStiffnessBias).MapView.MapValues,iVar32);
          fVar38 = fVar38 * *pfVar19 + fVar37;
        }
        fVar37 = fVar7;
        if (local_642 != '\0') {
          fVar37 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
          fVar8 = *(float *)local_5a8;
          pfVar19 = TArrayView<float_const_,int>::operator[]
                              (&(this->DampingRatio).MapView.MapValues,iVar32);
          fVar37 = fVar37 * *pfVar19 + fVar8;
        }
        local_538 = fVar42;
        local_534 = fVar43;
        local_530 = fVar41;
        local_500 = fVar39;
        local_4fc = fVar40;
        local_4f8 = fVar38;
        ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
                  (this,param_1,local_res18[0],iVar32,(TVector<float,3> *)&local_538,
                   (TVector<float,3> *)&local_500,fVar37);
        uVar29 = (ulonglong)(iVar32 + 1U);
        FVar24 = local_5d0;
        fVar41 = local_630;
        cVar25 = local_643;
      } while ((int)(iVar32 + 1U) < (int)this->_padding_);
    }
    goto LAB_143ef41c0;
  }
  iVar32 = iVar32 + -1;
  FVar30 = (FName)(longlong)iVar32;
  local_5f8 = FVar30;
  if (bChaos_XPBDBending_ISPC_Enabled == false) {
    local_630 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    local_5c8[0] = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
    local_624 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    local_5b0[0] = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    local_5b8 = *(undefined4 *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
    local_5b4 = *(undefined4 *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
    local_628 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
    if ((local_642 != '\0') || (0.0 < local_624)) {
      uVar31 = 0;
      if (bChaos_XPBDBending_SplitLambdaDamping == false) {
        uVar28 = uVar29;
        if (0 < iVar32) {
          do {
            uVar23 = (uint)uVar28;
            uVar21 = uVar31;
            if ((int)uVar23 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            uVar23 = uVar23 + 1;
            local_5a8 = (TVector<float,2> *)
                        CONCAT44(local_5a8._4_4_,
                                 *(undefined4 *)
                                  ((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                  uVar29 * 4));
            uVar21 = uVar31;
            if ((int)uVar23 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            local_3d8 = &local_5a8;
            local_3d0 = local_res20;
            local_3c0 = &local_630;
            local_488 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_5>,void,int>
                        ::Call;
            local_3b8 = &local_648;
            local_3a8 = &local_647;
            local_3a0 = local_5b0;
            local_398 = &local_646;
            local_390 = &local_5b8;
            local_388 = &local_645;
            local_380 = &local_5b4;
            local_378 = &local_644;
            local_370 = &local_628;
            local_368 = &local_642;
            local_360 = &local_624;
            local_350 = local_res18;
            local_480 = &local_3d8;
            local_3c8 = this;
            local_3b0 = local_5c8;
            local_358 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar29 * 4 + 4) - (int)local_5a8,
                               (TFunctionRef<void___cdecl(int)> *)&local_488,false);
            uVar29 = uVar29 + 1;
            FVar24 = local_5d0;
            uVar28 = (ulonglong)uVar23;
            cVar25 = local_643;
          } while ((longlong)uVar29 < (longlong)FVar30);
        }
      }
      else {
        uVar28 = uVar29;
        uVar33 = uVar29;
        if (0 < iVar32) {
          do {
            uVar22 = (uint)uVar33;
            uVar23 = uVar21;
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
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            uVar22 = uVar22 + 1;
            local_5a0 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                uVar28 * 4);
            uVar23 = uVar21;
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
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            local_348 = &local_5a0;
            local_340 = local_res20;
            local_330 = &local_630;
            local_328 = &local_648;
            local_318 = &local_647;
            local_310 = local_5b0;
            local_308 = &local_646;
            local_300 = &local_5b8;
            local_2f8 = &local_645;
            local_2f0 = &local_5b4;
            local_2e8 = &local_644;
            local_2e0 = &local_628;
            local_2d8 = &local_642;
            local_2d0 = &local_624;
            local_2c0 = local_res18;
            local_4a0 = &local_348;
            local_4a8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l69::<lambda_4>,void,int>
                        ::Call;
            local_338 = this;
            local_320 = local_5c8;
            local_2c8 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar28 * 4 + 4) - local_5a0,
                               (TFunctionRef<void___cdecl(int)> *)&local_4a8,false);
            cVar25 = local_643;
            uVar28 = uVar28 + 1;
            uVar34 = uVar29;
            uVar33 = (ulonglong)uVar22;
          } while ((longlong)uVar28 < (longlong)FVar30);
          do {
            uVar22 = (uint)uVar34;
            uVar23 = uVar21;
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
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            uVar22 = uVar22 + 1;
            local_59c = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                uVar29 * 4);
            uVar23 = uVar31;
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
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            local_2b8 = &local_59c;
            local_2b0 = local_res20;
            local_2a0 = &local_630;
            local_298 = &local_648;
            local_288 = &local_647;
            local_280 = local_5b0;
            local_278 = &local_646;
            local_270 = &local_5b8;
            local_268 = &local_645;
            local_260 = &local_5b4;
            local_258 = &local_644;
            local_250 = &local_628;
            local_248 = &local_642;
            local_240 = &local_624;
            local_230 = local_res18;
            local_490 = &local_2b8;
            local_498 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l75::<lambda_6>,void,int>
                        ::Call;
            local_2a8 = this;
            local_290 = local_5c8;
            local_238 = param_1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar29 * 4 + 4) - local_59c,
                               (TFunctionRef<void___cdecl(int)> *)&local_498,false);
            uVar29 = uVar29 + 1;
            FVar24 = local_5d0;
            uVar34 = (ulonglong)uVar22;
          } while ((longlong)uVar29 < (longlong)FVar30);
        }
      }
    }
    goto LAB_143ef41c0;
  }
  if (((((local_res20[0] == '\0') && (local_648 == '\0')) && (local_647 == '\0')) &&
      ((local_646 == '\0' && (local_645 == '\0')))) && (local_644 == '\0')) {
    if (local_642 == '\0') {
      local_570 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_56c = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_568 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      local_580 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
      local_57c = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
      local_578 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
      fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((local_570 <= local_56c) || (fVar41 = local_570, local_570 <= local_568)) &&
         (fVar41 = local_568, local_568 <= local_56c)) {
        fVar41 = local_56c;
      }
      if (fVar41 <= 0.0) {
        if (((local_580 <= local_57c) || (fVar41 = local_580, local_580 <= local_578)) &&
           (fVar41 = local_578, local_578 <= local_57c)) {
          fVar41 = local_57c;
        }
        if (fVar41 <= 0.0) goto LAB_143ef41c0;
      }
      if (0.0 < fVar6) {
        if (bChaos_XPBDBending_SplitLambdaDamping == false) {
          if (0 < iVar32) {
            local_600 = (float *)0x0;
            do {
              pfVar19 = local_600;
              uVar21 = (uint)uVar29;
              uVar31 = 0;
              if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar31 = ~uVar21 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              uVar21 = uVar21 + 1;
              local_620 = (TVector<float,2> *)CONCAT44(local_620._4_4_,uVar21);
              iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar19 * 4);
              lVar27 = (longlong)iVar32;
              uVar31 = 0;
              if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar31 = ~uVar21 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              fVar41 = local_res18[0];
              iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar19 * 4 + 4) - iVar32;
              if (iVar20 < Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                           Chaos_XPBDBending_ISPC_ParallelBatchSize) {
                local_608 = (FScriptContainerElement *)(this->_padding_ + lVar27);
                local_610 = (FScriptContainerElement *)(this->_padding_ + lVar27 * 4);
                local_618 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar27 * 4;
                local_5f0 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar27 * 4;
                local_5d8 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar27 * 4;
                local_5e0 = (this->ConstraintsIndex1).AllocatorInstance.Data + lVar27 * 4;
                local_5e8 = (this->X4Array).AllocatorInstance.Data + lVar27 * 0xc;
                pFVar9 = (this->X3Array).AllocatorInstance.Data;
                pFVar10 = (this->X2Array).AllocatorInstance.Data;
                pFVar11 = (this->X1Array).AllocatorInstance.Data;
                pFVar12 = (this->Lambdas).AllocatorInstance.Data;
                pFVar13 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
                pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a0);
                ApplyXPBDAnisotropicBendingConstraintsWithDamping
                          (pTVar18->DataPtr,pFVar11 + lVar27 * 0xc,pFVar10 + lVar27 * 0xc,
                           pFVar9 + lVar27 * 0xc,local_5e8,local_5e0,local_5d8,local_5f0,local_618,
                           local_610,local_608,pFVar13 + lVar27 * 0xc,pFVar12 + lVar27 * 4,fVar41,
                           &local_570,&local_580,fVar6,iVar20);
                FVar30 = local_5f8;
                uVar21 = (uint)local_620;
              }
              else {
                local_3f0 = &local_570;
                local_3e8 = &local_580;
                local_4c0 = &local_410;
                local_4c8 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l34::<lambda_2>,void,int>
                            ::Call;
                local_3f8 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
                local_3f4 = local_res18[0];
                local_410 = this;
                local_408 = param_1;
                local_400 = iVar32;
                local_3fc = iVar20;
                local_3e0 = fVar6;
                PhysicsParallelFor((Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + iVar20) /
                                   Chaos_XPBDBending_ISPC_ParallelBatchSize,
                                   (TFunctionRef<void___cdecl(int)> *)&local_4c8,false);
                local_600 = pfVar19;
              }
              uVar29 = (ulonglong)uVar21;
              local_600 = (float *)((longlong)local_600 + 1);
              FVar24 = local_5d0;
              cVar25 = local_643;
            } while ((longlong)local_600 < (longlong)FVar30);
          }
          goto LAB_143ef41c0;
        }
        if (0 < iVar32) {
          local_600 = (float *)0x0;
          do {
            pfVar19 = local_600;
            uVar21 = (uint)uVar29;
            uVar31 = 0;
            if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar31 = ~uVar21 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            uVar21 = uVar21 + 1;
            local_620 = (TVector<float,2> *)CONCAT44(local_620._4_4_,uVar21);
            iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar19 * 4);
            lVar27 = (longlong)iVar32;
            uVar31 = 0;
            if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar31 = ~uVar21 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            fVar41 = local_res18[0];
            local_638 = (float)(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.
                                         Data + (longlong)pfVar19 * 4 + 4) - iVar32);
            if ((int)local_638 <
                Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                Chaos_XPBDBending_ISPC_ParallelBatchSize) {
              local_608 = (this->LambdasDamping).AllocatorInstance.Data + lVar27 * 4;
              local_610 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar27 * 0xc;
              local_618 = (FScriptContainerElement *)(this->_padding_ + lVar27);
              local_5f0 = (FScriptContainerElement *)(this->_padding_ + lVar27 * 4);
              local_5d8 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar27 * 4;
              local_5e0 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar27 * 4;
              local_5e8 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar27 * 4;
              pFVar9 = (this->ConstraintsIndex1).AllocatorInstance.Data;
              pFVar10 = (this->X4Array).AllocatorInstance.Data;
              pFVar11 = (this->X3Array).AllocatorInstance.Data;
              pFVar12 = (this->X2Array).AllocatorInstance.Data;
              pFVar13 = (this->X1Array).AllocatorInstance.Data;
              pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_140);
              ApplyXPBDAnisotropicBendingDampingConstraints
                        (pTVar18->DataPtr,pFVar13 + lVar27 * 0xc,pFVar12 + lVar27 * 0xc,
                         pFVar11 + lVar27 * 0xc,pFVar10 + lVar27 * 0xc,pFVar9 + lVar27 * 4,local_5e8
                         ,local_5e0,local_5d8,local_5f0,local_618,local_610,local_608,fVar41,
                         &local_570,&local_580,fVar6,local_638);
              FVar30 = local_5f8;
              uVar21 = (uint)local_620;
            }
            else {
              local_428 = &local_570;
              local_420 = &local_580;
              local_4d0 = &local_448;
              local_4d8 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l25::<lambda_1>,void,int>
                          ::Call;
              local_430 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
              local_42c = local_res18[0];
              local_448 = this;
              local_440 = param_1;
              local_438 = iVar32;
              local_434 = local_638;
              local_418 = fVar6;
              PhysicsParallelFor((Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + (int)local_638) /
                                 Chaos_XPBDBending_ISPC_ParallelBatchSize,
                                 (TFunctionRef<void___cdecl(int)> *)&local_4d8,false);
              local_600 = pfVar19;
            }
            uVar29 = (ulonglong)uVar21;
            local_600 = (float *)((longlong)local_600 + 1);
            FVar24 = local_5d0;
            cVar25 = local_643;
          } while ((longlong)local_600 < (longlong)FVar30);
        }
      }
      uVar21 = 0;
      if (0 < (longlong)FVar30) {
        local_600 = (float *)0x0;
        do {
          pfVar19 = local_600;
          uVar31 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar31 = ~uVar21 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar21 = uVar21 + 1;
          local_620 = (TVector<float,2> *)CONCAT44(local_620._4_4_,uVar21);
          iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar19 * 4);
          lVar27 = (longlong)iVar32;
          uVar31 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar31 = ~uVar21 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          fVar6 = local_res18[0];
          iVar20 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar19 * 4 + 4) - iVar32;
          if (iVar20 < Chaos_XPBDBending_ISPC_MinNumParallelBatches *
                       Chaos_XPBDBending_ISPC_ParallelBatchSize) {
            local_608 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar27 * 0xc;
            local_610 = (FScriptContainerElement *)(this->_padding_ + lVar27);
            local_618 = (FScriptContainerElement *)(this->_padding_ + lVar27 * 4);
            pFVar9 = (this->ConstraintsIndex4).AllocatorInstance.Data;
            pFVar10 = (this->ConstraintsIndex3).AllocatorInstance.Data;
            pFVar11 = (this->ConstraintsIndex2).AllocatorInstance.Data;
            pFVar12 = (this->ConstraintsIndex1).AllocatorInstance.Data;
            pFVar13 = (this->Lambdas).AllocatorInstance.Data;
            pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_150);
            ApplyXPBDAnisotropicBendingConstraints
                      (pTVar18->DataPtr,pFVar12 + lVar27 * 4,pFVar11 + lVar27 * 4,
                       pFVar10 + lVar27 * 4,pFVar9 + lVar27 * 4,local_618,local_610,local_608,
                       pFVar13 + lVar27 * 4,fVar6,&local_570,&local_580,iVar20);
            FVar30 = local_5f8;
            uVar21 = (uint)local_620;
          }
          else {
            local_458 = &local_570;
            local_450 = &local_580;
            local_4b0 = &local_478;
            local_4b8 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l41::<lambda_3>,void,int>
                        ::Call;
            local_460 = Chaos_XPBDBending_ISPC_ParallelBatchSize;
            local_45c = local_res18[0];
            local_478 = this;
            local_470 = param_1;
            local_468 = iVar32;
            local_464 = iVar20;
            PhysicsParallelFor((Chaos_XPBDBending_ISPC_ParallelBatchSize + -1 + iVar20) /
                               Chaos_XPBDBending_ISPC_ParallelBatchSize,
                               (TFunctionRef<void___cdecl(int)> *)&local_4b8,false);
            local_600 = pfVar19;
          }
          local_600 = (float *)((longlong)local_600 + 1);
          FVar24 = local_5d0;
          cVar25 = local_643;
        } while ((longlong)local_600 < (longlong)FVar30);
      }
      goto LAB_143ef41c0;
    }
LAB_143ef2715:
    local_638 = 0.0;
    if (bChaos_XPBDBending_SplitLambdaDamping == false) {
      if (0 < iVar32) {
        local_600 = (float *)0x0;
        do {
          pfVar19 = local_600;
          uVar31 = (uint)uVar29;
          uVar21 = 0;
          if ((int)uVar31 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~uVar31 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar19 * 4);
          lVar27 = (longlong)iVar32;
          uVar21 = 0;
          if ((int)(uVar31 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar21 = ~(uVar31 + 1) >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_620 = (TVector<float,2> *)
                      CONCAT44(local_620._4_4_,
                               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar19 * 4 + 4) - iVar32);
          if (local_642 == '\0') {
            local_608 = (FScriptContainerElement *)0x0;
          }
          else {
            local_210.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_210.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_210._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_608 = (FScriptContainerElement *)
                        TArrayView<float_const_,int>::operator[](&local_210,iVar32);
          }
          cVar25 = local_642;
          fVar6 = local_res18[0];
          lVar5 = lVar27 * 4;
          if (local_644 == '\0') {
            local_610 = (FScriptContainerElement *)0x0;
          }
          else {
            local_180 = (this->BucklingStiffnessBias).MapView.MapValues.DataPtr;
            uStack_178 = *(undefined8 *)&(this->BucklingStiffnessBias).MapView.MapValues.ArrayNum;
            local_610 = (FScriptContainerElement *)(local_180 + lVar27);
          }
          local_63d = local_644;
          if (local_645 == '\0') {
            local_618 = (FScriptContainerElement *)0x0;
          }
          else {
            local_618 = (FScriptContainerElement *)
                        ((this->BucklingStiffnessWeft).MapView.MapValues.DataPtr + lVar27);
          }
          local_63e = local_645;
          if (local_646 == '\0') {
            local_5f0 = (FScriptContainerElement *)0x0;
          }
          else {
            local_5f0 = (FScriptContainerElement *)
                        ((this->BucklingStiffnessWarp).MapView.MapValues.DataPtr + lVar27);
          }
          local_63f = local_646;
          if (local_647 == '\0') {
            local_5d8 = (FScriptContainerElement *)0x0;
          }
          else {
            local_5d8 = (FScriptContainerElement *)
                        ((this->StiffnessBias).MapView.MapValues.DataPtr + lVar27);
          }
          local_640 = local_647;
          if (local_648 == '\0') {
            local_5e0 = (FScriptContainerElement *)0x0;
          }
          else {
            local_5e0 = (FScriptContainerElement *)
                        ((this->StiffnessWeft).MapView.MapValues.DataPtr + lVar27);
          }
          local_641 = local_648;
          if (local_res20[0] == '\0') {
            local_5e8 = (FScriptContainerElement *)0x0;
          }
          else {
            local_170 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
            uStack_168 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
            local_5e8 = (FScriptContainerElement *)(local_170 + lVar27);
          }
          local_634 = local_res20[0];
          local_5c0 = (this->Lambdas).AllocatorInstance.Data + lVar5;
          local_588 = (FScriptContainerElement *)(this->_padding_ + lVar27);
          local_590 = (FScriptContainerElement *)(this->_padding_ + lVar5);
          local_548 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5;
          local_550 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5;
          local_558 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5;
          local_560 = (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5;
          pFVar9 = (this->X4Array).AllocatorInstance.Data;
          pFVar10 = (this->X3Array).AllocatorInstance.Data;
          pFVar11 = (this->X2Array).AllocatorInstance.Data;
          pFVar12 = (this->X1Array).AllocatorInstance.Data;
          pFVar13 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_160);
          ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps
                    (pTVar18->DataPtr,pFVar12 + lVar27 * 0xc,pFVar11 + lVar27 * 0xc,
                     pFVar10 + lVar27 * 0xc,pFVar9 + lVar27 * 0xc,local_560,local_558,local_550,
                     local_548,local_590,local_588,pFVar13 + lVar27 * 0xc,local_5c0,fVar6,local_634,
                     &(this->StiffnessWarp).MapView.OffsetRange,local_5e8,local_641,
                     &(this->StiffnessWeft).MapView.OffsetRange,local_5e0,local_640,
                     &(this->StiffnessBias).MapView.OffsetRange,local_5d8,local_63f,
                     &(this->BucklingStiffnessWarp).MapView.OffsetRange,local_5f0,local_63e,
                     &(this->BucklingStiffnessWeft).MapView.OffsetRange,local_618,local_63d,
                     &(this->BucklingStiffnessBias).MapView.OffsetRange,local_610,cVar25,
                     &(this->DampingRatio).MapView.OffsetRange,local_608,(uint)local_620);
          local_638 = (float)((int)local_638 + 1);
          uVar29 = (ulonglong)(uint)local_638;
          local_600 = (float *)((longlong)local_600 + 1);
          FVar24 = local_5d0;
          cVar25 = local_643;
        } while ((longlong)local_600 < (longlong)FVar30);
      }
      goto LAB_143ef41c0;
    }
    if (iVar32 < 1) goto LAB_143ef2bb6;
    local_608 = (FScriptContainerElement *)0x0;
    do {
      pFVar9 = local_608;
      uVar31 = (uint)uVar29;
      uVar21 = 0;
      if ((int)uVar31 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar21 = ~uVar31 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pFVar9 * 4);
      lVar27 = (longlong)iVar32;
      uVar21 = 0;
      if ((int)(uVar31 + 1) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar21 = ~(uVar31 + 1) >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      local_620 = (TVector<float,2> *)
                  CONCAT44(local_620._4_4_,
                           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pFVar9 * 4 + 4) - iVar32);
      if (local_642 == '\0') {
        local_600 = (float *)0x0;
      }
      else {
        local_220.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_220.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_220._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_600 = TArrayView<float_const_,int>::operator[](&local_220,iVar32);
      }
      fVar6 = local_res18[0];
      lVar5 = lVar27 * 4;
      local_62c = local_642;
      if (local_644 == '\0') {
        local_5e8 = (FScriptContainerElement *)0x0;
      }
      else {
        local_130 = (this->BucklingStiffnessBias).MapView.MapValues.DataPtr;
        uStack_128 = *(undefined8 *)&(this->BucklingStiffnessBias).MapView.MapValues.ArrayNum;
        local_5e8 = (FScriptContainerElement *)(local_130 + lVar27);
      }
      local_634 = local_644;
      if (local_645 == '\0') {
        local_5e0 = (FScriptContainerElement *)0x0;
      }
      else {
        local_120 = (this->BucklingStiffnessWeft).MapView.MapValues.DataPtr;
        uStack_118 = *(undefined8 *)&(this->BucklingStiffnessWeft).MapView.MapValues.ArrayNum;
        local_5e0 = (FScriptContainerElement *)(local_120 + lVar27);
      }
      local_641 = local_645;
      if (local_646 == '\0') {
        local_5d8 = (FScriptContainerElement *)0x0;
      }
      else {
        local_110 = (this->BucklingStiffnessWarp).MapView.MapValues.DataPtr;
        uStack_108 = *(undefined8 *)&(this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum;
        local_5d8 = (FScriptContainerElement *)(local_110 + lVar27);
      }
      local_640 = local_646;
      if (local_647 == '\0') {
        local_5f0 = (FScriptContainerElement *)0x0;
      }
      else {
        local_200 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_1f8 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        local_5f0 = (FScriptContainerElement *)(local_200 + lVar27);
      }
      local_63f = local_647;
      if (local_648 == '\0') {
        local_618 = (FScriptContainerElement *)0x0;
      }
      else {
        local_1f0 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
        uStack_1e8 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
        local_618 = (FScriptContainerElement *)(local_1f0 + lVar27);
      }
      local_63e = local_648;
      if (local_res20[0] == '\0') {
        local_610 = (FScriptContainerElement *)0x0;
      }
      else {
        local_1e0 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_1d8 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        local_610 = (FScriptContainerElement *)(local_1e0 + lVar27);
      }
      local_63d = local_res20[0];
      local_560 = (this->LambdasDamping).AllocatorInstance.Data + lVar5;
      local_558 = (FScriptContainerElement *)(this->_padding_ + lVar27);
      local_550 = (FScriptContainerElement *)(this->_padding_ + lVar5);
      local_548 = (this->ConstraintsIndex4).AllocatorInstance.Data + lVar5;
      local_590 = (this->ConstraintsIndex3).AllocatorInstance.Data + lVar5;
      local_588 = (this->ConstraintsIndex2).AllocatorInstance.Data + lVar5;
      local_5c0 = (this->ConstraintsIndex1).AllocatorInstance.Data + lVar5;
      pFVar9 = (this->X4Array).AllocatorInstance.Data;
      pFVar10 = (this->X3Array).AllocatorInstance.Data;
      pFVar11 = (this->X2Array).AllocatorInstance.Data;
      pFVar12 = (this->X1Array).AllocatorInstance.Data;
      pFVar13 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1d0);
      ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps
                (pTVar18->DataPtr,pFVar12 + lVar27 * 0xc,pFVar11 + lVar27 * 0xc,
                 pFVar10 + lVar27 * 0xc,pFVar9 + lVar27 * 0xc,local_5c0,local_588,local_590,
                 local_548,local_550,local_558,pFVar13 + lVar27 * 0xc,local_560,fVar6,local_63d,
                 &(this->StiffnessWarp).MapView.OffsetRange,local_610,local_63e,
                 &(this->StiffnessWeft).MapView.OffsetRange,local_618,local_63f,
                 &(this->StiffnessBias).MapView.OffsetRange,local_5f0,local_640,
                 &(this->BucklingStiffnessWarp).MapView.OffsetRange,local_5d8,local_641,
                 &(this->BucklingStiffnessWeft).MapView.OffsetRange,local_5e0,local_634,
                 &(this->BucklingStiffnessBias).MapView.OffsetRange,local_5e8,local_62c,
                 &(this->DampingRatio).MapView.OffsetRange,local_600,(uint)local_620);
      local_638 = (float)((int)local_638 + 1);
      uVar29 = (ulonglong)(uint)local_638;
      local_608 = local_608 + 1;
    } while ((longlong)local_608 < (longlong)FVar30);
  }
  else {
    if ((local_642 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143ef2715;
LAB_143ef2bb6:
    local_638 = 0.0;
    if (iVar32 < 1) goto LAB_143ef41c0;
  }
  FVar30 = local_5f8;
  local_638 = 0.0;
  local_5e8 = (FScriptContainerElement *)0x0;
  do {
    pFVar9 = local_5e8;
    fVar6 = local_638;
    uVar21 = 0;
    if ((int)local_638 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar21 = ~(uint)local_638 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar32 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pFVar9 * 4);
    lVar27 = (longlong)iVar32;
    uVar21 = 0;
    if ((int)((int)fVar6 + 1U) < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar21 = ~((int)fVar6 + 1U) >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    cVar25 = local_644;
    fVar6 = local_res18[0];
    lVar5 = lVar27 * 4;
    local_620 = (TVector<float,2> *)
                CONCAT44(local_620._4_4_,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pFVar9 * 4 + 4) - iVar32);
    if (local_644 == '\0') {
      local_608 = (FScriptContainerElement *)0x0;
    }
    else {
      local_608 = (FScriptContainerElement *)
                  ((this->BucklingStiffnessBias).MapView.MapValues.DataPtr + lVar27);
    }
    if (local_645 == '\0') {
      local_610 = (FScriptContainerElement *)0x0;
    }
    else {
      local_610 = (FScriptContainerElement *)
                  ((this->BucklingStiffnessWeft).MapView.MapValues.DataPtr + lVar27);
    }
    local_63d = local_645;
    if (local_646 == '\0') {
      local_618 = (FScriptContainerElement *)0x0;
    }
    else {
      local_1c0 = (this->BucklingStiffnessWarp).MapView.MapValues.DataPtr;
      uStack_1b8 = *(undefined8 *)&(this->BucklingStiffnessWarp).MapView.MapValues.ArrayNum;
      local_618 = (FScriptContainerElement *)(local_1c0 + lVar27);
    }
    local_63e = local_646;
    if (local_647 == '\0') {
      local_5f0 = (FScriptContainerElement *)0x0;
    }
    else {
      local_1b0 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_1a8 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_5f0 = (FScriptContainerElement *)(local_1b0 + lVar27);
    }
    local_63f = local_647;
    if (local_648 == '\0') {
      local_5d8 = (FScriptContainerElement *)0x0;
    }
    else {
      local_100 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
      uStack_f8 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
      local_5d8 = (FScriptContainerElement *)(local_100 + lVar27);
    }
    local_640 = local_648;
    if (local_res20[0] == '\0') {
      local_5e0 = (FScriptContainerElement *)0x0;
    }
    else {
      local_5e0 = (FScriptContainerElement *)
                  ((this->StiffnessWarp).MapView.MapValues.DataPtr + lVar27);
    }
    lVar14 = this->_padding_;
    pFVar9 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    pFVar10 = (this->ConstraintsIndex2).AllocatorInstance.Data;
    pFVar11 = (this->ConstraintsIndex1).AllocatorInstance.Data;
    local_641 = local_res20[0];
    local_5c0 = (this->Lambdas).AllocatorInstance.Data + lVar5;
    local_588 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar27 * 0xc;
    local_590 = (FScriptContainerElement *)(this->_padding_ + lVar27);
    pFVar12 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    pTVar18 = FSolverParticlesRange::GetPAndInvM(param_1,&local_190);
    ApplyXPBDAnisotropicBendingConstraintsWithMaps
              (pTVar18->DataPtr,pFVar11 + lVar5,pFVar10 + lVar5,pFVar12 + lVar5,pFVar9 + lVar5,
               lVar14 + lVar5,local_590,local_588,local_5c0,fVar6,local_641,
               &(this->StiffnessWarp).MapView.OffsetRange,local_5e0,local_640,
               &(this->StiffnessWeft).MapView.OffsetRange,local_5d8,local_63f,
               &(this->StiffnessBias).MapView.OffsetRange,local_5f0,local_63e,
               &(this->BucklingStiffnessWarp).MapView.OffsetRange,local_618,local_63d,
               &(this->BucklingStiffnessWeft).MapView.OffsetRange,local_610,cVar25,
               &(this->BucklingStiffnessBias).MapView.OffsetRange,local_608,
               (ulonglong)local_620 & 0xffffffff);
    local_638 = (float)((int)local_638 + 1);
    local_5e8 = local_5e8 + 1;
    FVar24 = local_5d0;
    cVar25 = local_643;
  } while ((longlong)local_5e8 < (longlong)FVar30);
LAB_143ef41c0:
  bVar26 = local_63c;
  if ((local_63c & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar26 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar26 & 4) != 0) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  if (cVar25 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<1,0,Chaos::Softs::FSolverParticles> @ 143efa6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_1d8 [32];
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float fStack_154;
  float local_150;
  FSolverParticles *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  FXPBDAnisotropicBendingConstraints *local_128;
  longlong local_120;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar6 = this->_padding_;
  lVar15 = (longlong)param_3;
  pFVar7 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  iVar1 = *(int *)(lVar6 + lVar15 * 0x10);
  lVar13 = (longlong)iVar1;
  lVar14 = (longlong)*(int *)(lVar6 + 4 + lVar15 * 0x10);
  local_138 = (longlong)*(int *)(lVar6 + 8 + lVar15 * 0x10);
  local_130 = (longlong)*(int *)(lVar6 + 0xc + lVar15 * 0x10);
  if (*(char *)(lVar15 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  lVar6 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
  fVar20 = *(float *)&param_5->field_0x4 * *(float *)(pFVar7 + lVar15 * 0xc + 4) +
           *(float *)(pFVar7 + lVar15 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar7 + lVar15 * 0xc + 8);
  if (0.0 < fVar20) {
    fVar16 = *(float *)(lVar6 + 0xc + lVar13 * 0x10);
    fVar17 = *(float *)(lVar6 + 0xc + lVar14 * 0x10);
    lVar10 = local_130 * 0x10;
    lVar12 = local_138 * 0x10;
    fVar18 = *(float *)(lVar6 + 0xc + lVar10);
    fVar19 = *(float *)(lVar6 + 0xc + lVar12);
    fVar21 = fVar18 + fVar19 + fVar16 + fVar17;
    local_148 = param_1;
    local_140 = lVar14;
    local_128 = this;
    local_120 = lVar12;
    if ((fVar21 <= 0.0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CombinedInvMass > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                           ,0x251,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar6 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    _local_158 = *(undefined8 *)(lVar6 + lVar13 * 0x10);
    fVar2 = *(float *)(lVar6 + 8 + lVar12);
    fVar3 = *(float *)(lVar6 + 8 + lVar13 * 0x10);
    fVar4 = *(float *)(lVar6 + 8 + lVar14 * 0x10);
    _local_168 = *(undefined8 *)(lVar6 + lVar14 * 0x10);
    _local_178 = *(undefined8 *)(lVar6 + lVar12);
    fVar5 = *(float *)(lVar6 + 8 + lVar10);
    _local_188 = *(undefined8 *)(lVar6 + lVar10);
    local_180 = fVar5;
    local_170 = fVar2;
    local_160 = fVar4;
    local_150 = fVar3;
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,
               (TVector<float,3> *)&local_158,(TVector<float,3> *)&local_168,
               (TVector<float,3> *)&local_178,(TVector<float,3> *)&local_188,(float *)0x0);
    lVar11 = (longlong)iVar1;
    lVar6 = local_148->_padding_;
    pFVar7 = (local_128->LambdasDamping).AllocatorInstance.Data;
    fVar20 = SQRT(fVar20 / fVar21) * (param_6 + param_6) * param_2;
    lVar12 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    fVar20 = ((float)((uint)(((fStack_184 - *(float *)(lVar6 + 4 + local_130 * 0xc)) * local_f0 +
                              (local_188 - *(float *)(lVar6 + local_130 * 0xc)) * local_f4 +
                              (fVar5 - *(float *)(lVar6 + 8 + local_130 * 0xc)) * local_ec +
                              (fStack_174 - *(float *)(lVar6 + 4 + local_138 * 0xc)) * local_fc +
                              (local_178 - *(float *)(lVar6 + local_138 * 0xc)) * local_100 +
                              (fVar2 - *(float *)(lVar6 + 8 + local_138 * 0xc)) * local_f8 +
                             (fStack_164 - *(float *)(lVar6 + 4 + local_140 * 0xc)) * local_108 +
                             (local_168 - *(float *)(lVar6 + local_140 * 0xc)) * local_10c +
                             (fVar4 - *(float *)(lVar6 + 8 + local_140 * 0xc)) * local_104 +
                             (fStack_154 - *(float *)(lVar6 + 4 + lVar11 * 0xc)) * local_114 +
                             (local_158 - *(float *)(lVar6 + lVar11 * 0xc)) * local_118 +
                             (fVar3 - *(float *)(lVar6 + 8 + lVar11 * 0xc)) * local_110) * fVar20) ^
                     __xmm_80000000800000008000000080000000) - *(float *)(pFVar7 + lVar15 * 4)) /
             (((local_fc * local_fc + local_100 * local_100 + local_f8 * local_f8) * fVar19 +
               (local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * fVar18 +
              (local_108 * local_108 + local_10c * local_10c + local_104 * local_104) * fVar17 +
              (local_114 * local_114 + local_118 * local_118 + local_110 * local_110) * fVar16) *
              fVar20 + __real_3f800000);
    fVar16 = fVar20 * fVar16;
    *(float *)(lVar12 + lVar13 * 0x10) = local_118 * fVar16 + *(float *)(lVar12 + lVar13 * 0x10);
    *(float *)(lVar12 + 4 + lVar13 * 0x10) =
         local_114 * fVar16 + *(float *)(lVar12 + 4 + lVar13 * 0x10);
    *(float *)(lVar12 + 8 + lVar13 * 0x10) =
         local_110 * fVar16 + *(float *)(lVar12 + 8 + lVar13 * 0x10);
    lVar6 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    fVar17 = fVar20 * fVar17;
    fVar19 = fVar20 * fVar19;
    *(float *)(lVar6 + 4 + lVar14 * 0x10) =
         fVar17 * local_108 + *(float *)(lVar6 + 4 + lVar14 * 0x10);
    *(float *)(lVar6 + lVar14 * 0x10) = fVar17 * local_10c + *(float *)(lVar6 + lVar14 * 0x10);
    *(float *)(lVar6 + 8 + lVar14 * 0x10) =
         fVar17 * local_104 + *(float *)(lVar6 + 8 + lVar14 * 0x10);
    lVar6 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    fVar18 = fVar20 * fVar18;
    *(float *)(lVar6 + 4 + local_120) = fVar19 * local_fc + *(float *)(lVar6 + 4 + local_120);
    *(float *)(lVar6 + local_120) = fVar19 * local_100 + *(float *)(lVar6 + local_120);
    *(float *)(lVar6 + 8 + local_120) = fVar19 * local_f8 + *(float *)(lVar6 + 8 + local_120);
    lVar6 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    *(float *)(lVar6 + 4 + lVar10) = fVar18 * local_f0 + *(float *)(lVar6 + 4 + lVar10);
    *(float *)(lVar6 + lVar10) = fVar18 * local_f4 + *(float *)(lVar6 + lVar10);
    *(float *)(lVar6 + 8 + lVar10) = fVar18 * local_ec + *(float *)(lVar6 + 8 + lVar10);
    *(float *)(pFVar7 + lVar15 * 4) = fVar20 + *(float *)(pFVar7 + lVar15 * 4);
  }
  return;
}

// ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange> @ 143efb500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::
ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  TVector<float,3> *pTVar8;
  FPAndInvM *pFVar9;
  code *pcVar10;
  bool bVar11;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar12;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
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
  float fVar29;
  float fVar30;
  undefined1 auStackY_2d8 [32];
  float local_290;
  float fStack_28c;
  float local_288;
  float local_280;
  float fStack_27c;
  float local_278;
  float local_270;
  float fStack_26c;
  float local_268;
  float local_260;
  float fStack_25c;
  float local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  FXPBDAnisotropicBendingConstraints *local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_218;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_208;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1e8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1c8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a8;
  TArrayView<Chaos::TVector<float,3>,int> local_198;
  TArrayView<Chaos::TVector<float,3>,int> local_188;
  TArrayView<Chaos::TVector<float,3>,int> local_178;
  TArrayView<Chaos::TVector<float,3>,int> local_168;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_158;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_148;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_138;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_128;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar15 = this->_padding_;
  lVar17 = (longlong)param_3;
  iVar2 = *(int *)(lVar15 + 0xc + lVar17 * 0x10);
  lVar14 = (longlong)*(int *)(lVar15 + lVar17 * 0x10);
  lVar16 = (longlong)*(int *)(lVar15 + 4 + lVar17 * 0x10);
  lVar15 = (longlong)*(int *)(lVar15 + 8 + lVar17 * 0x10);
  pFVar7 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  if (*(char *)(lVar17 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  fVar19 = *(float *)&param_5->field_0x4 * *(float *)(pFVar7 + lVar17 * 0xc + 4) +
           *(float *)(pFVar7 + lVar17 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar7 + lVar17 * 0xc + 8);
  local_238 = this;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_218);
  local_230 = lVar14 * 0x10;
  fVar21 = pTVar12->DataPtr[lVar14].InvM;
  local_250 = lVar14;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_208);
  local_228 = lVar16 * 0x10;
  fVar22 = pTVar12->DataPtr[lVar16].InvM;
  local_248 = lVar16;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1f8);
  local_220 = lVar15 * 0x10;
  fVar23 = pTVar12->DataPtr[lVar15].InvM;
  local_240 = lVar15;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1e8);
  if (0.0 < fVar19) {
    fVar24 = pTVar12->DataPtr[iVar2].InvM;
    fVar25 = fVar22 + fVar21 + fVar23 + fVar24;
    if (fVar25 <= 0.0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                          ,0x251,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1d8);
    _local_290 = *(undefined8 *)&pTVar12->DataPtr[lVar14].P;
    fVar3 = *(float *)&pTVar12->DataPtr[lVar14].P.field_0x8;
    local_288 = fVar3;
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1c8);
    _local_280 = *(undefined8 *)&pTVar12->DataPtr[lVar16].P;
    fVar4 = *(float *)&pTVar12->DataPtr[lVar16].P.field_0x8;
    local_278 = fVar4;
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1b8);
    _local_270 = *(undefined8 *)&pTVar12->DataPtr[lVar15].P;
    fVar5 = *(float *)&pTVar12->DataPtr[lVar15].P.field_0x8;
    local_268 = fVar5;
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a8);
    _local_260 = *(undefined8 *)&pTVar12->DataPtr[iVar2].P;
    fVar6 = *(float *)&pTVar12->DataPtr[iVar2].P.field_0x8;
    local_258 = fVar6;
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,
               (TVector<float,3> *)&local_290,(TVector<float,3> *)&local_280,
               (TVector<float,3> *)&local_270,(TVector<float,3> *)&local_260,(float *)0x0);
    fVar18 = SQRT(fVar19 / fVar25) * (param_6 + param_6) * param_2;
    pTVar13 = FSolverParticlesRange::XArray(param_1,&local_198);
    pTVar8 = pTVar13->DataPtr;
    fVar19 = *(float *)&pTVar8[local_250].field_0x8;
    fVar30 = fStack_28c - *(float *)&pTVar8[local_250].field_0x4;
    fVar29 = local_290 - *(float *)(pTVar8 + local_250);
    pTVar13 = FSolverParticlesRange::XArray(param_1,&local_188);
    pTVar8 = pTVar13->DataPtr;
    fVar25 = *(float *)&pTVar8[local_248].field_0x8;
    fVar27 = fStack_27c - *(float *)&pTVar8[local_248].field_0x4;
    fVar28 = local_280 - *(float *)(pTVar8 + local_248);
    pTVar13 = FSolverParticlesRange::XArray(param_1,&local_178);
    pTVar8 = pTVar13->DataPtr;
    fVar1 = *(float *)&pTVar8[local_240].field_0x8;
    fVar26 = fStack_26c - *(float *)&pTVar8[local_240].field_0x4;
    fVar20 = local_270 - *(float *)(pTVar8 + local_240);
    pTVar13 = FSolverParticlesRange::XArray(param_1,&local_168);
    pTVar8 = pTVar13->DataPtr;
    pFVar7 = (local_238->LambdasDamping).AllocatorInstance.Data;
    fVar19 = ((float)((uint)(((fStack_25c - *(float *)&pTVar8[iVar2].field_0x4) * local_f0 +
                              (local_260 - *(float *)(pTVar8 + iVar2)) * local_f4 +
                              (fVar6 - *(float *)&pTVar8[iVar2].field_0x8) * local_ec +
                              local_100 * fVar20 + local_fc * fVar26 + local_f8 * (fVar5 - fVar1) +
                             local_118 * fVar29 + local_114 * fVar30 + local_110 * (fVar3 - fVar19)
                             + local_108 * fVar27 + local_10c * fVar28 +
                               local_104 * (fVar4 - fVar25)) * fVar18) ^
                     __xmm_80000000800000008000000080000000) - *(float *)(pFVar7 + lVar17 * 4)) /
             (((local_108 * local_108 + local_10c * local_10c + local_104 * local_104) * fVar22 +
               (local_114 * local_114 + local_118 * local_118 + local_110 * local_110) * fVar21 +
              (local_fc * local_fc + local_100 * local_100 + local_f8 * local_f8) * fVar23 +
              (local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * fVar24) * fVar18 +
             __real_3f800000);
    fVar21 = fVar19 * fVar21;
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_158);
    pFVar9 = pTVar12->DataPtr;
    fVar22 = fVar19 * fVar22;
    *(float *)(&(pFVar9->P).field_0x0 + local_230) =
         local_118 * fVar21 + *(float *)(&(pFVar9->P).field_0x0 + local_230);
    *(float *)(&(pFVar9->P).field_0x4 + local_230) =
         local_114 * fVar21 + *(float *)(&(pFVar9->P).field_0x4 + local_230);
    *(float *)(&(pFVar9->P).field_0x8 + local_230) =
         local_110 * fVar21 + *(float *)(&(pFVar9->P).field_0x8 + local_230);
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_148);
    pFVar9 = pTVar12->DataPtr;
    *(float *)(&(pFVar9->P).field_0x8 + local_228) =
         fVar22 * local_104 + *(float *)(&(pFVar9->P).field_0x8 + local_228);
    fVar23 = fVar19 * fVar23;
    *(float *)(&(pFVar9->P).field_0x0 + local_228) =
         fVar22 * local_10c + *(float *)(&(pFVar9->P).field_0x0 + local_228);
    *(float *)(&(pFVar9->P).field_0x4 + local_228) =
         fVar22 * local_108 + *(float *)(&(pFVar9->P).field_0x4 + local_228);
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_138);
    pFVar9 = pTVar12->DataPtr;
    *(float *)(&(pFVar9->P).field_0x8 + local_220) =
         fVar23 * local_f8 + *(float *)(&(pFVar9->P).field_0x8 + local_220);
    *(float *)(&(pFVar9->P).field_0x4 + local_220) =
         fVar23 * local_fc + *(float *)(&(pFVar9->P).field_0x4 + local_220);
    *(float *)(&(pFVar9->P).field_0x0 + local_220) =
         fVar23 * local_100 + *(float *)(&(pFVar9->P).field_0x0 + local_220);
    fVar24 = fVar19 * fVar24;
    pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,&local_128);
    pFVar9 = pTVar12->DataPtr;
    fVar21 = *(float *)&pFVar9[iVar2].P.field_0x8;
    *(float *)&pFVar9[iVar2].P.field_0x4 = fVar24 * local_f0 + *(float *)&pFVar9[iVar2].P.field_0x4;
    fVar22 = *(float *)&pFVar9[iVar2].P;
    *(float *)&pFVar9[iVar2].P.field_0x8 = fVar24 * local_ec + fVar21;
    *(float *)&pFVar9[iVar2].P = fVar24 * local_f4 + fVar22;
    *(float *)(pFVar7 + lVar17 * 4) = fVar19 + *(float *)(pFVar7 + lVar17 * 4);
  }
  return;
}

// ApplyHelper<0,1,Chaos::Softs::FSolverParticles> @ 143efd9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  float local_168;
  float local_164;
  float local_15c;
  float local_158;
  float local_154;
  TVector<float,3> local_150;
  TVector<float,3> local_140;
  TVector<float,3> local_130;
  TVector<float,3> local_120;
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
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_198;
  lVar9 = this->_padding_;
  lVar8 = (longlong)param_3;
  pFVar4 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  lVar10 = (longlong)*(int *)(lVar9 + lVar8 * 0x10);
  lVar11 = (longlong)*(int *)(lVar9 + 4 + lVar8 * 0x10);
  lVar12 = (longlong)*(int *)(lVar9 + 8 + lVar8 * 0x10);
  lVar9 = (longlong)*(int *)(lVar9 + 0xc + lVar8 * 0x10);
  if (*(char *)(lVar8 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  lVar5 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
  fVar13 = *(float *)&param_5->field_0x4 * *(float *)(pFVar4 + lVar8 * 0xc + 4) +
           *(float *)(pFVar4 + lVar8 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar4 + lVar8 * 0xc + 8);
  if (0.0 < fVar13) {
    fVar1 = *(float *)(lVar5 + 0xc + lVar10 * 0x10);
    local_164 = *(float *)(lVar5 + 0xc + lVar9 * 0x10);
    fVar2 = *(float *)(lVar5 + 0xc + lVar11 * 0x10);
    fVar3 = *(float *)(lVar5 + 0xc + lVar12 * 0x10);
    local_15c = fVar1;
    local_158 = fVar2;
    local_154 = fVar3;
    if (local_164 + fVar3 + fVar1 + fVar2 <= 0.0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CombinedInvMass > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                         ,0x251,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar5 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    local_168 = 0.0;
    local_120._8_4_ = *(undefined4 *)(lVar5 + 8 + lVar10 * 0x10);
    local_120._0_8_ = *(undefined8 *)(lVar5 + lVar10 * 0x10);
    local_130._8_4_ = *(undefined4 *)(lVar5 + 8 + lVar11 * 0x10);
    local_140._8_4_ = *(undefined4 *)(lVar5 + 8 + lVar12 * 0x10);
    local_130._0_8_ = *(undefined8 *)(lVar5 + lVar11 * 0x10);
    local_150._8_4_ = *(undefined4 *)(lVar5 + 8 + lVar9 * 0x10);
    local_140._0_8_ = *(undefined8 *)(lVar5 + lVar12 * 0x10);
    local_150._0_8_ = *(undefined8 *)(lVar5 + lVar9 * 0x10);
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,&local_120,
               &local_130,&local_140,&local_150,&local_168);
    pFVar4 = (this->Lambdas).AllocatorInstance.Data;
    fVar13 = fVar13 * param_2 * param_2;
    lVar5 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    fVar13 = ((float)((uint)((local_168 - *(float *)(this->_padding_ + lVar8 * 4)) * fVar13) ^
                     __xmm_80000000800000008000000080000000) - *(float *)(pFVar4 + lVar8 * 4)) /
             (((local_100 * local_100 + local_104 * local_104 + local_fc * local_fc) * fVar2 +
               (local_10c * local_10c + local_110 * local_110 + local_108 * local_108) * fVar1 +
              (local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0) * fVar3 +
              (local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * local_164) *
              fVar13 + __real_3f800000);
    local_15c = fVar13 * local_15c;
    local_158 = fVar13 * local_158;
    *(float *)(lVar5 + 4 + lVar10 * 0x10) =
         local_10c * local_15c + *(float *)(lVar5 + 4 + lVar10 * 0x10);
    *(float *)(lVar5 + lVar10 * 0x10) = local_110 * local_15c + *(float *)(lVar5 + lVar10 * 0x10);
    *(float *)(lVar5 + 8 + lVar10 * 0x10) =
         local_108 * local_15c + *(float *)(lVar5 + 8 + lVar10 * 0x10);
    lVar10 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    local_154 = fVar13 * local_154;
    *(float *)(lVar10 + lVar11 * 0x10) = local_104 * local_158 + *(float *)(lVar10 + lVar11 * 0x10);
    *(float *)(lVar10 + 8 + lVar11 * 0x10) =
         local_fc * local_158 + *(float *)(lVar10 + 8 + lVar11 * 0x10);
    *(float *)(lVar10 + 4 + lVar11 * 0x10) =
         local_100 * local_158 + *(float *)(lVar10 + 4 + lVar11 * 0x10);
    lVar10 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    local_164 = fVar13 * local_164;
    *(float *)(lVar10 + lVar12 * 0x10) = local_f8 * local_154 + *(float *)(lVar10 + lVar12 * 0x10);
    *(float *)(lVar10 + 4 + lVar12 * 0x10) =
         local_f4 * local_154 + *(float *)(lVar10 + 4 + lVar12 * 0x10);
    *(float *)(lVar10 + 8 + lVar12 * 0x10) =
         local_f0 * local_154 + *(float *)(lVar10 + 8 + lVar12 * 0x10);
    lVar10 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    *(float *)(lVar10 + lVar9 * 0x10) = local_ec * local_164 + *(float *)(lVar10 + lVar9 * 0x10);
    *(float *)(lVar10 + 4 + lVar9 * 0x10) =
         local_e8 * local_164 + *(float *)(lVar10 + 4 + lVar9 * 0x10);
    *(float *)(lVar10 + 8 + lVar9 * 0x10) =
         local_e4 * local_164 + *(float *)(lVar10 + 8 + lVar9 * 0x10);
    *(float *)(pFVar4 + lVar8 * 4) = fVar13 + *(float *)(pFVar4 + lVar8 * 4);
  }
  return;
}

// ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange> @ 143efe510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::
ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FPAndInvM *pFVar6;
  code *pcVar7;
  bool bVar8;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_268 [32];
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  longlong local_220;
  TVector<float,3> local_218;
  TVector<float,3> local_208;
  TVector<float,3> local_1f8;
  TVector<float,3> local_1e8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1d8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1c8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1b8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_198;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_188;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_178;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_168;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_158;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_148;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_138;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_128;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar10 = this->_padding_;
  lVar11 = (longlong)param_3;
  local_234 = *(float *)(lVar10 + 8 + lVar11 * 0x10);
  iVar3 = *(int *)(lVar10 + lVar11 * 0x10);
  iVar4 = *(int *)(lVar10 + 4 + lVar11 * 0x10);
  local_238 = *(float *)(lVar10 + 0xc + lVar11 * 0x10);
  pFVar5 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  if (*(char *)(lVar11 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  fVar15 = *(float *)&param_5->field_0x4 * *(float *)(pFVar5 + lVar11 * 0xc + 4) +
           *(float *)(pFVar5 + lVar11 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar5 + lVar11 * 0xc + 8);
  pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1d8);
  fVar14 = pTVar9->DataPtr[iVar3].InvM;
  local_22c = fVar14;
  pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1c8);
  fVar1 = pTVar9->DataPtr[iVar4].InvM;
  local_228 = fVar1;
  pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1b8);
  lVar10 = (longlong)(int)local_234;
  local_220 = lVar10 * 0x10;
  fVar2 = pTVar9->DataPtr[lVar10].InvM;
  local_224 = fVar2;
  pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a8);
  lVar12 = (longlong)(int)local_238;
  if (0.0 < fVar15) {
    local_234 = pTVar9->DataPtr[lVar12].InvM;
    if (fVar2 + local_234 + fVar14 + fVar1 <= 0.0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CombinedInvMass > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                         ,0x251,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_198);
    local_1e8._0_8_ = *(undefined8 *)&pTVar9->DataPtr[iVar3].P;
    local_1e8._8_4_ = *(undefined4 *)&pTVar9->DataPtr[iVar3].P.field_0x8;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_188);
    local_1f8._0_8_ = *(undefined8 *)&pTVar9->DataPtr[iVar4].P;
    local_1f8._8_4_ = *(undefined4 *)&pTVar9->DataPtr[iVar4].P.field_0x8;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_178);
    local_208._0_8_ = *(undefined8 *)&pTVar9->DataPtr[lVar10].P;
    local_208._8_4_ = *(undefined4 *)&pTVar9->DataPtr[lVar10].P.field_0x8;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_168);
    local_238 = 0.0;
    local_218._0_8_ = *(undefined8 *)&pTVar9->DataPtr[lVar12].P;
    local_218._8_4_ = *(undefined4 *)&pTVar9->DataPtr[lVar12].P.field_0x8;
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,&local_1e8,
               &local_1f8,&local_208,&local_218,&local_238);
    pFVar5 = (this->Lambdas).AllocatorInstance.Data;
    fVar15 = fVar15 * param_2 * param_2;
    local_230 = ((float)((uint)((local_238 - *(float *)(this->_padding_ + lVar11 * 4)) * fVar15) ^
                        __xmm_80000000800000008000000080000000) - *(float *)(pFVar5 + lVar11 * 4)) /
                (((local_108 * local_108 + local_10c * local_10c + local_104 * local_104) * fVar1 +
                  (local_114 * local_114 + local_118 * local_118 + local_110 * local_110) * fVar14 +
                 (local_fc * local_fc + local_100 * local_100 + local_f8 * local_f8) * fVar2 +
                 (local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * local_234) *
                 fVar15 + __real_3f800000);
    fVar15 = local_230 * local_22c;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_158);
    fVar2 = local_230;
    pFVar6 = pTVar9->DataPtr;
    fVar14 = *(float *)&pFVar6[iVar3].P.field_0x4;
    fVar1 = *(float *)&pFVar6[iVar3].P.field_0x8;
    *(float *)&pFVar6[iVar3].P = local_118 * fVar15 + *(float *)&pFVar6[iVar3].P;
    *(float *)&pFVar6[iVar3].P.field_0x4 = local_114 * fVar15 + fVar14;
    fVar13 = local_230 * local_228;
    *(float *)&pFVar6[iVar3].P.field_0x8 = local_110 * fVar15 + fVar1;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_148);
    pFVar6 = pTVar9->DataPtr;
    fVar14 = *(float *)&pFVar6[iVar4].P.field_0x4;
    fVar1 = *(float *)&pFVar6[iVar4].P.field_0x8;
    fVar15 = fVar2 * local_224;
    *(float *)&pFVar6[iVar4].P = local_10c * fVar13 + *(float *)&pFVar6[iVar4].P;
    *(float *)&pFVar6[iVar4].P.field_0x4 = local_108 * fVar13 + fVar14;
    *(float *)&pFVar6[iVar4].P.field_0x8 = local_104 * fVar13 + fVar1;
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_138);
    pFVar6 = pTVar9->DataPtr;
    fVar14 = fVar2 * local_234;
    *(float *)(&(pFVar6->P).field_0x0 + local_220) =
         local_100 * fVar15 + *(float *)(&(pFVar6->P).field_0x0 + local_220);
    *(float *)(&(pFVar6->P).field_0x4 + local_220) =
         local_fc * fVar15 + *(float *)(&(pFVar6->P).field_0x4 + local_220);
    *(float *)(&(pFVar6->P).field_0x8 + local_220) =
         local_f8 * fVar15 + *(float *)(&(pFVar6->P).field_0x8 + local_220);
    pTVar9 = FSolverParticlesRange::GetPAndInvM(param_1,&local_128);
    pFVar6 = pTVar9->DataPtr;
    *(float *)&pFVar6[lVar12].P = local_f4 * fVar14 + *(float *)&pFVar6[lVar12].P;
    *(float *)&pFVar6[lVar12].P.field_0x4 =
         local_f0 * fVar14 + *(float *)&pFVar6[lVar12].P.field_0x4;
    *(float *)&pFVar6[lVar12].P.field_0x8 =
         local_ec * fVar14 + *(float *)&pFVar6[lVar12].P.field_0x8;
    *(float *)(pFVar5 + lVar11 * 4) = fVar2 + *(float *)(pFVar5 + lVar11 * 4);
  }
  return;
}

// ApplyHelper<0,0,Chaos::Softs::FSolverParticles> @ 143f02b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackY_1d8 [32];
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  int local_198;
  float local_194;
  longlong local_190;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  float local_158;
  float fStack_154;
  float local_150;
  FSolverParticles *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar5 = this->_padding_;
  lVar12 = (longlong)param_3;
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  local_198 = *(int *)(lVar5 + lVar12 * 0x10);
  lVar11 = (longlong)local_198;
  local_140 = (longlong)*(int *)(lVar5 + 4 + lVar12 * 0x10);
  local_138 = (longlong)*(int *)(lVar5 + 8 + lVar12 * 0x10);
  local_130 = (longlong)*(int *)(lVar5 + 0xc + lVar12 * 0x10);
  if (*(char *)(lVar12 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  lVar5 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
  fVar13 = *(float *)&param_5->field_0x4 * *(float *)(pFVar6 + lVar12 * 0xc + 4) +
           *(float *)(pFVar6 + lVar12 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar6 + lVar12 * 0xc + 8);
  if (0.0 < fVar13) {
    local_194 = *(float *)(lVar5 + 0xc + lVar11 * 0x10);
    local_190 = local_130 * 0x10;
    lVar9 = local_140 * 0x10;
    lVar10 = local_138 * 0x10;
    local_19c = *(float *)(lVar5 + 0xc + local_190);
    local_1a4 = *(float *)(lVar5 + 0xc + lVar9);
    local_1a0 = *(float *)(lVar5 + 0xc + lVar10);
    fVar14 = local_19c + local_1a0 + local_194 + local_1a4;
    local_148 = param_1;
    local_128 = lVar9;
    local_120 = lVar10;
    if ((fVar14 <= 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CombinedInvMass > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                           ,0x251,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar5 = *(longlong *)&(param_1->MPAndInvM).field_0x8;
    local_1a8 = 0.0;
    _local_158 = *(undefined8 *)(lVar5 + lVar11 * 0x10);
    fVar1 = *(float *)(lVar5 + 8 + lVar9);
    fVar2 = *(float *)(lVar5 + 8 + lVar11 * 0x10);
    _local_168 = *(undefined8 *)(lVar5 + lVar9);
    fVar3 = *(float *)(lVar5 + 8 + local_190);
    _local_178 = *(undefined8 *)(lVar5 + lVar10);
    fVar4 = *(float *)(lVar5 + 8 + lVar10);
    _local_188 = *(undefined8 *)(lVar5 + local_190);
    local_180 = fVar3;
    local_170 = fVar4;
    local_160 = fVar1;
    local_150 = fVar2;
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_118,
               (TVector<float,3> *)&local_158,(TVector<float,3> *)&local_168,
               (TVector<float,3> *)&local_178,(TVector<float,3> *)&local_188,&local_1a8);
    lVar9 = (longlong)local_198;
    lVar5 = local_148->_padding_;
    pFVar6 = (this->Lambdas).AllocatorInstance.Data;
    fVar15 = fVar13 * param_2 * param_2;
    fVar13 = SQRT(fVar13 / fVar14) * (param_6 + param_6) * param_2;
    fVar13 = (((float)((uint)((local_1a8 - *(float *)(this->_padding_ + lVar12 * 4)) * fVar15) ^
                      __xmm_80000000800000008000000080000000) -
              ((fStack_184 - *(float *)(lVar5 + 4 + local_130 * 0xc)) * local_f0 +
               (local_188 - *(float *)(lVar5 + local_130 * 0xc)) * local_f4 +
               (fVar3 - *(float *)(lVar5 + 8 + local_130 * 0xc)) * local_ec +
               (fStack_174 - *(float *)(lVar5 + 4 + local_138 * 0xc)) * local_fc +
               (local_178 - *(float *)(lVar5 + local_138 * 0xc)) * local_100 +
               (fVar4 - *(float *)(lVar5 + 8 + local_138 * 0xc)) * local_f8 +
              (fStack_164 - *(float *)(lVar5 + 4 + local_140 * 0xc)) * local_108 +
              (local_168 - *(float *)(lVar5 + local_140 * 0xc)) * local_10c +
              (fVar1 - *(float *)(lVar5 + 8 + local_140 * 0xc)) * local_104 +
              (fStack_154 - *(float *)(lVar5 + 4 + lVar9 * 0xc)) * local_114 +
              (local_158 - *(float *)(lVar5 + lVar9 * 0xc)) * local_118 +
              (fVar2 - *(float *)(lVar5 + 8 + lVar9 * 0xc)) * local_110) * fVar13) -
             *(float *)(pFVar6 + lVar12 * 4)) /
             (((local_fc * local_fc + local_100 * local_100 + local_f8 * local_f8) * local_1a0 +
               (local_f0 * local_f0 + local_f4 * local_f4 + local_ec * local_ec) * local_19c +
              (local_108 * local_108 + local_10c * local_10c + local_104 * local_104) * local_1a4 +
              (local_114 * local_114 + local_118 * local_118 + local_110 * local_110) * local_194) *
              (fVar15 + fVar13) + __real_3f800000);
    local_1a4 = fVar13 * local_1a4;
    local_1a0 = fVar13 * local_1a0;
    local_194 = fVar13 * local_194;
    lVar5 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    *(float *)(lVar5 + 4 + lVar11 * 0x10) =
         local_114 * local_194 + *(float *)(lVar5 + 4 + lVar11 * 0x10);
    *(float *)(lVar5 + lVar11 * 0x10) = local_118 * local_194 + *(float *)(lVar5 + lVar11 * 0x10);
    *(float *)(lVar5 + 8 + lVar11 * 0x10) =
         local_110 * local_194 + *(float *)(lVar5 + 8 + lVar11 * 0x10);
    lVar5 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    *(float *)(local_128 + lVar5) = local_1a4 * local_10c + *(float *)(local_128 + lVar5);
    *(float *)(local_128 + 4 + lVar5) = local_1a4 * local_108 + *(float *)(local_128 + 4 + lVar5);
    *(float *)(local_128 + 8 + lVar5) = local_1a4 * local_104 + *(float *)(local_128 + 8 + lVar5);
    lVar5 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    local_19c = fVar13 * local_19c;
    *(float *)(local_120 + lVar5) = local_1a0 * local_100 + *(float *)(local_120 + lVar5);
    *(float *)(local_120 + 4 + lVar5) = local_1a0 * local_fc + *(float *)(local_120 + 4 + lVar5);
    *(float *)(local_120 + 8 + lVar5) = local_1a0 * local_f8 + *(float *)(local_120 + 8 + lVar5);
    lVar5 = *(longlong *)&(local_148->MPAndInvM).field_0x8;
    *(float *)(local_190 + lVar5) = local_19c * local_f4 + *(float *)(local_190 + lVar5);
    *(float *)(local_190 + 4 + lVar5) = local_19c * local_f0 + *(float *)(local_190 + 4 + lVar5);
    *(float *)(local_190 + 8 + lVar5) = local_19c * local_ec + *(float *)(local_190 + 8 + lVar5);
    *(float *)(pFVar6 + lVar12 * 4) = fVar13 + *(float *)(pFVar6 + lVar12 * 4);
  }
  return;
}

// ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange> @ 143f03a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::
ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,TVector<float,3> *param_5,float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  TVector<float,3> *pTVar7;
  FPAndInvM *pFVar8;
  code *pcVar9;
  bool bVar10;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar11;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar12;
  longlong lVar13;
  longlong lVar14;
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
  undefined1 auStackY_2d8 [32];
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  int local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float fStack_284;
  float local_280;
  float local_278;
  float fStack_274;
  float local_270;
  float local_268;
  float fStack_264;
  float local_260;
  float local_258;
  float fStack_254;
  float local_250;
  FXPBDAnisotropicBendingConstraints *local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_210;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_200;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1f0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1e0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1d0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1c0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1b0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a0;
  TArrayView<Chaos::TVector<float,3>,int> local_190;
  TArrayView<Chaos::TVector<float,3>,int> local_180;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TArrayView<Chaos::TVector<float,3>,int> local_160;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_150;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_140;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_130;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_120;
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
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar14 = this->_padding_;
  lVar16 = (longlong)param_3;
  iVar1 = *(int *)(lVar14 + 0xc + lVar16 * 0x10);
  lVar13 = (longlong)*(int *)(lVar14 + lVar16 * 0x10);
  lVar15 = (longlong)*(int *)(lVar14 + 4 + lVar16 * 0x10);
  lVar14 = (longlong)*(int *)(lVar14 + 8 + lVar16 * 0x10);
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  if (*(char *)(lVar16 + this->_padding_) == '\0') {
    param_5 = param_4;
  }
  fVar17 = *(float *)&param_5->field_0x4 * *(float *)(pFVar6 + lVar16 * 0xc + 4) +
           *(float *)(pFVar6 + lVar16 * 0xc) * *(float *)param_5 +
           *(float *)&param_5->field_0x8 * *(float *)(pFVar6 + lVar16 * 0xc + 8);
  local_298 = iVar1;
  local_248 = this;
  pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_210);
  local_228 = lVar13 * 0x10;
  fVar20 = pTVar11->DataPtr[lVar13].InvM;
  local_290 = fVar20;
  local_240 = lVar13;
  pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_200);
  local_220 = lVar15 * 0x10;
  fVar18 = pTVar11->DataPtr[lVar15].InvM;
  local_2a4 = fVar18;
  local_238 = lVar15;
  pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1f0);
  local_218 = lVar14 * 0x10;
  fVar19 = pTVar11->DataPtr[lVar14].InvM;
  local_2a0 = fVar19;
  local_230 = lVar14;
  pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1e0);
  if (0.0 < fVar17) {
    local_29c = pTVar11->DataPtr[iVar1].InvM;
    fVar20 = fVar19 + local_29c + fVar20 + fVar18;
    if (fVar20 <= 0.0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CombinedInvMass > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                          ,0x251,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1d0);
    _local_258 = *(undefined8 *)&pTVar11->DataPtr[lVar13].P;
    fVar2 = *(float *)&pTVar11->DataPtr[lVar13].P.field_0x8;
    local_250 = fVar2;
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1c0);
    _local_288 = *(undefined8 *)&pTVar11->DataPtr[lVar15].P;
    fVar3 = *(float *)&pTVar11->DataPtr[lVar15].P.field_0x8;
    local_280 = fVar3;
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1b0);
    _local_278 = *(undefined8 *)&pTVar11->DataPtr[lVar14].P;
    fVar4 = *(float *)&pTVar11->DataPtr[lVar14].P.field_0x8;
    local_270 = fVar4;
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a0);
    local_2a8 = 0.0;
    _local_268 = *(undefined8 *)&pTVar11->DataPtr[iVar1].P;
    fVar5 = *(float *)&pTVar11->DataPtr[iVar1].P.field_0x8;
    local_260 = fVar5;
    FPBDBendingConstraintsBase::CalcGradients
              ((TStaticArray<Chaos::TVector<float,3>,4,4294967295> *)&local_110,
               (TVector<float,3> *)&local_258,(TVector<float,3> *)&local_288,
               (TVector<float,3> *)&local_278,(TVector<float,3> *)&local_268,&local_2a8);
    local_28c = fVar17 * param_2 * param_2;
    fVar26 = (local_2a8 - *(float *)(local_248->_padding_ + lVar16 * 4)) * local_28c;
    local_294 = SQRT(fVar17 / fVar20) * (param_6 + param_6) * param_2;
    pTVar12 = FSolverParticlesRange::XArray(param_1,&local_190);
    pTVar7 = pTVar12->DataPtr;
    fVar20 = *(float *)&pTVar7[local_240].field_0x8;
    fVar24 = fStack_254 - *(float *)&pTVar7[local_240].field_0x4;
    fVar25 = local_258 - *(float *)(pTVar7 + local_240);
    pTVar12 = FSolverParticlesRange::XArray(param_1,&local_180);
    pTVar7 = pTVar12->DataPtr;
    fVar18 = *(float *)&pTVar7[local_238].field_0x8;
    fVar22 = fStack_284 - *(float *)&pTVar7[local_238].field_0x4;
    fVar23 = local_288 - *(float *)(pTVar7 + local_238);
    pTVar12 = FSolverParticlesRange::XArray(param_1,&local_170);
    pTVar7 = pTVar12->DataPtr;
    fVar19 = *(float *)&pTVar7[local_230].field_0x8;
    fVar21 = fStack_274 - *(float *)&pTVar7[local_230].field_0x4;
    fVar17 = local_278 - *(float *)(pTVar7 + local_230);
    pTVar12 = FSolverParticlesRange::XArray(param_1,&local_160);
    pTVar7 = pTVar12->DataPtr;
    lVar14 = (longlong)local_298;
    pFVar6 = (local_248->Lambdas).AllocatorInstance.Data;
    local_2a8 = ((float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000) -
                ((fStack_264 - *(float *)&pTVar7[lVar14].field_0x4) * local_e8 +
                 (local_268 - *(float *)(pTVar7 + lVar14)) * local_ec +
                 (fVar5 - *(float *)&pTVar7[lVar14].field_0x8) * local_e4 +
                 local_f8 * fVar17 + local_f4 * fVar21 + local_f0 * (fVar4 - fVar19) +
                local_100 * fVar22 + local_104 * fVar23 + local_fc * (fVar3 - fVar18) +
                local_10c * fVar24 + local_110 * fVar25 + local_108 * (fVar2 - fVar20)) * local_294)
                - *(float *)(pFVar6 + lVar16 * 4);
    fVar17 = local_2a8 /
             (((local_100 * local_100 + local_104 * local_104 + local_fc * local_fc) * local_2a4 +
               (local_10c * local_10c + local_110 * local_110 + local_108 * local_108) * local_290 +
              (local_f4 * local_f4 + local_f8 * local_f8 + local_f0 * local_f0) * local_2a0 +
              (local_e8 * local_e8 + local_ec * local_ec + local_e4 * local_e4) * local_29c) *
              (local_28c + local_294) + __real_3f800000);
    fVar20 = fVar17 * local_290;
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_150);
    pFVar8 = pTVar11->DataPtr;
    fVar18 = fVar17 * local_2a4;
    *(float *)(&(pFVar8->P).field_0x0 + local_228) =
         local_110 * fVar20 + *(float *)(&(pFVar8->P).field_0x0 + local_228);
    *(float *)(&(pFVar8->P).field_0x4 + local_228) =
         local_10c * fVar20 + *(float *)(&(pFVar8->P).field_0x4 + local_228);
    *(float *)(&(pFVar8->P).field_0x8 + local_228) =
         local_108 * fVar20 + *(float *)(&(pFVar8->P).field_0x8 + local_228);
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_140);
    pFVar8 = pTVar11->DataPtr;
    *(float *)(&(pFVar8->P).field_0x0 + local_220) =
         fVar18 * local_104 + *(float *)(&(pFVar8->P).field_0x0 + local_220);
    *(float *)(&(pFVar8->P).field_0x4 + local_220) =
         fVar18 * local_100 + *(float *)(&(pFVar8->P).field_0x4 + local_220);
    *(float *)(&(pFVar8->P).field_0x8 + local_220) =
         fVar18 * local_fc + *(float *)(&(pFVar8->P).field_0x8 + local_220);
    fVar20 = fVar17 * local_2a0;
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_130);
    pFVar8 = pTVar11->DataPtr;
    *(float *)(&(pFVar8->P).field_0x8 + local_218) =
         fVar20 * local_f0 + *(float *)(&(pFVar8->P).field_0x8 + local_218);
    fVar19 = fVar17 * local_29c;
    *(float *)(&(pFVar8->P).field_0x0 + local_218) =
         fVar20 * local_f8 + *(float *)(&(pFVar8->P).field_0x0 + local_218);
    *(float *)(&(pFVar8->P).field_0x4 + local_218) =
         fVar20 * local_f4 + *(float *)(&(pFVar8->P).field_0x4 + local_218);
    pTVar11 = FSolverParticlesRange::GetPAndInvM(param_1,&local_120);
    pFVar8 = pTVar11->DataPtr;
    fVar20 = *(float *)&pFVar8[iVar1].P.field_0x8;
    *(float *)&pFVar8[iVar1].P.field_0x4 = fVar19 * local_e8 + *(float *)&pFVar8[iVar1].P.field_0x4;
    fVar18 = *(float *)&pFVar8[iVar1].P;
    *(float *)&pFVar8[iVar1].P.field_0x8 = fVar19 * local_e4 + fVar20;
    *(float *)&pFVar8[iVar1].P = fVar19 * local_ec + fVar18;
    *(float *)(pFVar6 + lVar16 * 4) = fVar17 + *(float *)(pFVar6 + lVar16 * 4);
  }
  return;
}

// Init<Chaos::Softs::FSolverParticles> @ 143f08b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId641,"FXPBDAnisotropicBendingConstraints_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
               ,0x281);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId641);
  }
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
    fVar10 = FPBDWeightMap::GetLow((FPBDWeightMap *)&this->_padding_);
    InitXPBDBendingConstraintsIsBuckled
              (param_1->_padding_,(this->ConstraintsIndex1).AllocatorInstance.Data,
               (this->ConstraintsIndex2).AllocatorInstance.Data,
               (this->ConstraintsIndex3).AllocatorInstance.Data,
               (this->ConstraintsIndex4).AllocatorInstance.Data,this->_padding_,this->_padding_,
               (this->X1Array).AllocatorInstance.Data,(this->X2Array).AllocatorInstance.Data,
               (this->X3Array).AllocatorInstance.Data,(this->X4Array).AllocatorInstance.Data,fVar10,
               iVar3);
  }
  else {
    lVar4 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
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
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Init<Chaos::Softs::FSolverParticlesRange> @ 143f092b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1)

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
  code *pcVar15;
  bool bVar16;
  int iVar17;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar18;
  bool bVar19;
  float fVar20;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar21;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar22;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_80;
  FScriptContainerElement *local_70;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_68 [2];
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId641,"FXPBDAnisotropicBendingConstraints_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
               ,0x281);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicBendingConstraints::Init<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId641);
  }
  piVar1 = &(this->Lambdas).ArrayMax;
  piVar2 = &(this->Lambdas).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar3,&(this->Lambdas).AllocatorInstance,piVar2,piVar1);
  memset((this->Lambdas).AllocatorInstance.Data + (longlong)iVar17 * 4,0,(longlong)iVar3 << 2);
  piVar1 = &(this->LambdasDamping).ArrayMax;
  piVar2 = &(this->LambdasDamping).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar3,&(this->LambdasDamping).AllocatorInstance,piVar2,piVar1);
  memset((this->LambdasDamping).AllocatorInstance.Data + (longlong)iVar17 * 4,0,(longlong)iVar3 << 2
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
    pFVar9 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    pFVar10 = (this->X1Array).AllocatorInstance.Data;
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    pFVar13 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    pFVar14 = (this->ConstraintsIndex2).AllocatorInstance.Data;
    local_70 = (this->ConstraintsIndex1).AllocatorInstance.Data;
    pTVar18 = FSolverParticlesRange::XArray(param_1,&local_80);
    InitXPBDBendingConstraintsIsBuckled
              (pTVar18->DataPtr,local_70,pFVar14,pFVar9,pFVar13,lVar5,lVar4,pFVar10,pFVar8,pFVar7,
               pFVar6,CONCAT44(uVar21,fVar20),CONCAT44(uVar22,iVar3));
  }
  else {
    lVar4 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    lVar5 = this->_padding_;
    if (((int)this->_padding_ < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar16)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar6 = (this->X4Array).AllocatorInstance.Data;
    pFVar7 = (this->X3Array).AllocatorInstance.Data;
    pFVar8 = (this->X2Array).AllocatorInstance.Data;
    pFVar9 = (this->ConstraintsIndex3).AllocatorInstance.Data;
    pFVar10 = (this->X1Array).AllocatorInstance.Data;
    lVar11 = this->_padding_;
    lVar12 = this->_padding_;
    pFVar13 = (this->ConstraintsIndex4).AllocatorInstance.Data;
    local_80.DataPtr = (TVector<float,3> *)(this->ConstraintsIndex2).AllocatorInstance.Data;
    local_70 = (this->ConstraintsIndex1).AllocatorInstance.Data;
    pTVar18 = FSolverParticlesRange::XArray(param_1,local_68);
    InitXPBDBendingConstraintsIsBuckledWithMaps
              (pTVar18->DataPtr,local_70,local_80.DataPtr,pFVar9,pFVar13,lVar12,lVar11,pFVar10,
               pFVar8,pFVar7,pFVar6,lVar5,lVar4,iVar3);
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f0a5b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,4,0>
            (&local_78,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  uVar19 = local_78.ArrayNum + 1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar13 = (ulonglong)local_78.ArrayNum;
  local_d8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar13 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar18.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    pTVar8 = local_58;
    piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    plVar14 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data;
    if (local_78.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar20 = (pTVar17->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar8) break;
    if (((pFVar20 <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < pFVar20 + (longlong)*piVar21 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar17->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar20 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_60 = pFVar20 + uVar13 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar20 == pFVar5) break;
      uVar19 = *(uint *)pFVar20;
      lVar22 = (longlong)(int)uVar19;
      uVar16 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      puVar2 = (undefined8 *)(this->_padding_ + lVar22 * 0x10);
      uVar4 = *puVar2;
      uVar7 = puVar2[1];
      uVar11 = 0;
      if ((int)local_d8[0] < local_90.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar15 * 0x10) = uVar4;
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar15 * 0x10 + 8) = uVar7;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_d8[0] < local_a0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar15 * 8) = uVar4;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      uVar3 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_d8[0] < local_b0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar15 * 4) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar15 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)(pFVar5 + lVar22 * 0xc);
      uVar3 = *(undefined4 *)(pFVar5 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_d8[0] < local_c0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = local_d8[0];
      *(undefined8 *)(local_c0.AllocatorInstance.Data + lVar15 * 0xc) = uVar4;
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar15 * 0xc + 8) = uVar3;
      uVar12 = 0;
      if ((int)uVar19 < local_d0.ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_d0.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_d8[0] = local_d8[0] + 1;
      pFVar20 = pFVar20 + 4;
      FVar18.Data = (FScriptContainerElement *)local_68;
    }
    uVar13 = (ulonglong)local_80;
    FVar18.Data = FVar18.Data + 0x10;
  }
  if (((pFVar20 <= (FScriptContainerElement *)local_d8) &&
      ((FScriptContainerElement *)local_d8 < pFVar20 + (longlong)*piVar21 * 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar17->AllocatorInstance,piVar21);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
  if ((TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)plVar14 != &local_90) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_90.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_90.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_90.ArrayMax;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar14 = &this->_padding_;
  if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar14 != &local_a0) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_a0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_a0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar14 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar14 != &local_b0) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_b0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_b0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->WarpWeftBiasBaseMultipliers;
  if (pTVar1 != &local_c0) {
    pFVar20 = (pTVar1->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
    (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_c0.ArrayNum;
    (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_c0.ArrayMax;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWarp,&local_d0,(this->StiffnessWarp).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWeft,&local_d0,(this->StiffnessWeft).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessBias,&local_d0,(this->StiffnessBias).MapValues.ArrayNum);
  FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_d0);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessWarp,&local_d0,(this->BucklingStiffnessWarp).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessWeft,&local_d0,(this->BucklingStiffnessWeft).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessBias,&local_d0,(this->BucklingStiffnessBias).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->DampingRatio,&local_d0,(this->DampingRatio).MapValues.ArrayNum);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex1,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex2,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex3,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex4,(int)this->_padding_,Default);
  uVar19 = 0;
  if (0 < (int)this->_padding_) {
    lVar22 = 0;
    lVar15 = 0;
    do {
      uVar16 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar15 + this->_padding_);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex1).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex1).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 4 + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex2).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex2).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 8 + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex3).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex3).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 0xc + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex4).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)((this->ConstraintsIndex4).AllocatorInstance.Data + lVar22) = uVar3;
      lVar22 = lVar22 + 4;
    } while ((int)uVar19 < (int)this->_padding_);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
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
  return;
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f0cd30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
            (&local_78,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_90,(int)this->_padding_,Default);
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  uVar19 = local_78.ArrayNum + 1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar13 = (ulonglong)local_78.ArrayNum;
  local_d8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar13 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar18.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    pTVar8 = local_58;
    piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar17 = &this->ConstraintsPerColorStartIndex;
    plVar14 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data;
    if (local_78.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar20 = (pTVar17->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar8) break;
    if (((pFVar20 <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 < pFVar20 + (longlong)*piVar21 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar17->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar20 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_60 = pFVar20 + uVar13 * 4;
    while( true ) {
      pFVar5 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar20 == pFVar5) break;
      uVar19 = *(uint *)pFVar20;
      lVar22 = (longlong)(int)uVar19;
      uVar16 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      puVar2 = (undefined8 *)(this->_padding_ + lVar22 * 0x10);
      uVar4 = *puVar2;
      uVar7 = puVar2[1];
      uVar11 = 0;
      if ((int)local_d8[0] < local_90.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar15 * 0x10) = uVar4;
      *(undefined8 *)(local_90.AllocatorInstance.Data + lVar15 * 0x10 + 8) = uVar7;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_d8[0] < local_a0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar15 * 8) = uVar4;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = (longlong)(int)local_d8[0];
      uVar3 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_d8[0] < local_b0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar15 * 4) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar15 = (longlong)(int)local_d8[0];
      uVar4 = *(undefined8 *)(pFVar5 + lVar22 * 0xc);
      uVar3 = *(undefined4 *)(pFVar5 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_d8[0] < local_c0.ArrayNum) {
        uVar11 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = local_d8[0];
      *(undefined8 *)(local_c0.AllocatorInstance.Data + lVar15 * 0xc) = uVar4;
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar15 * 0xc + 8) = uVar3;
      uVar12 = 0;
      if ((int)uVar19 < local_d0.ArrayNum) {
        uVar12 = uVar16;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_d0.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_d8[0] = local_d8[0] + 1;
      pFVar20 = pFVar20 + 4;
      FVar18.Data = (FScriptContainerElement *)local_68;
    }
    uVar13 = (ulonglong)local_80;
    FVar18.Data = FVar18.Data + 0x10;
  }
  if (((pFVar20 <= (FScriptContainerElement *)local_d8) &&
      ((FScriptContainerElement *)local_d8 < pFVar20 + (longlong)*piVar21 * 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar17->AllocatorInstance,piVar21);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar17->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
  if ((TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)plVar14 != &local_90) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_90.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_90.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_90.ArrayMax;
    local_90.ArrayNum = 0;
    local_90.ArrayMax = 0;
    local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar14 = &this->_padding_;
  if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar14 != &local_a0) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_a0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_a0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar14 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar14 != &local_b0) {
    if ((void *)*plVar14 != (void *)0x0) {
      FMemory::Free((void *)*plVar14);
    }
    *plVar14 = (longlong)local_b0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_b0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->WarpWeftBiasBaseMultipliers;
  if (pTVar1 != &local_c0) {
    pFVar20 = (pTVar1->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    (pTVar1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
    (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_c0.ArrayNum;
    (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_c0.ArrayMax;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWarp,&local_d0,(this->StiffnessWarp).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWeft,&local_d0,(this->StiffnessWeft).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessBias,&local_d0,(this->StiffnessBias).MapValues.ArrayNum);
  FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_d0);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessWarp,&local_d0,(this->BucklingStiffnessWarp).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessWeft,&local_d0,(this->BucklingStiffnessWeft).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->BucklingStiffnessBias,&local_d0,(this->BucklingStiffnessBias).MapValues.ArrayNum
            );
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->DampingRatio,&local_d0,(this->DampingRatio).MapValues.ArrayNum);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex1,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex2,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex3,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConstraintsIndex4,(int)this->_padding_,Default);
  uVar19 = 0;
  if (0 < (int)this->_padding_) {
    lVar22 = 0;
    lVar15 = 0;
    do {
      uVar16 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(lVar15 + this->_padding_);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex1).ArrayNum) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex1).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar16;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 4 + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex2).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex2).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 8 + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex3).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)((this->ConstraintsIndex3).AllocatorInstance.Data + lVar22) = uVar3;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar3 = *(undefined4 *)(this->_padding_ + 0xc + lVar15);
      uVar11 = 0;
      if ((int)uVar19 < (this->ConstraintsIndex4).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)((this->ConstraintsIndex4).AllocatorInstance.Data + lVar22) = uVar3;
      lVar22 = lVar22 + 4;
    } while ((int)uVar19 < (int)this->_padding_);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
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
  return;
}

// FXPBDAnisotropicBendingConstraints @ 143f11c90

FXPBDAnisotropicBendingConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::FXPBDAnisotropicBendingConstraints
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          TArrayView<float_const_,int> *param_6,TArrayView<float_const_,int> *param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TArrayView<float_const_,int> *param_10,TArrayView<float_const_,int> *param_11,
          TArrayView<float_const_,int> *param_12,TArrayView<float_const_,int> *param_13,
          TArrayView<float_const_,int> *param_14,TVector<float,2> *param_15,
          TVector<float,2> *param_16,TVector<float,2> *param_17,TVector<float,2> *param_18,
          TVector<float,2> *param_19,TVector<float,2> *param_20,TVector<float,2> *param_21,
          TVector<float,2> *param_22,TVector<float,2> *param_23,ERestAngleConstructionType param_24)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  TVector<float,2> *pTVar6;
  TVector<float,2> *pTVar7;
  bool bVar8;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar9;
  FXPBDAnisotropicBendingConstraints *pFVar10;
  float local_res8;
  float fStackX_c;
  TVector<float,2> local_118;
  TVector<float,2> local_110;
  TVector<float,2> local_108;
  TVector<float,2> local_100;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_98;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_88;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_78;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_68;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> local_58 [3];
  
  local_e8.DataPtr = (float *)0x0;
  local_e8.ArrayNum = 0;
  local_d8.DataPtr = (float *)0x0;
  local_d8.ArrayNum = 0;
  pTVar9 = FTriangleMesh::GetUniqueAdjacentElements(param_4,local_58);
  pTVar7 = param_19;
  pTVar6 = param_15;
  fVar5 = __real_4b189680;
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,param_1,param_2,param_3,pTVar9,&local_d8,param_9,
             &local_e8,param_14,param_15,param_18,param_19,param_23,param_24,true,__real_4b189680);
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FXPBDAnisotropicBendingConstraints_Softs_Chaos__6B_;
  local_c8.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar3 = (int)this->_padding_;
  if (iVar3 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  local_res8 = *(float *)pTVar6;
  if (fVar5 <= local_res8) {
    local_res8 = fVar5;
  }
  if (local_res8 <= 0.0) {
    local_res8 = 0.0;
  }
  fStackX_c = *(float *)&pTVar6->field_0x4;
  if (fVar5 <= fStackX_c) {
    fStackX_c = fVar5;
  }
  if (fStackX_c <= 0.0) {
    fStackX_c = 0.0;
  }
  local_c8.ArrayNum = iVar3;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,(TVector<float,2> *)&local_res8,param_6,&local_c8,param_2,param_3,
             (void *)0x0);
  local_b8.DataPtr = (TVector<int,2> *)this->_padding_;
  local_b8.ArrayNum = (int)this->_padding_;
  if (local_b8.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  fVar2 = *(float *)param_16;
  puVar1 = &param_16->field_0x4;
  param_16._0_4_ = fVar2;
  if (fVar5 <= fVar2) {
    param_16._0_4_ = fVar5;
  }
  param_16._4_4_ = *(float *)puVar1;
  if (fVar5 <= *(float *)puVar1) {
    param_16._4_4_ = fVar5;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_118._4_4_ = param_16._4_4_;
  local_118._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_118,param_7,&local_b8,param_2,param_3,(void *)0x0);
  local_a8.DataPtr = (TVector<int,2> *)this->_padding_;
  local_a8.ArrayNum = (int)this->_padding_;
  if (local_a8.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  param_16._0_4_ = *(float *)param_17;
  if (fVar5 <= *(float *)param_17) {
    param_16._0_4_ = fVar5;
  }
  param_16._4_4_ = *(float *)&param_17->field_0x4;
  if (fVar5 <= *(float *)&param_17->field_0x4) {
    param_16._4_4_ = fVar5;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_110._4_4_ = param_16._4_4_;
  local_110._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_110,param_8,&local_a8,param_2,param_3,(void *)0x0);
  local_98.DataPtr = (TVector<int,2> *)this->_padding_;
  local_98.ArrayNum = (int)this->_padding_;
  if (local_98.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  param_16._0_4_ = *(float *)pTVar7;
  param_16._4_4_ = *(float *)&pTVar7->field_0x4;
  if (fVar5 <= param_16._0_4_) {
    param_16._0_4_ = fVar5;
  }
  if (fVar5 <= param_16._4_4_) {
    param_16._4_4_ = fVar5;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_108._4_4_ = param_16._4_4_;
  local_108._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWarp,&local_108,param_10,&local_98,param_2,param_3,(void *)0x0)
  ;
  local_88.DataPtr = (TVector<int,2> *)this->_padding_;
  local_88.ArrayNum = (int)this->_padding_;
  if (local_88.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  param_16._0_4_ = *(float *)param_20;
  if (fVar5 <= *(float *)param_20) {
    param_16._0_4_ = fVar5;
  }
  param_16._4_4_ = *(float *)&param_20->field_0x4;
  if (fVar5 <= *(float *)&param_20->field_0x4) {
    param_16._4_4_ = fVar5;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_100._4_4_ = param_16._4_4_;
  local_100._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWeft,&local_100,param_11,&local_88,param_2,param_3,(void *)0x0)
  ;
  local_78.DataPtr = (TVector<int,2> *)this->_padding_;
  local_78.ArrayNum = (int)this->_padding_;
  if (local_78.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  param_16._0_4_ = *(float *)param_21;
  if (fVar5 <= *(float *)param_21) {
    param_16._0_4_ = fVar5;
  }
  param_16._4_4_ = *(float *)&param_21->field_0x4;
  if (fVar5 <= *(float *)&param_21->field_0x4) {
    param_16._4_4_ = fVar5;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_f8._4_4_ = param_16._4_4_;
  local_f8._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessBias,&local_f8,param_12,&local_78,param_2,param_3,(void *)0x0);
  local_68.DataPtr = (TVector<int,2> *)this->_padding_;
  local_68.ArrayNum = (int)this->_padding_;
  if (local_68.ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FXPBDAnisotropicBendingConstraints *)(*pcVar4)();
      return pFVar10;
    }
  }
  param_19._0_4_ = *(float *)param_22;
  if (__real_3f800000 <= *(float *)param_22) {
    param_19._0_4_ = __real_3f800000;
  }
  if (param_19._0_4_ <= 0.0) {
    param_19._0_4_ = 0.0;
  }
  param_19._4_4_ = *(float *)&param_22->field_0x4;
  if (__real_3f800000 <= *(float *)&param_22->field_0x4) {
    param_19._4_4_ = __real_3f800000;
  }
  if (param_19._4_4_ <= 0.0) {
    param_19._4_4_ = 0.0;
  }
  local_f0._4_4_ = param_19._4_4_;
  local_f0._0_4_ = param_19._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_f0,param_13,&local_68,param_2,param_3,(void *)0x0);
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintsIndex1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex1).ArrayNum = 0;
  (this->ConstraintsIndex1).ArrayMax = 0;
  (this->ConstraintsIndex2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex2).ArrayNum = 0;
  (this->ConstraintsIndex2).ArrayMax = 0;
  (this->ConstraintsIndex3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex3).ArrayNum = 0;
  (this->ConstraintsIndex3).ArrayMax = 0;
  (this->ConstraintsIndex4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex4).ArrayNum = 0;
  (this->ConstraintsIndex4).ArrayMax = 0;
  (this->X1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X1Array).ArrayNum = 0;
  (this->X1Array).ArrayMax = 0;
  (this->X2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X2Array).ArrayNum = 0;
  (this->X2Array).ArrayMax = 0;
  (this->X3Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X3Array).ArrayNum = 0;
  (this->X3Array).ArrayMax = 0;
  (this->X4Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X4Array).ArrayNum = 0;
  (this->X4Array).ArrayMax = 0;
  GenerateWarpWeftBiasBaseMultipliers(this,&this->WarpWeftBiasBaseMultipliers,param_5,param_4);
  this->XPBDAnisoBendingStiffnessWarpIndex = -1;
  this->XPBDAnisoBendingStiffnessWeftIndex = -1;
  this->XPBDAnisoBendingStiffnessBiasIndex = -1;
  this->XPBDAnisoBendingDampingIndex = -1;
  this->XPBDAnisoBucklingRatioIndex = -1;
  this->XPBDAnisoBucklingStiffnessWarpIndex = -1;
  this->XPBDAnisoBucklingStiffnessWeftIndex = -1;
  this->XPBDAnisoBucklingStiffnessBiasIndex = -1;
  this->XPBDAnisoFlatnessRatioIndex = -1;
  this->XPBDAnisoRestAngleIndex = -1;
  (this->XPBDAnisoRestAngleTypeIndex).Index = -1;
  param_19._0_4_ = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Lambdas,(float *)&param_19,(int)this->_padding_);
  param_15._0_4_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdasDamping,(float *)&param_15,(int)this->_padding_);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDAnisotropicBendingConstraints @ 143f12370

FXPBDAnisotropicBendingConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::FXPBDAnisotropicBendingConstraints
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_6,FCollectionPropertyConstFacade *param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  code *pcVar1;
  FCollectionPropertyConstFacade *pFVar2;
  longlong lVar3;
  ERestAngleConstructionType EVar4;
  bool bVar5;
  int iVar7;
  int *piVar8;
  TVector<float,2> TVar9;
  TArrayView<float_const_,int> *pTVar10;
  FString *pFVar11;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar12;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar13;
  FXPBDAnisotropicBendingConstraints *pFVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res8 [2];
  FSolverParticles *local_res10;
  int local_res18;
  FCollectionPropertyConstFacade *local_3b8;
  TVector<float,2> local_3b0;
  TVector<float,2> local_3a8;
  TVector<float,2> local_3a0;
  FCollectionPropertyConstFacade *local_398;
  TVector<float,2> local_390;
  FCollectionPropertyConstFacade *local_388;
  TVector<float,2> local_380;
  FCollectionPropertyConstFacade *local_378;
  TVector<float,2> local_370;
  FCollectionPropertyConstFacade *local_368;
  TVector<float,2> local_360;
  FCollectionPropertyConstFacade *local_358;
  TVector<float,2> local_350;
  FCollectionPropertyConstFacade *local_348;
  TVector<float,2> local_340;
  FCollectionPropertyConstFacade *local_338;
  TVector<float,2> local_330;
  TArrayView<float_const_,int> local_328;
  TArrayView<float_const_,int> local_318;
  TArrayView<float_const_,int> local_308;
  TArrayView<float_const_,int> local_2f8;
  TArrayView<float_const_,int> local_2e8;
  TArrayView<float_const_,int> local_2d8;
  TArrayView<float_const_,int> local_2c8;
  TArrayView<float_const_,int> local_2b8;
  FString local_2a8;
  TArrayView<float_const_,int> local_298;
  TArrayView<float_const_,int> local_288;
  FString local_278;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_268;
  FString local_258;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_248;
  FString local_238;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_228;
  FString local_218;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_208;
  FString local_1f8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1e8;
  FString local_1d8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1c8;
  FString local_1b8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1a8;
  undefined1 local_198 [88];
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  TArrayView<float_const_,int> local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  int iVar6;
  
  pFVar2 = param_7;
  this_00 = &param_7->KeyNameIndices;
  local_res10 = param_1;
  local_res18 = param_2;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleTypeName);
  if ((piVar8 == (int *)0x0) || (*piVar8 == -1)) {
    EVar4 = Use3DRestAngles;
  }
  else {
    iVar6 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (pFVar2,*piVar8,&pFVar2->LowValueArray);
    EVar4 = (ERestAngleConstructionType)iVar6;
  }
  TVar9 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_198);
  fVar18 = __real_4b189680;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3b0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->LowValueArray);
    local_3b0._4_4_ = fVar16;
    local_3b0._0_4_ = fVar17;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingRatioName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3a8 = (TVector<float,2>)0x0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->LowValueArray);
    local_3a8._4_4_ = fVar16;
    local_3a8._0_4_ = fVar17;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3a0 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->LowValueArray);
    local_3a0._4_4_ = fVar16;
    local_3a0._0_4_ = fVar17;
  }
  pTVar10 = GetRestAngleMapFromCollection(this,&local_100,param_6,pFVar2);
  local_298.DataPtr = (float *)0x0;
  local_298.ArrayNum = 0;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingRatioName,(FString *)(local_198 + 0x18));
  pFVar11 = ::FString::FString(&local_f0,pFVar11);
  local_3b8 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_278,&XPBDAnisoBucklingRatioName,(<lambda_1> *)&local_3b8,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_278);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_328._8_8_ = (ulonglong)(uint)local_328._12_4_ << 0x20;
    local_328.DataPtr = (float *)0x0;
  }
  else {
    local_328.DataPtr = *(float **)&pTVar12->field_0x10;
    local_328._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_288.DataPtr = (float *)0x0;
  local_288.ArrayNum = 0;
  pTVar13 = FTriangleMesh::GetUniqueAdjacentElements
                      (param_4,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)
                               (local_198 + 8));
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,local_res10,local_res18,param_3,pTVar13,&local_288,
             &local_328,&local_298,pTVar10,&local_3a0,&local_3a8,&local_3b0,
             (TVector<float,2> *)TVar9,EVar4,true,fVar18);
  if ((FName *)local_198._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_198._8_8_);
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_198._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_198._24_8_);
  }
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicBendingConstraints_Softs_Chaos__6B_;
  local_268.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar7 = (int)this->_padding_;
  if (iVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_268.ArrayNum = iVar7;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessWarpName,(FString *)(local_198 + 0x28));
  pFVar11 = ::FString::FString(&local_e0,pFVar11);
  local_398 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_258,&XPBDAnisoBendingStiffnessWarpName,(<lambda_1> *)&local_398,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_258);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_318.DataPtr = (float *)0x0;
    local_318._8_8_ = (ulonglong)(uint)local_318._12_4_ << 0x20;
  }
  else {
    local_318.DataPtr = *(float **)&pTVar12->field_0x10;
    local_318._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->LowValueArray);
  }
  pTVar15 = &pFVar2->LowValueArray;
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_390._4_4_ = fVar17;
  local_390._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,&local_390,&local_318,&local_268,(int)lVar3,iVar6,(void *)0x0);
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_198._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_198._40_8_);
  }
  local_248.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_248.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessWeftName,(FString *)(local_198 + 0x38));
  pFVar11 = ::FString::FString(&local_d0,pFVar11);
  local_388 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_238,&XPBDAnisoBendingStiffnessWeftName,(<lambda_1> *)&local_388,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_238);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_308.DataPtr = (float *)0x0;
    local_308._8_8_ = (ulonglong)(uint)local_308._12_4_ << 0x20;
  }
  else {
    local_308.DataPtr = *(float **)&pTVar12->field_0x10;
    local_308._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWeftName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_380._4_4_ = fVar17;
  local_380._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_380,&local_308,&local_248,(int)lVar3,iVar7,(void *)0x0);
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if ((FString *)local_198._56_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_198._56_8_);
  }
  local_228.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_228.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessBiasName,(FString *)(local_198 + 0x48));
  pFVar11 = ::FString::FString(&local_c0,pFVar11);
  local_378 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_218,&XPBDAnisoBendingStiffnessBiasName,(<lambda_1> *)&local_378,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_218);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2f8.DataPtr = (float *)0x0;
    local_2f8._8_8_ = (ulonglong)(uint)local_2f8._12_4_ << 0x20;
  }
  else {
    local_2f8.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2f8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessBiasName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_370._4_4_ = fVar17;
  local_370._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_370,&local_2f8,&local_228,(int)lVar3,iVar7,(void *)0x0);
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if ((uchar *)local_198._72_8_ != (uchar *)0x0) {
    FMemory::Free((void *)local_198._72_8_);
  }
  local_208.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_208.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessWarpName,&local_140);
  pFVar11 = ::FString::FString(&local_b0,pFVar11);
  local_368 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_1f8,&XPBDAnisoBucklingStiffnessWarpName,(<lambda_1> *)&local_368,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_1f8);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2e8.DataPtr = (float *)0x0;
    local_2e8._8_8_ = (ulonglong)(uint)local_2e8._12_4_ << 0x20;
  }
  else {
    local_2e8.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2e8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_360._4_4_ = fVar17;
  local_360._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWarp,&local_360,&local_2e8,&local_208,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data.AllocatorInstance.Data);
  }
  local_1e8.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1e8.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessWeftName,&local_130);
  pFVar11 = ::FString::FString(&local_a0,pFVar11);
  local_358 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_1d8,&XPBDAnisoBucklingStiffnessWeftName,(<lambda_1> *)&local_358,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_1d8);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2d8.DataPtr = (float *)0x0;
    local_2d8._8_8_ = (ulonglong)(uint)local_2d8._12_4_ << 0x20;
  }
  else {
    local_2d8.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2d8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWeftName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_350._4_4_ = fVar17;
  local_350._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWeft,&local_350,&local_2d8,&local_1e8,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  local_1c8.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1c8.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessBiasName,&local_120);
  pFVar11 = ::FString::FString(&local_90,pFVar11);
  local_348 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_1b8,&XPBDAnisoBucklingStiffnessBiasName,(<lambda_1> *)&local_348,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_1b8);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2c8.DataPtr = (float *)0x0;
    local_2c8._8_8_ = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
  }
  else {
    local_2c8.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2c8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessBiasName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_340._4_4_ = fVar17;
  local_340._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessBias,&local_340,&local_2c8,&local_1c8,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  local_1a8.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1a8.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingDampingName,&local_110);
  pFVar11 = ::FString::FString(local_80,pFVar11);
  local_338 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_2a8,&XPBDAnisoBendingDampingName,(<lambda_1> *)&local_338,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_6,&local_2a8);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2b8.DataPtr = (float *)0x0;
    local_2b8._8_8_ = (ulonglong)(uint)local_2b8._12_4_ << 0x20;
  }
  else {
    local_2b8.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2b8._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingDampingName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (__real_447a0000 <= fVar18) {
    fVar18 = __real_447a0000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (__real_447a0000 <= fVar16) {
    fVar16 = __real_447a0000;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_330._4_4_ = fVar16;
  local_330._0_4_ = fVar18;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_330,&local_2b8,&local_1a8,(int)lVar3,iVar7,(void *)0x0);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintsIndex1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex1).ArrayNum = 0;
  (this->ConstraintsIndex1).ArrayMax = 0;
  (this->ConstraintsIndex2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex2).ArrayNum = 0;
  (this->ConstraintsIndex2).ArrayMax = 0;
  (this->ConstraintsIndex3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex3).ArrayNum = 0;
  (this->ConstraintsIndex3).ArrayMax = 0;
  (this->ConstraintsIndex4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex4).ArrayNum = 0;
  (this->ConstraintsIndex4).ArrayMax = 0;
  (this->X1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X1Array).ArrayNum = 0;
  (this->X1Array).ArrayMax = 0;
  (this->X2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X2Array).ArrayNum = 0;
  (this->X2Array).ArrayMax = 0;
  (this->X3Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X3Array).ArrayNum = 0;
  (this->X3Array).ArrayMax = 0;
  (this->X4Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X4Array).ArrayNum = 0;
  (this->X4Array).ArrayMax = 0;
  GenerateWarpWeftBiasBaseMultipliers(this,&this->WarpWeftBiasBaseMultipliers,param_5,param_4);
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  iVar6 = -1;
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessWarpIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWeftName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessWeftIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessBiasName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessBiasIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingDampingName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingDampingIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingRatioName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingRatioIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessWarpIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWeftName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessWeftIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessBiasName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessBiasIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoFlatnessRatioName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoFlatnessRatioIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoRestAngleIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleTypeName);
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
  }
  (this->XPBDAnisoRestAngleTypeIndex).Index = iVar6;
  param_7._0_4_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Lambdas,(float *)&param_7,(int)this->_padding_);
  local_res8[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->LambdasDamping,local_res8,(int)this->_padding_);
  InitColor<Chaos::Softs::FSolverParticles>(this,local_res10);
  return this;
}

// FXPBDAnisotropicBendingConstraints @ 143f13590

FXPBDAnisotropicBendingConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::FXPBDAnisotropicBendingConstraints
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_4,FCollectionPropertyConstFacade *param_5)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  code *pcVar1;
  FCollectionPropertyConstFacade *pFVar2;
  longlong lVar3;
  ERestAngleConstructionType EVar4;
  bool bVar5;
  int iVar7;
  int *piVar8;
  TVector<float,2> TVar9;
  TArrayView<float_const_,int> *pTVar10;
  FString *pFVar11;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar12;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *pTVar13;
  FXPBDAnisotropicBendingConstraints *pFVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FCollectionPropertyConstFacade *local_3c0;
  TVector<float,2> local_3b8;
  TVector<float,2> local_3b0;
  TVector<float,2> local_3a8;
  FCollectionPropertyConstFacade *local_3a0;
  TVector<float,2> local_398;
  FCollectionPropertyConstFacade *local_390;
  TVector<float,2> local_388;
  FCollectionPropertyConstFacade *local_380;
  TVector<float,2> local_378;
  FCollectionPropertyConstFacade *local_370;
  TVector<float,2> local_368;
  FCollectionPropertyConstFacade *local_360;
  TVector<float,2> local_358;
  FCollectionPropertyConstFacade *local_350;
  TVector<float,2> local_348;
  FCollectionPropertyConstFacade *local_340;
  TVector<float,2> local_338;
  TArrayView<float_const_,int> local_330;
  TArrayView<float_const_,int> local_320;
  TArrayView<float_const_,int> local_310;
  TArrayView<float_const_,int> local_300;
  TArrayView<float_const_,int> local_2f0;
  TArrayView<float_const_,int> local_2e0;
  TArrayView<float_const_,int> local_2d0;
  TArrayView<float_const_,int> local_2c0;
  FString local_2b0;
  TArrayView<float_const_,int> local_2a0;
  TArrayView<float_const_,int> local_290;
  FString local_280;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_270;
  FString local_260;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_250;
  FString local_240;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_230;
  FString local_220;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_210;
  FString local_200;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1f0;
  FString local_1e0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1d0;
  FString local_1c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1b0;
  undefined1 local_1a0 [88];
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  TArrayView<float_const_,int> local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88 [4];
  int iVar6;
  
  pFVar2 = param_5;
  this_00 = &param_5->KeyNameIndices;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleTypeName);
  if ((piVar8 == (int *)0x0) || (*piVar8 == -1)) {
    EVar4 = Use3DRestAngles;
  }
  else {
    iVar6 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (pFVar2,*piVar8,&pFVar2->LowValueArray);
    EVar4 = (ERestAngleConstructionType)iVar6;
  }
  pTVar15 = &pFVar2->LowValueArray;
  TVar9 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_1a0);
  fVar18 = __real_4b189680;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3b8 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
    local_3b8._4_4_ = fVar16;
    local_3b8._0_4_ = fVar17;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingRatioName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3b0 = (TVector<float,2>)0x0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
    local_3b0._4_4_ = fVar16;
    local_3b0._0_4_ = fVar17;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    local_3a8 = (TVector<float,2>)0x4b1896804b189680;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
    local_3a8._4_4_ = fVar16;
    local_3a8._0_4_ = fVar17;
  }
  pTVar10 = GetRestAngleMapFromCollection(this,&local_108,param_4,pFVar2);
  local_2a0.DataPtr = (float *)0x0;
  local_2a0.ArrayNum = 0;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingRatioName,(FString *)(local_1a0 + 0x18));
  pFVar11 = ::FString::FString(&local_f8,pFVar11);
  local_3c0 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_280,&XPBDAnisoBucklingRatioName,(<lambda_1> *)&local_3c0,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_280);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_330._8_8_ = (ulonglong)(uint)local_330._12_4_ << 0x20;
    local_330.DataPtr = (float *)0x0;
  }
  else {
    local_330.DataPtr = *(float **)&pTVar12->field_0x10;
    local_330._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  local_290.DataPtr = (float *)0x0;
  local_290.ArrayNum = 0;
  pTVar13 = FTriangleMesh::GetUniqueAdjacentElements
                      (param_2,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)
                               (local_1a0 + 8));
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,param_1,pTVar13,&local_290,&local_330,&local_2a0,
             pTVar10,&local_3a8,&local_3b0,&local_3b8,(TVector<float,2> *)TVar9,EVar4,true,fVar18);
  if ((FName *)local_1a0._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_1a0._8_8_);
  }
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_1a0._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_1a0._24_8_);
  }
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicBendingConstraints_Softs_Chaos__6B_;
  local_270.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar7 = (int)this->_padding_;
  if (iVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_270.ArrayNum = iVar7;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessWarpName,(FString *)(local_1a0 + 0x28));
  pFVar11 = ::FString::FString(&local_e8,pFVar11);
  local_3a0 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_260,&XPBDAnisoBendingStiffnessWarpName,(<lambda_1> *)&local_3a0,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_260);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_320.DataPtr = (float *)0x0;
    local_320._8_8_ = (ulonglong)(uint)local_320._12_4_ << 0x20;
  }
  else {
    local_320.DataPtr = *(float **)&pTVar12->field_0x10;
    local_320._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_398._4_4_ = fVar17;
  local_398._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,&local_398,&local_320,&local_270,(int)lVar3,iVar6,(void *)0x0);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_1a0._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_1a0._40_8_);
  }
  local_250.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_250.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessWeftName,(FString *)(local_1a0 + 0x38));
  pFVar11 = ::FString::FString(&local_d8,pFVar11);
  local_390 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_240,&XPBDAnisoBendingStiffnessWeftName,(<lambda_1> *)&local_390,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_240);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_310.DataPtr = (float *)0x0;
    local_310._8_8_ = (ulonglong)(uint)local_310._12_4_ << 0x20;
  }
  else {
    local_310.DataPtr = *(float **)&pTVar12->field_0x10;
    local_310._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWeftName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_388._4_4_ = fVar17;
  local_388._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_388,&local_310,&local_250,(int)lVar3,iVar7,(void *)0x0);
  if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data.AllocatorInstance.Data);
  }
  if ((FString *)local_1a0._56_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_1a0._56_8_);
  }
  local_230.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_230.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingStiffnessBiasName,(FString *)(local_1a0 + 0x48));
  pFVar11 = ::FString::FString(&local_c8,pFVar11);
  local_380 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_220,&XPBDAnisoBendingStiffnessBiasName,(<lambda_1> *)&local_380,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_220);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_300.DataPtr = (float *)0x0;
    local_300._8_8_ = (ulonglong)(uint)local_300._12_4_ << 0x20;
  }
  else {
    local_300.DataPtr = *(float **)&pTVar12->field_0x10;
    local_300._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessBiasName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_378._4_4_ = fVar17;
  local_378._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_378,&local_300,&local_230,(int)lVar3,iVar7,(void *)0x0);
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if ((uchar *)local_1a0._72_8_ != (uchar *)0x0) {
    FMemory::Free((void *)local_1a0._72_8_);
  }
  local_210.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_210.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessWarpName,&local_148);
  pFVar11 = ::FString::FString(&local_b8,pFVar11);
  local_370 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_200,&XPBDAnisoBucklingStiffnessWarpName,(<lambda_1> *)&local_370,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_200);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2f0.DataPtr = (float *)0x0;
    local_2f0._8_8_ = (ulonglong)(uint)local_2f0._12_4_ << 0x20;
  }
  else {
    local_2f0.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2f0._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_368._4_4_ = fVar17;
  local_368._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWarp,&local_368,&local_2f0,&local_210,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  local_1f0.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1f0.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessWeftName,&local_138);
  pFVar11 = ::FString::FString(&local_a8,pFVar11);
  local_360 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_1e0,&XPBDAnisoBucklingStiffnessWeftName,(<lambda_1> *)&local_360,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_1e0);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2e0.DataPtr = (float *)0x0;
    local_2e0._8_8_ = (ulonglong)(uint)local_2e0._12_4_ << 0x20;
  }
  else {
    local_2e0.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2e0._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWeftName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_358._4_4_ = fVar17;
  local_358._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessWeft,&local_358,&local_2e0,&local_1f0,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  local_1d0.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1d0.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBucklingStiffnessBiasName,&local_128);
  pFVar11 = ::FString::FString(&local_98,pFVar11);
  local_350 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_1c0,&XPBDAnisoBucklingStiffnessBiasName,(<lambda_1> *)&local_350,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_1c0);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2d0.DataPtr = (float *)0x0;
    local_2d0._8_8_ = (ulonglong)(uint)local_2d0._12_4_ << 0x20;
  }
  else {
    local_2d0.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2d0._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessBiasName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar16 = 1e+07;
    fVar17 = 1e+07;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (fVar18 <= fVar16) {
    fVar16 = fVar18;
  }
  if (fVar18 <= fVar17) {
    fVar17 = fVar18;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  local_348._4_4_ = fVar17;
  local_348._0_4_ = fVar16;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->BucklingStiffnessBias,&local_348,&local_2d0,&local_1d0,(int)lVar3,iVar7,
             (void *)0x0);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  local_1b0.DataPtr = (TVector<int,2> *)this->_padding_;
  iVar6 = (int)this->_padding_;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar14 = (FXPBDAnisotropicBendingConstraints *)(*pcVar1)();
      return pFVar14;
    }
  }
  local_1b0.ArrayNum = iVar6;
  pFVar11 = ::FName::ToString(&XPBDAnisoBendingDampingName,&local_118);
  pFVar11 = ::FString::FString(local_88,pFVar11);
  local_340 = pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_2b0,&XPBDAnisoBendingDampingName,(<lambda_1> *)&local_340,pFVar11,
             (int *)0x0);
  pTVar12 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                    *)param_4,&local_2b0);
  if (pTVar12 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
    local_2c0.DataPtr = (float *)0x0;
    local_2c0._8_8_ = (ulonglong)(uint)local_2c0._12_4_ << 0x20;
  }
  else {
    local_2c0.DataPtr = *(float **)&pTVar12->field_0x10;
    local_2c0._8_8_ = *(undefined8 *)&pTVar12->field_0x18;
  }
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingDampingName);
  if ((piVar8 == (int *)0x0) || (iVar6 = *piVar8, iVar6 == -1)) {
    fVar18 = 0.0;
    fVar16 = 0.0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,&pFVar2->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar6,pTVar15);
  }
  if (__real_447a0000 <= fVar18) {
    fVar18 = __real_447a0000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  if (__real_447a0000 <= fVar16) {
    fVar16 = __real_447a0000;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  local_338._4_4_ = fVar16;
  local_338._0_4_ = fVar18;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_338,&local_2c0,&local_1b0,(int)lVar3,iVar7,(void *)0x0);
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintsIndex1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex1).ArrayNum = 0;
  (this->ConstraintsIndex1).ArrayMax = 0;
  (this->ConstraintsIndex2).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex2).ArrayNum = 0;
  (this->ConstraintsIndex2).ArrayMax = 0;
  (this->ConstraintsIndex3).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex3).ArrayNum = 0;
  (this->ConstraintsIndex3).ArrayMax = 0;
  (this->ConstraintsIndex4).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsIndex4).ArrayNum = 0;
  (this->ConstraintsIndex4).ArrayMax = 0;
  (this->X1Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X1Array).ArrayNum = 0;
  (this->X1Array).ArrayMax = 0;
  (this->X2Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X2Array).ArrayNum = 0;
  (this->X2Array).ArrayMax = 0;
  (this->X3Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X3Array).ArrayNum = 0;
  (this->X3Array).ArrayMax = 0;
  (this->X4Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->X4Array).ArrayNum = 0;
  (this->X4Array).ArrayMax = 0;
  GenerateWarpWeftBiasBaseMultipliers(this,&this->WarpWeftBiasBaseMultipliers,param_3,param_2);
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWarpName);
  iVar6 = -1;
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessWarpIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessWeftName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessWeftIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingStiffnessBiasName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingStiffnessBiasIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBendingDampingName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBendingDampingIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingRatioName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingRatioIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWarpName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessWarpIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessWeftName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessWeftIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoBucklingStiffnessBiasName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoBucklingStiffnessBiasIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoFlatnessRatioName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoFlatnessRatioIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDAnisoRestAngleIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDAnisoRestAngleTypeName);
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
  }
  (this->XPBDAnisoRestAngleTypeIndex).Index = iVar6;
  param_5._0_4_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&this->Lambdas,(float *)&param_5,(int)this->_padding_);
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// ~FXPBDAnisotropicBendingConstraints @ 143f16000

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::~FXPBDAnisotropicBendingConstraints
          (FXPBDAnisotropicBendingConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDAnisotropicBendingConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X4Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X3Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X2Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->X1Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex4).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex3).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex2).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsIndex1).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LambdasDamping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lambdas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BucklingStiffnessBias).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BucklingStiffnessWeft).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BucklingStiffnessWarp).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StiffnessBias).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StiffnessWeft).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StiffnessWarp).MapValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDBendingConstraintsBase::~FPBDBendingConstraintsBase((FPBDBendingConstraintsBase *)this);
  return;
}

// operator() @ 143f16350

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential'::__l4::<lambda_1>::
operator()(void *this,int param_1)

{
  int iVar1;
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
  FXPBDAnisotropicBendingConstraints *pFVar12;
  longlong lVar13;
  longlong *plVar14;
  code *pcVar15;
  ForAnyElementType FVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  TVector<float,3> *pTVar20;
  TVector<float,3> *pTVar21;
  float *pfVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  float fVar32;
  float local_res10 [2];
  TVector<float,3> *local_res18;
  TVector<float,3> *local_res20;
  TVector<float,3> local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  
  lVar27 = *(longlong *)((longlong)this + 8);
  uVar24 = 0;
  uVar31 = 0;
  uVar29 = **(int **)this + param_1;
  uVar28 = ~uVar29 >> 0x1f;
  uVar18 = uVar31;
  if ((int)uVar29 < *(int *)(lVar27 + 0x10)) {
    uVar18 = uVar28;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar25 = (longlong)(int)uVar29;
  puVar23 = (uint *)(*(longlong *)(lVar27 + 8) + lVar25 * 0x10);
  local_res20 = Chaos::Softs::FSolverParticles::P
                          (*(FSolverParticles **)((longlong)this + 0x10),*puVar23);
  pTVar20 = Chaos::Softs::FSolverParticles::P
                      (*(FSolverParticles **)((longlong)this + 0x10),puVar23[1]);
  pTVar21 = Chaos::Softs::FSolverParticles::P
                      (*(FSolverParticles **)((longlong)this + 0x10),puVar23[2]);
  local_res18 = Chaos::Softs::FSolverParticles::P
                          (*(FSolverParticles **)((longlong)this + 0x10),puVar23[3]);
  lVar27 = *(longlong *)((longlong)this + 8);
  uVar18 = uVar31;
  if ((int)uVar29 < *(int *)(lVar27 + 0x328)) {
    uVar18 = uVar28;
  }
  if ((uVar18 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar27 = *(longlong *)(lVar27 + 800);
  local_res10[0] = 0.0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  fVar32 = 0.0;
  local_a8._0_8_ = 0;
  local_a8._8_4_ = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,4,&local_98,0,(int *)((longlong)&local_90 + 4));
  if (((local_98.Data <= &local_a8) &&
      (&local_a8 < (TVector<float,3> *)(local_98.Data + (longlong)local_90._4_4_ * 0xc))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar19 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
  }
  iVar1 = iVar19 + 1;
  *(undefined8 *)(local_98.Data + (longlong)iVar19 * 0xc) = local_a8._0_8_;
  *(undefined4 *)(local_98.Data + (longlong)iVar19 * 0xc + 8) = local_a8._8_4_;
  local_90._0_4_ = iVar1;
  if (((local_98.Data <= &local_a8) &&
      (&local_a8 < (TVector<float,3> *)(local_98.Data + (longlong)local_90._4_4_ * 0xc))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((int)local_90 == local_90._4_4_) {
    local_90._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
  }
  iVar19 = (int)local_90 + 1;
  *(undefined8 *)(local_98.Data + (longlong)(int)local_90 * 0xc) = local_a8._0_8_;
  *(undefined4 *)(local_98.Data + (longlong)(int)local_90 * 0xc + 8) = local_a8._8_4_;
  local_90._0_4_ = iVar19;
  if (((local_98.Data <= &local_a8) &&
      (&local_a8 < (TVector<float,3> *)(local_98.Data + (longlong)local_90._4_4_ * 0xc))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((int)local_90 == local_90._4_4_) {
    local_90._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
  }
  iVar19 = (int)local_90 + 1;
  *(undefined8 *)(local_98.Data + (longlong)(int)local_90 * 0xc) = local_a8._0_8_;
  *(undefined4 *)(local_98.Data + (longlong)(int)local_90 * 0xc + 8) = local_a8._8_4_;
  local_90._0_4_ = iVar19;
  if (((local_98.Data <= &local_a8) &&
      (&local_a8 < (TVector<float,3> *)(local_98.Data + (longlong)local_90._4_4_ * 0xc))) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar19 = (int)local_90;
  if ((int)local_90 == local_90._4_4_) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_98,(int *)((longlong)&local_90 + 4));
  }
  local_90 = CONCAT44(local_90._4_4_,iVar19 + 1);
  *(undefined8 *)(local_98.Data + (longlong)iVar19 * 0xc) = local_a8._0_8_;
  *(undefined4 *)(local_98.Data + (longlong)iVar19 * 0xc + 8) = local_a8._8_4_;
  pFVar12 = *(FXPBDAnisotropicBendingConstraints **)((longlong)this + 8);
  if ((iVar19 + 1 < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ComputeGradTheta
            (pFVar12,pTVar21,pTVar20,local_res20,local_res18,2,(TVector<float,3> *)local_98.Data,
             local_res10);
  pFVar12 = *(FXPBDAnisotropicBendingConstraints **)((longlong)this + 8);
  if (((int)local_90 < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ComputeGradTheta
            (pFVar12,pTVar21,pTVar20,local_res20,local_res18,1,
             (TVector<float,3> *)(local_98.Data + 0xc),local_res10);
  pFVar12 = *(FXPBDAnisotropicBendingConstraints **)((longlong)this + 8);
  if (((int)local_90 < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ComputeGradTheta
            (pFVar12,pTVar21,pTVar20,local_res20,local_res18,0,
             (TVector<float,3> *)(local_98.Data + 0x18),local_res10);
  pFVar12 = *(FXPBDAnisotropicBendingConstraints **)((longlong)this + 8);
  if (((int)local_90 < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ComputeGradTheta
            (pFVar12,pTVar21,pTVar20,local_res20,local_res18,3,
             (TVector<float,3> *)(local_98.Data + 0x24),local_res10);
  lVar13 = *(longlong *)((longlong)this + 8);
  if ((int)uVar29 < *(int *)(lVar13 + 0x110)) {
    uVar31 = uVar28;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (*(char *)((longlong)(int)uVar29 + *(longlong *)(lVar13 + 0x108)) == '\0') {
    pfVar22 = *(float **)((longlong)this + 0x20);
  }
  else {
    pfVar22 = *(float **)((longlong)this + 0x18);
  }
  fVar2 = *pfVar22;
  fVar3 = *(float *)(lVar27 + lVar25 * 0xc);
  fVar4 = pfVar22[1];
  fVar5 = *(float *)(lVar27 + 4 + lVar25 * 0xc);
  fVar6 = pfVar22[2];
  fVar7 = *(float *)(lVar27 + 8 + lVar25 * 0xc);
  uVar26 = uVar24;
  uVar30 = uVar24;
  do {
    iVar19 = (int)uVar26;
    if (((int)local_90 <= iVar19) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar16.Data = local_98.Data;
    plVar14 = *(longlong **)((longlong)this + 0x28);
    uVar18 = puVar23[uVar24];
    uVar28 = 0;
    uVar31 = uVar28;
    if ((int)uVar18 < (int)plVar14[1]) {
      uVar31 = ~uVar18 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    fVar8 = *(float *)(*plVar14 + (longlong)(int)uVar18 * 0xc);
    fVar9 = *(float *)(FVar16.Data + uVar30);
    if (((int)local_90 <= iVar19) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar16.Data = local_98.Data;
    uVar18 = puVar23[uVar24];
    plVar14 = *(longlong **)((longlong)this + 0x28);
    uVar31 = uVar28;
    if ((int)uVar18 < (int)plVar14[1]) {
      uVar31 = ~uVar18 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    fVar10 = *(float *)(*plVar14 + 4 + (longlong)(int)uVar18 * 0xc);
    fVar11 = *(float *)(FVar16.Data + uVar30 + 4);
    if (((int)local_90 <= iVar19) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    FVar16.Data = local_98.Data;
    plVar14 = *(longlong **)((longlong)this + 0x28);
    uVar18 = puVar23[uVar24];
    uVar31 = uVar28;
    if ((int)uVar18 < (int)plVar14[1]) {
      uVar31 = ~uVar18 >> 0x1f;
    }
    if ((uVar31 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    uVar26 = (ulonglong)(iVar19 + 1U);
    uVar24 = uVar24 + 1;
    lVar27 = uVar30 + 8;
    uVar30 = uVar30 + 0xc;
    fVar32 = fVar32 + fVar8 * fVar9 + fVar10 * fVar11 +
             *(float *)(*plVar14 + 8 + (longlong)(int)uVar18 * 0xc) *
             *(float *)(FVar16.Data + lVar27);
  } while ((int)(iVar19 + 1U) < 4);
  if (((int)local_90 < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  fVar32 = fVar32 * (fVar4 * fVar5 + fVar2 * fVar3 + fVar6 * fVar7);
  uVar18 = *puVar23;
  lVar27 = (longlong)(int)uVar18;
  plVar14 = *(longlong **)((longlong)this + 0x30);
  fVar2 = *(float *)local_98.Data;
  fVar3 = *(float *)(local_98.Data + 4);
  fVar4 = *(float *)(local_98.Data + 8);
  uVar31 = uVar28;
  if ((int)uVar18 < (int)plVar14[1]) {
    uVar31 = ~uVar18 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar25 = *plVar14;
  *(float *)(lVar25 + lVar27 * 0xc) = fVar32 * fVar2 + *(float *)(lVar25 + lVar27 * 0xc);
  *(float *)(lVar25 + 4 + lVar27 * 0xc) = fVar32 * fVar3 + *(float *)(lVar25 + 4 + lVar27 * 0xc);
  *(float *)(lVar25 + 8 + lVar27 * 0xc) = fVar32 * fVar4 + *(float *)(lVar25 + 8 + lVar27 * 0xc);
  if (((int)local_90 < 2) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar18 = puVar23[1];
  lVar27 = (longlong)(int)uVar18;
  plVar14 = *(longlong **)((longlong)this + 0x30);
  fVar2 = *(float *)(local_98.Data + 0xc);
  fVar3 = *(float *)(local_98.Data + 0x10);
  fVar4 = *(float *)(local_98.Data + 0x14);
  uVar31 = uVar28;
  if ((int)uVar18 < (int)plVar14[1]) {
    uVar31 = ~uVar18 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar25 = *plVar14;
  *(float *)(lVar25 + lVar27 * 0xc) = fVar32 * fVar2 + *(float *)(lVar25 + lVar27 * 0xc);
  *(float *)(lVar25 + 4 + lVar27 * 0xc) = fVar32 * fVar3 + *(float *)(lVar25 + 4 + lVar27 * 0xc);
  *(float *)(lVar25 + 8 + lVar27 * 0xc) = fVar32 * fVar4 + *(float *)(lVar25 + 8 + lVar27 * 0xc);
  if (((int)local_90 < 3) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  uVar18 = puVar23[2];
  lVar27 = (longlong)(int)uVar18;
  plVar14 = *(longlong **)((longlong)this + 0x30);
  fVar2 = *(float *)(local_98.Data + 0x18);
  fVar3 = *(float *)(local_98.Data + 0x1c);
  fVar4 = *(float *)(local_98.Data + 0x20);
  uVar31 = uVar28;
  if ((int)uVar18 < (int)plVar14[1]) {
    uVar31 = ~uVar18 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar25 = *plVar14;
  *(float *)(lVar25 + lVar27 * 0xc) = fVar32 * fVar2 + *(float *)(lVar25 + lVar27 * 0xc);
  *(float *)(lVar25 + 4 + lVar27 * 0xc) = fVar32 * fVar3 + *(float *)(lVar25 + 4 + lVar27 * 0xc);
  *(float *)(lVar25 + 8 + lVar27 * 0xc) = fVar32 * fVar4 + *(float *)(lVar25 + 8 + lVar27 * 0xc);
  if (((int)local_90 < 4) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  plVar14 = *(longlong **)((longlong)this + 0x30);
  uVar18 = puVar23[3];
  lVar27 = (longlong)(int)uVar18;
  fVar2 = *(float *)(local_98.Data + 0x24);
  fVar3 = *(float *)(local_98.Data + 0x28);
  fVar4 = *(float *)(local_98.Data + 0x2c);
  if ((int)uVar18 < (int)plVar14[1]) {
    uVar28 = ~uVar18 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  lVar25 = *plVar14;
  *(float *)(lVar25 + lVar27 * 0xc) = fVar32 * fVar2 + *(float *)(lVar25 + lVar27 * 0xc);
  *(float *)(lVar25 + 4 + lVar27 * 0xc) = fVar32 * fVar3 + *(float *)(lVar25 + 4 + lVar27 * 0xc);
  *(float *)(lVar25 + 8 + lVar27 * 0xc) = fVar32 * fVar4 + *(float *)(lVar25 + 8 + lVar27 * 0xc);
  if ((TVector<float,3> *)local_98.Data != (TVector<float,3> *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return;
}

// operator() @ 143f16fc0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l25::
<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  iVar4 = *(int *)((longlong)this + 0x18) * param_1;
  iVar3 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  lVar5 = (longlong)(*(int *)((longlong)this + 0x10) + iVar4);
  iVar2 = *(int *)((longlong)this + 0x14);
  if (iVar3 < *(int *)((longlong)this + 0x14)) {
    iVar2 = iVar3;
  }
  ApplyXPBDAnisotropicBendingDampingConstraints
            (*(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa8),
             *(longlong *)(lVar1 + 0x2e0) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x2f0) + lVar5 * 0xc,
             *(longlong *)(lVar1 + 0x300) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x310) + lVar5 * 0xc,
             *(longlong *)(lVar1 + 0x2a0) + lVar5 * 4,*(longlong *)(lVar1 + 0x2b0) + lVar5 * 4,
             *(longlong *)(lVar1 + 0x2c0) + lVar5 * 4,*(longlong *)(lVar1 + 0x2d0) + lVar5 * 4,
             *(longlong *)(lVar1 + 0xf8) + lVar5 * 4,*(longlong *)(lVar1 + 0x108) + lVar5,
             *(longlong *)(lVar1 + 800) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x280) + lVar5 * 4,
             *(undefined4 *)((longlong)this + 0x1c),*(undefined8 *)((longlong)this + 0x20),
             *(undefined8 *)((longlong)this + 0x28),*(undefined4 *)((longlong)this + 0x30),
             iVar2 - iVar4);
  return;
}

// operator() @ 143f17140

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l25::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_80 [4];
  
  iVar20 = *(int *)((longlong)this + 0x14);
  iVar21 = *(int *)((longlong)this + 0x18) * param_1;
  lVar3 = *(longlong *)this;
  iVar18 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  uVar4 = *(undefined8 *)((longlong)this + 0x28);
  uVar5 = *(undefined8 *)((longlong)this + 0x20);
  lVar19 = (longlong)(*(int *)((longlong)this + 0x10) + iVar21);
  lVar6 = *(longlong *)(lVar3 + 0x108);
  uVar1 = *(undefined4 *)((longlong)this + 0x30);
  lVar7 = *(longlong *)(lVar3 + 0xf8);
  uVar2 = *(undefined4 *)((longlong)this + 0x1c);
  lVar8 = *(longlong *)(lVar3 + 0x2d0);
  lVar9 = *(longlong *)(lVar3 + 0x2c0);
  lVar10 = *(longlong *)(lVar3 + 0x2b0);
  lVar11 = *(longlong *)(lVar3 + 0x2a0);
  lVar12 = *(longlong *)(lVar3 + 0x310);
  lVar13 = *(longlong *)(lVar3 + 0x300);
  lVar14 = *(longlong *)(lVar3 + 0x2f0);
  lVar15 = *(longlong *)(lVar3 + 0x2e0);
  lVar16 = *(longlong *)(lVar3 + 0x280);
  lVar3 = *(longlong *)(lVar3 + 800);
  pTVar17 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM
                      (*(FSolverParticlesRange **)((longlong)this + 8),local_80);
  if (iVar18 < iVar20) {
    iVar20 = iVar18;
  }
  ApplyXPBDAnisotropicBendingDampingConstraints
            (pTVar17->DataPtr,lVar15 + lVar19 * 0xc,lVar14 + lVar19 * 0xc,lVar13 + lVar19 * 0xc,
             lVar12 + lVar19 * 0xc,lVar11 + lVar19 * 4,lVar10 + lVar19 * 4,lVar9 + lVar19 * 4,
             lVar8 + lVar19 * 4,lVar7 + lVar19 * 4,lVar6 + lVar19,lVar3 + lVar19 * 0xc,
             lVar16 + lVar19 * 4,uVar2,uVar5,uVar4,uVar1,iVar20 - iVar21);
  return;
}

// operator() @ 143f185b0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l34::
<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)this;
  iVar4 = *(int *)((longlong)this + 0x18) * param_1;
  iVar3 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  lVar5 = (longlong)(*(int *)((longlong)this + 0x10) + iVar4);
  iVar2 = *(int *)((longlong)this + 0x14);
  if (iVar3 < *(int *)((longlong)this + 0x14)) {
    iVar2 = iVar3;
  }
  ApplyXPBDAnisotropicBendingConstraintsWithDamping
            (*(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa8),
             *(longlong *)(lVar1 + 0x2e0) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x2f0) + lVar5 * 0xc,
             *(longlong *)(lVar1 + 0x300) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x310) + lVar5 * 0xc,
             *(longlong *)(lVar1 + 0x2a0) + lVar5 * 4,*(longlong *)(lVar1 + 0x2b0) + lVar5 * 4,
             *(longlong *)(lVar1 + 0x2c0) + lVar5 * 4,*(longlong *)(lVar1 + 0x2d0) + lVar5 * 4,
             *(longlong *)(lVar1 + 0xf8) + lVar5 * 4,*(longlong *)(lVar1 + 0x108) + lVar5,
             *(longlong *)(lVar1 + 800) + lVar5 * 0xc,*(longlong *)(lVar1 + 0x270) + lVar5 * 4,
             *(undefined4 *)((longlong)this + 0x1c),*(undefined8 *)((longlong)this + 0x20),
             *(undefined8 *)((longlong)this + 0x28),*(undefined4 *)((longlong)this + 0x30),
             iVar2 - iVar4);
  return;
}

// operator() @ 143f18730

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l34::<lambda_2>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_80 [4];
  
  iVar20 = *(int *)((longlong)this + 0x14);
  iVar21 = *(int *)((longlong)this + 0x18) * param_1;
  lVar3 = *(longlong *)this;
  iVar18 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  uVar4 = *(undefined8 *)((longlong)this + 0x28);
  uVar5 = *(undefined8 *)((longlong)this + 0x20);
  lVar19 = (longlong)(*(int *)((longlong)this + 0x10) + iVar21);
  lVar6 = *(longlong *)(lVar3 + 0x108);
  uVar1 = *(undefined4 *)((longlong)this + 0x30);
  lVar7 = *(longlong *)(lVar3 + 0xf8);
  uVar2 = *(undefined4 *)((longlong)this + 0x1c);
  lVar8 = *(longlong *)(lVar3 + 0x2d0);
  lVar9 = *(longlong *)(lVar3 + 0x2c0);
  lVar10 = *(longlong *)(lVar3 + 0x2b0);
  lVar11 = *(longlong *)(lVar3 + 0x2a0);
  lVar12 = *(longlong *)(lVar3 + 0x310);
  lVar13 = *(longlong *)(lVar3 + 0x300);
  lVar14 = *(longlong *)(lVar3 + 0x2f0);
  lVar15 = *(longlong *)(lVar3 + 0x2e0);
  lVar16 = *(longlong *)(lVar3 + 0x270);
  lVar3 = *(longlong *)(lVar3 + 800);
  pTVar17 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM
                      (*(FSolverParticlesRange **)((longlong)this + 8),local_80);
  if (iVar18 < iVar20) {
    iVar20 = iVar18;
  }
  ApplyXPBDAnisotropicBendingConstraintsWithDamping
            (pTVar17->DataPtr,lVar15 + lVar19 * 0xc,lVar14 + lVar19 * 0xc,lVar13 + lVar19 * 0xc,
             lVar12 + lVar19 * 0xc,lVar11 + lVar19 * 4,lVar10 + lVar19 * 4,lVar9 + lVar19 * 4,
             lVar8 + lVar19 * 4,lVar7 + lVar19 * 4,lVar6 + lVar19,lVar3 + lVar19 * 0xc,
             lVar16 + lVar19 * 4,uVar2,uVar5,uVar4,uVar1,iVar20 - iVar21);
  return;
}

// operator() @ 143f191e0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l41::
<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *(longlong *)this;
  iVar5 = *(int *)((longlong)this + 0x18) * param_1;
  iVar3 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  lVar4 = (longlong)(*(int *)((longlong)this + 0x10) + iVar5);
  iVar2 = *(int *)((longlong)this + 0x14);
  if (iVar3 < *(int *)((longlong)this + 0x14)) {
    iVar2 = iVar3;
  }
  ApplyXPBDAnisotropicBendingConstraints
            (*(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa8),
             *(longlong *)(lVar1 + 0x2a0) + lVar4 * 4,*(longlong *)(lVar1 + 0x2b0) + lVar4 * 4,
             *(longlong *)(lVar1 + 0x2c0) + lVar4 * 4,*(longlong *)(lVar1 + 0x2d0) + lVar4 * 4,
             *(longlong *)(lVar1 + 0xf8) + lVar4 * 4,*(longlong *)(lVar1 + 0x108) + lVar4,
             *(longlong *)(lVar1 + 800) + lVar4 * 0xc,*(longlong *)(lVar1 + 0x270) + lVar4 * 4,
             *(undefined4 *)((longlong)this + 0x1c),*(undefined8 *)((longlong)this + 0x20),
             *(undefined8 *)((longlong)this + 0x28),iVar2 - iVar5);
  return;
}

// operator() @ 143f19300

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l41::<lambda_3>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_70 [3];
  
  iVar14 = *(int *)((longlong)this + 0x14);
  iVar16 = *(int *)((longlong)this + 0x18) * param_1;
  lVar2 = *(longlong *)this;
  iVar13 = (param_1 + 1) * *(int *)((longlong)this + 0x18);
  uVar3 = *(undefined8 *)((longlong)this + 0x28);
  uVar4 = *(undefined8 *)((longlong)this + 0x20);
  lVar5 = *(longlong *)(lVar2 + 0x108);
  lVar15 = (longlong)(*(int *)((longlong)this + 0x10) + iVar16);
  lVar6 = *(longlong *)(lVar2 + 800);
  uVar1 = *(undefined4 *)((longlong)this + 0x1c);
  lVar7 = *(longlong *)(lVar2 + 0xf8);
  lVar8 = *(longlong *)(lVar2 + 0x2d0);
  lVar9 = *(longlong *)(lVar2 + 0x2c0);
  lVar10 = *(longlong *)(lVar2 + 0x2b0);
  lVar11 = *(longlong *)(lVar2 + 0x2a0);
  lVar2 = *(longlong *)(lVar2 + 0x270);
  pTVar12 = Chaos::Softs::FSolverParticlesRange::GetPAndInvM
                      (*(FSolverParticlesRange **)((longlong)this + 8),local_70);
  if (iVar13 < iVar14) {
    iVar14 = iVar13;
  }
  ApplyXPBDAnisotropicBendingConstraints
            (pTVar12->DataPtr,lVar11 + lVar15 * 4,lVar10 + lVar15 * 4,lVar9 + lVar15 * 4,
             lVar8 + lVar15 * 4,lVar7 + lVar15 * 4,lVar5 + lVar15,lVar6 + lVar15 * 0xc,
             lVar2 + lVar15 * 4,uVar1,uVar4,uVar3,iVar14 - iVar16);
  return;
}

// operator() @ 143f1a310

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l69::
<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),iVar4
             ,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// operator() @ 143f1a5c0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l69::<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::
  ApplyHelper<1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),
             iVar4,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// operator() @ 143f1ae70

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::
<lambda_5>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),iVar4
             ,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// operator() @ 143f1b120

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l73::<lambda_5>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::
  ApplyHelper<0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),
             iVar4,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// operator() @ 143f1b9d0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l75::
<lambda_6>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::ApplyHelper<0,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticles **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),iVar4
             ,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// operator() @ 143f1bc80

void __thiscall
`Chaos::Softs::FXPBDAnisotropicBendingConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l75::<lambda_6>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
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
    fVar8 = *(float *)(lVar2 + 0x1ac);
    fVar6 = *(float *)(lVar2 + 0x1a8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x198),iVar4);
    fVar6 = fVar8 * *pfVar3 + fVar6;
  }
  if (**(char **)((longlong)this + 0x40) == '\0') {
    fVar8 = **(float **)((longlong)this + 0x48);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar9 = *(float *)(lVar2 + 0x1dc);
    fVar8 = *(float *)(lVar2 + 0x1d8);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1c8),iVar4);
    fVar8 = fVar9 * *pfVar3 + fVar8;
  }
  if (**(char **)((longlong)this + 0x50) == '\0') {
    fVar9 = **(float **)((longlong)this + 0x58);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x20c);
    fVar9 = *(float *)(lVar2 + 0x208);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x1f8),iVar4);
    fVar9 = fVar10 * *pfVar3 + fVar9;
  }
  if (**(char **)((longlong)this + 0x60) == '\0') {
    local_a0 = **(float **)((longlong)this + 0x68);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar10 = *(float *)(lVar2 + 0x23c);
    fVar1 = *(float *)(lVar2 + 0x238);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x228),iVar4);
    local_a0 = fVar10 * *pfVar3 + fVar1;
  }
  if (**(char **)((longlong)this + 0x70) == '\0') {
    fVar10 = **(float **)((longlong)this + 0x78);
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x10);
    fVar1 = *(float *)(lVar2 + 0x26c);
    fVar10 = *(float *)(lVar2 + 0x268);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 600),iVar4);
    fVar10 = fVar1 * *pfVar3 + fVar10;
  }
  local_a8 = fVar9;
  local_a4 = fVar8;
  local_9c = fVar5;
  local_98 = fVar7;
  local_94 = fVar6;
  Chaos::Softs::FXPBDAnisotropicBendingConstraints::
  ApplyHelper<0,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicBendingConstraints **)((longlong)this + 0x10),
             *(FSolverParticlesRange **)((longlong)this + 0x80),**(float **)((longlong)this + 0x88),
             iVar4,(TVector<float,3> *)&local_9c,(TVector<float,3> *)&local_a8,fVar10);
  return;
}

// AddAnisotropicBendingResidualAndHessian @ 143f1c630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddAnisotropicBendingResidualAndHessian
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,float param_4,TVector<float,3> *param_5,PMatrix<float,3,3> *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  TVector<float,3> *pTVar11;
  TVector<float,3> *pTVar12;
  TVector<float,3> *pTVar13;
  longlong lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res8 [2];
  FSolverParticles *local_res10;
  int local_res18;
  int local_res20;
  undefined1 local_e0 [8];
  float local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  
  fVar18 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
  fVar16 = *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
  fVar17 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
  fVar1 = *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
  fVar2 = *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
  lVar14 = (longlong)param_2;
  fVar3 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
  uVar15 = (uint)~param_2 >> 0x1f;
  uVar9 = 0;
  if (param_2 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar9 = uVar15;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar9 = uVar15;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = this->_padding_;
  pTVar10 = FSolverParticles::P(param_1,*(int *)(lVar5 + lVar14 * 0x10));
  pTVar11 = FSolverParticles::P(param_1,*(int *)(lVar5 + 4 + lVar14 * 0x10));
  pTVar12 = FSolverParticles::P(param_1,*(int *)(lVar5 + 8 + lVar14 * 0x10));
  pTVar13 = FSolverParticles::P(local_res10,*(int *)(lVar5 + 0xc + lVar14 * 0x10));
  local_d0 = ___xmm_00000003000000000000000100000002;
  uStack_c8 = _UNK_150b29d28;
  local_e0 = (undefined1  [8])0x0;
  local_d8 = 0.0;
  local_res8[0] = 0.0;
  ComputeGradTheta(this,pTVar12,pTVar11,pTVar10,pTVar13,
                   *(int *)((longlong)&local_d0 + (longlong)local_res20 * 4),
                   (TVector<float,3> *)local_e0,local_res8);
  iVar7 = local_res18;
  uVar9 = 0;
  if (local_res18 < (int)this->_padding_) {
    uVar9 = uVar15;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  fVar19 = local_res8[0] - *(float *)(this->_padding_ + lVar14 * 4);
  uVar9 = 0;
  if (iVar7 < (int)this->_padding_) {
    uVar9 = uVar15;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(char *)(lVar14 + this->_padding_) == '\0') {
    fVar18 = fVar3 * *(float *)(pFVar4 + lVar14 * 0xc) +
             fVar18 * *(float *)(pFVar4 + lVar14 * 0xc + 4) +
             fVar17 * *(float *)(pFVar4 + lVar14 * 0xc + 8);
  }
  else {
    fVar18 = fVar16 * *(float *)(pFVar4 + lVar14 * 0xc) +
             fVar1 * *(float *)(pFVar4 + lVar14 * 0xc + 4) +
             fVar2 * *(float *)(pFVar4 + lVar14 * 0xc + 8);
  }
  fVar18 = param_4 * param_4 * fVar18;
  fVar19 = fVar18 * fVar19;
  *(float *)param_5 = *(float *)param_5 - fVar19 * (float)local_e0._0_4_;
  *(float *)&param_5->field_0x4 = *(float *)&param_5->field_0x4 - fVar19 * (float)local_e0._4_4_;
  fVar16 = fVar18 * (float)local_e0._0_4_;
  *(float *)&param_5->field_0x8 = *(float *)&param_5->field_0x8 - fVar19 * local_d8;
  *(undefined8 *)&param_6->field_0x30 = 0;
  *(undefined4 *)&param_6->field_0x38 = 0;
  *(float *)&param_6->field_0x20 = fVar16 * local_d8 + *(float *)&param_6->field_0x20;
  fVar17 = (float)local_e0._4_4_ * fVar18;
  *(float *)param_6 = fVar16 * (float)local_e0._0_4_ + *(float *)param_6;
  *(float *)&param_6->field_0x10 = fVar16 * (float)local_e0._4_4_ + *(float *)&param_6->field_0x10;
  *(float *)&param_6->field_0x24 = fVar17 * local_d8 + *(float *)&param_6->field_0x24;
  fVar18 = local_d8 * fVar18;
  *(float *)&param_6->field_0x4 = fVar17 * (float)local_e0._0_4_ + *(float *)&param_6->field_0x4;
  *(float *)&param_6->field_0x14 = fVar17 * (float)local_e0._4_4_ + *(float *)&param_6->field_0x14;
  *(float *)&param_6->field_0x8 = fVar18 * (float)local_e0._0_4_ + *(float *)&param_6->field_0x8;
  *(float *)&param_6->field_0x18 = fVar18 * (float)local_e0._4_4_ + *(float *)&param_6->field_0x18;
  *(float *)&param_6->field_0x28 = fVar18 * local_d8 + *(float *)&param_6->field_0x28;
  return;
}

// AddInternalForceDifferential @ 143f1cdc0

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential
          (FXPBDAnisotropicBendingConstraints *this,FSolverParticles *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int local_res8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  code *local_78;
  int **local_70;
  int *local_68;
  FXPBDAnisotropicBendingConstraints *local_60;
  FSolverParticles *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_40;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_38;
  
  local_88 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
  local_84 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
  local_80 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
  local_98 = *(undefined4 *)&(this->BucklingStiffnessWeft).MapView.OffsetRange;
  local_94 = *(undefined4 *)&(this->BucklingStiffnessWarp).MapView.OffsetRange;
  local_90 = *(undefined4 *)&(this->BucklingStiffnessBias).MapView.OffsetRange;
  if ((param_3->ArrayNum != (int)param_1->_padding_) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3475963285155609345>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                         ,0x4ff,"ndf.Num() == InParticles.Size()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = 0;
  iVar3 = (this->ConstraintsPerColorStartIndex).ArrayNum + -1;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uVar6 + 1;
      local_res8[0] =
           *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data + lVar5 * 4);
      uVar4 = 0;
      if ((int)uVar6 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_68 = local_res8;
      local_50 = &local_98;
      local_48 = &local_88;
      local_70 = &local_68;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicBendingConstraints::AddInternalForceDifferential'::__l4::<lambda_1>,void,int>
                 ::Call;
      local_60 = this;
      local_58 = param_1;
      local_40 = param_2;
      local_38 = param_3;
      PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 lVar5 * 4 + 4) - local_res8[0],
                         (TFunctionRef<void___cdecl(int)> *)&local_78,false);
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}

// ComputeGradTheta @ 143f1e2b0

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::ComputeGradTheta
          (FXPBDAnisotropicBendingConstraints *this,TVector<float,3> *param_1,
          TVector<float,3> *param_2,TVector<float,3> *param_3,TVector<float,3> *param_4,int param_5,
          TVector<float,3> *param_6,float *param_7)

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
  float fVar13;
  float fVar14;
  float fVar15;
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
  
  fVar10 = *(float *)&param_3->field_0x8;
  fVar12 = *(float *)&param_3->field_0x4;
  fVar13 = *(float *)&param_2->field_0x4;
  fVar11 = fVar12 - *(float *)&param_1->field_0x4;
  fVar2 = fVar12 - fVar13;
  fVar14 = fVar13 - *(float *)&param_1->field_0x4;
  fVar15 = fVar10 - *(float *)&param_1->field_0x8;
  fVar16 = *(float *)param_3;
  fVar24 = *(float *)param_2;
  fVar21 = *(float *)&param_2->field_0x8;
  fVar6 = fVar16 - fVar24;
  fVar7 = fVar10 - fVar21;
  fVar18 = fVar21 - *(float *)&param_1->field_0x8;
  fVar10 = fVar10 - *(float *)&param_4->field_0x8;
  fVar12 = fVar12 - *(float *)&param_4->field_0x4;
  fVar8 = fVar24 - *(float *)param_1;
  fVar23 = SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar7 * fVar7);
  fVar4 = fVar16 - *(float *)param_1;
  fVar9 = fVar11 * fVar18 - fVar15 * fVar14;
  fVar3 = fVar15 * fVar8 - fVar4 * fVar18;
  fVar5 = fVar4 * fVar14 - fVar11 * fVar8;
  fVar20 = fVar3 * fVar3 + fVar9 * fVar9 + fVar5 * fVar5;
  fVar24 = fVar24 - *(float *)param_4;
  fVar21 = fVar21 - *(float *)&param_4->field_0x8;
  fVar13 = fVar13 - *(float *)&param_4->field_0x4;
  fVar16 = fVar16 - *(float *)param_4;
  fVar19 = fVar13 * fVar10 - fVar21 * fVar12;
  fVar17 = fVar21 * fVar16 - fVar24 * fVar10;
  fVar25 = fVar24 * fVar12 - fVar13 * fVar16;
  fVar22 = fVar17 * fVar17 + fVar19 * fVar19 + fVar25 * fVar25;
  fVar1 = FGenericPlatformMath::Atan2
                    (((fVar25 * fVar3 - fVar17 * fVar5) * fVar6 +
                      (fVar19 * fVar5 - fVar25 * fVar9) * fVar2 +
                     (fVar17 * fVar9 - fVar19 * fVar3) * fVar7) / fVar23,
                     fVar17 * fVar3 + fVar19 * fVar9 + fVar25 * fVar5);
  *param_7 = fVar1;
  if (param_5 == 0) {
    fVar23 = (__real_bf800000 / fVar20) * fVar23;
    *(float *)param_6 = fVar23 * fVar9;
    fVar5 = fVar23 * fVar5;
    *(float *)&param_6->field_0x4 = fVar23 * fVar3;
  }
  else {
    if (param_5 == 1) {
      fVar12 = (fVar12 * fVar2 + fVar6 * fVar16 + fVar10 * fVar7) / (fVar20 * fVar23);
      fVar10 = (fVar11 * fVar2 + fVar6 * fVar4 + fVar15 * fVar7) / (fVar22 * fVar23);
      *(float *)param_6 = fVar10 * fVar19 + fVar12 * fVar9;
      *(float *)&param_6->field_0x4 = fVar10 * fVar17 + fVar12 * fVar3;
      *(float *)&param_6->field_0x8 = fVar12 * fVar5 + fVar10 * fVar25;
      return;
    }
    if (param_5 != 2) {
      if (param_5 != 3) {
        return;
      }
      fVar23 = (__real_bf800000 / fVar22) * fVar23;
      *(float *)param_6 = fVar19 * fVar23;
      *(float *)&param_6->field_0x4 = fVar17 * fVar23;
      *(float *)&param_6->field_0x8 = fVar25 * fVar23;
      return;
    }
    fVar12 = (float)((uint)((fVar14 * fVar2 + fVar6 * fVar8 + fVar18 * fVar7) / (fVar22 * fVar23)) ^
                    __xmm_80000000800000008000000080000000);
    fVar10 = (fVar13 * fVar2 + fVar24 * fVar6 + fVar21 * fVar7) / (fVar20 * fVar23);
    fVar5 = fVar12 * fVar25 - fVar10 * fVar5;
    *(float *)param_6 = fVar19 * fVar12 - fVar10 * fVar9;
    *(float *)&param_6->field_0x4 = fVar17 * fVar12 - fVar10 * fVar3;
  }
  *(float *)&param_6->field_0x8 = fVar5;
  return;
}

// GenerateWarpWeftBiasBaseMultipliers @ 143f1f8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::GenerateWarpWeftBiasBaseMultipliers
          (FXPBDAnisotropicBendingConstraints *this,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_1,
          FTriangleMesh *param_2)

{
  ForAnyElementType *pFVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  uint uVar9;
  float fVar10;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar16;
  ForElementType<FSetElementId> FVar17;
  float *pfVar18;
  FXPBDAnisotropicBendingConstraints *pFVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FTriangleMesh *pFVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8 [4];
  uint local_1b4;
  uint uStack_1b0;
  uint local_1ac;
  uint uStack_1a8;
  uint local_1a4;
  uint uStack_1a0;
  FTriangleMesh *local_198;
  undefined8 local_190;
  float local_188;
  undefined8 local_184;
  float local_17c;
  undefined8 local_178;
  float local_170;
  int local_16c;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_130;
  FXPBDAnisotropicBendingConstraints *local_128;
  uint *local_120;
  uint *local_118;
  uint *local_110;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_108;
  TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_f8;
  ulonglong local_a8;
  
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_3f800000;
  fVar29 = __real_322bcc77;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  uVar23 = 0;
  iVar13 = (param_2->MElements).ArrayNum;
  local_f8.Elements._0_8_ = 0;
  local_f8.Elements._8_8_ = 0;
  local_f8.Elements._32_8_ = 0;
  local_f8.Elements._40_4_ = 0;
  local_f8.Elements._44_4_ = 0x80;
  local_f8.Elements._48_4_ = 0xffffffff;
  local_f8.Elements._52_4_ = 0;
  local_f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f8.HashSize = 0;
  uVar24 = uVar23;
  local_198 = param_2;
  local_130 = __return_storage_ptr__;
  local_128 = this;
  local_108 = param_1;
  if (0 < iVar13) {
    do {
      pTVar11 = local_108;
      pFVar25 = local_198;
      uVar22 = (uint)uVar23;
      uVar21 = 0;
      if ((int)uVar22 < iVar13) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      pFVar3 = (pFVar25->MElements).AllocatorInstance.Data;
      uVar21 = 0;
      if ((int)uVar22 < pTVar11->ArrayNum) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      uVar21 = *(uint *)(pFVar3 + uVar24 * 0xc + 4);
      uStack_1b0 = *(uint *)(pFVar3 + uVar24 * 0xc);
      pFVar4 = (pTVar11->AllocatorInstance).Data;
      local_1b4 = uVar21;
      if ((int)uStack_1b0 <= (int)uVar21) {
        local_1b4 = uStack_1b0;
        uStack_1b0 = uVar21;
      }
      uVar21 = (local_1b4 >> 2) + 0x9e3779b9 + uStack_1b0 + local_1b4 * 0x40 ^ local_1b4;
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_f8.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar17 + (ulonglong)(local_f8.HashSize - 1U & uVar21) * 4);
        while (iVar13 != -1) {
          puVar20 = (undefined8 *)((longlong)iVar13 * 0x20 + local_f8.Elements._0_8_);
          if (((uint)*puVar20 == local_1b4) && ((uint)((ulonglong)*puVar20 >> 0x20) == uStack_1b0))
          {
            if ((iVar13 != -1) && (puVar20 != (undefined8 *)0x0)) goto LAB_143f1fb0b;
            break;
          }
          iVar13 = *(int *)(puVar20 + 3);
        }
      }
      local_120 = &local_1b4;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_f8,(uint)&local_16c,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar21,(bool *)&local_120);
      puVar20 = (undefined8 *)((longlong)local_16c * 0x20 + local_f8.Elements._0_8_);
LAB_143f1fb0b:
      uVar5 = *(undefined8 *)(pFVar4 + uVar24 * 0x18 + 8);
      pFVar1 = (ForAnyElementType *)(puVar20 + 1);
      local_160._0_4_ = (float)uVar5;
      local_160._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      uVar6 = *(undefined8 *)(pFVar4 + uVar24 * 0x18);
      local_158._0_4_ = (float)uVar6;
      local_158._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_188 = (float)((uint)((float)local_160 - (float)local_158) & uVar14);
      fVar27 = (float)((uint)(local_160._4_4_ - local_158._4_4_) & uVar14);
      if (local_188 <= fVar27) {
        fVar26 = 0.0;
        fVar28 = fVar27 - local_188;
        fVar27 = fVar28;
      }
      else {
        fVar26 = local_188 - fVar27;
        fVar28 = 0.0;
        local_188 = fVar27;
        fVar27 = fVar26;
      }
      if (local_188 + fVar27 <= fVar29) {
        fVar28 = 0.0;
        local_188 = 0.0;
        fVar27 = fVar10;
      }
      else {
        fVar27 = fVar10 / (local_188 + fVar27);
        fVar28 = fVar27 * fVar28;
        local_188 = fVar27 * local_188;
        fVar27 = fVar27 * fVar26;
      }
      local_190 = CONCAT44(fVar27,fVar28);
      local_160 = uVar5;
      local_158 = uVar6;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_190) &&
          ((FScriptContainerElement *)&local_190 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar20 + 0x14) * 0xc)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      iVar13 = *(int *)(puVar20 + 2);
      if (iVar13 == *(int *)((longlong)puVar20 + 0x14)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar1,(int *)((longlong)puVar20 + 0x14));
      }
      *(int *)(puVar20 + 2) = iVar13 + 1;
      pFVar7 = pFVar1->Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0xc) = local_190;
      *(float *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = local_188;
      uVar21 = *(uint *)(pFVar3 + uVar24 * 0xc + 8);
      uStack_1a8 = *(uint *)(pFVar3 + uVar24 * 0xc + 4);
      local_1ac = uVar21;
      if ((int)uStack_1a8 <= (int)uVar21) {
        local_1ac = uStack_1a8;
        uStack_1a8 = uVar21;
      }
      uVar21 = (local_1ac >> 2) + 0x9e3779b9 + uStack_1a8 + local_1ac * 0x40 ^ local_1ac;
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_f8.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar17 + (ulonglong)(local_f8.HashSize - 1U & uVar21) * 4);
        while (iVar13 != -1) {
          puVar20 = (undefined8 *)((longlong)iVar13 * 0x20 + local_f8.Elements._0_8_);
          if (((uint)*puVar20 == local_1ac) && ((uint)((ulonglong)*puVar20 >> 0x20) == uStack_1a8))
          {
            if ((iVar13 != -1) && (puVar20 != (undefined8 *)0x0)) goto LAB_143f1fd2a;
            break;
          }
          iVar13 = *(int *)(puVar20 + 3);
        }
      }
      local_118 = &local_1ac;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_f8,(uint)&local_168,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar21,(bool *)&local_118);
      puVar20 = (undefined8 *)((longlong)local_168 * 0x20 + local_f8.Elements._0_8_);
LAB_143f1fd2a:
      uVar5 = *(undefined8 *)(pFVar4 + uVar24 * 0x18 + 0x10);
      pFVar1 = (ForAnyElementType *)(puVar20 + 1);
      local_150._0_4_ = (float)uVar5;
      local_150._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      uVar6 = *(undefined8 *)(pFVar4 + uVar24 * 0x18 + 8);
      local_148._0_4_ = (float)uVar6;
      local_148._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_17c = (float)((uint)((float)local_150 - (float)local_148) & uVar14);
      fVar27 = (float)((uint)(local_150._4_4_ - local_148._4_4_) & uVar14);
      if (local_17c <= fVar27) {
        fVar26 = 0.0;
        fVar28 = fVar27 - local_17c;
        fVar27 = fVar28;
      }
      else {
        fVar26 = local_17c - fVar27;
        fVar28 = 0.0;
        local_17c = fVar27;
        fVar27 = fVar26;
      }
      if (local_17c + fVar27 <= fVar29) {
        fVar28 = 0.0;
        local_17c = 0.0;
        fVar27 = fVar10;
      }
      else {
        fVar27 = fVar10 / (local_17c + fVar27);
        fVar28 = fVar27 * fVar28;
        local_17c = fVar27 * local_17c;
        fVar27 = fVar27 * fVar26;
      }
      local_184 = CONCAT44(fVar27,fVar28);
      local_150 = uVar5;
      local_148 = uVar6;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_184) &&
          ((FScriptContainerElement *)&local_184 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar20 + 0x14) * 0xc)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      iVar13 = *(int *)(puVar20 + 2);
      if (iVar13 == *(int *)((longlong)puVar20 + 0x14)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar1,(int *)((longlong)puVar20 + 0x14));
      }
      *(int *)(puVar20 + 2) = iVar13 + 1;
      pFVar7 = pFVar1->Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar13 * 0xc) = local_184;
      *(float *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = local_17c;
      uVar21 = *(uint *)(pFVar3 + uVar24 * 0xc);
      uStack_1a0 = *(uint *)(pFVar3 + uVar24 * 0xc + 8);
      local_1a4 = uVar21;
      if ((int)uStack_1a0 <= (int)uVar21) {
        local_1a4 = uStack_1a0;
        uStack_1a0 = uVar21;
      }
      uVar21 = (local_1a4 >> 2) + 0x9e3779b9 + uStack_1a0 + local_1a4 * 0x40 ^ local_1a4;
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_f8.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar17 + (ulonglong)(local_f8.HashSize - 1U & uVar21) * 4);
        while (iVar13 != -1) {
          puVar20 = (undefined8 *)((longlong)iVar13 * 0x20 + local_f8.Elements._0_8_);
          if (((uint)*puVar20 == local_1a4) && ((uint)((ulonglong)*puVar20 >> 0x20) == uStack_1a0))
          {
            if ((iVar13 != -1) && (puVar20 != (undefined8 *)0x0)) goto LAB_143f1ff4a;
            break;
          }
          iVar13 = *(int *)(puVar20 + 3);
        }
      }
      local_110 = &local_1a4;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_f8,(uint)&local_164,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar21,(bool *)&local_110);
      puVar20 = (undefined8 *)((longlong)local_164 * 0x20 + local_f8.Elements._0_8_);
LAB_143f1ff4a:
      uVar5 = *(undefined8 *)(pFVar4 + uVar24 * 0x18);
      pFVar1 = (ForAnyElementType *)(puVar20 + 1);
      local_140._0_4_ = (float)uVar5;
      local_140._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      uVar6 = *(undefined8 *)(pFVar4 + uVar24 * 0x18 + 0x10);
      local_138._0_4_ = (float)uVar6;
      local_138._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
      local_170 = (float)((uint)((float)local_140 - (float)local_138) & uVar14);
      fVar27 = (float)((uint)(local_140._4_4_ - local_138._4_4_) & uVar14);
      if (local_170 <= fVar27) {
        fVar26 = 0.0;
        fVar28 = fVar27 - local_170;
        fVar27 = fVar28;
      }
      else {
        fVar26 = local_170 - fVar27;
        fVar28 = 0.0;
        local_170 = fVar27;
        fVar27 = fVar26;
      }
      if (local_170 + fVar27 <= fVar29) {
        fVar28 = 0.0;
        local_170 = 0.0;
        fVar27 = fVar10;
      }
      else {
        fVar27 = fVar10 / (local_170 + fVar27);
        fVar28 = fVar27 * fVar28;
        local_170 = fVar27 * local_170;
        fVar27 = fVar27 * fVar26;
      }
      local_178 = CONCAT44(fVar27,fVar28);
      local_140 = uVar5;
      local_138 = uVar6;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_178) &&
          ((FScriptContainerElement *)&local_178 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar20 + 0x14) * 0xc)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      iVar13 = *(int *)(puVar20 + 2);
      if (iVar13 == *(int *)((longlong)puVar20 + 0x14)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,pFVar1,(int *)((longlong)puVar20 + 0x14));
      }
      uVar23 = (ulonglong)(uVar22 + 1);
      *(int *)(puVar20 + 2) = iVar13 + 1;
      pFVar3 = pFVar1->Data;
      *(undefined8 *)(pFVar3 + (longlong)iVar13 * 0xc) = local_178;
      *(float *)(pFVar3 + (longlong)iVar13 * 0xc + 8) = local_170;
      iVar13 = (local_198->MElements).ArrayNum;
      uVar24 = uVar24 + 1;
    } while ((int)(uVar22 + 1) < iVar13);
  }
  pFVar19 = local_128;
  pTVar16 = local_130;
  uVar24 = 0;
  (local_130->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_130->ArrayNum = 0;
  local_130->ArrayMax = 0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_130,(int)local_128->_padding_,Default);
  if (0 < (int)pFVar19->_padding_) {
    local_198 = (FTriangleMesh *)0x0;
    uVar23 = uVar24;
    do {
      pFVar25 = local_198;
      uVar22 = (uint)uVar23;
      uVar21 = ~uVar22 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar22 < (int)pFVar19->_padding_) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      uVar14 = *(uint *)((longlong)pFVar25 + 4 + pFVar19->_padding_);
      uVar15 = 0;
      if ((int)uVar22 < (int)pFVar19->_padding_) {
        uVar15 = uVar21;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      uVar15 = *(uint *)((longlong)pFVar25 + pFVar19->_padding_);
      uVar9 = uVar15;
      if ((int)uVar14 < (int)uVar15) {
        uVar9 = uVar14;
        uVar14 = uVar15;
      }
      if (local_f8.Elements._8_4_ != local_f8.Elements._52_4_) {
        FVar17 = (ForElementType<FSetElementId>)&local_f8.Hash;
        if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar17 = local_f8.Hash.SecondaryData;
        }
        iVar13 = *(int *)((longlong)FVar17 +
                         (ulonglong)
                         (local_f8.HashSize - 1U &
                         (uVar9 * 0x40 + -0x61c88647 + uVar14 + (uVar9 >> 2) ^ uVar9)) * 4);
        while (iVar13 != -1) {
          puVar20 = (undefined8 *)((longlong)iVar13 * 0x20 + local_f8.Elements._0_8_);
          if (((uint)*puVar20 == uVar9) && ((uint)((ulonglong)*puVar20 >> 0x20) == uVar14)) {
            if (iVar13 != -1) {
              if (puVar20 != (undefined8 *)0x0) goto LAB_143f20253;
              goto LAB_143f2022d;
            }
            break;
          }
          iVar13 = *(int *)(puVar20 + 3);
        }
      }
      puVar20 = (undefined8 *)0x0;
LAB_143f2022d:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
LAB_143f20253:
      iVar13 = *(int *)(puVar20 + 2);
      fVar28 = 0.0;
      fVar27 = 0.0;
      fVar29 = 0.0;
      if (iVar13 == 0) {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_3475963285155610288>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicBendingConstraints.cpp"
                            ,0x150,"EdgeMultipliers.Num()");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
          return pTVar16;
        }
      }
      else {
        pfVar18 = (float *)puVar20[1];
        pfVar2 = pfVar18 + (longlong)iVar13 * 3;
        while( true ) {
          if (*(int *)(puVar20 + 2) != iVar13) {
            local_1b8[0] = 0;
            `TCheckedPointerIterator<Chaos::TVector<float,3>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1b8);
          }
          if (pfVar18 == pfVar2) break;
          fVar28 = fVar28 + *pfVar18;
          fVar27 = fVar27 + pfVar18[1];
          fVar29 = fVar29 + pfVar18[2];
          pfVar18 = pfVar18 + 3;
        }
        fVar26 = fVar10 / (float)*(int *)(puVar20 + 2);
        fVar29 = fVar29 * fVar26;
        fVar27 = fVar27 * fVar26;
        fVar28 = fVar28 * fVar26;
        pFVar25 = local_198;
      }
      pTVar16 = local_130;
      uVar14 = 0;
      if ((int)uVar22 < local_130->ArrayNum) {
        uVar14 = uVar21;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar16 = (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar16;
      }
      pFVar3 = (pTVar16->AllocatorInstance).Data;
      local_198 = (FTriangleMesh *)((longlong)pFVar25 + 8);
      uVar23 = (ulonglong)(uVar22 + 1);
      *(float *)(pFVar3 + uVar24) = fVar28;
      *(float *)(pFVar3 + uVar24 + 4) = fVar27;
      *(float *)(pFVar3 + uVar24 + 8) = fVar29;
      uVar24 = uVar24 + 0xc;
      pFVar19 = local_128;
    } while ((int)(uVar22 + 1) < (int)local_128->_padding_);
  }
  local_f8.HashSize = 0;
  if (local_f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f8.Elements);
  return pTVar16;
}

// GetRestAngleMapFromCollection @ 143f20420

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::GetRestAngleMapFromCollection
          (FXPBDAnisotropicBendingConstraints *this,
          TArrayView<float_const_,int> *__return_storage_ptr__,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_1,FCollectionPropertyConstFacade *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  FString *pFVar5;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar6;
  FName *pFVar7;
  FCollectionPropertyConstFacade *local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,XPBDAnisoRestAngleTypeName);
  uVar3 = 0;
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    uVar3 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar4,&param_2->LowValueArray);
  }
  if ((char)uVar3 == '\0') {
LAB_143f2053f:
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    if ((uVar3 & 0xff) == 1) {
      pFVar5 = ::FName::ToString(&XPBDAnisoFlatnessRatioName,&local_28);
      pFVar5 = ::FString::FString(&local_18,pFVar5);
      pFVar7 = &XPBDAnisoFlatnessRatioName;
    }
    else {
      if ((uVar3 & 0xff) != 2) goto LAB_143f2053f;
      pFVar5 = ::FName::ToString(&XPBDAnisoRestAngleName,&local_28);
      pFVar5 = ::FString::FString(&local_18,pFVar5);
      pFVar7 = &XPBDAnisoRestAngleName;
    }
    local_res20 = param_2;
    FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_2,&local_38,pFVar7,(<lambda_1> *)&local_res20,pFVar5,(int *)0x0);
    pTVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                     *)param_1,&local_38);
    if (pTVar6 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
      __return_storage_ptr__->DataPtr = (float *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
    }
    else {
      uVar1 = *(undefined4 *)&pTVar6->field_0x18;
      uVar2 = *(undefined4 *)&pTVar6->field_0x1c;
      __return_storage_ptr__->DataPtr = *(float **)&pTVar6->field_0x10;
      __return_storage_ptr__->ArrayNum = uVar1;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRestAngleValueFromCollection @ 143f20570

TVector<float,2> __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::GetRestAngleValueFromCollection
          (FXPBDAnisotropicBendingConstraints *this,FCollectionPropertyConstFacade *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  FCollectionPropertyConstFacade *in_R8;
  float fVar4;
  float fVar5;
  undefined8 local_res18;
  
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&in_R8->KeyNameIndices,XPBDAnisoRestAngleTypeName);
  if ((piVar3 == (int *)0x0) || (*piVar3 == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (in_R8,*piVar3,&in_R8->LowValueArray);
  }
  if ((char)uVar2 == '\0') {
LAB_143f2068d:
    param_1->_padding_ = 0;
  }
  else {
    if ((uVar2 & 0xff) == 1) {
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,XPBDAnisoFlatnessRatioName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
        param_1->_padding_ = local_res18;
        return (TVector<float,2>)param_1;
      }
    }
    else {
      if ((uVar2 & 0xff) != 2) goto LAB_143f2068d;
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,XPBDAnisoRestAngleName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
      }
    }
    param_1->_padding_ = local_res18;
  }
  return (TVector<float,2>)param_1;
}

// SetProperties @ 143f22fc0

void __thiscall
Chaos::Softs::FXPBDAnisotropicBendingConstraints::SetProperties
          (FXPBDAnisotropicBendingConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  float fVar5;
  TVector<float,2> TVar6;
  ECollectionPropertyFlags EVar7;
  bool bVar8;
  byte bVar9;
  FString *pFVar10;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar11;
  FScriptContainerElement **ppFVar12;
  FPBDWeightMap *pFVar13;
  TArrayView<Chaos::TVector<int,2>_const_,int> *pTVar14;
  FPBDFlatWeightMap *pFVar15;
  TArrayView<unsigned_char_const_,int> *pTVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  float local_res20;
  float fStackX_24;
  float local_3b8;
  float fStack_3b4;
  float local_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  TVector<float,2> local_3a0;
  TArrayView<float_const_,int> local_398;
  TArrayView<float_const_,int> local_388;
  TArrayView<float_const_,int> local_378;
  TArrayView<float_const_,int> local_368;
  TArrayView<float_const_,int> local_358;
  TArrayView<float_const_,int> local_348;
  TArrayView<float_const_,int> local_338;
  TArrayView<float_const_,int> local_328;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_318;
  FScriptContainerElement *local_308;
  int iStack_300;
  FScriptContainerElement *local_2f8;
  undefined4 local_2f0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_2e8;
  FScriptContainerElement *local_2d8;
  int iStack_2d0;
  FScriptContainerElement *local_2c8;
  undefined4 local_2c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_2b8;
  FScriptContainerElement *local_2a8;
  int iStack_2a0;
  FScriptContainerElement *local_298;
  undefined4 local_290;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_288;
  undefined1 local_278 [40];
  float local_250;
  float local_24c;
  undefined1 local_248 [40];
  float local_220;
  float local_21c;
  undefined1 local_218 [40];
  float local_1f0;
  float local_1ec;
  FScriptContainerElement *local_1e8 [2];
  FScriptContainerElement *local_1d8 [2];
  FScriptContainerElement *local_1c8 [2];
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1b8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_1a8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_198;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_188;
  FPBDWeightMap local_178;
  FPBDFlatWeightMap local_140;
  FPBDFlatWeightMap local_110;
  FPBDFlatWeightMap local_e0;
  FPBDFlatWeightMap local_b0 [2];
  
  fVar5 = __real_4b189680;
  ppFVar12 = &local_2f8;
  iVar1 = (this->XPBDAnisoBendingStiffnessWarpIndex).Index;
  if (iVar1 != -1) {
    pTVar16 = &param_1->FlagsArray;
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar16);
    if (((EVar7 & Animatable) != None) &&
       (EVar7 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->XPBDAnisoBendingStiffnessWarpIndex).Index,pTVar16),
       (char)EVar7 < '\0')) {
      if (((this->XPBDAnisoBendingStiffnessWarpIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBendingStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,199,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar1 = (this->XPBDAnisoBendingStiffnessWarpIndex).Index;
      fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->HighValueArray);
      fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->LowValueArray);
      if (fVar5 <= fVar17) {
        fVar17 = fVar5;
      }
      if (fVar5 <= fVar18) {
        fVar18 = fVar5;
      }
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      if (((this->XPBDAnisoBendingStiffnessWarpIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBendingStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,199,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBendingStiffnessWarpIndex).Index,pTVar16);
      if ((EVar7 & StringDirty) == None) {
        *(float *)&(this->StiffnessWarp).MapView.OffsetRange = fVar18;
        *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 = fVar17 - fVar18;
      }
      else {
        if (((this->XPBDAnisoBendingStiffnessWarpIndex).Index == -1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("XPBDAnisoBendingStiffnessWarpIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                               ,199,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                            (param_1,(this->XPBDAnisoBendingStiffnessWarpIndex).Index,
                             &param_1->StringValueArray);
        local_318.DataPtr = (TVector<int,2> *)this->_padding_;
        iVar1 = (int)this->_padding_;
        iVar2 = *(int *)((longlong)&this->_padding_ + 4);
        lVar4 = this->_padding_;
        if ((iVar1 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_318.ArrayNum = iVar1;
        pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                          *)param_2,pFVar10);
        if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_398._8_8_ = (ulonglong)(uint)local_398._12_4_ << 0x20;
          local_398.DataPtr = (float *)0x0;
        }
        else {
          local_398.DataPtr = *(float **)&pTVar11->field_0x10;
          local_398._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
        }
        FPBDFlatWeightMap::CalculateMapValues<2>
                  ((TArray<float,TSizedDefaultAllocator<32>_> *)local_278,&local_398,&local_318,
                   (int)lVar4,iVar2);
        local_308 = (FScriptContainerElement *)local_278._0_8_;
        if (((int)local_278._8_4_ < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iStack_300 = local_278._8_4_;
        local_278._16_4_ = iVar1;
        if (local_278._8_4_ == iVar1) {
          ppFVar12 = local_1e8;
          local_1e8[0] = local_308;
        }
        else {
          local_2f8 = (FScriptContainerElement *)0x0;
          local_2f0 = 0;
        }
        local_278._24_8_ = *ppFVar12;
        local_278._32_8_ = ppFVar12[1];
        local_24c = fVar17 - fVar18;
        local_250 = fVar18;
        FPBDFlatWeightMap::operator=(&this->StiffnessWarp,(FPBDFlatWeightMap *)local_278);
        if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_278._0_8_);
        }
      }
    }
  }
  pTVar16 = &param_1->FlagsArray;
  iVar1 = (this->XPBDAnisoBendingStiffnessWeftIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBendingStiffnessWeftIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBendingStiffnessWeftIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,200,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBendingStiffnessWeftIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (fVar5 <= fVar17) {
      fVar17 = fVar5;
    }
    if (fVar5 <= fVar18) {
      fVar18 = fVar5;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (((this->XPBDAnisoBendingStiffnessWeftIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,200,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBendingStiffnessWeftIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->StiffnessWeft).MapView.OffsetRange = fVar18;
      *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 = fVar17 - fVar18;
    }
    else {
      if (((this->XPBDAnisoBendingStiffnessWeftIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBendingStiffnessWeftIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,200,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBendingStiffnessWeftIndex).Index,
                           &param_1->StringValueArray);
      local_2e8.DataPtr = (TVector<int,2> *)this->_padding_;
      iVar1 = (int)this->_padding_;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2e8.ArrayNum = iVar1;
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_388._8_8_ = (ulonglong)(uint)local_388._12_4_ << 0x20;
        local_388.DataPtr = (float *)0x0;
      }
      else {
        local_388.DataPtr = *(float **)&pTVar11->field_0x10;
        local_388._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_248,&local_388,&local_2e8,
                 (int)lVar4,iVar2);
      local_2d8 = (FScriptContainerElement *)local_248._0_8_;
      if (((int)local_248._8_4_ < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_2d0 = local_248._8_4_;
      local_248._16_4_ = iVar1;
      if (local_248._8_4_ == iVar1) {
        ppFVar12 = local_1d8;
        local_1d8[0] = local_2d8;
      }
      else {
        local_2c8 = (FScriptContainerElement *)0x0;
        local_2c0 = 0;
        ppFVar12 = &local_2c8;
      }
      local_248._24_8_ = *ppFVar12;
      local_248._32_8_ = ppFVar12[1];
      local_21c = fVar17 - fVar18;
      local_220 = fVar18;
      FPBDFlatWeightMap::operator=(&this->StiffnessWeft,(FPBDFlatWeightMap *)local_248);
      if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_248._0_8_);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBendingStiffnessBiasIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBendingStiffnessBiasIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBendingStiffnessBiasIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xc9,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBendingStiffnessBiasIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->LowValueArray);
    if (fVar5 <= fVar17) {
      fVar17 = fVar5;
    }
    if (fVar5 <= fVar18) {
      fVar18 = fVar5;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (((this->XPBDAnisoBendingStiffnessBiasIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xc9,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBendingStiffnessBiasIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->StiffnessBias).MapView.OffsetRange = fVar18;
      *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 = fVar17 - fVar18;
    }
    else {
      if (((this->XPBDAnisoBendingStiffnessBiasIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBendingStiffnessBiasIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xc9,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBendingStiffnessBiasIndex).Index,
                           &param_1->StringValueArray);
      local_2b8.DataPtr = (TVector<int,2> *)this->_padding_;
      iVar1 = (int)this->_padding_;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2b8.ArrayNum = iVar1;
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_378._8_8_ = (ulonglong)(uint)local_378._12_4_ << 0x20;
        local_378.DataPtr = (float *)0x0;
      }
      else {
        local_378.DataPtr = *(float **)&pTVar11->field_0x10;
        local_378._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      FPBDFlatWeightMap::CalculateMapValues<2>
                ((TArray<float,TSizedDefaultAllocator<32>_> *)local_218,&local_378,&local_2b8,
                 (int)lVar4,iVar2);
      local_2a8 = (FScriptContainerElement *)local_218._0_8_;
      if (((int)local_218._8_4_ < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_2a0 = local_218._8_4_;
      local_218._16_4_ = iVar1;
      if (local_218._8_4_ == iVar1) {
        ppFVar12 = local_1c8;
        local_1c8[0] = local_2a8;
      }
      else {
        local_298 = (FScriptContainerElement *)0x0;
        local_290 = 0;
        ppFVar12 = &local_298;
      }
      local_218._24_8_ = *ppFVar12;
      local_218._32_8_ = ppFVar12[1];
      local_1ec = fVar17 - fVar18;
      local_1f0 = fVar18;
      FPBDFlatWeightMap::operator=(&this->StiffnessBias,(FPBDFlatWeightMap *)local_218);
      if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_218._0_8_);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBucklingRatioIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBucklingRatioIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBucklingRatioIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBucklingRatioIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar1,&param_1->LowValueArray);
    local_res8._4_4_ = fVar17;
    local_3a0 = local_res8;
    if (__real_3f800000 <= (float)local_res8) {
      local_res8._0_4_ = __real_3f800000;
    }
    if ((float)local_res8 <= 0.0) {
      local_res8._0_4_ = 0.0;
    }
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    local_res8._4_4_ = fVar17;
    TVar6 = local_res8;
    if (((this->XPBDAnisoBucklingRatioIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingRatioIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBucklingRatioIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      if (((float)local_res8 == *(float *)&this->_padding_) &&
         (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
        bVar9 = 0;
      }
      else {
        bVar9 = 1;
      }
      *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar9;
      this->_padding_ = (longlong)TVar6;
    }
    else {
      if (((this->XPBDAnisoBucklingRatioIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBucklingRatioIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xcb,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBucklingRatioIndex).Index,
                           &param_1->StringValueArray);
      local_288.DataPtr = (TVector<int,2> *)this->_padding_;
      local_288.ArrayNum = (int)this->_padding_;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      if ((local_288.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_368._8_8_ = (ulonglong)(uint)local_368._12_4_ << 0x20;
        local_368.DataPtr = (float *)0x0;
      }
      else {
        local_368.DataPtr = *(float **)&pTVar11->field_0x10;
        local_368._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      pFVar13 = FPBDWeightMap::FPBDWeightMap<2>
                          (&local_178,(TVector<float,2> *)&local_res8,&local_368,&local_288,
                           (int)lVar4,iVar1,0x10,(void *)0x0);
      FPBDWeightMap::operator=((FPBDWeightMap *)&this->_padding_,pFVar13);
      if (local_178.Table.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Table.AllocatorInstance.Data);
      }
      if (local_178.Indices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Indices.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBucklingStiffnessWarpIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBucklingStiffnessWarpIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBucklingStiffnessWarpIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessWarpIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcc,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBucklingStiffnessWarpIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_res20 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                            (param_1,iVar1,&param_1->LowValueArray);
    if (fVar5 <= local_res20) {
      local_res20 = fVar5;
    }
    if (fVar5 <= fVar17) {
      fVar17 = fVar5;
    }
    if (local_res20 <= 0.0) {
      local_res20 = 0.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fStackX_24 = fVar17;
    if (((this->XPBDAnisoBucklingStiffnessWarpIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessWarpIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcc,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBucklingStiffnessWarpIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange = local_res20;
      *(float *)&(this->BucklingStiffnessWarp).MapView.OffsetRange.field_0x4 =
           fStackX_24 - local_res20;
    }
    else {
      if (((this->XPBDAnisoBucklingStiffnessWarpIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBucklingStiffnessWarpIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xcc,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBucklingStiffnessWarpIndex).Index,
                           &param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_1b8,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_358._8_8_ = (ulonglong)(uint)local_358._12_4_ << 0x20;
        local_358.DataPtr = (float *)0x0;
      }
      else {
        local_358.DataPtr = *(float **)&pTVar11->field_0x10;
        local_358._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      pFVar15 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                          (&local_140,(TVector<float,2> *)&local_res20,&local_358,pTVar14,(int)lVar4
                           ,iVar1,(void *)0x0);
      FPBDFlatWeightMap::operator=(&this->BucklingStiffnessWarp,pFVar15);
      if (local_140.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBucklingStiffnessWeftIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBucklingStiffnessWeftIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBucklingStiffnessWeftIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcd,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBucklingStiffnessWeftIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_3b8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar1,&param_1->LowValueArray);
    if (fVar5 <= local_3b8) {
      local_3b8 = fVar5;
    }
    if (fVar5 <= fVar17) {
      fVar17 = fVar5;
    }
    if (local_3b8 <= 0.0) {
      local_3b8 = 0.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fStack_3b4 = fVar17;
    if (((this->XPBDAnisoBucklingStiffnessWeftIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessWeftIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xcd,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBucklingStiffnessWeftIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange = local_3b8;
      *(float *)&(this->BucklingStiffnessWeft).MapView.OffsetRange.field_0x4 =
           fStack_3b4 - local_3b8;
    }
    else {
      if (((this->XPBDAnisoBucklingStiffnessWeftIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBucklingStiffnessWeftIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xcd,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBucklingStiffnessWeftIndex).Index,
                           &param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_1a8,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_348._8_8_ = (ulonglong)(uint)local_348._12_4_ << 0x20;
        local_348.DataPtr = (float *)0x0;
      }
      else {
        local_348.DataPtr = *(float **)&pTVar11->field_0x10;
        local_348._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      pFVar15 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                          (&local_110,(TVector<float,2> *)&local_3b8,&local_348,pTVar14,(int)lVar4,
                           iVar1,(void *)0x0);
      FPBDFlatWeightMap::operator=(&this->BucklingStiffnessWeft,pFVar15);
      if (local_110.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBucklingStiffnessBiasIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBucklingStiffnessBiasIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBucklingStiffnessBiasIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xce,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->XPBDAnisoBucklingStiffnessBiasIndex).Index;
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_3b0 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,iVar1,&param_1->LowValueArray);
    if (fVar5 <= local_3b0) {
      local_3b0 = fVar5;
    }
    if (fVar5 <= fVar17) {
      fVar17 = fVar5;
    }
    if (local_3b0 <= 0.0) {
      local_3b0 = 0.0;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    fStack_3ac = fVar17;
    if (((this->XPBDAnisoBucklingStiffnessBiasIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBucklingStiffnessBiasIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xce,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBucklingStiffnessBiasIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange = local_3b0;
      *(float *)&(this->BucklingStiffnessBias).MapView.OffsetRange.field_0x4 =
           fStack_3ac - local_3b0;
    }
    else {
      if (((this->XPBDAnisoBucklingStiffnessBiasIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBucklingStiffnessBiasIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xce,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBucklingStiffnessBiasIndex).Index,
                           &param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_198,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_338._8_8_ = (ulonglong)(uint)local_338._12_4_ << 0x20;
        local_338.DataPtr = (float *)0x0;
      }
      else {
        local_338.DataPtr = *(float **)&pTVar11->field_0x10;
        local_338._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      pFVar15 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                          (&local_e0,(TVector<float,2> *)&local_3b0,&local_338,pTVar14,(int)lVar4,
                           iVar1,(void *)0x0);
      FPBDFlatWeightMap::operator=(&this->BucklingStiffnessBias,pFVar15);
      if (local_e0.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.MapValues.AllocatorInstance.Data);
      }
    }
  }
  iVar1 = (this->XPBDAnisoBendingDampingIndex).Index;
  if (((iVar1 != -1) &&
      (EVar7 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar16), (EVar7 & Animatable) != None)) &&
     (EVar7 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->XPBDAnisoBendingDampingIndex).Index,pTVar16),
     (char)EVar7 < '\0')) {
    if (((this->XPBDAnisoBendingDampingIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xca,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_3a8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (param_1,(this->XPBDAnisoBendingDampingIndex).Index,
                           &param_1->LowValueArray);
    if (__real_447a0000 <= local_3a8) {
      local_3a8 = __real_447a0000;
    }
    if (local_3a8 <= 0.0) {
      local_3a8 = 0.0;
    }
    fStack_3a4 = local_3a8;
    if (((this->XPBDAnisoBendingDampingIndex).Index == -1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("XPBDAnisoBendingDampingIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                           ,0xca,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar7 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->XPBDAnisoBendingDampingIndex).Index,pTVar16);
    if ((EVar7 & StringDirty) == None) {
      *(float *)&(this->DampingRatio).MapView.OffsetRange = local_3a8;
      *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 = fStack_3a4 - local_3a8;
    }
    else {
      if (((this->XPBDAnisoBendingDampingIndex).Index == -1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("XPBDAnisoBendingDampingIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDAnisotropicBendingConstraints.h"
                             ,0xca,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                          (param_1,(this->XPBDAnisoBendingDampingIndex).Index,
                           &param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar4 = this->_padding_;
      pTVar14 = TArrayView<Chaos::TVector<int,2>_const_,int>::
                TArrayView<Chaos::TVector<int,2>_const_,int><TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_&,TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>_>
                          (&local_188,
                           (TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      pTVar11 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_2,pFVar10);
      if (pTVar11 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_328._8_8_ = (ulonglong)(uint)local_328._12_4_ << 0x20;
        local_328.DataPtr = (float *)0x0;
      }
      else {
        local_328.DataPtr = *(float **)&pTVar11->field_0x10;
        local_328._8_8_ = *(undefined8 *)&pTVar11->field_0x18;
      }
      pFVar15 = FPBDFlatWeightMap::FPBDFlatWeightMap<2>
                          (local_b0,(TVector<float,2> *)&local_3a8,&local_328,pTVar14,(int)lVar4,
                           iVar1,(void *)0x0);
      FPBDFlatWeightMap::operator=(&this->DampingRatio,pFVar15);
      if (local_b0[0].MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0[0].MapValues.AllocatorInstance.Data);
      }
    }
  }
  return;
}

