// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 80

// StaticStruct @ 14822cc10

UScriptStruct * __cdecl FConstraintInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConstraintInstance.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FConstraintInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintInstance,(UObject *)pUVar1,
                         L"ConstraintInstance");
  }
  return Z_Registration_Info_UScriptStruct_FConstraintInstance.OuterSingleton;
}

// FConstraintInstance @ 14824e700

FConstraintInstance * __thiscall FConstraintInstance::FConstraintInstance(FConstraintInstance *this)

{
  this->bScaleLinearLimits = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->JointName).ComparisonIndex = 0;
  (this->JointName).Number = 0;
  (this->ConstraintBone1).ComparisonIndex = 0;
  (this->ConstraintBone1).Number = 0;
  (this->ConstraintBone2).ComparisonIndex = 0;
  (this->ConstraintBone2).Number = 0;
  (this->AngularRotationOffset).Pitch = 0.0;
  (this->AngularRotationOffset).Yaw = 0.0;
  (this->AngularRotationOffset).Roll = 0.0;
  this->AverageMass = 0.0;
  this->LastKnownScale = 1.0;
  FConstraintProfileProperties::FConstraintProfileProperties(&this->ProfileInstance);
  (this->UserData).Type = ConstraintInstance;
  (this->UserData).Payload = this;
  (this->Pos1).field0_0x0._s_0.X = 0.0;
  (this->Pos1).field0_0x0._s_0.Y = 0.0;
  (this->Pos1).field0_0x0._s_0.Z = 0.0;
  (this->PriAxis1).field0_0x0._s_0.X = 1.0;
  (this->PriAxis1).field0_0x0._s_0.Y = 0.0;
  (this->PriAxis1).field0_0x0._s_0.Z = 0.0;
  (this->SecAxis1).field0_0x0._s_0.X = 0.0;
  (this->SecAxis1).field0_0x0._s_0.Y = 1.0;
  (this->SecAxis1).field0_0x0._s_0.Z = 0.0;
  (this->Pos2).field0_0x0._s_0.X = 0.0;
  (this->Pos2).field0_0x0._s_0.Y = 0.0;
  (this->Pos2).field0_0x0._s_0.Z = 0.0;
  (this->PriAxis2).field0_0x0._s_0.X = 1.0;
  (this->PriAxis2).field0_0x0._s_0.Y = 0.0;
  (this->PriAxis2).field0_0x0._s_0.Z = 0.0;
  (this->SecAxis2).field0_0x0._s_0.X = 0.0;
  (this->SecAxis2).field0_0x0._s_0.Y = 1.0;
  (this->SecAxis2).field0_0x0._s_0.Z = 0.0;
  return this;
}

// operator= @ 148254230

FConstraintInstance * __thiscall
FConstraintInstance::operator=(FConstraintInstance *this,FConstraintInstance *param_1)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  TEnumAsByte<EAngularConstraintMotion> TVar8;
  undefined3 uVar9;
  FConstraintProfileProperties *pFVar10;
  FConstraintProfileProperties *pFVar11;
  FConstraintProfileProperties *pFVar12;
  FConstraintProfileProperties *pFVar13;
  longlong lVar14;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)&this->_padding_
             ,(TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)
              &param_1->_padding_);
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  lVar14 = 2;
  this->JointName = param_1->JointName;
  this->ConstraintBone1 = param_1->ConstraintBone1;
  this->ConstraintBone2 = param_1->ConstraintBone2;
  this->LastKnownScale = param_1->LastKnownScale;
  dVar2 = (param_1->Pos1).field0_0x0._s_0.Y;
  uVar1 = *(undefined4 *)&this->field_0x128;
  (this->Pos1).field0_0x0._s_0.X = (param_1->Pos1).field0_0x0._s_0.X;
  (this->Pos1).field0_0x0._s_0.Y = dVar2;
  (this->Pos1).field0_0x0._s_0.Z = (param_1->Pos1).field0_0x0._s_0.Z;
  dVar2 = (param_1->PriAxis1).field0_0x0._s_0.Y;
  (this->PriAxis1).field0_0x0._s_0.X = (param_1->PriAxis1).field0_0x0._s_0.X;
  (this->PriAxis1).field0_0x0._s_0.Y = dVar2;
  (this->PriAxis1).field0_0x0._s_0.Z = (param_1->PriAxis1).field0_0x0._s_0.Z;
  dVar2 = (param_1->SecAxis1).field0_0x0._s_0.Y;
  (this->SecAxis1).field0_0x0._s_0.X = (param_1->SecAxis1).field0_0x0._s_0.X;
  (this->SecAxis1).field0_0x0._s_0.Y = dVar2;
  (this->SecAxis1).field0_0x0._s_0.Z = (param_1->SecAxis1).field0_0x0._s_0.Z;
  dVar2 = (param_1->Pos2).field0_0x0._s_0.Y;
  (this->Pos2).field0_0x0._s_0.X = (param_1->Pos2).field0_0x0._s_0.X;
  (this->Pos2).field0_0x0._s_0.Y = dVar2;
  (this->Pos2).field0_0x0._s_0.Z = (param_1->Pos2).field0_0x0._s_0.Z;
  dVar2 = (param_1->PriAxis2).field0_0x0._s_0.Y;
  (this->PriAxis2).field0_0x0._s_0.X = (param_1->PriAxis2).field0_0x0._s_0.X;
  (this->PriAxis2).field0_0x0._s_0.Y = dVar2;
  (this->PriAxis2).field0_0x0._s_0.Z = (param_1->PriAxis2).field0_0x0._s_0.Z;
  dVar2 = (param_1->SecAxis2).field0_0x0._s_0.Y;
  (this->SecAxis2).field0_0x0._s_0.X = (param_1->SecAxis2).field0_0x0._s_0.X;
  (this->SecAxis2).field0_0x0._s_0.Y = dVar2;
  (this->SecAxis2).field0_0x0._s_0.Z = (param_1->SecAxis2).field0_0x0._s_0.Z;
  dVar2 = (param_1->AngularRotationOffset).Yaw;
  (this->AngularRotationOffset).Pitch = (param_1->AngularRotationOffset).Pitch;
  (this->AngularRotationOffset).Yaw = dVar2;
  (this->AngularRotationOffset).Roll = (param_1->AngularRotationOffset).Roll;
  *(uint *)&this->field_0x128 = (ZPULL(uVar1,0,1) ^ param_1->bScaleLinearLimits) & 1 ^ uVar1;
  this->AverageMass = param_1->AverageMass;
  pFVar10 = &this->ProfileInstance;
  pFVar11 = &param_1->ProfileInstance;
  do {
    pFVar13 = pFVar11;
    pFVar12 = pFVar10;
    fVar5 = pFVar13->ProjectionAngularTolerance;
    fVar6 = pFVar13->ProjectionLinearAlpha;
    fVar7 = pFVar13->ProjectionAngularAlpha;
    pFVar12->ProjectionLinearTolerance = pFVar13->ProjectionLinearTolerance;
    pFVar12->ProjectionAngularTolerance = fVar5;
    pFVar12->ProjectionLinearAlpha = fVar6;
    pFVar12->ProjectionAngularAlpha = fVar7;
    fVar5 = pFVar13->LinearBreakThreshold;
    fVar6 = pFVar13->LinearPlasticityThreshold;
    fVar7 = pFVar13->AngularBreakThreshold;
    pFVar12->ShockPropagationAlpha = pFVar13->ShockPropagationAlpha;
    pFVar12->LinearBreakThreshold = fVar5;
    pFVar12->LinearPlasticityThreshold = fVar6;
    pFVar12->AngularBreakThreshold = fVar7;
    fVar5 = pFVar13->ContactTransferScale;
    uVar3 = *(undefined8 *)&pFVar13->LinearLimit;
    pFVar12->AngularPlasticityThreshold = pFVar13->AngularPlasticityThreshold;
    pFVar12->ContactTransferScale = fVar5;
    *(undefined8 *)&pFVar12->LinearLimit = uVar3;
    uVar1 = *(undefined4 *)&(pFVar13->LinearLimit).field_0x10;
    fVar5 = (pFVar13->LinearLimit).Limit;
    *(undefined8 *)&(pFVar12->LinearLimit).field_0x8 =
         *(undefined8 *)&(pFVar13->LinearLimit).field_0x8;
    *(undefined4 *)&(pFVar12->LinearLimit).field_0x10 = uVar1;
    (pFVar12->LinearLimit).Limit = fVar5;
    uVar3 = *(undefined8 *)((longlong)&(pFVar13->ConeLimit)._padding_ + 4);
    *(undefined8 *)&(pFVar12->LinearLimit).XMotion = *(undefined8 *)&(pFVar13->LinearLimit).XMotion;
    *(undefined8 *)((longlong)&(pFVar12->ConeLimit)._padding_ + 4) = uVar3;
    fVar5 = (pFVar13->ConeLimit).Swing1LimitDegrees;
    fVar6 = (pFVar13->ConeLimit).Swing2LimitDegrees;
    *(undefined8 *)((longlong)&(pFVar12->ConeLimit)._padding_ + 4) =
         *(undefined8 *)((longlong)&(pFVar13->ConeLimit)._padding_ + 4);
    (pFVar12->ConeLimit).Swing1LimitDegrees = fVar5;
    (pFVar12->ConeLimit).Swing2LimitDegrees = fVar6;
    uVar3 = *(undefined8 *)&(pFVar13->TwistLimit).field_0x4;
    *(undefined8 *)&(pFVar12->ConeLimit).Swing1Motion =
         *(undefined8 *)&(pFVar13->ConeLimit).Swing1Motion;
    *(undefined8 *)&(pFVar12->TwistLimit).field_0x4 = uVar3;
    fVar5 = (pFVar13->TwistLimit).TwistLimitDegrees;
    TVar8.Value = (pFVar13->TwistLimit).TwistMotion.Value;
    uVar9 = *(undefined3 *)&(pFVar13->TwistLimit).field_0x19;
    *(undefined8 *)&(pFVar12->TwistLimit).field_0xc =
         *(undefined8 *)&(pFVar13->TwistLimit).field_0xc;
    (pFVar12->TwistLimit).TwistLimitDegrees = fVar5;
    (pFVar12->TwistLimit).TwistMotion = (TEnumAsByte<EAngularConstraintMotion>)TVar8.Value;
    *(undefined3 *)&(pFVar12->TwistLimit).field_0x19 = uVar9;
    lVar14 = lVar14 + -1;
    pFVar10 = (FConstraintProfileProperties *)&pFVar12->field_0x80;
    pFVar11 = (FConstraintProfileProperties *)&pFVar13->field_0x80;
  } while (lVar14 != 0);
  dVar2 = (pFVar13->LinearDrive).PositionTarget.field0_0x0._s_0.X;
  *(undefined8 *)&pFVar12->field_0x80 = *(undefined8 *)&pFVar13->field_0x80;
  (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.X = dVar2;
  dVar2 = (pFVar13->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
  (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.Y =
       (pFVar13->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
  (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.Z = dVar2;
  dVar2 = (pFVar13->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
  (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.X =
       (pFVar13->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
  (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = dVar2;
  fVar5 = (pFVar13->LinearDrive).XDrive.Stiffness;
  fVar6 = (pFVar13->LinearDrive).XDrive.Damping;
  (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.Z =
       (pFVar13->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
  (pFVar12->LinearDrive).XDrive.Stiffness = fVar5;
  (pFVar12->LinearDrive).XDrive.Damping = fVar6;
  uVar1 = *(undefined4 *)&(pFVar13->LinearDrive).XDrive.field_0xc;
  fVar5 = (pFVar13->LinearDrive).YDrive.Stiffness;
  fVar6 = (pFVar13->LinearDrive).YDrive.Damping;
  (pFVar12->LinearDrive).XDrive.MaxForce = (pFVar13->LinearDrive).XDrive.MaxForce;
  *(undefined4 *)&(pFVar12->LinearDrive).XDrive.field_0xc = uVar1;
  (pFVar12->LinearDrive).YDrive.Stiffness = fVar5;
  (pFVar12->LinearDrive).YDrive.Damping = fVar6;
  uVar1 = *(undefined4 *)&(pFVar13->LinearDrive).YDrive.field_0xc;
  fVar5 = (pFVar13->LinearDrive).ZDrive.Stiffness;
  fVar6 = (pFVar13->LinearDrive).ZDrive.Damping;
  (pFVar12->LinearDrive).YDrive.MaxForce = (pFVar13->LinearDrive).YDrive.MaxForce;
  *(undefined4 *)&(pFVar12->LinearDrive).YDrive.field_0xc = uVar1;
  (pFVar12->LinearDrive).ZDrive.Stiffness = fVar5;
  (pFVar12->LinearDrive).ZDrive.Damping = fVar6;
  uVar1 = *(undefined4 *)&(param_1->UserData).field_0x4;
  pvVar4 = (param_1->UserData).Payload;
  (this->UserData).Type = (param_1->UserData).Type;
  *(undefined4 *)&(this->UserData).field_0x4 = uVar1;
  (this->UserData).Payload = pvVar4;
  return this;
}

// operator() @ 1482555b0

void __thiscall
`FConstraintInstance::InitConstraint'::__l2::<lambda_1>::operator()
          (void *this,FPhysicsObject *param_1,FPhysicsObject *param_2)

{
  FConstraintInstance *this_00;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_38;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_20;
  
  this_00 = *(FConstraintInstance **)this;
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  local_38._16_4_ = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38,
             *(TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> **)((longlong)this + 0x18));
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_4_ = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_20,
             *(TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> **)((longlong)this + 0x10));
  FConstraintInstance::InitConstraint_AssumesLocked
            (this_00,param_1,param_2,**(float **)((longlong)this + 8),&local_20,&local_38);
  return;
}

// operator() @ 148255c10

void __thiscall
`FConstraintInstance::SetAngularDOFLimitScale'::__l2::<lambda_1>::operator()
          (void *this,FPhysicsConstraintReference_Chaos *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = __real_3c8efa35;
  if (*(char *)(*(longlong *)this + 400) == '\x01') {
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing1,ACM_Limited);
  }
  else if (*(char *)(*(longlong *)this + 0x191) != '\x01') goto LAB_148255d18;
  if (*(char *)(*(longlong *)this + 0x191) == '\x01') {
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing2,ACM_Limited);
  }
  fVar3 = FMath::ClampAngle<float>
                    (*(float *)(*(longlong *)this + 0x188) * **(float **)((longlong)this + 8),
                     __real_38d1b717,__real_4333fff9);
  fVar4 = FMath::ClampAngle<float>
                    (*(float *)(*(longlong *)this + 0x18c) * **(float **)((longlong)this + 0x10),
                     __real_38d1b717,__real_4333fff9);
  fVar5 = **(float **)((longlong)this + 0x10);
  if (**(float **)((longlong)this + 8) <= **(float **)((longlong)this + 0x10)) {
    fVar5 = **(float **)((longlong)this + 8);
  }
  fVar5 = fVar5 * *(float *)(*(longlong *)this + 0x180);
  if (fVar5 <= __real_3f800000) {
    fVar5 = __real_3f800000;
  }
  FChaosEngineInterface::SetSwingLimit
            ((FPhysicsConstraintReference_Chaos *)(*(longlong *)this + 8),fVar4 * fVar2,
             fVar3 * fVar2,fVar5 * fVar2);
LAB_148255d18:
  if (*(char *)(*(longlong *)this + 400) == '\x02') {
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing1,ACM_Locked);
  }
  if (*(char *)(*(longlong *)this + 0x191) == '\x02') {
    FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Swing2,ACM_Locked);
  }
  if (*(char *)(*(longlong *)this + 0x1ac) != '\x01') {
    if (*(char *)(*(longlong *)this + 0x1ac) == '\x02') {
      FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Twist,ACM_Locked);
    }
    return;
  }
  FPhysInterface_Chaos::SetAngularMotionLimitType_AssumesLocked(param_1,Twist,ACM_Limited);
  lVar1 = *(longlong *)this;
  fVar5 = **(float **)((longlong)this + 0x18) * *(float *)(lVar1 + 0x180);
  if (fVar5 <= __real_3f800000) {
    fVar5 = __real_3f800000;
  }
  fVar3 = **(float **)((longlong)this + 0x18) * *(float *)(lVar1 + 0x1a8) * fVar2;
  FChaosEngineInterface::SetTwistLimit
            ((FPhysicsConstraintReference_Chaos *)(lVar1 + 8),
             (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000),fVar3,fVar5 * fVar2);
  return;
}

// operator() @ 148255df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FConstraintInstance::SetRefOrientation'::__l2::<lambda_1>::operator()
          (void *this,FPhysicsConstraintReference_Chaos *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auStack_158 [32];
  TMatrix<double> local_138;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  pdVar1 = *(double **)this;
  pdVar2 = *(double **)((longlong)this + 0x10);
  pdVar3 = *(double **)((longlong)this + 8);
  local_138.M[0][3] = 0.0;
  local_138.M[0][2] = pdVar1[2];
  local_138.M[0][1] = pdVar1[1];
  local_138.M[1][1] = pdVar3[1];
  local_138.M[1][2] = pdVar3[2];
  local_138.M[1][0] = *pdVar3;
  local_138.M[0][0] = *pdVar1;
  local_138.M[2][0] = local_138.M[0][1] * local_138.M[1][2] - local_138.M[0][2] * local_138.M[1][1];
  local_138.M[2][1] = local_138.M[1][0] * local_138.M[0][2] - local_138.M[0][0] * local_138.M[1][2];
  local_138.M[3][0] = *pdVar2;
  local_138.M[3][1] = pdVar2[1];
  local_138.M[2][2] = local_138.M[0][0] * local_138.M[1][1] - local_138.M[1][0] * local_138.M[0][1];
  local_138.M[3][2] = pdVar2[2];
  local_138.M[1][3] = 0.0;
  local_138.M[2][3] = 0.0;
  local_138.M[3][3] = __real_3ff0000000000000;
  UE::Math::TTransform<double>::SetFromMatrix(&local_b8,&local_138);
  FChaosEngineInterface::SetLocalPose(param_1,&local_b8,**(Type **)((longlong)this + 0x18));
  return;
}

// operator() @ 148255f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FConstraintInstance::SetRefPosition'::__l2::<lambda_1>::operator()
          (void *this,FPhysicsConstraintReference_Chaos *param_1)

{
  double *pdVar1;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  FChaosEngineInterface::GetLocalPose(&local_78,param_1,**(Type **)this);
  pdVar1 = *(double **)((longlong)this + 8);
  local_78.Translation.XY.m128d_f64[0] = *pdVar1;
  local_78.Translation.XY.m128d_f64[1] = pdVar1[1];
  local_78.Translation.ZW.m128d_f64[0] = pdVar1[2];
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  FChaosEngineInterface::SetLocalPose(param_1,&local_78,**(Type **)this);
  return;
}

// Alloc @ 148266910

FConstraintInstance * __cdecl FConstraintInstance::Alloc(void)

{
  FConstraintInstance *pFVar1;
  
  pFVar1 = FMemory::Malloc(0x2a0,0);
  memset(pFVar1,0,0x2a0);
  pFVar1 = FConstraintInstance(pFVar1);
  return pFVar1;
}

// ApplySerializedState @ 148267fa0

void __thiscall
FConstraintInstance::ApplySerializedState
          (FConstraintInstance *this,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_1,ESerializedDataContext param_2)

{
  longlong *this_00;
  bool bVar1;
  FScopedSceneLock_Chaos local_20;
  
  this_00 = &this->_padding_;
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar1) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_20,
               (FPhysicsConstraintReference_Chaos *)this_00,Write,param_2 == Internal,Normal);
    FChaosEngineInterface::ApplySerializedStateToConstraint
              ((FPhysicsConstraintReference_Chaos *)this_00,param_1,param_2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_20);
  }
  return;
}

// CopyConstraintGeometryFrom @ 148270c80

void __thiscall
FConstraintInstance::CopyConstraintGeometryFrom
          (FConstraintInstance *this,FConstraintInstance *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Pos1).field0_0x0._s_0.Y;
  (this->Pos1).field0_0x0._s_0.X = (param_1->Pos1).field0_0x0._s_0.X;
  (this->Pos1).field0_0x0._s_0.Y = dVar1;
  (this->Pos1).field0_0x0._s_0.Z = (param_1->Pos1).field0_0x0._s_0.Z;
  dVar1 = (param_1->PriAxis1).field0_0x0._s_0.Y;
  (this->PriAxis1).field0_0x0._s_0.X = (param_1->PriAxis1).field0_0x0._s_0.X;
  (this->PriAxis1).field0_0x0._s_0.Y = dVar1;
  (this->PriAxis1).field0_0x0._s_0.Z = (param_1->PriAxis1).field0_0x0._s_0.Z;
  dVar1 = (param_1->SecAxis1).field0_0x0._s_0.Y;
  (this->SecAxis1).field0_0x0._s_0.X = (param_1->SecAxis1).field0_0x0._s_0.X;
  (this->SecAxis1).field0_0x0._s_0.Y = dVar1;
  (this->SecAxis1).field0_0x0._s_0.Z = (param_1->SecAxis1).field0_0x0._s_0.Z;
  dVar1 = (param_1->Pos2).field0_0x0._s_0.Y;
  (this->Pos2).field0_0x0._s_0.X = (param_1->Pos2).field0_0x0._s_0.X;
  (this->Pos2).field0_0x0._s_0.Y = dVar1;
  (this->Pos2).field0_0x0._s_0.Z = (param_1->Pos2).field0_0x0._s_0.Z;
  dVar1 = (param_1->PriAxis2).field0_0x0._s_0.Y;
  (this->PriAxis2).field0_0x0._s_0.X = (param_1->PriAxis2).field0_0x0._s_0.X;
  (this->PriAxis2).field0_0x0._s_0.Y = dVar1;
  (this->PriAxis2).field0_0x0._s_0.Z = (param_1->PriAxis2).field0_0x0._s_0.Z;
  dVar1 = (param_1->SecAxis2).field0_0x0._s_0.Y;
  (this->SecAxis2).field0_0x0._s_0.X = (param_1->SecAxis2).field0_0x0._s_0.X;
  (this->SecAxis2).field0_0x0._s_0.Y = dVar1;
  (this->SecAxis2).field0_0x0._s_0.Z = (param_1->SecAxis2).field0_0x0._s_0.Z;
  return;
}

// CopyConstraintParamsFrom @ 148270d40

void __thiscall
FConstraintInstance::CopyConstraintParamsFrom
          (FConstraintInstance *this,FConstraintInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                    ((FPhysicsConstraintReference_Chaos *)&param_1->_padding_);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInstance->IsTerminated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                       ,0x2eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTerminated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                       ,0x2ec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FromInstance->PhysScene == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                       ,0x2ed,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator=(this,param_1);
  return;
}

// CopyConstraintPhysicalPropertiesFrom @ 148270e00

void __thiscall
FConstraintInstance::CopyConstraintPhysicalPropertiesFrom
          (FConstraintInstance *this,FConstraintInstance *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  void *pvVar10;
  FConstraintProfileProperties *pFVar11;
  undefined8 *puVar12;
  bool bVar13;
  FConstraintProfileProperties *pFVar14;
  undefined8 *puVar15;
  longlong lVar16;
  FDestructionSentinel local_308;
  FDestructionSentinel local_2f0;
  FDestructionSentinel local_2d8;
  undefined4 local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [8];
  ForAnyElementType FStack_2a0;
  int local_298;
  undefined1 local_290 [8];
  ForAnyElementType FStack_288;
  int local_280;
  undefined1 local_278 [8];
  ForAnyElementType FStack_270;
  int local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  float local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double dStack_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  uint local_198;
  float local_194;
  undefined8 local_190 [44];
  undefined8 local_30;
  void *pvStack_28;
  
  if (param_1 == (FConstraintInstance *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("FromInstance",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                        ,0x2f4,L"");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_2c0 = (undefined4)this->_padding_;
  local_2b8 = this->_padding_;
  local_2b0 = this->_padding_;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  local_298 = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_2a8,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
  local_280 = 0;
  local_290 = (undefined1  [8])0x0;
  FStack_288.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)local_290,
             (TDelegate<void___cdecl(int,float,float),FDefaultDelegateUserPolicy> *)&this->_padding_
            );
  local_268 = 0;
  local_278 = (undefined1  [8])0x0;
  FStack_270.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_278,
             (TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_);
  local_248 = this->LastKnownScale;
  lVar16 = 2;
  local_230 = (this->Pos1).field0_0x0._s_0.Z;
  local_260 = this->JointName;
  local_240 = (this->Pos1).field0_0x0._s_0.X;
  dStack_238 = (this->Pos1).field0_0x0._s_0.Y;
  local_258 = this->ConstraintBone1;
  local_250 = this->ConstraintBone2;
  local_228 = (this->PriAxis1).field0_0x0._s_0.X;
  dStack_220 = (this->PriAxis1).field0_0x0._s_0.Y;
  local_210 = (this->SecAxis1).field0_0x0._s_0.X;
  dStack_208 = (this->SecAxis1).field0_0x0._s_0.Y;
  local_198 = this->bScaleLinearLimits | local_198 & 0xfffffffe;
  local_218 = (this->PriAxis1).field0_0x0._s_0.Z;
  local_1f8 = (this->Pos2).field0_0x0._s_0.X;
  dStack_1f0 = (this->Pos2).field0_0x0._s_0.Y;
  local_200 = (this->SecAxis1).field0_0x0._s_0.Z;
  local_1e0 = (this->PriAxis2).field0_0x0._s_0.X;
  dStack_1d8 = (this->PriAxis2).field0_0x0._s_0.Y;
  local_1e8 = (this->Pos2).field0_0x0._s_0.Z;
  local_1c8 = (this->SecAxis2).field0_0x0._s_0.X;
  dStack_1c0 = (this->SecAxis2).field0_0x0._s_0.Y;
  local_1d0 = (this->PriAxis2).field0_0x0._s_0.Z;
  local_1b0 = (this->AngularRotationOffset).Pitch;
  dStack_1a8 = (this->AngularRotationOffset).Yaw;
  local_1b8 = (this->SecAxis2).field0_0x0._s_0.Z;
  local_194 = this->AverageMass;
  local_1a0 = (this->AngularRotationOffset).Roll;
  pFVar11 = &this->ProfileInstance;
  puVar12 = local_190;
  do {
    puVar15 = puVar12;
    pFVar14 = pFVar11;
    uVar2 = *(undefined8 *)&pFVar14->ProjectionLinearAlpha;
    uVar3 = *(undefined8 *)&pFVar14->ShockPropagationAlpha;
    uVar4 = *(undefined8 *)&pFVar14->LinearPlasticityThreshold;
    *puVar15 = *(undefined8 *)pFVar14;
    puVar15[1] = uVar2;
    uVar2 = *(undefined8 *)&pFVar14->AngularPlasticityThreshold;
    uVar5 = *(undefined8 *)&pFVar14->LinearLimit;
    puVar15[2] = uVar3;
    puVar15[3] = uVar4;
    uVar3 = *(undefined8 *)&(pFVar14->LinearLimit).field_0x8;
    uVar4 = *(undefined8 *)&(pFVar14->LinearLimit).field_0x10;
    puVar15[4] = uVar2;
    puVar15[5] = uVar5;
    uVar2 = *(undefined8 *)&(pFVar14->LinearLimit).XMotion;
    uVar5 = *(undefined8 *)((longlong)&(pFVar14->ConeLimit)._padding_ + 4);
    puVar15[6] = uVar3;
    puVar15[7] = uVar4;
    uVar3 = *(undefined8 *)((longlong)&(pFVar14->ConeLimit)._padding_ + 4);
    uVar4 = *(undefined8 *)&(pFVar14->ConeLimit).Swing1LimitDegrees;
    puVar15[8] = uVar2;
    puVar15[9] = uVar5;
    uVar2 = *(undefined8 *)&(pFVar14->ConeLimit).Swing1Motion;
    uVar5 = *(undefined8 *)&(pFVar14->TwistLimit).field_0x4;
    puVar15[10] = uVar3;
    puVar15[0xb] = uVar4;
    uVar3 = *(undefined8 *)&(pFVar14->TwistLimit).field_0xc;
    uVar4 = *(undefined8 *)&(pFVar14->TwistLimit).TwistLimitDegrees;
    puVar15[0xc] = uVar2;
    puVar15[0xd] = uVar5;
    puVar15[0xe] = uVar3;
    puVar15[0xf] = uVar4;
    lVar16 = lVar16 + -1;
    pFVar11 = (FConstraintProfileProperties *)&pFVar14->field_0x80;
    puVar12 = puVar15 + 0x10;
  } while (lVar16 != 0);
  dVar6 = (pFVar14->LinearDrive).PositionTarget.field0_0x0._s_0.X;
  dVar7 = (pFVar14->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
  dVar8 = (pFVar14->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
  puVar15[0x10] = *(undefined8 *)&pFVar14->field_0x80;
  puVar15[0x11] = dVar6;
  dVar6 = (pFVar14->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
  dVar9 = (pFVar14->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
  puVar15[0x12] = dVar7;
  puVar15[0x13] = dVar8;
  dVar7 = (pFVar14->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
  uVar2 = *(undefined8 *)&(pFVar14->LinearDrive).XDrive;
  puVar15[0x14] = dVar6;
  puVar15[0x15] = dVar9;
  uVar3 = *(undefined8 *)&(pFVar14->LinearDrive).XDrive.MaxForce;
  uVar4 = *(undefined8 *)&(pFVar14->LinearDrive).YDrive;
  puVar15[0x16] = dVar7;
  puVar15[0x17] = uVar2;
  uVar2 = *(undefined8 *)&(pFVar14->LinearDrive).YDrive.MaxForce;
  uVar5 = *(undefined8 *)&(pFVar14->LinearDrive).ZDrive;
  puVar15[0x18] = uVar3;
  puVar15[0x19] = uVar4;
  uVar3 = *(undefined8 *)&this->UserData;
  pvVar10 = (this->UserData).Payload;
  puVar15[0x1a] = uVar2;
  puVar15[0x1b] = uVar5;
  local_30 = uVar3;
  pvStack_28 = pvVar10;
  bVar13 = FPhysicsConstraintReference_Chaos::IsValid
                     ((FPhysicsConstraintReference_Chaos *)&param_1->_padding_);
  if (bVar13) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("FromInstance->IsTerminated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                        ,0x2eb,L"");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar13 = FPhysicsConstraintReference_Chaos::IsValid
                     ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (bVar13) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsTerminated()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                        ,0x2ec,L"");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->_padding_ != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("FromInstance->PhysScene == nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                        ,0x2ed,L"");
    if (bVar13) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator=(this,param_1);
  *(undefined4 *)&this->_padding_ = local_2c0;
  this->_padding_ = local_2b8;
  this->JointName = local_260;
  this->ConstraintBone1 = local_258;
  this->ConstraintBone2 = local_250;
  if (param_2) {
    (this->Pos1).field0_0x0._s_0.X = local_240;
    (this->Pos1).field0_0x0._s_0.Y = dStack_238;
    (this->Pos1).field0_0x0._s_0.Z = local_230;
    (this->Pos2).field0_0x0._s_0.X = local_1f8;
    (this->Pos2).field0_0x0._s_0.Y = dStack_1f0;
    (this->Pos2).field0_0x0._s_0.Z = local_1e8;
  }
  if (param_3) {
    (this->PriAxis1).field0_0x0._s_0.X = local_228;
    (this->PriAxis1).field0_0x0._s_0.Y = dStack_220;
    (this->PriAxis1).field0_0x0._s_0.Z = local_218;
    (this->SecAxis1).field0_0x0._s_0.X = local_210;
    (this->SecAxis1).field0_0x0._s_0.Y = dStack_208;
    (this->SecAxis1).field0_0x0._s_0.Z = local_200;
    (this->PriAxis2).field0_0x0._s_0.X = local_1e0;
    (this->PriAxis2).field0_0x0._s_0.Y = dStack_1d8;
    (this->PriAxis2).field0_0x0._s_0.Z = local_1d0;
    (this->SecAxis2).field0_0x0._s_0.X = local_1c8;
    (this->SecAxis2).field0_0x0._s_0.Y = dStack_1c0;
    (this->SecAxis2).field0_0x0._s_0.Z = local_1b8;
    (this->AngularRotationOffset).Pitch = local_1b0;
    (this->AngularRotationOffset).Yaw = dStack_1a8;
    (this->AngularRotationOffset).Roll = local_1a0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_278,
             (FWriteAccessScope *)&local_308);
  if ((local_268 != 0) && (FStack_270.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_270.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_270,0,0,0x10);
    local_268 = 0;
  }
  if (local_308.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
  }
  if (FStack_270.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_270.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_278);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_290,
             (FWriteAccessScope *)&local_2f0);
  if ((local_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_288.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10);
    local_280 = 0;
  }
  if (local_2f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f0.Accessor,&local_2f0);
  }
  if (FStack_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_288.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_290);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_2d8);
  if ((local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = 0;
  }
  if (local_2d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  return;
}

// CopyProfilePropertiesFrom @ 148271540

void __thiscall
FConstraintInstance::CopyProfilePropertiesFrom
          (FConstraintInstance *this,FConstraintProfileProperties *param_1)

{
  undefined8 uVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  TEnumAsByte<EAngularConstraintMotion> TVar6;
  undefined3 uVar7;
  FConstraintProfileProperties *pFVar8;
  bool bVar9;
  FConstraintProfileProperties *pFVar10;
  longlong lVar11;
  FConstraintProfileProperties *pFVar12;
  float fVar13;
  FScopedSceneLock_Chaos local_28;
  
  lVar11 = 2;
  pFVar8 = &this->ProfileInstance;
  do {
    pFVar12 = param_1;
    pFVar10 = pFVar8;
    fVar13 = pFVar12->ProjectionAngularTolerance;
    fVar3 = pFVar12->ProjectionLinearAlpha;
    fVar4 = pFVar12->ProjectionAngularAlpha;
    pFVar10->ProjectionLinearTolerance = pFVar12->ProjectionLinearTolerance;
    pFVar10->ProjectionAngularTolerance = fVar13;
    pFVar10->ProjectionLinearAlpha = fVar3;
    pFVar10->ProjectionAngularAlpha = fVar4;
    fVar13 = pFVar12->LinearBreakThreshold;
    fVar3 = pFVar12->LinearPlasticityThreshold;
    fVar4 = pFVar12->AngularBreakThreshold;
    pFVar10->ShockPropagationAlpha = pFVar12->ShockPropagationAlpha;
    pFVar10->LinearBreakThreshold = fVar13;
    pFVar10->LinearPlasticityThreshold = fVar3;
    pFVar10->AngularBreakThreshold = fVar4;
    fVar13 = pFVar12->ContactTransferScale;
    uVar1 = *(undefined8 *)&pFVar12->LinearLimit;
    pFVar10->AngularPlasticityThreshold = pFVar12->AngularPlasticityThreshold;
    pFVar10->ContactTransferScale = fVar13;
    *(undefined8 *)&pFVar10->LinearLimit = uVar1;
    uVar5 = *(undefined4 *)&(pFVar12->LinearLimit).field_0x10;
    fVar13 = (pFVar12->LinearLimit).Limit;
    *(undefined8 *)&(pFVar10->LinearLimit).field_0x8 =
         *(undefined8 *)&(pFVar12->LinearLimit).field_0x8;
    *(undefined4 *)&(pFVar10->LinearLimit).field_0x10 = uVar5;
    (pFVar10->LinearLimit).Limit = fVar13;
    uVar1 = *(undefined8 *)((longlong)&(pFVar12->ConeLimit)._padding_ + 4);
    *(undefined8 *)&(pFVar10->LinearLimit).XMotion = *(undefined8 *)&(pFVar12->LinearLimit).XMotion;
    *(undefined8 *)((longlong)&(pFVar10->ConeLimit)._padding_ + 4) = uVar1;
    fVar13 = (pFVar12->ConeLimit).Swing1LimitDegrees;
    fVar3 = (pFVar12->ConeLimit).Swing2LimitDegrees;
    *(undefined8 *)((longlong)&(pFVar10->ConeLimit)._padding_ + 4) =
         *(undefined8 *)((longlong)&(pFVar12->ConeLimit)._padding_ + 4);
    (pFVar10->ConeLimit).Swing1LimitDegrees = fVar13;
    (pFVar10->ConeLimit).Swing2LimitDegrees = fVar3;
    uVar1 = *(undefined8 *)&(pFVar12->TwistLimit).field_0x4;
    *(undefined8 *)&(pFVar10->ConeLimit).Swing1Motion =
         *(undefined8 *)&(pFVar12->ConeLimit).Swing1Motion;
    *(undefined8 *)&(pFVar10->TwistLimit).field_0x4 = uVar1;
    fVar13 = (pFVar12->TwistLimit).TwistLimitDegrees;
    TVar6.Value = (pFVar12->TwistLimit).TwistMotion.Value;
    uVar7 = *(undefined3 *)&(pFVar12->TwistLimit).field_0x19;
    *(undefined8 *)&(pFVar10->TwistLimit).field_0xc =
         *(undefined8 *)&(pFVar12->TwistLimit).field_0xc;
    (pFVar10->TwistLimit).TwistLimitDegrees = fVar13;
    (pFVar10->TwistLimit).TwistMotion = (TEnumAsByte<EAngularConstraintMotion>)TVar6.Value;
    *(undefined3 *)&(pFVar10->TwistLimit).field_0x19 = uVar7;
    lVar11 = lVar11 + -1;
    pFVar8 = (FConstraintProfileProperties *)&pFVar10->field_0x80;
    param_1 = (FConstraintProfileProperties *)&pFVar12->field_0x80;
  } while (lVar11 != 0);
  dVar2 = (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.X;
  *(undefined8 *)&pFVar10->field_0x80 = *(undefined8 *)&pFVar12->field_0x80;
  (pFVar10->LinearDrive).PositionTarget.field0_0x0._s_0.X = dVar2;
  dVar2 = (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.Z;
  (pFVar10->LinearDrive).PositionTarget.field0_0x0._s_0.Y =
       (pFVar12->LinearDrive).PositionTarget.field0_0x0._s_0.Y;
  (pFVar10->LinearDrive).PositionTarget.field0_0x0._s_0.Z = dVar2;
  dVar2 = (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.Y;
  (pFVar10->LinearDrive).VelocityTarget.field0_0x0._s_0.X =
       (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.X;
  (pFVar10->LinearDrive).VelocityTarget.field0_0x0._s_0.Y = dVar2;
  fVar13 = (pFVar12->LinearDrive).XDrive.Stiffness;
  fVar3 = (pFVar12->LinearDrive).XDrive.Damping;
  (pFVar10->LinearDrive).VelocityTarget.field0_0x0._s_0.Z =
       (pFVar12->LinearDrive).VelocityTarget.field0_0x0._s_0.Z;
  (pFVar10->LinearDrive).XDrive.Stiffness = fVar13;
  (pFVar10->LinearDrive).XDrive.Damping = fVar3;
  uVar5 = *(undefined4 *)&(pFVar12->LinearDrive).XDrive.field_0xc;
  fVar13 = (pFVar12->LinearDrive).YDrive.Stiffness;
  fVar3 = (pFVar12->LinearDrive).YDrive.Damping;
  (pFVar10->LinearDrive).XDrive.MaxForce = (pFVar12->LinearDrive).XDrive.MaxForce;
  *(undefined4 *)&(pFVar10->LinearDrive).XDrive.field_0xc = uVar5;
  (pFVar10->LinearDrive).YDrive.Stiffness = fVar13;
  (pFVar10->LinearDrive).YDrive.Damping = fVar3;
  uVar5 = *(undefined4 *)&(pFVar12->LinearDrive).YDrive.field_0xc;
  fVar13 = (pFVar12->LinearDrive).ZDrive.Stiffness;
  fVar3 = (pFVar12->LinearDrive).ZDrive.Damping;
  (pFVar10->LinearDrive).YDrive.MaxForce = (pFVar12->LinearDrive).YDrive.MaxForce;
  *(undefined4 *)&(pFVar10->LinearDrive).YDrive.field_0xc = uVar5;
  (pFVar10->LinearDrive).ZDrive.Stiffness = fVar13;
  (pFVar10->LinearDrive).ZDrive.Damping = fVar3;
  bVar9 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar9) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    fVar13 = __real_3f800000;
    if (this->bScaleLinearLimits != 0) {
      fVar13 = this->LastKnownScale;
    }
    FConstraintProfileProperties::Update_AssumesLocked
              (&this->ProfileInstance,(FPhysicsConstraintReference_Chaos *)&this->_padding_,
               this->AverageMass,fVar13,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// CreateJoint_AssumesLocked @ 148275510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FConstraintInstance::CreateJoint_AssumesLocked
          (FConstraintInstance *this,FPhysicsObject *param_1,FPhysicsObject *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  bool bVar20;
  undefined1 uVar21;
  int iVar22;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FPhysicsConstraintReference_Chaos FVar23;
  uint uVar24;
  FReadPhysicsObjectInterface<0> *pFVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  uint uVar29;
  uint uVar31;
  double dVar30;
  uint uVar32;
  uint uVar34;
  double dVar33;
  undefined1 auStackY_208 [32];
  FReadPhysicsObjectInterface<0> local_1d8 [4];
  FLLMScope local_1d4;
  TTransform<double> *local_1d0;
  FPhysicsObject *local_1c8;
  FMemScope local_1c0;
  FPhysicsObject **local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TTransform<double> **local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [24];
  undefined8 uStack_180;
  FString local_178;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1d0 = (TTransform<double> *)param_2;
  local_1c8 = param_1;
  FLLMScope::FLLMScope(&local_1d4,ChaosConstraint,false,None,Default,true);
  FMemScope::FMemScope(&local_1c0,ChaosConstraint,true);
  local_1d8[0] = FPhysicsObjectExternalInterface::GetRead_AssumesLocked();
  GetRefFrame(this,&local_a8,Frame1);
  local_1b8 = &local_1c8;
  uStack_1b0 = 1;
  uStack_180 = CONCAT44(uStack_1ac,1);
  pFVar25 = local_1d8;
  local_198._16_8_ = local_1b8;
  bVar20 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                     (pFVar25,(TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)
                              (local_198 + 0x10));
  dVar28 = local_a8.Translation.XY.m128d_f64[0];
  dVar18 = local_a8.Translation.XY.m128d_f64[1];
  dVar19 = local_a8.Translation.ZW.m128d_f64[0];
  dVar27 = local_a8.Translation.ZW.m128d_f64[1];
  if (bVar20) {
    local_128 = (double)this->LastKnownScale;
    dVar28 = local_a8.Translation.XY.m128d_f64[0] * local_128;
    dVar18 = local_a8.Translation.XY.m128d_f64[1] * local_128;
    dVar19 = local_a8.Translation.ZW.m128d_f64[0] * local_128;
    dVar27 = local_a8.Translation.ZW.m128d_f64[1] * 0.0;
    local_a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
    local_a8.Translation.XY.m128d_f64[0] = dVar28;
    local_a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_138._8_4_ = SUB84(local_128,0);
    local_138._0_8_ = local_128;
    local_138._12_4_ = (int)((ulonglong)local_128 >> 0x20);
    local_a8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
    local_a8.Translation.ZW.m128d_f64[0] = dVar19;
    local_a8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
  }
  uVar29 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar31 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  uVar32 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  uVar34 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar30 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar33 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  lVar26 = -(ulonglong)
            ((double)CONCAT44(uVar34 & local_a8.Rotation.ZW.m128d_f64[1]._4_4_,
                              uVar32 & local_a8.Rotation.ZW.m128d_f64[1]._0_4_) == dVar33);
  auVar2._8_4_ = (int)lVar26;
  auVar2._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar31 & local_a8.Rotation.ZW.m128d_f64[0]._4_4_,
                                    uVar29 & local_a8.Rotation.ZW.m128d_f64[0]._0_4_) == dVar30);
  auVar2._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  uVar24 = movmskpd((int)pFVar25,auVar2);
  lVar26 = -(ulonglong)
            ((double)CONCAT44(uVar34 & local_a8.Rotation.XY.m128d_f64[1]._4_4_,
                              uVar32 & local_a8.Rotation.XY.m128d_f64[1]._0_4_) == dVar33);
  auVar10._8_4_ = (int)lVar26;
  auVar10._0_8_ =
       -(ulonglong)
        ((double)CONCAT44(uVar31 & local_a8.Rotation.XY.m128d_f64[0]._4_4_,
                          uVar29 & local_a8.Rotation.XY.m128d_f64[0]._0_4_) == dVar30);
  auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  iVar22 = movmskpd((int)CONCAT71(extraout_var,bVar20),auVar10);
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & (uint)((ulonglong)dVar27 >> 0x20),uVar32 & SUB84(dVar27,0))
              == dVar33);
    auVar3._8_4_ = (int)lVar26;
    auVar3._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar31 & (uint)((ulonglong)dVar19 >> 0x20),
                                      uVar29 & SUB84(dVar19,0)) == dVar30);
    auVar3._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar24 = movmskpd(0,auVar3);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & (uint)((ulonglong)dVar18 >> 0x20),uVar32 & SUB84(dVar18,0))
              == dVar33);
    auVar11._8_4_ = (int)lVar26;
    auVar11._0_8_ =
         -(ulonglong)
          ((double)CONCAT44(uVar31 & (uint)((ulonglong)dVar28 >> 0x20),uVar29 & SUB84(dVar28,0)) ==
          dVar30);
    auVar11._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar22 = movmskpd(iVar22,auVar11);
    if ((uVar24 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_148275705;
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & local_a8.Scale3D.ZW.m128d_f64[1]._4_4_,
                                uVar32 & local_a8.Scale3D.ZW.m128d_f64[1]._0_4_) == dVar33);
    auVar4._8_4_ = (int)lVar26;
    auVar4._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar31 & local_a8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                      uVar29 & local_a8.Scale3D.ZW.m128d_f64[0]._0_4_) == dVar30);
    auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar24 = movmskpd(0,auVar4);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & local_a8.Scale3D.XY.m128d_f64[1]._4_4_,
                                uVar32 & local_a8.Scale3D.XY.m128d_f64[1]._0_4_) == dVar33);
    auVar12._8_4_ = (int)lVar26;
    auVar12._0_8_ =
         -(ulonglong)
          ((double)CONCAT44(uVar31 & local_a8.Scale3D.XY.m128d_f64[0]._4_4_,
                            uVar29 & local_a8.Scale3D.XY.m128d_f64[0]._0_4_) == dVar30);
    auVar12._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar22 = movmskpd(iVar22,auVar12);
    if ((uVar24 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_148275705;
    dVar27 = local_a8.Rotation.ZW.m128d_f64[0] * local_a8.Rotation.ZW.m128d_f64[0] +
             local_a8.Rotation.XY.m128d_f64[0] * local_a8.Rotation.XY.m128d_f64[0];
    dVar28 = local_a8.Rotation.ZW.m128d_f64[1] * local_a8.Rotation.ZW.m128d_f64[1] +
             local_a8.Rotation.XY.m128d_f64[1] * local_a8.Rotation.XY.m128d_f64[1];
    dVar18 = dVar28 + dVar27;
    dVar27 = dVar27 + dVar28;
    dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar18;
    dVar19 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar27;
    lVar26 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
              (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar19,0) & _UNK_15061cc88));
    auVar13._8_4_ = (int)lVar26;
    auVar13._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
          (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar13._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar24 = movmskpd(0,auVar13);
    dVar18 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar18;
    dVar27 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar27;
    lVar26 = -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
              (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar27,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar26;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                    (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar22 = movmskpd(iVar22,auVar5);
    if ((uVar24 & 0x3fffffff) != 0 || iVar22 != 0) goto LAB_148275705;
  }
  else {
LAB_148275705:
    UE::Math::TTransform<double>::ToString(&local_a8,&local_178);
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("Local1.IsValid() && !Local1.ContainsNaN()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                        ,0x20c,L"%s");
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (bVar20) {
      pcVar1 = (code *)swi(3);
      uVar21 = (*pcVar1)();
      return (bool)uVar21;
    }
  }
  GetRefFrame(this,&local_108,Frame2);
  local_1a8 = &local_1d0;
  uStack_1a0 = 1;
  local_168._12_4_ = uStack_19c;
  local_168.ArrayNum = 1;
  pFVar25 = local_1d8;
  local_168.DataPtr = (FPhysicsObject **)local_1a8;
  bVar20 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid(pFVar25,&local_168);
  dVar28 = local_108.Translation.XY.m128d_f64[0];
  dVar18 = local_108.Translation.XY.m128d_f64[1];
  dVar19 = local_108.Translation.ZW.m128d_f64[0];
  dVar27 = local_108.Translation.ZW.m128d_f64[1];
  if (bVar20) {
    local_110 = (double)this->LastKnownScale;
    dVar28 = local_108.Translation.XY.m128d_f64[0] * local_110;
    dVar18 = local_108.Translation.XY.m128d_f64[1] * local_110;
    dVar19 = local_108.Translation.ZW.m128d_f64[0] * local_110;
    dVar27 = local_108.Translation.ZW.m128d_f64[1] * 0.0;
    local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
    local_108.Translation.XY.m128d_f64[0] = dVar28;
    local_108.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
    local_120._8_4_ = SUB84(local_110,0);
    local_120._0_8_ = local_110;
    local_120._12_4_ = (int)((ulonglong)local_110 >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
    local_108.Translation.ZW.m128d_f64[0] = dVar19;
    local_108.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar27 >> 0x20);
  }
  lVar26 = -(ulonglong)
            ((double)CONCAT44(uVar34 & local_108.Rotation.ZW.m128d_f64[1]._4_4_,
                              uVar32 & local_108.Rotation.ZW.m128d_f64[1]._0_4_) == dVar33);
  auVar6._8_4_ = (int)lVar26;
  auVar6._0_8_ = -(ulonglong)
                  ((double)CONCAT44(uVar31 & local_108.Rotation.ZW.m128d_f64[0]._4_4_,
                                    uVar29 & local_108.Rotation.ZW.m128d_f64[0]._0_4_) == dVar30);
  auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  uVar24 = movmskpd((int)pFVar25,auVar6);
  lVar26 = -(ulonglong)
            ((double)CONCAT44(uVar34 & local_108.Rotation.XY.m128d_f64[1]._4_4_,
                              uVar32 & local_108.Rotation.XY.m128d_f64[1]._0_4_) == dVar33);
  auVar14._8_4_ = (int)lVar26;
  auVar14._0_8_ =
       -(ulonglong)
        ((double)CONCAT44(uVar31 & local_108.Rotation.XY.m128d_f64[0]._4_4_,
                          uVar29 & local_108.Rotation.XY.m128d_f64[0]._0_4_) == dVar30);
  auVar14._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
  iVar22 = movmskpd((int)CONCAT71(extraout_var_00,bVar20),auVar14);
  if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & (uint)((ulonglong)dVar27 >> 0x20),uVar32 & SUB84(dVar27,0))
              == dVar33);
    auVar7._8_4_ = (int)lVar26;
    auVar7._0_8_ = -(ulonglong)
                    ((double)CONCAT44(uVar31 & (uint)((ulonglong)dVar19 >> 0x20),
                                      uVar29 & SUB84(dVar19,0)) == dVar30);
    auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    uVar24 = movmskpd(0,auVar7);
    lVar26 = -(ulonglong)
              ((double)CONCAT44(uVar34 & (uint)((ulonglong)dVar18 >> 0x20),uVar32 & SUB84(dVar18,0))
              == dVar33);
    auVar15._8_4_ = (int)lVar26;
    auVar15._0_8_ =
         -(ulonglong)
          ((double)CONCAT44(uVar31 & (uint)((ulonglong)dVar28 >> 0x20),uVar29 & SUB84(dVar28,0)) ==
          dVar30);
    auVar15._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
    iVar22 = movmskpd(iVar22,auVar15);
    if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
      lVar26 = -(ulonglong)
                ((double)CONCAT44(uVar34 & local_108.Scale3D.ZW.m128d_f64[1]._4_4_,
                                  uVar32 & local_108.Scale3D.ZW.m128d_f64[1]._0_4_) == dVar33);
      auVar8._8_4_ = (int)lVar26;
      auVar8._0_8_ = -(ulonglong)
                      ((double)CONCAT44(uVar31 & local_108.Scale3D.ZW.m128d_f64[0]._4_4_,
                                        uVar29 & local_108.Scale3D.ZW.m128d_f64[0]._0_4_) == dVar30)
      ;
      auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar24 = movmskpd(0,auVar8);
      lVar26 = -(ulonglong)
                ((double)CONCAT44(uVar34 & local_108.Scale3D.XY.m128d_f64[1]._4_4_,
                                  uVar32 & local_108.Scale3D.XY.m128d_f64[1]._0_4_) == dVar33);
      auVar16._8_4_ = (int)lVar26;
      auVar16._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar31 & local_108.Scale3D.XY.m128d_f64[0]._4_4_,
                              uVar29 & local_108.Scale3D.XY.m128d_f64[0]._0_4_) == dVar30);
      auVar16._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar22 = movmskpd(iVar22,auVar16);
      if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
        dVar27 = local_108.Rotation.ZW.m128d_f64[0] * local_108.Rotation.ZW.m128d_f64[0] +
                 local_108.Rotation.XY.m128d_f64[0] * local_108.Rotation.XY.m128d_f64[0];
        dVar28 = local_108.Rotation.ZW.m128d_f64[1] * local_108.Rotation.ZW.m128d_f64[1] +
                 local_108.Rotation.XY.m128d_f64[1] * local_108.Rotation.XY.m128d_f64[1];
        dVar18 = dVar28 + dVar27;
        dVar27 = dVar27 + dVar28;
        dVar28 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar18;
        dVar19 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - dVar27;
        lVar26 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar19,0) & _UNK_15061cc88));
        auVar17._8_4_ = (int)lVar26;
        auVar17._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] <
              (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar17._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        uVar24 = movmskpd(0,auVar17);
        dVar18 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar18;
        dVar27 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - dVar27;
        lVar26 = -(ulonglong)
                  ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] <
                  (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar27,0) & _UNK_15061cc88));
        auVar9._8_4_ = (int)lVar26;
        auVar9._0_8_ = -(ulonglong)
                        ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] <
                        (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar18,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
        iVar22 = movmskpd(iVar22,auVar9);
        if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) goto LAB_148275913;
      }
    }
  }
  UE::Math::TTransform<double>::ToString(&local_108,&local_158);
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("Local2.IsValid() && !Local2.ContainsNaN()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\ConstraintInstance.cpp"
                      ,0x214,L"%s");
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (bVar20) {
    pcVar1 = (code *)swi(3);
    uVar21 = (*pcVar1)();
    return (bool)uVar21;
  }
LAB_148275913:
  if (bEnableSkeletalMeshConstraints != false) {
    FVar23 = FChaosEngineInterface::CreateConstraint
                       ((FPhysicsObject *)local_198,local_1c8,local_1d0,&local_a8);
    this->_padding_ = (FVar23.Constraint)->_padding_;
  }
  bVar20 = FPhysicsConstraintReference_Chaos::IsValid
                     ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (bVar20) {
    FChaosEngineInterface::SetConstraintUserData
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,&this->UserData);
    bVar20 = true;
  }
  else {
    if (4 < (byte)LogPhysics._0_1_) {
      ::FName::ToString(&this->JointName,&local_148);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    bVar20 = false;
  }
  FMemScope::~FMemScope(&local_1c0);
  FLLMScope::~FLLMScope(&local_1d4);
  return bVar20;
}

// DisableMassConditioning @ 14827a8a0

void __thiscall FConstraintInstance::DisableMassConditioning(FConstraintInstance *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bEnableMassConditioning = '\0';
  this_00 = &this->_padding_;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// DisableParentDominates @ 14827a8f0

void __thiscall FConstraintInstance::DisableParentDominates(FConstraintInstance *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bParentDominates = '\0';
  this_00 = &this->_padding_;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetParentDominates_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// DisableProjection @ 14827a940

/* WARNING: Removing unreachable block (ram,0x00014827a9b3) */

void __thiscall FConstraintInstance::DisableProjection(FConstraintInstance *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_20;
  
  this_00 = &this->_padding_;
  (this->ProfileInstance).bEnableProjection = '\0';
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_20,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetProjectionEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,false,0.0,0.0,__real_bf800000,
               __real_bf800000);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_20);
  }
  return;
}

// EnableMassConditioning @ 14827bd60

void __thiscall FConstraintInstance::EnableMassConditioning(FConstraintInstance *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bEnableMassConditioning = '\x01';
  this_00 = &this->_padding_;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetMassConditioningEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,true);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// EnableParentDominates @ 14827bdb0

void __thiscall FConstraintInstance::EnableParentDominates(FConstraintInstance *this)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bParentDominates = '\x01';
  this_00 = &this->_padding_;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetParentDominates_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,true);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// EnableProjection @ 14827be00

void __thiscall FConstraintInstance::EnableProjection(FConstraintInstance *this)

{
  SetProjectionParams(this,true,(this->ProfileInstance).ProjectionLinearAlpha,
                      (this->ProfileInstance).ProjectionAngularAlpha,
                      (this->ProfileInstance).ProjectionLinearTolerance,
                      (this->ProfileInstance).ProjectionAngularTolerance);
  return;
}

// Free @ 1482834d0

void __cdecl FConstraintInstance::Free(FConstraintInstance *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_);
  FMemory::Free(param_1);
  return;
}

// GetAngularDriveParams @ 148284a90

void __thiscall
FConstraintInstance::GetAngularDriveParams
          (FConstraintInstance *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = (this->ProfileInstance).AngularDrive.SwingDrive.Stiffness;
  *param_2 = (this->ProfileInstance).AngularDrive.SwingDrive.Damping;
  *param_3 = (this->ProfileInstance).AngularDrive.SwingDrive.MaxForce;
  return;
}

// GetAngularVelocityDriveTwistAndSwing @ 148284e50

void __thiscall
FConstraintInstance::GetAngularVelocityDriveTwistAndSwing
          (FConstraintInstance *this,bool *param_1,bool *param_2)

{
  *param_1 = (this->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive;
  *param_2 = (this->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive;
  return;
}

// GetConstraintForce @ 1482867c0

void __thiscall
FConstraintInstance::GetConstraintForce
          (FConstraintInstance *this,TVector<double> *param_1,TVector<double> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = (double)uVar1;
  (param_1->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar1;
  (param_2->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FChaosEngineInterface::GetForce
            ((FPhysicsConstraintReference_Chaos *)&this->_padding_,param_1,param_2);
  return;
}

// GetConstraintLocation @ 148286800

TVector<double> * __thiscall
FConstraintInstance::GetConstraintLocation
          (FConstraintInstance *this,TVector<double> *__return_storage_ptr__)

{
  FChaosEngineInterface::GetLocation
            (__return_storage_ptr__,(FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return __return_storage_ptr__;
}

// GetCurrentSwing1 @ 148287540

float __thiscall FConstraintInstance::GetCurrentSwing1(FConstraintInstance *this)

{
  float fVar1;
  
  fVar1 = FChaosEngineInterface::GetCurrentSwing1
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return fVar1;
}

// GetCurrentSwing2 @ 148287550

float __thiscall FConstraintInstance::GetCurrentSwing2(FConstraintInstance *this)

{
  float fVar1;
  
  fVar1 = FChaosEngineInterface::GetCurrentSwing2
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return fVar1;
}

// GetCurrentTwist @ 148287560

float __thiscall FConstraintInstance::GetCurrentTwist(FConstraintInstance *this)

{
  float fVar1;
  
  fVar1 = FChaosEngineInterface::GetCurrentTwist
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return fVar1;
}

// GetLinearDriveParams @ 1482898a0

void __thiscall
FConstraintInstance::GetLinearDriveParams
          (FConstraintInstance *this,float *param_1,float *param_2,float *param_3)

{
  *param_1 = (this->ProfileInstance).LinearDrive.XDrive.Stiffness;
  *param_2 = (this->ProfileInstance).LinearDrive.XDrive.Damping;
  *param_3 = (this->ProfileInstance).LinearDrive.XDrive.MaxForce;
  return;
}

// GetLinearDriveParams @ 1482898d0

void __thiscall
FConstraintInstance::GetLinearDriveParams
          (FConstraintInstance *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (this->ProfileInstance).LinearDrive.ZDrive.Stiffness;
  fVar2 = (this->ProfileInstance).LinearDrive.XDrive.Stiffness;
  (param_1->field0_0x0)._s_0.Y = (double)(this->ProfileInstance).LinearDrive.YDrive.Stiffness;
  (param_1->field0_0x0)._s_0.X = (double)fVar2;
  (param_1->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->ProfileInstance).LinearDrive.ZDrive.Damping;
  fVar2 = (this->ProfileInstance).LinearDrive.XDrive.Damping;
  (param_2->field0_0x0)._s_0.Y = (double)(this->ProfileInstance).LinearDrive.YDrive.Damping;
  (param_2->field0_0x0)._s_0.X = (double)fVar2;
  (param_2->field0_0x0)._s_0.Z = (double)fVar1;
  fVar1 = (this->ProfileInstance).LinearDrive.ZDrive.MaxForce;
  fVar2 = (this->ProfileInstance).LinearDrive.XDrive.MaxForce;
  (param_3->field0_0x0)._s_0.Y = (double)(this->ProfileInstance).LinearDrive.YDrive.MaxForce;
  (param_3->field0_0x0)._s_0.X = (double)fVar2;
  (param_3->field0_0x0)._s_0.Z = (double)fVar1;
  return;
}

// GetOrientationDriveTwistAndSwing @ 14828b430

void __thiscall
FConstraintInstance::GetOrientationDriveTwistAndSwing
          (FConstraintInstance *this,bool *param_1,bool *param_2)

{
  *param_1 = (this->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive;
  *param_2 = (this->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive;
  return;
}

// GetPhysicsConstraintRef @ 14828b990

FPhysicsConstraintReference_Chaos * __thiscall
FConstraintInstance::GetPhysicsConstraintRef(FConstraintInstance *this)

{
  return (FPhysicsConstraintReference_Chaos *)&this->_padding_;
}

// GetProjectionParams @ 14828c320

void __thiscall
FConstraintInstance::GetProjectionParams
          (FConstraintInstance *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  *param_1 = (this->ProfileInstance).ProjectionLinearAlpha;
  *param_2 = (this->ProfileInstance).ProjectionAngularAlpha;
  *param_3 = (this->ProfileInstance).ProjectionLinearTolerance;
  *param_4 = (this->ProfileInstance).ProjectionAngularTolerance;
  return;
}

// GetRefFrame @ 14828c400

/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall
FConstraintInstance::GetRefFrame
          (FConstraintInstance *this,TTransform<double> *__return_storage_ptr__,Type param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  TMatrix<double> local_128;
  TTransform<double> local_a8;
  
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_128.M[0][3] = 0.0;
  local_128.M[1][3] = 0.0;
  local_128.M[2][3] = 0.0;
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  dVar10 = __real_3ff0000000000000;
  if (param_1 == Frame1) {
    local_128.M[0][2] = (this->PriAxis1).field0_0x0._s_0.Z;
    local_128.M[0][1] = (this->PriAxis1).field0_0x0._s_0.Y;
    local_128.M[1][1] = (this->SecAxis1).field0_0x0._s_0.Y;
    local_128.M[1][2] = (this->SecAxis1).field0_0x0._s_0.Z;
    local_128.M[0][0] = (this->PriAxis1).field0_0x0._s_0.X;
    local_128.M[1][0] = (this->SecAxis1).field0_0x0._s_0.X;
    local_128.M[2][0] =
         local_128.M[0][1] * local_128.M[1][2] - local_128.M[0][2] * local_128.M[1][1];
    local_128.M[2][1] =
         local_128.M[1][0] * local_128.M[0][2] - local_128.M[0][0] * local_128.M[1][2];
    local_128.M[2][2] = local_128.M[0][0] * local_128.M[1][1];
    local_128.M[3][0] = (this->Pos1).field0_0x0._s_0.X;
    local_128.M[3][1] = (this->Pos1).field0_0x0._s_0.Y;
    dVar11 = local_128.M[1][0] * local_128.M[0][1];
    uVar1 = *(undefined8 *)((longlong)&(this->Pos1).field0_0x0 + 0x10);
    uVar12 = (undefined4)uVar1;
    uVar13 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    local_128.M[1][1] = (this->SecAxis2).field0_0x0._s_0.Y;
    local_128.M[1][2] = (this->SecAxis2).field0_0x0._s_0.Z;
    local_128.M[0][2] = (this->PriAxis2).field0_0x0._s_0.Z;
    local_128.M[0][1] = (this->PriAxis2).field0_0x0._s_0.Y;
    local_128.M[0][0] = (this->PriAxis2).field0_0x0._s_0.X;
    local_128.M[1][0] = (this->SecAxis2).field0_0x0._s_0.X;
    local_128.M[2][0] =
         local_128.M[1][2] * local_128.M[0][1] - local_128.M[1][1] * local_128.M[0][2];
    local_128.M[2][1] =
         local_128.M[1][0] * local_128.M[0][2] - local_128.M[0][0] * local_128.M[1][2];
    local_128.M[2][2] = local_128.M[0][0] * local_128.M[1][1];
    local_128.M[3][0] = (this->Pos2).field0_0x0._s_0.X;
    local_128.M[3][1] = (this->Pos2).field0_0x0._s_0.Y;
    dVar11 = local_128.M[1][0] * local_128.M[0][1];
    uVar1 = *(undefined8 *)((longlong)&(this->Pos2).field0_0x0 + 0x10);
    uVar12 = (undefined4)uVar1;
    uVar13 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_128.M[2][2] = local_128.M[2][2] - dVar11;
  local_128.M[3][2] = (double)CONCAT44(uVar13,uVar12);
  local_128.M[3][3] = __real_3ff0000000000000;
  UE::Math::TTransform<double>::SetFromMatrix(&local_a8,&local_128);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_a8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
  dVar10 = (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] *
           (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] *
           (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] - dVar10;
  if ((__real_3c23d70a <
       (float)(double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (2 < (byte)LogPhysics._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysics);
  }
  return __return_storage_ptr__;
}

// GetShockPropagationAlpha @ 14828d620

float __thiscall FConstraintInstance::GetShockPropagationAlpha(FConstraintInstance *this)

{
  return (this->ProfileInstance).ShockPropagationAlpha;
}

// InitConstraint @ 1482931b0

void __thiscall
FConstraintInstance::InitConstraint
          (FConstraintInstance *this,FBodyInstance *param_1,FBodyInstance *param_2,float param_3,
          UObject *param_4,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_5,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_6)

{
  FSingleParticlePhysicsProxy *pFVar1;
  bool bVar2;
  bool bVar3;
  FSingleParticlePhysicsProxy *pFVar4;
  FScopedSceneLock_Chaos local_b8;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  int local_70;
  FSingleParticlePhysicsProxy *local_68;
  FSingleParticlePhysicsProxy *local_60;
  float local_58 [2];
  undefined1 local_50 [24];
  undefined1 *local_38;
  FSingleParticlePhysicsProxy *local_30;
  FSingleParticlePhysicsProxy *local_28;
  
  bVar2 = GetActorRefs(param_1,param_2,&local_68,&local_60,param_4);
  if (!bVar2) goto LAB_148293538;
  pFVar4 = (FSingleParticlePhysicsProxy *)0x0;
  local_80 = (undefined1  [8])0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_80,param_6);
  local_98 = (undefined1  [8])0x0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)local_98,param_5);
  local_28 = pFVar4;
  if (local_60 != (FSingleParticlePhysicsProxy *)0x0) {
    local_28 = (FSingleParticlePhysicsProxy *)(local_60->Reference).Ptr;
  }
  if (local_68 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar4 = (FSingleParticlePhysicsProxy *)(local_68->Reference).Ptr;
  }
  local_b8.Solver._0_4_ = 2;
  local_b8._0_8_ = &local_30;
  local_68 = local_28;
  local_60 = pFVar4;
  local_58[0] = param_3;
  local_30 = pFVar4;
  FPhysicsObjectExternalInterface::LockRead
            ((FLockedPhysicsObjectExternalInterface<0> *)local_50,
             (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_b8);
  local_b8.Solver._0_4_ = 1;
  local_b8._0_8_ = &local_60;
  bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    ((FReadPhysicsObjectInterface<0> *)&local_38,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_b8);
  local_b8.Solver = (FPBDRigidsSolver *)CONCAT44(local_b8.Solver._4_4_,1);
  local_b8._0_8_ = &local_68;
  bVar3 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    ((FReadPhysicsObjectInterface<0> *)&local_38,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_b8);
  if (bAllowKinematicKinematicConstraints == false) {
    if (bVar2) {
      local_b8.Solver = (FPBDRigidsSolver *)CONCAT44(local_b8.Solver._4_4_,1);
      local_b8._0_8_ = &local_60;
      bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        ((FReadPhysicsObjectInterface<0> *)&local_38,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_b8);
      if (!bVar2) goto LAB_1482933f7;
    }
    if (bVar3) {
      local_b8.Solver = (FPBDRigidsSolver *)CONCAT44(local_b8.Solver._4_4_,1);
      local_b8._0_8_ = &local_68;
      bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        ((FReadPhysicsObjectInterface<0> *)&local_38,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_b8);
      if (!bVar2) goto LAB_1482933f7;
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)local_50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_b8);
    if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_b8.LockType == Read) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b8.Solver,(FDestructionSentinel *)&local_b8);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_b8);
  }
  else {
LAB_1482933f7:
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)local_50);
    pFVar1 = local_60;
    pFVar4 = local_68;
    local_50._8_8_ = local_58;
    local_50._16_8_ = local_98;
    local_38 = local_80;
    local_50._0_8_ = this;
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_b8,(FPhysicsObject *)local_60,(FPhysicsObject *)local_68,Write);
    `FConstraintInstance::InitConstraint'::__l2::<lambda_1>::operator()
              (local_50,(FPhysicsObject *)pFVar1,(FPhysicsObject *)pFVar4);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_b8);
    if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_b8.LockType == Read) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_b8.Solver,(FDestructionSentinel *)&local_b8);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_b8);
  }
  if ((local_70 != 0) && (local_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_b8.LockType == Read) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b8.Solver,(FDestructionSentinel *)&local_b8);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
LAB_148293538:
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  return;
}

// InitConstraint @ 148293570

void __thiscall
FConstraintInstance::InitConstraint
          (FConstraintInstance *this,FPhysicsObject *param_1,FPhysicsObject *param_2,float param_3,
          UObject *param_4,TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_5,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_6)

{
  FPhysicsObject *pFVar1;
  FPhysicsObject *pFVar2;
  bool bVar3;
  bool bVar4;
  FPhysicsObject *local_res10;
  FPhysicsObject *local_res18;
  float local_res20;
  FPhysicsObject *local_78;
  FPhysicsObject *local_70;
  FPhysicsObject **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_48 [24];
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *local_30;
  
  uStack_60 = 2;
  local_68 = &local_78;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  FPhysicsObjectExternalInterface::LockRead
            ((FLockedPhysicsObjectExternalInterface<0> *)local_48,
             (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_68);
  uStack_60 = 1;
  local_68 = &local_res10;
  bVar3 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    ((FReadPhysicsObjectInterface<0> *)&local_30,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_68);
  uStack_60 = 1;
  local_68 = &local_res18;
  bVar4 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    ((FReadPhysicsObjectInterface<0> *)&local_30,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_68);
  if (bAllowKinematicKinematicConstraints == false) {
    if (bVar3) {
      local_68 = &local_res10;
      uStack_60 = 1;
      bVar3 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        ((FReadPhysicsObjectInterface<0> *)&local_30,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_68);
      if (!bVar3) goto LAB_148293693;
    }
    if (bVar4) {
      local_68 = &local_res18;
      uStack_60 = 1;
      bVar3 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        ((FReadPhysicsObjectInterface<0> *)&local_30,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)&local_68);
      if (!bVar3) goto LAB_148293693;
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)local_48);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
    return;
  }
LAB_148293693:
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)local_48);
  pFVar2 = local_res18;
  pFVar1 = local_res10;
  local_48._8_8_ = &local_res20;
  local_48._16_8_ = param_5;
  local_30 = param_6;
  local_48._0_8_ = this;
  FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
            ((FScopedSceneLock_Chaos *)&local_68,local_res10,local_res18,Write);
  `FConstraintInstance::InitConstraint'::__l2::<lambda_1>::operator()(local_48,pFVar1,pFVar2);
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)&local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_6);
  return;
}

// InitConstraint_AssumesLocked @ 148293720

void __thiscall
FConstraintInstance::InitConstraint_AssumesLocked
          (FConstraintInstance *this,FSingleParticlePhysicsProxy **param_1,
          FSingleParticlePhysicsProxy **param_2,float param_3,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_5)

{
  FPhysicsObject *pFVar1;
  FPhysicsObject *pFVar2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_48;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> local_30;
  
  pFVar1 = (FPhysicsObject *)0x0;
  pFVar2 = pFVar1;
  if (*param_1 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar2 = ((*param_1)->Reference).Ptr;
  }
  if (*param_2 != (FSingleParticlePhysicsProxy *)0x0) {
    pFVar1 = ((*param_2)->Reference).Ptr;
  }
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  local_48._16_4_ = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_48,param_5);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_30._16_4_ = 0;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_30,param_4);
  InitConstraint_AssumesLocked(this,pFVar2,pFVar1,param_3,&local_30,&local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return;
}

// InitConstraint_AssumesLocked @ 148293810

void __thiscall
FConstraintInstance::InitConstraint_AssumesLocked
          (FConstraintInstance *this,FPhysicsObject *param_1,FPhysicsObject *param_2,float param_3,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  FReadPhysicsObjectInterface<0> FVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  FPhysicsConstraintReference_Chaos local_res8;
  FPhysicsObject *local_res10;
  IPhysicsProxyBase *local_res18;
  FReadPhysicsObjectInterface<0> local_res20 [8];
  FPhysicsObject *local_88 [2];
  undefined1 local_78 [16];
  FScopedSceneLock_Chaos local_68 [2];
  
  local_res10 = param_1;
  local_res18 = (IPhysicsProxyBase *)param_2;
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_,param_4);
  TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(int),FDefaultDelegateUserPolicy> *)&this->_padding_,param_5);
  local_78._0_4_ = 4;
  this->LastKnownScale = param_3;
  *(undefined8 *)&this->UserData = local_78._0_8_;
  (this->UserData).Payload = this;
  local_78._8_8_ = this;
  FPhysicsObjectExternalInterface::GetWrite_AssumesLocked();
  local_78._0_8_ = &local_res10;
  local_78._8_4_ = 1;
  local_68[0].Solver._0_4_ = 1;
  local_68[0].Solver._4_4_ = local_78._12_4_;
  local_68[0]._0_8_ = local_78._0_8_;
  bVar1 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    (local_res20,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
  if (bVar1) {
    local_78._0_8_ = &local_res10;
    local_78._8_4_ = 1;
    local_68[0].Solver._0_4_ = 1;
    local_68[0].Solver._4_4_ = local_78._12_4_;
    local_68[0]._0_8_ = local_78._0_8_;
    bVar1 = Chaos::FReadPhysicsObjectInterface<0>::AreAllSleeping
                      (local_res20,
                       (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
    if (!bVar1) goto LAB_1482938cb;
    bVar1 = true;
  }
  else {
LAB_1482938cb:
    bVar1 = false;
  }
  local_78._0_8_ = &local_res18;
  local_78._8_4_ = 1;
  local_68[0].Solver._0_4_ = 1;
  local_68[0].Solver._4_4_ = local_78._12_4_;
  local_68[0]._0_8_ = local_78._0_8_;
  bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllValid
                    (local_res20,
                     (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
  if (bVar2) {
    local_78._0_8_ = &local_res18;
    local_78._8_4_ = 1;
    local_68[0].Solver._0_4_ = 1;
    local_68[0].Solver._4_4_ = local_78._12_4_;
    local_68[0]._0_8_ = local_78._0_8_;
    bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllSleeping
                      (local_res20,
                       (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
    if (bVar2) {
      bVar2 = true;
      goto LAB_148293930;
    }
  }
  bVar2 = false;
LAB_148293930:
  bVar3 = FPhysicsConstraintReference_Chaos::IsValid
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if ((bVar3) &&
     (bVar3 = FPhysicsConstraintReference_Chaos::IsValid
                        ((FPhysicsConstraintReference_Chaos *)&this->_padding_), bVar3)) {
    local_res8.Constraint = (FConstraintBase *)this->_padding_;
    bVar3 = FPhysicsConstraintReference_Chaos::IsValid(&local_res8);
    if (bVar3) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
                ((FScopedSceneLock_Chaos *)(local_78 + 0x10),&local_res8,Write);
      FChaosEngineInterface::ReleaseConstraint
                ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos((FScopedSceneLock_Chaos *)(local_78 + 0x10));
    }
  }
  bVar3 = CreateJoint_AssumesLocked(this,local_res10,(FPhysicsObject *)local_res18);
  if (bVar3) {
    fVar7 = 0.0;
    local_78._0_8_ = local_res18;
    local_88[0] = local_res10;
    FVar4 = FPhysicsObjectExternalInterface::GetRead_AssumesLocked();
    local_68[0].Solver._0_4_ = 1;
    local_res8.Constraint._0_1_ = FVar4;
    local_68[0]._0_8_ = local_88;
    bVar5 = Chaos::FReadPhysicsObjectInterface<0>::AreAllRigidBody
                      ((FReadPhysicsObjectInterface<0> *)&local_res8,
                       (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
    if ((bool)bVar5) {
      local_68[0]._0_8_ = local_88;
      local_68[0].Solver._0_4_ = 1;
      fVar7 = Chaos::FReadPhysicsObjectInterface<0>::GetMass
                        ((FReadPhysicsObjectInterface<0> *)&local_res8,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
    }
    local_68[0]._0_8_ = local_78;
    local_68[0].Solver._0_4_ = 1;
    bVar3 = Chaos::FReadPhysicsObjectInterface<0>::AreAllRigidBody
                      ((FReadPhysicsObjectInterface<0> *)&local_res8,
                       (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
    if (bVar3) {
      local_68[0]._0_8_ = local_78;
      local_68[0].Solver._0_4_ = 1;
      fVar6 = Chaos::FReadPhysicsObjectInterface<0>::GetMass
                        ((FReadPhysicsObjectInterface<0> *)&local_res8,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
      fVar7 = fVar7 + fVar6;
      bVar5 = bVar5 + 1;
    }
    if (1 < bVar5) {
      fVar7 = fVar7 / (float)bVar5;
    }
    this->AverageMass = fVar7;
    fVar6 = __real_3f800000;
    if (this->bScaleLinearLimits != 0) {
      fVar6 = this->LastKnownScale;
    }
    FConstraintProfileProperties::Update_AssumesLocked
              (&this->ProfileInstance,(FPhysicsConstraintReference_Chaos *)&this->_padding_,fVar7,
               fVar6,true);
    if ((bVar1) && (bVar2)) {
      local_68[0].Solver._0_4_ = 1;
      local_68[0]._0_8_ = &local_res10;
      bVar1 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        (local_res20,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
      if (!bVar1) {
        local_68[0]._0_8_ = &local_res10;
        local_68[0].Solver._0_4_ = 1;
        Chaos::FWritePhysicsObjectInterface<0>::PutToSleep
                  ((FWritePhysicsObjectInterface<0> *)local_res20,
                   (TArrayView<Chaos::FPhysicsObject_*_const,int> *)(local_78 + 0x10));
      }
      local_68[0]._0_8_ = &local_res18;
      local_68[0].Solver._0_4_ = 1;
      bVar1 = Chaos::FReadPhysicsObjectInterface<0>::AreAllKinematic
                        (local_res20,
                         (TArrayView<Chaos::FPhysicsObject_const_*_const,int> *)(local_78 + 0x10));
      if (!bVar1) {
        local_68[0]._0_8_ = &local_res18;
        local_68[0].Solver._0_4_ = 1;
        Chaos::FWritePhysicsObjectInterface<0>::PutToSleep
                  ((FWritePhysicsObjectInterface<0> *)local_res20,
                   (TArrayView<Chaos::FPhysicsObject_*_const,int> *)(local_78 + 0x10));
      }
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return;
}

// IsBroken @ 148294a30

bool __thiscall FConstraintInstance::IsBroken(FConstraintInstance *this)

{
  bool bVar1;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return bVar1;
}

// IsTerminated @ 148295110

bool __thiscall FConstraintInstance::IsTerminated(FConstraintInstance *this)

{
  bool bVar1;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return !bVar1;
}

// IsValidConstraintInstance @ 148295150

bool __thiscall FConstraintInstance::IsValidConstraintInstance(FConstraintInstance *this)

{
  bool bVar1;
  
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid
                    ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  return bVar1;
}

// Serialize @ 1482a8d50

bool __thiscall FConstraintInstance::Serialize(FConstraintInstance *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  return false;
}

// SerializeState @ 1482a92f0

void __thiscall
FConstraintInstance::SerializeState
          (FConstraintInstance *this,FSerializedDataBuffer *param_1,ESerializedDataContext param_2)

{
  longlong *this_00;
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  this_00 = &this->_padding_;
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar1) {
    FScopedSceneLockWithContext_Chaos::FScopedSceneLockWithContext_Chaos
              ((FScopedSceneLockWithContext_Chaos *)&local_28,
               (FPhysicsConstraintReference_Chaos *)this_00,Read,param_2 == Internal,Normal);
    FChaosEngineInterface::SerializeConstraintStateToBuffer
              ((FPhysicsConstraintReference_Chaos *)this_00,param_1,param_2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularDOFLimitScale @ 1482a9490

void __thiscall
FConstraintInstance::SetAngularDOFLimitScale
          (FConstraintInstance *this,float param_1,float param_2,float param_3)

{
  longlong *plVar1;
  bool bVar2;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  FScopedSceneLock_Chaos local_48;
  FConstraintInstance *local_30;
  float *local_28;
  float *local_20;
  float *local_18;
  
  local_28 = local_res10;
  plVar1 = &this->_padding_;
  local_20 = local_res18;
  local_18 = local_res20;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  local_30 = this;
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar1);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_48,(FPhysicsConstraintReference_Chaos *)plVar1,Write);
    `FConstraintInstance::SetAngularDOFLimitScale'::__l2::<lambda_1>::operator()
              (&local_30,(FPhysicsConstraintReference_Chaos *)plVar1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_48);
  }
  return;
}

// SetAngularDriveAccelerationMode @ 1482a9550

void __thiscall
FConstraintInstance::SetAngularDriveAccelerationMode(FConstraintInstance *this,bool param_1)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.bAccelerationMode = param_1;
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularDriveMode @ 1482a95c0

void __thiscall FConstraintInstance::SetAngularDriveMode(FConstraintInstance *this,Type param_1)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.AngularDriveMode.Value = (uchar)param_1;
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularDriveParams @ 1482a96b0

void __thiscall
FConstraintInstance::SetAngularDriveParams
          (FConstraintInstance *this,float param_1,float param_2,float param_3)

{
  longlong *plVar1;
  FAngularDriveConstraint *pFVar2;
  bool bVar3;
  FScopedSceneLock_Chaos local_28;
  
  pFVar2 = &(this->ProfileInstance).AngularDrive;
  plVar1 = &this->_padding_;
  (this->ProfileInstance).AngularDrive.SwingDrive.Stiffness = param_1;
  (this->ProfileInstance).AngularDrive.SwingDrive.Damping = param_2;
  (this->ProfileInstance).AngularDrive.SwingDrive.MaxForce = param_3;
  (pFVar2->TwistDrive).Stiffness = param_1;
  (this->ProfileInstance).AngularDrive.TwistDrive.Damping = param_2;
  (this->ProfileInstance).AngularDrive.TwistDrive.MaxForce = param_3;
  (this->ProfileInstance).AngularDrive.SlerpDrive.Stiffness = param_1;
  (this->ProfileInstance).AngularDrive.SlerpDrive.Damping = param_2;
  (this->ProfileInstance).AngularDrive.SlerpDrive.MaxForce = param_3;
  bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar1);
  if (!bVar3) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)plVar1,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)plVar1,pFVar2,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularOrientationTarget @ 1482a99d0

void __thiscall
FConstraintInstance::SetAngularOrientationTarget(FConstraintInstance *this,TQuat<double> *param_1)

{
  TRotator<double> local_28;
  
  UE::Math::TRotator<double>::TRotator<double>(&local_28,param_1);
  if (((local_28.Pitch != (this->ProfileInstance).AngularDrive.OrientationTarget.Pitch) ||
      (local_28.Yaw != (this->ProfileInstance).AngularDrive.OrientationTarget.Yaw)) ||
     (local_28.Roll != (this->ProfileInstance).AngularDrive.OrientationTarget.Roll)) {
    (this->ProfileInstance).AngularDrive.OrientationTarget.Pitch = local_28.Pitch;
    (this->ProfileInstance).AngularDrive.OrientationTarget.Yaw = local_28.Yaw;
    (this->ProfileInstance).AngularDrive.OrientationTarget.Roll = local_28.Roll;
    FChaosEngineInterface::SetDriveOrientation
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,param_1);
  }
  return;
}

// SetAngularVelocityDriveSLERP @ 1482a9ed0

void __thiscall
FConstraintInstance::SetAngularVelocityDriveSLERP(FConstraintInstance *this,bool param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.SlerpDrive.bEnableVelocityDrive = '\0';
  puVar1 = &(this->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularVelocityDriveTwistAndSwing @ 1482aa000

void __thiscall
FConstraintInstance::SetAngularVelocityDriveTwistAndSwing
          (FConstraintInstance *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.SwingDrive.bEnableVelocityDrive = '\0';
  (this->ProfileInstance).AngularDrive.TwistDrive.bEnableVelocityDrive = '\0';
  puVar1 = &(this->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
  *puVar1 = *puVar1 | param_2 * '\x02';
  puVar1 = &(this->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetAngularVelocityTarget @ 1482aa140

void __thiscall
FConstraintInstance::SetAngularVelocityTarget(FConstraintInstance *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_48 [3];
  
  dVar2 = __real_4000000000000000;
  if ((((param_1->field0_0x0)._s_0.X !=
        (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X) ||
      ((param_1->field0_0x0)._s_0.Y !=
       (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y)) ||
     ((param_1->field0_0x0)._s_0.Z !=
      (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z)) {
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.X =
         (param_1->field0_0x0)._s_0.X;
    (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Y = dVar1;
    (this->ProfileInstance).AngularDrive.AngularVelocityTarget.field0_0x0._s_0.Z =
         (param_1->field0_0x0)._s_0.Z;
    local_48[0]._8_8_ = (param_1->field0_0x0)._s_0.Y * dVar2 * __real_400921fb60000000;
    local_48[0]._0_8_ = (param_1->field0_0x0)._s_0.X * dVar2 * __real_400921fb60000000;
    local_48[0]._16_8_ = (param_1->field0_0x0)._s_0.Z * dVar2 * __real_400921fb60000000;
    FChaosEngineInterface::SetDriveAngularVelocity
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               (TVector<double> *)&local_48[0]._s_0);
  }
  return;
}

// SetDisableCollision @ 1482aa600

void __thiscall FConstraintInstance::SetDisableCollision(FConstraintInstance *this,bool param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  bool bVar3;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bDisableCollision = '\0';
  plVar1 = &this->_padding_;
  puVar2 = &(this->ProfileInstance).field_0x80;
  *puVar2 = *puVar2 | param_1;
  bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar1);
  if (!bVar3) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)plVar1,Write);
    FChaosEngineInterface::SetCollisionEnabled((FPhysicsConstraintReference_Chaos *)plVar1,!param_1)
    ;
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetDriveParams @ 1482aa7f0

void __thiscall
FConstraintInstance::SetDriveParams
          (FConstraintInstance *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,
          TVector<double> *param_6,Type param_7)

{
  undefined1 *puVar1;
  FAngularDriveConstraint *pFVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  FScopedSceneLock_Chaos local_28;
  
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.XDrive.Damping = (float)(param_2->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.XDrive.Stiffness = (float)dVar4;
  (this->ProfileInstance).LinearDrive.XDrive.MaxForce = (float)dVar3;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.YDrive.Damping = (float)(param_2->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.YDrive.Stiffness = (float)dVar4;
  (this->ProfileInstance).LinearDrive.YDrive.MaxForce = (float)dVar3;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  (this->ProfileInstance).LinearDrive.ZDrive.Damping = (float)(param_2->field0_0x0)._s_0.Z;
  (this->ProfileInstance).LinearDrive.ZDrive.Stiffness = (float)dVar4;
  (this->ProfileInstance).LinearDrive.ZDrive.MaxForce = (float)dVar3;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  bVar9 = (param_1->field0_0x0)._s_0.X != 0.0;
  (this->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive = '\0';
  (this->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive = '\0';
  bVar11 = (this->ProfileInstance).LinearDrive.XDrive.field_0xc;
  puVar1 = &(this->ProfileInstance).LinearDrive.YDrive.field_0xc;
  *puVar1 = *puVar1 | dVar4 != 0.0;
  puVar1 = &(this->ProfileInstance).LinearDrive.ZDrive.field_0xc;
  *puVar1 = *puVar1 | dVar3 != 0.0;
  bVar5 = (this->ProfileInstance).LinearDrive.YDrive.field_0xc;
  bVar6 = (this->ProfileInstance).LinearDrive.ZDrive.field_0xc;
  (this->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive = bVar9;
  if ((param_2->field0_0x0)._s_0.Z == 0.0) {
    bVar13 = 0;
  }
  else {
    bVar13 = 2;
  }
  if ((param_2->field0_0x0)._s_0.Y == 0.0) {
    bVar12 = 0;
  }
  else {
    bVar12 = 2;
  }
  if ((param_2->field0_0x0)._s_0.X == 0.0) {
    bVar10 = 0;
  }
  else {
    bVar10 = 2;
  }
  pFVar2 = &(this->ProfileInstance).AngularDrive;
  (this->ProfileInstance).LinearDrive.XDrive.field_0xc = bVar11 & 0xfc | bVar9 | bVar10;
  (this->ProfileInstance).LinearDrive.ZDrive.field_0xc = bVar6 & 0xfd | bVar13;
  (this->ProfileInstance).LinearDrive.YDrive.field_0xc = bVar5 & 0xfd | bVar12;
  dVar3 = (param_6->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.X;
  (this->ProfileInstance).AngularDrive.SwingDrive.Damping = (float)(param_5->field0_0x0)._s_0.X;
  (this->ProfileInstance).AngularDrive.SwingDrive.Stiffness = (float)dVar4;
  (this->ProfileInstance).AngularDrive.SwingDrive.MaxForce = (float)dVar3;
  dVar3 = (param_6->field0_0x0)._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  (this->ProfileInstance).AngularDrive.TwistDrive.Damping = (float)(param_5->field0_0x0)._s_0.Y;
  (pFVar2->TwistDrive).Stiffness = (float)dVar4;
  (this->ProfileInstance).AngularDrive.TwistDrive.MaxForce = (float)dVar3;
  dVar3 = (param_5->field0_0x0)._s_0.Z;
  dVar4 = (param_4->field0_0x0)._s_0.Z;
  (this->ProfileInstance).AngularDrive.SlerpDrive.MaxForce = (float)(param_6->field0_0x0)._s_0.Z;
  (this->ProfileInstance).AngularDrive.SlerpDrive.Damping = (float)dVar3;
  (this->ProfileInstance).AngularDrive.SlerpDrive.Stiffness = (float)dVar4;
  (this->ProfileInstance).AngularDrive.AngularDriveMode.Value = (undefined1)param_7;
  bVar9 = (param_4->field0_0x0)._s_0.X != 0.0;
  bVar7 = (param_4->field0_0x0)._s_0.Y != 0.0;
  bVar11 = (this->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
  bVar5 = (this->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
  (this->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive = bVar9;
  (this->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive = bVar7;
  bVar8 = (param_4->field0_0x0)._s_0.Z != 0.0;
  bVar6 = (this->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
  (this->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive = bVar8;
  if ((param_5->field0_0x0)._s_0.X == 0.0) {
    bVar13 = 0;
  }
  else {
    bVar13 = 2;
  }
  if ((param_5->field0_0x0)._s_0.Y == 0.0) {
    bVar12 = 0;
  }
  else {
    bVar12 = 2;
  }
  (this->ProfileInstance).AngularDrive.SwingDrive.field_0xc = bVar11 & 0xfc | bVar9 | bVar13;
  (this->ProfileInstance).AngularDrive.TwistDrive.field_0xc = bVar5 & 0xfc | bVar7 | bVar12;
  if ((param_5->field0_0x0)._s_0.Z == 0.0) {
    bVar11 = 0;
  }
  else {
    bVar11 = 2;
  }
  (this->ProfileInstance).AngularDrive.SlerpDrive.field_0xc = bVar6 & 0xfc | bVar8 | bVar11;
  bVar9 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar9) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,pFVar2,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearDriveAccelerationMode @ 1482abbe0

void __thiscall
FConstraintInstance::SetLinearDriveAccelerationMode(FConstraintInstance *this,bool param_1)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).LinearDrive.bAccelerationMode = param_1;
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearDriveParams @ 1482abc40

void __thiscall
FConstraintInstance::SetLinearDriveParams
          (FConstraintInstance *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  FScopedSceneLock_Chaos local_28;
  
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.XDrive.Damping = (float)(param_2->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.XDrive.Stiffness = (float)dVar2;
  (this->ProfileInstance).LinearDrive.XDrive.MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.YDrive.Damping = (float)(param_2->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.YDrive.Stiffness = (float)dVar2;
  (this->ProfileInstance).LinearDrive.YDrive.MaxForce = (float)dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  (this->ProfileInstance).LinearDrive.ZDrive.Damping = (float)(param_2->field0_0x0)._s_0.Z;
  (this->ProfileInstance).LinearDrive.ZDrive.Stiffness = (float)dVar2;
  (this->ProfileInstance).LinearDrive.ZDrive.MaxForce = (float)dVar1;
  bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar3) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearDriveParams @ 1482abd40

void __thiscall
FConstraintInstance::SetLinearDriveParams
          (FConstraintInstance *this,float param_1,float param_2,float param_3)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).LinearDrive.XDrive.Stiffness = param_1;
  (this->ProfileInstance).LinearDrive.XDrive.Damping = param_2;
  (this->ProfileInstance).LinearDrive.XDrive.MaxForce = param_3;
  (this->ProfileInstance).LinearDrive.YDrive.Stiffness = param_1;
  (this->ProfileInstance).LinearDrive.YDrive.Damping = param_2;
  (this->ProfileInstance).LinearDrive.YDrive.MaxForce = param_3;
  (this->ProfileInstance).LinearDrive.ZDrive.Stiffness = param_1;
  (this->ProfileInstance).LinearDrive.ZDrive.Damping = param_2;
  (this->ProfileInstance).LinearDrive.ZDrive.MaxForce = param_3;
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearLimitSize @ 1482abef0

void __thiscall FConstraintInstance::SetLinearLimitSize(FConstraintInstance *this,float param_1)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FChaosEngineInterface::SetLinearLimit
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearPositionDrive @ 1482ac1e0

void __thiscall
FConstraintInstance::SetLinearPositionDrive
          (FConstraintInstance *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).LinearDrive.XDrive.bEnablePositionDrive = '\0';
  (this->ProfileInstance).LinearDrive.YDrive.bEnablePositionDrive = '\0';
  (this->ProfileInstance).LinearDrive.ZDrive.bEnablePositionDrive = '\0';
  puVar1 = &(this->ProfileInstance).LinearDrive.XDrive.field_0xc;
  *puVar1 = *puVar1 | param_1;
  puVar1 = &(this->ProfileInstance).LinearDrive.YDrive.field_0xc;
  *puVar1 = *puVar1 | param_2;
  puVar1 = &(this->ProfileInstance).LinearDrive.ZDrive.field_0xc;
  *puVar1 = *puVar1 | param_3;
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearPositionTarget @ 1482ac420

void __thiscall
FConstraintInstance::SetLinearPositionTarget(FConstraintInstance *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X ==
        (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y ==
       (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z ==
      (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Y = dVar1;
  (this->ProfileInstance).LinearDrive.PositionTarget.field0_0x0._s_0.Z =
       (param_1->field0_0x0)._s_0.Z;
  FChaosEngineInterface::SetDrivePosition
            ((FPhysicsConstraintReference_Chaos *)&this->_padding_,param_1);
  return;
}

// SetLinearVelocityDrive @ 1482ac620

void __thiscall
FConstraintInstance::SetLinearVelocityDrive
          (FConstraintInstance *this,bool param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).LinearDrive.XDrive.bEnableVelocityDrive = '\0';
  (this->ProfileInstance).LinearDrive.YDrive.bEnableVelocityDrive = '\0';
  (this->ProfileInstance).LinearDrive.ZDrive.bEnableVelocityDrive = '\0';
  puVar1 = &(this->ProfileInstance).LinearDrive.XDrive.field_0xc;
  *puVar1 = *puVar1 | param_1 * '\x02';
  puVar1 = &(this->ProfileInstance).LinearDrive.YDrive.field_0xc;
  *puVar1 = *puVar1 | param_2 * '\x02';
  puVar1 = &(this->ProfileInstance).LinearDrive.ZDrive.field_0xc;
  *puVar1 = *puVar1 | param_3 * '\x02';
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).LinearDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetLinearVelocityTarget @ 1482ac880

void __thiscall
FConstraintInstance::SetLinearVelocityTarget(FConstraintInstance *this,TVector<double> *param_1)

{
  double dVar1;
  
  if ((((param_1->field0_0x0)._s_0.X ==
        (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X) &&
      ((param_1->field0_0x0)._s_0.Y ==
       (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y)) &&
     ((param_1->field0_0x0)._s_0.Z ==
      (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z)) {
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X;
  (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Y = dVar1;
  (this->ProfileInstance).LinearDrive.VelocityTarget.field0_0x0._s_0.Z =
       (param_1->field0_0x0)._s_0.Z;
  FChaosEngineInterface::SetDriveLinearVelocity
            ((FPhysicsConstraintReference_Chaos *)&this->_padding_,param_1);
  return;
}

// SetOrientationDriveSLERP @ 1482ad900

void __thiscall
FConstraintInstance::SetOrientationDriveSLERP(FConstraintInstance *this,bool param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.SlerpDrive.bEnablePositionDrive = '\0';
  puVar1 = &(this->ProfileInstance).AngularDrive.SlerpDrive.field_0xc;
  *puVar1 = *puVar1 | param_1;
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetOrientationDriveTwistAndSwing @ 1482ada30

void __thiscall
FConstraintInstance::SetOrientationDriveTwistAndSwing
          (FConstraintInstance *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).AngularDrive.SwingDrive.bEnablePositionDrive = '\0';
  (this->ProfileInstance).AngularDrive.TwistDrive.bEnablePositionDrive = '\0';
  puVar1 = &(this->ProfileInstance).AngularDrive.SwingDrive.field_0xc;
  *puVar1 = *puVar1 | param_2;
  puVar1 = &(this->ProfileInstance).AngularDrive.TwistDrive.field_0xc;
  *puVar1 = *puVar1 | param_1;
  bVar2 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               &(this->ProfileInstance).AngularDrive,false);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetParentDominates @ 1482adc00

void __thiscall FConstraintInstance::SetParentDominates(FConstraintInstance *this,bool param_1)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bParentDominates = '\0';
  this_00 = &this->_padding_;
  puVar1 = &(this->ProfileInstance).field_0x80;
  *puVar1 = *puVar1 | param_1 * '\x02';
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetParentDominates_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,param_1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetProjectionParams @ 1482ae240

void __thiscall
FConstraintInstance::SetProjectionParams
          (FConstraintInstance *this,bool param_1,float param_2,float param_3,float param_4,
          float param_5)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bEnableProjection = '\0';
  this_00 = &this->_padding_;
  puVar1 = &(this->ProfileInstance).field_0x80;
  *puVar1 = *puVar1 | param_1 << 3;
  (this->ProfileInstance).ProjectionLinearAlpha = param_2;
  (this->ProfileInstance).ProjectionAngularAlpha = param_3;
  (this->ProfileInstance).ProjectionLinearTolerance = param_4;
  (this->ProfileInstance).ProjectionAngularTolerance = param_5;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    if (!param_1) {
      param_2 = 0.0;
      param_3 = 0.0;
      param_4 = __real_bf800000;
      param_5 = __real_bf800000;
    }
    FChaosEngineInterface::SetProjectionEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,param_1,param_2,param_3,param_4,param_5)
    ;
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetRefFrame @ 1482ae3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FConstraintInstance::SetRefFrame(FConstraintInstance *this,Type param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  TVector<double> *pTVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  Type local_res10 [6];
  TTransform<double> *local_88;
  Type *local_80;
  undefined1 local_78 [112];
  
  dVar2 = (param_2->Translation).XY.m128d_f64[0];
  dVar3 = (param_2->Translation).XY.m128d_f64[1];
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  local_res10[0] = param_1;
  if (param_1 == Frame1) {
    (this->Pos1).field0_0x0._s_0.X = dVar2;
    (this->Pos1).field0_0x0._s_0.Y = dVar3;
    (this->Pos1).field0_0x0._s_0.Z = dVar1;
    auVar5 = ___xmm_3ff00000000000000000000000000000;
    auVar8 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    auVar7 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
    auVar11 = blendpd(auVar7,auVar8,2);
    dVar26 = __xmm_00000000000000003ff0000000000000._8_8_;
    dVar1 = auVar8._0_8_;
    local_78._16_8_ = 0.0;
    auVar22._0_8_ =
         dVar26 * auVar7._0_8_ - auVar7._8_8_ * (double)__xmm_00000000000000003ff0000000000000;
    auVar22._8_8_ = auVar7._8_8_ * 0.0 - dVar1 * dVar26;
    auVar7 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
    auVar13._0_8_ = auVar7._0_8_ * dVar1 - auVar11._0_8_ * 0.0;
    auVar13._8_8_ = auVar7._8_8_ * auVar8._8_8_ - auVar11._8_8_ * 0.0;
    auVar7 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar11 = blendpd(auVar22,auVar13,2);
    auVar23._0_8_ = auVar11._0_8_ + auVar11._0_8_;
    auVar23._8_8_ = auVar11._8_8_ + auVar11._8_8_;
    dVar2 = auVar22._8_8_ + auVar22._8_8_;
    dVar3 = auVar13._0_8_ + auVar13._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar17._8_4_ = SUB84(dVar3,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar21;
    auVar12._8_4_ = SUB84(dVar3,0);
    auVar12._0_8_ = dVar2;
    auVar12._12_4_ = uVar21;
    auVar13 = blendpd(auVar12,auVar23,2);
    auVar18._0_8_ = auVar17._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar2;
    auVar18._8_8_ = auVar23._0_8_ * auVar7._8_8_ - dVar1 * dVar3;
    auVar7 = blendpd(auVar7,auVar8,2);
    auVar11._8_4_ = SUB84(auVar18._8_8_,0);
    auVar11._0_8_ = auVar18._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
    auVar14._0_8_ = auVar13._0_8_ * dVar1 - auVar7._0_8_ * auVar23._0_8_;
    auVar14._8_8_ = auVar13._8_8_ * auVar8._8_8_ - auVar7._8_8_ * auVar23._8_8_;
    dVar1 = dVar3 * dVar4 + dVar26 + auVar14._0_8_;
    auVar7 = blendpd(auVar18,auVar14,2);
    auVar8._8_4_ = SUB84(dVar1,0);
    auVar8._0_8_ = dVar2 * dVar4 + (double)__xmm_00000000000000003ff0000000000000 + auVar11._8_8_;
    auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&(this->PriAxis1).field0_0x0 = auVar8;
    (this->PriAxis1).field0_0x0._s_0.Z = auVar23._0_8_ * dVar4 + auVar7._0_8_;
    auVar8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar7 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar26 = auVar5._8_8_;
    dVar1 = auVar7._0_8_;
    auVar13 = blendpd(auVar8,auVar7,2);
    auVar24._0_8_ = dVar26 * auVar8._0_8_ - auVar8._8_8_ * auVar5._0_8_;
    auVar24._8_8_ = auVar8._8_8_ * 0.0 - dVar1 * dVar26;
    auVar8 = blendpd(auVar5,ZEXT816(0),2);
    auVar9._0_8_ = auVar8._0_8_ * dVar1 - auVar13._0_8_ * 0.0;
    auVar9._8_8_ = auVar8._8_8_ * auVar7._8_8_ - auVar13._8_8_ * 0.0;
    dVar2 = auVar24._8_8_ + auVar24._8_8_;
    dVar3 = auVar9._0_8_ + auVar9._0_8_;
    uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar13 = blendpd(auVar24,auVar9,2);
    auVar8 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar19._8_4_ = SUB84(dVar3,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar21;
    auVar15._8_4_ = SUB84(dVar3,0);
    auVar15._0_8_ = dVar2;
    auVar15._12_4_ = uVar21;
    auVar25._0_8_ = auVar13._0_8_ + auVar13._0_8_;
    auVar25._8_8_ = auVar13._8_8_ + auVar13._8_8_;
    auVar13 = blendpd(auVar15,auVar25,2);
    auVar20._0_8_ = auVar19._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar2;
    auVar20._8_8_ = auVar25._0_8_ * auVar8._8_8_ - dVar1 * dVar3;
    auVar10._8_4_ = SUB84(auVar20._8_8_,0);
    auVar10._0_8_ = auVar20._0_8_;
    auVar10._12_4_ = (int)((ulonglong)auVar20._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar7,2);
    auVar16._0_8_ = auVar13._0_8_ * dVar1 - auVar8._0_8_ * auVar25._0_8_;
    auVar16._8_8_ = auVar13._8_8_ * auVar7._8_8_ - auVar8._8_8_ * auVar25._8_8_;
    auVar8 = blendpd(auVar20,auVar16,2);
    dVar1 = dVar3 * dVar4 + dVar26 + auVar16._0_8_;
    auVar7._8_4_ = SUB84(dVar1,0);
    auVar7._0_8_ = dVar2 * dVar4 + auVar5._0_8_ + auVar10._8_8_;
    auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&(this->SecAxis1).field0_0x0 = auVar7;
    (this->SecAxis1).field0_0x0._s_0.Z = auVar25._0_8_ * dVar4 + auVar8._0_8_;
  }
  else {
    (this->Pos2).field0_0x0._s_0.X = dVar2;
    (this->Pos2).field0_0x0._s_0.Y = dVar3;
    (this->Pos2).field0_0x0._s_0.Z = dVar1;
    pTVar6 = UE::Math::TTransform<double>::GetUnitAxis(param_2,(TVector<double> *)local_78,X);
    dVar1 = (pTVar6->field0_0x0)._s_0.Y;
    (this->PriAxis2).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
    (this->PriAxis2).field0_0x0._s_0.Y = dVar1;
    (this->PriAxis2).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
    pTVar6 = UE::Math::TTransform<double>::GetUnitAxis(param_2,(TVector<double> *)local_78,Y);
    dVar1 = (pTVar6->field0_0x0)._s_0.Y;
    (this->SecAxis2).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
    (this->SecAxis2).field0_0x0._s_0.Y = dVar1;
    (this->SecAxis2).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  }
  local_80 = local_res10;
  local_78._8_8_ = &local_88;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FConstraintInstance::SetRefFrame'::__l2::<lambda_1>,void,FPhysicsConstraintReference_Chaos_const_&>
       ::Call;
  local_88 = param_2;
  FPhysInterface_Chaos::ExecuteOnUnbrokenConstraintReadWrite
            ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
             (TFunctionRef<void___cdecl(FPhysicsConstraintReference_Chaos_const_&)> *)local_78);
  return;
}

// SetRefOrientation @ 1482ae6c0

void __thiscall
FConstraintInstance::SetRefOrientation
          (FConstraintInstance *this,Type param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  Type local_res10 [6];
  double local_58;
  double dStack_50;
  double local_48;
  FScopedSceneLock_Chaos local_40;
  TVector<double> *local_28;
  TVector<double> *local_20;
  double *local_18;
  Type *local_10;
  
  if (param_1 == Frame1) {
    local_58 = (this->Pos1).field0_0x0._s_0.X;
    dStack_50 = (this->Pos1).field0_0x0._s_0.Y;
    local_48 = (this->Pos1).field0_0x0._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (this->PriAxis1).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->PriAxis1).field0_0x0._s_0.Y = dVar2;
    (this->PriAxis1).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    (this->SecAxis1).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->SecAxis1).field0_0x0._s_0.Y = dVar2;
    (this->SecAxis1).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  else {
    local_58 = (this->Pos2).field0_0x0._s_0.X;
    dStack_50 = (this->Pos2).field0_0x0._s_0.Y;
    local_48 = (this->Pos2).field0_0x0._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (this->PriAxis2).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    (this->PriAxis2).field0_0x0._s_0.Y = dVar2;
    (this->PriAxis2).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar2 = (param_3->field0_0x0)._s_0.Y;
    (this->SecAxis2).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    (this->SecAxis2).field0_0x0._s_0.Y = dVar2;
    (this->SecAxis2).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  }
  local_18 = &local_58;
  plVar1 = &this->_padding_;
  local_10 = local_res10;
  local_res10[0] = param_1;
  local_28 = param_2;
  local_20 = param_3;
  bVar3 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar1);
  if (!bVar3) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_40,(FPhysicsConstraintReference_Chaos *)plVar1,Write);
    `FConstraintInstance::SetRefOrientation'::__l2::<lambda_1>::operator()
              (&local_28,(FPhysicsConstraintReference_Chaos *)plVar1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_40);
  }
  return;
}

// SetRefPosition @ 1482ae7d0

void __thiscall
FConstraintInstance::SetRefPosition(FConstraintInstance *this,Type param_1,TVector<double> *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  Type local_res10 [6];
  Type *local_38;
  TVector<double> *local_30;
  FScopedSceneLock_Chaos local_28;
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  if (param_1 == Frame1) {
    (this->Pos1).field0_0x0._s_0.X = dVar2;
    (this->Pos1).field0_0x0._s_0.Y = dVar3;
    (this->Pos1).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  else {
    (this->Pos2).field0_0x0._s_0.X = dVar2;
    (this->Pos2).field0_0x0._s_0.Y = dVar3;
    (this->Pos2).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  }
  plVar1 = &this->_padding_;
  local_38 = local_res10;
  local_res10[0] = param_1;
  local_30 = param_2;
  bVar4 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)plVar1);
  if (!bVar4) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)plVar1,Write);
    `FConstraintInstance::SetRefPosition'::__l2::<lambda_1>::operator()
              (&local_38,(FPhysicsConstraintReference_Chaos *)plVar1);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// SetShockPropagationParams @ 1482ae8c0

void __thiscall
FConstraintInstance::SetShockPropagationParams(FConstraintInstance *this,bool param_1,float param_2)

{
  longlong *this_00;
  undefined1 *puVar1;
  bool bVar2;
  FScopedSceneLock_Chaos local_28;
  
  (this->ProfileInstance).bEnableShockPropagation = '\0';
  this_00 = &this->_padding_;
  (this->ProfileInstance).ShockPropagationAlpha = param_2;
  puVar1 = &(this->ProfileInstance).field_0x80;
  *puVar1 = *puVar1 | param_1 << 2;
  bVar2 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar2) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)this_00,Write);
    FChaosEngineInterface::SetShockPropagationEnabled_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)this_00,param_1,param_2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// TermConstraint @ 1482b40d0

void __thiscall FConstraintInstance::TermConstraint(FConstraintInstance *this)

{
  longlong *this_00;
  bool bVar1;
  FPhysicsConstraintReference_Chaos local_res8 [4];
  FScopedSceneLock_Chaos local_28;
  
  this_00 = &this->_padding_;
  bVar1 = FPhysicsConstraintReference_Chaos::IsValid((FPhysicsConstraintReference_Chaos *)this_00);
  if (bVar1) {
    local_res8[0].Constraint = (FConstraintBase *)*this_00;
    bVar1 = FPhysicsConstraintReference_Chaos::IsValid(local_res8);
    if (bVar1) {
      FScopedSceneLock_Chaos::FScopedSceneLock_Chaos(&local_28,local_res8,Write);
      FChaosEngineInterface::ReleaseConstraint((FPhysicsConstraintReference_Chaos *)this_00);
      FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
    }
  }
  return;
}

// UpdateAngularLimit @ 1482b70d0

void __thiscall FConstraintInstance::UpdateAngularLimit(FConstraintInstance *this)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FConeConstraint::UpdateConeLimit_AssumesLocked
              (&(this->ProfileInstance).ConeLimit,
               (FPhysicsConstraintReference_Chaos *)&this->_padding_,this->AverageMass);
    FTwistConstraint::UpdateTwistLimit_AssumesLocked
              (&(this->ProfileInstance).TwistLimit,
               (FPhysicsConstraintReference_Chaos *)&this->_padding_,this->AverageMass);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// UpdateAverageMass_AssumesLocked @ 1482b7150

void __thiscall
FConstraintInstance::UpdateAverageMass_AssumesLocked
          (FConstraintInstance *this,FPhysicsObject *param_1,FPhysicsObject *param_2)

{
  byte bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  FReadPhysicsObjectInterface<0> local_res8 [8];
  FPhysicsObject *local_res10;
  FPhysicsObject *local_res18;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_28 [2];
  
  fVar4 = 0.0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res8[0] = FPhysicsObjectExternalInterface::GetRead_AssumesLocked();
  local_28[0].ArrayNum = 1;
  local_28[0].DataPtr = &local_res10;
  bVar1 = Chaos::FReadPhysicsObjectInterface<0>::AreAllRigidBody(local_res8,local_28);
  if ((bool)bVar1) {
    local_28[0].DataPtr = &local_res10;
    local_28[0].ArrayNum = 1;
    fVar4 = Chaos::FReadPhysicsObjectInterface<0>::GetMass(local_res8,local_28);
  }
  local_28[0].ArrayNum = 1;
  local_28[0].DataPtr = &local_res18;
  bVar2 = Chaos::FReadPhysicsObjectInterface<0>::AreAllRigidBody(local_res8,local_28);
  if (bVar2) {
    local_28[0].ArrayNum = 1;
    local_28[0].DataPtr = &local_res18;
    fVar3 = Chaos::FReadPhysicsObjectInterface<0>::GetMass(local_res8,local_28);
    fVar4 = fVar4 + fVar3;
    bVar1 = bVar1 + 1;
  }
  if (1 < bVar1) {
    fVar4 = fVar4 / (float)bVar1;
  }
  this->AverageMass = fVar4;
  return;
}

// UpdateBreakable @ 1482b7440

void __thiscall FConstraintInstance::UpdateBreakable(FConstraintInstance *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    fVar2 = __real_7f7fffff;
    if ((this->ProfileInstance).bLinearBreakable != 0) {
      fVar2 = (this->ProfileInstance).LinearBreakThreshold;
    }
    fVar3 = __real_7f7fffff;
    if ((this->ProfileInstance).bAngularBreakable != '\0') {
      fVar3 = (this->ProfileInstance).AngularBreakThreshold;
    }
    FChaosEngineInterface::SetBreakForces_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,fVar2,fVar3);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// UpdateContactTransferScale @ 1482b7830

void __thiscall FConstraintInstance::UpdateContactTransferScale(FConstraintInstance *this)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    FChaosEngineInterface::SetContactTransferScale_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
               (this->ProfileInstance).ContactTransferScale);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// UpdateDriveTarget @ 1482b78b0

void __thiscall FConstraintInstance::UpdateDriveTarget(FConstraintInstance *this)

{
  bool bVar1;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    bVar1 = FPhysicsConstraintReference_Chaos::IsValid
                      ((FPhysicsConstraintReference_Chaos *)&this->_padding_);
    if (bVar1) {
      FPhysInterface_Chaos::UpdateLinearDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
                 &(this->ProfileInstance).LinearDrive,false);
      FPhysInterface_Chaos::UpdateAngularDrive_AssumesLocked
                ((FPhysicsConstraintReference_Chaos *)&this->_padding_,
                 &(this->ProfileInstance).AngularDrive,false);
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// UpdateLinearLimit @ 1482bcdf0

void __thiscall FConstraintInstance::UpdateLinearLimit(FConstraintInstance *this)

{
  bool bVar1;
  float fVar2;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    fVar2 = __real_3f800000;
    if (this->bScaleLinearLimits != 0) {
      fVar2 = this->LastKnownScale;
    }
    FLinearConstraint::UpdateLinearLimit_AssumesLocked
              (&(this->ProfileInstance).LinearLimit,
               (FPhysicsConstraintReference_Chaos *)&this->_padding_,this->AverageMass,fVar2);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// UpdatePlasticity @ 1482bd200

void __thiscall FConstraintInstance::UpdatePlasticity(FConstraintInstance *this)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  FScopedSceneLock_Chaos local_28;
  
  bVar1 = FChaosEngineInterface::IsBroken((FPhysicsConstraintReference_Chaos *)&this->_padding_);
  if (!bVar1) {
    FScopedSceneLock_Chaos::FScopedSceneLock_Chaos
              (&local_28,(FPhysicsConstraintReference_Chaos *)&this->_padding_,Write);
    fVar2 = __real_7f7fffff;
    if ((this->ProfileInstance).bLinearPlasticity != '\0') {
      fVar2 = (this->ProfileInstance).LinearPlasticityThreshold;
    }
    fVar3 = __real_7f7fffff;
    if ((bool)(this->ProfileInstance).bAngularPlasticity) {
      fVar3 = (this->ProfileInstance).AngularPlasticityThreshold * __real_3c8efa35;
    }
    FChaosEngineInterface::SetPlasticityLimits_AssumesLocked
              ((FPhysicsConstraintReference_Chaos *)&this->_padding_,fVar2,fVar3,
               (uint)(this->ProfileInstance).LinearPlasticityType.Value);
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28);
  }
  return;
}

// DrawConstraintImp @ 1482f5290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FConstraintInstance::DrawConstraintImp
          (FConstraintInstance *this,FPDIOrCollector *param_1,float param_2,float param_3,
          bool param_4,bool param_5,TTransform<double> *param_6,TTransform<double> *param_7,
          bool param_8,bool param_9)

{
  uchar uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  double dVar9;
  bool bVar10;
  bool bVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  FPrimitiveDrawInterface *pFVar20;
  TMatrix<double> *pTVar21;
  TScaleMatrix<double> *pTVar22;
  FMaterialRenderProxy *pFVar23;
  TVector<double> *pTVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auStackY_db8 [32];
  TVector<double>_u_0 local_d60;
  TVector<double>_u_0 local_d48;
  undefined8 local_d30;
  float local_d28;
  undefined4 local_d24;
  float local_d20;
  float local_d1c;
  float local_d18;
  undefined4 local_d14;
  float local_d10;
  float local_d0c;
  float local_d08;
  float local_d04;
  float local_d00;
  float local_cfc;
  float local_cf8;
  float local_cf4;
  double local_cf0;
  double local_ce8;
  double local_ce0;
  TVector<double>_u_0 local_cd8;
  TVector<double>_u_0 local_cc0;
  TVector<double>_u_0 local_ca8;
  TVector<double>_u_0 local_c90;
  TVector<double>_u_0 local_c78;
  TVector<double>_u_0 local_c60;
  TVector<double>_u_0 local_c48;
  TVector<double>_u_0 local_c30;
  TVector<double>_u_0 local_c18;
  TVector<double>_u_0 local_c00;
  TVector<double>_u_0 local_be8;
  TVector<double>_u_0 local_bd0;
  TVector<double>_u_0 local_bb8;
  TVector<double>_u_0 local_ba0;
  TVector<double>_u_0 local_b88;
  TVector<double>_u_0 local_b70;
  TVector<double>_u_0 local_b58;
  TVector<double>_u_0 local_b40;
  double local_b28;
  double local_b20;
  double local_b18;
  double local_b10;
  undefined1 local_b08 [16];
  double local_af8;
  double dStack_af0;
  TVector<double>_u_0 local_ae8;
  TVector<double>_u_0 local_ad0;
  TVector<double>_u_0 local_ab8;
  TVector<double>_u_0 local_aa0;
  TVector<double>_u_0 local_a88;
  TVector<double>_u_0 local_a70;
  TVector<double>_u_0 local_a58;
  TVector<double>_u_0 local_a40;
  TVector<double>_u_0 local_a28;
  TVector<double>_u_0 local_a10;
  TVector<double>_u_0 local_9f8;
  TVector<double>_u_0 local_9e0;
  TVector<double>_u_0 local_9c8;
  TVector<double>_u_0 local_9b0;
  TVector<double>_u_0 local_998;
  TVector<double>_u_0 local_980;
  TVector<double>_u_0 local_968;
  TVector<double>_u_0 local_950;
  TVector<double>_u_0 local_938;
  TVector<double>_u_0 local_920;
  TVector<double>_u_0 local_908;
  TVector<double>_u_0 local_8f0;
  TVector<double>_u_0 local_8d8;
  double local_8c0;
  double dStack_8b8;
  double local_8b0;
  undefined1 local_8a8 [16];
  double local_898;
  double local_890;
  undefined1 local_888 [32];
  undefined1 local_868 [32];
  double local_848;
  double dStack_840;
  double local_838;
  TTransform<double> local_828;
  undefined1 local_7c8 [16];
  double local_7b8;
  double dStack_7b0;
  TVector<double> local_7a8;
  TVector<double> local_790;
  TVector<double> local_778;
  TVector<double> local_760;
  TVector<double> local_748;
  TVector<double> local_730;
  TVector<double> local_718;
  TVector<double> local_700;
  TVector<double> local_6e8;
  TVector<double> local_6d0;
  TTransform<double> local_6b8;
  TVector<double> local_658;
  TVector<double> local_640 [5];
  TVector<double> local_5c8;
  TTransform<double> local_5a8;
  TTransform<double> local_548;
  TMatrix<double> local_4e8;
  TMatrix<double> local_468;
  TMatrix<double> local_3e8;
  TMatrix<double> local_368;
  TMatrix<double> local_2e8;
  TScaleMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_db8;
  pFVar20 = param_1->PDI;
  if (pFVar20 == (FPrimitiveDrawInterface *)0x0) {
    pFVar20 = FMeshElementCollector::GetPDI(param_1->Collector,param_1->ViewIndex);
  }
  if (((((GEngine->ConstraintLimitMaterialX).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0)
       || ((GEngine->ConstraintLimitMaterialY).field0_0x0.DebugPtr ==
           (UMaterialInstanceDynamic *)0x0)) ||
      ((GEngine->ConstraintLimitMaterialZ).field0_0x0.DebugPtr == (UMaterialInstanceDynamic *)0x0))
     && (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("GEngine->ConstraintLimitMaterialX && GEngine->ConstraintLimitMaterialY && GEngine->ConstraintLimitMaterialZ"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysDrawing.cpp"
                             ,0x674,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    LimitMaterialX = (UMaterialInterface *)(GEngine->ConstraintLimitMaterialX).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    LimitMaterialXAxis =
         (UMaterialInterface *)(GEngine->ConstraintLimitMaterialXAxis).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    LimitMaterialY = (UMaterialInterface *)(GEngine->ConstraintLimitMaterialY).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    LimitMaterialYAxis =
         (UMaterialInterface *)(GEngine->ConstraintLimitMaterialYAxis).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    LimitMaterialZ = (UMaterialInterface *)(GEngine->ConstraintLimitMaterialZ).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS4);
  }
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    LimitMaterialZAxis =
         (UMaterialInterface *)(GEngine->ConstraintLimitMaterialZAxis).field0_0x0.DebugPtr;
    _Init_thread_footer(&::_TSS5);
  }
  dVar18 = _UNK_150689518;
  dVar17 = ___xmm_00000000000000003ff0000000000000;
  fVar16 = __real_3c8efa35;
  dVar15 = _UNK_15061cbc8;
  dVar14 = ___xmm_3ff00000000000000000000000000000;
  dVar12 = __real_3ff0000000000000;
  local_d60._s_0.X = (param_6->Translation).XY.m128d_f64[0];
  local_d60._s_0.Y = (param_6->Translation).XY.m128d_f64[1];
  local_d60._s_0.Z = (param_6->Translation).ZW.m128d_f64[0];
  local_d48._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
  local_d48._s_0.X = (param_7->Translation).XY.m128d_f64[0];
  local_d48._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
  fVar50 = __real_40800000;
  if (param_5) {
    fVar50 = __real_41200000;
  }
  fVar50 = param_2 * fVar50;
  if ((param_8) && (!param_5)) {
    local_d30 = (FMeshElementCollector *)
                CONCAT44(FLinearColor::sRGBToLinearTable[0],FLinearColor::sRGBToLinearTable[0xff]);
    local_8b0 = (param_6->Translation).ZW.m128d_f64[0];
    local_d28 = FLinearColor::sRGBToLinearTable[0xff];
    local_8c0 = (param_6->Translation).XY.m128d_f64[0];
    dStack_8b8 = (param_6->Translation).XY.m128d_f64[1];
    local_d24 = 0x3f800000;
    (**(code **)(pFVar20->_padding_ + 0x40))(pFVar20,&local_8c0,&local_d30);
    local_d20 = FLinearColor::sRGBToLinearTable[0xff];
    local_d1c = FLinearColor::sRGBToLinearTable[0];
    local_848 = (param_7->Translation).XY.m128d_f64[0];
    dStack_840 = (param_7->Translation).XY.m128d_f64[1];
    local_d18 = FLinearColor::sRGBToLinearTable[0xff];
    local_838 = (param_7->Translation).ZW.m128d_f64[0];
    local_d14 = 0x3f800000;
    (**(code **)(pFVar20->_padding_ + 0x40))(pFVar20,&local_848,&local_d20);
    return;
  }
  fVar48 = __real_3dcccccd;
  if (!param_4) goto LAB_1482f5f69;
  bVar11 = false;
  bVar10 = false;
  bVar19 = false;
  if (param_9) {
    local_b18 = (param_6->Rotation).ZW.m128d_f64[0];
    local_b10 = (param_6->Rotation).ZW.m128d_f64[1];
    local_7b8 = (param_7->Rotation).ZW.m128d_f64[0];
    dStack_7b0 = (param_7->Rotation).ZW.m128d_f64[1];
    local_b28 = (param_6->Rotation).XY.m128d_f64[0];
    local_b20 = (param_6->Rotation).XY.m128d_f64[1];
    local_7c8 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
    auVar8._4_8_ = dStack_7b0;
    auVar8._0_4_ = local_7c8._4_4_;
    auVar41._0_8_ = auVar8._0_8_ << 0x20;
    auVar41._8_4_ = local_7c8._8_4_;
    auVar41._12_4_ = local_7c8._12_4_;
    dVar25 = __real_bff0000000000000;
    if (0.0 <= local_b10 * dStack_7b0 + local_b18 * local_7b8 +
               local_b20 * auVar41._8_8_ + local_b28 * local_7c8._0_8_) {
      dVar25 = __real_3ff0000000000000;
    }
    local_b28 = local_b28 * dVar25;
    local_b20 = local_b20 * dVar25;
    local_b18 = local_b18 * dVar25;
    local_b10 = local_b10 * dVar25;
    Chaos::FPBDJointUtilities::GetSwingTwistAngles
              ((TRotation<double,3> *)local_7c8,(TRotation<double,3> *)&local_b28,&local_cf0,
               &local_ce8,&local_ce0);
    if (((this->ProfileInstance).TwistLimit.TwistMotion.Value != '\x01') ||
       (bVar11 = true,
       (double)CONCAT44((uint)((ulonglong)local_cf0 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_cf0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       (double)((this->ProfileInstance).TwistLimit.TwistLimitDegrees * fVar16))) {
      bVar11 = false;
    }
    if (((this->ProfileInstance).ConeLimit.Swing1Motion.Value != '\x01') ||
       (bVar10 = true,
       (double)CONCAT44((uint)((ulonglong)local_ce8 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_ce8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       (double)((this->ProfileInstance).ConeLimit.Swing1LimitDegrees * fVar16))) {
      bVar10 = false;
    }
    bVar19 = false;
    if (((this->ProfileInstance).ConeLimit.Swing2Motion.Value == '\x01') &&
       ((double)((this->ProfileInstance).ConeLimit.Swing2LimitDegrees * fVar16) <
        (double)CONCAT44((uint)((ulonglong)local_ce0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_ce0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      bVar19 = true;
    }
  }
  fVar49 = __real_3b808081;
  fVar47 = __real_40490fdb;
  fVar13 = __real_3f666666;
  uVar1 = (this->ProfileInstance).ConeLimit.Swing1Motion.Value;
  if (uVar1 == '\x02') {
    if ((this->ProfileInstance).ConeLimit.Swing2Motion.Value != '\x02') {
LAB_1482f59b3:
      local_6b8.Rotation.XY.m128d_f64[0] = (param_7->Rotation).XY.m128d_f64[0];
      local_6b8.Rotation.XY.m128d_f64[1] = (param_7->Rotation).XY.m128d_f64[1];
      local_6b8.Rotation.ZW.m128d_f64[0] = (param_7->Rotation).ZW.m128d_f64[0];
      local_6b8.Rotation.ZW.m128d_f64[1] = (param_7->Rotation).ZW.m128d_f64[1];
      local_6b8.Translation.XY.m128d_f64[0] = (param_7->Translation).XY.m128d_f64[0];
      local_6b8.Translation.XY.m128d_f64[1] = (param_7->Translation).XY.m128d_f64[1];
      local_6b8.Translation.ZW.m128d_f64[0] = (param_7->Translation).ZW.m128d_f64[0];
      local_6b8.Translation.ZW.m128d_f64[1] = (param_7->Translation).ZW.m128d_f64[1];
      local_6b8.Scale3D.XY.m128d_f64[0] = (param_7->Scale3D).XY.m128d_f64[0];
      local_6b8.Scale3D.XY.m128d_f64[1] = (param_7->Scale3D).XY.m128d_f64[1];
      local_6b8.Scale3D.ZW.m128d_f64[0] = (param_7->Scale3D).ZW.m128d_f64[0];
      local_6b8.Scale3D.ZW.m128d_f64[1] = (param_7->Scale3D).ZW.m128d_f64[1];
      fVar48 = __real_40490fdb;
      if (uVar1 != '\0') {
        if (uVar1 == '\x02') {
          fVar48 = 0.0;
        }
        else {
          fVar48 = (this->ProfileInstance).ConeLimit.Swing1LimitDegrees * fVar16;
        }
      }
      uVar1 = (this->ProfileInstance).ConeLimit.Swing2Motion.Value;
      fVar49 = __real_40490fdb;
      if (uVar1 != '\0') {
        if (uVar1 == '\x02') {
          fVar49 = 0.0;
        }
        else {
          fVar49 = (this->ProfileInstance).ConeLimit.Swing2LimitDegrees * fVar16;
        }
      }
      local_c90._s_0.X = (double)(fVar50 * __real_3f666666);
      local_c90._s_0.Y = local_c90._s_0.X;
      local_c90._s_0.Z = local_c90._s_0.X;
      pTVar22 = UE::Math::TScaleMatrix<double>::TScaleMatrix<double>
                          (&local_268,(TVector<double> *)&local_c90._s_0);
      pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_6b8,&local_1e8);
      VectorMatrixMultiply(&local_3e8,(TMatrix<double> *)pTVar22,pTVar21);
      pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialX->_padding_ + 0x310))();
      FPDIOrCollector::DrawCone
                (param_1,&local_3e8,fVar48,fVar49,0x28,&JointLimitColor,pFVar23,SDPG_World);
      fVar49 = __real_3b808081;
      goto LAB_1482f5ae1;
    }
  }
  else {
    if ((uVar1 != '\0') || ((this->ProfileInstance).ConeLimit.Swing2Motion.Value != '\0'))
    goto LAB_1482f59b3;
    local_d30 = param_1->Collector;
    dVar25 = (double)(fVar50 * __real_3f666666);
    uVar46 = (undefined4)((ulonglong)dVar25 >> 0x20);
    if (local_d30 == (FMeshElementCollector *)0x0) {
      pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialX->_padding_ + 0x310))();
      local_ca8._8_4_ = SUB84(dVar25,0);
      local_ca8._0_8_ = dVar25;
      local_ca8._12_4_ = uVar46;
      local_ca8._16_8_ = dVar25;
      DrawSphere(pFVar20,(TVector<double> *)&local_d60._s_0,&UE::Math::TRotator<double>::ZeroRotator
                 ,(TVector<double> *)&local_ca8._s_0,0x28,0x28,pFVar23,'\0',false);
    }
    else {
      iVar2 = param_1->ViewIndex;
      pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialX->_padding_ + 0x310))();
      local_cc0._8_4_ = SUB84(dVar25,0);
      local_cc0._0_8_ = dVar25;
      local_cc0._12_4_ = uVar46;
      local_cc0._16_8_ = dVar25;
      GetSphereMesh((TVector<double> *)&local_d60._s_0,(TVector<double> *)&local_cc0._s_0,0x28,0x28,
                    pFVar23,'\0',false,iVar2,local_d30);
    }
LAB_1482f5ae1:
    local_828.Rotation.XY.m128d_f64[0] = (param_6->Rotation).XY.m128d_f64[0];
    local_828.Rotation.XY.m128d_f64[1] = (param_6->Rotation).XY.m128d_f64[1];
    local_828.Rotation.ZW.m128d_f64[0] = (param_6->Rotation).ZW.m128d_f64[0];
    local_828.Rotation.ZW.m128d_f64[1] = (param_6->Rotation).ZW.m128d_f64[1];
    local_828.Scale3D.XY.m128d_f64[0] = (param_6->Scale3D).XY.m128d_f64[0];
    local_828.Scale3D.XY.m128d_f64[1] = (param_6->Scale3D).XY.m128d_f64[1];
    local_828.Scale3D.ZW.m128d_f64[0] = (param_6->Scale3D).ZW.m128d_f64[0];
    local_828.Scale3D.ZW.m128d_f64[1] = (param_6->Scale3D).ZW.m128d_f64[1];
    local_828.Translation.XY.m128d_f64[0] = local_d48._s_0.X;
    local_828.Translation.XY.m128d_f64[1] = local_d48._s_0.Y;
    local_828.Translation.ZW.m128d_f64[0] = local_d48._s_0.Z;
    local_828.Translation.ZW.m128d_f64[1] = 0.0;
    pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialX->_padding_ + 0x310))();
    pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_828,&local_4e8);
    FPDIOrCollector::DrawArrow
              (param_1,pTVar21,fVar50,__real_3dcccccd,0x28,&JointLimitColor,pFVar23,SDPG_World);
    if ((bVar10) || (bVar19)) {
      local_d10 = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.R];
      local_d0c = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.G];
      local_d08 = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.B];
      local_ae8._s_0.X = (double)fVar50;
      local_d04 = (float)JointLimitsViolatedColor.field0_0x0._3_1_ * fVar49;
      local_ae8._8_16_ = ZEXT416(0);
      pTVar24 = UE::Math::TTransform<double>::TransformPosition
                          (&local_828,&local_658,(TVector<double> *)&local_ae8._s_0);
      (**(code **)(pFVar20->_padding_ + 0x40))(pFVar20,pTVar24,&local_d10);
    }
  }
  fVar48 = __real_3dcccccd;
  if ((this->ProfileInstance).TwistLimit.TwistMotion.Value != '\x02') {
    local_a88._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_a88._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_a88._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    local_ad0._s_0.Z = 0.0;
    local_ad0._s_0.X = dVar17;
    local_ad0._s_0.Y = dVar18;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_730,(TVector<double> *)&local_ad0._s_0);
    local_ab8._s_0.Z = dVar12;
    local_ab8._s_0.X = 0.0;
    local_ab8._s_0.Y = 0.0;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_718,(TVector<double> *)&local_ab8._s_0);
    local_aa0._s_0.Z = 0.0;
    local_aa0._s_0.X = dVar14;
    local_aa0._s_0.Y = dVar15;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_700,(TVector<double> *)&local_aa0._s_0);
    UE::Math::TTransform<double>::TTransform<double>
              (&local_548,&local_700,&local_718,&local_730,(TVector<double> *)&local_a88._s_0);
    local_890 = 0.0;
    local_888._0_8_ = 0;
    local_868._8_8_ = 0;
    local_898 = (double)(fVar50 * fVar13);
    local_b08 = ZEXT416(0);
    local_af8 = dVar14;
    dStack_af0 = dVar15;
    local_8a8 = local_b08;
    local_888._8_8_ = local_898;
    local_888._16_16_ = local_b08;
    local_868._0_8_ = local_898;
    local_868._16_16_ = local_b08;
    UE::Math::TMatrix<double>::TMatrix<double>
              (&local_368,(TPlane<double> *)local_868,(TPlane<double> *)local_888,
               (TPlane<double> *)local_8a8,(TPlane<double> *)local_b08);
    pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_548,&local_168);
    VectorMatrixMultiply(&local_2e8,&local_368,pTVar21);
    uVar1 = (this->ProfileInstance).TwistLimit.TwistMotion.Value;
    if (uVar1 != '\0') {
      if (uVar1 == '\x02') {
        fVar47 = 0.0;
      }
      else {
        fVar47 = (this->ProfileInstance).TwistLimit.TwistLimitDegrees * fVar16;
      }
    }
    pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialY->_padding_ + 0x310))();
    FPDIOrCollector::DrawCone
              (param_1,&local_2e8,fVar47,0.0,0x28,&JointLimitColor,pFVar23,SDPG_World);
    pTVar24 = UE::Math::TTransform<double>::GetUnitAxis(param_7,local_640,X);
    local_a70._s_0.Z = 0.0;
    local_a70._s_0.X = dVar14;
    local_a70._s_0.Y = dVar15;
    UE::Math::TTransform<double>::TransformVector
              (param_6,(TVector<double> *)&local_c78._s_0,(TVector<double> *)&local_a70._s_0);
    dVar25 = (local_c78._s_0.Y - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) *
             (pTVar24->field0_0x0)._s_0.Y +
             (local_c78._s_0.X - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) *
             (pTVar24->field0_0x0)._s_0.X +
             (local_c78._s_0.Z - UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) *
             (pTVar24->field0_0x0)._s_0.Z;
    local_c60._s_0.X = local_c78._s_0.X - dVar25 * (pTVar24->field0_0x0)._s_0.X;
    local_c60._s_0.Y = local_c78._s_0.Y - dVar25 * (pTVar24->field0_0x0)._s_0.Y;
    local_c60._s_0.Z = local_c78._s_0.Z - dVar25 * (pTVar24->field0_0x0)._s_0.Z;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_c60._s_0,(TVector<double> *)&local_cd8._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    local_a28._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_a28._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_a28._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    local_a58._s_0.Z = 0.0;
    local_a58._s_0.X = dVar17;
    local_a58._s_0.Y = dVar18;
    UE::Math::TTransform<double>::TransformVector
              (param_7,(TVector<double> *)&local_c48._s_0,(TVector<double> *)&local_a58._s_0);
    local_c30._s_0.X = local_cd8._s_0.Y * local_c48._s_0.Z - local_cd8._s_0.Z * local_c48._s_0.Y;
    local_c30._s_0.Z = local_cd8._s_0.X * local_c48._s_0.Y - local_cd8._s_0.Y * local_c48._s_0.X;
    local_c30._s_0.Y = local_cd8._s_0.Z * local_c48._s_0.X - local_cd8._s_0.X * local_c48._s_0.Z;
    local_a40._s_0.Z = 0.0;
    local_a40._s_0.X = dVar17;
    local_a40._s_0.Y = dVar18;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_6e8,(TVector<double> *)&local_a40._s_0);
    UE::Math::TTransform<double>::TTransform<double>
              (&local_5a8,(TVector<double> *)&local_cd8._s_0,&local_6e8,
               (TVector<double> *)&local_c30._s_0,(TVector<double> *)&local_a28._s_0);
    pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialYAxis->_padding_ + 0x310))();
    pTVar21 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_5a8,&local_468);
    fVar48 = __real_3dcccccd;
    FPDIOrCollector::DrawArrow
              (param_1,pTVar21,fVar50,__real_3dcccccd,0x28,&JointLimitColor,pFVar23,SDPG_World);
    if (bVar11) {
      local_d00 = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.R];
      local_cfc = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.G];
      local_cf8 = FLinearColor::sRGBToLinearTable[JointLimitsViolatedColor.field0_0x0._s_0.B];
      local_a10._s_0.X = (double)fVar50;
      local_cf4 = (float)JointLimitsViolatedColor.field0_0x0._3_1_ * fVar49;
      local_a10._8_16_ = ZEXT416(0);
      pTVar24 = UE::Math::TTransform<double>::TransformPosition
                          (&local_5a8,&local_5c8,(TVector<double> *)&local_a10._s_0);
      (**(code **)(pFVar20->_padding_ + 0x40))(pFVar20,pTVar24,&local_d00);
    }
  }
LAB_1482f5f69:
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialXAxis->_padding_ + 0x310))();
  local_9f8._s_0.Z = 0.0;
  local_9f8._s_0.X = dVar17;
  local_9f8._s_0.Y = dVar18;
  UE::Math::TTransform<double>::TransformVector
            (param_6,(TVector<double> *)&local_c18._s_0,(TVector<double> *)&local_9f8._s_0);
  dVar7 = (double)(fVar50 * fVar48);
  local_c00._s_0.X = local_c18._s_0.X * dVar7 + local_d60._s_0.X;
  local_c00._s_0.Y = local_c18._s_0.Y * dVar7 + local_d60._s_0.Y;
  local_c00._s_0.Z = local_c18._s_0.Z * dVar7 + local_d60._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d60._s_0,(TVector<double> *)&local_c00._s_0,fVar48,
             pFVar23,SDPG_World);
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialYAxis->_padding_ + 0x310))();
  local_9e0._s_0.Z = 0.0;
  local_9e0._s_0.X = dVar14;
  local_9e0._s_0.Y = dVar15;
  UE::Math::TTransform<double>::TransformVector
            (param_6,(TVector<double> *)&local_be8._s_0,(TVector<double> *)&local_9e0._s_0);
  local_bd0._s_0.X = local_be8._s_0.X * dVar7 + local_d60._s_0.X;
  local_bd0._s_0.Y = local_be8._s_0.Y * dVar7 + local_d60._s_0.Y;
  local_bd0._s_0.Z = local_be8._s_0.Z * dVar7 + local_d60._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d60._s_0,(TVector<double> *)&local_bd0._s_0,fVar48,
             pFVar23,SDPG_World);
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialZAxis->_padding_ + 0x310))();
  local_9c8._s_0.Z = dVar12;
  local_9c8._s_0.X = 0.0;
  local_9c8._s_0.Y = 0.0;
  UE::Math::TTransform<double>::TransformVector
            (param_6,(TVector<double> *)&local_bb8._s_0,(TVector<double> *)&local_9c8._s_0);
  local_ba0._s_0.X = local_bb8._s_0.X * dVar7 + local_d60._s_0.X;
  local_ba0._s_0.Y = local_bb8._s_0.Y * dVar7 + local_d60._s_0.Y;
  local_ba0._s_0.Z = local_bb8._s_0.Z * dVar7 + local_d60._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d60._s_0,(TVector<double> *)&local_ba0._s_0,fVar48,
             pFVar23,SDPG_World);
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialXAxis->_padding_ + 0x310))();
  auVar41 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
  dVar32 = auVar41._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  dVar9 = (param_7->Rotation).ZW.m128d_f64[1];
  dVar6 = (param_7->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar44 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar25 = (param_7->Scale3D).XY.m128d_f64[0] * dVar17;
  dVar5 = (param_7->Scale3D).XY.m128d_f64[1] * dVar18;
  uVar46 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar33 = blendpd(auVar26,auVar41,2);
  auVar51._8_4_ = SUB84(dVar5,0);
  auVar51._0_8_ = dVar25;
  auVar51._12_4_ = uVar46;
  auVar52._0_8_ = auVar51._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar25;
  auVar52._8_8_ = dVar6 * auVar26._8_8_ - dVar32 * dVar5;
  auVar34._8_4_ = SUB84(dVar5,0);
  auVar34._0_8_ = dVar25;
  auVar34._12_4_ = uVar46;
  auVar26._8_4_ = SUB84(dVar44,0);
  auVar26._0_8_ = dVar6;
  auVar26._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar26 = blendpd(auVar34,auVar26,2);
  auVar27._0_8_ = auVar26._0_8_ * dVar32 - auVar33._0_8_ * dVar6;
  auVar27._8_8_ = auVar26._8_8_ * auVar41._8_8_ - auVar33._8_8_ * dVar44;
  auVar26 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar33 = blendpd(auVar52,auVar27,2);
  dVar44 = auVar52._8_8_ + auVar52._8_8_;
  dVar45 = auVar27._0_8_ + auVar27._0_8_;
  auVar53._0_8_ = auVar33._0_8_ + auVar33._0_8_;
  auVar53._8_8_ = auVar33._8_8_ + auVar33._8_8_;
  auVar39._8_4_ = SUB84(dVar45,0);
  auVar39._0_8_ = dVar44;
  uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar39._12_4_ = uVar46;
  auVar35._8_4_ = SUB84(dVar45,0);
  auVar35._0_8_ = dVar44;
  auVar35._12_4_ = uVar46;
  auVar33 = blendpd(auVar35,auVar53,2);
  auVar40._0_8_ = auVar39._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar44;
  auVar40._8_8_ = auVar53._0_8_ * auVar26._8_8_ - dVar32 * dVar45;
  auVar28._8_4_ = SUB84(auVar40._8_8_,0);
  auVar28._0_8_ = auVar40._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar41,2);
  auVar36._0_8_ = auVar33._0_8_ * dVar32 - auVar26._0_8_ * auVar53._0_8_;
  auVar36._8_8_ = auVar33._8_8_ * auVar41._8_8_ - auVar26._8_8_ * auVar53._8_8_;
  auVar41 = blendpd(auVar40,auVar36,2);
  local_b88._s_0.Y = (dVar45 * dVar9 + dVar5 + auVar36._0_8_) * dVar7 + local_d48._s_0.Y;
  local_b88._s_0.X = (dVar44 * dVar9 + dVar25 + auVar28._8_8_) * dVar7 + local_d48._s_0.X;
  local_b88._s_0.Z = (auVar53._0_8_ * dVar9 + dVar6 + auVar41._0_8_) * dVar7 + local_d48._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d48._s_0,(TVector<double> *)&local_b88._s_0,
             __real_3dcccccd,pFVar23,SDPG_World);
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialYAxis->_padding_ + 0x310))();
  fVar50 = __real_3dcccccd;
  auVar41 = *(undefined1 (*) [16])(param_7->Rotation).ZW.m128d_f64;
  dVar32 = auVar41._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  dVar9 = (param_7->Rotation).ZW.m128d_f64[1];
  auVar34 = blendpd(auVar26,auVar41,2);
  dVar25 = dVar14 * (param_7->Scale3D).XY.m128d_f64[0];
  dVar5 = dVar15 * (param_7->Scale3D).XY.m128d_f64[1];
  uVar46 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = (param_7->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar44 = (param_7->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar54._8_4_ = SUB84(dVar5,0);
  auVar54._0_8_ = dVar25;
  auVar54._12_4_ = uVar46;
  auVar55._0_8_ = auVar54._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar25;
  auVar55._8_8_ = dVar6 * auVar26._8_8_ - dVar32 * dVar5;
  auVar29._8_4_ = SUB84(dVar5,0);
  auVar29._0_8_ = dVar25;
  auVar29._12_4_ = uVar46;
  auVar33._8_4_ = SUB84(dVar44,0);
  auVar33._0_8_ = dVar6;
  auVar33._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  auVar26 = blendpd(auVar29,auVar33,2);
  auVar30._0_8_ = auVar26._0_8_ * dVar32 - auVar34._0_8_ * dVar6;
  auVar30._8_8_ = auVar26._8_8_ * auVar41._8_8_ - auVar34._8_8_ * dVar44;
  auVar26 = *(undefined1 (*) [16])(param_7->Rotation).XY.m128d_f64;
  auVar33 = blendpd(auVar55,auVar30,2);
  dVar44 = auVar55._8_8_ + auVar55._8_8_;
  dVar45 = auVar30._0_8_ + auVar30._0_8_;
  auVar56._0_8_ = auVar33._0_8_ + auVar33._0_8_;
  auVar56._8_8_ = auVar33._8_8_ + auVar33._8_8_;
  auVar42._8_4_ = SUB84(dVar45,0);
  auVar42._0_8_ = dVar44;
  uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar42._12_4_ = uVar46;
  auVar37._8_4_ = SUB84(dVar45,0);
  auVar37._0_8_ = dVar44;
  auVar37._12_4_ = uVar46;
  auVar33 = blendpd(auVar37,auVar56,2);
  auVar43._0_8_ = auVar42._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar44;
  auVar43._8_8_ = auVar56._0_8_ * auVar26._8_8_ - dVar32 * dVar45;
  auVar31._8_4_ = SUB84(auVar43._8_8_,0);
  auVar31._0_8_ = auVar43._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar26 = blendpd(auVar26,auVar41,2);
  auVar38._0_8_ = auVar33._0_8_ * dVar32 - auVar26._0_8_ * auVar56._0_8_;
  auVar38._8_8_ = auVar33._8_8_ * auVar41._8_8_ - auVar26._8_8_ * auVar56._8_8_;
  auVar41 = blendpd(auVar43,auVar38,2);
  local_b70._s_0.Y = (dVar45 * dVar9 + dVar5 + auVar38._0_8_) * dVar7 + local_d48._s_0.Y;
  local_b70._s_0.X = (dVar44 * dVar9 + dVar25 + auVar31._8_8_) * dVar7 + local_d48._s_0.X;
  local_b70._s_0.Z = (auVar56._0_8_ * dVar9 + dVar6 + auVar41._0_8_) * dVar7 + local_d48._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d48._s_0,(TVector<double> *)&local_b70._s_0,
             __real_3dcccccd,pFVar23,SDPG_World);
  pFVar23 = (FMaterialRenderProxy *)(**(code **)(LimitMaterialZAxis->_padding_ + 0x310))();
  local_9b0._s_0.Z = dVar12;
  local_9b0._s_0.X = 0.0;
  local_9b0._s_0.Y = 0.0;
  UE::Math::TTransform<double>::TransformVector
            (param_7,(TVector<double> *)&local_b58._s_0,(TVector<double> *)&local_9b0._s_0);
  local_b40._s_0.X = local_b58._s_0.X * dVar7 + local_d48._s_0.X;
  local_b40._s_0.Y = local_b58._s_0.Y * dVar7 + local_d48._s_0.Y;
  local_b40._s_0.Z = local_b58._s_0.Z * dVar7 + local_d48._s_0.Z;
  FPDIOrCollector::DrawCylinder
            (param_1,(TVector<double> *)&local_d48._s_0,(TVector<double> *)&local_b40._s_0,fVar50,
             pFVar23,SDPG_World);
  dVar25 = __real_3fb999999999999a;
  uVar1 = (this->ProfileInstance).LinearLimit.XMotion.Value;
  if ((uVar1 == '\x02') ||
     ((uVar1 == '\x01' &&
      ((double)(this->ProfileInstance).LinearLimit.Limit < __real_3fb999999999999a)))) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  uVar1 = (this->ProfileInstance).LinearLimit.YMotion.Value;
  if ((uVar1 == '\x02') ||
     ((uVar1 == '\x01' &&
      ((double)(this->ProfileInstance).LinearLimit.Limit < __real_3fb999999999999a)))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  uVar1 = (this->ProfileInstance).LinearLimit.ZMotion.Value;
  if ((uVar1 == '\x02') ||
     ((uVar1 == '\x01' &&
      ((double)(this->ProfileInstance).LinearLimit.Limit < __real_3fb999999999999a)))) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  if (!bVar19) {
    if (((this->ProfileInstance).LinearLimit.XMotion.Value != '\x01') ||
       ((double)(this->ProfileInstance).LinearLimit.Limit < __real_3fb999999999999a)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    local_998._s_0.Z = dVar12;
    local_998._s_0.X = 0.0;
    local_998._s_0.Y = 0.0;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_6d0,(TVector<double> *)&local_998._s_0);
    local_980._s_0.Z = 0.0;
    local_980._s_0.X = dVar17;
    local_980._s_0.Y = dVar18;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_7a8,(TVector<double> *)&local_980._s_0);
    local_968._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_968._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_968._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    DrawLinearLimit(pFVar20,(TVector<double> *)&local_968._s_0,&local_7a8,&local_6d0,
                    (this->ProfileInstance).LinearLimit.Limit,bVar19,param_3);
  }
  if (!bVar10) {
    if (((this->ProfileInstance).LinearLimit.YMotion.Value != '\x01') ||
       ((double)(this->ProfileInstance).LinearLimit.Limit < dVar25)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    local_950._s_0.Z = dVar12;
    local_950._s_0.X = 0.0;
    local_950._s_0.Y = 0.0;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_790,(TVector<double> *)&local_950._s_0);
    local_938._s_0.Z = 0.0;
    local_938._s_0.X = dVar14;
    local_938._s_0.Y = dVar15;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_778,(TVector<double> *)&local_938._s_0);
    local_920._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_920._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_920._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    DrawLinearLimit(pFVar20,(TVector<double> *)&local_920._s_0,&local_778,&local_790,
                    (this->ProfileInstance).LinearLimit.Limit,bVar19,param_3);
  }
  if (!bVar11) {
    if (((this->ProfileInstance).LinearLimit.ZMotion.Value != '\x01') ||
       ((double)(this->ProfileInstance).LinearLimit.Limit < dVar25)) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    local_908._s_0.Z = 0.0;
    local_908._s_0.X = dVar17;
    local_908._s_0.Y = dVar18;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_760,(TVector<double> *)&local_908._s_0);
    local_8f0._s_0.Z = dVar12;
    local_8f0._s_0.X = 0.0;
    local_8f0._s_0.Y = 0.0;
    UE::Math::TTransform<double>::TransformVector
              (param_7,&local_748,(TVector<double> *)&local_8f0._s_0);
    local_8d8._s_0.X = (param_7->Translation).XY.m128d_f64[0];
    local_8d8._s_0.Y = (param_7->Translation).XY.m128d_f64[1];
    local_8d8._s_0.Z = (param_7->Translation).ZW.m128d_f64[0];
    DrawLinearLimit(pFVar20,(TVector<double> *)&local_8d8._s_0,&local_748,&local_760,
                    (this->ProfileInstance).LinearLimit.Limit,bVar19,param_3);
  }
  return;
}

// GetUsedMaterials @ 14830dc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FConstraintInstance::GetUsedMaterials
          (FConstraintInstance *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UMaterialInstanceDynamic>_u_0 local_res18 [2];
  
  local_res18[0] = (GEngine->ConstraintLimitMaterialX).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  local_res18[0] = (GEngine->ConstraintLimitMaterialXAxis).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  local_res18[0] = (GEngine->ConstraintLimitMaterialY).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  local_res18[0] = (GEngine->ConstraintLimitMaterialYAxis).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  local_res18[0] = (GEngine->ConstraintLimitMaterialZ).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  local_res18[0] = (GEngine->ConstraintLimitMaterialZAxis).field0_0x0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMaterialInterface_*>
            (param_1,(UMaterialInterface **)&local_res18[0].DebugPtr);
  return;
}

