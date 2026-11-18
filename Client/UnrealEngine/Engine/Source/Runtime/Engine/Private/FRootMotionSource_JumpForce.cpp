// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticStruct @ 147b9cd40

UScriptStruct * __cdecl FRootMotionSource_JumpForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce,(UObject *)pUVar1,
                         L"RootMotionSource_JumpForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton;
}

// IsTimeOutEnabled @ 147b9cd80

bool __thiscall FRootMotionSource_JumpForce::IsTimeOutEnabled(FRootMotionSource_JumpForce *this)

{
  if (this->bDisableTimeout != false) {
    return false;
  }
  return 0.0 < *(float *)&this->_padding_ || *(float *)&this->_padding_ == 0.0;
}

// Clone @ 147b9cda0

/* WARNING: Type propagation algorithm not settling */

FRootMotionSource * __thiscall FRootMotionSource_JumpForce::Clone(FRootMotionSource_JumpForce *this)

{
  UCurveVector *pUVar1;
  UCurveFloat *pUVar2;
  double dVar3;
  FRootMotionSource *this_00;
  
  this_00 = ::operator_new(0x110);
  if (this_00 != (FRootMotionSource *)0x0) {
    FRootMotionSource::FRootMotionSource(this_00,(FRootMotionSource *)this);
    this_00->_padding_ = (longlong)&___7FRootMotionSource_JumpForce__6B_;
    dVar3 = (this->Rotation).Yaw;
    this_00[1]._padding_ = (longlong)(this->Rotation).Pitch;
    *(double *)&this_00[1].Priority = dVar3;
    *(double *)&this_00[1].InstanceName.Number = (this->Rotation).Roll;
    this_00[1].CurrentTime = this->Distance;
    this_00[1].PreviousTime = this->Height;
    *(bool *)&this_00[1].Duration = this->bDisableTimeout;
    pUVar1 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
    *(UCurveVector **)&this_00[1].bNeedsSimulatedCatchup = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UCurveVector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    pUVar2 = (this->TimeMappingCurve).field0_0x0.DebugPtr;
    *(UCurveFloat **)&this_00[1].RootMotionParams = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    dVar3 = (this->SavedHalfwayLocation).field0_0x0._s_0.Y;
    this_00[1].RootMotionParams._padding_ = (longlong)(this->SavedHalfwayLocation).field0_0x0._s_0.X
    ;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[0] = dVar3;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[1] =
         (this->SavedHalfwayLocation).field0_0x0._s_0.Z;
    return this_00;
  }
  return (FRootMotionSource *)0x0;
}

// Matches @ 147b9cea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
FRootMotionSource_JumpForce::Matches(FRootMotionSource_JumpForce *this,FRootMotionSource *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  int iVar10;
  uint uVar11;
  FRootMotionSource_JumpForce *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  
  pFVar12 = this;
  bVar9 = FRootMotionSource::Matches((FRootMotionSource *)this,param_1);
  if ((((bVar9) && (this->bDisableTimeout == (bool)*(char *)&param_1[1].Duration)) &&
      ((this->PathOffsetCurve).field0_0x0.DebugPtr ==
       *(UCurveVector **)&param_1[1].bNeedsSimulatedCatchup)) &&
     ((this->TimeMappingCurve).field0_0x0.DebugPtr == *(UCurveFloat **)&param_1[1].RootMotionParams)
     ) {
    if (((float)((uint)(this->Distance - param_1[1].CurrentTime) &
                __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) &&
       ((float)((uint)(this->Height - param_1[1].PreviousTime) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      dVar33 = (this->Rotation).Pitch - (double)param_1[1]._padding_;
      dVar35 = (this->Rotation).Yaw - *(double *)&param_1[1].Priority;
      dVar2 = (this->Rotation).Roll - *(double *)&param_1[1].InstanceName.Number;
      auVar19._8_4_ = SUB84(dVar35,0);
      auVar19._0_8_ = dVar33;
      auVar19._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar20 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar20 = roundpd(___xmm_7fffffff7fffffff7fffffff7fffffff,auVar20,3);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar27._0_8_ = auVar20._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar27._8_8_ = auVar20._8_8_ * dVar7;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar2;
      dVar33 = dVar33 - auVar27._0_8_;
      dVar35 = dVar35 - auVar27._8_8_;
      auVar20 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar20 = roundpd(auVar27,auVar20,3);
      dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar35,0);
      auVar22._0_8_ = dVar33;
      auVar22._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar2 = dVar2 - auVar20._0_8_ * dVar4;
      dVar3 = 0.0 - auVar20._8_8_ * dVar5;
      uVar13 = -(ulonglong)(0.0 <= dVar33);
      uVar15 = -(ulonglong)(0.0 <= dVar35);
      auVar28._0_8_ = uVar13 & (ulonglong)dVar33;
      auVar28._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar35);
      auVar28._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar35) >> 0x20);
      dVar35 = auVar22._8_8_ + dVar7;
      uVar14 = -(ulonglong)(0.0 <= dVar2);
      uVar16 = -(ulonglong)(0.0 <= dVar3);
      auVar36._0_4_ = ~(uint)uVar13 & SUB84(dVar33 + dVar6,0);
      auVar36._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar33 + dVar6) >> 0x20);
      auVar36._8_4_ = ~(uint)uVar15 & SUB84(dVar35,0);
      auVar36._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar36 = auVar36 | auVar28;
      auVar23._8_4_ = SUB84(dVar3,0);
      auVar23._0_8_ = dVar2;
      auVar23._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar35 = auVar23._8_8_ + dVar5;
      auVar34._0_4_ = ~(uint)uVar14 & SUB84(dVar2 + dVar4,0);
      auVar34._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
      auVar34._8_4_ = ~(uint)uVar16 & SUB84(dVar35,0);
      auVar34._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar20._8_4_ = (int)((ulonglong)dVar3 & uVar16);
      auVar20._0_8_ = (ulonglong)dVar2 & uVar14;
      auVar20._12_4_ = (int)(((ulonglong)dVar3 & uVar16) >> 0x20);
      auVar34 = auVar34 | auVar20;
      uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar34._0_8_);
      uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar34._8_8_);
      uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar36._0_8_);
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar36._8_8_);
      auVar29._0_8_ = uVar14 & (ulonglong)(auVar34._0_8_ - dVar4);
      uVar13 = uVar16 & (ulonglong)(auVar34._8_8_ - dVar5);
      auVar29._8_4_ = (undefined4)uVar13;
      auVar29._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar24._0_4_ = ~(uint)uVar14 & auVar34._0_4_;
      auVar24._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar34._4_4_;
      auVar24._8_4_ = ~(uint)uVar16 & auVar34._8_4_;
      auVar24._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar34._12_4_;
      auVar29 = auVar29 | auVar24;
      auVar25._8_4_ = SUB84(__real_3ff0000000000000,0);
      auVar25._0_8_ = __real_3ff0000000000000;
      auVar25._12_4_ = (int)((ulonglong)__real_3ff0000000000000 >> 0x20);
      auVar30._0_8_ =
           (double)CONCAT44(auVar29._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar29._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar30._8_4_ = auVar29._8_4_ & _UNK_15061cc88;
      auVar30._12_4_ = auVar29._12_4_ & _UNK_15061cc8c;
      auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < auVar30._8_8_);
      auVar26._0_8_ = -(ulonglong)(__real_3ff0000000000000 < auVar30._0_8_);
      uVar11 = movmskpd((int)pFVar12,auVar26);
      auVar31._0_8_ = uVar15 & (ulonglong)(auVar36._0_8_ - dVar6);
      uVar13 = uVar17 & (ulonglong)(auVar36._8_8_ - dVar7);
      auVar31._8_4_ = (undefined4)uVar13;
      auVar31._12_4_ = (undefined4)(uVar13 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar36._4_4_;
      auVar1._0_4_ = ~(uint)uVar15 & auVar36._0_4_;
      auVar1._8_4_ = ~(uint)uVar17 & auVar36._8_4_;
      auVar1._12_4_ = ~(uint)(uVar17 >> 0x20) & auVar36._12_4_;
      auVar31 = auVar31 | auVar1;
      auVar32._0_8_ =
           (double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar32._8_4_ = auVar31._8_4_ & _UNK_15061cc88;
      auVar32._12_4_ = auVar31._12_4_ & _UNK_15061cc8c;
      lVar18 = -(ulonglong)(__real_3ff0000000000000 < auVar32._8_8_);
      auVar8._8_4_ = (int)lVar18;
      auVar8._0_8_ = -(ulonglong)(__real_3ff0000000000000 < auVar32._0_8_);
      auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      iVar10 = movmskpd((int)*(UCurveFloat **)&param_1[1].RootMotionParams,auVar8);
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        return true;
      }
    }
  }
  return false;
}

// MatchesAndHasSameState @ 147b9d090

bool __thiscall
FRootMotionSource_JumpForce::MatchesAndHasSameState
          (FRootMotionSource_JumpForce *this,FRootMotionSource *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && (*(uchar *)((longlong)&this->_padding_ + 4) == (param_1->Status).Flags))
     && (param_1->CurrentTime == *(float *)&this->_padding_)) {
    return true;
  }
  return false;
}

// UpdateStateFrom @ 147b9d0e0

bool __thiscall
FRootMotionSource_JumpForce::UpdateStateFrom
          (FRootMotionSource_JumpForce *this,FRootMotionSource *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::UpdateStateFrom((FRootMotionSource *)this,param_1,param_2);
  return bVar1;
}

// PrepareRootMotion @ 147b9d100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRootMotionSource_JumpForce::PrepareRootMotion
          (FRootMotionSource_JumpForce *this,float param_1,float param_2,ACharacter *param_3,
          UCharacterMovementComponent *param_4)

{
  undefined1 auVar1 [16];
  UCurveFloat *pUVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  TConsoleVariableData<int> *pTVar22;
  TConsoleVariableData<float> *pTVar23;
  bool bVar24;
  UWorld *pUVar25;
  TVector<double> *pTVar26;
  TVector<double> *pTVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float local_res8 [2];
  float local_res10;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0 [2];
  double local_298;
  undefined1 local_288 [16];
  double local_278;
  TVector<double>_u_0 local_268;
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  undefined1 local_248 [4];
  undefined1 local_244 [4];
  undefined1 local_240 [8];
  double local_238;
  double local_230;
  undefined1 local_228 [8];
  FString local_220;
  FString local_210;
  FString local_200;
  undefined1 local_1f0 [4];
  undefined1 local_1ec [4];
  undefined1 local_1e8 [4];
  undefined1 local_1e4 [4];
  FString local_1e0;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  FString local_158;
  TVector<double>_u_0 local_148;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  TVector<double> local_100;
  TVector<double> local_e8 [8];
  
  fVar28 = __real_322bcc77;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  fVar5 = __real_3f800000;
  if (*(float *)&this->_padding_ <= fVar28) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Duration > (1.e-8f)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                        ,0x4ed,L"FRootMotionSource_JumpForce prepared with invalid duration.");
    if (bVar24) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((fVar28 < param_2) && (fVar28 < param_1)) {
    fVar28 = __real_3f800000 / *(float *)&this->_padding_;
    fVar31 = fVar28 * *(float *)&this->_padding_;
    fVar28 = (*(float *)&this->_padding_ + param_1) * fVar28;
    if (__real_3f800000 < fVar28) {
      fVar31 = fVar31 - (fVar28 - __real_3f800000);
      fVar28 = __real_3f800000;
    }
    pUVar2 = (this->TimeMappingCurve).field0_0x0.DebugPtr;
    if (pUVar2 != (UCurveFloat *)0x0) {
      fVar31 = EvaluateFloatCurveAtFraction(pUVar2,fVar31);
      fVar28 = EvaluateFloatCurveAtFraction((this->TimeMappingCurve).field0_0x0.DebugPtr,fVar28);
    }
    GetRelativeLocation(this,(TVector<double> *)&local_2f0._s_0,fVar31);
    GetRelativeLocation(this,(TVector<double> *)&local_268._s_0,fVar28);
    pTVar22 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
    local_230 = (double)param_2;
    dVar12 = __real_3ff0000000000000 / local_230;
    local_2d8._s_0.Y = (local_268._s_0.Y - local_2f0._s_0.Y) * dVar12;
    local_2d8._s_0.X = (local_268._s_0.X - local_2f0._s_0.X) * dVar12;
    local_2d8._s_0.Z = (local_268._s_0.Z - local_2f0._s_0.Z) * dVar12;
    bVar24 = IsInParallelGameThread();
    if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar23 = CVarDebugRootMotionSourcesLifetime.Ref;
    if (pTVar22->ShadowedValue[0] != 0) {
      lVar3 = *(longlong *)&param_3->field_0x1b8;
      if (lVar3 == 0) {
        uVar29 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar30 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_278 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_308._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_308._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_308._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_308._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_278 = *(double *)(lVar3 + 0x220);
        uVar29 = SUB84(local_278,0);
        uVar30 = (undefined4)((ulonglong)local_278 >> 0x20);
        local_130 = *(undefined4 *)(lVar3 + 0x210);
        uStack_12c = *(undefined4 *)(lVar3 + 0x214);
        uStack_128 = *(undefined4 *)(lVar3 + 0x218);
        uStack_124 = *(undefined4 *)(lVar3 + 0x21c);
        local_308._0_4_ = local_130;
        local_308._4_4_ = uStack_12c;
        local_308._8_4_ = uStack_128;
        local_308._12_4_ = uStack_124;
        local_120 = local_278;
      }
      dVar18 = local_268._s_0.X - local_2f0._s_0.X;
      dVar19 = local_268._s_0.Y - local_2f0._s_0.Y;
      dVar14 = (local_268._s_0.Z - local_2f0._s_0.Z) + local_278;
      local_308._s_0.Z = (double)CONCAT44(uVar30,uVar29);
      dVar16 = (double)CONCAT44(local_308._4_4_,local_308._0_4_);
      lVar3 = *(longlong *)&param_4->field_0xc0;
      dVar12 = (double)CONCAT44(local_308._12_4_,local_308._8_4_);
      local_118 = *(double *)(lVar3 + 0x210);
      dStack_110 = *(double *)(lVar3 + 0x218);
      auVar1 = *(undefined1 (*) [16])(lVar3 + 0x220);
      local_108 = auVar1._0_8_;
      dVar15 = local_118 - (double)CONCAT44(local_308._4_4_,local_308._0_4_);
      dVar17 = dStack_110 - (double)CONCAT44(local_308._12_4_,local_308._8_4_);
      local_288._8_4_ = auVar1._8_4_;
      local_288._0_8_ = local_108 - local_278;
      local_288._12_4_ = auVar1._12_4_;
      local_298 = dVar15;
      local_238 = dVar14;
      bVar24 = IsInParallelGameThread();
      if (((!bVar24) && (bVar24 = IsInGameThread(), !bVar24)) &&
         (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar24)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar28 = pTVar23->ShadowedValue[0];
      local_res10 = fVar28;
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_res8,local_228);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_1f0,&local_2c0);
      lVar3 = *(longlong *)&param_4->field_0xc0;
      local_148._s_0.X = *(double *)(lVar3 + 0x210);
      local_148._s_0.Y = *(double *)(lVar3 + 0x218);
      local_148._s_0.Z = *(double *)(lVar3 + 0x220);
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar25,(TVector<double> *)&local_148._s_0,local_2c0,local_res8[0],
                       &UE::Math::TQuat<double>::Identity,&FColor::Red,true,fVar28,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_2bc,local_1ec);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_1e8,&local_2b8);
      dVar14 = dVar14 + (double)local_288._0_8_;
      dVar15 = dVar18 + dVar16 + dVar15;
      dVar12 = dVar19 + dVar12 + dVar17;
      local_1d0._s_0.X = dVar15;
      local_1d0._s_0.Y = dVar12;
      local_1d0._s_0.Z = dVar14;
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar25,(TVector<double> *)&local_1d0._s_0,local_2b8,local_2bc,
                       &UE::Math::TQuat<double>::Identity,&FColor::Green,true,local_res10,'\0',0.0);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_2b4,local_1e4);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_250,&local_2b0);
      local_1b8._s_0.X = dVar15;
      local_1b8._s_0.Y = dVar12;
      local_1b8._s_0.Z = dVar14;
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      fVar28 = local_res10;
      DrawDebugCapsule(pUVar25,(TVector<double> *)&local_1b8._s_0,local_2b0,local_2b4,
                       &UE::Math::TQuat<double>::Identity,&FColor::Blue,true,local_res10,'\0',0.0);
      local_1a0._s_0.X = (double)CONCAT44(local_308._4_4_,local_308._0_4_) + local_2d8._s_0.X;
      local_1a0._s_0.Y = (double)CONCAT44(local_308._12_4_,local_308._8_4_) + local_2d8._s_0.Y;
      local_1a0._s_0.Z = local_308._s_0.Z + local_2d8._s_0.Z;
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      DrawDebugLine(pUVar25,(TVector<double> *)&local_308._s_0,(TVector<double> *)&local_1a0._s_0,
                    &FColor::Blue,true,fVar28,'\0',0.0);
      pTVar26 = GetRelativeLocation(this,&local_100,__real_3f000000);
      pTVar27 = &this->SavedHalfwayLocation;
      dVar12 = ((pTVar26->field0_0x0)._s_0.X - local_2f0._s_0.X) +
               (double)CONCAT44(local_308._4_4_,local_308._0_4_);
      dVar16 = ((pTVar26->field0_0x0)._s_0.Y - local_2f0._s_0.Y) +
               (double)CONCAT44(local_308._12_4_,local_308._8_4_);
      dVar14 = ((pTVar26->field0_0x0)._s_0.Z - local_2f0._s_0.Z) + local_308._s_0.Z;
      bVar24 = UE::Math::TVector<double>::IsNearlyZero(pTVar27,__real_3f1a36e2e0000000);
      if (bVar24) {
        (pTVar27->field0_0x0)._s_0.X = dVar12;
        (this->SavedHalfwayLocation).field0_0x0._s_0.Y = dVar16;
        (this->SavedHalfwayLocation).field0_0x0._s_0.Z = dVar14;
      }
      dVar19 = dVar16 - (this->SavedHalfwayLocation).field0_0x0._s_0.Y;
      dVar18 = dVar12 - (pTVar27->field0_0x0)._s_0.X;
      dVar15 = dVar14 - (this->SavedHalfwayLocation).field0_0x0._s_0.Z;
      if (___real_40a3880000000000 < dVar19 * dVar19 + dVar18 * dVar18 + dVar15 * dVar15) {
        if (5 < (byte)LogRootMotion._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
        }
        (pTVar27->field0_0x0)._s_0.X = dVar12;
        (this->SavedHalfwayLocation).field0_0x0._s_0.Y = dVar16;
        (this->SavedHalfwayLocation).field0_0x0._s_0.Z = dVar14;
      }
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_2ac,local_24c);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_248,&local_2a8);
      local_188._s_0.X = dVar12 + local_298;
      local_188._s_0.Z = dVar14 + (double)local_288._0_8_;
      local_188._s_0.Y = dVar16 + dVar17;
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar25,(TVector<double> *)&local_188._s_0,local_2a8,local_2ac,
                       &UE::Math::TQuat<double>::Identity,&FColor::White,true,local_res10,'\0',0.0);
      pTVar27 = GetRelativeLocation(this,local_e8,fVar5);
      dVar12 = (pTVar27->field0_0x0)._s_0.X;
      dVar16 = (pTVar27->field0_0x0)._s_0.Y;
      dVar15 = (double)CONCAT44(local_308._4_4_,local_308._0_4_);
      dVar18 = (double)CONCAT44(local_308._12_4_,local_308._8_4_);
      dVar14 = ((pTVar27->field0_0x0)._s_0.Z - local_2f0._s_0.Z) + local_308._s_0.Z;
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,&local_2a4,local_244);
      (**(code **)(*(longlong *)param_3 + 0x688))(param_3,local_240,local_2a0);
      local_170._s_0.X = (dVar12 - local_2f0._s_0.X) + dVar15 + local_298;
      local_170._s_0.Z = dVar14 + (double)local_288._0_8_;
      local_170._s_0.Y = (dVar16 - local_2f0._s_0.Y) + dVar18 + dVar17;
      pUVar25 = AActor::GetWorld((AActor *)param_3);
      DrawDebugCapsule(pUVar25,(TVector<double> *)&local_170._s_0,local_2a0[0],local_2a4,
                       &UE::Math::TQuat<double>::Identity,&FColor::White,true,local_res10,'\0',0.0);
      if (6 < (byte)LogRootMotion._0_1_) {
        ::FString::PrintfImpl(&local_200,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_210,L"X=%3.3f Y=%3.3f Z=%3.3f");
        ::FString::PrintfImpl(&local_220,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogRootMotion);
        if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_2d8._s_0,&local_158);
      ::FString::PrintfImpl
                (&local_1e0,
                 L"    FRootMotionSource_JumpForce::Prep Force(%s) SimTime(%.3f) MoveTime(%.3f) StartP(%.3f) EndP(%.3f)"
                );
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      RootMotionSourceDebug::PrintOnScreen(param_3,&local_1e0);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
    }
    fVar28 = GlobalVectorConstants::Float0001.m128_f32[0];
    fVar31 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar7 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar10 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(undefined1 *)&this->_padding_ = 1;
    auVar13._8_4_ = SUB84((double)fVar31,0);
    auVar13._0_8_ = (double)fVar28;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar31 >> 0x20);
    this->_padding_ = (longlong)(double)fVar28;
    this->_padding_ = auVar13._8_8_;
    this->_padding_ = (longlong)(double)fVar7;
    this->_padding_ = (longlong)(double)fVar9;
    this->_padding_ = (longlong)local_2d8._s_0.X;
    this->_padding_ = (longlong)local_2d8._s_0.Y;
    this->_padding_ = (longlong)local_2d8._s_0.Z;
    this->_padding_ = 0;
    auVar11._8_4_ = SUB84((double)fVar6,0);
    auVar11._0_8_ = (double)fVar5;
    auVar11._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
    this->_padding_ = (longlong)(double)fVar5;
    this->_padding_ = auVar11._8_8_;
    auVar1._8_4_ = SUB84((double)fVar10,0);
    auVar1._0_8_ = (double)fVar8;
    auVar1._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
    this->_padding_ = (longlong)(double)fVar8;
    uVar21 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
    uVar20 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
    this->_padding_ = auVar1._8_8_;
    this->_padding_ = (longlong)FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
    this->_padding_ = uVar20;
    this->_padding_ = uVar21;
    this->_padding_ = 0;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  }
                    /* WARNING: Could not recover jumptable at 0x000147b9dbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,param_1 + *(float *)&this->_padding_);
  return;
}

// NetSerialize @ 147b9dc00

bool __thiscall
FRootMotionSource_JumpForce::NetSerialize
          (FRootMotionSource_JumpForce *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  
  bVar3 = FRootMotionSource::NetSerialize((FRootMotionSource *)this,param_1,param_2,param_3);
  if (!bVar3) {
    return false;
  }
  UE::Math::operator<<(param_1,&this->Rotation);
  pfVar1 = &this->Distance;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar1 = &this->Height;
  pfVar2 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar1);
    }
  }
  else {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bDisableTimeout);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PathOffsetCurve);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->TimeMappingCurve);
  *param_3 = true;
  return true;
}

// GetScriptStruct @ 147b9dd30

UScriptStruct * __thiscall
FRootMotionSource_JumpForce::GetScriptStruct(FRootMotionSource_JumpForce *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_JumpForce,(UObject *)pUVar1,
                         L"RootMotionSource_JumpForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_JumpForce.OuterSingleton;
}

// ToSimpleString @ 147b9dd70

FString * __thiscall
FRootMotionSource_JumpForce::ToSimpleString
          (FRootMotionSource_JumpForce *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString((FName *)((longlong)&this->_padding_ + 4),&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u]FRootMotionSource_JumpForce %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b9dde0

void __thiscall
FRootMotionSource_JumpForce::AddReferencedObjects
          (FRootMotionSource_JumpForce *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->PathOffsetCurve,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147b9de26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->TimeMappingCurve,0,0);
  return;
}

// FRootMotionSource_JumpForce @ 147bb98e0

FRootMotionSource_JumpForce * __thiscall
FRootMotionSource_JumpForce::FRootMotionSource_JumpForce(FRootMotionSource_JumpForce *this)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xff7fc99e;
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xbf800000;
  *(undefined2 *)&this->_padding_ = 0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = auVar4._8_8_;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar5._8_8_;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = auVar6._8_8_;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar7._8_8_;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = auVar8._8_8_;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  this->_padding_ = (longlong)(double)fVar2;
  this->_padding_ = auVar9._8_8_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar10;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)&___7FRootMotionSource_JumpForce__6B_;
  (this->Rotation).Pitch = 0.0;
  (this->Rotation).Yaw = 0.0;
  (this->Rotation).Roll = 0.0;
  (this->PathOffsetCurve).field0_0x0.DebugPtr = (UCurveVector *)0x0;
  (this->TimeMappingCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->Distance = -1.0;
  this->Height = -1.0;
  this->bDisableTimeout = false;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SavedHalfwayLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SavedHalfwayLocation).field0_0x0._s_0.Y = (double)uVar10;
  (this->SavedHalfwayLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  return this;
}

// ~FRootMotionSource_JumpForce @ 147bbeef0

void __thiscall
FRootMotionSource_JumpForce::~FRootMotionSource_JumpForce(FRootMotionSource_JumpForce *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

// GetPathOffset @ 147be4010

TVector<double> * __thiscall
FRootMotionSource_JumpForce::GetPathOffset
          (FRootMotionSource_JumpForce *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  UCurveVector *this_00;
  undefined8 uVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [2];
  TVector<double>_u_0 local_48 [2];
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this_00 == (UCurveVector *)0x0) {
    fVar2 = (param_1 + param_1) - __real_3f800000;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)(__real_3f800000 - fVar2 * fVar2);
  }
  else {
    local_res10[0] = 0.0;
    local_res8[0] = 1.0;
    UCurveBase::GetTimeRange((UCurveBase *)this_00,local_res10,local_res8);
    UCurveVector::GetVectorValue
              (this_00,(TVector<double> *)&local_48[0]._s_0,
               (local_res8[0] - local_res10[0]) * param_1 + local_res10[0]);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_48[0]._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_48[0]._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_48[0]._16_8_;
  }
  if (0.0 <= this->Height) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)this->Height * (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetRelativeLocation @ 147be68c0

TVector<double> * __thiscall
FRootMotionSource_JumpForce::GetRelativeLocation
          (FRootMotionSource_JumpForce *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  UCurveVector *this_00;
  float fVar2;
  float local_res8 [2];
  float local_res18 [2];
  TVector<double>_u_0 local_88;
  TRotator<double> local_70;
  TVector<double>_u_0 local_58 [3];
  
  local_70.Yaw = (this->Rotation).Yaw;
  this_00 = (this->PathOffsetCurve).field0_0x0.DebugPtr;
  local_70.Roll = (this->Rotation).Roll;
  fVar1 = this->Distance;
  local_70.Pitch = 0.0;
  local_58[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this_00 == (UCurveVector *)0x0) {
    fVar2 = (param_1 + param_1) - __real_3f800000;
    local_88._s_0.Z = (double)(__real_3f800000 - fVar2 * fVar2);
    local_58[0]._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_58[0]._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_58[0]._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_58[0]._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_res8[0] = 0.0;
    local_res18[0] = 1.0;
    UCurveBase::GetTimeRange((UCurveBase *)this_00,local_res8,local_res18);
    UCurveVector::GetVectorValue
              (this_00,(TVector<double> *)&local_58[0]._s_0,
               (local_res18[0] - local_res8[0]) * param_1 + local_res8[0]);
    local_88._s_0.Z = (double)local_58[0]._16_8_;
  }
  if (0.0 <= this->Height) {
    local_88._s_0.Z = local_88._s_0.Z * (double)this->Height;
  }
  local_88._s_0.X =
       (double)CONCAT44(local_58[0]._4_4_,local_58[0]._0_4_) + (double)(param_1 * fVar1);
  local_88._8_4_ = local_58[0]._8_4_;
  local_88._12_4_ = local_58[0]._12_4_;
  UE::Math::TRotator<double>::RotateVector
            (&local_70,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  return __return_storage_ptr__;
}

