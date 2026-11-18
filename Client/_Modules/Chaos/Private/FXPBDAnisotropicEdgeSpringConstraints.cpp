// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 41

// Apply<Chaos::Softs::FSolverParticles> @ 143eeb870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2)

{
  TVector<float,2> *pTVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  TVector<float,2> *pTVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring> FVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  float *pfVar22;
  longlong lVar23;
  char cVar24;
  char cVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  longlong *plVar30;
  char cVar31;
  longlong lVar32;
  TVector<float,2> *pTVar33;
  int iVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  FName local_3f0;
  TVector<float,2> *local_3e8;
  float *local_3e0;
  undefined8 local_3d8;
  float local_3d0;
  TVector<float,2> *local_3c8;
  FName local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  FName local_3a8;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  FXPBDAnisotropicEdgeSpringConstraints *local_350;
  FSolverParticles *local_348;
  float local_340;
  int local_33c;
  char local_338;
  undefined4 local_334;
  char local_330;
  undefined4 local_32c;
  char local_328;
  undefined4 local_324;
  char local_320;
  float local_31c;
  FXPBDAnisotropicEdgeSpringConstraints *local_318;
  FSolverParticles *local_310;
  float local_308;
  int local_304;
  char local_300;
  undefined4 local_2fc;
  char local_2f8;
  undefined4 local_2f4;
  char local_2f0;
  undefined4 local_2ec;
  char local_2e8;
  float local_2e4;
  FXPBDAnisotropicEdgeSpringConstraints *local_2e0;
  FSolverParticles *local_2d8;
  float local_2d0;
  int local_2cc;
  char local_2c8;
  undefined4 local_2c4;
  char local_2c0;
  undefined4 local_2bc;
  char local_2b8;
  undefined4 local_2b4;
  char local_2b0;
  float local_2ac;
  FXPBDAnisotropicEdgeSpringConstraints *local_2a8;
  FSolverParticles *local_2a0;
  float local_298;
  int local_294;
  char local_290;
  undefined4 local_28c;
  char local_288;
  undefined4 local_284;
  char local_280;
  undefined4 local_27c;
  char local_278;
  float local_274;
  FXPBDAnisotropicEdgeSpringConstraints *local_270;
  FSolverParticles *local_268;
  float local_260;
  int local_25c;
  char local_258;
  undefined4 local_254;
  char local_250;
  undefined4 local_24c;
  char local_248;
  undefined4 local_244;
  char local_240;
  float local_23c;
  FXPBDAnisotropicEdgeSpringConstraints *local_238;
  FSolverParticles *local_230;
  float local_228;
  int local_224;
  char local_220;
  undefined4 local_21c;
  char local_218;
  undefined4 local_214;
  char local_210;
  undefined4 local_20c;
  char local_208;
  float local_204;
  FXPBDAnisotropicEdgeSpringConstraints *local_200;
  FSolverParticles *local_1f8;
  float local_1f0;
  int local_1ec;
  char local_1e8;
  undefined4 local_1e4;
  char local_1e0;
  undefined4 local_1dc;
  char local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  FXPBDAnisotropicEdgeSpringConstraints **local_1c8;
  code *local_1c0;
  FXPBDAnisotropicEdgeSpringConstraints **local_1b8;
  code *local_1b0;
  FXPBDAnisotropicEdgeSpringConstraints **local_1a8;
  code *local_1a0;
  FXPBDAnisotropicEdgeSpringConstraints **local_198;
  code *local_190;
  FXPBDAnisotropicEdgeSpringConstraints **local_188;
  code *local_180;
  FXPBDAnisotropicEdgeSpringConstraints **local_178;
  code *local_170;
  FXPBDAnisotropicEdgeSpringConstraints **local_168;
  FName local_160;
  TArrayView<float_const_,int> local_158;
  TArrayView<float_const_,int> local_148;
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
  float *local_e8;
  undefined8 uStack_e0;
  
  bVar35 = -1 < CpuChannel->Enabled;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"FXPBDAnisotropicEdgeSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>(Chaos::Softs::FSolverParticles&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  pfVar27 = (float *)0x0;
  FVar18 = StatPtr_STAT_XPBD_AnisoSpring;
  if (StatPtr_STAT_XPBD_AnisoSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)0x0) {
    pFVar17 = ::FName::FName(&local_160,"STAT_XPBD_AnisoSpring");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoSpring,*pFVar17,
                        L"Chaos XPBD Anisotropic Spring Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_3f0 = *(FName *)FVar18;
  bVar9 = false;
  bVar10 = false;
  local_3a8.ComparisonIndex.Value = 0;
  local_3a8.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((local_3f0.ComparisonIndex.Value.Value == 0) && (local_3f0.Number == 0)) {
LAB_143eeba33:
    bVar10 = bVar13;
    bVar9 = bVar12;
    bVar12 = false;
    local_3f0 = local_3a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3c8 = (TVector<float,2> *)((ulonglong)local_3c8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3c8,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3c0.ComparisonIndex.Value = local_3f0.ComparisonIndex.Value.Value;
        local_3c0.Number = local_3f0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3c0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                   ,0x1f7);
        bVar9 = true;
        bVar10 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143eeba33;
    FThreadStats::AddMessage(local_3f0,CycleScopeStart);
    bVar12 = true;
  }
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
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
    cVar25 = '\0';
  }
  else {
    cVar25 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar31 = '\0';
  }
  else {
    cVar31 = '\x01';
  }
  iVar34 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar30 = &this->_padding_;
  if ((iVar34 < 2) || ((int)*plVar30 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    local_3d8 = &(this->StiffnessWeft).MapView.OffsetRange;
    pTVar1 = &(this->StiffnessBias).MapView.OffsetRange;
    fVar36 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    local_3c8 = &(this->DampingRatio).MapView.OffsetRange;
    fVar2 = *(float *)local_3d8;
    fVar3 = *(float *)pTVar1;
    fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    if ((0.0 < fVar41) || (cVar31 != '\0')) {
      local_3c8 = &(this->DampingRatio).MapView.OffsetRange;
      local_3d8 = &(this->StiffnessWeft).MapView.OffsetRange;
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (0 < (int)*plVar30)) {
        do {
          iVar34 = (int)pfVar27;
          fVar39 = fVar36;
          if (cVar19 != '\0') {
            fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar39 = fVar39 * *pfVar27 + fVar37;
          }
          fVar37 = fVar2;
          if (cVar24 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar37 = fVar37 * *pfVar27 + fVar40;
          }
          fVar40 = fVar3;
          if (cVar25 != '\0') {
            fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar27 + fVar38;
          }
          fVar38 = fVar41;
          if (cVar31 != '\0') {
            fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar38 = fVar38 * *pfVar27 + fVar7;
          }
          local_38c = fVar37;
          local_388 = fVar39;
          local_384 = fVar40;
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_38c,fVar38);
          pfVar27 = (float *)(ulonglong)(iVar34 + 1U);
        } while ((int)(iVar34 + 1U) < (int)*plVar30);
      }
      local_3c8 = &(this->DampingRatio).MapView.OffsetRange;
      pTVar11 = local_3c8;
      local_3d8 = &(this->StiffnessWeft).MapView.OffsetRange;
      pTVar1 = local_3d8;
      local_3e8 = &(this->StiffnessWarp).MapView.OffsetRange;
      pTVar33 = &(this->StiffnessBias).MapView.OffsetRange;
      plVar30 = &this->_padding_;
      iVar34 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar30 < 1) goto LAB_143eedb04;
        do {
          fVar39 = fVar36;
          if (cVar19 != '\0') {
            fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)local_3e8;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar39 = fVar39 * *pfVar27 + fVar37;
          }
          fVar37 = fVar2;
          if (cVar24 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)pTVar1;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar37 = fVar37 * *pfVar27 + fVar40;
          }
          fVar40 = fVar3;
          if (cVar25 != '\0') {
            fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)pTVar33;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar27 + fVar38;
          }
          fVar38 = fVar41;
          if (cVar31 != '\0') {
            fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)pTVar11;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar38 = fVar38 * *pfVar27 + fVar7;
          }
          local_35c = fVar37;
          local_358 = fVar39;
          local_354 = fVar40;
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_35c,fVar38);
          iVar16 = (int)*plVar30;
          iVar34 = iVar34 + 1;
        } while (iVar34 < iVar16);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar30 < 1) goto LAB_143eedb04;
        do {
          fVar39 = fVar36;
          if (cVar19 != '\0') {
            fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)local_3e8;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar39 = fVar39 * *pfVar27 + fVar37;
          }
          fVar37 = fVar2;
          if (cVar24 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)pTVar1;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar37 = fVar37 * *pfVar27 + fVar40;
          }
          fVar40 = fVar3;
          if (cVar25 != '\0') {
            fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)pTVar33;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar27 + fVar38;
          }
          fVar38 = fVar41;
          if (cVar31 != '\0') {
            fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)pTVar11;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar38 = fVar38 * *pfVar27 + fVar7;
          }
          local_368 = fVar37;
          local_364 = fVar39;
          local_360 = fVar40;
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_368,fVar38);
          iVar16 = (int)*plVar30;
          iVar34 = iVar34 + 1;
        } while (iVar34 < iVar16);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar16 = (int)*plVar30;
        if (0 < iVar16) {
          do {
            fVar39 = fVar36;
            if (cVar19 != '\0') {
              fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar37 = *(float *)local_3e8;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar34);
              fVar39 = fVar39 * *pfVar27 + fVar37;
            }
            fVar37 = fVar2;
            if (cVar24 != '\0') {
              fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar40 = *(float *)pTVar1;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar34);
              fVar37 = fVar37 * *pfVar27 + fVar40;
            }
            fVar40 = fVar3;
            if (cVar25 != '\0') {
              fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar38 = *(float *)pTVar33;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar34);
              fVar40 = fVar40 * *pfVar27 + fVar38;
            }
            fVar38 = fVar41;
            if (cVar31 != '\0') {
              fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar7 = *(float *)pTVar11;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar34);
              fVar38 = fVar38 * *pfVar27 + fVar7;
            }
            local_374 = fVar37;
            local_370 = fVar39;
            local_36c = fVar40;
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_374,fVar38);
            iVar16 = (int)*plVar30;
            iVar34 = iVar34 + 1;
          } while (iVar34 < iVar16);
        }
      }
      else {
        iVar16 = (int)this->_padding_;
        if (0 < iVar16) {
          do {
            fVar39 = fVar36;
            if (cVar19 != '\0') {
              fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar34);
              fVar39 = fVar39 * *pfVar27 + fVar37;
            }
            fVar37 = fVar2;
            if (cVar24 != '\0') {
              fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar34);
              fVar37 = fVar37 * *pfVar27 + fVar40;
            }
            fVar40 = fVar3;
            if (cVar25 != '\0') {
              fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar34);
              fVar40 = fVar40 * *pfVar27 + fVar38;
            }
            fVar38 = fVar41;
            if (cVar31 != '\0') {
              fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar27 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar34);
              fVar38 = fVar38 * *pfVar27 + fVar7;
            }
            local_380 = fVar37;
            local_37c = fVar39;
            local_378 = fVar40;
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
                      (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_380,fVar38);
            iVar16 = (int)this->_padding_;
            iVar34 = iVar34 + 1;
          } while (iVar34 < iVar16);
        }
      }
      iVar34 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (0 < iVar16)) {
        do {
          fVar39 = fVar36;
          if (cVar19 != '\0') {
            fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar37 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar39 = fVar39 * *pfVar27 + fVar37;
          }
          fVar37 = fVar2;
          if (cVar24 != '\0') {
            fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar37 = fVar37 * *pfVar27 + fVar40;
          }
          fVar40 = fVar3;
          if (cVar25 != '\0') {
            fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar38 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar27 + fVar38;
          }
          fVar38 = fVar41;
          if (cVar31 != '\0') {
            fVar38 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar7 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar27 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar38 = fVar38 * *pfVar27 + fVar7;
          }
          local_3b8 = fVar37;
          local_3b4 = fVar39;
          local_3b0 = fVar40;
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_3b8,fVar38);
          iVar34 = iVar34 + 1;
        } while (iVar34 < (int)this->_padding_);
      }
    }
    else if (0 < (int)*plVar30) {
      do {
        iVar34 = (int)pfVar27;
        fVar41 = fVar36;
        if (cVar19 != '\0') {
          fVar41 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar39 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
          pfVar27 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWarp).MapView.MapValues,iVar34);
          fVar41 = fVar41 * *pfVar27 + fVar39;
        }
        fVar39 = fVar2;
        if (cVar24 != '\0') {
          fVar39 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar37 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
          pfVar27 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWeft).MapView.MapValues,iVar34);
          fVar39 = fVar39 * *pfVar27 + fVar37;
        }
        fVar37 = fVar3;
        if (cVar25 != '\0') {
          fVar37 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
          fVar40 = *(float *)pTVar1;
          pfVar27 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessBias).MapView.MapValues,iVar34);
          fVar37 = fVar37 * *pfVar27 + fVar40;
        }
        local_398 = fVar39;
        local_394 = fVar41;
        local_390 = fVar37;
        ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
                  (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_398,0.0);
        pfVar27 = (float *)(ulonglong)(iVar34 + 1U);
      } while ((int)(iVar34 + 1U) < (int)*plVar30);
    }
    goto LAB_143eedb04;
  }
  iVar34 = iVar34 + -1;
  lVar23 = (longlong)iVar34;
  uVar15 = 0;
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar36 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar4 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
    uVar5 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
    uVar6 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    if ((0.0 < fVar36) || (cVar31 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) &&
         (pfVar22 = pfVar27, pfVar28 = pfVar27, 0 < iVar34)) {
        do {
          uVar20 = (uint)pfVar22;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_168 = &local_2a8;
          local_170 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54::<lambda_1>,void,int>
                      ::Call;
          local_2a8 = this;
          local_2a0 = param_1;
          local_298 = param_2;
          local_294 = iVar34;
          local_290 = cVar19;
          local_28c = uVar4;
          local_288 = cVar24;
          local_284 = uVar5;
          local_280 = cVar25;
          local_27c = uVar6;
          local_278 = cVar31;
          local_274 = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_170,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar22 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar28 < lVar23);
      }
      uVar14 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        pfVar22 = pfVar27;
        pfVar28 = pfVar27;
        if (lVar23 < 1) goto LAB_143eedb04;
        do {
          uVar20 = (uint)pfVar22;
          uVar15 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar15 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_188 = &local_318;
          local_190 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62::<lambda_3>,void,int>
                      ::Call;
          local_318 = this;
          local_310 = param_1;
          local_308 = param_2;
          local_304 = iVar34;
          local_300 = cVar19;
          local_2fc = uVar4;
          local_2f8 = cVar24;
          local_2f4 = uVar5;
          local_2f0 = cVar25;
          local_2ec = uVar6;
          local_2e8 = cVar31;
          local_2e4 = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_190,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar22 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar28 < lVar23);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        pfVar22 = pfVar27;
        pfVar28 = pfVar27;
        if (lVar23 < 1) goto LAB_143eedb04;
        do {
          uVar20 = (uint)pfVar22;
          uVar15 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar15 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_198 = &local_350;
          local_1a0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68::<lambda_5>,void,int>
                      ::Call;
          local_350 = this;
          local_348 = param_1;
          local_340 = param_2;
          local_33c = iVar34;
          local_338 = cVar19;
          local_334 = uVar4;
          local_330 = cVar24;
          local_32c = uVar5;
          local_328 = cVar25;
          local_324 = uVar6;
          local_320 = cVar31;
          local_31c = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_1a0,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar22 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar28 < lVar23);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        pfVar22 = pfVar27;
        pfVar28 = pfVar27;
        if (lVar23 < 1) goto LAB_143eedb04;
        do {
          uVar21 = (uint)pfVar22;
          uVar20 = uVar15;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar21 = uVar21 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          uVar20 = uVar14;
          if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_1a8 = &local_238;
          local_1b0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65::<lambda_4>,void,int>
                      ::Call;
          local_238 = this;
          local_230 = param_1;
          local_228 = param_2;
          local_224 = iVar34;
          local_220 = cVar19;
          local_21c = uVar4;
          local_218 = cVar24;
          local_214 = uVar5;
          local_210 = cVar25;
          local_20c = uVar6;
          local_208 = cVar31;
          local_204 = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar28 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_1b0,false);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar22 = (float *)(ulonglong)uVar21;
        } while ((longlong)pfVar28 < lVar23);
      }
      else {
        pfVar22 = pfVar27;
        pfVar28 = pfVar27;
        if (0 < lVar23) {
          do {
            uVar21 = (uint)pfVar22;
            uVar20 = uVar15;
            if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar21 = uVar21 + 1;
            iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             (longlong)pfVar28 * 4);
            uVar20 = uVar15;
            if ((int)uVar21 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_1b8 = &local_270;
            local_1c0 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59::<lambda_2>,void,int>
                        ::Call;
            local_270 = this;
            local_268 = param_1;
            local_260 = param_2;
            local_25c = iVar34;
            local_258 = cVar19;
            local_254 = uVar4;
            local_250 = cVar24;
            local_24c = uVar5;
            local_248 = cVar25;
            local_244 = uVar6;
            local_240 = cVar31;
            local_23c = fVar36;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar28 * 4 + 4) - iVar34,
                               (TFunctionRef<void___cdecl(int)> *)&local_1c0,false);
            pfVar28 = (float *)((longlong)pfVar28 + 1);
            pfVar22 = (float *)(ulonglong)uVar21;
          } while ((longlong)pfVar28 < lVar23);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (pfVar22 = pfVar27, 0 < lVar23)) {
        do {
          uVar20 = (uint)pfVar27;
          uVar15 = uVar14;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          pfVar27 = (float *)(ulonglong)uVar20;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar22 * 4);
          uVar15 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar15 = ~uVar20 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_178 = &local_2e0;
          local_180 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73::<lambda_6>,void,int>
                      ::Call;
          local_2e0 = this;
          local_2d8 = param_1;
          local_2d0 = param_2;
          local_2cc = iVar34;
          local_2c8 = cVar19;
          local_2c4 = uVar4;
          local_2c0 = cVar24;
          local_2bc = uVar5;
          local_2b8 = cVar25;
          local_2b4 = uVar6;
          local_2b0 = cVar31;
          local_2ac = fVar36;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar22 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_180,false);
          pfVar22 = (float *)((longlong)pfVar22 + 1);
        } while ((longlong)pfVar22 < lVar23);
      }
    }
    else {
      pfVar22 = pfVar27;
      if (0 < iVar34) {
        do {
          uVar20 = (uint)pfVar27;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          pfVar27 = (float *)(ulonglong)uVar20;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar22 * 4);
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_1c8 = &local_200;
          local_1d0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77::<lambda_7>,void,int>
                      ::Call;
          local_200 = this;
          local_1f8 = param_1;
          local_1f0 = param_2;
          local_1ec = iVar34;
          local_1e8 = cVar19;
          local_1e4 = uVar4;
          local_1e0 = cVar24;
          local_1dc = uVar5;
          local_1d8 = cVar25;
          local_1d4 = uVar6;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     (longlong)pfVar22 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_1d0,false);
          pfVar22 = (float *)((longlong)pfVar22 + 1);
        } while ((longlong)pfVar22 < lVar23);
      }
    }
    goto LAB_143eedb04;
  }
  if (((cVar19 == '\0') && (cVar24 == '\0')) && (cVar25 == '\0')) {
    if (cVar31 == '\0') {
      fVar36 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_3d0 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar3 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      local_3d8 = (TVector<float,2> *)CONCAT44(fVar2,fVar36);
      if (((fVar36 <= fVar2) || (fVar36 <= local_3d0)) && (fVar36 = local_3d0, local_3d0 <= fVar2))
      {
        fVar36 = fVar2;
      }
      if (fVar36 <= 0.0) goto LAB_143eedb04;
      pfVar22 = pfVar27;
      if (fVar3 <= 0.0) {
LAB_143eebe74:
        if (lVar23 < 1) goto LAB_143eedb04;
      }
      else {
        if (Chaos_XPBDSpring_SplitDampingMode == 0) {
          if (0 < lVar23) {
            do {
              uVar20 = (uint)pfVar22;
              uVar14 = 0;
              if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar20 = uVar20 + 1;
              iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)pfVar27 * 4);
              lVar32 = (longlong)iVar34;
              uVar14 = uVar15;
              if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar14 = ~uVar20 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              ApplyXPBDAnisoSpringConstraintsWithDamping
                        (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                         this->_padding_ + lVar32 * 8,this->_padding_ + lVar32 * 4,
                         (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
                         (this->Lambdas).AllocatorInstance.Data + lVar32 * 4,param_2,&local_3d8,
                         fVar3,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + (longlong)pfVar27 * 4 + 4) - iVar34);
              pfVar27 = (float *)((longlong)pfVar27 + 1);
              pfVar22 = (float *)(ulonglong)uVar20;
            } while ((longlong)pfVar27 < lVar23);
          }
          goto LAB_143eedb04;
        }
        pfVar28 = pfVar27;
        pfVar29 = pfVar27;
        if (lVar23 < 1) goto LAB_143eebe74;
        do {
          uVar20 = (uint)pfVar29;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar28 * 4);
          lVar32 = (longlong)iVar34;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          ApplyXPBDAnisoSpringDampingConstraints
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar32 * 8,this->_padding_ + lVar32 * 4,
                     (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
                     (this->LambdasDamping).AllocatorInstance.Data + lVar32 * 4,param_2,&local_3d8,
                     fVar3,*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                   (longlong)pfVar28 * 4 + 4) - iVar34);
          pfVar28 = (float *)((longlong)pfVar28 + 1);
          pfVar29 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar28 < lVar23);
      }
      do {
        uVar20 = (uint)pfVar22;
        uVar14 = uVar15;
        if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar20 = uVar20 + 1;
        iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         (longlong)pfVar27 * 4);
        lVar32 = (longlong)iVar34;
        uVar14 = uVar15;
        if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar14 = ~uVar20 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        ApplyXPBDAnisoSpringConstraints
                  (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar32 * 8,
                   this->_padding_ + lVar32 * 4,
                   (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
                   (this->Lambdas).AllocatorInstance.Data + lVar32 * 4,param_2,&local_3d8,
                   *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar27 * 4 + 4) - iVar34);
        pfVar27 = (float *)((longlong)pfVar27 + 1);
        pfVar22 = (float *)(ulonglong)uVar20;
      } while ((longlong)pfVar27 < lVar23);
      goto LAB_143eedb04;
    }
LAB_143eebfd3:
    if (Chaos_XPBDSpring_SplitDampingMode == 0) {
      pfVar22 = pfVar27;
      pfVar28 = pfVar27;
      if (0 < lVar23) {
        do {
          uVar20 = (uint)pfVar28;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar22 * 4);
          lVar32 = (longlong)iVar34;
          uVar14 = uVar15;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)pfVar22 * 4 + 4);
          if (cVar31 == '\0') {
            local_3e0 = (float *)0x0;
          }
          else {
            local_158.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_158.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_158._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_3e0 = TArrayView<float_const_,int>::operator[](&local_158,iVar34);
          }
          pfVar28 = pfVar27;
          if (cVar25 != '\0') {
            local_138 = (this->StiffnessBias).MapView.MapValues.DataPtr;
            uStack_130 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
            pfVar28 = local_138 + lVar32;
          }
          pfVar29 = pfVar27;
          if (cVar24 != '\0') {
            pfVar29 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar32;
          }
          pfVar26 = pfVar27;
          if (cVar19 != '\0') {
            local_128 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
            uStack_120 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
            pfVar26 = local_128 + lVar32;
          }
          ApplyXPBDAnisoSpringConstraintsWithDampingAndWeightMaps
                    (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                     this->_padding_ + lVar32 * 8,this->_padding_ + lVar32 * 4,
                     (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
                     (this->Lambdas).AllocatorInstance.Data + lVar32 * 4,param_2,cVar19,
                     &(this->StiffnessWarp).MapView.OffsetRange,pfVar26,cVar24,
                     &(this->StiffnessWeft).MapView.OffsetRange,pfVar29,cVar25,
                     &(this->StiffnessBias).MapView.OffsetRange,pfVar28,cVar31,
                     &(this->DampingRatio).MapView.OffsetRange,local_3e0,iVar16 - iVar34);
          pfVar22 = (float *)((longlong)pfVar22 + 1);
          pfVar28 = (float *)(ulonglong)uVar20;
        } while ((longlong)pfVar22 < lVar23);
      }
      goto LAB_143eedb04;
    }
    pfVar22 = pfVar27;
    pfVar28 = pfVar27;
    if (lVar23 < 1) goto LAB_143eec47d;
    do {
      uVar20 = (uint)pfVar28;
      uVar14 = uVar15;
      if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar20 = uVar20 + 1;
      iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pfVar22 * 4);
      lVar32 = (longlong)iVar34;
      uVar14 = uVar15;
      if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar16 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pfVar22 * 4 + 4);
      if (cVar31 == '\0') {
        local_3e0 = (float *)0x0;
      }
      else {
        local_148.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_148.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_148._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_3e0 = TArrayView<float_const_,int>::operator[](&local_148,iVar34);
      }
      pfVar28 = pfVar27;
      if (cVar25 != '\0') {
        local_118 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_110 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        pfVar28 = local_118 + lVar32;
      }
      pfVar29 = pfVar27;
      if (cVar24 != '\0') {
        local_108 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
        uStack_100 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
        pfVar29 = local_108 + lVar32;
      }
      pfVar26 = pfVar27;
      if (cVar19 != '\0') {
        local_f8 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_f0 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        pfVar26 = local_f8 + lVar32;
      }
      ApplyXPBDAnisoSpringDampingConstraintsWithWeightMaps
                (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,param_1->_padding_,
                 this->_padding_ + lVar32 * 8,this->_padding_ + lVar32 * 4,
                 (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
                 (this->LambdasDamping).AllocatorInstance.Data + lVar32 * 4,param_2,cVar19,
                 &(this->StiffnessWarp).MapView.OffsetRange,pfVar26,cVar24,
                 &(this->StiffnessWeft).MapView.OffsetRange,pfVar29,cVar25,
                 &(this->StiffnessBias).MapView.OffsetRange,pfVar28,cVar31,
                 &(this->DampingRatio).MapView.OffsetRange,local_3e0,iVar16 - iVar34);
      pfVar22 = (float *)((longlong)pfVar22 + 1);
      pfVar28 = (float *)(ulonglong)uVar20;
    } while ((longlong)pfVar22 < lVar23);
  }
  else {
    if ((cVar31 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143eebfd3;
LAB_143eec47d:
    if (lVar23 < 1) goto LAB_143eedb04;
  }
  pfVar22 = pfVar27;
  pfVar28 = pfVar27;
  do {
    uVar20 = (uint)pfVar28;
    uVar14 = uVar15;
    if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar20 = uVar20 + 1;
    pfVar28 = (float *)(ulonglong)uVar20;
    iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)pfVar22 * 4);
    lVar32 = (longlong)iVar34;
    uVar14 = uVar15;
    if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar14 = ~uVar20 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (cVar25 == '\0') {
      local_3e0 = (float *)0x0;
    }
    else {
      local_e8 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_e0 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_3e0 = local_e8 + lVar32;
    }
    pfVar29 = pfVar27;
    if (cVar24 != '\0') {
      pfVar29 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar32;
    }
    pfVar26 = pfVar27;
    if (cVar19 != '\0') {
      pfVar26 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar32;
    }
    ApplyXPBDAnisoSpringConstraintsWithWeightMaps
              (*(undefined8 *)&(param_1->MPAndInvM).field_0x8,this->_padding_ + lVar32 * 8,
               this->_padding_ + lVar32 * 4,
               (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data + lVar32 * 0xc,
               (this->Lambdas).AllocatorInstance.Data + lVar32 * 4,param_2,cVar19,
               &(this->StiffnessWarp).MapView.OffsetRange,pfVar26,cVar24,
               &(this->StiffnessWeft).MapView.OffsetRange,pfVar29,cVar25,
               &(this->StiffnessBias).MapView.OffsetRange,local_3e0,
               *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)pfVar22 * 4 + 4) - iVar34);
    pfVar22 = (float *)((longlong)pfVar22 + 1);
  } while ((longlong)pfVar22 < lVar23);
LAB_143eedb04:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(local_3f0,CycleScopeEnd);
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Apply<Chaos::Softs::FSolverParticlesRange> @ 143ef4250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2)

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
  TVector<float,3> *pTVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring> FVar19;
  TArrayView<Chaos::TVector<float,3>,int> *pTVar20;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar21;
  float *pfVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  char cVar28;
  char cVar29;
  longlong lVar30;
  char cVar31;
  longlong lVar32;
  longlong *plVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  TVector<float,2> *pTVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  TVector<float,2> *local_res8;
  longlong local_res20;
  FName local_4c0;
  TVector<float,2> *local_4b8;
  uint local_4b0;
  TVector<float,2> *local_4a8;
  float *local_4a0;
  float *local_498;
  float *local_490;
  float *local_488;
  TVector<float,2> *local_480;
  float *local_478;
  float local_470;
  float local_46c;
  float local_468;
  FName local_460;
  FName local_458;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  float local_42c;
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
  FXPBDAnisotropicEdgeSpringConstraints *local_3f0;
  FSolverParticlesRange *local_3e8;
  float local_3e0;
  int local_3dc;
  char local_3d8;
  undefined4 local_3d4;
  char local_3d0;
  undefined4 local_3cc;
  char local_3c8;
  undefined4 local_3c4;
  char local_3c0;
  float local_3bc;
  FXPBDAnisotropicEdgeSpringConstraints *local_3b8;
  FSolverParticlesRange *local_3b0;
  float local_3a8;
  int local_3a4;
  char local_3a0;
  undefined4 local_39c;
  char local_398;
  undefined4 local_394;
  char local_390;
  undefined4 local_38c;
  char local_388;
  float local_384;
  FXPBDAnisotropicEdgeSpringConstraints *local_380;
  FSolverParticlesRange *local_378;
  float local_370;
  int local_36c;
  char local_368;
  undefined4 local_364;
  char local_360;
  undefined4 local_35c;
  char local_358;
  undefined4 local_354;
  char local_350;
  float local_34c;
  FXPBDAnisotropicEdgeSpringConstraints *local_348;
  FSolverParticlesRange *local_340;
  float local_338;
  int local_334;
  char local_330;
  undefined4 local_32c;
  char local_328;
  undefined4 local_324;
  char local_320;
  undefined4 local_31c;
  char local_318;
  float local_314;
  FXPBDAnisotropicEdgeSpringConstraints *local_310;
  FSolverParticlesRange *local_308;
  float local_300;
  int local_2fc;
  char local_2f8;
  undefined4 local_2f4;
  char local_2f0;
  undefined4 local_2ec;
  char local_2e8;
  undefined4 local_2e4;
  char local_2e0;
  float local_2dc;
  FXPBDAnisotropicEdgeSpringConstraints *local_2d8;
  FSolverParticlesRange *local_2d0;
  float local_2c8;
  int local_2c4;
  char local_2c0;
  undefined4 local_2bc;
  char local_2b8;
  undefined4 local_2b4;
  char local_2b0;
  undefined4 local_2ac;
  char local_2a8;
  float local_2a4;
  FXPBDAnisotropicEdgeSpringConstraints *local_2a0;
  FSolverParticlesRange *local_298;
  float local_290;
  int local_28c;
  char local_288;
  undefined4 local_284;
  char local_280;
  undefined4 local_27c;
  char local_278;
  undefined4 local_274;
  code *local_270;
  FXPBDAnisotropicEdgeSpringConstraints **local_268;
  code *local_260;
  FXPBDAnisotropicEdgeSpringConstraints **local_258;
  code *local_250;
  FXPBDAnisotropicEdgeSpringConstraints **local_248;
  code *local_240;
  FXPBDAnisotropicEdgeSpringConstraints **local_238;
  code *local_230;
  FXPBDAnisotropicEdgeSpringConstraints **local_228;
  code *local_220;
  FXPBDAnisotropicEdgeSpringConstraints **local_218;
  code *local_210;
  FXPBDAnisotropicEdgeSpringConstraints **local_208;
  FName local_200;
  TArrayView<float_const_,int> local_1f8;
  TArrayView<float_const_,int> local_1e8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_1d8;
  float *local_1c8;
  undefined8 uStack_1c0;
  float *local_1b8;
  undefined8 uStack_1b0;
  TArrayView<Chaos::TVector<float,3>,int> local_1a8;
  float *local_198;
  undefined8 uStack_190;
  float *local_188;
  undefined8 uStack_180;
  float *local_178;
  undefined8 uStack_170;
  TArrayView<Chaos::TVector<float,3>,int> local_168;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_158;
  float *local_148;
  undefined8 uStack_140;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_138;
  TArrayView<Chaos::TVector<float,3>,int> local_128;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_118;
  TArrayView<Chaos::TVector<float,3>,int> local_108;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_f8;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8 [11];
  
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId502,"FXPBDAnisotropicEdgeSpringConstraints_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x1f6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>(Chaos::Softs::FSolverParticlesRange&___ptr64,float)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId502);
  }
  uVar27 = 0;
  FVar19 = StatPtr_STAT_XPBD_AnisoSpring;
  if (StatPtr_STAT_XPBD_AnisoSpring == (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)0x0) {
    pFVar18 = ::FName::FName(&local_200,"STAT_XPBD_AnisoSpring");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_XPBD_AnisoSpring>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_XPBD_AnisoSpring,*pFVar18,
                        L"Chaos XPBD Anisotropic Spring Constraint","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_4c0 = *(FName *)FVar19;
  bVar13 = false;
  bVar14 = false;
  local_458.ComparisonIndex.Value = 0;
  local_458.Number = 0;
  bVar15 = false;
  bVar16 = false;
  if ((local_4c0.ComparisonIndex.Value.Value == 0) && (local_4c0.Number == 0)) {
LAB_143ef4413:
    bVar14 = bVar16;
    bVar13 = bVar15;
    bVar15 = false;
    local_4c0 = local_458;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_480 = (TVector<float,2> *)((ulonglong)local_480 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_480,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar13 = false;
      bVar14 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_460.ComparisonIndex.Value = local_4c0.ComparisonIndex.Value.Value;
        local_460.Number = local_4c0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_460,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                   ,0x1f7);
        bVar13 = true;
        bVar14 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143ef4413;
    FThreadStats::AddMessage(local_4c0,CycleScopeStart);
    bVar15 = true;
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
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
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
    cVar31 = '\0';
  }
  else {
    cVar31 = '\x01';
  }
  iVar34 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  plVar33 = &this->_padding_;
  if ((iVar34 < 2) || ((int)*plVar33 <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    fVar1 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
    local_480 = &(this->StiffnessBias).MapView.OffsetRange;
    fVar39 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
    fVar5 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
    fVar44 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    if ((0.0 < fVar44) || (cVar31 != '\0')) {
      local_480 = &(this->StiffnessBias).MapView.OffsetRange;
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (0 < (int)*plVar33)) {
        do {
          iVar34 = (int)uVar27;
          fVar42 = fVar1;
          if (cVar29 != '\0') {
            fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar42 = fVar42 * *pfVar22 + fVar40;
          }
          fVar40 = fVar39;
          if (cVar23 != '\0') {
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar43 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar22 + fVar43;
          }
          fVar43 = fVar5;
          if (cVar28 != '\0') {
            fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar43 = fVar43 * *pfVar22 + fVar41;
          }
          fVar41 = fVar44;
          if (cVar31 != '\0') {
            fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar41 = fVar41 * *pfVar22 + fVar6;
          }
          local_43c = fVar40;
          local_438 = fVar42;
          local_434 = fVar43;
          ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_43c,fVar41);
          uVar27 = (ulonglong)(iVar34 + 1U);
        } while ((int)(iVar34 + 1U) < (int)*plVar33);
      }
      local_4a8 = &(this->DampingRatio).MapView.OffsetRange;
      local_4b8 = &(this->StiffnessWeft).MapView.OffsetRange;
      local_res8 = &(this->StiffnessWarp).MapView.OffsetRange;
      pTVar37 = &(this->StiffnessBias).MapView.OffsetRange;
      plVar33 = &this->_padding_;
      iVar34 = 0;
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        if ((int)*plVar33 < 1) goto LAB_143ef665b;
        do {
          fVar42 = fVar1;
          if (cVar29 != '\0') {
            fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)local_res8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar42 = fVar42 * *pfVar22 + fVar40;
          }
          fVar40 = fVar39;
          if (cVar23 != '\0') {
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar43 = *(float *)local_4b8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar22 + fVar43;
          }
          fVar43 = fVar5;
          if (cVar28 != '\0') {
            fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)pTVar37;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar43 = fVar43 * *pfVar22 + fVar41;
          }
          fVar41 = fVar44;
          if (cVar31 != '\0') {
            fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)local_4a8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar41 = fVar41 * *pfVar22 + fVar6;
          }
          local_40c = fVar40;
          local_408 = fVar42;
          local_404 = fVar43;
          ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_40c,fVar41);
          iVar17 = (int)*plVar33;
          iVar34 = iVar34 + 1;
        } while (iVar34 < iVar17);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        if ((int)*plVar33 < 1) goto LAB_143ef665b;
        do {
          fVar42 = fVar1;
          if (cVar29 != '\0') {
            fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)local_res8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar42 = fVar42 * *pfVar22 + fVar40;
          }
          fVar40 = fVar39;
          if (cVar23 != '\0') {
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar43 = *(float *)local_4b8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar22 + fVar43;
          }
          fVar43 = fVar5;
          if (cVar28 != '\0') {
            fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)pTVar37;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar43 = fVar43 * *pfVar22 + fVar41;
          }
          fVar41 = fVar44;
          if (cVar31 != '\0') {
            fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)local_4a8;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar41 = fVar41 * *pfVar22 + fVar6;
          }
          local_418 = fVar40;
          local_414 = fVar42;
          local_410 = fVar43;
          ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_418,fVar41);
          iVar17 = (int)*plVar33;
          iVar34 = iVar34 + 1;
        } while (iVar34 < iVar17);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        iVar17 = (int)*plVar33;
        if (0 < iVar17) {
          do {
            fVar42 = fVar1;
            if (cVar29 != '\0') {
              fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar40 = *(float *)local_res8;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar34);
              fVar42 = fVar42 * *pfVar22 + fVar40;
            }
            fVar40 = fVar39;
            if (cVar23 != '\0') {
              fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar43 = *(float *)local_4b8;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar34);
              fVar40 = fVar40 * *pfVar22 + fVar43;
            }
            fVar43 = fVar5;
            if (cVar28 != '\0') {
              fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar41 = *(float *)pTVar37;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar34);
              fVar43 = fVar43 * *pfVar22 + fVar41;
            }
            fVar41 = fVar44;
            if (cVar31 != '\0') {
              fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar6 = *(float *)local_4a8;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar34);
              fVar41 = fVar41 * *pfVar22 + fVar6;
            }
            local_424 = fVar40;
            local_420 = fVar42;
            local_41c = fVar43;
            ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_424,fVar41);
            iVar17 = (int)*plVar33;
            iVar34 = iVar34 + 1;
          } while (iVar34 < iVar17);
        }
      }
      else {
        iVar17 = (int)this->_padding_;
        if (0 < iVar17) {
          do {
            fVar42 = fVar1;
            if (cVar29 != '\0') {
              fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
              fVar40 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWarp).MapView.MapValues,iVar34);
              fVar42 = fVar42 * *pfVar22 + fVar40;
            }
            fVar40 = fVar39;
            if (cVar23 != '\0') {
              fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
              fVar43 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessWeft).MapView.MapValues,iVar34);
              fVar40 = fVar40 * *pfVar22 + fVar43;
            }
            fVar43 = fVar5;
            if (cVar28 != '\0') {
              fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
              fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->StiffnessBias).MapView.MapValues,iVar34);
              fVar43 = fVar43 * *pfVar22 + fVar41;
            }
            fVar41 = fVar44;
            if (cVar31 != '\0') {
              fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
              fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
              pfVar22 = TArrayView<float_const_,int>::operator[]
                                  (&(this->DampingRatio).MapView.MapValues,iVar34);
              fVar41 = fVar41 * *pfVar22 + fVar6;
            }
            local_430 = fVar40;
            local_42c = fVar42;
            local_428 = fVar43;
            ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                      (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_430,fVar41);
            iVar17 = (int)this->_padding_;
            iVar34 = iVar34 + 1;
          } while (iVar34 < iVar17);
        }
      }
      iVar34 = 0;
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (0 < iVar17)) {
        do {
          fVar42 = fVar1;
          if (cVar29 != '\0') {
            fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar40 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,iVar34);
            fVar42 = fVar42 * *pfVar22 + fVar40;
          }
          fVar40 = fVar39;
          if (cVar23 != '\0') {
            fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar43 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,iVar34);
            fVar40 = fVar40 * *pfVar22 + fVar43;
          }
          fVar43 = fVar5;
          if (cVar28 != '\0') {
            fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar41 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,iVar34);
            fVar43 = fVar43 * *pfVar22 + fVar41;
          }
          fVar41 = fVar44;
          if (cVar31 != '\0') {
            fVar41 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar6 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar22 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,iVar34);
            fVar41 = fVar41 * *pfVar22 + fVar6;
          }
          local_400 = fVar40;
          local_3fc = fVar42;
          local_3f8 = fVar43;
          ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
                    (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_400,fVar41);
          iVar34 = iVar34 + 1;
        } while (iVar34 < (int)this->_padding_);
      }
    }
    else if (0 < (int)*plVar33) {
      do {
        iVar34 = (int)uVar27;
        fVar44 = fVar1;
        if (cVar29 != '\0') {
          fVar44 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
          fVar42 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
          pfVar22 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWarp).MapView.MapValues,iVar34);
          fVar44 = fVar44 * *pfVar22 + fVar42;
        }
        fVar42 = fVar39;
        if (cVar23 != '\0') {
          fVar42 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
          fVar40 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
          pfVar22 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessWeft).MapView.MapValues,iVar34);
          fVar42 = fVar42 * *pfVar22 + fVar40;
        }
        fVar40 = fVar5;
        if (cVar28 != '\0') {
          fVar40 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
          fVar43 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
          pfVar22 = TArrayView<float_const_,int>::operator[]
                              (&(this->StiffnessBias).MapView.MapValues,iVar34);
          fVar40 = fVar40 * *pfVar22 + fVar43;
        }
        local_448 = fVar42;
        local_444 = fVar44;
        local_440 = fVar40;
        ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
                  (this,param_1,param_2,iVar34,(TVector<float,3> *)&local_448,0.0);
        uVar27 = (ulonglong)(iVar34 + 1U);
      } while ((int)(iVar34 + 1U) < (int)*plVar33);
    }
    goto LAB_143ef665b;
  }
  iVar34 = iVar34 + -1;
  lVar30 = (longlong)iVar34;
  if (bChaos_XPBDSpring_ISPC_Enabled == false) {
    fVar1 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
    uVar2 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
    uVar3 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
    uVar4 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
    uVar25 = 0;
    if ((0.0 < fVar1) || (cVar31 != '\0')) {
      if ((Chaos_XPBDSpring_SplitDampingMode == 4) && (uVar35 = uVar27, uVar36 = uVar27, 0 < iVar34)
         ) {
        do {
          uVar26 = (uint)uVar35;
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar36 * 4);
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_248 = &local_3b8;
          local_250 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l54::<lambda_1>,void,int>
                      ::Call;
          local_3b8 = this;
          local_3b0 = param_1;
          local_3a8 = param_2;
          local_3a4 = iVar34;
          local_3a0 = cVar29;
          local_39c = uVar2;
          local_398 = cVar23;
          local_394 = uVar3;
          local_390 = cVar28;
          local_38c = uVar4;
          local_388 = cVar31;
          local_384 = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar36 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_250,false);
          uVar36 = uVar36 + 1;
          uVar35 = (ulonglong)uVar26;
        } while ((longlong)uVar36 < lVar30);
      }
      if (Chaos_XPBDSpring_SplitDampingMode == 0) {
        uVar35 = uVar27;
        uVar36 = uVar27;
        if (lVar30 < 1) goto LAB_143ef665b;
        do {
          uVar26 = (uint)uVar35;
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar36 * 4);
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_208 = &local_2d8;
          local_210 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l62::<lambda_3>,void,int>
                      ::Call;
          local_2d8 = this;
          local_2d0 = param_1;
          local_2c8 = param_2;
          local_2c4 = iVar34;
          local_2c0 = cVar29;
          local_2bc = uVar2;
          local_2b8 = cVar23;
          local_2b4 = uVar3;
          local_2b0 = cVar28;
          local_2ac = uVar4;
          local_2a8 = cVar31;
          local_2a4 = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar36 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_210,false);
          uVar36 = uVar36 + 1;
          uVar35 = (ulonglong)uVar26;
        } while ((longlong)uVar36 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 1) {
        uVar35 = uVar27;
        uVar36 = uVar27;
        if (lVar30 < 1) goto LAB_143ef665b;
        do {
          uVar26 = (uint)uVar35;
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar36 * 4);
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_218 = &local_310;
          local_220 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l68::<lambda_5>,void,int>
                      ::Call;
          local_310 = this;
          local_308 = param_1;
          local_300 = param_2;
          local_2fc = iVar34;
          local_2f8 = cVar29;
          local_2f4 = uVar2;
          local_2f0 = cVar23;
          local_2ec = uVar3;
          local_2e8 = cVar28;
          local_2e4 = uVar4;
          local_2e0 = cVar31;
          local_2dc = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar36 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_220,false);
          uVar36 = uVar36 + 1;
          uVar35 = (ulonglong)uVar26;
        } while ((longlong)uVar36 < lVar30);
      }
      else if (Chaos_XPBDSpring_SplitDampingMode == 2) {
        uVar35 = uVar27;
        uVar36 = uVar27;
        if (lVar30 < 1) goto LAB_143ef665b;
        do {
          uVar26 = (uint)uVar35;
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar36 * 4);
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_228 = &local_348;
          local_230 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l65::<lambda_4>,void,int>
                      ::Call;
          local_348 = this;
          local_340 = param_1;
          local_338 = param_2;
          local_334 = iVar34;
          local_330 = cVar29;
          local_32c = uVar2;
          local_328 = cVar23;
          local_324 = uVar3;
          local_320 = cVar28;
          local_31c = uVar4;
          local_318 = cVar31;
          local_314 = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar36 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_230,false);
          uVar36 = uVar36 + 1;
          uVar35 = (ulonglong)uVar26;
        } while ((longlong)uVar36 < lVar30);
      }
      else {
        uVar35 = uVar27;
        uVar36 = uVar27;
        if (0 < lVar30) {
          do {
            uVar26 = (uint)uVar35;
            uVar24 = uVar25;
            if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar24 = ~uVar26 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar26 = uVar26 + 1;
            iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                             uVar36 * 4);
            uVar24 = uVar25;
            if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
              uVar24 = ~uVar26 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_238 = &local_380;
            local_240 = UE::Core::Private::Function::
                        TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l59::<lambda_2>,void,int>
                        ::Call;
            local_380 = this;
            local_378 = param_1;
            local_370 = param_2;
            local_36c = iVar34;
            local_368 = cVar29;
            local_364 = uVar2;
            local_360 = cVar23;
            local_35c = uVar3;
            local_358 = cVar28;
            local_354 = uVar4;
            local_350 = cVar31;
            local_34c = fVar1;
            PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data
                                       + uVar36 * 4 + 4) - iVar34,
                               (TFunctionRef<void___cdecl(int)> *)&local_240,false);
            uVar36 = uVar36 + 1;
            uVar35 = (ulonglong)uVar26;
          } while ((longlong)uVar36 < lVar30);
        }
      }
      if ((Chaos_XPBDSpring_SplitDampingMode == 3) && (uVar35 = uVar27, 0 < lVar30)) {
        do {
          uVar26 = (uint)uVar27;
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          uVar27 = (ulonglong)uVar26;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar35 * 4);
          uVar24 = 0;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_268 = &local_3f0;
          local_270 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l73::<lambda_6>,void,int>
                      ::Call;
          local_3f0 = this;
          local_3e8 = param_1;
          local_3e0 = param_2;
          local_3dc = iVar34;
          local_3d8 = cVar29;
          local_3d4 = uVar2;
          local_3d0 = cVar23;
          local_3cc = uVar3;
          local_3c8 = cVar28;
          local_3c4 = uVar4;
          local_3c0 = cVar31;
          local_3bc = fVar1;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar35 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_270,false);
          uVar35 = uVar35 + 1;
        } while ((longlong)uVar35 < lVar30);
      }
    }
    else {
      uVar35 = uVar27;
      if (0 < iVar34) {
        do {
          uVar26 = (uint)uVar27;
          uVar24 = 0;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar26 = uVar26 + 1;
          uVar27 = (ulonglong)uVar26;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           uVar35 * 4);
          uVar24 = uVar25;
          if ((int)uVar26 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_258 = &local_2a0;
          local_260 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::__l77::<lambda_7>,void,int>
                      ::Call;
          local_2a0 = this;
          local_298 = param_1;
          local_290 = param_2;
          local_28c = iVar34;
          local_288 = cVar29;
          local_284 = uVar2;
          local_280 = cVar23;
          local_27c = uVar3;
          local_278 = cVar28;
          local_274 = uVar4;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     uVar35 * 4 + 4) - iVar34,
                             (TFunctionRef<void___cdecl(int)> *)&local_260,false);
          uVar35 = uVar35 + 1;
        } while ((longlong)uVar35 < lVar30);
      }
    }
    goto LAB_143ef665b;
  }
  if (((cVar29 == '\0') && (cVar23 == '\0')) && (cVar28 == '\0')) {
    if (cVar31 == '\0') {
      local_470 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      local_46c = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      local_468 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar1 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((local_470 <= local_46c) || (fVar39 = local_470, local_470 <= local_468)) &&
         (fVar39 = local_468, local_468 <= local_46c)) {
        fVar39 = local_46c;
      }
      if (fVar39 <= 0.0) goto LAB_143ef665b;
      if (fVar1 <= 0.0) {
        if (lVar30 < 1) goto LAB_143ef665b;
      }
      else {
        if (Chaos_XPBDSpring_SplitDampingMode == 0) {
          if (0 < lVar30) {
            local_4a8 = (TVector<float,2> *)0x0;
            do {
              uVar24 = (uint)uVar27;
              uVar25 = 0;
              if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar25 = ~uVar24 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar24 = uVar24 + 1;
              iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)local_4a8 * 4);
              lVar32 = (longlong)iVar34;
              uVar25 = 0;
              if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
                uVar25 = ~uVar24 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar7 = (this->Lambdas).AllocatorInstance.Data;
              iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                               (longlong)local_4a8 * 4 + 4);
              pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
              lVar9 = this->_padding_;
              lVar10 = this->_padding_;
              pTVar20 = FSolverParticlesRange::XArray(param_1,&local_128);
              pTVar11 = pTVar20->DataPtr;
              pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_118);
              ApplyXPBDAnisoSpringConstraintsWithDamping
                        (pTVar21->DataPtr,pTVar11,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,
                         pFVar8 + lVar32 * 0xc,pFVar7 + lVar32 * 4,param_2,&local_470,fVar1,
                         iVar17 - iVar34);
              uVar27 = (ulonglong)uVar24;
              local_4a8 = (TVector<float,2> *)((longlong)local_4a8 + 1);
            } while ((longlong)local_4a8 < lVar30);
          }
          goto LAB_143ef665b;
        }
        if (lVar30 < 1) goto LAB_143ef665b;
        local_4a8 = (TVector<float,2> *)0x0;
        do {
          uVar24 = (uint)uVar27;
          uVar25 = 0;
          if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar24 = uVar24 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_4a8 * 4);
          lVar32 = (longlong)iVar34;
          uVar25 = 0;
          if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
          iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_4a8 * 4 + 4);
          pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          lVar9 = this->_padding_;
          lVar10 = this->_padding_;
          pTVar20 = FSolverParticlesRange::XArray(param_1,&local_108);
          pTVar11 = pTVar20->DataPtr;
          pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_f8);
          ApplyXPBDAnisoSpringDampingConstraints
                    (pTVar21->DataPtr,pTVar11,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,
                     pFVar8 + lVar32 * 0xc,pFVar7 + lVar32 * 4,param_2,&local_470,fVar1,
                     iVar17 - iVar34);
          uVar27 = (ulonglong)uVar24;
          local_4a8 = (TVector<float,2> *)((longlong)local_4a8 + 1);
        } while ((longlong)local_4a8 < lVar30);
      }
      uVar25 = 0;
      local_res20 = 0;
      do {
        uVar24 = 0;
        if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar24 = ~uVar25 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar25 = uVar25 + 1;
        iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         local_res20 * 4);
        lVar32 = (longlong)iVar34;
        uVar24 = 0;
        if ((int)uVar25 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
          uVar24 = ~uVar25 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                         local_res20 * 4 + 4);
        pFVar7 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
        lVar9 = this->_padding_;
        lVar10 = this->_padding_;
        pFVar8 = (this->Lambdas).AllocatorInstance.Data;
        pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_1d8);
        ApplyXPBDAnisoSpringConstraints
                  (pTVar21->DataPtr,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,pFVar7 + lVar32 * 0xc,
                   pFVar8 + lVar32 * 4,param_2,&local_470,iVar17 - iVar34);
        local_res20 = local_res20 + 1;
      } while (local_res20 < lVar30);
      goto LAB_143ef665b;
    }
LAB_143ef4a7b:
    if (Chaos_XPBDSpring_SplitDampingMode == 0) {
      if (0 < lVar30) {
        local_488 = (float *)0x0;
        do {
          uVar24 = (uint)uVar27;
          uVar25 = 0;
          if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar24 = uVar24 + 1;
          iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_488 * 4);
          lVar32 = (longlong)iVar34;
          uVar25 = 0;
          if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar25 = ~uVar24 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           (longlong)local_488 * 4 + 4);
          if (cVar31 == '\0') {
            local_4a8 = (TVector<float,2> *)0x0;
          }
          else {
            local_1f8.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
            local_1f8.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
            local_1f8._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
            local_4a8 = (TVector<float,2> *)
                        TArrayView<float_const_,int>::operator[](&local_1f8,iVar34);
          }
          if (cVar28 == '\0') {
            local_478 = (float *)0x0;
          }
          else {
            local_1c8 = (this->StiffnessBias).MapView.MapValues.DataPtr;
            uStack_1c0 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
            local_478 = local_1c8 + lVar32;
          }
          if (cVar23 == '\0') {
            local_498 = (float *)0x0;
          }
          else {
            local_498 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar32;
          }
          if (cVar29 == '\0') {
            local_490 = (float *)0x0;
          }
          else {
            local_1b8 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
            uStack_1b0 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
            local_490 = local_1b8 + lVar32;
          }
          pFVar7 = (this->Lambdas).AllocatorInstance.Data;
          pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          lVar9 = this->_padding_;
          lVar10 = this->_padding_;
          pTVar20 = FSolverParticlesRange::XArray(param_1,&local_1a8);
          pTVar11 = pTVar20->DataPtr;
          pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_138);
          ApplyXPBDAnisoSpringConstraintsWithDampingAndWeightMaps
                    (pTVar21->DataPtr,pTVar11,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,
                     pFVar8 + lVar32 * 0xc,pFVar7 + lVar32 * 4,param_2,cVar29,
                     &(this->StiffnessWarp).MapView.OffsetRange,local_490,cVar23,
                     &(this->StiffnessWeft).MapView.OffsetRange,local_498,cVar28,
                     &(this->StiffnessBias).MapView.OffsetRange,local_478,cVar31,
                     &(this->DampingRatio).MapView.OffsetRange,local_4a8,iVar17 - iVar34);
          uVar27 = (ulonglong)uVar24;
          local_488 = (float *)((longlong)local_488 + 1);
        } while ((longlong)local_488 < lVar30);
      }
      goto LAB_143ef665b;
    }
    if (lVar30 < 1) goto LAB_143ef4fc7;
    local_4a0 = (float *)0x0;
    do {
      uVar24 = (uint)uVar27;
      uVar25 = 0;
      if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar24 = uVar24 + 1;
      iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_4a0 * 4);
      lVar32 = (longlong)iVar34;
      uVar25 = 0;
      if ((int)uVar24 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                       (longlong)local_4a0 * 4 + 4);
      if (cVar31 == '\0') {
        local_488 = (float *)0x0;
      }
      else {
        local_1e8.DataPtr = (this->DampingRatio).MapView.MapValues.DataPtr;
        local_1e8.ArrayNum = (this->DampingRatio).MapView.MapValues.ArrayNum;
        local_1e8._12_4_ = *(undefined4 *)&(this->DampingRatio).MapView.MapValues.field_0xc;
        local_488 = TArrayView<float_const_,int>::operator[](&local_1e8,iVar34);
      }
      if (cVar28 == '\0') {
        local_490 = (float *)0x0;
      }
      else {
        local_198 = (this->StiffnessBias).MapView.MapValues.DataPtr;
        uStack_190 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
        local_490 = local_198 + lVar32;
      }
      if (cVar23 == '\0') {
        local_498 = (float *)0x0;
      }
      else {
        local_188 = (this->StiffnessWeft).MapView.MapValues.DataPtr;
        uStack_180 = *(undefined8 *)&(this->StiffnessWeft).MapView.MapValues.ArrayNum;
        local_498 = local_188 + lVar32;
      }
      if (cVar29 == '\0') {
        local_478 = (float *)0x0;
      }
      else {
        local_178 = (this->StiffnessWarp).MapView.MapValues.DataPtr;
        uStack_170 = *(undefined8 *)&(this->StiffnessWarp).MapView.MapValues.ArrayNum;
        local_478 = local_178 + lVar32;
      }
      pFVar7 = (this->LambdasDamping).AllocatorInstance.Data;
      pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar9 = this->_padding_;
      lVar10 = this->_padding_;
      pTVar20 = FSolverParticlesRange::XArray(param_1,&local_168);
      pTVar11 = pTVar20->DataPtr;
      pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,&local_158);
      ApplyXPBDAnisoSpringDampingConstraintsWithWeightMaps
                (pTVar21->DataPtr,pTVar11,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,
                 pFVar8 + lVar32 * 0xc,pFVar7 + lVar32 * 4,param_2,cVar29,
                 &(this->StiffnessWarp).MapView.OffsetRange,local_478,cVar23,
                 &(this->StiffnessWeft).MapView.OffsetRange,local_498,cVar28,
                 &(this->StiffnessBias).MapView.OffsetRange,local_490,cVar31,
                 &(this->DampingRatio).MapView.OffsetRange,local_488,iVar17 - iVar34);
      uVar27 = (ulonglong)uVar24;
      local_4a0 = (float *)((longlong)local_4a0 + 1);
    } while ((longlong)local_4a0 < lVar30);
  }
  else {
    if ((cVar31 != '\0') || (0.0 < *(float *)&(this->DampingRatio).MapView.OffsetRange))
    goto LAB_143ef4a7b;
LAB_143ef4fc7:
    if (lVar30 < 1) goto LAB_143ef665b;
  }
  local_4b0 = 0;
  local_498 = (float *)0x0;
  do {
    uVar25 = 0;
    if ((int)local_4b0 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar25 = ~local_4b0 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_4b0 = local_4b0 + 1;
    iVar34 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_498 * 4);
    lVar32 = (longlong)iVar34;
    uVar25 = 0;
    if ((int)local_4b0 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
      uVar25 = ~local_4b0 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar17 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                     (longlong)local_498 * 4 + 4);
    if (cVar28 == '\0') {
      local_4a0 = (float *)0x0;
    }
    else {
      local_148 = (this->StiffnessBias).MapView.MapValues.DataPtr;
      uStack_140 = *(undefined8 *)&(this->StiffnessBias).MapView.MapValues.ArrayNum;
      local_4a0 = local_148 + lVar32;
    }
    if (cVar23 == '\0') {
      local_488 = (float *)0x0;
    }
    else {
      local_488 = (this->StiffnessWeft).MapView.MapValues.DataPtr + lVar32;
    }
    if (cVar29 == '\0') {
      local_490 = (float *)0x0;
    }
    else {
      local_490 = (this->StiffnessWarp).MapView.MapValues.DataPtr + lVar32;
    }
    pFVar7 = (this->Lambdas).AllocatorInstance.Data;
    pFVar8 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    pTVar21 = FSolverParticlesRange::GetPAndInvM(param_1,local_e8);
    ApplyXPBDAnisoSpringConstraintsWithWeightMaps
              (pTVar21->DataPtr,lVar10 + lVar32 * 8,lVar9 + lVar32 * 4,pFVar8 + lVar32 * 0xc,
               pFVar7 + lVar32 * 4,param_2,cVar29,&(this->StiffnessWarp).MapView.OffsetRange,
               local_490,cVar23,&(this->StiffnessWeft).MapView.OffsetRange,local_488,cVar28,
               &(this->StiffnessBias).MapView.OffsetRange,local_4a0,iVar17 - iVar34);
    local_498 = (float *)((longlong)local_498 + 1);
  } while ((longlong)local_498 < lVar30);
LAB_143ef665b:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(local_4c0,CycleScopeEnd);
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles> @ 143ef8760

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_a8;
  TVector<float,3> local_9c [8];
  
  lVar12 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar12 * 8);
  iVar4 = *(int *)(this->_padding_ + lVar12 * 8);
  iVar5 = (pTVar1->field0_0x0)._s_0.Y;
  uVar9 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar9 = uVar13;
  }
  fVar14 = *(float *)(pFVar6 + lVar12 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)param_4 * *(float *)(pFVar6 + lVar12 * 0xc) +
           *(float *)(pFVar6 + lVar12 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (&local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14,param_5);
  fVar2 = *(float *)pTVar10;
  fVar15 = *(float *)&pTVar10->field_0x4;
  fVar16 = *(float *)&pTVar10->field_0x8;
  uVar9 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_9c,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14);
  fVar14 = *(float *)pTVar10;
  fVar15 = fVar15 + *(float *)&pTVar10->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar10->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar3 = *pfVar11;
  pTVar10 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar10 = fVar3 * (fVar2 + fVar14) + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar3 * fVar15 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar3 * fVar16 + *(float *)&pTVar10->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar3 = *pfVar11;
  pTVar10 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar3 * (fVar2 + fVar14);
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar3 * fVar15;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar3 * fVar16;
  return;
}

// ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143ef91d0

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar12 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar12 * 8);
  iVar4 = *(int *)(this->_padding_ + lVar12 * 8);
  iVar5 = (pTVar1->field0_0x0)._s_0.Y;
  uVar9 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar9 = uVar13;
  }
  fVar14 = *(float *)(pFVar6 + lVar12 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar12 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar12 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14,param_5);
  fVar2 = *(float *)pTVar10;
  fVar15 = *(float *)&pTVar10->field_0x4;
  fVar16 = *(float *)&pTVar10->field_0x8;
  uVar9 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14);
  fVar14 = *(float *)pTVar10;
  fVar15 = fVar15 + *(float *)&pTVar10->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar10->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar3 = *pfVar11;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar10 = fVar3 * (fVar2 + fVar14) + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar3 * fVar15 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar3 * fVar16 + *(float *)&pTVar10->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar3 = *pfVar11;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar3 * (fVar2 + fVar14);
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar3 * fVar15;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar3 * fVar16;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles> @ 143ef9a90

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> local_88 [6];
  
  lVar17 = (longlong)param_3;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar17 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar17 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar17 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar17 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar17 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar17 * 4),
                       (float *)(pFVar10 + lVar17 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange> @ 143efa300

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  TVector<float,3> local_a8 [9];
  
  lVar16 = (longlong)param_3;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar16 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar16 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar16 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar16 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar16 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar16 * 4),
                       (float *)(pFVar10 + lVar16 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles> @ 143efcd70

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> local_88 [6];
  
  lVar17 = (longlong)param_3;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar17 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar17 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar17 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar17 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar17 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->Lambdas).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDeltaWithDamping<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar17 * 4),
                       (float *)(pFVar10 + lVar17 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange> @ 143efd5e0

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  TVector<float,3> local_a8 [9];
  
  lVar16 = (longlong)param_3;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar16 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar16 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar16 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar16 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar16 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->Lambdas).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDeltaWithDamping<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar16 * 4),
                       (float *)(pFVar10 + lVar16 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles> @ 143effc00

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_a8;
  TVector<float,3> local_9c [8];
  
  lVar12 = (longlong)param_3;
  uVar13 = (uint)~param_3 >> 0x1f;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar12 * 8);
  iVar4 = *(int *)(this->_padding_ + lVar12 * 8);
  iVar5 = (pTVar1->field0_0x0)._s_0.Y;
  uVar9 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar9 = uVar13;
  }
  fVar14 = *(float *)(pFVar6 + lVar12 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)param_4 * *(float *)(pFVar6 + lVar12 * 0xc) +
           *(float *)(pFVar6 + lVar12 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (&local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14);
  fVar2 = *(float *)pTVar10;
  fVar15 = *(float *)&pTVar10->field_0x4;
  fVar16 = *(float *)&pTVar10->field_0x8;
  uVar9 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar9 = uVar13;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar13;
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
  pTVar10 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_9c,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar12 * 4),
                       (float *)(pFVar6 + lVar12 * 4),fVar14,param_5);
  fVar14 = *(float *)pTVar10;
  fVar15 = fVar15 + *(float *)&pTVar10->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar10->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar4);
  fVar3 = *pfVar11;
  pTVar10 = FSolverParticles::P(param_1,iVar4);
  *(float *)pTVar10 = fVar3 * (fVar2 + fVar14) + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar3 * fVar15 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar3 * fVar16 + *(float *)&pTVar10->field_0x8;
  pfVar11 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar5);
  fVar3 = *pfVar11;
  pTVar10 = FSolverParticles::P(param_1,iVar5);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar3 * (fVar2 + fVar14);
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar3 * fVar15;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar3 * fVar16;
  return;
}

// ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange> @ 143f00670

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TVector<float,3> *pTVar10;
  float *pfVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  TVector<float,3> local_b8;
  TVector<float,3> local_ac [9];
  
  lVar13 = (longlong)param_3;
  uVar12 = (uint)~param_3 >> 0x1f;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar12;
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
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar13 * 8);
  iVar4 = *(int *)(this->_padding_ + lVar13 * 8);
  iVar5 = (pTVar1->field0_0x0)._s_0.Y;
  uVar9 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar9 = uVar12;
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
  pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar9 = uVar12;
  }
  fVar14 = *(float *)(pFVar6 + lVar13 * 0xc + 4) * *(float *)&param_4->field_0x4 +
           *(float *)(pFVar6 + lVar13 * 0xc) * *(float *)param_4 +
           *(float *)(pFVar6 + lVar13 * 0xc + 8) * *(float *)&param_4->field_0x8;
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
  pFVar6 = (this->Lambdas).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar12;
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
  pTVar10 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (&local_b8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar6 + lVar13 * 4),fVar14);
  fVar2 = *(float *)pTVar10;
  fVar15 = *(float *)&pTVar10->field_0x4;
  fVar16 = *(float *)&pTVar10->field_0x8;
  uVar9 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar9 = uVar12;
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
  pFVar6 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar9 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar9 = uVar12;
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
  pTVar10 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_ac,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar13 * 4),
                       (float *)(pFVar6 + lVar13 * 4),fVar14,param_5);
  fVar14 = *(float *)pTVar10;
  fVar15 = fVar15 + *(float *)&pTVar10->field_0x4;
  fVar16 = fVar16 + *(float *)&pTVar10->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar4);
  fVar3 = *pfVar11;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar4);
  *(float *)pTVar10 = fVar3 * (fVar2 + fVar14) + *(float *)pTVar10;
  *(float *)&pTVar10->field_0x4 = fVar3 * fVar15 + *(float *)&pTVar10->field_0x4;
  *(float *)&pTVar10->field_0x8 = fVar3 * fVar16 + *(float *)&pTVar10->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pfVar11 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar5);
  fVar3 = *pfVar11;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Particles",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                       ,0x57,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar10 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar5);
  *(float *)pTVar10 = *(float *)pTVar10 - fVar3 * (fVar2 + fVar14);
  *(float *)&pTVar10->field_0x4 = *(float *)&pTVar10->field_0x4 - fVar3 * fVar15;
  *(float *)&pTVar10->field_0x8 = *(float *)&pTVar10->field_0x8 - fVar3 * fVar16;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles> @ 143f00f30

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> local_88 [6];
  
  lVar17 = (longlong)param_3;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar17 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar17 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar17 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar17 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar17 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->Lambdas).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar17 * 4),
                       (float *)(pFVar10 + lVar17 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                      );
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange> @ 143f01780

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  TVector<float,3> local_a8 [9];
  
  lVar16 = (longlong)param_3;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar16 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar16 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar16 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar16 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar16 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->Lambdas).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->Lambdas).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar16 * 4),
                       (float *)(pFVar10 + lVar16 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                      );
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles> @ 143f01f60

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  TVector<float,3> local_88 [6];
  
  lVar17 = (longlong)param_3;
  uVar16 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar17 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar17 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar17 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar17 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar17 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar16;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticles>
                      (local_88,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar17 * 4),
                       (float *)(pFVar10 + lVar17 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar8);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  pfVar15 = TDynamicParticles<float,3>::InvM((TDynamicParticles<float,3> *)param_1,iVar9);
  fVar5 = *pfVar15;
  pTVar14 = FSolverParticles::P(param_1,iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange> @ 143f027d0

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          int param_3,TVector<float,3> *param_4,float param_5)

{
  TVector<int,2> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TVector<float,3> *pTVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  TVector<float,3> local_a8 [9];
  
  lVar16 = (longlong)param_3;
  uVar17 = (uint)~param_3 >> 0x1f;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar1 = (TVector<int,2> *)(this->_padding_ + lVar16 * 8);
  iVar8 = *(int *)(this->_padding_ + lVar16 * 8);
  iVar9 = (pTVar1->field0_0x0)._s_0.Y;
  uVar13 = 0;
  if (param_3 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
  fVar2 = *(float *)(pFVar10 + lVar16 * 0xc + 4);
  fVar3 = *(float *)&param_4->field_0x4;
  fVar4 = *(float *)(pFVar10 + lVar16 * 0xc);
  fVar5 = *(float *)param_4;
  fVar6 = *(float *)(pFVar10 + lVar16 * 0xc + 8);
  fVar7 = *(float *)&param_4->field_0x8;
  uVar13 = 0;
  if (param_3 < (this->LambdasDamping).ArrayNum) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pFVar10 = (this->LambdasDamping).AllocatorInstance.Data;
  uVar13 = 0;
  if (param_3 < (int)this->_padding_) {
    uVar13 = uVar17;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = Spring::GetXPBDSpringDampingDelta<Chaos::Softs::FSolverParticlesRange>
                      (local_a8,param_1,param_2,pTVar1,*(float *)(this->_padding_ + lVar16 * 4),
                       (float *)(pFVar10 + lVar16 * 4),fVar2 * fVar3 + fVar4 * fVar5 + fVar6 * fVar7
                       ,param_5);
  fVar2 = *(float *)pTVar14;
  fVar3 = *(float *)&pTVar14->field_0x4;
  fVar4 = *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar8);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar8);
  *(float *)pTVar14 = fVar5 * fVar2 + *(float *)pTVar14;
  *(float *)&pTVar14->field_0x4 = fVar5 * fVar3 + *(float *)&pTVar14->field_0x4;
  *(float *)&pTVar14->field_0x8 = fVar5 * fVar4 + *(float *)&pTVar14->field_0x8;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pfVar15 = TDynamicParticles<float,3>::InvM
                      (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                       *(int *)&param_1->field_0x10 + iVar9);
  fVar5 = *pfVar15;
  if (*(longlong *)&param_1->field_0x8 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Particles",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                        ,0x57,L"");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  pTVar14 = FSolverParticles::P(*(FSolverParticles **)&param_1->field_0x8,
                                *(int *)&param_1->field_0x10 + iVar9);
  *(float *)pTVar14 = *(float *)pTVar14 - fVar5 * fVar2;
  *(float *)&pTVar14->field_0x4 = *(float *)&pTVar14->field_0x4 - fVar5 * fVar3;
  *(float *)&pTVar14->field_0x8 = *(float *)&pTVar14->field_0x8 - fVar5 * fVar4;
  return;
}

// InitColor<Chaos::Softs::FSolverParticles> @ 143f0b0b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_e8 [2];
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> local_e0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_d0;
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticles,2,0>
            (&local_78,(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
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
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_e0,(int)this->_padding_,Default);
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
  uVar13 = (ulonglong)local_78.ArrayNum;
  local_e8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar13 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar14.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar8 = local_58;
    piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar16 = &this->ConstraintsPerColorStartIndex;
    plVar15 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data;
    if (local_78.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar19 = (pTVar16->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data == pTVar8) {
      if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar21 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar10 == *piVar21) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar16->AllocatorInstance,piVar21);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
      *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_e8[0];
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar15 != &local_a0) {
        if ((void *)*plVar15 != (void *)0x0) {
          FMemory::Free((void *)*plVar15);
        }
        *plVar15 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar15 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar15 != &local_b0) {
        if ((void *)*plVar15 != (void *)0x0) {
          FMemory::Free((void *)*plVar15);
        }
        *plVar15 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->BaseDists;
      if (pTVar1 != &local_c0) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
        (this->BaseDists).ArrayNum = local_c0.ArrayNum;
        (this->BaseDists).ArrayMax = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->WarpWeftBiasBaseMultipliers;
      if (pTVar2 != &local_d0) {
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar2->AllocatorInstance).Data = local_d0.AllocatorInstance.Data;
        (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_d0.ArrayNum;
        (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_d0.ArrayMax;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar3 = &this->WarpWeftScaleBaseMultipliers;
      if (pTVar3 != &local_e0) {
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar3->AllocatorInstance).Data = local_e0.AllocatorInstance.Data;
        (this->WarpWeftScaleBaseMultipliers).ArrayNum = local_e0.ArrayNum;
        (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_e0.ArrayMax;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->StiffnessWeft,&local_90,(this->StiffnessWeft).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->StiffnessBias,&local_90,(this->StiffnessBias).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->DampingRatio,&local_90,(this->DampingRatio).MapValues.ArrayNum);
      FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_90);
      FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
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
    if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar21 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar16->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_e8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->AllocatorInstance).Data;
    local_60 = pFVar19 + uVar13 * 4;
    while( true ) {
      pFVar6 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar6) break;
      uVar18 = *(uint *)pFVar19;
      lVar22 = (longlong)(int)uVar18;
      uVar20 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)(this->_padding_ + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_a0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar17 * 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar4 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_e8[0] < local_b0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar17 * 4) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->BaseDists).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar4 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_e8[0] < local_c0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar17 * 4) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)(pFVar6 + lVar22 * 0xc);
      uVar4 = *(undefined4 *)(pFVar6 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_d0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_d0.AllocatorInstance.Data + lVar17 * 0xc) = uVar5;
      *(undefined4 *)(local_d0.AllocatorInstance.Data + lVar17 * 0xc + 8) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)
               ((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_e0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = local_e8[0];
      *(undefined8 *)(local_e0.AllocatorInstance.Data + lVar17 * 8) = uVar5;
      uVar12 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_e8[0] = local_e8[0] + 1;
      pFVar19 = pFVar19 + 4;
      FVar14.Data = (FScriptContainerElement *)local_68;
    }
    uVar13 = (ulonglong)local_80;
    FVar14.Data = FVar14.Data + 0x10;
  } while( true );
}

// InitColor<Chaos::Softs::FSolverParticlesRange> @ 143f0d830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  longlong lVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int *piVar21;
  longlong lVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_e8 [2];
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> local_e0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_d0;
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_68;
  FScriptContainerElement *local_60;
  TArray<int,TSizedDefaultAllocator<32>_> *local_58;
  
  iVar10 = (int)this->_padding_;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,2,0>
            (&local_78,(TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)&this->_padding_
             ,param_1,iVar10,*(int *)((longlong)&this->_padding_ + 4) + iVar10);
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
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_a0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)this->_padding_,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_c0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_d0,(int)this->_padding_,Default);
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_e0,(int)this->_padding_,Default);
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
  uVar13 = (ulonglong)local_78.ArrayNum;
  local_e8[0] = 0;
  local_58 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_78.AllocatorInstance.Data + uVar13 * 0x10);
  local_80 = local_78.ArrayNum;
  FVar14.Data = local_78.AllocatorInstance.Data;
  do {
    pTVar8 = local_58;
    piVar21 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar16 = &this->ConstraintsPerColorStartIndex;
    plVar15 = &this->_padding_;
    local_68 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data;
    if (local_78.ArrayNum != (uint)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar19 = (pTVar16->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data == pTVar8) {
      if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
          ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar21 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar10 == *piVar21) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar16->AllocatorInstance,piVar21);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
      *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_e8[0];
      if ((TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *)plVar15 != &local_a0) {
        if ((void *)*plVar15 != (void *)0x0) {
          FMemory::Free((void *)*plVar15);
        }
        *plVar15 = (longlong)local_a0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_a0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_a0.ArrayMax;
        local_a0.ArrayNum = 0;
        local_a0.ArrayMax = 0;
        local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      plVar15 = &this->_padding_;
      if ((TArray<float,TSizedDefaultAllocator<32>_> *)plVar15 != &local_b0) {
        if ((void *)*plVar15 != (void *)0x0) {
          FMemory::Free((void *)*plVar15);
        }
        *plVar15 = (longlong)local_b0.AllocatorInstance.Data;
        *(int *)&this->_padding_ = local_b0.ArrayNum;
        *(int *)((longlong)&this->_padding_ + 4) = local_b0.ArrayMax;
        local_b0.ArrayNum = 0;
        local_b0.ArrayMax = 0;
        local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->BaseDists;
      if (pTVar1 != &local_c0) {
        pFVar19 = (pTVar1->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar1->AllocatorInstance).Data = local_c0.AllocatorInstance.Data;
        (this->BaseDists).ArrayNum = local_c0.ArrayNum;
        (this->BaseDists).ArrayMax = local_c0.ArrayMax;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar2 = &this->WarpWeftBiasBaseMultipliers;
      if (pTVar2 != &local_d0) {
        pFVar19 = (pTVar2->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar2->AllocatorInstance).Data = local_d0.AllocatorInstance.Data;
        (this->WarpWeftBiasBaseMultipliers).ArrayNum = local_d0.ArrayNum;
        (this->WarpWeftBiasBaseMultipliers).ArrayMax = local_d0.ArrayMax;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar3 = &this->WarpWeftScaleBaseMultipliers;
      if (pTVar3 != &local_e0) {
        pFVar19 = (pTVar3->AllocatorInstance).Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        (pTVar3->AllocatorInstance).Data = local_e0.AllocatorInstance.Data;
        (this->WarpWeftScaleBaseMultipliers).ArrayNum = local_e0.ArrayNum;
        (this->WarpWeftScaleBaseMultipliers).ArrayMax = local_e0.ArrayMax;
        local_e0.ArrayNum = 0;
        local_e0.ArrayMax = 0;
        local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FPBDWeightMap::ReorderIndices((FPBDWeightMap *)&this->_padding_,&local_90);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->StiffnessWeft,&local_90,(this->StiffnessWeft).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->StiffnessBias,&local_90,(this->StiffnessBias).MapValues.ArrayNum);
      FPBDFlatWeightMap::ReorderIndicesAndShrink
                (&this->DampingRatio,&local_90,(this->DampingRatio).MapValues.ArrayNum);
      FPBDWeightMap::ReorderIndices(&this->WarpScale,&local_90);
      FPBDWeightMap::ReorderIndices(&this->WeftScale,&local_90);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
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
    if (((pFVar19 <= (FScriptContainerElement *)local_e8) &&
        ((FScriptContainerElement *)local_e8 < pFVar19 + (longlong)*piVar21 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar10 == *piVar21) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar16->AllocatorInstance,piVar21);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar10 + 1;
    *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_e8[0];
    local_res20 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->ArrayNum;
    uVar13 = (ulonglong)(int)local_res20;
    pFVar19 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->AllocatorInstance).Data;
    local_60 = pFVar19 + uVar13 * 4;
    while( true ) {
      pFVar6 = local_60;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar14.Data)->ArrayNum != (int)uVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar19 == pFVar6) break;
      uVar18 = *(uint *)pFVar19;
      lVar22 = (longlong)(int)uVar18;
      uVar20 = ~uVar18 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)(this->_padding_ + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_a0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_a0.AllocatorInstance.Data + lVar17 * 8) = uVar5;
      uVar11 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar4 = *(undefined4 *)(this->_padding_ + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_e8[0] < local_b0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(local_b0.AllocatorInstance.Data + lVar17 * 4) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->BaseDists).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar4 = *(undefined4 *)((this->BaseDists).AllocatorInstance.Data + lVar22 * 4);
      uVar11 = 0;
      if ((int)local_e8[0] < local_c0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined4 *)(local_c0.AllocatorInstance.Data + lVar17 * 4) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)(pFVar6 + lVar22 * 0xc);
      uVar4 = *(undefined4 *)(pFVar6 + lVar22 * 0xc + 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_d0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(local_d0.AllocatorInstance.Data + lVar17 * 0xc) = uVar5;
      *(undefined4 *)(local_d0.AllocatorInstance.Data + lVar17 * 0xc + 8) = uVar4;
      uVar11 = 0;
      if ((int)uVar18 < (this->WarpWeftScaleBaseMultipliers).ArrayNum) {
        uVar11 = uVar20;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar17 = (longlong)(int)local_e8[0];
      uVar5 = *(undefined8 *)
               ((this->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data + lVar22 * 8);
      uVar11 = 0;
      if ((int)local_e8[0] < local_e0.ArrayNum) {
        uVar11 = ~local_e8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = local_e8[0];
      *(undefined8 *)(local_e0.AllocatorInstance.Data + lVar17 * 8) = uVar5;
      uVar12 = 0;
      if ((int)uVar18 < local_90.ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = (ulonglong)local_res20;
      *(uint *)(local_90.AllocatorInstance.Data + lVar22 * 4) = uVar11;
      local_e8[0] = local_e8[0] + 1;
      pFVar19 = pFVar19 + 4;
      FVar14.Data = (FScriptContainerElement *)local_68;
    }
    uVar13 = (ulonglong)local_80;
    FVar14.Data = FVar14.Data + 0x10;
  } while( true );
}

// FXPBDAnisotropicEdgeSpringConstraints @ 143f14790

FXPBDAnisotropicEdgeSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,int param_2,
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
  FXPBDAnisotropicEdgeSpringConstraints *pFVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_e8;
  TVector<float,2> local_e0;
  TVector<float,2> local_d8;
  TArrayView<float_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_80;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_70 [3];
  
  pTVar6 = param_16;
  pFVar5 = param_4;
  fVar4 = __real_4e6e6b28;
  local_d0.DataPtr = (float *)0x0;
  local_d0.ArrayNum = 0;
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,param_3,&param_4->MElements,&local_d0
             ,param_16,true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos__6B_;
  local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,(TVector<float,2> *)&param_4,param_10,&local_c0,(int)lVar3,iVar1,
             (void *)0x0);
  local_b0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_res8,param_11,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_res10,param_12,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_e8,param_13,&local_90,(int)lVar3,iVar1,(void *)0x0);
  local_80.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WarpScale,&local_e0,param_14,&local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_70[0].DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDWeightMap::FPBDWeightMap<2>
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

// FXPBDAnisotropicEdgeSpringConstraints @ 143f14ce0

FXPBDAnisotropicEdgeSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticles *param_1,int param_2,
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
  FXPBDAnisotropicEdgeSpringConstraints *pFVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_f8;
  TVector<float,2> local_e8;
  TVector<float,2> local_e0;
  TVector<float,2> local_d8;
  TArrayView<float_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_80;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_70 [3];
  
  pTVar6 = param_13;
  pFVar5 = param_4;
  fVar4 = __real_4e6e6b28;
  local_d0.DataPtr = (float *)0x0;
  local_d0.ArrayNum = 0;
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,param_3,&param_4->MElements,&local_d0
             ,param_13,true,__real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos__6B_;
  local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
  local_c0.ArrayNum = (int)this->_padding_;
  if (local_c0.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,(TVector<float,2> *)&param_4,param_7,&local_c0,(int)lVar3,iVar1,
             (void *)0x0);
  local_b0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_res8,param_8,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_res10,param_9,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_e8._4_4_ = param_13._4_4_;
  local_e8._0_4_ = param_13._0_4_;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_e8,param_10,&local_90,(int)lVar3,iVar1,(void *)0x0);
  local_80.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_e0._4_4_ = param_13._4_4_;
  local_e0._0_4_ = param_13._0_4_;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WarpScale,&local_e0,param_11,&local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_70[0].DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar8 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_d8._4_4_ = param_13._4_4_;
  local_d8._0_4_ = param_13._0_4_;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WeftScale,&local_d8,param_12,local_70,(int)lVar3,iVar1,0x10,(void *)0x0);
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
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  InitFromPatternData(this,(int)param_1->_padding_,param_6,param_5,pFVar5,false,&local_f8,
                      __real_3f800000);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  InitColor<Chaos::Softs::FSolverParticles>(this,param_1);
  return this;
}

// FXPBDAnisotropicEdgeSpringConstraints @ 143f15240

FXPBDAnisotropicEdgeSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,
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
  FXPBDAnisotropicEdgeSpringConstraints *pFVar5;
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
  TArrayView<Chaos::TVector<int,2>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_80 [4];
  
  fVar8 = __real_4e6e6b28;
  local_e0.DataPtr = (float *)0x0;
  local_e0.ArrayNum = 0;
  local_res20 = param_3;
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
            ((FPBDSpringConstraintsBase *)this,param_1,&param_2->MElements,&local_e0,param_14,true,
             __real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos__6B_;
  local_d0.DataPtr = (TVector<int,2> *)this->_padding_;
  local_d0.ArrayNum = (int)this->_padding_;
  if (local_d0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,&local_res8,param_8,&local_d0,(int)lVar3,iVar1,(void *)0x0);
  local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_res10,param_9,&local_c0,(int)lVar3,iVar1,(void *)0x0);
  local_b0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_res18,param_10,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_f8,param_11,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WarpScale,&local_f0,param_12,&local_90,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_80[0].DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDWeightMap::FPBDWeightMap<2>
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

// FXPBDAnisotropicEdgeSpringConstraints @ 143f15780

FXPBDAnisotropicEdgeSpringConstraints * __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::FXPBDAnisotropicEdgeSpringConstraints
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,
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
  FXPBDAnisotropicEdgeSpringConstraints *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TVector<float,2> local_res8;
  TVector<float,2> local_res10;
  TVector<float,2> local_res18;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_108;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TVector<float,2> local_e8;
  TArrayView<float_const_,int> local_e0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_d0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_c0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_a0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_90;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_80 [4];
  
  fVar8 = __real_4e6e6b28;
  local_e0.DataPtr = (float *)0x0;
  local_e0.ArrayNum = 0;
  local_res20 = param_3;
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<3>
            ((FPBDSpringConstraintsBase *)this,param_1,&param_2->MElements,&local_e0,param_11,true,
             __real_4e6e6b28);
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar3 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos__6B_;
  local_d0.DataPtr = (TVector<int,2> *)this->_padding_;
  local_d0.ArrayNum = (int)this->_padding_;
  if (local_d0.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWarp,&local_res8,param_5,&local_d0,(int)lVar3,iVar1,(void *)0x0);
  local_c0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessWeft,&local_res10,param_6,&local_c0,(int)lVar3,iVar1,(void *)0x0);
  local_b0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->StiffnessBias,&local_res18,param_7,&local_b0,(int)lVar3,iVar1,(void *)0x0);
  local_a0.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_f8._4_4_ = fVar6;
  local_f8._0_4_ = fVar8;
  FPBDFlatWeightMap::FPBDFlatWeightMap<2>
            (&this->DampingRatio,&local_f8,param_8,&local_a0,(int)lVar3,iVar1,(void *)0x0);
  local_90.DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_f0._4_4_ = fVar7;
  local_f0._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WarpScale,&local_f0,param_9,&local_90,(int)lVar3,iVar1,0x10,(void *)0x0);
  local_80[0].DataPtr = (TVector<int,2> *)this->_padding_;
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
      pFVar5 = (FXPBDAnisotropicEdgeSpringConstraints *)(*pcVar2)();
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
  local_e8._4_4_ = fVar7;
  local_e8._0_4_ = fVar6;
  FPBDWeightMap::FPBDWeightMap<2>
            (&this->WeftScale,&local_e8,param_10,local_80,(int)lVar3,iVar1,0x10,(void *)0x0);
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
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  InitFromPatternData(this,*(int *)&param_1->field_0x14,param_4,local_res20,param_2,false,&local_108
                      ,__real_3f800000);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,param_1);
  return this;
}

// ~FXPBDAnisotropicEdgeSpringConstraints @ 143f16170

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::~FXPBDAnisotropicEdgeSpringConstraints
          (FXPBDAnisotropicEdgeSpringConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FXPBDAnisotropicEdgeSpringConstraints_Softs_Chaos__6B_;
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
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator() @ 143f174d0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l54
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f17920

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<1,0,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f17e10

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>::
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
  longlong lVar9;
  longlong lVar10;
  FEvolutionLinearSystem *pFVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  
  lVar9 = *(longlong *)this;
  uVar15 = *(int *)((longlong)this + 0x20) + param_1;
  uVar17 = ~uVar15 >> 0x1f;
  uVar14 = 0;
  if ((int)uVar15 < *(int *)(lVar9 + 0x1e0)) {
    uVar14 = uVar17;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x1d8);
  fVar1 = *(float *)((longlong)this + 0x28);
  fVar2 = *(float *)((longlong)this + 0x24);
  lVar10 = *(longlong *)this;
  fVar3 = *(float *)((longlong)this + 0x2c);
  pFVar11 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  fVar4 = *(float *)((longlong)this + 0x30);
  lVar16 = (longlong)(int)uVar15;
  fVar5 = *(float *)(lVar9 + 4 + lVar16 * 0xc);
  fVar6 = *(float *)(lVar9 + lVar16 * 0xc);
  fVar7 = *(float *)(lVar9 + 8 + lVar16 * 0xc);
  uVar14 = 0;
  if ((int)uVar15 < *(int *)(lVar10 + 0x20)) {
    uVar14 = uVar17;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  lVar9 = *(longlong *)this;
  fVar8 = *(float *)(*(longlong *)(lVar10 + 0x18) + lVar16 * 4);
  uVar14 = 0;
  if ((int)uVar15 < *(int *)(lVar9 + 0x10)) {
    uVar14 = uVar17;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  Chaos::Softs::Spring::UpdateSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,2> *)(*(longlong *)(lVar9 + 8) + lVar16 * 8),fVar8,
             fVar1 * fVar5 + fVar2 * fVar6 + fVar3 * fVar7,0.0,fVar4,pFVar11);
  return;
}

// operator() @ 143f182f0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>::
operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  FEvolutionLinearSystem *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar13 = *(int *)((longlong)this + 0x20) + param_1;
  if (*(char *)((longlong)this + 0x24) == '\0') {
    fVar17 = *(float *)((longlong)this + 0x28);
  }
  else {
    lVar5 = *(longlong *)this;
    fVar15 = *(float *)(lVar5 + 0xa4);
    fVar17 = *(float *)(lVar5 + 0xa0);
    pfVar11 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar5 + 0x90),uVar13);
    fVar17 = fVar15 * *pfVar11 + fVar17;
  }
  if (*(char *)((longlong)this + 0x2c) == '\0') {
    fVar15 = *(float *)((longlong)this + 0x30);
  }
  else {
    lVar5 = *(longlong *)this;
    fVar16 = *(float *)(lVar5 + 0xd4);
    fVar15 = *(float *)(lVar5 + 0xd0);
    pfVar11 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar5 + 0xc0),uVar13);
    fVar15 = fVar16 * *pfVar11 + fVar15;
  }
  if (*(char *)((longlong)this + 0x34) == '\0') {
    fVar16 = *(float *)((longlong)this + 0x38);
  }
  else {
    lVar5 = *(longlong *)this;
    fVar18 = *(float *)(lVar5 + 0x104);
    fVar16 = *(float *)(lVar5 + 0x100);
    pfVar11 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar5 + 0xf0),uVar13);
    fVar16 = fVar18 * *pfVar11 + fVar16;
  }
  if (*(char *)((longlong)this + 0x3c) == '\0') {
    fVar18 = *(float *)((longlong)this + 0x40);
  }
  else {
    lVar5 = *(longlong *)this;
    fVar1 = *(float *)(lVar5 + 0x134);
    fVar18 = *(float *)(lVar5 + 0x130);
    pfVar11 = TArrayView<float_const_,int>::operator[]
                        ((TArrayView<float_const_,int> *)(lVar5 + 0x120),uVar13);
    fVar18 = fVar1 * *pfVar11 + fVar18;
  }
  lVar5 = *(longlong *)this;
  uVar12 = ~uVar13 >> 0x1f;
  uVar10 = 0;
  if ((int)uVar13 < *(int *)(lVar5 + 0x1e0)) {
    uVar10 = uVar12;
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
  lVar5 = *(longlong *)(lVar5 + 0x1d8);
  lVar6 = *(longlong *)this;
  pFVar7 = *(FEvolutionLinearSystem **)((longlong)this + 0x18);
  lVar14 = (longlong)(int)uVar13;
  fVar1 = *(float *)(lVar5 + 8 + lVar14 * 0xc);
  fVar2 = *(float *)(lVar5 + lVar14 * 0xc);
  fVar3 = *(float *)(lVar5 + 4 + lVar14 * 0xc);
  uVar10 = 0;
  if ((int)uVar13 < *(int *)(lVar6 + 0x20)) {
    uVar10 = uVar12;
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
  lVar5 = *(longlong *)this;
  fVar4 = *(float *)(*(longlong *)(lVar6 + 0x18) + lVar14 * 4);
  uVar10 = 0;
  if ((int)uVar13 < *(int *)(lVar5 + 0x10)) {
    uVar10 = uVar12;
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
  Chaos::Softs::Spring::UpdateSpringLinearSystem
            (*(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),
             (TVector<int,2> *)(*(longlong *)(lVar5 + 8) + lVar14 * 8),fVar4,
             fVar3 * fVar17 + fVar15 * fVar2 + fVar16 * fVar1,0.0,fVar18,pFVar7);
  return;
}

// operator() @ 143f18d60

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l59
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19060

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19890

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l62
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19b90

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,1,0,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f19e90

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l65
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1a190

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<1,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1a9f0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l68
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1acf0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1b550

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l73
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4,
             (TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1b850

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar6 = *(float *)(lVar2 + 0xa4);
    fVar5 = *(float *)(lVar2 + 0xa0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x90),iVar4);
    fVar5 = fVar6 * *pfVar3 + fVar5;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    fVar6 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0xd4);
    fVar6 = *(float *)(lVar2 + 0xd0);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xc0),iVar4);
    fVar6 = fVar7 * *pfVar3 + fVar6;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_60 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar7 = *(float *)(lVar2 + 0x104);
    fVar1 = *(float *)(lVar2 + 0x100);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0xf0),iVar4);
    local_60 = fVar7 * *pfVar3 + fVar1;
  }
  if (*(char *)((longlong)this + 0x30) == '\0') {
    fVar7 = *(float *)((longlong)this + 0x34);
  }
  else {
    lVar2 = *(longlong *)this;
    fVar1 = *(float *)(lVar2 + 0x134);
    fVar7 = *(float *)(lVar2 + 0x130);
    pfVar3 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar2 + 0x120),iVar4);
    fVar7 = fVar1 * *pfVar3 + fVar7;
  }
  local_68 = fVar6;
  local_64 = fVar5;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,0,1,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar4
             ,(TVector<float,3> *)&local_68,fVar7);
  return;
}

// operator() @ 143f1c070

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticles>'::__l77
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
    fVar1 = *(float *)(lVar3 + 0xa4);
    fVar6 = *(float *)(lVar3 + 0xa0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0x90),iVar5);
    fVar6 = fVar1 * *pfVar4 + fVar6;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    local_58 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xd4);
    fVar2 = *(float *)(lVar3 + 0xd0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xc0),iVar5);
    local_58 = fVar1 * *pfVar4 + fVar2;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_50 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0x104);
    fVar2 = *(float *)(lVar3 + 0x100);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xf0),iVar5);
    local_50 = fVar1 * *pfVar4 + fVar2;
  }
  local_54 = fVar6;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticles>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticles **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar5,
             (TVector<float,3> *)&local_58,0.0);
  return;
}

// operator() @ 143f1c2f0

void __thiscall
`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Apply<Chaos::Softs::FSolverParticlesRange>'::
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
    fVar1 = *(float *)(lVar3 + 0xa4);
    fVar6 = *(float *)(lVar3 + 0xa0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0x90),iVar5);
    fVar6 = fVar1 * *pfVar4 + fVar6;
  }
  if (*(char *)((longlong)this + 0x20) == '\0') {
    local_58 = *(float *)((longlong)this + 0x24);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0xd4);
    fVar2 = *(float *)(lVar3 + 0xd0);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xc0),iVar5);
    local_58 = fVar1 * *pfVar4 + fVar2;
  }
  if (*(char *)((longlong)this + 0x28) == '\0') {
    local_50 = *(float *)((longlong)this + 0x2c);
  }
  else {
    lVar3 = *(longlong *)this;
    fVar1 = *(float *)(lVar3 + 0x104);
    fVar2 = *(float *)(lVar3 + 0x100);
    pfVar4 = TArrayView<float_const_,int>::operator[]
                       ((TArrayView<float_const_,int> *)(lVar3 + 0xf0),iVar5);
    local_50 = fVar1 * *pfVar4 + fVar2;
  }
  local_54 = fVar6;
  Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::
  ApplyHelper<0,0,1,0,Chaos::Softs::FSolverParticlesRange>
            (*(FXPBDAnisotropicEdgeSpringConstraints **)this,
             *(FSolverParticlesRange **)((longlong)this + 8),*(float *)((longlong)this + 0x10),iVar5
             ,(TVector<float,3> *)&local_58,0.0);
  return;
}

// Init @ 143f207f0

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::Init
          (FXPBDAnisotropicEdgeSpringConstraints *this)

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

// InitFromPatternData @ 143f21610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData
          (FXPBDAnisotropicEdgeSpringConstraints *this,int param_1,bool param_2,
          TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *param_3,
          FTriangleMesh *param_4,bool param_5,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_6,float param_7)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  TArray<Chaos::TVector<float,2>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  undefined4 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *pTVar17;
  FTriangleMesh *pFVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar25;
  float *pfVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  FXPBDAnisotropicEdgeSpringConstraints *pFVar35;
  longlong *plVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_288 [32];
  undefined1 local_237 [7];
  FXPBDAnisotropicEdgeSpringConstraints *local_230;
  uint local_228;
  uint uStack_224;
  uint local_220;
  uint uStack_21c;
  uint local_218;
  uint uStack_214;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_210;
  longlong local_208;
  TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *local_200;
  FTriangleMesh *local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1e0;
  longlong local_1d8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  uint *local_128;
  uint *local_120;
  uint *local_118 [2];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  ulonglong local_b8;
  
  uVar31 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar15 = __real_3f800000;
  fVar14 = __real_322bcc77;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  uVar32 = 0;
  local_210 = param_6;
  iVar20 = (param_4->MElements).ArrayNum;
  local_1f8 = param_4;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0x80;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  uVar34 = uVar32;
  local_230 = this;
  local_200 = param_3;
  local_1e4 = param_1;
  if (0 < iVar20) {
    do {
      pFVar18 = local_1f8;
      pTVar17 = local_200;
      uVar33 = (uint)uVar32;
      uVar30 = 0;
      if ((int)uVar33 < iVar20) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar7 = (pFVar18->MElements).AllocatorInstance.Data;
      uVar30 = 0;
      if ((int)uVar33 < pTVar17->ArrayNum) {
        uVar30 = ~uVar33 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar30 = *(uint *)(pFVar7 + uVar34 * 0xc + 4);
      uStack_224 = *(uint *)(pFVar7 + uVar34 * 0xc);
      pFVar8 = (pTVar17->AllocatorInstance).Data;
      local_228 = uVar30;
      if ((int)uStack_224 <= (int)uVar30) {
        local_228 = uStack_224;
        uStack_224 = uVar30;
      }
      uVar30 = (local_228 >> 2) + 0x9e3779b9 + uStack_224 + local_228 * 0x40 ^ local_228;
      if ((int)local_100 != local_d4) {
        puVar23 = local_d0;
        if (local_c8 != (undefined1 *)0x0) {
          puVar23 = local_c8;
        }
        iVar20 = *(int *)(puVar23 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
        while (iVar20 != -1) {
          puVar29 = (undefined8 *)((longlong)iVar20 * 0x20 + local_108);
          if (((uint)*puVar29 == local_228) && ((uint)((ulonglong)*puVar29 >> 0x20) == uStack_224))
          {
            if ((iVar20 != -1) && (puVar29 != (undefined8 *)0x0)) goto LAB_143f218c5;
            break;
          }
          iVar20 = *(int *)(puVar29 + 3);
        }
      }
      local_128 = &local_228;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_108,(uint)&local_1f0,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar30,(bool *)&local_128);
      puVar29 = (undefined8 *)((longlong)local_1f0 * 0x20 + local_108);
LAB_143f218c5:
      uVar9 = *(undefined8 *)(pFVar8 + uVar34 * 0x18 + 8);
      pFVar1 = (ForAnyElementType *)(puVar29 + 1);
      local_150._0_4_ = (float)uVar9;
      local_150._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      uVar10 = *(undefined8 *)(pFVar8 + uVar34 * 0x18);
      local_148._0_4_ = (float)uVar10;
      local_148._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      fVar38 = (float)((uint)((float)local_150 - (float)local_148) & uVar31);
      fVar39 = (float)((uint)(local_150._4_4_ - local_148._4_4_) & uVar31);
      if (fVar38 <= fVar39) {
        local_1d0 = 0.0;
        fVar40 = fVar39 - fVar38;
        fVar37 = fVar40;
        fStack_1c8 = fVar38;
      }
      else {
        fVar40 = fVar38 - fVar39;
        local_1d0 = fVar40;
        fVar37 = 0.0;
        fStack_1c8 = fVar39;
      }
      fStack_1bc = SQRT(fVar38 * fVar38 + fVar39 * fVar39);
      if (fStack_1c8 + fVar40 <= fVar14) {
        local_1d0 = 0.0;
        fStack_1c8 = 0.0;
        fStack_1cc = fVar15;
      }
      else {
        fVar40 = fVar15 / (fStack_1c8 + fVar40);
        local_1d0 = local_1d0 * fVar40;
        fStack_1c8 = fStack_1c8 * fVar40;
        fStack_1cc = fVar37 * fVar40;
      }
      if (fStack_1bc <= fVar14) {
        local_138 = 0x3f3504f3;
        uStack_134 = 0x3f3504f3;
        fStack_1c4 = 0.70710677;
        fStack_1c0 = 0.70710677;
      }
      else {
        fStack_13c = (fVar15 / fStack_1bc) * fVar39;
        local_140 = (fVar15 / fStack_1bc) * fVar38;
        fStack_1c4 = local_140;
        fStack_1c0 = fStack_13c;
      }
      local_150 = uVar9;
      local_148 = uVar10;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar29 + 0x14) * 0x18)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar20 = *(int *)(puVar29 + 2);
      if (iVar20 == *(int *)((longlong)puVar29 + 0x14)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,pFVar1,(int *)((longlong)puVar29 + 0x14));
      }
      *(int *)(puVar29 + 2) = iVar20 + 1;
      pFVar11 = pFVar1->Data;
      pFVar4 = pFVar11 + (longlong)iVar20 * 0x18;
      *(ulonglong *)pFVar4 = CONCAT44(fStack_1cc,local_1d0);
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(fStack_1c4,fStack_1c8);
      *(ulonglong *)(pFVar11 + (longlong)iVar20 * 0x18 + 0x10) = CONCAT44(fStack_1bc,fStack_1c0);
      uVar30 = *(uint *)(pFVar7 + uVar34 * 0xc + 8);
      uStack_21c = *(uint *)(pFVar7 + uVar34 * 0xc + 4);
      local_220 = uVar30;
      if ((int)uStack_21c <= (int)uVar30) {
        local_220 = uStack_21c;
        uStack_21c = uVar30;
      }
      uVar30 = (local_220 >> 2) + 0x9e3779b9 + uStack_21c + local_220 * 0x40 ^ local_220;
      if ((int)local_100 != local_d4) {
        puVar23 = local_d0;
        if (local_c8 != (undefined1 *)0x0) {
          puVar23 = local_c8;
        }
        iVar20 = *(int *)(puVar23 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
        while (iVar20 != -1) {
          puVar29 = (undefined8 *)((longlong)iVar20 * 0x20 + local_108);
          if (((uint)*puVar29 == local_220) && ((uint)((ulonglong)*puVar29 >> 0x20) == uStack_21c))
          {
            if ((iVar20 != -1) && (puVar29 != (undefined8 *)0x0)) goto LAB_143f21b60;
            break;
          }
          iVar20 = *(int *)(puVar29 + 3);
        }
      }
      local_120 = &local_220;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_108,(uint)&local_1ec,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar30,(bool *)&local_120);
      puVar29 = (undefined8 *)((longlong)local_1ec * 0x20 + local_108);
LAB_143f21b60:
      uVar9 = *(undefined8 *)(pFVar8 + uVar34 * 0x18 + 0x10);
      pFVar1 = (ForAnyElementType *)(puVar29 + 1);
      local_130._0_4_ = (float)uVar9;
      local_130._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      uVar10 = *(undefined8 *)(pFVar8 + uVar34 * 0x18 + 8);
      local_188._0_4_ = (float)uVar10;
      local_188._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      fVar38 = (float)((uint)((float)local_130 - (float)local_188) & uVar31);
      fVar39 = (float)((uint)(local_130._4_4_ - local_188._4_4_) & uVar31);
      if (fVar38 <= fVar39) {
        local_1b8 = 0.0;
        fVar40 = fVar39 - fVar38;
        fVar37 = fVar40;
        fStack_1b0 = fVar38;
      }
      else {
        fVar40 = fVar38 - fVar39;
        local_1b8 = fVar40;
        fVar37 = 0.0;
        fStack_1b0 = fVar39;
      }
      fStack_1a4 = SQRT(fVar39 * fVar39 + fVar38 * fVar38);
      if (fStack_1b0 + fVar40 <= fVar14) {
        local_1b8 = 0.0;
        fStack_1b0 = 0.0;
        fStack_1b4 = fVar15;
      }
      else {
        fVar40 = fVar15 / (fStack_1b0 + fVar40);
        local_1b8 = local_1b8 * fVar40;
        fStack_1b0 = fStack_1b0 * fVar40;
        fStack_1b4 = fVar37 * fVar40;
      }
      if (fStack_1a4 <= fVar14) {
        local_178 = 0x3f3504f3;
        uStack_174 = 0x3f3504f3;
        fStack_1ac = 0.70710677;
        fStack_1a8 = 0.70710677;
      }
      else {
        fStack_17c = (fVar15 / fStack_1a4) * fVar39;
        local_180 = (fVar15 / fStack_1a4) * fVar38;
        fStack_1ac = local_180;
        fStack_1a8 = fStack_17c;
      }
      local_188 = uVar10;
      local_130 = uVar9;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_1b8) &&
          ((FScriptContainerElement *)&local_1b8 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar29 + 0x14) * 0x18)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar20 = *(int *)(puVar29 + 2);
      if (iVar20 == *(int *)((longlong)puVar29 + 0x14)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,pFVar1,(int *)((longlong)puVar29 + 0x14));
      }
      *(int *)(puVar29 + 2) = iVar20 + 1;
      pFVar11 = pFVar1->Data;
      pFVar4 = pFVar11 + (longlong)iVar20 * 0x18;
      *(ulonglong *)pFVar4 = CONCAT44(fStack_1b4,local_1b8);
      *(ulonglong *)(pFVar4 + 8) = CONCAT44(fStack_1ac,fStack_1b0);
      *(ulonglong *)(pFVar11 + (longlong)iVar20 * 0x18 + 0x10) = CONCAT44(fStack_1a4,fStack_1a8);
      uVar30 = *(uint *)(pFVar7 + uVar34 * 0xc);
      uStack_214 = *(uint *)(pFVar7 + uVar34 * 0xc + 8);
      local_218 = uVar30;
      if ((int)uStack_214 <= (int)uVar30) {
        local_218 = uStack_214;
        uStack_214 = uVar30;
      }
      uVar30 = (local_218 >> 2) + 0x9e3779b9 + uStack_214 + local_218 * 0x40 ^ local_218;
      if ((int)local_100 != local_d4) {
        puVar23 = local_d0;
        if (local_c8 != (undefined1 *)0x0) {
          puVar23 = local_c8;
        }
        iVar20 = *(int *)(puVar23 + (ulonglong)(local_c0 - 1U & uVar30) * 4);
        while (iVar20 != -1) {
          puVar29 = (undefined8 *)((longlong)iVar20 * 0x20 + local_108);
          if (((uint)*puVar29 == local_218) && ((uint)((ulonglong)*puVar29 >> 0x20) == uStack_214))
          {
            if ((iVar20 != -1) && (puVar29 != (undefined8 *)0x0)) goto LAB_143f21e00;
            break;
          }
          iVar20 = *(int *)(puVar29 + 3);
        }
      }
      local_118[0] = &local_218;
      TSet<TTuple<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<Chaos::TVector<int,2>_&&>_>
                (&local_108,(uint)&local_1e8,
                 (TKeyInitializer<Chaos::TVector<int,2>_&&> *)(ulonglong)uVar30,(bool *)local_118);
      puVar29 = (undefined8 *)((longlong)local_1e8 * 0x20 + local_108);
LAB_143f21e00:
      uVar9 = *(undefined8 *)(pFVar8 + uVar34 * 0x18);
      pFVar1 = (ForAnyElementType *)(puVar29 + 1);
      local_170._0_4_ = (float)uVar9;
      local_170._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      uVar10 = *(undefined8 *)(pFVar8 + uVar34 * 0x18 + 0x10);
      local_168._0_4_ = (float)uVar10;
      local_168._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
      fVar38 = (float)((uint)((float)local_170 - (float)local_168) & uVar31);
      fVar39 = (float)((uint)(local_170._4_4_ - local_168._4_4_) & uVar31);
      if (fVar38 <= fVar39) {
        local_1a0 = 0.0;
        fVar40 = fVar39 - fVar38;
        fVar37 = fVar40;
        fStack_198 = fVar38;
      }
      else {
        fVar40 = fVar38 - fVar39;
        local_1a0 = fVar40;
        fVar37 = 0.0;
        fStack_198 = fVar39;
      }
      fStack_18c = SQRT(fVar39 * fVar39 + fVar38 * fVar38);
      if (fStack_198 + fVar40 <= fVar14) {
        local_1a0 = 0.0;
        fStack_198 = 0.0;
        fStack_19c = fVar15;
      }
      else {
        fVar40 = fVar15 / (fStack_198 + fVar40);
        local_1a0 = fVar40 * local_1a0;
        fStack_198 = fVar40 * fStack_198;
        fStack_19c = fVar40 * fVar37;
      }
      if (fStack_18c <= fVar14) {
        local_158 = 0x3f3504f3;
        uStack_154 = 0x3f3504f3;
        fStack_194 = 0.70710677;
        fStack_190 = 0.70710677;
      }
      else {
        local_160 = fVar38 * (fVar15 / fStack_18c);
        fStack_15c = fVar39 * (fVar15 / fStack_18c);
        fStack_194 = local_160;
        fStack_190 = fStack_15c;
      }
      local_170 = uVar9;
      local_168 = uVar10;
      if (((pFVar1->Data <= (FScriptContainerElement *)&local_1a0) &&
          ((FScriptContainerElement *)&local_1a0 <
           pFVar1->Data + (longlong)*(int *)((longlong)puVar29 + 0x14) * 0x18)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar20 = *(int *)(puVar29 + 2);
      if (iVar20 == *(int *)((longlong)puVar29 + 0x14)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x418,pFVar1,(int *)((longlong)puVar29 + 0x14));
      }
      uVar32 = (ulonglong)(uVar33 + 1);
      *(int *)(puVar29 + 2) = iVar20 + 1;
      uVar34 = uVar34 + 1;
      pFVar8 = pFVar1->Data;
      pFVar7 = pFVar8 + (longlong)iVar20 * 0x18;
      *(ulonglong *)pFVar7 = CONCAT44(fStack_19c,local_1a0);
      *(ulonglong *)(pFVar7 + 8) = CONCAT44(fStack_194,fStack_198);
      *(ulonglong *)(pFVar8 + (longlong)iVar20 * 0x18 + 0x10) = CONCAT44(fStack_18c,fStack_190);
      iVar20 = (local_1f8->MElements).ArrayNum;
    } while ((int)(uVar33 + 1) < iVar20);
  }
  pFVar35 = local_230;
  local_1e0 = &local_230->BaseDists;
  if (param_2) {
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              (local_1e0,(TArray<float,TSizedDefaultAllocator<32>_> *)&local_230->_padding_);
  }
  else {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (local_1e0,(int)local_230->_padding_,Default);
  }
  plVar36 = &pFVar35->_padding_;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&pFVar35->WarpWeftBiasBaseMultipliers,(int)*plVar36,Default);
  pTVar3 = &pFVar35->WarpWeftScaleBaseMultipliers;
  uVar31 = (uint)*plVar36;
  iVar20 = (pFVar35->WarpWeftScaleBaseMultipliers).ArrayNum;
  piVar2 = &(pFVar35->WarpWeftScaleBaseMultipliers).ArrayNum;
  local_200 = (TArray<Chaos::TVector<Chaos::TVector<float,2>,3>,TSizedDefaultAllocator<32>_> *)
              piVar2;
  if (iVar20 < (int)uVar31) {
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,uVar31 - iVar20,&pTVar3->AllocatorInstance,piVar2,
                        &(pFVar35->WarpWeftScaleBaseMultipliers).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar21 * 8,0,
           (longlong)(int)(uVar31 - iVar20) << 3);
  }
  else {
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar31);
    }
    if ((int)uVar31 < iVar20) {
      uVar30 = iVar20 - uVar31;
      if (((int)(uVar31 | uVar30) < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (uVar30 != 0) {
        pFVar7 = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar31 * 8;
        iVar20 = (*piVar2 - uVar31) - uVar30;
        if (iVar20 != 0) {
          memmove(pFVar7,pFVar7 + (longlong)(int)uVar30 * 8,(longlong)iVar20 << 3);
        }
        *piVar2 = *piVar2 - uVar30;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar3->AllocatorInstance,*piVar2,
                   &(pFVar35->WarpWeftScaleBaseMultipliers).ArrayMax);
      }
    }
  }
  uVar31 = 0;
  if (0 < (int)*plVar36) {
    lVar24 = 0;
    local_1f8 = (FTriangleMesh *)0x0;
    local_208 = 0;
    local_1d8 = 0;
    pFVar35 = local_230;
    do {
      pFVar18 = local_1f8;
      uVar33 = ~uVar31 >> 0x1f;
      uVar30 = 0;
      if ((int)uVar31 < (int)pFVar35->_padding_) {
        uVar30 = uVar33;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar30 = *(uint *)((longlong)pFVar18 + 4 + pFVar35->_padding_);
      uVar22 = 0;
      if ((int)uVar31 < (int)pFVar35->_padding_) {
        uVar22 = uVar33;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar22 = *(uint *)(pFVar35->_padding_ + lVar24 * 8);
      uVar13 = uVar22;
      if ((int)uVar30 < (int)uVar22) {
        uVar13 = uVar30;
        uVar30 = uVar22;
      }
      if ((int)local_100 != local_d4) {
        puVar23 = local_d0;
        if (local_c8 != (undefined1 *)0x0) {
          puVar23 = local_c8;
        }
        iVar20 = *(int *)(puVar23 +
                         (ulonglong)
                         (local_c0 - 1U &
                         (uVar13 * 0x40 + -0x61c88647 + uVar30 + (uVar13 >> 2) ^ uVar13)) * 4);
        while (iVar20 != -1) {
          puVar29 = (undefined8 *)((longlong)iVar20 * 0x20 + local_108);
          if (((uint)*puVar29 == uVar13) && ((uint)((ulonglong)*puVar29 >> 0x20) == uVar30)) {
            if (iVar20 != -1) {
              if (puVar29 != (undefined8 *)0x0) goto LAB_143f222b8;
              goto LAB_143f22292;
            }
            break;
          }
          iVar20 = *(int *)(puVar29 + 3);
        }
      }
      puVar29 = (undefined8 *)0x0;
LAB_143f22292:
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar19) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
LAB_143f222b8:
      if ((*(int *)(puVar29 + 2) == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("EdgeMultipliers.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
                              ,0x173,L""), bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar20 = *(int *)(puVar29 + 2);
      pfVar26 = (float *)puVar29[1];
      pfVar5 = pfVar26 + (longlong)iVar20 * 6;
      while( true ) {
        if (*(int *)(puVar29 + 2) != iVar20) {
          local_237[0] = 0;
          `TCheckedPointerIterator<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_237);
        }
        pFVar35 = local_230;
        if (pfVar26 == pfVar5) break;
        uVar30 = 0;
        if ((int)uVar31 < (local_230->WarpWeftBiasBaseMultipliers).ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar7 = (local_230->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
        *(float *)(pFVar7 + local_208) = *(float *)(pFVar7 + local_208) + *pfVar26;
        *(float *)(pFVar7 + local_208 + 4) = pfVar26[1] + *(float *)(pFVar7 + local_208 + 4);
        *(float *)(pFVar7 + local_208 + 8) = pfVar26[2] + *(float *)(pFVar7 + local_208 + 8);
        uVar30 = 0;
        if ((int)uVar31 < *(int *)local_200) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar7 = (local_230->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
        *(float *)(pFVar7 + lVar24 * 8) = pfVar26[3] + *(float *)(pFVar7 + lVar24 * 8);
        *(float *)(pFVar7 + lVar24 * 8 + 4) = pfVar26[4] + *(float *)(pFVar7 + lVar24 * 8 + 4);
        if (!param_2) {
          fVar38 = pfVar26[5];
          uVar30 = 0;
          if ((int)uVar31 < (local_230->BaseDists).ArrayNum) {
            uVar30 = uVar33;
          }
          if ((uVar30 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar7 = (local_230->BaseDists).AllocatorInstance.Data;
          *(float *)(pFVar7 + lVar24 * 4) = fVar38 + *(float *)(pFVar7 + lVar24 * 4);
        }
        pfVar26 = pfVar26 + 6;
      }
      iVar20 = *(int *)(puVar29 + 2);
      uVar30 = 0;
      if ((int)uVar31 < (local_230->WarpWeftBiasBaseMultipliers).ArrayNum) {
        uVar30 = uVar33;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      lVar27 = local_208;
      pFVar7 = (pFVar35->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
      fVar38 = fVar15 / (float)iVar20;
      *(float *)(pFVar7 + local_208) = fVar38 * *(float *)(pFVar7 + local_208);
      *(float *)(pFVar7 + local_208 + 4) = fVar38 * *(float *)(pFVar7 + local_208 + 4);
      *(float *)(pFVar7 + local_208 + 8) = fVar38 * *(float *)(pFVar7 + local_208 + 8);
      uVar30 = 0;
      if ((int)uVar31 < *(int *)local_200) {
        uVar30 = uVar33;
      }
      if ((uVar30 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pTVar16 = local_210;
      pFVar7 = (pFVar35->WarpWeftScaleBaseMultipliers).AllocatorInstance.Data;
      fVar38 = *(float *)(pFVar7 + lVar24 * 8);
      fVar39 = *(float *)(pFVar7 + lVar24 * 8 + 4);
      fVar37 = fVar39 * fVar39 + fVar38 * fVar38;
      if (fVar37 <= fVar14) {
        fVar37 = 0.0;
        fVar38 = 0.0;
      }
      else {
        fVar37 = __real_3f800000 / SQRT(fVar37);
        fVar38 = fVar37 * fVar38;
        fVar37 = fVar37 * fVar39;
      }
      *(float *)(pFVar7 + lVar24 * 8) = fVar38;
      *(float *)(pFVar7 + lVar24 * 8 + 4) = fVar37;
      if (!param_2) {
        pTVar25 = local_1e0;
        if ((param_5) && (local_1e4 == local_210->ArrayNum)) {
          uVar30 = 0;
          if ((int)uVar31 < (int)pFVar35->_padding_) {
            uVar30 = uVar33;
          }
          if ((uVar30 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar30 = *(uint *)(pFVar35->_padding_ + lVar24 * 8);
          lVar27 = (longlong)(int)uVar30;
          uVar22 = 0;
          if ((int)uVar30 < pTVar16->ArrayNum) {
            uVar22 = ~uVar30 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar35 = local_230;
          pFVar7 = (local_210->AllocatorInstance).Data;
          uVar30 = 0;
          if ((int)uVar31 < (int)local_230->_padding_) {
            uVar30 = uVar33;
          }
          if ((uVar30 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          uVar30 = *(uint *)(pFVar35->_padding_ + 4 + lVar24 * 8);
          lVar28 = (longlong)(int)uVar30;
          uVar22 = 0;
          if ((int)uVar30 < local_210->ArrayNum) {
            uVar22 = ~uVar30 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar35 = local_230;
          pFVar8 = (local_210->AllocatorInstance).Data;
          fVar39 = SQRT((*(float *)(pFVar7 + lVar27 * 0xc + 4) -
                        *(float *)(pFVar8 + lVar28 * 0xc + 4)) *
                        (*(float *)(pFVar7 + lVar27 * 0xc + 4) -
                        *(float *)(pFVar8 + lVar28 * 0xc + 4)) +
                        (*(float *)(pFVar7 + lVar27 * 0xc) - *(float *)(pFVar8 + lVar28 * 0xc)) *
                        (*(float *)(pFVar7 + lVar27 * 0xc) - *(float *)(pFVar8 + lVar28 * 0xc)) +
                        (*(float *)(pFVar7 + lVar27 * 0xc + 8) -
                        *(float *)(pFVar8 + lVar28 * 0xc + 8)) *
                        (*(float *)(pFVar7 + lVar27 * 0xc + 8) -
                        *(float *)(pFVar8 + lVar28 * 0xc + 8))) * param_7;
          fVar38 = fVar15;
          if (fVar14 < fVar39) {
            uVar30 = 0;
            if ((int)uVar31 < (int)local_230->_padding_) {
              uVar30 = uVar33;
            }
            if ((uVar30 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            fVar38 = *(float *)(pFVar35->_padding_ + local_1d8) / fVar39;
          }
          pTVar25 = local_1e0;
          uVar30 = 0;
          if ((int)uVar31 < local_1e0->ArrayNum) {
            uVar30 = uVar33;
          }
          if ((uVar30 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar7 = (pTVar25->AllocatorInstance).Data;
          *(float *)(pFVar7 + lVar24 * 4) = fVar38 * *(float *)(pFVar7 + lVar24 * 4);
          lVar27 = local_208;
        }
        iVar20 = *(int *)(puVar29 + 2);
        uVar30 = 0;
        if ((int)uVar31 < pTVar25->ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar7 = (pTVar25->AllocatorInstance).Data;
        *(float *)(pFVar7 + lVar24 * 4) = *(float *)(pFVar7 + lVar24 * 4) / (float)iVar20;
        uVar30 = 0;
        if ((int)uVar31 < pTVar25->ArrayNum) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar6 = *(undefined4 *)((pTVar25->AllocatorInstance).Data + lVar24 * 4);
        uVar30 = 0;
        if ((int)uVar31 < (int)pFVar35->_padding_) {
          uVar30 = uVar33;
        }
        if ((uVar30 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(undefined4 *)(pFVar35->_padding_ + lVar24 * 4) = uVar6;
      }
      local_1d8 = local_1d8 + 4;
      local_208 = lVar27 + 0xc;
      uVar31 = uVar31 + 1;
      lVar24 = lVar24 + 1;
      local_1f8 = (FTriangleMesh *)((longlong)local_1f8 + 8);
    } while ((int)uVar31 < (int)pFVar35->_padding_);
  }
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData'::__l2::FMultipliers,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TVector<int,2>,TArray<_Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::InitFromPatternData_::__l2::FMultipliers,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_108);
  return;
}

// UpdateDists @ 143f27040

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateDists
          (FXPBDAnisotropicEdgeSpringConstraints *this)

{
  Softs::Private::UpdateDists
            (&this->BaseDists,&this->WarpWeftScaleBaseMultipliers,&this->WarpScale,&this->WeftScale,
             (TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  return;
}

// UpdateLinearSystem @ 143f27f20

void __thiscall
Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem
          (FXPBDAnisotropicEdgeSpringConstraints *this,FSolverParticlesRange *param_1,float param_2,
          FEvolutionLinearSystem *param_3)

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
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  float *pfVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  FXPBDAnisotropicEdgeSpringConstraints *local_190;
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
  FXPBDAnisotropicEdgeSpringConstraints **local_140;
  code *local_138;
  FXPBDAnisotropicEdgeSpringConstraints **local_130;
  FXPBDAnisotropicEdgeSpringConstraints *local_128;
  FSolverParticlesRange *local_120;
  float local_118;
  FEvolutionLinearSystem *local_110;
  int local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId985,
               "FXPBDAnisotropicEdgeSpringConstraints_UpdateLinearSystem",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\XPBDAnisotropicSpringConstraints.cpp"
               ,0x3d9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId985);
  }
  iVar12 = (int)this->_padding_;
  TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
            (&param_3->Matrix,iVar12 * 2,iVar12);
  if (((this->StiffnessWarp).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar22 = '\0';
  }
  else {
    cVar22 = '\x01';
  }
  if (((this->StiffnessWeft).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar19 = '\0';
  }
  else {
    cVar19 = '\x01';
  }
  if (((this->StiffnessBias).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar24 = '\0';
  }
  else {
    cVar24 = '\x01';
  }
  if (((this->DampingRatio).MapView.MapValues.ArrayNum < 1) ||
     ((float)(*(uint *)&(this->DampingRatio).MapView.OffsetRange.field_0x4 &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_38d1b717)) {
    cVar23 = '\0';
  }
  else {
    cVar23 = '\x01';
  }
  iVar12 = (this->ConstraintsPerColorStartIndex).ArrayNum;
  if ((iVar12 < 2) || ((int)this->_padding_ <= Chaos_XPBDSpring_ParallelConstraintCount)) {
    if ((cVar22 == '\0') && (((cVar19 == '\0' && (cVar24 == '\0')) && (cVar23 == '\0')))) {
      fVar1 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar29 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (((fVar1 <= fVar2) || (fVar28 = fVar1, fVar1 <= fVar3)) && (fVar28 = fVar3, fVar3 <= fVar2)
         ) {
        fVar28 = fVar2;
      }
      if ((0.0 <= fVar28) && (uVar20 = 0, 0 < (int)this->_padding_)) {
        lVar21 = 0;
        lVar26 = 0;
        do {
          uVar25 = ~uVar20 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar20 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar14 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          fVar28 = *(float *)(pFVar14 + lVar26 + 4);
          fVar32 = *(float *)(pFVar14 + lVar26);
          fVar30 = *(float *)(pFVar14 + lVar26 + 8);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          fVar31 = *(float *)(this->_padding_ + lVar21 * 4);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          Spring::UpdateSpringLinearSystem
                    (param_1,param_2,(TVector<int,2> *)(this->_padding_ + (longlong)(int)uVar20 * 8)
                     ,fVar31,fVar2 * fVar28 + fVar1 * fVar32 + fVar3 * fVar30,0.0,fVar29,param_3);
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 1;
          lVar26 = lVar26 + 0xc;
        } while ((int)uVar20 < (int)this->_padding_);
      }
    }
    else {
      fVar1 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      uVar20 = 0;
      fVar2 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      fVar29 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
      if (0 < (int)this->_padding_) {
        lVar26 = 0;
        lVar21 = 0;
        do {
          fVar28 = fVar1;
          if (cVar22 != '\0') {
            fVar28 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange.field_0x4;
            fVar32 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
            pfVar18 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWarp).MapView.MapValues,uVar20);
            fVar28 = fVar28 * *pfVar18 + fVar32;
          }
          fVar32 = fVar2;
          if (cVar19 != '\0') {
            fVar32 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange.field_0x4;
            fVar30 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
            pfVar18 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessWeft).MapView.MapValues,uVar20);
            fVar32 = fVar32 * *pfVar18 + fVar30;
          }
          fVar30 = fVar3;
          if (cVar24 != '\0') {
            fVar30 = *(float *)&(this->StiffnessBias).MapView.OffsetRange.field_0x4;
            fVar31 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
            pfVar18 = TArrayView<float_const_,int>::operator[]
                                (&(this->StiffnessBias).MapView.MapValues,uVar20);
            fVar30 = fVar30 * *pfVar18 + fVar31;
          }
          fVar31 = fVar29;
          if (cVar23 != '\0') {
            fVar31 = *(float *)&(this->DampingRatio).MapView.OffsetRange.field_0x4;
            fVar8 = *(float *)&(this->DampingRatio).MapView.OffsetRange;
            pfVar18 = TArrayView<float_const_,int>::operator[]
                                (&(this->DampingRatio).MapView.MapValues,uVar20);
            fVar31 = fVar31 * *pfVar18 + fVar8;
          }
          uVar25 = ~uVar20 >> 0x1f;
          uVar17 = 0;
          if ((int)uVar20 < (this->WarpWeftBiasBaseMultipliers).ArrayNum) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar14 = (this->WarpWeftBiasBaseMultipliers).AllocatorInstance.Data;
          fVar8 = *(float *)(pFVar14 + lVar21 + 8);
          fVar9 = *(float *)(pFVar14 + lVar21);
          fVar10 = *(float *)(pFVar14 + lVar21 + 4);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          fVar11 = *(float *)(this->_padding_ + lVar26 * 4);
          uVar17 = 0;
          if ((int)uVar20 < (int)this->_padding_) {
            uVar17 = uVar25;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          Spring::UpdateSpringLinearSystem
                    (param_1,param_2,(TVector<int,2> *)(this->_padding_ + (longlong)(int)uVar20 * 8)
                     ,fVar11,fVar10 * fVar28 + fVar32 * fVar9 + fVar30 * fVar8,0.0,fVar31,param_3);
          uVar20 = uVar20 + 1;
          lVar26 = lVar26 + 1;
          lVar21 = lVar21 + 0xc;
        } while ((int)uVar20 < (int)this->_padding_);
      }
    }
  }
  else {
    iVar12 = iVar12 + -1;
    if ((((cVar22 == '\0') && (cVar19 == '\0')) && (cVar24 == '\0')) && (cVar23 == '\0')) {
      fVar1 = *(float *)&(this->StiffnessWeft).MapView.OffsetRange;
      fVar2 = *(float *)&(this->StiffnessWarp).MapView.OffsetRange;
      fVar3 = *(float *)&(this->StiffnessBias).MapView.OffsetRange;
      uVar4 = *(undefined4 *)&(this->DampingRatio).MapView.OffsetRange;
      if (((fVar1 <= fVar2) || (fVar29 = fVar1, fVar1 <= fVar3)) && (fVar29 = fVar3, fVar3 <= fVar2)
         ) {
        fVar29 = fVar2;
      }
      if ((0.0 <= fVar29) && (uVar20 = 0, 0 < iVar12)) {
        lVar21 = 0;
        do {
          uVar17 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           lVar21 * 4);
          uVar17 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_140 = &local_128;
          local_148 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l13::<lambda_1>,void,int>
                      ::Call;
          local_128 = this;
          local_120 = param_1;
          local_118 = param_2;
          local_110 = param_3;
          local_108 = iVar13;
          local_104 = fVar1;
          local_100 = fVar2;
          local_fc = fVar3;
          local_f8 = uVar4;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar21 * 4 + 4) - iVar13,
                             (TFunctionRef<void___cdecl(int)> *)&local_148,false);
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar12);
      }
    }
    else {
      uVar4 = *(undefined4 *)&(this->StiffnessWarp).MapView.OffsetRange;
      uVar20 = 0;
      uVar5 = *(undefined4 *)&(this->StiffnessWeft).MapView.OffsetRange;
      uVar6 = *(undefined4 *)&(this->StiffnessBias).MapView.OffsetRange;
      uVar7 = *(undefined4 *)&(this->DampingRatio).MapView.OffsetRange;
      if (0 < iVar12) {
        lVar21 = 0;
        do {
          uVar17 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar20 = uVar20 + 1;
          iVar13 = *(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                           lVar21 * 4);
          uVar17 = 0;
          if ((int)uVar20 < (this->ConstraintsPerColorStartIndex).ArrayNum) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          local_130 = &local_190;
          local_138 = UE::Core::Private::Function::
                      TFunctionRefCaller<`Chaos::Softs::FXPBDAnisotropicEdgeSpringConstraints::UpdateLinearSystem'::__l17::<lambda_2>,void,int>
                      ::Call;
          local_190 = this;
          local_188 = param_1;
          local_180 = param_2;
          local_178 = param_3;
          local_170 = iVar13;
          local_16c = cVar22;
          local_168 = uVar4;
          local_164 = cVar19;
          local_160 = uVar5;
          local_15c = cVar24;
          local_158 = uVar6;
          local_154 = cVar23;
          local_150 = uVar7;
          PhysicsParallelFor(*(int *)((this->ConstraintsPerColorStartIndex).AllocatorInstance.Data +
                                     lVar21 * 4 + 4) - iVar13,
                             (TFunctionRef<void___cdecl(int)> *)&local_138,false);
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar12);
      }
    }
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

