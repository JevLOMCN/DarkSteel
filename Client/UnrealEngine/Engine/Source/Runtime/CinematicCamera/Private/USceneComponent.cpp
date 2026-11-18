// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 2

// GetComponentRotation @ 146ab67a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
USceneComponent::GetComponentRotation
          (USceneComponent *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  FPayload *pFVar5;
  TRotator<double> *pTVar6;
  int iVar7;
  FRotationConversionCache *this_00;
  uint uVar8;
  longlong lVar9;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  local_28.X = (this->ComponentToWorld).Rotation.XY.m128d_f64[0];
  local_28.Y = (this->ComponentToWorld).Rotation.XY.m128d_f64[1];
  local_28.Z = (this->ComponentToWorld).Rotation.ZW.m128d_f64[0];
  local_28.W = (this->ComponentToWorld).Rotation.ZW.m128d_f64[1];
  this_00 = &this->WorldRotationCache;
  pTVar6 = __return_storage_ptr__;
  pFVar5 = FRotationConversionCache::GetOrCreatePayload(this_00);
  lVar9 = -(ulonglong)((pFVar5->CachedQuat).W != local_28.W);
  auVar2._8_4_ = (int)lVar9;
  auVar2._0_8_ = -(ulonglong)((pFVar5->CachedQuat).Z != local_28.Z);
  auVar2._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  uVar8 = movmskpd((int)pTVar6,auVar2);
  lVar9 = -(ulonglong)((pFVar5->CachedQuat).Y != local_28.Y);
  auVar3._8_4_ = (int)lVar9;
  auVar3._0_8_ = -(ulonglong)((pFVar5->CachedQuat).X != local_28.X);
  auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
  iVar7 = movmskpd((int)this_00,auVar3);
  if ((uVar8 & 0x3fffffff) != 0 || iVar7 != 0) {
    (pFVar5->CachedQuat).X = local_28.X;
    (pFVar5->CachedQuat).Y = local_28.Y;
    (pFVar5->CachedQuat).Z = local_28.Z;
    (pFVar5->CachedQuat).W = local_28.W;
    pTVar6 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
    dVar1 = pTVar6->Yaw;
    (pFVar5->CachedRotator).Pitch = pTVar6->Pitch;
    (pFVar5->CachedRotator).Yaw = dVar1;
    (pFVar5->CachedRotator).Roll = pTVar6->Roll;
  }
  dVar4 = (pFVar5->CachedRotator).Yaw;
  dVar1 = (pFVar5->CachedRotator).Roll;
  __return_storage_ptr__->Pitch = (pFVar5->CachedRotator).Pitch;
  __return_storage_ptr__->Yaw = dVar4;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// SetRelativeLocation @ 146ab9130

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
USceneComponent::SetRelativeLocation
          (USceneComponent *this,TVector<double> *param_1,bool param_2,FHitResult *param_3,
          ETeleportType param_4)

{
  TRotator<double> *this_00;
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  FPayload *pFVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  TVector<double>_u_0 local_78;
  TQuat<double> local_58 [2];
  
  dVar26 = (this->RelativeRotation).Roll;
  auVar1._0_8_ = (this->RelativeRotation).Pitch;
  auVar1._8_8_ = (this->RelativeRotation).Yaw;
  local_78._s_0.Z = dVar26;
  pFVar7 = FRotationConversionCache::GetOrCreatePayload(&this->RelativeRotationCache);
  this_00 = &pFVar7->CachedRotator;
  if ((((double)auVar1._0_8_ != (pFVar7->CachedRotator).Pitch) ||
      (auVar6._4_8_ = extraout_XMM0_Qb, auVar6._0_4_ = (int)((ulonglong)auVar1._0_8_ >> 0x20),
      auVar13._0_8_ = auVar6._0_8_ << 0x20, auVar13._8_4_ = (int)auVar1._8_8_,
      auVar13._12_4_ = (int)((ulonglong)auVar1._8_8_ >> 0x20),
      auVar13._8_8_ != (pFVar7->CachedRotator).Yaw)) ||
     (local_78._s_0.Z != (pFVar7->CachedRotator).Roll)) {
    auVar13 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar19 = roundpd(in_XMM1,auVar13,3);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar26;
    auVar13 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar20._0_8_ = auVar19._0_8_ * dVar2;
    dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar20._8_8_ = auVar19._8_8_ * dVar3;
    dVar18 = (double)auVar1._0_8_ - auVar20._0_8_;
    dVar5 = (double)auVar1._8_8_ - auVar20._8_8_;
    auVar13 = roundpd(auVar20,auVar13,3);
    dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar18;
    auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar17 = auVar19._8_8_ + dVar3;
    dVar26 = dVar26 - auVar13._0_8_ * dVar4;
    dVar27 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar9 = -(ulonglong)(0.0 <= dVar26);
    uVar11 = -(ulonglong)(0.0 <= dVar27);
    auVar22._0_8_ = uVar9 & (ulonglong)dVar26;
    auVar22._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar27);
    auVar22._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar27) >> 0x20);
    uVar10 = -(ulonglong)(0.0 <= dVar18);
    uVar12 = -(ulonglong)(0.0 <= dVar5);
    auVar21._0_8_ = uVar10 & (ulonglong)dVar18;
    auVar21._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar5);
    auVar21._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar5) >> 0x20);
    auVar24._0_4_ = ~(uint)uVar10 & SUB84(dVar18 + dVar2,0);
    auVar24._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar18 + dVar2) >> 0x20);
    auVar24._8_4_ = ~(uint)uVar12 & SUB84(dVar17,0);
    auVar24._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar17 >> 0x20);
    auVar15._8_4_ = SUB84(dVar27,0);
    auVar15._0_8_ = dVar26;
    auVar15._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dVar18 = auVar15._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar24 = auVar24 | auVar21;
    auVar25._0_4_ = ~(uint)uVar9 & SUB84(dVar26 + dVar4,0);
    auVar25._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar26 + dVar4) >> 0x20);
    auVar25._8_4_ = ~(uint)uVar11 & SUB84(dVar18,0);
    auVar25._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
    auVar25 = auVar25 | auVar22;
    uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar24._0_8_);
    uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar24._8_8_);
    uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar25._0_8_);
    auVar23._0_8_ = uVar10 & (ulonglong)(auVar24._0_8_ - dVar2);
    uVar9 = uVar12 & (ulonglong)(auVar24._8_8_ - dVar3);
    auVar23._8_4_ = (undefined4)uVar9;
    auVar23._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar16._0_4_ = ~(uint)uVar10 & auVar24._0_4_;
    auVar16._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar24._4_4_;
    auVar16._8_4_ = ~(uint)uVar12 & auVar24._8_4_;
    auVar16._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar24._12_4_;
    this_00->Pitch = (double)SUB168(auVar23 | auVar16,0);
    this_00->Yaw = (double)SUB168(auVar23 | auVar16,8);
    (pFVar7->CachedRotator).Roll =
         (double)((ulonglong)(auVar25._0_8_ - dVar4) & uVar11 |
                 CONCAT44(~(uint)(uVar11 >> 0x20) & auVar25._4_4_,~(uint)uVar11 & auVar25._0_4_));
    local_78._0_16_ = auVar1;
    pTVar8 = UE::Math::TRotator<double>::Quaternion(this_00,(TQuat<double> *)&local_78._s_0);
    dVar26 = pTVar8->Y;
    (pFVar7->CachedQuat).X = pTVar8->X;
    (pFVar7->CachedQuat).Y = dVar26;
    dVar26 = pTVar8->W;
    (pFVar7->CachedQuat).Z = pTVar8->Z;
    (pFVar7->CachedQuat).W = dVar26;
  }
  local_58[0].X = (pFVar7->CachedQuat).X;
  local_58[0].Y = (pFVar7->CachedQuat).Y;
  local_58[0].Z = (pFVar7->CachedQuat).Z;
  local_58[0].W = (pFVar7->CachedQuat).W;
  local_78._0_16_ = *(undefined1 (*) [16])&param_1->field0_0x0;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  SetRelativeLocationAndRotation
            (this,(TVector<double> *)&local_78._s_0,local_58,param_2,param_3,param_4);
  return;
}

