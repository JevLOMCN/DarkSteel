// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 5

// StaticStruct @ 14a94aa60

UScriptStruct * __cdecl FCharacterTrajectoryData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MotionTrajectory();
    Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCharacterTrajectoryData,(UObject *)pUVar1,
                         L"CharacterTrajectoryData");
  }
  return Z_Registration_Info_UScriptStruct_FCharacterTrajectoryData.OuterSingleton;
}

// FCharacterTrajectoryData @ 14a94b130

FCharacterTrajectoryData * __thiscall
FCharacterTrajectoryData::FCharacterTrajectoryData(FCharacterTrajectoryData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->RotateTowardsMovementSpeed = 10.0;
  this->MaxControllerYawRate = 70.0;
  this->BendVelocityTowardsAcceleration = 0.0;
  this->bUseSpeedRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->SpeedRemappingCurve);
  this->bUseAccelerationRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->AccelerationRemappingCurve);
  this->ControllerYawRate = 0.0;
  this->ControllerYawRateClamped = 0.0;
  this->DesiredControllerYawLastUpdate = 0.0;
  this->MaxSpeed = 0.0;
  this->BrakingDeceleration = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->Friction = 0.0;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar1;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Facing).X = UE::Math::TQuat<double>::Identity.X;
  (this->Facing).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Facing).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Facing).W = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->MeshCompRelativeRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->MeshCompRelativeRotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->MeshCompRelativeRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->MeshCompRelativeRotation).W = dVar2;
  this->bOrientRotationToMovement = false;
  return this;
}

// ~FCharacterTrajectoryData @ 14a94b3a0

void __thiscall FCharacterTrajectoryData::~FCharacterTrajectoryData(FCharacterTrajectoryData *this)

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

// StepCharacterMovementGroundPrediction @ 14a94c3f0

TVector<double> * __thiscall
FCharacterTrajectoryData::StepCharacterMovementGroundPrediction
          (FCharacterTrajectoryData *this,TVector<double> *__return_storage_ptr__,float param_1,
          TVector<double> *param_2,TVector<double> *param_3)

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
LAB_14a94c71e:
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)uVar5;
      return __return_storage_ptr__;
    }
    fVar9 = this->Friction;
    bVar3 = this->BrakingDeceleration != 0.0;
    if ((fVar9 != 0.0) || (bVar3)) {
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
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
        dVar13 = (double)(float)((uint)this->BrakingDeceleration ^
                                __xmm_80000000800000008000000080000000);
        uVar10 = dVar13 * (double)uVar10;
        uVar14 = dVar13 * (double)uVar14;
        uVar16 = dVar13 * (double)uVar16;
      }
      dVar11 = (double)uVar7;
      dVar13 = (double)uVar6;
      dVar18 = (double)uVar1;
      if (UCharacterMovementComponent::MIN_TICK_TIME <= param_1) {
        do {
          fVar8 = param_1;
          if (((__real_3c888889 < param_1) && (fVar9 != 0.0)) &&
             (fVar8 = param_1 * __real_3f000000, __real_3c888889 <= fVar8)) {
            fVar8 = __real_3c888889;
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
          goto LAB_14a94c71e;
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
      uVar10 = (param_3->field0_0x0)._s_0.Z;
    }
    else {
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar15) {
        dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
        uVar4 = dVar13 * dVar15;
        uVar5 = dVar18 * dVar15;
        uVar10 = dVar11 * dVar15;
      }
    }
    fVar9 = param_1 * this->Friction;
    if (__real_3f800000 <= fVar9) {
      fVar9 = __real_3f800000;
    }
    dVar19 = (double)(float)SQRT((double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 +
                                 (double)uVar1 * (double)uVar1);
    dVar17 = (double)fVar9;
    dVar21 = (double)param_1;
    dVar13 = ((double)uVar6 - ((double)uVar6 - dVar19 * (double)uVar4) * dVar17) + dVar21 * dVar13;
    dVar15 = ((double)uVar7 - ((double)uVar7 - dVar19 * (double)uVar5) * dVar17) + dVar21 * dVar18;
    dVar20 = (double)this->MaxSpeed;
    dVar18 = ((double)uVar1 - ((double)uVar1 - dVar19 * (double)uVar10) * dVar17) + dVar21 * dVar11;
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

// UpdateDataFromCharacter @ 14a94cab0

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
FCharacterTrajectoryData::UpdateDataFromCharacter
          (FCharacterTrajectoryData *this,float param_1,ACharacter *param_2)

{
  double dVar1;
  UCharacterMovementComponent *this_00;
  USkeletalMeshComponent *this_01;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  TRotator<double> *this_02;
  TQuat<double> *pTVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TRotator<double> local_f8;
  TVector<double> local_e0 [2];
  TRotator<double> local_b0;
  TQuat<double> local_98;
  TQuat<double> local_78 [3];
  
  if (param_2 == (ACharacter *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<659785252444569625>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                       ,0x19,"Character");
    if (bVar4) {
code_r0x00014a94ce3a:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0.0 < param_1) {
    this_00 = (param_2->CharacterMovement).field0_0x0.DebugPtr;
    if (this_00 == (UCharacterMovementComponent *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<659785252444569658>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                         ,0x3a,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      fVar8 = (float)(**(code **)(*(longlong *)this_00 + 0x790))(this_00);
      fVar9 = (float)(**(code **)(*(longlong *)this_00 + 0x500))(this_00);
      fVar10 = UCharacterMovementComponent::GetAnalogInputModifier(this_00);
      fVar11 = fVar9 * fVar10;
      if (fVar9 * fVar10 <= fVar8) {
        fVar11 = fVar8;
      }
      this->MaxSpeed = fVar11;
      fVar11 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      this->BrakingDeceleration = fVar11;
      this->bOrientRotationToMovement = this_00->bOrientRotationToMovement;
      dVar1 = *(double *)&this_00->field_0xe0;
      (this->Velocity).field0_0x0._s_0.X = *(double *)&this_00->field_0xd8;
      (this->Velocity).field0_0x0._s_0.Y = dVar1;
      (this->Velocity).field0_0x0._s_0.Z = *(double *)&this_00->field_0xe8;
      pTVar5 = UCharacterMovementComponent::GetCurrentAcceleration(this_00,local_e0);
      dVar1 = (pTVar5->field0_0x0)._s_0.Y;
      (this->Acceleration).field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->Acceleration).field0_0x0._s_0.Y = dVar1;
      (this->Acceleration).field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      if ((((this->Acceleration).field0_0x0._s_0.X == 0.0) &&
          ((this->Acceleration).field0_0x0._s_0.Y == 0.0)) &&
         ((this->Acceleration).field0_0x0._s_0.Z == 0.0)) {
        lVar6 = 0x2a8;
        if (this_00->bUseSeparateBrakingFriction == 0) {
          lVar6 = 0x244;
        }
        fVar11 = *(float *)(&this_00->field_0x0 + lVar6);
        this->Friction = fVar11;
        fVar8 = this_00->BrakingFrictionFactor;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar8 = fVar8 * fVar11;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        this->Friction = fVar8;
      }
      else {
        this->Friction = this_00->GroundFriction;
      }
    }
    if (*(longlong **)&param_2->field_0x2f0 != (longlong *)0x0) {
      lVar6 = (**(code **)(**(longlong **)&param_2->field_0x2f0 + 0x7e8))();
      dVar3 = __real_4076800000000000;
      dVar1 = *(double *)(lVar6 + 8);
      fVar11 = this->DesiredControllerYawLastUpdate;
      this->DesiredControllerYawLastUpdate = (float)dVar1;
      dVar1 = FGenericPlatformMath::Fmod((double)((float)dVar1 - fVar11),dVar3);
      if (dVar1 < 0.0) {
        dVar1 = dVar1 + dVar3;
      }
      if (__real_4066800000000000 < dVar1) {
        dVar1 = dVar1 - dVar3;
      }
      fVar11 = this->MaxControllerYawRate;
      fVar8 = (float)((double)(__real_3f800000 / param_1) * dVar1);
      this->ControllerYawRate = fVar8;
      this->ControllerYawRateClamped = fVar8;
      if (0.0 <= fVar11) {
        fVar9 = (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if (fVar11 <= (float)((uint)fVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          fVar9 = fVar11;
        }
        if (fVar8 <= 0.0) {
          if (0.0 <= fVar8) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
          }
        }
        this->ControllerYawRateClamped = fVar9;
      }
    }
    this_01 = (param_2->Mesh).field0_0x0.DebugPtr;
    if (this_01 == (USkeletalMeshComponent *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<659785252444569686>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                         ,0x56,"false");
      if (bVar4) goto code_r0x00014a94ce3a;
    }
    else {
      dVar3 = (double)this_01->_padding_;
      dVar1 = ((__m128d *)&this_01->_padding_)->m128d_f64[0];
      (this->Position).field0_0x0._s_0.X =
           (((VectorRegister4Double *)&this_01->_padding_)->XY).m128d_f64[0];
      (this->Position).field0_0x0._s_0.Y = dVar3;
      (this->Position).field0_0x0._s_0.Z = dVar1;
      this_02 = USceneComponent::GetComponentRotation((USceneComponent *)this_01,&local_b0);
      pTVar7 = UE::Math::TRotator<double>::Quaternion(this_02,&local_98);
      dVar1 = pTVar7->Y;
      (this->Facing).X = pTVar7->X;
      (this->Facing).Y = dVar1;
      dVar1 = pTVar7->W;
      (this->Facing).Z = pTVar7->Z;
      (this->Facing).W = dVar1;
      local_f8.Pitch = ((TRotator<double> *)&this_01->_padding_)->Pitch;
      local_f8.Yaw = (double)this_01->_padding_;
      local_f8.Roll = (double)this_01->_padding_;
      pTVar7 = UE::Math::TRotator<double>::Quaternion(&local_f8,local_78);
      dVar1 = pTVar7->Y;
      (this->MeshCompRelativeRotation).X = pTVar7->X;
      (this->MeshCompRelativeRotation).Y = dVar1;
      dVar1 = pTVar7->W;
      (this->MeshCompRelativeRotation).Z = pTVar7->Z;
      (this->MeshCompRelativeRotation).W = dVar1;
    }
  }
  return;
}

