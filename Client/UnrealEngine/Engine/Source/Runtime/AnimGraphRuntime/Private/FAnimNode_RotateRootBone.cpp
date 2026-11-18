// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463d7510

UScriptStruct * __cdecl FAnimNode_RotateRootBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone,(UObject *)pUVar1,
                         L"AnimNode_RotateRootBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton;
}

// FAnimNode_RotateRootBone @ 1464055c0

FAnimNode_RotateRootBone * __thiscall
FAnimNode_RotateRootBone::FAnimNode_RotateRootBone(FAnimNode_RotateRootBone *this)

{
  double dVar1;
  
  *(undefined4 *)&(this->BasePose).field_0x8 = 0xffffffff;
  *(undefined8 *)&this->BasePose = 0;
  (this->BasePose).field_0xc = 0;
  (this->PitchScaleBiasClamp).bMapRange = false;
  (this->PitchScaleBiasClamp).bClampResult = false;
  (this->PitchScaleBiasClamp).bInterpResult = false;
  (this->PitchScaleBiasClamp).bInitialized = false;
  (this->PitchScaleBiasClamp).InRange.Min = 0.0;
  (this->PitchScaleBiasClamp).ClampMin = 0.0;
  (this->YawScaleBiasClamp).bMapRange = false;
  (this->YawScaleBiasClamp).bClampResult = false;
  (this->YawScaleBiasClamp).bInterpResult = false;
  (this->YawScaleBiasClamp).bInitialized = false;
  (this->YawScaleBiasClamp).InRange.Min = 0.0;
  (this->YawScaleBiasClamp).ClampMin = 0.0;
  *(undefined8 *)&(this->PitchScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->PitchScaleBiasClamp).OutRange.Max = 1.0;
  (this->PitchScaleBiasClamp).Scale = 1.0;
  (this->PitchScaleBiasClamp).Bias = 0.0;
  (this->PitchScaleBiasClamp).ClampMax = 1.0;
  (this->PitchScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->PitchScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->PitchScaleBiasClamp).InterpolatedResult = 0.0;
  *(undefined8 *)&(this->YawScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->YawScaleBiasClamp).OutRange.Max = 1.0;
  (this->YawScaleBiasClamp).Scale = 1.0;
  (this->YawScaleBiasClamp).Bias = 0.0;
  (this->YawScaleBiasClamp).ClampMax = 1.0;
  (this->YawScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->YawScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->YawScaleBiasClamp).InterpolatedResult = 0.0;
  this->_padding_ = (longlong)&___7FAnimNode_RotateRootBone__6B_;
  this->_padding_ = 0;
  this->Pitch = 0.0;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  this->Yaw = 0.0;
  (this->MeshToComponent).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->MeshToComponent).Yaw = dVar1;
  (this->MeshToComponent).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bRotateRootMotionAttribute = false;
  this->ActualPitch = 0.0;
  this->ActualYaw = 0.0;
  return this;
}

// CacheBones_AnyThread @ 14641a1d0

void __thiscall
FAnimNode_RotateRootBone::CacheBones_AnyThread
          (FAnimNode_RotateRootBone *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotateRootBone::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643d630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_RotateRootBone::Evaluate_AnyThread(FAnimNode_RotateRootBone *this,FPoseContext *param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  bool bVar19;
  char cVar20;
  TQuat<double> *pTVar21;
  IAnimRootMotionProvider *pIVar22;
  FStackAttributeContainer *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  longlong local_200;
  TRotator<double> local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TQuat<double> local_168;
  TQuat<double> local_148;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  double dVar46;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_228;
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotateRootBone::Evaluate_AnyThread");
  FPoseLink::Evaluate(&this->BasePose,param_1);
  if ((__real_38d1b717 < (float)((uint)this->ActualPitch & __xmm_7fffffff7fffffff7fffffff7fffffff))
     || (__real_38d1b717 < (float)((uint)this->ActualYaw & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    local_1f8.Pitch = (double)this->ActualPitch;
    local_1f8.Yaw = (double)this->ActualYaw;
    local_1f8.Roll = 0.0;
    pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_1f8,&local_168);
    dVar4 = pTVar21->X;
    dVar36 = pTVar21->Y;
    dVar42 = pTVar21->Z;
    dVar8 = pTVar21->W;
    local_1d8 = dVar4;
    dStack_1d0 = dVar36;
    local_1c8 = dVar42;
    dStack_1c0 = dVar8;
    pTVar21 = UE::Math::TRotator<double>::Quaternion(&this->MeshToComponent,&local_148);
    uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
    uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
    uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
    uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    local_1b8 = pTVar21->X;
    dStack_1b0 = pTVar21->Y;
    local_1a8 = pTVar21->Z;
    dStack_1a0 = pTVar21->W;
    dVar6 = local_1b8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar7 = dStack_1b0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar11 = local_1a8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar12 = dStack_1a0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar34._8_4_ = SUB84(dVar12,0);
    auVar34._0_8_ = dVar12;
    auVar34._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar37._8_4_ = SUB84(dVar7,0);
    auVar37._0_8_ = dVar7;
    auVar37._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar45._8_4_ = SUB84(dVar11,0);
    auVar45._0_8_ = dVar11;
    auVar45._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dVar15 = dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar12 * dVar4 +
             dVar7 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar11 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar16 = dVar6 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar34._8_8_ * dVar36 +
             auVar37._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + auVar45._8_8_ * dVar4 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar17 = dVar6 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar12 * dVar42 +
             dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar6 = dVar6 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar12 * dVar8 +
            dVar7 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar11 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    iVar1 = *(int *)&(param_1->Pose).field_0x8;
    auVar38._8_4_ = SUB84(dVar16,0);
    auVar38._0_8_ = dVar16;
    auVar38._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar28._8_4_ = SUB84(dVar17,0);
    auVar28._0_8_ = dVar17;
    auVar28._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar11 = dVar15 * dStack_1a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_1b8 * dVar6 +
             dVar16 * local_1a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar17 * dStack_1b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar12 = dVar15 * local_1a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dStack_1b0 * dVar6 +
             auVar38._8_8_ * dStack_1a0 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar28._8_8_ * local_1b8 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar52 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar7 = dVar15 * dStack_1b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar6 * local_1a8 +
            local_1b8 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar17 * dStack_1a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar6 = dVar15 * local_1b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar6 * dStack_1a0 +
            dStack_1b0 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar17 * local_1a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar50 = SUB84(dVar6,0);
    uVar51 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (iVar1 < 1) {
      local_208 = 0;
      local_200 = (longlong)iVar1;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
      uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
      uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
      uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    }
    iVar1 = *(int *)&(param_1->Pose).field_0x8;
    pauVar2 = *(undefined1 (**) [16])&param_1->Pose;
    if (iVar1 < 1) {
      local_208 = 0;
      local_200 = (longlong)iVar1;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
      uVar54 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
      uVar55 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
      uVar56 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
    }
    auVar29._8_4_ = uVar50;
    auVar29._0_8_ = dVar7;
    auVar29._12_4_ = uVar51;
    auVar39._8_4_ = SUB84(dVar12,0);
    auVar39._0_8_ = dVar11;
    auVar39._12_4_ = uVar52;
    auVar43._8_4_ = uVar50;
    auVar43._0_8_ = dVar7;
    auVar43._12_4_ = uVar51;
    dVar46 = auVar43._8_8_;
    auVar44._8_8_ = dVar7;
    auVar44._0_8_ = dVar46;
    auVar34 = **(undefined1 (**) [16])&param_1->Pose;
    auVar45 = (*(undefined1 (**) [16])&param_1->Pose)[1];
    dVar8 = auVar34._0_8_;
    dVar47 = auVar45._8_8_;
    auVar48._8_4_ = auVar34._0_4_;
    auVar48._0_8_ = dVar8;
    auVar48._12_4_ = auVar34._4_4_;
    dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar14 = auVar45._0_8_;
    auVar30._8_4_ = auVar45._0_4_;
    auVar30._0_8_ = dVar14;
    auVar30._12_4_ = auVar45._4_4_;
    dVar9 = auVar34._8_8_;
    dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar40._8_4_ = uVar50;
    auVar40._0_8_ = dVar7;
    auVar40._12_4_ = uVar51;
    auVar31._8_4_ = SUB84(dVar12,0);
    auVar31._0_8_ = dVar11;
    auVar31._12_4_ = uVar52;
    dVar13 = dVar8 * dVar7 * (double)CONCAT44(uVar56,uVar55) + auVar31._8_8_ * dVar47 +
             auVar40._8_8_ * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar10._8_4_ = SUB84(dVar13,0);
    auVar10._0_8_ =
         dVar8 * dVar46 * (double)CONCAT44(uVar54,uVar53) + dVar11 * dVar47 +
         dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar14 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *pauVar2 = auVar10;
    *(double *)pauVar2[1] =
         dVar8 * dVar12 * dVar15 + dVar7 * dVar47 + dVar11 * dVar9 * dVar16 +
         dVar14 * dVar46 * dVar17;
    *(double *)(pauVar2[1] + 8) =
         auVar48._8_8_ * dVar11 * dVar4 + auVar29._8_8_ * dVar47 + auVar39._8_8_ * dVar9 * dVar36 +
         auVar30._8_8_ * dVar7 * dVar42;
    iVar1 = *(int *)&(param_1->Pose).field_0x8;
    if (iVar1 < 1) {
      local_208 = 0;
      local_200 = (longlong)iVar1;
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar19) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pauVar2 = *(undefined1 (**) [16])&param_1->Pose;
    dVar15 = *(double *)*pauVar2;
    dVar16 = *(double *)(*pauVar2 + 8);
    dVar17 = *(double *)pauVar2[1];
    dVar4 = *(double *)(pauVar2[1] + 8);
    dVar36 = dVar17 * dVar17 + dVar15 * dVar15;
    dVar42 = dVar4 * dVar4 + dVar16 * dVar16;
    auVar32._8_4_ = SUB84(dVar42,0);
    auVar32._0_8_ = dVar36;
    auVar32._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar33._0_8_ = auVar32._8_8_ + dVar36;
    auVar33._8_8_ = dVar36 + dVar42;
    auVar45 = sqrtpd(auVar44,auVar33);
    uVar24 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar33._0_8_);
    uVar26 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar33._8_8_);
    uVar25 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar33._0_8_);
    uVar27 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar33._8_8_);
    auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar45);
    auVar45 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
    auVar35._0_8_ = uVar25 & (ulonglong)(auVar34._0_8_ * dVar15);
    uVar18 = uVar27 & (ulonglong)(auVar34._8_8_ * dVar16);
    auVar35._8_4_ = (undefined4)uVar18;
    auVar35._12_4_ = (undefined4)(uVar18 >> 0x20);
    auVar49._0_8_ = uVar24 & (ulonglong)(auVar45._0_8_ * dVar17);
    uVar18 = uVar26 & (ulonglong)(auVar45._8_8_ * dVar4);
    auVar49._8_4_ = (undefined4)uVar18;
    auVar49._12_4_ = (undefined4)(uVar18 >> 0x20);
    auVar5._4_4_ = ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_
    ;
    auVar5._0_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    auVar5._8_4_ = ~(uint)uVar27 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    auVar5._12_4_ =
         ~(uint)(uVar27 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar41._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    auVar41._4_4_ =
         ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    auVar41._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    auVar41._12_4_ =
         ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    *pauVar2 = auVar35 | auVar5;
    pauVar2[1] = auVar49 | auVar41;
    if ((this->bRotateRootMotionAttribute != false) &&
       (pIVar22 = UE::Anim::IAnimRootMotionProvider::Get(),
       pIVar22 != (IAnimRootMotionProvider *)0x0)) {
      pFVar23 = &param_1->CustomAttributes;
      cVar20 = (**(code **)((longlong)*pIVar22 + 0x28))(pIVar22,pFVar23);
      if (cVar20 != '\0') {
        local_128 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dStack_120 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_118 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dStack_110 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_108 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dStack_100 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_f8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_f0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_e8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        dStack_e0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_d8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_d0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        cVar20 = (**(code **)((longlong)*pIVar22 + 0x20))(pIVar22,pFVar23,&local_128);
        if (cVar20 != '\0') {
          dVar16 = local_f8 * dVar12 - dStack_100 * dVar7;
          dVar16 = dVar16 + dVar16;
          dVar17 = local_108 * dVar7 - local_f8 * dVar11;
          dVar17 = dVar17 + dVar17;
          dVar15 = dStack_100 * dVar11 - local_108 * dVar12;
          dVar15 = dVar15 + dVar15;
          local_108 = (dVar15 * dVar12 - dVar17 * dVar7) + dVar16 * dVar6 + local_108;
          local_f8 = (dVar17 * dVar11 - dVar16 * dVar12) + dVar15 * dVar6 + local_f8;
          dStack_100 = (dVar16 * dVar7 - dVar15 * dVar11) + dVar17 * dVar6 + dStack_100;
          dStack_f0 = 0.0;
          (**(code **)((longlong)*pIVar22 + 0x18))(pIVar22,&local_128,pFVar23);
        }
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146445b10

void __thiscall
FAnimNode_RotateRootBone::GatherDebugData(FAnimNode_RotateRootBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotateRootBone::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotateRootBone,(UObject *)pUVar1,
                         L"AnimNode_RotateRootBone");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RotateRootBone.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"Pitch(%.2f) Yaw(%.2f)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->BasePose,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645a4d0

void __thiscall
FAnimNode_RotateRootBone::Initialize_AnyThread
          (FAnimNode_RotateRootBone *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotateRootBone::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->BasePose,param_1);
  (this->PitchScaleBiasClamp).bInitialized = false;
  (this->YawScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 146478ed0

void __thiscall
FAnimNode_RotateRootBone::Update_AnyThread
          (FAnimNode_RotateRootBone *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  float fVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotateRootBone::Update_AnyThread");
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  FPoseLinkBase::Update((FPoseLinkBase *)&this->BasePose,param_1);
  fVar1 = FInputScaleBiasClamp::ApplyTo(&this->PitchScaleBiasClamp,this->Pitch,param_1->DeltaTime);
  this->ActualPitch = fVar1;
  fVar1 = FInputScaleBiasClamp::ApplyTo(&this->YawScaleBiasClamp,this->Yaw,param_1->DeltaTime);
  this->ActualYaw = fVar1;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Pitch",
             this->ActualPitch);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Yaw",
             this->ActualYaw);
  FStatsHierarchical::EndMeasurement();
  return;
}

