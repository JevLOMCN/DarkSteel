// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticStruct @ 147b99dd0

UScriptStruct * __cdecl FRootMotionSource_RadialForce::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce,(UObject *)pUVar1,
                         L"RootMotionSource_RadialForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton;
}

// Clone @ 147b99e10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRootMotionSource * __thiscall
FRootMotionSource_RadialForce::Clone(FRootMotionSource_RadialForce *this)

{
  AActor *pAVar1;
  UCurveFloat *pUVar2;
  double dVar3;
  FRootMotionSource *this_00;
  
  this_00 = ::operator_new(0x120);
  if (this_00 != (FRootMotionSource *)0x0) {
    FRootMotionSource::FRootMotionSource(this_00,(FRootMotionSource *)this);
    this_00->_padding_ = (longlong)&___7FRootMotionSource_RadialForce__6B_;
    dVar3 = (this->Location).field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(this->Location).field0_0x0._s_0.X;
    *(double *)&this_00[1].Priority = dVar3;
    *(double *)&this_00[1].InstanceName.Number = (this->Location).field0_0x0._s_0.Z;
    pAVar1 = (this->LocationActor).field0_0x0.DebugPtr;
    *(AActor **)&this_00[1].CurrentTime = pAVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    this_00[1].Duration = this->Radius;
    *(float *)&this_00[1].Status = this->Strength;
    this_00[1].bNeedsSimulatedCatchup = this->bIsPush;
    this_00[1].bSimulatedNeedsSmoothing = this->bNoZForce;
    pUVar2 = (this->StrengthDistanceFalloff).field0_0x0.DebugPtr;
    *(UCurveFloat **)&this_00[1].RootMotionParams = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (this->StrengthOverTime).field0_0x0.DebugPtr;
    this_00[1].RootMotionParams._padding_ = (longlong)pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(bool *)this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64 =
         this->bUseFixedWorldDirection;
    dVar3 = (this->FixedWorldDirection).Yaw;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[1] =
         (this->FixedWorldDirection).Pitch;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[0] = dVar3;
    this_00[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[1] =
         (this->FixedWorldDirection).Roll;
    return this_00;
  }
  return (FRootMotionSource *)0x0;
}

// Matches @ 147b99f50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRootMotionSource_RadialForce::Matches
          (FRootMotionSource_RadialForce *this,FRootMotionSource *param_1)

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
  AActor *pAVar11;
  undefined4 uVar12;
  uint uVar13;
  TVector<double> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined7 extraout_var;
  FRootMotionSource_RadialForce *pFVar14;
  
  pFVar14 = this;
  bVar9 = FRootMotionSource::Matches((FRootMotionSource *)this,param_1);
  uVar12 = SUB84(pFVar14,0);
  if (((((bVar9) && (this->bIsPush == param_1[1].bNeedsSimulatedCatchup)) &&
       (this->bNoZForce == param_1[1].bSimulatedNeedsSmoothing)) &&
      ((this->bUseFixedWorldDirection ==
        (bool)*(char *)param_1[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64 &&
       ((this->StrengthDistanceFalloff).field0_0x0.DebugPtr ==
        *(UCurveFloat **)&param_1[1].RootMotionParams)))) &&
     ((this->StrengthOverTime).field0_0x0.DebugPtr ==
      (UCurveFloat *)param_1[1].RootMotionParams._padding_)) {
    pAVar11 = *(AActor **)&param_1[1].CurrentTime;
    if ((this->LocationActor).field0_0x0.DebugPtr != pAVar11) {
      pTVar15 = &this->Location;
      bVar9 = UE::Math::TVector<double>::PointsAreNear
                        (pTVar15,(TVector<double> *)(param_1 + 1),__real_3ff0000000000000);
      uVar12 = SUB84(pTVar15,0);
      pAVar11 = (AActor *)CONCAT71(extraout_var,bVar9);
      if (!bVar9) {
        return false;
      }
    }
    if (((float)((uint)(this->Radius - param_1[1].Duration) & __xmm_7fffffff7fffffff7fffffff7fffffff
                ) <= __real_322bcc77) &&
       ((float)((uint)(this->Strength - *(float *)&param_1[1].Status) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      dVar36 = (this->FixedWorldDirection).Pitch -
               param_1[1].RootMotionParams.RootMotionTransform.Rotation.XY.m128d_f64[1];
      dVar38 = (this->FixedWorldDirection).Yaw -
               param_1[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[0];
      dVar2 = (this->FixedWorldDirection).Roll -
              param_1[1].RootMotionParams.RootMotionTransform.Rotation.ZW.m128d_f64[1];
      auVar22._8_4_ = SUB84(dVar38,0);
      auVar22._0_8_ = dVar36;
      auVar22._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar23 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar23 = roundpd(___xmm_7fffffff7fffffff7fffffff7fffffff,auVar23,3);
      dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar30._0_8_ = auVar23._0_8_ * dVar6;
      dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar30._8_8_ = auVar23._8_8_ * dVar7;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar2;
      dVar36 = dVar36 - auVar30._0_8_;
      dVar38 = dVar38 - auVar30._8_8_;
      auVar23 = divpd(auVar24,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar23 = roundpd(auVar30,auVar23,3);
      dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar25._8_4_ = SUB84(dVar38,0);
      auVar25._0_8_ = dVar36;
      auVar25._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar2 = dVar2 - auVar23._0_8_ * dVar4;
      dVar3 = 0.0 - auVar23._8_8_ * dVar5;
      uVar16 = -(ulonglong)(0.0 <= dVar36);
      uVar18 = -(ulonglong)(0.0 <= dVar38);
      auVar31._0_8_ = uVar16 & (ulonglong)dVar36;
      auVar31._8_4_ = (undefined4)(uVar18 & (ulonglong)dVar38);
      auVar31._12_4_ = (undefined4)((uVar18 & (ulonglong)dVar38) >> 0x20);
      dVar38 = auVar25._8_8_ + dVar7;
      uVar17 = -(ulonglong)(0.0 <= dVar2);
      uVar19 = -(ulonglong)(0.0 <= dVar3);
      auVar39._0_4_ = ~(uint)uVar16 & SUB84(dVar36 + dVar6,0);
      auVar39._4_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)(dVar36 + dVar6) >> 0x20);
      auVar39._8_4_ = ~(uint)uVar18 & SUB84(dVar38,0);
      auVar39._12_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar39 = auVar39 | auVar31;
      auVar26._8_4_ = SUB84(dVar3,0);
      auVar26._0_8_ = dVar2;
      auVar26._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar38 = auVar26._8_8_ + dVar5;
      auVar37._0_4_ = ~(uint)uVar17 & SUB84(dVar2 + dVar4,0);
      auVar37._4_4_ = ~(uint)(uVar17 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar19 & SUB84(dVar38,0);
      auVar37._12_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)dVar38 >> 0x20);
      auVar23._8_4_ = (int)((ulonglong)dVar3 & uVar19);
      auVar23._0_8_ = (ulonglong)dVar2 & uVar17;
      auVar23._12_4_ = (int)(((ulonglong)dVar3 & uVar19) >> 0x20);
      auVar37 = auVar37 | auVar23;
      uVar17 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
      uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar37._8_8_);
      uVar18 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
      uVar20 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
      auVar32._0_8_ = uVar17 & (ulonglong)(auVar37._0_8_ - dVar4);
      uVar16 = uVar19 & (ulonglong)(auVar37._8_8_ - dVar5);
      auVar32._8_4_ = (undefined4)uVar16;
      auVar32._12_4_ = (undefined4)(uVar16 >> 0x20);
      auVar27._0_4_ = ~(uint)uVar17 & auVar37._0_4_;
      auVar27._4_4_ = ~(uint)(uVar17 >> 0x20) & auVar37._4_4_;
      auVar27._8_4_ = ~(uint)uVar19 & auVar37._8_4_;
      auVar27._12_4_ = ~(uint)(uVar19 >> 0x20) & auVar37._12_4_;
      auVar32 = auVar32 | auVar27;
      auVar28._8_4_ = SUB84(__real_4008000000000000,0);
      auVar28._0_8_ = __real_4008000000000000;
      auVar28._12_4_ = (int)((ulonglong)__real_4008000000000000 >> 0x20);
      auVar33._0_8_ =
           (double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar33._8_4_ = auVar32._8_4_ & _UNK_15061cc88;
      auVar33._12_4_ = auVar32._12_4_ & _UNK_15061cc8c;
      auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < auVar33._8_8_);
      auVar29._0_8_ = -(ulonglong)(__real_4008000000000000 < auVar33._0_8_);
      uVar13 = movmskpd(uVar12,auVar29);
      auVar34._0_8_ = uVar18 & (ulonglong)(auVar39._0_8_ - dVar6);
      uVar16 = uVar20 & (ulonglong)(auVar39._8_8_ - dVar7);
      auVar34._8_4_ = (undefined4)uVar16;
      auVar34._12_4_ = (undefined4)(uVar16 >> 0x20);
      auVar1._4_4_ = ~(uint)(uVar18 >> 0x20) & auVar39._4_4_;
      auVar1._0_4_ = ~(uint)uVar18 & auVar39._0_4_;
      auVar1._8_4_ = ~(uint)uVar20 & auVar39._8_4_;
      auVar1._12_4_ = ~(uint)(uVar20 >> 0x20) & auVar39._12_4_;
      auVar34 = auVar34 | auVar1;
      auVar35._0_8_ =
           (double)CONCAT44(auVar34._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            auVar34._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar35._8_4_ = auVar34._8_4_ & _UNK_15061cc88;
      auVar35._12_4_ = auVar34._12_4_ & _UNK_15061cc8c;
      lVar21 = -(ulonglong)(__real_4008000000000000 < auVar35._8_8_);
      auVar8._8_4_ = (int)lVar21;
      auVar8._0_8_ = -(ulonglong)(__real_4008000000000000 < auVar35._0_8_);
      auVar8._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar10 = movmskpd((int)pAVar11,auVar8);
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        return true;
      }
    }
  }
  return false;
}

// MatchesAndHasSameState @ 147b9a1a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRootMotionSource_RadialForce::MatchesAndHasSameState
          (FRootMotionSource_RadialForce *this,FRootMotionSource *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x18))();
  if (((cVar1 != '\0') && (*(uchar *)((longlong)&this->_padding_ + 4) == (param_1->Status).Flags))
     && (param_1->CurrentTime == *(float *)&this->_padding_)) {
    return true;
  }
  return false;
}

// UpdateStateFrom @ 147b9a1f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRootMotionSource_RadialForce::UpdateStateFrom
          (FRootMotionSource_RadialForce *this,FRootMotionSource *param_1,bool param_2)

{
  bool bVar1;
  
  bVar1 = FRootMotionSource::UpdateStateFrom((FRootMotionSource *)this,param_1,param_2);
  return bVar1;
}

// PrepareRootMotion @ 147b9a250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRootMotionSource_RadialForce::PrepareRootMotion
          (FRootMotionSource_RadialForce *this,float param_1,float param_2,ACharacter *param_3,
          UCharacterMovementComponent *param_4)

{
  longlong lVar1;
  TObjectPtr<AActor>_u_0 TVar2;
  UCurveFloat *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  TVector<double> *pTVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  TVector<double>_u_0 local_f8;
  double local_d0;
  TVector<double> local_c8 [8];
  
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  fVar4 = __real_3f800000;
  lVar1 = *(longlong *)&param_3->field_0x1b8;
  if (lVar1 == 0) {
    local_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    local_d0 = *(double *)(lVar1 + 0x220);
    uVar29 = *(undefined4 *)(lVar1 + 0x210);
    uVar30 = *(undefined4 *)(lVar1 + 0x214);
    uVar31 = *(undefined4 *)(lVar1 + 0x218);
    uVar32 = *(undefined4 *)(lVar1 + 0x21c);
  }
  TVar2 = (this->LocationActor).field0_0x0;
  local_f8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_f8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_f8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_f8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_f8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  if (TVar2.DebugPtr == (AActor *)0x0) {
    local_c8[0].field0_0x0._16_8_ = (this->Location).field0_0x0._s_0.Z;
    uVar25 = *(undefined4 *)&(this->Location).field0_0x0;
    uVar26 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 4);
    uVar27 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 8);
    uVar28 = *(undefined4 *)((longlong)&(this->Location).field0_0x0 + 0xc);
  }
  else {
    lVar1 = *(longlong *)((longlong)TVar2 + 0x1b8);
    if (lVar1 == 0) {
      local_c8[0].field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_c8[0].field0_0x0._16_8_ = *(double *)(lVar1 + 0x220);
      uVar25 = *(undefined4 *)(lVar1 + 0x210);
      uVar26 = *(undefined4 *)(lVar1 + 0x214);
      uVar27 = *(undefined4 *)(lVar1 + 0x218);
      uVar28 = *(undefined4 *)(lVar1 + 0x21c);
    }
  }
  uVar19 = local_c8[0].field0_0x0._s_0.Z;
  dVar11 = (double)CONCAT44(uVar30,uVar29) - (double)CONCAT44(uVar26,uVar25);
  dVar10 = (double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar28,uVar27);
  fVar24 = (float)SQRT(dVar10 * dVar10 + dVar11 * dVar11 +
                       (local_d0 - (double)local_c8[0].field0_0x0._16_8_) *
                       (local_d0 - (double)local_c8[0].field0_0x0._16_8_));
  uVar14 = local_f8._s_0.X;
  uVar15 = local_f8._s_0.Y;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (fVar24 < this->Radius) {
    pUVar3 = (this->StrengthDistanceFalloff).field0_0x0.DebugPtr;
    fVar21 = __real_3f800000;
    if (pUVar3 != (UCurveFloat *)0x0) {
      fVar24 = fVar24 / this->Radius;
      if (__real_3f800000 <= fVar24) {
        fVar24 = __real_3f800000;
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar21 = UCurveFloat::GetFloatValue(pUVar3,fVar24);
    }
    pUVar3 = (this->StrengthOverTime).field0_0x0.DebugPtr;
    if (pUVar3 != (UCurveFloat *)0x0) {
      fVar24 = *(float *)&this->_padding_;
      if (0.0 < *(float *)&this->_padding_) {
        fVar24 = fVar24 / *(float *)&this->_padding_;
        if (fVar4 <= fVar24) {
          fVar24 = fVar4;
        }
        if (fVar24 <= 0.0) {
          fVar24 = 0.0;
        }
      }
      fVar24 = UCurveFloat::GetFloatValue(pUVar3,fVar24);
      fVar21 = fVar21 + (fVar24 - fVar4);
    }
    if (fVar4 <= fVar21) {
      fVar21 = fVar4;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    dVar10 = (double)(fVar21 * this->Strength);
    if (this->bUseFixedWorldDirection == false) {
      local_f8._s_0.Z = (double)uVar19 - local_d0;
      local_f8._s_0.X = (double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar30,uVar29);
      local_f8._s_0.Y = (double)CONCAT44(uVar28,uVar27) - (double)CONCAT44(uVar32,uVar31);
      pTVar20 = UE::Math::TVector<double>::GetSafeNormal
                          ((TVector<double> *)&local_f8._s_0,local_c8,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
      uVar14 = dVar10 * (pTVar20->field0_0x0)._s_0.X;
      uVar15 = dVar10 * (pTVar20->field0_0x0)._s_0.Y;
      uVar12 = dVar10 * (pTVar20->field0_0x0)._s_0.Z;
      if (this->bIsPush != false) {
        uVar22 = (uint)__xmm_80000000000000008000000000000000;
        uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar14 = CONCAT44((uint)((ulonglong)uVar14 >> 0x20) ^ uVar23,(uint)uVar14 ^ uVar22);
        uVar15 = CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^ uVar23,(uint)uVar15 ^ uVar22);
        uVar12 = CONCAT44((uint)((ulonglong)uVar12 >> 0x20) ^ uVar23,(uint)uVar12 ^ uVar22);
      }
    }
    else {
      pTVar20 = UE::Math::TRotator<double>::Vector(&this->FixedWorldDirection,local_c8);
      uVar14 = dVar10 * (pTVar20->field0_0x0)._s_0.X;
      uVar15 = dVar10 * (pTVar20->field0_0x0)._s_0.Y;
      uVar12 = dVar10 * (pTVar20->field0_0x0)._s_0.Z;
    }
  }
  if (this->bNoZForce != false) {
    uVar12 = 0.0;
  }
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar21 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar24 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
  if ((param_1 != param_2) && (__real_322bcc77 < param_2)) {
    dVar10 = (double)(param_1 / param_2);
    uVar14 = (double)uVar14 * dVar10;
    uVar15 = (double)uVar15 * dVar10;
    uVar12 = dVar10 * (double)uVar12;
  }
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)(double)fVar4;
  this->_padding_ = (longlong)(double)fVar21;
  auVar16._8_4_ = SUB84((double)fVar8,0);
  auVar16._0_8_ = (double)fVar6;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  this->_padding_ = (longlong)(double)fVar6;
  this->_padding_ = auVar16._8_8_;
  auVar13._8_4_ = (int)uVar15;
  auVar13._0_8_ = uVar14;
  auVar13._12_4_ = (int)((ulonglong)uVar15 >> 0x20);
  this->_padding_ = uVar14;
  this->_padding_ = auVar13._8_8_;
  this->_padding_ = uVar12;
  this->_padding_ = 0;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar24;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  this->_padding_ = (longlong)(double)fVar24;
  this->_padding_ = auVar17._8_8_;
  auVar18._8_4_ = SUB84((double)fVar9,0);
  auVar18._0_8_ = (double)fVar7;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar9 >> 0x20);
  this->_padding_ = (longlong)(double)fVar7;
  uVar14 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
  uVar31 = FRootMotionMovementParams::RootMotionScale.field0_0x0._12_4_;
  uVar30 = FRootMotionMovementParams::RootMotionScale.field0_0x0._8_4_;
  uVar29 = FRootMotionMovementParams::RootMotionScale.field0_0x0._4_4_;
  this->_padding_ = auVar18._8_8_;
  *(undefined4 *)&this->_padding_ = FRootMotionMovementParams::RootMotionScale.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar29;
  *(undefined4 *)&this->_padding_ = uVar30;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar31;
  this->_padding_ = uVar14;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x000147b9a5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,param_1 + *(float *)&this->_padding_);
  return;
}

// NetSerialize @ 147b9a600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FRootMotionSource_RadialForce::NetSerialize
          (FRootMotionSource_RadialForce *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  
  bVar3 = FRootMotionSource::NetSerialize((FRootMotionSource *)this,param_1,param_2,param_3);
  if (!bVar3) {
    return false;
  }
  UE::Math::operator<<(param_1,&this->Location);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->LocationActor);
  pfVar1 = &this->Radius;
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
  pfVar1 = &this->Strength;
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
  ::operator<<(param_1,&this->bIsPush);
  ::operator<<(param_1,&this->bNoZForce);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->StrengthDistanceFalloff);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->StrengthOverTime);
  ::operator<<(param_1,&this->bUseFixedWorldDirection);
  UE::Math::operator<<(param_1,&this->FixedWorldDirection);
  *param_3 = true;
  return true;
}

// GetScriptStruct @ 147b9a770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UScriptStruct * __thiscall
FRootMotionSource_RadialForce::GetScriptStruct(FRootMotionSource_RadialForce *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource_RadialForce,(UObject *)pUVar1,
                         L"RootMotionSource_RadialForce");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionSource_RadialForce.OuterSingleton;
}

// ToSimpleString @ 147b9a7b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
FRootMotionSource_RadialForce::ToSimpleString
          (FRootMotionSource_RadialForce *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::GetPlainNameString((FName *)((longlong)&this->_padding_ + 4),&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[ID:%u]FRootMotionSource_RadialForce %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// AddReferencedObjects @ 147b9a820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRootMotionSource_RadialForce::AddReferencedObjects
          (FRootMotionSource_RadialForce *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->LocationActor,0,0);
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->StrengthDistanceFalloff,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147b9a87f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->StrengthOverTime,0,0);
  return;
}

// FRootMotionSource_RadialForce @ 147bb9c20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRootMotionSource_RadialForce * __thiscall
FRootMotionSource_RadialForce::FRootMotionSource_RadialForce(FRootMotionSource_RadialForce *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
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
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float0001.m128_f32[0];
  this->_padding_ = auVar3._8_8_;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar4._8_8_;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
  this->_padding_ = auVar5._8_8_;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar6._8_8_;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  this->_padding_ = (longlong)(double)GlobalVectorConstants::Float1110.m128_f32[0];
  this->_padding_ = auVar7._8_8_;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  this->_padding_ = (longlong)(double)fVar1;
  this->_padding_ = auVar8._8_8_;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar9;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)&___7FRootMotionSource_RadialForce__6B_;
  (this->Location).field0_0x0._s_0.X = 0.0;
  (this->Location).field0_0x0._s_0.Y = 0.0;
  (this->Location).field0_0x0._s_0.Z = 0.0;
  (this->LocationActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->StrengthDistanceFalloff).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->StrengthOverTime).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->FixedWorldDirection).Pitch = 0.0;
  (this->FixedWorldDirection).Yaw = 0.0;
  (this->FixedWorldDirection).Roll = 0.0;
  this->Radius = 1.0;
  this->Strength = 0.0;
  this->bIsPush = true;
  this->bNoZForce = false;
  this->bUseFixedWorldDirection = false;
  return this;
}

// ~FRootMotionSource_RadialForce @ 147bbef50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRootMotionSource_RadialForce::~FRootMotionSource_RadialForce(FRootMotionSource_RadialForce *this)

{
  this->_padding_ = (longlong)&___7FRootMotionSource__6B_;
  return;
}

