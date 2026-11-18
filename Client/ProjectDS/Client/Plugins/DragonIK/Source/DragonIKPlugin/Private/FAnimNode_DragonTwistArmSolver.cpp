// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 26

// StaticStruct @ 14d2a4c20

UScriptStruct * __cdecl FAnimNode_DragonTwistArmSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonTwistArmSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonTwistArmSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonTwistArmSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonTwistArmSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonTwistArmSolver.OuterSingleton;
}

// ~FAnimNode_DragonTwistArmSolver @ 14d2a61c0

void __thiscall
FAnimNode_DragonTwistArmSolver::~FAnimNode_DragonTwistArmSolver
          (FAnimNode_DragonTwistArmSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TraceEndList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceStartList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hand_Default_Transform_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elbow_Bone_Transform_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->knee_Animated_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HandIK_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LegIK_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Ref_HeadTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HeadTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Actual_Shoulder_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Shoulder_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elbow_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hand_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Last_Shoulder_Angles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d2a6af0

FAnimNode_DragonTwistArmSolver * __thiscall
FAnimNode_DragonTwistArmSolver::operator=
          (FAnimNode_DragonTwistArmSolver *this,FAnimNode_DragonTwistArmSolver *param_1)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  FHitResult *pFVar6;
  FHitResult *pFVar7;
  longlong lVar8;
  
  FAnimNode_DragonControlBase::operator=
            ((FAnimNode_DragonControlBase *)this,(FAnimNode_DragonControlBase *)param_1);
  this->test_counter = param_1->test_counter;
  this->trace_draw_counter = param_1->trace_draw_counter;
  this->Num_Valid_Spines = param_1->Num_Valid_Spines;
  this->component_scale = param_1->component_scale;
  this->atleast_one_hit = param_1->atleast_one_hit;
  this->feet_is_empty = param_1->feet_is_empty;
  FDragonData_ArmsData::operator=(&this->Hand_Input_Info,&param_1->Hand_Input_Info);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Last_Shoulder_Angles,&param_1->Last_Shoulder_Angles);
  dVar1 = (param_1->target_transform).Rotation.XY.m128d_f64[1];
  (this->target_transform).Rotation.XY.m128d_f64[0] =
       (param_1->target_transform).Rotation.XY.m128d_f64[0];
  (this->target_transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->target_transform).Rotation.ZW.m128d_f64[1];
  (this->target_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->target_transform).Rotation.ZW.m128d_f64[0];
  (this->target_transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->target_transform).Translation.XY.m128d_f64[1];
  (this->target_transform).Translation.XY.m128d_f64[0] =
       (param_1->target_transform).Translation.XY.m128d_f64[0];
  (this->target_transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->target_transform).Translation.ZW.m128d_f64[1];
  (this->target_transform).Translation.ZW.m128d_f64[0] =
       (param_1->target_transform).Translation.ZW.m128d_f64[0];
  (this->target_transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->target_transform).Scale3D.XY.m128d_f64[1];
  (this->target_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->target_transform).Scale3D.XY.m128d_f64[0];
  (this->target_transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->target_transform).Scale3D.ZW.m128d_f64[1];
  (this->target_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->target_transform).Scale3D.ZW.m128d_f64[0];
  (this->target_transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X =
       (param_1->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y = dVar1;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z =
       (param_1->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z;
  this->Use_Separate_Targets = param_1->Use_Separate_Targets;
  this->Override_Hand_Rotation = param_1->Override_Hand_Rotation;
  this->reach_instead = param_1->reach_instead;
  this->pole_system_input = param_1->pole_system_input;
  this->arm_twist_axis = param_1->arm_twist_axis;
  this->hand_rotation_method = param_1->hand_rotation_method;
  this->nsew_pole_method = param_1->nsew_pole_method;
  this->up_arm_twist_technique = param_1->up_arm_twist_technique;
  dVar1 = (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[1];
  lVar8 = 2;
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->Limbs_Clamp = param_1->Limbs_Clamp;
  this->done_leg_make = param_1->done_leg_make;
  this->Let_Arm_Twist_With_Hand = param_1->Let_Arm_Twist_With_Hand;
  this->allow_arm_stretch = param_1->allow_arm_stretch;
  pFVar6 = &this->TTS_Aim_Hit;
  pFVar7 = &param_1->TTS_Aim_Hit;
  do {
    fVar3 = pFVar7->Time;
    fVar4 = pFVar7->Distance;
    iVar5 = pFVar7->_padding_;
    pFVar6->FaceIndex = pFVar7->FaceIndex;
    pFVar6->Time = fVar3;
    pFVar6->Distance = fVar4;
    pFVar6->_padding_ = iVar5;
    uVar2 = *(undefined8 *)&(pFVar7->Location).field_0x8;
    *(undefined8 *)&pFVar6->Location = *(undefined8 *)&pFVar7->Location;
    *(undefined8 *)&(pFVar6->Location).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar7->ImpactPoint;
    *(undefined8 *)&(pFVar6->Location).field_0x10 = *(undefined8 *)&(pFVar7->Location).field_0x10;
    *(undefined8 *)&pFVar6->ImpactPoint = uVar2;
    uVar2 = *(undefined8 *)&(pFVar7->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar6->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar7->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar6->ImpactPoint).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar7->Normal).field_0x8;
    *(undefined8 *)&pFVar6->Normal = *(undefined8 *)&pFVar7->Normal;
    *(undefined8 *)&(pFVar6->Normal).field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&pFVar7->ImpactNormal;
    *(undefined8 *)&(pFVar6->Normal).field_0x10 = *(undefined8 *)&(pFVar7->Normal).field_0x10;
    *(undefined8 *)&pFVar6->ImpactNormal = uVar2;
    uVar2 = *(undefined8 *)&(pFVar7->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar6->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar7->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar6->ImpactNormal).field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar7->TraceStart).field_0x8;
    *(undefined8 *)&pFVar6->TraceStart = *(undefined8 *)&pFVar7->TraceStart;
    *(undefined8 *)&(pFVar6->TraceStart).field_0x8 = uVar2;
    lVar8 = lVar8 + -1;
    pFVar6 = (FHitResult *)&(pFVar6->TraceStart).field_0x10;
    pFVar7 = (FHitResult *)&(pFVar7->TraceStart).field_0x10;
  } while (lVar8 != 0);
  this->TTS_Height = param_1->TTS_Height;
  this->loc_interp_type = param_1->loc_interp_type;
  this->delta_seconds_saved = param_1->delta_seconds_saved;
  this->is_focus_debugtarget = param_1->is_focus_debugtarget;
  this->inter_frame_counter = param_1->inter_frame_counter;
  this->Internal_Switched_Interpolation_bool = param_1->Internal_Switched_Interpolation_bool;
  this->Enable_Interpolation = param_1->Enable_Interpolation;
  this->Interpolation_Speed = param_1->Interpolation_Speed;
  this->toggle_alpha = param_1->toggle_alpha;
  this->hand_toggle_alpha = param_1->hand_toggle_alpha;
  dVar1 = (param_1->Lerped_LookatLocation).field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       (param_1->Lerped_LookatLocation).field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = dVar1;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Z =
       (param_1->Lerped_LookatLocation).field0_0x0._s_0.Z;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->Hand_Array,&param_1->Hand_Array);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->Elbow_Array,&param_1->Elbow_Array);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->Shoulder_Array,&param_1->Shoulder_Array);
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->Actual_Shoulder_Array,&param_1->Actual_Shoulder_Array);
  dVar1 = (param_1->LookAt_Axis).field0_0x0._s_0.Y;
  (this->LookAt_Axis).field0_0x0._s_0.X = (param_1->LookAt_Axis).field0_0x0._s_0.X;
  (this->LookAt_Axis).field0_0x0._s_0.Y = dVar1;
  (this->LookAt_Axis).field0_0x0._s_0.Z = (param_1->LookAt_Axis).field0_0x0._s_0.Z;
  dVar1 = (param_1->Upward_Axis).field0_0x0._s_0.Y;
  (this->Upward_Axis).field0_0x0._s_0.X = (param_1->Upward_Axis).field0_0x0._s_0.X;
  (this->Upward_Axis).field0_0x0._s_0.Y = dVar1;
  (this->Upward_Axis).field0_0x0._s_0.Z = (param_1->Upward_Axis).field0_0x0._s_0.Z;
  this->Use_Physics_Adaptation = param_1->Use_Physics_Adaptation;
  this->physics_root_reference = param_1->physics_root_reference;
  dVar1 = (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Limb_Rotation_Offset).Yaw;
  (this->Limb_Rotation_Offset).Pitch = (param_1->Limb_Rotation_Offset).Pitch;
  (this->Limb_Rotation_Offset).Yaw = dVar1;
  (this->Limb_Rotation_Offset).Roll = (param_1->Limb_Rotation_Offset).Roll;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->HeadTransforms,&param_1->HeadTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->Ref_HeadTransforms,&param_1->Ref_HeadTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->LegIK_Transforms,&param_1->LegIK_Transforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->HandIK_Transforms,&param_1->HandIK_Transforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->Lerp_HandIK_Transforms,&param_1->Lerp_HandIK_Transforms);
  this->Max_Range_Limit_Lerp = param_1->Max_Range_Limit_Lerp;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->knee_Animated_transform_array,&param_1->knee_Animated_transform_array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Elbow_Bone_Transform_Array,&param_1->Elbow_Bone_Transform_Array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Hand_Default_Transform_Array,&param_1->Hand_Default_Transform_Array);
  this->Smooth_Factor = param_1->Smooth_Factor;
  this->DisplayLineTrace = param_1->DisplayLineTrace;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Debug_Hand_Locations,&param_1->Debug_Hand_Locations);
  this->SavedBoneContainer = param_1->SavedBoneContainer;
  this->Root_Roll_Value = param_1->Root_Roll_Value;
  this->Root_Pitch_Value = param_1->Root_Pitch_Value;
  this->diff_heights[0] = param_1->diff_heights[0];
  this->diff_heights[1] = param_1->diff_heights[1];
  this->diff_heights[2] = param_1->diff_heights[2];
  this->diff_heights[3] = param_1->diff_heights[3];
  this->diff_heights[4] = param_1->diff_heights[4];
  this->diff_heights[5] = param_1->diff_heights[5];
  this->midpoint_height = param_1->midpoint_height;
  this->maximum_spine_length = param_1->maximum_spine_length;
  this->angle_data = param_1->angle_data;
  dVar1 = (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->zero_transform_set = param_1->zero_transform_set;
  dVar1 = (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->spine_median_result = param_1->spine_median_result;
  this->Use_FeetTips = param_1->Use_FeetTips;
  this->saved_pose = param_1->saved_pose;
  this->owning_skel = param_1->owning_skel;
  dVar1 = (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar1;
  this->tot_len_of_bones = param_1->tot_len_of_bones;
  dVar1 = (param_1->HeadRotation_Temp).Yaw;
  (this->HeadRotation_Temp).Pitch = (param_1->HeadRotation_Temp).Pitch;
  (this->HeadRotation_Temp).Yaw = dVar1;
  (this->HeadRotation_Temp).Roll = (param_1->HeadRotation_Temp).Roll;
  this->solve_should_fail = param_1->solve_should_fail;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceStartList,&param_1->TraceStartList);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceEndList,&param_1->TraceEndList);
  this->debug_hands_initialized = param_1->debug_hands_initialized;
  return this;
}

// FAnimNode_DragonTwistArmSolver @ 14d32c8b0

FAnimNode_DragonTwistArmSolver * __thiscall
FAnimNode_DragonTwistArmSolver::FAnimNode_DragonTwistArmSolver(FAnimNode_DragonTwistArmSolver *this)

{
  float fVar1;
  float fVar2;
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
  undefined8 uVar15;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->component_scale = 1.0;
  this->test_counter = 0;
  this->trace_draw_counter = 0;
  this->_padding_ = (longlong)&___7FAnimNode_DragonTwistArmSolver__6B_;
  this->Num_Valid_Spines = 0;
  this->atleast_one_hit = false;
  this->feet_is_empty = true;
  FDragonData_ArmsData::FDragonData_ArmsData(&this->Hand_Input_Info);
  (this->Last_Shoulder_Angles).ArrayNum = 0;
  (this->Last_Shoulder_Angles).ArrayMax = 0;
  (this->Last_Shoulder_Angles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->target_transform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X = 0.0;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y = 0.0;
  (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z = 0.0;
  this->Use_Separate_Targets = true;
  this->Override_Hand_Rotation = true;
  this->reach_instead = true;
  this->pole_system_input = ENUM_SinglePoleSystem;
  this->arm_twist_axis = ENUM_PoseAxisTwist;
  this->hand_rotation_method = ENUM_ReplaceRotation;
  this->nsew_pole_method = false;
  this->up_arm_twist_technique = false;
  *&(this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Main_Hand_Default_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Main_Hand_New_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Main_Hand_New_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Main_Hand_New_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Scale3D.ZW.m128d_f64 = auVar14;
  this->Limbs_Clamp = 70.0;
  this->done_leg_make = false;
  this->Let_Arm_Twist_With_Hand = true;
  this->allow_arm_stretch = false;
  memset(&this->TTS_Aim_Hit,0,0x100);
  (this->TTS_Aim_Hit).Time = 1.0;
  (this->TTS_Aim_Hit).MyItem = -1;
  (this->TTS_Aim_Hit).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TTS_Aim_Hit).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TTS_Aim_Hit).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->TTS_Aim_Hit).HitObjectHandle.InstanceIndex = -1;
  (this->TTS_Aim_Hit).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->TTS_Aim_Hit).HitObjectHandle.field_0x1d = 0;
  this->TTS_Height = 0.0;
  this->loc_interp_type = ENUM_LegacyLoc_Interp;
  this->delta_seconds_saved = 1.0;
  this->is_focus_debugtarget = true;
  this->inter_frame_counter = 0;
  this->Internal_Switched_Interpolation_bool = true;
  this->Enable_Interpolation = false;
  this->Interpolation_Speed = 15.0;
  this->toggle_alpha = 0.0;
  this->hand_toggle_alpha = 0.0;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar15;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Hand_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hand_Array).ArrayNum = 0;
  (this->Hand_Array).ArrayMax = 0;
  (this->Elbow_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elbow_Array).ArrayNum = 0;
  (this->Elbow_Array).ArrayMax = 0;
  (this->Shoulder_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Shoulder_Array).ArrayNum = 0;
  (this->Shoulder_Array).ArrayMax = 0;
  (this->Actual_Shoulder_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Actual_Shoulder_Array).ArrayNum = 0;
  (this->Actual_Shoulder_Array).ArrayMax = 0;
  (this->LookAt_Axis).field0_0x0._s_0.X = 0.0;
  (this->LookAt_Axis).field0_0x0._s_0.Y = 1.0;
  (this->LookAt_Axis).field0_0x0._s_0.Z = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.X = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.Y = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.Z = 1.0;
  this->Use_Physics_Adaptation = false;
  ::FName::FName(&this->physics_root_reference,"pelvis");
  *&(this->LookAtLocation_Saved).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LookAtLocation_Saved).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LookAtLocation_Saved).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LookAtLocation_Saved).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LookAtLocation_Saved).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->HeadTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeadTransforms).ArrayNum = 0;
  (this->HeadTransforms).ArrayMax = 0;
  (this->Ref_HeadTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ref_HeadTransforms).ArrayNum = 0;
  (this->Ref_HeadTransforms).ArrayMax = 0;
  (this->LegIK_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegIK_Transforms).ArrayNum = 0;
  (this->LegIK_Transforms).ArrayMax = 0;
  (this->HandIK_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HandIK_Transforms).ArrayNum = 0;
  (this->HandIK_Transforms).ArrayMax = 0;
  (this->Lerp_HandIK_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Lerp_HandIK_Transforms).ArrayNum = 0;
  (this->Lerp_HandIK_Transforms).ArrayMax = 0;
  (this->knee_Animated_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->knee_Animated_transform_array).ArrayNum = 0;
  (this->knee_Animated_transform_array).ArrayMax = 0;
  (this->Elbow_Bone_Transform_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elbow_Bone_Transform_Array).ArrayNum = 0;
  (this->Elbow_Bone_Transform_Array).ArrayMax = 0;
  (this->Hand_Default_Transform_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hand_Default_Transform_Array).ArrayNum = 0;
  (this->Hand_Default_Transform_Array).ArrayMax = 0;
  (this->Debug_Hand_Locations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug_Hand_Locations).ArrayNum = 0;
  (this->Debug_Hand_Locations).ArrayMax = 0;
  this->Max_Range_Limit_Lerp = 0.0;
  this->Smooth_Factor = 10.0;
  this->DisplayLineTrace = true;
  this->Root_Roll_Value = 0.0;
  this->Root_Pitch_Value = 0.0;
  this->midpoint_height = 0.0;
  this->maximum_spine_length = 0.0;
  this->angle_data = 0.0;
  *&(this->ChestEffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->ChestEffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->ChestEffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->ChestEffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->ChestEffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->ChestEffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->RootEffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootEffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootEffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootEffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootEffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootEffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->zero_transform_set = 0;
  *&(this->Last_RootEffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Last_RootEffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Last_RootEffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->spine_median_result = 0.0;
  this->Use_FeetTips = false;
  *&(this->owner_skel_w_transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->owner_skel_w_transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->owner_skel_w_transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->HeadRotation_Temp).Pitch = 0.0;
  (this->HeadRotation_Temp).Yaw = 0.0;
  (this->HeadRotation_Temp).Roll = 0.0;
  (this->TraceStartList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceStartList).ArrayNum = 0;
  (this->TraceStartList).ArrayMax = 0;
  (this->TraceEndList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceEndList).ArrayNum = 0;
  (this->TraceEndList).ArrayMax = 0;
  this->solve_should_fail = false;
  this->debug_hands_initialized = false;
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar15;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LookAt_Axis).field0_0x0._s_0.X = 0.0;
  (this->LookAt_Axis).field0_0x0._s_0.Y = 1.0;
  (this->LookAt_Axis).field0_0x0._s_0.Z = 0.0;
  if ((this->Debug_Hand_Locations).ArrayNum == 0) {
    ResizeDebugLocations(this,1);
  }
  return this;
}

// AnimLocLerp @ 14d32fb10

TVector<double> * __thiscall
FAnimNode_DragonTwistArmSolver::AnimLocLerp
          (FAnimNode_DragonTwistArmSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  fVar3 = __real_42c80000 - param_3 * this->Interpolation_Speed * __real_41400000;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  if (__real_42c80000 <= fVar3) {
    fVar3 = __real_42c80000;
  }
  if (fVar3 <= __real_3f800000) {
    fVar3 = __real_3f800000;
  }
  dVar2 = __real_3ff0000000000000 / (double)fVar3;
  if (this->Internal_Switched_Interpolation_bool == false) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88._s_0.Z;
  }
  else if (this->loc_interp_type == ENUM_DivisiveLoc_Interp) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         local_68._s_0.X - (local_68._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         local_68._s_0.Y - (local_68._s_0.Y - dVar1) * dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         local_68._s_0.Z - (local_68._s_0.Z - local_88._s_0.Z) * dVar2;
  }
  else {
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48[0]._16_8_ = local_88._s_0.Z;
    FMath::VInterpTo((TVector<double> *)&local_48[0]._s_0,(TVector<double> *)&local_68._s_0,
                     (TVector<double> *)&local_88._s_0,param_3,__real_3f000000);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_48[0]._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_48[0]._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_48[0]._16_8_;
  }
  return __return_storage_ptr__;
}

// ArmIK_System @ 14d32fdd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_DragonTwistArmSolver::ArmIK_System
          (FAnimNode_DragonTwistArmSolver *this,FCSPose<FCompactPose> *param_1,
          FComponentSpacePoseContext *param_2,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FName *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  double dVar17;
  double dVar18;
  bool bVar19;
  FCompactPoseBoneIndex FVar20;
  int iVar21;
  TTransform<double> *pTVar22;
  UWorld *pUVar23;
  uint uVar24;
  USkeletalMeshComponent *this_00;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  float fVar66;
  double dVar67;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  undefined4 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  undefined1 auStackY_1238 [32];
  TVector<double>_u_0 local_11f0;
  double local_11d8;
  double dStack_11d0;
  double local_11c8;
  double local_11c0;
  double local_11b8;
  double dStack_11b0;
  double local_11a8;
  double dStack_11a0;
  double local_1198;
  double dStack_1190;
  double local_1188;
  double dStack_1180;
  double local_1178;
  double dStack_1170;
  double local_1168;
  double dStack_1160;
  double local_1158;
  double dStack_1150;
  double local_1148;
  double dStack_1140;
  double local_1138;
  double dStack_1130;
  double local_1128;
  double dStack_1120;
  double local_1118;
  double dStack_1110;
  double local_1108;
  double dStack_1100;
  double local_10f8;
  double dStack_10f0;
  double local_10e8;
  double dStack_10e0;
  double local_10d8;
  double dStack_10d0;
  double local_10c8;
  double dStack_10c0;
  double local_10b8;
  double dStack_10b0;
  double local_10a8;
  double dStack_10a0;
  undefined1 local_1098 [16];
  double local_1088;
  double local_1080;
  double dStack_1078;
  double local_1070;
  double local_1068;
  double dStack_1060;
  double local_1058;
  double local_1050;
  double dStack_1048;
  double local_1040;
  double local_1038;
  double dStack_1030;
  double local_1028;
  double local_1020;
  double dStack_1018;
  double local_1010;
  undefined1 local_1008 [16];
  double local_ff8;
  double local_ff0;
  double dStack_fe8;
  double local_fe0;
  double local_fd8;
  double dStack_fd0;
  double local_fc8;
  double local_fc0;
  double dStack_fb8;
  double local_fb0;
  double local_fa8;
  double dStack_fa0;
  double local_f98;
  double local_f90;
  double dStack_f88;
  double local_f80;
  double local_f78;
  double dStack_f70;
  double local_f68;
  double dStack_f60;
  double local_f58;
  double dStack_f50;
  double local_f48;
  double dStack_f40;
  double local_f38;
  double dStack_f30;
  double local_f28;
  double dStack_f20;
  ArmIKParamStruct local_f18;
  TTransform<double> local_948;
  TTransform<double> local_8e8;
  TTransform<double> local_888;
  TTransform<double> local_828;
  TTransform<double> local_7c8;
  TTransform<double> local_768;
  TTransform<double> local_708;
  ArmIKParamStruct local_6a8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  if (0 < (this->Debug_Hand_Locations).ArrayNum) {
    local_948.Rotation.XY.m128d_f64[0] = (this->target_transform).Rotation.XY.m128d_f64[0];
    local_948.Rotation.XY.m128d_f64[1] = (this->target_transform).Rotation.XY.m128d_f64[1];
    local_948.Rotation.ZW.m128d_f64[0] = (this->target_transform).Rotation.ZW.m128d_f64[0];
    local_948.Rotation.ZW.m128d_f64[1] = (this->target_transform).Rotation.ZW.m128d_f64[1];
    local_948.Translation.XY.m128d_f64[0] = (this->target_transform).Translation.XY.m128d_f64[0];
    local_948.Translation.XY.m128d_f64[1] = (this->target_transform).Translation.XY.m128d_f64[1];
    local_948.Translation.ZW.m128d_f64[0] = (this->target_transform).Translation.ZW.m128d_f64[0];
    local_948.Translation.ZW.m128d_f64[1] = (this->target_transform).Translation.ZW.m128d_f64[1];
    local_948.Scale3D.XY.m128d_f64[0] = (this->target_transform).Scale3D.XY.m128d_f64[0];
    local_948.Scale3D.XY.m128d_f64[1] = (this->target_transform).Scale3D.XY.m128d_f64[1];
    local_948.Scale3D.ZW.m128d_f64[0] = (this->target_transform).Scale3D.ZW.m128d_f64[0];
    local_948.Scale3D.ZW.m128d_f64[1] = (this->target_transform).Scale3D.ZW.m128d_f64[1];
    if ((this->Use_Physics_Adaptation != false) &&
       (FVar20 = (FCompactPoseBoneIndex)
                 USkinnedMeshComponent::GetBoneIndex
                           ((USkinnedMeshComponent *)this->owning_skel,this->physics_root_reference)
       , -1 < (int)FVar20)) {
      pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_1,FVar20);
      local_7c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_7c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_7c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_7c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_7c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_7c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_7c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_7c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_7c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_7c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_7c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_7c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_7c8,pTVar22,&this->owner_skel_w_transform);
      this_00 = this->owning_skel;
      pTVar22 = USkinnedMeshComponent::GetBoneTransform
                          ((USkinnedMeshComponent *)this_00,&local_768,(int)FVar20);
      unaff_XMM6._4_4_ = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      unaff_XMM6._0_4_ = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      unaff_XMM6._8_4_ = _UNK_15061cc88;
      unaff_XMM6._12_4_ = _UNK_15061cc8c;
      local_708.Rotation.XY.m128d_f64[0] = local_948.Rotation.XY.m128d_f64[0];
      local_708.Rotation.XY.m128d_f64[1] = local_948.Rotation.XY.m128d_f64[1];
      auVar79._0_8_ =
           (double)CONCAT44(local_768.Scale3D.ZW.m128d_f64[0]._4_4_ &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            local_768.Scale3D.ZW.m128d_f64[0]._0_4_ &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      auVar79._8_4_ = local_768.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      auVar79._12_4_ = local_768.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      local_708.Translation.XY.m128d_f64[0] = local_948.Translation.XY.m128d_f64[0];
      local_708.Translation.XY.m128d_f64[1] = local_948.Translation.XY.m128d_f64[1];
      uVar90 = local_768.Scale3D.XY.m128d_f64[0]._0_4_ &
               (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar91 = local_768.Scale3D.XY.m128d_f64[0]._4_4_ &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar92 = local_768.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
      uVar93 = local_768.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
      local_708.Rotation.ZW.m128d_f64[0] = local_948.Rotation.ZW.m128d_f64[0];
      local_708.Rotation.ZW.m128d_f64[1] = local_948.Rotation.ZW.m128d_f64[1];
      local_708.Scale3D.XY.m128d_f64[0] = local_948.Scale3D.XY.m128d_f64[0];
      local_708.Scale3D.XY.m128d_f64[1] = local_948.Scale3D.XY.m128d_f64[1];
      local_708.Translation.ZW.m128d_f64[0] = local_948.Translation.ZW.m128d_f64[0];
      local_708.Translation.ZW.m128d_f64[1] = local_948.Translation.ZW.m128d_f64[1];
      local_708.Scale3D.ZW.m128d_f64[0] = local_948.Scale3D.ZW.m128d_f64[0];
      local_708.Scale3D.ZW.m128d_f64[1] = local_948.Scale3D.ZW.m128d_f64[1];
      auVar42._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar79._8_8_);
      auVar42._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar79._0_8_);
      uVar24 = movmskpd((int)this_00,auVar42);
      auVar29._8_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
            (double)CONCAT44(uVar93,uVar92));
      auVar29._0_8_ =
           -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
            (double)CONCAT44(uVar91,uVar90));
      iVar21 = movmskpd((int)pTVar22,auVar29);
      if ((uVar24 & 0x3fffffff) == 0 && iVar21 == 0) {
        local_8e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_8e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_8e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_8e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_8e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_8e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        local_768.Rotation.XY.m128d_f64[0] =
             local_768.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        local_768.Rotation.XY.m128d_f64[1] =
             local_768.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar85 = SUB84(local_768.Rotation.XY.m128d_f64[1],0);
        uVar86 = (undefined4)((ulonglong)local_768.Rotation.XY.m128d_f64[1] >> 0x20);
        local_8e8.Rotation.ZW.m128d_f64[0] =
             local_768.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        local_8e8.Rotation.ZW.m128d_f64[1] =
             local_768.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        lVar25 = -(ulonglong)
                  ((double)CONCAT44(local_768.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    local_768.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        lVar26 = -(ulonglong)
                  ((double)CONCAT44(uVar91,uVar90) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar27 = -(ulonglong)
                  ((double)CONCAT44(uVar93,uVar92) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar8._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar8._0_8_ = local_768.Scale3D.ZW.m128d_f64[0];
        auVar8._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar8);
        auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        (undefined1  [16])local_768.Scale3D.XY.m128d_f64);
        auVar63._8_4_ = uVar85;
        auVar63._0_8_ = local_768.Rotation.XY.m128d_f64[0];
        auVar63._12_4_ = uVar86;
        local_8e8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar26 & auVar42._0_4_;
        local_8e8.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar42._4_4_
        ;
        local_8e8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar27 & auVar42._8_4_;
        local_8e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             ~(uint)((ulonglong)lVar27 >> 0x20) & auVar42._12_4_;
        auVar72._8_4_ = SUB84(local_8e8.Rotation.ZW.m128d_f64[1],0);
        auVar72._0_8_ = local_8e8.Rotation.ZW.m128d_f64[0];
        auVar72._12_4_ = (int)((ulonglong)local_8e8.Rotation.ZW.m128d_f64[1] >> 0x20);
        auVar42 = blendpd(auVar63,(undefined1  [16])local_8e8.Rotation.ZW.m128d_f64,2);
        local_8e8.Scale3D.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar29._4_4_,
                              ~(uint)lVar25 & auVar29._0_4_);
        auVar68._0_8_ =
             (double)CONCAT44(local_8e8.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_8e8.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar68._8_4_ = local_8e8.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar68._12_4_ = local_8e8.Scale3D.XY.m128d_f64[1]._4_4_;
        unaff_XMM6._0_8_ = auVar68._0_8_ * local_768.Translation.XY.m128d_f64[0];
        unaff_XMM6._8_8_ = auVar68._8_8_ * local_768.Translation.XY.m128d_f64[1];
        auVar48._8_4_ = uVar85;
        auVar48._0_8_ = local_768.Rotation.XY.m128d_f64[0];
        auVar48._12_4_ = uVar86;
        dVar52 = auVar48._8_8_;
        auVar30._8_4_ = SUB84(local_8e8.Rotation.ZW.m128d_f64[0],0);
        auVar30._0_8_ = dVar52;
        auVar30._12_4_ = (int)((ulonglong)local_8e8.Rotation.ZW.m128d_f64[0] >> 0x20);
        local_768.Translation.ZW.m128d_f64[0] =
             local_8e8.Scale3D.ZW.m128d_f64[0] * local_768.Translation.ZW.m128d_f64[0];
        local_768.Translation.ZW.m128d_f64[1] = local_768.Translation.ZW.m128d_f64[1] * 0.0;
        auVar75._8_4_ = SUB84(unaff_XMM6._8_8_,0);
        auVar75._0_8_ = unaff_XMM6._0_8_;
        uVar60 = (undefined4)((ulonglong)unaff_XMM6._8_8_ >> 0x20);
        auVar75._12_4_ = uVar60;
        auVar43._8_4_ = SUB84(unaff_XMM6._8_8_,0);
        auVar43._0_8_ = unaff_XMM6._0_8_;
        auVar43._12_4_ = uVar60;
        auVar10._8_4_ = SUB84(local_768.Translation.ZW.m128d_f64[1],0);
        auVar10._0_8_ = local_768.Translation.ZW.m128d_f64[0];
        auVar10._12_4_ = (int)((ulonglong)local_768.Translation.ZW.m128d_f64[1] >> 0x20);
        auVar29 = blendpd(auVar43,auVar10,2);
        auVar76._0_8_ =
             auVar75._8_8_ * local_768.Rotation.XY.m128d_f64[0] - dVar52 * unaff_XMM6._0_8_;
        auVar76._8_8_ =
             local_768.Translation.ZW.m128d_f64[0] * local_768.Rotation.XY.m128d_f64[1] -
             auVar30._8_8_ * unaff_XMM6._8_8_;
        auVar44._0_8_ =
             auVar29._0_8_ * local_8e8.Rotation.ZW.m128d_f64[0] -
             auVar42._0_8_ * local_768.Translation.ZW.m128d_f64[0];
        auVar44._8_8_ =
             auVar29._8_8_ * local_8e8.Rotation.ZW.m128d_f64[1] -
             auVar42._8_8_ * local_768.Translation.ZW.m128d_f64[1];
        dVar41 = auVar76._8_8_ + auVar76._8_8_;
        dVar47 = auVar44._0_8_ + auVar44._0_8_;
        uVar60 = SUB84(dVar47,0);
        uVar61 = (undefined4)((ulonglong)dVar47 >> 0x20);
        auVar29 = blendpd(auVar76,auVar44,2);
        auVar77._0_8_ = auVar29._0_8_ + auVar29._0_8_;
        auVar77._8_8_ = auVar29._8_8_ + auVar29._8_8_;
        auVar55._8_4_ = uVar60;
        auVar55._0_8_ = dVar41;
        auVar55._12_4_ = uVar61;
        auVar31._8_4_ = uVar60;
        auVar31._0_8_ = dVar41;
        auVar31._12_4_ = uVar61;
        auVar49._8_4_ = uVar60;
        auVar49._0_8_ = dVar41;
        auVar49._12_4_ = uVar61;
        auVar29 = blendpd(auVar49,auVar77,2);
        auVar56._0_8_ = auVar55._8_8_ * local_768.Rotation.XY.m128d_f64[0] - dVar41 * dVar52;
        auVar56._8_8_ =
             auVar77._0_8_ * local_768.Rotation.XY.m128d_f64[1] -
             auVar31._8_8_ * local_8e8.Rotation.ZW.m128d_f64[0];
        auVar32._8_4_ = SUB84(auVar77._8_8_,0);
        auVar32._0_8_ = auVar77._0_8_;
        auVar32._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
        auVar50._0_8_ =
             auVar29._0_8_ * local_8e8.Rotation.ZW.m128d_f64[0] - auVar77._0_8_ * auVar42._0_8_;
        auVar50._8_8_ =
             auVar29._8_8_ * local_8e8.Rotation.ZW.m128d_f64[1] - auVar32._8_8_ * auVar42._8_8_;
        auVar33._8_4_ = SUB84(auVar56._8_8_,0);
        auVar33._0_8_ = auVar56._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
        auVar29 = blendpd(auVar56,auVar50,2);
        local_8e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar85;
        local_8e8.Rotation.XY.m128d_f64[0] = local_768.Rotation.XY.m128d_f64[0];
        local_8e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar86;
        local_8e8.Translation.XY.m128d_f64[1] =
             0.0 - (dVar47 * local_8e8.Rotation.ZW.m128d_f64[1] + unaff_XMM6._8_8_ + auVar50._0_8_);
        local_8e8.Translation.XY.m128d_f64[0] =
             0.0 - (dVar41 * auVar72._8_8_ + unaff_XMM6._0_8_ + auVar33._8_8_);
        local_8e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_8e8.Translation.ZW.m128d_f64[0] =
             0.0 - (auVar77._0_8_ * auVar72._8_8_ + local_768.Translation.ZW.m128d_f64[0] +
                   auVar29._0_8_);
        local_8e8.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      local_888.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_888.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_888.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_888.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_888.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_888.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_888.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_888.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_888.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_888.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_888.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_888.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_888,&local_8e8,&local_7c8);
      local_948.Rotation.XY.m128d_f64[0] = local_888.Rotation.XY.m128d_f64[0];
      local_948.Rotation.XY.m128d_f64[1] = local_888.Rotation.XY.m128d_f64[1];
      local_948.Translation.XY.m128d_f64[0] = local_888.Translation.XY.m128d_f64[0];
      local_948.Translation.XY.m128d_f64[1] = local_888.Translation.XY.m128d_f64[1];
      local_948.Scale3D.XY.m128d_f64[0] = local_888.Scale3D.XY.m128d_f64[0];
      local_948.Scale3D.XY.m128d_f64[1] = local_888.Scale3D.XY.m128d_f64[1];
      local_828.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_828.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_948.Rotation.ZW.m128d_f64[0] = local_888.Rotation.ZW.m128d_f64[0];
      local_948.Rotation.ZW.m128d_f64[1] = local_888.Rotation.ZW.m128d_f64[1];
      local_828.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_828.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_948.Translation.ZW.m128d_f64[0] = local_888.Translation.ZW.m128d_f64[0];
      local_948.Translation.ZW.m128d_f64[1] = local_888.Translation.ZW.m128d_f64[1];
      local_948.Scale3D.ZW.m128d_f64[0] = local_888.Scale3D.ZW.m128d_f64[0];
      local_948.Scale3D.ZW.m128d_f64[1] = local_888.Scale3D.ZW.m128d_f64[1];
      local_828.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_828.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_828.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_828.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_828.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_828.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_828.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_828.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_828,&local_708,&local_948);
      local_948.Rotation.XY.m128d_f64[0] = local_828.Rotation.XY.m128d_f64[0];
      local_948.Rotation.XY.m128d_f64[1] = local_828.Rotation.XY.m128d_f64[1];
      local_948.Rotation.ZW.m128d_f64[0] = local_828.Rotation.ZW.m128d_f64[0];
      local_948.Rotation.ZW.m128d_f64[1] = local_828.Rotation.ZW.m128d_f64[1];
      local_948.Translation.XY.m128d_f64[0] = local_828.Translation.XY.m128d_f64[0];
      local_948.Translation.XY.m128d_f64[1] = local_828.Translation.XY.m128d_f64[1];
      local_948.Translation.ZW.m128d_f64[0] = local_828.Translation.ZW.m128d_f64[0];
      local_948.Translation.ZW.m128d_f64[1] = local_828.Translation.ZW.m128d_f64[1];
      local_948.Scale3D.XY.m128d_f64[0] = local_828.Scale3D.XY.m128d_f64[0];
      local_948.Scale3D.XY.m128d_f64[1] = local_828.Scale3D.XY.m128d_f64[1];
      local_948.Scale3D.ZW.m128d_f64[0] = local_828.Scale3D.ZW.m128d_f64[0];
      local_948.Scale3D.ZW.m128d_f64[1] = local_828.Scale3D.ZW.m128d_f64[1];
    }
    pUVar23 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar23 == (UWorld *)0x0) {
      pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    if ((pUVar23->WorldType).Value != '\x02') {
      pUVar23 = (UWorld *)this->owning_skel->_padding_;
      if (pUVar23 == (UWorld *)0x0) {
        pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
      }
      dVar62 = local_948.Scale3D.ZW.m128d_f64[1];
      dVar53 = local_948.Scale3D.ZW.m128d_f64[0];
      dVar40 = local_948.Scale3D.XY.m128d_f64[1];
      dVar13 = local_948.Scale3D.XY.m128d_f64[0];
      dVar12 = local_948.Translation.ZW.m128d_f64[1];
      dVar11 = local_948.Translation.ZW.m128d_f64[0];
      dVar3 = local_948.Translation.XY.m128d_f64[1];
      dVar52 = local_948.Translation.XY.m128d_f64[0];
      dVar47 = local_948.Rotation.ZW.m128d_f64[1];
      dVar41 = local_948.Rotation.ZW.m128d_f64[0];
      if ((pUVar23->WorldType).Value != '\x04') {
        unaff_XMM6._8_8_ = local_948.Rotation.XY.m128d_f64[1];
        unaff_XMM6._0_8_ = local_948.Rotation.XY.m128d_f64[0];
        if (((this->Debug_Hand_Locations).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
        *(undefined1 (*) [16])pFVar5 = unaff_XMM6;
        *(double *)&pFVar5[0x10].field_0x0 = dVar41;
        *(double *)(pFVar5 + 0x18) = dVar47;
        *(double *)&pFVar5[0x20].field_0x0 = dVar52;
        *(double *)(pFVar5 + 0x28) = dVar3;
        *(double *)&pFVar5[0x30].field_0x0 = dVar11;
        *(double *)(pFVar5 + 0x38) = dVar12;
        *(double *)&pFVar5[0x40].field_0x0 = dVar13;
        *(double *)(pFVar5 + 0x48) = dVar40;
        *(double *)&pFVar5[0x50].field_0x0 = dVar53;
        *(double *)(pFVar5 + 0x58) = dVar62;
      }
    }
  }
  piVar1 = &(this->HandIK_Transforms).ArrayMax;
  (this->HandIK_Transforms).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&(this->HandIK_Transforms).AllocatorInstance,0,piVar1);
  }
  dVar41 = __real_3e45798ee0000000;
  dVar47 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  if ((dVar47 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar47)) {
    local_1088 = __real_3ff0000000000000 / SQRT(dVar47);
  }
  dVar47 = (this->LookAt_Axis).field0_0x0._s_0.X;
  dVar52 = (this->LookAt_Axis).field0_0x0._s_0.Y;
  dVar3 = (this->LookAt_Axis).field0_0x0._s_0.Z;
  dVar47 = dVar52 * dVar52 + dVar47 * dVar47 + dVar3 * dVar3;
  if ((dVar47 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar47)) {
    local_11c0 = __real_3ff0000000000000 / SQRT(dVar47);
  }
  this->nsew_pole_method = false;
  if (this->pole_system_input == ENUM_NSEWPoleSystem) {
    this->nsew_pole_method = true;
  }
  this->up_arm_twist_technique = false;
  if (this->arm_twist_axis == ENUM_UpAxisTwist) {
    this->up_arm_twist_technique = true;
  }
  if (((this->Actual_Shoulder_Array).ArrayNum < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (this->Actual_Shoulder_Array).AllocatorInstance.Data;
  if ((-1 < *(int *)(pFVar5 + 8)) && (*(int *)(pFVar5 + 0xc) != -1)) {
    if (((this->Elbow_Array).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->Elbow_Array).AllocatorInstance.Data;
    if ((-1 < *(int *)(pFVar5 + 8)) && (*(int *)(pFVar5 + 0xc) != -1)) {
      if (((this->Hand_Array).ArrayNum < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Hand_Array).AllocatorInstance.Data;
      if ((-1 < *(int *)(pFVar5 + 8)) && (*(int *)(pFVar5 + 0xc) != -1)) {
        if (0 < (this->Elbow_Bone_Transform_Array).ArrayNum) {
          if (((this->Elbow_Array).ArrayNum < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (param_1,*(FCompactPoseBoneIndex *)
                                        ((this->Elbow_Array).AllocatorInstance.Data + 0xc));
          unaff_XMM6 = *(undefined1 (*) [16])(pTVar22->Rotation).XY.m128d_f64;
          dVar47 = (pTVar22->Rotation).ZW.m128d_f64[0];
          dVar52 = (pTVar22->Rotation).ZW.m128d_f64[1];
          dVar3 = (pTVar22->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar22->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar22->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar22->Translation).ZW.m128d_f64[1];
          dVar40 = (pTVar22->Scale3D).XY.m128d_f64[0];
          dVar53 = (pTVar22->Scale3D).XY.m128d_f64[1];
          dVar62 = (pTVar22->Scale3D).ZW.m128d_f64[0];
          dVar82 = (pTVar22->Scale3D).ZW.m128d_f64[1];
          if (((this->Elbow_Bone_Transform_Array).ArrayNum < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->Elbow_Bone_Transform_Array).AllocatorInstance.Data;
          *(undefined1 (*) [16])pFVar5 = unaff_XMM6;
          *(double *)&pFVar5[0x10].field_0x0 = dVar47;
          *(double *)(pFVar5 + 0x18) = dVar52;
          *(double *)&pFVar5[0x20].field_0x0 = dVar3;
          *(double *)(pFVar5 + 0x28) = dVar11;
          *(double *)&pFVar5[0x30].field_0x0 = dVar12;
          *(double *)(pFVar5 + 0x38) = dVar13;
          *(double *)&pFVar5[0x40].field_0x0 = dVar40;
          *(double *)(pFVar5 + 0x48) = dVar53;
          *(double *)&pFVar5[0x50].field_0x0 = dVar62;
          *(double *)(pFVar5 + 0x58) = dVar82;
        }
        if (0 < (this->Hand_Default_Transform_Array).ArrayNum) {
          if (((this->Hand_Array).ArrayNum < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (param_1,*(FCompactPoseBoneIndex *)
                                        ((this->Hand_Array).AllocatorInstance.Data + 0xc));
          unaff_XMM6 = *(undefined1 (*) [16])(pTVar22->Rotation).XY.m128d_f64;
          dVar47 = (pTVar22->Rotation).ZW.m128d_f64[0];
          dVar52 = (pTVar22->Rotation).ZW.m128d_f64[1];
          dVar3 = (pTVar22->Translation).XY.m128d_f64[0];
          dVar11 = (pTVar22->Translation).XY.m128d_f64[1];
          dVar12 = (pTVar22->Translation).ZW.m128d_f64[0];
          dVar13 = (pTVar22->Translation).ZW.m128d_f64[1];
          dVar40 = (pTVar22->Scale3D).XY.m128d_f64[0];
          dVar53 = (pTVar22->Scale3D).XY.m128d_f64[1];
          dVar62 = (pTVar22->Scale3D).ZW.m128d_f64[0];
          dVar82 = (pTVar22->Scale3D).ZW.m128d_f64[1];
          if (((this->Hand_Default_Transform_Array).ArrayNum < 1) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->Hand_Default_Transform_Array).AllocatorInstance.Data;
          *(undefined1 (*) [16])pFVar5 = unaff_XMM6;
          *(double *)&pFVar5[0x10].field_0x0 = dVar47;
          *(double *)(pFVar5 + 0x18) = dVar52;
          *(double *)&pFVar5[0x20].field_0x0 = dVar3;
          *(double *)(pFVar5 + 0x28) = dVar11;
          *(double *)&pFVar5[0x30].field_0x0 = dVar12;
          *(double *)(pFVar5 + 0x38) = dVar13;
          *(double *)&pFVar5[0x40].field_0x0 = dVar40;
          *(double *)(pFVar5 + 0x48) = dVar53;
          *(double *)&pFVar5[0x50].field_0x0 = dVar62;
          *(double *)(pFVar5 + 0x58) = dVar82;
        }
        if (((this->Debug_Hand_Locations).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
        dVar47 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar52 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar60 = (undefined4)((ulonglong)dVar52 >> 0x20);
        local_1058 = *(double *)(pFVar5 + 0x30);
        local_1068 = *(double *)(pFVar5 + 0x20);
        dStack_1060 = *(double *)(pFVar5 + 0x28);
        dVar40 = local_1058 - (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
        auVar51._8_4_ = SUB84(dVar52,0);
        auVar51._0_8_ = dVar47;
        auVar51._12_4_ = uVar60;
        auVar64._0_8_ =
             (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar64._8_8_ =
             (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        auVar15._4_8_ = unaff_XMM6._8_8_;
        auVar15._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
        auVar69._0_8_ = auVar15._0_8_ << 0x20;
        auVar69._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar69._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar57._8_4_ = SUB84(dVar52,0);
        auVar57._0_8_ = dVar47;
        auVar57._12_4_ = uVar60;
        dVar53 = auVar51._8_8_;
        auVar42 = blendpd(auVar57,auVar64,2);
        auVar34._8_4_ = SUB84(auVar64._0_8_,0);
        auVar34._0_8_ = dVar53;
        auVar34._12_4_ = (int)((ulonglong)auVar64._0_8_ >> 0x20);
        dVar12 = local_1068 - (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
        dVar13 = dStack_1060 - (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
        uVar60 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar87._8_4_ = SUB84(dVar13,0);
        auVar87._0_8_ = dVar12;
        auVar87._12_4_ = uVar60;
        auVar45._8_4_ = SUB84(dVar13,0);
        auVar45._0_8_ = dVar12;
        auVar45._12_4_ = uVar60;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = dVar40;
        auVar29 = blendpd(auVar45,auVar14,2);
        auVar88._0_8_ = auVar87._8_8_ * dVar47 - dVar53 * dVar12;
        auVar88._8_8_ = dVar40 * dVar52 - auVar34._8_8_ * dVar13;
        auVar46._0_8_ = auVar29._0_8_ * auVar64._0_8_ - auVar42._0_8_ * dVar40;
        auVar46._8_8_ = auVar29._8_8_ * auVar64._8_8_ - auVar42._8_8_ * 0.0;
        dVar3 = auVar88._8_8_ + auVar88._8_8_;
        dVar11 = auVar46._0_8_ + auVar46._0_8_;
        uVar60 = SUB84(dVar11,0);
        uVar61 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar29 = blendpd(auVar88,auVar46,2);
        auVar83._8_4_ = uVar60;
        auVar83._0_8_ = dVar3;
        auVar83._12_4_ = uVar61;
        auVar35._8_4_ = uVar60;
        auVar35._0_8_ = dVar3;
        auVar35._12_4_ = uVar61;
        auVar78._8_4_ = uVar60;
        auVar78._0_8_ = dVar3;
        auVar78._12_4_ = uVar61;
        auVar89._0_8_ = auVar29._0_8_ + auVar29._0_8_;
        auVar89._8_8_ = auVar29._8_8_ + auVar29._8_8_;
        auVar79 = blendpd(auVar78,auVar89,2);
        auVar84._0_8_ = auVar83._8_8_ * dVar47 - dVar3 * dVar53;
        auVar84._8_8_ = auVar89._0_8_ * dVar52 - auVar35._8_8_ * auVar64._0_8_;
        auVar36._8_4_ = SUB84(auVar89._8_8_,0);
        auVar36._0_8_ = auVar89._0_8_;
        auVar36._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
        auVar29 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.XY.m128d_f64;
        auVar80._0_8_ = auVar79._0_8_ * auVar64._0_8_ - auVar89._0_8_ * auVar42._0_8_;
        auVar80._8_8_ = auVar79._8_8_ * auVar64._8_8_ - auVar36._8_8_ * auVar42._8_8_;
        auVar42 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64;
        auVar70._8_8_ = auVar69._8_8_;
        auVar70._0_8_ = auVar42._0_8_;
        auVar73._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar29._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar29._0_4_);
        auVar73._8_4_ = _UNK_15061cc88 & auVar29._8_4_;
        auVar73._12_4_ = _UNK_15061cc8c & auVar29._12_4_;
        lVar25 = -(ulonglong)
                  ((double)CONCAT44(auVar42._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    auVar42._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
        lVar26 = -(ulonglong)
                  (auVar73._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar27 = -(ulonglong)
                  (auVar73._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar37._8_4_ = SUB84(auVar84._8_8_,0);
        auVar37._0_8_ = auVar84._0_8_;
        auVar37._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
        auVar74._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar29._4_4_,
                              ~(uint)lVar26 & auVar29._0_4_);
        auVar74._8_4_ = ~(uint)lVar27 & auVar29._8_4_;
        auVar74._12_4_ = ~(uint)((ulonglong)lVar27 >> 0x20) & auVar29._12_4_;
        auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar70);
        local_11d8 = auVar74._0_8_ * (dVar3 * auVar64._8_8_ + dVar12 + auVar37._8_8_) +
                     (this->Hand_Input_Info).Arm_Aiming_Offset.field0_0x0._s_0.X;
        dStack_11d0 = auVar74._8_8_ * (dVar11 * auVar64._8_8_ + dVar13 + auVar80._0_8_) +
                      (this->Hand_Input_Info).Arm_Aiming_Offset.field0_0x0._s_0.Y;
        auVar42 = blendpd(auVar84,auVar80,2);
        local_11c8 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar29._4_4_,
                                      ~(uint)lVar25 & auVar29._0_4_) *
                     (auVar89._0_8_ * auVar64._8_8_ + dVar40 + auVar42._0_8_) +
                     (this->Hand_Input_Info).Arm_Aiming_Offset.field0_0x0._s_0.Z;
        if (((this->Hand_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Hand_Array).AllocatorInstance.Data + 0xc));
        local_10f8 = (pTVar22->Rotation).XY.m128d_f64[0];
        dStack_10f0 = (pTVar22->Rotation).XY.m128d_f64[1];
        auVar29 = *(undefined1 (*) [16])(pTVar22->Translation).XY.m128d_f64;
        dVar47 = (pTVar22->Translation).ZW.m128d_f64[0];
        dStack_10d0 = (pTVar22->Translation).ZW.m128d_f64[1];
        local_10e8 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dStack_10e0 = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_10c8 = (pTVar22->Scale3D).XY.m128d_f64[0];
        dStack_10c0 = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_10b8 = (pTVar22->Scale3D).ZW.m128d_f64[0];
        dStack_10b0 = (pTVar22->Scale3D).ZW.m128d_f64[1];
        local_10d8 = dVar47;
        local_1098 = auVar29;
        if (((this->Actual_Shoulder_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Actual_Shoulder_Array).AllocatorInstance.Data + 0xc));
        local_1198 = (pTVar22->Rotation).XY.m128d_f64[0];
        dStack_1190 = (pTVar22->Rotation).XY.m128d_f64[1];
        dVar52 = (pTVar22->Translation).XY.m128d_f64[0];
        dVar3 = (pTVar22->Translation).XY.m128d_f64[1];
        dVar11 = (pTVar22->Translation).ZW.m128d_f64[0];
        dVar12 = (pTVar22->Translation).ZW.m128d_f64[1];
        local_1188 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dStack_1180 = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_1178 = (pTVar22->Scale3D).XY.m128d_f64[0];
        dStack_1170 = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_1168 = (pTVar22->Scale3D).ZW.m128d_f64[0];
        dStack_1160 = (pTVar22->Scale3D).ZW.m128d_f64[1];
        if (((this->Elbow_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Elbow_Array).AllocatorInstance.Data + 0xc));
        local_1158 = (pTVar22->Rotation).XY.m128d_f64[0];
        dStack_1150 = (pTVar22->Rotation).XY.m128d_f64[1];
        local_1148 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dStack_1140 = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_1138 = (pTVar22->Translation).XY.m128d_f64[0];
        dStack_1130 = (pTVar22->Translation).XY.m128d_f64[1];
        local_1128 = (pTVar22->Translation).ZW.m128d_f64[0];
        dStack_1120 = (pTVar22->Translation).ZW.m128d_f64[1];
        local_1118 = (pTVar22->Scale3D).XY.m128d_f64[0];
        dStack_1110 = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_1108 = (pTVar22->Scale3D).ZW.m128d_f64[0];
        dStack_1100 = (pTVar22->Scale3D).ZW.m128d_f64[1];
        if (((this->Hand_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Hand_Array).AllocatorInstance.Data + 0xc));
        local_11b8 = (pTVar22->Scale3D).XY.m128d_f64[0];
        dStack_11b0 = (pTVar22->Scale3D).XY.m128d_f64[1];
        dVar13 = (pTVar22->Rotation).XY.m128d_f64[0];
        dVar40 = (pTVar22->Rotation).XY.m128d_f64[1];
        dVar53 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dVar62 = (pTVar22->Rotation).ZW.m128d_f64[1];
        dVar82 = (pTVar22->Translation).XY.m128d_f64[0];
        dVar4 = (pTVar22->Translation).XY.m128d_f64[1];
        dVar17 = (pTVar22->Translation).ZW.m128d_f64[0];
        dVar18 = (pTVar22->Translation).ZW.m128d_f64[1];
        local_11a8 = (pTVar22->Scale3D).ZW.m128d_f64[0];
        dStack_11a0 = (pTVar22->Scale3D).ZW.m128d_f64[1];
        if (((this->Actual_Shoulder_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Actual_Shoulder_Array).AllocatorInstance.Data + 0xc));
        dVar9 = auVar29._0_8_ - dVar52;
        local_f78 = (pTVar22->Rotation).XY.m128d_f64[0];
        dStack_f70 = (pTVar22->Rotation).XY.m128d_f64[1];
        local_1040 = (pTVar22->Translation).ZW.m128d_f64[0];
        local_f68 = (pTVar22->Rotation).ZW.m128d_f64[0];
        dStack_f60 = (pTVar22->Rotation).ZW.m128d_f64[1];
        local_1050 = (pTVar22->Translation).XY.m128d_f64[0];
        dStack_1048 = (pTVar22->Translation).XY.m128d_f64[1];
        local_f38 = (pTVar22->Scale3D).XY.m128d_f64[0];
        dStack_f30 = (pTVar22->Scale3D).XY.m128d_f64[1];
        local_1038 = local_11d8;
        dStack_1030 = dStack_11d0;
        fVar2 = this->Limbs_Clamp;
        local_f28 = (pTVar22->Scale3D).ZW.m128d_f64[0];
        dStack_f20 = (pTVar22->Scale3D).ZW.m128d_f64[1];
        local_1028 = local_11c8;
        local_11f0._s_0.Z = local_11c8 - dVar11;
        local_11f0._s_0.X = local_11d8 - dVar52;
        local_11f0._s_0.Y = dStack_11d0 - dVar3;
        auVar16._4_8_ = dStack_11d0;
        auVar16._0_4_ = auVar29._4_4_;
        auVar58._0_8_ = auVar16._0_8_ << 0x20;
        auVar58._8_4_ = auVar29._8_4_;
        auVar58._12_4_ = auVar29._12_4_;
        fVar81 = (float)SQRT(local_11f0._s_0.Y * local_11f0._s_0.Y +
                             local_11f0._s_0.X * local_11f0._s_0.X +
                             local_11f0._s_0.Z * local_11f0._s_0.Z);
        dVar54 = auVar58._8_8_ - dVar3;
        fVar66 = (float)SQRT(dVar54 * dVar54 + dVar9 * dVar9 + (dVar47 - dVar11) * (dVar47 - dVar11)
                            );
        local_1020 = dVar52;
        dStack_1018 = dVar3;
        local_1010 = dVar11;
        local_1008 = auVar29;
        local_ff8 = dVar47;
        local_ff0 = dVar52;
        dStack_fe8 = dVar3;
        local_fe0 = dVar11;
        local_f58 = dVar82;
        dStack_f50 = dVar4;
        local_f48 = dVar17;
        dStack_f40 = dVar18;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_11f0._s_0,dVar41);
        fVar39 = (float)((uint)(this->Hand_Input_Info).Minimum_Extension &
                        __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar66;
        if (this->Use_Physics_Adaptation == false) {
          fVar66 = (float)((uint)(this->Hand_Input_Info).Maximum_Extension &
                          __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar66;
          if (fVar81 <= fVar66) {
            fVar66 = fVar81;
          }
          if (fVar66 <= fVar39) {
            fVar66 = fVar39;
          }
          dVar47 = (double)fVar66;
          dVar82 = local_11f0._s_0.X * dVar47 + dVar52;
          dVar41 = local_11f0._s_0.Y * dVar47 + dVar3;
          dVar47 = local_11f0._s_0.Z * dVar47 + dVar11;
          local_fa8 = dVar52;
          dStack_fa0 = dVar3;
          local_f98 = dVar11;
          local_f90 = dVar82;
          dStack_f88 = dVar41;
          local_f80 = dVar47;
        }
        else {
          fVar28 = fVar66 * __real_43fa0000;
          if (fVar81 <= fVar66 * __real_43fa0000) {
            fVar28 = fVar81;
          }
          if (fVar28 <= fVar39) {
            fVar28 = fVar39;
          }
          dVar47 = (double)fVar28;
          dVar82 = local_11f0._s_0.X * dVar47 + dVar52;
          dVar41 = local_11f0._s_0.Y * dVar47 + dVar3;
          dVar47 = local_11f0._s_0.Z * dVar47 + dVar11;
          local_fd8 = dVar52;
          dStack_fd0 = dVar3;
          local_fc8 = dVar11;
          local_fc0 = dVar82;
          dStack_fb8 = dVar41;
          local_fb0 = dVar47;
        }
        local_10a8 = (this->Hand_Input_Info).Elbow_Pole_Offset.field0_0x0._s_0.X;
        dStack_10a0 = (this->Hand_Input_Info).Elbow_Pole_Offset.field0_0x0._s_0.Y;
        dVar4 = (this->Hand_Input_Info).Elbow_Pole_Offset.field0_0x0._s_0.Z;
        if (((this->Debug_Hand_Locations).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
        dVar17 = *(double *)pFVar5;
        dVar18 = *(double *)(pFVar5 + 8);
        dVar9 = *(double *)(pFVar5 + 0x10);
        dVar54 = *(double *)(pFVar5 + 0x18);
        if ((this->Override_Hand_Rotation != false) &&
           (dVar13 = dVar17, dVar40 = dVar18, dVar53 = dVar9, dVar62 = dVar54,
           this->hand_rotation_method == ENUM_AdditiveRotation)) {
          dVar62 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar65 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar67 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar71 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar59._8_4_ = SUB84(dVar71,0);
          auVar59._0_8_ = dVar67;
          auVar59._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
          auVar38._8_4_ = SUB84(dVar67,0);
          auVar38._0_8_ = dVar67;
          auVar38._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
          dVar13 = dVar54 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar17 * auVar59._8_8_ +
                   dVar9 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar67 * dVar18 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar40 = dVar9 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar18 * dVar71 +
                   dVar54 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + auVar38._8_8_ * dVar17 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar53 = dVar62 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar9 * auVar59._8_8_ +
                   dVar17 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar67 * dVar54 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar62 = dVar62 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                   + dVar54 * dVar71 +
                   dVar18 * dVar65 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar67 * dVar9 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        }
        ArmIKParamStruct::ArmIKParamStruct(&local_6a8);
        local_6a8.mesh_component_transform.Rotation.XY.m128d_f64[0] =
             (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
        local_6a8.mesh_component_transform.Rotation.XY.m128d_f64[1] =
             (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
        local_6a8.mesh_component_transform.Rotation.ZW.m128d_f64[0] =
             (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
        local_6a8.mesh_component_transform.Rotation.ZW.m128d_f64[1] =
             (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
        local_6a8.mesh_component_transform.Translation.XY.m128d_f64[0] =
             (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
        local_6a8.mesh_component_transform.Translation.XY.m128d_f64[1] =
             (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
        local_6a8.mesh_component_transform.Translation.ZW.m128d_f64[0] =
             (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
        local_6a8.mesh_component_transform.Translation.ZW.m128d_f64[1] =
             (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
        local_6a8.mesh_component_transform.Scale3D.XY.m128d_f64[0] =
             (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
        local_6a8.mesh_component_transform.Scale3D.XY.m128d_f64[1] =
             (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
        local_6a8.mesh_component_transform.Scale3D.ZW.m128d_f64[0] =
             (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
        local_6a8.mesh_component_transform.Scale3D.ZW.m128d_f64[1] =
             (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
        if (((this->Hand_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (FName *)(this->Hand_Array).AllocatorInstance.Data;
        local_6a8.FeetBone.BoneName = *pFVar6;
        local_6a8.FeetBone._8_4_ = pFVar6[1].ComparisonIndex.Value;
        local_6a8.FeetBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)pFVar6[1].Number;
        if (((this->Elbow_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (FName *)(this->Elbow_Array).AllocatorInstance.Data;
        local_6a8.KneeBone.BoneName = *pFVar6;
        local_6a8.KneeBone._8_4_ = pFVar6[1].ComparisonIndex.Value;
        local_6a8.KneeBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)pFVar6[1].Number;
        if (((this->Actual_Shoulder_Array).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (FName *)(this->Actual_Shoulder_Array).AllocatorInstance.Data;
        local_6a8.ThighBone.BoneName = *pFVar6;
        local_6a8.ThighBone._8_4_ = pFVar6[1].ComparisonIndex.Value;
        local_6a8.ThighBone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)pFVar6[1].Number;
        local_6a8.ThighTransform.Scale3D.XY.m128d_f64[0] = local_11b8;
        local_6a8.ThighTransform.Scale3D.XY.m128d_f64[1] = dStack_11b0;
        local_6a8.ThighTransform.Scale3D.ZW.m128d_f64[0] = local_11a8;
        local_6a8.ThighTransform.Scale3D.ZW.m128d_f64[1] = dStack_11a0;
        local_6a8.twist_elbow_bone.BoneName = (this->Hand_Input_Info).Twist_Forearm_Bone.BoneName;
        local_6a8.Shoulder_Trans.Rotation.XY.m128d_f64[0] = local_1198;
        local_6a8.Shoulder_Trans.Rotation.XY.m128d_f64[1] = dStack_1190;
        local_6a8.Shoulder_Trans.Rotation.ZW.m128d_f64[0] = local_1188;
        local_6a8.Shoulder_Trans.Rotation.ZW.m128d_f64[1] = dStack_1180;
        local_6a8.twist_elbow_bone._8_4_ =
             *(undefined4 *)&(this->Hand_Input_Info).Twist_Forearm_Bone.field_0x8;
        local_6a8.Shoulder_Trans.Scale3D.XY.m128d_f64[0] = local_1178;
        local_6a8.Shoulder_Trans.Scale3D.XY.m128d_f64[1] = dStack_1170;
        local_6a8.Shoulder_Trans.Scale3D.ZW.m128d_f64[0] = local_1168;
        local_6a8.Shoulder_Trans.Scale3D.ZW.m128d_f64[1] = dStack_1160;
        local_6a8.twist_elbow_bone.CachedCompactPoseIndex =
             (this->Hand_Input_Info).Twist_Forearm_Bone.CachedCompactPoseIndex;
        local_6a8.Hand_Trans.Rotation.XY.m128d_f64[0] = local_10f8;
        local_6a8.Hand_Trans.Rotation.XY.m128d_f64[1] = dStack_10f0;
        local_6a8.twist_shoulder_bone.BoneName =
             (this->Hand_Input_Info).Twist_Shoulder_Bone.BoneName;
        local_6a8.Hand_Trans.Rotation.ZW.m128d_f64[0] = local_10e8;
        local_6a8.Hand_Trans.Rotation.ZW.m128d_f64[1] = dStack_10e0;
        local_6a8.Hand_Trans.Translation.XY.m128d_f64[0] = (double)local_1098._0_8_;
        local_6a8.Hand_Trans.Translation.XY.m128d_f64[1] = (double)local_1098._8_8_;
        local_6a8.Hand_Trans.Translation.ZW.m128d_f64[0] = local_10d8;
        local_6a8.Hand_Trans.Translation.ZW.m128d_f64[1] = dStack_10d0;
        local_6a8.twist_shoulder_bone._8_4_ =
             *(undefined4 *)&(this->Hand_Input_Info).Twist_Shoulder_Bone.field_0x8;
        local_6a8.ThighTransform.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar40,0);
        local_6a8.ThighTransform.Rotation.XY.m128d_f64[0] = dVar13;
        local_6a8.ThighTransform.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar40 >> 0x20);
        local_6a8.Hand_Trans.Scale3D.XY.m128d_f64[0] = local_10c8;
        local_6a8.Hand_Trans.Scale3D.XY.m128d_f64[1] = dStack_10c0;
        local_6a8.Hand_Trans.Scale3D.ZW.m128d_f64[0] = local_10b8;
        local_6a8.Hand_Trans.Scale3D.ZW.m128d_f64[1] = dStack_10b0;
        local_6a8.twist_shoulder_bone.CachedCompactPoseIndex =
             (this->Hand_Input_Info).Twist_Shoulder_Bone.CachedCompactPoseIndex;
        local_6a8.ThighTransform.Translation.ZW.m128d_f64[1] = 0.0;
        local_6a8.Knee_Trans.Rotation.XY.m128d_f64[0] = local_1158;
        local_6a8.Knee_Trans.Rotation.XY.m128d_f64[1] = dStack_1150;
        local_6a8.Knee_Trans.Rotation.ZW.m128d_f64[0] = local_1148;
        local_6a8.Knee_Trans.Rotation.ZW.m128d_f64[1] = dStack_1140;
        local_6a8.Knee_Trans.Translation.XY.m128d_f64[0] = local_1138;
        local_6a8.Knee_Trans.Translation.XY.m128d_f64[1] = dStack_1130;
        local_6a8.Knee_Trans.Translation.ZW.m128d_f64[0] = local_1128;
        local_6a8.Knee_Trans.Translation.ZW.m128d_f64[1] = dStack_1120;
        local_6a8.Knee_Trans.Scale3D.XY.m128d_f64[0] = local_1118;
        local_6a8.Knee_Trans.Scale3D.XY.m128d_f64[1] = dStack_1110;
        local_6a8.Knee_Trans.Scale3D.ZW.m128d_f64[0] = local_1108;
        local_6a8.Knee_Trans.Scale3D.ZW.m128d_f64[1] = dStack_1100;
        local_6a8.JointLocation.field0_0x0._s_0.X = 0.0;
        local_6a8.JointLocation.field0_0x0._s_0.Y = 0.0;
        local_6a8.JointLocation.field0_0x0._s_0.Z = 0.0;
        local_6a8.Knee_Pole_Offset.field0_0x0._s_0.X = 0.0;
        local_6a8.Knee_Pole_Offset.field0_0x0._s_0.Y = 0.0;
        local_6a8.Knee_Pole_Offset.field0_0x0._s_0.Z = 0.0;
        local_6a8.transform_offset.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_6a8.transform_offset.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_6a8.transform_offset.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_6a8.transform_offset.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_6a8.transform_offset.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_6a8.transform_offset.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_6a8.Common_Spine_Modified_Transform.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_6a8.Common_Spine_Modified_Transform.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_6a8.Common_Spine_Modified_Transform.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_6a8.Limb_Rotation_Offset.Pitch = (this->Limb_Rotation_Offset).Pitch;
        local_6a8.Limb_Rotation_Offset.Yaw = (this->Limb_Rotation_Offset).Yaw;
        local_6a8.Auto_Calculated_Poles = this->pole_system_input == ENUM_PoseBendSystem;
        local_6a8.Limb_Rotation_Offset.Roll = (this->Limb_Rotation_Offset).Roll;
        local_6a8.is_reach_mode = true;
        local_6a8.LookAt_Axis_Input.field0_0x0._s_0.Z = (this->LookAt_Axis).field0_0x0._s_0.Z;
        local_1080 = local_10a8;
        dStack_1078 = dStack_10a0;
        local_6a8.arm_alpha = 1.0;
        local_6a8.Elbow_Pole_Offset.field0_0x0._s_0.X = local_10a8;
        local_6a8.Elbow_Pole_Offset.field0_0x0._s_0.Y = dStack_10a0;
        local_6a8.LookAt_Axis_Input.field0_0x0._s_0.X = (this->LookAt_Axis).field0_0x0._s_0.X;
        local_6a8.LookAt_Axis_Input.field0_0x0._s_0.Y = (this->LookAt_Axis).field0_0x0._s_0.Y;
        local_6a8.Up_Vector_Val.field0_0x0._s_0.Z = (this->Upward_Axis).field0_0x0._s_0.Z;
        local_6a8.Up_Vector_Val.field0_0x0._s_0.X = (this->Upward_Axis).field0_0x0._s_0.X;
        local_6a8.Up_Vector_Val.field0_0x0._s_0.Y = (this->Upward_Axis).field0_0x0._s_0.Y;
        local_6a8.custom_arm_size.Use_Custom_Arm_Sizes = false;
        local_6a8.custom_arm_size._1_3_ = 0;
        local_6a8.custom_arm_size.custom_upperArm_length = 0.0;
        local_6a8.override_hand_rotation = this->Override_Hand_Rotation;
        local_6a8.Use_NSEW_Poles = this->nsew_pole_method;
        local_6a8.up_arm_twist_technique = this->up_arm_twist_technique;
        local_6a8.Separate_Arms_Logic_Used = this->Use_Separate_Targets;
        local_6a8.bAllowHandStretching = this->allow_arm_stretch;
        local_6a8.Let_Arm_Twist_With_Hand = this->Let_Arm_Twist_With_Hand;
        local_6a8.rotation_method = this->hand_rotation_method;
        local_6a8.custom_arm_size.custom_lowerArm_length = 0.0;
        local_6a8.should_shoulder_twist_if_inward =
             (this->Hand_Input_Info).should_shoulder_twist_if_inward;
        local_6a8.clavicle_only_bend_if_limit = (this->Hand_Input_Info).clavicle_part_of_extension;
        local_6a8.Extra_Elbow_Pole_Offset.field0_0x0._s_0.X =
             (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.X;
        local_6a8.Extra_Elbow_Pole_Offset.field0_0x0._s_0.Y =
             (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Y;
        local_6a8.Extra_Elbow_Pole_Offset.field0_0x0._s_0.Z =
             (this->Extra_Elbow_Pole_Offset).field0_0x0._s_0.Z;
        local_6a8.Common_Spine_Modified_Transform.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_6a8.Common_Spine_Modified_Transform.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_6a8.Common_Spine_Modified_Transform.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_6a8.Extra_Hand_Offset.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_6a8.Extra_Hand_Offset.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_6a8.Extra_Hand_Offset.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_6a8.Extra_Hand_Offset.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_6a8.Extra_Hand_Offset.Scale3D.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        local_6a8.Extra_Hand_Offset.Scale3D.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        local_6a8.Knee_Transform_Default.Rotation.XY.m128d_f64[0] = local_1158;
        local_6a8.Knee_Transform_Default.Rotation.XY.m128d_f64[1] = dStack_1150;
        local_6a8.Knee_Transform_Default.Rotation.ZW.m128d_f64[0] = local_1148;
        local_6a8.Knee_Transform_Default.Rotation.ZW.m128d_f64[1] = dStack_1140;
        local_6a8.Knee_Transform_Default.Translation.XY.m128d_f64[0] = local_1138;
        local_6a8.Knee_Transform_Default.Translation.XY.m128d_f64[1] = dStack_1130;
        local_6a8.Knee_Transform_Default.Translation.ZW.m128d_f64[0] = local_1128;
        local_6a8.Knee_Transform_Default.Translation.ZW.m128d_f64[1] = dStack_1120;
        local_6a8.Knee_Transform_Default.Scale3D.XY.m128d_f64[0] = local_1118;
        local_6a8.Knee_Transform_Default.Scale3D.XY.m128d_f64[1] = dStack_1110;
        local_6a8.Knee_Transform_Default.Scale3D.ZW.m128d_f64[0] = local_1108;
        local_6a8.Knee_Transform_Default.Scale3D.ZW.m128d_f64[1] = dStack_1100;
        local_1070 = dVar4;
        local_6a8.ThighTransform.Rotation.ZW.m128d_f64[0] = dVar53;
        local_6a8.ThighTransform.Rotation.ZW.m128d_f64[1] = dVar62;
        local_6a8.ThighTransform.Translation.XY.m128d_f64[0] = dVar82;
        local_6a8.ThighTransform.Translation.XY.m128d_f64[1] = dVar41;
        local_6a8.ThighTransform.Translation.ZW.m128d_f64[0] = dVar47;
        local_6a8.Shoulder_Trans.Translation.XY.m128d_f64[0] = dVar52;
        local_6a8.Shoulder_Trans.Translation.XY.m128d_f64[1] = dVar3;
        local_6a8.Shoulder_Trans.Translation.ZW.m128d_f64[0] = dVar11;
        local_6a8.Shoulder_Trans.Translation.ZW.m128d_f64[1] = dVar12;
        local_6a8.Hand_Clamp_Value = fVar2;
        local_6a8.Elbow_Pole_Offset.field0_0x0._s_0.Z = dVar4;
        local_6a8.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.X =
             local_6a8.LookAt_Axis_Input.field0_0x0._s_0.X;
        local_6a8.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.Y =
             local_6a8.LookAt_Axis_Input.field0_0x0._s_0.Y;
        local_6a8.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.Z =
             local_6a8.LookAt_Axis_Input.field0_0x0._s_0.Z;
        if (((this->Last_Shoulder_Angles).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy(&local_f18,&local_6a8,0x5d0);
        UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified
                  (param_2,this->owning_skel,&local_f18,&this->Hand_Input_Info,
                   (float *)(this->Last_Shoulder_Angles).AllocatorInstance.Data,
                   &this->HandIK_Transforms);
      }
    }
  }
  return;
}

// ConditionalDebugDraw @ 14d336ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_DragonTwistArmSolver::ConditionalDebugDraw
          (FAnimNode_DragonTwistArmSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// Dragon_VectorCreation @ 14d339030

void __thiscall
FAnimNode_DragonTwistArmSolver::Dragon_VectorCreation
          (FAnimNode_DragonTwistArmSolver *this,bool param_1,TTransform<double> *param_2,
          FCSPose<FCompactPose> *param_3)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d3391f0

void __thiscall
FAnimNode_DragonTwistArmSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonTwistArmSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d339220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_DragonTwistArmSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonTwistArmSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  UWorld *pUVar1;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->DisplayLineTrace == false) {
    pUVar1 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    if ((pUVar1->WorldType).Value == '\x04') {
      return;
    }
  }
  ArmIK_System(this,&param_1->Pose,param_1,&local_18);
  GetAnimatedPoseInfo(this,&param_1->Pose,param_2);
  return;
}

// Evaluate_AnyThread @ 14d33bc70

void __thiscall
FAnimNode_DragonTwistArmSolver::Evaluate_AnyThread
          (FAnimNode_DragonTwistArmSolver *this,FPoseContext *param_1)

{
  return;
}

// GetAnimatedPoseInfo @ 14d345f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_DragonTwistArmSolver::GetAnimatedPoseInfo
          (FAnimNode_DragonTwistArmSolver *this,FCSPose<FCompactPose> *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  TTransform<double> *pTVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  int *piVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_178 [32];
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_120;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_2 != &local_120) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayMax = 0;
    param_2->ArrayNum = 0;
  }
  piVar25 = &param_2->ArrayMax;
  uVar24 = 0;
  if (0 < (this->HandIK_Transforms).ArrayNum) {
    lVar26 = 0;
    do {
      uVar22 = ~uVar24 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar24 < (this->HandIK_Transforms).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HandIK_Transforms).AllocatorInstance.Data;
      uVar18 = 0;
      if ((int)uVar24 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + lVar26) =
           *(undefined4 *)(pFVar3 + lVar26);
      iVar19 = (this->HandIK_Transforms).ArrayNum;
      if (this->Internal_Switched_Interpolation_bool == false) {
        uVar18 = 0;
        if ((int)uVar24 < iVar19) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar23 = (this->HandIK_Transforms).AllocatorInstance.Data;
        pFVar3 = pFVar23 + lVar26 + 0x10;
        uVar27 = *(undefined4 *)pFVar3;
        uVar28 = *(undefined4 *)(pFVar3 + 4);
        uVar29 = *(undefined4 *)(pFVar3 + 8);
        uVar30 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar23 + lVar26 + 0x20;
        uVar31 = *(undefined4 *)pFVar3;
        uVar32 = *(undefined4 *)(pFVar3 + 4);
        uVar33 = *(undefined4 *)(pFVar3 + 8);
        uVar34 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar23 + lVar26 + 0x30;
        uVar35 = *(undefined4 *)pFVar3;
        uVar36 = *(undefined4 *)(pFVar3 + 4);
        uVar37 = *(undefined4 *)(pFVar3 + 8);
        uVar38 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar23 + lVar26 + 0x40;
        uVar39 = *(undefined4 *)pFVar3;
        uVar40 = *(undefined4 *)(pFVar3 + 4);
        uVar41 = *(undefined4 *)(pFVar3 + 8);
        uVar42 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar23 + lVar26 + 0x50;
        uVar43 = *(undefined4 *)pFVar3;
        uVar44 = *(undefined4 *)(pFVar3 + 4);
        uVar45 = *(undefined4 *)(pFVar3 + 8);
        uVar46 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar23 = pFVar23 + lVar26 + 0x60;
        uVar47 = *(undefined4 *)pFVar23;
        uVar48 = *(undefined4 *)(pFVar23 + 4);
        uVar49 = *(undefined4 *)(pFVar23 + 8);
        uVar50 = *(undefined4 *)(pFVar23 + 0xc);
        uVar18 = 0;
        if ((int)uVar24 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        fVar1 = this->Interpolation_Speed;
        fVar2 = this->delta_seconds_saved;
        uVar18 = 0;
        if ((int)uVar24 < iVar19) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->HandIK_Transforms).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar24 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar20 = UKismetMathLibrary::TInterpTo
                            (&local_108,
                             (TTransform<double> *)
                             ((this->Lerp_HandIK_Transforms).AllocatorInstance.Data +
                             (longlong)(int)uVar24 * 0x70 + 0x10),
                             (TTransform<double> *)(pFVar3 + (longlong)(int)uVar24 * 0x70 + 0x10),
                             fVar2,fVar1);
        uVar27 = *(undefined4 *)(pTVar20->Rotation).XY.m128d_f64;
        uVar28 = *(undefined4 *)((longlong)(pTVar20->Rotation).XY.m128d_f64 + 4);
        uVar29 = *(undefined4 *)((pTVar20->Rotation).XY.m128d_f64 + 1);
        uVar30 = *(undefined4 *)((longlong)(pTVar20->Rotation).XY.m128d_f64 + 0xc);
        uVar31 = *(undefined4 *)(pTVar20->Rotation).ZW.m128d_f64;
        uVar32 = *(undefined4 *)((longlong)(pTVar20->Rotation).ZW.m128d_f64 + 4);
        uVar33 = *(undefined4 *)((pTVar20->Rotation).ZW.m128d_f64 + 1);
        uVar34 = *(undefined4 *)((longlong)(pTVar20->Rotation).ZW.m128d_f64 + 0xc);
        uVar35 = *(undefined4 *)(pTVar20->Translation).XY.m128d_f64;
        uVar36 = *(undefined4 *)((longlong)(pTVar20->Translation).XY.m128d_f64 + 4);
        uVar37 = *(undefined4 *)((pTVar20->Translation).XY.m128d_f64 + 1);
        uVar38 = *(undefined4 *)((longlong)(pTVar20->Translation).XY.m128d_f64 + 0xc);
        uVar39 = *(undefined4 *)(pTVar20->Translation).ZW.m128d_f64;
        uVar40 = *(undefined4 *)((longlong)(pTVar20->Translation).ZW.m128d_f64 + 4);
        uVar41 = *(undefined4 *)((pTVar20->Translation).ZW.m128d_f64 + 1);
        uVar42 = *(undefined4 *)((longlong)(pTVar20->Translation).ZW.m128d_f64 + 0xc);
        uVar43 = *(undefined4 *)(pTVar20->Scale3D).XY.m128d_f64;
        uVar44 = *(undefined4 *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 4);
        uVar45 = *(undefined4 *)((pTVar20->Scale3D).XY.m128d_f64 + 1);
        uVar46 = *(undefined4 *)((longlong)(pTVar20->Scale3D).XY.m128d_f64 + 0xc);
        uVar47 = *(undefined4 *)(pTVar20->Scale3D).ZW.m128d_f64;
        uVar48 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 4);
        uVar49 = *(undefined4 *)((pTVar20->Scale3D).ZW.m128d_f64 + 1);
        uVar50 = *(undefined4 *)((longlong)(pTVar20->Scale3D).ZW.m128d_f64 + 0xc);
        uVar18 = 0;
        if ((int)uVar24 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar23 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data;
      pFVar3 = pFVar23 + lVar26 + 0x10;
      *(undefined4 *)pFVar3 = uVar27;
      *(undefined4 *)(pFVar3 + 4) = uVar28;
      *(undefined4 *)(pFVar3 + 8) = uVar29;
      *(undefined4 *)(pFVar3 + 0xc) = uVar30;
      pFVar3 = pFVar23 + lVar26 + 0x20;
      *(undefined4 *)pFVar3 = uVar31;
      *(undefined4 *)(pFVar3 + 4) = uVar32;
      *(undefined4 *)(pFVar3 + 8) = uVar33;
      *(undefined4 *)(pFVar3 + 0xc) = uVar34;
      pFVar3 = pFVar23 + lVar26 + 0x30;
      *(undefined4 *)pFVar3 = uVar35;
      *(undefined4 *)(pFVar3 + 4) = uVar36;
      *(undefined4 *)(pFVar3 + 8) = uVar37;
      *(undefined4 *)(pFVar3 + 0xc) = uVar38;
      pFVar3 = pFVar23 + lVar26 + 0x40;
      *(undefined4 *)pFVar3 = uVar39;
      *(undefined4 *)(pFVar3 + 4) = uVar40;
      *(undefined4 *)(pFVar3 + 8) = uVar41;
      *(undefined4 *)(pFVar3 + 0xc) = uVar42;
      pFVar3 = pFVar23 + lVar26 + 0x50;
      *(undefined4 *)pFVar3 = uVar43;
      *(undefined4 *)(pFVar3 + 4) = uVar44;
      *(undefined4 *)(pFVar3 + 8) = uVar45;
      *(undefined4 *)(pFVar3 + 0xc) = uVar46;
      pFVar23 = pFVar23 + lVar26 + 0x60;
      *(undefined4 *)pFVar23 = uVar47;
      *(undefined4 *)(pFVar23 + 4) = uVar48;
      *(undefined4 *)(pFVar23 + 8) = uVar49;
      *(undefined4 *)(pFVar23 + 0xc) = uVar50;
      uVar18 = 0;
      if ((int)uVar24 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar23 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x70
      ;
      if (((pFVar3 <= pFVar23) && (pFVar23 < pFVar3 + (longlong)*piVar25 * 0x70)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar19 = param_2->ArrayNum;
      if (iVar19 == *piVar25) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,piVar25);
        param_2->ArrayNum = iVar19;
      }
      param_2->ArrayNum = iVar19 + 1;
      uVar24 = uVar24 + 1;
      uVar5 = *(undefined8 *)(pFVar23 + 8);
      lVar26 = lVar26 + 0x70;
      lVar21 = (longlong)iVar19 * 0x70;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar21) = *(undefined8 *)pFVar23;
      *(undefined8 *)(pFVar3 + lVar21 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x18);
      *(undefined8 *)(pFVar3 + lVar21 + 0x10) = *(undefined8 *)(pFVar23 + 0x10);
      *(undefined8 *)(pFVar3 + lVar21 + 0x10 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x28);
      *(undefined8 *)(pFVar3 + lVar21 + 0x20) = *(undefined8 *)(pFVar23 + 0x20);
      *(undefined8 *)(pFVar3 + lVar21 + 0x20 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x38);
      *(undefined8 *)(pFVar3 + lVar21 + 0x30) = *(undefined8 *)(pFVar23 + 0x30);
      *(undefined8 *)(pFVar3 + lVar21 + 0x30 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x48);
      *(undefined8 *)(pFVar3 + lVar21 + 0x40) = *(undefined8 *)(pFVar23 + 0x40);
      *(undefined8 *)(pFVar3 + lVar21 + 0x40 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x58);
      *(undefined8 *)(pFVar3 + lVar21 + 0x50) = *(undefined8 *)(pFVar23 + 0x50);
      *(undefined8 *)(pFVar3 + lVar21 + 0x50 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar23 + 0x68);
      *(undefined8 *)(pFVar3 + lVar21 + 0x60) = *(undefined8 *)(pFVar23 + 0x60);
      *(undefined8 *)(pFVar3 + lVar21 + 0x60 + 8) = uVar5;
    } while ((int)uVar24 < (this->HandIK_Transforms).ArrayNum);
  }
  iVar19 = param_2->ArrayNum;
  uVar24 = 0;
  if (0 < iVar19) {
    lVar26 = 0;
    do {
      uVar22 = ~uVar24 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar24 < iVar19) {
        uVar18 = uVar22;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < *(int *)((param_2->AllocatorInstance).Data + lVar26)) {
        uVar18 = 0;
        if ((int)uVar24 < param_2->ArrayNum) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        uVar5 = *(undefined8 *)(pFVar3 + lVar26 + 0x10);
        uVar6 = *(undefined8 *)(pFVar3 + lVar26 + 0x10 + 8);
        uVar7 = *(undefined8 *)(pFVar3 + lVar26 + 0x20);
        uVar8 = *(undefined8 *)(pFVar3 + lVar26 + 0x20 + 8);
        uVar9 = *(undefined8 *)(pFVar3 + lVar26 + 0x30);
        uVar10 = *(undefined8 *)(pFVar3 + lVar26 + 0x30 + 8);
        uVar11 = *(undefined8 *)(pFVar3 + lVar26 + 0x40);
        uVar12 = *(undefined8 *)(pFVar3 + lVar26 + 0x40 + 8);
        uVar13 = *(undefined8 *)(pFVar3 + lVar26 + 0x50);
        uVar14 = *(undefined8 *)(pFVar3 + lVar26 + 0x50 + 8);
        uVar15 = *(undefined8 *)(pFVar3 + lVar26 + 0x60);
        uVar16 = *(undefined8 *)(pFVar3 + lVar26 + 0x60 + 8);
        uVar18 = 0;
        if ((int)uVar24 < param_2->ArrayNum) {
          uVar18 = uVar22;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar3 + lVar26 + 0x10) = uVar5;
        *(undefined8 *)(pFVar3 + lVar26 + 0x10 + 8) = uVar6;
        *(undefined8 *)(pFVar3 + lVar26 + 0x20) = uVar7;
        *(undefined8 *)(pFVar3 + lVar26 + 0x20 + 8) = uVar8;
        *(undefined8 *)(pFVar3 + lVar26 + 0x30) = uVar9;
        *(undefined8 *)(pFVar3 + lVar26 + 0x30 + 8) = uVar10;
        *(undefined8 *)(pFVar3 + lVar26 + 0x40) = uVar11;
        *(undefined8 *)(pFVar3 + lVar26 + 0x40 + 8) = uVar12;
        *(undefined8 *)(pFVar3 + lVar26 + 0x50) = uVar13;
        *(undefined8 *)(pFVar3 + lVar26 + 0x50 + 8) = uVar14;
        *(undefined8 *)(pFVar3 + lVar26 + 0x60) = uVar15;
        *(undefined8 *)(pFVar3 + lVar26 + 0x60 + 8) = uVar16;
      }
      iVar19 = param_2->ArrayNum;
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + 0x70;
    } while ((int)uVar24 < iVar19);
  }
  return;
}

// GetChildBone @ 14d346ef0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_DragonTwistArmSolver::GetChildBone
          (FAnimNode_DragonTwistArmSolver *this,FName param_1,USkeletalMeshComponent *param_2)

{
  USkinnedMeshComponent *in_R9;
  
  USkinnedMeshComponent::GetBoneIndex(in_R9,(FName)param_2);
  USkinnedMeshComponent::GetBoneName(in_R9,param_1.ComparisonIndex.Value.Value);
  return param_1;
}

// GetCurrentLocation @ 14d346f70

TVector<double> * __thiscall
FAnimNode_DragonTwistArmSolver::GetCurrentLocation
          (FAnimNode_DragonTwistArmSolver *this,TVector<double> *__return_storage_ptr__,
          FCSPose<FCompactPose> *param_1,FCompactPoseBoneIndex *param_2)

{
  double dVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  
  pTVar3 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_1,*param_2);
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  dVar1 = (pTVar3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetLODThreshold @ 14d3483e0

int __thiscall FAnimNode_DragonTwistArmSolver::GetLODThreshold(FAnimNode_DragonTwistArmSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d349800

void __thiscall
FAnimNode_DragonTwistArmSolver::InitializeBoneReferences
          (FAnimNode_DragonTwistArmSolver *this,FBoneContainer *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  FBoneReference *pFVar9;
  FBoneReference *pFVar10;
  int *piVar11;
  FName *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  undefined4 uVar15;
  FCompactPoseBoneIndex FVar16;
  bool bVar17;
  int iVar18;
  
  pTVar4 = &this->Hand_Array;
  this->SavedBoneContainer = param_1;
  this->solve_should_fail = false;
  piVar1 = &(this->Hand_Array).ArrayMax;
  (this->Hand_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  pTVar5 = &this->Elbow_Array;
  piVar2 = &(this->Elbow_Array).ArrayMax;
  (this->Elbow_Array).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar5->AllocatorInstance,0,piVar2);
  }
  pTVar6 = &this->Shoulder_Array;
  piVar3 = &(this->Shoulder_Array).ArrayMax;
  (this->Shoulder_Array).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar6->AllocatorInstance,0,piVar3);
  }
  pTVar7 = &this->Actual_Shoulder_Array;
  piVar3 = &(this->Actual_Shoulder_Array).ArrayMax;
  (this->Actual_Shoulder_Array).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar7->AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->Lerp_HandIK_Transforms).ArrayNum;
  if (*piVar3 == 0) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,6,&(this->Lerp_HandIK_Transforms).AllocatorInstance,piVar3,
                        &(this->Lerp_HandIK_Transforms).ArrayMax);
    DefaultConstructItems<FBoneTransform,int>
              ((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + (longlong)iVar18 * 0x70,6);
  }
  pTVar8 = &this->Last_Shoulder_Angles;
  piVar3 = &(this->Last_Shoulder_Angles).ArrayMax;
  (this->Last_Shoulder_Angles).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar8->AllocatorInstance,0,piVar3);
  }
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,1,&pTVar8->AllocatorInstance,&(this->Last_Shoulder_Angles).ArrayNum,
                      &(this->Last_Shoulder_Angles).ArrayMax);
  *(undefined4 *)((pTVar8->AllocatorInstance).Data + (longlong)iVar18 * 4) = 0;
  ResizeDebugLocations(this,1);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Hand_Bone_Name,this->SavedBoneContainer);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Elbow_Bone_Name,this->SavedBoneContainer);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Shoulder_Bone_Name,this->SavedBoneContainer);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Clavicle_Bone,this->SavedBoneContainer);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Twist_Forearm_Bone,this->SavedBoneContainer);
  FBoneReference::Initialize(&(this->Hand_Input_Info).Twist_Shoulder_Bone,this->SavedBoneContainer);
  pFVar13 = (pTVar4->AllocatorInstance).Data;
  pFVar9 = &(this->Hand_Input_Info).Hand_Bone_Name;
  if ((pFVar13 <= pFVar9) && (pFVar9 < pFVar13 + (longlong)*piVar1 * 0x10)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar18 = (this->Hand_Array).ArrayNum;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Hand_Array).ArrayNum = iVar18 + 1;
  uVar15 = *(undefined4 *)&(this->Hand_Input_Info).Hand_Bone_Name.field_0x8;
  FVar16 = (this->Hand_Input_Info).Hand_Bone_Name.CachedCompactPoseIndex;
  pFVar10 = &(this->Hand_Input_Info).Elbow_Bone_Name;
  pFVar12 = (FName *)((pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 0x10);
  *pFVar12 = pFVar9->BoneName;
  pFVar12[1].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar12[1].Number = (uint)FVar16;
  pFVar13 = (pTVar5->AllocatorInstance).Data;
  if ((pFVar13 <= pFVar10) && (pFVar10 < pFVar13 + (longlong)*piVar2 * 0x10)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar18 = (this->Elbow_Array).ArrayNum;
  if (iVar18 == *piVar2) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar5->AllocatorInstance,piVar2);
  }
  (this->Elbow_Array).ArrayNum = iVar18 + 1;
  piVar1 = &(this->Shoulder_Array).ArrayMax;
  uVar15 = *(undefined4 *)&(this->Hand_Input_Info).Elbow_Bone_Name.field_0x8;
  FVar16 = (this->Hand_Input_Info).Elbow_Bone_Name.CachedCompactPoseIndex;
  pFVar9 = &(this->Hand_Input_Info).Shoulder_Bone_Name;
  pFVar12 = (FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar18 * 0x10);
  *pFVar12 = pFVar10->BoneName;
  pFVar12[1].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar12[1].Number = (uint)FVar16;
  pFVar13 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar13 <= pFVar9) && (pFVar9 < pFVar13 + (longlong)*piVar1 * 0x10)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar18 = (this->Shoulder_Array).ArrayNum;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->Shoulder_Array).ArrayNum = iVar18 + 1;
  piVar1 = &(this->Actual_Shoulder_Array).ArrayMax;
  uVar15 = *(undefined4 *)&(this->Hand_Input_Info).Shoulder_Bone_Name.field_0x8;
  FVar16 = (this->Hand_Input_Info).Shoulder_Bone_Name.CachedCompactPoseIndex;
  pFVar12 = (FName *)((pTVar6->AllocatorInstance).Data + (longlong)iVar18 * 0x10);
  *pFVar12 = pFVar9->BoneName;
  pFVar12[1].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar12[1].Number = (uint)FVar16;
  pFVar13 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar13 <= pFVar9) && (pFVar9 < pFVar13 + (longlong)*piVar1 * 0x10)) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar18 = (this->Actual_Shoulder_Array).ArrayNum;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->Actual_Shoulder_Array).ArrayNum = iVar18 + 1;
  uVar15 = *(undefined4 *)&(this->Hand_Input_Info).Shoulder_Bone_Name.field_0x8;
  FVar16 = (this->Hand_Input_Info).Shoulder_Bone_Name.CachedCompactPoseIndex;
  pFVar12 = (FName *)((pTVar7->AllocatorInstance).Data + (longlong)iVar18 * 0x10);
  *pFVar12 = pFVar9->BoneName;
  pFVar12[1].ComparisonIndex = (FNameEntryId)uVar15;
  pFVar12[1].Number = (uint)FVar16;
  if ((this->Hand_Array).ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FBoneReference::Initialize
            ((FBoneReference *)(pTVar4->AllocatorInstance).Data,this->SavedBoneContainer);
  if ((this->Elbow_Array).ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FBoneReference::Initialize
            ((FBoneReference *)(pTVar5->AllocatorInstance).Data,this->SavedBoneContainer);
  if ((this->Shoulder_Array).ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FBoneReference::Initialize
            ((FBoneReference *)(pTVar6->AllocatorInstance).Data,this->SavedBoneContainer);
  if ((this->Actual_Shoulder_Array).ArrayNum < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FBoneReference::Initialize
            ((FBoneReference *)(pTVar7->AllocatorInstance).Data,this->SavedBoneContainer);
  this->debug_hands_initialized = true;
  piVar1 = &(this->Elbow_Bone_Transform_Array).ArrayMax;
  piVar2 = &(this->Elbow_Bone_Transform_Array).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Elbow_Bone_Transform_Array).AllocatorInstance,0,piVar1);
  }
  piVar3 = &(this->Hand_Default_Transform_Array).ArrayMax;
  piVar11 = &(this->Hand_Default_Transform_Array).ArrayNum;
  *piVar11 = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Hand_Default_Transform_Array).AllocatorInstance,0,piVar3);
  }
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,1,&(this->Elbow_Bone_Transform_Array).AllocatorInstance,piVar2,
                      piVar1);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Elbow_Bone_Transform_Array).AllocatorInstance.Data + (longlong)iVar18 * 0x60,1);
  iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,1,&(this->Hand_Default_Transform_Array).AllocatorInstance,piVar11,
                      piVar3);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Hand_Default_Transform_Array).AllocatorInstance.Data + (longlong)iVar18 * 0x60,1
            );
  return;
}

// Initialize_AnyThread @ 14d34b640

void __thiscall
FAnimNode_DragonTwistArmSolver::Initialize_AnyThread
          (FAnimNode_DragonTwistArmSolver *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FAnimNode_DragonControlBase::Initialize_AnyThread((FAnimNode_DragonControlBase *)this,param_1);
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x158) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->owning_skel = *(USkeletalMeshComponent **)(lVar1 + 0x158);
  return;
}

// IsValidToEvaluate @ 14d34b8b0

bool __thiscall
FAnimNode_DragonTwistArmSolver::IsValidToEvaluate
          (FAnimNode_DragonTwistArmSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&(this->Hand_Input_Info).Hand_Bone_Name,param_2);
  bVar2 = FBoneReference::IsValidToEvaluate(&(this->Hand_Input_Info).Elbow_Bone_Name,param_2);
  bVar3 = FBoneReference::IsValidToEvaluate(&(this->Hand_Input_Info).Shoulder_Bone_Name,param_2);
  return bVar3 && (bVar2 && bVar1);
}

// LookAtAroundPoint @ 14d34eb20

TTransform<double> * __thiscall
FAnimNode_DragonTwistArmSolver::LookAtAroundPoint
          (FAnimNode_DragonTwistArmSolver *this,TTransform<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  UKismetMathLibrary::RotateAngleAxis
            ((TVector<double> *)&local_68._s_0,(TVector<double> *)&local_28._s_0,param_3,
             (TVector<double> *)&local_48._s_0);
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  dVar1 = (param_4->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.Y;
  dVar3 = (param_4->field0_0x0)._s_0.Z;
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar11;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_68._s_0.X + dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_68._s_0.Y + dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_68._s_0.Z + dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// LookRotation @ 14d34ffc0

TQuat<double> * __thiscall
FAnimNode_DragonTwistArmSolver::LookRotation
          (FAnimNode_DragonTwistArmSolver *this,TQuat<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  double dVar9;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70 [4];
  
  local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_70[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_70[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_70[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
  OrthoNormalize(this,(TVector<double> *)&local_88._s_0,(TVector<double> *)&local_70[0]._s_0);
  dVar5 = local_88._s_0.Z * (double)local_70[0]._8_8_ - (double)local_70[0]._16_8_ * local_88._s_0.Y
  ;
  dVar4 = local_88._s_0.X * (double)local_70[0]._16_8_ - (double)local_70[0]._0_8_ * local_88._s_0.Z
  ;
  dVar9 = (double)local_70[0]._0_8_ * local_88._s_0.Y - local_88._s_0.X * (double)local_70[0]._8_8_;
  auVar6 = ZEXT816(0);
  fVar7 = (float)(dVar5 + (double)local_70[0]._8_8_ + local_88._s_0.Z);
  if (fVar7 <= 0.0) {
    if ((dVar5 < (double)local_70[0]._8_8_) || (dVar5 < local_88._s_0.Z)) {
      if ((double)local_70[0]._8_8_ <= local_88._s_0.Z) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ((local_88._s_0.Z + __real_3ff0000000000000) - dVar5) -
                       (double)local_70[0]._8_8_;
        auVar6 = sqrtpd(auVar6,auVar2);
        fVar7 = (float)auVar6._0_8_ * __real_3f000000;
        dVar5 = (double)(__real_3f000000 / (float)auVar6._0_8_);
        __return_storage_ptr__->X = (dVar9 + local_88._s_0.X) * dVar5;
        __return_storage_ptr__->Y = ((double)local_70[0]._16_8_ + local_88._s_0.Y) * dVar5;
        __return_storage_ptr__->Z = (double)fVar7;
        __return_storage_ptr__->W = ((double)local_70[0]._0_8_ - dVar4) * dVar5;
      }
      else {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (((double)local_70[0]._8_8_ + __real_3ff0000000000000) - dVar5) -
                       local_88._s_0.Z;
        auVar6 = sqrtpd(auVar6,auVar3);
        fVar7 = (float)auVar6._0_8_ * __real_3f000000;
        dVar5 = (double)(__real_3f000000 / (float)auVar6._0_8_);
        __return_storage_ptr__->X = (dVar4 + (double)local_70[0]._0_8_) * dVar5;
        __return_storage_ptr__->Z = ((double)local_70[0]._16_8_ + local_88._s_0.Y) * dVar5;
        __return_storage_ptr__->Y = (double)fVar7;
        __return_storage_ptr__->W = (dVar9 - local_88._s_0.X) * dVar5;
      }
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = ((dVar5 + __real_3ff0000000000000) - (double)local_70[0]._8_8_) -
                     local_88._s_0.Z;
      auVar6 = sqrtpd(auVar6,auVar1);
      fVar7 = __real_3f000000 / (float)auVar6._0_8_;
      __return_storage_ptr__->X = (double)((float)auVar6._0_8_ * __real_3f000000);
      dVar5 = (double)fVar7;
      __return_storage_ptr__->Y = (dVar4 + (double)local_70[0]._0_8_) * dVar5;
      __return_storage_ptr__->Z = (dVar9 + local_88._s_0.X) * dVar5;
      __return_storage_ptr__->W = (local_88._s_0.Y - (double)local_70[0]._16_8_) * dVar5;
    }
  }
  else {
    fVar8 = SQRT(fVar7 + __real_3f800000);
    fVar7 = __real_3f000000 / fVar8;
    __return_storage_ptr__->W = (double)(fVar8 * __real_3f000000);
    dVar5 = (double)fVar7;
    __return_storage_ptr__->X = (local_88._s_0.Y - (double)local_70[0]._16_8_) * dVar5;
    __return_storage_ptr__->Y = (dVar9 - local_88._s_0.X) * dVar5;
    __return_storage_ptr__->Z = ((double)local_70[0]._0_8_ - dVar4) * dVar5;
  }
  return __return_storage_ptr__;
}

// OrthoNormalize @ 14d353ce0

void __thiscall
FAnimNode_DragonTwistArmSolver::OrthoNormalize
          (FAnimNode_DragonTwistArmSolver *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  
  dVar10 = __real_3ff0000000000000;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar6 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar7 = (param_1->field0_0x0)._s_0.X;
    uVar9 = (param_1->field0_0x0)._s_0.Z;
  }
  else {
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar6 = dVar3 * dVar8;
      uVar7 = dVar1 * dVar8;
      uVar9 = dVar2 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar6;
  auVar4._0_8_ = uVar7;
  auVar4._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar4;
  (param_1->field0_0x0)._s_0.Z = (double)uVar9;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = dVar2 * (param_1->field0_0x0)._s_0.Y + dVar1 * (param_1->field0_0x0)._s_0.X +
          dVar3 * (param_1->field0_0x0)._s_0.Z;
  dVar1 = dVar1 - dVar8 * (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar2 - dVar8 * (param_1->field0_0x0)._s_0.Y;
  dVar3 = dVar3 - dVar8 * (param_1->field0_0x0)._s_0.Z;
  (param_2->field0_0x0)._s_0.X = dVar1;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  dVar8 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar8 == dVar10) {
    uVar9 = (param_2->field0_0x0)._s_0.Z;
    uVar6 = (param_2->field0_0x0)._s_0.X;
    uVar7 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  }
  else {
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar10 = dVar10 / SQRT(dVar8);
      uVar9 = dVar3 * dVar10;
      uVar6 = dVar10 * dVar1;
      uVar7 = dVar10 * dVar2;
    }
  }
  auVar5._8_4_ = (int)uVar7;
  auVar5._0_8_ = uVar6;
  auVar5._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar5;
  (param_2->field0_0x0)._s_0.Z = (double)uVar9;
  return;
}

// ResizeDebugLocations @ 14d356a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_DragonTwistArmSolver::ResizeDebugLocations
          (FAnimNode_DragonTwistArmSolver *this,int param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  __m128d _Var6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  this_00 = &this->Debug_Hand_Locations;
  if (param_1 == 0) {
    (this->Debug_Hand_Locations).ArrayNum = 0;
    if ((this->Debug_Hand_Locations).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&this_00->AllocatorInstance,0,&(this->Debug_Hand_Locations).ArrayMax);
      return;
    }
  }
  else {
    iVar14 = (this->Debug_Hand_Locations).ArrayNum;
    uVar16 = (ulonglong)iVar14;
    if (iVar14 != param_1) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (this_00,param_1,Default);
      uVar5 = _UNK_152af9258;
      uVar4 = ___xmm_4052c000000000004052c00000000000;
      iVar19 = 1;
      if (iVar14 < (this->Debug_Hand_Locations).ArrayNum) {
        lVar18 = uVar16 * 0x60;
        do {
          _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          _Var6.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          uVar15 = (uint)uVar16;
          uVar17 = ~uVar15 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar15 < (this->Debug_Hand_Locations).ArrayNum) {
            uVar13 = uVar17;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this_00->AllocatorInstance).Data;
          *(double (*) [2])(pFVar1 + lVar18) = _Var6.m128d_f64;
          *(double (*) [2])(pFVar1 + lVar18 + 0x10) = _Var7.m128d_f64;
          *(double (*) [2])(pFVar1 + lVar18 + 0x20) = _Var8.m128d_f64;
          *(double (*) [2])(pFVar1 + lVar18 + 0x30) = _Var9.m128d_f64;
          *(double (*) [2])(pFVar1 + lVar18 + 0x40) = _Var10.m128d_f64;
          *(double (*) [2])(pFVar1 + lVar18 + 0x50) = _Var11.m128d_f64;
          iVar14 = (this->Debug_Hand_Locations).ArrayNum;
          local_b0 = (undefined4)uVar4;
          uStack_ac = (undefined4)((ulonglong)uVar4 >> 0x20);
          if ((uVar16 & 1) == 0) {
            uVar13 = 0;
            if ((int)uVar15 < iVar14) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = (iVar19 + 1) * 0x32;
            iVar19 = iVar19 + 1;
          }
          else {
            uVar13 = 0;
            if ((int)uVar15 < iVar14) {
              uVar13 = uVar17;
            }
            if ((uVar13 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar14 = iVar19 * -0x32;
          }
          pFVar1 = (this_00->AllocatorInstance).Data;
          uVar16 = (ulonglong)(uVar15 + 1);
          auVar3._8_4_ = local_b0;
          auVar3._0_8_ = (double)iVar14;
          auVar3._12_4_ = uStack_ac;
          *(undefined1 (*) [16])(pFVar1 + lVar18 + 0x20) = auVar3;
          pFVar1 = pFVar1 + lVar18 + 0x30;
          *(undefined8 *)pFVar1 = uVar5;
          *(undefined8 *)(pFVar1 + 8) = 0;
          lVar18 = lVar18 + 0x60;
        } while ((int)(uVar15 + 1) < (this->Debug_Hand_Locations).ArrayNum);
      }
    }
  }
  return;
}

// RotateAroundPoint @ 14d357080

TVector<double> * __thiscall
FAnimNode_DragonTwistArmSolver::RotateAroundPoint
          (FAnimNode_DragonTwistArmSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [5];
  
  local_88[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_88[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_88[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar4 = dVar1 - (param_3->field0_0x0)._s_0.X;
  dVar5 = dVar2 - (param_3->field0_0x0)._s_0.Y;
  dVar6 = dVar3 - (param_3->field0_0x0)._s_0.Z;
  local_c8._s_0.X = dVar4;
  local_c8._s_0.Y = dVar5;
  local_c8._s_0.Z = dVar6;
  UKismetMathLibrary::RotateAngleAxis
            ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,param_4,
             (TVector<double> *)&local_88[0]._s_0);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (local_a8._s_0.X - dVar4) + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_a8._s_0.Y - dVar5) + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (local_a8._s_0.Z - dVar6) + dVar3;
  return __return_storage_ptr__;
}

// SmoothApproach @ 14d358bf0

TVector<double> * __thiscall
FAnimNode_DragonTwistArmSolver::SmoothApproach
          (FAnimNode_DragonTwistArmSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  fVar10 = param_4 * this->delta_seconds_saved;
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar12 = __real_3ff0000000000000 / (double)fVar10;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar8 = (param_3->field0_0x0)._s_0.X;
  dVar9 = (param_3->field0_0x0)._s_0.Y;
  dVar5 = (dVar2 - dVar1) * dVar12;
  fVar10 = expf((float)((uint)fVar10 ^ __xmm_80000000800000008000000080000000));
  dVar13 = (double)fVar10;
  dVar11 = (dVar8 - dVar6) * dVar12;
  dVar12 = (dVar9 - dVar7) * dVar12;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar12 = (((param_1->field0_0x0)._s_0.Y - dVar7) + dVar12) * dVar13 + (dVar9 - dVar12);
  auVar4._8_4_ = SUB84(dVar12,0);
  auVar4._0_8_ = (((param_1->field0_0x0)._s_0.X - dVar6) + dVar11) * dVar13 + (dVar8 - dVar11);
  auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = ((dVar3 - dVar1) + dVar5) * dVar13 + (dVar2 - dVar5)
  ;
  return __return_storage_ptr__;
}

// UpdateInternal @ 14d35eb60

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

void __thiscall
FAnimNode_DragonTwistArmSolver::UpdateInternal
          (FAnimNode_DragonTwistArmSolver *this,FAnimationUpdateContext *param_1)

{
  USkeletalMeshComponent *this_00;
  double dVar1;
  bool bVar2;
  UWorld *pUVar3;
  FAnimNode_DragonTwistArmSolver *pFVar4;
  FAnimNode_DragonTwistArmSolver *pFVar5;
  float fVar6;
  
  FAnimNode_DragonControlBase::UpdateInternal((FAnimNode_DragonControlBase *)this,param_1);
  this_00 = this->owning_skel;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    pUVar3 = _DAT_000000b0;
    if (_DAT_000000b0 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)0x0);
    }
    fVar6 = pUVar3->DeltaTimeSeconds;
    pFVar4 = (FAnimNode_DragonTwistArmSolver *)0x5a0;
    pFVar5 = this;
  }
  else {
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar1;
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar1;
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar1;
    dVar1 = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] = (double)this_00->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar1;
    pUVar3 = (UWorld *)this_00->_padding_;
    pFVar4 = this;
    if ((AActor *)this_00->_padding_ == (AActor *)0x0) {
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
      }
      fVar6 = pUVar3->DeltaTimeSeconds;
      pFVar5 = (FAnimNode_DragonTwistArmSolver *)0x5a0;
    }
    else {
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
      }
      fVar6 = *(float *)(this->owning_skel->_padding_ + 0x68) * pUVar3->DeltaTimeSeconds;
      pFVar5 = (FAnimNode_DragonTwistArmSolver *)0x5a0;
    }
  }
  *(float *)((longlong)&pFVar5->_padding_ + (longlong)&pFVar4->_padding_) = fVar6;
  fVar6 = this->Interpolation_Speed;
  if (__real_42c80000 <= this->Interpolation_Speed) {
    fVar6 = __real_42c80000;
  }
  if (fVar6 <= __real_3e800000) {
    fVar6 = __real_3e800000;
  }
  this->Interpolation_Speed = fVar6;
  if (this->inter_frame_counter < 5) {
    this->inter_frame_counter = this->inter_frame_counter + 1;
    bVar2 = false;
  }
  else {
    bVar2 = this->Enable_Interpolation;
  }
  this->Internal_Switched_Interpolation_bool = bVar2;
  this->component_scale = (float)(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  return;
}

// getDefaultSpineColliParams @ 14d35ff20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FCollisionQueryParams * __thiscall
FAnimNode_DragonTwistArmSolver::getDefaultSpineColliParams
          (FAnimNode_DragonTwistArmSolver *this,FCollisionQueryParams *__return_storage_ptr__,
          FName param_1,AActor *param_2,bool param_3)

{
  FName *pFVar1;
  FName local_res10;
  
  pFVar1 = ::FName::FName(&local_res10,L"RV_Trace");
  FCollisionQueryParams::FCollisionQueryParams(__return_storage_ptr__,*pFVar1,true,param_2);
  __return_storage_ptr__->TraceTag = param_1;
  __return_storage_ptr__->bTraceComplex = true;
  __return_storage_ptr__->bReturnPhysicalMaterial = false;
  return __return_storage_ptr__;
}

