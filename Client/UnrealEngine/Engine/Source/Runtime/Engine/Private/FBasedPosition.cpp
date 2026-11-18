// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FBasedPosition @ 147686d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall
FBasedPosition::FBasedPosition(FBasedPosition *this,AActor *param_1,TVector<double> *param_2)

{
  (this->Base).field0_0x0.DebugPtr = (AActor *)0x0;
  Set(this,param_1,param_2);
  return this;
}

// FBasedPosition @ 147686d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBasedPosition * __thiscall FBasedPosition::FBasedPosition(FBasedPosition *this)

{
  (this->Base).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  (this->CachedBaseLocation).field0_0x0._s_0.X = 0.0;
  (this->CachedBaseLocation).field0_0x0._s_0.Y = 0.0;
  (this->CachedBaseLocation).field0_0x0._s_0.Z = 0.0;
  (this->CachedBaseRotation).Pitch = 0.0;
  (this->CachedBaseRotation).Yaw = 0.0;
  (this->CachedBaseRotation).Roll = 0.0;
  (this->CachedTransPosition).field0_0x0._s_0.X = 0.0;
  (this->CachedTransPosition).field0_0x0._s_0.Y = 0.0;
  (this->CachedTransPosition).field0_0x0._s_0.Z = 0.0;
  return this;
}

// operator* @ 14768b260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FBasedPosition::operator*(FBasedPosition *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  TObjectPtr<AActor>_u_0 TVar2;
  USceneComponent *this_00;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TRotator<double> *pTVar19;
  TRotationMatrix<double> *pTVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  TRotator<double> local_128;
  TRotator<double> local_110;
  double local_e8;
  TRotationMatrix<double> local_d8;
  
  TVar2 = (this->Base).field0_0x0;
  if (TVar2.DebugPtr == (AActor *)0x0) {
    dVar17 = (this->Position).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Position).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Position).field0_0x0._s_0.Z;
  }
  else {
    this_00 = *(USceneComponent **)((longlong)TVar2 + 0x1b8);
    if (this_00 == (USceneComponent *)0x0) {
      uVar21 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar22 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pTVar19 = &local_110;
      local_110.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_110.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_110.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_e8 = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar21 = SUB84(local_e8,0);
      uVar22 = (undefined4)((ulonglong)local_e8 >> 0x20);
      uVar4 = *(undefined4 *)(this_00->ComponentToWorld).Translation.XY.m128d_f64;
      uVar5 = *(undefined4 *)((longlong)(this_00->ComponentToWorld).Translation.XY.m128d_f64 + 4);
      uVar6 = *(undefined4 *)((this_00->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uVar7 = *(undefined4 *)((longlong)(this_00->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      pTVar19 = USceneComponent::GetComponentRotation(this_00,&local_110);
    }
    dVar17 = local_e8;
    local_128.Pitch = pTVar19->Pitch;
    local_128.Yaw = pTVar19->Yaw;
    local_128.Roll = pTVar19->Roll;
    if (((((double)CONCAT44(uVar5,uVar4) != (this->CachedBaseLocation).field0_0x0._s_0.X) ||
         ((double)CONCAT44(uVar7,uVar6) != (this->CachedBaseLocation).field0_0x0._s_0.Y)) ||
        (local_e8 != (this->CachedBaseLocation).field0_0x0._s_0.Z)) ||
       (((local_128.Pitch != (this->CachedBaseRotation).Pitch ||
         (local_128.Yaw != (this->CachedBaseRotation).Yaw)) ||
        (local_128.Roll != (this->CachedBaseRotation).Roll)))) {
      (this->CachedBaseRotation).Pitch = local_128.Pitch;
      (this->CachedBaseRotation).Yaw = local_128.Yaw;
      (this->CachedBaseRotation).Roll = local_128.Roll;
      *(undefined4 *)&(this->CachedBaseLocation).field0_0x0 = uVar4;
      *(undefined4 *)((longlong)&(this->CachedBaseLocation).field0_0x0 + 4) = uVar5;
      *(undefined4 *)((longlong)&(this->CachedBaseLocation).field0_0x0 + 8) = uVar6;
      *(undefined4 *)((longlong)&(this->CachedBaseLocation).field0_0x0 + 0xc) = uVar7;
      (this->CachedBaseLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar22,uVar21);
      pTVar20 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_d8,&local_128);
      dVar18 = __real_3ff0000000000000;
      dVar8 = (this->Position).field0_0x0._s_0.X;
      dVar9 = (this->Position).field0_0x0._s_0.Y;
      dVar10 = *(double *)&pTVar20->field_0x28;
      dVar11 = *(double *)&pTVar20->field_0x8;
      dVar1 = (this->Position).field0_0x0._s_0.Z;
      dVar12 = *(double *)&pTVar20->field_0x10;
      dVar13 = *(double *)&pTVar20->field_0x48;
      dVar14 = *(double *)&pTVar20->field_0x50;
      dVar3 = *(double *)&pTVar20->field_0x68 * __real_3ff0000000000000;
      dVar15 = *(double *)&pTVar20->field_0x30;
      dVar16 = *(double *)&pTVar20->field_0x70;
      (this->CachedTransPosition).field0_0x0._s_0.X =
           (double)CONCAT44(uVar5,uVar4) +
           *(double *)&pTVar20->field_0x20 * dVar9 + *(double *)pTVar20 * dVar8 +
           dVar1 * *(double *)&pTVar20->field_0x40 +
           *(double *)&pTVar20->field_0x60 * __real_3ff0000000000000;
      (this->CachedTransPosition).field0_0x0._s_0.Y =
           (double)CONCAT44(uVar7,uVar6) + dVar10 * dVar9 + dVar11 * dVar8 + dVar1 * dVar13 + dVar3;
      (this->CachedTransPosition).field0_0x0._s_0.Z =
           dVar17 + dVar12 * dVar8 + dVar15 * dVar9 + dVar14 * dVar1 + dVar16 * dVar18;
    }
    dVar17 = (this->CachedTransPosition).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CachedTransPosition).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar17;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->CachedTransPosition).field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// Clear @ 147698350

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FBasedPosition::Clear(FBasedPosition *this)

{
  undefined8 uVar1;
  
  (this->Base).field0_0x0.DebugPtr = (AActor *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Set @ 1476c6f30

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

void __thiscall FBasedPosition::Set(FBasedPosition *this,AActor *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  USceneComponent *pUVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  TQuat<double> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  double dVar19;
  undefined4 uVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  uint uVar41;
  double local_f8;
  TQuat<double> local_e8;
  TRotator<double> local_c8 [8];
  
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&param_2->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    if (((param_1 == (AActor *)0x0) ||
        (pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr, pUVar2 == (USceneComponent *)0x0))
       || ((pUVar2->Mobility).Value == '\0')) {
      param_1 = (AActor *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Base).field0_0x0.DebugPtr = param_1;
    if (param_1 == (AActor *)0x0) {
      dVar19 = (param_2->field0_0x0)._s_0.Y;
      (this->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
      (this->Position).field0_0x0._s_0.Y = dVar19;
      dVar19 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
      if (pUVar2 == (USceneComponent *)0x0) {
        uVar18 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar24 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pTVar14 = &local_e8;
        local_e8.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_e8.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_e8.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
      else {
        local_f8 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
        uVar1 = (pUVar2->ComponentToWorld).Translation.XY.m128d_f64[0];
        uVar13 = *(double *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 8);
        uVar18 = SUB84(local_f8,0);
        uVar24 = (undefined4)((ulonglong)local_f8 >> 0x20);
        pTVar14 = (TQuat<double> *)
                  USceneComponent::GetComponentRotation(pUVar2,(TRotator<double> *)&local_e8);
      }
      local_c8[0].Pitch = pTVar14->X;
      local_c8[0].Yaw = pTVar14->Y;
      local_c8[0].Roll = pTVar14->Z;
      (this->CachedBaseLocation).field0_0x0._s_0.X = (double)uVar1;
      (this->CachedBaseLocation).field0_0x0._s_0.Y = (double)uVar13;
      (this->CachedBaseRotation).Pitch = local_c8[0].Pitch;
      (this->CachedBaseRotation).Yaw = local_c8[0].Yaw;
      (this->CachedBaseLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar24,uVar18);
      (this->CachedBaseRotation).Roll = local_c8[0].Roll;
      dVar19 = (param_2->field0_0x0)._s_0.Y;
      (this->CachedTransPosition).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
      (this->CachedTransPosition).field0_0x0._s_0.Y = dVar19;
      (this->CachedTransPosition).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      pTVar14 = UE::Math::TRotator<double>::Quaternion(local_c8,&local_e8);
      dVar19 = pTVar14->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar3 = pTVar14->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar4 = pTVar14->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar5 = pTVar14->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar8 = ((param_2->field0_0x0)._s_0.X - (double)uVar1) -
              (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar9 = ((param_2->field0_0x0)._s_0.Y - (double)uVar13) -
              (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      uVar18 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar37._8_4_ = SUB84(dVar9,0);
      auVar37._0_8_ = dVar8;
      auVar37._12_4_ = uVar18;
      dVar28 = ((param_2->field0_0x0)._s_0.Z - local_f8) -
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar25._8_4_ = SUB84(dVar9,0);
      auVar25._0_8_ = dVar8;
      auVar25._12_4_ = uVar18;
      auVar29._8_4_ = SUB84(dVar3,0);
      auVar29._0_8_ = dVar19;
      auVar29._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar26._8_4_ = SUB84(dVar5,0);
      auVar26._0_8_ = dVar4;
      auVar26._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar30 = blendpd(auVar29,auVar26,2);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar28;
      auVar26 = blendpd(auVar25,auVar12,2);
      auVar38._0_8_ = auVar37._8_8_ * dVar19 - dVar3 * dVar8;
      auVar38._8_8_ = dVar28 * dVar3 - auVar20._8_8_ * dVar9;
      dVar11 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      uVar40 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar41 = (uint)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      auVar27._0_8_ = auVar26._0_8_ * dVar4 - auVar30._0_8_ * dVar28;
      auVar27._8_8_ = auVar26._8_8_ * dVar5 - auVar30._8_8_ * 0.0;
      dVar6 = auVar38._8_8_ + auVar38._8_8_;
      dVar7 = auVar27._0_8_ + auVar27._0_8_;
      uVar18 = SUB84(dVar7,0);
      uVar24 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar26 = blendpd(auVar38,auVar27,2);
      auVar39._0_8_ = auVar26._0_8_ + auVar26._0_8_;
      auVar39._8_8_ = auVar26._8_8_ + auVar26._8_8_;
      auVar35._8_4_ = uVar18;
      auVar35._0_8_ = dVar6;
      auVar35._12_4_ = uVar24;
      auVar21._8_4_ = uVar18;
      auVar21._0_8_ = dVar6;
      auVar21._12_4_ = uVar24;
      auVar33._8_4_ = uVar18;
      auVar33._0_8_ = dVar6;
      auVar33._12_4_ = uVar24;
      auVar26 = blendpd(auVar33,auVar39,2);
      auVar36._0_8_ = auVar35._8_8_ * dVar19 - dVar6 * dVar3;
      auVar36._8_8_ = auVar39._0_8_ * dVar3 - auVar21._8_8_ * dVar4;
      auVar22._8_4_ = SUB84(auVar39._8_8_,0);
      auVar22._0_8_ = auVar39._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar34._0_8_ = auVar26._0_8_ * dVar4 - auVar39._0_8_ * auVar30._0_8_;
      auVar34._8_8_ = auVar26._8_8_ * dVar5 - auVar22._8_8_ * auVar30._8_8_;
      dVar19 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      lVar15 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar10._8_4_ = uVar40;
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = uVar41;
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar10);
      auVar31._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar31._8_4_ = uVar40 & _UNK_15061cc88;
      auVar31._12_4_ = uVar41 & _UNK_15061cc8c;
      lVar16 = -(ulonglong)(auVar31._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar17 = -(ulonglong)(auVar31._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar23._8_4_ = SUB84(auVar36._8_8_,0);
      auVar23._0_8_ = auVar36._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
      auVar32._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar26._4_4_,
                            ~(uint)lVar16 & auVar26._0_4_);
      auVar32._8_4_ = ~(uint)lVar17 & auVar26._8_4_;
      auVar32._12_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar26._12_4_;
      auVar30._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar30._0_8_ = dVar19;
      auVar30._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
      auVar30 = blendpd(auVar36,auVar34,2);
      (this->Position).field0_0x0._s_0.X = auVar32._0_8_ * (dVar6 * dVar5 + dVar8 + auVar23._8_8_);
      (this->Position).field0_0x0._s_0.Y = auVar32._8_8_ * (dVar7 * dVar5 + dVar9 + auVar34._0_8_);
      dVar19 = (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar26._4_4_,
                                ~(uint)lVar15 & auVar26._0_4_) *
               (auVar39._0_8_ * dVar5 + dVar28 + auVar30._0_8_);
    }
    (this->Position).field0_0x0._s_0.Z = dVar19;
  }
  else {
    (this->Base).field0_0x0.DebugPtr = (AActor *)0x0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->Position).field0_0x0._s_0.Y = (double)uVar1;
    (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// StaticStruct @ 147ba9c30

UScriptStruct * __cdecl FBasedPosition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBasedPosition.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBasedPosition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBasedPosition,(UObject *)pUVar1,L"BasedPosition"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FBasedPosition.OuterSingleton;
}

