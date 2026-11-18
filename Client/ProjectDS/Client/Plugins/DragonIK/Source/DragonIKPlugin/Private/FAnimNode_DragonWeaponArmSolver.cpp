// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 26

// StaticStruct @ 14d2a5120

UScriptStruct * __cdecl FAnimNode_DragonWeaponArmSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonWeaponArmSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonWeaponArmSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonWeaponArmSolver,(UObject *)pUVar1
                         ,L"AnimNode_DragonWeaponArmSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonWeaponArmSolver.OuterSingleton;
}

// ~FAnimNode_DragonWeaponArmSolver @ 14d2a6580

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
FAnimNode_DragonWeaponArmSolver::~FAnimNode_DragonWeaponArmSolver
          (FAnimNode_DragonWeaponArmSolver *this)

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
  pFVar1 = (this->arm_array_index_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->overriding_hand_rotation_alpha).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->overriding_hand_position_alpha).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->grab_alpha).AllocatorInstance.Data;
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
  pFVar1 = (this->Frozen_Target_Transform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Frozen_UpperArm_Transform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Frozen_Elbow_Transform).AllocatorInstance.Data;
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
  pFVar1 = (this->Calibration_Status_Array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Last_Shoulder_Angles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d2a7b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAnimNode_DragonWeaponArmSolver * __thiscall
FAnimNode_DragonWeaponArmSolver::operator=
          (FAnimNode_DragonWeaponArmSolver *this,FAnimNode_DragonWeaponArmSolver *param_1)

{
  int *piVar1;
  TArray<FDragonData_ArmsData,TSizedDefaultAllocator<32>_> *pTVar2;
  FDragonData_Overrided_Location_Data *pFVar3;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  FHitResult *pFVar13;
  FHitResult *pFVar14;
  longlong lVar15;
  
  FAnimNode_DragonControlBase::operator=
            ((FAnimNode_DragonControlBase *)this,(FAnimNode_DragonControlBase *)param_1);
  this->weapon_handler_component = param_1->weapon_handler_component;
  pTVar2 = &this->Aiming_Hand_Limbs;
  dVar9 = (param_1->weapon_object_transform).Rotation.XY.m128d_f64[1];
  (this->weapon_object_transform).Rotation.XY.m128d_f64[0] =
       (param_1->weapon_object_transform).Rotation.XY.m128d_f64[0];
  (this->weapon_object_transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->weapon_object_transform).Rotation.ZW.m128d_f64[1];
  (this->weapon_object_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->weapon_object_transform).Rotation.ZW.m128d_f64[0];
  (this->weapon_object_transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->weapon_object_transform).Translation.XY.m128d_f64[1];
  (this->weapon_object_transform).Translation.XY.m128d_f64[0] =
       (param_1->weapon_object_transform).Translation.XY.m128d_f64[0];
  (this->weapon_object_transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->weapon_object_transform).Translation.ZW.m128d_f64[1];
  (this->weapon_object_transform).Translation.ZW.m128d_f64[0] =
       (param_1->weapon_object_transform).Translation.ZW.m128d_f64[0];
  (this->weapon_object_transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->weapon_object_transform).Scale3D.XY.m128d_f64[1];
  (this->weapon_object_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->weapon_object_transform).Scale3D.XY.m128d_f64[0];
  (this->weapon_object_transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->weapon_object_transform).Scale3D.ZW.m128d_f64[1];
  (this->weapon_object_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->weapon_object_transform).Scale3D.ZW.m128d_f64[0];
  (this->weapon_object_transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  this->test_counter = param_1->test_counter;
  this->trace_draw_counter = param_1->trace_draw_counter;
  this->Num_Valid_Spines = param_1->Num_Valid_Spines;
  this->component_scale = param_1->component_scale;
  this->atleast_one_hit = param_1->atleast_one_hit;
  this->feet_is_empty = param_1->feet_is_empty;
  this->Physweapon_Component_Tag = param_1->Physweapon_Component_Tag;
  if (pTVar2 != &param_1->Aiming_Hand_Limbs) {
    iVar6 = (param_1->Aiming_Hand_Limbs).ArrayNum;
    piVar1 = &(this->Aiming_Hand_Limbs).ArrayMax;
    pFVar8 = (param_1->Aiming_Hand_Limbs).AllocatorInstance.Data;
    (this->Aiming_Hand_Limbs).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x200,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 9);
      }
    }
  }
  this->primary_hand_index = param_1->primary_hand_index;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Last_Shoulder_Angles,&param_1->Last_Shoulder_Angles);
  pFVar3 = &this->Arm_TargetLocation_Overrides;
  if (pFVar3 != &param_1->Arm_TargetLocation_Overrides) {
    iVar6 = (param_1->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum;
    piVar1 = &(this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayMax;
    pFVar8 = (param_1->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.AllocatorInstance.
             Data;
    iVar7 = *piVar1;
    (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar6,iVar7,(ForAnyElementType *)pFVar3,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pFVar3->Arm_TargetLocation_Overrides).AllocatorInstance.Data,pFVar8,
               (longlong)iVar6 << 7);
      }
    }
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Hand_Weapon_Relative_Transforms,&param_1->Hand_Weapon_Relative_Transforms);
  this->Calibration_Frame_Tick_Count = param_1->Calibration_Frame_Tick_Count;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Calculated_Hand_Transforms,&param_1->Calculated_Hand_Transforms);
  pTVar4 = &this->Calibration_Status_Array;
  if (pTVar4 != &param_1->Calibration_Status_Array) {
    iVar6 = (param_1->Calibration_Status_Array).ArrayNum;
    piVar1 = &(this->Calibration_Status_Array).ArrayMax;
    pFVar8 = (param_1->Calibration_Status_Array).AllocatorInstance.Data;
    (this->Calibration_Status_Array).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar6);
      }
    }
  }
  this->Use_Separate_Targets = param_1->Use_Separate_Targets;
  lVar15 = 2;
  this->Override_Hand_Rotation = param_1->Override_Hand_Rotation;
  this->reach_instead = param_1->reach_instead;
  this->pole_system_input = param_1->pole_system_input;
  this->arm_twist_axis = param_1->arm_twist_axis;
  this->hand_rotation_method = param_1->hand_rotation_method;
  this->nsew_pole_method = param_1->nsew_pole_method;
  this->up_arm_twist_technique = param_1->up_arm_twist_technique;
  dVar9 = (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  this->Limbs_Clamp = param_1->Limbs_Clamp;
  this->done_leg_make = param_1->done_leg_make;
  this->Let_Arm_Twist_With_Hand = param_1->Let_Arm_Twist_With_Hand;
  pFVar13 = &this->TTS_Aim_Hit;
  pFVar14 = &param_1->TTS_Aim_Hit;
  do {
    fVar11 = pFVar14->Time;
    fVar12 = pFVar14->Distance;
    iVar6 = pFVar14->_padding_;
    pFVar13->FaceIndex = pFVar14->FaceIndex;
    pFVar13->Time = fVar11;
    pFVar13->Distance = fVar12;
    pFVar13->_padding_ = iVar6;
    uVar10 = *(undefined8 *)&(pFVar14->Location).field_0x8;
    *(undefined8 *)&pFVar13->Location = *(undefined8 *)&pFVar14->Location;
    *(undefined8 *)&(pFVar13->Location).field_0x8 = uVar10;
    uVar10 = *(undefined8 *)&pFVar14->ImpactPoint;
    *(undefined8 *)&(pFVar13->Location).field_0x10 = *(undefined8 *)&(pFVar14->Location).field_0x10;
    *(undefined8 *)&pFVar13->ImpactPoint = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar13->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar14->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar13->ImpactPoint).field_0x10 = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->Normal).field_0x8;
    *(undefined8 *)&pFVar13->Normal = *(undefined8 *)&pFVar14->Normal;
    *(undefined8 *)&(pFVar13->Normal).field_0x8 = uVar10;
    uVar10 = *(undefined8 *)&pFVar14->ImpactNormal;
    *(undefined8 *)&(pFVar13->Normal).field_0x10 = *(undefined8 *)&(pFVar14->Normal).field_0x10;
    *(undefined8 *)&pFVar13->ImpactNormal = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar13->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar14->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar13->ImpactNormal).field_0x10 = uVar10;
    uVar10 = *(undefined8 *)&(pFVar14->TraceStart).field_0x8;
    *(undefined8 *)&pFVar13->TraceStart = *(undefined8 *)&pFVar14->TraceStart;
    *(undefined8 *)&(pFVar13->TraceStart).field_0x8 = uVar10;
    lVar15 = lVar15 + -1;
    pFVar13 = (FHitResult *)&(pFVar13->TraceStart).field_0x10;
    pFVar14 = (FHitResult *)&(pFVar14->TraceStart).field_0x10;
  } while (lVar15 != 0);
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
  dVar9 = (param_1->Lerped_LookatLocation).field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       (param_1->Lerped_LookatLocation).field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = dVar9;
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
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Frozen_Elbow_Transform,&param_1->Frozen_Elbow_Transform);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Frozen_UpperArm_Transform,&param_1->Frozen_UpperArm_Transform);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Frozen_Target_Transform,&param_1->Frozen_Target_Transform);
  dVar9 = (param_1->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Weapon_Transform).Translation.XY.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Translation.XY.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Translation.XY.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Translation.XY.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Translation.XY.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Translation.XY.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Translation.XY.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[1];
  (this->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[0] =
       (param_1->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[0];
  (this->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Rotation.XY.m128d_f64[1];
  (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Rotation.XY.m128d_f64[0];
  (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[1];
  (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[0];
  (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Translation.XY.m128d_f64[1];
  (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Translation.XY.m128d_f64[0];
  (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Translation.ZW.m128d_f64[1];
  (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Translation.ZW.m128d_f64[0];
  (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[1];
  (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[0];
  (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAt_Axis).field0_0x0._s_0.Y;
  (this->LookAt_Axis).field0_0x0._s_0.X = (param_1->LookAt_Axis).field0_0x0._s_0.X;
  (this->LookAt_Axis).field0_0x0._s_0.Y = dVar9;
  (this->LookAt_Axis).field0_0x0._s_0.Z = (param_1->LookAt_Axis).field0_0x0._s_0.Z;
  dVar9 = (param_1->Upward_Axis).field0_0x0._s_0.Y;
  (this->Upward_Axis).field0_0x0._s_0.X = (param_1->Upward_Axis).field0_0x0._s_0.X;
  (this->Upward_Axis).field0_0x0._s_0.Y = dVar9;
  (this->Upward_Axis).field0_0x0._s_0.Z = (param_1->Upward_Axis).field0_0x0._s_0.Z;
  dVar9 = (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Limb_Rotation_Offset).Yaw;
  (this->Limb_Rotation_Offset).Pitch = (param_1->Limb_Rotation_Offset).Pitch;
  (this->Limb_Rotation_Offset).Yaw = dVar9;
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
  this->every_foot_dont_have_child = param_1->every_foot_dont_have_child;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=(&this->grab_alpha,&param_1->grab_alpha);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->overriding_hand_position_alpha,&param_1->overriding_hand_position_alpha);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->overriding_hand_rotation_alpha,&param_1->overriding_hand_rotation_alpha);
  pTVar5 = &this->arm_array_index_array;
  if (pTVar5 != &param_1->arm_array_index_array) {
    iVar6 = (param_1->arm_array_index_array).ArrayNum;
    piVar1 = &(this->arm_array_index_array).ArrayMax;
    pFVar8 = (param_1->arm_array_index_array).AllocatorInstance.Data;
    (this->arm_array_index_array).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,*piVar1,&pTVar5->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 2);
      }
    }
  }
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
  dVar9 = (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  this->zero_transform_set = param_1->zero_transform_set;
  dVar9 = (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  this->spine_median_result = param_1->spine_median_result;
  this->Use_FeetTips = param_1->Use_FeetTips;
  this->saved_pose = param_1->saved_pose;
  this->owning_skel = param_1->owning_skel;
  dVar9 = (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar9;
  this->tot_len_of_bones = param_1->tot_len_of_bones;
  dVar9 = (param_1->HeadRotation_Temp).Yaw;
  (this->HeadRotation_Temp).Pitch = (param_1->HeadRotation_Temp).Pitch;
  (this->HeadRotation_Temp).Yaw = dVar9;
  (this->HeadRotation_Temp).Roll = (param_1->HeadRotation_Temp).Roll;
  this->solve_should_fail = param_1->solve_should_fail;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceStartList,&param_1->TraceStartList);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceEndList,&param_1->TraceEndList);
  this->debug_hands_initialized = param_1->debug_hands_initialized;
  return this;
}

// FAnimNode_DragonWeaponArmSolver @ 14d32d4a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAnimNode_DragonWeaponArmSolver * __thiscall
FAnimNode_DragonWeaponArmSolver::FAnimNode_DragonWeaponArmSolver
          (FAnimNode_DragonWeaponArmSolver *this)

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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_DragonWeaponArmSolver__6B_;
  this->weapon_handler_component = (UDragonIKWeaponPhysicsComponent *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->weapon_object_transform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Aiming_Hand_Limbs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Aiming_Hand_Limbs).ArrayNum = 0;
  (this->Aiming_Hand_Limbs).ArrayMax = 0;
  (this->Last_Shoulder_Angles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Last_Shoulder_Angles).ArrayNum = 0;
  (this->Last_Shoulder_Angles).ArrayMax = 0;
  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum = 0;
  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayMax = 0;
  (this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hand_Weapon_Relative_Transforms).ArrayNum = 0;
  (this->Hand_Weapon_Relative_Transforms).ArrayMax = 0;
  (this->Calculated_Hand_Transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Calculated_Hand_Transforms).ArrayNum = 0;
  (this->Calculated_Hand_Transforms).ArrayMax = 0;
  (this->Calibration_Status_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Calibration_Status_Array).ArrayNum = 0;
  (this->Calibration_Status_Array).ArrayMax = 0;
  this->test_counter = 0;
  this->trace_draw_counter = 0;
  this->Num_Valid_Spines = 0;
  this->component_scale = 1.0;
  this->atleast_one_hit = false;
  this->feet_is_empty = true;
  this->Physweapon_Component_Tag = 1;
  this->primary_hand_index = 0;
  this->Calibration_Frame_Tick_Count = 0;
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
  memset(&this->TTS_Aim_Hit,0,0x100);
  (this->TTS_Aim_Hit).Time = 1.0;
  (this->TTS_Aim_Hit).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TTS_Aim_Hit).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TTS_Aim_Hit).MyItem = -1;
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
  this->Enable_Interpolation = true;
  this->Interpolation_Speed = 15.0;
  this->toggle_alpha = 0.0;
  this->hand_toggle_alpha = 0.0;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar27;
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
  (this->Frozen_Elbow_Transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frozen_Elbow_Transform).ArrayNum = 0;
  (this->Frozen_Elbow_Transform).ArrayMax = 0;
  (this->Frozen_UpperArm_Transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frozen_UpperArm_Transform).ArrayNum = 0;
  (this->Frozen_UpperArm_Transform).ArrayMax = 0;
  (this->Frozen_Target_Transform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Frozen_Target_Transform).ArrayNum = 0;
  (this->Frozen_Target_Transform).ArrayMax = 0;
  *&(this->Frozen_Weapon_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Weapon_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Weapon_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64 = auVar20;
  *&(this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Pawn_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Pawn_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Translation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Translation.ZW.m128d_f64 = auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64 = auVar26;
  *&(this->Frozen_Hand_Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->LookAt_Axis).field0_0x0._s_0.X = 0.0;
  (this->LookAt_Axis).field0_0x0._s_0.Y = 1.0;
  (this->LookAt_Axis).field0_0x0._s_0.Z = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.X = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.Y = 0.0;
  (this->Upward_Axis).field0_0x0._s_0.Z = 1.0;
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
  (this->grab_alpha).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->grab_alpha).ArrayNum = 0;
  (this->grab_alpha).ArrayMax = 0;
  (this->overriding_hand_position_alpha).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->overriding_hand_position_alpha).ArrayNum = 0;
  (this->overriding_hand_position_alpha).ArrayMax = 0;
  (this->overriding_hand_rotation_alpha).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->overriding_hand_rotation_alpha).ArrayNum = 0;
  (this->overriding_hand_rotation_alpha).ArrayMax = 0;
  (this->arm_array_index_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->arm_array_index_array).ArrayNum = 0;
  (this->arm_array_index_array).ArrayMax = 0;
  (this->Debug_Hand_Locations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug_Hand_Locations).ArrayNum = 0;
  (this->Debug_Hand_Locations).ArrayMax = 0;
  this->Max_Range_Limit_Lerp = 0.0;
  this->Smooth_Factor = 10.0;
  this->every_foot_dont_have_child = false;
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
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar27;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LookAt_Axis).field0_0x0._s_0.X = 0.0;
  (this->LookAt_Axis).field0_0x0._s_0.Y = 1.0;
  (this->LookAt_Axis).field0_0x0._s_0.Z = 0.0;
  if ((this->Debug_Hand_Locations).ArrayNum == 0) {
    ResizeDebugLocations(this,2);
  }
  return this;
}

// AnimLocLerp @ 14d32fc70

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
FAnimNode_DragonWeaponArmSolver::AnimLocLerp
          (FAnimNode_DragonWeaponArmSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  float fVar3;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  fVar3 = __real_42c80000 - param_3 * this->Interpolation_Speed * __real_41400000;
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  if (__real_42c80000 <= fVar3) {
    fVar3 = __real_42c80000;
  }
  if (fVar3 <= __real_3f800000) {
    fVar3 = __real_3f800000;
  }
  dVar2 = __real_3ff0000000000000 / (double)fVar3;
  if (this->Internal_Switched_Interpolation_bool == false) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_88._s_0.Z;
  }
  else {
    if (this->loc_interp_type == ENUM_DivisiveLoc_Interp) {
      local_48[0]._0_8_ = local_68._s_0.X - (local_68._s_0.X - (param_2->field0_0x0)._s_0.X) * dVar2
      ;
      local_48[0]._8_8_ = local_68._s_0.Y - (local_68._s_0.Y - (param_2->field0_0x0)._s_0.Y) * dVar2
      ;
      local_48[0]._16_8_ = local_68._s_0.Z - (local_68._s_0.Z - local_88._s_0.Z) * dVar2;
    }
    else {
      local_88._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_48[0]._16_8_ = local_88._s_0.Z;
      FMath::VInterpTo((TVector<double> *)&local_48[0]._s_0,(TVector<double> *)&local_68._s_0,
                       (TVector<double> *)&local_88._s_0,param_3,__real_3f000000);
    }
    auVar1._8_4_ = (int)local_48[0]._8_8_;
    auVar1._0_8_ = local_48[0]._0_8_;
    auVar1._12_4_ = (int)((ulonglong)local_48[0]._8_8_ >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_48[0]._16_8_;
  }
  return __return_storage_ptr__;
}

// ArmIK_System @ 14d331670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonWeaponArmSolver::ArmIK_System
          (FAnimNode_DragonWeaponArmSolver *this,FCSPose<FCompactPose> *param_1,
          FComponentSpacePoseContext *param_2,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  double adVar4 [2];
  double adVar5 [2];
  USkinnedMeshComponent *this_00;
  FScriptContainerElement *pFVar6;
  USkeletalMeshComponent *pUVar7;
  UDragonIKWeaponPhysicsComponent *pUVar8;
  code *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [12];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  double adVar22 [2];
  double adVar23 [2];
  bool bVar24;
  int iVar25;
  uint uVar26;
  undefined4 extraout_EAX;
  UClass *pUVar27;
  TTransform<double> *pTVar28;
  UWorld *pUVar29;
  TRotator<double> *this_01;
  TQuat<double> *pTVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar53 [16];
  double dVar52;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined4 uVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  float fVar75;
  double dVar76;
  double dVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar88;
  __m128d _Var85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  double dVar96;
  uint uVar97;
  uint uVar99;
  double dVar98;
  undefined1 auStackY_2128 [32];
  float local_20f8;
  longlong local_20f0;
  longlong local_20b0;
  FBoneReference local_2088;
  double local_2078;
  double dStack_2070;
  double local_2068 [2];
  double local_2058;
  double local_2048;
  double dStack_2040;
  double local_2038;
  double dStack_2030;
  double local_2028;
  double dStack_2020;
  double local_2018;
  double dStack_2010;
  double local_2008;
  double dStack_2000;
  double local_1ff8;
  double dStack_1ff0;
  double local_1fe8;
  double dStack_1fe0;
  double local_1fd8;
  double dStack_1fd0;
  double local_1fc8;
  double dStack_1fc0;
  double local_1fb8;
  double dStack_1fb0;
  double local_1fa8;
  double dStack_1fa0;
  double local_1f98;
  undefined1 local_1f88 [8];
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  double local_1f78;
  double dStack_1f70;
  double local_1f68;
  double dStack_1f60;
  double local_1f58;
  double dStack_1f50;
  double local_1f48;
  double local_1f40;
  double local_1f38;
  TRotator<double> local_1f30;
  TRotator<double> local_1f18;
  TRotator<double> local_1ef8;
  TRotator<double> local_1ed8;
  double local_1eb8;
  double dStack_1eb0;
  double local_1ea8;
  double local_1e98;
  double dStack_1e90;
  double local_1e88;
  double dStack_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined8 local_1e68;
  undefined8 uStack_1e60;
  double local_1e58 [2];
  double local_1e48 [2];
  double local_1e38 [2];
  undefined4 local_1e28;
  undefined4 uStack_1e24;
  undefined4 uStack_1e20;
  undefined4 uStack_1e1c;
  TQuat<double> local_1e18;
  undefined4 local_1df8;
  undefined4 uStack_1df4;
  undefined4 uStack_1df0;
  undefined4 uStack_1dec;
  undefined8 local_1de8;
  undefined1 local_1de0 [16];
  double local_1dd0;
  double local_1dc8;
  double dStack_1dc0;
  double local_1db8;
  double local_1db0;
  double dStack_1da8;
  double local_1da0;
  double local_1d98;
  double dStack_1d90;
  double local_1d88;
  double local_1d80 [2];
  double local_1d70;
  double local_1d68;
  double dStack_1d60;
  double local_1d58;
  double local_1d50 [2];
  double local_1d40;
  double local_1d38;
  double dStack_1d30;
  double local_1d28;
  double local_1d20;
  double dStack_1d18;
  double local_1d10;
  TRotator<double> local_1d08;
  TQuat<double> local_1ce8;
  TQuat<double> local_1cc8;
  ArmIKParamStruct local_1ca8;
  TTransform<double> local_16d8;
  TTransform<double> local_1678;
  TTransform<double> local_1618;
  TTransform<double> local_15b8;
  TTransform<double> local_1558;
  TTransform<double> local_14f8;
  TTransform<double> local_1498;
  TTransform<double> local_1438;
  TTransform<double> local_13d8;
  TTransform<double> local_1378;
  TTransform<double> local_1318;
  TTransform<double> local_12b8;
  TTransform<double> local_1258;
  TTransform<double> local_11f8;
  TTransform<double> local_1198;
  ArmIKParamStruct local_1138;
  TTransform<double> local_b68;
  TTransform<double> local_b08;
  TTransform<double> local_aa8;
  TTransform<double> local_a48;
  TTransform<double> local_9e8;
  TTransform<double> local_988;
  TTransform<double> local_928;
  TTransform<double> local_8c8;
  TTransform<double> local_868;
  TTransform<double> local_808;
  TTransform<double> local_7a8;
  TTransform<double> local_748;
  TTransform<double> local_6e8;
  TTransform<double> local_688;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_2128;
  uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar97 = _UNK_15061cc88;
  uVar99 = _UNK_15061cc8c;
  if (((0 < (this->Calculated_Hand_Transforms).ArrayNum) &&
      (this->owning_skel != (USkeletalMeshComponent *)0x0)) &&
     (uVar34 = 0, 0 < (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum)) {
    lVar35 = 0;
    lVar36 = 0;
    do {
      if ((((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) &&
          ((int)uVar34 < (this->Hand_Array).ArrayNum)) &&
         ((this->weapon_handler_component != (UDragonIKWeaponPhysicsComponent *)0x0 &&
          (this_00 = (USkinnedMeshComponent *)
                     this->weapon_handler_component->active_weapon_component,
          this_00 != (USkinnedMeshComponent *)0x0)))) {
        uVar59 = (undefined4)this_00->_padding_;
        uVar60 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar68 = (undefined4)this_00->_padding_;
        uVar69 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar70 = (undefined4)this_00->_padding_;
        uVar71 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar74 = (undefined4)this_00->_padding_;
        uVar72 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        dVar39 = (double)this_00->_padding_;
        dVar40 = (double)this_00->_padding_;
        dVar51 = (double)this_00->_padding_;
        dVar80 = (double)this_00->_padding_;
        uVar89 = (undefined4)this_00->_padding_;
        uVar73 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        uVar90 = (undefined4)this_00->_padding_;
        uVar91 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        dVar82 = (double)this_00->_padding_;
        dVar88 = (double)this_00->_padding_;
        pUVar27 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        iVar25 = (int)pUVar27->_padding_;
        if ((iVar25 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar25 * 8) ==
            &pUVar27->_padding_)) {
          iVar25 = USkinnedMeshComponent::GetBoneIndex
                             (this_00,this->weapon_handler_component->weapon_bone);
          pTVar28 = USkinnedMeshComponent::GetBoneTransform(this_00,&local_3e8,iVar25);
          uVar59 = *(undefined4 *)(pTVar28->Rotation).XY.m128d_f64;
          uVar60 = *(undefined4 *)((longlong)(pTVar28->Rotation).XY.m128d_f64 + 4);
          uVar68 = *(undefined4 *)((pTVar28->Rotation).XY.m128d_f64 + 1);
          uVar69 = *(undefined4 *)((longlong)(pTVar28->Rotation).XY.m128d_f64 + 0xc);
          uVar70 = *(undefined4 *)(pTVar28->Rotation).ZW.m128d_f64;
          uVar71 = *(undefined4 *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 4);
          uVar74 = *(undefined4 *)((pTVar28->Rotation).ZW.m128d_f64 + 1);
          uVar72 = *(undefined4 *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 0xc);
          dVar39 = (pTVar28->Translation).XY.m128d_f64[0];
          dVar40 = (pTVar28->Translation).XY.m128d_f64[1];
          dVar51 = (pTVar28->Translation).ZW.m128d_f64[0];
          dVar80 = (pTVar28->Translation).ZW.m128d_f64[1];
          uVar89 = *(undefined4 *)(pTVar28->Scale3D).XY.m128d_f64;
          uVar73 = *(undefined4 *)((longlong)(pTVar28->Scale3D).XY.m128d_f64 + 4);
          uVar90 = *(undefined4 *)((pTVar28->Scale3D).XY.m128d_f64 + 1);
          uVar91 = *(undefined4 *)((longlong)(pTVar28->Scale3D).XY.m128d_f64 + 0xc);
          dVar82 = (pTVar28->Scale3D).ZW.m128d_f64[0];
          dVar88 = (pTVar28->Scale3D).ZW.m128d_f64[1];
        }
        uVar33 = ~uVar34 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = uVar33;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        pFVar2 = pFVar6 + lVar36;
        *(undefined4 *)pFVar2 = uVar59;
        *(undefined4 *)(pFVar2 + 4) = uVar60;
        *(undefined4 *)(pFVar2 + 8) = uVar68;
        *(undefined4 *)(pFVar2 + 0xc) = uVar69;
        pFVar2 = pFVar6 + lVar36 + 0x10;
        *(undefined4 *)pFVar2 = uVar70;
        *(undefined4 *)(pFVar2 + 4) = uVar71;
        *(undefined4 *)(pFVar2 + 8) = uVar74;
        *(undefined4 *)(pFVar2 + 0xc) = uVar72;
        *(double *)(pFVar6 + lVar36 + 0x20) = dVar39;
        *(double *)(pFVar6 + lVar36 + 0x20 + 8) = dVar40;
        *(double *)(pFVar6 + lVar36 + 0x30) = dVar51;
        *(double *)(pFVar6 + lVar36 + 0x30 + 8) = dVar80;
        pFVar2 = pFVar6 + lVar36 + 0x40;
        *(undefined4 *)pFVar2 = uVar89;
        *(undefined4 *)(pFVar2 + 4) = uVar73;
        *(undefined4 *)(pFVar2 + 8) = uVar90;
        *(undefined4 *)(pFVar2 + 0xc) = uVar91;
        *(double *)(pFVar6 + lVar36 + 0x50) = dVar82;
        *(double *)(pFVar6 + lVar36 + 0x50 + 8) = dVar88;
        uVar26 = 0;
        if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
          uVar26 = uVar33;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (param_1,*(FCompactPoseBoneIndex *)
                                      ((this->Hand_Array).AllocatorInstance.Data +
                                      (longlong)(int)uVar34 * 0x10 + 0xc));
        local_15b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_15b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_15b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_15b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_15b8.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_15b8.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_15b8.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_15b8.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_15b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_15b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_15b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_15b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_15b8,pTVar28,(TTransform<double> *)&this->owning_skel->_padding_);
        dVar81 = local_15b8.Scale3D.ZW.m128d_f64[1];
        dVar76 = local_15b8.Scale3D.ZW.m128d_f64[0];
        dVar67 = local_15b8.Scale3D.XY.m128d_f64[1];
        dVar98 = local_15b8.Scale3D.XY.m128d_f64[0];
        dVar96 = local_15b8.Translation.ZW.m128d_f64[1];
        dVar52 = local_15b8.Translation.ZW.m128d_f64[0];
        dVar17 = local_15b8.Translation.XY.m128d_f64[1];
        dVar16 = local_15b8.Translation.XY.m128d_f64[0];
        dVar88 = local_15b8.Rotation.XY.m128d_f64[1];
        dVar82 = local_15b8.Rotation.XY.m128d_f64[0];
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = uVar33;
        }
        uVar89 = local_15b8.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar73 = local_15b8.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar90 = local_15b8.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar91 = local_15b8.Rotation.ZW.m128d_f64[1]._4_4_;
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        *(double *)(pFVar6 + lVar36) = dVar82;
        *(double *)(pFVar6 + lVar36 + 8) = dVar88;
        pFVar2 = pFVar6 + lVar36 + 0x10;
        *(undefined4 *)pFVar2 = uVar89;
        *(undefined4 *)(pFVar2 + 4) = uVar73;
        *(undefined4 *)(pFVar2 + 8) = uVar90;
        *(undefined4 *)(pFVar2 + 0xc) = uVar91;
        *(double *)(pFVar6 + lVar36 + 0x20) = dVar16;
        *(double *)(pFVar6 + lVar36 + 0x20 + 8) = dVar17;
        *(double *)(pFVar6 + lVar36 + 0x30) = dVar52;
        *(double *)(pFVar6 + lVar36 + 0x30 + 8) = dVar96;
        *(double *)(pFVar6 + lVar36 + 0x40) = dVar98;
        *(double *)(pFVar6 + lVar36 + 0x40 + 8) = dVar67;
        *(double *)(pFVar6 + lVar36 + 0x50) = dVar76;
        *(double *)(pFVar6 + lVar36 + 0x50 + 8) = dVar81;
        local_1678.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_1678.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_1678.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_1678.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_2088.BoneName = this->weapon_handler_component->weapon_grabbed_bone;
        local_2088.bUseSkeletonIndex = 0;
        local_2088.BoneIndex = -1;
        local_2088.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        local_1678.Rotation.XY.m128d_f64[0]._0_4_ = uVar59;
        local_1678.Rotation.XY.m128d_f64[0]._4_4_ = uVar60;
        local_1678.Rotation.XY.m128d_f64[1]._0_4_ = uVar68;
        local_1678.Rotation.XY.m128d_f64[1]._4_4_ = uVar69;
        local_1678.Rotation.ZW.m128d_f64[0]._0_4_ = uVar70;
        local_1678.Rotation.ZW.m128d_f64[0]._4_4_ = uVar71;
        local_1678.Rotation.ZW.m128d_f64[1]._0_4_ = uVar74;
        local_1678.Rotation.ZW.m128d_f64[1]._4_4_ = uVar72;
        local_1678.Translation.XY.m128d_f64[0] = dVar39;
        local_1678.Translation.XY.m128d_f64[1] = dVar40;
        local_1678.Translation.ZW.m128d_f64[0] = dVar51;
        local_1678.Translation.ZW.m128d_f64[1] = dVar80;
        FBoneReference::Initialize(&local_2088,this->SavedBoneContainer);
        pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (&param_2->Pose,local_2088.CachedCompactPoseIndex);
        local_1618.Rotation.XY.m128d_f64[0] = (pTVar28->Rotation).XY.m128d_f64[0];
        local_1618.Rotation.XY.m128d_f64[1] = (pTVar28->Rotation).XY.m128d_f64[1];
        local_1618.Rotation.ZW.m128d_f64[0] = (pTVar28->Rotation).ZW.m128d_f64[0];
        local_1618.Rotation.ZW.m128d_f64[1] = (pTVar28->Rotation).ZW.m128d_f64[1];
        local_1618.Translation.XY.m128d_f64[0] = (pTVar28->Translation).XY.m128d_f64[0];
        local_1618.Translation.XY.m128d_f64[1] = (pTVar28->Translation).XY.m128d_f64[1];
        local_1618.Translation.ZW.m128d_f64[0] = (pTVar28->Translation).ZW.m128d_f64[0];
        local_1618.Translation.ZW.m128d_f64[1] = (pTVar28->Translation).ZW.m128d_f64[1];
        local_1618.Scale3D.XY.m128d_f64[0] = (pTVar28->Scale3D).XY.m128d_f64[0];
        local_1618.Scale3D.XY.m128d_f64[1] = (pTVar28->Scale3D).XY.m128d_f64[1];
        local_1618.Scale3D.ZW.m128d_f64[0] = (pTVar28->Scale3D).ZW.m128d_f64[0];
        local_1618.Scale3D.ZW.m128d_f64[1] = (pTVar28->Scale3D).ZW.m128d_f64[1];
        uVar26 = 0;
        if ((int)uVar34 < (this->Calibration_Status_Array).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((this->Calibration_Status_Array).AllocatorInstance.Data[lVar35] ==
            (FScriptContainerElement)0x0) {
          uVar26 = 0;
          if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
            uVar26 = ~uVar34 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
          pTVar28 = UE::Math::TTransform<double>::Inverse(&local_1678,&local_388);
          local_1558.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          local_1558.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1]
          ;
          local_1558.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          local_1558.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3]
          ;
          local_1558.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1558.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_1558.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1558.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1558.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1558.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_1558.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1558.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_1558,(TTransform<double> *)(pFVar2 + (longlong)(int)uVar34 * 0x60),
                     pTVar28);
          dVar67 = local_1558.Scale3D.ZW.m128d_f64[1];
          dVar98 = local_1558.Scale3D.ZW.m128d_f64[0];
          dVar96 = local_1558.Scale3D.XY.m128d_f64[1];
          dVar52 = local_1558.Scale3D.XY.m128d_f64[0];
          dVar17 = local_1558.Translation.ZW.m128d_f64[1];
          dVar16 = local_1558.Translation.ZW.m128d_f64[0];
          dVar88 = local_1558.Translation.XY.m128d_f64[1];
          dVar82 = local_1558.Translation.XY.m128d_f64[0];
          dVar80 = local_1558.Rotation.ZW.m128d_f64[1];
          dVar51 = local_1558.Rotation.ZW.m128d_f64[0];
          dVar40 = local_1558.Rotation.XY.m128d_f64[1];
          dVar39 = local_1558.Rotation.XY.m128d_f64[0];
          uVar26 = 0;
          if ((int)uVar34 < (this->Hand_Weapon_Relative_Transforms).ArrayNum) {
            uVar26 = ~uVar34 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data;
          *(double *)(pFVar2 + lVar36) = dVar39;
          *(double *)(pFVar2 + lVar36 + 8) = dVar40;
          *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
          *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
          *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
          *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
          *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
          *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
          *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
          *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
          *(double *)(pFVar2 + lVar36 + 0x50) = dVar98;
          *(double *)(pFVar2 + lVar36 + 0x50 + 8) = dVar67;
          if (this->Calibration_Frame_Tick_Count < 4) {
            iVar25 = this->Calibration_Frame_Tick_Count + 1;
          }
          else {
            uVar26 = 0;
            if ((int)uVar34 < (this->Calibration_Status_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (this->Calibration_Status_Array).AllocatorInstance.Data[lVar35] =
                 (FScriptContainerElement)0x1;
            iVar25 = 0;
          }
          this->Calibration_Frame_Tick_Count = iVar25;
          uVar26 = this->primary_hand_index;
          uVar33 = 0;
          if ((int)uVar26 < (this->Hand_Array).ArrayNum) {
            uVar33 = ~uVar26 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (param_1,*(FCompactPoseBoneIndex *)
                                        ((this->Hand_Array).AllocatorInstance.Data +
                                        (longlong)(int)uVar26 * 0x10 + 0xc));
          dVar39 = (pTVar28->Rotation).XY.m128d_f64[1];
          (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[0] =
               (pTVar28->Rotation).XY.m128d_f64[0];
          (this->Frozen_Hand_Transform).Rotation.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Rotation).ZW.m128d_f64[1];
          (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[0] =
               (pTVar28->Rotation).ZW.m128d_f64[0];
          (this->Frozen_Hand_Transform).Rotation.ZW.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Translation).XY.m128d_f64[1];
          (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[0] =
               (pTVar28->Translation).XY.m128d_f64[0];
          (this->Frozen_Hand_Transform).Translation.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Translation).ZW.m128d_f64[1];
          (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[0] =
               (pTVar28->Translation).ZW.m128d_f64[0];
          (this->Frozen_Hand_Transform).Translation.ZW.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Scale3D).XY.m128d_f64[1];
          (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[0] = (pTVar28->Scale3D).XY.m128d_f64[0]
          ;
          (this->Frozen_Hand_Transform).Scale3D.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Scale3D).ZW.m128d_f64[0];
          dVar40 = (pTVar28->Scale3D).ZW.m128d_f64[1];
          (this->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0] =
               (double)CONCAT44(local_1678.Rotation.XY.m128d_f64[0]._4_4_,
                                local_1678.Rotation.XY.m128d_f64[0]._0_4_);
          (this->Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1] =
               (double)CONCAT44(local_1678.Rotation.XY.m128d_f64[1]._4_4_,
                                local_1678.Rotation.XY.m128d_f64[1]._0_4_);
          (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[0] = dVar39;
          (this->Frozen_Hand_Transform).Scale3D.ZW.m128d_f64[1] = dVar40;
          (this->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0] =
               (double)CONCAT44(local_1678.Rotation.ZW.m128d_f64[0]._4_4_,
                                local_1678.Rotation.ZW.m128d_f64[0]._0_4_);
          (this->Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1] =
               (double)CONCAT44(local_1678.Rotation.ZW.m128d_f64[1]._4_4_,
                                local_1678.Rotation.ZW.m128d_f64[1]._0_4_);
          (this->Frozen_Weapon_Transform).Translation.XY.m128d_f64[0] =
               local_1678.Translation.XY.m128d_f64[0];
          (this->Frozen_Weapon_Transform).Translation.XY.m128d_f64[1] =
               local_1678.Translation.XY.m128d_f64[1];
          (this->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0] =
               local_1678.Translation.ZW.m128d_f64[0];
          (this->Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1] =
               local_1678.Translation.ZW.m128d_f64[1];
          (this->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0] =
               local_1678.Scale3D.XY.m128d_f64[0];
          (this->Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1] =
               local_1678.Scale3D.XY.m128d_f64[1];
          (this->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0] =
               local_1678.Scale3D.ZW.m128d_f64[0];
          (this->Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1] =
               local_1678.Scale3D.ZW.m128d_f64[1];
          pTVar28 = UE::Math::TTransform<double>::Inverse(&this->owner_skel_w_transform,&local_328);
          local_14f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0]
          ;
          local_14f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1]
          ;
          local_14f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2]
          ;
          local_14f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3]
          ;
          local_14f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_14f8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_14f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_14f8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_14f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_14f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_14f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_14f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_14f8,&local_1678,pTVar28);
          pUVar7 = this->owning_skel;
          (this->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[0] =
               local_14f8.Rotation.XY.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Rotation.XY.m128d_f64[1] =
               local_14f8.Rotation.XY.m128d_f64[1];
          (this->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[0] =
               local_14f8.Rotation.ZW.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Rotation.ZW.m128d_f64[1] =
               local_14f8.Rotation.ZW.m128d_f64[1];
          (this->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[0] =
               local_14f8.Translation.XY.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Translation.XY.m128d_f64[1] =
               local_14f8.Translation.XY.m128d_f64[1];
          (this->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[0] =
               local_14f8.Translation.ZW.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Translation.ZW.m128d_f64[1] =
               local_14f8.Translation.ZW.m128d_f64[1];
          (this->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[0] =
               local_14f8.Scale3D.XY.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Scale3D.XY.m128d_f64[1] =
               local_14f8.Scale3D.XY.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[0] =
               local_1618.Rotation.XY.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Rotation.XY.m128d_f64[1] =
               local_1618.Rotation.XY.m128d_f64[1];
          (this->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[0] =
               local_14f8.Scale3D.ZW.m128d_f64[0];
          (this->Relative_Frozen_Weapon_Transform).Scale3D.ZW.m128d_f64[1] =
               local_14f8.Scale3D.ZW.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[0] =
               local_1618.Rotation.ZW.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Rotation.ZW.m128d_f64[1] =
               local_1618.Rotation.ZW.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[0] =
               local_1618.Translation.XY.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[1] =
               local_1618.Translation.XY.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[0] =
               local_1618.Translation.ZW.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[1] =
               local_1618.Translation.ZW.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[0] =
               local_1618.Scale3D.XY.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[1] =
               local_1618.Scale3D.XY.m128d_f64[1];
          (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[0] =
               local_1618.Scale3D.ZW.m128d_f64[0];
          (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[1] =
               local_1618.Scale3D.ZW.m128d_f64[1];
          pTVar28 = USceneComponent::GetRelativeTransform((USceneComponent *)pUVar7,&local_2c8);
          dVar39 = (pTVar28->Rotation).XY.m128d_f64[1];
          (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[0] =
               (pTVar28->Rotation).XY.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Rotation).ZW.m128d_f64[1];
          (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[0] =
               (pTVar28->Rotation).ZW.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Translation).XY.m128d_f64[1];
          (this->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[0] =
               (pTVar28->Translation).XY.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Translation.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Translation).ZW.m128d_f64[1];
          (this->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[0] =
               (pTVar28->Translation).ZW.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Translation.ZW.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Scale3D).XY.m128d_f64[1];
          (this->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[0] =
               (pTVar28->Scale3D).XY.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Scale3D.XY.m128d_f64[1] = dVar39;
          dVar39 = (pTVar28->Scale3D).ZW.m128d_f64[1];
          pUVar7 = this->owning_skel;
          (this->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[0] =
               (pTVar28->Scale3D).ZW.m128d_f64[0];
          (this->Frozen_RelMesh_Transform).Scale3D.ZW.m128d_f64[1] = dVar39;
          lVar32 = pUVar7->_padding_;
          if (lVar32 != 0) {
            lVar32 = *(longlong *)(lVar32 + 0x1b8);
            if (lVar32 == 0) {
              pTVar28 = &UE::Math::TTransform<double>::Identity;
            }
            else {
              pTVar28 = (TTransform<double> *)(lVar32 + 0x1f0);
            }
            dVar39 = (pTVar28->Rotation).XY.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[0] =
                 (pTVar28->Rotation).XY.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[1] = dVar39;
            dVar39 = (pTVar28->Rotation).ZW.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[0] =
                 (pTVar28->Rotation).ZW.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[1] = dVar39;
            dVar39 = (pTVar28->Translation).XY.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Translation.XY.m128d_f64[0] =
                 (pTVar28->Translation).XY.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Translation.XY.m128d_f64[1] = dVar39;
            dVar39 = (pTVar28->Translation).ZW.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[0] =
                 (pTVar28->Translation).ZW.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Translation.ZW.m128d_f64[1] = dVar39;
            dVar39 = (pTVar28->Scale3D).XY.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[0] =
                 (pTVar28->Scale3D).XY.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Scale3D.XY.m128d_f64[1] = dVar39;
            dVar39 = (pTVar28->Scale3D).ZW.m128d_f64[1];
            (this->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[0] =
                 (pTVar28->Scale3D).ZW.m128d_f64[0];
            (this->Frozen_Pawn_Transform).Scale3D.ZW.m128d_f64[1] = dVar39;
          }
        }
        local_b68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_b68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_b68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_b68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_b68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_b68.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_b68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_b68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_b68,&local_1618,&this->owner_skel_w_transform)
        ;
        local_748.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_748.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_748.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_748.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_748.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_748.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_748.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_748.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_748.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_748.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_748.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_748.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_748,&this->Initial_IK_Hand_Transform,&this->owner_skel_w_transform);
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        local_5c8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar36);
        local_5c8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 8);
        local_5c8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar36 + 0x10);
        local_5c8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 0x10 + 8);
        local_5c8.Translation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar36 + 0x20);
        local_5c8.Translation.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 0x20 + 8);
        local_5c8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar36 + 0x30);
        local_5c8.Translation.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 0x30 + 8);
        local_5c8.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar36 + 0x40);
        local_5c8.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 0x40 + 8);
        local_5c8.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar36 + 0x50);
        local_5c8.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar2 + lVar36 + 0x50 + 8);
        local_6e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_6e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_6e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_6e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_6e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_6e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_6e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_6e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_6e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_6e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_6e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_6e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_6e8,&this->Relative_Frozen_Weapon_Transform,&this->owner_skel_w_transform)
        ;
        pTVar28 = UE::Math::TTransform<double>::Inverse(&local_748,&local_148);
        local_988.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_988.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_988.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_988.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_988.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_988.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_988.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_988.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_988.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_988.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_988.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_988.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_988,&local_6e8,pTVar28);
        local_8c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_8c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_8c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_8c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_8c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_8c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_8c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_8c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_8c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_8c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_8c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_8c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_8c8,&local_988,&local_b68);
        uVar26 = 0;
        if ((int)uVar34 < (this->Hand_Weapon_Relative_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1498.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1498.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1498.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1498.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1498.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1498.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_1498.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1498.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1498.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1498.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1498.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1498.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_1498,
                   (TTransform<double> *)
                   ((this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data +
                   (longlong)(int)uVar34 * 0x60),&local_1678);
        dVar67 = local_1498.Scale3D.ZW.m128d_f64[1];
        dVar98 = local_1498.Scale3D.ZW.m128d_f64[0];
        dVar96 = local_1498.Scale3D.XY.m128d_f64[1];
        dVar52 = local_1498.Scale3D.XY.m128d_f64[0];
        dVar17 = local_1498.Translation.ZW.m128d_f64[1];
        dVar16 = local_1498.Translation.ZW.m128d_f64[0];
        dVar88 = local_1498.Translation.XY.m128d_f64[1];
        dVar82 = local_1498.Translation.XY.m128d_f64[0];
        dVar80 = local_1498.Rotation.ZW.m128d_f64[1];
        dVar51 = local_1498.Rotation.ZW.m128d_f64[0];
        dVar40 = local_1498.Rotation.XY.m128d_f64[1];
        dVar39 = local_1498.Rotation.XY.m128d_f64[0];
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        *(double *)(pFVar2 + lVar36) = dVar39;
        *(double *)(pFVar2 + lVar36 + 8) = dVar40;
        *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
        *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
        *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
        *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
        *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
        *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
        *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
        *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
        *(double *)(pFVar2 + lVar36 + 0x50) = dVar98;
        *(double *)(pFVar2 + lVar36 + 0x50 + 8) = dVar67;
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_1438.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1438.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1438.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1438.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1438.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1438.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_1438.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1438.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1438.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1438.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1438.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1438.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_1438,&this->IK_Hand_Real_Offset,
                   (TTransform<double> *)
                   ((this->Calculated_Hand_Transforms).AllocatorInstance.Data +
                   (longlong)(int)uVar34 * 0x60));
        dVar67 = local_1438.Scale3D.ZW.m128d_f64[1];
        dVar98 = local_1438.Scale3D.ZW.m128d_f64[0];
        dVar96 = local_1438.Scale3D.XY.m128d_f64[1];
        dVar52 = local_1438.Scale3D.XY.m128d_f64[0];
        dVar17 = local_1438.Translation.ZW.m128d_f64[1];
        dVar16 = local_1438.Translation.ZW.m128d_f64[0];
        dVar88 = local_1438.Translation.XY.m128d_f64[1];
        dVar82 = local_1438.Translation.XY.m128d_f64[0];
        dVar80 = local_1438.Rotation.ZW.m128d_f64[1];
        dVar51 = local_1438.Rotation.ZW.m128d_f64[0];
        dVar40 = local_1438.Rotation.XY.m128d_f64[1];
        dVar39 = local_1438.Rotation.XY.m128d_f64[0];
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        *(double *)(pFVar2 + lVar36) = dVar39;
        *(double *)(pFVar2 + lVar36 + 8) = dVar40;
        *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
        *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
        *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
        *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
        *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
        *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
        *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
        *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
        *(double *)(pFVar2 + lVar36 + 0x50) = dVar98;
        *(double *)(pFVar2 + lVar36 + 0x50 + 8) = dVar67;
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        pTVar28 = UE::Math::TTransform<double>::Inverse(&local_1678,&local_268);
        local_928.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_928.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_928.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_928.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_928.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_928.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_928.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_928.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_928.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_928.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_928.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_928.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_928,(TTransform<double> *)(pFVar2 + (longlong)(int)uVar34 * 0x60),pTVar28)
        ;
        local_13d8.Rotation.XY.m128d_f64 = *&(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
        local_13d8.Rotation.ZW.m128d_f64 = *&(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
        local_13d8.Translation.XY.m128d_f64 =
             *&(this->owner_skel_w_transform).Translation.XY.m128d_f64;
        local_13d8.Translation.ZW.m128d_f64 =
             *&(this->owner_skel_w_transform).Translation.ZW.m128d_f64;
        local_13d8.Scale3D.XY.m128d_f64 = *&(this->owner_skel_w_transform).Scale3D.XY.m128d_f64;
        local_13d8.Scale3D.ZW.m128d_f64 = *&(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64;
        if (this->owning_skel->_padding_ != 0) {
          local_13d8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_13d8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_13d8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_13d8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_13d8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_13d8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        local_11f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_11f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_11f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_11f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_11f8.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_11f8.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_11f8.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_11f8.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_11f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_11f8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_11f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_11f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_11f8,&this->Frozen_Weapon_Transform,&local_13d8);
        local_568.Rotation.XY.m128d_f64[0] =
             (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[0];
        local_568.Rotation.XY.m128d_f64[1] =
             (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[1];
        local_568.Rotation.ZW.m128d_f64[0] =
             (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[0];
        local_568.Rotation.ZW.m128d_f64[1] =
             (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[1];
        local_b08.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_b08.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_b08.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_b08.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_b08.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_b08.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_b08.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_b08.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_b08.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_b08.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_b08.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_b08.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_568.Translation.XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_568.Translation.XY.m128d_f64[1] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_568.Translation.ZW.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_568.Translation.ZW.m128d_f64[1] = 0.0;
        local_568.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_568.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_568.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_568.Scale3D.ZW.m128d_f64[1] = 0.0;
        UE::Math::TTransform<double>::Multiply
                  (&local_b08,&this->Initial_IK_Hand_Transform,&local_568);
        local_508.Rotation.XY.m128d_f64[0] = (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[0];
        local_508.Rotation.XY.m128d_f64[1] = (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[1];
        local_508.Rotation.ZW.m128d_f64[0] = (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[0];
        local_508.Rotation.ZW.m128d_f64[1] = (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[1];
        local_aa8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_aa8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_aa8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_aa8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_aa8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_aa8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_aa8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_aa8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_aa8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_aa8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_aa8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_aa8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_508.Translation.XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_508.Translation.XY.m128d_f64[1] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_508.Translation.ZW.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_508.Translation.ZW.m128d_f64[1] = 0.0;
        local_508.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_508.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_508.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_508.Scale3D.ZW.m128d_f64[1] = 0.0;
        UE::Math::TTransform<double>::Multiply(&local_aa8,&local_b08,&local_508);
        pTVar28 = UE::Math::TTransform<double>::Inverse(&local_aa8,&local_208);
        local_7a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_7a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_7a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_7a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_7a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_7a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_7a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_7a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_7a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_7a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_7a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_7a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_7a8,&this->Frozen_Weapon_Transform,pTVar28);
        local_448.Rotation.XY.m128d_f64[0] =
             (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[0];
        local_448.Rotation.XY.m128d_f64[1] =
             (this->Frozen_RelMesh_Transform).Rotation.XY.m128d_f64[1];
        local_448.Rotation.ZW.m128d_f64[0] =
             (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[0];
        local_448.Rotation.ZW.m128d_f64[1] =
             (this->Frozen_RelMesh_Transform).Rotation.ZW.m128d_f64[1];
        local_a48.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a48.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_a48.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a48.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_a48.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_a48.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_a48.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a48.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_a48.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_a48.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_a48.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a48.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_448.Translation.XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_448.Translation.XY.m128d_f64[1] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_448.Translation.ZW.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_448.Translation.ZW.m128d_f64[1] = 0.0;
        local_448.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_448.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_448.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_448.Scale3D.ZW.m128d_f64[1] = 0.0;
        UE::Math::TTransform<double>::Multiply(&local_a48,&local_1618,&local_448);
        local_688.Rotation.XY.m128d_f64[0] = (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[0];
        local_688.Rotation.XY.m128d_f64[1] = (this->Frozen_Pawn_Transform).Rotation.XY.m128d_f64[1];
        local_688.Rotation.ZW.m128d_f64[0] = (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[0];
        local_688.Rotation.ZW.m128d_f64[1] = (this->Frozen_Pawn_Transform).Rotation.ZW.m128d_f64[1];
        local_9e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_9e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_9e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_9e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_9e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_9e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_9e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_9e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_9e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_9e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_9e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_9e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_688.Translation.XY.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_688.Translation.XY.m128d_f64[1] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_688.Translation.ZW.m128d_f64[0] =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_688.Translation.ZW.m128d_f64[1] = 0.0;
        local_688.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_688.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_688.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_688.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        UE::Math::TTransform<double>::Multiply(&local_9e8,&local_a48,&local_688);
        local_1258.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1258.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1258.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1258.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1258.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1258.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_1258.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1258.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1258.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1258.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1258.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1258.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_1258,&local_7a8,&local_9e8);
        dVar82 = local_1258.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar88 = local_1258.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar40 = local_1258.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar51 = local_1258.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        uVar59 = (undefined4)((ulonglong)dVar51 >> 0x20);
        auVar78._8_4_ = SUB84(dVar51,0);
        auVar78._0_8_ = dVar40;
        auVar78._12_4_ = uVar59;
        dVar80 = auVar78._8_8_;
        auVar55._8_4_ = SUB84(dVar51,0);
        auVar55._0_8_ = dVar80;
        auVar55._12_4_ = uVar59;
        auVar63._8_4_ = SUB84(local_11f8.Rotation.XY.m128d_f64[0],0);
        auVar63._0_8_ = local_11f8.Rotation.XY.m128d_f64[1];
        auVar63._12_4_ = (int)((ulonglong)local_11f8.Rotation.XY.m128d_f64[0] >> 0x20);
        dVar39 = dVar82 * local_11f8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar55._8_8_ * local_11f8.Rotation.XY.m128d_f64[1] +
                 local_11f8.Rotation.ZW.m128d_f64[1] * dVar88 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar63._8_8_ * dVar40 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar70 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        uVar71 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        uVar68 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        uVar69 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_628.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar39,0);
        local_628.Rotation.XY.m128d_f64[0] =
             dVar82 * local_11f8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar80 * local_11f8.Rotation.XY.m128d_f64[0] +
             local_11f8.Rotation.ZW.m128d_f64[0] * dVar88 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             local_11f8.Rotation.XY.m128d_f64[1] * dVar40 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_628.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
        uVar59 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        uVar60 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_1198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dVar39 = dVar82 * local_11f8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar51 * local_11f8.Rotation.ZW.m128d_f64[1] +
                 local_11f8.Rotation.XY.m128d_f64[1] * dVar88 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 local_11f8.Rotation.ZW.m128d_f64[0] * dVar40 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_628.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar39,0);
        local_628.Rotation.ZW.m128d_f64[0] =
             dVar82 * local_11f8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar80 * local_11f8.Rotation.ZW.m128d_f64[0] +
             local_11f8.Rotation.XY.m128d_f64[0] * dVar88 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             local_11f8.Rotation.ZW.m128d_f64[1] * dVar40 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_628.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar39 >> 0x20);
        local_628.Translation.XY.m128d_f64[1]._0_4_ = uVar70;
        local_628.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_628.Translation.XY.m128d_f64[1]._4_4_ = uVar71;
        local_628.Translation.ZW.m128d_f64[1]._0_4_ = uVar68;
        local_628.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_628.Translation.ZW.m128d_f64[1]._4_4_ = uVar69;
        local_628.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar59;
        local_628.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_628.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar60;
        local_1198.Translation.XY.m128d_f64[1]._0_4_ = uVar70;
        local_1198.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1198.Translation.XY.m128d_f64[1]._4_4_ = uVar71;
        local_1198.Translation.ZW.m128d_f64[1]._0_4_ = uVar68;
        local_1198.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1198.Translation.ZW.m128d_f64[1]._4_4_ = uVar69;
        local_1198.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar59;
        local_1198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1198.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar60;
        local_628.Scale3D.XY.m128d_f64[0] = local_1198.Scale3D.XY.m128d_f64[0];
        local_628.Scale3D.XY.m128d_f64[1] = local_1198.Scale3D.XY.m128d_f64[1];
        UE::Math::TTransform<double>::Multiply(&local_1198,&local_928,&local_628);
        local_1378.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1378.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1378.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1378.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1378.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1378.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_1378.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1378.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1378.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1378.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1378.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1378.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_1378,&local_1198,&local_1678);
        dVar67 = local_1378.Scale3D.ZW.m128d_f64[1];
        dVar98 = local_1378.Scale3D.ZW.m128d_f64[0];
        dVar96 = local_1378.Scale3D.XY.m128d_f64[1];
        dVar52 = local_1378.Scale3D.XY.m128d_f64[0];
        dVar17 = local_1378.Translation.ZW.m128d_f64[1];
        dVar16 = local_1378.Translation.ZW.m128d_f64[0];
        dVar88 = local_1378.Translation.XY.m128d_f64[1];
        dVar82 = local_1378.Translation.XY.m128d_f64[0];
        dVar80 = local_1378.Rotation.ZW.m128d_f64[1];
        dVar51 = local_1378.Rotation.ZW.m128d_f64[0];
        dVar40 = local_1378.Rotation.XY.m128d_f64[1];
        dVar39 = local_1378.Rotation.XY.m128d_f64[0];
        uVar26 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar26 = ~uVar34 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        pTVar28 = &local_12b8;
        *(double *)(pFVar2 + lVar36) = dVar39;
        *(double *)(pFVar2 + lVar36 + 8) = dVar40;
        *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
        *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
        *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
        *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
        *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
        *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
        *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
        *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
        *(double *)(pFVar2 + lVar36 + 0x50) = dVar98;
        *(double *)(pFVar2 + lVar36 + 0x50 + 8) = dVar67;
        local_12b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_12b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_12b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_12b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_12b8.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_12b8.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_12b8.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_12b8.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_12b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_12b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_12b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_12b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(pTVar28,&local_1198,&local_8c8);
        uVar99 = _UNK_15061cc8c;
        uVar97 = _UNK_15061cc88;
        uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        auVar53._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c & local_12b8.Scale3D.ZW.m128d_f64[1]._4_4_,
                               _UNK_15061cc88 & local_12b8.Scale3D.ZW.m128d_f64[1]._0_4_));
        auVar53._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                               local_12b8.Scale3D.ZW.m128d_f64[0]._4_4_,
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                               local_12b8.Scale3D.ZW.m128d_f64[0]._0_4_));
        uVar31 = movmskpd((int)pTVar28,auVar53);
        auVar41._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (double)CONCAT44(_UNK_15061cc8c & local_12b8.Scale3D.XY.m128d_f64[1]._4_4_,
                               _UNK_15061cc88 & local_12b8.Scale3D.XY.m128d_f64[1]._0_4_));
        auVar41._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                               local_12b8.Scale3D.XY.m128d_f64[0]._4_4_,
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                               local_12b8.Scale3D.XY.m128d_f64[0]._0_4_));
        iVar25 = movmskpd(extraout_EAX,auVar41);
        if ((uVar31 & 0x3fffffff) == 0 && iVar25 == 0) {
          local_868.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_868.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_868.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_868.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_868.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_868.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast(&local_12b8,&local_868);
        }
        uVar31 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_808.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_808.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_808.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_808.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_808.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_808.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_808.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_808.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_808.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_808.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_808.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_808.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_808,&local_868,
                   (TTransform<double> *)
                   ((this->Calculated_Hand_Transforms).AllocatorInstance.Data +
                   (longlong)(int)uVar34 * 0x60));
        local_1318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1318.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1318.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1318.Translation.XY.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_1318.Translation.XY.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        local_1318.Translation.ZW.m128d_f64[0] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_1318.Translation.ZW.m128d_f64[1] =
             (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_1318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1318.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1318.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_1318,&local_5c8,&local_808);
        dVar96 = local_1318.Scale3D.XY.m128d_f64[1];
        dVar52 = local_1318.Scale3D.XY.m128d_f64[0];
        dVar17 = local_1318.Translation.ZW.m128d_f64[1];
        dVar16 = local_1318.Translation.ZW.m128d_f64[0];
        dVar88 = local_1318.Translation.XY.m128d_f64[1];
        dVar82 = local_1318.Translation.XY.m128d_f64[0];
        dVar80 = local_1318.Rotation.ZW.m128d_f64[1];
        dVar51 = local_1318.Rotation.ZW.m128d_f64[0];
        dVar40 = local_1318.Rotation.XY.m128d_f64[1];
        dVar39 = local_1318.Rotation.XY.m128d_f64[0];
        auVar21._8_8_ = local_1318.Scale3D.ZW.m128d_f64[1];
        auVar21._0_8_ = local_1318.Scale3D.ZW.m128d_f64[0];
        uVar31 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        *(double *)(pFVar2 + lVar36) = dVar39;
        *(double *)(pFVar2 + lVar36 + 8) = dVar40;
        *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
        *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
        *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
        *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
        *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
        *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
        *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
        *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
        *(undefined1 (*) [16])(pFVar2 + lVar36 + 0x50) = auVar21;
      }
      uVar34 = uVar34 + 1;
      lVar35 = lVar35 + 1;
      lVar36 = lVar36 + 0x60;
    } while ((int)uVar34 <
             (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum);
  }
  uVar34 = 0;
  if (0 < (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum) {
    lVar35 = 0;
    lVar36 = 0;
    do {
      pUVar29 = (UWorld *)this->owning_skel->_padding_;
      if (pUVar29 == (UWorld *)0x0) {
        pUVar29 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
      }
      bVar24 = UWorld::IsGameWorld(pUVar29);
      _Var85 = UE::Math::TTransform<double>::Identity.Rotation.XY;
      if (((bVar24) && ((int)uVar34 < (this->Debug_Hand_Locations).ArrayNum)) &&
         (this->weapon_handler_component != (UDragonIKWeaponPhysicsComponent *)0x0)) {
        uVar59 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar69 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar74 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar89 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar60 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
        uVar70 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
        uVar72 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
        uVar73 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
        uVar68 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
        uVar71 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
        local_1e58[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_1e58[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_1e48[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_1e48[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        uVar31 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        pUVar8 = this->weapon_handler_component;
        local_1e98 = *(double *)(pFVar2 + lVar35);
        dStack_1e90 = *(double *)(pFVar2 + lVar35 + 8);
        local_1e88 = *(double *)(pFVar2 + lVar35 + 0x10);
        dStack_1e80 = *(double *)(pFVar2 + lVar35 + 0x10 + 8);
        local_1e78 = *(undefined8 *)(pFVar2 + lVar35 + 0x20);
        uStack_1e70 = *(undefined8 *)(pFVar2 + lVar35 + 0x20 + 8);
        local_1e68 = *(undefined8 *)(pFVar2 + lVar35 + 0x30);
        uStack_1e60 = *(undefined8 *)(pFVar2 + lVar35 + 0x30 + 8);
        auVar55 = *(undefined1 (*) [16])(pFVar2 + lVar35 + 0x40);
        uVar19 = *(undefined8 *)(pFVar2 + lVar35 + 0x50);
        uVar20 = *(undefined8 *)(pFVar2 + lVar35 + 0x50 + 8);
        if (0 < (pUVar8->arm_override_transform).ArrayNum) {
          uVar31 = 0;
          if ((int)uVar34 < (pUVar8->arm_override_transform).ArrayNum) {
            uVar31 = ~uVar34 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar6 = (pUVar8->arm_override_transform).AllocatorInstance.Data;
          local_1e58 = *(double (*) [2])(pFVar6 + lVar35 + 0x40);
          _Var85.m128d_f64 = *(double (*) [2])(pFVar6 + lVar35);
          pFVar2 = pFVar6 + lVar35 + 0x10;
          uVar59 = *(undefined4 *)pFVar2;
          uVar69 = *(undefined4 *)(pFVar2 + 4);
          uVar74 = *(undefined4 *)(pFVar2 + 8);
          uVar89 = *(undefined4 *)(pFVar2 + 0xc);
          pFVar2 = pFVar6 + lVar35 + 0x20;
          uVar60 = *(undefined4 *)pFVar2;
          uVar70 = *(undefined4 *)(pFVar2 + 4);
          uVar72 = *(undefined4 *)(pFVar2 + 8);
          uVar73 = *(undefined4 *)(pFVar2 + 0xc);
          uVar68 = *(undefined4 *)(pFVar6 + lVar35 + 0x30);
          uVar71 = *(undefined4 *)(pFVar6 + lVar35 + 0x30 + 4);
          local_1e48 = *(double (*) [2])(pFVar6 + lVar35 + 0x50);
        }
        uVar31 = 0;
        if ((int)uVar34 < (this->overriding_hand_position_alpha).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar3 = *(float *)((this->overriding_hand_position_alpha).AllocatorInstance.Data + lVar36);
        local_1de8 = CONCAT44(uVar71,uVar68);
        local_1f98 = (double)CONCAT44(uVar71,uVar68);
        uVar31 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        local_1df8 = uVar60;
        uStack_1df4 = uVar70;
        uStack_1df0 = uVar72;
        uStack_1dec = uVar73;
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        dVar51 = (double)fVar3;
        pFVar2 = pFVar6 + lVar35 + 0x20;
        local_1d68 = *(double *)pFVar2;
        dStack_1d60 = *(double *)(pFVar2 + 8);
        local_1d58 = *(double *)(pFVar6 + lVar35 + 0x30);
        dVar40 = ((double)CONCAT44(uVar70,uVar60) - local_1d68) * dVar51 + local_1d68;
        dVar39 = ((double)CONCAT44(uVar73,uVar72) - dStack_1d60) * dVar51 + dStack_1d60;
        uVar60 = SUB84(dVar39,0);
        uVar68 = (undefined4)((ulonglong)dVar39 >> 0x20);
        local_1de0._8_4_ = uVar60;
        local_1de0._0_8_ = dVar40;
        local_1de0._12_4_ = uVar68;
        dVar39 = (local_1f98 - local_1d58) * dVar51 + local_1d58;
        uVar31 = 0;
        if ((int)uVar34 < (this->overriding_hand_rotation_alpha).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        local_1dd0 = dVar39;
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar3 = *(float *)((this->overriding_hand_rotation_alpha).AllocatorInstance.Data + lVar36);
        local_1e38 = _Var85.m128d_f64;
        local_1e28 = uVar59;
        uStack_1e24 = uVar69;
        uStack_1e20 = uVar74;
        uStack_1e1c = uVar89;
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1e38,&local_1f30);
        dVar82 = local_1f30.Roll;
        dVar80 = local_1f30.Yaw;
        dVar51 = local_1f30.Pitch;
        uVar31 = 0;
        if ((int)uVar34 < (this->Calculated_Hand_Transforms).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar6 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
        pFVar2 = pFVar6 + lVar35;
        local_1e18.X = *(double *)pFVar2;
        local_1e18.Y = *(double *)(pFVar2 + 8);
        pFVar6 = pFVar6 + lVar35 + 0x10;
        local_1e18.Z = *(double *)pFVar6;
        local_1e18.W = *(double *)(pFVar6 + 8);
        UE::Math::TQuat<double>::Rotator(&local_1e18,&local_1f18);
        local_1ed8.Pitch = local_1f18.Pitch;
        local_1ed8.Yaw = local_1f18.Yaw;
        local_1ef8.Pitch = dVar51;
        local_1ef8.Yaw = dVar80;
        local_1ef8.Roll = dVar82;
        local_1ed8.Roll = local_1f18.Roll;
        this_01 = UKismetMathLibrary::RLerp(&local_1d08,&local_1ed8,&local_1ef8,fVar3,true);
        pTVar30 = UE::Math::TRotator<double>::Quaternion(this_01,&local_1cc8);
        dVar82 = pTVar30->X;
        dVar88 = pTVar30->Y;
        dVar51 = pTVar30->Z;
        dVar80 = pTVar30->W;
        uVar31 = 0;
        if ((int)uVar34 < (this->Debug_Hand_Locations).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
        *(double *)(pFVar2 + lVar35) = dVar82;
        *(double *)(pFVar2 + lVar35 + 8) = dVar88;
        *(double *)(pFVar2 + lVar35 + 0x10) = dVar51;
        *(double *)(pFVar2 + lVar35 + 0x10 + 8) = dVar80;
        auVar13._8_4_ = uVar60;
        auVar13._0_8_ = dVar40;
        auVar13._12_4_ = uVar68;
        *(undefined1 (*) [16])(pFVar2 + lVar35 + 0x20) = auVar13;
        *(double *)(pFVar2 + lVar35 + 0x30) = dVar39;
        *(undefined8 *)(pFVar2 + lVar35 + 0x30 + 8) = 0;
        *(undefined1 (*) [16])(pFVar2 + lVar35 + 0x40) = auVar55;
        *(undefined8 *)(pFVar2 + lVar35 + 0x50) = uVar19;
        *(undefined8 *)(pFVar2 + lVar35 + 0x50 + 8) = uVar20;
      }
      uVar34 = uVar34 + 1;
      lVar36 = lVar36 + 4;
      lVar35 = lVar35 + 0x60;
    } while ((int)uVar34 <
             (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum);
  }
  piVar1 = &(this->HandIK_Transforms).ArrayMax;
  (this->HandIK_Transforms).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&(this->HandIK_Transforms).AllocatorInstance,0,piVar1);
  }
  if (this->weapon_handler_component == (UDragonIKWeaponPhysicsComponent *)0x0) {
    pUVar29 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar29 == (UWorld *)0x0) {
      pUVar29 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    bVar24 = UWorld::IsGameWorld(pUVar29);
    if (bVar24) {
      return;
    }
  }
  dVar39 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  if ((dVar39 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar39)) {
    local_1f48 = __real_3ff0000000000000 / SQRT(dVar39);
  }
  dVar39 = (this->LookAt_Axis).field0_0x0._s_0.Y;
  dVar40 = (this->LookAt_Axis).field0_0x0._s_0.X;
  dVar51 = (this->LookAt_Axis).field0_0x0._s_0.Z;
  dVar39 = dVar40 * dVar40 + dVar39 * dVar39 + dVar51 * dVar51;
  if ((dVar39 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar39)) {
    local_1f38 = __real_3ff0000000000000 / SQRT(dVar39);
  }
  this->nsew_pole_method = false;
  this->up_arm_twist_technique = false;
  if (this->arm_twist_axis == ENUM_UpAxisTwist) {
    this->up_arm_twist_technique = true;
  }
  uVar34 = 0;
  if (0 < (this->Aiming_Hand_Limbs).ArrayNum) {
    lVar35 = 0;
    lVar36 = 0;
    local_20f0 = 0;
    local_20b0 = 0;
    do {
      uVar31 = 0;
      if ((int)uVar34 < (this->Actual_Shoulder_Array).ArrayNum) {
        uVar31 = ~uVar34 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar2 = (this->Actual_Shoulder_Array).AllocatorInstance.Data;
      if ((-1 < *(int *)(pFVar2 + local_20f0 + 8)) && (*(int *)(pFVar2 + local_20f0 + 0xc) != -1)) {
        uVar31 = 0;
        if ((int)uVar34 < (this->Elbow_Array).ArrayNum) {
          uVar31 = ~uVar34 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar2 = (this->Elbow_Array).AllocatorInstance.Data;
        if ((-1 < *(int *)(pFVar2 + lVar35 * 0x10 + 8)) &&
           (*(int *)(pFVar2 + lVar35 * 0x10 + 0xc) != -1)) {
          uVar31 = 0;
          if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
            uVar31 = ~uVar34 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar2 = (this->Hand_Array).AllocatorInstance.Data;
          if ((-1 < *(int *)(pFVar2 + lVar35 * 0x10 + 8)) &&
             (*(int *)(pFVar2 + lVar35 * 0x10 + 0xc) != -1)) {
            if ((int)uVar34 < (this->Elbow_Bone_Transform_Array).ArrayNum) {
              uVar31 = 0;
              if ((int)uVar34 < (this->Elbow_Array).ArrayNum) {
                uVar31 = ~uVar34 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  (param_1,*(FCompactPoseBoneIndex *)
                                            ((this->Elbow_Array).AllocatorInstance.Data +
                                            (longlong)(int)uVar34 * 0x10 + 0xc));
              dVar39 = (pTVar28->Rotation).XY.m128d_f64[0];
              dVar40 = (pTVar28->Rotation).XY.m128d_f64[1];
              dVar51 = (pTVar28->Rotation).ZW.m128d_f64[0];
              dVar80 = (pTVar28->Rotation).ZW.m128d_f64[1];
              dVar82 = (pTVar28->Translation).XY.m128d_f64[0];
              dVar88 = (pTVar28->Translation).XY.m128d_f64[1];
              dVar16 = (pTVar28->Translation).ZW.m128d_f64[0];
              dVar17 = (pTVar28->Translation).ZW.m128d_f64[1];
              dVar52 = (pTVar28->Scale3D).XY.m128d_f64[0];
              dVar96 = (pTVar28->Scale3D).XY.m128d_f64[1];
              dVar98 = (pTVar28->Scale3D).ZW.m128d_f64[0];
              dVar67 = (pTVar28->Scale3D).ZW.m128d_f64[1];
              uVar31 = 0;
              if ((int)uVar34 < (this->Elbow_Bone_Transform_Array).ArrayNum) {
                uVar31 = ~uVar34 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar2 = (this->Elbow_Bone_Transform_Array).AllocatorInstance.Data;
              *(double *)(pFVar2 + lVar36) = dVar39;
              *(double *)(pFVar2 + lVar36 + 8) = dVar40;
              *(double *)(pFVar2 + lVar36 + 0x10) = dVar51;
              *(double *)(pFVar2 + lVar36 + 0x10 + 8) = dVar80;
              *(double *)(pFVar2 + lVar36 + 0x20) = dVar82;
              *(double *)(pFVar2 + lVar36 + 0x20 + 8) = dVar88;
              *(double *)(pFVar2 + lVar36 + 0x30) = dVar16;
              *(double *)(pFVar2 + lVar36 + 0x30 + 8) = dVar17;
              *(double *)(pFVar2 + lVar36 + 0x40) = dVar52;
              *(double *)(pFVar2 + lVar36 + 0x40 + 8) = dVar96;
              *(double *)(pFVar2 + lVar36 + 0x50) = dVar98;
              *(double *)(pFVar2 + lVar36 + 0x50 + 8) = dVar67;
            }
            if ((int)uVar34 < (this->Hand_Default_Transform_Array).ArrayNum) {
              uVar31 = 0;
              if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
                uVar31 = ~uVar34 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  (param_1,*(FCompactPoseBoneIndex *)
                                            ((this->Hand_Array).AllocatorInstance.Data +
                                            (longlong)(int)uVar34 * 0x10 + 0xc));
              dVar39 = (pTVar28->Rotation).XY.m128d_f64[0];
              dVar40 = (pTVar28->Rotation).XY.m128d_f64[1];
              dVar51 = (pTVar28->Rotation).ZW.m128d_f64[0];
              dVar80 = (pTVar28->Rotation).ZW.m128d_f64[1];
              dVar82 = (pTVar28->Translation).XY.m128d_f64[0];
              dVar88 = (pTVar28->Translation).XY.m128d_f64[1];
              dVar16 = (pTVar28->Translation).ZW.m128d_f64[0];
              dVar17 = (pTVar28->Translation).ZW.m128d_f64[1];
              dVar52 = (pTVar28->Scale3D).XY.m128d_f64[0];
              dVar96 = (pTVar28->Scale3D).XY.m128d_f64[1];
              dVar98 = (pTVar28->Scale3D).ZW.m128d_f64[0];
              dVar67 = (pTVar28->Scale3D).ZW.m128d_f64[1];
              uVar31 = 0;
              if ((int)uVar34 < (this->Hand_Default_Transform_Array).ArrayNum) {
                uVar31 = ~uVar34 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar2 = (this->Hand_Default_Transform_Array).AllocatorInstance.Data;
              lVar32 = lVar35 * 0x60;
              *(double *)(pFVar2 + lVar32) = dVar39;
              *(double *)(pFVar2 + lVar32 + 8) = dVar40;
              *(double *)(pFVar2 + lVar32 + 0x10) = dVar51;
              *(double *)(pFVar2 + lVar32 + 0x10 + 8) = dVar80;
              *(double *)(pFVar2 + lVar32 + 0x20) = dVar82;
              *(double *)(pFVar2 + lVar32 + 0x20 + 8) = dVar88;
              *(double *)(pFVar2 + lVar32 + 0x30) = dVar16;
              *(double *)(pFVar2 + lVar32 + 0x30 + 8) = dVar17;
              *(double *)(pFVar2 + lVar32 + 0x40) = dVar52;
              *(double *)(pFVar2 + lVar32 + 0x40 + 8) = dVar96;
              *(double *)(pFVar2 + lVar32 + 0x50) = dVar98;
              *(double *)(pFVar2 + lVar32 + 0x50 + 8) = dVar67;
            }
            uVar31 = 0;
            if ((int)uVar34 < (this->Debug_Hand_Locations).ArrayNum) {
              uVar31 = ~uVar34 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
            local_1db8 = *(double *)(pFVar2 + lVar35 * 0x60 + 0x30);
            pFVar2 = pFVar2 + lVar35 * 0x60 + 0x20;
            local_1dc8 = *(double *)pFVar2;
            dStack_1dc0 = *(double *)(pFVar2 + 8);
            dVar52 = local_1db8 - (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
            dVar16 = local_1dc8 - (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
            dVar17 = dStack_1dc0 - (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
            uVar59 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar39 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar40 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            auVar92._8_4_ = SUB84(dVar17,0);
            auVar92._0_8_ = dVar16;
            auVar92._12_4_ = uVar59;
            dVar51 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar80 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar62._8_4_ = SUB84(dVar40,0);
            auVar62._0_8_ = dVar39;
            auVar62._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            auVar11._8_4_ = SUB84(dVar80,0);
            auVar11._0_8_ = dVar51;
            auVar11._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
            auVar63 = blendpd(auVar62,auVar11,2);
            auVar42._8_4_ = SUB84(dVar51,0);
            auVar42._0_8_ = dVar40;
            auVar42._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            auVar54._8_4_ = SUB84(dVar17,0);
            auVar54._0_8_ = dVar16;
            auVar54._12_4_ = uVar59;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = dVar52;
            auVar55 = blendpd(auVar54,auVar15,2);
            auVar93._0_8_ = auVar92._8_8_ * dVar39 - dVar40 * dVar16;
            auVar93._8_8_ = dVar52 * dVar40 - auVar42._8_8_ * dVar17;
            auVar56._0_8_ = auVar55._0_8_ * dVar51 - auVar63._0_8_ * dVar52;
            auVar56._8_8_ = auVar55._8_8_ * dVar80 - auVar63._8_8_ * 0.0;
            dVar82 = auVar93._8_8_ + auVar93._8_8_;
            dVar88 = auVar56._0_8_ + auVar56._0_8_;
            uVar59 = SUB84(dVar88,0);
            uVar60 = (undefined4)((ulonglong)dVar88 >> 0x20);
            auVar55 = blendpd(auVar93,auVar56,2);
            auVar86._8_4_ = uVar59;
            auVar86._0_8_ = dVar82;
            auVar86._12_4_ = uVar60;
            auVar43._8_4_ = uVar59;
            auVar43._0_8_ = dVar82;
            auVar43._12_4_ = uVar60;
            auVar77._8_4_ = uVar59;
            auVar77._0_8_ = dVar82;
            auVar77._12_4_ = uVar60;
            auVar94._0_8_ = auVar55._0_8_ + auVar55._0_8_;
            auVar94._8_8_ = auVar55._8_8_ + auVar55._8_8_;
            auVar78 = blendpd(auVar77,auVar94,2);
            auVar87._0_8_ = auVar86._8_8_ * dVar39 - dVar82 * dVar40;
            auVar87._8_8_ = auVar94._0_8_ * dVar40 - auVar43._8_8_ * dVar51;
            auVar55 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.XY.m128d_f64;
            auVar44._8_4_ = SUB84(auVar94._8_8_,0);
            auVar44._0_8_ = auVar94._0_8_;
            auVar44._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
            auVar79._0_8_ = auVar78._0_8_ * dVar51 - auVar94._0_8_ * auVar63._0_8_;
            auVar79._8_8_ = auVar78._8_8_ * dVar80 - auVar44._8_8_ * auVar63._8_8_;
            auVar63 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64;
            auVar64._0_8_ = (double)CONCAT44(uVar33 & auVar55._4_4_,uVar26 & auVar55._0_4_);
            auVar64._8_4_ = uVar97 & auVar55._8_4_;
            auVar64._12_4_ = uVar99 & auVar55._12_4_;
            lVar32 = -(ulonglong)
                      ((double)CONCAT44(uVar33 & auVar63._4_4_,uVar26 & auVar63._0_4_) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55)
            ;
            lVar37 = -(ulonglong)
                      (auVar64._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar38 = -(ulonglong)
                      (auVar64._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            auVar65._0_8_ =
                 (double)CONCAT44(~(uint)((ulonglong)lVar37 >> 0x20) & auVar55._4_4_,
                                  ~(uint)lVar37 & auVar55._0_4_);
            auVar65._8_4_ = ~(uint)lVar38 & auVar55._8_4_;
            auVar65._12_4_ = ~(uint)((ulonglong)lVar38 >> 0x20) & auVar55._12_4_;
            auVar45._8_4_ = SUB84(auVar87._8_8_,0);
            auVar45._0_8_ = auVar87._0_8_;
            auVar45._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
            auVar14._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar14._0_8_ = auVar63._0_8_;
            auVar14._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14)
            ;
            auVar63 = blendpd(auVar87,auVar79,2);
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
            dVar39 = auVar65._0_8_ * (dVar82 * dVar80 + dVar16 + auVar45._8_8_) +
                     *(double *)(pFVar2 + local_20b0 + 0x80);
            dVar51 = auVar65._8_8_ * (dVar88 * dVar80 + dVar17 + auVar79._0_8_) +
                     *(double *)(pFVar2 + local_20b0 + 0x88);
            dVar40 = (double)CONCAT44(~(uint)((ulonglong)lVar32 >> 0x20) & auVar55._4_4_,
                                      ~(uint)lVar32 & auVar55._0_4_) *
                     (auVar94._0_8_ * dVar80 + dVar52 + auVar63._0_8_) +
                     *(double *)(pFVar2 + local_20b0 + 0x90);
            uVar26 = 0;
            if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar32 = (longlong)(int)uVar34;
            pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                (param_1,*(FCompactPoseBoneIndex *)
                                          ((this->Hand_Array).AllocatorInstance.Data +
                                          lVar32 * 0x10 + 0xc));
            local_2028 = (pTVar28->Rotation).XY.m128d_f64[0];
            dStack_2020 = (pTVar28->Rotation).XY.m128d_f64[1];
            adVar4 = *&(pTVar28->Translation).ZW.m128d_f64;
            dVar80 = (pTVar28->Translation).XY.m128d_f64[0];
            dVar82 = (pTVar28->Translation).XY.m128d_f64[1];
            local_2018 = (pTVar28->Rotation).ZW.m128d_f64[0];
            dStack_2010 = (pTVar28->Rotation).ZW.m128d_f64[1];
            local_2038 = (pTVar28->Scale3D).XY.m128d_f64[0];
            dStack_2030 = (pTVar28->Scale3D).XY.m128d_f64[1];
            local_2008 = (pTVar28->Scale3D).ZW.m128d_f64[0];
            dStack_2000 = (pTVar28->Scale3D).ZW.m128d_f64[1];
            uVar26 = 0;
            if ((int)uVar34 < (this->Actual_Shoulder_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            _local_1f88 = adVar4;
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                (param_1,*(FCompactPoseBoneIndex *)
                                          ((this->Actual_Shoulder_Array).AllocatorInstance.Data +
                                          lVar32 * 0x10 + 0xc));
            local_1fc8 = (pTVar28->Rotation).XY.m128d_f64[0];
            dStack_1fc0 = (pTVar28->Rotation).XY.m128d_f64[1];
            adVar5 = *&(pTVar28->Translation).XY.m128d_f64;
            dVar88 = (pTVar28->Translation).ZW.m128d_f64[0];
            dVar16 = (pTVar28->Translation).ZW.m128d_f64[1];
            local_1fb8 = (pTVar28->Rotation).ZW.m128d_f64[0];
            dStack_1fb0 = (pTVar28->Rotation).ZW.m128d_f64[1];
            local_2048 = (pTVar28->Scale3D).XY.m128d_f64[0];
            dStack_2040 = (pTVar28->Scale3D).XY.m128d_f64[1];
            dVar17 = (pTVar28->Scale3D).ZW.m128d_f64[0];
            dVar52 = (pTVar28->Scale3D).ZW.m128d_f64[1];
            uVar26 = 0;
            if ((int)uVar34 < (this->Elbow_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                (param_1,*(FCompactPoseBoneIndex *)
                                          ((this->Elbow_Array).AllocatorInstance.Data +
                                          lVar32 * 0x10 + 0xc));
            local_1f68 = (pTVar28->Rotation).ZW.m128d_f64[0];
            dStack_1f60 = (pTVar28->Rotation).ZW.m128d_f64[1];
            dVar96 = (pTVar28->Rotation).XY.m128d_f64[0];
            dVar98 = (pTVar28->Rotation).XY.m128d_f64[1];
            local_1f58 = (pTVar28->Translation).XY.m128d_f64[0];
            dStack_1f50 = (pTVar28->Translation).XY.m128d_f64[1];
            local_1ff8 = (pTVar28->Translation).ZW.m128d_f64[0];
            dStack_1ff0 = (pTVar28->Translation).ZW.m128d_f64[1];
            local_1fe8 = (pTVar28->Scale3D).XY.m128d_f64[0];
            dStack_1fe0 = (pTVar28->Scale3D).XY.m128d_f64[1];
            local_1fd8 = (pTVar28->Scale3D).ZW.m128d_f64[0];
            dStack_1fd0 = (pTVar28->Scale3D).ZW.m128d_f64[1];
            uVar26 = 0;
            if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            local_1f78 = dVar96;
            dStack_1f70 = dVar98;
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                (param_1,*(FCompactPoseBoneIndex *)
                                          ((this->Hand_Array).AllocatorInstance.Data +
                                          (longlong)(int)uVar34 * 0x10 + 0xc));
            local_2078 = (pTVar28->Scale3D).ZW.m128d_f64[0];
            dStack_2070 = (pTVar28->Scale3D).ZW.m128d_f64[1];
            adVar22 = *&(pTVar28->Rotation).XY.m128d_f64;
            adVar23 = *&(pTVar28->Rotation).ZW.m128d_f64;
            dVar67 = (pTVar28->Scale3D).XY.m128d_f64[0];
            dVar76 = (pTVar28->Scale3D).XY.m128d_f64[1];
            uVar26 = 0;
            if ((int)uVar34 < (this->Actual_Shoulder_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                (param_1,*(FCompactPoseBoneIndex *)
                                          ((this->Actual_Shoulder_Array).AllocatorInstance.Data +
                                          (longlong)(int)uVar34 * 0x10 + 0xc));
            local_1e98 = (pTVar28->Rotation).XY.m128d_f64[0];
            dStack_1e90 = (pTVar28->Rotation).XY.m128d_f64[1];
            local_1e88 = (pTVar28->Rotation).ZW.m128d_f64[0];
            dStack_1e80 = (pTVar28->Rotation).ZW.m128d_f64[1];
            local_1db0 = (pTVar28->Translation).XY.m128d_f64[0];
            dStack_1da8 = (pTVar28->Translation).XY.m128d_f64[1];
            dVar83 = dVar39 - adVar5[0];
            local_1da0 = (pTVar28->Translation).ZW.m128d_f64[0];
            local_1e58 = *&(pTVar28->Scale3D).XY.m128d_f64;
            fVar3 = this->Limbs_Clamp;
            local_16d8.Scale3D.ZW.m128d_f64[0] = local_2078;
            local_16d8.Scale3D.ZW.m128d_f64[1] = dStack_2070;
            local_4a8.Rotation.ZW.m128d_f64[0] = local_2018;
            local_4a8.Rotation.ZW.m128d_f64[1] = dStack_2010;
            local_4a8.Scale3D.XY.m128d_f64[0] = local_2038;
            local_4a8.Scale3D.XY.m128d_f64[1] = dStack_2030;
            auVar18._4_8_ = dStack_2030;
            auVar18._0_4_ = adVar5[0]._4_4_;
            auVar46._0_8_ = auVar18._0_8_ << 0x20;
            auVar46._8_4_ = adVar5[1]._0_4_;
            auVar46._12_4_ = adVar5[1]._4_4_;
            local_1e48 = *&(pTVar28->Scale3D).ZW.m128d_f64;
            local_4a8.Rotation.XY.m128d_f64[0] = local_2028;
            local_4a8.Rotation.XY.m128d_f64[1] = dStack_2020;
            local_4a8.Scale3D.ZW.m128d_f64[0] = local_2008;
            local_4a8.Scale3D.ZW.m128d_f64[1] = dStack_2000;
            dVar12 = dVar51 - auVar46._8_8_;
            local_16d8.Translation.ZW.m128d_f64[1] = 0.0;
            dVar84 = dVar40 - dVar88;
            dVar61 = dVar80 - adVar5[0];
            dVar10 = dVar12 * dVar12 + dVar83 * dVar83 + dVar84 * dVar84;
            local_1d10 = adVar4[0];
            dVar81 = dVar82 - adVar5[1];
            fVar95 = (float)SQRT(dVar81 * dVar81 + dVar61 * dVar61 +
                                 (local_1d10 - dVar88) * (local_1d10 - dVar88));
            if (__real_3e45798ee0000000 < dVar10) {
              local_1f40 = __real_3ff0000000000000 / SQRT(dVar10);
              dVar83 = dVar83 * local_1f40;
              dVar12 = dVar12 * local_1f40;
              dVar84 = dVar84 * local_1f40;
            }
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            local_2068 = adVar5;
            local_2058 = dVar88;
            local_1d98 = dVar39;
            dStack_1d90 = dVar51;
            local_1d88 = dVar40;
            local_1d80 = adVar5;
            local_1d70 = dVar88;
            local_1d50 = adVar5;
            local_1d40 = dVar88;
            local_1d20 = dVar80;
            dStack_1d18 = dVar82;
            local_16d8.Rotation.XY.m128d_f64 = adVar22;
            local_16d8.Rotation.ZW.m128d_f64 = adVar23;
            local_16d8.Translation.XY.m128d_f64[0] = dVar39;
            local_16d8.Translation.XY.m128d_f64[1] = dVar51;
            local_16d8.Translation.ZW.m128d_f64[0] = dVar40;
            local_16d8.Scale3D.XY.m128d_f64[0] = dVar67;
            local_16d8.Scale3D.XY.m128d_f64[1] = dVar76;
            local_4a8.Translation.XY.m128d_f64[0] = dVar80;
            local_4a8.Translation.XY.m128d_f64[1] = dVar82;
            local_4a8.Translation.ZW.m128d_f64 = adVar4;
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar32 = lVar35 * 0x200;
            fVar75 = (float)(*(uint *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data +
                                      lVar32 + 0x9c) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                     fVar95;
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((float)SQRT(dVar10) <= fVar75) {
              fVar75 = (float)SQRT(dVar10);
            }
            fVar95 = (float)(*(uint *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data +
                                      lVar32 + 0xa0) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                     fVar95;
            if (fVar95 <= fVar75) {
              fVar95 = fVar75;
            }
            dVar39 = (double)fVar95;
            local_1d38 = dVar39 * dVar83 + local_2068[0];
            local_1d28 = dVar39 * dVar84 + local_2058;
            dStack_1d30 = dVar39 * dVar12 + local_2068[1];
            local_16d8.Translation.ZW.m128d_f64[1] = 0.0;
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            local_16d8.Translation.XY.m128d_f64[0] = local_1d38;
            local_16d8.Translation.XY.m128d_f64[1] = dStack_1d30;
            local_16d8.Translation.ZW.m128d_f64[0] = local_1d28;
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar6 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
            pFVar2 = pFVar6 + lVar32 + 0xb0;
            local_1fa8 = *(double *)pFVar2;
            dStack_1fa0 = *(double *)(pFVar2 + 8);
            local_2078 = *(double *)(pFVar6 + lVar32 + 0xc0);
            dStack_2070 = 0.0;
            local_20f8 = __real_3f800000;
            uVar59 = adVar4[0]._0_4_;
            uVar60 = adVar4[0]._4_4_;
            uVar68 = adVar4[1]._0_4_;
            uVar69 = adVar4[1]._4_4_;
            if ((int)uVar34 <
                (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum) {
              uVar26 = 0;
              if ((int)uVar34 < (this->Debug_Hand_Locations).ArrayNum) {
                uVar26 = ~uVar34 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar2 = (this->Debug_Hand_Locations).AllocatorInstance.Data;
              auVar55 = *(undefined1 (*) [16])(pFVar2 + lVar35 * 0x60);
              auVar63 = *(undefined1 (*) [16])(pFVar2 + lVar35 * 0x60 + 0x10);
              uVar26 = 0;
              if ((int)uVar34 <
                  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum) {
                uVar26 = ~uVar34 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar30 = UE::Math::TRotator<double>::Quaternion
                                  ((TRotator<double> *)
                                   ((this->Arm_TargetLocation_Overrides).
                                    Arm_TargetLocation_Overrides.AllocatorInstance.Data +
                                   (longlong)(int)uVar34 * 0x80 + 0x68),&local_1ce8);
              uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
              uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
              uVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
              uVar69 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
              dVar51 = pTVar30->Z;
              dVar96 = pTVar30->W;
              dVar98 = pTVar30->X;
              dVar67 = pTVar30->Y;
              dVar39 = auVar55._0_8_;
              dVar76 = auVar63._0_8_;
              dVar81 = auVar63._8_8_;
              dVar40 = auVar55._8_8_;
              auVar47._8_4_ = auVar63._8_4_;
              auVar47._0_8_ = dVar81;
              auVar47._12_4_ = auVar63._12_4_;
              uVar26 = 0;
              if ((int)uVar34 <
                  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum) {
                uVar26 = ~uVar34 >> 0x1f;
              }
              auVar57._8_4_ = auVar55._8_4_;
              auVar57._0_8_ = dVar40;
              auVar57._12_4_ = auVar55._12_4_;
              auVar48._8_4_ = auVar63._0_4_;
              auVar48._0_8_ = dVar76;
              auVar48._12_4_ = auVar63._4_4_;
              dVar10 = dVar39 * dVar96 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       dVar81 * dVar98 +
                       dVar40 * dVar51 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar76 * dVar67 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar12 = dVar39 * dVar51 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       auVar47._8_8_ * dVar67 +
                       auVar57._8_8_ * dVar96 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar48._8_8_ * dVar98 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              uVar70 = (undefined4)((ulonglong)dVar12 >> 0x20);
              dVar84 = dVar39 * dVar67 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar81 * dVar51 +
                       dVar40 * dVar98 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar76 * dVar96 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar39 = dVar39 * dVar98 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       dVar81 * dVar96 +
                       dVar40 * dVar67 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       dVar76 * dVar51 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              if (uVar26 == 0) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar24) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                uVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
                uVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
                uVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
                uVar69 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
              }
              local_20f8 = *(float *)((this->Arm_TargetLocation_Overrides).
                                      Arm_TargetLocation_Overrides.AllocatorInstance.Data +
                                     lVar35 * 0x80 + 0x60);
              if (this->Override_Hand_Rotation != false) {
                if (this->hand_rotation_method == ENUM_AdditiveRotation) {
                  dVar96 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                  dVar98 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                  auVar66._8_4_ = SUB84(dVar12,0);
                  auVar66._0_8_ = dVar10;
                  auVar66._12_4_ = uVar70;
                  dVar76 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                  dVar81 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
                           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                  auVar49._8_4_ = SUB84(dVar81,0);
                  auVar49._0_8_ = dVar81;
                  auVar49._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                  auVar58._8_4_ = SUB84(dVar98,0);
                  auVar58._0_8_ = dVar98;
                  auVar58._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
                  dVar67 = auVar66._8_8_;
                  auVar50._8_4_ = SUB84(dVar10,0);
                  auVar50._0_8_ = dVar67;
                  auVar50._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                  dVar40 = dVar96 * dVar84 * (double)CONCAT44(uVar69,uVar68) +
                           auVar49._8_8_ * dVar12 +
                           auVar58._8_8_ * dVar39 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                           auVar50._8_8_ * dVar76 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  dVar51 = dVar96 * dVar10 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                           dVar81 * dVar39 +
                           dVar98 * dVar12 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                           dVar84 * dVar76 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                  local_16d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar40,0);
                  local_16d8.Rotation.XY.m128d_f64[0] =
                       dVar96 * dVar39 * (double)CONCAT44(uVar60,uVar59) + dVar81 * dVar10 +
                       dVar98 * dVar84 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       dVar67 * dVar76 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                  local_16d8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar40 >> 0x20);
                  local_16d8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar51,0);
                  local_16d8.Rotation.ZW.m128d_f64[0] =
                       dVar96 * dVar67 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar81 * dVar84 +
                       dVar98 * dVar10 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar39 * dVar76 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                  local_16d8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar51 >> 0x20);
                }
                else {
                  local_16d8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
                  local_16d8.Rotation.XY.m128d_f64[0] = dVar10;
                  local_16d8.Rotation.XY.m128d_f64[1]._4_4_ = uVar70;
                  local_16d8.Rotation.ZW.m128d_f64[1] = dVar39;
                  local_16d8.Rotation.ZW.m128d_f64[0] = dVar84;
                }
              }
              uVar26 = 0;
              if ((int)uVar34 <
                  (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum) {
                uVar26 = ~uVar34 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar28 = UKismetMathLibrary::TLerp
                                  (&local_1a8,&local_4a8,&local_16d8,
                                   *(float *)((this->Arm_TargetLocation_Overrides).
                                              Arm_TargetLocation_Overrides.AllocatorInstance.Data +
                                             lVar35 * 0x80 + 0x60),
                                   (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
              local_16d8.Rotation.XY.m128d_f64 = *&(pTVar28->Rotation).XY.m128d_f64;
              local_16d8.Rotation.ZW.m128d_f64 = *&(pTVar28->Rotation).ZW.m128d_f64;
              local_16d8.Translation.XY.m128d_f64[0] = (pTVar28->Translation).XY.m128d_f64[0];
              local_16d8.Translation.XY.m128d_f64[1] = (pTVar28->Translation).XY.m128d_f64[1];
              local_16d8.Translation.ZW.m128d_f64[0] = (pTVar28->Translation).ZW.m128d_f64[0];
              local_16d8.Translation.ZW.m128d_f64[1] = (pTVar28->Translation).ZW.m128d_f64[1];
              local_16d8.Scale3D.XY.m128d_f64[0] = (pTVar28->Scale3D).XY.m128d_f64[0];
              local_16d8.Scale3D.XY.m128d_f64[1] = (pTVar28->Scale3D).XY.m128d_f64[1];
              local_16d8.Scale3D.ZW.m128d_f64[0] = (pTVar28->Scale3D).ZW.m128d_f64[0];
              local_16d8.Scale3D.ZW.m128d_f64[1] = (pTVar28->Scale3D).ZW.m128d_f64[1];
              uVar59 = local_1f88._0_4_;
              uVar60 = local_1f88._4_4_;
              uVar68 = uStack_1f80;
              uVar69 = uStack_1f7c;
              dVar96 = local_1f78;
              dVar98 = dStack_1f70;
            }
            dVar39 = local_2078;
            ArmIKParamStruct::ArmIKParamStruct(&local_1138);
            local_1138.mesh_component_transform.Rotation.XY.m128d_f64[0] =
                 (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
            local_1138.mesh_component_transform.Rotation.XY.m128d_f64[1] =
                 (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
            local_1138.mesh_component_transform.Rotation.ZW.m128d_f64[0] =
                 (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
            local_1138.mesh_component_transform.Rotation.ZW.m128d_f64[1] =
                 (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
            local_1138.mesh_component_transform.Translation.XY.m128d_f64[0] =
                 (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
            local_1138.mesh_component_transform.Translation.XY.m128d_f64[1] =
                 (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
            local_1138.mesh_component_transform.Translation.ZW.m128d_f64[0] =
                 (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
            local_1138.mesh_component_transform.Translation.ZW.m128d_f64[1] =
                 (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
            local_1138.mesh_component_transform.Scale3D.XY.m128d_f64[0] =
                 (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
            local_1138.mesh_component_transform.Scale3D.XY.m128d_f64[1] =
                 (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
            local_1138.mesh_component_transform.Scale3D.ZW.m128d_f64[0] =
                 (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
            local_1138.mesh_component_transform.Scale3D.ZW.m128d_f64[1] =
                 (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
            uVar26 = 0;
            if ((int)uVar34 < (this->Hand_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Hand_Array).AllocatorInstance.Data;
            lVar32 = lVar35 * 0x10;
            local_1138.FeetBone.BoneName = *(FName *)(pFVar2 + lVar32);
            local_1138.FeetBone._8_4_ =
                 (*(uint *)(pFVar2 + lVar32 + 8) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8)) &
                 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8);
            local_1138.FeetBone.CachedCompactPoseIndex =
                 *(FCompactPoseBoneIndex *)(pFVar2 + lVar32 + 0xc);
            uVar26 = 0;
            if ((int)uVar34 < (this->Elbow_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Elbow_Array).AllocatorInstance.Data;
            lVar32 = lVar35 * 0x10;
            local_1138.KneeBone.BoneName = *(FName *)(pFVar2 + lVar32);
            local_1138.KneeBone._8_4_ =
                 (*(uint *)(pFVar2 + lVar32 + 8) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8)) &
                 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8);
            local_1138.KneeBone.CachedCompactPoseIndex =
                 *(FCompactPoseBoneIndex *)(pFVar2 + lVar32 + 0xc);
            uVar26 = 0;
            if ((int)uVar34 < (this->Actual_Shoulder_Array).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Actual_Shoulder_Array).AllocatorInstance.Data;
            lVar32 = lVar35 * 0x10;
            local_1138.ThighBone.BoneName = *(FName *)(pFVar2 + lVar32);
            local_1138.ThighBone._8_4_ =
                 (*(uint *)(pFVar2 + lVar32 + 8) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8)) &
                 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 8);
            local_1138.ThighBone.CachedCompactPoseIndex =
                 *(FCompactPoseBoneIndex *)(pFVar2 + lVar32 + 0xc);
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
            lVar32 = lVar35 * 0x200;
            local_1138.twist_elbow_bone.BoneName = *(FName *)(pFVar2 + lVar32 + 0x44);
            local_1138.twist_elbow_bone._8_4_ =
                 (*(uint *)(pFVar2 + lVar32 + 0x4c) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 0x4c)
                 ) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 0x4c);
            local_1138.twist_elbow_bone.CachedCompactPoseIndex =
                 *(FCompactPoseBoneIndex *)(pFVar2 + lVar32 + 0x50);
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            dVar83 = dStack_1f50;
            dVar61 = local_1f58;
            dVar84 = dStack_1f60;
            dVar12 = local_1f68;
            dVar10 = dStack_1fd0;
            dVar81 = local_1fd8;
            dVar76 = dStack_1fe0;
            dVar67 = local_1fe8;
            dVar51 = dStack_1ff0;
            dVar40 = local_1ff8;
            pFVar2 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
            lVar32 = lVar35 * 0x200;
            local_1138.twist_shoulder_bone.BoneName = *(FName *)(pFVar2 + lVar32 + 0x54);
            local_1138.twist_shoulder_bone._8_4_ =
                 (*(uint *)(pFVar2 + lVar32 + 0x5c) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 0x5c)
                 ) & 0x7fffffff ^ *(uint *)(pFVar2 + lVar32 + 0x5c);
            local_1138.twist_shoulder_bone.CachedCompactPoseIndex =
                 *(FCompactPoseBoneIndex *)(pFVar2 + lVar32 + 0x60);
            local_1138.Shoulder_Trans.Rotation.XY.m128d_f64[0] = local_1fc8;
            local_1138.Shoulder_Trans.Rotation.XY.m128d_f64[1] = dStack_1fc0;
            local_1138.Shoulder_Trans.Scale3D.XY.m128d_f64[0] = local_2048;
            local_1138.Shoulder_Trans.Scale3D.XY.m128d_f64[1] = dStack_2040;
            local_1138.Knee_Trans.Translation.ZW.m128d_f64[0] = local_1ff8;
            local_1138.Knee_Trans.Translation.ZW.m128d_f64[1] = dStack_1ff0;
            local_1138.Knee_Trans.Scale3D.ZW.m128d_f64[0] = local_1fd8;
            local_1138.Knee_Trans.Scale3D.ZW.m128d_f64[1] = dStack_1fd0;
            local_1138.Hand_Trans.Rotation.XY.m128d_f64[0] = local_2028;
            local_1138.Hand_Trans.Rotation.XY.m128d_f64[1] = dStack_2020;
            local_1138.Hand_Trans.Rotation.ZW.m128d_f64[0] = local_2018;
            local_1138.Hand_Trans.Rotation.ZW.m128d_f64[1] = dStack_2010;
            local_1138.Hand_Trans.Scale3D.XY.m128d_f64[0] = local_2038;
            local_1138.Hand_Trans.Scale3D.XY.m128d_f64[1] = dStack_2030;
            local_1138.Hand_Trans.Scale3D.ZW.m128d_f64[0] = local_2008;
            local_1138.Hand_Trans.Scale3D.ZW.m128d_f64[1] = dStack_2000;
            local_1138.Shoulder_Trans.Rotation.ZW.m128d_f64[0] = local_1fb8;
            local_1138.Shoulder_Trans.Rotation.ZW.m128d_f64[1] = dStack_1fb0;
            local_1138.JointLocation.field0_0x0._s_0.X = 0.0;
            local_1138.JointLocation.field0_0x0._s_0.Y = 0.0;
            local_1138.Knee_Pole_Offset.field0_0x0._s_0.Y = 0.0;
            local_1138.Knee_Pole_Offset.field0_0x0._s_0.Z = 0.0;
            local_1138.Limb_Rotation_Offset.Pitch = (this->Limb_Rotation_Offset).Pitch;
            local_1138.Limb_Rotation_Offset.Yaw = (this->Limb_Rotation_Offset).Yaw;
            local_1138.Knee_Trans.Scale3D.XY.m128d_f64[0] = local_1fe8;
            local_1138.Knee_Trans.Scale3D.XY.m128d_f64[1] = dStack_1fe0;
            local_1138.Limb_Rotation_Offset.Roll = (this->Limb_Rotation_Offset).Roll;
            local_1138.Knee_Trans.Rotation.ZW.m128d_f64[0] = local_1f68;
            local_1138.Knee_Trans.Rotation.ZW.m128d_f64[1] = dStack_1f60;
            local_1138.Knee_Trans.Translation.XY.m128d_f64[0] = local_1f58;
            local_1138.Knee_Trans.Translation.XY.m128d_f64[1] = dStack_1f50;
            local_1138.JointLocation.field0_0x0._s_0.Z = 0.0;
            local_1138.Knee_Pole_Offset.field0_0x0._s_0.X = 0.0;
            local_1138.transform_offset.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1138.transform_offset.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1138.transform_offset.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1138.transform_offset.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1138.transform_offset.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1138.transform_offset.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1138.Common_Spine_Modified_Transform.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_1138.Extra_Hand_Offset.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1138.Extra_Hand_Offset.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1138.Extra_Hand_Offset.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1138.Extra_Hand_Offset.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            pUVar8 = this->weapon_handler_component;
            local_1138.LookAt_Axis_Input.field0_0x0._s_0.Z = (this->LookAt_Axis).field0_0x0._s_0.Z;
            local_1138.Elbow_Pole_Offset.field0_0x0._s_0.X = local_1fa8;
            local_1138.Elbow_Pole_Offset.field0_0x0._s_0.Y = dStack_1fa0;
            local_1138.override_hand_rotation = this->Override_Hand_Rotation;
            local_1138.Use_NSEW_Poles = this->nsew_pole_method;
            local_1138.up_arm_twist_technique = this->up_arm_twist_technique;
            local_1138.Separate_Arms_Logic_Used = this->Use_Separate_Targets;
            local_1138.is_reach_mode = this->reach_instead;
            local_1138.Let_Arm_Twist_With_Hand = this->Let_Arm_Twist_With_Hand;
            local_1138.rotation_method = this->hand_rotation_method;
            local_1138.Up_Vector_Val.field0_0x0._s_0.Z = (this->Upward_Axis).field0_0x0._s_0.Z;
            local_1138.Extra_Hand_Offset.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1138.Extra_Hand_Offset.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            local_1138.Knee_Transform_Default.Rotation.ZW.m128d_f64[0] = local_1f68;
            local_1138.Knee_Transform_Default.Rotation.ZW.m128d_f64[1] = dStack_1f60;
            local_1138.Knee_Transform_Default.Translation.XY.m128d_f64[0] = local_1f58;
            local_1138.Knee_Transform_Default.Translation.XY.m128d_f64[1] = dStack_1f50;
            local_1138.Knee_Transform_Default.Translation.ZW.m128d_f64[0] = local_1ff8;
            local_1138.Knee_Transform_Default.Translation.ZW.m128d_f64[1] = dStack_1ff0;
            local_1138.Knee_Transform_Default.Scale3D.XY.m128d_f64[0] = local_1fe8;
            local_1138.Knee_Transform_Default.Scale3D.XY.m128d_f64[1] = dStack_1fe0;
            local_1138.Knee_Transform_Default.Scale3D.ZW.m128d_f64[0] = local_1fd8;
            local_1138.Knee_Transform_Default.Scale3D.ZW.m128d_f64[1] = dStack_1fd0;
            local_1138.bAllowHandStretching = false;
            local_1138.custom_arm_size.custom_lowerArm_length = 0.0;
            local_1138.Auto_Calculated_Poles = true;
            local_1eb8 = local_1fa8;
            dStack_1eb0 = dStack_1fa0;
            local_1138.LookAt_Axis_Input.field0_0x0._s_0.X = (this->LookAt_Axis).field0_0x0._s_0.X;
            local_1138.LookAt_Axis_Input.field0_0x0._s_0.Y = (this->LookAt_Axis).field0_0x0._s_0.Y;
            local_1138.Up_Vector_Val.field0_0x0._s_0.X = (this->Upward_Axis).field0_0x0._s_0.X;
            local_1138.Up_Vector_Val.field0_0x0._s_0.Y = (this->Upward_Axis).field0_0x0._s_0.Y;
            local_1138.arm_alpha = local_20f8;
            local_1138.custom_arm_size.Use_Custom_Arm_Sizes = false;
            local_1138.custom_arm_size._1_3_ = 0;
            local_1138.custom_arm_size.custom_upperArm_length = 0.0;
            local_1138.Extra_Elbow_Pole_Offset.field0_0x0._s_0.X =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_1138.Extra_Elbow_Pole_Offset.field0_0x0._s_0.Y =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_1138.Extra_Elbow_Pole_Offset.field0_0x0._s_0.Z =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_1ea8 = dVar39;
            local_1138.Shoulder_Trans.Translation.XY.m128d_f64 = adVar5;
            local_1138.Shoulder_Trans.Translation.ZW.m128d_f64[0] = dVar88;
            local_1138.Shoulder_Trans.Translation.ZW.m128d_f64[1] = dVar16;
            local_1138.Shoulder_Trans.Scale3D.ZW.m128d_f64[0] = dVar17;
            local_1138.Shoulder_Trans.Scale3D.ZW.m128d_f64[1] = dVar52;
            local_1138.Knee_Trans.Rotation.XY.m128d_f64[0] = dVar96;
            local_1138.Knee_Trans.Rotation.XY.m128d_f64[1] = dVar98;
            local_1138.Hand_Trans.Translation.XY.m128d_f64[0] = dVar80;
            local_1138.Hand_Trans.Translation.XY.m128d_f64[1] = dVar82;
            local_1138.Hand_Trans.Translation.ZW.m128d_f64[0]._0_4_ = uVar59;
            local_1138.Hand_Trans.Translation.ZW.m128d_f64[0]._4_4_ = uVar60;
            local_1138.Hand_Trans.Translation.ZW.m128d_f64[1]._0_4_ = uVar68;
            local_1138.Hand_Trans.Translation.ZW.m128d_f64[1]._4_4_ = uVar69;
            local_1138.Hand_Clamp_Value = fVar3;
            local_1138.Elbow_Pole_Offset.field0_0x0._s_0.Z = dVar39;
            local_1138.Knee_Transform_Default.Rotation.XY.m128d_f64[0] = dVar96;
            local_1138.Knee_Transform_Default.Rotation.XY.m128d_f64[1] = dVar98;
            local_1138.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.X =
                 local_1138.LookAt_Axis_Input.field0_0x0._s_0.X;
            local_1138.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.Y =
                 local_1138.LookAt_Axis_Input.field0_0x0._s_0.Y;
            local_1138.Reference_Constant_Forward_Axis_Input.field0_0x0._s_0.Z =
                 local_1138.LookAt_Axis_Input.field0_0x0._s_0.Z;
            if (pUVar8 == (UDragonIKWeaponPhysicsComponent *)0x0) {
              local_1138.ThighTransform.Rotation.XY.m128d_f64[0] =
                   local_16d8.Rotation.XY.m128d_f64[0];
              local_1138.ThighTransform.Rotation.XY.m128d_f64[1] =
                   local_16d8.Rotation.XY.m128d_f64[1];
              local_1138.ThighTransform.Rotation.ZW.m128d_f64[0] =
                   local_16d8.Rotation.ZW.m128d_f64[0];
              local_1138.ThighTransform.Rotation.ZW.m128d_f64[1] =
                   local_16d8.Rotation.ZW.m128d_f64[1];
              local_1138.ThighTransform.Translation.XY.m128d_f64[0] =
                   local_16d8.Translation.XY.m128d_f64[0];
              local_1138.ThighTransform.Translation.XY.m128d_f64[1] =
                   local_16d8.Translation.XY.m128d_f64[1];
              local_1138.ThighTransform.Translation.ZW.m128d_f64[0] =
                   local_16d8.Translation.ZW.m128d_f64[0];
              local_1138.ThighTransform.Translation.ZW.m128d_f64[1] =
                   local_16d8.Translation.ZW.m128d_f64[1];
              local_1138.ThighTransform.Scale3D.XY.m128d_f64[0] = local_16d8.Scale3D.XY.m128d_f64[0]
              ;
              local_1138.ThighTransform.Scale3D.XY.m128d_f64[1] = local_16d8.Scale3D.XY.m128d_f64[1]
              ;
              local_1138.ThighTransform.Scale3D.ZW.m128d_f64[0] = local_16d8.Scale3D.ZW.m128d_f64[0]
              ;
              local_1138.ThighTransform.Scale3D.ZW.m128d_f64[1] = local_16d8.Scale3D.ZW.m128d_f64[1]
              ;
            }
            else {
              if (0 < (pUVar8->Frozen_Elbow_Component_Status).ArrayNum) {
                uVar26 = 0;
                if ((int)uVar34 < (pUVar8->Frozen_Elbow_Component_Status).ArrayNum) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                local_1138.Is_Frozen_Elbow =
                     *(bool *)((pUVar8->Frozen_Elbow_Component_Status).AllocatorInstance.Data +
                              lVar35);
              }
              local_1138.ThighTransform.Rotation.XY.m128d_f64[0] =
                   local_16d8.Rotation.XY.m128d_f64[0];
              local_1138.ThighTransform.Rotation.XY.m128d_f64[1] =
                   local_16d8.Rotation.XY.m128d_f64[1];
              local_1138.ThighTransform.Rotation.ZW.m128d_f64[0] =
                   local_16d8.Rotation.ZW.m128d_f64[0];
              local_1138.ThighTransform.Rotation.ZW.m128d_f64[1] =
                   local_16d8.Rotation.ZW.m128d_f64[1];
              local_1138.ThighTransform.Translation.XY.m128d_f64[0] =
                   local_16d8.Translation.XY.m128d_f64[0];
              local_1138.ThighTransform.Translation.XY.m128d_f64[1] =
                   local_16d8.Translation.XY.m128d_f64[1];
              local_1138.ThighTransform.Translation.ZW.m128d_f64[0] =
                   local_16d8.Translation.ZW.m128d_f64[0];
              local_1138.ThighTransform.Translation.ZW.m128d_f64[1] =
                   local_16d8.Translation.ZW.m128d_f64[1];
              local_1138.ThighTransform.Scale3D.XY.m128d_f64[0] = local_16d8.Scale3D.XY.m128d_f64[0]
              ;
              local_1138.ThighTransform.Scale3D.XY.m128d_f64[1] = local_16d8.Scale3D.XY.m128d_f64[1]
              ;
              local_1138.ThighTransform.Scale3D.ZW.m128d_f64[0] = local_16d8.Scale3D.ZW.m128d_f64[0]
              ;
              local_1138.ThighTransform.Scale3D.ZW.m128d_f64[1] = local_16d8.Scale3D.ZW.m128d_f64[1]
              ;
              iVar25 = (this->Frozen_Elbow_Transform).ArrayNum;
              if ((FScriptContainerElement)local_1138.Is_Frozen_Elbow ==
                  (FScriptContainerElement)0x1) {
                uVar26 = 0;
                if ((int)uVar34 < iVar25) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar2 = (this->Frozen_Elbow_Transform).AllocatorInstance.Data;
                lVar32 = lVar35 * 0x60;
                local_1138.Frozen_Elbow_Transform.Rotation.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32);
                local_1138.Frozen_Elbow_Transform.Rotation.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 8);
                local_1138.Frozen_Elbow_Transform.Rotation.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x10);
                local_1138.Frozen_Elbow_Transform.Rotation.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x10 + 8);
                local_1138.Frozen_Elbow_Transform.Translation.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x20);
                local_1138.Frozen_Elbow_Transform.Translation.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x20 + 8);
                local_1138.Frozen_Elbow_Transform.Translation.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x30);
                local_1138.Frozen_Elbow_Transform.Translation.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x30 + 8);
                local_1138.Frozen_Elbow_Transform.Scale3D.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x40);
                local_1138.Frozen_Elbow_Transform.Scale3D.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x40 + 8);
                local_1138.Frozen_Elbow_Transform.Scale3D.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x50);
                local_1138.Frozen_Elbow_Transform.Scale3D.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x50 + 8);
                uVar26 = 0;
                if ((int)uVar34 < (this->Frozen_UpperArm_Transform).ArrayNum) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar2 = (this->Frozen_UpperArm_Transform).AllocatorInstance.Data;
                lVar32 = lVar35 * 0x60;
                local_1138.Frozen_UpperArm_Transform.Rotation.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32);
                local_1138.Frozen_UpperArm_Transform.Rotation.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 8);
                local_1138.Frozen_UpperArm_Transform.Rotation.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x10);
                local_1138.Frozen_UpperArm_Transform.Rotation.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x10 + 8);
                local_1138.Frozen_UpperArm_Transform.Translation.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x20);
                local_1138.Frozen_UpperArm_Transform.Translation.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x20 + 8);
                local_1138.Frozen_UpperArm_Transform.Translation.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x30);
                local_1138.Frozen_UpperArm_Transform.Translation.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x30 + 8);
                local_1138.Frozen_UpperArm_Transform.Scale3D.XY.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x40);
                local_1138.Frozen_UpperArm_Transform.Scale3D.XY.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x40 + 8);
                local_1138.Frozen_UpperArm_Transform.Scale3D.ZW.m128d_f64[0] =
                     *(double *)(pFVar2 + lVar32 + 0x50);
                local_1138.Frozen_UpperArm_Transform.Scale3D.ZW.m128d_f64[1] =
                     *(double *)(pFVar2 + lVar32 + 0x50 + 8);
                local_1138.Let_Arm_Twist_With_Hand = false;
              }
              else {
                uVar26 = 0;
                if ((int)uVar34 < iVar25) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar2 = (this->Frozen_Elbow_Transform).AllocatorInstance.Data;
                lVar32 = lVar35 * 0x60;
                *(double *)(pFVar2 + lVar32) = dVar96;
                *(double *)(pFVar2 + lVar32 + 8) = dVar98;
                *(double *)(pFVar2 + lVar32 + 0x10) = dVar12;
                *(double *)(pFVar2 + lVar32 + 0x10 + 8) = dVar84;
                *(double *)(pFVar2 + lVar32 + 0x20) = dVar61;
                *(double *)(pFVar2 + lVar32 + 0x20 + 8) = dVar83;
                *(double *)(pFVar2 + lVar32 + 0x30) = dVar40;
                *(double *)(pFVar2 + lVar32 + 0x30 + 8) = dVar51;
                *(double *)(pFVar2 + lVar32 + 0x40) = dVar67;
                *(double *)(pFVar2 + lVar32 + 0x40 + 8) = dVar76;
                *(double *)(pFVar2 + lVar32 + 0x50) = dVar81;
                *(double *)(pFVar2 + lVar32 + 0x50 + 8) = dVar10;
                uVar26 = 0;
                if ((int)uVar34 < (this->Frozen_UpperArm_Transform).ArrayNum) {
                  uVar26 = ~uVar34 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar2 = (this->Frozen_UpperArm_Transform).AllocatorInstance.Data;
                lVar32 = lVar35 * 0x60;
                *(double *)(pFVar2 + lVar32) = local_1fc8;
                *(double *)(pFVar2 + lVar32 + 8) = dStack_1fc0;
                *(double *)(pFVar2 + lVar32 + 0x10) = local_1fb8;
                *(double *)(pFVar2 + lVar32 + 0x10 + 8) = dStack_1fb0;
                *(double (*) [2])(pFVar2 + lVar32 + 0x20) = adVar5;
                *(double *)(pFVar2 + lVar32 + 0x30) = dVar88;
                *(double *)(pFVar2 + lVar32 + 0x30 + 8) = dVar16;
                *(double *)(pFVar2 + lVar32 + 0x40) = local_2048;
                *(double *)(pFVar2 + lVar32 + 0x40 + 8) = dStack_2040;
                *(double *)(pFVar2 + lVar32 + 0x50) = dVar17;
                *(double *)(pFVar2 + lVar32 + 0x50 + 8) = dVar52;
              }
            }
            uVar26 = 0;
            if ((int)uVar34 < (this->Last_Shoulder_Angles).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar2 = (this->Last_Shoulder_Angles).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum) {
              uVar26 = ~uVar34 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar6 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
            memcpy(&local_1ca8,&local_1138,0x5d0);
            UDragonIK_Library::Evaluate_TwoBoneIK_Direct_Modified
                      (param_2,this->owning_skel,&local_1ca8,
                       (FDragonData_ArmsData *)(pFVar6 + (longlong)(int)uVar34 * 0x200),
                       (float *)(pFVar2 + (longlong)(int)uVar34 * 4),&this->HandIK_Transforms);
          }
        }
      }
      local_20f0 = local_20f0 + 0x10;
      local_20b0 = local_20b0 + 0x200;
      uVar34 = uVar34 + 1;
      lVar35 = lVar35 + 1;
      lVar36 = lVar36 + 0x60;
      uVar26 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar97 = _UNK_15061cc88;
      uVar99 = _UNK_15061cc8c;
    } while ((int)uVar34 < (this->Aiming_Hand_Limbs).ArrayNum);
  }
  return;
}

// ConditionalDebugDraw @ 14d336f00

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
FAnimNode_DragonWeaponArmSolver::ConditionalDebugDraw
          (FAnimNode_DragonWeaponArmSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// Dragon_VectorCreation @ 14d339040

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
FAnimNode_DragonWeaponArmSolver::Dragon_VectorCreation
          (FAnimNode_DragonWeaponArmSolver *this,bool param_1,TTransform<double> *param_2,
          FCSPose<FCompactPose> *param_3)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d339210

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
FAnimNode_DragonWeaponArmSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonWeaponArmSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d339a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonWeaponArmSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonWeaponArmSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  UDragonIKWeaponPhysicsComponent *pUVar2;
  USkinnedMeshComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  USkeletalMeshComponent *pUVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  FCompactPoseBoneIndex FVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  undefined4 extraout_EAX;
  UWorld *pUVar34;
  TTransform<double> *pTVar35;
  UClass *pUVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  longlong lVar43;
  FName FVar44;
  uint uVar45;
  FScriptContainerElement *pFVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  ulong64 uVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  double dVar75;
  double dVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 uVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined1 auVar89 [16];
  undefined1 auStackY_748 [32];
  longlong local_718;
  uint local_710;
  int local_70c;
  uint uStack_6fc;
  int local_6f8;
  int iStack_6f4;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_6e8;
  FBoneReference local_6d8;
  FBoneReference local_6c8;
  FBoneReference local_6b8;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_6a8;
  undefined1 local_698 [72];
  double dStack_650;
  double local_648;
  double dStack_640;
  FString local_638;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  uint uVar63;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_748;
  local_6a8 = param_2;
  if (this->DisplayLineTrace == false) {
    pUVar34 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar34 == (UWorld *)0x0) {
      pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    if ((pUVar34->WorldType).Value == '\x04') {
      return;
    }
  }
  uVar45 = __xmm_80000000800000008000000080000000;
  fVar21 = __real_3f800000;
  fVar20 = __real_322bcc77;
  if ((this->Hand_Array).ArrayNum < 1) {
    return;
  }
  local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.ArrayNum = 0;
  local_6e8.ArrayMax = 0;
  if (this->Internal_Switched_Interpolation_bool == false) goto LAB_14d33bbcb;
  if (this->weapon_handler_component == (UDragonIKWeaponPhysicsComponent *)0x0) {
    ArmIK_System(this,&param_1->Pose,param_1,&local_6e8);
  }
  else {
    if ((0 < (this->weapon_handler_component->arm_grabbing_status).ArrayNum) &&
       (uVar40 = 0, 0 < (this->grab_alpha).ArrayNum)) {
      lVar43 = 0;
      local_718 = 0;
      do {
        pUVar2 = this->weapon_handler_component;
        iVar30 = (pUVar2->arm_reset_queue_index).ArrayNum;
        fVar48 = 0.0;
        if ((0 < iVar30) && ((int)uVar40 < iVar30)) {
          uVar42 = ~uVar40 >> 0x1f;
          uVar31 = 0;
          if ((int)uVar40 < iVar30) {
            uVar31 = uVar42;
          }
          if ((uVar31 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((pUVar2->arm_reset_queue_index).AllocatorInstance.Data[lVar43] ==
              (FScriptContainerElement)0x1) {
            uVar31 = 0;
            if ((int)uVar40 < (this->grab_alpha).ArrayNum) {
              uVar31 = uVar42;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((*(float *)((this->grab_alpha).AllocatorInstance.Data + local_718) == 0.0) &&
                (0 < (this->Calculated_Hand_Transforms).ArrayNum)) &&
               (this->weapon_handler_component->active_weapon_component !=
                (UPrimitiveComponent *)0x0)) {
              uVar31 = 0;
              if ((int)uVar40 < (this->Hand_Array).ArrayNum) {
                uVar31 = uVar42;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  (&param_1->Pose,
                                   *(FCompactPoseBoneIndex *)
                                    ((this->Hand_Array).AllocatorInstance.Data +
                                    (longlong)(int)uVar40 * 0x10 + 0xc));
              local_508.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_508.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_508.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_508.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_508.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_508.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_508.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_508.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_508.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_508.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_508.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_508.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply
                        (&local_508,pTVar35,(TTransform<double> *)&this->owning_skel->_padding_);
              dVar24 = local_508.Scale3D.ZW.m128d_f64[1];
              dVar23 = local_508.Scale3D.ZW.m128d_f64[0];
              dVar70 = local_508.Scale3D.XY.m128d_f64[1];
              dVar16 = local_508.Scale3D.XY.m128d_f64[0];
              dVar15 = local_508.Translation.ZW.m128d_f64[1];
              dVar14 = local_508.Translation.ZW.m128d_f64[0];
              dVar13 = local_508.Translation.XY.m128d_f64[1];
              dVar11 = local_508.Translation.XY.m128d_f64[0];
              dVar9 = local_508.Rotation.ZW.m128d_f64[1];
              dVar78 = local_508.Rotation.ZW.m128d_f64[0];
              dVar75 = local_508.Rotation.XY.m128d_f64[1];
              dVar8 = local_508.Rotation.XY.m128d_f64[0];
              uVar31 = 0;
              if ((int)uVar40 < (this->Calculated_Hand_Transforms).ArrayNum) {
                uVar31 = uVar42;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar37 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
              lVar39 = lVar43 * 0x60;
              *(double *)(pFVar37 + lVar39) = dVar8;
              *(double *)(pFVar37 + lVar39 + 8) = dVar75;
              *(double *)(pFVar37 + lVar39 + 0x10) = dVar78;
              *(double *)(pFVar37 + lVar39 + 0x10 + 8) = dVar9;
              *(double *)(pFVar37 + lVar39 + 0x20) = dVar11;
              *(double *)(pFVar37 + lVar39 + 0x20 + 8) = dVar13;
              *(double *)(pFVar37 + lVar39 + 0x30) = dVar14;
              *(double *)(pFVar37 + lVar39 + 0x30 + 8) = dVar15;
              *(double *)(pFVar37 + lVar39 + 0x40) = dVar16;
              *(double *)(pFVar37 + lVar39 + 0x40 + 8) = dVar70;
              *(double *)(pFVar37 + lVar39 + 0x50) = dVar23;
              *(double *)(pFVar37 + lVar39 + 0x50 + 8) = dVar24;
              pUVar3 = (USkinnedMeshComponent *)
                       this->weapon_handler_component->active_weapon_component;
              local_698._0_8_ = pUVar3->_padding_;
              local_698._8_8_ = pUVar3->_padding_;
              local_698._16_8_ = pUVar3->_padding_;
              local_698._24_8_ = pUVar3->_padding_;
              local_698._32_8_ = pUVar3->_padding_;
              local_698._40_8_ = pUVar3->_padding_;
              local_698._48_8_ = pUVar3->_padding_;
              local_698._56_8_ = pUVar3->_padding_;
              local_698._64_8_ = pUVar3->_padding_;
              dStack_650 = (double)pUVar3->_padding_;
              local_648 = (double)pUVar3->_padding_;
              dStack_640 = (double)pUVar3->_padding_;
              if (pUVar3 != (USkinnedMeshComponent *)0x0) {
                pUVar36 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                iVar30 = (int)pUVar36->_padding_;
                if ((iVar30 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar30 * 8)
                    == &pUVar36->_padding_)) {
                  iVar30 = USkinnedMeshComponent::GetBoneIndex
                                     (pUVar3,this->weapon_handler_component->weapon_bone);
                  pTVar35 = USkinnedMeshComponent::GetBoneTransform(pUVar3,&local_1a8,iVar30);
                  local_698._0_8_ = (pTVar35->Rotation).XY.m128d_f64[0];
                  local_698._8_8_ = (pTVar35->Rotation).XY.m128d_f64[1];
                  local_698._16_8_ = (pTVar35->Rotation).ZW.m128d_f64[0];
                  local_698._24_8_ = (pTVar35->Rotation).ZW.m128d_f64[1];
                  local_698._32_8_ = (pTVar35->Translation).XY.m128d_f64[0];
                  local_698._40_8_ = (pTVar35->Translation).XY.m128d_f64[1];
                  local_698._48_8_ = (pTVar35->Translation).ZW.m128d_f64[0];
                  local_698._56_8_ = (pTVar35->Translation).ZW.m128d_f64[1];
                }
              }
              uVar87 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
              uVar86 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
              uVar74 = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
              uVar73 = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
              uVar41 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
              uVar19 = (ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20;
              local_648 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
              dStack_640 = 0.0;
              uVar42 = ~uVar40 >> 0x1f;
              local_698._68_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._4_4_;
              local_698._64_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._0_4_;
              dStack_650 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                                            UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
              uVar31 = 0;
              if ((int)uVar40 < (this->Calculated_Hand_Transforms).ArrayNum) {
                uVar31 = uVar42;
              }
              if (uVar31 == 0) {
                uVar42 = 0x506106c8;
                bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar28) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              auVar81._0_8_ =
                   (double)CONCAT44(uVar74 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    uVar73 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
              auVar81._8_4_ = uVar86 & _UNK_15061cc88;
              auVar81._12_4_ = uVar87 & _UNK_15061cc8c;
              auVar53._8_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar81._8_8_);
              auVar53._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar81._0_8_);
              iVar30 = movmskpd(uVar42,auVar53);
              pFVar37 = (this->Calculated_Hand_Transforms).AllocatorInstance.Data;
              auVar77._8_8_ = -(ulonglong)(GlobalVectorConstants::SmallNumber.m128_f32[3] < 0.0);
              auVar77._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44((uint)uVar19 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     uVar41 & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
              uVar31 = movmskpd(uVar40,auVar77);
              if ((uVar31 & 0x3fffffff) == 0 && iVar30 == 0) {
                local_2c8.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_2c8.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_2c8.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_2c8.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_2c8.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_2c8.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                UE::Math::TTransform<double>::InverseFast
                          ((TTransform<double> *)local_698,&local_2c8);
              }
              local_4a8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_4a8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_4a8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_4a8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_4a8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_4a8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_4a8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_4a8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_4a8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_4a8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_4a8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_4a8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply
                        (&local_4a8,(TTransform<double> *)(pFVar37 + (longlong)(int)uVar40 * 0x60),
                         &local_2c8);
              dVar13 = local_4a8.Translation.ZW.m128d_f64[1];
              dVar11 = local_4a8.Translation.ZW.m128d_f64[0];
              dVar9 = local_4a8.Translation.XY.m128d_f64[1];
              dVar78 = local_4a8.Translation.XY.m128d_f64[0];
              dVar75 = local_4a8.Rotation.XY.m128d_f64[1];
              dVar8 = local_4a8.Rotation.XY.m128d_f64[0];
              uVar73 = local_4a8.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar74 = local_4a8.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar86 = local_4a8.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar87 = local_4a8.Rotation.ZW.m128d_f64[1]._4_4_;
              dVar14 = local_4a8.Scale3D.XY.m128d_f64[0];
              dVar15 = local_4a8.Scale3D.XY.m128d_f64[1];
              uVar88 = local_4a8.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar25 = local_4a8.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar26 = local_4a8.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar27 = local_4a8.Scale3D.ZW.m128d_f64[1]._4_4_;
              uVar31 = 0;
              if ((int)uVar40 < (this->Hand_Weapon_Relative_Transforms).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar46 = (this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data;
              lVar39 = lVar43 * 0x60;
              *(double *)(pFVar46 + lVar39) = dVar8;
              *(double *)(pFVar46 + lVar39 + 8) = dVar75;
              pFVar37 = pFVar46 + lVar39 + 0x10;
              *(undefined4 *)pFVar37 = uVar73;
              *(undefined4 *)(pFVar37 + 4) = uVar74;
              *(undefined4 *)(pFVar37 + 8) = uVar86;
              *(undefined4 *)(pFVar37 + 0xc) = uVar87;
              *(double *)(pFVar46 + lVar39 + 0x20) = dVar78;
              *(double *)(pFVar46 + lVar39 + 0x20 + 8) = dVar9;
              *(double *)(pFVar46 + lVar39 + 0x30) = dVar11;
              *(double *)(pFVar46 + lVar39 + 0x30 + 8) = dVar13;
              *(double *)(pFVar46 + lVar39 + 0x40) = dVar14;
              *(double *)(pFVar46 + lVar39 + 0x40 + 8) = dVar15;
              pFVar46 = pFVar46 + lVar39 + 0x50;
              *(undefined4 *)pFVar46 = uVar88;
              *(undefined4 *)(pFVar46 + 4) = uVar25;
              *(undefined4 *)(pFVar46 + 8) = uVar26;
              *(undefined4 *)(pFVar46 + 0xc) = uVar27;
              pUVar2 = this->weapon_handler_component;
              uVar31 = 0;
              if ((int)uVar40 < (pUVar2->arm_reset_queue_index).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (pUVar2->arm_reset_queue_index).AllocatorInstance.Data[lVar43] =
                   (FScriptContainerElement)0x0;
            }
          }
        }
        if ((this->Hand_Array).ArrayNum == (this->grab_alpha).ArrayNum) {
          iVar30 = (this->weapon_handler_component->handbone_array_boneName).ArrayNum;
          if ((0 < iVar30) && ((int)uVar40 < iVar30)) {
            uVar42 = ~uVar40 >> 0x1f;
            uVar31 = 0;
            if ((int)uVar40 < (this->Hand_Array).ArrayNum) {
              uVar31 = uVar42;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar28 = ::FName::IsWithinBounds
                               ((FNameEntryId)
                                *(uint *)((this->Hand_Array).AllocatorInstance.Data +
                                         (longlong)(int)uVar40 * 0x10));
            if (bVar28) {
              uVar31 = 0;
              if ((int)uVar40 < (this->Hand_Array).ArrayNum) {
                uVar31 = uVar42;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar37 = (FScriptContainerElement *)
                        ::FName::ToString((FName *)((this->Hand_Array).AllocatorInstance.Data +
                                                   (longlong)(int)uVar40 * 0x10),&local_638);
              pUVar2 = this->weapon_handler_component;
              uVar31 = 0;
              if ((int)uVar40 < (pUVar2->handbone_array_boneName).ArrayNum) {
                uVar31 = uVar42;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar46 = (pUVar2->handbone_array_boneName).AllocatorInstance.Data + lVar43 * 0x10;
              if (pFVar46 != pFVar37) {
                pFVar4 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar46->field_0x0)->
                         AllocatorInstance).Data;
                if (pFVar4 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar4);
                }
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar46->field_0x0)->
                AllocatorInstance).Data =
                     (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar37->field_0x0)->
                     AllocatorInstance).Data;
                (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar37->field_0x0)->
                AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                *(int *)&pFVar46[8].field_0x0 = *(int *)&pFVar37[8].field_0x0;
                *(int *)&pFVar46[0xc].field_0x0 = *(int *)&pFVar37[0xc].field_0x0;
                *(undefined8 *)&pFVar37[8].field_0x0 = 0;
              }
              if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_638.Data.AllocatorInstance.Data);
              }
            }
          }
          pUVar2 = this->weapon_handler_component;
          iVar30 = (pUVar2->handbone_array_boneIndex).ArrayNum;
          if ((0 < iVar30) && ((int)uVar40 < iVar30)) {
            uVar31 = 0;
            if ((int)uVar40 < iVar30) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(uint *)((pUVar2->handbone_array_boneIndex).AllocatorInstance.Data + lVar43 * 4) =
                 uVar40;
          }
        }
        pUVar2 = this->weapon_handler_component;
        uVar31 = 0;
        if ((int)uVar40 < (pUVar2->arm_grabbing_status).ArrayNum) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar28 = (pUVar2->arm_grabbing_status).AllocatorInstance.Data[lVar43] !=
                 (FScriptContainerElement)0x0;
        if ((this->Internal_Switched_Interpolation_bool == false) ||
           (this->weapon_handler_component == (UDragonIKWeaponPhysicsComponent *)0x0)) {
          iVar30 = (this->grab_alpha).ArrayNum;
          if (this->weapon_handler_component->is_grabbing == true) {
            uVar31 = 0;
            if ((int)uVar40 < iVar30) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4) = (float)bVar28;
          }
          else {
            uVar31 = 0;
            if ((int)uVar40 < iVar30) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4) = 0;
          }
          pUVar2 = this->weapon_handler_component;
          if (0 < (pUVar2->should_override_hand_location).ArrayNum) {
            uVar31 = 0;
            if ((int)uVar40 < (pUVar2->should_override_hand_location).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar30 = (this->overriding_hand_position_alpha).ArrayNum;
            if ((pUVar2->should_override_hand_location).AllocatorInstance.Data[lVar43] ==
                (FScriptContainerElement)0x0) {
              uVar31 = 0;
              if ((int)uVar40 < iVar30) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)
               ((this->overriding_hand_position_alpha).AllocatorInstance.Data + lVar43 * 4) = 0;
            }
            else {
              uVar31 = 0;
              if ((int)uVar40 < iVar30) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)
               ((this->overriding_hand_position_alpha).AllocatorInstance.Data + lVar43 * 4) =
                   0x3f800000;
            }
          }
          pUVar2 = this->weapon_handler_component;
          if (0 < (pUVar2->should_override_hand_rotation).ArrayNum) {
            uVar31 = 0;
            if ((int)uVar40 < (pUVar2->should_override_hand_rotation).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar30 = (this->overriding_hand_rotation_alpha).ArrayNum;
            if ((pUVar2->should_override_hand_rotation).AllocatorInstance.Data[lVar43] ==
                (FScriptContainerElement)0x0) {
              uVar31 = 0;
              if ((int)uVar40 < iVar30) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)
               ((this->overriding_hand_rotation_alpha).AllocatorInstance.Data + lVar43 * 4) = 0;
            }
            else {
              uVar31 = 0;
              if ((int)uVar40 < iVar30) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined4 *)
               ((this->overriding_hand_rotation_alpha).AllocatorInstance.Data + lVar43 * 4) =
                   0x3f800000;
            }
          }
        }
        else {
          pUVar5 = this->owning_skel;
          fVar80 = this->Interpolation_Speed;
          pUVar34 = (UWorld *)pUVar5->_padding_;
          if (this->weapon_handler_component->is_grabbing == true) {
            if (pUVar34 == (UWorld *)0x0) {
              pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
            }
            fVar47 = pUVar34->DeltaTimeSeconds;
            uVar31 = 0;
            if ((int)uVar40 < (this->grab_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar29)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar1 = *(float *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4);
            fVar79 = (float)bVar28;
            if ((0.0 < fVar80) && (fVar58 = fVar79 - fVar1, fVar20 <= fVar58 * fVar58)) {
              fVar80 = fVar80 * fVar47;
              if (fVar21 <= fVar80) {
                fVar80 = fVar21;
              }
              if (fVar80 <= 0.0) {
                fVar80 = fVar48;
              }
              fVar79 = fVar80 * fVar58 + fVar1;
            }
            uVar31 = 0;
            if ((int)uVar40 < (this->grab_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4) = fVar79;
          }
          else {
            if (pUVar34 == (UWorld *)0x0) {
              pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
            }
            fVar47 = pUVar34->DeltaTimeSeconds;
            uVar31 = 0;
            if ((int)uVar40 < (this->grab_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            fVar1 = *(float *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4);
            fVar79 = fVar48;
            if ((0.0 < fVar80) &&
               (fVar58 = (float)((uint)fVar1 ^ uVar45), fVar20 <= fVar58 * fVar58)) {
              fVar80 = fVar80 * fVar47;
              if (fVar21 <= fVar80) {
                fVar80 = fVar21;
              }
              if (fVar80 <= 0.0) {
                fVar80 = fVar48;
              }
              fVar79 = fVar80 * fVar58 + fVar1;
            }
            uVar31 = 0;
            if ((int)uVar40 < (this->grab_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((this->grab_alpha).AllocatorInstance.Data + lVar43 * 4) = fVar79;
          }
          pUVar2 = this->weapon_handler_component;
          if ((0 < (pUVar2->should_override_hand_rotation).ArrayNum) &&
             (0 < (pUVar2->should_override_hand_location).ArrayNum)) {
            uVar31 = 0;
            if ((int)uVar40 < (pUVar2->should_override_hand_location).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar5 = this->owning_skel;
            fVar80 = this->Interpolation_Speed;
            pUVar34 = (UWorld *)pUVar5->_padding_;
            if ((pUVar2->should_override_hand_location).AllocatorInstance.Data[lVar43] ==
                (FScriptContainerElement)0x0) {
              if (pUVar34 == (UWorld *)0x0) {
                pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
              }
              fVar47 = pUVar34->DeltaTimeSeconds;
              uVar31 = 0;
              if ((int)uVar40 < (this->overriding_hand_position_alpha).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar47 = FMath::FInterpTo<float,int,float,float>
                                 (*(float *)((this->overriding_hand_position_alpha).
                                             AllocatorInstance.Data + lVar43 * 4),0,fVar47,fVar80);
            }
            else {
              if (pUVar34 == (UWorld *)0x0) {
                pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
              }
              fVar1 = pUVar34->DeltaTimeSeconds;
              uVar31 = 0;
              if ((int)uVar40 < (this->overriding_hand_position_alpha).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar79 = *(float *)((this->overriding_hand_position_alpha).AllocatorInstance.Data +
                                 lVar43 * 4);
              fVar47 = fVar21;
              if ((0.0 < fVar80) && (fVar58 = fVar21 - fVar79, fVar20 <= fVar58 * fVar58)) {
                fVar80 = fVar80 * fVar1;
                if (fVar21 <= fVar80) {
                  fVar80 = fVar21;
                }
                if (fVar80 <= 0.0) {
                  fVar80 = fVar48;
                }
                fVar47 = fVar80 * fVar58 + fVar79;
              }
            }
            uVar31 = 0;
            if ((int)uVar40 < (this->overriding_hand_position_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((this->overriding_hand_position_alpha).AllocatorInstance.Data + lVar43 * 4) =
                 fVar47;
            pUVar2 = this->weapon_handler_component;
            uVar31 = 0;
            if ((int)uVar40 < (pUVar2->should_override_hand_rotation).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pUVar5 = this->owning_skel;
            fVar80 = this->Interpolation_Speed;
            pUVar34 = (UWorld *)pUVar5->_padding_;
            if ((pUVar2->should_override_hand_rotation).AllocatorInstance.Data[lVar43] ==
                (FScriptContainerElement)0x0) {
              if (pUVar34 == (UWorld *)0x0) {
                pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
              }
              fVar47 = pUVar34->DeltaTimeSeconds;
              uVar31 = 0;
              if ((int)uVar40 < (this->overriding_hand_rotation_alpha).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar1 = *(float *)((this->overriding_hand_rotation_alpha).AllocatorInstance.Data +
                                lVar43 * 4);
              if (0.0 < fVar80) {
                fVar79 = (float)((uint)fVar1 ^ uVar45);
                if (fVar20 <= fVar79 * fVar79) {
                  fVar80 = fVar80 * fVar47;
                  if (fVar21 <= fVar80) {
                    fVar80 = fVar21;
                  }
                  if (fVar80 <= 0.0) {
                    fVar80 = fVar48;
                  }
                  fVar48 = fVar80 * fVar79 + fVar1;
                }
                else {
                  fVar48 = 0.0;
                }
              }
            }
            else {
              if (pUVar34 == (UWorld *)0x0) {
                pUVar34 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar5);
              }
              fVar48 = pUVar34->DeltaTimeSeconds;
              uVar31 = 0;
              if ((int)uVar40 < (this->overriding_hand_rotation_alpha).ArrayNum) {
                uVar31 = ~uVar40 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              fVar48 = FMath::FInterpTo<float,int,float,float>
                                 (*(float *)((this->overriding_hand_rotation_alpha).
                                             AllocatorInstance.Data + lVar43 * 4),1,fVar48,fVar80);
            }
            uVar31 = 0;
            if ((int)uVar40 < (this->overriding_hand_rotation_alpha).ArrayNum) {
              uVar31 = ~uVar40 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(float *)((this->overriding_hand_rotation_alpha).AllocatorInstance.Data + lVar43 * 4) =
                 fVar48;
          }
        }
        local_718 = local_718 + 4;
        uVar40 = uVar40 + 1;
        lVar43 = lVar43 + 1;
      } while ((int)uVar40 < (this->grab_alpha).ArrayNum);
    }
    uVar42 = _UNK_15061cc8c;
    uVar31 = _UNK_15061cc88;
    uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar45 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar41 = 0;
    if (0 < (this->Calibration_Status_Array).ArrayNum) {
      lVar43 = 0;
      do {
        if ((this->weapon_handler_component != (UDragonIKWeaponPhysicsComponent *)0x0) &&
           (this->weapon_handler_component->active_weapon_component == (UPrimitiveComponent *)0x0))
        {
          uVar32 = 0;
          if ((int)uVar41 < (this->Calibration_Status_Array).ArrayNum) {
            uVar32 = ~uVar41 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->Calibration_Status_Array).AllocatorInstance.Data[lVar43] =
               (FScriptContainerElement)0x0;
        }
        uVar41 = uVar41 + 1;
        lVar43 = lVar43 + 1;
      } while ((int)uVar41 < (this->Calibration_Status_Array).ArrayNum);
    }
    bVar28 = false;
    uVar41 = 0;
    if (0 < (this->Aiming_Hand_Limbs).ArrayNum) {
      lVar43 = 0;
      bVar28 = false;
      do {
        pUVar5 = this->owning_skel;
        uVar32 = 0;
        if ((int)uVar41 < (this->Aiming_Hand_Limbs).ArrayNum) {
          uVar32 = ~uVar41 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar30 = *(int *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar43 + 0x38);
        iVar33 = USkinnedMeshComponent::GetBoneIndex
                           ((USkinnedMeshComponent *)pUVar5,
                            this->weapon_handler_component->weapon_grabbed_bone);
        if (iVar33 == iVar30 * 2 >> 1) {
          bVar28 = true;
        }
        uVar41 = uVar41 + 1;
        lVar43 = lVar43 + 0x200;
      } while ((int)uVar41 < (this->Aiming_Hand_Limbs).ArrayNum);
    }
    FVar44 = this->weapon_handler_component->weapon_grabbed_bone;
    if (!bVar28) {
      uVar41 = this->primary_hand_index;
      uVar32 = 0;
      if ((int)uVar41 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar32 = ~uVar41 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar44 = *(FName *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data +
                         (longlong)(int)uVar41 * 0x200 + 0x30);
    }
    iVar30 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this->owning_skel,FVar44);
    if ((iVar30 < 0) ||
       (this->weapon_handler_component->active_weapon_component == (UPrimitiveComponent *)0x0))
    goto LAB_14d33bbcb;
    local_6d8.BoneName = this->weapon_handler_component->weapon_grabbed_bone;
    local_6d8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_6d8.bUseSkeletonIndex = 0;
    local_6d8.BoneIndex = -1;
    FBoneReference::Initialize(&local_6d8,this->SavedBoneContainer);
    FVar22 = local_6d8.CachedCompactPoseIndex;
    pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,local_6d8.CachedCompactPoseIndex);
    local_5c8.Rotation.XY.m128d_f64[0] = (pTVar35->Rotation).XY.m128d_f64[0];
    local_5c8.Rotation.XY.m128d_f64[1] = (pTVar35->Rotation).XY.m128d_f64[1];
    local_5c8.Rotation.ZW.m128d_f64[0] = (pTVar35->Rotation).ZW.m128d_f64[0];
    local_5c8.Rotation.ZW.m128d_f64[1] = (pTVar35->Rotation).ZW.m128d_f64[1];
    local_5c8.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
    local_5c8.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
    local_5c8.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
    local_5c8.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
    local_5c8.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
    local_5c8.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
    local_5c8.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
    local_5c8.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
    pUVar3 = (USkinnedMeshComponent *)this->weapon_handler_component->active_weapon_component;
    if (pUVar3 != (USkinnedMeshComponent *)0x0) {
      pUVar36 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      iVar30 = (int)pUVar36->_padding_;
      if ((iVar30 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar30 * 8) ==
          &pUVar36->_padding_)) {
        iVar30 = USkinnedMeshComponent::GetBoneIndex
                           (pUVar3,this->weapon_handler_component->weapon_bone);
        USkinnedMeshComponent::GetBoneTransform(pUVar3,&local_148,iVar30);
      }
    }
    local_6c8.BoneName = this->weapon_handler_component->weapon_grabbed_bone;
    local_6c8.bUseSkeletonIndex = 0;
    local_6c8.BoneIndex = -1;
    local_6c8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    FBoneReference::Initialize(&local_6c8,this->SavedBoneContainer);
    pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,local_6c8.CachedCompactPoseIndex);
    local_628.Rotation.XY.m128d_f64[0] = (pTVar35->Rotation).XY.m128d_f64[0];
    local_628.Rotation.XY.m128d_f64[1] = (pTVar35->Rotation).XY.m128d_f64[1];
    local_628.Rotation.ZW.m128d_f64[0] = (pTVar35->Rotation).ZW.m128d_f64[0];
    local_628.Rotation.ZW.m128d_f64[1] = (pTVar35->Rotation).ZW.m128d_f64[1];
    local_628.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
    local_628.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
    local_628.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
    local_628.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
    local_628.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
    local_628.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
    local_628.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
    local_628.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
    local_6b8.bUseSkeletonIndex = 0;
    local_6b8.BoneIndex = -1;
    local_6b8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_6b8.BoneName = FVar44;
    FBoneReference::Initialize(&local_6b8,this->SavedBoneContainer);
    pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,local_6b8.CachedCompactPoseIndex);
    local_568.Translation.ZW.m128d_f64[0] = (pTVar35->Translation).ZW.m128d_f64[0];
    local_568.Translation.ZW.m128d_f64[1] = (pTVar35->Translation).ZW.m128d_f64[1];
    local_568.Translation.XY.m128d_f64[0] = (pTVar35->Translation).XY.m128d_f64[0];
    local_568.Translation.XY.m128d_f64[1] = (pTVar35->Translation).XY.m128d_f64[1];
    dVar8 = (pTVar35->Rotation).XY.m128d_f64[0];
    dVar75 = (pTVar35->Rotation).XY.m128d_f64[1];
    dVar78 = (pTVar35->Rotation).ZW.m128d_f64[0];
    dVar9 = (pTVar35->Rotation).ZW.m128d_f64[1];
    local_568.Scale3D.ZW.m128d_f64[0] = (pTVar35->Scale3D).ZW.m128d_f64[0];
    local_568.Scale3D.ZW.m128d_f64[1] = (pTVar35->Scale3D).ZW.m128d_f64[1];
    local_568.Scale3D.XY.m128d_f64[0] = (pTVar35->Scale3D).XY.m128d_f64[0];
    local_568.Scale3D.XY.m128d_f64[1] = (pTVar35->Scale3D).XY.m128d_f64[1];
    local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_448.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_628.Rotation.XY.m128d_f64[0] = dVar8;
    local_628.Rotation.XY.m128d_f64[1] = dVar75;
    local_628.Rotation.ZW.m128d_f64[0] = dVar78;
    local_628.Rotation.ZW.m128d_f64[1] = dVar9;
    UE::Math::TTransform<double>::Multiply
              (&local_448,&local_628,(TTransform<double> *)&this->owning_skel->_padding_);
    local_628.Rotation.XY.m128d_f64[0] = local_448.Rotation.XY.m128d_f64[0];
    local_628.Rotation.XY.m128d_f64[1] = local_448.Rotation.XY.m128d_f64[1];
    local_628.Translation.XY.m128d_f64[0] = local_448.Translation.XY.m128d_f64[0];
    local_628.Translation.XY.m128d_f64[1] = local_448.Translation.XY.m128d_f64[1];
    local_628.Rotation.ZW.m128d_f64[0] = local_448.Rotation.ZW.m128d_f64[0];
    local_628.Rotation.ZW.m128d_f64[1] = local_448.Rotation.ZW.m128d_f64[1];
    local_628.Scale3D.XY.m128d_f64[0] = local_448.Scale3D.XY.m128d_f64[0];
    local_628.Scale3D.XY.m128d_f64[1] = local_448.Scale3D.XY.m128d_f64[1];
    local_328.Translation.XY.m128d_f64[0] =
         (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[0];
    local_328.Translation.XY.m128d_f64[1] =
         (this->Initial_IK_Hand_Transform).Translation.XY.m128d_f64[1];
    local_628.Translation.ZW.m128d_f64[0] = local_448.Translation.ZW.m128d_f64[0];
    local_628.Translation.ZW.m128d_f64[1] = local_448.Translation.ZW.m128d_f64[1];
    local_628.Scale3D.ZW.m128d_f64[0] = local_448.Scale3D.ZW.m128d_f64[0];
    local_628.Scale3D.ZW.m128d_f64[1] = local_448.Scale3D.ZW.m128d_f64[1];
    local_328.Translation.ZW.m128d_f64[0] =
         (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[0];
    local_328.Translation.ZW.m128d_f64[1] =
         (this->Initial_IK_Hand_Transform).Translation.ZW.m128d_f64[1];
    local_328.Scale3D.XY.m128d_f64[0] = (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[0];
    local_328.Scale3D.XY.m128d_f64[1] = (this->Initial_IK_Hand_Transform).Scale3D.XY.m128d_f64[1];
    pTVar35 = &local_268;
    local_328.Scale3D.ZW.m128d_f64[0] = (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[0];
    local_328.Scale3D.ZW.m128d_f64[1] = (this->Initial_IK_Hand_Transform).Scale3D.ZW.m128d_f64[1];
    local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    uVar69 = GlobalVectorConstants::FloatZero.m128_u64[1];
    local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_328.Rotation.XY.m128d_f64[0] = dVar8;
    local_328.Rotation.XY.m128d_f64[1] = dVar75;
    local_328.Rotation.ZW.m128d_f64[0] = dVar78;
    local_328.Rotation.ZW.m128d_f64[1] = dVar9;
    UE::Math::TTransform<double>::Multiply
              (pTVar35,&local_328,(TTransform<double> *)&this->owning_skel->_padding_);
    auVar18._8_8_ = local_628.Scale3D.XY.m128d_f64[1];
    auVar18._0_8_ = local_628.Scale3D.XY.m128d_f64[0];
    uVar41 = (uint)((ulonglong)local_628.Scale3D.XY.m128d_f64[0] >> 0x20);
    uVar32 = (uint)((ulonglong)local_628.Scale3D.XY.m128d_f64[1] >> 0x20);
    dVar75 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
    dVar78 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
    uVar63 = (uint)((ulonglong)local_628.Scale3D.ZW.m128d_f64[0] >> 0x20);
    auVar59._0_8_ =
         (double)CONCAT44(uVar63 & uVar40,SUB84(local_628.Scale3D.ZW.m128d_f64[0],0) & uVar45);
    auVar59._8_4_ = SUB84(local_628.Scale3D.ZW.m128d_f64[1],0) & uVar31;
    auVar59._12_4_ = (uint)((ulonglong)local_628.Scale3D.ZW.m128d_f64[1] >> 0x20) & uVar42;
    dVar8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[2];
    auVar49._8_4_ = SUB84((double)GlobalVectorConstants::SmallNumber.m128_f32[3],0);
    auVar49._0_8_ = dVar8;
    auVar49._12_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::SmallNumber.m128_f32[3] >> 0x20);
    auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < auVar59._8_8_);
    auVar50._0_8_ = -(ulonglong)(dVar8 < auVar59._0_8_);
    uVar38 = movmskpd((int)pTVar35,auVar50);
    auVar60._0_8_ =
         (double)CONCAT44(uVar41 & uVar40,SUB84(local_628.Scale3D.XY.m128d_f64[0],0) & uVar45);
    auVar60._8_4_ = SUB84(local_628.Scale3D.XY.m128d_f64[1],0) & uVar31;
    auVar60._12_4_ = uVar32 & uVar42;
    auVar51._8_4_ = SUB84(dVar78,0);
    auVar51._0_8_ = dVar75;
    auVar51._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
    auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ < auVar60._8_8_);
    auVar52._0_8_ = -(ulonglong)(dVar75 < auVar60._0_8_);
    iVar30 = movmskpd(extraout_EAX,auVar52);
    if ((uVar38 & 0x3fffffff) == 0 && iVar30 == 0) {
      local_3e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_3e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_3e8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_3e8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_3e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_3e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      auVar17._4_8_ = uVar69;
      auVar17._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
      auVar64._0_8_ = auVar17._0_8_ << 0x20;
      auVar64._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar64._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar65._8_8_ = auVar64._8_8_;
      auVar65._0_8_ = local_628.Scale3D.ZW.m128d_f64[0];
      dVar15 = local_628.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar16 = local_628.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar87 = SUB84(dVar16,0);
      uVar88 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar13 = local_628.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar14 = local_628.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar74 = SUB84(dVar14,0);
      uVar86 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
      auVar89._0_8_ =
           (double)CONCAT44(uVar40 & uVar41,uVar45 & SUB84(local_628.Scale3D.XY.m128d_f64[0],0));
      auVar89._8_4_ = uVar31 & SUB84(local_628.Scale3D.XY.m128d_f64[1],0);
      auVar89._12_4_ = uVar42 & uVar32;
      lVar43 = -(ulonglong)
                ((double)CONCAT44(uVar40 & uVar63,
                                  uVar45 & SUB84(local_628.Scale3D.ZW.m128d_f64[0],0)) <= dVar8);
      auVar82._8_4_ = uVar74;
      auVar82._0_8_ = dVar13;
      auVar82._12_4_ = uVar86;
      lVar39 = -(ulonglong)(auVar89._8_8_ <= dVar78);
      local_3e8.Scale3D.XY.m128d_f64[0] =
           (double)CONCAT44(~(uint)(-(ulonglong)(auVar89._0_8_ <= dVar75) >> 0x20) & auVar53._4_4_,
                            ~(uint)-(ulonglong)(auVar89._0_8_ <= dVar75) & auVar53._0_4_);
      local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar39 & auVar53._8_4_;
      local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar39 >> 0x20) & auVar53._12_4_;
      auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
      dVar78 = local_628.Translation.XY.m128d_f64[0] * local_3e8.Scale3D.XY.m128d_f64[0];
      dVar9 = local_628.Translation.XY.m128d_f64[1] * local_3e8.Scale3D.XY.m128d_f64[1];
      uVar73 = (undefined4)((ulonglong)dVar9 >> 0x20);
      local_3e8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar43 >> 0x20) & auVar53._4_4_,
                            ~(uint)lVar43 & auVar53._0_4_);
      local_3e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar87;
      local_3e8.Rotation.XY.m128d_f64[0] = dVar15;
      local_3e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar88;
      local_3e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar74;
      local_3e8.Rotation.ZW.m128d_f64[0] = dVar13;
      local_3e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar86;
      auVar66._8_4_ = uVar87;
      auVar66._0_8_ = dVar15;
      auVar66._12_4_ = uVar88;
      dVar70 = auVar66._8_8_;
      auVar83._8_4_ = SUB84(dVar9,0);
      auVar83._0_8_ = dVar78;
      auVar83._12_4_ = uVar73;
      auVar54._8_4_ = SUB84(dVar13,0);
      auVar54._0_8_ = dVar70;
      auVar54._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar76._8_4_ = uVar87;
      auVar76._0_8_ = dVar15;
      auVar76._12_4_ = uVar88;
      dVar11 = local_628.Translation.ZW.m128d_f64[0] * local_3e8.Scale3D.ZW.m128d_f64[0];
      dVar8 = local_628.Translation.ZW.m128d_f64[1] * 0.0;
      auVar12._8_4_ = uVar74;
      auVar12._0_8_ = dVar13;
      auVar12._12_4_ = uVar86;
      auVar77 = blendpd(auVar76,auVar12,2);
      auVar61._8_4_ = SUB84(dVar9,0);
      auVar61._0_8_ = dVar78;
      auVar61._12_4_ = uVar73;
      auVar10._8_4_ = SUB84(dVar8,0);
      auVar10._0_8_ = dVar11;
      auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar53 = blendpd(auVar61,auVar10,2);
      auVar84._0_8_ = auVar83._8_8_ * dVar15 - dVar70 * dVar78;
      auVar84._8_8_ = dVar11 * dVar16 - auVar54._8_8_ * dVar9;
      auVar62._0_8_ = auVar53._0_8_ * dVar13 - auVar77._0_8_ * dVar11;
      auVar62._8_8_ = auVar53._8_8_ * dVar14 - auVar77._8_8_ * dVar8;
      dVar8 = auVar84._8_8_ + auVar84._8_8_;
      dVar75 = auVar62._0_8_ + auVar62._0_8_;
      uVar73 = SUB84(dVar75,0);
      uVar74 = (undefined4)((ulonglong)dVar75 >> 0x20);
      auVar53 = blendpd(auVar84,auVar62,2);
      auVar85._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar85._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar71._8_4_ = uVar73;
      auVar71._0_8_ = dVar8;
      auVar71._12_4_ = uVar74;
      auVar55._8_4_ = uVar73;
      auVar55._0_8_ = dVar8;
      auVar55._12_4_ = uVar74;
      auVar67._8_4_ = uVar73;
      auVar67._0_8_ = dVar8;
      auVar67._12_4_ = uVar74;
      auVar53 = blendpd(auVar67,auVar85,2);
      auVar72._0_8_ = auVar71._8_8_ * dVar15 - dVar8 * dVar70;
      auVar72._8_8_ = auVar85._0_8_ * dVar16 - auVar55._8_8_ * dVar13;
      auVar56._8_4_ = SUB84(auVar85._8_8_,0);
      auVar56._0_8_ = auVar85._0_8_;
      auVar56._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
      auVar68._0_8_ = auVar53._0_8_ * dVar13 - auVar85._0_8_ * auVar77._0_8_;
      auVar68._8_8_ = auVar53._8_8_ * dVar14 - auVar56._8_8_ * auVar77._8_8_;
      auVar57._8_4_ = SUB84(auVar72._8_8_,0);
      auVar57._0_8_ = auVar72._0_8_;
      auVar57._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
      auVar53 = blendpd(auVar72,auVar68,2);
      local_3e8.Translation.XY.m128d_f64[1] = 0.0 - (dVar75 * dVar14 + dVar9 + auVar68._0_8_);
      local_3e8.Translation.XY.m128d_f64[0] = 0.0 - (dVar8 * auVar82._8_8_ + dVar78 + auVar57._8_8_)
      ;
      local_3e8.Translation.ZW.m128d_f64[1] = 0.0;
      local_3e8.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar85._0_8_ * auVar82._8_8_ + dVar11 + auVar53._0_8_);
      local_3e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    }
    local_568.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_568.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_568.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_568.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_568.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_568.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_568.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_568.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_568.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_568.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_568.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_568.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_568,&local_268,&local_3e8);
    pUVar5 = this->owning_skel;
    (this->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[0] = local_568.Rotation.XY.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Rotation.XY.m128d_f64[1] = local_568.Rotation.XY.m128d_f64[1];
    (this->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[0] = local_568.Rotation.ZW.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Rotation.ZW.m128d_f64[1] = local_568.Rotation.ZW.m128d_f64[1];
    (this->IK_Hand_Real_Offset).Translation.XY.m128d_f64[0] = local_568.Translation.XY.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Translation.XY.m128d_f64[1] = local_568.Translation.XY.m128d_f64[1];
    (this->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[0] = local_568.Translation.ZW.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Translation.ZW.m128d_f64[1] = local_568.Translation.ZW.m128d_f64[1];
    (this->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[0] = local_568.Scale3D.XY.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Scale3D.XY.m128d_f64[1] = local_568.Scale3D.XY.m128d_f64[1];
    (this->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[0] = local_568.Scale3D.ZW.m128d_f64[0];
    (this->IK_Hand_Real_Offset).Scale3D.ZW.m128d_f64[1] = local_568.Scale3D.ZW.m128d_f64[1];
    FAnimationRuntime::ConvertCSTransformToBoneSpace
              ((TTransform<double> *)&pUVar5->_padding_,&param_1->Pose,&local_5c8,FVar22,
               BCS_WorldSpace);
    local_6f8 = 0;
    uVar40 = 0;
    uVar45 = 0x7fffffff;
    local_70c = 0;
    local_710 = 0x7fffffff;
    if ((this->Aiming_Hand_Limbs).ArrayNum < 1) {
LAB_14d33b6f5:
      uVar45 = this->primary_hand_index;
      uVar40 = 0;
      if ((int)uVar45 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar40 = ~uVar45 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar6 = *(undefined8 *)
               ((this->Aiming_Hand_Limbs).AllocatorInstance.Data +
               (longlong)(int)uVar45 * 0x200 + 0x30);
      iStack_6f4 = (int)((ulonglong)uVar6 >> 0x20);
      local_6f8 = (int)uVar6;
      local_70c = iStack_6f4;
    }
    else {
      uStack_6fc = FVar44.Number;
      local_718 = 0;
      do {
        uVar31 = 0;
        if ((int)uVar40 < (this->Aiming_Hand_Limbs).ArrayNum) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), uVar45 = local_710, bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar37 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
        if ((*(uint *)(pFVar37 + local_718 + 0x30) == FVar44.ComparisonIndex.Value.Value) &&
           (*(uint *)(pFVar37 + local_718 + 0x34) == uStack_6fc)) {
          uVar45 = 0;
          if ((int)uVar40 < (this->Aiming_Hand_Limbs).ArrayNum) {
            uVar45 = ~uVar40 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar37 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
          uVar6 = *(undefined8 *)(pFVar37 + local_718 + 0x30);
          uVar45 = *(uint *)(pFVar37 + local_718 + 0x38);
          iStack_6f4 = (int)((ulonglong)uVar6 >> 0x20);
          local_6f8 = (int)uVar6;
          local_70c = iStack_6f4;
          local_710 = uVar45;
        }
        local_718 = local_718 + 0x200;
        uVar40 = uVar40 + 1;
      } while ((int)uVar40 < (this->Aiming_Hand_Limbs).ArrayNum);
      if ((uVar45 & 0x7fffffff) == 0x7fffffff) goto LAB_14d33b6f5;
    }
    uVar45 = 0xffffffff;
    uVar40 = 0;
    if (0 < (this->Aiming_Hand_Limbs).ArrayNum) {
      lVar43 = 0;
      uVar45 = 0xffffffff;
      do {
        uVar31 = 0;
        if ((int)uVar40 < (this->Aiming_Hand_Limbs).ArrayNum) {
          uVar31 = ~uVar40 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar37 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
        if ((*(int *)(pFVar37 + lVar43 + 0x30) == local_6f8) &&
           (*(int *)(pFVar37 + lVar43 + 0x34) == local_70c)) {
          uVar45 = uVar40;
        }
        uVar40 = uVar40 + 1;
        lVar43 = lVar43 + 0x200;
      } while ((int)uVar40 < (this->Aiming_Hand_Limbs).ArrayNum);
    }
    pUVar2 = this->weapon_handler_component;
    uVar40 = 0;
    if ((int)uVar45 < (pUVar2->Frozen_Elbow_Component_Status).ArrayNum) {
      uVar40 = ~uVar45 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pUVar2->Frozen_Elbow_Component_Status).AllocatorInstance.Data[(int)uVar45] ==
        (FScriptContainerElement)0x1) {
      uVar40 = 0;
      if ((int)uVar45 < (this->Frozen_Target_Transform).ArrayNum) {
        uVar40 = ~uVar45 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar37 = (this->Frozen_Target_Transform).AllocatorInstance.Data;
      lVar43 = (longlong)(int)uVar45 * 0x60;
      local_208.Rotation.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar43);
      local_208.Rotation.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 8);
      local_208.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar43 + 0x10);
      local_208.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 0x10 + 8);
      local_208.Translation.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar43 + 0x20);
      local_208.Translation.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 0x20 + 8);
      local_208.Translation.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar43 + 0x30);
      local_208.Translation.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 0x30 + 8);
      local_208.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar37 + lVar43 + 0x40);
      local_208.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 0x40 + 8);
      local_208.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar37 + lVar43 + 0x50);
      local_208.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar37 + lVar43 + 0x50 + 8);
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                ((TTransform<double> *)&this->owning_skel->_padding_,&param_1->Pose,&local_208,
                 FVar22,BCS_WorldSpace);
    }
    pUVar2 = this->weapon_handler_component;
    (pUVar2->dominant_hand_transform).Rotation.XY.m128d_f64[0] = local_5c8.Rotation.XY.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Rotation.XY.m128d_f64[1] = local_5c8.Rotation.XY.m128d_f64[1];
    (pUVar2->dominant_hand_transform).Rotation.ZW.m128d_f64[0] = local_5c8.Rotation.ZW.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Rotation.ZW.m128d_f64[1] = local_5c8.Rotation.ZW.m128d_f64[1];
    (pUVar2->dominant_hand_transform).Translation.XY.m128d_f64[0] =
         local_5c8.Translation.XY.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Translation.XY.m128d_f64[1] =
         local_5c8.Translation.XY.m128d_f64[1];
    (pUVar2->dominant_hand_transform).Translation.ZW.m128d_f64[0] =
         local_5c8.Translation.ZW.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Translation.ZW.m128d_f64[1] =
         local_5c8.Translation.ZW.m128d_f64[1];
    (pUVar2->dominant_hand_transform).Scale3D.XY.m128d_f64[0] = local_5c8.Scale3D.XY.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Scale3D.XY.m128d_f64[1] = local_5c8.Scale3D.XY.m128d_f64[1];
    (pUVar2->dominant_hand_transform).Scale3D.ZW.m128d_f64[0] = local_5c8.Scale3D.ZW.m128d_f64[0];
    (pUVar2->dominant_hand_transform).Scale3D.ZW.m128d_f64[1] = local_5c8.Scale3D.ZW.m128d_f64[1];
    iVar30 = (this->Actual_Shoulder_Array).ArrayNum;
    if ((((int)uVar45 < iVar30) && (0 < iVar30)) && (-1 < (int)uVar45)) {
      if ((iVar30 <= (int)uVar45) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar43 = (longlong)(int)uVar45;
      pTVar35 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (&param_1->Pose,
                           *(FCompactPoseBoneIndex *)
                            ((this->Actual_Shoulder_Array).AllocatorInstance.Data +
                            lVar43 * 0x10 + 0xc));
      local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_388.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_388.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_388.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_388.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_388.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_388.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_388,pTVar35,(TTransform<double> *)&this->owning_skel->_padding_);
      pUVar2 = this->weapon_handler_component;
      (pUVar2->dominant_shoulder).Rotation.XY.m128d_f64[0] = local_388.Rotation.XY.m128d_f64[0];
      (pUVar2->dominant_shoulder).Rotation.XY.m128d_f64[1] = local_388.Rotation.XY.m128d_f64[1];
      (pUVar2->dominant_shoulder).Rotation.ZW.m128d_f64[0] = local_388.Rotation.ZW.m128d_f64[0];
      (pUVar2->dominant_shoulder).Rotation.ZW.m128d_f64[1] = local_388.Rotation.ZW.m128d_f64[1];
      (pUVar2->dominant_shoulder).Translation.XY.m128d_f64[0] =
           local_388.Translation.XY.m128d_f64[0];
      (pUVar2->dominant_shoulder).Translation.XY.m128d_f64[1] =
           local_388.Translation.XY.m128d_f64[1];
      (pUVar2->dominant_shoulder).Translation.ZW.m128d_f64[0] =
           local_388.Translation.ZW.m128d_f64[0];
      (pUVar2->dominant_shoulder).Translation.ZW.m128d_f64[1] =
           local_388.Translation.ZW.m128d_f64[1];
      (pUVar2->dominant_shoulder).Scale3D.XY.m128d_f64[0] = local_388.Scale3D.XY.m128d_f64[0];
      (pUVar2->dominant_shoulder).Scale3D.XY.m128d_f64[1] = local_388.Scale3D.XY.m128d_f64[1];
      (pUVar2->dominant_shoulder).Scale3D.ZW.m128d_f64[0] = local_388.Scale3D.ZW.m128d_f64[0];
      (pUVar2->dominant_shoulder).Scale3D.ZW.m128d_f64[1] = local_388.Scale3D.ZW.m128d_f64[1];
      if (((this->Actual_Shoulder_Array).ArrayNum <= (int)uVar45) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this->weapon_handler_component->dominant_shoulder_name =
           *(FName *)((this->Actual_Shoulder_Array).AllocatorInstance.Data + lVar43 * 0x10);
      if (((this->Hand_Array).ArrayNum <= (int)uVar45) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this->weapon_handler_component->dominant_hand_name =
           *(FName *)((this->Hand_Array).AllocatorInstance.Data + lVar43 * 0x10);
    }
    ArmIK_System(this,&param_1->Pose,param_1,&local_6e8);
    param_2 = local_6a8;
  }
  GetAnimatedPoseInfo(this,&param_1->Pose,param_2);
LAB_14d33bbcb:
  if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.AllocatorInstance.Data);
  }
  return;
}

// Evaluate_AnyThread @ 14d33bc90

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
FAnimNode_DragonWeaponArmSolver::Evaluate_AnyThread
          (FAnimNode_DragonWeaponArmSolver *this,FPoseContext *param_1)

{
  return;
}

// GetAnimatedPoseInfo @ 14d3465d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonWeaponArmSolver::GetAnimatedPoseInfo
          (FAnimNode_DragonWeaponArmSolver *this,FCSPose<FCompactPose> *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  TTransform<double> *pTVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  longlong lVar37;
  int *piVar38;
  longlong lVar39;
  undefined1 auStack_1d8 [32];
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_180;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (param_2 != &local_180) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayMax = 0;
    param_2->ArrayNum = 0;
  }
  piVar38 = &param_2->ArrayMax;
  uVar34 = 0;
  if (0 < (this->HandIK_Transforms).ArrayNum) {
    lVar37 = 0;
    lVar39 = 0;
    do {
      uVar35 = ~uVar34 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar34 < (this->HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->HandIK_Transforms).AllocatorInstance.Data;
      uVar29 = 0;
      if ((int)uVar34 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + lVar39) =
           *(undefined4 *)(pFVar2 + lVar39);
      uVar29 = 0;
      if ((int)uVar34 < (this->HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar32 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (param_1,*(FCompactPoseBoneIndex *)
                                    ((this->HandIK_Transforms).AllocatorInstance.Data + lVar39));
      local_168.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
      local_168.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
      local_168.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
      local_168.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
      local_168.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
      local_168.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
      local_168.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
      local_168.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
      local_168.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
      local_168.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
      local_168.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
      uVar29 = 0;
      if ((int)uVar34 < (this->arm_array_index_array).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar29 = *(uint *)((this->arm_array_index_array).AllocatorInstance.Data + lVar37 * 4);
      uVar30 = 0;
      if ((int)uVar29 < (this->grab_alpha).ArrayNum) {
        uVar30 = ~uVar29 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)((this->grab_alpha).AllocatorInstance.Data + (longlong)(int)uVar29 * 4);
      uVar29 = 0;
      if ((int)uVar34 < (this->HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar32 = UKismetMathLibrary::TLerp
                          (&local_108,&local_168,
                           (TTransform<double> *)
                           ((this->HandIK_Transforms).AllocatorInstance.Data + lVar39 + 0x10),fVar1,
                           (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
      local_168.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
      local_168.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
      local_168.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
      local_168.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
      local_168.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
      local_168.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
      local_168.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
      local_168.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
      local_168.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
      local_168.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
      local_168.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
      local_168.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
      dVar4 = (pTVar32->Rotation).XY.m128d_f64[0];
      dVar5 = (pTVar32->Rotation).XY.m128d_f64[1];
      dVar6 = (pTVar32->Rotation).ZW.m128d_f64[0];
      dVar7 = (pTVar32->Rotation).ZW.m128d_f64[1];
      dVar8 = (pTVar32->Translation).XY.m128d_f64[0];
      dVar9 = (pTVar32->Translation).XY.m128d_f64[1];
      dVar10 = (pTVar32->Translation).ZW.m128d_f64[0];
      dVar11 = (pTVar32->Translation).ZW.m128d_f64[1];
      dVar12 = (pTVar32->Scale3D).XY.m128d_f64[0];
      dVar13 = (pTVar32->Scale3D).XY.m128d_f64[1];
      dVar14 = (pTVar32->Scale3D).ZW.m128d_f64[0];
      dVar15 = (pTVar32->Scale3D).ZW.m128d_f64[1];
      uVar29 = 0;
      if ((int)uVar34 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data;
      *(double *)(pFVar2 + lVar39 + 0x10) = dVar4;
      *(double *)(pFVar2 + lVar39 + 0x10 + 8) = dVar5;
      *(double *)(pFVar2 + lVar39 + 0x20) = dVar6;
      *(double *)(pFVar2 + lVar39 + 0x20 + 8) = dVar7;
      *(double *)(pFVar2 + lVar39 + 0x30) = dVar8;
      *(double *)(pFVar2 + lVar39 + 0x30 + 8) = dVar9;
      *(double *)(pFVar2 + lVar39 + 0x40) = dVar10;
      *(double *)(pFVar2 + lVar39 + 0x40 + 8) = dVar11;
      *(double *)(pFVar2 + lVar39 + 0x50) = dVar12;
      *(double *)(pFVar2 + lVar39 + 0x50 + 8) = dVar13;
      *(double *)(pFVar2 + lVar39 + 0x60) = dVar14;
      *(double *)(pFVar2 + lVar39 + 0x60 + 8) = dVar15;
      uVar29 = 0;
      if ((int)uVar34 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      pFVar36 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data + lVar39;
      if (((pFVar2 <= pFVar36) && (pFVar36 < pFVar2 + (longlong)*piVar38 * 0x70)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar31 = param_2->ArrayNum;
      if (iVar31 == *piVar38) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,piVar38);
        param_2->ArrayNum = iVar31;
      }
      uVar34 = uVar34 + 1;
      param_2->ArrayNum = iVar31 + 1;
      lVar37 = lVar37 + 1;
      uVar16 = *(undefined8 *)(pFVar36 + 8);
      lVar39 = lVar39 + 0x70;
      lVar33 = (longlong)iVar31 * 0x70;
      pFVar2 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar33) = *(undefined8 *)pFVar36;
      *(undefined8 *)(pFVar2 + lVar33 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x18);
      *(undefined8 *)(pFVar2 + lVar33 + 0x10) = *(undefined8 *)(pFVar36 + 0x10);
      *(undefined8 *)(pFVar2 + lVar33 + 0x10 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x28);
      *(undefined8 *)(pFVar2 + lVar33 + 0x20) = *(undefined8 *)(pFVar36 + 0x20);
      *(undefined8 *)(pFVar2 + lVar33 + 0x20 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x38);
      *(undefined8 *)(pFVar2 + lVar33 + 0x30) = *(undefined8 *)(pFVar36 + 0x30);
      *(undefined8 *)(pFVar2 + lVar33 + 0x30 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x48);
      *(undefined8 *)(pFVar2 + lVar33 + 0x40) = *(undefined8 *)(pFVar36 + 0x40);
      *(undefined8 *)(pFVar2 + lVar33 + 0x40 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x58);
      *(undefined8 *)(pFVar2 + lVar33 + 0x50) = *(undefined8 *)(pFVar36 + 0x50);
      *(undefined8 *)(pFVar2 + lVar33 + 0x50 + 8) = uVar16;
      uVar16 = *(undefined8 *)(pFVar36 + 0x68);
      *(undefined8 *)(pFVar2 + lVar33 + 0x60) = *(undefined8 *)(pFVar36 + 0x60);
      *(undefined8 *)(pFVar2 + lVar33 + 0x60 + 8) = uVar16;
    } while ((int)uVar34 < (this->HandIK_Transforms).ArrayNum);
  }
  iVar31 = param_2->ArrayNum;
  uVar34 = 0;
  if (0 < iVar31) {
    lVar37 = 0;
    do {
      uVar35 = ~uVar34 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar34 < iVar31) {
        uVar29 = uVar35;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (-1 < *(int *)((param_2->AllocatorInstance).Data + lVar37)) {
        uVar29 = 0;
        if ((int)uVar34 < param_2->ArrayNum) {
          uVar29 = uVar35;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        uVar16 = *(undefined8 *)(pFVar2 + lVar37 + 0x10);
        uVar17 = *(undefined8 *)(pFVar2 + lVar37 + 0x10 + 8);
        uVar18 = *(undefined8 *)(pFVar2 + lVar37 + 0x20);
        uVar19 = *(undefined8 *)(pFVar2 + lVar37 + 0x20 + 8);
        uVar20 = *(undefined8 *)(pFVar2 + lVar37 + 0x30);
        uVar21 = *(undefined8 *)(pFVar2 + lVar37 + 0x30 + 8);
        uVar22 = *(undefined8 *)(pFVar2 + lVar37 + 0x40);
        uVar23 = *(undefined8 *)(pFVar2 + lVar37 + 0x40 + 8);
        uVar24 = *(undefined8 *)(pFVar2 + lVar37 + 0x50);
        uVar25 = *(undefined8 *)(pFVar2 + lVar37 + 0x50 + 8);
        uVar26 = *(undefined8 *)(pFVar2 + lVar37 + 0x60);
        uVar27 = *(undefined8 *)(pFVar2 + lVar37 + 0x60 + 8);
        uVar29 = 0;
        if ((int)uVar34 < param_2->ArrayNum) {
          uVar29 = uVar35;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + lVar37 + 0x10) = uVar16;
        *(undefined8 *)(pFVar2 + lVar37 + 0x10 + 8) = uVar17;
        *(undefined8 *)(pFVar2 + lVar37 + 0x20) = uVar18;
        *(undefined8 *)(pFVar2 + lVar37 + 0x20 + 8) = uVar19;
        *(undefined8 *)(pFVar2 + lVar37 + 0x30) = uVar20;
        *(undefined8 *)(pFVar2 + lVar37 + 0x30 + 8) = uVar21;
        *(undefined8 *)(pFVar2 + lVar37 + 0x40) = uVar22;
        *(undefined8 *)(pFVar2 + lVar37 + 0x40 + 8) = uVar23;
        *(undefined8 *)(pFVar2 + lVar37 + 0x50) = uVar24;
        *(undefined8 *)(pFVar2 + lVar37 + 0x50 + 8) = uVar25;
        *(undefined8 *)(pFVar2 + lVar37 + 0x60) = uVar26;
        *(undefined8 *)(pFVar2 + lVar37 + 0x60 + 8) = uVar27;
      }
      iVar31 = param_2->ArrayNum;
      uVar34 = uVar34 + 1;
      lVar37 = lVar37 + 0x70;
    } while ((int)uVar34 < iVar31);
  }
  return;
}

// GetChildBone @ 14d346f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FAnimNode_DragonWeaponArmSolver::GetChildBone
          (FAnimNode_DragonWeaponArmSolver *this,FName param_1,USkeletalMeshComponent *param_2)

{
  USkinnedMeshComponent *in_R9;
  
  USkinnedMeshComponent::GetBoneIndex(in_R9,(FName)param_2);
  USkinnedMeshComponent::GetBoneName(in_R9,param_1.ComparisonIndex.Value.Value);
  return param_1;
}

// GetCurrentLocation @ 14d346fb0

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
FAnimNode_DragonWeaponArmSolver::GetCurrentLocation
          (FAnimNode_DragonWeaponArmSolver *this,TVector<double> *__return_storage_ptr__,
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

// GetLODThreshold @ 14d348400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FAnimNode_DragonWeaponArmSolver::GetLODThreshold(FAnimNode_DragonWeaponArmSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d34a540

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
FAnimNode_DragonWeaponArmSolver::InitializeBoneReferences
          (FAnimNode_DragonWeaponArmSolver *this,FBoneContainer *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  longlong lVar25;
  int *local_res8;
  longlong local_res10;
  TArray<float,TSizedDefaultAllocator<32>_> *local_res18;
  
  this->SavedBoneContainer = param_1;
  this->solve_should_fail = false;
  piVar1 = &(this->Hand_Array).ArrayMax;
  this->inter_frame_counter = 0;
  this->Internal_Switched_Interpolation_bool = false;
  (this->Hand_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Hand_Array).AllocatorInstance,0,piVar1);
  }
  piVar2 = &(this->Elbow_Array).ArrayMax;
  (this->Elbow_Array).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Elbow_Array).AllocatorInstance,0,piVar2);
  }
  piVar3 = &(this->Shoulder_Array).ArrayMax;
  (this->Shoulder_Array).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Shoulder_Array).AllocatorInstance,0,piVar3);
  }
  piVar4 = &(this->Actual_Shoulder_Array).ArrayMax;
  (this->Actual_Shoulder_Array).ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Actual_Shoulder_Array).AllocatorInstance,0,piVar4);
  }
  piVar5 = &(this->Lerp_HandIK_Transforms).ArrayNum;
  piVar23 = &(this->Aiming_Hand_Limbs).ArrayNum;
  if (*piVar5 == 0) {
    iVar15 = *piVar23 * 6;
    iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,iVar15,&(this->Lerp_HandIK_Transforms).AllocatorInstance,piVar5,
                        &(this->Lerp_HandIK_Transforms).ArrayMax);
    DefaultConstructItems<FBoneTransform,int>
              ((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + (longlong)iVar14 * 0x70,
               iVar15);
  }
  piVar5 = &(this->Last_Shoulder_Angles).ArrayMax;
  piVar6 = &(this->Last_Shoulder_Angles).ArrayNum;
  *piVar6 = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Last_Shoulder_Angles).AllocatorInstance,0,piVar5);
  }
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&(this->Last_Shoulder_Angles).AllocatorInstance,piVar6,piVar5);
  memset((this->Last_Shoulder_Angles).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
         (longlong)iVar15 << 2);
  piVar5 = &(this->Frozen_Target_Transform).ArrayNum;
  if (*piVar5 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,10,&(this->Frozen_Target_Transform).AllocatorInstance,piVar5,
                        &(this->Frozen_Target_Transform).ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->Frozen_Target_Transform).AllocatorInstance.Data + (longlong)iVar15 * 0x60,10);
  }
  piVar5 = &(this->Frozen_Elbow_Transform).ArrayNum;
  if (*piVar5 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,10,&(this->Frozen_Elbow_Transform).AllocatorInstance,piVar5,
                        &(this->Frozen_Elbow_Transform).ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->Frozen_Elbow_Transform).AllocatorInstance.Data + (longlong)iVar15 * 0x60,10);
  }
  piVar23 = &(this->Aiming_Hand_Limbs).ArrayNum;
  piVar5 = &(this->Frozen_UpperArm_Transform).ArrayNum;
  if (*piVar5 == 0) {
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,10,&(this->Frozen_UpperArm_Transform).AllocatorInstance,piVar5,
                        &(this->Frozen_UpperArm_Transform).ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((this->Frozen_UpperArm_Transform).AllocatorInstance.Data + (longlong)iVar15 * 0x60,10
              );
  }
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x80,0x10,iVar15,(ForAnyElementType *)&this->Arm_TargetLocation_Overrides,
                      &(this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum,
                      &(this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayMax);
  DefaultConstructItems<FDragonData_SingleArmElement,int>
            ((this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.AllocatorInstance.
             Data + (longlong)iVar14 * 0x80,iVar15);
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar15,&(this->Hand_Weapon_Relative_Transforms).AllocatorInstance,
                      &(this->Hand_Weapon_Relative_Transforms).ArrayNum,
                      &(this->Hand_Weapon_Relative_Transforms).ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Hand_Weapon_Relative_Transforms).AllocatorInstance.Data +
             (longlong)iVar14 * 0x60,iVar15);
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar15,&(this->Calculated_Hand_Transforms).AllocatorInstance,
                      &(this->Calculated_Hand_Transforms).ArrayNum,
                      &(this->Calculated_Hand_Transforms).ArrayMax);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Calculated_Hand_Transforms).AllocatorInstance.Data + (longlong)iVar14 * 0x60,
             iVar15);
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar15,&(this->Calibration_Status_Array).AllocatorInstance,
                      &(this->Calibration_Status_Array).ArrayNum,
                      &(this->Calibration_Status_Array).ArrayMax);
  memset((this->Calibration_Status_Array).AllocatorInstance.Data + iVar14,0,(longlong)iVar15);
  piVar5 = &(this->grab_alpha).ArrayMax;
  piVar6 = &(this->grab_alpha).ArrayNum;
  *piVar6 = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->grab_alpha).AllocatorInstance,0,piVar5);
  }
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&(this->grab_alpha).AllocatorInstance,piVar6,piVar5);
  memset((this->grab_alpha).AllocatorInstance.Data + (longlong)iVar14 * 4,0,(longlong)iVar15 << 2);
  piVar5 = &(this->overriding_hand_position_alpha).ArrayMax;
  piVar6 = &(this->overriding_hand_position_alpha).ArrayNum;
  *piVar6 = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->overriding_hand_position_alpha).AllocatorInstance,0,piVar5);
  }
  piVar20 = &(this->Aiming_Hand_Limbs).ArrayNum;
  iVar15 = *piVar23;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&(this->overriding_hand_position_alpha).AllocatorInstance,piVar6,
                      piVar5);
  memset((this->overriding_hand_position_alpha).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
         (longlong)iVar15 << 2);
  pTVar7 = &this->overriding_hand_rotation_alpha;
  piVar5 = &(this->overriding_hand_rotation_alpha).ArrayMax;
  piVar23 = &(this->overriding_hand_rotation_alpha).ArrayNum;
  *piVar23 = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar7->AllocatorInstance,0,piVar5);
  }
  iVar15 = *piVar20;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15,&pTVar7->AllocatorInstance,piVar23,piVar5);
  memset((pTVar7->AllocatorInstance).Data + (longlong)iVar14 * 4,0,(longlong)iVar15 << 2);
  pTVar8 = &this->arm_array_index_array;
  piVar5 = &(this->arm_array_index_array).ArrayMax;
  (this->arm_array_index_array).ArrayNum = 0;
  if ((this->arm_array_index_array).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar8->AllocatorInstance,0,piVar5);
  }
  iVar15 = *piVar20;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar15 * 6,&pTVar8->AllocatorInstance,
                      &(this->arm_array_index_array).ArrayNum,piVar5);
  memset((pTVar8->AllocatorInstance).Data + (longlong)iVar14 * 4,0,(longlong)(iVar15 * 6) << 2);
  if ((this->Debug_Hand_Locations).ArrayNum < *piVar20) {
    ResizeDebugLocations(this,*piVar20);
  }
  local_res18 = &this->overriding_hand_rotation_alpha;
  local_res8 = &(this->Aiming_Hand_Limbs).ArrayNum;
  iVar15 = *piVar20;
  uVar16 = 0;
  if (0 < iVar15) {
    pTVar9 = &this->Elbow_Array;
    lVar24 = 0;
    local_res10 = 0;
    lVar25 = 0;
    do {
      uVar19 = ~uVar16 >> 0x1f;
      uVar22 = 0;
      if ((int)uVar16 < (this->grab_alpha).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(undefined4 *)((this->grab_alpha).AllocatorInstance.Data + lVar24 * 4) = 0x3f800000;
      uVar22 = 0;
      if ((int)uVar16 < (this->overriding_hand_position_alpha).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(undefined4 *)((this->overriding_hand_position_alpha).AllocatorInstance.Data + lVar24 * 4) =
           0;
      uVar22 = 0;
      if ((int)uVar16 < (this->overriding_hand_rotation_alpha).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      *(undefined4 *)((local_res18->AllocatorInstance).Data + lVar24 * 4) = 0;
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (this->Hand_Array).AllocatorInstance.Data;
      pFVar17 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x30;
      if (((pFVar10 <= pFVar17) &&
          (pFVar17 < pFVar10 + (longlong)(this->Hand_Array).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->Hand_Array).ArrayNum;
      if (iVar15 == (this->Hand_Array).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&(this->Hand_Array).AllocatorInstance,piVar1);
      }
      (this->Hand_Array).ArrayNum = iVar15 + 1;
      uVar12 = *(undefined8 *)(pFVar17 + 8);
      pFVar10 = (this->Hand_Array).AllocatorInstance.Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar10 + 8) = uVar12;
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (pTVar9->AllocatorInstance).Data;
      pFVar17 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x20;
      if (((pFVar10 <= pFVar17) &&
          (pFVar17 < pFVar10 + (longlong)(this->Elbow_Array).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->Elbow_Array).ArrayNum;
      if (iVar15 == (this->Elbow_Array).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar9->AllocatorInstance,piVar2);
      }
      (this->Elbow_Array).ArrayNum = iVar15 + 1;
      uVar12 = *(undefined8 *)(pFVar17 + 8);
      pFVar10 = (pTVar9->AllocatorInstance).Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar10 + 8) = uVar12;
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (this->Shoulder_Array).AllocatorInstance.Data;
      pFVar17 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x10;
      if (((pFVar10 <= pFVar17) &&
          (pFVar17 < pFVar10 + (longlong)(this->Shoulder_Array).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->Shoulder_Array).ArrayNum;
      if (iVar15 == (this->Shoulder_Array).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&(this->Shoulder_Array).AllocatorInstance,piVar3);
      }
      (this->Shoulder_Array).ArrayNum = iVar15 + 1;
      uVar12 = *(undefined8 *)(pFVar17 + 8);
      pFVar10 = (this->Shoulder_Array).AllocatorInstance.Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar10 + 8) = uVar12;
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (this->Actual_Shoulder_Array).AllocatorInstance.Data;
      pFVar17 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x10;
      if (((pFVar10 <= pFVar17) &&
          (pFVar17 < pFVar10 + (longlong)(this->Actual_Shoulder_Array).ArrayMax * 0x10)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar15 = (this->Actual_Shoulder_Array).ArrayNum;
      if (iVar15 == (this->Actual_Shoulder_Array).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&(this->Actual_Shoulder_Array).AllocatorInstance,piVar4);
      }
      (this->Actual_Shoulder_Array).ArrayNum = iVar15 + 1;
      uVar12 = *(undefined8 *)(pFVar17 + 8);
      pFVar10 = (this->Actual_Shoulder_Array).AllocatorInstance.Data + (longlong)iVar15 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar17;
      *(undefined8 *)(pFVar10 + 8) = uVar12;
      uVar22 = 0;
      if ((int)uVar16 < (this->Hand_Array).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((this->Hand_Array).AllocatorInstance.Data + local_res10),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Elbow_Array).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar9->AllocatorInstance).Data + local_res10),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Shoulder_Array).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((this->Shoulder_Array).AllocatorInstance.Data + local_res10),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Actual_Shoulder_Array).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->Actual_Shoulder_Array).AllocatorInstance.Data + local_res10),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x44),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar25 + 0x54),
                 this->SavedBoneContainer);
      uVar22 = 0;
      if ((int)uVar16 < (this->arm_array_index_array).ArrayNum) {
        uVar22 = uVar19;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_res10 = local_res10 + 0x10;
      lVar25 = lVar25 + 0x200;
      *(uint *)((pTVar8->AllocatorInstance).Data + lVar24 * 4) = uVar16;
      uVar16 = uVar16 + 1;
      lVar24 = lVar24 + 1;
      iVar15 = *local_res8;
    } while ((int)uVar16 < iVar15);
  }
  uVar16 = 0;
  uVar22 = 0;
  if (0 < iVar15) {
    lVar25 = 0;
    lVar24 = 0;
    do {
      uVar19 = 0;
      if ((int)uVar22 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar10 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data;
      if ((*(int *)(pFVar10 + lVar24 + 8) < 0) ||
         (lVar18 = 4, *(int *)(pFVar10 + lVar24 + 0xc) == -1)) {
        lVar18 = 3;
      }
      lVar21 = lVar25 * 4;
      do {
        uVar19 = 0;
        if ((int)uVar16 < (this->arm_array_index_array).ArrayNum) {
          uVar19 = ~uVar16 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar16 = uVar16 + 1;
        lVar25 = lVar25 + 1;
        *(uint *)((this->arm_array_index_array).AllocatorInstance.Data + lVar21) = uVar22;
        lVar18 = lVar18 + -1;
        lVar21 = lVar21 + 4;
      } while (lVar18 != 0);
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 0x200;
    } while ((int)uVar22 < (this->Aiming_Hand_Limbs).ArrayNum);
  }
  this->debug_hands_initialized = true;
  piVar1 = &(this->Elbow_Bone_Transform_Array).ArrayMax;
  piVar2 = &(this->Elbow_Bone_Transform_Array).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Elbow_Bone_Transform_Array).AllocatorInstance,0,piVar1);
  }
  piVar3 = &(this->Hand_Default_Transform_Array).ArrayMax;
  piVar4 = &(this->Hand_Default_Transform_Array).ArrayNum;
  *piVar4 = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Hand_Default_Transform_Array).AllocatorInstance,0,piVar3);
  }
  local_res8 = &(this->Aiming_Hand_Limbs).ArrayNum;
  iVar15 = (this->Aiming_Hand_Limbs).ArrayNum;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar15,&(this->Elbow_Bone_Transform_Array).AllocatorInstance,piVar2,
                      piVar1);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Elbow_Bone_Transform_Array).AllocatorInstance.Data + (longlong)iVar14 * 0x60,
             iVar15);
  iVar15 = *local_res8;
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar15,&(this->Hand_Default_Transform_Array).AllocatorInstance,
                      piVar4,piVar3);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Hand_Default_Transform_Array).AllocatorInstance.Data + (longlong)iVar14 * 0x60,
             iVar15);
  return;
}

// Initialize_AnyThread @ 14d34b720

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
FAnimNode_DragonWeaponArmSolver::Initialize_AnyThread
          (FAnimNode_DragonWeaponArmSolver *this,FAnimationInitializeContext *param_1)

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

// IsValidToEvaluate @ 14d34b940

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
FAnimNode_DragonWeaponArmSolver::IsValidToEvaluate
          (FAnimNode_DragonWeaponArmSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  bVar5 = true;
  if ((this->weapon_handler_component == (UDragonIKWeaponPhysicsComponent *)0x0) &&
     (0 < this->test_counter)) {
    return false;
  }
  uVar8 = 0;
  if (0 < (this->Aiming_Hand_Limbs).ArrayNum) {
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Hand_Array).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      lVar9 = (longlong)(int)uVar8 * 0x10;
      bVar4 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)((this->Hand_Array).AllocatorInstance.Data + lVar9),
                         param_2);
      bVar2 = false;
      if (bVar4) {
        bVar2 = bVar5;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Elbow_Array).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar5 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)((this->Elbow_Array).AllocatorInstance.Data + lVar9),
                         param_2);
      bVar4 = false;
      if (bVar5) {
        bVar4 = bVar2;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Shoulder_Array).ArrayNum) {
        uVar6 = uVar7;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)((this->Shoulder_Array).AllocatorInstance.Data + lVar9),
                         param_2);
      bVar5 = false;
      if (bVar2) {
        bVar5 = bVar4;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->Aiming_Hand_Limbs).ArrayNum);
  }
  return bVar5;
}

// LookAtAroundPoint @ 14d34ec00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_DragonWeaponArmSolver::LookAtAroundPoint
          (FAnimNode_DragonWeaponArmSolver *this,TTransform<double> *__return_storage_ptr__,
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

// LookRotation @ 14d350260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TQuat<double> * __thiscall
FAnimNode_DragonWeaponArmSolver::LookRotation
          (FAnimNode_DragonWeaponArmSolver *this,TQuat<double> *__return_storage_ptr__,
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

// OrthoNormalize @ 14d353ea0

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
FAnimNode_DragonWeaponArmSolver::OrthoNormalize
          (FAnimNode_DragonWeaponArmSolver *this,TVector<double> *param_1,TVector<double> *param_2)

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

// ResizeDebugLocations @ 14d356d70

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_DragonWeaponArmSolver::ResizeDebugLocations
          (FAnimNode_DragonWeaponArmSolver *this,int param_1)

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

// RotateAroundPoint @ 14d3571a0

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
FAnimNode_DragonWeaponArmSolver::RotateAroundPoint
          (FAnimNode_DragonWeaponArmSolver *this,TVector<double> *__return_storage_ptr__,
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

// SmoothApproach @ 14d358d10

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
FAnimNode_DragonWeaponArmSolver::SmoothApproach
          (FAnimNode_DragonWeaponArmSolver *this,TVector<double> *__return_storage_ptr__,
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

// UpdateInternal @ 14d35f4f0

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
FAnimNode_DragonWeaponArmSolver::UpdateInternal
          (FAnimNode_DragonWeaponArmSolver *this,FAnimationUpdateContext *param_1)

{
  USkeletalMeshComponent *this_00;
  double dVar1;
  bool bVar2;
  UWorld *pUVar3;
  FAnimNode_DragonWeaponArmSolver *pFVar4;
  FAnimNode_DragonWeaponArmSolver *pFVar5;
  float fVar6;
  
  FAnimNode_DragonControlBase::UpdateInternal((FAnimNode_DragonControlBase *)this,param_1);
  this_00 = this->owning_skel;
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    pUVar3 = _DAT_000000b0;
    if (_DAT_000000b0 == (UWorld *)0x0) {
      pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)0x0);
    }
    fVar6 = pUVar3->DeltaTimeSeconds;
    pFVar4 = (FAnimNode_DragonWeaponArmSolver *)0x3f0;
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
      pFVar5 = (FAnimNode_DragonWeaponArmSolver *)0x3f0;
    }
    else {
      if (pUVar3 == (UWorld *)0x0) {
        pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
      }
      fVar6 = *(float *)(this->owning_skel->_padding_ + 0x68) * pUVar3->DeltaTimeSeconds;
      pFVar5 = (FAnimNode_DragonWeaponArmSolver *)0x3f0;
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

// getDefaultSpineColliParams @ 14d35ff80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FCollisionQueryParams * __thiscall
FAnimNode_DragonWeaponArmSolver::getDefaultSpineColliParams
          (FAnimNode_DragonWeaponArmSolver *this,FCollisionQueryParams *__return_storage_ptr__,
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

