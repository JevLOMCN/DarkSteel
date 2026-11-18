// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// ~FPoseSearchTrajectoryData @ 14a8adb90

void __thiscall
FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData(FPoseSearchTrajectoryData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->AccelerationRemappingCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AccelerationRemappingCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->AccelerationRemappingCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->AccelerationRemappingCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->AccelerationRemappingCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AccelerationRemappingCurve).EditorCurveData._padding_);
  pFVar1 = (this->SpeedRemappingCurve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SpeedRemappingCurve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->SpeedRemappingCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SpeedRemappingCurve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->SpeedRemappingCurve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SpeedRemappingCurve).EditorCurveData._padding_);
  return;
}

// operator= @ 14a8af210

FPoseSearchTrajectoryData * __thiscall
FPoseSearchTrajectoryData::operator=
          (FPoseSearchTrajectoryData *this,FPoseSearchTrajectoryData *param_1)

{
  this->RotateTowardsMovementSpeed = param_1->RotateTowardsMovementSpeed;
  this->MaxControllerYawRate = param_1->MaxControllerYawRate;
  this->BendVelocityTowardsAcceleration = param_1->BendVelocityTowardsAcceleration;
  this->bUseSpeedRemappingCurve = param_1->bUseSpeedRemappingCurve;
  FRuntimeFloatCurve::operator=(&this->SpeedRemappingCurve,&param_1->SpeedRemappingCurve);
  this->bUseAccelerationRemappingCurve = param_1->bUseAccelerationRemappingCurve;
  FRuntimeFloatCurve::operator=
            (&this->AccelerationRemappingCurve,&param_1->AccelerationRemappingCurve);
  return this;
}

// StaticStruct @ 14a90c8e0

UScriptStruct * __cdecl FPoseSearchTrajectoryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchTrajectoryData,(UObject *)pUVar1,
                         L"PoseSearchTrajectoryData");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectoryData.OuterSingleton;
}

// StepCharacterMovementGroundPrediction @ 14a93eeb0

TVector<double> * __thiscall
FPoseSearchTrajectoryData::StepCharacterMovementGroundPrediction
          (FPoseSearchTrajectoryData *this,TVector<double> *__return_storage_ptr__,float param_1,
          TVector<double> *param_2,TVector<double> *param_3,FDerived *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  undefined4 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  float fVar23;
  
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar2 = *(undefined1 (*) [16])&param_2->field0_0x0;
  uVar6 = auVar2._0_8_;
  uVar22 = auVar2._8_4_;
  uVar12 = auVar2._12_4_;
  uVar7 = auVar2._8_8_;
  uVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar13 = (param_3->field0_0x0)._s_0.X;
  if (((dVar13 == 0.0) && ((param_3->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_3->field0_0x0)._s_0.Z == 0.0)) {
    if ((((param_2->field0_0x0)._s_0.X == 0.0) && ((param_2->field0_0x0)._s_0.Y == 0.0)) &&
       ((param_2->field0_0x0)._s_0.Z == 0.0)) {
LAB_14a93f21c:
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar5;
      return __return_storage_ptr__;
    }
    fVar9 = param_4->Friction;
    bVar3 = param_4->BrakingDeceleration != 0.0;
    if ((fVar9 != 0.0) || (bVar3)) {
      fVar23 = param_4->BrakingSubStepTime;
      if (__real_3d4ccccd <= param_4->BrakingSubStepTime) {
        fVar23 = __real_3d4ccccd;
      }
      if (fVar23 <= __real_3c5a740e) {
        fVar23 = __real_3c5a740e;
      }
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if (bVar3) {
        dVar13 = (double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 +
                 (double)uVar1 * (double)uVar1;
        uVar14 = uVar7;
        uVar16 = uVar6;
        uVar10 = uVar1;
        if ((dVar13 != __real_3ff0000000000000) &&
           (uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
           uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
           uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
           __real_3e45798ee0000000 <= dVar13)) {
          dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
          uVar14 = (double)uVar7 * dVar13;
          uVar16 = dVar13 * (double)uVar6;
          uVar10 = (double)uVar1 * dVar13;
        }
        dVar13 = (double)(float)((uint)param_4->BrakingDeceleration ^
                                __xmm_80000000800000008000000080000000);
        uVar14 = dVar13 * (double)uVar14;
        uVar10 = dVar13 * (double)uVar10;
        uVar16 = dVar13 * (double)uVar16;
      }
      dVar11 = (double)uVar7;
      dVar13 = (double)uVar6;
      dVar18 = (double)uVar1;
      if (UCharacterMovementComponent::MIN_TICK_TIME <= param_1) {
        do {
          fVar8 = param_1;
          if (((fVar23 < param_1) && (fVar9 != 0.0)) &&
             (fVar8 = param_1 * __real_3f000000, fVar23 <= param_1 * __real_3f000000)) {
            fVar8 = fVar23;
          }
          param_1 = param_1 - fVar8;
          dVar17 = (double)(float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
          dVar15 = (double)fVar8;
          dVar13 = dVar13 + (dVar17 * dVar13 + (double)uVar16) * dVar15;
          dVar11 = (dVar17 * dVar11 + (double)uVar14) * dVar15 + dVar11;
          dVar18 = (dVar17 * dVar18 + (double)uVar10) * dVar15 + dVar18;
          uVar22 = SUB84(dVar11,0);
          uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
          if ((double)uVar7 * dVar11 + (double)uVar6 * dVar13 + (double)uVar1 * dVar18 <= 0.0)
          goto LAB_14a93f21c;
        } while (UCharacterMovementComponent::MIN_TICK_TIME <= param_1);
      }
      fVar9 = (float)(dVar11 * dVar11 + dVar13 * dVar13 + dVar18 * dVar18);
      if ((fVar9 <= __real_38d1b717) ||
         ((uVar6 = dVar13, uVar7 = CONCAT44(uVar12,uVar22), uVar1 = dVar18, bVar3 &&
          (uVar7 = CONCAT44(uVar12,uVar22),
          fVar9 <= UCharacterMovementComponent::BRAKE_TO_STOP_VELOCITY *
                   UCharacterMovementComponent::BRAKE_TO_STOP_VELOCITY)))) {
        uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
  }
  else {
    dVar18 = (param_3->field0_0x0)._s_0.Y;
    dVar11 = (param_3->field0_0x0)._s_0.Z;
    dVar15 = dVar13 * dVar13 + dVar18 * dVar18 + dVar11 * dVar11;
    if (dVar15 == __real_3ff0000000000000) {
      uVar4 = (param_3->field0_0x0)._s_0.X;
      uVar5 = (param_3->field0_0x0)._s_0.Y;
      uVar14 = (param_3->field0_0x0)._s_0.Z;
    }
    else {
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
        uVar4 = dVar13 * dVar15;
        uVar5 = dVar18 * dVar15;
        uVar14 = dVar11 * dVar15;
      }
    }
    fVar9 = param_1 * param_4->Friction;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    dVar19 = (double)(float)SQRT((double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 +
                                 (double)uVar1 * (double)uVar1);
    dVar17 = (double)fVar9;
    dVar21 = (double)param_1;
    dVar13 = ((double)uVar6 - ((double)uVar6 - dVar19 * (double)uVar4) * dVar17) + dVar21 * dVar13;
    dVar15 = ((double)uVar7 - ((double)uVar7 - dVar19 * (double)uVar5) * dVar17) + dVar21 * dVar18;
    dVar20 = (double)param_4->MaxSpeed;
    dVar18 = ((double)uVar1 - ((double)uVar1 - dVar19 * (double)uVar14) * dVar17) + dVar21 * dVar11;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if ((__real_3f1a36e2e0000000 <= dVar20) &&
       (dVar11 = dVar13 * dVar13 + dVar15 * dVar15 + dVar18 * dVar18, uVar6 = dVar13, uVar7 = dVar15
       , uVar1 = dVar18, dVar20 * dVar20 < dVar11)) {
      dVar20 = (__real_3ff0000000000000 / SQRT(dVar11)) * dVar20;
      uVar6 = dVar13 * dVar20;
      uVar7 = dVar20 * dVar15;
      uVar1 = dVar20 * dVar18;
    }
  }
  auVar2._8_4_ = (int)uVar7;
  auVar2._0_8_ = uVar6;
  auVar2._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar1;
  return __return_storage_ptr__;
}

// UpdateData @ 14a942bf0

bool __thiscall
FPoseSearchTrajectoryData::UpdateData
          (FPoseSearchTrajectoryData *this,float param_1,FAnimInstanceProxy *param_2,
          FDerived *param_3,FState *param_4)

{
  bool bVar1;
  
  bVar1 = UpdateData(this,param_1,param_2->AnimInstanceObject,param_3,param_4);
  return bVar1;
}

// UpdateData @ 14a942c10

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
FPoseSearchTrajectoryData::UpdateData
          (FPoseSearchTrajectoryData *this,float param_1,UObject *param_2,FDerived *param_3,
          FState *param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  UCharacterMovementComponent *this_00;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  char cVar19;
  bool bVar20;
  UClass *pUVar21;
  TVector<double> *pTVar22;
  float *pfVar23;
  longlong lVar24;
  TQuat<double> *pTVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78 [3];
  
  if (param_2 != (UObject *)0x0) {
    pUVar21 = Z_Construct_UClass_ACharacter_NoRegister();
    lVar3 = *(longlong *)&param_2->field_0x10;
    iVar2 = (int)pUVar21->_padding_;
    if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar21->_padding_)) goto LAB_14a942d10;
  }
  if (param_2 == (UObject *)0x0) {
    return false;
  }
  pUVar21 = Z_Construct_UClass_UAnimInstance_NoRegister();
  lVar3 = *(longlong *)&param_2->field_0x10;
  iVar2 = (int)pUVar21->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar21->_padding_)) {
    if (param_2 == (UObject *)0x0) {
      return false;
    }
    pUVar21 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar2 = (int)pUVar21->_padding_;
    if (*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar2) {
      return false;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar21->_padding_) {
      return false;
    }
    param_2 = *(UObject **)&param_2[4].field_0x8;
  }
  else {
    param_2 = (UObject *)UAnimInstance::GetOwningActor((UAnimInstance *)param_2);
  }
  if ((AActor *)param_2 == (AActor *)0x0) {
LAB_14a942d05:
    param_2 = (UObject *)0x0;
  }
  else {
    pUVar21 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar2 = (int)pUVar21->_padding_;
    if ((*(int *)(((AActor *)param_2)->_padding_ + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(((AActor *)param_2)->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar21->_padding_)) goto LAB_14a942d05;
  }
  if ((AActor *)param_2 == (AActor *)0x0) {
    return false;
  }
LAB_14a942d10:
  this_00 = *(UCharacterMovementComponent **)
             &(((AActor *)((longlong)param_2 + 0x2c0))->AttachmentReplication).LocationOffset.
              field_0x10;
  lVar3 = *(longlong *)
           &(((AActor *)((longlong)param_2 + 0x2c0))->AttachmentReplication).LocationOffset.
            field_0x8;
  if ((this_00 != (UCharacterMovementComponent *)0x0) && (lVar3 != 0)) {
    fVar26 = (float)(**(code **)(*(longlong *)this_00 + 0x790))(this_00);
    fVar27 = (float)(**(code **)(*(longlong *)this_00 + 0x500))(this_00);
    fVar28 = UCharacterMovementComponent::GetAnalogInputModifier(this_00);
    fVar29 = fVar27 * fVar28;
    if (fVar27 * fVar28 <= fVar26) {
      fVar29 = fVar26;
    }
    param_3->MaxSpeed = fVar29;
    fVar29 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    param_3->BrakingDeceleration = fVar29;
    param_3->BrakingSubStepTime = this_00->BrakingSubStepTime;
    param_3->bOrientRotationToMovement = this_00->bOrientRotationToMovement;
    dVar1 = *(double *)&this_00->field_0xe0;
    (param_3->Velocity).field0_0x0._s_0.X = *(double *)&this_00->field_0xd8;
    (param_3->Velocity).field0_0x0._s_0.Y = dVar1;
    (param_3->Velocity).field0_0x0._s_0.Z = *(double *)&this_00->field_0xe8;
    pTVar22 = UCharacterMovementComponent::GetCurrentAcceleration
                        (this_00,(TVector<double> *)&local_98._s_0);
    uVar9 = *(undefined4 *)((longlong)&pTVar22->field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&pTVar22->field0_0x0 + 8);
    uVar11 = *(undefined4 *)((longlong)&pTVar22->field0_0x0 + 0xc);
    *(undefined4 *)&(param_3->Acceleration).field0_0x0 = *(undefined4 *)&pTVar22->field0_0x0;
    *(undefined4 *)((longlong)&(param_3->Acceleration).field0_0x0 + 4) = uVar9;
    *(undefined4 *)((longlong)&(param_3->Acceleration).field0_0x0 + 8) = uVar10;
    *(undefined4 *)((longlong)&(param_3->Acceleration).field0_0x0 + 0xc) = uVar11;
    (param_3->Acceleration).field0_0x0._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
    cVar19 = (**(code **)(*(longlong *)&this_00->field_0x128 + 0xd8))(&this_00->field_0x128);
    if ((cVar19 == '\0') &&
       (cVar19 = (**(code **)(*(longlong *)&this_00->field_0x128 + 0xf0))(&this_00->field_0x128),
       cVar19 == '\0')) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
    param_3->bStepGroundPrediction = bVar20;
    if ((((param_3->Acceleration).field0_0x0._s_0.X == 0.0) &&
        ((param_3->Acceleration).field0_0x0._s_0.Y == 0.0)) &&
       ((param_3->Acceleration).field0_0x0._s_0.Z == 0.0)) {
      pfVar23 = &this_00->BrakingFriction;
      if (this_00->bUseSeparateBrakingFriction == 0) {
        pfVar23 = &this_00->GroundFriction;
      }
      fVar26 = *pfVar23;
      param_3->Friction = fVar26;
      fVar29 = this_00->BrakingFrictionFactor;
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar29 = fVar29 * fVar26;
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
    }
    else {
      fVar29 = this_00->GroundFriction;
    }
    param_3->Friction = fVar29;
    lVar24 = (**(code **)(((AActor *)param_2)->_padding_ + 0x830))(param_2,&local_98);
    fVar26 = __real_322bcc77;
    dVar1 = *(double *)(lVar24 + 8);
    fVar29 = param_4->DesiredControllerYawLastUpdate;
    param_4->DesiredControllerYawLastUpdate = (float)dVar1;
    if (fVar26 < param_1) {
      dVar1 = UE::Math::TRotator<double>::NormalizeAxis((double)((float)dVar1 - fVar29));
      fVar26 = (float)(dVar1 / (double)param_1);
      param_3->ControllerYawRate = fVar26;
      fVar29 = this->MaxControllerYawRate;
      if (0.0 <= fVar29) {
        fVar27 = (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if (fVar29 <= (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar27 = fVar29;
        }
        fVar29 = __real_3f800000;
        if ((fVar26 <= 0.0) && (fVar29 = 0.0, fVar26 < 0.0)) {
          fVar29 = __real_bf800000;
        }
        param_3->ControllerYawRate = fVar29 * fVar27;
      }
    }
    dVar5 = *(double *)(lVar3 + 0x218);
    dVar1 = *(double *)(lVar3 + 0x220);
    (param_3->Position).field0_0x0._s_0.X = *(double *)(lVar3 + 0x210);
    (param_3->Position).field0_0x0._s_0.Y = dVar5;
    (param_3->Position).field0_0x0._s_0.Z = dVar1;
    local_98._s_0.X = *(double *)(lVar3 + 0x160);
    local_98._s_0.Y = *(double *)(lVar3 + 0x168);
    local_98._s_0.Z = *(double *)(lVar3 + 0x170);
    pTVar25 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_98._s_0,local_78);
    bVar20 = param_3->bOrientRotationToMovement;
    dVar1 = pTVar25->Y;
    (param_3->MeshCompRelativeRotation).X = pTVar25->X;
    (param_3->MeshCompRelativeRotation).Y = dVar1;
    dVar1 = pTVar25->W;
    (param_3->MeshCompRelativeRotation).Z = pTVar25->Z;
    (param_3->MeshCompRelativeRotation).W = dVar1;
    if (bVar20 == false) {
      local_98._s_0.Y = (double)param_4->DesiredControllerYawLastUpdate;
      local_98._s_0.X = 0.0;
      local_98._s_0.Z = 0.0;
      pTVar25 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)&local_98._s_0,local_78);
      dVar8 = (param_3->MeshCompRelativeRotation).Z;
      dVar12 = (param_3->MeshCompRelativeRotation).W;
      dVar13 = (param_3->MeshCompRelativeRotation).X;
      dVar14 = (param_3->MeshCompRelativeRotation).Y;
      dVar15 = pTVar25->X;
      dVar16 = pTVar25->Y;
      dVar17 = pTVar25->Z;
      dVar18 = pTVar25->W;
      dVar1 = dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
              dVar8 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar13 * dVar18;
      dVar5 = dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
              dVar12 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar15 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar14 * dVar18;
      dVar7 = dVar17 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
              dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar8 * dVar18;
      dVar8 = dVar17 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
              dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar12 * dVar18;
      auVar4._8_4_ = SUB84(dVar5,0);
      auVar4._0_8_ = dVar1;
      auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      (param_3->Facing).X = dVar1;
      (param_3->Facing).Y = (double)auVar4._8_8_;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      (param_3->Facing).Z = dVar7;
      (param_3->Facing).W = (double)auVar6._8_8_;
    }
    else {
      dVar1 = *(double *)(lVar3 + 0x1f8);
      dVar5 = *(double *)(lVar3 + 0x200);
      dVar7 = *(double *)(lVar3 + 0x208);
      (param_3->Facing).X = *(double *)(lVar3 + 0x1f0);
      (param_3->Facing).Y = dVar1;
      (param_3->Facing).Z = dVar5;
      (param_3->Facing).W = dVar7;
    }
    return true;
  }
  return false;
}

