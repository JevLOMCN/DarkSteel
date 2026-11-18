// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 95

// AdjustFloorHeight @ 1476ed450

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
FCharacterMovementComponentAsyncInput::AdjustFloorHeight
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  float *pfVar1;
  FFindFloorResult *this_00;
  code *pcVar2;
  char cVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  TVector<double,3> *pTVar5;
  TQuat<double> *pTVar6;
  TVector<double> *pTVar7;
  byte bVar8;
  FSingleParticlePhysicsProxy *this_01;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  TVector<double>_u_0 local_188;
  undefined4 uStack_170;
  undefined1 uStack_16c;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  undefined1 local_168 [164];
  int local_c4;
  byte local_bb;
  FWeakObjectPtr local_b0;
  FWeakObjectPtr FStack_a8;
  IActorInstanceManagerInterface *local_a0;
  undefined8 uStack_98;
  TQuat<double> local_68 [3];
  
  fVar9 = UCharacterMovementComponent::MAX_FLOOR_DIST;
  fVar10 = UCharacterMovementComponent::MIN_FLOOR_DIST;
  this_00 = &param_1->CurrentFloor;
  if (this_00->bBlockingHit != 1 || this_00->bWalkableFloor != 1) {
    return;
  }
  fVar11 = (param_1->CurrentFloor).FloorDist;
  if (this_00->bLineTrace != 0) {
    if ((fVar11 < UCharacterMovementComponent::MIN_FLOOR_DIST) &&
       (pfVar1 = &(param_1->CurrentFloor).LineDist,
       UCharacterMovementComponent::MIN_FLOOR_DIST < *pfVar1 ||
       UCharacterMovementComponent::MIN_FLOOR_DIST == *pfVar1)) {
      return;
    }
    fVar11 = (param_1->CurrentFloor).LineDist;
  }
  if ((UCharacterMovementComponent::MIN_FLOOR_DIST <= fVar11) &&
     (fVar11 <= UCharacterMovementComponent::MAX_FLOOR_DIST)) {
    return;
  }
  memset(local_168,0,0x100);
  uStack_16b = 0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  FStack_a8.ObjectIndex = 0;
  FStack_a8.ObjectSerialNumber = 0;
  uStack_169 = 0;
  local_188._s_0.Z = 0.0;
  uStack_16c = 0;
  uStack_170 = 0xffffffff;
  uStack_98._0_4_ = -1;
  uStack_98._4_1_ = Invalid;
  uStack_98._5_3_ = 0;
  local_c4 = -1;
  local_168._4_4_ = 1.0;
  local_a0 = (IActorInstanceManagerInterface *)0x0;
  this_01 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (this_01 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = this_01;
    if (this_01->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar4 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar4 != (FSingleParticlePhysicsProxy *)0x0) {
      if (this_01->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_01 = (FSingleParticlePhysicsProxy *)0x0;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_01);
      pTVar5 = Chaos::TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_01->Handle->_padding_,
                          (int)this_01->Handle->_padding_);
      local_188._s_0.X = (double)*(undefined8 *)pTVar5;
      local_188._s_0.Y = (double)*(undefined8 *)&pTVar5->field_0x8;
      local_188._s_0.Z = (double)*(undefined8 *)&pTVar5->field_0x10;
      fVar9 = UCharacterMovementComponent::MAX_FLOOR_DIST;
      fVar10 = UCharacterMovementComponent::MIN_FLOOR_DIST;
      goto LAB_1476ed5be;
    }
  }
  local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_1476ed5be:
  fVar12 = (float)local_188._s_0.Z;
  pcVar2 = *(code **)(this->_padding_ + 0xb0);
  fVar10 = (fVar9 + fVar10) * __real_3f000000 - fVar11;
  pTVar6 = FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,local_68);
  local_188._s_0.X = 0.0;
  local_188._s_0.Y = 0.0;
  local_188._s_0.Z = (double)fVar10;
  (*pcVar2)(this,&local_188,pTVar6,1,local_168,param_1,0);
  if (((local_bb & 1) == 0) || ((local_bb & 2) != 0)) {
    (param_1->CurrentFloor).FloorDist = fVar10 + (param_1->CurrentFloor).FloorDist;
  }
  else {
    pTVar7 = FUpdatedComponentAsyncInput::GetPosition
                       ((this->UpdatedComponentInput).Ptr,(TVector<double> *)&local_188._s_0);
    fVar9 = (float)(pTVar7->field0_0x0)._s_0.Z;
    if (fVar10 <= 0.0) {
      (param_1->CurrentFloor).FloorDist = (float)((double)fVar9 - (double)local_168._32_8_);
      cVar3 = (**(code **)(this->_padding_ + 0xf8))(this,local_168);
      if (cVar3 != '\0') {
        FFindFloorResult::SetFromSweep
                  (this_00,(FHitResult *)local_168,(param_1->CurrentFloor).FloorDist,true);
      }
    }
    else {
      (param_1->CurrentFloor).FloorDist = (fVar9 - fVar12) + (param_1->CurrentFloor).FloorDist;
    }
  }
  if ((this->bMaintainHorizontalGroundVelocity == false) || (fVar11 < 0.0)) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  param_1->bJustTeleported = (bool)(param_1->bJustTeleported | bVar8);
  if (((this->CharacterInput).Ptr)->LocalRole != ROLE_SimulatedProxy) {
    param_1->bForceNextFloorCheck = true;
  }
  return;
}

// ApplyAccumulatedForces @ 1476ee1a0

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
FCharacterMovementComponentAsyncInput::ApplyAccumulatedForces
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  char cVar9;
  
  if (((param_2->PendingImpulseToApply).field0_0x0._s_0.Z != 0.0) ||
     ((param_2->PendingForceToApply).field0_0x0._s_0.Z != 0.0)) {
    cVar9 = (**(code **)(this->_padding_ + 0x278))(0,param_2);
    if (cVar9 != '\0') {
      if (__real_3e45798ee0000000 <
          (double)param_1 * (param_2->PendingForceToApply).field0_0x0._s_0.Z +
          (param_2->PendingImpulseToApply).field0_0x0._s_0.Z + (double)(param_1 * this->GravityZ)) {
        (**(code **)(this->_padding_ + 200))(this,3,param_2,0);
      }
    }
  }
  dVar7 = (double)param_1;
  dVar1 = (param_2->PendingForceToApply).field0_0x0._s_0.Z;
  dVar2 = (param_2->PendingForceToApply).field0_0x0._s_0.Y;
  dVar3 = (param_2->PendingImpulseToApply).field0_0x0._s_0.Z;
  dVar4 = (param_2->PendingImpulseToApply).field0_0x0._s_0.Y;
  dVar5 = (param_2->Velocity).field0_0x0._s_0.Z;
  dVar6 = (param_2->Velocity).field0_0x0._s_0.Y;
  (param_2->Velocity).field0_0x0._s_0.X =
       dVar7 * (param_2->PendingForceToApply).field0_0x0._s_0.X +
       (param_2->PendingImpulseToApply).field0_0x0._s_0.X + (param_2->Velocity).field0_0x0._s_0.X;
  (param_2->Velocity).field0_0x0._s_0.Z = dVar7 * dVar1 + dVar3 + dVar5;
  (param_2->Velocity).field0_0x0._s_0.Y = dVar7 * dVar2 + dVar4 + dVar6;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->PendingImpulseToApply).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->PendingImpulseToApply).field0_0x0._s_0.Y = (double)uVar8;
  (param_2->PendingImpulseToApply).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->PendingForceToApply).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->PendingForceToApply).field0_0x0._s_0.Y = (double)uVar8;
  (param_2->PendingForceToApply).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ApplyRequestedMove @ 1476ef0a0

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
FCharacterMovementComponentAsyncInput::ApplyRequestedMove
          (FCharacterMovementComponentAsyncInput *this,float param_1,float param_2,float param_3,
          float param_4,float param_5,TVector<double> *param_6,float *param_7,
          FCharacterMovementComponentAsyncOutput *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  TVector<double> *pTVar14;
  float fVar15;
  double dVar16;
  undefined4 in_XMM3_Db;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  TVector<double>_u_0 local_d8;
  TVector<double> local_c0 [7];
  
  uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  dVar12 = __real_3ff0000000000000;
  if (param_8->bHasRequestedVelocity != false) {
    dVar1 = (param_8->RequestedVelocity).field0_0x0._s_0.X;
    dVar2 = (param_8->RequestedVelocity).field0_0x0._s_0.Y;
    dVar3 = (param_8->RequestedVelocity).field0_0x0._s_0.Z;
    fVar15 = (float)(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
    if (__real_38d1b717 <= fVar15) {
      fVar15 = SQRT(fVar15);
      dVar8 = __real_3ff0000000000000 / (double)fVar15;
      fVar23 = param_3;
      if ((param_8->bRequestedMoveWithMaxSpeed == false) &&
         (fVar23 = fVar15, in_XMM3_Db = 0, param_3 <= fVar15)) {
        fVar23 = param_3;
      }
      dVar17 = (param_8->Velocity).field0_0x0._s_0.Z;
      uVar24 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar25 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      dVar9 = (double)fVar23;
      dVar16 = (param_8->Velocity).field0_0x0._s_0.X;
      dVar4 = (param_8->Velocity).field0_0x0._s_0.Y;
      dVar10 = dVar9 * dVar8 * dVar1;
      dVar11 = dVar9 * dVar8 * dVar2;
      dVar9 = dVar9 * dVar8 * dVar3;
      local_d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      cVar13 = (**(code **)(this->_padding_ + 0x120))(dVar4,CONCAT44(in_XMM3_Db,fVar23),param_8);
      if (cVar13 == '\0') {
        (param_8->Velocity).field0_0x0._s_0.X = dVar10;
        (param_8->Velocity).field0_0x0._s_0.Y = dVar11;
        (param_8->Velocity).field0_0x0._s_0.Z = dVar9;
      }
      else {
        dVar18 = (param_8->Velocity).field0_0x0._s_0.Y;
        dVar5 = (param_8->Velocity).field0_0x0._s_0.X;
        dVar6 = (param_8->Velocity).field0_0x0._s_0.Z;
        dVar17 = (double)SQRT((float)(dVar4 * dVar4 + dVar16 * dVar16 + dVar17 * dVar17));
        fVar15 = param_1 * param_4;
        if (__real_3f800000 <= param_1 * param_4) {
          fVar15 = __real_3f800000;
        }
        dVar16 = (double)fVar15;
        dVar18 = dVar18 - (dVar18 - dVar17 * dVar8 * dVar2) * dVar16;
        dVar6 = dVar6 - (dVar6 - dVar17 * dVar8 * dVar3) * dVar16;
        (param_8->Velocity).field0_0x0._s_0.X = dVar5 - (dVar5 - dVar17 * dVar8 * dVar1) * dVar16;
        (param_8->Velocity).field0_0x0._s_0.Y = dVar18;
        (param_8->Velocity).field0_0x0._s_0.Z = dVar6;
        dVar12 = dVar12 / (double)param_1;
        local_d8._s_0.X = (dVar10 - (param_8->Velocity).field0_0x0._s_0.X) * dVar12;
        local_d8._s_0.Y = (dVar11 - dVar18) * dVar12;
        local_d8._s_0.Z = (dVar9 - dVar6) * dVar12;
        pTVar14 = UE::Math::TVector<double>::GetClampedToMaxSize
                            ((TVector<double> *)&local_d8._s_0,local_c0,(double)param_2);
        uVar19 = *(undefined4 *)&pTVar14->field0_0x0;
        uVar20 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 4);
        uVar21 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 8);
        uVar22 = *(undefined4 *)((longlong)&pTVar14->field0_0x0 + 0xc);
        uVar7 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 0x10);
        uVar24 = (undefined4)uVar7;
        uVar25 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      *param_7 = fVar23;
      *(undefined4 *)&param_6->field0_0x0 = uVar19;
      *(undefined4 *)((longlong)&param_6->field0_0x0 + 4) = uVar20;
      *(undefined4 *)((longlong)&param_6->field0_0x0 + 8) = uVar21;
      *(undefined4 *)((longlong)&param_6->field0_0x0 + 0xc) = uVar22;
      (param_6->field0_0x0)._s_0.Z = (double)CONCAT44(uVar25,uVar24);
      return true;
    }
  }
  return false;
}

// ApplyRootMotionToVelocity @ 1476ef730

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
FCharacterMovementComponentAsyncInput::ApplyRootMotionToVelocity
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  TVector<double> *this_00;
  undefined8 uVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TConsoleVariableData<int> *pTVar6;
  char cVar7;
  bool bVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  FString local_68;
  FString local_58;
  double local_48;
  double dStack_40;
  double local_38;
  
  if (((this->RootMotion).bHasAnimRootMotion == false) || (param_1 <= 0.0)) {
    bVar5 = false;
    this_00 = &param_2->Velocity;
    local_48 = (this_00->field0_0x0)._s_0.X;
    dStack_40 = (param_2->Velocity).field0_0x0._s_0.Y;
    local_38 = (param_2->Velocity).field0_0x0._s_0.Z;
    if ((this->RootMotion).bHasOverrideRootMotion != false) {
      dVar2 = (this->RootMotion).OverrideVelocity.field0_0x0._s_0.Y;
      bVar5 = true;
      (this_00->field0_0x0)._s_0.X = (this->RootMotion).OverrideVelocity.field0_0x0._s_0.X;
      (param_2->Velocity).field0_0x0._s_0.Y = dVar2;
      (param_2->Velocity).field0_0x0._s_0.Z = (this->RootMotion).OverrideVelocity.field0_0x0._s_0.Z;
      pTVar6 = RootMotionSourceDebug::CVarDebugRootMotionSources.Ref;
      bVar8 = IsInParallelGameThread();
      if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pTVar6->ShadowedValue[0] == 1) {
        UE::Math::TVector<double>::ToCompactString(this_00,&local_68);
        ::FString::PrintfImpl
                  (&local_58,L"ApplyRootMotionToVelocity HasOverrideVelocity Velocity(%s)");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((this->RootMotion).bHasAdditiveRootMotion == false) {
      dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
      if (!bVar5) {
        return;
      }
    }
    else {
      dVar4 = (param_2->Velocity).field0_0x0._s_0.Y;
      dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
      (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.X = (this_00->field0_0x0)._s_0.X;
      (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Y = dVar4;
      (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Z = dVar2;
      (this_00->field0_0x0)._s_0.X =
           (this->RootMotion).AdditiveVelocity.field0_0x0._s_0.X + (this_00->field0_0x0)._s_0.X;
      (param_2->Velocity).field0_0x0._s_0.Y =
           (this->RootMotion).AdditiveVelocity.field0_0x0._s_0.Y +
           (param_2->Velocity).field0_0x0._s_0.Y;
      dVar2 = (this->RootMotion).AdditiveVelocity.field0_0x0._s_0.Z +
              (param_2->Velocity).field0_0x0._s_0.Z;
      (param_2->Velocity).field0_0x0._s_0.Z = dVar2;
      param_2->bIsAdditiveVelocityApplied = true;
    }
    dVar2 = dVar2 - local_38;
    if ((dVar2 != 0.0) &&
       (cVar7 = (**(code **)(this->_padding_ + 0x278))(this,param_2), cVar7 != '\0')) {
      fVar10 = __real_322bcc77;
      if (((this->RootMotion).bUseSensitiveLiftoff == false) &&
         (fVar10 = param_1 * this->GravityZ, fVar10 <= __real_322bcc77)) {
        fVar10 = __real_322bcc77;
      }
      if ((double)fVar10 < dVar2) {
        (**(code **)(this->_padding_ + 200))(this,3,param_2,0);
      }
    }
  }
  else {
    dVar2 = (param_2->AnimRootMotionVelocity).field0_0x0._s_0.X;
    dVar4 = (param_2->AnimRootMotionVelocity).field0_0x0._s_0.Y;
    uVar1 = *(undefined8 *)((longlong)&(param_2->AnimRootMotionVelocity).field0_0x0 + 0x10);
    uVar9 = (undefined4)uVar1;
    uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
    cVar7 = (**(code **)(this->_padding_ + 0x268))(0,param_2);
    if (cVar7 != '\0') {
      uVar1 = *(undefined8 *)((longlong)&(param_2->Velocity).field0_0x0 + 0x10);
      uVar9 = (undefined4)uVar1;
      uVar11 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    (param_2->Velocity).field0_0x0._s_0.X = dVar2;
    (param_2->Velocity).field0_0x0._s_0.Y = dVar4;
    (param_2->Velocity).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar9);
  }
  return;
}

// ApplyVelocityBraking @ 1476efa90

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
FCharacterMovementComponentAsyncInput::ApplyVelocityBraking
          (FCharacterMovementComponentAsyncInput *this,float param_1,float param_2,float param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  TVector<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  uint uVar9;
  TVector<double> *pTVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  TVector<double> local_c8 [8];
  
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  fVar13 = UCharacterMovementComponent::MIN_TICK_TIME;
  uVar9 = __xmm_80000000800000008000000080000000;
  this_00 = &param_4->Velocity;
  if (((((this_00->field0_0x0)._s_0.X != 0.0) || ((param_4->Velocity).field0_0x0._s_0.Y != 0.0)) ||
      ((param_4->Velocity).field0_0x0._s_0.Z != 0.0)) &&
     (((this->bHasValidData != false && ((this->RootMotion).bHasAnimRootMotion == false)) &&
      (UCharacterMovementComponent::MIN_TICK_TIME <= param_1)))) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    fVar22 = this->BrakingFrictionFactor;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    fVar22 = fVar22 * param_2;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    bVar4 = param_3 != 0.0;
    if ((fVar22 != 0.0) || (bVar4)) {
      dVar1 = (param_4->Velocity).field0_0x0._s_0.Z;
      fVar17 = this->BrakingSubStepTime;
      if (__real_3d4ccccd <= this->BrakingSubStepTime) {
        fVar17 = __real_3d4ccccd;
      }
      dVar5 = (this_00->field0_0x0)._s_0.X;
      dVar6 = (param_4->Velocity).field0_0x0._s_0.Y;
      dVar3 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      auVar7._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar7._0_8_ = dVar3;
      auVar7._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      dVar2 = auVar7._8_8_;
      if (fVar17 <= __real_3c5a740e) {
        fVar17 = __real_3c5a740e;
      }
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (bVar4) {
        pTVar10 = UE::Math::TVector<double>::GetSafeNormal
                            (this_00,local_c8,__real_3e45798ee0000000,
                             &UE::Math::TVector<double>::ZeroVector);
        dVar11 = (double)(float)((uint)param_3 ^ uVar9);
        dVar3 = dVar11 * (pTVar10->field0_0x0)._s_0.X;
        dVar2 = dVar11 * (pTVar10->field0_0x0)._s_0.Y;
        uVar16 = dVar11 * (pTVar10->field0_0x0)._s_0.Z;
      }
      fVar8 = __real_3f000000;
      if (fVar13 <= param_1) {
        uVar23 = (undefined4)*(undefined8 *)&this_00->field0_0x0;
        uVar24 = (undefined4)((ulonglong)*(undefined8 *)&this_00->field0_0x0 >> 0x20);
        dVar11 = (param_4->Velocity).field0_0x0._s_0.Y;
        dVar15 = (param_4->Velocity).field0_0x0._s_0.Z;
        do {
          fVar13 = param_1;
          if (((fVar17 < param_1) && (fVar22 != 0.0)) &&
             (fVar13 = param_1 * fVar8, fVar17 <= param_1 * fVar8)) {
            fVar13 = fVar17;
          }
          param_1 = param_1 - fVar13;
          dVar14 = (double)(float)((uint)fVar22 ^ uVar9);
          dVar12 = (double)fVar13;
          dVar11 = (dVar14 * dVar11 + dVar2) * dVar12 + dVar11;
          dVar15 = (dVar14 * dVar15 + (double)uVar16) * dVar12 + dVar15;
          (this_00->field0_0x0)._s_0.X =
               (dVar14 * (double)CONCAT44(uVar24,uVar23) + dVar3) * dVar12 +
               (double)CONCAT44(uVar24,uVar23);
          (param_4->Velocity).field0_0x0._s_0.Y = dVar11;
          (param_4->Velocity).field0_0x0._s_0.Z = dVar15;
          dVar12 = *(double *)&this_00->field0_0x0;
          uVar23 = SUB84(dVar12,0);
          uVar24 = (undefined4)((ulonglong)dVar12 >> 0x20);
          uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          if (dVar12 * dVar5 + dVar11 * dVar6 + dVar15 * dVar1 <= 0.0) goto LAB_1476efd96;
        } while (UCharacterMovementComponent::MIN_TICK_TIME <= param_1);
      }
      dVar1 = (this_00->field0_0x0)._s_0.X;
      dVar2 = (param_4->Velocity).field0_0x0._s_0.Y;
      dVar3 = (param_4->Velocity).field0_0x0._s_0.Z;
      fVar13 = (float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
      if ((fVar13 <= __real_38d1b717) ||
         ((bVar4 && (fVar13 <= UCharacterMovementComponent::BRAKE_TO_STOP_VELOCITY *
                               UCharacterMovementComponent::BRAKE_TO_STOP_VELOCITY)))) {
LAB_1476efd96:
        *(undefined4 *)&this_00->field0_0x0 = uVar18;
        *(undefined4 *)((longlong)&(param_4->Velocity).field0_0x0 + 4) = uVar19;
        *(undefined4 *)((longlong)&(param_4->Velocity).field0_0x0 + 8) = uVar20;
        *(undefined4 *)((longlong)&(param_4->Velocity).field0_0x0 + 0xc) = uVar21;
        (param_4->Velocity).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
  }
  return;
}

// BoostAirControl @ 1476f0980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::BoostAirControl
          (FCharacterMovementComponentAsyncInput *this,float param_1,float param_2,
          TVector<double> *param_3,FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  if ((0.0 < this->AirControlBoostMultiplier) &&
     (dVar1 = (param_4->Velocity).field0_0x0._s_0.X, dVar2 = (param_4->Velocity).field0_0x0._s_0.Y,
     dVar2 * dVar2 + dVar1 * dVar1 <
     (double)(this->AirControlBoostVelocityThreshold * this->AirControlBoostVelocityThreshold))) {
    fVar3 = this->AirControlBoostMultiplier * param_2;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    return fVar3;
  }
  return param_2;
}

// CalcAnimRootMotionVelocity @ 1476f4300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::CalcAnimRootMotionVelocity
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2,TVector<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double dVar7;
  
  if (0.0 < param_2) {
    dVar7 = __real_3ff0000000000000 / (double)param_2;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar4 = dVar7 * (param_1->field0_0x0)._s_0.Y;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar7 * (param_1->field0_0x0)._s_0.X;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7 * dVar1;
    return __return_storage_ptr__;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2137651385527693030>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                     ,0x111a,"DeltaSeconds > 0.f");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TVector<double> *)(*pcVar2)();
    return pTVar6;
  }
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// CalcVelocity @ 1476f4960

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
FCharacterMovementComponentAsyncInput::CalcVelocity
          (FCharacterMovementComponentAsyncInput *this,float param_1,float param_2,bool param_3,
          float param_4,FCharacterMovementComponentAsyncOutput *param_5)

{
  TVector<double> *this_00;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  TQuat<double> *this_01;
  TVector<double> *pTVar14;
  TVector<double> *this_02;
  float fVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float local_164;
  TVector<double>_u_0 local_158;
  TVector<double> local_138;
  double local_120;
  double dStack_118;
  double local_110;
  TVector<double> local_100;
  TQuat<double> local_e8 [6];
  
  if (this->bHasValidData == false) {
    return;
  }
  if ((this->RootMotion).bHasAnimRootMotion != false) {
    return;
  }
  if (param_1 < UCharacterMovementComponent::MIN_TICK_TIME) {
    return;
  }
  if ((((this->CharacterInput).Ptr)->LocalRole == ROLE_SimulatedProxy) &&
     (this->bWasSimulatingRootMotion == false)) {
    return;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar1 = this->MaxAcceleration;
  uVar16 = (**(code **)(this->_padding_ + 600))(this,param_5);
  auVar22._8_4_ = (int)extraout_XMM0_Qb;
  auVar22._0_8_ = (double)uVar16;
  auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_164 = 0.0;
  local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  cVar12 = (**(code **)(this->_padding_ + 0x118))(this,param_1,fVar1);
  dVar18 = __real_3e45798ee0000000;
  this_00 = &param_5->Velocity;
  if (this->bForceMaxAccel != false) {
    dVar21 = (param_5->Acceleration).field0_0x0._s_0.X;
    dVar2 = (param_5->Acceleration).field0_0x0._s_0.Y;
    dVar17 = (param_5->Acceleration).field0_0x0._s_0.Z;
    if (dVar2 * dVar2 + dVar21 * dVar21 + dVar17 * dVar17 <= __real_3e45798ee0000000) {
      dVar21 = (this_00->field0_0x0)._s_0.X;
      dVar2 = (param_5->Velocity).field0_0x0._s_0.Y;
      dVar17 = (param_5->Velocity).field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar2 * dVar2 + dVar21 * dVar21 + dVar17 * dVar17) {
        pTVar14 = &local_100;
        this_02 = this_00;
        goto LAB_1476f4b71;
      }
      this_01 = FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,local_e8)
      ;
      local_158._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_158._s_0.Y = _UNK_150689518;
      local_158._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector(this_01,&local_138,(TVector<double> *)&local_158._s_0);
      pTVar14 = &local_138;
    }
    else {
      pTVar14 = &local_138;
      this_02 = &param_5->Acceleration;
LAB_1476f4b71:
      pTVar14 = UE::Math::TVector<double>::GetSafeNormal
                          (this_02,pTVar14,__real_3e45798ee0000000,
                           &UE::Math::TVector<double>::ZeroVector);
    }
    dVar17 = (double)fVar1;
    dVar21 = (pTVar14->field0_0x0)._s_0.Y;
    dVar2 = (pTVar14->field0_0x0)._s_0.Z;
    (param_5->Acceleration).field0_0x0._s_0.X = dVar17 * (pTVar14->field0_0x0)._s_0.X;
    (param_5->Acceleration).field0_0x0._s_0.Y = dVar17 * dVar21;
    (param_5->Acceleration).field0_0x0._s_0.Z = dVar17 * dVar2;
    param_5->AnalogInputModifier = 1.0;
  }
  fVar15 = (float)(**(code **)(this->_padding_ + 0x128))(this,param_5);
  fVar1 = __real_3f800000;
  fVar23 = (float)uVar16 * param_5->AnalogInputModifier;
  if (fVar23 <= fVar15) {
    fVar23 = fVar15;
  }
  fVar15 = fVar23;
  if (fVar23 <= 0.0) {
    fVar15 = local_164;
  }
  if ((((param_5->Acceleration).field0_0x0._s_0.X == 0.0) &&
      ((param_5->Acceleration).field0_0x0._s_0.Y == 0.0)) &&
     ((param_5->Acceleration).field0_0x0._s_0.Z == 0.0)) {
    bVar11 = true;
    cVar13 = (**(code **)(this->_padding_ + 0x280))(this,fVar15,param_5);
    if (cVar12 != '\0') goto LAB_1476f4c45;
  }
  else {
    bVar11 = false;
    cVar13 = (**(code **)(this->_padding_ + 0x280))(this,fVar15,param_5);
LAB_1476f4c45:
    if (cVar13 == '\0') {
      if (!bVar11) {
        UE::Math::TVector<double>::GetSafeNormal
                  (&param_5->Acceleration,(TVector<double> *)&local_158._s_0,dVar18,
                   &UE::Math::TVector<double>::ZeroVector);
        dVar18 = (this_00->field0_0x0)._s_0.X;
        dVar21 = (param_5->Velocity).field0_0x0._s_0.Y;
        dVar2 = (param_5->Velocity).field0_0x0._s_0.Z;
        auVar19._0_8_ = dVar18 * dVar18;
        auVar19._8_8_ = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar21 * dVar21 + auVar19._0_8_ + dVar2 * dVar2;
        auVar22 = sqrtpd(auVar19,auVar8);
        fVar15 = param_2 * param_1;
        if (fVar1 <= param_2 * param_1) {
          fVar15 = fVar1;
        }
        dVar17 = (double)(float)auVar22._0_8_;
        auVar22._0_8_ = (double)fVar15;
        auVar22._8_8_ = 0;
        (this_00->field0_0x0)._s_0.X = dVar18 - (dVar18 - dVar17 * local_158._s_0.X) * auVar22._0_8_
        ;
        (param_5->Velocity).field0_0x0._s_0.Y =
             dVar21 - (dVar21 - dVar17 * local_158._s_0.Y) * auVar22._0_8_;
        (param_5->Velocity).field0_0x0._s_0.Z =
             dVar2 - (dVar2 - dVar17 * local_158._s_0.Z) * auVar22._0_8_;
      }
      goto LAB_1476f4e68;
    }
  }
  uVar16 = (param_5->Velocity).field0_0x0._s_0.Z;
  dVar21 = (this_00->field0_0x0)._s_0.X;
  dVar2 = (param_5->Velocity).field0_0x0._s_0.Y;
  fVar20 = param_2;
  if (this->bUseSeparateBrakingFriction != false) {
    fVar20 = this->BrakingFriction;
  }
  auVar22 = ZEXT416((uint)param_4);
  local_138.field0_0x0._s_0.Z = (double)uVar16;
  (**(code **)(this->_padding_ + 0x138))(this,param_1,fVar20);
  if (((cVar13 != '\0') &&
      (dVar17 = (this_00->field0_0x0)._s_0.X, dVar3 = (param_5->Velocity).field0_0x0._s_0.Y,
      dVar4 = (param_5->Velocity).field0_0x0._s_0.Z,
      dVar3 * dVar3 + dVar17 * dVar17 + dVar4 * dVar4 < (double)(fVar15 * fVar15))) &&
     (0.0 < dVar2 * (param_5->Acceleration).field0_0x0._s_0.Y +
            dVar21 * (param_5->Acceleration).field0_0x0._s_0.X +
            local_138.field0_0x0._s_0.Z * (param_5->Acceleration).field0_0x0._s_0.Z)) {
    dVar17 = dVar2 * dVar2 + dVar21 * dVar21 +
             local_138.field0_0x0._s_0.Z * local_138.field0_0x0._s_0.Z;
    uVar9 = dVar21;
    uVar10 = dVar2;
    if ((dVar17 != __real_3ff0000000000000) &&
       (uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar18 <= dVar17)) {
      auVar22._0_8_ = __real_3ff0000000000000 / SQRT(dVar17);
      auVar22._8_8_ = 0;
      uVar16 = local_138.field0_0x0._s_0.Z * auVar22._0_8_;
      uVar9 = dVar21 * auVar22._0_8_;
      uVar10 = dVar2 * auVar22._0_8_;
    }
    dVar18 = (double)fVar15;
    (this_00->field0_0x0)._s_0.X = (double)uVar9 * dVar18;
    (param_5->Velocity).field0_0x0._s_0.Y = (double)uVar10 * dVar18;
    (param_5->Velocity).field0_0x0._s_0.Z = (double)uVar16 * dVar18;
  }
LAB_1476f4e68:
  if (param_3) {
    fVar15 = param_2 * param_1;
    if (fVar1 <= param_2 * param_1) {
      fVar15 = fVar1;
    }
    dVar18 = (double)(fVar1 - fVar15);
    (this_00->field0_0x0)._s_0.X = dVar18 * (this_00->field0_0x0)._s_0.X;
    dVar21 = dVar18 * (param_5->Velocity).field0_0x0._s_0.Z;
    auVar7._8_4_ = SUB84(dVar21,0);
    auVar7._0_8_ = dVar18 * (param_5->Velocity).field0_0x0._s_0.Y;
    auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(param_5->Velocity).field0_0x0 + 8) = auVar7;
  }
  if (!bVar11) {
    cVar13 = (**(code **)(this->_padding_ + 0x280))(this,fVar23,param_5);
    if (cVar13 == '\0') {
      auVar22._0_8_ = (double)fVar23;
      auVar22._8_8_ = 0;
    }
    else {
      dVar18 = (param_5->Velocity).field0_0x0._s_0.Y;
      dVar21 = (this_00->field0_0x0)._s_0.X;
      dVar2 = (param_5->Velocity).field0_0x0._s_0.Z;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = dVar18 * dVar18 + dVar21 * dVar21 + dVar2 * dVar2;
      auVar22 = sqrtpd(auVar22,auVar5);
    }
    dVar3 = (double)param_1;
    dVar18 = (param_5->Acceleration).field0_0x0._s_0.Z;
    dVar21 = (param_5->Acceleration).field0_0x0._s_0.Y;
    dVar2 = (param_5->Velocity).field0_0x0._s_0.Z;
    dVar17 = (param_5->Velocity).field0_0x0._s_0.Y;
    (this_00->field0_0x0)._s_0.X =
         dVar3 * (param_5->Acceleration).field0_0x0._s_0.X + (this_00->field0_0x0)._s_0.X;
    (param_5->Velocity).field0_0x0._s_0.Z = dVar3 * dVar18 + dVar2;
    (param_5->Velocity).field0_0x0._s_0.Y = dVar3 * dVar21 + dVar17;
    pTVar14 = UE::Math::TVector<double>::GetClampedToMaxSize
                        (this_00,&local_100,(double)(float)auVar22._0_8_);
    dVar18 = (pTVar14->field0_0x0)._s_0.Y;
    (this_00->field0_0x0)._s_0.X = (pTVar14->field0_0x0)._s_0.X;
    (param_5->Velocity).field0_0x0._s_0.Y = dVar18;
    (param_5->Velocity).field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  }
  dVar18 = (double)param_1;
  if (cVar12 != '\0') {
    cVar12 = (**(code **)(this->_padding_ + 0x280))(this,0,param_5);
    if (cVar12 == '\0') {
      dVar21 = 0.0;
    }
    else {
      dVar21 = (param_5->Velocity).field0_0x0._s_0.Y;
      dVar2 = (this_00->field0_0x0)._s_0.X;
      dVar17 = (param_5->Velocity).field0_0x0._s_0.Z;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar21 * dVar21 + dVar2 * dVar2 + dVar17 * dVar17;
      auVar22 = sqrtpd(auVar22,auVar6);
      dVar21 = auVar22._0_8_;
    }
    dVar2 = (param_5->Velocity).field0_0x0._s_0.Y;
    (this_00->field0_0x0)._s_0.X = local_120 * dVar18 + (this_00->field0_0x0)._s_0.X;
    (param_5->Velocity).field0_0x0._s_0.Y = dStack_118 * dVar18 + dVar2;
    (param_5->Velocity).field0_0x0._s_0.Z =
         local_110 * dVar18 + (param_5->Velocity).field0_0x0._s_0.Z;
    pTVar14 = UE::Math::TVector<double>::GetClampedToMaxSize
                        (this_00,&local_100,(double)(float)dVar21);
    dVar18 = (pTVar14->field0_0x0)._s_0.Y;
    (this_00->field0_0x0)._s_0.X = (pTVar14->field0_0x0)._s_0.X;
    (param_5->Velocity).field0_0x0._s_0.Y = dVar18;
    (param_5->Velocity).field0_0x0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  }
  return;
}

// CanAttemptJump @ 1476f5ae0

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
FCharacterMovementComponentAsyncInput::CanAttemptJump
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  char cVar1;
  
  if (((this->bNavAgentPropsCanJump != false) && (this->bMovementStateCanJump != false)) &&
     (param_1->bWantsToCrouch == false)) {
    cVar1 = (**(code **)(this->_padding_ + 0x278))();
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(this->_padding_ + 0x268))(this,param_1), cVar1 == '\0')) {
      return false;
    }
    return true;
  }
  return false;
}

// CanCrouchInCurrentState @ 1476f5bc0

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
FCharacterMovementComponentAsyncInput::CanCrouchInCurrentState
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  char cVar1;
  
  if (this->bCanEverCrouch != false) {
    cVar1 = (**(code **)(this->_padding_ + 0x268))();
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(this->_padding_ + 0x278))(this,param_1), cVar1 == '\0')) {
      return false;
    }
    if (((this->UpdatedComponentInput).Ptr)->bIsSimulatingPhysics != false) {
      return true;
    }
  }
  return false;
}

// CanStepUp @ 1476f5f40

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
FCharacterMovementComponentAsyncInput::CanStepUp
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  UObject *pUVar1;
  
  if (((param_1->bBlockingHit == '\x01' && param_1->bStartPenetrating == '\0') &&
      (this->bHasValidData != false)) && (param_2->MovementMode != MOVE_Falling)) {
    pUVar1 = FWeakObjectPtr::Get(&(param_1->Component).WeakPtr);
    if (pUVar1 != (UObject *)0x0) {
      FActorInstanceHandle::FetchActor(&param_1->HitObjectHandle);
    }
    return true;
  }
  return false;
}

// CanWalkOffLedges @ 1476f6170

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
FCharacterMovementComponentAsyncInput::CanWalkOffLedges
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  if ((this->bCanWalkOffLedgesWhenCrouching == false) && (param_1->bIsCrouched != false)) {
    return false;
  }
  return this->bCanWalkOffLedges;
}

// CheckFall @ 1476f6970

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
FCharacterMovementComponentAsyncInput::CheckFall
          (FCharacterMovementComponentAsyncInput *this,FFindFloorResult *param_1,FHitResult *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,float param_5,float param_6,int param_7
          ,bool param_8,FCharacterMovementComponentAsyncOutput *param_9)

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if (this->bHasValidData == false) {
    return false;
  }
  if ((!param_8) && (cVar1 = (**(code **)(this->_padding_ + 0x188))(this,param_9), cVar1 == '\0')) {
    return false;
  }
  (**(code **)(this->_padding_ + 0x1a0))
            (this,&(param_1->HitResult).ImpactNormal,&(param_1->HitResult).Normal,param_4,
             CONCAT44(uVar2,param_6));
  cVar1 = (**(code **)(this->_padding_ + 0x278))(this,param_9);
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x1b0))(this,param_7,param_5,param_6,param_3,param_4,param_9);
  }
  return true;
}

// CheckLedgeDirection @ 1476f70a0

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
FCharacterMovementComponentAsyncInput::CheckLedgeDirection
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  char cVar1;
  double dVar2;
  FCollisionShape local_168;
  TVector<double>_u_0 local_158;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  TVector<double>_u_0 local_138;
  FHitResult local_118;
  
  local_168.ShapeType = Capsule;
  dVar2 = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
  local_138._s_0.Z = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  local_138._8_4_ = SUB84(dVar2,0);
  local_138._s_0.X = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  local_138._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_168.field1_0x4.Box.HalfExtentY = param_4->ScaledCapsuleHalfHeight;
  local_168.field1_0x4.Box.HalfExtentX = param_4->ScaledCapsuleRadius;
  memset(&local_118,0,0x100);
  uStack_13b = 0;
  uStack_139 = 0;
  local_158._s_0.Z = 0.0;
  uStack_13c = 0;
  uStack_140 = 0xffffffff;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_118.HitObjectHandle.InstanceIndex = -1;
  local_118.HitObjectHandle.ResolutionStatus = Invalid;
  local_118.HitObjectHandle._29_3_ = 0;
  local_118.MyItem = -1;
  local_118.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_118.Time = 1.0;
  UWorld::SweepSingleByChannel
            (this->World,&local_118,param_1,(TVector<double> *)&local_138._s_0,
             &UE::Math::TQuat<double>::Identity,this->CollisionChannel,&local_168,
             (FCollisionQueryParams *)&this->QueryParams,&this->CollisionResponseParams);
  if (local_118.bBlockingHit != 0) {
    cVar1 = (**(code **)(this->_padding_ + 0xf8))(this,&local_118);
    if (cVar1 == '\0') {
      return false;
    }
    if (local_118.bBlockingHit != 0) goto LAB_1476f7262;
  }
  dVar2 = (double)(this->LedgeCheckThreshold + this->MaxStepHeight);
  local_158._s_0.X = dVar2 * (param_3->field0_0x0)._s_0.X + local_138._s_0.X;
  local_158._s_0.Y = dVar2 * (param_3->field0_0x0)._s_0.Y + local_138._s_0.Y;
  local_158._s_0.Z = dVar2 * (param_3->field0_0x0)._s_0.Z + local_138._s_0.Z;
  UWorld::SweepSingleByChannel
            (this->World,&local_118,(TVector<double> *)&local_138._s_0,
             (TVector<double> *)&local_158._s_0,&UE::Math::TQuat<double>::Identity,
             this->CollisionChannel,&local_168,(FCollisionQueryParams *)&this->QueryParams,
             &this->CollisionResponseParams);
LAB_1476f7262:
  if (__real_3f800000 <= local_118.Time) {
    return false;
  }
  cVar1 = (**(code **)(this->_padding_ + 0xf8))(this,&local_118);
  return cVar1 != '\0';
}

// ClearAccumulatedForces @ 1476f7360

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
FCharacterMovementComponentAsyncInput::ClearAccumulatedForces
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->PendingImpulseToApply).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->PendingImpulseToApply).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->PendingImpulseToApply).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->PendingForceToApply).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->PendingForceToApply).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->PendingForceToApply).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->PendingLaunchVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->PendingLaunchVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (param_1->PendingLaunchVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ComputeAnalogInputModifier @ 1476f81a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::ComputeAnalogInputModifier
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if ((0.0 < dVar3) && (__real_322bcc77 < this->MaxAcceleration)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar3;
    auVar4 = sqrtpd(in_XMM3,auVar4);
    dVar3 = auVar4._0_8_ * (__real_3ff0000000000000 / (double)this->MaxAcceleration);
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    return (float)dVar3;
  }
  return 0.0;
}

// ComputeFloorDist @ 1476f8210

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
FCharacterMovementComponentAsyncInput::ComputeFloorDist
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,float param_2,
          float param_3,FFindFloorResult *param_4,float param_5,
          FCharacterMovementComponentAsyncOutput *param_6,FHitResult *param_7)

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_368;
  float local_364;
  float local_360;
  float local_35c;
  undefined8 local_348;
  undefined4 uStack_340;
  char cStack_33c;
  undefined2 uStack_33b;
  char cStack_339;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined2 uStack_31b;
  undefined1 uStack_319;
  double local_318;
  double dStack_310;
  double local_308;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  FHitResult local_2b8;
  FHitResult local_1b8;
  
  fVar8 = __real_3f800000;
  param_4->bBlockingHit = 0;
  param_4->bLineTrace = 0;
  param_4->bWalkableFloor = 0;
  param_4->FloorDist = 0.0;
  param_4->LineDist = 0.0;
  FHitResult::Reset(&param_4->HitResult,fVar8,false);
  cVar7 = '\0';
  fVar1 = param_6->ScaledCapsuleRadius;
  fVar10 = param_6->ScaledCapsuleHalfHeight;
  if ((((param_7 != (FHitResult *)0x0) &&
       (param_7->bBlockingHit == '\x01' && param_7->bStartPenetrating == '\0')) &&
      (*(double *)&(param_7->TraceEnd).field_0x10 < *(double *)&(param_7->TraceStart).field_0x10))
     && ((dVar3 = *(double *)&(param_7->TraceStart).field_0x8 -
                  *(double *)&(param_7->TraceEnd).field_0x8,
         dVar9 = *(double *)&param_7->TraceStart - *(double *)&param_7->TraceEnd,
         dVar3 * dVar3 + dVar9 * dVar9 <= __real_3f1a36e2e0000000 &&
         (cVar5 = (**(code **)(this->_padding_ + 0xf0))
                            (this,&param_7->Location,&param_7->ImpactPoint,fVar1), cVar5 != '\0'))))
  {
    cVar7 = '\x01';
    bVar6 = (bool)(**(code **)(this->_padding_ + 0xf8))(this,param_7);
    FFindFloorResult::SetFromSweep
              (param_4,param_7,
               (float)((param_1->field0_0x0)._s_0.Z - *(double *)&(param_7->Location).field_0x10),
               bVar6);
    if (bVar6 != false) {
      return;
    }
  }
  if (param_3 < param_2) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2137651385527695507>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                       ,0x76d,"SweepDistance >= LineDistance");
    if (!bVar6) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((cVar7 != '\0') || (param_3 <= 0.0)) || (param_5 <= 0.0)) goto LAB_1476f867c;
  local_364 = param_5;
  local_368 = 3;
  fVar11 = (fVar10 - fVar1) * __real_3dccccd0;
  local_360 = fVar10 - fVar11;
  fVar12 = fVar11 + param_3;
  memset(&local_2b8,0,0x100);
  local_2b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_2b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_2b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_2b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  uStack_33b = 0;
  local_348 = 0;
  uStack_340 = 0xffffffff;
  local_2b8.HitObjectHandle.InstanceIndex = -1;
  local_2b8.HitObjectHandle.ResolutionStatus = Invalid;
  local_2b8.HitObjectHandle._29_3_ = 0;
  local_2b8.MyItem = -1;
  local_2b8.Time = 1.0;
  local_2b8.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  local_318 = (param_1->field0_0x0)._s_0.X;
  dStack_310 = (param_1->field0_0x0)._s_0.Y;
  local_308 = (param_1->field0_0x0)._s_0.Z - (double)fVar12;
  cStack_33c = cVar7;
  cStack_339 = cVar7;
  cVar7 = (**(code **)(this->_padding_ + 0xe8))
                    (this,&local_2b8,param_1,&local_318,this->CollisionChannel,&local_368,
                     &this->QueryParams,&this->CollisionResponseParams,param_6);
  if (cVar7 == '\0') goto LAB_1476f867c;
  if ((local_2b8.bStartPenetrating != '\0') ||
     (cVar7 = (**(code **)(this->_padding_ + 0xf0))(this,param_1,&local_2b8.ImpactPoint,local_364),
     cVar7 == '\0')) {
    local_364 = (local_364 - UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE) -
                __real_38d1b717;
    if (local_364 <= 0.0) {
      local_364 = 0.0;
    }
    if (local_368 == 1) {
      if ((local_364 <= __real_38d1b717) && (local_360 <= __real_38d1b717))
      goto joined_r0x0001476f857b;
LAB_1476f8581:
      fVar11 = (fVar10 - fVar1) * __real_3f666666;
      fVar12 = fVar11 + param_3;
      local_360 = fVar10 - fVar11;
      if (fVar10 - fVar11 <= local_364) {
        local_360 = local_364;
      }
      FHitResult::Reset(&local_2b8,fVar8,false);
      local_300 = (param_1->field0_0x0)._s_0.X;
      dStack_2f8 = (param_1->field0_0x0)._s_0.Y;
      local_2f0 = (param_1->field0_0x0)._s_0.Z - (double)fVar12;
      (**(code **)(this->_padding_ + 0xe8))
                (this,&local_2b8,param_1,&local_300,this->CollisionChannel,&local_368,
                 &this->QueryParams,&this->CollisionResponseParams,param_6);
    }
    else {
      local_35c = local_364;
      if ((local_368 == 2) || (local_368 == 3)) {
joined_r0x0001476f857b:
        if (__real_38d1b717 < local_35c) goto LAB_1476f8581;
      }
    }
  }
  fVar8 = UCharacterMovementComponent::MAX_FLOOR_DIST;
  if (UCharacterMovementComponent::MAX_FLOOR_DIST <= fVar1) {
    fVar8 = fVar1;
  }
  fVar11 = local_2b8.Time * fVar12 - fVar11;
  if (fVar11 <= (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000)) {
    fVar11 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
  }
  FFindFloorResult::SetFromSweep(param_4,&local_2b8,fVar11,false);
  if ((((local_2b8.bBlockingHit != 0) && (local_2b8.bStartPenetrating == '\0')) &&
      (cVar7 = (**(code **)(this->_padding_ + 0xf8))(this), cVar7 != '\0')) && (fVar11 <= param_3))
  {
    param_4->bWalkableFloor = 1;
    return;
  }
LAB_1476f867c:
  if ((param_4->bBlockingHit == 0) && ((param_4->HitResult).bStartPenetrating == '\0')) {
    param_4->FloorDist = param_3;
  }
  else {
    if (0.0 < param_2) {
      dVar9 = (param_1->field0_0x0)._s_0.X;
      dVar4 = (param_1->field0_0x0)._s_0.Y;
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      local_2d0._s_0.X = dVar9;
      local_2d0._s_0.Y = dVar4;
      memset(&local_1b8,0,0x100);
      uStack_31b = 0;
      uStack_319 = 0;
      local_328 = 0;
      uStack_31c = 0;
      local_1b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_1b8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_1b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_1b8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      uStack_320 = 0xffffffff;
      local_1b8.HitObjectHandle.InstanceIndex = -1;
      local_1b8.HitObjectHandle.ResolutionStatus = Invalid;
      local_1b8.HitObjectHandle._29_3_ = 0;
      local_1b8.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      local_1b8.MyItem = -1;
      local_1b8.Time = 1.0;
      local_2e8._s_0.Z = dVar3 - (double)(fVar10 + param_2);
      local_2e8._s_0.X = dVar9;
      local_2e8._s_0.Y = dVar4;
      local_2d0._s_0.Z = dVar3;
      bVar6 = UWorld::LineTraceSingleByChannel
                        (this->World,&local_1b8,(TVector<double> *)&local_2d0._s_0,
                         (TVector<double> *)&local_2e8._s_0,this->CollisionChannel,
                         (FCollisionQueryParams *)&this->QueryParams,&this->CollisionResponseParams)
      ;
      fVar8 = UCharacterMovementComponent::MAX_FLOOR_DIST;
      if ((bVar6) && (0.0 < local_1b8.Time)) {
        param_4->bBlockingHit = 1;
        if (fVar8 <= fVar1) {
          fVar8 = fVar1;
        }
        fVar10 = local_1b8.Time * (fVar10 + param_2) - fVar10;
        if (fVar10 <= (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000)) {
          fVar10 = (float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
        }
        if ((fVar10 <= param_2) &&
           (cVar7 = (**(code **)(this->_padding_ + 0xf8))(this,&local_1b8), cVar7 != '\0')) {
          FFindFloorResult::SetFromLineTrace(param_4,&local_1b8,param_4->FloorDist,fVar10,true);
          return;
        }
      }
    }
    param_4->bWalkableFloor = 0;
  }
  return;
}

// ComputeGroundMovementDelta @ 1476f8840

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

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ComputeGroundMovementDelta
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,FHitResult *param_2,bool param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  
  dVar9 = *(double *)&(param_2->Normal).field_0x10;
  dVar5 = *(double *)&param_2->ImpactNormal;
  dVar8 = *(double *)&(param_2->ImpactNormal).field_0x8;
  dVar1 = *(double *)&(param_2->ImpactNormal).field_0x10;
  if ((((___real_3fefff2e48e90000 <= dVar1) || (dVar1 <= __real_3f1a36e2e0000000)) ||
      (dVar9 <= __real_3f1a36e2e0000000)) ||
     ((param_3 ||
      (cVar7 = (**(code **)(this->_padding_ + 0xf8))(SUB84(dVar9,0),param_2), cVar7 == '\0')))) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar9 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9;
  }
  else {
    dVar9 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    auVar10._0_8_ = dVar2 * dVar8 + dVar9 * dVar5 + dVar3 * dVar1;
    auVar10._8_8_ = 0;
    dVar1 = (double)(float)((uint)(float)auVar10._0_8_ ^ __xmm_80000000800000008000000080000000) /
            dVar1;
    if (this->bMaintainHorizontalGroundVelocity == false) {
      dVar5 = dVar2 * dVar2 + dVar9 * dVar9;
      dVar8 = dVar1 * dVar1 + dVar5;
      uVar11 = dVar9;
      uVar12 = dVar2;
      uVar6 = dVar1;
      if ((dVar8 != __real_3ff0000000000000) &&
         (uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar8)) {
        dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
        uVar11 = dVar9 * dVar8;
        uVar12 = dVar2 * dVar8;
        uVar6 = dVar1 * dVar8;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar3 * dVar3 + dVar5;
      auVar10 = sqrtpd(auVar10,auVar4);
      dVar9 = auVar10._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9 * (double)uVar11;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9 * (double)uVar12;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * (double)uVar6;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.X = dVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    }
  }
  return __return_storage_ptr__;
}

// ComputeOrientToMovementRotation @ 1476f8a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FCharacterMovementComponentAsyncInput::ComputeOrientToMovementRotation
          (FCharacterMovementComponentAsyncInput *this,TRotator<double> *__return_storage_ptr__,
          TRotator<double> *param_1,float param_2,TRotator<double> *param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *this_00;
  double dVar4;
  TVector<double>_u_0 local_38 [2];
  
  dVar1 = (param_4->Acceleration).field0_0x0._s_0.X;
  dVar2 = (param_4->Acceleration).field0_0x0._s_0.Y;
  dVar3 = (param_4->Acceleration).field0_0x0._s_0.Z;
  dVar4 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (__real_3f1a36e2e0000000 <= dVar4) {
    if (dVar4 == __real_3ff0000000000000) {
      local_38[0]._0_8_ = (param_4->Acceleration).field0_0x0._s_0.X;
      local_38[0]._8_8_ = (param_4->Acceleration).field0_0x0._s_0.Y;
      local_38[0]._16_8_ = (param_4->Acceleration).field0_0x0._s_0.Z;
    }
    else {
      dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
      local_38[0]._0_8_ = dVar1 * dVar4;
      local_38[0]._8_8_ = dVar2 * dVar4;
      local_38[0]._16_8_ = dVar3 * dVar4;
    }
    UE::Math::TVector<double>::ToOrientationRotator
              ((TVector<double> *)&local_38[0]._s_0,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if ((param_4->bHasRequestedVelocity != false) &&
     (dVar1 = (param_4->RequestedVelocity).field0_0x0._s_0.X,
     dVar2 = (param_4->RequestedVelocity).field0_0x0._s_0.Y,
     dVar3 = (param_4->RequestedVelocity).field0_0x0._s_0.Z,
     __real_3f1a36e2e0000000 < dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3)) {
    this_00 = UE::Math::TVector<double>::GetSafeNormal
                        (&param_4->RequestedVelocity,(TVector<double> *)&local_38[0]._s_0,
                         __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    UE::Math::TVector<double>::ToOrientationRotator(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  dVar1 = param_1->Yaw;
  __return_storage_ptr__->Pitch = param_1->Pitch;
  __return_storage_ptr__->Yaw = dVar1;
  __return_storage_ptr__->Roll = param_1->Roll;
  return __return_storage_ptr__;
}

// ComputePerchResult @ 1476f8b70

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
FCharacterMovementComponentAsyncInput::ComputePerchResult
          (FCharacterMovementComponentAsyncInput *this,float param_1,FHitResult *param_2,
          float param_3,FFindFloorResult *param_4,FCharacterMovementComponentAsyncOutput *param_5)

{
  float fVar1;
  float fVar2;
  undefined4 in_XMM3_Db;
  double dVar3;
  
  if (0.0 < param_3) {
    dVar3 = *(double *)&(param_2->ImpactPoint).field_0x10 -
            (*(double *)&(param_2->Location).field_0x10 - (double)param_5->ScaledCapsuleHalfHeight);
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    fVar1 = param_3 - (float)dVar3;
    fVar2 = param_3;
    if (param_3 <= 0.0) {
      fVar2 = 0.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    (**(code **)(this->_padding_ + 0xe0))
              (0,&param_2->Location,CONCAT44(in_XMM3_Db,fVar1),
               CONCAT44(in_XMM3_Db,fVar2 + param_5->ScaledCapsuleRadius),param_4,param_1,param_5,0);
    if (((undefined4 *)param_4)->bBlockingHit == 1 && param_4->bWalkableFloor == 1) {
      if ((float)dVar3 + param_4->FloorDist <= param_3) {
        return true;
      }
      *(uint *)param_4 = *(undefined4 *)param_4 & 0xfffffffd;
    }
  }
  return false;
}

// ComputeSlideVector @ 1476f8c50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ComputeSlideVector
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2,TVector<double> *param_3,FHitResult *param_4,
          FCharacterMovementComponentAsyncOutput *param_5)

{
  double dVar1;
  char cVar2;
  double *pdVar3;
  TVector<double> *pTVar4;
  undefined1 local_48 [48];
  undefined4 uVar5;
  
  pTVar4 = param_3;
  MoveComponent_ComputeSlideVector
            (this,__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5);
  uVar5 = (undefined4)((ulonglong)pTVar4 >> 0x20);
  cVar2 = (**(code **)(this->_padding_ + 0x268))(this,param_5);
  if (cVar2 != '\0') {
    pdVar3 = (double *)
             (**(code **)(this->_padding_ + 0x168))
                       (this,local_48,__return_storage_ptr__,param_1,CONCAT44(uVar5,param_2),param_3
                        ,param_4,param_5);
    dVar1 = pdVar3[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = pdVar3[2];
  }
  return __return_storage_ptr__;
}

// ConstrainAnimRootMotionVelocity @ 1476f8d20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ConstrainAnimRootMotionVelocity
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  
  uVar3 = *(undefined4 *)&param_1->field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  lVar2 = this->_padding_;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  cVar7 = (**(code **)(lVar2 + 0x268))(uVar3,param_3);
  if (cVar7 != '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// ConstrainDirectionToPlane @ 1476f8d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ConstrainDirectionToPlane
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (this->bConstrainToPlane != false) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y * dVar2 +
            (this->PlaneConstraintNormal).field0_0x0._s_0.X * dVar1 +
            (this->PlaneConstraintNormal).field0_0x0._s_0.Z * dVar3;
    dVar4 = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    dVar5 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = dVar3 - dVar6 * (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    (param_1->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar4;
    (param_1->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar5;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConstrainInputAcceleration @ 1476f8e20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ConstrainInputAcceleration
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  
  if ((param_1->field0_0x0)._s_0.Z == 0.0) {
LAB_1476f8e86:
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  else {
    cVar3 = (**(code **)(this->_padding_ + 0x278))(0,param_2);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(this->_padding_ + 0x268))(this,param_2);
      if (cVar3 == '\0') goto LAB_1476f8e86;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// ConstrainLocationToPlane @ 1476f8ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ConstrainLocationToPlane
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (this->bConstrainToPlane != false) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (dVar2 - (this->PlaneConstraintOrigin).field0_0x0._s_0.Y) *
            (this->PlaneConstraintNormal).field0_0x0._s_0.Y +
            (dVar1 - (this->PlaneConstraintOrigin).field0_0x0._s_0.X) *
            (this->PlaneConstraintNormal).field0_0x0._s_0.X +
            (dVar3 - (this->PlaneConstraintOrigin).field0_0x0._s_0.Z) *
            (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    dVar4 = (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    dVar5 = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar2 - dVar6 * (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    (param_1->field0_0x0)._s_0.Z = dVar3 - dVar6 * dVar4;
    (param_1->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar5;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConstrainNormalToPlane @ 1476f8f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ConstrainNormalToPlane
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  if (this->bConstrainToPlane != false) {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar8 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y * dVar3 +
            (this->PlaneConstraintNormal).field0_0x0._s_0.X * dVar2 +
            (this->PlaneConstraintNormal).field0_0x0._s_0.Z * dVar1;
    dVar2 = dVar2 - dVar8 * (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    dVar3 = dVar3 - dVar8 * (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    dVar1 = dVar1 - dVar8 * (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    dVar8 = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
    uVar7 = dVar1;
    uVar5 = dVar2;
    uVar6 = dVar3;
    if ((dVar8 != __real_3ff0000000000000) &&
       (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
       __real_3e45798ee0000000 <= dVar8)) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar1 * dVar8;
      uVar5 = dVar2 * dVar8;
      uVar6 = dVar3 * dVar8;
    }
    auVar4._8_4_ = (int)uVar6;
    auVar4._0_8_ = uVar5;
    auVar4._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
    (param_1->field0_0x0)._s_0.Z = (double)uVar7;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ControlledCharacterMove @ 1476f90a0

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
FCharacterMovementComponentAsyncInput::ControlledCharacterMove
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  FCharacterAsyncInput *pFVar1;
  longlong lVar2;
  double dVar3;
  undefined4 *puVar4;
  double *pdVar5;
  float fVar6;
  undefined4 in_XMM1_Db;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [40];
  
  pFVar1 = (this->CharacterInput).Ptr;
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,CONCAT44(in_XMM1_Db,param_1),this,param_2);
  local_68 = *(undefined4 *)&(this->InputVector).field0_0x0;
  uStack_64 = *(undefined4 *)((longlong)&(this->InputVector).field0_0x0 + 4);
  uStack_60 = *(undefined4 *)((longlong)&(this->InputVector).field0_0x0 + 8);
  uStack_5c = *(undefined4 *)((longlong)&(this->InputVector).field0_0x0 + 0xc);
  lVar2 = this->_padding_;
  local_58 = (this->InputVector).field0_0x0._s_0.Z;
  puVar4 = (undefined4 *)(**(code **)(lVar2 + 0x70))(this,local_48,&local_68,param_2);
  local_68 = *puVar4;
  uStack_64 = puVar4[1];
  uStack_60 = puVar4[2];
  uStack_5c = puVar4[3];
  local_58 = *(double *)(puVar4 + 4);
  pdVar5 = (double *)(**(code **)(lVar2 + 0x78))(this,local_30,&local_68,param_2);
  dVar3 = pdVar5[1];
  (param_2->Acceleration).field0_0x0._s_0.X = *pdVar5;
  (param_2->Acceleration).field0_0x0._s_0.Y = dVar3;
  (param_2->Acceleration).field0_0x0._s_0.Z = pdVar5[2];
  local_68 = *(undefined4 *)pdVar5;
  uStack_64 = *(undefined4 *)((longlong)pdVar5 + 4);
  uStack_60 = *(undefined4 *)(pdVar5 + 1);
  uStack_5c = *(undefined4 *)((longlong)pdVar5 + 0xc);
  local_58 = pdVar5[2];
  fVar6 = (float)(**(code **)(this->_padding_ + 0x80))(this,&local_68);
  param_2->AnalogInputModifier = fVar6;
                    /* WARNING: Could not recover jumptable at 0x0001476f9182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x20))(this,CONCAT44(in_XMM1_Db,param_1),param_2);
  return;
}

// DoJump @ 1476fc750

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
FCharacterMovementComponentAsyncInput::DoJump
          (FCharacterMovementComponentAsyncInput *this,bool param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  undefined8 uVar1;
  double dVar2;
  FCharacterAsyncInput *pFVar3;
  char cVar4;
  double dVar5;
  
  pFVar3 = (this->CharacterInput).Ptr;
  cVar4 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3,this);
  if ((cVar4 != '\0') &&
     ((this->bConstrainToPlane == false ||
      (uVar1 = *(undefined8 *)((longlong)&(this->PlaneConstraintNormal).field0_0x0 + 0x10),
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
      __real_3ff0000000000000)))) {
    dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
    dVar5 = (double)this->JumpZVelocity;
    if ((double)this->JumpZVelocity <= dVar2) {
      dVar5 = dVar2;
    }
    (param_2->Velocity).field0_0x0._s_0.Z = dVar5;
    (**(code **)(this->_padding_ + 200))(this,3,param_2,0);
    return true;
  }
  return false;
}

// FindFloor @ 147704b20

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
FCharacterMovementComponentAsyncInput::FindFloor
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          FFindFloorResult *param_2,bool param_3,FCharacterMovementComponentAsyncOutput *param_4,
          FHitResult *param_5)

{
  longlong lVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint local_178;
  undefined8 local_174;
  FHitResult local_168;
  
  fVar7 = UCharacterMovementComponent::MAX_FLOOR_DIST;
  fVar3 = UCharacterMovementComponent::MIN_FLOOR_DIST;
  if ((this->bHasValidData == false) ||
     (((this->UpdatedComponentInput).Ptr)->bIsQueryCollisionEnabled == false)) {
    param_2->bBlockingHit = 0;
    fVar3 = __real_3f800000;
    param_2->bLineTrace = 0;
    param_2->bWalkableFloor = 0;
    param_2->FloorDist = 0.0;
    param_2->LineDist = 0.0;
    FHitResult::Reset(&param_2->HitResult,fVar3,false);
  }
  else {
    cVar4 = (**(code **)(this->_padding_ + 0x278))(this,param_4);
    if (cVar4 == '\0') {
      fVar8 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    }
    else {
      fVar8 = fVar7 + __real_38d1b717;
    }
    fVar9 = fVar8 + this->MaxStepHeight;
    if (fVar9 <= fVar7) {
      fVar9 = fVar7;
    }
    if (0.0 < fVar9) {
      if ((((this->bAlwaysCheckFloor == false) && (param_3)) &&
          (param_4->bForceNextFloorCheck == false)) &&
         ((param_4->bJustTeleported == false &&
          (param_4->NewMovementBase != (UPrimitiveComponent *)0x0)))) {
        FCachedMovementBaseAsyncData::Validate(&this->MovementBaseAsyncData,param_4);
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2137651385527695609>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                           ,0x707,"false");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      param_4->bForceNextFloorCheck = false;
      (**(code **)(this->_padding_ + 0xe0))
                (this,param_1,fVar9,fVar9,param_2,param_4->ScaledCapsuleRadius,param_4,param_5);
    }
    if ((param_2->bBlockingHit == 1 && param_2->bLineTrace == 0) &&
       (cVar4 = (**(code **)(this->_padding_ + 0x1c0))(this,&param_2->HitResult,param_4,1),
       cVar4 != '\0')) {
      fVar8 = fVar8 + this->MaxStepHeight;
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      cVar4 = (**(code **)(this->_padding_ + 0x278))(this);
      if (cVar4 != '\0') {
        fVar9 = this->PerchAdditionalHeight;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar8 = fVar9 + fVar8;
      }
      local_178 = local_178 & 0xfffffff8;
      local_174 = 0;
      local_168.PhysMaterial.WeakPtr.ObjectIndex = 0;
      local_168.PhysMaterial.WeakPtr.ObjectSerialNumber = 0;
      local_168.Component.WeakPtr.ObjectIndex = 0;
      local_168.Component.WeakPtr.ObjectSerialNumber = 0;
      local_168.PhysicsObjectOwner.WeakPtr.ObjectIndex = 0;
      local_168.PhysicsObjectOwner.WeakPtr.ObjectSerialNumber = 0;
      local_168.BoneName.ComparisonIndex.Value = 0;
      local_168.BoneName.Number = 0;
      local_168.MyBoneName.ComparisonIndex.Value = 0;
      local_168.MyBoneName.Number = 0;
      memset(&local_168,0,0x100);
      local_168.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_168.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_168.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_168.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      lVar1 = this->_padding_;
      local_168.MyItem = -1;
      local_168.Time = 1.0;
      local_168.HitObjectHandle.ManagerInterface.InterfaceInstance._0_4_ = 0;
      local_168.HitObjectHandle.ManagerInterface.InterfaceInstance._4_4_ = 0;
      local_168.HitObjectHandle.InstanceIndex = -1;
      local_168.HitObjectHandle.ResolutionStatus = Invalid;
      local_168.HitObjectHandle._29_3_ = 0;
      uVar6 = (**(code **)(lVar1 + 0x1d0))(this,param_4);
      cVar4 = (**(code **)(lVar1 + 0x1c8))(this,uVar6,&param_2->HitResult,fVar8,&local_178,param_4);
      if (cVar4 == '\0') {
        param_2->bWalkableFloor = 0;
      }
      else {
        fVar9 = (fVar3 + fVar7) * __real_3f000000;
        fVar7 = param_2->FloorDist;
        if (fVar8 <= (fVar9 - param_2->FloorDist) + (float)local_174) {
          param_2->FloorDist = fVar9;
          fVar7 = fVar9;
        }
        if (param_2->bWalkableFloor == 0) {
          fVar8 = fVar7;
          if (fVar7 <= fVar3) {
            fVar8 = fVar3;
          }
          FFindFloorResult::SetFromLineTrace(param_2,&local_168,fVar7,fVar8,true);
        }
      }
    }
  }
  return;
}

// FloorSweepTest @ 147705d40

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

bool __thiscall
FCharacterMovementComponentAsyncInput::FloorSweepTest
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,TVector<double> *param_2,
          TVector<double> *param_3,ECollisionChannel param_4,FCollisionShape *param_5,
          FCollisionQueryParams *param_6,FCollisionResponseParams *param_7,
          FCharacterMovementComponentAsyncOutput *param_8)

{
  bool bVar1;
  FCollisionShape local_48;
  TQuat<double> local_38;
  
  if (this->bUseFlatBaseForFloorChecks == false) {
    bVar1 = UWorld::SweepSingleByChannel
                      (this->World,param_1,param_2,param_3,&UE::Math::TQuat<double>::Identity,
                       param_4,param_5,param_6,param_7);
  }
  else {
    local_48.field1_0x4.Box.HalfExtentX = (param_5->field1_0x4).Box.HalfExtentX * __real_3f34fdf4;
    local_48.field1_0x4.Box.HalfExtentZ = (param_5->field1_0x4).Box.HalfExtentY;
    local_48.ShapeType = Box;
    local_38.X = 0.0;
    local_38.Y = 0.0;
    local_38.Z = ___xmm_3fed906bccf3cb87bfd87de2b185d541;
    local_38.W = _UNK_1517668e8;
    local_48.field1_0x4.Box.HalfExtentY = local_48.field1_0x4.Box.HalfExtentX;
    bVar1 = UWorld::SweepSingleByChannel
                      (this->World,param_1,param_2,param_3,&local_38,param_4,&local_48,param_6,
                       param_7);
    if (!bVar1) {
      FHitResult::Reset(param_1,__real_3f800000,false);
      bVar1 = UWorld::SweepSingleByChannel
                        (this->World,param_1,param_2,param_3,&UE::Math::TQuat<double>::Identity,
                         param_4,&local_48,param_6,param_7);
    }
  }
  return bVar1;
}

// GetAirControl @ 1477067f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::GetAirControl
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          float param_1,float param_2,TVector<double> *param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 in_XMM3_Db;
  
  if (param_2 != 0.0) {
    param_2 = (float)(**(code **)(this->_padding_ + 0x1f0))
                               (0,param_1,CONCAT44(in_XMM3_Db,param_2),param_3,param_4);
  }
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (double)param_2;
  dVar2 = dVar4 * (param_3->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 * (param_3->field0_0x0)._s_0.Z;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar4 * dVar3;
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
  return __return_storage_ptr__;
}

// GetFallingLateralAcceleration @ 147707360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::GetFallingLateralAcceleration
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          float param_1,FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  TVector<double> *pTVar4;
  undefined4 in_XMM2_Db;
  TVector<double> local_28;
  
  dVar1 = (param_2->Acceleration).field0_0x0._s_0.Y;
  dVar2 = (param_2->Acceleration).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  if (((this->RootMotion).bHasAnimRootMotion == false) && (0.0 < dVar2 * dVar2 + dVar1 * dVar1)) {
    pdVar3 = (double *)
             (**(code **)(this->_padding_ + 0x1e8))
                       (0,&local_28,CONCAT44(in_XMM2_Db,param_1),this->AirControl,
                        __return_storage_ptr__,param_2);
    dVar1 = pdVar3[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = pdVar3[2];
    pTVar4 = UE::Math::TVector<double>::GetClampedToMaxSize
                       (__return_storage_ptr__,&local_28,(double)this->MaxAcceleration);
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetLedgeMove @ 147707c00

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

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::GetLedgeMove
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_28 [16];
  double local_18;
  
  if ((this->bHasValidData == false) ||
     (((dVar1 = *(double *)&param_2->field0_0x0, dVar1 == 0.0 &&
       ((param_2->field0_0x0)._s_0.Y == 0.0)) && ((param_2->field0_0x0)._s_0.Z == 0.0)))) {
LAB_147707cf1:
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28._0_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_28._12_4_ =
         (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_28._8_4_ = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
    local_18 = 0.0;
    cVar3 = (**(code **)(this->_padding_ + 0x198))
                      ((int)local_28._0_8_,param_1,local_28,param_3,param_4);
    if (cVar3 == '\0') {
      dVar1 = (double)local_28._8_8_ * _UNK_15076c718;
      local_28._8_4_ = SUB84(dVar1,0);
      local_28._0_8_ = (double)local_28._0_8_ * ___xmm_bff0000000000000bff0000000000000;
      local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_18 = local_18 * ___xmm_bff0000000000000bff0000000000000;
      cVar3 = (**(code **)(this->_padding_ + 0x198))(this,param_1,local_28,param_3,param_4);
      if (cVar3 == '\0') goto LAB_147707cf1;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_28._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  }
  return __return_storage_ptr__;
}

// GetMaxBrakingDeceleration @ 1477086c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetMaxBrakingDeceleration
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  switch(param_1->MovementMode) {
  default:
    return 0.0;
  case MOVE_Walking:
  case MOVE_NavWalking:
    return this->BrakingDecelerationWalking;
  case MOVE_Falling:
    return this->BrakingDecelerationFalling;
  case MOVE_Swimming:
    return this->BrakingDecelerationSwimming;
  case MOVE_Flying:
    return this->BrakingDecelerationFlying;
  }
}

// GetMaxSpeed @ 147708730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetMaxSpeed
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  char cVar1;
  
  switch(param_1->MovementMode) {
  default:
    return 0.0;
  case MOVE_Walking:
  case MOVE_NavWalking:
    cVar1 = (**(code **)(this->_padding_ + 0x260))(this);
    if (cVar1 != '\0') {
      return this->MaxWalkSpeedCrouched;
    }
switchD_147708754_caseD_3:
    return this->MaxWalkSpeed;
  case MOVE_Falling:
    goto switchD_147708754_caseD_3;
  case MOVE_Swimming:
    return this->MaxSwimSpeed;
  case MOVE_Flying:
    return this->MaxFlySpeed;
  case MOVE_Custom:
    return this->MaxCustomMovementSpeed;
  }
}

// GetMinAnalogSpeed @ 1477087e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetMinAnalogSpeed
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  EMovementMode EVar1;
  
  EVar1 = param_1->MovementMode;
  if (((EVar1 != MOVE_Walking) && (EVar1 != MOVE_NavWalking)) && (EVar1 != MOVE_Falling)) {
    return 0.0;
  }
  return this->MinAnalogWalkSpeed;
}

// GetPawnCapsuleCollisionShape @ 147708e80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCollisionShape * __thiscall
FCharacterMovementComponentAsyncInput::GetPawnCapsuleCollisionShape
          (FCharacterMovementComponentAsyncInput *this,FCollisionShape *__return_storage_ptr__,
          EShrinkCapsuleExtent param_1,FCharacterMovementComponentAsyncOutput *param_2,float param_3
          )

{
  float fVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  FCollisionShape *pFVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2->ScaledCapsuleHalfHeight;
  dVar3 = (double)param_2->ScaledCapsuleRadius;
  dVar4 = (double)fVar1;
  if (param_1 != SHRINK_None) {
    fVar7 = param_3;
    fVar8 = 0.0;
    if ((((param_1 != SHRINK_RadiusCustom) &&
         (fVar7 = 0.0, fVar8 = param_3, param_1 != SHRINK_HeightCustom)) &&
        (fVar7 = param_3, param_1 != SHRINK_AllCustom)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2137651385527693802>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                           ,0xe16,"false"), fVar7 = 0.0, fVar8 = 0.0, bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCollisionShape *)(*pcVar2)();
      return pFVar6;
    }
    dVar3 = dVar3 - (double)fVar7;
    if (dVar3 <= __real_3f50624dc0000000) {
      dVar3 = __real_3f50624dc0000000;
    }
    dVar4 = (double)fVar1 - (double)fVar8;
    if (dVar4 <= __real_3f50624dc0000000) {
      dVar4 = __real_3f50624dc0000000;
    }
  }
  __return_storage_ptr__->ShapeType = Capsule;
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentX = (float)dVar3;
  (__return_storage_ptr__->field1_0x4).Box.HalfExtentY = (float)dVar4;
  return __return_storage_ptr__;
}

// GetPawnCapsuleExtent @ 147708f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::GetPawnCapsuleExtent
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          EShrinkCapsuleExtent param_1,float param_2,FCharacterMovementComponentAsyncOutput *param_3
          )

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  TVector<double> *pTVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar5 = (double)param_3->ScaledCapsuleRadius;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)param_3->ScaledCapsuleHalfHeight;
  if (param_1 != SHRINK_None) {
    fVar6 = param_2;
    fVar7 = 0.0;
    if ((((param_1 != SHRINK_RadiusCustom) &&
         (fVar6 = 0.0, fVar7 = param_2, param_1 != SHRINK_HeightCustom)) &&
        (fVar6 = param_2, param_1 != SHRINK_AllCustom)) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2137651385527693802>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                           ,0xe16,"false"), fVar6 = 0.0, fVar7 = 0.0, bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.X - (double)fVar6;
    if (dVar5 <= __real_3f50624dc0000000) {
      dVar5 = __real_3f50624dc0000000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Z - (double)fVar7;
    if (dVar5 <= __real_3f50624dc0000000) {
      dVar5 = __real_3f50624dc0000000;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5;
  }
  return __return_storage_ptr__;
}

// GetPenetrationAdjustment @ 147709080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::GetPenetrationAdjustment
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          FHitResult *param_1)

{
  ENetRole EVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  AActor *pAVar6;
  UClass *pUVar7;
  TVector<double> *pTVar8;
  double dVar9;
  float fVar10;
  undefined1 local_58 [16];
  double local_48;
  TVector<double> local_38 [2];
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1->bStartPenetrating == '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    fVar10 = param_1->PenetrationDepth;
    if (param_1->PenetrationDepth <= 0.0) {
      fVar10 = __real_3e000000;
    }
    dVar9 = (double)(fVar10 + (float)((uint)MovementComponentCVars::PenetrationPullbackDistance &
                                     __xmm_7fffffff7fffffff7fffffff7fffffff));
    local_48 = dVar9 * *(double *)&(param_1->Normal).field_0x10;
    dVar3 = dVar9 * *(double *)&param_1->Normal;
    dVar9 = dVar9 * *(double *)&(param_1->Normal).field_0x8;
    local_58._8_4_ = SUB84(dVar9,0);
    local_58._0_8_ = dVar3;
    local_58._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_38[0].field0_0x0._16_8_ = local_48;
    (**(code **)(this->_padding_ + 0x90))(SUB84(dVar3,0),dVar9,local_58);
  }
  EVar1 = ((this->CharacterInput).Ptr)->LocalRole;
  lVar5 = 0xc0;
  if (EVar1 != ROLE_SimulatedProxy) {
    lVar5 = 0xc4;
  }
  fVar10 = *(float *)((longlong)&this->_padding_ + lVar5);
  pAVar6 = FActorInstanceHandle::FetchActor(&param_1->HitObjectHandle);
  if (pAVar6 != (AActor *)0x0) {
    pUVar7 = Z_Construct_UClass_APawn_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      if (EVar1 == ROLE_SimulatedProxy) {
        fVar10 = this->MaxDepenetrationWithPawnAsProxy;
      }
      else {
        fVar10 = this->MaxDepenetrationWithPawn;
      }
    }
  }
  pTVar8 = UE::Math::TVector<double>::GetClampedToMaxSize
                     (__return_storage_ptr__,local_38,(double)fVar10);
  dVar3 = (pTVar8->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetPerchRadiusThreshold @ 147709940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetPerchRadiusThreshold
          (FCharacterMovementComponentAsyncInput *this)

{
  float fVar1;
  
  fVar1 = this->PerchRadiusThreshold;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetSimulationTimeStep @ 14770aad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetSimulationTimeStep
          (FCharacterMovementComponentAsyncInput *this,float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->MaxSimulationTimeStep;
  fVar2 = param_1;
  if (((fVar1 < param_1) && (param_2 < this->MaxSimulationIterations)) &&
     (fVar2 = param_1 * __real_3f000000, fVar1 <= param_1 * __real_3f000000)) {
    fVar2 = fVar1;
  }
  fVar1 = UCharacterMovementComponent::MIN_TICK_TIME;
  if (UCharacterMovementComponent::MIN_TICK_TIME <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}

// GetTeleportType @ 14770aee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ETeleportType __thiscall
FCharacterMovementComponentAsyncInput::GetTeleportType
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  return param_1->bJustTeleported != false;
}

// GetValidPerchRadius @ 14770b170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::GetValidPerchRadius
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1->ScaledCapsuleRadius;
  fVar3 = this->PerchRadiusThreshold;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar2 = fVar1 - fVar3;
  if (fVar1 <= fVar1 - fVar3) {
    fVar2 = fVar1;
  }
  if (fVar2 <= __real_3de147ae) {
    fVar2 = __real_3de147ae;
  }
  return fVar2;
}

// HandleImpact @ 1477129a0

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
FCharacterMovementComponentAsyncInput::HandleImpact
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2,float param_3,TVector<double> *param_4)

{
  return;
}

// HandleSlopeBoosting @ 1477129b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::HandleSlopeBoosting
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,TVector<double> *param_4,
          FHitResult *param_5,FCharacterMovementComponentAsyncOutput *param_6)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58 [3];
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  local_88._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (dVar1 <= 0.0) {
    return __return_storage_ptr__;
  }
  fVar6 = (float)((double)param_3 * (param_2->field0_0x0)._s_0.Z);
  dVar3 = (double)fVar6;
  if (dVar1 - dVar3 <= __real_3f1a36e2e0000000) {
    return __return_storage_ptr__;
  }
  if (fVar6 <= 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88._s_0.Z;
  }
  else {
    dVar7 = (double)(float)(dVar3 / dVar1);
    dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar7;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.X * dVar7;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7 * dVar1;
  }
  local_58[0]._s_0.Z = 0.0;
  local_88._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Y - (__return_storage_ptr__->field0_0x0)._s_0.Y;
  local_58[0]._8_4_ = SUB84(dVar1,0);
  local_58[0]._0_8_ = (param_1->field0_0x0)._s_0.X - (__return_storage_ptr__->field0_0x0)._s_0.X;
  local_58[0]._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = local_88._s_0.Y * local_88._s_0.Y + local_88._s_0.X * local_88._s_0.X;
  if (dVar1 == __real_3ff0000000000000) {
    if ((param_4->field0_0x0)._s_0.Z == 0.0) {
      local_88._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      goto LAB_147712b03;
    }
  }
  else {
    if (dVar1 < __real_3e45798ee0000000) {
      local_88._s_0.X = (double)uVar4;
      local_88._s_0.Y = (double)uVar5;
      goto LAB_147712b03;
    }
    local_88._s_0.X = local_88._s_0.X * (__real_3ff0000000000000 / SQRT(dVar1));
    local_88._s_0.Y = local_88._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar1));
  }
  local_88._s_0.Z = 0.0;
LAB_147712b03:
  MoveComponent_ComputeSlideVector
            (this,(TVector<double> *)&local_70._s_0,(TVector<double> *)&local_58[0]._s_0,
             __real_3f800000,(TVector<double> *)&local_88._s_0,param_5,param_6);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       local_70._s_0.X + (__return_storage_ptr__->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       local_70._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       local_70._s_0.Z + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// HandleWalkingOffLedge @ 147712ba0

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
FCharacterMovementComponentAsyncInput::HandleWalkingOffLedge
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2137651385527693692>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                     ,0xe84,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// IsCrouching @ 147714800

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
FCharacterMovementComponentAsyncInput::IsCrouching
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  return param_1->bIsCrouched;
}

// IsExceedingMaxSpeed @ 1477148c0

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
FCharacterMovementComponentAsyncInput::IsExceedingMaxSpeed
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_2->Velocity).field0_0x0._s_0.Y;
  dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar3 = (param_2->Velocity).field0_0x0._s_0.X;
  return (double)(param_1 * param_1 * __real_3f8147ae) <
         dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
}

// IsFalling @ 147714920

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
FCharacterMovementComponentAsyncInput::IsFalling
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  return param_1->MovementMode == MOVE_Falling;
}

// IsFlying @ 147714970

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
FCharacterMovementComponentAsyncInput::IsFlying
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  return param_1->MovementMode == MOVE_Flying;
}

// IsJumpAllowed @ 147714980

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
FCharacterMovementComponentAsyncInput::IsJumpAllowed(FCharacterMovementComponentAsyncInput *this)

{
  if ((this->bNavAgentPropsCanJump != false) && (this->bMovementStateCanJump != false)) {
    return true;
  }
  return false;
}

// IsMovingOnGround @ 147714a30

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
FCharacterMovementComponentAsyncInput::IsMovingOnGround
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  if ((param_1->MovementMode != MOVE_Walking) && (param_1->MovementMode != MOVE_NavWalking)) {
    return false;
  }
  return true;
}

// IsValidLandingSpot @ 147714ba0

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
FCharacterMovementComponentAsyncInput::IsValidLandingSpot
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,FHitResult *param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  double dVar3;
  uint local_128 [4];
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2->bBlockingHit != 0) {
    if (param_2->bStartPenetrating == '\0') {
      cVar2 = (**(code **)(this->_padding_ + 0xf8))(this,param_2);
      if (cVar2 == '\0') {
        return false;
      }
      dVar3 = (*(double *)&(param_2->Location).field_0x10 - (double)param_3->ScaledCapsuleHalfHeight
              ) + (double)param_3->ScaledCapsuleRadius;
      puVar1 = &(param_2->ImpactPoint).field_0x10;
      if (dVar3 < *(double *)puVar1 || dVar3 == *(double *)puVar1) {
        return false;
      }
      cVar2 = (**(code **)(this->_padding_ + 0xf0))(this);
      if (cVar2 == '\0') {
        return false;
      }
    }
    else {
      puVar1 = &(param_2->Normal).field_0x10;
      if (*(double *)puVar1 <= __real_3f1a36e2e0000000 &&
          __real_3f1a36e2e0000000 != *(double *)puVar1) {
        return false;
      }
    }
    local_128[0] = local_128[0] & 0xfffffff8;
    local_128[1] = 0;
    local_128[2] = 0;
    local_68 = 0;
    local_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_20 = 0;
    memset(local_118,0,0x100);
    local_60 = 0;
    uStack_58 = 0;
    local_74 = 0xffffffff;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0xffffffff;
    uStack_44 = 0;
    local_114 = 0x3f800000;
    (**(code **)(this->_padding_ + 0xd8))(this,param_1,local_128,0,param_3,param_2);
    if (((byte)local_128[0] & 3) == 3) {
      return true;
    }
  }
  return false;
}

// IsWalkable @ 147714d20

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
FCharacterMovementComponentAsyncInput::IsWalkable
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1)

{
  double dVar1;
  
  if ((param_1->bBlockingHit == '\x01' && param_1->bStartPenetrating == '\0') &&
     (dVar1 = *(double *)&(param_1->ImpactNormal).field_0x10, __real_3f1a36e2e0000000 <= dVar1)) {
    return (double)this->WalkableFloorZ <= dVar1;
  }
  return false;
}

// IsWithinEdgeTolerance @ 147714d60

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
FCharacterMovementComponentAsyncInput::IsWithinEdgeTolerance
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TVector<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar3 = param_3 - UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE;
  if (param_3 - UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE <=
      UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE + __real_38d1b717) {
    fVar3 = UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE + __real_38d1b717;
  }
  return (float)(dVar1 * dVar1 + dVar2 * dVar2) < fVar3 * fVar3;
}

// LimitAirControl @ 147715320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::LimitAirControl
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2,FHitResult *param_3,bool param_4,
          FCharacterMovementComponentAsyncOutput *param_5)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  char cVar11;
  TVector<double> *pTVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TVector<double>_u_0 local_88 [5];
  
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar10 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  dVar13 = (param_2->field0_0x0)._s_0.Z;
  local_88[0]._s_0.X = dVar9;
  local_88[0]._s_0.Y = dVar10;
  local_88[0]._s_0.Z = dVar13;
  if (param_3->bBlockingHit == 0) {
    if (param_3->bStartPenetrating == '\0') goto LAB_1477154fd;
  }
  else if (param_3->bStartPenetrating == '\0') {
    if (((double)CharacterMovementConstants::VERTICAL_SLOPE_NORMAL_Z <
         *(double *)&(param_3->Normal).field_0x10) &&
       ((!param_4 ||
        (cVar11 = (**(code **)(this->_padding_ + 0x210))
                            (SUB84((double)CharacterMovementConstants::VERTICAL_SLOPE_NORMAL_Z,0),
                             &param_3->Location,param_3,param_5), cVar11 == '\0')))) {
      dVar2 = *(double *)&param_3->Normal;
      dVar3 = *(double *)&(param_3->Normal).field_0x10;
      dVar4 = *(double *)&(param_3->Normal).field_0x8;
      dVar5 = (param_2->field0_0x0)._s_0.Z;
      dVar6 = (param_2->field0_0x0)._s_0.X;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      if (dVar4 * dVar7 + dVar2 * dVar6 + dVar3 * dVar5 < 0.0) {
        dVar13 = dVar4 * dVar4 + dVar2 * dVar2;
        if (dVar13 == __real_3ff0000000000000) {
          uVar14 = dVar4;
          uVar15 = dVar2;
          uVar16 = 0.0;
          if (dVar3 == 0.0) {
            uVar14 = *(double *)&(param_3->Normal).field_0x8;
            uVar15 = *(double *)&param_3->Normal;
            uVar16 = *(double *)&(param_3->Normal).field_0x10;
          }
        }
        else {
          uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (__real_3e45798ee0000000 <= dVar13) {
            uVar14 = (__real_3ff0000000000000 / SQRT(dVar13)) * dVar4;
            uVar15 = dVar2 * (__real_3ff0000000000000 / SQRT(dVar13));
            uVar16 = 0.0;
          }
        }
        dVar13 = dVar7 * (double)uVar14 + dVar6 * (double)uVar15 + dVar5 * (double)uVar16;
        dVar9 = dVar6 - dVar13 * (double)uVar15;
        dVar10 = dVar7 - dVar13 * (double)uVar14;
        dVar13 = dVar5 - dVar13 * (double)uVar16;
      }
    }
LAB_1477154fd:
    auVar8._8_4_ = SUB84(dVar10,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar13;
    return __return_storage_ptr__;
  }
  pTVar12 = (TVector<double> *)local_88;
  if (dVar10 * *(double *)&(param_3->Normal).field_0x8 + dVar9 * *(double *)&param_3->Normal +
      dVar13 * *(double *)&(param_3->Normal).field_0x10 <= 0.0) {
    pTVar12 = &UE::Math::TVector<double>::ZeroVector;
  }
  dVar9 = ((TVector<double>_u_0_s_0 *)pTVar12)->Y;
  dVar13 = ((TVector<double>_u_0_s_0 *)pTVar12)->Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (((TVector<double>_u_0 *)&((TVector<double>_u_0_s_0 *)pTVar12)->X)->_s_0).X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar13;
  return __return_storage_ptr__;
}

// MaintainHorizontalGroundVelocity @ 14771a4e0

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
FCharacterMovementComponentAsyncInput::MaintainHorizontalGroundVelocity
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  dVar3 = (param_1->Velocity).field0_0x0._s_0.Z;
  uVar6 = 0;
  uVar7 = 0;
  if (dVar3 != 0.0) {
    if (this->bMaintainHorizontalGroundVelocity != false) {
      (param_1->Velocity).field0_0x0._s_0.Z = 0.0;
      return;
    }
    uVar1 = (param_1->Velocity).field0_0x0._s_0.X;
    uVar2 = (param_1->Velocity).field0_0x0._s_0.Y;
    dVar5 = (double)uVar2 * (double)uVar2 + (double)uVar1 * (double)uVar1;
    if (dVar5 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar5) {
        uVar2 = (double)uVar2 * (__real_3ff0000000000000 / SQRT(dVar5));
        uVar1 = (double)uVar1 * (__real_3ff0000000000000 / SQRT(dVar5));
      }
      else {
        uVar6 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar7 = (undefined4)
                ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar3 * dVar3 + dVar5;
    auVar4 = sqrtpd(in_XMM2,auVar4);
    dVar3 = auVar4._0_8_;
    (param_1->Velocity).field0_0x0._s_0.X = dVar3 * (double)uVar1;
    (param_1->Velocity).field0_0x0._s_0.Y = dVar3 * (double)uVar2;
    (param_1->Velocity).field0_0x0._s_0.Z = dVar3 * (double)CONCAT44(uVar7,uVar6);
  }
  return;
}

// MaybeUpdateBasedMovement @ 14771a5f0

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
FCharacterMovementComponentAsyncInput::MaybeUpdateBasedMovement
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->NewMovementBase != (this->MovementBaseAsyncData).CachedMovementBase) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4717179430353501943>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CharacterMovementComponentAsync.h"
                       ,0x109,"Output.NewMovementBase == CachedMovementBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_2->bDeferUpdateBasedMovement = false;
  if ((this->MovementBaseAsyncData).bMovementBaseUsesRelativeLocationCached != false) {
    if ((this->MovementBaseAsyncData).bMovementBaseIsSimulatedCached == false) {
      (**(code **)(this->_padding_ + 0x30))(this,param_1,param_2);
      param_2->bShouldDisablePostPhysicsTick = true;
      param_2->bShouldAddMovementBaseTickDependency = true;
      return;
    }
    param_2->bDeferUpdateBasedMovement = true;
    param_2->bShouldRemoveMovementBaseTickDependency = true;
  }
  param_2->bShouldEnablePostPhysicsTick = true;
  return;
}

// MoveAlongFloor @ 14771a6c0

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
FCharacterMovementComponentAsyncInput::MoveAlongFloor
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,float param_2,
          FStepDownResult *param_3,FCharacterMovementComponentAsyncOutput *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  char cVar3;
  TQuat<double> *pTVar4;
  undefined8 *puVar5;
  AActor *pAVar6;
  TVector<double> *pTVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_fffffffffffffde8;
  undefined1 *puVar14;
  ulonglong in_stack_fffffffffffffdf8;
  undefined1 local_1f8 [16];
  double local_1e8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178 [4];
  float local_174;
  undefined1 local_138 [16];
  double local_128;
  undefined4 local_d4;
  byte local_cb;
  FActorInstanceHandle local_c0 [5];
  
  uVar1 = *(undefined4 *)&param_4->CurrentFloor;
  if (((undefined4 *)&param_4->CurrentFloor)->bBlockingHit == 1 &&
      (param_4->CurrentFloor).bWalkableFloor == 1) {
    dVar8 = (double)param_2 * (param_1->field0_0x0)._s_0.Y;
    local_1f8._8_4_ = SUB84(dVar8,0);
    local_1f8._0_8_ = (double)param_2 * (param_1->field0_0x0)._s_0.X;
    local_1f8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_1e8 = 0.0;
    memset(local_178,0,0x100);
    fVar12 = __real_3f800000;
    uStack_1b0 = 0xffffffff;
    local_c0[0].ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_c0[0].ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_c0[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_c0[0].ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_1c8._s_0.Z = 0.0;
    uStack_1ac = 0;
    local_c0[0].ManagerInterface.InterfaceInstance._0_4_ = 0;
    local_c0[0].ManagerInterface.InterfaceInstance._4_4_ = 0;
    local_c0[0].InstanceIndex = -1;
    local_c0[0].ResolutionStatus = Invalid;
    local_c0[0]._29_3_ = 0;
    local_d4 = 0xffffffff;
    local_174 = 1.0;
    (**(code **)(this->_padding_ + 0x60))
              (this,&local_1a8,local_1f8,&(param_4->CurrentFloor).HitResult,
               CONCAT71((int7)((ulonglong)in_stack_fffffffffffffde8 >> 8),(char)((uint)uVar1 >> 2))
               & 0xffffffffffffff01,param_4);
    pcVar2 = *(code **)(this->_padding_ + 0xb0);
    pTVar4 = FUpdatedComponentAsyncInput::GetRotation
                       ((this->UpdatedComponentInput).Ptr,(TQuat<double> *)&local_1c8._s_0);
    puVar14 = local_178;
    in_stack_fffffffffffffdf8 = in_stack_fffffffffffffdf8 & 0xffffffffffffff00;
    (*pcVar2)(this,&local_1a8,pTVar4,1,puVar14,param_4,in_stack_fffffffffffffdf8);
    fVar11 = local_174;
    if ((local_cb & 2) == 0) {
      if ((local_cb & 1) != 0) {
        fVar13 = param_2;
        if (((0.0 < local_174) && (__real_3f1a36e2e0000000 < local_128)) &&
           (cVar3 = (**(code **)(this->_padding_ + 0xf8))(this,local_178), cVar3 != '\0')) {
          fVar10 = fVar12 - fVar11;
          dVar8 = (double)fVar10;
          local_1e0._s_0.Z = dVar8 * local_1e8;
          local_1e0._8_4_ = SUB84((double)local_1f8._8_8_ * dVar8,0);
          local_1e0._0_8_ = (double)local_1f8._0_8_ * dVar8;
          local_1e0._12_4_ = (int)((ulonglong)((double)local_1f8._8_8_ * dVar8) >> 0x20);
          puVar5 = (undefined8 *)
                   (**(code **)(this->_padding_ + 0x60))
                             (this,&local_1c8,&local_1e0,local_178,
                              (ulonglong)puVar14 & 0xffffffffffffff00,param_4);
          fVar13 = fVar10 * param_2;
          local_1a8 = *puVar5;
          uStack_1a0 = puVar5[1];
          local_198 = puVar5[2];
          pcVar2 = *(code **)(this->_padding_ + 0xb0);
          pTVar4 = FUpdatedComponentAsyncInput::GetRotation
                             ((this->UpdatedComponentInput).Ptr,(TQuat<double> *)&local_1c8._s_0);
          (*pcVar2)(this,&local_1a8,pTVar4,1,local_178,param_4,
                    in_stack_fffffffffffffdf8 & 0xffffffffffffff00);
          fVar11 = fVar10 * local_174 + fVar11;
          if (fVar12 <= fVar11) {
            fVar11 = fVar12;
          }
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
        }
        if ((((local_cb & 1) != 0) && ((local_cb & 2) == 0)) &&
           ((cVar3 = (**(code **)(this->_padding_ + 0x178))(this,local_178,param_4), cVar3 != '\0'
            || ((param_4->NewMovementBase != (UPrimitiveComponent *)0x0 &&
                (pAVar6 = FActorInstanceHandle::FetchActor(local_c0),
                param_4->NewMovementBaseOwner == pAVar6)))))) {
          FUpdatedComponentAsyncInput::GetPosition
                    ((this->UpdatedComponentInput).Ptr,(TVector<double> *)&local_1c8._s_0);
          fVar12 = fVar12 - fVar11;
          local_190 = 0;
          uStack_188 = 0;
          local_180 = __real_bff0000000000000;
          dVar8 = (double)fVar12;
          local_1e0._s_0.Z = dVar8 * local_1e8;
          local_1e0._8_4_ = SUB84((double)local_1f8._8_8_ * dVar8,0);
          local_1e0._0_8_ = (double)local_1f8._0_8_ * dVar8;
          local_1e0._12_4_ = (int)((ulonglong)((double)local_1f8._8_8_ * dVar8) >> 0x20);
          cVar3 = (**(code **)(this->_padding_ + 0x180))
                            (this,&local_190,&local_1e0,local_178,param_4,param_3);
          if (cVar3 == '\0') {
            (**(code **)(this->_padding_ + 0x150))(this,local_178,param_4,fVar13,&local_1a8);
            (**(code **)(this->_padding_ + 0x158))
                      (this,local_1f8,fVar12,local_138,local_178,1,param_4);
          }
          else if (this->bMaintainHorizontalGroundVelocity == false) {
            param_4->bJustTeleported = true;
            if ((((this->RootMotion).bHasAnimRootMotion == false) &&
                ((this->RootMotion).bHasOverrideRootMotion == false)) &&
               (__real_38d1b717 <= fVar12 * param_2)) {
              pTVar7 = FUpdatedComponentAsyncInput::GetPosition
                                 ((this->UpdatedComponentInput).Ptr,
                                  (TVector<double> *)&local_1e0._s_0);
              dVar8 = (pTVar7->field0_0x0)._s_0.Y;
              dVar9 = __real_3ff0000000000000 / (double)(fVar12 * param_2);
              (param_4->Velocity).field0_0x0._s_0.X =
                   ((pTVar7->field0_0x0)._s_0.X - local_1c8._s_0.X) * dVar9;
              (param_4->Velocity).field0_0x0._s_0.Y = (dVar8 - local_1c8._s_0.Y) * dVar9;
              (param_4->Velocity).field0_0x0._s_0.Z = 0.0;
            }
          }
        }
      }
    }
    else {
      (**(code **)(this->_padding_ + 0x150))
                (this,local_178,param_4,0,&UE::Math::TVector<double>::ZeroVector);
      (**(code **)(this->_padding_ + 0x158))(this,local_1f8,fVar12,local_138,local_178,1,param_4);
      if ((local_cb & 2) != 0) {
        (**(code **)(this->_padding_ + 0x170))(this,local_178,param_4);
      }
    }
  }
  return;
}

// MoveComponent_ComputeSlideVector @ 14771b9f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::MoveComponent_ComputeSlideVector
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,float param_2,TVector<double> *param_3,FHitResult *param_4,
          FCharacterMovementComponentAsyncOutput *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  
  if (this->bConstrainToPlane == false) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (double)param_2;
    dVar5 = dVar2 * (param_3->field0_0x0)._s_0.Y + dVar1 * (param_3->field0_0x0)._s_0.X +
            dVar3 * (param_3->field0_0x0)._s_0.Z;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    dVar7 = (param_3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (dVar1 - dVar5 * (param_3->field0_0x0)._s_0.X) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar5 * dVar4) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar5 * dVar7) * dVar6;
  }
  else {
    local_78 = *(undefined4 *)&param_3->field0_0x0;
    uStack_74 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uStack_70 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_6c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_68 = (param_3->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x98))(local_78,&local_98,&local_78);
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar7 = (double)param_2;
    dVar4 = dVar2 * local_90 + dVar1 * local_98 + dVar3 * local_88;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 - dVar4 * local_98) * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar4 * local_90) * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar4 * local_88) * dVar7;
  }
  return __return_storage_ptr__;
}

// MoveComponent_GetPenetrationAdjustment @ 14771bb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::MoveComponent_GetPenetrationAdjustment
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          FHitResult *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 local_28 [16];
  double local_18;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1->bStartPenetrating == '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  fVar4 = param_1->PenetrationDepth;
  if (param_1->PenetrationDepth <= 0.0) {
    fVar4 = __real_3e000000;
  }
  fVar4 = fVar4 + (float)((uint)MovementComponentCVars::PenetrationPullbackDistance &
                         __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_18 = (double)fVar4;
  dVar1 = *(double *)&param_1->Normal * local_18;
  dVar2 = *(double *)&(param_1->Normal).field_0x8 * local_18;
  local_18 = local_18 * *(double *)&(param_1->Normal).field_0x10;
  local_28._8_4_ = SUB84(dVar2,0);
  local_28._0_8_ = dVar1;
  local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (**(code **)(this->_padding_ + 0x90))(SUB84(dVar1,0),fVar4,local_28);
  return __return_storage_ptr__;
}

// MoveComponent_SlideAlongSurface @ 14771bc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FCharacterMovementComponentAsyncInput::MoveComponent_SlideAlongSurface
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,float param_2,
          TVector<double> *param_3,FHitResult *param_4,
          FCharacterMovementComponentAsyncOutput *param_5,bool param_6)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  undefined4 in_XMM2_Db;
  float fVar4;
  FCharacterMovementComponentAsyncOutput *pFVar5;
  ulonglong uVar6;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TQuat<double> local_58 [2];
  
  if (param_4->bBlockingHit != 0) {
    local_70._0_4_ = *(undefined4 *)&param_3->field0_0x0;
    local_70._4_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    local_70._8_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    local_70._12_4_ = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_70._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    pFVar5 = param_5;
    (**(code **)(this->_padding_ + 0x160))
              (local_70._0_4_,&local_88,param_1,CONCAT44(in_XMM2_Db,param_2),param_3,param_4,param_5
              );
    if (0.0 < local_88._s_0.X * (param_1->field0_0x0)._s_0.X +
              local_88._s_0.Y * (param_1->field0_0x0)._s_0.Y +
              local_88._s_0.Z * (param_1->field0_0x0)._s_0.Z) {
      FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,local_58);
      uVar6 = (ulonglong)pFVar5 & 0xffffffffffffff00;
      (**(code **)(this->_padding_ + 0xb0))(this,&local_88,local_58,1,param_4,param_5,uVar6);
      fVar2 = param_4->Time;
      if (param_4->bBlockingHit == '\x01' && param_4->bStartPenetrating == '\0') {
        if (param_6) {
          (**(code **)(this->_padding_ + 0x150))(this,param_4,param_5,fVar2 * param_2,&local_88);
        }
        TwoWallAdjust(this,(TVector<double> *)&local_88._s_0,param_4,
                      (TVector<double> *)&local_70._s_0,param_5);
        uVar1 = SUB84(local_88._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar3 = (uint)((ulonglong)local_88._0_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((__real_3f50624de0000000 <= (double)CONCAT44(uVar3,uVar1) &&
               (double)CONCAT44(uVar3,uVar1) != __real_3f50624de0000000) ||
             (uVar1 = SUB84(local_88._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar3 = (uint)((ulonglong)local_88._8_8_ >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f50624de0000000 <= (double)CONCAT44(uVar3,uVar1) &&
             (double)CONCAT44(uVar3,uVar1) != __real_3f50624de0000000)) ||
            (uVar1 = SUB84(local_88._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar3 = (uint)((ulonglong)local_88._16_8_ >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f50624de0000000 <= (double)CONCAT44(uVar3,uVar1) &&
            (double)CONCAT44(uVar3,uVar1) != __real_3f50624de0000000)) &&
           (0.0 < local_88._s_0.X * (param_1->field0_0x0)._s_0.X +
                  local_88._s_0.Y * (param_1->field0_0x0)._s_0.Y +
                  local_88._s_0.Z * (param_1->field0_0x0)._s_0.Z)) {
          (**(code **)(this->_padding_ + 0xb0))
                    (this,&local_88,local_58,1,param_4,param_5,uVar6 & 0xffffffffffffff00);
          fVar4 = (__real_3f800000 - fVar2) * param_4->Time;
          fVar2 = fVar4 + fVar2;
          if ((param_6) && (param_4->bBlockingHit != 0)) {
            (**(code **)(this->_padding_ + 0x150))(this,param_4,param_5,fVar4 * param_2,&local_88);
          }
        }
      }
      if (__real_3f800000 <= fVar2) {
        fVar2 = __real_3f800000;
      }
      if (0.0 < fVar2) {
        return fVar2;
      }
      return 0.0;
    }
  }
  return 0.0;
}

// MoveUpdatedComponent @ 14771beb0

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
FCharacterMovementComponentAsyncInput::MoveUpdatedComponent
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TQuat<double> *param_2,bool param_3,FCharacterMovementComponentAsyncOutput *param_4,
          FHitResult *param_5,ETeleportType param_6)

{
  FUpdatedComponentAsyncInput *pFVar1;
  undefined1 uVar2;
  undefined7 in_register_00000089;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined1 local_28 [32];
  
  local_48 = *(undefined4 *)&param_1->field0_0x0;
  uStack_44 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uStack_40 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  local_38 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x90))
            (local_48,local_28,&local_48,CONCAT71(in_register_00000089,param_3));
  pFVar1 = (this->UpdatedComponentInput).Ptr;
  uVar2 = (**(code **)(pFVar1->_padding_ + 8))
                    (pFVar1,param_1,param_2,param_3,param_5,param_4->MoveComponentFlags,param_6,this
                     ,param_4);
  return (bool)uVar2;
}

// NewFallVelocity @ 14771bf70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::NewFallVelocity
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,
          FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  TVector<double>_u_0 local_68 [4];
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if (param_3 <= 0.0) {
    return __return_storage_ptr__;
  }
  dVar1 = (double)param_3;
  dVar2 = dVar1 * (param_2->field0_0x0)._s_0.X + (__return_storage_ptr__->field0_0x0)._s_0.X;
  dVar3 = dVar1 * (param_2->field0_0x0)._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  dVar1 = dVar1 * (param_2->field0_0x0)._s_0.Z + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  fVar6 = (float)((uint)this->PhysicsVolumeTerminalVelocity & __xmm_7fffffff7fffffff7fffffff7fffffff
                 );
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  if ((double)(fVar6 * fVar6) < dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1) {
    UE::Math::TVector<double>::GetSafeNormal
              (param_2,(TVector<double> *)&local_68[0]._s_0,__real_3e45798ee0000000,
               &UE::Math::TVector<double>::ZeroVector);
    dVar5 = (double)fVar6;
    if (dVar5 < (double)local_68[0]._8_8_ * dVar3 + dVar2 * (double)local_68[0]._0_8_ +
                dVar1 * (double)local_68[0]._16_8_) {
      dVar4 = (dVar3 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) *
              (double)local_68[0]._8_8_ +
              (dVar2 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) *
              (double)local_68[0]._0_8_ +
              (dVar1 - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) *
              (double)local_68[0]._16_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (dVar2 - dVar4 * (double)local_68[0]._0_8_) + dVar5 * (double)local_68[0]._0_8_;
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           (dVar3 - dVar4 * (double)local_68[0]._8_8_) + (double)local_68[0]._8_8_ * dVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (dVar1 - dVar4 * (double)local_68[0]._16_8_) + (double)local_68[0]._16_8_ * dVar5;
    }
  }
  return __return_storage_ptr__;
}

// OnCharacterStuckInGeometry @ 14771c1f0

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
FCharacterMovementComponentAsyncInput::OnCharacterStuckInGeometry
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  param_2->bJustTeleported = true;
  return;
}

// OnMovementModeChanged @ 14771c5e0

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
FCharacterMovementComponentAsyncInput::OnMovementModeChanged
          (FCharacterMovementComponentAsyncInput *this,EMovementMode param_1,uchar param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  FFindFloorResult *pFVar1;
  code *pcVar2;
  FCharacterAsyncInput *pFVar3;
  float fVar4;
  bool bVar5;
  FSingleParticlePhysicsProxy *pFVar6;
  TVector<double,3> *pTVar7;
  UPrimitiveComponent *pUVar8;
  AActor *pAVar9;
  FSingleParticlePhysicsProxy *this_00;
  double local_38;
  double dStack_30;
  double local_28;
  
  if (this->bHasValidData == false) {
    return;
  }
  if (param_3->MovementMode == MOVE_NavWalking) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2137651385527695739>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                       ,0x685,"false");
    if (bVar5) {
code_r0x00014771c667:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if ((param_1 == MOVE_NavWalking) &&
          (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2137651385527695728>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                              ,0x690,"false"), bVar5)) goto code_r0x00014771c667;
  fVar4 = __real_3f800000;
  if (param_3->MovementMode != MOVE_Walking) {
    pFVar1->bBlockingHit = 0;
    pFVar1->bLineTrace = 0;
    pFVar1->bWalkableFloor = 0;
    (param_3->CurrentFloor).FloorDist = 0.0;
    (param_3->CurrentFloor).LineDist = 0.0;
    FHitResult::Reset(&(param_3->CurrentFloor).HitResult,fVar4,false);
    param_3->bCrouchMaintainsBaseLocation = false;
    param_3->NewMovementBase = (UPrimitiveComponent *)0x0;
    param_3->NewMovementBaseOwner = (AActor *)0x0;
    if ((param_3->MovementMode == MOVE_None) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2137651385527695680>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                           ,0x6c0,"false"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    goto LAB_14771c7f6;
  }
  (param_3->Velocity).field0_0x0._s_0.Z = 0.0;
  param_3->bCrouchMaintainsBaseLocation = true;
  param_3->GroundMovementMode = MOVE_Walking;
  pcVar2 = *(code **)(this->_padding_ + 0xd8);
  this_00 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771c6f9:
    local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pFVar6 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar6 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar6 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771c6f9;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (FSingleParticlePhysicsProxy *)0x0;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
    pTVar7 = Chaos::TParticles<double,3>::GetX
                       ((TParticles<double,3> *)this_00->Handle->_padding_,
                        (int)this_00->Handle->_padding_);
    local_38 = *(double *)pTVar7;
    dStack_30 = *(double *)&pTVar7->field_0x8;
    local_28 = *(double *)&pTVar7->field_0x10;
  }
  (*pcVar2)(this,&local_38,&param_3->CurrentFloor,0,param_3,0);
  (**(code **)(this->_padding_ + 0x1b8))(this,param_3);
  if ((param_3->CurrentFloor).bBlockingHit == 1 && (param_3->CurrentFloor).bWalkableFloor == 1) {
    pUVar8 = (UPrimitiveComponent *)
             FWeakObjectPtr::Get(&(param_3->CurrentFloor).HitResult.Component.WeakPtr);
    param_3->NewMovementBase = pUVar8;
    pAVar9 = FActorInstanceHandle::FetchActor(&(param_3->CurrentFloor).HitResult.HitObjectHandle);
    param_3->NewMovementBaseOwner = pAVar9;
  }
  else {
    param_3->NewMovementBase = (UPrimitiveComponent *)0x0;
    param_3->NewMovementBaseOwner = (AActor *)0x0;
  }
LAB_14771c7f6:
  pFVar3 = (this->CharacterInput).Ptr;
  (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,param_1,this,param_3,param_2);
  return;
}

// PerformMovement @ 14771dd60

/* WARNING: Type propagation algorithm not settling */
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
FCharacterMovementComponentAsyncInput::PerformMovement
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FCharacterAsyncInput *pFVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  char cVar26;
  byte bVar27;
  undefined4 uVar28;
  uint uVar29;
  TVector<double,3> *pTVar30;
  TQuat<double> *pTVar31;
  FSingleParticlePhysicsProxy *pFVar32;
  int iVar33;
  uint uVar34;
  FCharacterMovementComponentAsyncInput *pFVar35;
  FUpdatedComponentAsyncInput *pFVar36;
  FCharacterMovementComponentAsyncOutput *pFVar37;
  TVector<double> *pTVar38;
  FSingleParticlePhysicsProxy *pFVar39;
  undefined1 *puVar40;
  FSingleParticlePhysicsProxy *pFVar41;
  longlong lVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined1 local_a8 [24];
  double dStack_90;
  undefined1 local_88 [24];
  double dStack_70;
  
  pFVar41 = (FSingleParticlePhysicsProxy *)0x0;
  pFVar39 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (pFVar39 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771ddda:
    uVar46 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar47 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  }
  else {
    pFVar32 = pFVar39;
    if (pFVar39->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar32 = pFVar41;
    }
    if (pFVar32 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771ddda;
    if (pFVar39->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar39 = pFVar41;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar39);
    pTVar30 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)pFVar39->Handle->_padding_,
                         (int)pFVar39->Handle->_padding_);
    uVar46 = (undefined4)*(undefined8 *)&pTVar30->field_0x10;
    uVar47 = (undefined4)((ulonglong)*(undefined8 *)&pTVar30->field_0x10 >> 0x20);
    uVar43 = *(undefined4 *)pTVar30;
    uVar28 = *(undefined4 *)&pTVar30->field_0x4;
    uVar44 = *(undefined4 *)&pTVar30->field_0x8;
    uVar45 = *(undefined4 *)&pTVar30->field_0xc;
  }
  auVar19 = stack0xffffffffffffff68;
  bVar8 = param_2->bForceNextFloorCheck;
  local_a8._20_4_ = uVar47;
  local_a8._16_4_ = uVar46;
  dStack_90 = auVar19._8_8_;
  cVar26 = (**(code **)(this->_padding_ + 0x278))(this,param_2);
  if ((cVar26 == '\0') ||
     ((((double)CONCAT44(uVar28,uVar43) == (param_2->LastUpdateLocation).field0_0x0._s_0.X &&
       ((double)CONCAT44(uVar45,uVar44) == (param_2->LastUpdateLocation).field0_0x0._s_0.Y)) &&
      ((double)local_a8._16_8_ == (param_2->LastUpdateLocation).field0_0x0._s_0.Z)))) {
    bVar27 = 0;
  }
  else {
    bVar27 = 1;
  }
  param_2->bForceNextFloorCheck = (bool)(bVar27 | bVar8);
  if ((this->RootMotion).bHasAdditiveRootMotion != false) {
    dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
    dVar3 = (param_2->Velocity).field0_0x0._s_0.X;
    dVar4 = (param_2->LastUpdateVelocity).field0_0x0._s_0.Z;
    dVar5 = (param_2->LastUpdateVelocity).field0_0x0._s_0.X;
    dVar6 = (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
    dVar7 = (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.X;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Y =
         ((param_2->Velocity).field0_0x0._s_0.Y - (param_2->LastUpdateVelocity).field0_0x0._s_0.Y) +
         (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Z = (dVar2 - dVar4) + dVar6;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.X = (dVar3 - dVar5) + dVar7;
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,param_2);
  uVar23 = *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 4);
  uVar24 = *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 8);
  uVar25 = *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 0xc);
  *(undefined4 *)&(param_2->OldVelocity).field0_0x0 = *(undefined4 *)&(param_2->Velocity).field0_0x0
  ;
  *(undefined4 *)((longlong)&(param_2->OldVelocity).field0_0x0 + 4) = uVar23;
  *(undefined4 *)((longlong)&(param_2->OldVelocity).field0_0x0 + 8) = uVar24;
  *(undefined4 *)((longlong)&(param_2->OldVelocity).field0_0x0 + 0xc) = uVar25;
  dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
  *(undefined4 *)&(param_2->OldLocation).field0_0x0 = uVar43;
  *(undefined4 *)((longlong)&(param_2->OldLocation).field0_0x0 + 4) = uVar28;
  *(undefined4 *)((longlong)&(param_2->OldLocation).field0_0x0 + 8) = uVar44;
  *(undefined4 *)((longlong)&(param_2->OldLocation).field0_0x0 + 0xc) = uVar45;
  (param_2->OldVelocity).field0_0x0._s_0.Z = dVar2;
  (param_2->OldLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar47,uVar46);
  (**(code **)(this->_padding_ + 0xb8))(this,param_1,param_2);
  pFVar37 = param_2;
  (**(code **)(this->_padding_ + 0xc0))(this);
  uVar43 = SUB84(pFVar37,0);
  if ((this->RootMotion).bHasAdditiveRootMotion != false) {
    dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
    dVar3 = (param_2->Velocity).field0_0x0._s_0.X;
    dVar4 = (param_2->OldVelocity).field0_0x0._s_0.Z;
    dVar5 = (param_2->OldVelocity).field0_0x0._s_0.X;
    dVar6 = (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
    dVar7 = (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.X;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Y =
         ((param_2->Velocity).field0_0x0._s_0.Y - (param_2->OldVelocity).field0_0x0._s_0.Y) +
         (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.Z = (dVar2 - dVar4) + dVar6;
    (param_2->LastPreAdditiveVelocity).field0_0x0._s_0.X = (dVar3 - dVar5) + dVar7;
  }
  if ((this->RootMotion).bHasOverrideRootMotion == false) {
    if ((this->RootMotion).bHasAnimRootMotion != false) {
LAB_14771df90:
      fVar1 = (this->RootMotion).TimeAccumulated;
      if (0.0 < fVar1) {
        dVar3 = __real_3ff0000000000000 / (double)fVar1;
        dVar2 = dVar3 * (this->RootMotion).AnimTransform.Translation.ZW.m128d_f64[0];
        dVar4 = dVar3 * (this->RootMotion).AnimTransform.Translation.XY.m128d_f64[0];
        dVar3 = dVar3 * (this->RootMotion).AnimTransform.Translation.XY.m128d_f64[1];
        uVar28 = SUB84(dVar3,0);
        local_a8._16_8_ = dVar2;
        uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
        auVar19._8_4_ = uVar28;
        auVar19._0_8_ = dVar4;
        auVar19._12_4_ = uVar44;
        *(undefined1 (*) [16])&(param_2->AnimRootMotionVelocity).field0_0x0 = auVar19;
        (param_2->AnimRootMotionVelocity).field0_0x0._s_0.Z = dVar2;
        pFVar37 = param_2;
        cVar26 = (**(code **)(this->_padding_ + 0x268))(this);
        uVar43 = SUB84(pFVar37,0);
        if (cVar26 != '\0') {
          dVar2 = (param_2->Velocity).field0_0x0._s_0.Z;
          local_a8._16_8_ = dVar2;
        }
        auVar20._8_4_ = uVar28;
        auVar20._0_8_ = dVar4;
        auVar20._12_4_ = uVar44;
        *(undefined1 (*) [16])&(param_2->Velocity).field0_0x0 = auVar20;
        (param_2->Velocity).field0_0x0._s_0.Z = dVar2;
      }
    }
  }
  else {
    if ((this->RootMotion).bHasAnimRootMotion != false) goto LAB_14771df90;
    if (0.0 < param_1) {
      uVar28 = *(undefined4 *)((longlong)&(this->RootMotion).OverrideVelocity.field0_0x0 + 4);
      uVar44 = *(undefined4 *)((longlong)&(this->RootMotion).OverrideVelocity.field0_0x0 + 8);
      uVar45 = *(undefined4 *)((longlong)&(this->RootMotion).OverrideVelocity.field0_0x0 + 0xc);
      *(undefined4 *)&(param_2->Velocity).field0_0x0 =
           *(undefined4 *)&(this->RootMotion).OverrideVelocity.field0_0x0;
      *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 4) = uVar28;
      *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 8) = uVar44;
      *(undefined4 *)((longlong)&(param_2->Velocity).field0_0x0 + 0xc) = uVar45;
      (param_2->Velocity).field0_0x0._s_0.Z = (this->RootMotion).OverrideVelocity.field0_0x0._s_0.Z;
    }
  }
  pFVar9 = (this->CharacterInput).Ptr;
  (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9,param_1,this,param_2);
  param_2->NumJumpApexAttempts = 0;
  (**(code **)(this->_padding_ + 0x38))(this,param_1,0,param_2);
  if (this->bHasValidData == false) {
    return;
  }
  pFVar35 = this;
  uVar28 = (**(code **)(this->_padding_ + 0x100))(this,param_1,param_2);
  uVar44 = SUB84(pFVar35,0);
  if ((this->bAllowPhysicsRotationDuringAnimRootMotion != false) ||
     ((this->RootMotion).bHasAnimRootMotion == false)) {
    pFVar35 = this;
    uVar28 = (**(code **)(this->_padding_ + 0x50))(this,param_1,param_2);
    uVar44 = SUB84(pFVar35,0);
  }
  pTVar38 = &UE::Math::TVector<double>::ZeroVector;
  if ((this->RootMotion).bHasAnimRootMotion == false) {
    if (((this->RootMotion).bHasOverrideRootMotion != false) &&
       (pFVar36 = (this->UpdatedComponentInput).Ptr, pFVar36 != (FUpdatedComponentAsyncInput *)0x0))
    {
      dVar2 = (this->RootMotion).OverrideRotation.Z;
      dVar3 = (this->RootMotion).OverrideRotation.W;
      dVar6 = (this->RootMotion).OverrideRotation.X;
      dVar7 = (this->RootMotion).OverrideRotation.Y;
      dVar4 = dVar6 - UE::Math::TQuat<double>::Identity.X;
      dVar5 = dVar7 - UE::Math::TQuat<double>::Identity.Y;
      dVar6 = dVar6 + UE::Math::TQuat<double>::Identity.X;
      dVar7 = dVar7 + UE::Math::TQuat<double>::Identity.Y;
      dVar18 = UE::Math::TQuat<double>::Identity.Z + dVar2;
      dVar21 = UE::Math::TQuat<double>::Identity.W + dVar3;
      dVar2 = dVar2 - UE::Math::TQuat<double>::Identity.Z;
      dVar3 = dVar3 - UE::Math::TQuat<double>::Identity.W;
      lVar42 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar3,0) & _UNK_15061cc88));
      auVar13._8_4_ = (int)lVar42;
      auVar13._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar13._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      uVar29 = movmskpd(uVar44,auVar13);
      lVar42 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar5,0) & _UNK_15061cc88));
      auVar14._8_4_ = (int)lVar42;
      auVar14._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar14._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      iVar33 = movmskpd(uVar28,auVar14);
      if ((uVar29 & 0x3fffffff) != 0 || iVar33 != 0) {
        lVar42 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar21,0) & _UNK_15061cc88));
        auVar15._8_4_ = (int)lVar42;
        auVar15._0_8_ =
             -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar15._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
        uVar29 = movmskpd(uVar43,auVar15);
        lVar42 = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar7,0) & _UNK_15061cc88));
        auVar17._8_4_ = (int)lVar42;
        auVar17._0_8_ =
             -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar17._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
        iVar33 = movmskpd(iVar33,auVar17);
        if ((uVar29 & 0x3fffffff) != 0 || iVar33 != 0) {
          FUpdatedComponentAsyncInput::GetRotation(pFVar36,(TQuat<double> *)local_a8);
          puVar40 = local_88;
          dVar4 = (this->RootMotion).OverrideRotation.X;
          dVar5 = (this->RootMotion).OverrideRotation.Y;
          dVar6 = (this->RootMotion).OverrideRotation.Z;
          dVar7 = (this->RootMotion).OverrideRotation.W;
          dVar2 = dVar4 * (double)local_a8._16_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  (double)local_a8._8_8_ * dVar7 +
                  dVar5 * dStack_90 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar6 * (double)local_a8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar3 = dVar4 * (double)local_a8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar7 * dStack_90 +
                  (double)local_a8._8_8_ * dVar5 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar6 * (double)local_a8._16_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_88._8_4_ = SUB84(dVar2,0);
          local_88._0_8_ =
               dVar4 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               (double)local_a8._0_8_ * dVar7 +
               dVar5 * (double)local_a8._16_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar6 * (double)local_a8._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          unique0x100010bd = SUB84(dVar3,0);
          local_88._16_8_ =
               dVar4 * (double)local_a8._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar7 * (double)local_a8._16_8_ +
               (double)local_a8._0_8_ * dVar5 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar6 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          unique0x100010c1 = (int)((ulonglong)dVar3 >> 0x20);
          goto LAB_14771e40d;
        }
      }
    }
  }
  else {
    pFVar36 = (this->UpdatedComponentInput).Ptr;
    pTVar31 = FUpdatedComponentAsyncInput::GetRotation(pFVar36,(TQuat<double> *)local_a8);
    dVar2 = (this->RootMotion).AnimTransform.Rotation.ZW.m128d_f64[0];
    dVar3 = (this->RootMotion).AnimTransform.Rotation.ZW.m128d_f64[1];
    dVar4 = (this->RootMotion).AnimTransform.Rotation.XY.m128d_f64[0];
    dVar5 = (this->RootMotion).AnimTransform.Rotation.XY.m128d_f64[1];
    lVar42 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(dVar3 - UE::Math::TQuat<double>::Identity.W) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(dVar3 - UE::Math::TQuat<double>::Identity.W,0) & _UNK_15061cc88
                              ));
    auVar10._8_4_ = (int)lVar42;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)(dVar2 - UE::Math::TQuat<double>::Identity.Z) >> 0x20)
                           & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2 - UE::Math::TQuat<double>::Identity.Z,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
    iVar33 = movmskpd((int)pFVar36,auVar10);
    lVar42 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(dVar5 - UE::Math::TQuat<double>::Identity.Y) >>
                                     0x20) & _UNK_15061cc8c,
                               SUB84(dVar5 - UE::Math::TQuat<double>::Identity.Y,0) & _UNK_15061cc88
                              ));
    auVar11._8_4_ = (int)lVar42;
    auVar11._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)(dVar4 - UE::Math::TQuat<double>::Identity.X) >> 0x20)
                           & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4 - UE::Math::TQuat<double>::Identity.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar11._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
    uVar29 = movmskpd((int)pTVar31,auVar11);
    uVar34 = iVar33 << 2 | uVar29;
    if (uVar34 != 0) {
      lVar42 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.W + dVar3) >>
                                       0x20) & _UNK_15061cc8c,
                                 SUB84(UE::Math::TQuat<double>::Identity.W + dVar3,0) &
                                 _UNK_15061cc88));
      auVar12._8_4_ = (int)lVar42;
      auVar12._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.Z + dVar2) >> 0x20
                                   ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(UE::Math::TQuat<double>::Identity.Z + dVar2,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar12._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      uVar34 = movmskpd(uVar34,auVar12);
      lVar42 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.Y + dVar5) >>
                                       0x20) & _UNK_15061cc8c,
                                 SUB84(UE::Math::TQuat<double>::Identity.Y + dVar5,0) &
                                 _UNK_15061cc88));
      auVar16._8_4_ = (int)lVar42;
      auVar16._0_8_ =
           -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(UE::Math::TQuat<double>::Identity.X + dVar4) >> 0x20
                                   ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(UE::Math::TQuat<double>::Identity.X + dVar4,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar16._12_4_ = (int)((ulonglong)lVar42 >> 0x20);
      iVar33 = movmskpd(uVar29,auVar16);
      if ((uVar34 & 0x3fffffff) != 0 || iVar33 != 0) {
        puVar40 = local_a8;
        dVar21 = dVar4 * (double)local_a8._8_8_;
        dVar18 = (double)local_a8._0_8_ * dVar5;
        dVar6 = dVar2 * (double)local_a8._8_8_;
        dVar22 = dVar2 * dStack_90;
        dVar7 = dVar4 * (double)local_a8._16_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                (double)local_a8._8_8_ * dVar3 +
                dVar5 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                + dVar2 * (double)local_a8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar2 = dVar4 * (double)local_a8._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar3 * dStack_90
                + (double)local_a8._8_8_ * dVar5 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar2 * (double)local_a8._16_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_a8._8_4_ = SUB84(dVar7,0);
        local_a8._0_8_ =
             dVar4 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             (double)local_a8._0_8_ * dVar3 +
             dVar5 * (double)local_a8._16_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        unique0x10000f35 = SUB84(dVar2,0);
        local_a8._16_8_ =
             dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar3 * (double)local_a8._16_8_ +
             dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        unique0x10000f39 = (int)((ulonglong)dVar2 >> 0x20);
LAB_14771e40d:
        (**(code **)(this->_padding_ + 0xa8))
                  (this,&UE::Math::TVector<double>::ZeroVector,puVar40,1,param_2,0,0);
      }
    }
  }
  if (param_2->bHasRequestedVelocity != false) {
    pTVar38 = &param_2->RequestedVelocity;
  }
  dVar2 = (pTVar38->field0_0x0)._s_0.Y;
  (param_2->LastUpdateRequestedVelocity).field0_0x0._s_0.X = (pTVar38->field0_0x0)._s_0.X;
  (param_2->LastUpdateRequestedVelocity).field0_0x0._s_0.Y = dVar2;
  (param_2->LastUpdateRequestedVelocity).field0_0x0._s_0.Z = (pTVar38->field0_0x0)._s_0.Z;
  param_2->bHasRequestedVelocity = false;
  pFVar39 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (pFVar39 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar32 = pFVar39;
    if (pFVar39->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar32 = pFVar41;
    }
    if (pFVar32 != (FSingleParticlePhysicsProxy *)0x0) {
      if (pFVar39->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pFVar39 = pFVar41;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar39);
      pTVar30 = Chaos::TParticles<double,3>::GetX
                          ((TParticles<double,3> *)pFVar39->Handle->_padding_,
                           (int)pFVar39->Handle->_padding_);
      uVar46 = (undefined4)*(undefined8 *)&pTVar30->field_0x10;
      uVar47 = (undefined4)((ulonglong)*(undefined8 *)&pTVar30->field_0x10 >> 0x20);
      uVar43 = *(undefined4 *)pTVar30;
      uVar28 = *(undefined4 *)&pTVar30->field_0x4;
      uVar44 = *(undefined4 *)&pTVar30->field_0x8;
      uVar45 = *(undefined4 *)&pTVar30->field_0xc;
      goto LAB_14771e4d4;
    }
  }
  uVar46 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar47 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_14771e4d4:
  FUpdatedComponentAsyncInput::GetRotation
            ((this->UpdatedComponentInput).Ptr,(TQuat<double> *)local_88);
  (param_2->LastUpdateRotation).X = (double)local_88._0_8_;
  (param_2->LastUpdateRotation).Y = (double)local_88._8_8_;
  *(undefined4 *)&(param_2->LastUpdateLocation).field0_0x0 = uVar43;
  *(undefined4 *)((longlong)&(param_2->LastUpdateLocation).field0_0x0 + 4) = uVar28;
  *(undefined4 *)((longlong)&(param_2->LastUpdateLocation).field0_0x0 + 8) = uVar44;
  *(undefined4 *)((longlong)&(param_2->LastUpdateLocation).field0_0x0 + 0xc) = uVar45;
  (param_2->LastUpdateRotation).Z = (double)local_88._16_8_;
  (param_2->LastUpdateRotation).W = dStack_70;
  (param_2->LastUpdateLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar47,uVar46);
  dVar2 = (param_2->Velocity).field0_0x0._s_0.Y;
  (param_2->LastUpdateVelocity).field0_0x0._s_0.X = (param_2->Velocity).field0_0x0._s_0.X;
  (param_2->LastUpdateVelocity).field0_0x0._s_0.Y = dVar2;
  (param_2->LastUpdateVelocity).field0_0x0._s_0.Z = (param_2->Velocity).field0_0x0._s_0.Z;
  return;
}

// PhysFalling @ 14771e550

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
FCharacterMovementComponentAsyncInput::PhysFalling
          (FCharacterMovementComponentAsyncInput *this,float param_1,int param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  TVector<double> *pTVar1;
  FCharacterAsyncOutput *pFVar2;
  FCharacterAsyncInput *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  char cVar13;
  FSingleParticlePhysicsProxy *pFVar14;
  TVector<double,3> *pTVar15;
  double *pdVar16;
  TVector<double>_u_0 *pTVar17;
  TVector<double> *pTVar18;
  FSingleParticlePhysicsProxy *pFVar19;
  int iVar20;
  float fVar21;
  undefined8 uVar22;
  double extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined4 in_XMM1_Db;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float local_res10;
  TVector<double>_u_0 *in_stack_fffffffffffffba8;
  FCharacterMovementComponentAsyncOutput *pFVar42;
  FCharacterMovementComponentAsyncOutput *in_stack_fffffffffffffbb8;
  undefined1 local_438 [24];
  TVector<double>_u_0 local_420;
  double local_408;
  double dStack_400;
  double local_3f8;
  TVector<double>_u_0 local_3f0;
  undefined4 uStack_3d8;
  undefined1 uStack_3d4;
  undefined2 uStack_3d3;
  undefined1 uStack_3d1;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  undefined4 local_3b8;
  float local_3b4;
  double local_3b0;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double> local_378;
  undefined4 uStack_360;
  undefined1 uStack_35c;
  undefined2 uStack_35b;
  undefined1 uStack_359;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  TQuat<double> local_328;
  TVector<double>_u_0 local_308 [2];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  undefined4 local_264;
  byte local_25b;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1e0;
  uint local_1d8 [4];
  TVector<double>_u_0 local_1c8 [6];
  undefined4 local_124;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  
  local_3b4 = UCharacterMovementComponent::MIN_TICK_TIME;
  if (UCharacterMovementComponent::MIN_TICK_TIME <= param_1) {
    pTVar1 = &param_3->Velocity;
    (**(code **)(this->_padding_ + 0x1e0))(this,&local_358,CONCAT44(in_XMM1_Db,param_1));
    local_348 = 0.0;
    cVar12 = (**(code **)(this->_padding_ + 0x1f8))(this);
    while( true ) {
      fVar36 = __real_3f800000;
      dVar24 = __real_3ff0000000000000;
      uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
      if (this->MaxSimulationIterations <= param_2) break;
      iVar20 = param_2 + 1;
      uVar22 = (**(code **)(this->_padding_ + 0x108))(this);
      fVar21 = (float)uVar22;
      uVar38 = (undefined4)((ulonglong)uVar22 >> 0x20);
      local_res10 = param_1 - fVar21;
      pFVar19 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
      if (pFVar19 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771e6c1:
        local_340 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_338 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_1e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pFVar14 = pFVar19;
        if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar14 = (FSingleParticlePhysicsProxy *)0x0;
        }
        if (pFVar14 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771e6c1;
        if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar19 = (FSingleParticlePhysicsProxy *)0x0;
        }
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar19);
        pTVar15 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pFVar19->Handle->_padding_,
                             (int)pFVar19->Handle->_padding_);
        local_340 = *(double *)pTVar15;
        dStack_338 = *(double *)&pTVar15->field_0x8;
        local_1e0 = *(double *)&pTVar15->field_0x10;
      }
      FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,&local_328);
      param_3->bJustTeleported = false;
      if (param_3->bIsAdditiveVelocityApplied != false) {
        dVar32 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.X;
        dVar7 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
        param_3->bIsAdditiveVelocityApplied = false;
        dVar28 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
        (pTVar1->field0_0x0)._s_0.X = dVar32;
        (param_3->Velocity).field0_0x0._s_0.Y = dVar7;
        (param_3->Velocity).field0_0x0._s_0.Z = dVar28;
      }
      dVar32 = (pTVar1->field0_0x0)._s_0.X;
      dVar7 = (param_3->Velocity).field0_0x0._s_0.Y;
      dVar28 = (param_3->Velocity).field0_0x0._s_0.Z;
      local_3b8 = (**(code **)(this->_padding_ + 0x130))(this,param_3);
      local_378.field0_0x0._s_0.Z = dVar28;
      if (((this->RootMotion).bHasAnimRootMotion == false) &&
         ((this->RootMotion).bHasOverrideRootMotion == false)) {
        dVar27 = (param_3->Acceleration).field0_0x0._s_0.X;
        dVar31 = (param_3->Acceleration).field0_0x0._s_0.Y;
        dVar26 = (param_3->Acceleration).field0_0x0._s_0.Z;
        (param_3->Acceleration).field0_0x0._s_0.X = local_358;
        (param_3->Acceleration).field0_0x0._s_0.Y = dStack_350;
        (param_3->Acceleration).field0_0x0._s_0.Z = local_348;
        (param_3->Velocity).field0_0x0._s_0.Z = 0.0;
        (**(code **)(this->_padding_ + 0x110))(this);
        (param_3->Velocity).field0_0x0._s_0.Z = dVar28;
        (param_3->Acceleration).field0_0x0._s_0.X = dVar27;
        (param_3->Acceleration).field0_0x0._s_0.Y = dVar31;
        (param_3->Acceleration).field0_0x0._s_0.Z = dVar26;
      }
      pFVar2 = (param_3->CharacterOutput).Ptr;
      local_208 = 0;
      uStack_200 = 0;
      bVar9 = false;
      local_1f8 = (double)this->GravityZ;
      fVar25 = pFVar2->JumpForceTimeRemaining;
      fVar39 = fVar21;
      if (0.0 < fVar25) {
        fVar37 = fVar25;
        if (fVar21 <= fVar25) {
          fVar37 = fVar21;
        }
        if ((this->bApplyGravityWhileJumping == false) && (fVar39 = fVar21 - fVar37, fVar39 <= 0.0))
        {
          fVar39 = 0.0;
        }
        pFVar2->JumpForceTimeRemaining = fVar25 - fVar37;
        if (((param_3->CharacterOutput).Ptr)->JumpForceTimeRemaining <= 0.0) {
          pFVar3 = (this->CharacterInput).Ptr;
          (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,this,param_3);
          bVar9 = true;
        }
      }
      pdVar16 = (double *)
                (**(code **)(this->_padding_ + 0x208))
                          (this,&local_378,pTVar1,&local_208,CONCAT44(uVar40,fVar39),param_3);
      dVar26 = pdVar16[1];
      (pTVar1->field0_0x0)._s_0.X = *pdVar16;
      (param_3->Velocity).field0_0x0._s_0.Y = dVar26;
      (param_3->Velocity).field0_0x0._s_0.Z = pdVar16[2];
      if ((((CharacterMovementCVars::ForceJumpPeakSubstep != 0) && (0.0 < dVar28)) &&
          (dVar26 = (param_3->Velocity).field0_0x0._s_0.Z, dVar26 <= 0.0)) &&
         (param_3->NumJumpApexAttempts < this->MaxJumpApexAttemptsPerSimulation)) {
        dVar27 = (param_3->Velocity).field0_0x0._s_0.Y;
        dVar24 = dVar24 / (double)fVar21;
        dVar26 = (dVar26 - dVar28) * dVar24;
        if (((__real_3e45798ee2308c3a <
              (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
            (fVar25 = (float)(double)CONCAT44((uint)((ulonglong)(dVar28 / dVar26) >> 0x20) ^
                                              __xmm_80000000000000008000000000000000._4_4_,
                                              SUB84(dVar28 / dVar26,0) ^
                                              (uint)__xmm_80000000000000008000000000000000),
            __real_38d1b717 <= fVar25)) && (fVar25 < fVar21)) {
          local_res10 = local_res10 + (fVar21 - fVar25);
          uVar38 = 0;
          (pTVar1->field0_0x0)._s_0.X =
               (double)fVar25 * ((pTVar1->field0_0x0)._s_0.X - dVar32) * dVar24 + dVar32;
          (param_3->Velocity).field0_0x0._s_0.Y = (double)fVar25 * (dVar27 - dVar7) * dVar24 + dVar7
          ;
          (param_3->Velocity).field0_0x0._s_0.Z = 0.0;
          param_3->NumJumpApexAttempts = param_3->NumJumpApexAttempts + 1;
          fVar21 = fVar25;
          iVar20 = param_2;
        }
      }
      param_2 = iVar20;
      dVar26 = (double)fVar21;
      dVar27 = (dVar32 + (pTVar1->field0_0x0)._s_0.X) * __real_3fe0000000000000;
      dVar31 = (dVar7 + (param_3->Velocity).field0_0x0._s_0.Y) * __real_3fe0000000000000;
      dVar24 = (dVar28 + (param_3->Velocity).field0_0x0._s_0.Z) * __real_3fe0000000000000;
      local_408 = dVar27 * dVar26;
      dStack_400 = dVar31 * dVar26;
      local_3f8 = dVar24 * dVar26;
      if ((bVar9) && (this->bApplyGravityWhileJumping == false)) {
        dVar5 = (double)fVar39;
        fVar25 = fVar21 - fVar39;
        if (fVar21 - fVar39 <= 0.0) {
          fVar25 = 0.0;
        }
        dVar29 = (double)fVar25;
        local_408 = dVar5 * dVar27 + dVar29 * dVar32;
        dStack_400 = dVar5 * dVar31 + dVar29 * dVar7;
        local_3f8 = dVar29 * dVar28 + dVar5 * dVar24;
      }
      local_3b0 = dVar26;
      memset(local_308,0,0x100);
      in_stack_fffffffffffffba8 = local_308;
      uStack_360 = 0xffffffff;
      in_stack_fffffffffffffbb8 =
           (FCharacterMovementComponentAsyncOutput *)
           ((ulonglong)in_stack_fffffffffffffbb8 & 0xffffffffffffff00);
      local_250 = 0;
      uStack_248 = 0;
      uStack_35b = 0;
      uStack_359 = 0;
      local_378.field0_0x0._s_0.Z = 0.0;
      uStack_35c = 0;
      uStack_238 = 0xffffffff;
      local_240 = 0;
      local_264 = 0xffffffff;
      local_308[0]._4_4_ = 1.0;
      (**(code **)(this->_padding_ + 0xb0))
                (this,&local_408,&local_328,1,in_stack_fffffffffffffba8,param_3,
                 in_stack_fffffffffffffbb8);
      if (this->bHasValidData == false) {
        return;
      }
      fVar36 = (fVar36 - (float)local_308[0]._4_4_) * fVar21;
      if ((local_25b & 1) == 0) goto LAB_14771f7ef;
      pcVar4 = *(code **)(this->_padding_ + 0x210);
      pFVar19 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
      if (pFVar19 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771eb42:
        local_390._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_390._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_390._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pFVar14 = pFVar19;
        if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar14 = (FSingleParticlePhysicsProxy *)0x0;
        }
        if (pFVar14 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771eb42;
        if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pFVar19 = (FSingleParticlePhysicsProxy *)0x0;
        }
        Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                  ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar19);
        pTVar15 = Chaos::TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pFVar19->Handle->_padding_,
                             (int)pFVar19->Handle->_padding_);
        local_390._s_0.X = (double)*(undefined8 *)pTVar15;
        local_390._s_0.Y = (double)*(undefined8 *)&pTVar15->field_0x8;
        local_390._s_0.Z = (double)*(undefined8 *)&pTVar15->field_0x10;
      }
      cVar13 = (*pcVar4)(this,&local_390,local_308);
      if (cVar13 != '\0') {
        pTVar17 = local_308;
LAB_14771f85b:
        fVar36 = fVar36 + local_res10;
        goto LAB_14771f868;
      }
      local_408 = (pTVar1->field0_0x0)._s_0.X * dVar26;
      dStack_400 = (param_3->Velocity).field0_0x0._s_0.Y * dVar26;
      local_3f8 = dVar26 * (param_3->Velocity).field0_0x0._s_0.Z;
      if (((local_25b & 2) == 0) &&
         (cVar13 = (**(code **)(this->_padding_ + 0x230))(this), cVar13 != '\0')) {
        pFVar19 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
        if (pFVar19 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771ec25:
          local_438._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_438._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_438._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          pFVar14 = pFVar19;
          if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar14 = (FSingleParticlePhysicsProxy *)0x0;
          }
          if (pFVar14 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771ec25;
          if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pFVar19 = (FSingleParticlePhysicsProxy *)0x0;
          }
          Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                    ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar19);
          pTVar15 = Chaos::TParticles<double,3>::GetX
                              ((TParticles<double,3> *)pFVar19->Handle->_padding_,
                               (int)pFVar19->Handle->_padding_);
          local_438._0_16_ = *(undefined1 (*) [16])pTVar15;
          local_438._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
        }
        local_1d8[0] = local_1d8[0] & 0xfffffff8;
        local_1d8[1] = 0;
        local_1d8[2] = 0;
        local_118 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_d8 = 0;
        local_d0 = 0;
        memset(local_1c8,0,0x100);
        uStack_3d3 = 0;
        local_110 = 0;
        uStack_108 = 0;
        uStack_3d1 = 0;
        local_3f0._s_0.Z = 0.0;
        uStack_3d8 = 0xffffffff;
        uStack_3d4 = 0;
        uStack_f8 = 0xffffffff;
        local_124 = 0xffffffff;
        local_100 = 0;
        local_1c8[0]._4_4_ = 0x3f800000;
        (**(code **)(this->_padding_ + 0xd8))(this,local_438,local_1d8,0,param_3,0);
        if ((((byte)local_1d8[0] & 3) == 3) &&
           (cVar13 = (**(code **)(this->_padding_ + 0x210))(this,local_438,local_1c8),
           cVar13 != '\0')) {
          pTVar17 = local_1c8;
          goto LAB_14771f85b;
        }
      }
      pdVar16 = &local_408;
      (**(code **)(this->_padding_ + 0x150))(this,local_308,param_3,fVar21,pdVar16);
      uVar40 = (undefined4)((ulonglong)pdVar16 >> 0x20);
      if (this->bHasValidData == false) {
        return;
      }
      cVar13 = (**(code **)(this->_padding_ + 0x268))(this,param_3);
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (cVar13 == '\0') {
        return;
      }
      dVar24 = (param_3->Acceleration).field0_0x0._s_0.Z;
      dVar27 = (param_3->Acceleration).field0_0x0._s_0.X;
      dVar31 = (param_3->Acceleration).field0_0x0._s_0.Y;
      local_3d0 = dVar32;
      dStack_3c8 = dVar7;
      local_3c0 = dVar28;
      local_390._s_0.X = dVar27;
      local_390._s_0.Y = dVar31;
      local_390._s_0.Z = dVar24;
      if (cVar12 == '\0') {
        uVar40 = SUB84(__real_3ff0000000000000,0);
        uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      }
      else {
        (param_3->Acceleration).field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (param_3->Acceleration).field0_0x0._s_0.Y = (double)uVar22;
        (param_3->Acceleration).field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        dVar29 = (pTVar1->field0_0x0)._s_0.X;
        dVar8 = (param_3->Velocity).field0_0x0._s_0.Y;
        dVar5 = (param_3->Velocity).field0_0x0._s_0.Z;
        (pTVar1->field0_0x0)._s_0.X = dVar32;
        (param_3->Velocity).field0_0x0._s_0.Y = dVar7;
        (param_3->Velocity).field0_0x0._s_0.Z = 0.0;
        (**(code **)(this->_padding_ + 0x110))(this);
        local_3d0 = (pTVar1->field0_0x0)._s_0.X;
        dStack_3c8 = (param_3->Velocity).field0_0x0._s_0.Y;
        pFVar42 = param_3;
        local_3c0 = dVar28;
        pdVar16 = (double *)
                  (**(code **)(this->_padding_ + 0x208))
                            (this,&local_3f0,&local_3d0,&local_208,CONCAT44(uVar40,fVar39),param_3);
        dVar26 = local_3b0;
        dVar28 = __real_3ff0000000000000;
        uVar40 = SUB84(__real_3ff0000000000000,0);
        uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        local_3d0 = *pdVar16;
        dStack_3c8 = pdVar16[1];
        local_3c0 = pdVar16[2];
        (pTVar1->field0_0x0)._s_0.X = dVar29;
        (param_3->Velocity).field0_0x0._s_0.Y = dVar8;
        (param_3->Velocity).field0_0x0._s_0.Z = dVar5;
        (param_3->Acceleration).field0_0x0._s_0.X = dVar27;
        (param_3->Acceleration).field0_0x0._s_0.Y = dVar31;
        dVar28 = dVar28 / local_3b0;
        (param_3->Acceleration).field0_0x0._s_0.Z = dVar24;
        local_390._s_0.X = ((pTVar1->field0_0x0)._s_0.X - local_3d0) * dVar28;
        local_390._s_0.Y = ((param_3->Velocity).field0_0x0._s_0.Y - dStack_3c8) * dVar28;
        local_390._s_0.Z = ((param_3->Velocity).field0_0x0._s_0.Z - local_3c0) * dVar28;
        pdVar16 = (double *)
                  (**(code **)(this->_padding_ + 0x200))
                            (this,&local_3f0,CONCAT44(uVar38,fVar21),&local_390,local_308,
                             (ulonglong)pFVar42 & 0xffffffffffffff00,param_3);
        local_408 = (dVar26 * *pdVar16 + local_3d0) * dVar26;
        dStack_400 = dVar26 * (dVar26 * pdVar16[1] + dStack_3c8);
        local_3f8 = dVar26 * (dVar26 * pdVar16[2] + local_3c0);
      }
      dVar24 = local_2b0;
      fVar39 = __real_3f800000;
      uVar10 = (ulonglong)local_2b0 >> 0x20;
      uVar38 = SUB84(dStack_2a8,0);
      uVar11 = (ulonglong)dStack_2a8 >> 0x20;
      in_stack_fffffffffffffba8 = &local_3a8;
      local_3a8._s_0.X = local_2c8;
      local_3a8._s_0.Y = dStack_2c0;
      local_3a8._s_0.Z = local_2b8;
      local_378.field0_0x0._s_0.Z = local_2a0;
      in_stack_fffffffffffffbb8 = param_3;
      (**(code **)(this->_padding_ + 0x160))
                (this,&local_420,&local_408,__real_3f800000 - (float)local_308[0]._4_4_,
                 in_stack_fffffffffffffba8,local_308,param_3);
      fVar25 = __real_38d1b717;
      if (__real_38d1b717 < fVar36) {
        if (param_3->bJustTeleported == false) {
          dVar28 = (double)CONCAT44(uVar41,uVar40) / (double)fVar36;
          if (((this->RootMotion).bHasAnimRootMotion == false) &&
             ((this->RootMotion).bHasOverrideWithIgnoreZAccumulate == false)) {
            pTVar17 = (TVector<double>_u_0 *)local_438;
            local_438._8_8_ = local_420._s_0.Y * dVar28;
            local_438._0_8_ = local_420._s_0.X * dVar28;
            local_438._16_8_ = local_420._s_0.Z * dVar28;
          }
          else {
            pTVar17 = &local_3f0;
            local_3f0._s_0.Z = local_420._s_0.Z * dVar28;
            local_3f0._s_0.X = (pTVar1->field0_0x0)._s_0.X;
            local_3f0._s_0.Y = (param_3->Velocity).field0_0x0._s_0.Y;
          }
          dVar32 = (pTVar17->_s_0).Y;
          dVar28 = (pTVar17->_s_0).Z;
          (pTVar1->field0_0x0)._s_0.X = (pTVar17->_s_0).X;
          (param_3->Velocity).field0_0x0._s_0.Y = dVar32;
          (param_3->Velocity).field0_0x0._s_0.Z = dVar28;
        }
        if (0.0 < local_420._s_0.Y * dStack_400 + local_420._s_0.X * local_408 +
                  local_420._s_0.Z * local_3f8) {
          in_stack_fffffffffffffba8 = local_308;
          in_stack_fffffffffffffbb8 =
               (FCharacterMovementComponentAsyncOutput *)
               ((ulonglong)in_stack_fffffffffffffbb8 & 0xffffffffffffff00);
          pTVar17 = (TVector<double>_u_0 *)param_3;
          (**(code **)(this->_padding_ + 0xb0))
                    (this,&local_420,&local_328,1,in_stack_fffffffffffffba8,param_3,
                     in_stack_fffffffffffffbb8);
          if ((local_25b & 1) != 0) {
            pcVar4 = *(code **)(this->_padding_ + 0x210);
            fVar37 = fVar36 * (fVar39 - (float)local_308[0]._4_4_);
            pFVar19 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
            if (pFVar19 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771f115:
              local_438._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_438._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              local_438._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              pFVar14 = pFVar19;
              if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar14 = (FSingleParticlePhysicsProxy *)0x0;
              }
              if (pFVar14 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771f115;
              if (pFVar19->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar19 = (FSingleParticlePhysicsProxy *)0x0;
              }
              Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar19);
              pTVar15 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pFVar19->Handle->_padding_,
                                   (int)pFVar19->Handle->_padding_);
              local_438._0_16_ = *(undefined1 (*) [16])pTVar15;
              local_438._16_8_ = *(undefined8 *)&pTVar15->field_0x10;
            }
            cVar13 = (*pcVar4)(this,local_438,local_308,param_3);
            if (cVar13 != '\0') {
              (**(code **)(this->_padding_ + 0x218))
                        (this,local_308,fVar37 + local_res10,param_2,param_3);
              return;
            }
            (**(code **)(this->_padding_ + 0x150))(this,local_308,param_3,fVar36,&local_420);
            if (this->bHasValidData == false) {
              return;
            }
            cVar13 = (**(code **)(this->_padding_ + 0x268))(this,param_3);
            if (cVar13 == '\0') {
              return;
            }
            if ((cVar12 == '\0') ||
               (local_2b8 <= (double)CharacterMovementConstants::VERTICAL_SLOPE_NORMAL_Z)) {
              TwoWallAdjust(this,(TVector<double> *)&local_420._s_0,(FHitResult *)&local_308[0]._s_0
                            ,(TVector<double> *)&local_3a8._s_0,param_3);
              dVar28 = extraout_XMM0_Qb;
              if (cVar12 != '\0') goto LAB_14771f24c;
            }
            else {
              pTVar17 = local_308;
              dVar28 = (double)fVar36;
              local_3f0._s_0.X = local_3d0 * dVar28;
              local_3f0._s_0.Y = dStack_3c8 * dVar28;
              local_3f0._s_0.Z = dVar28 * local_3c0;
              pdVar16 = (double *)
                        (**(code **)(this->_padding_ + 0x160))
                                  (this,local_438,&local_3f0,fVar39,&local_3a8,pTVar17,param_3);
              local_420._s_0.X = *pdVar16;
              local_420._s_0.Y = pdVar16[1];
              local_420._s_0.Z = pdVar16[2];
              TwoWallAdjust(this,(TVector<double> *)&local_420._s_0,(FHitResult *)&local_308[0]._s_0
                            ,(TVector<double> *)&local_3a8._s_0,param_3);
LAB_14771f24c:
              in_stack_fffffffffffffbb8 = param_3;
              pdVar16 = (double *)
                        (**(code **)(this->_padding_ + 0x200))
                                  (this,&local_3f0,fVar37,&local_390,local_308,
                                   (ulonglong)pTVar17 & 0xffffffffffffff00,param_3);
              dVar32 = (double)fVar37;
              dVar28 = 0.0;
              if (0.0 < dVar32 * pdVar16[1] * local_3a8._s_0.Y +
                        dVar32 * *pdVar16 * local_3a8._s_0.X +
                        dVar32 * pdVar16[2] * local_3a8._s_0.Z) {
                local_420._s_0.X = local_420._s_0.X + dVar32 * *pdVar16 * dVar32;
                local_420._s_0.Y = local_420._s_0.Y + dVar32 * pdVar16[1] * dVar32;
                local_420._s_0.Z = local_420._s_0.Z + dVar32 * pdVar16[2] * dVar32;
              }
            }
            uVar22 = local_378.field0_0x0._s_0.Z;
            if ((fVar25 < fVar37) && (param_3->bJustTeleported == false)) {
              dVar28 = (double)CONCAT44(uVar41,uVar40) / (double)fVar37;
              if (((this->RootMotion).bHasAnimRootMotion == false) &&
                 ((this->RootMotion).bHasOverrideWithIgnoreZAccumulate == false)) {
                local_3f0._s_0.X = local_420._s_0.X * dVar28;
                pTVar17 = &local_3f0;
                local_3f0._s_0.Y = local_420._s_0.Y * dVar28;
                local_3f0._s_0.Z = local_420._s_0.Z * dVar28;
              }
              else {
                pTVar17 = (TVector<double>_u_0 *)local_438;
                local_438._16_8_ = local_420._s_0.Z * dVar28;
                local_438._0_16_ = *(undefined1 (*) [16])&pTVar1->field0_0x0;
              }
              dVar28 = (pTVar17->_s_0).Y;
              dVar32 = (pTVar17->_s_0).Z;
              (pTVar1->field0_0x0)._s_0.X = (pTVar17->_s_0).X;
              (param_3->Velocity).field0_0x0._s_0.Y = dVar28;
              (param_3->Velocity).field0_0x0._s_0.Z = dVar32;
            }
            if ((((local_378.field0_0x0._s_0.Z <= 0.0) || (local_2a0 <= 0.0)) ||
                (__real_3f1a36e2e0000000 <
                 (double)CONCAT44((uint)((ulonglong)local_420._16_8_ >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(local_420._s_0.Z,0) &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
               (auVar6._4_8_ = dVar28, auVar6._0_4_ = (int)uVar10,
               auVar23._0_8_ = auVar6._0_8_ << 0x20, auVar23._8_4_ = uVar38,
               auVar23._12_4_ = (int)uVar11,
               0.0 <= auVar23._8_8_ * dStack_2a8 + dVar24 * local_2b0 +
                      local_2a0 * local_378.field0_0x0._s_0.Z)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            in_stack_fffffffffffffba8 = local_308;
            in_stack_fffffffffffffbb8 =
                 (FCharacterMovementComponentAsyncOutput *)
                 ((ulonglong)in_stack_fffffffffffffbb8 & 0xffffffffffffff00);
            (**(code **)(this->_padding_ + 0xb0))
                      (this,&local_420,&local_328,1,in_stack_fffffffffffffba8,param_3,
                       in_stack_fffffffffffffbb8);
            if ((float)local_308[0]._4_4_ == 0.0) {
              uVar33 = local_3a8._s_0.X + local_2b0;
              uVar30 = local_3a8._s_0.Y + dStack_2a8;
              local_438._16_8_ = local_2a0 + local_3a8._s_0.Z;
              dVar24 = (double)uVar30 * (double)uVar30 + (double)uVar33 * (double)uVar33;
              if (dVar24 == (double)CONCAT44(uVar41,uVar40)) {
                local_438._8_8_ = uVar30;
                local_438._0_8_ = uVar33;
                if ((double)local_438._16_8_ != 0.0) {
LAB_14771f4ef:
                  local_438._16_8_ = 0.0;
                }
              }
              else {
                if (__real_3e45798ee0000000 <= dVar24) {
                  local_3b0 = (double)CONCAT44(uVar41,uVar40) / SQRT(dVar24);
                  uVar33 = (double)uVar33 * local_3b0;
                  uVar30 = (double)uVar30 * local_3b0;
                  local_438._8_8_ = uVar30;
                  local_438._0_8_ = uVar33;
                  goto LAB_14771f4ef;
                }
                local_438._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_438._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                local_438._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
              if ((((double)CONCAT44((uint)((ulonglong)uVar33 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     (uint)uVar33 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                    __real_3f1a36e2e0000000) &&
                  ((double)CONCAT44((uint)((ulonglong)uVar30 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    (uint)uVar30 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                   __real_3f1a36e2e0000000)) &&
                 ((double)CONCAT44((uint)((ulonglong)local_438._16_8_ >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   (uint)local_438._16_8_ &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  __real_3f1a36e2e0000000)) {
                uVar34 = SUB84(local_3a8._s_0.X,0) ^ (uint)__xmm_80000000000000008000000000000000;
                uVar35 = (uint)((ulonglong)local_3a8._0_8_ >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_;
                uVar30 = CONCAT44(uVar35,uVar34);
                dVar24 = (double)uVar30 * (double)CONCAT44(uVar35,uVar34) +
                         local_3a8._s_0.Y * local_3a8._s_0.Y;
                uVar33 = local_3a8._s_0.Y;
                if (dVar24 == (double)CONCAT44(uVar41,uVar40)) {
LAB_14771f57a:
                  local_378.field0_0x0._s_0.Z = 0.0;
                  local_438._16_8_ = 0.0;
                }
                else {
                  local_438._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                  uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                  if (__real_3e45798ee0000000 <= dVar24) {
                    local_3b0 = (double)CONCAT44(uVar41,uVar40) / SQRT(dVar24);
                    uVar33 = local_3a8._s_0.Y * local_3b0;
                    uVar30 = (double)CONCAT44(uVar35,uVar34) * local_3b0;
                    goto LAB_14771f57a;
                  }
                }
                local_438._8_4_ = (int)uVar30;
                local_438._0_8_ = uVar33;
                local_438._12_4_ = (int)((ulonglong)uVar30 >> 0x20);
              }
              in_stack_fffffffffffffba8 = local_308;
              in_stack_fffffffffffffbb8 =
                   (FCharacterMovementComponentAsyncOutput *)
                   ((ulonglong)in_stack_fffffffffffffbb8 & 0xffffffffffffff00);
              (**(code **)(this->_padding_ + 0xb0))
                        (this,local_438,&local_328,1,in_stack_fffffffffffffba8,param_3,
                         in_stack_fffffffffffffbb8);
            }
            if (!bVar9) {
              pcVar4 = *(code **)(this->_padding_ + 0x210);
              pTVar18 = FUpdatedComponentAsyncInput::GetPosition
                                  ((this->UpdatedComponentInput).Ptr,&local_378);
              cVar13 = (*pcVar4)(this,pTVar18,local_308);
              if ((cVar13 == '\0') && ((float)local_308[0]._4_4_ != 0.0)) {
                fVar36 = this->PerchRadiusThreshold;
                if (fVar36 <= 0.0) {
                  fVar36 = 0.0;
                }
                if (((0.0 < fVar36) && ((float)local_308[0]._4_4_ == fVar39)) &&
                   ((double)this->WalkableFloorZ <= (double)uVar22)) {
                  FUpdatedComponentAsyncInput::GetPosition
                            ((this->UpdatedComponentInput).Ptr,(TVector<double> *)&local_3f0._s_0);
                  if (((float)(double)CONCAT44((uint)((ulonglong)(local_3f0._s_0.Z - local_1e0) >>
                                                     0x20) &
                                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                               SUB84(local_3f0._s_0.Z - local_1e0,0) &
                                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                       fVar21 * __real_3e4ccccd) &&
                     ((float)((local_3f0._s_0.X - local_340) * (local_3f0._s_0.X - local_340) +
                             (local_3f0._s_0.Y - dStack_338) * (local_3f0._s_0.Y - dStack_338)) <=
                      fVar21 * __real_40800000)) {
                    pcVar4 = *(code **)(this->_padding_ + 600);
                    uVar34 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                    (this->RandomStream).Seed = uVar34;
                    fVar21 = (float)(*pcVar4)(this,param_3);
                    fVar36 = __real_3e800000;
                    (pTVar1->field0_0x0)._s_0.X =
                         (double)(fVar21 * __real_3e800000 *
                                 (((float)(uVar34 >> 9 | 0x3f800000) - fVar39) - __real_3f000000)) +
                         (pTVar1->field0_0x0)._s_0.X;
                    pcVar4 = *(code **)(this->_padding_ + 600);
                    uVar34 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
                    (this->RandomStream).Seed = uVar34;
                    fVar21 = (float)(*pcVar4)(this,param_3);
                    in_stack_fffffffffffffba8 = local_308;
                    in_stack_fffffffffffffbb8 =
                         (FCharacterMovementComponentAsyncOutput *)
                         ((ulonglong)in_stack_fffffffffffffbb8 & 0xffffffffffffff00);
                    dVar24 = (double)(fVar21 * fVar36 *
                                     (((float)(uVar34 >> 9 | 0x3f800000) - fVar39) - __real_3f000000
                                     )) + (param_3->Velocity).field0_0x0._s_0.Y;
                    (param_3->Velocity).field0_0x0._s_0.Y = dVar24;
                    fVar36 = this->JumpZVelocity * fVar36;
                    local_420._s_0.Y = dVar26 * dVar24;
                    if (fVar36 <= fVar39) {
                      fVar36 = fVar39;
                    }
                    local_420._s_0.X = dVar26 * (pTVar1->field0_0x0)._s_0.X;
                    local_420._s_0.Z = dVar26 * (double)fVar36;
                    (param_3->Velocity).field0_0x0._s_0.Z = (double)fVar36;
                    (**(code **)(this->_padding_ + 0xb0))
                              (this,&local_420,&local_328,1,in_stack_fffffffffffffba8,param_3,
                               in_stack_fffffffffffffbb8);
                  }
                }
                goto LAB_14771f7ef;
              }
            }
            fVar36 = 0.0;
            pTVar17 = local_308;
LAB_14771f868:
            (**(code **)(this->_padding_ + 0x218))(this,pTVar17,fVar36,param_2,param_3);
            return;
          }
        }
      }
LAB_14771f7ef:
      dVar24 = (pTVar1->field0_0x0)._s_0.X;
      dVar28 = (param_3->Velocity).field0_0x0._s_0.Y;
      if (dVar28 * dVar28 + dVar24 * dVar24 <= __real_3f50624dcc000000) {
        (pTVar1->field0_0x0)._s_0.X = 0.0;
        (param_3->Velocity).field0_0x0._s_0.Y = 0.0;
      }
      param_1 = local_res10;
      if (local_res10 < local_3b4) {
        return;
      }
    }
  }
  return;
}

// PhysWalking @ 14771f910

/* WARNING: Type propagation algorithm not settling */
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
FCharacterMovementComponentAsyncInput::PhysWalking
          (FCharacterMovementComponentAsyncInput *this,float param_1,int param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  FFindFloorResult *pFVar16;
  uint *puVar17;
  bool bVar18;
  char cVar19;
  char cVar20;
  bool bVar21;
  TVector<double,3> *pTVar22;
  FFindFloorResult *pFVar23;
  double *pdVar24;
  UPrimitiveComponent *pUVar25;
  AActor *pAVar26;
  TQuat<double> *pTVar27;
  FSingleParticlePhysicsProxy *pFVar28;
  TVector<double> *pTVar29;
  undefined1 uVar30;
  uint *puVar31;
  longlong lVar32;
  FSingleParticlePhysicsProxy *pFVar33;
  int iVar34;
  float fVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  undefined1 auVar39 [16];
  double dVar38;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  uint uVar43;
  uint uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  char *in_stack_fffffffffffffa58;
  undefined4 uVar50;
  TVector<double>_u_0 local_578;
  double local_560;
  double local_558;
  double local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  double local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined4 uStack_518;
  undefined1 uStack_514;
  undefined2 uStack_513;
  undefined1 uStack_511;
  double local_510;
  undefined8 uStack_508;
  double local_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  double local_4e8;
  double local_4e0;
  double dStack_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 local_498 [4];
  uint local_478 [2];
  uint local_470 [4];
  uint local_460 [41];
  undefined4 local_3bc;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_358 [40];
  double local_330;
  TVector<double> local_328;
  undefined1 local_308 [136];
  undefined1 local_280 [120];
  uint local_208;
  float local_204;
  float local_200;
  FHitResult local_1f8;
  TQuat<double> local_f8 [6];
  
  if (UCharacterMovementComponent::MIN_TICK_TIME <= param_1) {
    if (((this->UpdatedComponentInput).Ptr)->bIsQueryCollisionEnabled == false) {
      (**(code **)(this->_padding_ + 200))(this,1,param_3,0);
    }
    else {
      param_3->bJustTeleported = false;
      dVar3 = __real_3f1a36e2e0000000;
      uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      fVar13 = __real_3f800000;
      bVar6 = false;
      bVar21 = false;
      if (UCharacterMovementComponent::MIN_TICK_TIME <= param_1) {
        uVar47 = (undefined4)__real_bff0000000000000;
        uVar48 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        uVar45 = SUB84(__real_3ff0000000000000,0);
        uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        do {
          if (this->MaxSimulationIterations <= param_2) break;
          param_3->bJustTeleported = false;
          iVar34 = param_2 + 1;
          uVar37 = (**(code **)(this->_padding_ + 0x108))(this,param_1,iVar34);
          fVar35 = (float)uVar37;
          fVar49 = param_1 - fVar35;
          if (param_3->NewMovementBase != (this->MovementBaseAsyncData).CachedMovementBase) {
            in_stack_fffffffffffffa58 = "Output.NewMovementBase == CachedMovementBase";
            bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4717179430353501943>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CharacterMovementComponentAsync.h"
                                ,0x109,"Output.NewMovementBase == CachedMovementBase");
            if (bVar18) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pUVar25 = (this->MovementBaseAsyncData).CachedMovementBase;
          pFVar33 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
          if (pFVar33 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771fb0d:
            local_578._s_0.X =
                 (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            local_578._s_0.Y =
                 (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            local_578._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            pFVar28 = pFVar33;
            if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pFVar28 = (FSingleParticlePhysicsProxy *)0x0;
            }
            if (pFVar28 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771fb0d;
            if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              pFVar33 = (FSingleParticlePhysicsProxy *)0x0;
            }
            Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                      ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar33);
            pTVar22 = Chaos::TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pFVar33->Handle->_padding_,
                                 (int)pFVar33->Handle->_padding_);
            local_578._s_0.X = (double)*(undefined8 *)pTVar22;
            local_578._s_0.Y = (double)*(undefined8 *)&pTVar22->field_0x8;
            local_578._s_0.Z = (double)*(undefined8 *)&pTVar22->field_0x10;
          }
          local_204 = (param_3->CurrentFloor).FloorDist;
          local_200 = (param_3->CurrentFloor).LineDist;
          local_208 = local_208 & 0xfffffff8 | *(uint *)&param_3->CurrentFloor & 7;
          FHitResult::FHitResult(&local_1f8,&(param_3->CurrentFloor).HitResult);
          if (param_3->bIsAdditiveVelocityApplied != false) {
            dVar1 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.X;
            dVar4 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
            param_3->bIsAdditiveVelocityApplied = false;
            dVar38 = (param_3->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
            (param_3->Velocity).field0_0x0._s_0.X = dVar1;
            (param_3->Velocity).field0_0x0._s_0.Y = dVar4;
            (param_3->Velocity).field0_0x0._s_0.Z = dVar38;
          }
          (**(code **)(this->_padding_ + 0xa0))(this,param_3);
          uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffa58 >> 0x20);
          (param_3->Acceleration).field0_0x0._s_0.Z = 0.0;
          if (((this->RootMotion).bHasAnimRootMotion == false) &&
             ((this->RootMotion).bHasOverrideRootMotion == false)) {
            lVar32 = this->_padding_;
            uVar36 = (**(code **)(lVar32 + 0x130))(this,param_3);
            in_stack_fffffffffffffa58 = (char *)CONCAT44(uVar50,uVar36);
            (**(code **)(lVar32 + 0x110))
                      (this,fVar35,this->GroundFriction,0,in_stack_fffffffffffffa58,param_3);
          }
          ApplyRootMotionToVelocity(this,fVar35,param_3);
          cVar19 = (**(code **)(this->_padding_ + 0x268))(this);
          if (cVar19 != '\0') {
            (**(code **)(this->_padding_ + 0x38))(this,fVar35 + fVar49,param_2,param_3);
            return;
          }
          local_4e0 = (param_3->Velocity).field0_0x0._s_0.X;
          dStack_4d8 = (param_3->Velocity).field0_0x0._s_0.Y;
          local_4d0 = (param_3->Velocity).field0_0x0._s_0.Z;
          dVar38 = (double)fVar35;
          local_560 = dVar38 * local_4e0;
          local_558 = dVar38 * dStack_4d8;
          local_550 = dVar38 * local_4d0;
          uVar43 = SUB84(local_560,0) & uVar14;
          uVar44 = (uint)((ulonglong)local_560 >> 0x20) & uVar15;
          if (((dVar3 <= (double)CONCAT44(uVar44,uVar43) && (double)CONCAT44(uVar44,uVar43) != dVar3
               ) || (dVar3 < (double)CONCAT44((uint)((ulonglong)local_558 >> 0x20) & uVar15,
                                              SUB84(local_558,0) & uVar14))) ||
             (dVar3 < (double)CONCAT44((uint)((ulonglong)local_550 >> 0x20) & uVar15,
                                       SUB84(local_550,0) & uVar14))) {
            cVar19 = '\0';
          }
          else {
            cVar19 = '\x01';
          }
          local_478[0] = local_478[0] & 0xfffffffe;
          local_470[0] = local_470[0] & 0xfffffff8;
          local_388 = 0;
          uStack_380 = 0;
          local_470[1] = 0;
          local_470[2] = 0;
          local_3b0 = 0;
          local_370 = 0;
          local_368 = 0;
          memset(local_470 + 4,0,0x100);
          uStack_513 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          uStack_511 = 0;
          local_520 = 0;
          uStack_518 = 0xffffffff;
          uStack_514 = 0;
          local_3bc = 0xffffffff;
          local_460[1] = 0x3f800000;
          local_530 = 0;
          uStack_528 = 0;
          local_398 = 0;
          uStack_390 = 0xffffffff;
          param_1 = 0.0;
          if (cVar19 == '\0') {
            in_stack_fffffffffffffa58 = (char *)param_3;
            (**(code **)(this->_padding_ + 0x58))(this,&local_4e0,fVar35,local_478,param_3);
            cVar20 = (**(code **)(this->_padding_ + 0x268))(this,param_3);
            param_1 = fVar49;
            if (cVar20 != '\0') {
              auVar41._0_8_ = local_560 * local_560;
              auVar41._8_8_ = 0;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = local_558 * local_558 + auVar41._0_8_ + local_550 * local_550;
              auVar39 = sqrtpd(auVar41,auVar39);
              if (__real_38d1b717 < (float)auVar39._0_8_) {
                pTVar29 = FUpdatedComponentAsyncInput::GetPosition
                                    ((this->UpdatedComponentInput).Ptr,&local_328);
                dVar3 = (pTVar29->field0_0x0)._s_0.X - local_578._s_0.X;
                dVar38 = (pTVar29->field0_0x0)._s_0.Y - local_578._s_0.Y;
                auVar40._0_8_ = dVar38 * dVar38 + dVar3 * dVar3;
                auVar40._8_8_ = 0;
                auVar41 = sqrtpd(auVar40,auVar40);
                fVar42 = (float)auVar41._0_8_ / (float)auVar39._0_8_;
                if (fVar13 <= fVar42) {
                  fVar42 = fVar13;
                }
                fVar49 = fVar49 + (fVar13 - fVar42) * fVar35;
              }
              (**(code **)(this->_padding_ + 0x38))(this,fVar49,iVar34,param_3);
              return;
            }
          }
          if ((local_478[0] & 1) == 0) {
            pcVar2 = *(code **)(this->_padding_ + 0xd8);
            pFVar33 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
            if (pFVar33 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14771fe44:
              local_510 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              uStack_508 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
              local_500 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            else {
              pFVar28 = pFVar33;
              if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar28 = (FSingleParticlePhysicsProxy *)0x0;
              }
              if (pFVar28 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14771fe44;
              if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar33 = (FSingleParticlePhysicsProxy *)0x0;
              }
              Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar33);
              pTVar22 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pFVar33->Handle->_padding_,
                                   (int)pFVar33->Handle->_padding_);
              local_510 = *(double *)pTVar22;
              uStack_508 = *(undefined8 *)&pTVar22->field_0x8;
              local_500 = *(double *)&pTVar22->field_0x10;
            }
            in_stack_fffffffffffffa58 = (char *)param_3;
            (*pcVar2)(this,&local_510,&param_3->CurrentFloor,cVar19,param_3,0);
          }
          else {
            lVar32 = 2;
            pFVar16 = &param_3->CurrentFloor;
            puVar17 = local_470;
            do {
              puVar31 = puVar17;
              pFVar23 = pFVar16;
              pFVar16 = (FFindFloorResult *)&(pFVar23->HitResult).TraceStart;
              uVar43 = puVar31[1];
              uVar44 = puVar31[2];
              uVar7 = puVar31[3];
              uVar8 = puVar31[4];
              uVar9 = puVar31[5];
              uVar10 = puVar31[6];
              uVar11 = puVar31[7];
              puVar17 = puVar31 + 0x20;
              *(uint *)&pFVar23->field_0x0 = puVar31[0];
              pFVar23->FloorDist = (float)uVar43;
              pFVar23->LineDist = (float)uVar44;
              pFVar23->_padding_ = uVar7;
              uVar43 = puVar31[8];
              uVar44 = puVar31[9];
              uVar7 = puVar31[10];
              uVar12 = puVar31[0xb];
              (pFVar23->HitResult).FaceIndex = uVar8;
              (pFVar23->HitResult).Time = (float)uVar9;
              (pFVar23->HitResult).Distance = (float)uVar10;
              (pFVar23->HitResult)._padding_ = uVar11;
              uVar8 = puVar31[0xc];
              uVar9 = puVar31[0xd];
              uVar10 = puVar31[0xe];
              uVar11 = puVar31[0xf];
              *(uint *)&(pFVar23->HitResult).Location.field_0x0 = uVar43;
              *(uint *)&(pFVar23->HitResult).Location.field_0x4 = uVar44;
              *(uint *)&(pFVar23->HitResult).Location.field_0x8 = uVar7;
              *(uint *)&(pFVar23->HitResult).Location.field_0xc = uVar12;
              uVar43 = puVar31[0x10];
              uVar44 = puVar31[0x11];
              uVar7 = puVar31[0x12];
              uVar12 = puVar31[0x13];
              *(uint *)&(pFVar23->HitResult).Location.field_0x10 = uVar8;
              *(uint *)&(pFVar23->HitResult).Location.field_0x14 = uVar9;
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0x0 = uVar10;
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0x4 = uVar11;
              uVar8 = puVar31[0x14];
              uVar9 = puVar31[0x15];
              uVar10 = puVar31[0x16];
              uVar11 = puVar31[0x17];
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0x8 = uVar43;
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0xc = uVar44;
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0x10 = uVar7;
              *(uint *)&(pFVar23->HitResult).ImpactPoint.field_0x14 = uVar12;
              uVar43 = puVar31[0x18];
              uVar44 = puVar31[0x19];
              uVar7 = puVar31[0x1a];
              uVar12 = puVar31[0x1b];
              *(uint *)&(pFVar23->HitResult).Normal.field_0x0 = uVar8;
              *(uint *)&(pFVar23->HitResult).Normal.field_0x4 = uVar9;
              *(uint *)&(pFVar23->HitResult).Normal.field_0x8 = uVar10;
              *(uint *)&(pFVar23->HitResult).Normal.field_0xc = uVar11;
              uVar8 = puVar31[0x1c];
              uVar9 = puVar31[0x1d];
              uVar10 = puVar31[0x1e];
              uVar11 = puVar31[0x1f];
              *(uint *)&(pFVar23->HitResult).Normal.field_0x10 = uVar43;
              *(uint *)&(pFVar23->HitResult).Normal.field_0x14 = uVar44;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0x0 = uVar7;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0x4 = uVar12;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0x8 = uVar8;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0xc = uVar9;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0x10 = uVar10;
              *(uint *)&(pFVar23->HitResult).ImpactNormal.field_0x14 = uVar11;
              lVar32 = lVar32 + -1;
            } while (lVar32 != 0);
            uVar43 = puVar17[1];
            uVar44 = puVar31[0x22];
            uVar7 = puVar31[0x23];
            *(uint *)&((FVector_NetQuantize *)pFVar16)->field_0x0 = puVar17[0];
            *(uint *)&((FVector_NetQuantize *)pFVar16)->field_0x4 = uVar43;
            *(uint *)&(pFVar23->HitResult).TraceStart.field_0x8 = uVar44;
            *(uint *)&(pFVar23->HitResult).TraceStart.field_0xc = uVar7;
          }
          cVar20 = (**(code **)(this->_padding_ + 0x188))();
          if ((cVar20 == '\0') &&
             ((param_3->CurrentFloor).bBlockingHit != 1 ||
              (param_3->CurrentFloor).bWalkableFloor != 1)) {
            local_4b0 = 0;
            uStack_4a8 = 0;
            local_4a0 = CONCAT44(uVar48,uVar47);
            if (bVar21) {
              local_4c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              uStack_4c0 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                    UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
              local_4b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              pdVar24 = &local_4c8;
            }
            else {
              pdVar24 = (double *)
                        (**(code **)(this->_padding_ + 400))
                                  (this,local_358,&local_578,&local_560,&local_4b0,param_3);
            }
            dVar4 = *pdVar24;
            dVar5 = pdVar24[1];
            dVar1 = pdVar24[2];
            local_330 = dVar1;
            if (((dVar4 == 0.0) && (dVar5 == 0.0)) && (dVar1 == 0.0)) {
              bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2137651385527696532>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                                  ,0x36c,"false");
              if (bVar21) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              break;
            }
            if ((param_3->bJustTeleported == false) &&
               (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_2137651385527693742>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                                    ,0xe52,"TeleportType == ETeleportType::TeleportPhysics"), bVar21
               )) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FUpdatedComponentAsyncInput::SetPosition
                      ((this->UpdatedComponentInput).Ptr,(TVector<double> *)&local_578._s_0);
            param_3->bJustTeleported = false;
            if (((this->MovementBaseAsyncData).CachedMovementBase != pUVar25) &&
               (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_2137651385527693733>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                                    ,0xe5b,"MovementBaseAsyncData.CachedMovementBase == OldBase"),
               bVar21)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((param_3->NewMovementBase != (this->MovementBaseAsyncData).CachedMovementBase) &&
               (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4717179430353501943>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CharacterMovementComponentAsync.h"
                                    ,0x109,"Output.NewMovementBase == CachedMovementBase"), bVar21))
            {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            in_stack_fffffffffffffa58 = "false";
            bVar21 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_2137651385527693730>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                                ,0xe5e,"false");
            if (bVar21) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            param_1 = param_1 + fVar35;
            dVar38 = __real_3ff0000000000000 / dVar38;
            bVar21 = true;
            (param_3->Velocity).field0_0x0._s_0.X = dVar38 * dVar4;
            (param_3->Velocity).field0_0x0._s_0.Y = dVar38 * dVar5;
            (param_3->Velocity).field0_0x0._s_0.Z = dVar38 * dVar1;
            uVar45 = SUB84(__real_3ff0000000000000,0);
            uVar46 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            uVar47 = (undefined4)__real_bff0000000000000;
            uVar48 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          }
          else {
            if ((param_3->CurrentFloor).bBlockingHit == 1 &&
                (param_3->CurrentFloor).bWalkableFloor == 1) {
              cVar20 = (**(code **)(this->_padding_ + 0x1a8))
                                 (this,&local_208,&param_3->CurrentFloor);
              if (cVar20 != '\0') {
                (**(code **)(this->_padding_ + 0x1a0))
                          (this,&local_1f8.ImpactNormal,&local_1f8.Normal,&local_578,
                           uVar37 & 0xffffffff);
                cVar19 = (**(code **)(this->_padding_ + 0x278))(this,param_3);
                if (cVar19 == '\0') {
                  return;
                }
                (**(code **)(this->_padding_ + 0x1b0))
                          (this,iVar34,param_1,uVar37,&local_560,&local_578,param_3);
                return;
              }
              (**(code **)(this->_padding_ + 0x1b8))(this,param_3);
              pUVar25 = (UPrimitiveComponent *)
                        FWeakObjectPtr::Get(&(param_3->CurrentFloor).HitResult.Component.WeakPtr);
              param_3->NewMovementBase = pUVar25;
              pAVar26 = FActorInstanceHandle::FetchActor
                                  (&(param_3->CurrentFloor).HitResult.HitObjectHandle);
              param_3->NewMovementBaseOwner = pAVar26;
            }
            else if (((param_3->CurrentFloor).HitResult.bStartPenetrating != '\0') &&
                    (param_1 <= 0.0)) {
              FHitResult::FHitResult((FHitResult *)local_308,&(param_3->CurrentFloor).HitResult);
              local_280._0_8_ = local_308._112_8_;
              local_280._8_8_ = local_308._120_8_;
              local_280._16_8_ =
                   (double)UCharacterMovementComponent::MAX_FLOOR_DIST + (double)local_308._128_8_;
              (**(code **)(this->_padding_ + 0x140))(this,local_498,local_308);
              pcVar2 = *(code **)(this->_padding_ + 0x148);
              pTVar27 = FUpdatedComponentAsyncInput::GetRotation
                                  ((this->UpdatedComponentInput).Ptr,local_f8);
              in_stack_fffffffffffffa58 = (char *)param_3;
              (*pcVar2)(this,local_498,local_308,pTVar27,param_3);
              param_3->bForceNextFloorCheck = true;
            }
            if (((param_3->CurrentFloor).bBlockingHit != 1 ||
                 (param_3->CurrentFloor).bWalkableFloor != 1) &&
               ((param_3->CurrentFloor).HitResult.bStartPenetrating == '\0')) {
              if ((param_3->bJustTeleported == false) && (cVar19 == '\0')) {
                uVar30 = 0;
                if (!bVar6) goto LAB_1477201d5;
              }
              else {
                uVar30 = 1;
LAB_1477201d5:
                in_stack_fffffffffffffa58 = (char *)&local_578;
                cVar19 = (**(code **)(this->_padding_ + 0x1d8))
                                   (this,&local_208,&(param_3->CurrentFloor).HitResult,&local_560,
                                    in_stack_fffffffffffffa58,param_1,uVar37 & 0xffffffff,iVar34,
                                    uVar30,param_3);
                if (cVar19 != '\0') {
                  return;
                }
              }
              bVar6 = true;
            }
            cVar19 = (**(code **)(this->_padding_ + 0x278))(this);
            if ((((cVar19 != '\0') && (param_3->bJustTeleported == false)) &&
                ((this->RootMotion).bHasAnimRootMotion == false)) &&
               (((this->RootMotion).bHasOverrideRootMotion == false &&
                (UCharacterMovementComponent::MIN_TICK_TIME <= fVar35)))) {
              pFVar33 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
              if (pFVar33 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_1477202d0:
                uStack_540 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
                uStack_53c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
                local_548 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
                uStack_544 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
                local_538 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
              else {
                pFVar28 = pFVar33;
                if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                  pFVar28 = (FSingleParticlePhysicsProxy *)0x0;
                }
                if (pFVar28 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_1477202d0;
                if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                  pFVar33 = (FSingleParticlePhysicsProxy *)0x0;
                }
                Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                          ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar33);
                pTVar22 = Chaos::TParticles<double,3>::GetX
                                    ((TParticles<double,3> *)pFVar33->Handle->_padding_,
                                     (int)pFVar33->Handle->_padding_);
                uStack_540 = *(undefined4 *)&pTVar22->field_0x8;
                uStack_53c = *(undefined4 *)&pTVar22->field_0xc;
                local_548 = *(undefined4 *)pTVar22;
                uStack_544 = *(undefined4 *)&pTVar22->field_0x4;
                local_538 = *(double *)&pTVar22->field_0x10;
              }
              dVar38 = (double)CONCAT44(uVar46,uVar45) / (double)fVar35;
              (param_3->Velocity).field0_0x0._s_0.X =
                   ((double)CONCAT44(uStack_544,local_548) - local_578._s_0.X) * dVar38;
              (param_3->Velocity).field0_0x0._s_0.Y =
                   dVar38 * ((double)CONCAT44(uStack_53c,uStack_540) - local_578._s_0.Y);
              (param_3->Velocity).field0_0x0._s_0.Z = dVar38 * (local_538 - local_578._s_0.Z);
              (**(code **)(this->_padding_ + 0xa0))(this);
            }
            pFVar33 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
            if (pFVar33 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_1477203b7:
              dVar38 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
              local_4e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              local_4f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
              uStack_4f4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
              uStack_4f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
              uStack_4ec = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            }
            else {
              pFVar28 = pFVar33;
              if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar28 = (FSingleParticlePhysicsProxy *)0x0;
              }
              if (pFVar28 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_1477203b7;
              if (pFVar33->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                pFVar33 = (FSingleParticlePhysicsProxy *)0x0;
              }
              Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                        ((TThreadedSingleParticlePhysicsProxyBase<0> *)pFVar33);
              pTVar22 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pFVar33->Handle->_padding_,
                                   (int)pFVar33->Handle->_padding_);
              local_4e8 = *(double *)&pTVar22->field_0x10;
              auVar39 = *(undefined1 (*) [16])pTVar22;
              dVar38 = auVar39._0_8_;
              local_4f8 = auVar39._0_4_;
              uStack_4f4 = auVar39._4_4_;
              uStack_4f0 = auVar39._8_4_;
              uStack_4ec = auVar39._12_4_;
            }
            if (((dVar38 == local_578._s_0.X) &&
                ((double)CONCAT44(uStack_4ec,uStack_4f0) == local_578._s_0.Y)) &&
               (local_4e8 == local_578._s_0.Z)) break;
          }
          param_2 = iVar34;
        } while (UCharacterMovementComponent::MIN_TICK_TIME <= param_1);
      }
      cVar19 = (**(code **)(this->_padding_ + 0x278))(this,param_3);
      if (cVar19 != '\0') {
        (**(code **)(this->_padding_ + 0xa0))(this,param_3);
      }
    }
  }
  return;
}

// PhysicsRotation @ 147720610

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
FCharacterMovementComponentAsyncInput::PhysicsRotation
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  FCharacterAsyncInput *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 extraout_EAX;
  int iVar11;
  TQuat<double> *pTVar12;
  undefined1 (*pauVar13) [16];
  undefined4 uVar14;
  uint uVar15;
  TRotator<double> *pTVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
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
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar57;
  undefined1 auVar56 [16];
  double dVar58;
  double dVar60;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 local_108 [16];
  double local_f8;
  TRotator<double> local_f0;
  double local_d8;
  double local_d0;
  double local_c8;
  TQuat<double> local_b8 [5];
  FCharacterMovementComponentAsyncInput *pFVar17;
  
  if (((this->bOrientRotationToMovement != false) || (this->bUseControllerDesiredRotation != false))
     && (this->bHasValidData != false)) {
    pTVar12 = FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,local_b8);
    UE::Math::TRotator<double>::TRotator<double>(&local_f0,pTVar12);
    pTVar16 = &param_2->ModifiedRotationRate;
    if (param_2->bUsingModifiedRotationRate == false) {
      pTVar16 = &this->RotationRate;
    }
    fVar51 = __real_43b40000;
    if ((0.0 <= (float)pTVar16->Roll) &&
       (fVar51 = (float)pTVar16->Roll * param_1, __real_43b40000 <= fVar51)) {
      fVar51 = __real_43b40000;
    }
    fVar46 = __real_43b40000;
    if ((0.0 <= (float)pTVar16->Yaw) &&
       (fVar46 = (float)pTVar16->Yaw * param_1, __real_43b40000 <= fVar46)) {
      fVar46 = __real_43b40000;
    }
    fVar36 = __real_43b40000;
    if ((0.0 <= (float)pTVar16->Pitch) &&
       (fVar36 = (float)pTVar16->Pitch * param_1, __real_43b40000 <= fVar36)) {
      fVar36 = __real_43b40000;
    }
    local_d8 = (double)fVar36;
    local_d0 = (double)fVar46;
    local_c8 = (double)fVar51;
    local_f8 = local_f0.Roll;
    if (this->bOrientRotationToMovement == false) {
      if (this->bUseControllerDesiredRotation == false) {
        return;
      }
      pFVar1 = (this->CharacterInput).Ptr;
      local_108._0_8_ = (pFVar1->ControllerDesiredRotation).Pitch;
      local_108._8_8_ = (pFVar1->ControllerDesiredRotation).Yaw;
      local_f8 = (pFVar1->ControllerDesiredRotation).Roll;
    }
    else {
      pauVar13 = (undefined1 (*) [16])
                 (**(code **)(this->_padding_ + 0x238))(this,local_b8,&local_f0);
      local_108 = *pauVar13;
      local_f8 = *(double *)pauVar13[1];
    }
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_f8;
    pFVar17 = this;
    uVar10 = (**(code **)(this->_padding_ + 0x240))(this,param_2);
    dVar3 = __real_4076800000000000;
    uVar14 = SUB84(pFVar17,0);
    uVar9 = local_108._8_8_;
    if ((char)uVar10 == '\0') {
      uVar68 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
      uVar69 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
      uVar70 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
      uVar71 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
      uVar64 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
      uVar65 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
      uVar66 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
      uVar67 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      uVar76 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
      uVar77 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
      uVar78 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
      uVar79 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      uVar72 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
      uVar73 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
      uVar74 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
      uVar75 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
      auVar24 = divpd(local_108,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar30 = roundpd(auVar30,auVar24,3);
      dVar23 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar37._0_8_ = auVar30._0_8_ * dVar23;
      dVar55 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar37._8_8_ = auVar30._8_8_ * dVar55;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_f8;
      auVar30 = divpd(auVar24,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar58 = local_108._0_8_ - auVar37._0_8_;
      dVar57 = (double)local_108._8_8_ - auVar37._8_8_;
      auVar30 = roundpd(auVar37,auVar30,3);
      dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      dVar47 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar25._8_4_ = SUB84(dVar57,0);
      auVar25._0_8_ = dVar58;
      auVar25._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
      local_f8 = local_f8 - auVar30._0_8_ * dVar3;
      dVar60 = 0.0 - auVar30._8_8_ * dVar47;
      dVar50 = auVar25._8_8_ + dVar55;
      uVar18 = -(ulonglong)(0.0 <= dVar58);
      uVar19 = -(ulonglong)(0.0 <= dVar57);
      auVar38._0_8_ = uVar18 & (ulonglong)dVar58;
      auVar38._8_4_ = (undefined4)(uVar19 & (ulonglong)dVar57);
      auVar38._12_4_ = (undefined4)((uVar19 & (ulonglong)dVar57) >> 0x20);
      auVar52._0_4_ = ~(uint)uVar18 & SUB84(dVar58 + dVar23,0);
      auVar52._4_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)(dVar58 + dVar23) >> 0x20);
      auVar52._8_4_ = ~(uint)uVar19 & SUB84(dVar50,0);
      auVar52._12_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)dVar50 >> 0x20);
      auVar26._8_4_ = SUB84(dVar60,0);
      auVar26._0_8_ = local_f8;
      auVar26._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      dVar50 = auVar26._8_8_ + dVar47;
      auVar52 = auVar52 | auVar38;
      uVar18 = -(ulonglong)(0.0 <= local_f8);
      uVar19 = -(ulonglong)(0.0 <= dVar60);
      auVar56._0_4_ = ~(uint)uVar18 & SUB84(local_f8 + dVar3,0);
      auVar56._4_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)(local_f8 + dVar3) >> 0x20);
      auVar56._8_4_ = ~(uint)uVar19 & SUB84(dVar50,0);
      auVar56._12_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)dVar50 >> 0x20);
      auVar48._0_8_ = uVar18 & (ulonglong)local_f8;
      auVar48._8_4_ = (undefined4)(uVar19 & (ulonglong)dVar60);
      auVar48._12_4_ = (undefined4)((uVar19 & (ulonglong)dVar60) >> 0x20);
      auVar56 = auVar56 | auVar48;
      uVar19 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar52._0_8_);
      uVar21 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar52._8_8_);
      uVar20 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar56._0_8_);
      uVar22 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar56._8_8_);
      auVar61._0_8_ = uVar19 & (ulonglong)(auVar52._0_8_ - dVar23);
      uVar18 = uVar21 & (ulonglong)(auVar52._8_8_ - dVar55);
      auVar61._8_4_ = (undefined4)uVar18;
      auVar61._12_4_ = (undefined4)(uVar18 >> 0x20);
      auVar27._0_4_ = ~(uint)uVar19 & auVar52._0_4_;
      auVar27._4_4_ = ~(uint)(uVar19 >> 0x20) & auVar52._4_4_;
      auVar27._8_4_ = ~(uint)uVar21 & auVar52._8_4_;
      auVar27._12_4_ = ~(uint)(uVar21 >> 0x20) & auVar52._12_4_;
      local_108 = auVar61 | auVar27;
      dVar23 = local_108._8_8_;
      auVar28._0_8_ = (ulonglong)(auVar56._0_8_ - dVar3) & uVar20;
      uVar18 = uVar22 & (ulonglong)(auVar56._8_8_ - dVar47);
      auVar28._8_4_ = (undefined4)uVar18;
      auVar28._12_4_ = (undefined4)(uVar18 >> 0x20);
      auVar39._0_4_ = ~(uint)uVar20 & auVar56._0_4_;
      auVar39._4_4_ = ~(uint)(uVar20 >> 0x20) & auVar56._4_4_;
      auVar39._8_4_ = ~(uint)uVar22 & auVar56._8_4_;
      auVar39._12_4_ = ~(uint)(uVar22 >> 0x20) & auVar56._12_4_;
      auVar28 = auVar28 | auVar39;
      local_f8 = auVar28._0_8_;
    }
    else {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_108._8_8_;
      local_108 = auVar8 << 0x40;
      dVar23 = FGenericPlatformMath::Fmod((double)uVar9,__real_4076800000000000);
      if (dVar23 < 0.0) {
        dVar23 = dVar23 + dVar3;
      }
      if (__real_4066800000000000 < dVar23) {
        dVar23 = dVar23 - dVar3;
      }
      uVar64 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._0_4_;
      uVar65 = GlobalVectorConstants::Double360.ZW.m128d_f64[0]._4_4_;
      uVar66 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._0_4_;
      uVar67 = GlobalVectorConstants::Double360.ZW.m128d_f64[1]._4_4_;
      uVar68 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
      uVar69 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
      uVar70 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
      uVar71 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
      auVar28 = ZEXT816(0);
      uVar72 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
      uVar73 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
      uVar74 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
      uVar75 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
      uVar76 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
      uVar77 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
      uVar78 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
      uVar79 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      local_f8 = 0.0;
      local_108._8_8_ = dVar23;
      uVar10 = extraout_EAX;
    }
    dVar3 = __real_3f50624de0000000;
    uVar62 = SUB84(local_f0.Roll,0);
    uVar63 = (undefined4)((ulonglong)local_f0.Roll >> 0x20);
    dVar55 = local_f0.Roll - auVar28._0_8_;
    dVar57 = local_108._0_8_;
    dVar50 = local_f0.Yaw - local_108._8_8_;
    auVar29._8_4_ = SUB84(dVar50,0);
    auVar29._0_8_ = local_f0.Pitch - dVar57;
    auVar29._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar5._4_4_ = uVar69;
    auVar5._0_4_ = uVar68;
    auVar5._8_4_ = uVar70;
    auVar5._12_4_ = uVar71;
    auVar30 = divpd(auVar29,auVar5);
    auVar30 = roundpd(auVar28,auVar30,3);
    auVar40._0_8_ = auVar30._0_8_ * (double)CONCAT44(uVar69,uVar68);
    auVar40._8_8_ = auVar30._8_8_ * (double)CONCAT44(uVar71,uVar70);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = dVar55;
    dVar47 = (local_f0.Pitch - dVar57) - auVar40._0_8_;
    dVar50 = dVar50 - auVar40._8_8_;
    auVar4._4_4_ = uVar65;
    auVar4._0_4_ = uVar64;
    auVar4._8_4_ = uVar66;
    auVar4._12_4_ = uVar67;
    auVar30 = divpd(auVar31,auVar4);
    auVar30 = roundpd(auVar40,auVar30,3);
    auVar32._8_4_ = SUB84(dVar50,0);
    auVar32._0_8_ = dVar47;
    auVar32._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    dVar55 = dVar55 - auVar30._0_8_ * (double)CONCAT44(uVar65,uVar64);
    dVar58 = 0.0 - auVar30._8_8_ * (double)CONCAT44(uVar67,uVar66);
    uVar18 = -(ulonglong)(0.0 <= dVar47);
    uVar20 = -(ulonglong)(0.0 <= dVar50);
    auVar41._0_8_ = uVar18 & (ulonglong)dVar47;
    auVar41._8_4_ = (undefined4)(uVar20 & (ulonglong)dVar50);
    auVar41._12_4_ = (undefined4)((uVar20 & (ulonglong)dVar50) >> 0x20);
    dVar47 = dVar47 + (double)CONCAT44(uVar69,uVar68);
    dVar50 = auVar32._8_8_ + (double)CONCAT44(uVar71,uVar70);
    uVar19 = -(ulonglong)(0.0 <= dVar55);
    uVar21 = -(ulonglong)(0.0 <= dVar58);
    auVar59._0_4_ = ~(uint)uVar18 & SUB84(dVar47,0);
    auVar59._4_4_ = ~(uint)(uVar18 >> 0x20) & (uint)((ulonglong)dVar47 >> 0x20);
    auVar59._8_4_ = ~(uint)uVar20 & SUB84(dVar50,0);
    auVar59._12_4_ = ~(uint)(uVar20 >> 0x20) & (uint)((ulonglong)dVar50 >> 0x20);
    auVar59 = auVar59 | auVar41;
    auVar53._0_8_ = (ulonglong)dVar55 & uVar19;
    auVar53._8_4_ = (undefined4)(uVar21 & (ulonglong)dVar58);
    auVar53._12_4_ = (undefined4)((uVar21 & (ulonglong)dVar58) >> 0x20);
    auVar33._8_4_ = SUB84(dVar58,0);
    auVar33._0_8_ = dVar55;
    auVar33._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    dVar55 = dVar55 + (double)CONCAT44(uVar65,uVar64);
    dVar47 = auVar33._8_8_ + (double)CONCAT44(uVar67,uVar66);
    uVar20 = -(ulonglong)((double)CONCAT44(uVar77,uVar76) < auVar59._0_8_);
    uVar22 = -(ulonglong)((double)CONCAT44(uVar79,uVar78) < auVar59._8_8_);
    auVar49._0_4_ = ~(uint)uVar19 & SUB84(dVar55,0);
    auVar49._4_4_ = ~(uint)(uVar19 >> 0x20) & (uint)((ulonglong)dVar55 >> 0x20);
    auVar49._8_4_ = ~(uint)uVar21 & SUB84(dVar47,0);
    auVar49._12_4_ = ~(uint)(uVar21 >> 0x20) & (uint)((ulonglong)dVar47 >> 0x20);
    auVar49 = auVar49 | auVar53;
    uVar19 = -(ulonglong)((double)CONCAT44(uVar73,uVar72) < auVar49._0_8_);
    uVar21 = -(ulonglong)((double)CONCAT44(uVar75,uVar74) < auVar49._8_8_);
    auVar34._8_4_ = SUB84(__real_3f50624de0000000,0);
    auVar34._0_8_ = __real_3f50624de0000000;
    auVar34._12_4_ = (int)((ulonglong)__real_3f50624de0000000 >> 0x20);
    auVar42._0_8_ = uVar19 & (ulonglong)(auVar49._0_8_ - (double)CONCAT44(uVar65,uVar64));
    uVar18 = uVar21 & (ulonglong)(auVar49._8_8_ - (double)CONCAT44(uVar67,uVar66));
    auVar42._8_4_ = (undefined4)uVar18;
    auVar42._12_4_ = (undefined4)(uVar18 >> 0x20);
    auVar6._4_4_ = ~(uint)(uVar19 >> 0x20) & auVar49._4_4_;
    auVar6._0_4_ = ~(uint)uVar19 & auVar49._0_4_;
    auVar6._8_4_ = ~(uint)uVar21 & auVar49._8_4_;
    auVar6._12_4_ = ~(uint)(uVar21 >> 0x20) & auVar49._12_4_;
    auVar42 = auVar42 | auVar6;
    auVar43._0_8_ =
         (double)CONCAT44(auVar42._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar42._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar43._8_4_ = auVar42._8_4_ & _UNK_15061cc88;
    auVar43._12_4_ = auVar42._12_4_ & _UNK_15061cc8c;
    auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < auVar43._8_8_);
    auVar35._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar43._0_8_);
    uVar15 = movmskpd(uVar14,auVar35);
    auVar44._0_8_ = uVar20 & (ulonglong)(auVar59._0_8_ - (double)CONCAT44(uVar69,uVar68));
    uVar18 = uVar22 & (ulonglong)(auVar59._8_8_ - (double)CONCAT44(uVar71,uVar70));
    auVar44._8_4_ = (undefined4)uVar18;
    auVar44._12_4_ = (undefined4)(uVar18 >> 0x20);
    auVar7._4_4_ = ~(uint)(uVar20 >> 0x20) & auVar59._4_4_;
    auVar7._0_4_ = ~(uint)uVar20 & auVar59._0_4_;
    auVar7._8_4_ = ~(uint)uVar22 & auVar59._8_4_;
    auVar7._12_4_ = ~(uint)(uVar22 >> 0x20) & auVar59._12_4_;
    auVar44 = auVar44 | auVar7;
    auVar45._0_8_ =
         (double)CONCAT44(auVar44._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          auVar44._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar45._8_4_ = auVar44._8_4_ & _UNK_15061cc88;
    auVar45._12_4_ = auVar44._12_4_ & _UNK_15061cc8c;
    auVar54._8_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar45._8_8_);
    auVar54._0_8_ = -(ulonglong)(__real_3f50624de0000000 < auVar45._0_8_);
    iVar11 = movmskpd(uVar10,auVar54);
    if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
      if (__real_3f50624de0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_f0.Pitch - dVar57) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_f0.Pitch - dVar57,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        fVar51 = FMath::FixedTurn((float)local_f0.Pitch,(float)dVar57,(float)local_d8);
        uVar62 = SUB84(local_f0.Roll,0);
        uVar63 = (undefined4)((ulonglong)local_f0.Roll >> 0x20);
        local_108._0_8_ = (double)fVar51;
        dVar23 = (double)local_108._8_8_;
      }
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)(local_f0.Yaw - dVar23) >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_f0.Yaw - dVar23,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        fVar51 = FMath::FixedTurn((float)local_f0.Yaw,(float)dVar23,(float)local_d0);
        uVar62 = SUB84(local_f0.Roll,0);
        uVar63 = (undefined4)((ulonglong)local_f0.Roll >> 0x20);
        local_108._8_8_ = (double)fVar51;
      }
      dVar23 = (double)CONCAT44(uVar63,uVar62) - local_f8;
      if (dVar3 < (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      {
        fVar51 = FMath::FixedTurn((float)(double)CONCAT44(uVar63,uVar62),(float)local_f8,
                                  (float)local_c8);
        local_f8 = (double)fVar51;
      }
      pcVar2 = *(code **)(this->_padding_ + 0xa8);
      pTVar12 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_108,local_b8);
      (*pcVar2)(this,&UE::Math::TVector<double>::ZeroVector,pTVar12,0,param_2,0,0);
    }
  }
  return;
}

// ProcessLanded @ 147722880

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
FCharacterMovementComponentAsyncInput::ProcessLanded
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,float param_2,int param_3
          ,FCharacterMovementComponentAsyncOutput *param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x268))(this,param_4);
  if (cVar1 != '\0') {
    (**(code **)(this->_padding_ + 0x220))(this,param_1,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477228eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,param_2,param_3,param_4);
  return;
}

// ResolvePenetration @ 147724f00

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
FCharacterMovementComponentAsyncInput::ResolvePenetration
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,FHitResult *param_2,
          TQuat<double> *param_3,FCharacterMovementComponentAsyncOutput *param_4)

{
  EMoveComponentFlags EVar1;
  FUpdatedComponentAsyncInput *pFVar2;
  bool bVar3;
  byte bVar4;
  double local_198;
  double local_190;
  double local_188;
  TVector<double>_u_0 local_180;
  double local_168;
  double dStack_160;
  double local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  byte local_9b;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  local_168 = (param_1->field0_0x0)._s_0.X;
  dStack_160 = (param_1->field0_0x0)._s_0.Y;
  local_158 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x90))(*(undefined4 *)&param_1->field0_0x0,&local_198,&local_168);
  if ((((local_198 == 0.0) && (local_190 == 0.0)) && (local_188 == 0.0)) ||
     (pFVar2 = (this->UpdatedComponentInput).Ptr,
     pFVar2->UpdatedComponent == (UPrimitiveComponent *)0x0)) {
    return false;
  }
  local_180._s_0.X = local_198 + *(double *)&param_2->TraceStart;
  local_180._s_0.Y = local_190 + *(double *)&(param_2->TraceStart).field_0x8;
  local_180._s_0.Z = local_188 + *(double *)&(param_2->TraceStart).field_0x10;
  bVar3 = UWorld::OverlapBlockingTestByChannel
                    (this->World,(TVector<double> *)&local_180._s_0,param_3,this->CollisionChannel,
                     &pFVar2->CollisionShape,
                     (FCollisionQueryParams *)&pFVar2->MoveComponentQueryParams,
                     &pFVar2->MoveComponentCollisionResponseParams);
  if (!bVar3) {
    (**(code **)(this->_padding_ + 0xa8))(this,&local_198,param_3,0,param_4,0,1);
    param_4->bJustTeleported = true;
    return true;
  }
  EVar1 = param_4->MoveComponentFlags;
  param_4->MoveComponentFlags = EVar1 & ~MOVECOMP_NeverIgnoreBlockingOverlaps;
  memset(local_148,0,0x100);
  local_90 = 0;
  uStack_88 = 0;
  local_158 = 0.0;
  uStack_150 = 0xffffffff;
  uStack_14c = 0;
  local_a4 = 0xffffffff;
  local_144 = 0x3f800000;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0xffffffff;
  uStack_74 = 0;
  bVar4 = (**(code **)(this->_padding_ + 0xa8))(this,&local_198,param_3,1,param_4,local_148,1);
  if (bVar4 == 0) {
    if ((local_9b & 2) != 0) {
      (**(code **)(this->_padding_ + 0x140))(this,&local_180,local_148);
      local_168 = local_180._s_0.X + local_198;
      dStack_160 = local_180._s_0.Y + local_190;
      local_158 = local_180._s_0.Z + local_188;
      if (((((local_180._s_0.X != local_198) || (local_180._s_0.Y != local_190)) ||
           (local_180._s_0.Z != local_188)) &&
          (((local_168 != 0.0 || (dStack_160 != 0.0)) || (local_158 != 0.0)))) &&
         (bVar4 = (**(code **)(this->_padding_ + 0xa8))(this,&local_168,param_3,1,param_4,0,1),
         bVar4 != 0)) goto LAB_1477252fe;
    }
    local_168 = *(double *)&param_2->TraceEnd - *(double *)&param_2->TraceStart;
    dStack_160 = *(double *)&(param_2->TraceEnd).field_0x8 -
                 *(double *)&(param_2->TraceStart).field_0x8;
    local_158 = *(double *)&(param_2->TraceEnd).field_0x10 -
                *(double *)&(param_2->TraceStart).field_0x10;
    (**(code **)(this->_padding_ + 0x90))(this,&local_180,&local_168);
    if (((local_180._s_0.X != 0.0) || (local_180._s_0.Y != 0.0)) || (local_180._s_0.Z != 0.0)) {
      local_168 = local_180._s_0.X + local_198;
      dStack_160 = local_180._s_0.Y + local_190;
      local_158 = local_180._s_0.Z + local_188;
      bVar4 = (**(code **)(this->_padding_ + 0xa8))(this,&local_168,param_3,1,param_4,0,1);
      if ((bVar4 == 0) &&
         (0.0 < local_180._s_0.Y * local_190 + local_180._s_0.X * local_198 +
                local_180._s_0.Z * local_188)) {
        bVar4 = (**(code **)(this->_padding_ + 0xa8))(this,&local_180,param_3,1,param_4,0,1);
      }
    }
  }
LAB_1477252fe:
  param_4->bJustTeleported = (bool)(param_4->bJustTeleported | bVar4);
  param_4->MoveComponentFlags = EVar1;
  return (bool)bVar4;
}

// RestorePreAdditiveRootMotionVelocity @ 1477253a0

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
FCharacterMovementComponentAsyncInput::RestorePreAdditiveRootMotionVelocity
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_1->bIsAdditiveVelocityApplied != false) {
    dVar2 = (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.X;
    dVar3 = (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.Y;
    param_1->bIsAdditiveVelocityApplied = false;
    dVar1 = (param_1->LastPreAdditiveVelocity).field0_0x0._s_0.Z;
    (param_1->Velocity).field0_0x0._s_0.X = dVar2;
    (param_1->Velocity).field0_0x0._s_0.Y = dVar3;
    (param_1->Velocity).field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// RevertMove @ 147725890

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
FCharacterMovementComponentAsyncInput::RevertMove
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          UPrimitiveComponent *param_2,TVector<double> *param_3,FFindFloorResult *param_4,
          bool param_5,FCharacterMovementComponentAsyncOutput *param_6)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_6->bJustTeleported == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2137651385527693742>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                       ,0xe52,"TeleportType == ETeleportType::TeleportPhysics");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUpdatedComponentAsyncInput::SetPosition((this->UpdatedComponentInput).Ptr,param_1);
  param_6->bJustTeleported = false;
  if ((this->MovementBaseAsyncData).CachedMovementBase != param_2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2137651385527693733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                       ,0xe5b,"MovementBaseAsyncData.CachedMovementBase == OldBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_6->NewMovementBase != (this->MovementBaseAsyncData).CachedMovementBase) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4717179430353501943>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CharacterMovementComponentAsync.h"
                       ,0x109,"Output.NewMovementBase == CachedMovementBase");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2137651385527693730>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                     ,0xe5e,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// SafeMoveUpdatedComponent @ 147725aa0

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
FCharacterMovementComponentAsyncInput::SafeMoveUpdatedComponent
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TQuat<double> *param_2,bool param_3,FHitResult *param_4,
          FCharacterMovementComponentAsyncOutput *param_5,ETeleportType param_6)

{
  EMoveComponentFlags EVar1;
  undefined1 uVar2;
  char cVar3;
  EMoveComponentFlags EVar4;
  undefined7 in_register_00000089;
  undefined1 local_48 [32];
  
  EVar1 = param_5->MoveComponentFlags;
  EVar4 = EVar1 | (MOVECOMP_DisableBlockingOverlapDispatch|MOVECOMP_NeverIgnoreBlockingOverlaps);
  if (MovementComponentCVars::MoveIgnoreFirstBlockingOverlap != 0) {
    EVar4 = EVar1;
  }
  param_5->MoveComponentFlags = EVar4;
  uVar2 = (**(code **)(this->_padding_ + 0xa8))
                    (this,param_1,param_2,CONCAT71(in_register_00000089,param_3),param_5,param_4,
                     param_6);
  param_5->MoveComponentFlags = EVar1;
  if (param_4->bStartPenetrating != '\0') {
    (**(code **)(this->_padding_ + 0x140))(this,local_48,param_4);
    cVar3 = (**(code **)(this->_padding_ + 0x148))(this,local_48,param_4,param_2,param_5);
    if (cVar3 != '\0') {
      uVar2 = (**(code **)(this->_padding_ + 0xa8))
                        (this,param_1,param_2,param_3,param_5,param_4,param_6);
    }
  }
  return (bool)uVar2;
}

// ScaleInputAcceleration @ 147725e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FCharacterMovementComponentAsyncInput::ScaleInputAcceleration
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  TVector<double> *pTVar4;
  double dVar5;
  TVector<double> local_28;
  
  pTVar4 = UE::Math::TVector<double>::GetClampedToMaxSize(param_1,&local_28,__real_3ff0000000000000)
  ;
  dVar5 = (double)this->MaxAcceleration;
  dVar3 = (pTVar4->field0_0x0)._s_0.Y * dVar5;
  dVar1 = (pTVar4->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (pTVar4->field0_0x0)._s_0.X * dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar1;
  return __return_storage_ptr__;
}

// SetBaseFromFloor @ 1477281c0

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
FCharacterMovementComponentAsyncInput::SetBaseFromFloor
          (FCharacterMovementComponentAsyncInput *this,FFindFloorResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  UPrimitiveComponent *pUVar1;
  AActor *pAVar2;
  
  if (param_1->bBlockingHit == 1 && param_1->bWalkableFloor == 1) {
    pUVar1 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(param_1->HitResult).Component.WeakPtr);
    param_2->NewMovementBase = pUVar1;
    pAVar2 = FActorInstanceHandle::FetchActor(&(param_1->HitResult).HitObjectHandle);
    param_2->NewMovementBaseOwner = pAVar2;
    return;
  }
  param_2->NewMovementBase = (UPrimitiveComponent *)0x0;
  param_2->NewMovementBaseOwner = (AActor *)0x0;
  return;
}

// SetDefaultMovementMode @ 147728230

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
FCharacterMovementComponentAsyncInput::SetDefaultMovementMode
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  double dVar1;
  
  if (param_1->MovementMode != this->DefaultLandMovementMode) {
    dVar1 = (param_1->Velocity).field0_0x0._s_0.Z;
    (**(code **)(this->_padding_ + 200))(this,this->DefaultLandMovementMode,param_1,0);
    if ((param_1->MovementMode == MOVE_Walking) &&
       (param_1->NewMovementBase == (UPrimitiveComponent *)0x0)) {
      (param_1->Velocity).field0_0x0._s_0.Z = (double)(float)dVar1;
      (**(code **)(this->_padding_ + 200))(this,3,param_1,0);
    }
  }
  return;
}

// SetMovementMode @ 147728c50

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
FCharacterMovementComponentAsyncInput::SetMovementMode
          (FCharacterMovementComponentAsyncInput *this,EMovementMode param_1,
          FCharacterMovementComponentAsyncOutput *param_2,uchar param_3)

{
  uchar uVar1;
  EMovementMode EVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  
  uVar5 = '\0';
  if (param_1 == MOVE_Custom) {
    uVar5 = param_3;
  }
  if (param_1 == MOVE_NavWalking) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2137651385527695784>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                       ,0x658,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = param_2->MovementMode;
  if ((EVar2 != param_1) || ((param_1 == MOVE_Custom && (uVar5 != param_2->CustomMovementMode)))) {
    uVar1 = param_2->CustomMovementMode;
    param_2->CustomMovementMode = uVar5;
    param_2->MovementMode = param_1;
    if (this->bHasValidData != false) {
      (**(code **)(this->_padding_ + 0xd0))(this,EVar2,uVar1,param_2);
    }
  }
  return;
}

// SetPostLandedPhysics @ 1477290f0

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
FCharacterMovementComponentAsyncInput::SetPostLandedPhysics
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  (**(code **)(this->_padding_ + 0x268))(this,param_2);
  if ((this->DefaultLandMovementMode != MOVE_Walking) &&
     (1 < this->DefaultLandMovementMode - MOVE_NavWalking)) {
                    /* WARNING: Could not recover jumptable at 0x000147729132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x228))(this,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147729152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 200))(this,param_2->GroundMovementMode,param_2,0);
  return;
}

// ShouldCatchAir @ 1477299e0

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
FCharacterMovementComponentAsyncInput::ShouldCatchAir
          (FCharacterMovementComponentAsyncInput *this,FFindFloorResult *param_1,
          FFindFloorResult *param_2)

{
  return false;
}

// ShouldCheckForValidLandingSpot @ 1477299f0

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
FCharacterMovementComponentAsyncInput::ShouldCheckForValidLandingSpot
          (FCharacterMovementComponentAsyncInput *this,float param_1,TVector<double> *param_2,
          FHitResult *param_3,FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  char cVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  TVector<double,3> *pTVar4;
  FSingleParticlePhysicsProxy *this_00;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double local_28;
  double dStack_20;
  double local_18;
  
  dVar7 = *(double *)&(param_3->Normal).field_0x10;
  if (dVar7 <= __real_3f1a36e2e0000000) {
    return false;
  }
  dVar1 = *(double *)&param_3->Normal - *(double *)&param_3->ImpactNormal;
  uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar6,uVar5) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar6,uVar5) == __real_3f1a36e2e0000000) &&
      (dVar1 = *(double *)&(param_3->Normal).field_0x8 -
               *(double *)&(param_3->ImpactNormal).field_0x8,
      uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar6,uVar5) < __real_3f1a36e2e0000000 ||
      (double)CONCAT44(uVar6,uVar5) == __real_3f1a36e2e0000000)) &&
     (dVar7 = dVar7 - *(double *)&(param_3->ImpactNormal).field_0x10,
     (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return false;
  }
  this_00 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar3 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar3 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar3 != (FSingleParticlePhysicsProxy *)0x0) {
      if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (FSingleParticlePhysicsProxy *)0x0;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
      pTVar4 = Chaos::TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_00->Handle->_padding_,
                          (int)this_00->Handle->_padding_);
      local_28 = *(double *)pTVar4;
      dStack_20 = *(double *)&pTVar4->field_0x8;
      local_18 = *(double *)&pTVar4->field_0x10;
      goto LAB_147729ad7;
    }
  }
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
LAB_147729ad7:
  cVar2 = (**(code **)(this->_padding_ + 0xf0))(this,&local_28,&param_3->ImpactPoint);
  return cVar2 != '\0';
}

// ShouldComputeAccelerationToReachRequestedVelocity @ 147729bd0

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

bool __thiscall
FCharacterMovementComponentAsyncInput::ShouldComputeAccelerationToReachRequestedVelocity
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((this->bRequestedMoveUseAcceleration != false) &&
     (dVar1 = (param_2->Velocity).field0_0x0._s_0.X, dVar2 = (param_2->Velocity).field0_0x0._s_0.Y,
     dVar3 = (param_2->Velocity).field0_0x0._s_0.Z,
     dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3 < (double)(param_1 * param_1 * ___real_3f8292a3))
     ) {
    return true;
  }
  return false;
}

// ShouldComputePerchResult @ 147729c30

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
FCharacterMovementComponentAsyncInput::ShouldComputePerchResult
          (FCharacterMovementComponentAsyncInput *this,FHitResult *param_1,
          FCharacterMovementComponentAsyncOutput *param_2,bool param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  
  if (param_1->bBlockingHit == '\x01' && param_1->bStartPenetrating == '\0') {
    fVar3 = this->PerchRadiusThreshold;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (UCharacterMovementComponent::SWEEP_EDGE_REJECT_DISTANCE < fVar3) {
      if (param_3) {
        dVar1 = *(double *)&(param_1->ImpactPoint).field_0x8 -
                *(double *)&(param_1->Location).field_0x8;
        dVar2 = *(double *)&param_1->ImpactPoint - *(double *)&param_1->Location;
        fVar3 = (float)(**(code **)(this->_padding_ + 0x1d0))(0,param_2);
        return fVar3 * fVar3 < (float)(dVar1 * dVar1 + dVar2 * dVar2);
      }
      return true;
    }
  }
  return false;
}

// ShouldLimitAirControl @ 147729df0

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
FCharacterMovementComponentAsyncInput::ShouldLimitAirControl
          (FCharacterMovementComponentAsyncInput *this,float param_1,TVector<double> *param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  return 0.0 < dVar2 * dVar2 + dVar1 * dVar1;
}

// ShouldRemainVertical @ 147729e50

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
FCharacterMovementComponentAsyncInput::ShouldRemainVertical
          (FCharacterMovementComponentAsyncInput *this,
          FCharacterMovementComponentAsyncOutput *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x278))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(this->_padding_ + 0x268))(this,param_1);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return true;
}

// Simulate @ 147729ea0

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
FCharacterMovementComponentAsyncInput::Simulate
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  ENetRole EVar1;
  FCharacterAsyncInput *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  param_2->DeltaTime = param_1;
  pFVar2 = (this->CharacterInput).Ptr;
  EVar1 = pFVar2->LocalRole;
  if ((int)EVar1 < 2) {
    if (EVar1 == ROLE_SimulatedProxy) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2137651385527697346>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                         ,0x3e,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else if (pFVar2->bIsLocallyControlled != false) {
                    /* WARNING: Could not recover jumptable at 0x000147729ec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x18))();
    return;
  }
  return;
}

// SlideAlongSurface @ 14772a3c0

/* WARNING: Type propagation algorithm not settling */
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

float __thiscall
FCharacterMovementComponentAsyncInput::SlideAlongSurface
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,float param_2,
          TVector<double> *param_3,FHitResult *param_4,bool param_5,
          FCharacterMovementComponentAsyncOutput *param_6)

{
  float *pfVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  TVector<double>_u_0 local_58 [3];
  
  if (param_4->bBlockingHit == 0) {
    return 0.0;
  }
  local_58[0]._0_16_ = *(undefined1 (*) [16])&param_3->field0_0x0;
  local_58[0]._16_8_ = (param_3->field0_0x0)._s_0.Z;
  cVar4 = (**(code **)(this->_padding_ + 0x278))(*(undefined4 *)&param_3->field0_0x0,param_6);
  if (cVar4 == '\0') goto LAB_14772a614;
  if (0.0 < (double)local_58[0]._16_8_) {
    cVar4 = (**(code **)(this->_padding_ + 0xf8))(this,param_4);
    if (cVar4 == '\0') {
      dVar6 = (double)local_58[0]._0_8_ * (double)local_58[0]._0_8_ +
              (double)local_58[0]._8_8_ * (double)local_58[0]._8_8_;
      if (dVar6 == __real_3ff0000000000000) {
        if ((double)local_58[0]._16_8_ == 0.0) goto LAB_14772a614;
      }
      else {
        if (dVar6 < __real_3e45798ee0000000) {
          local_58[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_58[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_58[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          goto LAB_14772a614;
        }
        local_58[0]._0_8_ = (double)local_58[0]._0_8_ * (__real_3ff0000000000000 / SQRT(dVar6));
        local_58[0]._8_8_ = (double)local_58[0]._8_8_ * (__real_3ff0000000000000 / SQRT(dVar6));
      }
      uVar3 = (ulonglong)local_58[0]._8_8_ >> 0x20;
      local_58[0]._16_8_ = 0.0;
      local_58[0]._8_4_ = (int)local_58[0]._8_8_;
      local_58[0]._12_4_ = (int)uVar3;
    }
    goto LAB_14772a614;
  }
  if (((__real_bf1a36e2e0000000 <= (double)local_58[0]._16_8_) ||
      (pfVar1 = &(param_6->CurrentFloor).FloorDist,
      UCharacterMovementComponent::MIN_FLOOR_DIST < *pfVar1 ||
      UCharacterMovementComponent::MIN_FLOOR_DIST == *pfVar1)) ||
     ((param_6->CurrentFloor).bBlockingHit == 0)) goto LAB_14772a614;
  dVar6 = *(double *)&(param_6->CurrentFloor).HitResult.Normal.field_0x10;
  if ((0.0 <= *(double *)&(param_6->CurrentFloor).HitResult.Normal.field_0x8 *
              (param_1->field0_0x0)._s_0.Y +
              *(double *)&(param_6->CurrentFloor).HitResult.Normal * (param_1->field0_0x0)._s_0.X +
              dVar6 * (param_1->field0_0x0)._s_0.Z) || (___real_3fefffeb074a8000 <= dVar6)) {
  }
  else {
    local_58[0]._0_4_ = *(undefined4 *)&(param_6->CurrentFloor).HitResult.Normal;
    local_58[0]._4_4_ = *(undefined4 *)&(param_6->CurrentFloor).HitResult.Normal.field_0x4;
    local_58[0]._8_4_ = *(undefined4 *)&(param_6->CurrentFloor).HitResult.Normal.field_0x8;
    local_58[0]._12_4_ = *(undefined4 *)&(param_6->CurrentFloor).HitResult.Normal.field_0xc;
    local_58[0]._16_8_ = dVar6;
  }
  dVar6 = (double)CONCAT44(local_58[0]._12_4_,local_58[0]._8_4_);
  uVar7 = CONCAT44(local_58[0]._4_4_,local_58[0]._0_4_);
  dVar8 = (double)uVar7 * (double)CONCAT44(local_58[0]._4_4_,local_58[0]._0_4_) +
          (double)CONCAT44(local_58[0]._12_4_,local_58[0]._8_4_) * dVar6;
  if (dVar8 == __real_3ff0000000000000) {
    uVar2 = dVar6;
    if ((double)local_58[0]._16_8_ != 0.0) {
LAB_14772a5fe:
      local_58[0]._16_8_ = 0.0;
      uVar2 = dVar6;
    }
  }
  else {
    local_58[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar8) {
      uVar7 = (double)CONCAT44(local_58[0]._4_4_,local_58[0]._0_4_) *
              (__real_3ff0000000000000 / SQRT(dVar8));
      dVar6 = (__real_3ff0000000000000 / SQRT(dVar8)) * dVar6;
      goto LAB_14772a5fe;
    }
  }
  local_58[0]._8_4_ = (int)uVar2;
  local_58[0]._0_8_ = uVar7;
  local_58[0]._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
LAB_14772a614:
  fVar5 = MoveComponent_SlideAlongSurface
                    (this,param_1,param_2,(TVector<double> *)&local_58[0]._s_0,param_4,param_6,
                     param_5);
  return fVar5;
}

// StartFalling @ 14772b670

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
FCharacterMovementComponentAsyncInput::StartFalling
          (FCharacterMovementComponentAsyncInput *this,int param_1,float param_2,float param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          FCharacterMovementComponentAsyncOutput *param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  TVector<double,3> *pTVar5;
  FSingleParticlePhysicsProxy *this_00;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  
  dVar6 = (param_4->field0_0x0)._s_0.X;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_4->field0_0x0)._s_0.Z;
  auVar7._0_8_ = dVar6 * dVar6;
  auVar7._8_8_ = 0;
  this_00 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1 * dVar1 + auVar7._0_8_ + dVar2 * dVar2;
  auVar8 = sqrtpd(auVar7,auVar8);
  if (this_00 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar4 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar4 != (FSingleParticlePhysicsProxy *)0x0) {
      if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_00 = (FSingleParticlePhysicsProxy *)0x0;
      }
      Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
                ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
      pTVar5 = Chaos::TParticles<double,3>::GetX
                         ((TParticles<double,3> *)this_00->Handle->_padding_,
                          (int)this_00->Handle->_padding_);
      auVar7 = *(undefined1 (*) [16])pTVar5;
      dVar6 = auVar7._0_8_;
      uVar9 = auVar7._8_4_;
      uVar10 = auVar7._12_4_;
      goto LAB_14772b725;
    }
  }
  dVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
LAB_14772b725:
  dVar6 = dVar6 - (param_5->field0_0x0)._s_0.X;
  dVar1 = (double)CONCAT44(uVar10,uVar9) - (param_5->field0_0x0)._s_0.Y;
  if (__real_38d1b717 <= (float)auVar8._0_8_) {
    fVar11 = (float)SQRT(dVar6 * dVar6 + dVar1 * dVar1) / (float)auVar8._0_8_;
    if (__real_3f800000 <= fVar11) {
      fVar11 = __real_3f800000;
    }
    fVar11 = param_2 + (__real_3f800000 - fVar11) * param_3;
  }
  else {
    fVar11 = 0.0;
  }
  cVar3 = (**(code **)(this->_padding_ + 0x278))(this,param_6);
  if (cVar3 != '\0') {
    (**(code **)(this->_padding_ + 200))(this,3,param_6,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014772b7dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))(this,fVar11,param_1,param_6);
  return;
}

// StartNewPhysics @ 14772b7f0

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
FCharacterMovementComponentAsyncInput::StartNewPhysics
          (FCharacterMovementComponentAsyncInput *this,float param_1,int param_2,
          FCharacterMovementComponentAsyncOutput *param_3)

{
  EMovementMode EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((((UCharacterMovementComponent::MIN_TICK_TIME <= param_1) &&
       (param_2 < this->MaxSimulationIterations)) && (this->bHasValidData != false)) &&
     (((this->UpdatedComponentInput).Ptr)->bIsSimulatingPhysics == false)) {
    EVar1 = param_3->MovementMode;
    bVar4 = param_3->bMovementInProgress;
    param_3->bMovementInProgress = true;
    if (EVar1 != MOVE_None) {
      lVar2 = this->_padding_;
      if (EVar1 == MOVE_Walking) {
        (**(code **)(lVar2 + 0x40))(this);
      }
      else if (EVar1 == MOVE_Falling) {
        (**(code **)(lVar2 + 0x48))(this);
      }
      else {
        (**(code **)(lVar2 + 200))(this,0,param_3,0);
      }
    }
    param_3->bMovementInProgress = bVar4;
    if (this->bDeferUpdateMoveComponent != false) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2137651385527696688>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                         ,0x2d0,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}

// StepUp @ 14772bf50

/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
FCharacterMovementComponentAsyncInput::StepUp
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,
          TVector<double> *param_2,FHitResult *param_3,
          FCharacterMovementComponentAsyncOutput *param_4,FStepDownResult *param_5)

{
  FFindFloorResult *pFVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *puVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  FSingleParticlePhysicsProxy *pFVar16;
  TVector<double,3> *pTVar17;
  float *pfVar18;
  TQuat<double> *pTVar19;
  TVector<double> *pTVar20;
  uint *puVar21;
  atomic<unsigned_char> *paVar22;
  longlong lVar23;
  FSingleParticlePhysicsProxy *this_00;
  FStepDownResult *pFVar24;
  int iVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong in_stack_fffffffffffffb18;
  FCharacterMovementComponentAsyncOutput *pFVar35;
  TVector<double>_u_0 local_4d8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined4 uStack_4a8;
  undefined1 uStack_4a4;
  undefined2 uStack_4a3;
  undefined1 uStack_4a1;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined4 uStack_468;
  undefined1 uStack_464;
  undefined2 uStack_463;
  undefined1 uStack_461;
  undefined1 local_460 [16];
  undefined8 local_450;
  TQuat<double> local_448;
  undefined1 local_428 [4];
  float local_424;
  undefined1 local_418 [16];
  double local_408;
  undefined1 local_400 [16];
  double local_3f0;
  undefined1 local_3e8 [24];
  double local_3d0;
  double local_3c8;
  double local_3c0;
  undefined4 local_384;
  byte local_37b;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  uint local_328 [2];
  uint auStack_320 [4];
  undefined1 auStack_310 [4];
  undefined4 uStack_30c;
  undefined4 local_26c;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_220;
  undefined8 local_218;
  TVector<double> local_208;
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  undefined4 local_144;
  byte local_13b;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  TQuat<double> local_e8 [6];
  
  cVar13 = (**(code **)(this->_padding_ + 0x178))(this,param_3,param_4);
  if (cVar13 == '\0') {
    return false;
  }
  if (this->MaxStepHeight <= 0.0) {
    return false;
  }
  this_00 = ((this->UpdatedComponentInput).Ptr)->PhysicsHandle;
  if (this_00 == (FSingleParticlePhysicsProxy *)0x0) {
LAB_14772c040:
    local_4d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_4d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_4d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pFVar16 = this_00;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar16 = (FSingleParticlePhysicsProxy *)0x0;
    }
    if (pFVar16 == (FSingleParticlePhysicsProxy *)0x0) goto LAB_14772c040;
    if (this_00->Handle == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (FSingleParticlePhysicsProxy *)0x0;
    }
    Chaos::TThreadedSingleParticlePhysicsProxyBase<0>::VerifyContext
              ((TThreadedSingleParticlePhysicsProxyBase<0> *)this_00);
    pTVar17 = Chaos::TParticles<double,3>::GetX
                        ((TParticles<double,3> *)this_00->Handle->_padding_,
                         (int)this_00->Handle->_padding_);
    local_4d8._0_16_ = *(undefined1 (*) [16])pTVar17;
    local_4d8._s_0.Z = (double)*(undefined8 *)&pTVar17->field_0x10;
  }
  uVar11 = local_4d8._s_0.Z;
  fVar26 = param_4->ScaledCapsuleHalfHeight;
  fVar2 = param_4->ScaledCapsuleRadius;
  fVar32 = (float)*(double *)&(param_3->ImpactPoint).field_0x10;
  if ((double)(fVar26 - fVar2) + local_4d8._s_0.Z < (double)fVar32) {
    return false;
  }
  dVar3 = (param_1->field0_0x0)._s_0.X;
  if (((dVar3 == 0.0) && ((param_1->field0_0x0)._s_0.Y == 0.0)) &&
     ((param_1->field0_0x0)._s_0.Z == 0.0)) {
    return false;
  }
  dVar27 = (param_1->field0_0x0)._s_0.Y;
  dVar28 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = __real_3ff0000000000000 - (dVar3 * dVar3 + dVar27 * dVar27 + dVar28 * dVar28);
  if ((__real_3f847ae140000000 <=
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2137651385527694094>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                          ,0xcf2,"GravDir.IsNormalized()"), bVar14)) {
    pcVar4 = (code *)swi(3);
    uVar15 = (*pcVar4)();
    return (bool)uVar15;
  }
  fVar29 = this->MaxStepHeight;
  dVar3 = *(double *)&(param_3->ImpactNormal).field_0x8 * (param_1->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X * *(double *)&param_3->ImpactNormal +
          *(double *)&(param_3->ImpactNormal).field_0x10 * (param_1->field0_0x0)._s_0.Z;
  uVar30 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar31 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  fVar33 = (float)((double)uVar11 - (double)fVar26);
  cVar13 = (**(code **)(this->_padding_ + 0x278))(this);
  fVar26 = fVar33;
  fVar34 = fVar29;
  if ((cVar13 != '\0') && (pFVar1->bBlockingHit == 1 && pFVar1->bWalkableFloor == 1)) {
    if (pFVar1->bLineTrace == 0) {
      pfVar18 = &(param_4->CurrentFloor).FloorDist;
    }
    else {
      pfVar18 = &(param_4->CurrentFloor).LineDist;
    }
    fVar26 = *pfVar18;
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    fVar34 = UCharacterMovementComponent::MAX_FLOOR_DIST * __real_40000000 + this->MaxStepHeight;
    fVar29 = fVar29 - fVar26;
    fVar26 = fVar33 - fVar26;
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    cVar13 = (**(code **)(this->_padding_ + 0xf0))
                       (this,&param_3->Location,&param_3->ImpactPoint,fVar2);
    if (((param_4->CurrentFloor).bLineTrace == 0) && (cVar13 != '\0')) {
      fVar33 = (float)*(double *)&(param_4->CurrentFloor).HitResult.ImpactPoint.field_0x10;
    }
    else {
      fVar33 = fVar33 - (param_4->CurrentFloor).FloorDist;
    }
  }
  if (fVar32 <= fVar26) {
    return false;
  }
  memset(local_1e8,0,0x100);
  fVar26 = __real_3f800000;
  local_4c0 = 0;
  uStack_4b8 = 0;
  uStack_4a3 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_4a1 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0xffffffff;
  uStack_4a4 = 0;
  uStack_118 = 0xffffffff;
  local_144 = 0xffffffff;
  local_1e4 = 0x3f800000;
  local_120 = 0;
  FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,&local_448);
  dVar27 = (double)fVar29;
  in_stack_fffffffffffffb18 = in_stack_fffffffffffffb18 & 0xffffffffffffff00;
  dVar28 = dVar27 * (param_1->field0_0x0)._s_0.Z;
  dVar3 = dVar27 * (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c
                                    ,*(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78)
  ;
  local_450 = CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_,
                       SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_460._8_4_ = SUB84(dVar3,0);
  local_460._0_8_ =
       dVar27 * (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 4) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 *(uint *)&param_1->field0_0x0 ^
                                 (uint)__xmm_80000000000000008000000000000000);
  local_460._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (**(code **)(this->_padding_ + 0xa8))
            (this,local_460,&local_448,1,param_4,local_1e8,in_stack_fffffffffffffb18);
  if ((local_13b & 2) != 0) {
    iVar25 = 0xd20;
    paVar22 = &bGEnsureHasExecuted<_2137651385527694048>;
    goto LAB_14772c34a;
  }
  memset(local_428,0,0x100);
  pFVar35 = (FCharacterMovementComponentAsyncOutput *)
            (in_stack_fffffffffffffb18 & 0xffffffffffffff00);
  local_4a0 = 0;
  uStack_498 = 0;
  local_370 = 0;
  uStack_368 = 0;
  local_490 = 0;
  uStack_488 = 0xffffffff;
  uStack_484 = 0;
  local_384 = 0xffffffff;
  local_424 = 1.0;
  local_360 = 0;
  uStack_35c = 0;
  uStack_358 = 0xffffffff;
  uStack_354 = 0;
  (**(code **)(this->_padding_ + 0xa8))(this,param_2,&local_448,1,param_4,local_428,pFVar35);
  if ((local_37b & 1) != 0) {
    if ((local_37b & 2) != 0) {
      iVar25 = 0xd30;
      paVar22 = &bGEnsureHasExecuted<_2137651385527694032>;
      goto LAB_14772c34a;
    }
    if ((local_13b & 1) != 0) {
      (**(code **)(this->_padding_ + 0x150))
                (this,local_1e8,param_4,0,&UE::Math::TVector<double>::ZeroVector);
    }
    (**(code **)(this->_padding_ + 0x150))
              (this,local_428,param_4,0,&UE::Math::TVector<double>::ZeroVector);
    cVar13 = (**(code **)(this->_padding_ + 0x268))(this,param_4);
    fVar32 = local_424;
    if (cVar13 != '\0') {
      return true;
    }
    pFVar35 = param_4;
    fVar26 = (float)(**(code **)(this->_padding_ + 0x158))
                              (this,param_2,fVar26 - local_424,local_3e8,local_428,1,param_4);
    cVar13 = (**(code **)(this->_padding_ + 0x268))(this);
    if (cVar13 != '\0') {
      iVar25 = 0xd49;
      paVar22 = &bGEnsureHasExecuted<_2137651385527694007>;
      goto LAB_14772c34a;
    }
    if ((fVar32 == 0.0) && (fVar26 == 0.0)) {
      iVar25 = 0xd51;
      paVar22 = &bGEnsureHasExecuted<_2137651385527693999>;
      goto LAB_14772c34a;
    }
  }
  pcVar4 = *(code **)(this->_padding_ + 0xa8);
  pTVar19 = FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,local_e8);
  dVar27 = (double)fVar34;
  dVar3 = (param_1->field0_0x0)._s_0.Y * dVar27;
  local_4d8._s_0.Z = dVar27 * (param_1->field0_0x0)._s_0.Z;
  local_4d8._8_4_ = SUB84(dVar3,0);
  local_4d8._s_0.X = (param_1->field0_0x0)._s_0.X * dVar27;
  local_4d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  (*pcVar4)(this,&local_4d8,pTVar19,1,param_4,local_428,(ulonglong)pFVar35 & 0xffffffffffffff00);
  if ((local_37b & 2) != 0) {
    iVar25 = 0xd5d;
    paVar22 = &bGEnsureHasExecuted<_2137651385527693987>;
    goto LAB_14772c34a;
  }
  local_328[0] = local_328[0] & 0xfffffffe;
  auStack_320[0] = auStack_320[0] & 0xfffffff8;
  local_238 = 0;
  uStack_230 = 0;
  auStack_320[1] = 0;
  auStack_320[2] = 0;
  local_260 = 0;
  local_220 = 0;
  local_218 = 0;
  memset(auStack_310,0,0x100);
  uStack_463 = 0;
  local_258 = 0;
  uStack_250 = 0;
  uStack_461 = 0;
  local_470 = 0;
  uStack_468 = 0xffffffff;
  uStack_464 = 0;
  local_26c = 0xffffffff;
  uStack_30c = 0x3f800000;
  local_480 = 0;
  uStack_478 = 0;
  local_248 = 0;
  uStack_240 = 0xffffffff;
  if ((local_37b & 1) == 0) {
    if (param_5 == (FStepDownResult *)0x0) goto LAB_14772c912;
  }
  else {
    fVar26 = (float)(local_3f0 - (double)fVar33);
    if (this->MaxStepHeight <= fVar26 && fVar26 != this->MaxStepHeight) {
      iVar25 = 0xd6b;
      paVar22 = &bGEnsureHasExecuted<_2137651385527693973>;
      goto LAB_14772c34a;
    }
    cVar13 = (**(code **)(this->_padding_ + 0xf8))(this);
    if (cVar13 == '\0') {
      if (local_3c8 * (param_2->field0_0x0)._s_0.Y + local_3d0 * (param_2->field0_0x0)._s_0.X +
          local_3c0 * (param_2->field0_0x0)._s_0.Z < 0.0) {
        iVar25 = 0xd78;
        paVar22 = &bGEnsureHasExecuted<_2137651385527693960>;
        goto LAB_14772c34a;
      }
      if ((double)uVar11 < local_408) {
        iVar25 = 0xd82;
        paVar22 = &bGEnsureHasExecuted<_2137651385527693950>;
        goto LAB_14772c34a;
      }
    }
    cVar13 = (**(code **)(this->_padding_ + 0xf0))(this,local_418,local_400,fVar2);
    if (cVar13 == '\0') {
      iVar25 = 0xd8c;
      paVar22 = &bGEnsureHasExecuted<_2137651385527693940>;
LAB_14772c34a:
      bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (paVar22,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                          ,iVar25,"false");
      if (!bVar14) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    if ((0.0 < fVar26) &&
       (cVar13 = (**(code **)(this->_padding_ + 0x178))(this,local_428,param_4), cVar13 == '\0')) {
      iVar25 = 0xd95;
      paVar22 = &bGEnsureHasExecuted<_2137651385527693931>;
      goto LAB_14772c34a;
    }
    if (param_5 == (FStepDownResult *)0x0) goto LAB_14772c912;
    pcVar4 = *(code **)(this->_padding_ + 0xd8);
    pTVar20 = FUpdatedComponentAsyncInput::GetPosition((this->UpdatedComponentInput).Ptr,&local_208)
    ;
    (*pcVar4)(this,pTVar20,auStack_320,0,param_4,local_428);
    if ((((double)uVar11 < local_408) && ((auStack_320[0] & 1) == 0)) &&
       ((float)(double)CONCAT44(uVar31,uVar30) < CharacterMovementConstants::MAX_STEP_SIDE_Z)) {
      iVar25 = 0xda7;
      paVar22 = &bGEnsureHasExecuted<_2137651385527693913>;
      goto LAB_14772c34a;
    }
    local_328[0] = local_328[0] | 1;
  }
  lVar23 = 2;
  puVar12 = local_328;
  do {
    pFVar24 = param_5;
    puVar21 = puVar12;
    uVar30 = puVar21[1];
    uVar31 = puVar21[2];
    uVar5 = puVar21[3];
    uVar6 = puVar21[4];
    uVar7 = puVar21[5];
    uVar8 = puVar21[6];
    uVar9 = puVar21[7];
    puVar12 = puVar21 + 0x20;
    *(uint *)&pFVar24->field_0x0 = puVar21[0];
    pFVar24->_padding_ = uVar30;
    *(uint *)&(pFVar24->FloorResult).field_0x0 = uVar31;
    (pFVar24->FloorResult).FloorDist = (float)uVar5;
    uVar30 = puVar21[8];
    uVar31 = puVar21[9];
    uVar5 = puVar21[10];
    uVar10 = puVar21[0xb];
    (pFVar24->FloorResult).LineDist = (float)uVar6;
    (pFVar24->FloorResult)._padding_ = uVar7;
    (pFVar24->FloorResult).HitResult.FaceIndex = uVar8;
    (pFVar24->FloorResult).HitResult.Time = (float)uVar9;
    uVar6 = puVar21[0xc];
    uVar7 = puVar21[0xd];
    uVar8 = puVar21[0xe];
    uVar9 = puVar21[0xf];
    (pFVar24->FloorResult).HitResult.Distance = (float)uVar30;
    (pFVar24->FloorResult).HitResult._padding_ = uVar31;
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0x0 = uVar5;
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0x4 = uVar10;
    uVar30 = puVar21[0x10];
    uVar31 = puVar21[0x11];
    uVar5 = puVar21[0x12];
    uVar10 = puVar21[0x13];
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0x8 = uVar6;
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0xc = uVar7;
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0x10 = uVar8;
    *(uint *)&(pFVar24->FloorResult).HitResult.Location.field_0x14 = uVar9;
    uVar6 = puVar21[0x14];
    uVar7 = puVar21[0x15];
    uVar8 = puVar21[0x16];
    uVar9 = puVar21[0x17];
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0x0 = uVar30;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0x4 = uVar31;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0x8 = uVar5;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0xc = uVar10;
    uVar30 = puVar21[0x18];
    uVar31 = puVar21[0x19];
    uVar5 = puVar21[0x1a];
    uVar10 = puVar21[0x1b];
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0x10 = uVar6;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactPoint.field_0x14 = uVar7;
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0x0 = uVar8;
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0x4 = uVar9;
    uVar6 = puVar21[0x1c];
    uVar7 = puVar21[0x1d];
    uVar8 = puVar21[0x1e];
    uVar9 = puVar21[0x1f];
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0x8 = uVar30;
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0xc = uVar31;
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0x10 = uVar5;
    *(uint *)&(pFVar24->FloorResult).HitResult.Normal.field_0x14 = uVar10;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x0 = uVar6;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x4 = uVar7;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x8 = uVar8;
    *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0xc = uVar9;
    lVar23 = lVar23 + -1;
    param_5 = (FStepDownResult *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x10;
  } while (lVar23 != 0);
  uVar30 = puVar12[1];
  uVar31 = puVar21[0x22];
  uVar5 = puVar21[0x23];
  uVar6 = puVar21[0x24];
  uVar7 = puVar21[0x25];
  *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x10 = puVar12[0];
  *(uint *)&(pFVar24->FloorResult).HitResult.ImpactNormal.field_0x14 = uVar30;
  *(uint *)&(pFVar24->FloorResult).HitResult.TraceStart.field_0x0 = uVar31;
  *(uint *)&(pFVar24->FloorResult).HitResult.TraceStart.field_0x4 = uVar5;
  *(uint *)&(pFVar24->FloorResult).HitResult.TraceStart.field_0x8 = uVar6;
  *(uint *)&(pFVar24->FloorResult).HitResult.TraceStart.field_0xc = uVar7;
LAB_14772c912:
  param_4->bJustTeleported =
       (bool)(param_4->bJustTeleported | this->bMaintainHorizontalGroundVelocity == false);
  return true;
}

// TwoWallAdjust @ 147730d40

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
FCharacterMovementComponentAsyncInput::TwoWallAdjust
          (FCharacterMovementComponentAsyncInput *this,TVector<double> *param_1,FHitResult *param_2,
          TVector<double> *param_3,FCharacterMovementComponentAsyncOutput *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_98 [144];
  
  local_b0 = *(double *)&param_2->Normal;
  dStack_a8 = *(double *)&(param_2->Normal).field_0x8;
  local_c8 = (param_1->field0_0x0)._s_0.X;
  dStack_c0 = (param_1->field0_0x0)._s_0.Y;
  local_b8 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  local_a0 = *(double *)&(param_2->Normal).field_0x10;
  if (0.0 < dVar6 * dStack_a8 + dVar7 * local_b0 + dVar1 * local_a0) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar9 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    pdVar3 = (double *)
             (**(code **)(this->_padding_ + 0x160))
                       (SUB84(dVar7 * local_b0,0),local_98,&local_c8,__real_3f800000 - param_2->Time
                        ,&local_b0,param_2,param_4);
    uVar10 = *pdVar3;
    uVar11 = pdVar3[1];
    local_b8 = pdVar3[2];
    if (0.0 < dVar9 * (double)uVar11 + dVar1 * (double)uVar10 + dVar6 * local_b8) {
      dVar6 = (local_b0 * (param_3->field0_0x0)._s_0.X + dStack_a8 * (param_3->field0_0x0)._s_0.Y +
              local_a0 * (param_3->field0_0x0)._s_0.Z) - __real_3ff0000000000000;
      if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3f1a36e2e0000000) {
        uVar10 = (double)uVar10 + local_b0 * __real_3f847ae140000000;
        uVar11 = (double)uVar11 + dStack_a8 * __real_3f847ae140000000;
        local_b8 = local_b8 + local_a0 * __real_3f847ae140000000;
      }
    }
    else {
      local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  else {
    dVar9 = dVar1 * dStack_a8 - dVar6 * local_a0;
    dVar1 = dVar7 * local_a0 - dVar1 * local_b0;
    dVar7 = dVar6 * local_b0 - dVar7 * dStack_a8;
    dVar6 = dVar1 * dVar1 + dVar9 * dVar9 + dVar7 * dVar7;
    uVar8 = dVar7;
    uVar10 = dVar9;
    uVar11 = dVar1;
    if ((dVar6 != __real_3ff0000000000000) &&
       (uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar6)) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar8 = dVar7 * dVar6;
      uVar10 = dVar9 * dVar6;
      uVar11 = dVar1 * dVar6;
    }
    local_b8 = ((double)uVar11 * dStack_c0 + (double)uVar10 * local_c8 + (double)uVar8 * local_b8) *
               (double)(__real_3f800000 - param_2->Time);
    uVar10 = local_b8 * (double)uVar10;
    uVar11 = local_b8 * (double)uVar11;
    local_b8 = local_b8 * (double)uVar8;
    if ((double)uVar11 * (param_1->field0_0x0)._s_0.Y +
        (double)uVar10 * (param_1->field0_0x0)._s_0.X + local_b8 * (param_1->field0_0x0)._s_0.Z <
        0.0) {
      uVar4 = (uint)__xmm_80000000000000008000000000000000;
      uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_b8 = (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) ^ uVar5,
                                  SUB84(local_b8,0) ^ uVar4);
      uVar10 = CONCAT44((uint)((ulonglong)uVar10 >> 0x20) ^ uVar5,(uint)uVar10 ^ uVar4);
      uVar11 = CONCAT44((uint)((ulonglong)uVar11 >> 0x20) ^ uVar5,(uint)uVar11 ^ uVar4);
    }
  }
  auVar2._8_4_ = (int)uVar11;
  auVar2._0_8_ = uVar10;
  auVar2._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar2;
  (param_1->field0_0x0)._s_0.Z = local_b8;
  return;
}

// UpdateBasedMovement @ 1477318a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FCharacterMovementComponentAsyncInput::UpdateBasedMovement
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  float fVar3;
  EMoveComponentFlags EVar4;
  FCharacterAsyncInput *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  bool bVar36;
  EMoveComponentFlags EVar37;
  uint uVar38;
  TQuat<double> *pTVar39;
  TVector<double> *pTVar40;
  double *pdVar41;
  int iVar42;
  uint uVar43;
  atomic<unsigned_char> *paVar44;
  TRotator<double> *this_00;
  longlong lVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auStackY_5d8 [32];
  TRotator<double> local_590;
  TQuat<double> local_578;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined4 uStack_540;
  undefined1 uStack_53c;
  undefined2 uStack_53b;
  undefined1 uStack_539;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TVector<double>_u_0 local_508;
  double local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_488;
  double local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  double local_468;
  TQuat<double> local_458;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  TQuat<double> local_418;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double local_398;
  double dStack_390;
  double local_388;
  double local_378;
  double dStack_370;
  double local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  TVector<double> local_338;
  TVector<double> local_320;
  undefined1 local_308 [24];
  TVector<double> local_2f0;
  TVector<double> local_2d8;
  TQuat<double> local_2b8;
  TQuat<double> local_298;
  TQuat<double> local_278;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined4 local_1b4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  paVar44 = (atomic<unsigned_char> *)this;
  if (param_2->NewMovementBase != (this->MovementBaseAsyncData).CachedMovementBase) {
    paVar44 = &bGEnsureHasExecuted<_4717179430353501943>;
    bVar36 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4717179430353501943>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\CharacterMovementComponentAsync.h"
                        ,0x109,"Output.NewMovementBase == CachedMovementBase");
    if (bVar36) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar39 = &(this->MovementBaseAsyncData).OldBaseQuat;
  pTVar1 = &(this->MovementBaseAsyncData).OldBaseLocation;
  if ((this->MovementBaseAsyncData).bMovementBaseUsesRelativeLocationCached == false) {
    return;
  }
  if (((this->MovementBaseAsyncData).bMovementBaseIsValidCached == false) ||
     ((this->MovementBaseAsyncData).bMovementBaseOwnerIsValidCached == false)) {
    param_2->NewMovementBase = (UPrimitiveComponent *)0x0;
    param_2->NewMovementBaseOwner = (AActor *)0x0;
    return;
  }
  EVar4 = param_2->MoveComponentFlags;
  EVar37 = EVar4 | MOVECOMP_IgnoreBases;
  param_2->MoveComponentFlags = EVar37;
  dVar25 = UE::Math::TQuat<double>::Identity.Y;
  (param_2->DeltaQuat).X = UE::Math::TQuat<double>::Identity.X;
  (param_2->DeltaQuat).Y = dVar25;
  dVar25 = UE::Math::TQuat<double>::Identity.W;
  pTVar2 = &param_2->DeltaPosition;
  (param_2->DeltaQuat).Z = UE::Math::TQuat<double>::Identity.Z;
  (param_2->DeltaQuat).W = dVar25;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pTVar2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->DeltaPosition).field0_0x0._s_0.Y = (double)uVar35;
  (param_2->DeltaPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar34 = _UNK_15061cc8c;
  uVar33 = _UNK_15061cc88;
  uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar31 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((this->MovementBaseAsyncData).bIsBaseTransformValid == false) goto LAB_1477321b8;
  local_538._s_0.Z = (this->MovementBaseAsyncData).BaseLocation.field0_0x0._s_0.Z;
  local_458.X = (this->MovementBaseAsyncData).BaseQuat.X;
  local_458.Y = (this->MovementBaseAsyncData).BaseQuat.Y;
  local_458.Z = (this->MovementBaseAsyncData).BaseQuat.Z;
  local_458.W = (this->MovementBaseAsyncData).BaseQuat.W;
  dVar25 = pTVar39->X;
  dVar26 = (this->MovementBaseAsyncData).OldBaseQuat.Y;
  dVar27 = (this->MovementBaseAsyncData).OldBaseQuat.Z;
  dVar28 = (this->MovementBaseAsyncData).OldBaseQuat.W;
  dVar29 = (this->MovementBaseAsyncData).BaseLocation.field0_0x0._s_0.X;
  dVar30 = (this->MovementBaseAsyncData).BaseLocation.field0_0x0._s_0.Y;
  local_488 = __real_3e45798ee0000000;
  lVar45 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(dVar28 - local_458.W) >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar28 - local_458.W,0) & _UNK_15061cc88));
  auVar12._8_4_ = (int)lVar45;
  auVar12._0_8_ =
       -(ulonglong)
        (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar27 - local_458.Z) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar27 - local_458.Z,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar12._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
  iVar42 = movmskpd((int)paVar44,auVar12);
  lVar45 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)(dVar26 - local_458.Y) >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar26 - local_458.Y,0) & _UNK_15061cc88));
  auVar13._8_4_ = (int)lVar45;
  auVar13._0_8_ =
       -(ulonglong)
        (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar25 - local_458.X) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar25 - local_458.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar13._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
  uVar38 = movmskpd(EVar37,auVar13);
  uVar43 = iVar42 << 2 | uVar38;
  if (uVar43 == 0) {
LAB_147731bb4:
    bVar36 = false;
    if (((dVar29 == (pTVar1->field0_0x0)._s_0.X) &&
        (bVar36 = false, dVar30 == (this->MovementBaseAsyncData).OldBaseLocation.field0_0x0._s_0.Y))
       && (bVar36 = false,
          local_538._s_0.Z == (this->MovementBaseAsyncData).OldBaseLocation.field0_0x0._s_0.Z))
    goto LAB_1477321b8;
  }
  else {
    lVar45 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_458.W + dVar28) >> 0x20) & _UNK_15061cc8c,
                               SUB84(local_458.W + dVar28,0) & _UNK_15061cc88));
    auVar14._8_4_ = (int)lVar45;
    auVar14._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_458.Z + dVar27) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_458.Z + dVar27,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar14._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    uVar43 = movmskpd(uVar43,auVar14);
    lVar45 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)(dVar26 + local_458.Y) >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar26 + local_458.Y,0) & _UNK_15061cc88));
    auVar18._8_4_ = (int)lVar45;
    auVar18._0_8_ =
         -(ulonglong)
          (__real_3e45798ee0000000 <
          (double)CONCAT44((uint)((ulonglong)(dVar25 + local_458.X) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar25 + local_458.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar18._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    iVar42 = movmskpd(uVar38,auVar18);
    if ((uVar43 & 0x3fffffff) == 0 && iVar42 == 0) goto LAB_147731bb4;
    dVar27 = dVar27 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar28 = dVar28 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar25 = dVar25 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar26 = dVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar21 = local_458.X * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
             + local_458.W * dVar25 +
             local_458.Y * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
             + local_458.Z * dVar26 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar22 = local_458.X * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
             + local_458.W * dVar26 +
             local_458.Y * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + local_458.Z * dVar25 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar46 = SUB84(dVar22,0);
    uVar47 = (undefined4)((ulonglong)dVar22 >> 0x20);
    auVar19._8_4_ = uVar46;
    auVar19._0_8_ = dVar21;
    auVar19._12_4_ = uVar47;
    (param_2->DeltaQuat).X = dVar21;
    (param_2->DeltaQuat).Y = (double)auVar19._8_8_;
    dVar24 = local_458.X * dVar26 * dVar24 + local_458.W * dVar27 + local_458.Y * dVar25 * dVar7 +
             local_458.Z * dVar28 * dVar8;
    dVar25 = local_458.X * dVar25 * dVar9 + local_458.W * dVar28 + local_458.Y * dVar26 * dVar10 +
             local_458.Z * dVar27 * dVar11;
    uVar48 = SUB84(dVar25,0);
    uVar49 = (undefined4)((ulonglong)dVar25 >> 0x20);
    local_358._8_4_ = uVar46;
    local_358._0_8_ = dVar21;
    local_358._12_4_ = uVar47;
    auVar23._8_4_ = uVar48;
    auVar23._0_8_ = dVar24;
    auVar23._12_4_ = uVar49;
    (param_2->DeltaQuat).Z = dVar24;
    (param_2->DeltaQuat).W = (double)auVar23._8_8_;
    local_348._8_4_ = uVar48;
    local_348._0_8_ = dVar24;
    local_348._12_4_ = uVar49;
    bVar36 = true;
  }
  local_538._s_0.X = dVar29;
  local_538._s_0.Y = dVar30;
  UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
            ((TQuatRotationTranslationMatrix<double> *)&local_158,pTVar39,pTVar1);
  UE::Math::TQuatRotationTranslationMatrix<double>::TQuatRotationTranslationMatrix<double>
            ((TQuatRotationTranslationMatrix<double> *)&local_3d8,&local_458,
             (TVector<double> *)&local_538._s_0);
  FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,&local_578);
  if ((bVar36) && (this->bIgnoreBaseRotation == false)) {
    FUpdatedComponentAsyncInput::GetRotation((this->UpdatedComponentInput).Ptr,&local_418);
    dVar27 = (param_2->DeltaQuat).X;
    dVar28 = (param_2->DeltaQuat).Y;
    dVar24 = (param_2->DeltaQuat).Z;
    dVar7 = (param_2->DeltaQuat).W;
    dVar25 = dVar27 * local_578.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
             + dVar7 * local_578.Y +
             dVar28 * local_578.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar24 * local_578.X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar26 = dVar27 * local_578.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
             + dVar7 * local_578.W +
             dVar28 * local_578.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
             + dVar24 * local_578.Z *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_438._8_4_ = SUB84(dVar25,0);
    local_438._0_8_ =
         dVar27 * local_578.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar7 * local_578.X +
         dVar28 * local_578.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar24 * local_578.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_438._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    local_428._8_4_ = SUB84(dVar26,0);
    local_428._0_8_ =
         dVar27 * local_578.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar7 * local_578.Z +
         dVar28 * local_578.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar24 * local_578.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_428._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    UE::Math::TRotator<double>::TRotator<double>(&local_590,(TQuat<double> *)local_438);
    pFVar5 = (this->CharacterInput).Ptr;
    local_478 = local_590.Pitch._0_4_;
    uStack_474 = local_590.Pitch._4_4_;
    uStack_470 = local_590.Yaw._0_4_;
    uStack_46c = local_590.Yaw._4_4_;
    local_468 = local_590.Roll;
    (**(code **)(pFVar5->_padding_ + 8))(pFVar5,&local_478,0,this);
    this_00 = &((param_2->CharacterOutput).Ptr)->Rotation;
    pTVar39 = UE::Math::TRotator<double>::Quaternion(this_00,&local_2b8);
    local_578.X = pTVar39->X;
    local_578.Y = pTVar39->Y;
    local_578.Z = pTVar39->Z;
    local_578.W = pTVar39->W;
    local_480 = __real_3eb0c6f7a0000000;
    lVar45 = -(ulonglong)
              (__real_3eb0c6f7a0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_418.W - local_578.W) >> 0x20) & uVar34,
                               SUB84(local_418.W - local_578.W,0) & uVar33));
    auVar15._8_4_ = (int)lVar45;
    auVar15._0_8_ =
         -(ulonglong)
          (__real_3eb0c6f7a0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_418.Z - local_578.Z) >> 0x20) & uVar32,
                           SUB84(local_418.Z - local_578.Z,0) & uVar31));
    auVar15._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    iVar42 = movmskpd((int)this_00,auVar15);
    lVar45 = -(ulonglong)
              (__real_3eb0c6f7a0000000 <
              (double)CONCAT44((uint)((ulonglong)(local_418.Y - local_578.Y) >> 0x20) & uVar34,
                               SUB84(local_418.Y - local_578.Y,0) & uVar33));
    auVar16._8_4_ = (int)lVar45;
    auVar16._0_8_ =
         -(ulonglong)
          (__real_3eb0c6f7a0000000 <
          (double)CONCAT44((uint)((ulonglong)(local_418.X - local_578.X) >> 0x20) & uVar32,
                           SUB84(local_418.X - local_578.X,0) & uVar31));
    auVar16._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
    uVar38 = movmskpd((int)pTVar39,auVar16);
    uVar43 = iVar42 << 2 | uVar38;
    if (uVar43 != 0) {
      lVar45 = -(ulonglong)
                (__real_3eb0c6f7a0000000 <
                (double)CONCAT44((uint)((ulonglong)(local_418.W + local_578.W) >> 0x20) & uVar34,
                                 SUB84(local_418.W + local_578.W,0) & uVar33));
      auVar17._8_4_ = (int)lVar45;
      auVar17._0_8_ =
           -(ulonglong)
            (__real_3eb0c6f7a0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_418.Z + local_578.Z) >> 0x20) & uVar32,
                             SUB84(local_418.Z + local_578.Z,0) & uVar31));
      auVar17._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
      uVar43 = movmskpd(uVar43,auVar17);
      lVar45 = -(ulonglong)
                (__real_3eb0c6f7a0000000 <
                (double)CONCAT44((uint)((ulonglong)(local_418.Y + local_578.Y) >> 0x20) & uVar34,
                                 SUB84(local_418.Y + local_578.Y,0) & uVar33));
      auVar20._8_4_ = (int)lVar45;
      auVar20._0_8_ =
           -(ulonglong)
            (__real_3eb0c6f7a0000000 <
            (double)CONCAT44((uint)((ulonglong)(local_418.X + local_578.X) >> 0x20) & uVar32,
                             SUB84(local_418.X + local_578.X,0) & uVar31));
      auVar20._12_4_ = (int)((ulonglong)lVar45 >> 0x20);
      iVar42 = movmskpd(uVar38,auVar20);
      if ((uVar43 & 0x3fffffff) != 0 || iVar42 != 0) goto LAB_147731eaa;
    }
    if ((this->bOrientRotationToMovement != false) || (this->bUseControllerDesiredRotation != false)
       ) {
      local_590.Pitch = 0.0;
      local_590.Roll = 0.0;
      pcVar6 = *(code **)(this->_padding_ + 0xa8);
      pTVar39 = UE::Math::TRotator<double>::Quaternion(&local_590,&local_298);
      local_3f8 = *(undefined4 *)&pTVar39->X;
      uStack_3f4 = *(undefined4 *)((longlong)&pTVar39->X + 4);
      uStack_3f0 = *(undefined4 *)&pTVar39->Y;
      uStack_3ec = *(undefined4 *)((longlong)&pTVar39->Y + 4);
      local_3e8 = *(undefined4 *)&pTVar39->Z;
      uStack_3e4 = *(undefined4 *)((longlong)&pTVar39->Z + 4);
      uStack_3e0 = *(undefined4 *)&pTVar39->W;
      uStack_3dc = *(undefined4 *)((longlong)&pTVar39->W + 4);
      (*pcVar6)(this,&UE::Math::TVector<double>::ZeroVector,&local_3f8,0);
      pTVar39 = FUpdatedComponentAsyncInput::GetRotation
                          ((this->UpdatedComponentInput).Ptr,&local_278);
      local_578.X = pTVar39->X;
      local_578.Y = pTVar39->Y;
      local_578.Z = pTVar39->Z;
      local_578.W = pTVar39->W;
    }
  }
LAB_147731eaa:
  fVar3 = param_2->ScaledCapsuleHalfHeight;
  pTVar40 = FUpdatedComponentAsyncInput::GetPosition((this->UpdatedComponentInput).Ptr,&local_338);
  local_520._s_0.X = (pTVar40->field0_0x0)._s_0.X;
  local_520._s_0.Y = (pTVar40->field0_0x0)._s_0.Y;
  local_520._s_0.Z = (pTVar40->field0_0x0)._s_0.Z - (double)fVar3;
  UE::Math::TMatrix<double>::InverseTransformPosition
            (&local_158,(TVector<double> *)&local_508._s_0,(TVector<double> *)&local_520._s_0);
  local_4e8 = local_3b8 * local_508._s_0.Y + local_3d8 * local_508._s_0.X +
              local_398 * local_508._s_0.Z + local_378 * __real_3ff0000000000000;
  local_4e0 = dStack_3b0 * local_508._s_0.Y + dStack_3d0 * local_508._s_0.X +
              dStack_390 * local_508._s_0.Z + dStack_370 * __real_3ff0000000000000;
  local_4d8 = (double)fVar3 +
              local_3a8 * local_508._s_0.Y + local_3c8 * local_508._s_0.X +
              local_388 * local_508._s_0.Z + local_368 * __real_3ff0000000000000;
  (**(code **)(this->_padding_ + 0x88))(this,&local_4c8,&local_4e8);
  pcVar6 = *(code **)(this->_padding_ + 0x90);
  pTVar40 = FUpdatedComponentAsyncInput::GetPosition((this->UpdatedComponentInput).Ptr,&local_320);
  local_4a8 = local_4c8 - (pTVar40->field0_0x0)._s_0.X;
  local_4a0 = local_4c0 - (pTVar40->field0_0x0)._s_0.Y;
  local_498 = local_4b8 - (pTVar40->field0_0x0)._s_0.Z;
  pdVar41 = (double *)(*pcVar6)(this,local_308,&local_4a8);
  dVar25 = pdVar41[1];
  (pTVar2->field0_0x0)._s_0.X = *pdVar41;
  (param_2->DeltaPosition).field0_0x0._s_0.Y = dVar25;
  (param_2->DeltaPosition).field0_0x0._s_0.Z = pdVar41[2];
  if (((!bVar36) && (dVar29 - (pTVar1->field0_0x0)._s_0.X == 0.0)) &&
     (dVar30 - (this->MovementBaseAsyncData).OldBaseLocation.field0_0x0._s_0.Y == 0.0)) {
    (pTVar2->field0_0x0)._s_0.X = 0.0;
    (param_2->DeltaPosition).field0_0x0._s_0.Y = 0.0;
  }
  memset(local_258,0,0x100);
  uStack_53b = 0;
  local_558 = 0;
  uStack_550 = 0;
  uStack_539 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_548 = 0;
  uStack_540 = 0xffffffff;
  uStack_53c = 0;
  uStack_188 = 0xffffffff;
  local_1b4 = 0xffffffff;
  local_254 = 0x3f800000;
  local_190 = 0;
  FUpdatedComponentAsyncInput::GetPosition((this->UpdatedComponentInput).Ptr,&local_2f0);
  (**(code **)(this->_padding_ + 0xa8))(this,pTVar2,&local_578,1);
  FUpdatedComponentAsyncInput::GetPosition((this->UpdatedComponentInput).Ptr,&local_2d8);
  FCachedMovementBaseAsyncData::Validate(&this->MovementBaseAsyncData,param_2);
  if ((this->MovementBaseAsyncData).bMovementBaseIsSimulatedCached != false) {
    if ((param_2->bShouldApplyDeltaToMeshPhysicsTransforms != false) &&
       (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2137651385527696746>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CharacterMovementComponentAsync.cpp"
                            ,0x296,"Output.bShouldApplyDeltaToMeshPhysicsTransforms == false"),
       bVar36)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_2->bShouldApplyDeltaToMeshPhysicsTransforms = true;
  }
LAB_1477321b8:
  param_2->MoveComponentFlags = EVar4;
  return;
}

// UpdateCharacterStateAfterMovement @ 147732230

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
FCharacterMovementComponentAsyncInput::UpdateCharacterStateAfterMovement
          (FCharacterMovementComponentAsyncInput *this,float param_1,
          FCharacterMovementComponentAsyncOutput *param_2)

{
  if ((((this->CharacterInput).Ptr)->LocalRole != ROLE_SimulatedProxy) &&
     (param_2->bIsCrouched != false)) {
                    /* WARNING: Could not recover jumptable at 0x00014773224d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x68))(this,param_2);
    return;
  }
  return;
}

// ~FCharacterMovementComponentAsyncInput @ 1477f3040

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
FCharacterMovementComponentAsyncInput::~FCharacterMovementComponentAsyncInput
          (FCharacterMovementComponentAsyncInput *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  FCharacterAsyncInput *pFVar3;
  FUpdatedComponentAsyncInput *pFVar4;
  
  this->_padding_ = (longlong)&___7FCharacterMovementComponentAsyncInput__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncSimState).SharedReferenceCount.ReferenceController);
  FVar1 = (this->CapsuleParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->CapsuleParams).IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pvVar2 = (void *)(this->QueryParams)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->QueryParams)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar3 = (this->CharacterInput).Ptr;
  if (pFVar3 != (FCharacterAsyncInput *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar4 = (this->UpdatedComponentInput).Ptr;
  if (pFVar4 != (FUpdatedComponentAsyncInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477f30d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar4->_padding_)(pFVar4,1);
    return;
  }
  return;
}

