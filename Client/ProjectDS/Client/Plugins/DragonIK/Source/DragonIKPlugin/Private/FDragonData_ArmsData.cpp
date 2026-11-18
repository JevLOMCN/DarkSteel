// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 3

// operator= @ 14d2a8880

FDragonData_ArmsData * __thiscall
FDragonData_ArmsData::operator=(FDragonData_ArmsData *this,FDragonData_ArmsData *param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  (this->Clavicle_Bone).BoneName = (param_1->Clavicle_Bone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Clavicle_Bone).field_0x8;
  *(uint *)&(this->Clavicle_Bone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Clavicle_Bone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Clavicle_Bone).field_0x8 =
       ((param_1->Clavicle_Bone).BoneIndex ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^
       *(uint *)&(param_1->Clavicle_Bone).field_0x8;
  (this->Clavicle_Bone).CachedCompactPoseIndex = (param_1->Clavicle_Bone).CachedCompactPoseIndex;
  (this->Shoulder_Bone_Name).BoneName = (param_1->Shoulder_Bone_Name).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Shoulder_Bone_Name).field_0x8;
  *(uint *)&(this->Shoulder_Bone_Name).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Shoulder_Bone_Name).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Shoulder_Bone_Name).field_0x8 =
       (SPULL(uVar1,0,0x1f) ^ (param_1->Shoulder_Bone_Name).BoneIndex) & 0x7fffffffU ^
       *(uint *)&(param_1->Shoulder_Bone_Name).field_0x8;
  (this->Shoulder_Bone_Name).CachedCompactPoseIndex =
       (param_1->Shoulder_Bone_Name).CachedCompactPoseIndex;
  (this->Elbow_Bone_Name).BoneName = (param_1->Elbow_Bone_Name).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Elbow_Bone_Name).field_0x8;
  *(uint *)&(this->Elbow_Bone_Name).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Elbow_Bone_Name).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Elbow_Bone_Name).field_0x8 =
       (SPULL(uVar1,0,0x1f) ^ (param_1->Elbow_Bone_Name).BoneIndex) & 0x7fffffffU ^
       *(uint *)&(param_1->Elbow_Bone_Name).field_0x8;
  (this->Elbow_Bone_Name).CachedCompactPoseIndex = (param_1->Elbow_Bone_Name).CachedCompactPoseIndex
  ;
  (this->Hand_Bone_Name).BoneName = (param_1->Hand_Bone_Name).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Hand_Bone_Name).field_0x8;
  *(uint *)&(this->Hand_Bone_Name).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Hand_Bone_Name).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Hand_Bone_Name).field_0x8 =
       (SPULL(uVar1,0,0x1f) ^ (param_1->Hand_Bone_Name).BoneIndex) & 0x7fffffffU ^
       *(uint *)&(param_1->Hand_Bone_Name).field_0x8;
  (this->Hand_Bone_Name).CachedCompactPoseIndex = (param_1->Hand_Bone_Name).CachedCompactPoseIndex;
  this->is_this_right_hand = param_1->is_this_right_hand;
  this->invert_lower_twist = param_1->invert_lower_twist;
  this->invert_upper_twist = param_1->invert_upper_twist;
  (this->Twist_Forearm_Bone).BoneName = (param_1->Twist_Forearm_Bone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Twist_Forearm_Bone).field_0x8;
  *(uint *)&(this->Twist_Forearm_Bone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Twist_Forearm_Bone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Twist_Forearm_Bone).field_0x8 =
       (SPULL(uVar1,0,0x1f) ^ (param_1->Twist_Forearm_Bone).BoneIndex) & 0x7fffffffU ^
       *(uint *)&(param_1->Twist_Forearm_Bone).field_0x8;
  (this->Twist_Forearm_Bone).CachedCompactPoseIndex =
       (param_1->Twist_Forearm_Bone).CachedCompactPoseIndex;
  (this->Twist_Shoulder_Bone).BoneName = (param_1->Twist_Shoulder_Bone).BoneName;
  uVar1 = *(undefined4 *)&(param_1->Twist_Shoulder_Bone).field_0x8;
  *(uint *)&(this->Twist_Shoulder_Bone).field_0x8 =
       (uVar1 ^ *(uint *)&(this->Twist_Shoulder_Bone).field_0x8) & 0x80000000 ^ uVar1;
  *(uint *)&(this->Twist_Shoulder_Bone).field_0x8 =
       (SPULL(uVar1,0,0x1f) ^ (param_1->Twist_Shoulder_Bone).BoneIndex) & 0x7fffffffU ^
       *(uint *)&(param_1->Twist_Shoulder_Bone).field_0x8;
  (this->Twist_Shoulder_Bone).CachedCompactPoseIndex =
       (param_1->Twist_Shoulder_Bone).CachedCompactPoseIndex;
  dVar2 = (param_1->Local_Direction_Axis).field0_0x0._s_0.Y;
  (this->Local_Direction_Axis).field0_0x0._s_0.X = (param_1->Local_Direction_Axis).field0_0x0._s_0.X
  ;
  (this->Local_Direction_Axis).field0_0x0._s_0.Y = dVar2;
  (this->Local_Direction_Axis).field0_0x0._s_0.Z = (param_1->Local_Direction_Axis).field0_0x0._s_0.Z
  ;
  dVar2 = (param_1->Arm_Aiming_Offset).field0_0x0._s_0.Y;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.X = (param_1->Arm_Aiming_Offset).field0_0x0._s_0.X;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.Y = dVar2;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.Z = (param_1->Arm_Aiming_Offset).field0_0x0._s_0.Z;
  this->accurate_hand_rotation = param_1->accurate_hand_rotation;
  this->relative_axis = param_1->relative_axis;
  this->Maximum_Extension = param_1->Maximum_Extension;
  this->Minimum_Extension = param_1->Minimum_Extension;
  this->Max_Stretch_Ratio = param_1->Max_Stretch_Ratio;
  this->Stretch_lower_arm_Priorty = param_1->Stretch_lower_arm_Priorty;
  dVar2 = (param_1->Elbow_Pole_Offset).field0_0x0._s_0.Y;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.X = (param_1->Elbow_Pole_Offset).field0_0x0._s_0.X;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.Y = dVar2;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.Z = (param_1->Elbow_Pole_Offset).field0_0x0._s_0.Z;
  dVar2 = (param_1->North_Pole_Offset).field0_0x0._s_0.Y;
  (this->North_Pole_Offset).field0_0x0._s_0.X = (param_1->North_Pole_Offset).field0_0x0._s_0.X;
  (this->North_Pole_Offset).field0_0x0._s_0.Y = dVar2;
  (this->North_Pole_Offset).field0_0x0._s_0.Z = (param_1->North_Pole_Offset).field0_0x0._s_0.Z;
  dVar2 = (param_1->South_Pole_Offset).field0_0x0._s_0.Y;
  (this->South_Pole_Offset).field0_0x0._s_0.X = (param_1->South_Pole_Offset).field0_0x0._s_0.X;
  (this->South_Pole_Offset).field0_0x0._s_0.Y = dVar2;
  (this->South_Pole_Offset).field0_0x0._s_0.Z = (param_1->South_Pole_Offset).field0_0x0._s_0.Z;
  dVar2 = (param_1->West_Pole_Offset).field0_0x0._s_0.Y;
  (this->West_Pole_Offset).field0_0x0._s_0.X = (param_1->West_Pole_Offset).field0_0x0._s_0.X;
  (this->West_Pole_Offset).field0_0x0._s_0.Y = dVar2;
  (this->West_Pole_Offset).field0_0x0._s_0.Z = (param_1->West_Pole_Offset).field0_0x0._s_0.Z;
  dVar2 = (param_1->East_Pole_Offset).field0_0x0._s_0.Y;
  (this->East_Pole_Offset).field0_0x0._s_0.X = (param_1->East_Pole_Offset).field0_0x0._s_0.X;
  (this->East_Pole_Offset).field0_0x0._s_0.Y = dVar2;
  (this->East_Pole_Offset).field0_0x0._s_0.Z = (param_1->East_Pole_Offset).field0_0x0._s_0.Z;
  this->override_limits = param_1->override_limits;
  dVar2 = (param_1->Max_Arm_H_Angle).field0_0x0._s_0.Y;
  (this->Max_Arm_H_Angle).field0_0x0._s_0.X = (param_1->Max_Arm_H_Angle).field0_0x0._s_0.X;
  (this->Max_Arm_H_Angle).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Max_Arm_V_Angle).field0_0x0._s_0.Y;
  (this->Max_Arm_V_Angle).field0_0x0._s_0.X = (param_1->Max_Arm_V_Angle).field0_0x0._s_0.X;
  (this->Max_Arm_V_Angle).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Inner_Clavicle_Side_Limit).field0_0x0._s_0.Y;
  (this->Inner_Clavicle_Side_Limit).field0_0x0._s_0.X =
       (param_1->Inner_Clavicle_Side_Limit).field0_0x0._s_0.X;
  (this->Inner_Clavicle_Side_Limit).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.Y;
  (this->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.X =
       (param_1->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.X;
  (this->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Outer_Clavicle_Side_Limit).field0_0x0._s_0.Y;
  (this->Outer_Clavicle_Side_Limit).field0_0x0._s_0.X =
       (param_1->Outer_Clavicle_Side_Limit).field0_0x0._s_0.X;
  (this->Outer_Clavicle_Side_Limit).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.Y;
  (this->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.X =
       (param_1->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.X;
  (this->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Shoulder_Inner_Clamp).field0_0x0._s_0.Y;
  (this->Shoulder_Inner_Clamp).field0_0x0._s_0.X = (param_1->Shoulder_Inner_Clamp).field0_0x0._s_0.X
  ;
  (this->Shoulder_Inner_Clamp).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Shoulder_Outer_Clamp).field0_0x0._s_0.Y;
  (this->Shoulder_Outer_Clamp).field0_0x0._s_0.X = (param_1->Shoulder_Outer_Clamp).field0_0x0._s_0.X
  ;
  (this->Shoulder_Outer_Clamp).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->ForeArm_Angle_Limit).field0_0x0._s_0.Y;
  (this->ForeArm_Angle_Limit).field0_0x0._s_0.X = (param_1->ForeArm_Angle_Limit).field0_0x0._s_0.X;
  (this->ForeArm_Angle_Limit).field0_0x0._s_0.Y = dVar2;
  this->Twist_Offset_Reverse = param_1->Twist_Offset_Reverse;
  this->should_shoulder_twist_if_inward = param_1->should_shoulder_twist_if_inward;
  this->clavicle_part_of_extension = param_1->clavicle_part_of_extension;
  this->last_shoulder_angle = param_1->last_shoulder_angle;
  this->last_forarm_angle = param_1->last_forarm_angle;
  dVar2 = (param_1->last_clavicle_rotation).Yaw;
  (this->last_clavicle_rotation).Pitch = (param_1->last_clavicle_rotation).Pitch;
  (this->last_clavicle_rotation).Yaw = dVar2;
  (this->last_clavicle_rotation).Roll = (param_1->last_clavicle_rotation).Roll;
  dVar2 = (param_1->last_hand_rotation).Yaw;
  (this->last_hand_rotation).Pitch = (param_1->last_hand_rotation).Pitch;
  (this->last_hand_rotation).Yaw = dVar2;
  (this->last_hand_rotation).Roll = (param_1->last_hand_rotation).Roll;
  return this;
}

// StaticStruct @ 14d2adea0

UScriptStruct * __cdecl FDragonData_ArmsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonData_ArmsData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonData_ArmsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_ArmsData,(UObject *)pUVar1,
                         L"DragonData_ArmsData");
  }
  return Z_Registration_Info_UScriptStruct_FDragonData_ArmsData.OuterSingleton;
}

// FDragonData_ArmsData @ 14d2b0050

FDragonData_ArmsData * __thiscall
FDragonData_ArmsData::FDragonData_ArmsData(FDragonData_ArmsData *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  (this->Clavicle_Bone).BoneName.ComparisonIndex = 0;
  (this->Clavicle_Bone).BoneName.Number = 0;
  puVar1 = &(this->Clavicle_Bone).field_0x8;
  (this->Clavicle_Bone).BoneIndex = -1;
  (this->Clavicle_Bone).bUseSkeletonIndex = 0;
  (this->Clavicle_Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Shoulder_Bone_Name).BoneName.ComparisonIndex = 0;
  (this->Shoulder_Bone_Name).BoneName.Number = 0;
  puVar1 = &(this->Shoulder_Bone_Name).field_0x8;
  (this->Shoulder_Bone_Name).BoneIndex = -1;
  (this->Shoulder_Bone_Name).bUseSkeletonIndex = 0;
  (this->Shoulder_Bone_Name).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Elbow_Bone_Name).BoneName.ComparisonIndex = 0;
  (this->Elbow_Bone_Name).BoneName.Number = 0;
  puVar1 = &(this->Elbow_Bone_Name).field_0x8;
  (this->Elbow_Bone_Name).BoneIndex = -1;
  (this->Elbow_Bone_Name).bUseSkeletonIndex = 0;
  (this->Elbow_Bone_Name).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Hand_Bone_Name).BoneName.ComparisonIndex = 0;
  (this->Hand_Bone_Name).BoneName.Number = 0;
  puVar1 = &(this->Hand_Bone_Name).field_0x8;
  (this->Hand_Bone_Name).BoneIndex = -1;
  (this->Hand_Bone_Name).bUseSkeletonIndex = 0;
  (this->Hand_Bone_Name).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->is_this_right_hand = true;
  this->invert_lower_twist = false;
  this->invert_upper_twist = false;
  (this->Twist_Forearm_Bone).BoneName.ComparisonIndex = 0;
  (this->Twist_Forearm_Bone).BoneName.Number = 0;
  puVar1 = &(this->Twist_Forearm_Bone).field_0x8;
  (this->Twist_Forearm_Bone).BoneIndex = -1;
  (this->Twist_Forearm_Bone).bUseSkeletonIndex = 0;
  (this->Twist_Forearm_Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Twist_Shoulder_Bone).BoneName.ComparisonIndex = 0;
  (this->Twist_Shoulder_Bone).BoneName.Number = 0;
  puVar1 = &(this->Twist_Shoulder_Bone).field_0x8;
  (this->Twist_Shoulder_Bone).BoneIndex = -1;
  (this->Twist_Shoulder_Bone).bUseSkeletonIndex = 0;
  (this->Twist_Shoulder_Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Local_Direction_Axis).field0_0x0._s_0.Y = 1.0;
  (this->Local_Direction_Axis).field0_0x0._s_0.X = 0.0;
  (this->Local_Direction_Axis).field0_0x0._s_0.Z = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.Y = (double)uVar2;
  (this->Arm_Aiming_Offset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->accurate_hand_rotation = false;
  this->relative_axis = true;
  this->Maximum_Extension = 2.0;
  this->Minimum_Extension = 0.3;
  this->Max_Stretch_Ratio = 1.25;
  this->Stretch_lower_arm_Priorty = 0.9;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.Y = (double)uVar2;
  (this->Elbow_Pole_Offset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->South_Pole_Offset).field0_0x0._s_0.Y = -100.0;
  (this->East_Pole_Offset).field0_0x0._s_0.X = -100.0;
  (this->Max_Arm_H_Angle).field0_0x0._s_0.X = 45.0;
  (this->Max_Arm_H_Angle).field0_0x0._s_0.Y = 45.0;
  (this->Max_Arm_V_Angle).field0_0x0._s_0.X = 45.0;
  (this->Max_Arm_V_Angle).field0_0x0._s_0.Y = 45.0;
  (this->Inner_Clavicle_Side_Limit).field0_0x0._s_0.X = 45.0;
  (this->Inner_Clavicle_Side_Limit).field0_0x0._s_0.Y = 45.0;
  (this->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.X = 45.0;
  (this->Inner_Clavicle_Vertical_Limit).field0_0x0._s_0.Y = 45.0;
  (this->Outer_Clavicle_Side_Limit).field0_0x0._s_0.X = 45.0;
  (this->Outer_Clavicle_Side_Limit).field0_0x0._s_0.Y = 45.0;
  (this->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.X = 45.0;
  (this->Outer_Clavicle_Vertical_Limit).field0_0x0._s_0.Y = 45.0;
  (this->Shoulder_Inner_Clamp).field0_0x0._s_0.X = 5.0;
  (this->Shoulder_Inner_Clamp).field0_0x0._s_0.Y = 5.0;
  (this->Shoulder_Outer_Clamp).field0_0x0._s_0.X = 25.0;
  (this->Shoulder_Outer_Clamp).field0_0x0._s_0.Y = 25.0;
  (this->ForeArm_Angle_Limit).field0_0x0._s_0.X = 180.0;
  (this->ForeArm_Angle_Limit).field0_0x0._s_0.Y = 180.0;
  (this->North_Pole_Offset).field0_0x0._s_0.X = 0.0;
  (this->North_Pole_Offset).field0_0x0._s_0.Y = 100.0;
  (this->North_Pole_Offset).field0_0x0._s_0.Z = 0.0;
  (this->South_Pole_Offset).field0_0x0._s_0.X = 0.0;
  (this->South_Pole_Offset).field0_0x0._s_0.Z = 0.0;
  (this->West_Pole_Offset).field0_0x0._s_0.X = 100.0;
  (this->West_Pole_Offset).field0_0x0._s_0.Y = 0.0;
  (this->West_Pole_Offset).field0_0x0._s_0.Z = 0.0;
  (this->East_Pole_Offset).field0_0x0._s_0.Y = 0.0;
  (this->East_Pole_Offset).field0_0x0._s_0.Z = 0.0;
  this->override_limits = false;
  this->Twist_Offset_Reverse = 180.0;
  this->should_shoulder_twist_if_inward = false;
  this->clavicle_part_of_extension = true;
  this->last_shoulder_angle = 0.0;
  this->last_forarm_angle = 0.0;
  (this->last_clavicle_rotation).Pitch = 0.0;
  (this->last_clavicle_rotation).Yaw = 0.0;
  (this->last_clavicle_rotation).Roll = 0.0;
  (this->last_hand_rotation).Pitch = 0.0;
  (this->last_hand_rotation).Yaw = 0.0;
  (this->last_hand_rotation).Roll = 0.0;
  return this;
}

