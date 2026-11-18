// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 4

// StaticStruct @ 14defe2b0

UScriptStruct * __cdecl FIKRigGoal::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigGoal.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigGoal.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigGoal,(UObject *)pUVar1,L"IKRigGoal");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigGoal.OuterSingleton;
}

// FIKRigGoal @ 14df17a40

FIKRigGoal * __thiscall FIKRigGoal::FIKRigGoal(FIKRigGoal *this,UIKRigEffectorGoal *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  TQuat<double> local_28;
  
  this->Name = param_1->GoalName;
  this->BoneName = param_1->BoneName;
  this->TransformSource = Manual;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  dVar4 = (param_1->CurrentTransform).Translation.XY.m128d_f64[1];
  dVar3 = (param_1->CurrentTransform).Translation.ZW.m128d_f64[0];
  (this->Position).field0_0x0._s_0.X = (param_1->CurrentTransform).Translation.XY.m128d_f64[0];
  (this->Position).field0_0x0._s_0.Y = dVar4;
  (this->Position).field0_0x0._s_0.Z = dVar3;
  local_28.X = (param_1->CurrentTransform).Rotation.XY.m128d_f64[0];
  local_28.Y = (param_1->CurrentTransform).Rotation.XY.m128d_f64[1];
  local_28.Z = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[0];
  local_28.W = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_28,&this->Rotation);
  this->PositionAlpha = param_1->PositionAlpha;
  fVar2 = param_1->RotationAlpha;
  (this->FinalBlendedPosition).field0_0x0._s_0.X = 0.0;
  (this->FinalBlendedPosition).field0_0x0._s_0.Y = 0.0;
  (this->FinalBlendedPosition).field0_0x0._s_0.Z = 0.0;
  this->RotationAlpha = fVar2;
  this->PositionSpace = Component;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  this->RotationSpace = Component;
  (this->FinalBlendedRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->FinalBlendedRotation).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->FinalBlendedRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->FinalBlendedRotation).W = dVar3;
  this->bEnabled = true;
  return this;
}

// FIKRigGoal @ 14df17b10

FIKRigGoal * __thiscall FIKRigGoal::FIKRigGoal(FIKRigGoal *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->TransformSource = Manual;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = (double)uVar2;
  (this->Position).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar3;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->PositionAlpha = 1.0;
  this->RotationAlpha = 1.0;
  this->PositionSpace = Additive;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->RotationSpace = Additive;
  (this->FinalBlendedPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FinalBlendedPosition).field0_0x0._s_0.Y = (double)uVar2;
  (this->FinalBlendedPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->FinalBlendedRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->FinalBlendedRotation).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->FinalBlendedRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->FinalBlendedRotation).W = dVar3;
  this->bEnabled = true;
  return this;
}

// operator= @ 14df1e4b0

FIKRigGoal * __thiscall FIKRigGoal::operator=(FIKRigGoal *this,FIKRigGoal *param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  this->Name = param_1->Name;
  this->BoneName = param_1->BoneName;
  this->TransformSource = param_1->TransformSource;
  (this->SourceBone).BoneName = (param_1->SourceBone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->SourceBone).field_0x8;
  *(uint *)&(this->SourceBone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->SourceBone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->SourceBone).field_0x8 =
       ((param_1->SourceBone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->SourceBone).field_0x8;
  (this->SourceBone).CachedCompactPoseIndex = (param_1->SourceBone).CachedCompactPoseIndex;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar2;
  (this->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Yaw;
  (this->Rotation).Pitch = (param_1->Rotation).Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = (param_1->Rotation).Roll;
  this->PositionAlpha = param_1->PositionAlpha;
  this->RotationAlpha = param_1->RotationAlpha;
  this->PositionSpace = param_1->PositionSpace;
  this->RotationSpace = param_1->RotationSpace;
  dVar2 = (param_1->FinalBlendedPosition).field0_0x0._s_0.Y;
  (this->FinalBlendedPosition).field0_0x0._s_0.X = (param_1->FinalBlendedPosition).field0_0x0._s_0.X
  ;
  (this->FinalBlendedPosition).field0_0x0._s_0.Y = dVar2;
  (this->FinalBlendedPosition).field0_0x0._s_0.Z = (param_1->FinalBlendedPosition).field0_0x0._s_0.Z
  ;
  dVar2 = (param_1->FinalBlendedRotation).Y;
  (this->FinalBlendedRotation).X = (param_1->FinalBlendedRotation).X;
  (this->FinalBlendedRotation).Y = dVar2;
  dVar2 = (param_1->FinalBlendedRotation).W;
  (this->FinalBlendedRotation).Z = (param_1->FinalBlendedRotation).Z;
  (this->FinalBlendedRotation).W = dVar2;
  this->bEnabled = param_1->bEnabled;
  return this;
}

