// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// UpdateOperation @ 147dc7410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FInterpolateComponentToAction::UpdateOperation
          (FInterpolateComponentToAction *this,FLatentResponse *param_1)

{
  undefined1 auVar1 [16];
  bool bVar2;
  USceneComponent *pUVar3;
  TQuat<double> *pTVar4;
  TRotator<double> *pTVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar34;
  uint uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  TVector<double>_u_0 local_f8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  TQuat<double> local_b8;
  TQuat<double> local_98 [4];
  
  fVar11 = param_1->DeltaTime + this->TimeElapsed;
  bVar6 = this->TotalTime <= fVar11;
  this->TimeElapsed = fVar11;
  bVar2 = FWeakObjectPtr::IsValid(&(this->TargetComponent).WeakPtr);
  if ((bVar2) && (this->bInterpolating != false)) {
    fVar11 = this->TimeElapsed / this->TotalTime;
    if (this->bEaseIn == false) {
      if (this->bEaseOut != false) {
        fVar11 = SQRT(fVar11);
      }
    }
    else if (this->bEaseOut == false) {
      fVar11 = fVar11 * fVar11;
    }
    else {
      fVar28 = fVar11 + fVar11;
      if (__real_3f000000 <= fVar11) {
        fVar11 = __real_3f800000 - (fVar28 - __real_3f800000);
        fVar11 = ((__real_3f800000 - fVar11 * fVar11) + __real_3f800000) * __real_3f000000;
      }
      else {
        fVar11 = fVar28 * fVar28 * __real_3f000000;
      }
    }
    dVar40 = (double)fVar11;
    if (this->bInterpLocation != false) {
      if (bVar6) {
        dVar21 = (this->TargetLocation).field0_0x0._s_0.X;
        dVar36 = (this->TargetLocation).field0_0x0._s_0.Y;
        dVar29 = (this->TargetLocation).field0_0x0._s_0.Z;
      }
      else {
        dVar29 = (this->InitialLocation).field0_0x0._s_0.Z;
        dVar21 = ((this->TargetLocation).field0_0x0._s_0.X -
                 (this->InitialLocation).field0_0x0._s_0.X) * dVar40 +
                 (this->InitialLocation).field0_0x0._s_0.X;
        dVar29 = ((this->TargetLocation).field0_0x0._s_0.Z - dVar29) * dVar40 + dVar29;
        dVar36 = ((this->TargetLocation).field0_0x0._s_0.Y -
                 (this->InitialLocation).field0_0x0._s_0.Y) * dVar40 +
                 (this->InitialLocation).field0_0x0._s_0.Y;
        local_f8._s_0.Z = dVar29;
      }
      pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(&(this->TargetComponent).WeakPtr);
      local_f8._s_0.X = dVar21;
      local_f8._s_0.Y = dVar36;
      local_f8._s_0.Z = dVar29;
      USceneComponent::SetRelativeLocation
                (pUVar3,(TVector<double> *)&local_f8._s_0,false,(FHitResult *)0x0,None);
    }
    if ((this->bInterpRotation != false) &&
       (bVar2 = FWeakObjectPtr::IsValid(&(this->TargetComponent).WeakPtr), bVar2)) {
      if (bVar6) {
        dVar21 = (this->TargetRotation).Pitch;
        dVar40 = (this->TargetRotation).Yaw;
        dVar29 = (this->TargetRotation).Roll;
      }
      else if (this->bForceShortestRotationPath == false) {
        dVar45 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar41._0_8_ = (this->TargetRotation).Roll - (this->InitialRotation).Roll;
        dVar36 = (this->TargetRotation).Pitch - (this->InitialRotation).Pitch;
        auVar25._0_8_ = (this->TargetRotation).Yaw - (this->InitialRotation).Yaw;
        auVar25._8_8_ = 0;
        auVar23._8_4_ = SUB84(auVar25._0_8_,0);
        auVar23._0_8_ = dVar36;
        auVar23._12_4_ = (int)((ulonglong)auVar25._0_8_ >> 0x20);
        auVar23 = divpd(auVar23,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar23 = roundpd(auVar25,auVar23,3);
        auVar26._0_8_ = auVar23._0_8_ * dVar45;
        dVar46 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar26._8_8_ = auVar23._8_8_ * dVar46;
        auVar41._8_8_ = 0;
        auVar23 = divpd(auVar41,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar36 = dVar36 - auVar26._0_8_;
        dVar38 = auVar25._0_8_ - auVar26._8_8_;
        auVar23 = roundpd(auVar26,auVar23,3);
        dVar29 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar18._8_4_ = SUB84(dVar38,0);
        auVar18._0_8_ = dVar36;
        auVar18._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        dVar39 = auVar41._0_8_ - auVar23._0_8_ * dVar29;
        dVar44 = 0.0 - auVar23._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        dVar21 = auVar18._8_8_ + dVar46;
        uVar8 = -(ulonglong)(0.0 <= dVar39);
        uVar9 = -(ulonglong)(0.0 <= dVar44);
        uVar7 = -(ulonglong)(0.0 <= dVar36);
        uVar10 = -(ulonglong)(0.0 <= dVar38);
        auVar27._0_8_ = uVar7 & (ulonglong)dVar36;
        auVar27._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar38);
        auVar27._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar38) >> 0x20);
        auVar33._0_4_ = ~(uint)uVar7 & SUB84(dVar36 + dVar45,0);
        auVar33._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar36 + dVar45) >> 0x20);
        auVar33._8_4_ = ~(uint)uVar10 & SUB84(dVar21,0);
        auVar33._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar21 >> 0x20);
        auVar31._0_8_ = uVar8 & (ulonglong)dVar39;
        auVar31._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar44);
        auVar31._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar44) >> 0x20);
        auVar19._8_4_ = SUB84(dVar44,0);
        auVar19._0_8_ = dVar39;
        auVar19._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar33 = auVar33 | auVar27;
        dVar21 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar37._0_4_ = ~(uint)uVar8 & SUB84(dVar39 + dVar29,0);
        auVar37._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar39 + dVar29) >> 0x20);
        auVar37._8_4_ = ~(uint)uVar9 & SUB84(dVar21,0);
        auVar37._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar21 >> 0x20);
        auVar37 = auVar37 | auVar31;
        uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar33._0_8_);
        uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar33._8_8_);
        auVar43._0_8_ = uVar7 & (ulonglong)(auVar33._0_8_ - dVar45);
        uVar8 = uVar9 & (ulonglong)(auVar33._8_8_ - dVar46);
        auVar43._8_4_ = (undefined4)uVar8;
        auVar43._12_4_ = (undefined4)(uVar8 >> 0x20);
        uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar37._0_8_);
        auVar20._0_4_ = ~(uint)uVar7 & auVar33._0_4_;
        auVar20._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar33._4_4_;
        auVar20._8_4_ = ~(uint)uVar9 & auVar33._8_4_;
        auVar20._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar33._12_4_;
        dVar29 = (double)(uVar8 & (ulonglong)(auVar37._0_8_ - dVar29) |
                         CONCAT44(~(uint)(uVar8 >> 0x20) & auVar37._4_4_,
                                  ~(uint)uVar8 & auVar37._0_4_)) * dVar40 +
                 (this->InitialRotation).Roll;
        dVar21 = SUB168(auVar43 | auVar20,0) * dVar40 + (this->InitialRotation).Pitch;
        dVar40 = SUB168(auVar43 | auVar20,8) * dVar40 + (this->InitialRotation).Yaw;
        local_f8._s_0.Z = dVar29;
      }
      else {
        pTVar4 = UE::Math::TRotator<double>::Quaternion
                           (&this->InitialRotation,(TQuat<double> *)&local_f8._s_0);
        local_98[0].X = pTVar4->X;
        local_98[0].Y = pTVar4->Y;
        local_98[0].Z = pTVar4->Z;
        local_98[0].W = pTVar4->W;
        pTVar4 = UE::Math::TRotator<double>::Quaternion
                           (&this->TargetRotation,(TQuat<double> *)&local_f8._s_0);
        local_b8.X = pTVar4->X;
        local_b8.Y = pTVar4->Y;
        local_b8.Z = pTVar4->Z;
        local_b8.W = pTVar4->W;
        pTVar4 = UE::Math::TQuat<double>::Slerp_NotNormalized
                           ((TQuat<double> *)&local_f8._s_0,local_98,&local_b8,dVar40);
        dVar40 = pTVar4->X;
        dVar29 = pTVar4->Y;
        dVar21 = pTVar4->Z;
        dVar36 = pTVar4->W;
        auVar22._0_8_ = dVar40 * dVar40 + dVar21 * dVar21;
        auVar22._8_8_ = dVar29 * dVar29 + dVar36 * dVar36;
        auVar12._8_4_ = SUB84(auVar22._8_8_,0);
        auVar12._0_8_ = auVar22._0_8_;
        auVar12._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
        auVar13._0_8_ = auVar12._8_8_ + auVar22._0_8_;
        auVar13._8_8_ = auVar22._0_8_ + auVar22._8_8_;
        auVar23 = sqrtpd(auVar22,auVar13);
        uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= auVar13._0_8_);
        uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= auVar13._8_8_);
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
        uVar47 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        uVar48 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
        uVar49 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar50 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
        uVar51 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        uVar52 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
        uVar53 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        uVar54 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        uVar34 = (uint)(uVar7 >> 0x20);
        uVar35 = (uint)(uVar9 >> 0x20);
        auVar42._0_8_ = uVar7 & (ulonglong)(auVar41._0_8_ * dVar40);
        uVar8 = uVar9 & (ulonglong)(auVar41._8_8_ * dVar29);
        auVar42._8_4_ = (undefined4)uVar8;
        auVar42._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar14._0_4_ = ~(uint)uVar7 & uVar47;
        auVar14._4_4_ = ~uVar34 & uVar48;
        auVar14._8_4_ = ~(uint)uVar9 & uVar49;
        auVar14._12_4_ = ~uVar35 & uVar50;
        auVar30._0_8_ = (ulonglong)(auVar23._0_8_ * dVar21) & uVar7;
        uVar8 = (ulonglong)(auVar23._8_8_ * dVar36) & uVar9;
        auVar30._8_4_ = (undefined4)uVar8;
        auVar30._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar32._0_4_ = ~(uint)uVar7 & uVar51;
        auVar32._4_4_ = ~uVar34 & uVar52;
        auVar32._8_4_ = ~(uint)uVar9 & uVar53;
        auVar32._12_4_ = ~uVar35 & uVar54;
        dVar40 = SUB168(auVar42 | auVar14,0);
        dVar29 = SUB168(auVar42 | auVar14,8);
        dVar21 = SUB168(auVar30 | auVar32,0);
        dVar36 = SUB168(auVar30 | auVar32,8);
        auVar24._0_8_ = dVar21 * dVar21 + dVar40 * dVar40;
        auVar24._8_8_ = dVar36 * dVar36 + dVar29 * dVar29;
        auVar15._8_4_ = SUB84(auVar24._8_8_,0);
        auVar15._0_8_ = auVar24._0_8_;
        auVar15._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
        auVar16._0_8_ = auVar15._8_8_ + auVar24._0_8_;
        auVar16._8_8_ = auVar24._0_8_ + auVar24._8_8_;
        auVar23 = sqrtpd(auVar24,auVar16);
        uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= auVar16._0_8_);
        uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= auVar16._8_8_);
        uVar34 = (uint)(uVar7 >> 0x20);
        uVar35 = (uint)(uVar9 >> 0x20);
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
        auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
        local_d8._0_8_ = uVar7 & (ulonglong)(auVar41._0_8_ * dVar40);
        uVar8 = uVar9 & (ulonglong)(auVar41._8_8_ * dVar29);
        local_d8._8_4_ = (undefined4)uVar8;
        local_d8._12_4_ = (undefined4)(uVar8 >> 0x20);
        local_c8._0_8_ = (ulonglong)(auVar23._0_8_ * dVar21) & uVar7;
        uVar8 = (ulonglong)(auVar23._8_8_ * dVar36) & uVar9;
        local_c8._8_4_ = (undefined4)uVar8;
        local_c8._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar17._0_4_ = ~(uint)uVar7 & uVar47;
        auVar17._4_4_ = ~uVar34 & uVar48;
        auVar17._8_4_ = ~(uint)uVar9 & uVar49;
        auVar17._12_4_ = ~uVar35 & uVar50;
        local_d8 = local_d8 | auVar17;
        auVar1._4_4_ = ~uVar34 & uVar52;
        auVar1._0_4_ = ~(uint)uVar7 & uVar51;
        auVar1._8_4_ = ~(uint)uVar9 & uVar53;
        auVar1._12_4_ = ~uVar35 & uVar54;
        local_c8 = local_c8 | auVar1;
        pTVar5 = UE::Math::TQuat<double>::Rotator
                           ((TQuat<double> *)local_d8,(TRotator<double> *)&local_f8._s_0);
        dVar21 = pTVar5->Pitch;
        dVar40 = pTVar5->Yaw;
        dVar29 = pTVar5->Roll;
      }
      pUVar3 = (USceneComponent *)FWeakObjectPtr::Get(&(this->TargetComponent).WeakPtr);
      local_f8._s_0.X = dVar21;
      local_f8._s_0.Y = dVar40;
      local_f8._s_0.Z = dVar29;
      USceneComponent::SetRelativeRotation
                (pUVar3,(TRotator<double> *)&local_f8._s_0,false,(FHitResult *)0x0,None);
    }
  }
  if ((bVar6) || (this->bInterpolating == false)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  FLatentResponse::FinishAndTriggerIf
            (param_1,bVar6,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  return;
}

