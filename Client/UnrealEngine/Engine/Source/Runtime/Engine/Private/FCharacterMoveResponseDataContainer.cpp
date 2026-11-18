// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FCharacterMoveResponseDataContainer @ 1477f3020

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
FCharacterMoveResponseDataContainer::~FCharacterMoveResponseDataContainer
          (FCharacterMoveResponseDataContainer *this)

{
  this->_padding_ = (longlong)&___7FCharacterMoveResponseDataContainer__6B_;
  return;
}

// GetRootMotionSourceGroup @ 14783d4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRootMotionSourceGroup * __thiscall
FCharacterMoveResponseDataContainer::GetRootMotionSourceGroup
          (FCharacterMoveResponseDataContainer *this,UCharacterMovementComponent *param_1)

{
  ENetMode EVar1;
  FRootMotionSourceGroup *pFVar2;
  
  if (this->bRootMotionSourceCorrection == false) {
    return (FRootMotionSourceGroup *)0x0;
  }
  if (*(AActor **)&param_1->field_0xa8 != (AActor *)0x0) {
    EVar1 = AActor::InternalGetNetMode(*(AActor **)&param_1->field_0xa8);
    pFVar2 = &param_1->ServerCorrectionRootMotion;
    if ((int)EVar1 < 3) {
      pFVar2 = &param_1->CurrentRootMotion;
    }
    return pFVar2;
  }
  return &param_1->CurrentRootMotion;
}

// Serialize @ 147863380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FCharacterMoveResponseDataContainer::Serialize
          (FCharacterMoveResponseDataContainer *this,UCharacterMovementComponent *param_1,
          FArchive *param_2,UPackageMap *param_3)

{
  float *pfVar1;
  double dVar2;
  undefined8 uVar3;
  UCharacterMovementComponent *pUVar4;
  undefined1 uVar5;
  ENetMode EVar6;
  longlong lVar7;
  bool bVar8;
  UPrimitiveComponent **ppUVar9;
  FName *pFVar10;
  bool local_res8 [8];
  UCharacterMovementComponent *local_res10;
  int local_res18 [2];
  bool local_48 [4];
  FName local_44;
  
  local_res8[0] = true;
  bVar8 = (bool)((byte)param_2->field_0x28 >> 2 & 1);
  local_res10 = param_1;
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&(this->ClientAdjustment).bAckGoodMove,1);
  pfVar1 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->ClientAdjustment,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->ClientAdjustment);
    }
  }
  else {
    (this->ClientAdjustment).TimeStamp = *pfVar1;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  if ((this->ClientAdjustment).bAckGoodMove != false) goto LAB_147863827;
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bHasBase,1);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bHasRotation,1);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bRootMotionMontageCorrection,1);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,&this->bRootMotionSourceCorrection,1);
  UE::Math::TVector<double>::NetSerialize
            (&(this->ClientAdjustment).NewLoc,param_2,param_3,local_res8);
  UE::Math::TVector<double>::NetSerialize
            (&(this->ClientAdjustment).NewVel,param_2,param_3,local_res8);
  if ((bVar8 == false) ||
     (((UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.X ==
        (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.X &&
       (UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Y ==
        (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Y)) &&
      (UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Z ==
       (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Z)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar5);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,local_res18,1);
  uVar3 = UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Y;
  if ((char)local_res18[0] == '\0') {
    if (bVar8 == false) {
      (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.X =
           UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.X;
      (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Y = (double)uVar3;
      (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Z =
           UCharacterMovementComponent::DefaultGravityDirection.field0_0x0._s_0.Z;
    }
  }
  else {
    UE::Math::TVector<double>::NetSerialize
              (&(this->ClientAdjustment).GravityDirection,param_2,param_3,local_48);
  }
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if (this->bHasRotation == false) {
    if (bVar8 != false) goto LAB_147863563;
    (this->ClientAdjustment).NewRot.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    (this->ClientAdjustment).NewRot.Yaw = dVar2;
    (this->ClientAdjustment).NewRot.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
LAB_147863597:
    uVar5 = 0;
  }
  else {
    UE::Math::TRotator<double>::NetSerialize
              (&(this->ClientAdjustment).NewRot,param_2,param_3,local_res8);
LAB_147863563:
    if ((bVar8 == false) || ((this->ClientAdjustment).NewBase == (UPrimitiveComponent *)0x0))
    goto LAB_147863597;
    uVar5 = 1;
  }
  ppUVar9 = &(this->ClientAdjustment).NewBase;
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar5);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    if (bVar8 != false) goto LAB_1478635d3;
    *ppUVar9 = (UPrimitiveComponent *)0x0;
LAB_147863605:
    uVar5 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_2 + 0x168))(param_2,ppUVar9);
LAB_1478635d3:
    if ((bVar8 == false) || ((this->ClientAdjustment).NewBaseBoneName == (FName)0x0))
    goto LAB_147863605;
    uVar5 = 1;
  }
  local_44.ComparisonIndex.Value = 0;
  local_44.Number = 0;
  pFVar10 = &(this->ClientAdjustment).NewBaseBoneName;
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,uVar5);
  (**(code **)(*(longlong *)param_2 + 400))(param_2,local_res18,1);
  if ((char)local_res18[0] == '\0') {
    if (bVar8 == false) {
      *pFVar10 = local_44;
    }
  }
  else {
    (**(code **)(*(longlong *)param_2 + 0x178))(param_2,pFVar10);
  }
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
  SerializeOptionalValue<unsigned_char>
            (bVar8,param_2,&(this->ClientAdjustment).MovementMode,(uchar *)local_res18);
  (**(code **)(*(longlong *)param_2 + 400))
            (param_2,&(this->ClientAdjustment).bBaseRelativePosition,1);
  (**(code **)(*(longlong *)param_2 + 400))
            (param_2,&(this->ClientAdjustment).bBaseRelativeVelocity,1);
  if (this->bRootMotionMontageCorrection == false) {
    if (bVar8 == false) {
      this->RootMotionTrackPosition = -1.0;
    }
  }
  else {
    ::operator<<(param_2,&this->RootMotionTrackPosition);
  }
  pUVar4 = local_res10;
  if (this->bRootMotionSourceCorrection != false) {
    if (*(AActor **)&local_res10->field_0xa8 == (AActor *)0x0) {
LAB_1478636f4:
      lVar7 = 0xd48;
    }
    else {
      EVar6 = AActor::InternalGetNetMode(*(AActor **)&local_res10->field_0xa8);
      lVar7 = 0xd90;
      if ((int)EVar6 < 3) goto LAB_1478636f4;
    }
    if ((FRootMotionSourceGroup *)(&pUVar4->field_0x0 + lVar7) != (FRootMotionSourceGroup *)0x0) {
      FRootMotionSourceGroup::NetSerialize
                ((FRootMotionSourceGroup *)(&pUVar4->field_0x0 + lVar7),param_2,param_3,local_res8,
                 '\x03');
    }
  }
  if ((this->bRootMotionMontageCorrection != false) || (this->bRootMotionSourceCorrection != false))
  {
    if ((param_2->field_0x28 & 4) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_res18,0x10000);
      *(double *)&this->RootMotionRotation =
           (double)(local_res18[0] + -0x8000) * __real_3f00002000400080;
      (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_res18,0x10000);
      *(double *)&(this->RootMotionRotation).field_0x8 =
           (double)(local_res18[0] + -0x8000) * __real_3f00002000400080;
      (**(code **)(*(longlong *)param_2 + 0x198))(param_2,local_res18,0x10000);
      *(double *)&(this->RootMotionRotation).field_0x10 =
           (double)(local_res18[0] + -0x8000) * __real_3f00002000400080;
    }
    else {
      WriteFixedCompressedFloat<1,16,double>(*(double *)&this->RootMotionRotation,param_2);
      WriteFixedCompressedFloat<1,16,double>
                (*(double *)&(this->RootMotionRotation).field_0x8,param_2);
      WriteFixedCompressedFloat<1,16,double>
                (*(double *)&(this->RootMotionRotation).field_0x10,param_2);
    }
  }
LAB_147863827:
  return (bool)((byte)~param_2->field_0x29 >> 1 & 1);
}

// ServerFillResponseData @ 147864da0

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
FCharacterMoveResponseDataContainer::ServerFillResponseData
          (FCharacterMoveResponseDataContainer *this,UCharacterMovementComponent *param_1,
          FClientAdjustment *param_2)

{
  undefined1 auVar1 [16];
  ACharacter *this_00;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  float fVar5;
  UPrimitiveComponent *pUVar6;
  bool bVar7;
  FAnimMontageInstance *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar28;
  undefined1 auVar27 [16];
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  
  this->bHasBase = false;
  this->bHasRotation = false;
  this->bRootMotionMontageCorrection = false;
  this->bRootMotionSourceCorrection = false;
  this->RootMotionTrackPosition = -1.0;
  fVar5 = param_2->DeltaTime;
  dVar29 = (param_2->NewLoc).field0_0x0._s_0.X;
  (this->ClientAdjustment).TimeStamp = param_2->TimeStamp;
  (this->ClientAdjustment).DeltaTime = fVar5;
  (this->ClientAdjustment).NewLoc.field0_0x0._s_0.X = dVar29;
  dVar29 = (param_2->NewLoc).field0_0x0._s_0.Z;
  (this->ClientAdjustment).NewLoc.field0_0x0._s_0.Y = (param_2->NewLoc).field0_0x0._s_0.Y;
  (this->ClientAdjustment).NewLoc.field0_0x0._s_0.Z = dVar29;
  dVar29 = (param_2->NewVel).field0_0x0._s_0.Y;
  (this->ClientAdjustment).NewVel.field0_0x0._s_0.X = (param_2->NewVel).field0_0x0._s_0.X;
  (this->ClientAdjustment).NewVel.field0_0x0._s_0.Y = dVar29;
  dVar29 = (param_2->NewRot).Pitch;
  (this->ClientAdjustment).NewVel.field0_0x0._s_0.Z = (param_2->NewVel).field0_0x0._s_0.Z;
  (this->ClientAdjustment).NewRot.Pitch = dVar29;
  dVar29 = (param_2->NewRot).Roll;
  (this->ClientAdjustment).NewRot.Yaw = (param_2->NewRot).Yaw;
  (this->ClientAdjustment).NewRot.Roll = dVar29;
  dVar29 = (param_2->GravityDirection).field0_0x0._s_0.Y;
  (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.X =
       (param_2->GravityDirection).field0_0x0._s_0.X;
  (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Y = dVar29;
  pUVar6 = param_2->NewBase;
  (this->ClientAdjustment).GravityDirection.field0_0x0._s_0.Z =
       (param_2->GravityDirection).field0_0x0._s_0.Z;
  (this->ClientAdjustment).NewBase = pUVar6;
  auVar18._0_4_ = (param_2->NewBaseBoneName).ComparisonIndex;
  auVar18._4_4_ = (param_2->NewBaseBoneName).Number;
  auVar18[8] = param_2->bAckGoodMove;
  auVar18[9] = param_2->bBaseRelativePosition;
  auVar18[10] = param_2->bBaseRelativeVelocity;
  auVar18[0xb] = param_2->MovementMode;
  auVar18._12_4_ = *(undefined4 *)&param_2->field_0x7c;
  (this->ClientAdjustment).NewBaseBoneName.ComparisonIndex = (FNameEntryId)auVar18._0_4_;
  (this->ClientAdjustment).NewBaseBoneName.Number = auVar18._4_4_;
  (this->ClientAdjustment).bAckGoodMove = (bool)auVar18[8];
  (this->ClientAdjustment).bBaseRelativePosition = (bool)auVar18[9];
  (this->ClientAdjustment).bBaseRelativeVelocity = (bool)auVar18[10];
  (this->ClientAdjustment).MovementMode = auVar18[0xb];
  *(undefined4 *)&(this->ClientAdjustment).field_0x7c = auVar18._12_4_;
  if (param_2->bAckGoodMove == false) {
    bVar7 = (bool)(**(code **)(*(longlong *)param_1 + 0x650))(param_1);
    this->bHasRotation = bVar7;
    this->bHasBase = param_2->NewBase != (UPrimitiveComponent *)0x0;
    this_00 = (param_1->CharacterOwner).field0_0x0.DebugPtr;
    if (this_00 != (ACharacter *)0x0) {
      bVar7 = ACharacter::IsPlayingNetworkedRootMotionMontage(this_00);
      this->bRootMotionMontageCorrection = bVar7;
      fVar5 = __real_bf800000;
      if (bVar7) {
        pFVar8 = ACharacter::GetRootMotionAnimMontageInstance(this_00);
        fVar5 = pFVar8->Position;
      }
      this->RootMotionTrackPosition = fVar5;
      auVar1._0_8_ = (param_2->NewRot).Pitch;
      auVar1._8_8_ = (param_2->NewRot).Yaw;
      dVar29 = (param_2->NewRot).Roll;
      auVar14 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar18 = roundpd(auVar18,auVar14,3);
      dVar23 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar19._0_8_ = auVar18._0_8_ * dVar23;
      dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar19._8_8_ = auVar18._8_8_ * dVar2;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar29;
      dVar26 = (double)auVar1._0_8_ - auVar19._0_8_;
      dVar28 = (double)auVar1._8_8_ - auVar19._8_8_;
      auVar18 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      auVar18 = roundpd(auVar19,auVar18,3);
      dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar15._8_4_ = SUB84(dVar28,0);
      auVar15._0_8_ = dVar26;
      auVar15._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      dVar29 = dVar29 - auVar18._0_8_ * dVar3;
      dVar31 = 0.0 - auVar18._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar9 = -(ulonglong)(0.0 <= dVar29);
      uVar11 = -(ulonglong)(0.0 <= dVar31);
      uVar10 = -(ulonglong)(0.0 <= dVar26);
      uVar12 = -(ulonglong)(0.0 <= dVar28);
      auVar20._0_8_ = uVar10 & (ulonglong)dVar26;
      auVar20._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar28);
      auVar20._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar28) >> 0x20);
      dVar28 = auVar15._8_8_ + dVar2;
      auVar24._0_8_ = uVar9 & (ulonglong)dVar29;
      auVar24._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar31);
      auVar24._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar31) >> 0x20);
      auVar25._0_4_ = ~(uint)uVar10 & SUB84(dVar26 + dVar23,0);
      auVar25._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar26 + dVar23) >> 0x20);
      auVar25._8_4_ = ~(uint)uVar12 & SUB84(dVar28,0);
      auVar25._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
      auVar16._8_4_ = SUB84(dVar31,0);
      auVar16._0_8_ = dVar29;
      auVar16._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar25 = auVar25 | auVar20;
      dVar28 = auVar16._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar27._0_4_ = ~(uint)uVar9 & SUB84(dVar29 + dVar3,0);
      auVar27._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar29 + dVar3) >> 0x20);
      auVar27._8_4_ = ~(uint)uVar11 & SUB84(dVar28,0);
      auVar27._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar28 >> 0x20);
      auVar27 = auVar27 | auVar24;
      uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar27._0_8_);
      lVar13 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar27._8_8_);
      uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar25._0_8_);
      uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar25._8_8_);
      auVar30._0_8_ = uVar11 & (ulonglong)(auVar25._0_8_ - dVar23);
      uVar9 = uVar12 & (ulonglong)(auVar25._8_8_ - dVar2);
      auVar30._8_4_ = (undefined4)uVar9;
      auVar30._12_4_ = (undefined4)(uVar9 >> 0x20);
      auVar17._0_4_ = ~(uint)uVar11 & auVar25._0_4_;
      auVar17._4_4_ = ~(uint)(uVar11 >> 0x20) & auVar25._4_4_;
      auVar17._8_4_ = ~(uint)uVar12 & auVar25._8_4_;
      auVar17._12_4_ = ~(uint)(uVar12 >> 0x20) & auVar25._12_4_;
      auVar30 = auVar30 | auVar17;
      auVar21._0_8_ =
           CONCAT44(~(uint)(uVar10 >> 0x20) & auVar27._4_4_,~(uint)uVar10 & auVar27._0_4_);
      auVar21._8_4_ = ~(uint)lVar13 & auVar27._8_4_;
      auVar21._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar27._12_4_;
      auVar4._4_8_ = auVar21._8_8_;
      auVar4._0_4_ = auVar30._4_4_;
      auVar22._0_8_ = auVar4._0_8_ << 0x20;
      auVar22._8_4_ = auVar30._8_4_;
      auVar22._12_4_ = auVar30._12_4_;
      dVar29 = auVar22._8_8_ * __real_3f76c16c16c16c17;
      dVar23 = (double)(uVar10 & (ulonglong)(auVar27._0_8_ - dVar3) | auVar21._0_8_) *
               __real_3f76c16c16c16c17;
      *(double *)&this->RootMotionRotation = auVar30._0_8_ * __real_3f76c16c16c16c17;
      *(double *)&(this->RootMotionRotation).field_0x8 = dVar29;
      *(double *)&(this->RootMotionRotation).field_0x10 = dVar23;
      bVar7 = FRootMotionSourceGroup::HasActiveRootMotionSources(&param_1->CurrentRootMotion);
      if (bVar7) {
        this->bRootMotionSourceCorrection = true;
      }
    }
  }
  return;
}

