// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticStruct @ 14b4178f0

UScriptStruct * __cdecl FDS_AnimSharedData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_AnimSharedData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_AnimSharedData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_AnimSharedData,(UObject *)pUVar1,
                         L"DS_AnimSharedData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_AnimSharedData.OuterSingleton;
}

// FDS_AnimSharedData @ 14b41aca0

FDS_AnimSharedData * __thiscall FDS_AnimSharedData::FDS_AnimSharedData(FDS_AnimSharedData *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->DeadAnimState = None;
  this->LocomotionState = Default;
  this->bIsActiveInput = false;
  this->bIsInputLock = false;
  this->bIsAutoMove = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActorLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ActorRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ActorRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->RotationVelocity = 0.0;
  (this->ActorRotation).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelocityLastFrame).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelocityLastFrame).field0_0x0._s_0.Y = (double)uVar1;
  (this->VelocityLastFrame).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastNonZeroVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastNonZeroVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastNonZeroVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->VelocityAcceleration).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->VelocityAcceleration).field0_0x0._s_0.Y = (double)uVar1;
  (this->VelocityAcceleration).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalVelocity2D).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalVelocity2D).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->LocalVelocity2D_Size = 0.0;
  this->DirectionAngleFromVelocity = 0.0;
  this->CardinalDirectionFromVelocity = Forward;
  this->DisplacementSinceLastUpdate = 0.0;
  (this->LocalVelocity2D).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Acceleration).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Acceleration).field0_0x0._s_0.Y = (double)uVar1;
  (this->Acceleration).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocalAcceleration2D).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalAcceleration2D).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bHasAcceleration = false;
  (this->LocalAcceleration2D).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PivotDirection2D).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PivotDirection2D).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CardinalDirectionFromAcceleration = Forward;
  this->MoveSpeed = 0.0;
  this->MaxMoveSpeed = 0.0;
  this->MoveSpeedRatio = 0.0;
  this->bIsTrace = false;
  this->bIsResurrect = false;
  this->bIsFalling = false;
  this->bIsFlying = false;
  (this->PivotDirection2D).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// CalculateRelativeAccelerationAmount @ 14b869b70

TVector<double> * __thiscall
FDS_AnimSharedData::CalculateRelativeAccelerationAmount
          (FDS_AnimSharedData *this,TVector<double> *__return_storage_ptr__,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_2)

{
  double dVar1;
  undefined8 uVar2;
  bool bVar3;
  UObject *pUVar4;
  TTransform<double> *pTVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TVector<double>_u_0 local_108;
  TRotator<double> local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88 [3];
  
  local_res18 = param_1.WeakPtr;
  local_res20 = param_2.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_res20), bVar3)) {
    pUVar4 = FWeakObjectPtr::Get(&local_res20);
    fVar6 = (float)(**(code **)(*(longlong *)pUVar4 + 0x3b0))(pUVar4);
    if (0.0 < fVar6) {
      pUVar4 = FWeakObjectPtr::Get(&local_res20);
      fVar6 = (float)(**(code **)(*(longlong *)pUVar4 + 0x3c0))(pUVar4);
      if (0.0 < fVar6) {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        pTVar5 = (TTransform<double> *)(*(longlong *)(pUVar4 + 0xb) + 0x1f0);
        if (*(longlong *)(pUVar4 + 0xb) == 0) {
          pTVar5 = &UE::Math::TTransform<double>::Identity;
        }
        if ((this->Velocity).field0_0x0._s_0.Y * (this->Acceleration).field0_0x0._s_0.Y +
            (this->Acceleration).field0_0x0._s_0.X * (this->Velocity).field0_0x0._s_0.X +
            (this->Velocity).field0_0x0._s_0.Z * (this->Acceleration).field0_0x0._s_0.Z <= 0.0) {
          pUVar4 = FWeakObjectPtr::Get(&local_res20);
          fVar6 = (float)(**(code **)(*(longlong *)pUVar4 + 0x3c0))(pUVar4);
          local_108._s_0.Z = (this->VelocityAcceleration).field0_0x0._s_0.Z;
          local_108._s_0.X = (this->VelocityAcceleration).field0_0x0._s_0.X;
          local_108._s_0.Y = (this->VelocityAcceleration).field0_0x0._s_0.Y;
          dVar1 = (double)fVar6;
          if (__real_3f1a36e2e0000000 <= dVar1) {
            dVar10 = local_108._s_0.Y * local_108._s_0.Y + local_108._s_0.X * local_108._s_0.X +
                     local_108._s_0.Z * local_108._s_0.Z;
            if (dVar10 <= dVar1 * dVar1) {
              uVar2 = (this->VelocityAcceleration).field0_0x0._s_0.Z;
              local_c8._s_0.Z = (double)uVar2;
            }
            else {
              dVar10 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar10));
              uVar2 = dVar10 * local_108._s_0.Z;
              local_108._s_0.X = dVar10 * local_108._s_0.X;
              local_108._s_0.Y = dVar10 * local_108._s_0.Y;
            }
          }
          else {
            local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_108._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_108._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          local_88[0].X = (pTVar5->Rotation).XY.m128d_f64[0];
          local_88[0].Y = (pTVar5->Rotation).XY.m128d_f64[1];
          local_88[0].Z = (pTVar5->Rotation).ZW.m128d_f64[0];
          local_88[0].W = (pTVar5->Rotation).ZW.m128d_f64[1];
          dVar1 = __real_3ff0000000000000 / dVar1;
          UE::Math::TQuat<double>::Rotator(local_88,(TRotator<double> *)&local_c8._s_0);
          local_e8.Pitch = local_c8._s_0.X;
          local_e8.Yaw = local_c8._s_0.Y;
          local_e8.Roll = local_c8._s_0.Z;
          local_108._s_0.X = dVar1 * local_108._s_0.X;
          local_108._s_0.Y = dVar1 * local_108._s_0.Y;
          local_108._s_0.Z = dVar1 * (double)uVar2;
          UE::Math::TRotator<double>::UnrotateVector
                    (&local_e8,(TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_108._s_0)
          ;
          uVar7 = SUB84(local_a8._s_0.Z,0);
          uVar8 = (undefined4)((ulonglong)local_a8._16_8_ >> 0x20);
          (__return_storage_ptr__->field0_0x0)._s_0.X = local_a8._s_0.X;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = local_a8._s_0.Y;
        }
        else {
          pUVar4 = FWeakObjectPtr::Get(&local_res20);
          fVar6 = (float)(**(code **)(*(longlong *)pUVar4 + 0x3b0))(pUVar4);
          dVar10 = __real_3ff0000000000000;
          local_108._s_0.X = (this->VelocityAcceleration).field0_0x0._s_0.X;
          local_108._s_0.Y = (this->VelocityAcceleration).field0_0x0._s_0.Y;
          dVar1 = (double)fVar6;
          local_e8.Roll = (this->VelocityAcceleration).field0_0x0._s_0.Z;
          if (__real_3f1a36e2e0000000 <= dVar1) {
            dVar9 = local_108._s_0.Y * local_108._s_0.Y + local_108._s_0.X * local_108._s_0.X +
                    local_e8.Roll * local_e8.Roll;
            if (dVar9 <= dVar1 * dVar1) {
              uVar2 = (this->VelocityAcceleration).field0_0x0._s_0.Z;
              local_e8.Roll = (double)uVar2;
            }
            else {
              dVar1 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar9));
              local_108._s_0.X = dVar1 * local_108._s_0.X;
              local_108._s_0.Y = dVar1 * local_108._s_0.Y;
              uVar2 = dVar1 * local_e8.Roll;
            }
          }
          else {
            local_e8.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_108._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_108._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          pUVar4 = FWeakObjectPtr::Get(&local_res20);
          fVar6 = (float)(**(code **)(*(longlong *)pUVar4 + 0x3b0))(pUVar4);
          local_88[0].Z = (pTVar5->Rotation).ZW.m128d_f64[0];
          local_88[0].W = (pTVar5->Rotation).ZW.m128d_f64[1];
          dVar10 = dVar10 / (double)fVar6;
          local_88[0].X = (pTVar5->Rotation).XY.m128d_f64[0];
          local_88[0].Y = (pTVar5->Rotation).XY.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(local_88,(TRotator<double> *)&local_a8._s_0);
          local_e8.Pitch = local_a8._s_0.X;
          local_e8.Yaw = local_a8._s_0.Y;
          local_e8.Roll = local_a8._s_0.Z;
          local_108._s_0.X = dVar10 * local_108._s_0.X;
          local_108._s_0.Y = dVar10 * local_108._s_0.Y;
          local_108._s_0.Z = dVar10 * (double)uVar2;
          UE::Math::TRotator<double>::UnrotateVector
                    (&local_e8,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_108._s_0)
          ;
          uVar7 = SUB84(local_c8._s_0.Z,0);
          uVar8 = (undefined4)((ulonglong)local_c8._16_8_ >> 0x20);
          (__return_storage_ptr__->field0_0x0)._s_0.X = local_c8._s_0.X;
          (__return_storage_ptr__->field0_0x0)._s_0.Y = local_c8._s_0.Y;
        }
        (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar8,uVar7);
        return __return_storage_ptr__;
      }
    }
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetLeanAmount @ 14b877cb0

TVector2<double> * __thiscall
FDS_AnimSharedData::GetLeanAmount
          (FDS_AnimSharedData *this,TVector2<double> *__return_storage_ptr__,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> param_2)

{
  double dVar1;
  TVector<double> local_28;
  
  CalculateRelativeAccelerationAmount(this,&local_28,param_1,param_2);
  dVar1 = UKismetMathLibrary::MapRangeClamped
                    ((double)this->MoveSpeed,__real_4069000000000000,__real_407f400000000000,
                     __real_3fe0000000000000,__real_3ff0000000000000);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * local_28.field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// IsMoving @ 14b87db20

bool __thiscall FDS_AnimSharedData::IsMoving(FDS_AnimSharedData *this)

{
  return this->bHasAcceleration;
}

// IsMovingAccelerating @ 14b87dd20

bool __thiscall FDS_AnimSharedData::IsMovingAccelerating(FDS_AnimSharedData *this)

{
  return this->bHasAcceleration;
}

// IsMovingDecelerating @ 14b87dd50

bool __thiscall FDS_AnimSharedData::IsMovingDecelerating(FDS_AnimSharedData *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(this->Velocity).field0_0x0;
  if (((((double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3fb99999a0000000) &&
       (uVar1 = *(undefined8 *)((longlong)&(this->Velocity).field0_0x0 + 8),
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3fb99999a0000000)) &&
      (uVar1 = *(undefined8 *)((longlong)&(this->Velocity).field0_0x0 + 0x10),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3fb99999a0000000)) && (this->bHasAcceleration == false)) {
    return true;
  }
  return false;
}

