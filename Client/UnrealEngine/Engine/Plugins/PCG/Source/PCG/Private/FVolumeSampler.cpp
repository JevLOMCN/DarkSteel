// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// Sample @ 149c86620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PCGSplineSamplerHelpers::FVolumeSampler::Sample
          (FVolumeSampler *this,FSamplerResult *param_1,UPCGBasePointData *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  long64 lVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  TTransform<double> *pTVar17;
  undefined8 *puVar18;
  TStridedView<float,int> *pTVar19;
  TStridedView<int,int> *pTVar20;
  TStridedView<__int64,int> *pTVar21;
  float *pfVar22;
  TVector<double> *pTVar23;
  TVector4<double> *pTVar24;
  int *piVar25;
  long64 *plVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint uVar54;
  uint uVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined1 auStack_948 [32];
  double *local_928;
  longlong local_920;
  double local_918;
  double local_910;
  double local_908;
  double local_900;
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  double local_8b8;
  double local_8b0;
  double local_8a8;
  double local_8a0;
  double local_898;
  double local_890;
  TVector<double>_u_0 local_888;
  TVector<double>_u_0 local_870 [2];
  undefined1 local_840 [24];
  undefined1 local_828 [24];
  undefined1 local_810 [24];
  undefined1 local_7f8 [32];
  undefined1 local_7d8 [48];
  undefined1 local_7a8 [48];
  undefined1 local_778 [64];
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  undefined1 local_718 [16];
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  float local_6d8;
  double local_6d0;
  double dStack_6c8;
  double local_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  undefined8 local_678;
  long64 local_670;
  TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
  local_668;
  undefined1 local_5e8 [24];
  undefined1 local_5d0 [24];
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> local_5b8;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> local_588;
  TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> local_558
  ;
  undefined1 local_518 [24];
  undefined1 local_500 [24];
  long64 lStack_4e8;
  undefined8 local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined8 local_4a8;
  TTransform<double> local_498;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined8 local_378;
  undefined8 local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined1 local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [96];
  undefined1 local_168 [128];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_948;
  pTVar17 = (TTransform<double> *)
            (**(code **)(*(longlong *)this->_padding_ + 0x498))
                      ((longlong *)this->_padding_,local_1c8);
  local_498.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_498.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_498.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_498.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_498.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_498.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_498.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_498.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_498.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_498.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_498.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_498.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_498,&param_1->LocalTransform,pTVar17);
  local_8f8 = *(undefined1 (*) [16])((longlong)&(param_1->Box).Max.field0_0x0 + 8);
  uVar48 = local_8f8._0_4_;
  uVar58 = local_8f8._4_4_;
  uVar61 = local_8f8._8_4_;
  uVar62 = local_8f8._12_4_;
  auVar35 = *(undefined1 (*) [16])&(param_1->Box).Min.field0_0x0;
  uVar59 = auVar35._8_4_;
  uVar60 = auVar35._12_4_;
  auVar1 = *(undefined1 (*) [16])((longlong)&(param_1->Box).Min.field0_0x0 + 0x10);
  uVar49 = auVar1._0_4_;
  uVar63 = auVar1._4_4_;
  local_4a8._0_1_ = (param_1->Box).IsValid;
  local_4a8._1_1_ = (param_1->Box).Pad[0];
  local_4a8._2_1_ = (param_1->Box).Pad[1];
  local_4a8._3_1_ = (param_1->Box).Pad[2];
  local_4a8._4_1_ = (param_1->Box).Pad[3];
  local_4a8._5_1_ = (param_1->Box).Pad[4];
  local_4a8._6_1_ = (param_1->Box).Pad[5];
  local_4a8._7_1_ = (param_1->Box).Pad[6];
  dVar40 = local_8f8._0_8_;
  dVar56 = local_8f8._8_8_;
  local_8d8._8_4_ = uVar61;
  local_8d8._0_8_ = dVar56;
  local_8d8._12_4_ = uVar62;
  dVar45 = auVar35._8_8_;
  local_8e8._8_4_ = uVar59;
  local_8e8._0_8_ = dVar45;
  local_8e8._12_4_ = uVar60;
  dVar5 = auVar1._0_8_;
  local_8c8 = auVar1;
  if (((((dVar40 <= 0.0) || (0.0 <= dVar45)) || (dVar56 <= 0.0)) || (0.0 <= dVar5)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBox.Max.Y > 0 && InBox.Min.Y < 0 && InBox.Max.Z > 0 && InBox.Min.Z < 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                          ,0x370,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar46 = SUB84(__real_3ff0000000000000,0);
  uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  auVar50._8_4_ = uVar61;
  auVar50._0_8_ = dVar56;
  auVar50._12_4_ = uVar62;
  auVar57._8_8_ = auVar50._8_8_;
  dVar44 = __real_3ff0000000000000 / (double)this->NumPlanarSteps;
  dVar39 = __real_3ff0000000000000 / (double)this->NumHeightSteps;
  auVar57._0_8_ = (dVar56 - dVar5) * __real_3fe0000000000000 * dVar39;
  uStack_4c0 = auVar1._8_8_;
  local_4c8 = dVar5 * dVar39;
  local_888._s_0.Z = auVar57._0_8_ + dVar5;
  local_4d8 = auVar35._0_8_;
  dStack_4d0 = dVar44 * dVar45;
  auVar35._0_8_ = (dVar40 - dVar45) * __real_3fe0000000000000 * dVar44;
  auVar35._8_8_ = dVar56;
  dStack_4b0 = dVar56 * dVar39;
  local_4b8 = dVar40 * dVar44;
  local_898 = (dVar56 - auVar57._0_8_) + __real_3f1a36e2e0000000;
  if (local_888._s_0.Z <= local_898) {
    uVar54 = (uint)__xmm_80000000000000008000000000000000;
    uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar45 = auVar35._0_8_ + dVar45;
    dVar40 = (dVar40 - auVar35._0_8_) + __real_3f1a36e2e0000000;
    local_8a0 = auVar57._0_8_ + auVar57._0_8_;
    local_900 = auVar35._0_8_;
    local_8b0 = dVar40;
    local_8a8 = dVar45;
    local_890 = auVar57._0_8_;
    do {
      dVar56 = auVar57._0_8_;
      if (this->NumHeightSteps < 2) {
        local_918 = 0.0;
        dVar56 = 0.0;
      }
      else {
        local_918 = dVar56;
        if (local_888._s_0.Z <= 0.0) {
          if (0.0 <= local_888._s_0.Z) {
            local_918 = 0.0;
          }
          else {
            local_918 = (double)CONCAT44(auVar57._4_4_ ^ uVar55,auVar57._0_4_ ^ uVar54);
          }
        }
        local_918 = local_888._s_0.Z - local_918;
        if (local_888._s_0.Z <= 0.0) {
          if (0.0 > local_888._s_0.Z) {
            dVar56 = (double)CONCAT44(auVar57._4_4_ ^ uVar55,auVar57._0_4_ ^ uVar54) +
                     local_888._s_0.Z;
            goto LAB_149c86944;
          }
          dVar56 = 0.0;
        }
        dVar56 = dVar56 + local_888._s_0.Z;
      }
LAB_149c86944:
      if (dVar45 <= dVar40) {
        local_8b8 = auVar35._0_8_ + auVar35._0_8_;
        dVar5 = dVar45;
        local_910 = dVar56;
        local_908 = local_888._s_0.Z;
        do {
          dVar45 = _UNK_150689688;
          dVar40 = ___xmm_3ff00000000000003ff0000000000000;
          if (this->NumPlanarSteps < 2) {
            dVar39 = 0.0;
            dVar44 = 0.0;
          }
          else {
            dVar39 = auVar35._0_8_;
            if (dVar5 <= 0.0) {
              if (0.0 <= dVar5) {
                dVar39 = 0.0;
              }
              else {
                dVar39 = (double)CONCAT44(auVar35._4_4_ ^ uVar55,auVar35._0_4_ ^ uVar54);
              }
            }
            dVar39 = dVar5 - dVar39;
            if (dVar5 <= 0.0) {
              if (0.0 <= dVar5) {
                dVar44 = dVar5 + 0.0;
              }
              else {
                dVar44 = (double)CONCAT44(auVar35._4_4_ ^ uVar55,auVar35._0_4_ ^ uVar54) + dVar5;
              }
            }
            else {
              dVar44 = auVar35._0_8_ + dVar5;
            }
          }
          if (local_888._s_0.Z < 0.0) {
            dVar27 = (double)CONCAT44(uVar63,uVar49);
          }
          else {
            dVar27 = (double)CONCAT44(uVar62,uVar61);
          }
          dVar27 = ((double)CONCAT44(uVar47,uVar46) / dVar27) * local_918;
          if (dVar5 < 0.0) {
            dVar41 = (double)CONCAT44(uVar60,uVar59);
          }
          else {
            dVar41 = (double)CONCAT44(uVar58,uVar48);
          }
          dVar39 = ((double)CONCAT44(uVar47,uVar46) / dVar41) * dVar39;
          if (local_888._s_0.Z < 0.0) {
            dVar41 = (double)CONCAT44(uVar63,uVar49);
          }
          else {
            dVar41 = (double)CONCAT44(uVar62,uVar61);
          }
          dVar41 = ((double)CONCAT44(uVar47,uVar46) / dVar41) * dVar56;
          if (dVar5 < 0.0) {
            dVar4 = (double)CONCAT44(uVar60,uVar59);
          }
          else {
            dVar4 = (double)CONCAT44(uVar58,uVar48);
          }
          dVar44 = ((double)CONCAT44(uVar47,uVar46) / dVar4) * dVar44;
          if ((dVar39 * dVar39 + dVar27 * dVar27 < __real_3ff00068db8b8000) &&
             ((this->Fill != EdgesOnly ||
              (___real_3fefff2e48e90000 <= dVar44 * dVar44 + dVar41 * dVar41)))) {
            local_2e8._8_8_ = local_498.Rotation.ZW.m128d_f64[1];
            local_2e8._0_8_ = local_498.Rotation.ZW.m128d_f64[0];
            local_2f8._8_8_ = local_498.Rotation.XY.m128d_f64[1];
            local_2f8._0_8_ = local_498.Rotation.XY.m128d_f64[0];
            dVar41 = local_888._s_0.Z * local_498.Scale3D.ZW.m128d_f64[0];
            dVar56 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            local_2b8 = local_498.Scale3D.XY.m128d_f64[0];
            dStack_2b0 = local_498.Scale3D.XY.m128d_f64[1];
            local_2a8 = local_498.Scale3D.ZW.m128d_f64[0];
            dStack_2a0 = local_498.Scale3D.ZW.m128d_f64[1];
            auVar50 = blendpd(local_2f8,local_2e8,2);
            local_888._s_0.X = 0.0;
            dVar44 = local_498.Scale3D.XY.m128d_f64[0] * 0.0;
            dVar27 = dVar5 * local_498.Scale3D.XY.m128d_f64[1];
            uVar48 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar28._8_4_ = SUB84(local_498.Rotation.ZW.m128d_f64[0],0);
            auVar28._0_8_ = local_498.Rotation.XY.m128d_f64[1];
            auVar28._12_4_ = (int)((ulonglong)local_498.Rotation.ZW.m128d_f64[0] >> 0x20);
            auVar51._8_4_ = SUB84(dVar27,0);
            auVar51._0_8_ = dVar44;
            auVar51._12_4_ = uVar48;
            auVar34._8_4_ = SUB84(dVar27,0);
            auVar34._0_8_ = dVar44;
            auVar34._12_4_ = uVar48;
            auVar1._8_4_ = SUB84(dVar56,0);
            auVar1._0_8_ = dVar41;
            auVar1._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            auVar35 = blendpd(auVar34,auVar1,2);
            auVar52._0_8_ =
                 auVar51._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 local_498.Rotation.XY.m128d_f64[1] * dVar44;
            auVar52._8_8_ = dVar41 * local_498.Rotation.XY.m128d_f64[1] - auVar28._8_8_ * dVar27;
            auVar36._0_8_ =
                 auVar35._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar50._0_8_ * dVar41;
            auVar36._8_8_ =
                 auVar35._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar50._8_8_ * dVar56;
            auVar35 = blendpd(auVar52,auVar36,2);
            dVar56 = auVar52._8_8_ + auVar52._8_8_;
            dVar39 = auVar36._0_8_ + auVar36._0_8_;
            uVar48 = SUB84(dVar39,0);
            uVar49 = (undefined4)((ulonglong)dVar39 >> 0x20);
            auVar53._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar53._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            auVar42._8_4_ = uVar48;
            auVar42._0_8_ = dVar56;
            auVar42._12_4_ = uVar49;
            auVar29._8_4_ = uVar48;
            auVar29._0_8_ = dVar56;
            auVar29._12_4_ = uVar49;
            auVar37._8_4_ = uVar48;
            auVar37._0_8_ = dVar56;
            auVar37._12_4_ = uVar49;
            auVar35 = blendpd(auVar37,auVar53,2);
            auVar43._0_8_ =
                 auVar42._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar56 * local_498.Rotation.XY.m128d_f64[1];
            auVar43._8_8_ =
                 auVar53._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 auVar29._8_8_ * local_498.Rotation.ZW.m128d_f64[0];
            auVar30._8_4_ = SUB84(auVar53._8_8_,0);
            auVar30._0_8_ = auVar53._0_8_;
            auVar30._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
            auVar38._0_8_ =
                 auVar35._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar53._0_8_ * auVar50._0_8_;
            auVar38._8_8_ =
                 auVar35._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar30._8_8_ * auVar50._8_8_;
            auVar31._8_4_ = SUB84(auVar43._8_8_,0);
            auVar31._0_8_ = auVar43._0_8_;
            auVar31._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
            auVar35 = blendpd(auVar43,auVar38,2);
            local_2c8 = auVar53._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar41 + auVar35._0_8_
                        + local_498.Translation.ZW.m128d_f64[0];
            dVar39 = dVar39 * local_498.Rotation.ZW.m128d_f64[1] + dVar27 + auVar38._0_8_ +
                     local_498.Translation.XY.m128d_f64[1];
            local_738 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            dStack_730 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_728 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            dStack_720 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
            uStack_2c0 = 0;
            local_718._8_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_718._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_6f8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
            dStack_6f0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
            local_708 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            dStack_700 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_2d8._8_4_ = SUB84(dVar39,0);
            local_2d8._0_8_ =
                 dVar56 * local_498.Rotation.ZW.m128d_f64[1] + dVar44 + auVar31._8_8_ +
                 local_498.Translation.XY.m128d_f64[0];
            local_2d8._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
            uVar54 = (uint)__xmm_80000000000000008000000000000000;
            uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            dStack_6c8 = (double)CONCAT44((uint)((ulonglong)
                                                 UE::Math::TVector<double>::OneVector.field0_0x0.
                                                 _8_8_ >> 0x20) ^ uVar55,
                                          SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0
                                                .Y,0) ^ uVar54);
            local_6e8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
            dStack_6e0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
            local_6d8 = 1.0;
            local_678 = 0x3f000000;
            local_670 = -1;
            local_6d0 = (double)CONCAT44((uint)((ulonglong)
                                                UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _0_8_ >> 0x20) ^ uVar55,
                                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               X,0) ^ uVar54);
            local_6c0 = (double)CONCAT44((uint)((ulonglong)
                                                UE::Math::TVector<double>::OneVector.field0_0x0.
                                                _16_8_ >> 0x20) ^ uVar55,
                                         SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.
                                               Z,0) ^ uVar54);
            local_6b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
            dStack_6b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
            local_6a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
            local_698 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_690 = _UNK_150689688;
            local_688 = ___xmm_3ff00000000000003ff0000000000000;
            dStack_680 = _UNK_150689688;
            local_928 = (double *)param_2->_padding_;
            local_888._s_0.Y = dVar5;
            cVar13 = (**(code **)(*(longlong *)this->_padding_ + 0x3c0))
                               ((longlong *)this->_padding_,local_2f8,&local_4d8,&local_738);
            if (cVar13 == '\0') {
LAB_149c876f7:
              uVar48 = SUB84(local_918,0);
              uVar49 = (undefined4)((ulonglong)local_918 >> 0x20);
            }
            else {
              plVar2 = (longlong *)this->_padding_;
              if (plVar2 != (longlong *)0x0) {
                local_438 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
                dStack_430 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_3d8 = 0x3f800000;
                local_378 = 0x3f000000;
                local_370 = 0xffffffffffffffff;
                local_428 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
                dStack_420 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_418 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                dStack_410 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                local_3f8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
                dStack_3f0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_408 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                dStack_400 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_3c8 = CONCAT44((uint)((ulonglong)
                                            UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                           0x20) ^ uVar55,
                                     SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0)
                                     ^ uVar54);
                local_3e8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
                dStack_3e0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_3d0 = CONCAT44((uint)((ulonglong)
                                            UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                                           0x20) ^ uVar55,
                                     SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0)
                                     ^ uVar54);
                local_3c0 = CONCAT44((uint)((ulonglong)
                                            UE::Math::TVector<double>::OneVector.field0_0x0._16_8_
                                           >> 0x20) ^ uVar55,
                                     SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0)
                                     ^ uVar54);
                local_3b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                dStack_3b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
                local_3a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                local_398 = dVar40;
                dStack_390 = dVar45;
                local_388 = dVar40;
                dStack_380 = dVar45;
                local_368 = local_6d0;
                dStack_360 = dStack_6c8;
                local_338 = 1;
                local_920 = param_2->_padding_;
                local_928 = &local_438;
                local_358 = local_6c0;
                local_350 = local_6b8;
                dStack_348 = dStack_6b0;
                local_340 = local_6a8;
                cVar13 = (**(code **)(*plVar2 + 0x3d0))
                                   (plVar2,&local_738,&local_368,&this->_padding_);
                if (cVar13 == '\0') goto LAB_149c876f7;
                local_718._8_8_ = dStack_410;
                local_718._0_8_ = local_418;
                local_738 = local_438;
                dStack_730 = dStack_430;
                local_728 = local_428;
                dStack_720 = dStack_420;
                local_6f8 = local_3f8;
                dStack_6f0 = dStack_3f0;
                local_6e8 = local_3e8;
                dStack_6e0 = dStack_3e0;
                local_708 = local_408;
                dStack_700 = dStack_400;
              }
              plVar2 = (longlong *)this->_padding_;
              local_238 = 0x3f800000;
              local_1f8 = dVar40;
              dStack_1f0 = dVar45;
              local_1e8 = dVar40;
              dStack_1e0 = dVar45;
              local_1d8 = 0x3f000000;
              local_1d0 = 0xffffffffffffffff;
              local_298 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              dStack_290 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_288 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
              dStack_280 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_278 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              dStack_270 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_258 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
              dStack_250 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_268 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              dStack_260 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_228 = CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                                         0x20) ^ uVar55,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^
                                   uVar54);
              local_218 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
              dStack_210 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
              local_248 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
              dStack_240 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_208 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              local_230 = CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                                         0x20) ^ uVar55,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^
                                   uVar54);
              local_220 = CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                                         0x20) ^ uVar55,
                                   SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^
                                   uVar54);
              uVar33 = 0;
              if (plVar2 != (longlong *)0x0) {
                local_300 = 1;
                local_928 = (double *)param_2->_padding_;
                local_330 = local_6d0;
                dStack_328 = dStack_6c8;
                local_320 = local_6c0;
                local_318 = local_6b8;
                dStack_310 = dStack_6b0;
                local_308 = local_6a8;
                cVar13 = (**(code **)(*plVar2 + 0x3c0))(plVar2,&local_738,&local_330,&local_298);
                uVar33 = extraout_XMM0_Qb;
                if (cVar13 == '\0') goto LAB_149c876f7;
              }
              if ((char)this->_padding_ == '\0') {
                cVar13 = *(char *)((longlong)&this->_padding_ + 2);
                if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
                  if (cVar13 != '\0') {
                    auVar6._4_8_ = uVar33;
                    auVar6._0_4_ = local_718._4_4_;
                    auVar32._0_8_ = auVar6._0_8_ << 0x20;
                    auVar32._8_4_ = local_718._8_4_;
                    auVar32._12_4_ = local_718._12_4_;
                    iVar15 = (int)auVar32._8_8_;
                    iVar16 = (int)local_718._0_8_;
                    goto LAB_149c870b5;
                  }
                  local_870[0]._0_16_ = local_718;
                  local_870[0]._16_8_ = local_708;
                  iVar15 = PCGHelpers::ComputeSeedFromPosition
                                     ((TVector<double> *)&local_870[0]._s_0);
                }
                else {
                  if (cVar13 != '\0') {
                    iVar15 = (int)local_888._s_0.Y;
                    iVar16 = (int)local_888._s_0.X;
                    goto LAB_149c870b5;
                  }
                  iVar15 = PCGHelpers::ComputeSeedFromPosition((TVector<double> *)&local_888._s_0);
                }
              }
              else {
                iVar15 = param_1->SampleIndex;
                iVar16 = (int)this->_padding_;
LAB_149c870b5:
                iVar15 = PCGHelpers::ComputeSeed(iVar16,iVar15);
              }
              local_678 = CONCAT44(iVar15,*(undefined4 *)((longlong)&this->_padding_ + 4));
              (**(code **)(this->_padding_ + 8))(this,param_1,&local_738,param_2->_padding_);
              iVar15 = (**(code **)(param_2->_padding_ + 0x488))(param_2);
              (**(code **)(param_2->_padding_ + 0x490))(param_2,iVar15 + 1,1);
              (**(code **)(param_2->_padding_ + 0x498))(param_2,0xff);
              local_668.StubValue.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_668.StubValue.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_668.ElementView.FirstElementPtr = (TTransform<double> *)0x0;
              local_668.ElementView.BytesBetweenElements = 0;
              local_668.ElementView.NumElements = 0;
              local_668._16_8_ = local_668._16_8_ & 0xffffffff00000000;
              local_5e8._0_16_ = ZEXT816(0);
              local_668.StubValue.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_668.StubValue.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_5e8._16_8_ = local_5e8._16_8_ & 0xffffffff00000000;
              local_5d0._0_16_ = ZEXT816(0);
              local_5d0._16_8_ = local_5d0._16_8_ & 0xffffffff00000000;
              local_5b8.ElementView.FirstElementPtr = (TVector<double> *)0x0;
              local_668.StubValue.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_668.StubValue.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_5b8.ElementView.BytesBetweenElements = 0;
              local_5b8.ElementView.NumElements = 0;
              local_5b8._16_8_ = local_5b8._16_8_ & 0xffffffff00000000;
              local_588.ElementView.FirstElementPtr = (TVector<double> *)0x0;
              local_588.ElementView.BytesBetweenElements = 0;
              local_588.ElementView.NumElements = 0;
              local_588._16_8_ = local_588._16_8_ & 0xffffffff00000000;
              local_668.StubValue.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_668.StubValue.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_558.ElementView.FirstElementPtr = (TVector4<double> *)0x0;
              local_558.ElementView.BytesBetweenElements = 0;
              local_558.ElementView.NumElements = 0;
              local_558._16_8_ = local_558._16_8_ & 0xffffffff00000000;
              local_518._0_16_ = ZEXT816(0);
              local_518._16_8_ = local_518._16_8_ & 0xffffffff00000000;
              local_500._0_16_ = ZEXT816(0);
              local_500._16_8_ = local_500._16_8_ & 0xffffffff00000000;
              local_668.StubValue.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_668.StubValue.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_668.StubValue.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_668.StubValue.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_558.StubValue.field0_0x0._0_16_ = ZEXT816(0);
              local_558.StubValue.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
              local_558.StubValue.field0_0x0._s_0.W = _UNK_15061cbc8;
              bVar14 = (**(code **)(param_2->_padding_ + 0x640))(param_2,0);
              iVar16 = (**(code **)(param_2->_padding_ + 0x488))(param_2);
              if ((iVar16 == 1) &&
                 (cVar13 = (**(code **)(param_2->_padding_ + 0x440))(param_2), cVar13 == '\0')) {
                uVar48 = SUB84(local_918,0);
                uVar49 = (undefined4)((ulonglong)local_918 >> 0x20);
                bVar12 = true;
LAB_149c8728e:
                puVar18 = (undefined8 *)
                          (**(code **)(param_2->_padding_ + 0x4c0))(param_2,local_168,0);
                local_668.ElementView.FirstElementPtr = (TTransform<double> *)*puVar18;
                local_668.ElementView._8_8_ = puVar18[1];
                local_668._16_8_ = puVar18[2];
                local_668._padding_ = puVar18[3];
                local_668.StubValue.Rotation.XY.m128d_f64[0] = (double)puVar18[4];
                local_668.StubValue.Rotation.XY.m128d_f64[1] = (double)puVar18[5];
                local_668.StubValue.Rotation.ZW.m128d_f64[0] = (double)puVar18[6];
                local_668.StubValue.Rotation.ZW.m128d_f64[1] = (double)puVar18[7];
                local_668.StubValue.Translation.XY.m128d_f64[0] = (double)puVar18[8];
                local_668.StubValue.Translation.XY.m128d_f64[1] = (double)puVar18[9];
                local_668.StubValue.Translation.ZW.m128d_f64[0] = (double)puVar18[10];
                local_668.StubValue.Translation.ZW.m128d_f64[1] = (double)puVar18[0xb];
                local_668.StubValue.Scale3D.XY.m128d_f64 = *(double (*) [2])(puVar18 + 0xc);
                local_668.StubValue.Scale3D.ZW.m128d_f64[0] = (double)puVar18[0xe];
                local_668.StubValue.Scale3D.ZW.m128d_f64[1] = (double)puVar18[0xf];
                if (!bVar12) goto LAB_149c87300;
LAB_149c87305:
                pTVar19 = (TStridedView<float,int> *)
                          (**(code **)(param_2->_padding_ + 0x4c8))(param_2,local_840,0);
                local_5e8._0_16_ = *(undefined1 (*) [16])pTVar19;
                local_5e8._16_8_ = pTVar19[1].FirstElementPtr;
                if (!bVar12) goto LAB_149c87334;
LAB_149c87339:
                pTVar19 = (TStridedView<float,int> *)
                          (**(code **)(param_2->_padding_ + 0x4e8))(param_2,local_828,0);
                local_5d0._0_16_ = *(undefined1 (*) [16])pTVar19;
                local_5d0._16_8_ = pTVar19[1].FirstElementPtr;
                if (!bVar12) goto LAB_149c87368;
LAB_149c8736d:
                puVar18 = (undefined8 *)
                          (**(code **)(param_2->_padding_ + 0x4d0))(param_2,local_7d8,0);
                local_5b8.ElementView.FirstElementPtr = (TVector<double> *)*puVar18;
                local_5b8.ElementView._8_8_ = puVar18[1];
                local_5b8._16_8_ = puVar18[2];
                local_5b8.StubValue.field0_0x0._s_0.X = (double)puVar18[3];
                local_5b8.StubValue.field0_0x0._8_16_ = *(undefined1 (*) [16])(puVar18 + 4);
                if (!bVar12) goto LAB_149c873a5;
LAB_149c873aa:
                puVar18 = (undefined8 *)
                          (**(code **)(param_2->_padding_ + 0x4d8))(param_2,local_7a8,0);
                local_588.ElementView.FirstElementPtr = (TVector<double> *)*puVar18;
                local_588.ElementView._8_8_ = puVar18[1];
                local_588._16_8_ = puVar18[2];
                local_588.StubValue.field0_0x0._s_0.X = (double)puVar18[3];
                local_588.StubValue.field0_0x0._8_16_ = *(undefined1 (*) [16])(puVar18 + 4);
                if (!bVar12) goto LAB_149c873e5;
LAB_149c873ea:
                puVar18 = (undefined8 *)
                          (**(code **)(param_2->_padding_ + 0x4e0))(param_2,local_778,0);
                local_558.ElementView.FirstElementPtr = (TVector4<double> *)*puVar18;
                local_558.ElementView._8_8_ = puVar18[1];
                local_558._16_8_ = puVar18[2];
                local_558._padding_ = puVar18[3];
                local_558.StubValue.field0_0x0._0_16_ = *(undefined1 (*) [16])(puVar18 + 4);
                local_558.StubValue.field0_0x0._s_0.Z = (double)puVar18[6];
                local_558.StubValue.field0_0x0._s_0.W = (double)puVar18[7];
                if (!bVar12) goto LAB_149c87430;
LAB_149c87435:
                pTVar20 = (TStridedView<int,int> *)
                          (**(code **)(param_2->_padding_ + 0x4f0))(param_2,local_810,0);
                local_518._0_16_ = *(undefined1 (*) [16])pTVar20;
                local_518._16_8_ = pTVar20[1].FirstElementPtr;
                if (!bVar12) goto LAB_149c87464;
LAB_149c87468:
                pTVar21 = (TStridedView<__int64,int> *)
                          (**(code **)(param_2->_padding_ + 0x4f8))(param_2,local_7f8,0);
                local_500._0_16_ = *(undefined1 (*) [16])pTVar21;
                local_500._16_8_ = pTVar21[1].FirstElementPtr;
                lStack_4e8._0_4_ = pTVar21[1].BytesBetweenElements;
                lStack_4e8._4_4_ = pTVar21[1].NumElements;
              }
              else {
                uVar48 = SUB84(local_918,0);
                uVar49 = (undefined4)((ulonglong)local_918 >> 0x20);
                bVar12 = false;
                if ((bVar14 & 1) != 0) goto LAB_149c8728e;
LAB_149c87300:
                if ((bVar14 & 2) != 0) goto LAB_149c87305;
LAB_149c87334:
                if ((bVar14 & 0x20) != 0) goto LAB_149c87339;
LAB_149c87368:
                if ((bVar14 & 4) != 0) goto LAB_149c8736d;
LAB_149c873a5:
                if ((bVar14 & 8) != 0) goto LAB_149c873aa;
LAB_149c873e5:
                if ((bVar14 & 0x10) != 0) goto LAB_149c873ea;
LAB_149c87430:
                if ((bVar14 & 0x40) != 0) goto LAB_149c87435;
LAB_149c87464:
                if ((char)bVar14 < '\0') goto LAB_149c87468;
              }
              dVar9 = dStack_6e0;
              dVar8 = local_6e8;
              dVar4 = dStack_6f0;
              dVar41 = local_6f8;
              dVar27 = dStack_700;
              dVar44 = local_708;
              dVar39 = dStack_720;
              dVar56 = local_728;
              dVar45 = dStack_730;
              dVar40 = local_738;
              if (local_668.NumElements != 0) {
                uVar33 = local_718._0_8_;
                uVar7 = local_718._8_8_;
                pTVar17 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                          ::operator[](&local_668,iVar15);
                (pTVar17->Rotation).XY.m128d_f64[0] = dVar40;
                (pTVar17->Rotation).XY.m128d_f64[1] = dVar45;
                (pTVar17->Rotation).ZW.m128d_f64[0] = dVar56;
                (pTVar17->Rotation).ZW.m128d_f64[1] = dVar39;
                (pTVar17->Translation).XY.m128d_f64[0] = (double)uVar33;
                (pTVar17->Translation).XY.m128d_f64[1] = (double)uVar7;
                (pTVar17->Translation).ZW.m128d_f64[0] = dVar44;
                (pTVar17->Translation).ZW.m128d_f64[1] = dVar27;
                (pTVar17->Scale3D).XY.m128d_f64[0] = dVar41;
                (pTVar17->Scale3D).XY.m128d_f64[1] = dVar4;
                (pTVar17->Scale3D).ZW.m128d_f64[0] = dVar8;
                (pTVar17->Scale3D).ZW.m128d_f64[1] = dVar9;
              }
              fVar10 = local_6d8;
              if (local_5e8._16_4_ != 0) {
                pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                    ((TPCGValueRange<float,TStridedView<float,int>_> *)local_5e8,
                                     iVar15);
                *pfVar22 = fVar10;
              }
              if (local_5d0._16_4_ != 0) {
                fVar10 = (float)local_678;
                pfVar22 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                                    ((TPCGValueRange<float,TStridedView<float,int>_> *)local_5d0,
                                     iVar15);
                *pfVar22 = fVar10;
              }
              dVar56 = local_6c0;
              dVar45 = dStack_6c8;
              dVar40 = local_6d0;
              if (local_5b8.NumElements != 0) {
                pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                          ::operator[](&local_5b8,iVar15);
                (pTVar23->field0_0x0)._s_0.X = dVar40;
                (pTVar23->field0_0x0)._s_0.Y = dVar45;
                (pTVar23->field0_0x0)._s_0.Z = dVar56;
              }
              dVar56 = local_6a8;
              dVar45 = dStack_6b0;
              dVar40 = local_6b8;
              if (local_588.NumElements != 0) {
                pTVar23 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                          ::operator[](&local_588,iVar15);
                (pTVar23->field0_0x0)._s_0.X = dVar40;
                (pTVar23->field0_0x0)._s_0.Y = dVar45;
                (pTVar23->field0_0x0)._s_0.Z = dVar56;
              }
              dVar39 = dStack_680;
              dVar56 = local_688;
              dVar45 = dStack_690;
              dVar40 = local_698;
              if (local_558.NumElements != 0) {
                pTVar24 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                          ::operator[](&local_558,iVar15);
                (pTVar24->field0_0x0)._s_0.X = dVar40;
                (pTVar24->field0_0x0)._s_0.Y = dVar45;
                (pTVar24->field0_0x0)._s_0.Z = dVar56;
                (pTVar24->field0_0x0)._s_0.W = dVar39;
              }
              if (local_518._16_4_ != 0) {
                iVar16 = local_678._4_4_;
                piVar25 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                                    ((TPCGValueRange<int,TStridedView<int,int>_> *)local_518,iVar15)
                ;
                *piVar25 = iVar16;
              }
              lVar11 = local_670;
              if (local_500._16_4_ != 0) {
                plVar26 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                                    ((TPCGValueRange<__int64,TStridedView<__int64,int>_> *)local_500
                                     ,iVar15);
                *plVar26 = lVar11;
              }
              uVar54 = (uint)__xmm_80000000000000008000000000000000;
              uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            }
            local_918 = (double)CONCAT44(uVar49,uVar48);
            uVar46 = SUB84(__real_3ff0000000000000,0);
            uVar47 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            auVar35._8_8_ = 0;
            auVar35._0_8_ = local_900;
            uVar48 = local_8f8._0_4_;
            uVar58 = local_8f8._4_4_;
            uVar59 = local_8e8._0_4_;
            uVar60 = local_8e8._4_4_;
            uVar61 = local_8d8._0_4_;
            uVar62 = local_8d8._4_4_;
            uVar49 = local_8c8._0_4_;
            uVar63 = local_8c8._4_4_;
            local_888._s_0.Z = local_908;
            dVar56 = local_910;
          }
          dVar5 = dVar5 + local_8b8;
          dVar45 = local_8a8;
          dVar40 = local_8b0;
        } while (dVar5 <= local_8b0);
      }
      local_888._s_0.Z = local_888._s_0.Z + local_8a0;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = local_890;
    } while (local_888._s_0.Z <= local_898);
  }
  return;
}

