// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 41

// Apply<Chaos::Softs::FSolverParticles> @ 143ee6e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  TVector<float,2> *pTVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring> FVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  float *pfVar24;
  longlong lVar25;
  char cVar26;
  char cVar27;
  float *pfVar28;
  float *pfVar29;
  TVector<float,2> *pTVar30;
  char cVar31;
  longlong *plVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  FName local_3e0;
  TVector<float,2> *local_3d8;
  TVector<float,2> *local_3d0;
  float *local_3c8;
  float *local_3c0;
  TVector<float,2> *local_3b8;
  FName local_3b0;
  float *local_3a8;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_390;
  float local_38c;
  float local_388;
  FName local_380;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  FXPBDAnisotropicAxialSpringConstraints *local_328;
  FSolverParticles *local_320;
  float local_318;
  int local_314;
  char local_310;
  undefined4 local_30c;
  char local_308;
  undefined4 local_304;
  char local_300;
  undefined4 local_2fc;
  char local_2f8;
  float local_2f4;
  FXPBDAnisotropicAxialSpringConstraints *local_2f0;
  FSolverParticles *local_2e8;
  float local_2e0;
  int local_2dc;
  char local_2d8;
  undefined4 local_2d4;
  char local_2d0;
  undefined4 local_2cc;
  char local_2c8;
  undefined4 local_2c4;
  char local_2c0;
  float local_2bc;
  FXPBDAnisotropicAxialSpringConstraints *local_2b8;
  FSolverParticles *local_2b0;
  float local_2a8;
  int local_2a4;
  char local_2a0;
  undefined4 local_29c;
  char local_298;
  undefined4 local_294;
  char local_290;
  undefined4 local_28c;
  char local_288;
  float local_284;
  FXPBDAnisotropicAxialSpringConstraints *local_280;
  FSolverParticles *local_278;
  float local_270;
  int local_26c;
  char local_268;
  undefined4 local_264;
  char local_260;
  undefined4 local_25c;
  char local_258;
  undefined4 local_254;
  char local_250;
  float local_24c;
  FXPBDAnisotropicAxialSpringConstraints *local_248;
  FSolverParticles *local_240;
  float local_238;
  int local_234;
  char local_230;
  undefined4 local_22c;
  char local_228;
  undefined4 local_224;
  char local_220;
  undefined4 local_21c;
  char local_218;
  float local_214;
  FXPBDAnisotropicAxialSpringConstraints *local_210;
  FSolverParticles *local_208;
  float local_200;
  int local_1fc;
  char local_1f8;
  undefined4 local_1f4;
  char local_1f0;
  undefined4 local_1ec;
  char local_1e8;
  undefined4 local_1e4;
  char local_1e0;
  float local_1dc;
  FXPBDAnisotropicAxialSpringConstraints *local_1d8;
  FSolverParticles *local_1d0;
  float local_1c8;
  int local_1c4;
  char local_1c0;
  undefined4 local_1bc;
  char local_1b8;
  undefined4 local_1b4;
  char local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  FXPBDAnisotropicAxialSpringConstraints **local_1a0;
  code *local_198;
  FXPBDAnisotropicAxialSpringConstraints **local_190;
  code *local_188;
  FXPBDAnisotropicAxialSpringConstraints **local_180;
  code *local_178;
  FXPBDAnisotropicAxialSpringConstraints **local_170;
  code *local_168;
  FXPBDAnisotropicAxialSpringConstraints **local_160;
  code *local_158;
  FXPBDAnisotropicAxialSpringConstraints **local_150;
  code *local_148;
  FXPBDAnisotropicAxialSpringConstraints **local_140;
  FName local_138;
  TArrayView<float_const_,int> local_130;
  TArrayView<float_const_,int> local_120;
  float *local_110;
  undefined8 uStack_108;
  float *local_100;
  undefined8 uStack_f8;
  float *local_f0;
  undefined8 uStack_e8;
  
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId1538,"FXPBDAnisotropicAxialSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x602);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId1538);
  }
  pfVar28 = (float *)0x0;
  FVar17 = StatPtr_STAT_XPBD_AnisoSpring;
  if (StatPtr_STAT_XPBD_AnisoSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)0x0) {
    pFVar16 = ::FName::FName(&local_138,"STAT_XPBD_AnisoSpring");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoSpring,*pFVar16,
                        L"Chaos XPBD Anisotropic Spring Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_3e0 = *(FName *)FVar17;
  bVar9 = false;
  bVar10 = false;
  local_380.ComparisonIndex.Value = 0;
  local_380.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((local_3e0.ComparisonIndex.Value.Value == 0) && (local_3e0.Number == 0)) {
LAB_143ee7043:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_3e0 = local_380;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3b8 = (TVector<float,2> *)((ulonglong)local_3b8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3b8,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3b0 = local_3e0;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3b0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                   ,0x603);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ee7043;
    FThreadStats::AddMessage(local_3e0,CycleScopeStart);
    bVar11 = true;
  }
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar27 = '\0';
  }
  else {
    cVar27 = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar31 = '\0';
  }
  else {
    cVar31 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar26 = '\0';
  }
  else {
    cVar26 = '\x01';
  }
  iVar21 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar32 = &this->_padding_;
  if ((iVar21 < 2) || ((int)*plVar32 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    pTVar1 = &(this->StiffnessBias).MapView.OffsetRange;
    local_3b8 = &(this->DampingRatio).MapView.OffsetRange;
    fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    fVar34 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    fVar6 = *(float *)pTVar1;
    fVar39 = *(float *)local_3b8;
    if ((0.0 < fVar39) || (cVar26 != '\0')) {
      local_3b0 = (FName)&(this->StiffnessBias).MapView.OffsetRange;
      local_3b8 = &(this->DampingRatio).MapView.OffsetRange;
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (0 < (int)*plVar32)) {
        do {
          iVar21 = (int)pfVar28;
          fVar37 = fVar2;
          if (cVar27 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar21);
            fVar37 = fVar37 * *pfVar28 + fVar35;
          }
          fVar35 = fVar34;
          if (cVar31 != '\0') {
            fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar21);
            fVar35 = fVar35 * *pfVar28 + fVar38;
          }
          fVar38 = fVar6;
          if (cVar18 != '\0') {
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar21);
            fVar38 = fVar38 * *pfVar28 + fVar36;
          }
          fVar36 = fVar39;
          if (cVar26 != '\0') {
            fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar21);
            fVar36 = fVar36 * *pfVar28 + fVar7;
          }
          local_364 = fVar35;
          local_360 = fVar37;
          local_35c = fVar38;
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_364,fVar36);
          pfVar28 = (float *)(ulonglong)(iVar21 + 1U);
        } while ((int)(iVar21 + 1U) < (int)*plVar32);
      }
      local_3b8 = &(this->DampingRatio).MapView.OffsetRange;
      pTVar1 = local_3b8;
      local_3d0 = &(this->StiffnessWeft).MapView.OffsetRange;
      local_3d8 = &(this->StiffnessWarp).MapView.OffsetRange;
      pTVar30 = &(this->StiffnessBias).MapView.OffsetRange;
      plVar32 = &this->_padding_;
      iVar21 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar32 < 1) goto LAB_143ee9173;
        do {
          fVar37 = fVar2;
          if (cVar27 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)local_3d8;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar21);
            fVar37 = fVar37 * *pfVar28 + fVar35;
          }
          fVar35 = fVar34;
          if (cVar31 != '\0') {
            fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)local_3d0;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar21);
            fVar35 = fVar35 * *pfVar28 + fVar38;
          }
          fVar38 = fVar6;
          if (cVar18 != '\0') {
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)pTVar30;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar21);
            fVar38 = fVar38 * *pfVar28 + fVar36;
          }
          fVar36 = fVar39;
          if (cVar26 != '\0') {
            fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)pTVar1;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar21);
            fVar36 = fVar36 * *pfVar28 + fVar7;
          }
          local_334 = fVar35;
          local_330 = fVar37;
          local_32c = fVar38;
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_334,fVar36);
          iVar15 = (int)*plVar32;
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar32 < 1) goto LAB_143ee9173;
        do {
          fVar37 = fVar2;
          if (cVar27 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)local_3d8;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar21);
            fVar37 = fVar37 * *pfVar28 + fVar35;
          }
          fVar35 = fVar34;
          if (cVar31 != '\0') {
            fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)local_3d0;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar21);
            fVar35 = fVar35 * *pfVar28 + fVar38;
          }
          fVar38 = fVar6;
          if (cVar18 != '\0') {
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)pTVar30;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar21);
            fVar38 = fVar38 * *pfVar28 + fVar36;
          }
          fVar36 = fVar39;
          if (cVar26 != '\0') {
            fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)pTVar1;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar21);
            fVar36 = fVar36 * *pfVar28 + fVar7;
          }
          local_340 = fVar35;
          local_33c = fVar37;
          local_338 = fVar38;
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_340,fVar36);
          iVar15 = (int)*plVar32;
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar15 = (int)*plVar32;
        if (0 < iVar15) {
          do {
            fVar37 = fVar2;
            if (cVar27 != '\0') {
              fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar35 = *(float *)local_3d8;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar21);
              fVar37 = fVar37 * *pfVar28 + fVar35;
            }
            fVar35 = fVar34;
            if (cVar31 != '\0') {
              fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar38 = *(float *)local_3d0;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar21);
              fVar35 = fVar35 * *pfVar28 + fVar38;
            }
            fVar38 = fVar6;
            if (cVar18 != '\0') {
              fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar36 = *(float *)pTVar30;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar21);
              fVar38 = fVar38 * *pfVar28 + fVar36;
            }
            fVar36 = fVar39;
            if (cVar26 != '\0') {
              fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar7 = *(float *)pTVar1;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar21);
              fVar36 = fVar36 * *pfVar28 + fVar7;
            }
            local_34c = fVar35;
            local_348 = fVar37;
            local_344 = fVar38;
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_34c,fVar36);
            iVar15 = (int)*plVar32;
            iVar21 = iVar21 + 1;
          } while (iVar21 < iVar15);
        }
      }
      else {
        iVar15 = (int)this->_padding_;
        if (0 < iVar15) {
          do {
            fVar37 = fVar2;
            if (cVar27 != '\0') {
              fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar35 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar21);
              fVar37 = fVar37 * *pfVar28 + fVar35;
            }
            fVar35 = fVar34;
            if (cVar31 != '\0') {
              fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar38 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar21);
              fVar35 = fVar35 * *pfVar28 + fVar38;
            }
            fVar38 = fVar6;
            if (cVar18 != '\0') {
              fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar21);
              fVar38 = fVar38 * *pfVar28 + fVar36;
            }
            fVar36 = fVar39;
            if (cVar26 != '\0') {
              fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar28 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar21);
              fVar36 = fVar36 * *pfVar28 + fVar7;
            }
            local_358 = fVar35;
            local_354 = fVar37;
            local_350 = fVar38;
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_358,fVar36);
            iVar15 = (int)this->_padding_;
            iVar21 = iVar21 + 1;
          } while (iVar21 < iVar15);
        }
      }
      iVar21 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (0 < iVar15)) {
        do {
          fVar37 = fVar2;
          if (cVar27 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar21);
            fVar37 = fVar37 * *pfVar28 + fVar35;
          }
          fVar35 = fVar34;
          if (cVar31 != '\0') {
            fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar21);
            fVar35 = fVar35 * *pfVar28 + fVar38;
          }
          fVar38 = fVar6;
          if (cVar18 != '\0') {
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar36 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar21);
            fVar38 = fVar38 * *pfVar28 + fVar36;
          }
          fVar36 = fVar39;
          if (cVar26 != '\0') {
            fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar21);
            fVar36 = fVar36 * *pfVar28 + fVar7;
          }
          local_390 = fVar35;
          local_38c = fVar37;
          local_388 = fVar38;
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_390,fVar36);
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)this->_padding_);
      }
    }
    else {
      local_3b0 = (FName)pTVar1;
      if (0 < (int)*plVar32) {
        do {
          iVar21 = (int)pfVar28;
          fVar39 = fVar2;
          if (cVar27 != '\0') {
            fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar21);
            fVar39 = fVar39 * *pfVar28 + fVar37;
          }
          fVar37 = fVar34;
          if (cVar31 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar35 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar21);
            fVar37 = fVar37 * *pfVar28 + fVar35;
          }
          fVar35 = fVar6;
          if (cVar18 != '\0') {
            fVar35 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)pTVar1;
            pfVar28 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar21);
            fVar35 = fVar35 * *pfVar28 + fVar38;
          }
          local_370 = fVar37;
          local_36c = fVar39;
          local_368 = fVar35;
          ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar21,(TVector<float,3> *)&local_370,0.0);
          pfVar28 = (float *)(ulonglong)(iVar21 + 1U);
        } while ((int)(iVar21 + 1U) < (int)*plVar32);
      }
    }
    goto LAB_143ee9173;
  }
  iVar21 = iVar21 + -1;
  lVar25 = (longlong)iVar21;
  uVar14 = 0;
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar2 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar3 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
    uVar4 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
    uVar5 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    if ((0.0 < fVar2) || (cVar26 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) &&
         (pfVar24 = pfVar28, pfVar29 = pfVar28, 0 < iVar21)) {
        do {
          uVar19 = (uint)pfVar29;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar24 * 4);
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          local_190 = &local_328;
          local_198 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
                      ::Call;
          local_328 = this;
          local_320 = param_1;
          local_318 = param_2;
          local_314 = iVar21;
          local_310 = cVar27;
          local_30c = uVar3;
          local_308 = cVar31;
          local_304 = uVar4;
          local_300 = cVar18;
          local_2fc = uVar5;
          local_2f8 = cVar26;
          local_2f4 = fVar2;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar24 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_198,false);
          pfVar24 = (float *)((longlong)pfVar24 + 1);
          pfVar29 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar24 < lVar25);
      }
      uVar13 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        pfVar24 = pfVar28;
        pfVar29 = pfVar28;
        if (lVar25 < 1) goto LAB_143ee9173;
        do {
          uVar19 = (uint)pfVar29;
          uVar14 = uVar13;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar24 * 4);
          uVar14 = uVar13;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          local_150 = &local_248;
          local_158 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
                      ::Call;
          local_248 = this;
          local_240 = param_1;
          local_238 = param_2;
          local_234 = iVar21;
          local_230 = cVar27;
          local_22c = uVar3;
          local_228 = cVar31;
          local_224 = uVar4;
          local_220 = cVar18;
          local_21c = uVar5;
          local_218 = cVar26;
          local_214 = fVar2;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar24 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_158,false);
          pfVar24 = (float *)((longlong)pfVar24 + 1);
          pfVar29 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar24 < lVar25);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        pfVar24 = pfVar28;
        pfVar29 = pfVar28;
        if (lVar25 < 1) goto LAB_143ee9173;
        do {
          uVar19 = (uint)pfVar29;
          uVar14 = uVar13;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar24 * 4);
          uVar14 = uVar13;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          local_160 = &local_280;
          local_168 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
                      ::Call;
          local_280 = this;
          local_278 = param_1;
          local_270 = param_2;
          local_26c = iVar21;
          local_268 = cVar27;
          local_264 = uVar3;
          local_260 = cVar31;
          local_25c = uVar4;
          local_258 = cVar18;
          local_254 = uVar5;
          local_250 = cVar26;
          local_24c = fVar2;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar24 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_168,false);
          pfVar24 = (float *)((longlong)pfVar24 + 1);
          pfVar29 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar24 < lVar25);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        pfVar24 = pfVar28;
        pfVar29 = pfVar28;
        if (lVar25 < 1) goto LAB_143ee9173;
        do {
          uVar20 = (uint)pfVar29;
          uVar19 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar19 = ~uVar20 >> 0x1f;
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
          uVar20 = uVar20 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar24 * 4);
          uVar19 = uVar13;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar19 = ~uVar20 >> 0x1f;
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
          local_170 = &local_2b8;
          local_178 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
                      ::Call;
          local_2b8 = this;
          local_2b0 = param_1;
          local_2a8 = param_2;
          local_2a4 = iVar21;
          local_2a0 = cVar27;
          local_29c = uVar3;
          local_298 = cVar31;
          local_294 = uVar4;
          local_290 = cVar18;
          local_28c = uVar5;
          local_288 = cVar26;
          local_284 = fVar2;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar24 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_178,false);
          pfVar24 = (float *)((longlong)pfVar24 + 1);
          pfVar29 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar24 < lVar25);
      }
      else {
        pfVar24 = pfVar28;
        pfVar29 = pfVar28;
        if (0 < lVar25) {
          do {
            uVar20 = (uint)pfVar29;
            uVar19 = uVar14;
            if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
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
            uVar20 = uVar20 + 1;
            iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar24 * 4);
            uVar19 = uVar14;
            if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar19 = ~uVar20 >> 0x1f;
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
            local_180 = &local_2f0;
            local_188 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
                        ::Call;
            local_2f0 = this;
            local_2e8 = param_1;
            local_2e0 = param_2;
            local_2dc = iVar21;
            local_2d8 = cVar27;
            local_2d4 = uVar3;
            local_2d0 = cVar31;
            local_2cc = uVar4;
            local_2c8 = cVar18;
            local_2c4 = uVar5;
            local_2c0 = cVar26;
            local_2bc = fVar2;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar24 * 4 + 4) - iVar21,
                               (TFunctionRef<void___cdecl(int)> *)&local_188,false);
            pfVar24 = (float *)((longlong)pfVar24 + 1);
            pfVar29 = (float *)(ulonglong)uVar20;
          } while ((longlong)pfVar24 < lVar25);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (pfVar24 = pfVar28, 0 < lVar25)) {
        do {
          uVar19 = (uint)pfVar24;
          uVar14 = uVar13;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar14 = 0;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
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
          local_140 = &local_210;
          local_148 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
                      ::Call;
          local_210 = this;
          local_208 = param_1;
          local_200 = param_2;
          local_1fc = iVar21;
          local_1f8 = cVar27;
          local_1f4 = uVar3;
          local_1f0 = cVar31;
          local_1ec = uVar4;
          local_1e8 = cVar18;
          local_1e4 = uVar5;
          local_1e0 = cVar26;
          local_1dc = fVar2;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_148,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar24 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar28 < lVar25);
      }
    }
    else {
      pfVar24 = pfVar28;
      if (0 < iVar21) {
        do {
          uVar19 = (uint)pfVar24;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          local_1a0 = &local_1d8;
          local_1a8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
                      ::Call;
          local_1d8 = this;
          local_1d0 = param_1;
          local_1c8 = param_2;
          local_1c4 = iVar21;
          local_1c0 = cVar27;
          local_1bc = uVar3;
          local_1b8 = cVar31;
          local_1b4 = uVar4;
          local_1b0 = cVar18;
          local_1ac = uVar5;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar21,
                             (TFunctionRef<void___cdecl(int)> *)&local_1a8,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar24 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar28 < lVar25);
      }
    }
    goto LAB_143ee9173;
  }
  if (((cVar27 == '\0') && (cVar31 == '\0')) && (cVar18 == '\0')) {
    if (cVar26 == '\0') {
      local_3a0 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_39c = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_398 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar2 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((local_3a0 <= local_39c) || (fVar34 = local_3a0, local_3a0 <= local_398)) &&
         (fVar34 = local_398, local_398 <= local_39c)) {
        fVar34 = local_39c;
      }
      if (fVar34 <= 0.0) goto LAB_143ee9173;
      pfVar24 = pfVar28;
      if (fVar2 <= 0.0) {
LAB_143ee749c:
        if (lVar25 < 1) goto LAB_143ee9173;
      }
      else {
        if (Chaos_XPBDSpring_SplitDampingMode == 0) {
          if (0 < lVar25) {
            do {
              uVar19 = (uint)pfVar24;
              uVar13 = 0;
              if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar13 = ~uVar19 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar19 = uVar19 + 1;
              iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar28 * 4);
              lVar22 = (longlong)iVar21;
              uVar13 = uVar14;
              if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar13 = ~uVar19 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              ApplyXPBDAnisoAxialSpringConstraintsWithDamping
                        (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                         this->_padding_ + lVar22 * 0xc,this->_padding_ + lVar22 * 4,
                         this->_padding_ + lVar22 * 4,
                         (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
                         (this->LambdasDamping).AllocatorInstance.Data + lVar22 * 4,param_2,
                         &local_3a0,fVar2,
                         *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                 (longlong)pfVar28 * 4 + 4) - iVar21);
              pfVar28 = (float *)((longlong)pfVar28 + 1);
              pfVar24 = (float *)(ulonglong)uVar19;
            } while ((longlong)pfVar28 < lVar25);
          }
          goto LAB_143ee9173;
        }
        pfVar29 = pfVar28;
        pfVar23 = pfVar28;
        if (lVar25 < 1) goto LAB_143ee749c;
        do {
          uVar19 = (uint)pfVar23;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          uVar19 = uVar19 + 1;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar29 * 4);
          lVar22 = (longlong)iVar21;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          ApplyXPBDAnisoAxialSpringDampingConstraints
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar22 * 0xc,this->_padding_ + lVar22 * 4,
                     this->_padding_ + lVar22 * 4,
                     (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
                     (this->LambdasDamping).AllocatorInstance.Data + lVar22 * 4,param_2,&local_3a0,
                     fVar2,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pfVar29 * 4 + 4) - iVar21);
          pfVar29 = (float *)((longlong)pfVar29 + 1);
          pfVar23 = (float *)(ulonglong)uVar19;
        } while ((longlong)pfVar29 < lVar25);
      }
      do {
        uVar19 = (uint)pfVar24;
        uVar13 = uVar14;
        if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar19 = uVar19 + 1;
        iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)pfVar28 * 4);
        lVar22 = (longlong)iVar21;
        uVar13 = uVar14;
        if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar13 = ~uVar19 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ApplyXPBDAnisoAxialSpringConstraints
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar22 * 0xc,
                   this->_padding_ + lVar22 * 4,this->_padding_ + lVar22 * 4,
                   (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
                   (this->Lambdas).AllocatorInstance.Data + lVar22 * 4,param_2,&local_3a0,
                   *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4 + 4) - iVar21);
        pfVar28 = (float *)((longlong)pfVar28 + 1);
        pfVar24 = (float *)(ulonglong)uVar19;
      } while ((longlong)pfVar28 < lVar25);
      goto LAB_143ee9173;
    }
LAB_143ee760b:
    if (Chaos_XPBDSpring_SplitDampingMode == 0) {
      if (0 < lVar25) {
        local_3c0 = (float *)0x0;
        pfVar24 = pfVar28;
        do {
          uVar19 = (uint)pfVar24;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          uVar19 = uVar19 + 1;
          pfVar24 = (float *)(ulonglong)uVar19;
          iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_3c0 * 4);
          lVar22 = (longlong)iVar21;
          uVar13 = uVar14;
          if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar13 = ~uVar19 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_3c0 * 4 + 4);
          if (cVar26 == '\0') {
            local_3d0 = (TVector<float,2> *)0x0;
          }
          else {
            local_130.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_130.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_130._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_3d0 = (TVector<float,2> *)
                        TArrayView<float_const_,int>::operator[](&local_130,iVar21);
          }
          if (cVar18 == '\0') {
            local_3a8 = (float *)0x0;
          }
          else {
            local_3a8 = (this->StiffnessBias).MapView.MapValues.DataPtr + lVar22;
          }
          pfVar29 = pfVar28;
          if (cVar31 != '\0') {
            pfVar29 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar22;
          }
          pfVar23 = pfVar28;
          if (cVar27 != '\0') {
            pfVar23 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar22;
          }
          ApplyXPBDAnisoAxialSpringConstraintsWithDampingAndWeightMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar22 * 0xc,this->_padding_ + lVar22 * 4,
                     this->_padding_ + lVar22 * 4,
                     (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
                     (this->LambdasDamping).AllocatorInstance.Data + lVar22 * 4,param_2,cVar27,
                     &(this->StiffnessWarp).MapView.OffsetRange,pfVar23,cVar31,
                     &(this->StiffnessWeft).MapView.OffsetRange,pfVar29,cVar18,
                     &(this->StiffnessBias).MapView.OffsetRange,local_3a8,cVar26,
                     &(this->DampingRatio).MapView.OffsetRange,local_3d0,iVar15 - iVar21);
          local_3c0 = (float *)((longlong)local_3c0 + 1);
        } while ((longlong)local_3c0 < lVar25);
      }
      goto LAB_143ee9173;
    }
    if (lVar25 < 1) goto LAB_143ee7ad9;
    local_3c8 = (float *)0x0;
    pfVar24 = pfVar28;
    do {
      uVar19 = (uint)pfVar24;
      uVar13 = uVar14;
      if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = uVar19 + 1;
      pfVar24 = (float *)(ulonglong)uVar19;
      iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_3c8 * 4);
      lVar22 = (longlong)iVar21;
      uVar13 = uVar14;
      if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_3c8 * 4 + 4);
      if (cVar26 == '\0') {
        local_3c0 = (float *)0x0;
      }
      else {
        local_120.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_120.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_120._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_3c0 = TArrayView<float_const_,int>::operator[](&local_120,iVar21);
      }
      if (cVar18 == '\0') {
        local_3a8 = (float *)0x0;
      }
      else {
        local_110 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_108 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        local_3a8 = local_110 + lVar22;
      }
      pfVar29 = pfVar28;
      if (cVar31 != '\0') {
        pfVar29 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar22;
      }
      pfVar23 = pfVar28;
      if (cVar27 != '\0') {
        local_100 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_f8 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        pfVar23 = local_100 + lVar22;
      }
      ApplyXPBDAnisoAxialSpringDampingConstraintsWithWeightMaps
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                 this->_padding_ + lVar22 * 0xc,this->_padding_ + lVar22 * 4,
                 this->_padding_ + lVar22 * 4,
                 (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
                 (this->LambdasDamping).AllocatorInstance.Data + lVar22 * 4,param_2,cVar27,
                 &(this->StiffnessWarp).MapView.OffsetRange,pfVar23,cVar31,
                 &(this->StiffnessWeft).MapView.OffsetRange,pfVar29,cVar18,
                 &(this->StiffnessBias).MapView.OffsetRange,local_3a8,cVar26,
                 &(this->DampingRatio).MapView.OffsetRange,local_3c0,iVar15 - iVar21);
      local_3c8 = (float *)((longlong)local_3c8 + 1);
    } while ((longlong)local_3c8 < lVar25);
  }
  else {
    if ((cVar26 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143ee760b;
LAB_143ee7ad9:
    if (lVar25 < 1) goto LAB_143ee9173;
  }
  pfVar24 = pfVar28;
  pfVar29 = pfVar28;
  do {
    uVar19 = (uint)pfVar24;
    uVar13 = uVar14;
    if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar19 = uVar19 + 1;
    pfVar24 = (float *)(ulonglong)uVar19;
    iVar21 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pfVar29 * 4);
    lVar22 = (longlong)iVar21;
    uVar13 = uVar14;
    if ((int)uVar19 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar13 = ~uVar19 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (cVar18 == '\0') {
      local_3c8 = (float *)0x0;
    }
    else {
      local_f0 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_e8 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_3c8 = local_f0 + lVar22;
    }
    if (cVar31 == '\0') {
      local_3c0 = (float *)0x0;
    }
    else {
      local_3c0 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar22;
    }
    pfVar23 = pfVar28;
    if (cVar27 != '\0') {
      pfVar23 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar22;
    }
    ApplyXPBDAnisoAxialSpringConstraintsWithWeightMaps
              (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar22 * 0xc,
               this->_padding_ + lVar22 * 4,this->_padding_ + lVar22 * 4,
               (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar22 * 0xc,
               (this->Lambdas).AllocatorInstance.Data + lVar22 * 4,param_2,cVar27,
               &(this->StiffnessWarp).MapView.OffsetRange,pfVar23,cVar31,
               &(this->StiffnessWeft).MapView.OffsetRange,local_3c0,cVar18,
               &(this->StiffnessBias).MapView.OffsetRange,local_3c8,
               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pfVar29 * 4 + 4) - iVar21);
    pfVar29 = (float *)((longlong)pfVar29 + 1);
  } while ((longlong)pfVar29 < lVar25);
LAB_143ee9173:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(local_3e0,CycleScopeEnd);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143eef520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          )

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  TVector<float,3> *pTVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring> FVar20;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar21;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar22;
  float *pfVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  char cVar28;
  char cVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  TVector<float,2> *pTVar33;
  char cVar34;
  longlong *plVar35;
  int iVar36;
  longlong lVar37;
  ulonglong uVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  TVector<float,2> *local_res8;
  TVector<float,2> *local_4a0;
  FName local_498;
  TVector<float,2> *local_490;
  float *local_488;
  float *local_480;
  float *local_470;
  float *local_468;
  float *local_460;
  FColor_u_0 local_458 [2];
  float local_450;
  float local_44c;
  float local_448;
  FName local_440;
  FName local_438;
  float local_428;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  FScriptContainerElement *local_3d0;
  FXPBDAnisotropicAxialSpringConstraints *local_3c8;
  FSolverParticlesRange *local_3c0;
  float local_3b8;
  int local_3b4;
  char local_3b0;
  undefined4 local_3ac;
  char local_3a8;
  undefined4 local_3a4;
  char local_3a0;
  undefined4 local_39c;
  char local_398;
  float local_394;
  FXPBDAnisotropicAxialSpringConstraints *local_390;
  FSolverParticlesRange *local_388;
  float local_380;
  int local_37c;
  char local_378;
  undefined4 local_374;
  char local_370;
  undefined4 local_36c;
  char local_368;
  undefined4 local_364;
  char local_360;
  float local_35c;
  FXPBDAnisotropicAxialSpringConstraints *local_358;
  FSolverParticlesRange *local_350;
  float local_348;
  int local_344;
  char local_340;
  undefined4 local_33c;
  char local_338;
  undefined4 local_334;
  char local_330;
  undefined4 local_32c;
  char local_328;
  float local_324;
  FXPBDAnisotropicAxialSpringConstraints *local_320;
  FSolverParticlesRange *local_318;
  float local_310;
  int local_30c;
  char local_308;
  undefined4 local_304;
  char local_300;
  undefined4 local_2fc;
  char local_2f8;
  undefined4 local_2f4;
  char local_2f0;
  float local_2ec;
  FXPBDAnisotropicAxialSpringConstraints *local_2e8;
  FSolverParticlesRange *local_2e0;
  float local_2d8;
  int local_2d4;
  char local_2d0;
  undefined4 local_2cc;
  char local_2c8;
  undefined4 local_2c4;
  char local_2c0;
  undefined4 local_2bc;
  char local_2b8;
  float local_2b4;
  FXPBDAnisotropicAxialSpringConstraints *local_2b0;
  FSolverParticlesRange *local_2a8;
  float local_2a0;
  int local_29c;
  char local_298;
  undefined4 local_294;
  char local_290;
  undefined4 local_28c;
  char local_288;
  undefined4 local_284;
  char local_280;
  float local_27c;
  FXPBDAnisotropicAxialSpringConstraints *local_278;
  FSolverParticlesRange *local_270;
  float local_268;
  int local_264;
  char local_260;
  undefined4 local_25c;
  char local_258;
  undefined4 local_254;
  char local_250;
  undefined4 local_24c;
  code *local_248;
  FXPBDAnisotropicAxialSpringConstraints **local_240;
  code *local_238;
  FXPBDAnisotropicAxialSpringConstraints **local_230;
  code *local_228;
  FXPBDAnisotropicAxialSpringConstraints **local_220;
  code *local_218;
  FXPBDAnisotropicAxialSpringConstraints **local_210;
  code *local_208;
  FXPBDAnisotropicAxialSpringConstraints **local_200;
  code *local_1f8;
  FXPBDAnisotropicAxialSpringConstraints **local_1f0;
  code *local_1e8;
  FXPBDAnisotropicAxialSpringConstraints **local_1e0;
  FName local_1d8;
  TArrayView<float_const_,int> local_1d0;
  TArrayView<float_const_,int> local_1c0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1b0;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1a0;
  float *local_190;
  undefined8 uStack_188;
  float *local_180;
  undefined8 uStack_178;
  TArrayView<Chaos::TVector<float,3>,int> local_170;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_160;
  float *local_150;
  undefined8 uStack_148;
  TArrayView<Chaos::TVector<float,3>,int> local_140;
  TArrayView<Chaos::TVector<float,3>,int> local_130;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_120;
  TArrayView<Chaos::TVector<float,3>,int> local_110;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_100;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f0 [11];
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId1538,"FXPBDAnisotropicAxialSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x602);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId1538);
  }
  uVar31 = 0;
  FVar20 = StatPtr_STAT_XPBD_AnisoSpring;
  if (StatPtr_STAT_XPBD_AnisoSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)0x0) {
    pFVar19 = ::FName::FName(&local_1d8,"STAT_XPBD_AnisoSpring");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoSpring,*pFVar19,
                        L"Chaos XPBD Anisotropic Spring Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_498 = *(FName *)FVar20;
  bVar14 = false;
  bVar15 = false;
  local_438.ComparisonIndex.Value = 0;
  local_438.Number = 0;
  bVar16 = false;
  bVar17 = false;
  if ((local_498.ComparisonIndex.Value.Value == 0) && (local_498.Number == 0)) {
LAB_143eef6e7:
    bVar15 = bVar17;
    bVar14 = bVar16;
    bVar16 = false;
    local_498 = local_438;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_458[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_458[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar14 = false;
      bVar15 = true;
      bVar16 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_440.ComparisonIndex.Value = local_498.ComparisonIndex.Value.Value;
        local_440.Number = local_498.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_440,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                   ,0x603);
        bVar14 = true;
        bVar15 = true;
        bVar16 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143eef6e7;
    FThreadStats::AddMessage(local_498,CycleScopeStart);
    bVar16 = true;
  }
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar29 = '\0';
  }
  else {
    cVar29 = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar28 = '\0';
  }
  else {
    cVar28 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar34 = '\0';
  }
  else {
    cVar34 = '\x01';
  }
  iVar36 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar35 = &this->_padding_;
  if ((iVar36 < 2) || ((int)*plVar35 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    fVar1 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    fVar5 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
    fVar45 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    if ((0.0 < fVar45) || (cVar34 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (0 < (int)*plVar35)) {
        do {
          iVar36 = (int)uVar31;
          fVar43 = fVar1;
          if (cVar29 != '\0') {
            fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar36);
            fVar43 = fVar43 * *pfVar23 + fVar41;
          }
          fVar41 = fVar40;
          if (cVar24 != '\0') {
            fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar44 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar36);
            fVar41 = fVar41 * *pfVar23 + fVar44;
          }
          fVar44 = fVar5;
          if (cVar28 != '\0') {
            fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar42 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar36);
            fVar44 = fVar44 * *pfVar23 + fVar42;
          }
          fVar42 = fVar45;
          if (cVar34 != '\0') {
            fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar36);
            fVar42 = fVar42 * *pfVar23 + fVar6;
          }
          local_41c = fVar41;
          local_418 = fVar43;
          local_414 = fVar44;
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_41c,fVar42);
          uVar31 = (ulonglong)(iVar36 + 1U);
        } while ((int)(iVar36 + 1U) < (int)*plVar35);
      }
      local_490 = &(this->StiffnessWeft).MapView.OffsetRange;
      local_4a0 = &(this->DampingRatio).MapView.OffsetRange;
      local_res8 = &(this->StiffnessWarp).MapView.OffsetRange;
      pTVar33 = &(this->StiffnessBias).MapView.OffsetRange;
      plVar35 = &this->_padding_;
      iVar36 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar35 < 1) goto LAB_143ef19cb;
        do {
          fVar43 = fVar1;
          if (cVar29 != '\0') {
            fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)local_res8;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar36);
            fVar43 = fVar43 * *pfVar23 + fVar41;
          }
          fVar41 = fVar40;
          if (cVar24 != '\0') {
            fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar44 = *(float *)local_490;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar36);
            fVar41 = fVar41 * *pfVar23 + fVar44;
          }
          fVar44 = fVar5;
          if (cVar28 != '\0') {
            fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar42 = *(float *)pTVar33;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar36);
            fVar44 = fVar44 * *pfVar23 + fVar42;
          }
          fVar42 = fVar45;
          if (cVar34 != '\0') {
            fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)local_4a0;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar36);
            fVar42 = fVar42 * *pfVar23 + fVar6;
          }
          local_3ec = fVar41;
          local_3e8 = fVar43;
          local_3e4 = fVar44;
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_3ec,fVar42);
          iVar18 = (int)*plVar35;
          iVar36 = iVar36 + 1;
        } while (iVar36 < iVar18);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar35 < 1) goto LAB_143ef19cb;
        do {
          fVar43 = fVar1;
          if (cVar29 != '\0') {
            fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)local_res8;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar36);
            fVar43 = fVar43 * *pfVar23 + fVar41;
          }
          fVar41 = fVar40;
          if (cVar24 != '\0') {
            fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar44 = *(float *)local_490;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar36);
            fVar41 = fVar41 * *pfVar23 + fVar44;
          }
          fVar44 = fVar5;
          if (cVar28 != '\0') {
            fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar42 = *(float *)pTVar33;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar36);
            fVar44 = fVar44 * *pfVar23 + fVar42;
          }
          fVar42 = fVar45;
          if (cVar34 != '\0') {
            fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)local_4a0;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar36);
            fVar42 = fVar42 * *pfVar23 + fVar6;
          }
          local_3f8 = fVar41;
          local_3f4 = fVar43;
          local_3f0 = fVar44;
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_3f8,fVar42);
          iVar18 = (int)*plVar35;
          iVar36 = iVar36 + 1;
        } while (iVar36 < iVar18);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar18 = (int)*plVar35;
        if (0 < iVar18) {
          do {
            fVar43 = fVar1;
            if (cVar29 != '\0') {
              fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar41 = *(float *)local_res8;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar36);
              fVar43 = fVar43 * *pfVar23 + fVar41;
            }
            fVar41 = fVar40;
            if (cVar24 != '\0') {
              fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar44 = *(float *)local_490;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar36);
              fVar41 = fVar41 * *pfVar23 + fVar44;
            }
            fVar44 = fVar5;
            if (cVar28 != '\0') {
              fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar42 = *(float *)pTVar33;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar36);
              fVar44 = fVar44 * *pfVar23 + fVar42;
            }
            fVar42 = fVar45;
            if (cVar34 != '\0') {
              fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar6 = *(float *)local_4a0;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar36);
              fVar42 = fVar42 * *pfVar23 + fVar6;
            }
            local_404 = fVar41;
            local_400 = fVar43;
            local_3fc = fVar44;
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_404,fVar42);
            iVar18 = (int)*plVar35;
            iVar36 = iVar36 + 1;
          } while (iVar36 < iVar18);
        }
      }
      else {
        iVar18 = (int)this->_padding_;
        if (0 < iVar18) {
          do {
            fVar43 = fVar1;
            if (cVar29 != '\0') {
              fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar41 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar36);
              fVar43 = fVar43 * *pfVar23 + fVar41;
            }
            fVar41 = fVar40;
            if (cVar24 != '\0') {
              fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar44 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar36);
              fVar41 = fVar41 * *pfVar23 + fVar44;
            }
            fVar44 = fVar5;
            if (cVar28 != '\0') {
              fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar42 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar36);
              fVar44 = fVar44 * *pfVar23 + fVar42;
            }
            fVar42 = fVar45;
            if (cVar34 != '\0') {
              fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar23 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar36);
              fVar42 = fVar42 * *pfVar23 + fVar6;
            }
            local_410 = fVar41;
            local_40c = fVar43;
            local_408 = fVar44;
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_410,fVar42);
            iVar18 = (int)this->_padding_;
            iVar36 = iVar36 + 1;
          } while (iVar36 < iVar18);
        }
      }
      iVar36 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (0 < iVar18)) {
        do {
          fVar43 = fVar1;
          if (cVar29 != '\0') {
            fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar36);
            fVar43 = fVar43 * *pfVar23 + fVar41;
          }
          fVar41 = fVar40;
          if (cVar24 != '\0') {
            fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar44 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar36);
            fVar41 = fVar41 * *pfVar23 + fVar44;
          }
          fVar44 = fVar5;
          if (cVar28 != '\0') {
            fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar42 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar36);
            fVar44 = fVar44 * *pfVar23 + fVar42;
          }
          fVar42 = fVar45;
          if (cVar34 != '\0') {
            fVar42 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar23 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar36);
            fVar42 = fVar42 * *pfVar23 + fVar6;
          }
          local_3e0 = fVar41;
          local_3dc = fVar43;
          local_3d8 = fVar44;
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_3e0,fVar42);
          iVar36 = iVar36 + 1;
        } while (iVar36 < (int)this->_padding_);
      }
    }
    else if (0 < (int)*plVar35) {
      do {
        iVar36 = (int)uVar31;
        fVar45 = fVar1;
        if (cVar29 != '\0') {
          fVar45 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar43 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWarp).MapView.MapValues,iVar36);
          fVar45 = fVar45 * *pfVar23 + fVar43;
        }
        fVar43 = fVar40;
        if (cVar24 != '\0') {
          fVar43 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar41 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWeft).MapView.MapValues,iVar36);
          fVar43 = fVar43 * *pfVar23 + fVar41;
        }
        fVar41 = fVar5;
        if (cVar28 != '\0') {
          fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
          fVar44 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
          pfVar23 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessBias).MapView.MapValues,iVar36);
          fVar41 = fVar41 * *pfVar23 + fVar44;
        }
        local_428 = fVar43;
        local_424 = fVar45;
        local_420 = fVar41;
        ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                  (this,param_1,param_2,iVar36,(TVector<float,3> *)&local_428,0.0);
        uVar31 = (ulonglong)(iVar36 + 1U);
      } while ((int)(iVar36 + 1U) < (int)*plVar35);
    }
    goto LAB_143ef19cb;
  }
  iVar36 = iVar36 + -1;
  lVar30 = (longlong)iVar36;
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar1 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar2 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
    uVar3 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
    uVar4 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    uVar26 = 0;
    if ((0.0 < fVar1) || (cVar34 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (uVar32 = uVar31, uVar38 = uVar31, 0 < iVar36)
         ) {
        do {
          uVar27 = (uint)uVar38;
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_220 = &local_390;
          local_228 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
                      ::Call;
          local_390 = this;
          local_388 = param_1;
          local_380 = param_2;
          local_37c = iVar36;
          local_378 = cVar29;
          local_374 = uVar2;
          local_370 = cVar24;
          local_36c = uVar3;
          local_368 = cVar28;
          local_364 = uVar4;
          local_360 = cVar34;
          local_35c = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_228,false);
          uVar32 = uVar32 + 1;
          uVar38 = (ulonglong)uVar27;
        } while ((longlong)uVar32 < lVar30);
      }
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        uVar32 = uVar31;
        uVar38 = uVar31;
        if (lVar30 < 1) goto LAB_143ef19cb;
        do {
          uVar27 = (uint)uVar38;
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_1e0 = &local_2b0;
          local_1e8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
                      ::Call;
          local_2b0 = this;
          local_2a8 = param_1;
          local_2a0 = param_2;
          local_29c = iVar36;
          local_298 = cVar29;
          local_294 = uVar2;
          local_290 = cVar24;
          local_28c = uVar3;
          local_288 = cVar28;
          local_284 = uVar4;
          local_280 = cVar34;
          local_27c = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_1e8,false);
          uVar32 = uVar32 + 1;
          uVar38 = (ulonglong)uVar27;
        } while ((longlong)uVar32 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        uVar32 = uVar31;
        uVar38 = uVar31;
        if (lVar30 < 1) goto LAB_143ef19cb;
        do {
          uVar27 = (uint)uVar38;
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_1f0 = &local_2e8;
          local_1f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
                      ::Call;
          local_2e8 = this;
          local_2e0 = param_1;
          local_2d8 = param_2;
          local_2d4 = iVar36;
          local_2d0 = cVar29;
          local_2cc = uVar2;
          local_2c8 = cVar24;
          local_2c4 = uVar3;
          local_2c0 = cVar28;
          local_2bc = uVar4;
          local_2b8 = cVar34;
          local_2b4 = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_1f8,false);
          uVar32 = uVar32 + 1;
          uVar38 = (ulonglong)uVar27;
        } while ((longlong)uVar32 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        uVar32 = uVar31;
        uVar38 = uVar31;
        if (lVar30 < 1) goto LAB_143ef19cb;
        do {
          uVar27 = (uint)uVar38;
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar32 * 4);
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_200 = &local_320;
          local_208 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
                      ::Call;
          local_320 = this;
          local_318 = param_1;
          local_310 = param_2;
          local_30c = iVar36;
          local_308 = cVar29;
          local_304 = uVar2;
          local_300 = cVar24;
          local_2fc = uVar3;
          local_2f8 = cVar28;
          local_2f4 = uVar4;
          local_2f0 = cVar34;
          local_2ec = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar32 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_208,false);
          uVar32 = uVar32 + 1;
          uVar38 = (ulonglong)uVar27;
        } while ((longlong)uVar32 < lVar30);
      }
      else {
        uVar32 = uVar31;
        uVar38 = uVar31;
        if (0 < lVar30) {
          do {
            uVar27 = (uint)uVar38;
            uVar25 = uVar26;
            if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar25 = ~uVar27 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            uVar27 = uVar27 + 1;
            iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar32 * 4);
            uVar25 = uVar26;
            if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar25 = ~uVar27 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_210 = &local_358;
            local_218 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
                        ::Call;
            local_358 = this;
            local_350 = param_1;
            local_348 = param_2;
            local_344 = iVar36;
            local_340 = cVar29;
            local_33c = uVar2;
            local_338 = cVar24;
            local_334 = uVar3;
            local_330 = cVar28;
            local_32c = uVar4;
            local_328 = cVar34;
            local_324 = fVar1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar32 * 4 + 4) - iVar36,
                               (TFunctionRef<void___cdecl(int)> *)&local_218,false);
            uVar32 = uVar32 + 1;
            uVar38 = (ulonglong)uVar27;
          } while ((longlong)uVar32 < lVar30);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (uVar32 = uVar31, 0 < lVar30)) {
        do {
          uVar27 = (uint)uVar32;
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar31 * 4);
          uVar25 = 0;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_240 = &local_3c8;
          local_248 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
                      ::Call;
          local_3c8 = this;
          local_3c0 = param_1;
          local_3b8 = param_2;
          local_3b4 = iVar36;
          local_3b0 = cVar29;
          local_3ac = uVar2;
          local_3a8 = cVar24;
          local_3a4 = uVar3;
          local_3a0 = cVar28;
          local_39c = uVar4;
          local_398 = cVar34;
          local_394 = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar31 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_248,false);
          uVar31 = uVar31 + 1;
          uVar32 = (ulonglong)uVar27;
        } while ((longlong)uVar31 < lVar30);
      }
    }
    else {
      uVar32 = uVar31;
      if (0 < iVar36) {
        do {
          uVar27 = (uint)uVar32;
          uVar25 = 0;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar27 = uVar27 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar31 * 4);
          uVar25 = uVar26;
          if ((int)uVar27 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_230 = &local_278;
          local_238 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
                      ::Call;
          local_278 = this;
          local_270 = param_1;
          local_268 = param_2;
          local_264 = iVar36;
          local_260 = cVar29;
          local_25c = uVar2;
          local_258 = cVar24;
          local_254 = uVar3;
          local_250 = cVar28;
          local_24c = uVar4;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar31 * 4 + 4) - iVar36,
                             (TFunctionRef<void___cdecl(int)> *)&local_238,false);
          uVar31 = uVar31 + 1;
          uVar32 = (ulonglong)uVar27;
        } while ((longlong)uVar31 < lVar30);
      }
    }
    goto LAB_143ef19cb;
  }
  if (((cVar29 == '\0') && (cVar24 == '\0')) && (cVar28 == '\0')) {
    if (cVar34 == '\0') {
      local_450 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_44c = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_448 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar1 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((local_450 <= local_44c) || (fVar40 = local_450, local_450 <= local_448)) &&
         (fVar40 = local_448, local_448 <= local_44c)) {
        fVar40 = local_44c;
      }
      if (fVar40 <= 0.0) goto LAB_143ef19cb;
      if (fVar1 <= 0.0) {
LAB_143eefbfd:
        if (lVar30 < 1) goto LAB_143ef19cb;
      }
      else {
        if (Chaos_XPBDSpring_SplitDampingMode == 0) {
          if (0 < lVar30) {
            local_4a0 = (TVector<float,2> *)0x0;
            do {
              uVar25 = (uint)uVar31;
              uVar26 = 0;
              if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              uVar25 = uVar25 + 1;
              iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)local_4a0 * 4);
              lVar37 = (longlong)iVar36;
              uVar26 = 0;
              if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
              iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)local_4a0 * 4 + 4);
              pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
              lVar9 = this->_padding_;
              lVar10 = this->_padding_;
              lVar11 = this->_padding_;
              pTVar21 = FSolverParticlesRange::XArray(param_1,&local_130);
              pTVar12 = pTVar21->DataPtr;
              pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,&local_120);
              ApplyXPBDAnisoAxialSpringConstraintsWithDamping
                        (pTVar22->DataPtr,pTVar12,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,
                         lVar9 + lVar37 * 4,pFVar8 + lVar37 * 0xc,pFVar7 + lVar37 * 4,param_2,
                         &local_450,fVar1,iVar18 - iVar36);
              uVar31 = (ulonglong)uVar25;
              local_4a0 = (TVector<float,2> *)((longlong)local_4a0 + 1);
            } while ((longlong)local_4a0 < lVar30);
          }
          goto LAB_143ef19cb;
        }
        if (lVar30 < 1) goto LAB_143eefbfd;
        local_4a0 = (TVector<float,2> *)0x0;
        do {
          uVar25 = (uint)uVar31;
          uVar26 = 0;
          if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar25 = uVar25 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_4a0 * 4);
          lVar37 = (longlong)iVar36;
          uVar26 = 0;
          if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
          iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_4a0 * 4 + 4);
          pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          lVar9 = this->_padding_;
          lVar10 = this->_padding_;
          lVar11 = this->_padding_;
          pTVar21 = FSolverParticlesRange::XArray(param_1,&local_110);
          pTVar12 = pTVar21->DataPtr;
          pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,&local_100);
          ApplyXPBDAnisoAxialSpringDampingConstraints
                    (pTVar22->DataPtr,pTVar12,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,
                     lVar9 + lVar37 * 4,pFVar8 + lVar37 * 0xc,pFVar7 + lVar37 * 4,param_2,&local_450
                     ,fVar1,iVar18 - iVar36);
          uVar31 = (ulonglong)uVar25;
          local_4a0 = (TVector<float,2> *)((longlong)local_4a0 + 1);
        } while ((longlong)local_4a0 < lVar30);
      }
      uVar26 = 0;
      local_4a0 = (TVector<float,2> *)0x0;
      do {
        uVar25 = 0;
        if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar26 = uVar26 + 1;
        iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)local_4a0 * 4);
        lVar37 = (longlong)iVar36;
        uVar25 = 0;
        if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)local_4a0 * 4 + 4);
        pFVar7 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
        lVar9 = this->_padding_;
        lVar10 = this->_padding_;
        lVar11 = this->_padding_;
        pFVar8 = (this->Lambdas).AllocatorInstance.Data;
        pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1b0);
        ApplyXPBDAnisoAxialSpringConstraints
                  (pTVar22->DataPtr,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,lVar9 + lVar37 * 4,
                   pFVar7 + lVar37 * 0xc,pFVar8 + lVar37 * 4,param_2,&local_450,iVar18 - iVar36);
        local_4a0 = (TVector<float,2> *)((longlong)local_4a0 + 1);
      } while ((longlong)local_4a0 < lVar30);
      goto LAB_143ef19cb;
    }
LAB_143eefd9c:
    if (Chaos_XPBDSpring_SplitDampingMode == 0) {
      if (0 < lVar30) {
        local_488 = (float *)0x0;
        do {
          uVar25 = (uint)uVar31;
          uVar26 = 0;
          if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar25 = uVar25 + 1;
          iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_488 * 4);
          lVar37 = (longlong)iVar36;
          uVar26 = 0;
          if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar26 = ~uVar25 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_488 * 4 + 4);
          if (cVar34 == '\0') {
            local_4a0 = (TVector<float,2> *)0x0;
          }
          else {
            local_1d0.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_1d0.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_1d0._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_4a0 = (TVector<float,2> *)
                        TArrayView<float_const_,int>::operator[](&local_1d0,iVar36);
          }
          if (cVar28 == '\0') {
            local_460 = (float *)0x0;
          }
          else {
            local_460 = (this->StiffnessBias).MapView.MapValues.DataPtr + lVar37;
          }
          if (cVar24 == '\0') {
            local_470 = (float *)0x0;
          }
          else {
            local_470 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar37;
          }
          if (cVar29 == '\0') {
            local_468 = (float *)0x0;
          }
          else {
            local_468 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar37;
          }
          pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
          pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          lVar9 = this->_padding_;
          lVar10 = this->_padding_;
          lVar11 = this->_padding_;
          pTVar21 = FSolverParticlesRange::XArray(param_1,&local_140);
          pTVar12 = pTVar21->DataPtr;
          pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1a0);
          ApplyXPBDAnisoAxialSpringConstraintsWithDampingAndWeightMaps
                    (pTVar22->DataPtr,pTVar12,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,
                     lVar9 + lVar37 * 4,pFVar8 + lVar37 * 0xc,pFVar7 + lVar37 * 4,param_2,cVar29,
                     &(this->StiffnessWarp).MapView.OffsetRange,local_468,cVar24,
                     &(this->StiffnessWeft).MapView.OffsetRange,local_470,cVar28,
                     &(this->StiffnessBias).MapView.OffsetRange,local_460,cVar34,
                     &(this->DampingRatio).MapView.OffsetRange,local_4a0,iVar18 - iVar36);
          uVar31 = (ulonglong)uVar25;
          local_488 = (float *)((longlong)local_488 + 1);
        } while ((longlong)local_488 < lVar30);
      }
      goto LAB_143ef19cb;
    }
    if (lVar30 < 1) goto LAB_143ef02f0;
    local_480 = (float *)0x0;
    do {
      uVar25 = (uint)uVar31;
      uVar26 = 0;
      if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar25 = uVar25 + 1;
      iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_480 * 4);
      lVar37 = (longlong)iVar36;
      uVar26 = 0;
      if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar26 = ~uVar25 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_480 * 4 + 4);
      if (cVar34 == '\0') {
        local_488 = (float *)0x0;
      }
      else {
        local_1c0.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_1c0.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_1c0._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_488 = TArrayView<float_const_,int>::operator[](&local_1c0,iVar36);
      }
      if (cVar28 == '\0') {
        local_468 = (float *)0x0;
      }
      else {
        local_190 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_188 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        local_468 = local_190 + lVar37;
      }
      if (cVar24 == '\0') {
        local_470 = (float *)0x0;
      }
      else {
        local_470 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar37;
      }
      if (cVar29 == '\0') {
        local_460 = (float *)0x0;
      }
      else {
        local_180 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_178 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        local_460 = local_180 + lVar37;
      }
      local_3d0 = (this->LambdasDamping).AllocatorInstance.Data + lVar37 * 4;
      pFVar7 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar9 = this->_padding_;
      lVar10 = this->_padding_;
      lVar11 = this->_padding_;
      pTVar21 = FSolverParticlesRange::XArray(param_1,&local_170);
      pTVar12 = pTVar21->DataPtr;
      pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,&local_160);
      ApplyXPBDAnisoAxialSpringDampingConstraintsWithWeightMaps
                (pTVar22->DataPtr,pTVar12,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,
                 lVar9 + lVar37 * 4,pFVar7 + lVar37 * 0xc,local_3d0,param_2,cVar29,
                 &(this->StiffnessWarp).MapView.OffsetRange,local_460,cVar24,
                 &(this->StiffnessWeft).MapView.OffsetRange,local_470,cVar28,
                 &(this->StiffnessBias).MapView.OffsetRange,local_468,cVar34,
                 &(this->DampingRatio).MapView.OffsetRange,local_488,iVar18 - iVar36);
      uVar31 = (ulonglong)uVar25;
      local_480 = (float *)((longlong)local_480 + 1);
    } while ((longlong)local_480 < lVar30);
  }
  else {
    if ((cVar34 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143eefd9c;
LAB_143ef02f0:
    if (lVar30 < 1) goto LAB_143ef19cb;
  }
  uVar26 = 0;
  local_470 = (float *)0x0;
  do {
    uVar25 = 0;
    if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar26 = uVar26 + 1;
    iVar36 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_470 * 4);
    lVar37 = (longlong)iVar36;
    uVar25 = 0;
    if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    iVar18 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_470 * 4 + 4);
    if (cVar28 == '\0') {
      local_480 = (float *)0x0;
    }
    else {
      local_150 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_148 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_480 = local_150 + lVar37;
    }
    if (cVar24 == '\0') {
      local_488 = (float *)0x0;
    }
    else {
      local_488 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar37;
    }
    if (cVar29 == '\0') {
      local_468 = (float *)0x0;
    }
    else {
      local_468 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar37;
    }
    pFVar7 = (this->Lambdas).AllocatorInstance.Data;
    pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    lVar11 = this->_padding_;
    pTVar22 = FSolverParticlesRange::GetPAndInvM(param_1,local_f0);
    ApplyXPBDAnisoAxialSpringConstraintsWithWeightMaps
              (pTVar22->DataPtr,lVar11 + lVar37 * 0xc,lVar10 + lVar37 * 4,lVar9 + lVar37 * 4,
               pFVar8 + lVar37 * 0xc,pFVar7 + lVar37 * 4,param_2,cVar29,
               &(this->StiffnessWarp).MapView.OffsetRange,local_468,cVar24,
               &(this->StiffnessWeft).MapView.OffsetRange,local_488,cVar28,
               &(this->StiffnessBias).MapView.OffsetRange,local_480,iVar18 - iVar36);
    local_470 = (float *)((longlong)local_470 + 1);
  } while ((longlong)local_470 < lVar30);
LAB_143ef19cb:
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(local_498,CycleScopeEnd);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles> @ 143ef81f0

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TVector<float,3> local_b4;
  TVector<float,3> local_a8 [9];
  
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
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar14 * 0xc);
  iVar3 = *(int *)(this->_padding_ + lVar14 * 0xc);
  iVar4 = (pTVar1->field0_0x0)._s_0.Y;
  iVar5 = (pTVar1->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar10 = uVar13;
  }
  fVar15 = *(float *)(pFVar6 + lVar14 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar14 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar14 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
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
  fVar16 = *(float *)(this->_padding_ + lVar14 * 4);
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
  pTVar11 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (&local_b4,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       fVar16,(float *)(pFVar6 + lVar14 * 4),fVar15,param_5);
  fVar16 = *(float *)pTVar11;
  fVar17 = *(float *)&pTVar11->field_0x4;
  fVar18 = *(float *)&pTVar11->field_0x8;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
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
  fVar2 = *(float *)(this->_padding_ + lVar14 * 4);
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
  pTVar11 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       fVar2,(float *)(pFVar6 + lVar14 * 4),fVar15);
  fVar16 = fVar16 + *(float *)pTVar11;
  fVar17 = fVar17 + *(float *)&pTVar11->field_0x4;
  fVar18 = fVar18 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar15 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar3);
  *(float *)pTVar11 = fVar15 * fVar16 + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar15 * fVar17 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar15 * fVar18 + *(float *)&pTVar11->field_0x8;
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
  lVar7 = this->_padding_;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar15 = *(float *)(lVar7 + lVar14 * 4) * *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar16 * fVar15;
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar17 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar18 * fVar15;
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
  lVar7 = this->_padding_;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar15 = (__real_3f800000 - *(float *)(lVar7 + lVar14 * 4)) * *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar16 * fVar15;
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar17 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar18 * fVar15;
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143ef8b20

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar15 * 0xc);
  iVar3 = *(int *)(this->_padding_ + lVar15 * 0xc);
  iVar4 = (pTVar1->field0_0x0)._s_0.Y;
  iVar5 = (pTVar1->field0_0x0)._s_0.Z;
  uVar11 = uVar10;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar11 = uVar10;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar14;
  }
  fVar16 = *(float *)(pFVar6 + lVar15 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar15 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar15 * 0xc + 8) * *(float *)&param_4->field_0x8;
  if (uVar11 == 0) {
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
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
  fVar17 = *(float *)(this->_padding_ + lVar15 * 4);
  uVar10 = 0;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       fVar17,(float *)(pFVar6 + lVar15 * 4),fVar16,param_5);
  fVar17 = *(float *)pTVar12;
  fVar18 = *(float *)&pTVar12->field_0x4;
  fVar19 = *(float *)&pTVar12->field_0x8;
  uVar11 = uVar10;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  fVar2 = *(float *)(this->_padding_ + lVar15 * 4);
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       fVar2,(float *)(pFVar6 + lVar15 * 4),fVar16);
  fVar17 = fVar17 + *(float *)pTVar12;
  fVar18 = fVar18 + *(float *)&pTVar12->field_0x4;
  fVar19 = fVar19 + *(float *)&pTVar12->field_0x8;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar3);
  fVar16 = *pfVar13;
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar12 = fVar17 * fVar16 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar18 * fVar16 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar19 * fVar16 + *(float *)&pTVar12->field_0x8;
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
  lVar7 = this->_padding_;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar16 = *pfVar13 * *(float *)(lVar7 + lVar15 * 4);
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar16 * fVar17;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar16 * fVar18;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar16 * fVar19;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  lVar7 = this->_padding_;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar16 = (__real_3f800000 - *(float *)(lVar7 + lVar15 * 4)) * *pfVar13;
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar16 * fVar17;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar16 * fVar18;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar16 * fVar19;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles> @ 143ef9660

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  TVector<float,3> local_84 [6];
  
  lVar19 = (longlong)param_3;
  uVar18 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar19 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar19 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar11 + lVar19 * 0xc);
  fVar20 = *(float *)param_4;
  fVar5 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar15 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar19 * 4);
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar16 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_84,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar19 * 4),
                       fVar7,(float *)(pFVar11 + lVar19 * 4),
                       fVar2 * fVar3 + fVar4 * fVar20 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar16;
  fVar3 = *(float *)&pTVar16->field_0x4;
  fVar4 = *(float *)&pTVar16->field_0x8;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar20 = *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar16 = fVar20 * fVar2 + *(float *)pTVar16;
  *(float *)&pTVar16->field_0x4 = fVar20 * fVar3 + *(float *)&pTVar16->field_0x4;
  *(float *)&pTVar16->field_0x8 = fVar20 * fVar4 + *(float *)&pTVar16->field_0x8;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar20 = *(float *)(lVar12 + lVar19 * 4) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar10);
  fVar20 = (__real_3f800000 - *(float *)(lVar12 + lVar19 * 4)) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar10);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange> @ 143ef9d70

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector<float,3> *pTVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  TVector<float,3> local_a8 [9];
  
  lVar20 = (longlong)param_3;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar20 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar20 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar20 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)param_4;
  fVar21 = *(float *)(pFVar11 + lVar20 * 0xc);
  fVar5 = *(float *)(pFVar11 + lVar20 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar16 = 0;
  uVar15 = uVar16;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar20 * 4);
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar20 * 4),
                       fVar7,(float *)(pFVar11 + lVar20 * 4),
                       fVar2 * fVar3 + fVar4 * fVar21 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar17;
  fVar3 = *(float *)&pTVar17->field_0x4;
  fVar4 = *(float *)&pTVar17->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar21 = *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar17 = fVar21 * fVar2 + *(float *)pTVar17;
  *(float *)&pTVar17->field_0x4 = fVar21 * fVar3 + *(float *)&pTVar17->field_0x4;
  *(float *)&pTVar17->field_0x8 = fVar21 * fVar4 + *(float *)&pTVar17->field_0x8;
  if (param_3 < (int)this->_padding_) {
    uVar16 = uVar19;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar21 = *(float *)(lVar12 + lVar20 * 4) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar2 * fVar21;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar3 * fVar21;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar4 * fVar21;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar10);
  fVar21 = (__real_3f800000 - *(float *)(lVar12 + lVar20 * 4)) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar10);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar21 * fVar2;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar21 * fVar3;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar21 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles> @ 143efc940

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  TVector<float,3> local_84 [6];
  
  lVar19 = (longlong)param_3;
  uVar18 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar19 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar19 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar11 + lVar19 * 0xc);
  fVar20 = *(float *)param_4;
  fVar5 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar15 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->Lambdas).AllocatorInstance.Data;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar19 * 4);
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar16 = Spring::GetXPBDAxialSpringDeltaWithDamping<Chaos::Softs::FSolverParticles>
                      (local_84,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar19 * 4),
                       fVar7,(float *)(pFVar11 + lVar19 * 4),
                       fVar2 * fVar3 + fVar4 * fVar20 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar16;
  fVar3 = *(float *)&pTVar16->field_0x4;
  fVar4 = *(float *)&pTVar16->field_0x8;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar20 = *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar16 = fVar20 * fVar2 + *(float *)pTVar16;
  *(float *)&pTVar16->field_0x4 = fVar20 * fVar3 + *(float *)&pTVar16->field_0x4;
  *(float *)&pTVar16->field_0x8 = fVar20 * fVar4 + *(float *)&pTVar16->field_0x8;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar20 = *(float *)(lVar12 + lVar19 * 4) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar10);
  fVar20 = (__real_3f800000 - *(float *)(lVar12 + lVar19 * 4)) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar10);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange> @ 143efd050

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector<float,3> *pTVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  TVector<float,3> local_a8 [9];
  
  lVar20 = (longlong)param_3;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar20 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar20 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar20 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)param_4;
  fVar21 = *(float *)(pFVar11 + lVar20 * 0xc);
  fVar5 = *(float *)(pFVar11 + lVar20 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar16 = 0;
  uVar15 = uVar16;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->Lambdas).AllocatorInstance.Data;
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar20 * 4);
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = Spring::GetXPBDAxialSpringDeltaWithDamping<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar20 * 4),
                       fVar7,(float *)(pFVar11 + lVar20 * 4),
                       fVar2 * fVar3 + fVar4 * fVar21 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar17;
  fVar3 = *(float *)&pTVar17->field_0x4;
  fVar4 = *(float *)&pTVar17->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar21 = *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar17 = fVar21 * fVar2 + *(float *)pTVar17;
  *(float *)&pTVar17->field_0x4 = fVar21 * fVar3 + *(float *)&pTVar17->field_0x4;
  *(float *)&pTVar17->field_0x8 = fVar21 * fVar4 + *(float *)&pTVar17->field_0x8;
  if (param_3 < (int)this->_padding_) {
    uVar16 = uVar19;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar21 = *(float *)(lVar12 + lVar20 * 4) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar2 * fVar21;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar3 * fVar21;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar4 * fVar21;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar10);
  fVar21 = (__real_3f800000 - *(float *)(lVar12 + lVar20 * 4)) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar10);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar21 * fVar2;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar21 * fVar3;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar21 * fVar4;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles> @ 143eff690

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TVector<float,3> *pTVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  TVector<float,3> local_b4;
  TVector<float,3> local_a8 [9];
  
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
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar14 * 0xc);
  iVar3 = *(int *)(this->_padding_ + lVar14 * 0xc);
  iVar4 = (pTVar1->field0_0x0)._s_0.Y;
  iVar5 = (pTVar1->field0_0x0)._s_0.Z;
  uVar10 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar10 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar10 = uVar13;
  }
  fVar15 = *(float *)(pFVar6 + lVar14 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar14 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar14 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
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
  fVar16 = *(float *)(this->_padding_ + lVar14 * 4);
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
  pTVar11 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticles>
                      (&local_b4,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       fVar16,(float *)(pFVar6 + lVar14 * 4),fVar15);
  fVar16 = *(float *)pTVar11;
  fVar17 = *(float *)&pTVar11->field_0x4;
  fVar18 = *(float *)&pTVar11->field_0x8;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
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
  fVar2 = *(float *)(this->_padding_ + lVar14 * 4);
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
  pTVar11 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar14 * 4),
                       fVar2,(float *)(pFVar6 + lVar14 * 4),fVar15,param_5);
  fVar16 = fVar16 + *(float *)pTVar11;
  fVar17 = fVar17 + *(float *)&pTVar11->field_0x4;
  fVar18 = fVar18 + *(float *)&pTVar11->field_0x8;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar3);
  fVar15 = *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar3);
  *(float *)pTVar11 = fVar15 * fVar16 + *(float *)pTVar11;
  *(float *)&pTVar11->field_0x4 = fVar15 * fVar17 + *(float *)&pTVar11->field_0x4;
  *(float *)&pTVar11->field_0x8 = fVar15 * fVar18 + *(float *)&pTVar11->field_0x8;
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
  lVar7 = this->_padding_;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar15 = *(float *)(lVar7 + lVar14 * 4) * *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar16 * fVar15;
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar17 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar18 * fVar15;
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
  lVar7 = this->_padding_;
  pfVar12 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar15 = (__real_3f800000 - *(float *)(lVar7 + lVar14 * 4)) * *pfVar12;
  pTVar11 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar11 = *(float *)pTVar11 - fVar16 * fVar15;
  *(float *)&pTVar11->field_0x4 = *(float *)&pTVar11->field_0x4 - fVar17 * fVar15;
  *(float *)&pTVar11->field_0x8 = *(float *)&pTVar11->field_0x8 - fVar18 * fVar15;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange> @ 143efffc0

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  float *pfVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar15 = (longlong)param_3;
  uVar14 = (uint)~param_3 >> 0x1f;
  uVar10 = 0;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar15 * 0xc);
  iVar3 = *(int *)(this->_padding_ + lVar15 * 0xc);
  iVar4 = (pTVar1->field0_0x0)._s_0.Y;
  iVar5 = (pTVar1->field0_0x0)._s_0.Z;
  uVar11 = uVar10;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar11 = uVar10;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar11 = uVar14;
  }
  fVar16 = *(float *)(pFVar6 + lVar15 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar15 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar15 * 0xc + 8) * *(float *)&param_4->field_0x8;
  if (uVar11 == 0) {
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
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
  fVar17 = *(float *)(this->_padding_ + lVar15 * 4);
  uVar10 = 0;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       fVar17,(float *)(pFVar6 + lVar15 * 4),fVar16);
  fVar17 = *(float *)pTVar12;
  fVar18 = *(float *)&pTVar12->field_0x4;
  fVar19 = *(float *)&pTVar12->field_0x8;
  uVar11 = uVar10;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  fVar2 = *(float *)(this->_padding_ + lVar15 * 4);
  uVar11 = uVar10;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  pTVar12 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar15 * 4),
                       fVar2,(float *)(pFVar6 + lVar15 * 4),fVar16,param_5);
  fVar17 = fVar17 + *(float *)pTVar12;
  fVar18 = fVar18 + *(float *)&pTVar12->field_0x4;
  fVar19 = fVar19 + *(float *)&pTVar12->field_0x8;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar3);
  fVar16 = *pfVar13;
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar3);
  *(float *)pTVar12 = fVar17 * fVar16 + *(float *)pTVar12;
  *(float *)&pTVar12->field_0x4 = fVar18 * fVar16 + *(float *)&pTVar12->field_0x4;
  *(float *)&pTVar12->field_0x8 = fVar19 * fVar16 + *(float *)&pTVar12->field_0x8;
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
  lVar7 = this->_padding_;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar16 = *pfVar13 * *(float *)(lVar7 + lVar15 * 4);
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar16 * fVar17;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar16 * fVar18;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar16 * fVar19;
  uVar11 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
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
  lVar7 = this->_padding_;
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
  pfVar13 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar16 = (__real_3f800000 - *(float *)(lVar7 + lVar15 * 4)) * *pfVar13;
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
  pTVar12 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar12 = *(float *)pTVar12 - fVar16 * fVar17;
  *(float *)&pTVar12->field_0x4 = *(float *)&pTVar12->field_0x4 - fVar16 * fVar18;
  *(float *)&pTVar12->field_0x8 = *(float *)&pTVar12->field_0x8 - fVar16 * fVar19;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles> @ 143f00b00

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  TVector<float,3> local_84 [6];
  
  lVar19 = (longlong)param_3;
  uVar18 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar19 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar19 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar11 + lVar19 * 0xc);
  fVar20 = *(float *)param_4;
  fVar5 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar15 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->Lambdas).AllocatorInstance.Data;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar19 * 4);
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar16 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_84,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar19 * 4),
                       fVar7,(float *)(pFVar11 + lVar19 * 4),
                       fVar2 * fVar3 + fVar4 * fVar20 + fVar5 * fVar6);
  fVar2 = *(float *)pTVar16;
  fVar3 = *(float *)&pTVar16->field_0x4;
  fVar4 = *(float *)&pTVar16->field_0x8;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar20 = *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar16 = fVar20 * fVar2 + *(float *)pTVar16;
  *(float *)&pTVar16->field_0x4 = fVar20 * fVar3 + *(float *)&pTVar16->field_0x4;
  *(float *)&pTVar16->field_0x8 = fVar20 * fVar4 + *(float *)&pTVar16->field_0x8;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar20 = *(float *)(lVar12 + lVar19 * 4) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar10);
  fVar20 = (__real_3f800000 - *(float *)(lVar12 + lVar19 * 4)) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar10);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143f01200

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector<float,3> *pTVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  TVector<float,3> local_a8 [9];
  
  lVar20 = (longlong)param_3;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar20 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar20 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar20 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)param_4;
  fVar21 = *(float *)(pFVar11 + lVar20 * 0xc);
  fVar5 = *(float *)(pFVar11 + lVar20 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar16 = 0;
  uVar15 = uVar16;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->Lambdas).AllocatorInstance.Data;
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar20 * 4);
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = Spring::GetXPBDAxialSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar20 * 4),
                       fVar7,(float *)(pFVar11 + lVar20 * 4),
                       fVar2 * fVar3 + fVar4 * fVar21 + fVar5 * fVar6);
  fVar2 = *(float *)pTVar17;
  fVar3 = *(float *)&pTVar17->field_0x4;
  fVar4 = *(float *)&pTVar17->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar21 = *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar17 = fVar21 * fVar2 + *(float *)pTVar17;
  *(float *)&pTVar17->field_0x4 = fVar21 * fVar3 + *(float *)&pTVar17->field_0x4;
  *(float *)&pTVar17->field_0x8 = fVar21 * fVar4 + *(float *)&pTVar17->field_0x8;
  if (param_3 < (int)this->_padding_) {
    uVar16 = uVar19;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar21 = *(float *)(lVar12 + lVar20 * 4) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar2 * fVar21;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar3 * fVar21;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar4 * fVar21;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar10);
  fVar21 = (__real_3f800000 - *(float *)(lVar12 + lVar20 * 4)) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar10);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar21 * fVar2;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar21 * fVar3;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar21 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles> @ 143f01b30

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  TVector<float,3> *pTVar16;
  float *pfVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  TVector<float,3> local_84 [6];
  
  lVar19 = (longlong)param_3;
  uVar18 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar19 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar19 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar19 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar11 + lVar19 * 0xc);
  fVar20 = *(float *)param_4;
  fVar5 = *(float *)(pFVar11 + lVar19 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar15 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar19 * 4);
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar16 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_84,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar19 * 4),
                       fVar7,(float *)(pFVar11 + lVar19 * 4),
                       fVar2 * fVar3 + fVar4 * fVar20 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar16;
  fVar3 = *(float *)&pTVar16->field_0x4;
  fVar4 = *(float *)&pTVar16->field_0x8;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar20 = *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar16 = fVar20 * fVar2 + *(float *)pTVar16;
  *(float *)&pTVar16->field_0x4 = fVar20 * fVar3 + *(float *)&pTVar16->field_0x4;
  *(float *)&pTVar16->field_0x8 = fVar20 * fVar4 + *(float *)&pTVar16->field_0x8;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar20 = *(float *)(lVar12 + lVar19 * 4) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar18;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  pfVar17 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar10);
  fVar20 = (__real_3f800000 - *(float *)(lVar12 + lVar19 * 4)) * *pfVar17;
  pTVar16 = FSolverParticles::P(param_1,iVar10);
  *(float *)pTVar16 = *(float *)pTVar16 - fVar20 * fVar2;
  *(float *)&pTVar16->field_0x4 = *(float *)&pTVar16->field_0x4 - fVar20 * fVar3;
  *(float *)&pTVar16->field_0x8 = *(float *)&pTVar16->field_0x8 - fVar20 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange> @ 143f02240

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  TVector<float,3> *pTVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  TVector<float,3> local_a8 [9];
  
  lVar20 = (longlong)param_3;
  uVar19 = (uint)~param_3 >> 0x1f;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar1 = (TVector<int,3> *)(this->_padding_ + lVar20 * 0xc);
  iVar8 = *(int *)(this->_padding_ + lVar20 * 0xc);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  iVar10 = (pTVar1->field0_0x0)._s_0.Z;
  uVar15 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar11 + lVar20 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)param_4;
  fVar21 = *(float *)(pFVar11 + lVar20 * 0xc);
  fVar5 = *(float *)(pFVar11 + lVar20 * 0xc + 8);
  fVar6 = *(float *)&param_4->field_0x8;
  uVar16 = 0;
  uVar15 = uVar16;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  fVar7 = *(float *)(this->_padding_ + lVar20 * 4);
  uVar15 = uVar16;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = Spring::GetXPBDAxialSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar20 * 4),
                       fVar7,(float *)(pFVar11 + lVar20 * 4),
                       fVar2 * fVar3 + fVar4 * fVar21 + fVar5 * fVar6,param_5);
  fVar2 = *(float *)pTVar17;
  fVar3 = *(float *)&pTVar17->field_0x4;
  fVar4 = *(float *)&pTVar17->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar21 = *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar17 = fVar21 * fVar2 + *(float *)pTVar17;
  *(float *)&pTVar17->field_0x4 = fVar21 * fVar3 + *(float *)&pTVar17->field_0x4;
  *(float *)&pTVar17->field_0x8 = fVar21 * fVar4 + *(float *)&pTVar17->field_0x8;
  if (param_3 < (int)this->_padding_) {
    uVar16 = uVar19;
  }
  if (uVar16 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar21 = *(float *)(lVar12 + lVar20 * 4) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar2 * fVar21;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar3 * fVar21;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar4 * fVar21;
  uVar15 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar15 = uVar19;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar12 = this->_padding_;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pfVar18 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar10);
  fVar21 = (__real_3f800000 - *(float *)(lVar12 + lVar20 * 4)) * *pfVar18;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pTVar17 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar10);
  *(float *)pTVar17 = *(float *)pTVar17 - fVar21 * fVar2;
  *(float *)&pTVar17->field_0x4 = *(float *)&pTVar17->field_0x4 - fVar21 * fVar3;
  *(float *)&pTVar17->field_0x8 = *(float *)&pTVar17->field_0x8 - fVar21 * fVar4;
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f09bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_108 [2];
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> local_100;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  TArray<float,TSizedDefaultAllocator<32>_> local_d0;
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_88;
  FScriptContainerElement *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  int *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,3,0>
            (&local_88,(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_e0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_f0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_100,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  uVar19 = local_88.ArrayNum + 1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_60 = piVar21;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar21);
  }
  uVar13 = (ulonglong)local_88.ArrayNum;
  local_108[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_88.AllocatorInstance.Data + uVar13 * 0x10);
  local_90 = local_88.ArrayNum;
  FVar18.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    pTVar8 = local_58;
    pTVar14 = &this->ConstraintsPerColorStartIndex;
    plVar17 = &this->_padding_;
    local_70 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data;
    if (local_88.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar15 = (pTVar14->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar8) break;
    if ((pFVar15 <= (FScriptContainerElement *)local_108) &&
       ((FScriptContainerElement *)local_108 < pFVar15 + (longlong)*piVar21 * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar14->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar15 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_68 = pFVar15 + uVar13 * 4;
    while( true ) {
      pFVar7 = local_68;
      local_78 = pFVar15;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar15 == pFVar7) break;
      uVar19 = *(uint *)pFVar15;
      lVar22 = (longlong)(int)uVar19;
      uVar20 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar22 * 0xc);
      uVar5 = *(undefined4 *)(this->_padding_ + 8 + lVar22 * 0xc);
      uVar11 = 0;
      if ((int)local_108[0] < local_b0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar16 * 0xc) = uVar4;
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar16 * 0xc + 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_c0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_d0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_d0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->BaseDists).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_e0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_e0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar15 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)(pFVar15 + lVar22 * 0xc);
      uVar5 = *(undefined4 *)(pFVar15 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_108[0] < local_f0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar16 * 0xc) = uVar4;
      *(undefined4 *)(local_f0.AllocatorInstance.Data + lVar16 * 0xc + 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)
               ((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_108[0] < local_100.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar11 = local_108[0];
      *(undefined8 *)(local_100.AllocatorInstance.Data + lVar16 * 8) = uVar4;
      uVar12 = 0;
      if ((int)uVar19 < local_a0.ArrayNum) {
        uVar12 = uVar20;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_a0.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_108[0] = local_108[0] + 1;
      pFVar15 = local_78 + 4;
      FVar18.Data = (FScriptContainerElement *)local_70;
    }
    FVar18.Data = FVar18.Data + 0x10;
    uVar13 = (ulonglong)local_90;
    piVar21 = local_60;
  }
  if ((pFVar15 <= (FScriptContainerElement *)local_108) &&
     ((FScriptContainerElement *)local_108 < pFVar15 + (longlong)*piVar21 * 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar14->AllocatorInstance,piVar21);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0];
  if ((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)plVar17 != &local_b0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_b0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_b0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar17 != &local_c0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_c0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_c0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar17 != &local_d0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_d0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_d0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_d0.ArrayMax;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->BaseDists;
  if (pTVar1 != &local_e0) {
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar1->AllocatorInstance).Data = local_e0.AllocatorInstance.Data;
    (this->BaseDists).ArrayNum = local_e0.ArrayNum;
    (this->BaseDists).ArrayMax = local_e0.ArrayMax;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->WarpWeftBiasBaseMultipliers;
  if (pTVar2 != &local_f0) {
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar2->AllocatorInstance).Data = local_f0.AllocatorInstance.Data;
    (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_f0.ArrayNum;
    (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_f0.ArrayMax;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &this->WarpWeftScaleBaseMultipliers;
  if (pTVar3 != &local_100) {
    pFVar15 = (pTVar3->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar3->AllocatorInstance).Data = local_100.AllocatorInstance.Data;
    (this->WarpWeftScaleBaseMultipliers).ArrayNum = local_100.ArrayNum;
    (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_100.ArrayMax;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_a0);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWeft,&local_a0,(this->StiffnessWeft).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessBias,&local_a0,(this->StiffnessBias).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->DampingRatio,&local_a0,(this->DampingRatio).MapValues.ArrayNum);
  FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_a0);
  FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_a0);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
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
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f0c330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_108 [2];
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> local_100;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  TArray<float,TSizedDefaultAllocator<32>_> local_d0;
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_88;
  FScriptContainerElement *local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FScriptContainerElement *local_68;
  int *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,3,0>
            (&local_88,(TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_e0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_f0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_100,(int)this->_padding_,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  uVar19 = local_88.ArrayNum + 1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  local_60 = piVar21;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar19,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,piVar21);
  }
  uVar13 = (ulonglong)local_88.ArrayNum;
  local_108[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_88.AllocatorInstance.Data + uVar13 * 0x10);
  local_90 = local_88.ArrayNum;
  FVar18.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    pTVar8 = local_58;
    pTVar14 = &this->ConstraintsPerColorStartIndex;
    plVar17 = &this->_padding_;
    local_70 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data;
    if (local_88.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar15 = (pTVar14->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data == pTVar8) break;
    if ((pFVar15 <= (FScriptContainerElement *)local_108) &&
       ((FScriptContainerElement *)local_108 < pFVar15 + (longlong)*piVar21 * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar14->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar15 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->AllocatorInstance).Data;
    local_68 = pFVar15 + uVar13 * 4;
    while( true ) {
      pFVar7 = local_68;
      local_78 = pFVar15;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar18.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar15 == pFVar7) break;
      uVar19 = *(uint *)pFVar15;
      lVar22 = (longlong)(int)uVar19;
      uVar20 = ~uVar19 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)(this->_padding_ + lVar22 * 0xc);
      uVar5 = *(undefined4 *)(this->_padding_ + 8 + lVar22 * 0xc);
      uVar11 = 0;
      if ((int)local_108[0] < local_b0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)(local_b0.AllocatorInstance.Data + lVar16 * 0xc) = uVar4;
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar16 * 0xc + 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_c0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_d0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_d0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->BaseDists).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar5 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_108[0] < local_e0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined4 *)(local_e0.AllocatorInstance.Data + lVar16 * 4) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar15 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)(pFVar15 + lVar22 * 0xc);
      uVar5 = *(undefined4 *)(pFVar15 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_108[0] < local_f0.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined8 *)(local_f0.AllocatorInstance.Data + lVar16 * 0xc) = uVar4;
      *(undefined4 *)(local_f0.AllocatorInstance.Data + lVar16 * 0xc + 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar19 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar16 = (longlong)(int)local_108[0];
      uVar4 = *(undefined8 *)
               ((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_108[0] < local_100.ArrayNum) {
        uVar11 = ~local_108[0] >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar11 = local_108[0];
      *(undefined8 *)(local_100.AllocatorInstance.Data + lVar16 * 8) = uVar4;
      uVar12 = 0;
      if ((int)uVar19 < local_a0.ArrayNum) {
        uVar12 = uVar20;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_a0.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_108[0] = local_108[0] + 1;
      pFVar15 = local_78 + 4;
      FVar18.Data = (FScriptContainerElement *)local_70;
    }
    FVar18.Data = FVar18.Data + 0x10;
    uVar13 = (ulonglong)local_90;
    piVar21 = local_60;
  }
  if ((pFVar15 <= (FScriptContainerElement *)local_108) &&
     ((FScriptContainerElement *)local_108 < pFVar15 + (longlong)*piVar21 * 4)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if (iVar10 == *piVar21) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar14->AllocatorInstance,piVar21);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_108[0];
  if ((TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *)plVar17 != &local_b0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_b0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_b0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
    local_b0.ArrayNum = 0;
    local_b0.ArrayMax = 0;
    local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar17 != &local_c0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_c0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_c0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_c0.ArrayMax;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  plVar17 = &this->_padding_;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar17 != &local_d0) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_d0.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_d0.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_d0.ArrayMax;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar1 = &this->BaseDists;
  if (pTVar1 != &local_e0) {
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar1->AllocatorInstance).Data = local_e0.AllocatorInstance.Data;
    (this->BaseDists).ArrayNum = local_e0.ArrayNum;
    (this->BaseDists).ArrayMax = local_e0.ArrayMax;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->WarpWeftBiasBaseMultipliers;
  if (pTVar2 != &local_f0) {
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar2->AllocatorInstance).Data = local_f0.AllocatorInstance.Data;
    (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_f0.ArrayNum;
    (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_f0.ArrayMax;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  pTVar3 = &this->WarpWeftScaleBaseMultipliers;
  if (pTVar3 != &local_100) {
    pFVar15 = (pTVar3->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (pTVar3->AllocatorInstance).Data = local_100.AllocatorInstance.Data;
    (this->WarpWeftScaleBaseMultipliers).ArrayNum = local_100.ArrayNum;
    (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_100.ArrayMax;
    local_100.ArrayNum = 0;
    local_100.ArrayMax = 0;
    local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_a0);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessWeft,&local_a0,(this->StiffnessWeft).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->StiffnessBias,&local_a0,(this->StiffnessBias).MapValues.ArrayNum);
  FPBDFlatWeightMap::ReorderIndicesAndShrink
            (&this->DampingRatio,&local_a0,(this->DampingRatio).MapValues.ArrayNum);
  FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_a0);
  FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_a0);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
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
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data,
             local_88.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_88.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// FXPBDAnisotropicAxialSpringConstraints @ 143f10770

FXPBDAnisotropicAxialSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          bool param_6,bool param_7,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_8,float param_9,
          TArrayView<float_const_,int> *param_10,TArrayView<float_const_,int> *param_11,
          TArrayView<float_const_,int> *param_12,TArrayView<float_const_,int> *param_13,
          TArrayView<float_const_,int> *param_14,TArrayView<float_const_,int> *param_15,
          TVector<float,2> *param_16,TVector<float,2> *param_17,TVector<float,2> *param_18,
          TVector<float,2> *param_19,TVector<float,2> *param_20,TVector<float,2> *param_21)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  FTriangleMesh *pFVar5;
  TVector<float,2> *pTVar6;
  bool bVar7;
  FXPBDAnisotropicAxialSpringConstraints *pFVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_e8;
  TVector<float,2> local_e0;
  TVector<float,2> local_d8;
  TArrayView<float_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_80;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_70 [3];
  
  pTVar6 = param_16;
  pFVar5 = param_4;
  fVar4 = __real_4e6e6b28;
  local_d0.DataPtr = (float *)0x0;
  local_d0.ArrayNum = 0;
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,param_2,param_3,&param_4->MElements,
             &local_d0,param_16,true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicAxialSpringConstraints_Softs_Chaos__6B_;
  local_c0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_16._0_4_ = *(float *)pTVar6;
  if (fVar4 <= param_16._0_4_) {
    param_16._0_4_ = fVar4;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  param_16._4_4_ = *(float *)&pTVar6->field_0x4;
  if (fVar4 <= param_16._4_4_) {
    param_16._4_4_ = fVar4;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  param_4 = (FTriangleMesh *)CONCAT44(param_16._4_4_,param_16._0_4_);
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWarp,(TVector<float,2> *)&param_4,param_10,&local_c0,(int)lVar3,iVar1,
             (void *)0x0);
  local_b0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_b0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_b0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_16._0_4_ = *(float *)param_17;
  if (fVar4 <= *(float *)param_17) {
    param_16._0_4_ = fVar4;
  }
  param_16._4_4_ = *(float *)&param_17->field_0x4;
  if (fVar4 <= *(float *)&param_17->field_0x4) {
    param_16._4_4_ = fVar4;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_res8._4_4_ = param_16._4_4_;
  local_res8._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWeft,&local_res8,param_11,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_a0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_a0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_16._0_4_ = *(float *)param_18;
  if (fVar4 <= *(float *)param_18) {
    param_16._0_4_ = fVar4;
  }
  param_16._4_4_ = *(float *)&param_18->field_0x4;
  if (fVar4 <= *(float *)&param_18->field_0x4) {
    param_16._4_4_ = fVar4;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_res10._4_4_ = param_16._4_4_;
  local_res10._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessBias,&local_res10,param_12,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,3> *)this->_padding_;
  local_90.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_90.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_16._0_4_ = *(float *)param_19;
  if (__real_447a0000 <= *(float *)param_19) {
    param_16._0_4_ = __real_447a0000;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  param_16._4_4_ = *(float *)&param_19->field_0x4;
  if (__real_447a0000 <= *(float *)&param_19->field_0x4) {
    param_16._4_4_ = __real_447a0000;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_e8._4_4_ = param_16._4_4_;
  local_e8._0_4_ = param_16._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->DampingRatio,&local_e8,param_13,&local_90,(int)lVar3,iVar1,(void *)0x0);
  local_80.DataPtr = (TVector<int,3> *)this->_padding_;
  local_80.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_80.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  fVar4 = __real_4b189680;
  param_16._0_4_ = *(float *)param_20;
  if (__real_4b189680 <= *(float *)param_20) {
    param_16._0_4_ = __real_4b189680;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  param_16._4_4_ = *(float *)&param_20->field_0x4;
  if (__real_4b189680 <= *(float *)&param_20->field_0x4) {
    param_16._4_4_ = __real_4b189680;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_e0._4_4_ = param_16._4_4_;
  local_e0._0_4_ = param_16._0_4_;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_e0,param_14,&local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_70[0].DataPtr = (TVector<int,3> *)this->_padding_;
  local_70[0].ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_70[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_16._0_4_ = *(float *)param_21;
  if (fVar4 <= *(float *)param_21) {
    param_16._0_4_ = fVar4;
  }
  param_16._4_4_ = *(float *)&param_21->field_0x4;
  if (fVar4 <= *(float *)&param_21->field_0x4) {
    param_16._4_4_ = fVar4;
  }
  if (param_16._0_4_ <= 0.0) {
    param_16._0_4_ = 0.0;
  }
  if (param_16._4_4_ <= 0.0) {
    param_16._4_4_ = 0.0;
  }
  local_d8._4_4_ = param_16._4_4_;
  local_d8._0_4_ = param_16._0_4_;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_d8,param_15,local_70,(int)lVar3,iVar1,0x10,(void *)0x0);
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftBiasBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftBiasBaseMultipliers).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  Init(this);
  InitFromPatternData(this,(int)param_1->_padding_,param_6,param_5,pFVar5,param_7,param_8,param_9);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDAnisotropicAxialSpringConstraints @ 143f10cc0

FXPBDAnisotropicAxialSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticles *param_1,int param_2,
          int param_3,FTriangleMesh *param_4,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_5,
          bool param_6,TArrayView<float_const_,int> *param_7,TArrayView<float_const_,int> *param_8,
          TArrayView<float_const_,int> *param_9,TArrayView<float_const_,int> *param_10,
          TArrayView<float_const_,int> *param_11,TArrayView<float_const_,int> *param_12,
          TVector<float,2> *param_13,TVector<float,2> *param_14,TVector<float,2> *param_15,
          TVector<float,2> *param_16,TVector<float,2> *param_17,TVector<float,2> *param_18)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  float fVar4;
  FTriangleMesh *pFVar5;
  TVector<float,2> *pTVar6;
  bool bVar7;
  FXPBDAnisotropicAxialSpringConstraints *pFVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TVector<float,2> local_e8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_e0;
  TArrayView<float_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_80;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_70 [3];
  
  pTVar6 = param_13;
  pFVar5 = param_4;
  fVar4 = __real_4e6e6b28;
  local_d0.DataPtr = (float *)0x0;
  local_d0.ArrayNum = 0;
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,param_2,param_3,&param_4->MElements,
             &local_d0,param_13,true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicAxialSpringConstraints_Softs_Chaos__6B_;
  local_c0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_13._0_4_ = *(float *)pTVar6;
  if (fVar4 <= param_13._0_4_) {
    param_13._0_4_ = fVar4;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  param_13._4_4_ = *(float *)&pTVar6->field_0x4;
  if (fVar4 <= param_13._4_4_) {
    param_13._4_4_ = fVar4;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  param_4 = (FTriangleMesh *)CONCAT44(param_13._4_4_,param_13._0_4_);
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWarp,(TVector<float,2> *)&param_4,param_7,&local_c0,(int)lVar3,iVar1,
             (void *)0x0);
  local_b0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_b0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_b0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_13._0_4_ = *(float *)param_14;
  if (fVar4 <= *(float *)param_14) {
    param_13._0_4_ = fVar4;
  }
  param_13._4_4_ = *(float *)&param_14->field_0x4;
  if (fVar4 <= *(float *)&param_14->field_0x4) {
    param_13._4_4_ = fVar4;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  local_res8._4_4_ = param_13._4_4_;
  local_res8._0_4_ = param_13._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWeft,&local_res8,param_8,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_a0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_a0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_13._0_4_ = *(float *)param_15;
  if (fVar4 <= *(float *)param_15) {
    param_13._0_4_ = fVar4;
  }
  param_13._4_4_ = *(float *)&param_15->field_0x4;
  if (fVar4 <= *(float *)&param_15->field_0x4) {
    param_13._4_4_ = fVar4;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  local_res10._4_4_ = param_13._4_4_;
  local_res10._0_4_ = param_13._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessBias,&local_res10,param_9,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,3> *)this->_padding_;
  local_90.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_90.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_13._0_4_ = *(float *)param_16;
  if (__real_447a0000 <= *(float *)param_16) {
    param_13._0_4_ = __real_447a0000;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  param_13._4_4_ = *(float *)&param_16->field_0x4;
  if (__real_447a0000 <= *(float *)&param_16->field_0x4) {
    param_13._4_4_ = __real_447a0000;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  local_f8._4_4_ = param_13._4_4_;
  local_f8._0_4_ = param_13._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->DampingRatio,&local_f8,param_10,&local_90,(int)lVar3,iVar1,(void *)0x0);
  local_80.DataPtr = (TVector<int,3> *)this->_padding_;
  local_80.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_80.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  fVar4 = __real_4b189680;
  param_13._0_4_ = *(float *)param_17;
  if (__real_4b189680 <= *(float *)param_17) {
    param_13._0_4_ = __real_4b189680;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  param_13._4_4_ = *(float *)&param_17->field_0x4;
  if (__real_4b189680 <= *(float *)&param_17->field_0x4) {
    param_13._4_4_ = __real_4b189680;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  local_f0._4_4_ = param_13._4_4_;
  local_f0._0_4_ = param_13._0_4_;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_f0,param_11,&local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_70[0].DataPtr = (TVector<int,3> *)this->_padding_;
  local_70[0].ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_70[0].ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar8;
    }
  }
  param_13._0_4_ = *(float *)param_18;
  if (fVar4 <= *(float *)param_18) {
    param_13._0_4_ = fVar4;
  }
  param_13._4_4_ = *(float *)&param_18->field_0x4;
  if (fVar4 <= *(float *)&param_18->field_0x4) {
    param_13._4_4_ = fVar4;
  }
  if (param_13._0_4_ <= 0.0) {
    param_13._0_4_ = 0.0;
  }
  if (param_13._4_4_ <= 0.0) {
    param_13._4_4_ = 0.0;
  }
  local_e8._4_4_ = param_13._4_4_;
  local_e8._0_4_ = param_13._0_4_;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_e8,param_12,local_70,(int)lVar3,iVar1,0x10,(void *)0x0);
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftBiasBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftBiasBaseMultipliers).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  Init(this);
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  InitFromPatternData(this,(int)param_1->_padding_,param_6,param_5,pFVar5,false,&local_e0,
                      __real_3f800000);
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDAnisotropicAxialSpringConstraints @ 143f11210

FXPBDAnisotropicAxialSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4,bool param_5,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_6,float param_7,
          TArrayView<float_const_,int> *param_8,TArrayView<float_const_,int> *param_9,
          TArrayView<float_const_,int> *param_10,TArrayView<float_const_,int> *param_11,
          TArrayView<float_const_,int> *param_12,TArrayView<float_const_,int> *param_13,
          TVector<float,2> *param_14,TVector<float,2> *param_15,TVector<float,2> *param_16,
          TVector<float,2> *param_17,TVector<float,2> *param_18,TVector<float,2> *param_19)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FXPBDAnisotropicAxialSpringConstraints *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_res18;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_res20;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TVector<float,2> local_e8;
  TArrayView<float_const_,int> local_e0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_80 [4];
  
  fVar8 = __real_4e6e6b28;
  local_e0.DataPtr = (float *)0x0;
  local_e0.ArrayNum = 0;
  local_res20 = param_3;
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,&param_2->MElements,&local_e0,param_14,
             true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicAxialSpringConstraints_Softs_Chaos__6B_;
  local_d0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_d0.ArrayNum = (int)this->_padding_;
  if (local_d0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_14;
  if (fVar8 <= *(float *)param_14) {
    fVar6 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = *(float *)&param_14->field_0x4;
  if (fVar8 <= *(float *)&param_14->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res8._4_4_ = fVar7;
  local_res8._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWarp,&local_res8,param_8,&local_d0,(int)lVar3,iVar1,(void *)0x0);
  local_c0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_15;
  if (fVar8 <= *(float *)param_15) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_15->field_0x4;
  if (fVar8 <= *(float *)&param_15->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res10._4_4_ = fVar7;
  local_res10._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWeft,&local_res10,param_9,&local_c0,(int)lVar3,iVar1,(void *)0x0);
  local_b0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_b0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_b0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_16;
  if (fVar8 <= *(float *)param_16) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_16->field_0x4;
  if (fVar8 <= *(float *)&param_16->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res18._4_4_ = fVar7;
  local_res18._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessBias,&local_res18,param_10,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_a0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_a0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar8 = *(float *)param_17;
  if (__real_447a0000 <= *(float *)param_17) {
    fVar8 = __real_447a0000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar6 = *(float *)&param_17->field_0x4;
  if (__real_447a0000 <= *(float *)&param_17->field_0x4) {
    fVar6 = __real_447a0000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_f8._4_4_ = fVar6;
  local_f8._0_4_ = fVar8;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->DampingRatio,&local_f8,param_11,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,3> *)this->_padding_;
  local_90.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_90.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar8 = __real_4b189680;
  fVar6 = *(float *)param_18;
  if (__real_4b189680 <= *(float *)param_18) {
    fVar6 = __real_4b189680;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = *(float *)&param_18->field_0x4;
  if (__real_4b189680 <= *(float *)&param_18->field_0x4) {
    fVar7 = __real_4b189680;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_f0._4_4_ = fVar7;
  local_f0._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_f0,param_12,&local_90,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_80[0].DataPtr = (TVector<int,3> *)this->_padding_;
  local_80[0].ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_80[0].ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_19;
  if (fVar8 <= *(float *)param_19) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_19->field_0x4;
  if (fVar8 <= *(float *)&param_19->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_e8._4_4_ = fVar7;
  local_e8._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_e8,param_13,local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftBiasBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftBiasBaseMultipliers).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  Init(this);
  InitFromPatternData(this,*(int *)&param_1->field_0x14,param_4,local_res20,param_2,param_5,param_6,
                      param_7);
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// FXPBDAnisotropicAxialSpringConstraints @ 143f11750

FXPBDAnisotropicAxialSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::FXPBDAnisotropicAxialSpringConstraints
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,
          FTriangleMesh *param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          bool param_4,TArrayView<float_const_,int> *param_5,TArrayView<float_const_,int> *param_6,
          TArrayView<float_const_,int> *param_7,TArrayView<float_const_,int> *param_8,
          TArrayView<float_const_,int> *param_9,TArrayView<float_const_,int> *param_10,
          TVector<float,2> *param_11,TVector<float,2> *param_12,TVector<float,2> *param_13,
          TVector<float,2> *param_14,TVector<float,2> *param_15,TVector<float,2> *param_16)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  FXPBDAnisotropicAxialSpringConstraints *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_res18;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_res20;
  TVector<float,2> local_108;
  TVector<float,2> local_100;
  TVector<float,2> local_f8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_f0;
  TArrayView<float_const_,int> local_e0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,3>_const_,int> local_80 [4];
  
  fVar8 = __real_4e6e6b28;
  local_e0.DataPtr = (float *)0x0;
  local_e0.ArrayNum = 0;
  local_res20 = param_3;
  FPBDAxialSpringConstraintsBase::FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this,param_1,&param_2->MElements,&local_e0,param_11,
             true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicAxialSpringConstraints_Softs_Chaos__6B_;
  local_d0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_d0.ArrayNum = (int)this->_padding_;
  if (local_d0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_11;
  if (fVar8 <= *(float *)param_11) {
    fVar6 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = *(float *)&param_11->field_0x4;
  if (fVar8 <= *(float *)&param_11->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res8._4_4_ = fVar7;
  local_res8._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWarp,&local_res8,param_5,&local_d0,(int)lVar3,iVar1,(void *)0x0);
  local_c0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_12;
  if (fVar8 <= *(float *)param_12) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_12->field_0x4;
  if (fVar8 <= *(float *)&param_12->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res10._4_4_ = fVar7;
  local_res10._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessWeft,&local_res10,param_6,&local_c0,(int)lVar3,iVar1,(void *)0x0);
  local_b0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_b0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_b0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_13;
  if (fVar8 <= *(float *)param_13) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_13->field_0x4;
  if (fVar8 <= *(float *)&param_13->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_res18._4_4_ = fVar7;
  local_res18._0_4_ = fVar6;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->StiffnessBias,&local_res18,param_7,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,3> *)this->_padding_;
  local_a0.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_a0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar8 = *(float *)param_14;
  if (__real_447a0000 <= *(float *)param_14) {
    fVar8 = __real_447a0000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar6 = *(float *)&param_14->field_0x4;
  if (__real_447a0000 <= *(float *)&param_14->field_0x4) {
    fVar6 = __real_447a0000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_108._4_4_ = fVar6;
  local_108._0_4_ = fVar8;
  FPBDFlatWeightMap::FPBDFlatWeightMap<3>
            (&this->DampingRatio,&local_108,param_8,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,3> *)this->_padding_;
  local_90.ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_90.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar8 = __real_4b189680;
  fVar6 = *(float *)param_15;
  if (__real_4b189680 <= *(float *)param_15) {
    fVar6 = __real_4b189680;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = *(float *)&param_15->field_0x4;
  if (__real_4b189680 <= *(float *)&param_15->field_0x4) {
    fVar7 = __real_4b189680;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_100._4_4_ = fVar7;
  local_100._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WarpScale,&local_100,param_9,&local_90,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_80[0].DataPtr = (TVector<int,3> *)this->_padding_;
  local_80[0].ArrayNum = (int)this->_padding_;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  if (local_80[0].ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicAxialSpringConstraints *)(*pcVar2)();
      return pFVar5;
    }
  }
  fVar6 = *(float *)param_16;
  if (fVar8 <= *(float *)param_16) {
    fVar6 = fVar8;
  }
  fVar7 = *(float *)&param_16->field_0x4;
  if (fVar8 <= *(float *)&param_16->field_0x4) {
    fVar7 = fVar8;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_f8._4_4_ = fVar7;
  local_f8._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<3>
            (&this->WeftScale,&local_f8,param_10,local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  (this->Lambdas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lambdas).ArrayNum = 0;
  (this->Lambdas).ArrayMax = 0;
  (this->LambdasDamping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LambdasDamping).ArrayNum = 0;
  (this->LambdasDamping).ArrayMax = 0;
  (this->BaseDists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseDists).ArrayNum = 0;
  (this->BaseDists).ArrayMax = 0;
  (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftBiasBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftBiasBaseMultipliers).ArrayMax = 0;
  (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpWeftScaleBaseMultipliers).ArrayNum = 0;
  (this->WarpWeftScaleBaseMultipliers).ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  Init(this);
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  InitFromPatternData(this,*(int *)&param_1->field_0x14,param_4,local_res20,param_2,false,&local_f0,
                      __real_3f800000);
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// ~FXPBDAnisotropicAxialSpringConstraints @ 143f15ee0

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::~FXPBDAnisotropicAxialSpringConstraints
          (FXPBDAnisotropicAxialSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDAnisotropicAxialSpringConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseDists).AllocatorInstance.Data;
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
  pFVar1 = (this->DampingRatio).MapValues.AllocatorInstance.Data;
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
  FPBDAxialSpringConstraintsBase::~FPBDAxialSpringConstraintsBase
            ((FPBDAxialSpringConstraintsBase *)this);
  return;
}

// operator() @ 143f17350

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54
::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f177a0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l54::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f17bf0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::
operator()(void *this,int param_1)

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
  longlong lVar10;
  longlong lVar11;
  FEvolutionLinearSystem *pFVar12;
  code *pcVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  
  lVar10 = *(longlong *)this;
  uVar16 = *(int *)((longlong)this + 0x20) + param_1;
  uVar17 = ~uVar16 >> 0x1f;
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar10 + 0x1f0)) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar10 = *(longlong *)(lVar10 + 0x1e8);
  lVar11 = *(longlong *)this;
  pFVar12 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  fVar1 = *(float *)((longlong)this + 0x30);
  lVar18 = (longlong)(int)uVar16;
  fVar2 = *(float *)(lVar10 + 4 + lVar18 * 0xc);
  fVar3 = *(float *)(lVar10 + lVar18 * 0xc);
  fVar4 = *(float *)(lVar10 + 8 + lVar18 * 0xc);
  fVar5 = *(float *)((longlong)this + 0x28);
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar11 + 0x38)) {
    uVar15 = uVar17;
  }
  fVar6 = *(float *)((longlong)this + 0x24);
  fVar7 = *(float *)((longlong)this + 0x2c);
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar10 = *(longlong *)this;
  fVar8 = *(float *)(*(longlong *)(lVar11 + 0x30) + lVar18 * 4);
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar10 + 0x28)) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  lVar11 = *(longlong *)this;
  fVar9 = *(float *)(*(longlong *)(lVar10 + 0x20) + lVar18 * 4);
  uVar15 = 0;
  if ((int)uVar16 < *(int *)(lVar11 + 0x10)) {
    uVar15 = uVar17;
  }
  if (uVar15 == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  Chaos::Softs::Spring::UpdateAxialSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,3> *)(*(longlong *)(lVar11 + 8) + lVar18 * 0xc),fVar9,fVar8,
             fVar2 * fVar5 + fVar3 * fVar6 + fVar4 * fVar7,0.0,fVar1,pFVar12);
  return;
}

// operator() @ 143f17fd0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  FEvolutionLinearSystem *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar14 = *(int *)((longlong)this + 0x20) + param_1;
  if (*(char *)((longlong)this + 0x24) == '\0') {
    fVar18 = *(float *)((longlong)this + 0x28);
  }
  else {
    lVar6 = *(longlong *)this;
    fVar16 = *(float *)(lVar6 + 0xb4);
    fVar18 = *(float *)(lVar6 + 0xb0);
    pfVar12 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar6 + 0xa0),uVar14);
    fVar18 = fVar16 * *pfVar12 + fVar18;
  }
  if (*(char *)((longlong)this + 0x2c) == '\0') {
    fVar16 = *(float *)((longlong)this + 0x30);
  }
  else {
    lVar6 = *(longlong *)this;
    fVar17 = *(float *)(lVar6 + 0xe4);
    fVar16 = *(float *)(lVar6 + 0xe0);
    pfVar12 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar6 + 0xd0),uVar14);
    fVar16 = fVar17 * *pfVar12 + fVar16;
  }
  if (*(char *)((longlong)this + 0x34) == '\0') {
    fVar17 = *(float *)((longlong)this + 0x38);
  }
  else {
    lVar6 = *(longlong *)this;
    fVar19 = *(float *)(lVar6 + 0x114);
    fVar17 = *(float *)(lVar6 + 0x110);
    pfVar12 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar6 + 0x100),uVar14);
    fVar17 = fVar19 * *pfVar12 + fVar17;
  }
  if (*(char *)((longlong)this + 0x3c) == '\0') {
    fVar19 = *(float *)((longlong)this + 0x40);
  }
  else {
    lVar6 = *(longlong *)this;
    fVar1 = *(float *)(lVar6 + 0x144);
    fVar19 = *(float *)(lVar6 + 0x140);
    pfVar12 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar6 + 0x130),uVar14);
    fVar19 = fVar1 * *pfVar12 + fVar19;
  }
  lVar6 = *(longlong *)this;
  uVar13 = ~uVar14 >> 0x1f;
  uVar11 = 0;
  if ((int)uVar14 < *(int *)(lVar6 + 0x1f0)) {
    uVar11 = uVar13;
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
  lVar6 = *(longlong *)(lVar6 + 0x1e8);
  lVar7 = *(longlong *)this;
  pFVar8 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  lVar15 = (longlong)(int)uVar14;
  fVar1 = *(float *)(lVar6 + 8 + lVar15 * 0xc);
  fVar2 = *(float *)(lVar6 + lVar15 * 0xc);
  fVar3 = *(float *)(lVar6 + 4 + lVar15 * 0xc);
  uVar11 = 0;
  if ((int)uVar14 < *(int *)(lVar7 + 0x38)) {
    uVar11 = uVar13;
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
  lVar6 = *(longlong *)this;
  fVar4 = *(float *)(*(longlong *)(lVar7 + 0x30) + lVar15 * 4);
  uVar11 = 0;
  if ((int)uVar14 < *(int *)(lVar6 + 0x28)) {
    uVar11 = uVar13;
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
  lVar7 = *(longlong *)this;
  fVar5 = *(float *)(*(longlong *)(lVar6 + 0x20) + lVar15 * 4);
  uVar11 = 0;
  if ((int)uVar14 < *(int *)(lVar7 + 0x10)) {
    uVar11 = uVar13;
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
  Chaos::Softs::Spring::UpdateAxialSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,3> *)(*(longlong *)(lVar7 + 8) + lVar15 * 0xc),fVar5,fVar4,
             fVar3 * fVar18 + fVar16 * fVar2 + fVar17 * fVar1,0.0,fVar19,pFVar8);
  return;
}

// operator() @ 143f18be0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59
::<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f18ee0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l59::<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19710

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62
::<lambda_3>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19a10

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l62::<lambda_3>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19d10

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65
::<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1a010

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l65::<lambda_4>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1a870

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68
::<lambda_5>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1ab70

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l68::<lambda_5>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1b3d0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73
::<lambda_6>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1b6d0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l73::<lambda_6>::operator()(void *this,int param_1)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  
  iVar4 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar5 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar6 = *(float *)(lVar2 + 0xb4);
    fVar5 = *(float *)(lVar2 + 0xb0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xa0),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xe4);
    fVar6 = *(float *)(lVar2 + 0xe0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xd0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x114);
    fVar1 = *(float *)(lVar2 + 0x110);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x100),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x144);
    fVar7 = *(float *)(lVar2 + 0x140);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x130),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1bf30

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77
::<lambda_7>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  
  iVar5 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xb4);
    fVar6 = *(float *)(lVar3 + 0xb0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xa0),iVar5);
    fVar6 = fVar1 * *pfVar4 + fVar6;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    local_58 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xe4);
    fVar2 = *(float *)(lVar3 + 0xe0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xd0),iVar5);
    local_58 = fVar1 * *pfVar4 + fVar2;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_50 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0x114);
    fVar2 = *(float *)(lVar3 + 0x110);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0x100),iVar5);
    local_50 = fVar1 * *pfVar4 + fVar2;
  }
  local_54 = fVar6;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar5,
             (TVector<float,3> *)&local_58,0.0);
  return;
}

// operator() @ 143f1c1b0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
__l77::<lambda_7>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float local_58;
  float local_54;
  float local_50;
  
  iVar5 = *(int *)((longlong)this + 0x14) + param_1;
  if (*(char *)((longlong)this + 0x18) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x1c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xb4);
    fVar6 = *(float *)(lVar3 + 0xb0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xa0),iVar5);
    fVar6 = fVar1 * *pfVar4 + fVar6;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    local_58 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xe4);
    fVar2 = *(float *)(lVar3 + 0xe0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xd0),iVar5);
    local_58 = fVar1 * *pfVar4 + fVar2;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_50 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0x114);
    fVar2 = *(float *)(lVar3 + 0x110);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0x100),iVar5);
    local_50 = fVar1 * *pfVar4 + fVar2;
  }
  local_54 = fVar6;
  Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicAxialSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar5
             ,(TVector<float,3> *)&local_58,0.0);
  return;
}

// Init @ 143f206c0

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::Init
          (FXPBDAnisotropicAxialSpringConstraints *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->Lambdas).ArrayMax;
  piVar2 = &(this->Lambdas).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Lambdas).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->Lambdas).AllocatorInstance,piVar2,piVar1);
  memset((this->Lambdas).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar3 << 2);
  piVar1 = &(this->LambdasDamping).ArrayMax;
  piVar2 = &(this->LambdasDamping).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LambdasDamping).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->LambdasDamping).AllocatorInstance,piVar2,piVar1);
  memset((this->LambdasDamping).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar3 << 2)
  ;
  return;
}

// InitFromPatternData @ 143f20920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::InitFromPatternData
          (FXPBDAnisotropicAxialSpringConstraints *this,int param_1,bool param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          FTriangleMesh *param_4,bool param_5,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_6,float param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 local_158 [4];
  uint local_154;
  longlong local_150;
  uint local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  longlong *local_108;
  FScriptContainerElement *local_100;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_f8 [11];
  
  plVar1 = &this->_padding_;
  local_108 = plVar1;
  if (param_2) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (&this->BaseDists,(TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->BaseDists,(int)*plVar1,Default);
    local_108 = plVar1;
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->WarpWeftBiasBaseMultipliers,(int)*plVar1,Default);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->WarpWeftScaleBaseMultipliers,(int)*plVar1,Default);
  FTriangleMesh::GetPointToTriangleMap(param_4,local_f8);
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar13 = __real_3f800000;
  fVar12 = __real_322bcc77;
  local_148 = 0;
  if (0 < (int)*plVar1) {
    local_150 = 0;
    local_138 = 0;
    do {
      lVar18 = local_150;
      local_154 = ~local_148 >> 0x1f;
      uVar27 = 0;
      if ((int)local_148 < (int)this->_padding_) {
        uVar27 = local_154;
      }
      if ((uVar27 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar29 = this->_padding_;
      uVar27 = *(uint *)(lVar29 + lVar18 * 0xc);
      uVar16 = 0;
      if ((int)uVar27 < local_f8[0].ArrayNum) {
        uVar16 = ~uVar27 >> 0x1f;
      }
      local_140 = lVar29;
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar17 = *(int *)(lVar29 + 4 + lVar18 * 0xc);
      iVar4 = *(int *)(lVar29 + lVar18 * 0xc);
      iVar5 = *(int *)(lVar29 + 8 + lVar18 * 0xc);
      pTVar28 = local_f8[0].DataPtr + (int)uVar27;
      iVar10 = iVar17;
      if (iVar17 < iVar4) {
        iVar10 = iVar4;
      }
      iVar25 = iVar5;
      if (iVar5 < iVar10) {
        iVar25 = iVar10;
      }
      iVar10 = iVar4;
      if (((iVar4 != iVar17) && (iVar4 < iVar5 != iVar17 < iVar4)) &&
         (iVar10 = iVar5, iVar17 < iVar5 == iVar4 < iVar17)) {
        iVar10 = iVar17;
      }
      pFVar22 = (pTVar28->AllocatorInstance).Data;
      iVar6 = pTVar28->ArrayNum;
      if (iVar4 < iVar17) {
        iVar17 = iVar4;
      }
      local_100 = pFVar22 + (longlong)iVar6 * 4;
      if (iVar17 < iVar5) {
        iVar5 = iVar17;
      }
      while( true ) {
        pFVar7 = local_100;
        if (pTVar28->ArrayNum != iVar6) {
          local_158[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        uVar27 = 0xffffffff;
        if (pFVar22 == pFVar7) break;
        uVar27 = *(uint *)pFVar22;
        lVar18 = (longlong)(int)uVar27;
        uVar16 = 0;
        if ((int)uVar27 < (param_4->MElements).ArrayNum) {
          uVar16 = ~uVar27 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar7 = (param_4->MElements).AllocatorInstance.Data;
        iVar17 = *(int *)(pFVar7 + lVar18 * 0xc + 4);
        iVar4 = *(int *)(pFVar7 + lVar18 * 0xc);
        iVar23 = *(int *)(pFVar7 + lVar18 * 0xc + 8);
        iVar24 = iVar17;
        if (iVar17 < iVar4) {
          iVar24 = iVar4;
        }
        iVar11 = iVar23;
        if (iVar23 < iVar24) {
          iVar11 = iVar24;
        }
        iVar24 = iVar4;
        if (((iVar4 != iVar17) && (iVar4 < iVar23 != iVar17 < iVar4)) &&
           (iVar24 = iVar23, iVar17 < iVar23 == iVar4 < iVar17)) {
          iVar24 = iVar17;
        }
        if (iVar4 < iVar17) {
          iVar17 = iVar4;
        }
        if (iVar17 < iVar23) {
          iVar23 = iVar17;
        }
        if (((iVar5 == iVar23) && (iVar10 == iVar24)) && (iVar25 == iVar11)) break;
        pFVar22 = pFVar22 + 4;
      }
      if ((uVar27 == 0xffffffff) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TriangleIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                              ,0x560,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar21 = ~uVar27 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar27 < (param_4->MElements).ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar29 = local_140;
      lVar18 = local_150;
      pFVar22 = (param_4->MElements).AllocatorInstance.Data;
      lVar26 = (longlong)(int)uVar27;
      iVar17 = *(int *)(local_140 + local_150 * 0xc);
      if ((((*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) &&
           (*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17)) &&
          (*(int *)(pFVar22 + lVar26 * 0xc + 8) != iVar17)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                              ,0x565,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar20 = 0;
      iVar17 = *(int *)(lVar29 + lVar18 * 0xc);
      if (*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) {
        lVar20 = (ulonglong)(*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17) + 1;
      }
      iVar17 = *(int *)(lVar29 + 4 + lVar18 * 0xc);
      if (((*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) &&
          (*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17)) &&
         ((*(int *)(pFVar22 + lVar26 * 0xc + 8) != iVar17 &&
          (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                               ,0x565,L""), bVar15)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar17 = *(int *)(lVar29 + 4 + lVar18 * 0xc);
      lVar29 = 0;
      if (*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) {
        lVar29 = (ulonglong)(*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17) + 1;
      }
      iVar17 = *(int *)(local_140 + 8 + lVar18 * 0xc);
      if (((*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) &&
          (*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17)) &&
         ((*(int *)(pFVar22 + lVar26 * 0xc + 8) != iVar17 &&
          (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("Element[0] == Constraint[ConstraintAxis] || Element[1] == Constraint[ConstraintAxis] || Element[2] == Constraint[ConstraintAxis]"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                               ,0x565,L""), bVar15)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar17 = *(int *)(local_140 + 8 + lVar18 * 0xc);
      lVar18 = 0;
      if (*(int *)(pFVar22 + lVar26 * 0xc) != iVar17) {
        lVar18 = (ulonglong)(*(int *)(pFVar22 + lVar26 * 0xc + 4) != iVar17) + 1;
      }
      uVar16 = 0;
      if ((int)uVar27 < param_3->ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar26 = (longlong)(int)uVar27 * 3;
      local_120 = *(undefined8 *)((param_3->AllocatorInstance).Data + (lVar26 + lVar20) * 8);
      uVar16 = 0;
      if ((int)uVar27 < param_3->ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_130 = *(undefined8 *)((param_3->AllocatorInstance).Data + (lVar29 + lVar26) * 8);
      uVar16 = 0;
      if ((int)uVar27 < param_3->ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar16 = local_148;
      lVar29 = local_150;
      uVar27 = local_154;
      local_128 = *(undefined8 *)((param_3->AllocatorInstance).Data + (lVar18 + lVar26) * 8);
      uVar21 = 0;
      if ((int)local_148 < (int)this->_padding_) {
        uVar21 = local_154;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar18 = local_138;
      fVar33 = (float)((uint)((float)local_120 -
                             (((float)local_130 - (float)local_128) *
                              *(float *)(local_138 + this->_padding_) + (float)local_128)) & uVar14)
      ;
      fVar34 = (float)((uint)(local_120._4_4_ -
                             ((local_130._4_4_ - local_128._4_4_) *
                              *(float *)(local_138 + this->_padding_) + local_128._4_4_)) & uVar14);
      if (fVar33 <= fVar34) {
        fVar32 = fVar34 - fVar33;
        fVar31 = 0.0;
        fVar30 = fVar32;
        fVar35 = fVar33;
      }
      else {
        fVar31 = fVar33 - fVar34;
        fVar32 = 0.0;
        fVar30 = fVar31;
        fVar35 = fVar34;
      }
      fVar36 = SQRT(fVar34 * fVar34 + fVar33 * fVar33);
      if (fVar30 + fVar35 <= fVar12) {
        fVar31 = 0.0;
        fVar35 = 0.0;
        fVar30 = fVar13;
      }
      else {
        fVar30 = fVar13 / (fVar30 + fVar35);
        fVar35 = fVar35 * fVar30;
        fVar31 = fVar30 * fVar31;
        fVar30 = fVar30 * fVar32;
      }
      uVar21 = 0;
      if ((int)uVar16 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar21 = uVar27;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar22 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      *(ulonglong *)(pFVar22 + lVar29 * 0xc) = CONCAT44(fVar30,fVar31);
      *(float *)(pFVar22 + lVar29 * 0xc + 8) = fVar35;
      if (fVar36 <= fVar12) {
        local_110 = 0x3f3504f3;
        uStack_10c = 0x3f3504f3;
        uVar19 = 0x3f3504f33f3504f3;
      }
      else {
        fStack_114 = (fVar13 / fVar36) * fVar34;
        local_118 = (fVar13 / fVar36) * fVar33;
        uVar19 = CONCAT44(fStack_114,local_118);
      }
      uVar21 = 0;
      if ((int)uVar16 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar21 = uVar27;
      }
      if ((uVar21 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(undefined8 *)((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + lVar29 * 8) =
           uVar19;
      if (!param_2) {
        uVar21 = 0;
        if ((int)uVar16 < (this->BaseDists).ArrayNum) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(float *)((this->BaseDists).AllocatorInstance.Data + lVar29 * 4) = fVar36;
        if ((param_5) && (piVar2 = &param_6->ArrayNum, lVar18 = local_138, param_1 == *piVar2)) {
          uVar21 = 0;
          if ((int)uVar16 < (int)this->_padding_) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar18 = local_140;
          fVar33 = *(float *)(this->_padding_ + lVar29 * 4);
          uVar27 = *(uint *)(local_140 + 8 + lVar29 * 0xc);
          lVar26 = (longlong)(int)uVar27;
          uVar21 = 0;
          if ((int)uVar27 < *piVar2) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar27 = *(uint *)(lVar18 + 4 + lVar29 * 0xc);
          lVar18 = (longlong)(int)uVar27;
          pFVar22 = (param_6->AllocatorInstance).Data;
          uVar21 = 0;
          if ((int)uVar27 < *piVar2) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar27 = *(uint *)(local_140 + lVar29 * 0xc);
          lVar29 = (longlong)(int)uVar27;
          pFVar7 = (param_6->AllocatorInstance).Data;
          uVar21 = 0;
          if ((int)uVar27 < *piVar2) {
            uVar21 = ~uVar27 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar27 = local_154;
          pFVar8 = (param_6->AllocatorInstance).Data;
          fVar30 = *(float *)(pFVar8 + lVar29 * 0xc) -
                   ((*(float *)(pFVar7 + lVar18 * 0xc) - *(float *)(pFVar22 + lVar26 * 0xc)) *
                    fVar33 + *(float *)(pFVar22 + lVar26 * 0xc));
          fVar34 = *(float *)(pFVar8 + lVar29 * 0xc + 4) -
                   ((*(float *)(pFVar7 + lVar18 * 0xc + 4) - *(float *)(pFVar22 + lVar26 * 0xc + 4))
                    * fVar33 + *(float *)(pFVar22 + lVar26 * 0xc + 4));
          fVar33 = *(float *)(pFVar8 + lVar29 * 0xc + 8) -
                   ((*(float *)(pFVar7 + lVar18 * 0xc + 8) - *(float *)(pFVar22 + lVar26 * 0xc + 8))
                    * fVar33 + *(float *)(pFVar22 + lVar26 * 0xc + 8));
          fVar34 = SQRT(fVar34 * fVar34 + fVar30 * fVar30 + fVar33 * fVar33) * param_7;
          fVar33 = fVar13;
          if (fVar12 < fVar34) {
            uVar21 = 0;
            if ((int)uVar16 < (int)this->_padding_) {
              uVar21 = local_154;
            }
            if ((uVar21 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar33 = *(float *)(this->_padding_ + local_150 * 4) / fVar34;
          }
          lVar29 = local_150;
          uVar21 = 0;
          if ((int)uVar16 < (this->BaseDists).ArrayNum) {
            uVar21 = uVar27;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar22 = (this->BaseDists).AllocatorInstance.Data;
          *(float *)(pFVar22 + lVar29 * 4) = fVar33 * *(float *)(pFVar22 + lVar29 * 4);
          lVar18 = local_138;
        }
        uVar21 = 0;
        if ((int)uVar16 < (this->BaseDists).ArrayNum) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar3 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + lVar29 * 4);
        uVar21 = 0;
        if ((int)uVar16 < (int)this->_padding_) {
          uVar21 = uVar27;
        }
        if ((uVar21 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined4 *)(this->_padding_ + lVar29 * 4) = uVar3;
      }
      local_148 = uVar16 + 1;
      local_150 = lVar29 + 1;
      local_138 = lVar18 + 4;
    } while ((int)local_148 < (int)*local_108);
  }
  return;
}

// UpdateDists @ 143f27000

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateDists
          (FXPBDAnisotropicAxialSpringConstraints *this)

{
  Softs::Private::UpdateDists
            (&this->BaseDists,&this->WarpWeftScaleBaseMultipliers,&this->WarpScale,&this->WeftScale,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// UpdateLinearSystem @ 143f27440

void __thiscall
Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem
          (FXPBDAnisotropicAxialSpringConstraints *this,FSolverParticlesRange *param_1,float param_2
          ,FEvolutionLinearSystem *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  code *pcVar16;
  bool bVar17;
  uint uVar18;
  float *pfVar19;
  char cVar20;
  uint uVar21;
  longlong lVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  FXPBDAnisotropicAxialSpringConstraints *local_190;
  FSolverParticlesRange *local_188;
  float local_180;
  FEvolutionLinearSystem *local_178;
  int local_170;
  char local_16c;
  undefined4 local_168;
  char local_164;
  undefined4 local_160;
  char local_15c;
  undefined4 local_158;
  char local_154;
  undefined4 local_150;
  code *local_148;
  FXPBDAnisotropicAxialSpringConstraints **local_140;
  code *local_138;
  FXPBDAnisotropicAxialSpringConstraints **local_130;
  FXPBDAnisotropicAxialSpringConstraints *local_128;
  FSolverParticlesRange *local_120;
  float local_118;
  FEvolutionLinearSystem *local_110;
  int local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  
  bVar28 = -1 < CpuChannel->Enabled;
  if (bVar28) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2027,
               "FXPBDAnisotropicAxialSpringConstraints_UpdateLinearSystem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x7eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2027);
  }
  iVar13 = (int)this->_padding_;
  TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
            (&param_3->Matrix,iVar13 * 3,iVar13 * 2);
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar25 = '\0';
  }
  else {
    cVar25 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01';
  }
  iVar13 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar13 < 2) || ((int)this->_padding_ <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    if ((cVar23 == '\0') && (((cVar20 == '\0' && (cVar25 == '\0')) && (cVar24 == '\0')))) {
      fVar1 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar30 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((fVar1 <= fVar2) || (fVar29 = fVar1, fVar1 <= fVar3)) && (fVar29 = fVar3, fVar3 <= fVar2)
         ) {
        fVar29 = fVar2;
      }
      if ((0.0 <= fVar29) && (uVar21 = 0, 0 < (int)this->_padding_)) {
        lVar27 = 0;
        lVar22 = 0;
        do {
          uVar26 = ~uVar21 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar21 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar15 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          fVar29 = *(float *)(pFVar15 + lVar22 + 4);
          fVar33 = *(float *)(pFVar15 + lVar22);
          fVar31 = *(float *)(pFVar15 + lVar22 + 8);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          fVar32 = *(float *)(this->_padding_ + lVar27 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          fVar8 = *(float *)(this->_padding_ + lVar27 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          Spring::UpdateAxialSpringLinearSystem
                    (param_1,param_2,
                     (TVector<int,3> *)(this->_padding_ + (longlong)(int)uVar21 * 0xc),fVar8,fVar32,
                     fVar2 * fVar29 + fVar1 * fVar33 + fVar3 * fVar31,0.0,fVar30,param_3);
          uVar21 = uVar21 + 1;
          lVar27 = lVar27 + 1;
          lVar22 = lVar22 + 0xc;
        } while ((int)uVar21 < (int)this->_padding_);
      }
    }
    else {
      fVar1 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      uVar21 = 0;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar30 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      if (0 < (int)this->_padding_) {
        lVar27 = 0;
        lVar22 = 0;
        do {
          fVar29 = fVar2;
          if (cVar23 != '\0') {
            fVar29 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar33 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,uVar21);
            fVar29 = fVar29 * *pfVar19 + fVar33;
          }
          fVar33 = fVar3;
          if (cVar20 != '\0') {
            fVar33 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar31 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,uVar21);
            fVar33 = fVar33 * *pfVar19 + fVar31;
          }
          fVar31 = fVar30;
          if (cVar25 != '\0') {
            fVar31 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar32 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,uVar21);
            fVar31 = fVar31 * *pfVar19 + fVar32;
          }
          fVar32 = fVar1;
          if (cVar24 != '\0') {
            fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar32 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar19 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,uVar21);
            fVar32 = fVar8 * *pfVar19 + fVar32;
          }
          uVar26 = ~uVar21 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar21 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar15 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          fVar8 = *(float *)(pFVar15 + lVar22 + 8);
          fVar9 = *(float *)(pFVar15 + lVar22);
          fVar10 = *(float *)(pFVar15 + lVar22 + 4);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          fVar11 = *(float *)(this->_padding_ + lVar27 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          fVar12 = *(float *)(this->_padding_ + lVar27 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (int)this->_padding_) {
            uVar18 = uVar26;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          Spring::UpdateAxialSpringLinearSystem
                    (param_1,param_2,
                     (TVector<int,3> *)(this->_padding_ + (longlong)(int)uVar21 * 0xc),fVar12,fVar11
                     ,fVar10 * fVar29 + fVar33 * fVar9 + fVar31 * fVar8,0.0,fVar32,param_3);
          uVar21 = uVar21 + 1;
          lVar27 = lVar27 + 1;
          lVar22 = lVar22 + 0xc;
        } while ((int)uVar21 < (int)this->_padding_);
      }
    }
  }
  else {
    iVar13 = iVar13 + -1;
    if ((((cVar23 == '\0') && (cVar20 == '\0')) && (cVar25 == '\0')) && (cVar24 == '\0')) {
      fVar1 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      uVar4 = *(undefined4 *)&(this->DampingRatio).MapView.OffsetRange;
      if (((fVar1 <= fVar2) || (fVar30 = fVar1, fVar1 <= fVar3)) && (fVar30 = fVar3, fVar3 <= fVar2)
         ) {
        fVar30 = fVar2;
      }
      if ((0.0 <= fVar30) && (uVar21 = 0, 0 < iVar13)) {
        lVar22 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar21 = uVar21 + 1;
          iVar14 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           lVar22 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_140 = &local_128;
          local_148 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
                      ::Call;
          local_128 = this;
          local_120 = param_1;
          local_118 = param_2;
          local_110 = param_3;
          local_108 = iVar14;
          local_104 = fVar1;
          local_100 = fVar2;
          local_fc = fVar3;
          local_f8 = uVar4;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar22 * 4 + 4) - iVar14,
                             (TFunctionRef<void___cdecl(int)> *)&local_148,false);
          lVar22 = lVar22 + 1;
        } while (lVar22 < iVar13);
      }
    }
    else {
      uVar4 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
      uVar21 = 0;
      uVar5 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
      uVar6 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
      uVar7 = *(undefined4 *)&(this->DampingRatio).MapView.OffsetRange;
      if (0 < iVar13) {
        lVar22 = 0;
        do {
          uVar18 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          uVar21 = uVar21 + 1;
          iVar14 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           lVar22 * 4);
          uVar18 = 0;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar18 = ~uVar21 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          local_130 = &local_190;
          local_138 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicAxialSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
                      ::Call;
          local_190 = this;
          local_188 = param_1;
          local_180 = param_2;
          local_178 = param_3;
          local_170 = iVar14;
          local_16c = cVar23;
          local_168 = uVar4;
          local_164 = cVar20;
          local_160 = uVar5;
          local_15c = cVar25;
          local_158 = uVar6;
          local_154 = cVar24;
          local_150 = uVar7;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar22 * 4 + 4) - iVar14,
                             (TFunctionRef<void___cdecl(int)> *)&local_138,false);
          lVar22 = lVar22 + 1;
        } while (lVar22 < iVar13);
      }
    }
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

