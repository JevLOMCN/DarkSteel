// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 32

// StaticStruct @ 14d29bce0

UScriptStruct * __cdecl FAnimNode_DragonAimSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonAimSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonAimSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonAimSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonAimSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonAimSolver.OuterSingleton;
}

// ~FAnimNode_DragonAimSolver @ 14d29edb0

void __thiscall
FAnimNode_DragonAimSolver::~FAnimNode_DragonAimSolver(FAnimNode_DragonAimSolver *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->TraceEndList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceStartList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->combined_indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FinalBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Original_AnimatedBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimatedBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_RotDifference).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_LocDifference).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_ChangeTransform_pairs_Obsolete).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->snake_spine_positions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_between_heights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_between_offseted_transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_between_transforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
            ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)
             (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data,
             (this->spine_AnimatedTransform_pairs).ArrayNum);
  pFVar1 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
            ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)
             (this->spine_Transform_pairs).AllocatorInstance.Data,
             (this->spine_Transform_pairs).ArrayNum);
  pFVar1 = (this->spine_Transform_pairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extra_Spine_Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Spine_Indices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_Terrain_Locations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_spine_angles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_spine_alphas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_spine_heights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Full_Spine_Heights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Full_Spine_OriginalLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_vectors_between).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_hit_edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDragonData_HitPairs,int>
            ((FDragonData_HitPairs *)(this->spine_hit_pairs).AllocatorInstance.Data,
             (this->spine_hit_pairs).ArrayNum);
  pFVar1 = (this->spine_hit_pairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_spine_bones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->spine_hit_between).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDragonData_SpineFeetPair,int>
            ((FDragonData_SpineFeetPair *)(this->spine_Feet_pair).AllocatorInstance.Data,
             (this->spine_Feet_pair).ArrayNum);
  pFVar1 = (this->spine_Feet_pair).AllocatorInstance.Data;
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
  pFVar1 = (this->Look_Multiplier_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Look_Multiplier_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Look_Multiplier_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Look_Multiplier_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Look_Multiplier_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Look_Multiplier_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Look_Bending_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Look_Bending_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Look_Bending_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Look_Bending_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Look_Bending_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Look_Bending_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->custom_arm_lengths).CustomArmSizeArray.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Extra_Struct_Elbow_Pole_Array).elbow_offset_array.AllocatorInstance.Data;
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
  pFVar1 = (this->dragon_bone_data).ThighBones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->dragon_bone_data).SecondKneeBones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->dragon_bone_data).KneeBones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->dragon_bone_data).FeetBones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDragonData_FootData,int>
            ((FDragonData_FootData *)(this->dragon_input_data).FeetBones.AllocatorInstance.Data,
             (this->dragon_input_data).FeetBones.ArrayNum);
  pFVar1 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bone_Structure_Precise).Bone_Input.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d2a0250

FAnimNode_DragonAimSolver * __thiscall
FAnimNode_DragonAimSolver::operator=
          (FAnimNode_DragonAimSolver *this,FAnimNode_DragonAimSolver *param_1)

{
  int *piVar1;
  TArray<FDragonData_ArmsData,TSizedDefaultAllocator<32>_> *pTVar2;
  FDragonData_Overrided_Location_Data *pFVar3;
  FDragonData_CustomArmLengths *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  FHitResult *pFVar14;
  FHitResult *pFVar15;
  longlong lVar16;
  
  FAnimNode_DragonControlBase::operator=
            ((FAnimNode_DragonControlBase *)this,(FAnimNode_DragonControlBase *)param_1);
  this->Use_FName_Bone_Input = param_1->Use_FName_Bone_Input;
  (this->EndSplineBone).BoneName = (param_1->EndSplineBone).BoneName;
  uVar5 = *(undefined4 *)&(param_1->EndSplineBone).field_0x8;
  *(uint *)&(this->EndSplineBone).field_0x8 =
       (uVar5 ^ *(uint *)&(this->EndSplineBone).field_0x8) & 0x80000000 ^ uVar5;
  uVar6 = *(undefined4 *)&(param_1->EndSplineBone).field_0x8;
  *(uint *)&(this->EndSplineBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar6,0,0x1f)) & 0x7fffffffU ^ uVar6;
  (this->EndSplineBone).CachedCompactPoseIndex = (param_1->EndSplineBone).CachedCompactPoseIndex;
  (this->StartSplineBone).BoneName = (param_1->StartSplineBone).BoneName;
  uVar5 = *(undefined4 *)&(param_1->StartSplineBone).field_0x8;
  *(uint *)&(this->StartSplineBone).field_0x8 =
       (uVar5 ^ *(uint *)&(this->StartSplineBone).field_0x8) & 0x80000000 ^ uVar5;
  uVar6 = *(undefined4 *)&(param_1->StartSplineBone).field_0x8;
  *(uint *)&(this->StartSplineBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar6,0,0x1f)) & 0x7fffffffU ^ uVar6;
  (this->StartSplineBone).CachedCompactPoseIndex = (param_1->StartSplineBone).CachedCompactPoseIndex
  ;
  this->Name_EndSpline_Bone = param_1->Name_EndSpline_Bone;
  this->Name_StartSpline_Bone = param_1->Name_StartSpline_Bone;
  dVar10 = (param_1->LookAtLocation).Rotation.XY.m128d_f64[1];
  (this->LookAtLocation).Rotation.XY.m128d_f64[0] =
       (param_1->LookAtLocation).Rotation.XY.m128d_f64[0];
  (this->LookAtLocation).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation).Rotation.ZW.m128d_f64[1];
  (this->LookAtLocation).Rotation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation).Rotation.ZW.m128d_f64[0];
  (this->LookAtLocation).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation).Translation.XY.m128d_f64[1];
  (this->LookAtLocation).Translation.XY.m128d_f64[0] =
       (param_1->LookAtLocation).Translation.XY.m128d_f64[0];
  (this->LookAtLocation).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation).Translation.ZW.m128d_f64[1];
  (this->LookAtLocation).Translation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation).Translation.ZW.m128d_f64[0];
  (this->LookAtLocation).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation).Scale3D.XY.m128d_f64[1];
  (this->LookAtLocation).Scale3D.XY.m128d_f64[0] = (param_1->LookAtLocation).Scale3D.XY.m128d_f64[0]
  ;
  (this->LookAtLocation).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation).Scale3D.ZW.m128d_f64[1];
  (this->LookAtLocation).Scale3D.ZW.m128d_f64[0] = (param_1->LookAtLocation).Scale3D.ZW.m128d_f64[0]
  ;
  (this->LookAtLocation).Scale3D.ZW.m128d_f64[1] = dVar10;
  this->Use_Advanced_Input_Mode = param_1->Use_Advanced_Input_Mode;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Bone_Structure_Precise).Bone_Input,
             &(param_1->Bone_Structure_Precise).Bone_Input);
  FDragonData_MultiInput::operator=(&this->dragon_input_data,&param_1->dragon_input_data);
  FDragonData_BoneStruct::operator=(&this->dragon_bone_data,&param_1->dragon_bone_data);
  this->PelvisBoneName = param_1->PelvisBoneName;
  this->SpineBoneName = param_1->SpineBoneName;
  this->test_counter = param_1->test_counter;
  this->trace_draw_counter = param_1->trace_draw_counter;
  this->Num_Valid_Spines = param_1->Num_Valid_Spines;
  this->component_scale = param_1->component_scale;
  this->atleast_one_hit = param_1->atleast_one_hit;
  this->feet_is_empty = param_1->feet_is_empty;
  pTVar2 = &this->Aiming_Hand_Limbs;
  if (pTVar2 != &param_1->Aiming_Hand_Limbs) {
    iVar7 = (param_1->Aiming_Hand_Limbs).ArrayNum;
    piVar1 = &(this->Aiming_Hand_Limbs).ArrayMax;
    pFVar9 = (param_1->Aiming_Hand_Limbs).AllocatorInstance.Data;
    (this->Aiming_Hand_Limbs).ArrayNum = iVar7;
    if ((iVar7 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x200,8,iVar7,*piVar1,&pTVar2->AllocatorInstance,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar9,(longlong)iVar7 << 9);
      }
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Last_Shoulder_Angles,&param_1->Last_Shoulder_Angles);
  pFVar3 = &this->Arm_TargetLocation_Overrides;
  if (pFVar3 != &param_1->Arm_TargetLocation_Overrides) {
    iVar7 = (param_1->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum;
    piVar1 = &(this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayMax;
    pFVar9 = (param_1->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.AllocatorInstance.
             Data;
    iVar8 = *piVar1;
    (this->Arm_TargetLocation_Overrides).Arm_TargetLocation_Overrides.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar7,iVar8,(ForAnyElementType *)pFVar3,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pFVar3->Arm_TargetLocation_Overrides).AllocatorInstance.Data,pFVar9,
               (longlong)iVar7 << 7);
      }
    }
  }
  this->Use_Separate_Targets = param_1->Use_Separate_Targets;
  this->Override_Hand_Rotation = param_1->Override_Hand_Rotation;
  this->enable_head_aim = param_1->enable_head_aim;
  this->bAllowHandStretching = param_1->bAllowHandStretching;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Extra_Struct_Elbow_Pole_Array).elbow_offset_array,
             &(param_1->Extra_Struct_Elbow_Pole_Array).elbow_offset_array);
  this->reach_instead = param_1->reach_instead;
  pFVar4 = &this->custom_arm_lengths;
  this->Aggregate_Hand_Body = param_1->Aggregate_Hand_Body;
  this->Let_Arm_Twist_With_Hand = param_1->Let_Arm_Twist_With_Hand;
  this->pole_system_input = param_1->pole_system_input;
  this->arm_twist_axis = param_1->arm_twist_axis;
  this->hand_rotation_method = param_1->hand_rotation_method;
  this->Override_Head_Rotation = param_1->Override_Head_Rotation;
  this->Enable_Hand_Interpolation = param_1->Enable_Hand_Interpolation;
  this->Hand_Interpolation_Speed = param_1->Hand_Interpolation_Speed;
  if (pFVar4 != &param_1->custom_arm_lengths) {
    iVar7 = (param_1->custom_arm_lengths).CustomArmSizeArray.ArrayNum;
    piVar1 = &(this->custom_arm_lengths).CustomArmSizeArray.ArrayMax;
    pFVar9 = (param_1->custom_arm_lengths).CustomArmSizeArray.AllocatorInstance.Data;
    iVar8 = *piVar1;
    (this->custom_arm_lengths).CustomArmSizeArray.ArrayNum = iVar7;
    if ((iVar7 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar7,iVar8,(ForAnyElementType *)pFVar4,iVar7,piVar1);
      if (iVar7 != 0) {
        memcpy((pFVar4->CustomArmSizeArray).AllocatorInstance.Data,pFVar9,(longlong)iVar7 * 0xc);
      }
    }
  }
  this->arm_transform_space = param_1->arm_transform_space;
  this->nsew_pole_method = param_1->nsew_pole_method;
  this->up_arm_twist_technique = param_1->up_arm_twist_technique;
  this->Main_Arm_Index = param_1->Main_Arm_Index;
  dVar10 = (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_Default_Transform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Translation.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Main_Hand_New_Transform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Rotation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Translation.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.XY.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Head_Orig_Transform).Scale3D.ZW.m128d_f64[0];
  (this->Head_Orig_Transform).Scale3D.ZW.m128d_f64[1] = dVar10;
  this->Lookat_Radius = param_1->Lookat_Radius;
  dVar10 = (param_1->Inner_Body_Clamp).Yaw;
  (this->Inner_Body_Clamp).Pitch = (param_1->Inner_Body_Clamp).Pitch;
  (this->Inner_Body_Clamp).Yaw = dVar10;
  (this->Inner_Body_Clamp).Roll = (param_1->Inner_Body_Clamp).Roll;
  this->Lookat_Clamp = param_1->Lookat_Clamp;
  this->Limbs_Clamp = param_1->Limbs_Clamp;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array,
             &(param_1->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array);
  dVar10 = (param_1->Extra_Aiming_Rotation_Offset).Yaw;
  (this->Extra_Aiming_Rotation_Offset).Pitch = (param_1->Extra_Aiming_Rotation_Offset).Pitch;
  (this->Extra_Aiming_Rotation_Offset).Yaw = dVar10;
  (this->Extra_Aiming_Rotation_Offset).Roll = (param_1->Extra_Aiming_Rotation_Offset).Roll;
  this->Downward_Dip_Multiplier = param_1->Downward_Dip_Multiplier;
  this->Inverted_Dip_Multiplier = param_1->Inverted_Dip_Multiplier;
  this->Vertical_Dip_Treshold = param_1->Vertical_Dip_Treshold;
  this->Side_Move_Multiplier = param_1->Side_Move_Multiplier;
  this->Side_Down_Multiplier = param_1->Side_Down_Multiplier;
  this->Up_Rot_Clamp = param_1->Up_Rot_Clamp;
  dVar10 = (param_1->Verticle_Range_Angles).field0_0x0._s_0.Y;
  (this->Verticle_Range_Angles).field0_0x0._s_0.X =
       (param_1->Verticle_Range_Angles).field0_0x0._s_0.X;
  (this->Verticle_Range_Angles).field0_0x0._s_0.Y = dVar10;
  dVar10 = (param_1->Horizontal_Range_Angles).field0_0x0._s_0.Y;
  (this->Horizontal_Range_Angles).field0_0x0._s_0.X =
       (param_1->Horizontal_Range_Angles).field0_0x0._s_0.X;
  (this->Horizontal_Range_Angles).field0_0x0._s_0.Y = dVar10;
  this->Aim_Frontal_Offset = param_1->Aim_Frontal_Offset;
  FRuntimeFloatCurve::operator=(&this->Look_Bending_Curve,&param_1->Look_Bending_Curve);
  FRuntimeFloatCurve::operator=(&this->Look_Multiplier_Curve,&param_1->Look_Multiplier_Curve);
  lVar16 = 2;
  this->look_transform_space = param_1->look_transform_space;
  this->Lock_Legs = param_1->Lock_Legs;
  this->ignore_elbow_modification = param_1->ignore_elbow_modification;
  this->ignore_separate_hand_solving = param_1->ignore_separate_hand_solving;
  this->Use_Natural_Method = param_1->Use_Natural_Method;
  this->Head_Use_Separate_Clamp = param_1->Head_Use_Separate_Clamp;
  this->Is_Head_Accurate = param_1->Is_Head_Accurate;
  this->automatic_leg_make = param_1->automatic_leg_make;
  this->done_leg_make = param_1->done_leg_make;
  this->enable_solver = param_1->enable_solver;
  this->Work_Outside_PIE = param_1->Work_Outside_PIE;
  this->Use_Physics_Adaptation = param_1->Use_Physics_Adaptation;
  this->physics_root_reference = param_1->physics_root_reference;
  this->Adaptive_Terrain_Tail = param_1->Adaptive_Terrain_Tail;
  (this->Trace_Channel).Value = (param_1->Trace_Channel).Value;
  this->Trace_Up_Height = param_1->Trace_Up_Height;
  this->Trace_Down_Height = param_1->Trace_Down_Height;
  pFVar14 = &this->TTS_Aim_Hit;
  pFVar15 = &param_1->TTS_Aim_Hit;
  do {
    fVar12 = pFVar15->Time;
    fVar13 = pFVar15->Distance;
    iVar7 = pFVar15->_padding_;
    pFVar14->FaceIndex = pFVar15->FaceIndex;
    pFVar14->Time = fVar12;
    pFVar14->Distance = fVar13;
    pFVar14->_padding_ = iVar7;
    uVar11 = *(undefined8 *)&(pFVar15->Location).field_0x8;
    *(undefined8 *)&pFVar14->Location = *(undefined8 *)&pFVar15->Location;
    *(undefined8 *)&(pFVar14->Location).field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&pFVar15->ImpactPoint;
    *(undefined8 *)&(pFVar14->Location).field_0x10 = *(undefined8 *)&(pFVar15->Location).field_0x10;
    *(undefined8 *)&pFVar14->ImpactPoint = uVar11;
    uVar11 = *(undefined8 *)&(pFVar15->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar14->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar15->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar14->ImpactPoint).field_0x10 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar15->Normal).field_0x8;
    *(undefined8 *)&pFVar14->Normal = *(undefined8 *)&pFVar15->Normal;
    *(undefined8 *)&(pFVar14->Normal).field_0x8 = uVar11;
    uVar11 = *(undefined8 *)&pFVar15->ImpactNormal;
    *(undefined8 *)&(pFVar14->Normal).field_0x10 = *(undefined8 *)&(pFVar15->Normal).field_0x10;
    *(undefined8 *)&pFVar14->ImpactNormal = uVar11;
    uVar11 = *(undefined8 *)&(pFVar15->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar14->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar15->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar14->ImpactNormal).field_0x10 = uVar11;
    uVar11 = *(undefined8 *)&(pFVar15->TraceStart).field_0x8;
    *(undefined8 *)&pFVar14->TraceStart = *(undefined8 *)&pFVar15->TraceStart;
    *(undefined8 *)&(pFVar14->TraceStart).field_0x8 = uVar11;
    lVar16 = lVar16 + -1;
    pFVar14 = (FHitResult *)&(pFVar14->TraceStart).field_0x10;
    pFVar15 = (FHitResult *)&(pFVar15->TraceStart).field_0x10;
  } while (lVar16 != 0);
  this->TTS_Height = param_1->TTS_Height;
  this->loc_interp_type = param_1->loc_interp_type;
  this->delta_seconds_saved = param_1->delta_seconds_saved;
  this->is_focus_debugtarget = param_1->is_focus_debugtarget;
  this->Enable_Interpolation = param_1->Enable_Interpolation;
  this->Interpolation_Speed = param_1->Interpolation_Speed;
  this->Toggle_Interpolation_Speed = param_1->Toggle_Interpolation_Speed;
  this->toggle_alpha = param_1->toggle_alpha;
  this->hand_toggle_alpha = param_1->hand_toggle_alpha;
  dVar10 = (param_1->Lerped_LookatLocation).field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       (param_1->Lerped_LookatLocation).field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = dVar10;
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
  dVar10 = (param_1->LookAt_Axis).field0_0x0._s_0.Y;
  (this->LookAt_Axis).field0_0x0._s_0.X = (param_1->LookAt_Axis).field0_0x0._s_0.X;
  (this->LookAt_Axis).field0_0x0._s_0.Y = dVar10;
  (this->LookAt_Axis).field0_0x0._s_0.Z = (param_1->LookAt_Axis).field0_0x0._s_0.Z;
  dVar10 = (param_1->Upward_Axis).field0_0x0._s_0.Y;
  (this->Upward_Axis).field0_0x0._s_0.X = (param_1->Upward_Axis).field0_0x0._s_0.X;
  (this->Upward_Axis).field0_0x0._s_0.Y = dVar10;
  (this->Upward_Axis).field0_0x0._s_0.Z = (param_1->Upward_Axis).field0_0x0._s_0.Z;
  dVar10 = (param_1->TargetOffset).field0_0x0._s_0.Y;
  (this->TargetOffset).field0_0x0._s_0.X = (param_1->TargetOffset).field0_0x0._s_0.X;
  (this->TargetOffset).field0_0x0._s_0.Y = dVar10;
  (this->TargetOffset).field0_0x0._s_0.Z = (param_1->TargetOffset).field0_0x0._s_0.Z;
  this->Use_Reference_Forward_Axis = param_1->Use_Reference_Forward_Axis;
  dVar10 = (param_1->Reference_Constant_Forward_Axis).field0_0x0._s_0.Y;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.X =
       (param_1->Reference_Constant_Forward_Axis).field0_0x0._s_0.X;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Y = dVar10;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Z =
       (param_1->Reference_Constant_Forward_Axis).field0_0x0._s_0.Z;
  dVar10 = (param_1->Reference_Constant_Forward_Temp).field0_0x0._s_0.Y;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.X =
       (param_1->Reference_Constant_Forward_Temp).field0_0x0._s_0.X;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.Y = dVar10;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.Z =
       (param_1->Reference_Constant_Forward_Temp).field0_0x0._s_0.Z;
  dVar10 = (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Rotation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Translation.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.XY.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0] =
       (param_1->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[0];
  (this->LookAtLocation_Saved).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Limb_Rotation_Offset).Yaw;
  (this->Limb_Rotation_Offset).Pitch = (param_1->Limb_Rotation_Offset).Pitch;
  (this->Limb_Rotation_Offset).Yaw = dVar10;
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
  this->DisplayLineTrace = param_1->DisplayLineTrace;
  dVar10 = (param_1->Debug_LookAtLocation).Rotation.XY.m128d_f64[1];
  (this->Debug_LookAtLocation).Rotation.XY.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Rotation.XY.m128d_f64[0];
  (this->Debug_LookAtLocation).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Debug_LookAtLocation).Rotation.ZW.m128d_f64[1];
  (this->Debug_LookAtLocation).Rotation.ZW.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Rotation.ZW.m128d_f64[0];
  (this->Debug_LookAtLocation).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Debug_LookAtLocation).Translation.XY.m128d_f64[1];
  (this->Debug_LookAtLocation).Translation.XY.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Translation.XY.m128d_f64[0];
  (this->Debug_LookAtLocation).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Debug_LookAtLocation).Translation.ZW.m128d_f64[1];
  (this->Debug_LookAtLocation).Translation.ZW.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Translation.ZW.m128d_f64[0];
  (this->Debug_LookAtLocation).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Debug_LookAtLocation).Scale3D.XY.m128d_f64[1];
  (this->Debug_LookAtLocation).Scale3D.XY.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Scale3D.XY.m128d_f64[0];
  (this->Debug_LookAtLocation).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[1];
  (this->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[0] =
       (param_1->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[0];
  (this->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[1] = dVar10;
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
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_Feet_pair,&param_1->spine_Feet_pair);
  TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_hit_between,&param_1->spine_hit_between);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_bones,&param_1->Total_spine_bones);
  TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_hit_pairs,&param_1->spine_hit_pairs);
  TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_hit_edges,&param_1->spine_hit_edges);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_vectors_between,&param_1->spine_vectors_between);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Full_Spine_OriginalLocations,&param_1->Full_Spine_OriginalLocations);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Full_Spine_Heights,&param_1->Full_Spine_Heights);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_heights,&param_1->Total_spine_heights);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_alphas,&param_1->Total_spine_alphas);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_angles,&param_1->Total_spine_angles);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_Terrain_Locations,&param_1->Total_Terrain_Locations);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->Spine_Indices,&param_1->Spine_Indices);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->Extra_Spine_Indices,&param_1->Extra_Spine_Indices);
  TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_Transform_pairs,&param_1->spine_Transform_pairs);
  TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_AnimatedTransform_pairs,&param_1->spine_AnimatedTransform_pairs);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_between_transforms,&param_1->spine_between_transforms);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_between_offseted_transforms,&param_1->spine_between_offseted_transforms);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_between_heights,&param_1->spine_between_heights);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->snake_spine_positions,&param_1->snake_spine_positions);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_ChangeTransform_pairs_Obsolete,
             &param_1->spine_ChangeTransform_pairs_Obsolete);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_LocDifference,&param_1->spine_LocDifference);
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_RotDifference,&param_1->spine_RotDifference);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->RestBoneTransforms,&param_1->RestBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->AnimatedBoneTransforms,&param_1->AnimatedBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->Original_AnimatedBoneTransforms,&param_1->Original_AnimatedBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->FinalBoneTransforms,&param_1->FinalBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTransforms,&param_1->BoneTransforms);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->combined_indices,&param_1->combined_indices);
  this->midpoint_height = param_1->midpoint_height;
  this->maximum_spine_length = param_1->maximum_spine_length;
  this->angle_data = param_1->angle_data;
  dVar10 = (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  this->zero_transform_set = param_1->zero_transform_set;
  dVar10 = (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->Last_ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar10;
  this->spine_median_result = param_1->spine_median_result;
  this->Use_FeetTips = param_1->Use_FeetTips;
  this->saved_pose = param_1->saved_pose;
  this->owning_skel = param_1->owning_skel;
  dVar10 = (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar10;
  dVar10 = (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar10;
  dVar10 = (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar10;
  this->tot_len_of_bones = param_1->tot_len_of_bones;
  dVar10 = (param_1->HeadRotation_Temp).Yaw;
  (this->HeadRotation_Temp).Pitch = (param_1->HeadRotation_Temp).Pitch;
  (this->HeadRotation_Temp).Yaw = dVar10;
  (this->HeadRotation_Temp).Roll = (param_1->HeadRotation_Temp).Roll;
  this->solve_should_fail = param_1->solve_should_fail;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceStartList,&param_1->TraceStartList);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceEndList,&param_1->TraceEndList);
  this->debug_hands_initialized = param_1->debug_hands_initialized;
  return this;
}

// FAnimNode_DragonAimSolver @ 14d2b5ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAnimNode_DragonAimSolver * __thiscall
FAnimNode_DragonAimSolver::FAnimNode_DragonAimSolver(FAnimNode_DragonAimSolver *this)

{
  undefined1 *puVar1;
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
  double dVar21;
  __m128 _Var22;
  double dVar23;
  undefined8 uVar24;
  FRichCurve *pFVar25;
  undefined1 in_R9B;
  float fVar26;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffff98;
  FKeyHandle FVar27;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->Use_FName_Bone_Input = false;
  this->_padding_ = (longlong)&___7FAnimNode_DragonAimSolver__6B_;
  (this->EndSplineBone).BoneName.ComparisonIndex = 0;
  (this->EndSplineBone).BoneName.Number = 0;
  puVar1 = &(this->EndSplineBone).field_0x8;
  (this->EndSplineBone).BoneIndex = -1;
  (this->EndSplineBone).bUseSkeletonIndex = 0;
  (this->EndSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->StartSplineBone).BoneName.ComparisonIndex = 0;
  (this->StartSplineBone).BoneName.Number = 0;
  puVar1 = &(this->StartSplineBone).field_0x8;
  (this->StartSplineBone).BoneIndex = -1;
  (this->StartSplineBone).bUseSkeletonIndex = 0;
  (this->StartSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Name_EndSpline_Bone).ComparisonIndex = 0;
  (this->Name_EndSpline_Bone).Number = 0;
  (this->Name_StartSpline_Bone).ComparisonIndex = 0;
  (this->Name_StartSpline_Bone).Number = 0;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar26;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Rotation.ZW.m128d_f64 = auVar4;
  _Var22 = GlobalVectorConstants::FloatZero;
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Translation.XY.m128d_f64 = auVar5;
  dVar21 = (double)_Var22.m128_f32[3];
  auVar6._8_4_ = SUB84(dVar21,0);
  auVar6._0_8_ = (double)_Var22.m128_f32[2];
  auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Translation.ZW.m128d_f64 = auVar6;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar26;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->LookAtLocation).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Bone_Structure_Precise).Bone_Input.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bone_Structure_Precise).Bone_Input.ArrayNum = 0;
  (this->Bone_Structure_Precise).Bone_Input.ArrayMax = 0;
  (this->dragon_input_data).Start_Spine.ComparisonIndex = 0;
  (this->dragon_input_data).Start_Spine.Number = 0;
  (this->dragon_input_data).Pelvis.ComparisonIndex = 0;
  (this->dragon_input_data).Pelvis.Number = 0;
  (this->dragon_input_data).FeetBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_input_data).FeetBones.ArrayNum = 0;
  (this->dragon_input_data).FeetBones.ArrayMax = 0;
  this->Use_Advanced_Input_Mode = false;
  (this->dragon_bone_data).Start_Spine.BoneName.ComparisonIndex = 0;
  (this->dragon_bone_data).Start_Spine.BoneName.Number = 0;
  puVar1 = &(this->dragon_bone_data).Start_Spine.field_0x8;
  (this->dragon_bone_data).Start_Spine.BoneIndex = -1;
  (this->dragon_bone_data).Start_Spine.bUseSkeletonIndex = 0;
  (this->dragon_bone_data).Start_Spine.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->dragon_bone_data).Pelvis.BoneName.ComparisonIndex = 0;
  (this->dragon_bone_data).Pelvis.BoneName.Number = 0;
  puVar1 = &(this->dragon_bone_data).Pelvis.field_0x8;
  (this->dragon_bone_data).Pelvis.BoneIndex = -1;
  (this->dragon_bone_data).Pelvis.bUseSkeletonIndex = 0;
  (this->dragon_bone_data).Pelvis.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->dragon_bone_data).Head_Bone.BoneName.ComparisonIndex = 0;
  (this->dragon_bone_data).Head_Bone.BoneName.Number = 0;
  puVar1 = &(this->dragon_bone_data).Head_Bone.field_0x8;
  (this->dragon_bone_data).Head_Bone.BoneIndex = -1;
  (this->dragon_bone_data).Head_Bone.bUseSkeletonIndex = 0;
  (this->dragon_bone_data).Head_Bone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->dragon_bone_data).LookLimit_Bone.BoneName.ComparisonIndex = 0;
  (this->dragon_bone_data).LookLimit_Bone.BoneName.Number = 0;
  puVar1 = &(this->dragon_bone_data).LookLimit_Bone.field_0x8;
  (this->dragon_bone_data).LookLimit_Bone.BoneIndex = -1;
  (this->dragon_bone_data).LookLimit_Bone.bUseSkeletonIndex = 0;
  (this->dragon_bone_data).LookLimit_Bone.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff
  ;
  (this->dragon_bone_data).FeetBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_bone_data).FeetBones.ArrayNum = 0;
  (this->dragon_bone_data).FeetBones.ArrayMax = 0;
  (this->dragon_bone_data).KneeBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_bone_data).KneeBones.ArrayNum = 0;
  (this->dragon_bone_data).KneeBones.ArrayMax = 0;
  (this->dragon_bone_data).SecondKneeBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_bone_data).SecondKneeBones.ArrayNum = 0;
  (this->dragon_bone_data).SecondKneeBones.ArrayMax = 0;
  (this->dragon_bone_data).ThighBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_bone_data).ThighBones.ArrayNum = 0;
  (this->dragon_bone_data).ThighBones.ArrayMax = 0;
  (this->PelvisBoneName).ComparisonIndex = 0;
  (this->PelvisBoneName).Number = 0;
  (this->SpineBoneName).ComparisonIndex = 0;
  (this->SpineBoneName).Number = 0;
  this->test_counter = 0;
  this->trace_draw_counter = 0;
  this->Num_Valid_Spines = 0;
  this->component_scale = 1.0;
  this->atleast_one_hit = false;
  this->feet_is_empty = true;
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
  this->Use_Separate_Targets = false;
  this->Override_Hand_Rotation = false;
  this->enable_head_aim = true;
  this->bAllowHandStretching = false;
  (this->Extra_Struct_Elbow_Pole_Array).elbow_offset_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Extra_Struct_Elbow_Pole_Array).elbow_offset_array.ArrayNum = 0;
  (this->Extra_Struct_Elbow_Pole_Array).elbow_offset_array.ArrayMax = 0;
  this->reach_instead = false;
  this->Aggregate_Hand_Body = false;
  this->Let_Arm_Twist_With_Hand = true;
  this->pole_system_input = ENUM_SinglePoleSystem;
  this->arm_twist_axis = ENUM_PoseAxisTwist;
  this->hand_rotation_method = ENUM_AdditiveRotation;
  this->Override_Head_Rotation = false;
  this->Enable_Hand_Interpolation = true;
  this->Hand_Interpolation_Speed = 25.0;
  (this->custom_arm_lengths).CustomArmSizeArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->custom_arm_lengths).CustomArmSizeArray.ArrayNum = 0;
  (this->custom_arm_lengths).CustomArmSizeArray.ArrayMax = 0;
  this->arm_transform_space = ENUM_WorldSpaceSystem;
  this->nsew_pole_method = false;
  this->up_arm_twist_technique = false;
  this->Main_Arm_Index = -1;
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
  _Var22 = GlobalVectorConstants::Float0001;
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Rotation.XY.m128d_f64 = auVar9;
  dVar21 = (double)_Var22.m128_f32[3];
  auVar10._8_4_ = SUB84(dVar21,0);
  auVar10._0_8_ = (double)_Var22.m128_f32[2];
  auVar10._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Rotation.ZW.m128d_f64 = auVar10;
  fVar26 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar26;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Translation.ZW.m128d_f64 = auVar12;
  _Var22 = GlobalVectorConstants::Float1110;
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Scale3D.XY.m128d_f64 = auVar13;
  dVar21 = (double)_Var22.m128_f32[3];
  auVar14._8_4_ = SUB84(dVar21,0);
  auVar14._0_8_ = (double)_Var22.m128_f32[2];
  auVar14._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->Head_Orig_Transform).Scale3D.ZW.m128d_f64 = auVar14;
  (this->Inner_Body_Clamp).Pitch = 0.0;
  (this->Inner_Body_Clamp).Yaw = 0.0;
  (this->Inner_Body_Clamp).Roll = 0.0;
  (this->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array.ArrayNum = 0;
  (this->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array.ArrayMax = 0;
  (this->Per_Limbs_Clamp_Array).Custom_Limb_Clamp_Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  this->Lookat_Radius = 110.0;
  this->Lookat_Clamp = 70.0;
  this->Limbs_Clamp = 70.0;
  dVar21 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Extra_Aiming_Rotation_Offset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Extra_Aiming_Rotation_Offset).Yaw = dVar21;
  (this->Extra_Aiming_Rotation_Offset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Verticle_Range_Angles).field0_0x0._s_0.X = -75.0;
  (this->Verticle_Range_Angles).field0_0x0._s_0.Y = 75.0;
  (this->Horizontal_Range_Angles).field0_0x0._s_0.X = -90.0;
  (this->Horizontal_Range_Angles).field0_0x0._s_0.Y = 90.0;
  this->Downward_Dip_Multiplier = -0.01;
  this->Inverted_Dip_Multiplier = -0.01;
  this->Vertical_Dip_Treshold = 1.0;
  this->Side_Move_Multiplier = 0.01;
  this->Side_Down_Multiplier = -0.01;
  this->Up_Rot_Clamp = 0.5;
  this->Aim_Frontal_Offset = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Look_Bending_Curve);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Look_Multiplier_Curve);
  this->look_transform_space = ENUM_WorldSpaceSystem;
  this->Lock_Legs = true;
  this->ignore_elbow_modification = false;
  this->ignore_separate_hand_solving = false;
  this->Use_Natural_Method = true;
  this->Head_Use_Separate_Clamp = true;
  this->Is_Head_Accurate = true;
  this->automatic_leg_make = false;
  this->done_leg_make = false;
  this->enable_solver = true;
  this->Work_Outside_PIE = false;
  this->Use_Physics_Adaptation = false;
  ::FName::FName(&this->physics_root_reference,"pelvis");
  this->Adaptive_Terrain_Tail = false;
  this->Trace_Channel = '\0';
  this->Trace_Up_Height = 250.0;
  this->Trace_Down_Height = 250.0;
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
  this->Enable_Interpolation = true;
  this->Interpolation_Speed = 15.0;
  this->Toggle_Interpolation_Speed = 5.0;
  this->toggle_alpha = 0.0;
  this->hand_toggle_alpha = 0.0;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar24;
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
  (this->TargetOffset).field0_0x0._s_0.X = 0.0;
  (this->TargetOffset).field0_0x0._s_0.Y = 0.0;
  (this->TargetOffset).field0_0x0._s_0.Z = 0.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.X = 0.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Y = 1.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Z = 0.0;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.X = 0.0;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.Y = 1.0;
  (this->Reference_Constant_Forward_Temp).field0_0x0._s_0.Z = 0.0;
  this->Use_Reference_Forward_Axis = true;
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
  this->Max_Range_Limit_Lerp = 0.0;
  (this->Hand_Default_Transform_Array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hand_Default_Transform_Array).ArrayNum = 0;
  (this->Hand_Default_Transform_Array).ArrayMax = 0;
  this->Smooth_Factor = 10.0;
  this->every_foot_dont_have_child = false;
  this->DisplayLineTrace = true;
  fVar26 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar26;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Rotation.ZW.m128d_f64 = auVar16;
  _Var22 = GlobalVectorConstants::FloatZero;
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Translation.XY.m128d_f64 = auVar17;
  dVar21 = (double)_Var22.m128_f32[3];
  auVar18._8_4_ = SUB84(dVar21,0);
  auVar18._0_8_ = (double)_Var22.m128_f32[2];
  auVar18._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Translation.ZW.m128d_f64 = auVar18;
  fVar26 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar26;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->Debug_LookAtLocation).Scale3D.ZW.m128d_f64 = auVar20;
  (this->Debug_Hand_Locations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Debug_Hand_Locations).ArrayNum = 0;
  (this->Debug_Hand_Locations).ArrayMax = 0;
  this->Root_Roll_Value = 0.0;
  this->Root_Pitch_Value = 0.0;
  (this->spine_Feet_pair).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_Feet_pair).ArrayNum = 0;
  (this->spine_Feet_pair).ArrayMax = 0;
  (this->spine_hit_between).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_hit_between).ArrayNum = 0;
  (this->spine_hit_between).ArrayMax = 0;
  (this->Total_spine_bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_bones).ArrayNum = 0;
  (this->Total_spine_bones).ArrayMax = 0;
  (this->spine_hit_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_hit_pairs).ArrayNum = 0;
  (this->spine_hit_pairs).ArrayMax = 0;
  (this->spine_hit_edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_hit_edges).ArrayNum = 0;
  (this->spine_hit_edges).ArrayMax = 0;
  (this->spine_vectors_between).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_vectors_between).ArrayNum = 0;
  (this->spine_vectors_between).ArrayMax = 0;
  (this->Full_Spine_OriginalLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Full_Spine_OriginalLocations).ArrayNum = 0;
  (this->Full_Spine_OriginalLocations).ArrayMax = 0;
  (this->Full_Spine_Heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Full_Spine_Heights).ArrayNum = 0;
  (this->Full_Spine_Heights).ArrayMax = 0;
  (this->Total_spine_heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_heights).ArrayNum = 0;
  (this->Total_spine_heights).ArrayMax = 0;
  (this->Total_spine_alphas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_alphas).ArrayNum = 0;
  (this->Total_spine_alphas).ArrayMax = 0;
  (this->Total_spine_angles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_angles).ArrayNum = 0;
  (this->Total_spine_angles).ArrayMax = 0;
  (this->Total_Terrain_Locations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_Terrain_Locations).ArrayNum = 0;
  (this->Total_Terrain_Locations).ArrayMax = 0;
  (this->Spine_Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spine_Indices).ArrayNum = 0;
  (this->Spine_Indices).ArrayMax = 0;
  (this->Extra_Spine_Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Extra_Spine_Indices).ArrayNum = 0;
  (this->Extra_Spine_Indices).ArrayMax = 0;
  (this->spine_Transform_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_Transform_pairs).ArrayNum = 0;
  (this->spine_Transform_pairs).ArrayMax = 0;
  (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_AnimatedTransform_pairs).ArrayNum = 0;
  (this->spine_AnimatedTransform_pairs).ArrayMax = 0;
  (this->spine_between_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_between_transforms).ArrayNum = 0;
  (this->spine_between_transforms).ArrayMax = 0;
  (this->spine_between_offseted_transforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_between_offseted_transforms).ArrayNum = 0;
  (this->spine_between_offseted_transforms).ArrayMax = 0;
  (this->spine_between_heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_between_heights).ArrayNum = 0;
  (this->spine_between_heights).ArrayMax = 0;
  (this->snake_spine_positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->snake_spine_positions).ArrayNum = 0;
  (this->snake_spine_positions).ArrayMax = 0;
  (this->spine_ChangeTransform_pairs_Obsolete).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->spine_ChangeTransform_pairs_Obsolete).ArrayNum = 0;
  (this->spine_ChangeTransform_pairs_Obsolete).ArrayMax = 0;
  (this->spine_LocDifference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_LocDifference).ArrayNum = 0;
  (this->spine_LocDifference).ArrayMax = 0;
  (this->spine_RotDifference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_RotDifference).ArrayNum = 0;
  (this->spine_RotDifference).ArrayMax = 0;
  (this->RestBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestBoneTransforms).ArrayNum = 0;
  (this->RestBoneTransforms).ArrayMax = 0;
  (this->AnimatedBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimatedBoneTransforms).ArrayNum = 0;
  (this->AnimatedBoneTransforms).ArrayMax = 0;
  (this->Original_AnimatedBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Original_AnimatedBoneTransforms).ArrayNum = 0;
  (this->Original_AnimatedBoneTransforms).ArrayMax = 0;
  (this->FinalBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalBoneTransforms).ArrayNum = 0;
  (this->FinalBoneTransforms).ArrayMax = 0;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  (this->combined_indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->combined_indices).ArrayNum = 0;
  (this->combined_indices).ArrayMax = 0;
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
  fVar26 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
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
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Lerped_LookatLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Y = (double)uVar24;
  (this->Lerped_LookatLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar25 = FRuntimeFloatCurve::GetRichCurve(&this->Look_Bending_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar27.Index = in_stack_ffffffffffffff98 & 0xffffff00;
  FRichCurve::AddKey(pFVar25,fVar26,0.0,(bool)in_R9B,FVar27);
  FKeyHandle::FKeyHandle(local_res8);
  fVar2 = __real_3f800000;
  FVar27.Index = FVar27.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar25,fVar26,__real_3f800000,(bool)in_R9B,FVar27);
  pFVar25 = FRuntimeFloatCurve::GetRichCurve(&this->Look_Multiplier_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar27.Index = FVar27.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar25,fVar26,0.0,(bool)in_R9B,FVar27);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(pFVar25,fVar26,fVar2,(bool)in_R9B,(FKeyHandle)(FVar27.Index & 0xffffff00));
  (this->LookAt_Axis).field0_0x0._s_0.X = 0.0;
  (this->LookAt_Axis).field0_0x0._s_0.Y = 1.0;
  (this->LookAt_Axis).field0_0x0._s_0.Z = 0.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.X = 0.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Y = 1.0;
  (this->Reference_Constant_Forward_Axis).field0_0x0._s_0.Z = 0.0;
  if ((this->Debug_Hand_Locations).ArrayNum == 0) {
    ResizeDebugLocations(this,2);
  }
  dVar23 = _UNK_152af9268;
  dVar21 = __real_4059000000000000;
  (this->Debug_LookAtLocation).Translation.XY.m128d_f64[0] = ___xmm_40690000000000000000000000000000
  ;
  (this->Debug_LookAtLocation).Translation.XY.m128d_f64[1] = dVar23;
  (this->Debug_LookAtLocation).Translation.ZW.m128d_f64[0] = dVar21;
  (this->Debug_LookAtLocation).Translation.ZW.m128d_f64[1] = 0.0;
  return this;
}

// AnimLocLerp @ 14d2b93b0

TVector<double> * __thiscall
FAnimNode_DragonAimSolver::AnimLocLerp
          (FAnimNode_DragonAimSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  auVar2 = *(undefined1 (*) [16])&param_1->field0_0x0;
  auVar3 = *(undefined1 (*) [16])&param_2->field0_0x0;
  local_78._0_4_ = auVar3._0_4_;
  local_78._4_4_ = auVar3._4_4_;
  local_78._8_4_ = auVar3._8_4_;
  local_78._12_4_ = auVar3._12_4_;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar6 = auVar3._8_8_;
  dVar7 = auVar3._0_8_;
  if (this->Adaptive_Terrain_Tail == false) {
    dVar6 = auVar2._8_8_;
    local_78._0_4_ = auVar2._0_4_;
    local_78._4_4_ = auVar2._4_4_;
    local_78._8_4_ = auVar2._8_4_;
    local_78._12_4_ = auVar2._12_4_;
    dVar7 = auVar2._0_8_;
  }
  fVar5 = __real_42c80000 - param_3 * this->Interpolation_Speed * __real_41400000;
  if (__real_42c80000 <= fVar5) {
    fVar5 = __real_42c80000;
  }
  if (fVar5 <= __real_3f800000) {
    fVar5 = __real_3f800000;
  }
  dVar4 = __real_3ff0000000000000 / (double)fVar5;
  if ((this->Enable_Interpolation == false) || (this->test_counter < 10)) {
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  }
  else if (this->loc_interp_type == ENUM_DivisiveLoc_Interp) {
    dVar6 = dVar6 - (dVar6 - auVar3._8_8_) * dVar4;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar7 - (dVar7 - auVar3._0_8_) * dVar4;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         local_78._s_0.Z - (local_78._s_0.Z - dVar1) * dVar4;
  }
  else {
    local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_58[0]._16_8_ = local_78._s_0.Z;
    FMath::VInterpTo((TVector<double> *)&local_58[0]._s_0,(TVector<double> *)&local_78._s_0,
                     (TVector<double> *)&local_98._s_0,param_3,__real_3f000000);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_58[0]._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_58[0]._8_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_58[0]._16_8_;
  }
  return __return_storage_ptr__;
}

// BoneArrayMachine @ 14d2b9b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_DragonAimSolver::BoneArrayMachine
          (FAnimNode_DragonAimSolver *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          FName param_2,FName param_3,FName param_4,FName param_5,bool param_6)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  double dVar5;
  FDragonData_SpineFeetPair *pFVar6;
  FName FVar7;
  USkeletalMeshComponent *this_00;
  code *pcVar8;
  double dVar9;
  double dVar10;
  void *pvVar11;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar17;
  FName FVar18;
  uint uVar19;
  uint uVar20;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_428 [32];
  uint local_3cc;
  undefined1 local_3a0 [8];
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_378;
  undefined1 local_358 [8];
  uint uStack_350;
  FCompactPoseBoneIndex FStack_34c;
  void *local_348;
  undefined8 local_340;
  void *local_338;
  undefined8 local_330;
  void *local_328;
  undefined8 local_320;
  void *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_258;
  undefined8 local_250;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_248;
  undefined8 local_240;
  TArray<int,TSizedDefaultAllocator<32>_> *local_238;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  FDragonData_SpineFeetPair local_1e8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_428;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_3cc = 0;
  iVar15 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar15 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar15 * 8) = param_2;
  if (!param_6) {
    memset(&local_1e8,0,0x170);
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_1e8);
    local_1e8.Spine_Involved.bUseSkeletonIndex = 0;
    local_1e8.Spine_Involved.BoneIndex = -1;
    local_1e8.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_1e8.Spine_Involved.BoneName = param_2;
    FBoneReference::Initialize(&local_1e8.Spine_Involved,this->SavedBoneContainer);
    pTVar21 = &this->spine_Feet_pair;
    pFVar6 = (FDragonData_SpineFeetPair *)(pTVar21->AllocatorInstance).Data;
    if (((pFVar6 <= &local_1e8) && (&local_1e8 < pFVar6 + (this->spine_Feet_pair).ArrayMax)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar17;
    }
    iVar15 = (this->spine_Feet_pair).ArrayNum;
    piVar1 = &(this->spine_Feet_pair).ArrayMax;
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x170,0x10,&pTVar21->AllocatorInstance,piVar1);
    }
    (this->spine_Feet_pair).ArrayNum = iVar15 + 1;
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair
              ((FDragonData_SpineFeetPair *)
               ((pTVar21->AllocatorInstance).Data + (longlong)iVar15 * 0x170),&local_1e8);
    FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_1e8);
  }
  do {
    if (param_6) {
      uVar19 = __return_storage_ptr__->ArrayNum - 1;
      uVar16 = 0;
      if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      FVar7 = *(FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                        (longlong)(int)uVar19 * 8);
      uVar19 = (uint)~param_1 >> 0x1f;
      uVar16 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      lVar22 = (longlong)param_1 * 0xd0;
      pFVar24 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar3 = pFVar24 + lVar22 + 0x48;
      dVar9 = *(double *)pFVar3;
      dVar10 = *(double *)(pFVar3 + 8);
      dVar5 = *(double *)(pFVar24 + lVar22 + 0x58);
      uVar16 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      fVar4 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar22 + 0x88)
      ;
      uVar16 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar16 = uVar19;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      pFVar24 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar3 = pFVar24 + lVar22 + 0x60;
      local_378._s_0.X = (double)*(undefined8 *)pFVar3;
      local_378._s_0.Y = (double)*(undefined8 *)(pFVar3 + 8);
      local_378._s_0.Z = (double)*(undefined8 *)(pFVar24 + lVar22 + 0x70);
      local_398._s_0.X = dVar9;
      local_398._s_0.Y = dVar10;
      local_398._s_0.Z = dVar5;
      bVar14 = Check_Loop_Exist(this,param_1,(TVector<double> *)&local_378._s_0,fVar4,
                                (TVector<double> *)&local_398._s_0,param_2,param_3,param_4,FVar7,
                                &this->Total_spine_bones);
      if (bVar14) {
        return __return_storage_ptr__;
      }
    }
    uVar16 = local_3cc + 1;
    this_00 = this->owning_skel;
    uVar19 = 0;
    if ((int)local_3cc < __return_storage_ptr__->ArrayNum) {
      uVar19 = ~local_3cc >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar17;
    }
    FVar18 = USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)this_00,(FName)local_3a0)
    ;
    FVar7 = (FName)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((((ulonglong)FVar7 <= (ulonglong)FVar18) &&
        ((ulonglong)FVar18 <
         (ulonglong)((longlong)FVar7 + (longlong)__return_storage_ptr__->ArrayMax * 8))) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar17;
    }
    iVar15 = __return_storage_ptr__->ArrayNum;
    if (iVar15 == __return_storage_ptr__->ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar15 + 1;
    *(undefined8 *)(pFVar3 + (longlong)iVar15 * 8) = *(undefined8 *)FVar18;
    if (!param_6) {
      local_204 = 0;
      uStack_200 = 0;
      uStack_1fc = 0;
      uStack_1f8 = 0;
      local_304 = 0;
      uVar20 = __return_storage_ptr__->ArrayNum - 1;
      local_2fc = 0;
      local_1f4 = 0;
      uStack_1f0 = 0;
      local_1ec = 0;
      local_358._0_4_ = 0;
      local_358._4_4_ = 0;
      local_2f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_2f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_348 = (void *)0x0;
      local_340 = 0;
      local_338 = (void *)0x0;
      local_330 = 0;
      local_328 = (void *)0x0;
      local_320 = 0;
      local_318 = (void *)0x0;
      local_310 = 0;
      local_308 = 0;
      local_298 = (void *)0x0;
      local_2e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_2e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_290 = 0;
      local_288 = (void *)0x0;
      local_280 = 0;
      local_278 = (void *)0x0;
      local_270 = 0;
      local_2d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_2d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_268 = (void *)0x0;
      local_260 = 0;
      local_258 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_250 = 0;
      local_248 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_2c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_2c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_240 = 0;
      local_238 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_230 = 0;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_218 = (void *)0x0;
      local_210 = 0;
      local_208 = 0;
      uVar19 = 0;
      if ((int)uVar20 < __return_storage_ptr__->ArrayNum) {
        uVar19 = ~uVar20 >> 0x1f;
      }
      local_2a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_2a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2a8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      uStack_350 = 0x7fffffff;
      FStack_34c = (FCompactPoseBoneIndex)0xffffffff;
      local_2b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_2b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2b8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      local_358 = *(undefined1 (*) [8])
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar20 * 8);
      uStack_350 = 0x7fffffff;
      FStack_34c = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize((FBoneReference *)local_358,this->SavedBoneContainer);
      pTVar21 = &this->spine_Feet_pair;
      pFVar3 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_358) &&
          ((FScriptContainerElement *)local_358 <
           pFVar3 + (longlong)(this->spine_Feet_pair).ArrayMax * 0x170)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar8 = (code *)swi(3);
        pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar17;
      }
      iVar15 = (this->spine_Feet_pair).ArrayNum;
      piVar1 = &(this->spine_Feet_pair).ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x170,0x10,&pTVar21->AllocatorInstance,piVar1);
      }
      pvVar11 = local_348;
      FVar7.Number = (uint)FStack_34c;
      FVar7.ComparisonIndex.Value = uStack_350;
      (this->spine_Feet_pair).ArrayNum = iVar15 + 1;
      pFVar3 = (pTVar21->AllocatorInstance).Data;
      lVar22 = (longlong)iVar15 * 0x170;
      pFVar24 = pFVar3 + lVar22 + 0x10;
      pFVar2 = (FName *)(pFVar3 + lVar22);
      pFVar2->ComparisonIndex = (FNameEntryId)local_358._0_4_;
      pFVar2->Number = local_358._4_4_;
      pFVar2[1] = FVar7;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_340;
      *(int *)(pFVar24 + 8) = (int)local_340;
      if ((int)local_340 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_340,0,(ForAnyElementType *)pFVar24,(int)local_340,
                   (int *)(pFVar3 + lVar22 + 0x1c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 4);
      }
      pvVar11 = local_338;
      pFVar24 = pFVar3 + lVar22 + 0x20;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_330;
      *(int *)(pFVar24 + 8) = (int)local_330;
      if ((int)local_330 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x2c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_330,0,(ForAnyElementType *)pFVar24,(int)local_330,
                   (int *)(pFVar3 + lVar22 + 0x2c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 4);
      }
      pvVar11 = local_328;
      pFVar24 = pFVar3 + lVar22 + 0x30;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_320;
      *(int *)(pFVar24 + 8) = (int)local_320;
      if ((int)local_320 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_320,0,(ForAnyElementType *)pFVar24,(int)local_320,
                   (int *)(pFVar3 + lVar22 + 0x3c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 4);
      }
      pvVar11 = local_318;
      pFVar24 = pFVar3 + lVar22 + 0x40;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_310;
      *(int *)(pFVar24 + 8) = (int)local_310;
      if ((int)local_310 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x4c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_310,0,(ForAnyElementType *)pFVar24,(int)local_310,
                   (int *)(pFVar3 + lVar22 + 0x4c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 4);
      }
      pvVar11 = local_298;
      *(undefined4 *)(pFVar3 + lVar22 + 0x50) = local_308;
      pFVar24 = pFVar3 + lVar22 + 0xc0;
      *(undefined8 *)(pFVar3 + lVar22 + 0x60) = local_2f8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x60 + 8) = local_2f8._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x70) = local_2e8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x70 + 8) = local_2e8._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x80) = local_2d8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x80 + 8) = local_2d8._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x90) = local_2c8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x90 + 8) = local_2c8._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0xa0) = local_2b8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0xa0 + 8) = local_2b8._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0xb0) = local_2a8._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0xb0 + 8) = local_2a8._8_8_;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_290;
      *(int *)(pFVar24 + 8) = (int)local_290;
      if ((int)local_290 == 0) {
        *(int *)(pFVar3 + lVar22 + 0xcc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_290,0,(ForAnyElementType *)pFVar24,(int)local_290,
                   (int *)(pFVar3 + lVar22 + 0xcc));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 2);
      }
      pvVar11 = local_288;
      pFVar24 = pFVar3 + lVar22 + 0xd0;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_280;
      *(int *)(pFVar24 + 8) = (int)local_280;
      if ((int)local_280 == 0) {
        *(int *)(pFVar3 + lVar22 + 0xdc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_280,0,(ForAnyElementType *)pFVar24,(int)local_280,
                   (int *)(pFVar3 + lVar22 + 0xdc));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 * 0x18);
      }
      pvVar11 = local_278;
      pFVar24 = pFVar3 + lVar22 + 0xe0;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_270;
      *(int *)(pFVar24 + 8) = (int)local_270;
      if ((int)local_270 == 0) {
        *(int *)(pFVar3 + lVar22 + 0xec) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_270,0,(ForAnyElementType *)pFVar24,(int)local_270,
                   (int *)(pFVar3 + lVar22 + 0xec));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 2);
      }
      pvVar11 = local_268;
      pFVar24 = pFVar3 + lVar22 + 0xf0;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_260;
      *(int *)(pFVar24 + 8) = (int)local_260;
      if ((int)local_260 == 0) {
        *(int *)(pFVar3 + lVar22 + 0xfc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_260,0,(ForAnyElementType *)pFVar24,(int)local_260,
                   (int *)(pFVar3 + lVar22 + 0xfc));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 * 0x18);
      }
      pTVar12 = local_258;
      pFVar24 = pFVar3 + lVar22 + 0x100;
      *(undefined8 *)pFVar24 = 0;
      iVar15 = (int)local_250;
      *(int *)(pFVar24 + 8) = (int)local_250;
      if ((int)local_250 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x10c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_250,0,(ForAnyElementType *)pFVar24,(int)local_250,
                   (int *)(pFVar3 + lVar22 + 0x10c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar24,pTVar12,iVar15);
      }
      pTVar12 = local_248;
      pFVar24 = pFVar3 + lVar22 + 0x110;
      *(undefined8 *)pFVar24 = 0;
      iVar15 = (int)local_240;
      *(int *)(pFVar24 + 8) = (int)local_240;
      if ((int)local_240 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x11c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_240,0,(ForAnyElementType *)pFVar24,(int)local_240,
                   (int *)(pFVar3 + lVar22 + 0x11c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar24,pTVar12,iVar15);
      }
      pTVar13 = local_238;
      pFVar24 = pFVar3 + lVar22 + 0x120;
      *(undefined8 *)pFVar24 = 0;
      iVar15 = (int)local_230;
      *(int *)(pFVar24 + 8) = (int)local_230;
      if ((int)local_230 == 0) {
        *(int *)(pFVar3 + lVar22 + 300) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_230,0,(ForAnyElementType *)pFVar24,(int)local_230,
                   (int *)(pFVar3 + lVar22 + 300));
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar24,pTVar13,iVar15);
      }
      pvVar11 = local_228;
      pFVar24 = pFVar3 + lVar22 + 0x130;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_220;
      *(int *)(pFVar24 + 8) = (int)local_220;
      if ((int)local_220 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x13c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_220,0,(ForAnyElementType *)pFVar24,(int)local_220,
                   (int *)(pFVar3 + lVar22 + 0x13c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 << 2);
      }
      pvVar11 = local_218;
      pFVar24 = pFVar3 + lVar22 + 0x140;
      *(undefined8 *)pFVar24 = 0;
      lVar23 = (longlong)(int)local_210;
      *(int *)(pFVar24 + 8) = (int)local_210;
      if ((int)local_210 == 0) {
        *(int *)(pFVar3 + lVar22 + 0x14c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_210,0,(ForAnyElementType *)pFVar24,(int)local_210,
                   (int *)(pFVar3 + lVar22 + 0x14c));
        memcpy(*(void **)pFVar24,pvVar11,lVar23 * 0x18);
      }
      *(undefined4 *)(pFVar3 + lVar22 + 0x150) = local_208;
      *(ulonglong *)(pFVar3 + lVar22 + 0x158) = CONCAT44(uStack_1fc,uStack_200);
      *(ulonglong *)(pFVar3 + lVar22 + 0x158 + 8) = CONCAT44(local_1f4,uStack_1f8);
      *(ulonglong *)(pFVar3 + lVar22 + 0x168) = CONCAT44(local_1ec,uStack_1f0);
      if (local_218 != (void *)0x0) {
        FMemory::Free(local_218);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free(local_228);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_238,(int)local_230);
      if (local_238 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_238);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_248,(int)local_240);
      if (local_248 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_248);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_258,(int)local_250);
      if (local_258 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_258);
      }
      if (local_268 != (void *)0x0) {
        FMemory::Free(local_268);
      }
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
      if (local_318 != (void *)0x0) {
        FMemory::Free(local_318);
      }
      if (local_328 != (void *)0x0) {
        FMemory::Free(local_328);
      }
      if (local_338 != (void *)0x0) {
        FMemory::Free(local_338);
      }
      if (local_348 != (void *)0x0) {
        FMemory::Free(local_348);
      }
    }
    uVar20 = __return_storage_ptr__->ArrayNum - 1;
    uVar19 = 0;
    if ((int)uVar20 < __return_storage_ptr__->ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
      return pTVar17;
    }
    if ((*(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar20 * 8) ==
         param_5) && (!param_6)) {
      return __return_storage_ptr__;
    }
    local_3cc = uVar16;
    if (0x31 < (int)uVar16) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// Check_Loop_Exist @ 14d2c29c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FAnimNode_DragonAimSolver::Check_Loop_Exist
          (FAnimNode_DragonAimSolver *this,int param_1,TVector<double> *param_2,float param_3,
          TVector<double> *param_4,FName param_5,FName param_6,FName param_7,FName param_8,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_9)

{
  int *piVar1;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  undefined8 *puVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  FString *pFVar18;
  FString *pFVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined1 auStack_2b8 [32];
  FScriptContainerElement *local_298;
  FScriptContainerElement *local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  uint local_268 [2];
  float local_260 [2];
  undefined1 local_258 [8];
  uint uStack_250;
  FCompactPoseBoneIndex FStack_24c;
  undefined1 local_248 [8];
  uint uStack_240;
  FCompactPoseBoneIndex FStack_23c;
  undefined1 local_238 [8];
  uint uStack_230;
  FCompactPoseBoneIndex FStack_22c;
  undefined1 local_228 [8];
  uint uStack_220;
  FCompactPoseBoneIndex FStack_21c;
  FScriptContainerElement *local_218;
  FScriptContainerElement *local_210;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FDragonData_SpineFeetPair local_1c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  uVar21 = 0;
  local_210 = (FScriptContainerElement *)param_4;
  local_268[0] = param_1;
  local_260[0] = param_3;
  local_218 = (FScriptContainerElement *)param_2;
  if (0 < param_9->ArrayNum) {
    do {
      pFVar18 = ::FName::ToString(&param_8,&local_1d8);
      pFVar18 = ::FString::TrimStartAndEnd(pFVar18,&local_1e8);
      uVar25 = ~uVar21 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar21 < param_9->ArrayNum) {
        uVar20 = uVar25;
      }
      if (uVar20 == 0) {
        local_298 = (FScriptContainerElement *)(longlong)(int)uVar21;
        local_290 = (FScriptContainerElement *)(longlong)param_9->ArrayNum;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
      }
      pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar21;
      pFVar19 = ::FName::ToString((FName *)((param_9->AllocatorInstance).Data +
                                           (longlong)pFVar24 * 8),&local_1f8);
      pFVar19 = ::FString::TrimStartAndEnd(pFVar19,&local_208);
      iVar17 = (pFVar18->Data).ArrayNum;
      iVar5 = (pFVar19->Data).ArrayNum;
      if (iVar17 == iVar5) {
        if (iVar17 < 2) {
          bVar15 = true;
        }
        else {
          iVar17 = wcscmp((wchar_t *)(pFVar18->Data).AllocatorInstance.Data,
                          (wchar_t *)(pFVar19->Data).AllocatorInstance.Data);
          bVar15 = iVar17 == 0;
        }
      }
      else {
        bVar15 = iVar5 + iVar17 == 1;
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if ((bVar15) && ((int)uVar21 < (this->spine_Feet_pair).ArrayNum)) {
        memset(&local_1c8,0,0x170);
        FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_1c8);
        uVar20 = 0;
        if ((int)uVar21 < param_9->ArrayNum) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)param_9->ArrayNum,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        local_1c8.Spine_Involved.BoneName =
             *(FName *)((param_9->AllocatorInstance).Data + (longlong)pFVar24 * 8);
        local_1c8.Spine_Involved.bUseSkeletonIndex = 0;
        local_1c8.Spine_Involved.BoneIndex = -1;
        local_1c8.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_1c8.Spine_Involved,this->SavedBoneContainer);
        local_258 = (undefined1  [8])param_5;
        uStack_250 = 0x7fffffff;
        FStack_24c = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize((FBoneReference *)local_258,this->SavedBoneContainer);
        if ((local_1c8.Associated_Feet.AllocatorInstance.Data <=
             (FScriptContainerElement *)local_258) &&
           ((FScriptContainerElement *)local_258 <
            local_1c8.Associated_Feet.AllocatorInstance.Data +
            (longlong)local_1c8.Associated_Feet.ArrayMax * 0x10)) {
          local_280 = (longlong)local_1c8.Associated_Feet.ArrayNum;
          local_278 = 0x10;
          local_298 = (FScriptContainerElement *)local_258;
          local_290 = local_1c8.Associated_Feet.AllocatorInstance.Data;
          local_288 = (longlong)local_1c8.Associated_Feet.ArrayMax;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        if (local_1c8.Associated_Feet.ArrayNum == local_1c8.Associated_Feet.ArrayMax) {
          local_1c8.Associated_Feet.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&local_1c8.Associated_Feet.AllocatorInstance,
                          &local_1c8.Associated_Feet.ArrayMax);
        }
        FVar10.Number = (uint)FStack_24c;
        FVar10.ComparisonIndex.Value = uStack_250;
        iVar17 = local_1c8.Associated_Feet.ArrayNum + 1;
        pFVar3 = (FName *)(local_1c8.Associated_Feet.AllocatorInstance.Data +
                          (longlong)local_1c8.Associated_Feet.ArrayNum * 0x10);
        pFVar3->ComparisonIndex = (FNameEntryId)local_258._0_4_;
        pFVar3->Number = local_258._4_4_;
        pFVar3[1] = FVar10;
        iVar5 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar5) {
          uVar20 = uVar25;
        }
        local_1c8.Associated_Feet.ArrayNum = iVar17;
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar5,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar6 = (this->spine_Feet_pair).AllocatorInstance.Data;
        lVar22 = (longlong)pFVar24 * 0x170;
        *(FName *)(pFVar6 + lVar22) = local_1c8.Spine_Involved.BoneName;
        *(uint *)(pFVar6 + lVar22 + 8) =
             local_1c8.Spine_Involved._8_4_ & 0x7fffffff |
             *(uint *)(pFVar6 + lVar22 + 8) & 0x80000000;
        *(undefined4 *)(pFVar6 + lVar22 + 8) = local_1c8.Spine_Involved._8_4_;
        *(FCompactPoseBoneIndex *)(pFVar6 + lVar22 + 0xc) =
             local_1c8.Spine_Involved.CachedCompactPoseIndex;
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar6 = (this->spine_Feet_pair).AllocatorInstance.Data;
        pFVar23 = *(FScriptContainerElement **)(pFVar6 + lVar22 + 0x20);
        if ((pFVar23 <= (FScriptContainerElement *)local_258) &&
           ((FScriptContainerElement *)local_258 <
            pFVar23 + (longlong)*(int *)(pFVar6 + lVar22 + 0x2c) * 0x10)) {
          local_280 = (longlong)*(int *)(pFVar6 + lVar22 + 0x28);
          local_278 = 0x10;
          local_298 = (FScriptContainerElement *)local_258;
          local_290 = pFVar23;
          local_288 = (longlong)*(int *)(pFVar6 + lVar22 + 0x2c);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)(pFVar6 + lVar22 + 0x28);
        if (iVar17 == *(int *)(pFVar6 + lVar22 + 0x2c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,(ForAnyElementType *)(pFVar6 + lVar22 + 0x20),
                              (int *)(pFVar6 + lVar22 + 0x2c));
        }
        *(int *)(pFVar6 + lVar22 + 0x28) = iVar17 + 1;
        FVar11.Number = (uint)FStack_24c;
        FVar11.ComparisonIndex.Value = uStack_250;
        pFVar3 = (FName *)(*(longlong *)(pFVar6 + lVar22 + 0x20) + (longlong)iVar17 * 0x10);
        pFVar3->ComparisonIndex = (FNameEntryId)local_258._0_4_;
        pFVar3->Number = local_258._4_4_;
        pFVar3[1] = FVar11;
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar23 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xc0;
        pFVar6 = *(FScriptContainerElement **)&pFVar23->field_0x0;
        if ((pFVar6 <= (FScriptContainerElement *)local_260) &&
           ((FScriptContainerElement *)local_260 < pFVar6 + (longlong)*(int *)(pFVar23 + 0xc) * 4))
        {
          local_280 = (longlong)*(int *)&pFVar23[8].field_0x0;
          local_278 = 4;
          local_298 = (FScriptContainerElement *)local_260;
          local_290 = pFVar6;
          local_288 = (longlong)*(int *)(pFVar23 + 0xc);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)&pFVar23[8].field_0x0;
        if (iVar17 == *(int *)(pFVar23 + 0xc)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
        }
        *(int *)&pFVar23[8].field_0x0 = iVar17 + 1;
        *(float *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar17 * 4) = local_260[0];
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar23 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0x140;
        pFVar6 = *(FScriptContainerElement **)&pFVar23->field_0x0;
        if ((pFVar6 <= local_218) && (local_218 < pFVar6 + (longlong)*(int *)(pFVar23 + 0xc) * 0x18)
           ) {
          local_280 = (longlong)*(int *)&pFVar23[8].field_0x0;
          local_278 = 0x18;
          local_298 = local_218;
          local_290 = pFVar6;
          local_288 = (longlong)*(int *)(pFVar23 + 0xc);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)&pFVar23[8].field_0x0;
        if (iVar17 == *(int *)(pFVar23 + 0xc)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
        }
        *(int *)&pFVar23[8].field_0x0 = iVar17 + 1;
        uVar9 = *(undefined8 *)(local_218 + 8);
        lVar7 = *(longlong *)&pFVar23->field_0x0;
        puVar4 = (undefined8 *)(lVar7 + (longlong)iVar17 * 0x18);
        *puVar4 = *(undefined8 *)local_218;
        puVar4[1] = uVar9;
        *(undefined8 *)(lVar7 + (longlong)iVar17 * 0x18 + 0x10) = *(undefined8 *)(local_218 + 0x10);
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar23 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xf0;
        pFVar6 = *(FScriptContainerElement **)&pFVar23->field_0x0;
        if ((pFVar6 <= local_210) && (local_210 < pFVar6 + (longlong)*(int *)(pFVar23 + 0xc) * 0x18)
           ) {
          local_280 = (longlong)*(int *)&pFVar23[8].field_0x0;
          local_278 = 0x18;
          local_298 = local_210;
          local_290 = pFVar6;
          local_288 = (longlong)*(int *)(pFVar23 + 0xc);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)&pFVar23[8].field_0x0;
        if (iVar17 == *(int *)(pFVar23 + 0xc)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
        }
        *(int *)&pFVar23[8].field_0x0 = iVar17 + 1;
        uVar9 = *(undefined8 *)(local_210 + 8);
        lVar7 = *(longlong *)&pFVar23->field_0x0;
        puVar4 = (undefined8 *)(lVar7 + (longlong)iVar17 * 0x18);
        *puVar4 = *(undefined8 *)local_210;
        puVar4[1] = uVar9;
        *(undefined8 *)(lVar7 + (longlong)iVar17 * 0x18 + 0x10) = *(undefined8 *)(local_210 + 0x10);
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar23 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0x130;
        pFVar6 = *(FScriptContainerElement **)&pFVar23->field_0x0;
        if ((pFVar6 <= (FScriptContainerElement *)local_268) &&
           ((FScriptContainerElement *)local_268 < pFVar6 + (longlong)*(int *)(pFVar23 + 0xc) * 4))
        {
          local_280 = (longlong)*(int *)&pFVar23[8].field_0x0;
          local_278 = 4;
          local_298 = (FScriptContainerElement *)local_268;
          local_290 = pFVar6;
          local_288 = (longlong)*(int *)(pFVar23 + 0xc);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)&pFVar23[8].field_0x0;
        if (iVar17 == *(int *)(pFVar23 + 0xc)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
        }
        *(int *)&pFVar23[8].field_0x0 = iVar17 + 1;
        uStack_240 = 0x7fffffff;
        FStack_23c = (FCompactPoseBoneIndex)0xffffffff;
        *(uint *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar17 * 4) = local_268[0];
        local_248 = (undefined1  [8])param_6;
        FBoneReference::Initialize((FBoneReference *)local_248,this->SavedBoneContainer);
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar6 = (this->spine_Feet_pair).AllocatorInstance.Data;
        pFVar23 = *(FScriptContainerElement **)(pFVar6 + lVar22 + 0x30);
        if ((pFVar23 <= (FScriptContainerElement *)local_248) &&
           ((FScriptContainerElement *)local_248 <
            pFVar23 + (longlong)*(int *)(pFVar6 + lVar22 + 0x3c) * 0x10)) {
          local_280 = (longlong)*(int *)(pFVar6 + lVar22 + 0x38);
          local_278 = 0x10;
          local_298 = (FScriptContainerElement *)local_248;
          local_290 = pFVar23;
          local_288 = (longlong)*(int *)(pFVar6 + lVar22 + 0x3c);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)(pFVar6 + lVar22 + 0x38);
        if (iVar17 == *(int *)(pFVar6 + lVar22 + 0x3c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,(ForAnyElementType *)(pFVar6 + lVar22 + 0x30),
                              (int *)(pFVar6 + lVar22 + 0x3c));
        }
        *(int *)(pFVar6 + lVar22 + 0x38) = iVar17 + 1;
        FVar12.Number = (uint)FStack_23c;
        FVar12.ComparisonIndex.Value = uStack_240;
        pFVar3 = (FName *)(*(longlong *)(pFVar6 + lVar22 + 0x30) + (longlong)iVar17 * 0x10);
        pFVar3->ComparisonIndex = (FNameEntryId)local_248._0_4_;
        pFVar3->Number = local_248._4_4_;
        pFVar3[1] = FVar12;
        local_238 = (undefined1  [8])param_7;
        uStack_230 = 0x7fffffff;
        FStack_22c = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize((FBoneReference *)local_238,this->SavedBoneContainer);
        iVar17 = (this->spine_Feet_pair).ArrayNum;
        uVar20 = 0;
        if ((int)uVar21 < iVar17) {
          uVar20 = uVar25;
        }
        if ((uVar20 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        pFVar24 = (this->spine_Feet_pair).AllocatorInstance.Data;
        pFVar6 = *(FScriptContainerElement **)(pFVar24 + lVar22 + 0x40);
        if ((pFVar6 <= (FScriptContainerElement *)local_238) &&
           ((FScriptContainerElement *)local_238 <
            pFVar6 + (longlong)*(int *)(pFVar24 + lVar22 + 0x4c) * 0x10)) {
          local_280 = (longlong)*(int *)(pFVar24 + lVar22 + 0x48);
          local_278 = 0x10;
          local_298 = (FScriptContainerElement *)local_238;
          local_290 = pFVar6;
          local_288 = (longlong)*(int *)(pFVar24 + lVar22 + 0x4c);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = *(int *)(pFVar24 + lVar22 + 0x48);
        if (iVar17 == *(int *)(pFVar24 + lVar22 + 0x4c)) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,(ForAnyElementType *)(pFVar24 + lVar22 + 0x40),
                              (int *)(pFVar24 + lVar22 + 0x4c));
        }
        *(int *)(pFVar24 + lVar22 + 0x48) = iVar17 + 1;
        FVar13.Number = (uint)FStack_22c;
        FVar13.ComparisonIndex.Value = uStack_230;
        pFVar3 = (FName *)(*(longlong *)(pFVar24 + lVar22 + 0x40) + (longlong)iVar17 * 0x10);
        pFVar3->ComparisonIndex = (FNameEntryId)local_238._0_4_;
        pFVar3->Number = local_238._4_4_;
        pFVar3[1] = FVar13;
        pFVar24 = (FScriptContainerElement *)(longlong)(int)local_268[0];
        iVar17 = (this->dragon_input_data).FeetBones.ArrayNum;
        uVar21 = 0;
        if ((int)local_268[0] < iVar17) {
          uVar21 = ~local_268[0] >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (local_298 = pFVar24, local_290 = (FScriptContainerElement *)(longlong)iVar17,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        local_228 = *(undefined1 (*) [8])
                     ((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                     (longlong)pFVar24 * 0xd0 + 0x10);
        uStack_220 = 0x7fffffff;
        FStack_21c = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize((FBoneReference *)local_228,this->SavedBoneContainer);
        pTVar2 = &(this->dragon_bone_data).SecondKneeBones;
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        if ((pFVar24 <= (FScriptContainerElement *)local_228) &&
           (lVar22 = (longlong)(this->dragon_bone_data).SecondKneeBones.ArrayMax,
           (FScriptContainerElement *)local_228 < pFVar24 + lVar22 * 0x10)) {
          local_280 = (longlong)(this->dragon_bone_data).SecondKneeBones.ArrayNum;
          local_278 = 0x10;
          local_298 = (FScriptContainerElement *)local_228;
          local_290 = pFVar24;
          local_288 = lVar22;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            uVar16 = (*pcVar8)();
            return (bool)uVar16;
          }
        }
        iVar17 = (this->dragon_bone_data).SecondKneeBones.ArrayNum;
        piVar1 = &(this->dragon_bone_data).SecondKneeBones.ArrayMax;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar2->AllocatorInstance,piVar1);
        }
        FVar14.Number = (uint)FStack_21c;
        FVar14.ComparisonIndex.Value = uStack_220;
        (this->dragon_bone_data).SecondKneeBones.ArrayNum = iVar17 + 1;
        pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x10);
        pFVar3->ComparisonIndex = (FNameEntryId)local_228._0_4_;
        pFVar3->Number = local_228._4_4_;
        pFVar3[1] = FVar14;
        FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_1c8);
        return true;
      }
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < param_9->ArrayNum);
  }
  return false;
}

// ConditionalDebugDraw @ 14d2c7040

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
FAnimNode_DragonAimSolver::ConditionalDebugDraw
          (FAnimNode_DragonAimSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// Dragon_VectorCreation @ 14d2d4a70

void __thiscall
FAnimNode_DragonAimSolver::Dragon_VectorCreation
          (FAnimNode_DragonAimSolver *this,bool param_1,TTransform<double> *param_2,
          FCSPose<FCompactPose> *param_3)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d2d4d50

void __thiscall
FAnimNode_DragonAimSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonAimSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2d8b60

void __thiscall
FAnimNode_DragonAimSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonAimSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
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
  bool bVar15;
  uint uVar16;
  FCompactPoseBoneIndex FVar17;
  undefined4 extraout_var;
  TTransform<double> *pTVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  FCompactPoseBoneIndex local_res8 [2];
  FBoneReference local_a8;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_98 [7];
  
  if (__real_3c23d70a < this->toggle_alpha) {
    iVar19 = (this->dragon_input_data).FeetBones.ArrayNum;
    uVar20 = 0;
    local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98[0].ArrayNum = 0;
    local_98[0].ArrayMax = 0;
    if (0 < iVar19) {
      lVar22 = 0;
      lVar23 = 0;
      do {
        uVar21 = ~uVar20 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar20 < iVar19) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_a8.BoneName =
             *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar23 + 8);
        local_a8.bUseSkeletonIndex = 0;
        local_a8.BoneIndex = -1;
        local_a8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        if (this->automatic_leg_make == true) {
          uVar16 = 0;
          if ((int)uVar20 < (this->dragon_input_data).FeetBones.ArrayNum) {
            uVar16 = uVar21;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_a8.BoneName =
               *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar23);
        }
        local_a8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        local_a8.bUseSkeletonIndex = 0;
        local_a8.BoneIndex = -1;
        FBoneReference::Initialize(&local_a8,this->SavedBoneContainer);
        if ((local_a8.bUseSkeletonIndex == 0) &&
           (local_a8.CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
          iVar19 = (this->knee_Animated_transform_array).ArrayNum;
          if (this->automatic_leg_make == true) {
            if ((int)uVar20 < iVar19) {
              FVar17 = FBoneContainer::GetParentBoneIndex(this->SavedBoneContainer,local_res8);
              FVar17 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar17);
LAB_14d2d8d23:
              pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar17);
              dVar3 = (pTVar18->Rotation).XY.m128d_f64[0];
              dVar4 = (pTVar18->Rotation).XY.m128d_f64[1];
              dVar5 = (pTVar18->Rotation).ZW.m128d_f64[0];
              dVar6 = (pTVar18->Rotation).ZW.m128d_f64[1];
              dVar7 = (pTVar18->Translation).XY.m128d_f64[0];
              dVar8 = (pTVar18->Translation).XY.m128d_f64[1];
              dVar9 = (pTVar18->Translation).ZW.m128d_f64[0];
              dVar10 = (pTVar18->Translation).ZW.m128d_f64[1];
              dVar11 = (pTVar18->Scale3D).XY.m128d_f64[0];
              dVar12 = (pTVar18->Scale3D).XY.m128d_f64[1];
              dVar13 = (pTVar18->Scale3D).ZW.m128d_f64[0];
              dVar14 = (pTVar18->Scale3D).ZW.m128d_f64[1];
              uVar16 = 0;
              if ((int)uVar20 < (this->knee_Animated_transform_array).ArrayNum) {
                uVar16 = uVar21;
              }
              if ((uVar16 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar1 = (this->knee_Animated_transform_array).AllocatorInstance.Data;
              *(double *)(pFVar1 + lVar22) = dVar3;
              *(double *)(pFVar1 + lVar22 + 8) = dVar4;
              *(double *)(pFVar1 + lVar22 + 0x10) = dVar5;
              *(double *)(pFVar1 + lVar22 + 0x10 + 8) = dVar6;
              *(double *)(pFVar1 + lVar22 + 0x20) = dVar7;
              *(double *)(pFVar1 + lVar22 + 0x20 + 8) = dVar8;
              *(double *)(pFVar1 + lVar22 + 0x30) = dVar9;
              *(double *)(pFVar1 + lVar22 + 0x30 + 8) = dVar10;
              *(double *)(pFVar1 + lVar22 + 0x40) = dVar11;
              *(double *)(pFVar1 + lVar22 + 0x40 + 8) = dVar12;
              *(double *)(pFVar1 + lVar22 + 0x50) = dVar13;
              *(double *)(pFVar1 + lVar22 + 0x50 + 8) = dVar14;
            }
          }
          else {
            FVar17 = local_a8.CachedCompactPoseIndex;
            if ((int)uVar20 < iVar19) goto LAB_14d2d8d23;
          }
        }
        iVar19 = (this->dragon_input_data).FeetBones.ArrayNum;
        uVar20 = uVar20 + 1;
        lVar23 = lVar23 + 0xd0;
        lVar22 = lVar22 + 0x60;
      } while ((int)uVar20 < iVar19);
    }
    FABRIK_BodySystem(this,&param_1->Pose,param_1,local_98);
    GetAnimatedPoseInfo(this,&param_1->Pose,param_2);
    if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98[0].AllocatorInstance.Data);
    }
  }
  return;
}

// Evaluate_AnyThread @ 14d2dd210

void __thiscall
FAnimNode_DragonAimSolver::Evaluate_AnyThread(FAnimNode_DragonAimSolver *this,FPoseContext *param_1)

{
  return;
}

// GetAnimatedPoseInfo @ 14d2e9d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_DragonAimSolver::GetAnimatedPoseInfo
          (FAnimNode_DragonAimSolver *this,FCSPose<FCompactPose> *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
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
  double dVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  TTransform<double> *pTVar21;
  longlong lVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int *piVar25;
  uint uVar26;
  longlong lVar27;
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
  undefined4 uVar51;
  undefined1 auStackY_3b8 [32];
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_360;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if (param_2 != &local_360) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_2->ArrayMax = 0;
    param_2->ArrayNum = 0;
  }
  piVar25 = &param_2->ArrayMax;
  iVar20 = (this->HeadTransforms).ArrayNum;
  uVar26 = 0;
  if (0 < iVar20) {
    lVar27 = 0;
    do {
      uVar23 = ~uVar26 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar26 < iVar20) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (param_1,*(FCompactPoseBoneIndex *)
                                    ((this->HeadTransforms).AllocatorInstance.Data +
                                    (longlong)(int)uVar26 * 0x70));
      local_2e8.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
      local_2e8.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
      local_2e8.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
      local_2e8.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
      local_2e8.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
      local_2e8.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
      local_2e8.Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
      local_2e8.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
      local_2e8.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
      local_2e8.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
      local_2e8.Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
      local_2e8.Scale3D.ZW.m128d_f64[1] = (pTVar21->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if ((int)uVar26 < (this->HeadTransforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HeadTransforms).AllocatorInstance.Data;
      local_348.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x10);
      local_348.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x10 + 8);
      local_348.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x20);
      local_348.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x20 + 8);
      local_348.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x30);
      local_348.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x30 + 8);
      local_348.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x40);
      local_348.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x40 + 8);
      local_348.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x50);
      local_348.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x50 + 8);
      local_348.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x60);
      local_348.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x60 + 8);
      pTVar21 = UKismetMathLibrary::TLerp
                          (&local_1c8,&local_2e8,&local_348,this->toggle_alpha,
                           (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
      dVar5 = (pTVar21->Rotation).XY.m128d_f64[0];
      dVar6 = (pTVar21->Rotation).XY.m128d_f64[1];
      dVar7 = (pTVar21->Rotation).ZW.m128d_f64[0];
      dVar8 = (pTVar21->Rotation).ZW.m128d_f64[1];
      dVar9 = (pTVar21->Translation).XY.m128d_f64[0];
      dVar10 = (pTVar21->Translation).XY.m128d_f64[1];
      dVar11 = (pTVar21->Translation).ZW.m128d_f64[0];
      dVar12 = (pTVar21->Translation).ZW.m128d_f64[1];
      dVar13 = (pTVar21->Scale3D).XY.m128d_f64[0];
      dVar14 = (pTVar21->Scale3D).XY.m128d_f64[1];
      dVar15 = (pTVar21->Scale3D).ZW.m128d_f64[0];
      dVar16 = (pTVar21->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if ((int)uVar26 < (this->HeadTransforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HeadTransforms).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar27 + 0x10) = dVar5;
      *(double *)(pFVar3 + lVar27 + 0x10 + 8) = dVar6;
      *(double *)(pFVar3 + lVar27 + 0x20) = dVar7;
      *(double *)(pFVar3 + lVar27 + 0x20 + 8) = dVar8;
      *(double *)(pFVar3 + lVar27 + 0x30) = dVar9;
      *(double *)(pFVar3 + lVar27 + 0x30 + 8) = dVar10;
      *(double *)(pFVar3 + lVar27 + 0x40) = dVar11;
      *(double *)(pFVar3 + lVar27 + 0x40 + 8) = dVar12;
      *(double *)(pFVar3 + lVar27 + 0x50) = dVar13;
      *(double *)(pFVar3 + lVar27 + 0x50 + 8) = dVar14;
      *(double *)(pFVar3 + lVar27 + 0x60) = dVar15;
      *(double *)(pFVar3 + lVar27 + 0x60 + 8) = dVar16;
      uVar19 = 0;
      if ((int)uVar26 < (this->HeadTransforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar24 = (this->HeadTransforms).AllocatorInstance.Data + lVar27;
      if (((pFVar3 <= pFVar24) && (pFVar24 < pFVar3 + (longlong)*piVar25 * 0x70)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = param_2->ArrayNum;
      if (iVar20 == *piVar25) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,piVar25);
        param_2->ArrayNum = iVar20;
      }
      uVar26 = uVar26 + 1;
      param_2->ArrayNum = iVar20 + 1;
      lVar27 = lVar27 + 0x70;
      uVar17 = *(undefined8 *)(pFVar24 + 8);
      lVar22 = (longlong)iVar20 * 0x70;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar22) = *(undefined8 *)pFVar24;
      *(undefined8 *)(pFVar3 + lVar22 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x18);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10) = *(undefined8 *)(pFVar24 + 0x10);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x28);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20) = *(undefined8 *)(pFVar24 + 0x20);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x38);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30) = *(undefined8 *)(pFVar24 + 0x30);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x48);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40) = *(undefined8 *)(pFVar24 + 0x40);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x58);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50) = *(undefined8 *)(pFVar24 + 0x50);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x68);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60) = *(undefined8 *)(pFVar24 + 0x60);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60 + 8) = uVar17;
      iVar20 = (this->HeadTransforms).ArrayNum;
    } while ((int)uVar26 < iVar20);
  }
  iVar20 = (this->LegIK_Transforms).ArrayNum;
  uVar26 = 0;
  if (0 < iVar20) {
    lVar27 = 0;
    do {
      uVar23 = ~uVar26 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar26 < iVar20) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (param_1,*(FCompactPoseBoneIndex *)
                                    ((this->LegIK_Transforms).AllocatorInstance.Data +
                                    (longlong)(int)uVar26 * 0x70));
      local_228.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
      local_228.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
      local_228.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
      local_228.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
      local_228.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
      local_228.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
      local_228.Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
      local_228.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
      local_228.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
      local_228.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
      local_228.Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
      local_228.Scale3D.ZW.m128d_f64[1] = (pTVar21->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if ((int)uVar26 < (this->LegIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->LegIK_Transforms).AllocatorInstance.Data;
      local_288.Rotation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x10);
      local_288.Rotation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x10 + 8);
      local_288.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x20);
      local_288.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x20 + 8);
      local_288.Translation.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x30);
      local_288.Translation.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x30 + 8);
      local_288.Translation.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x40);
      local_288.Translation.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x40 + 8);
      local_288.Scale3D.XY.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x50);
      local_288.Scale3D.XY.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x50 + 8);
      local_288.Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar3 + lVar27 + 0x60);
      local_288.Scale3D.ZW.m128d_f64[1] = *(double *)(pFVar3 + lVar27 + 0x60 + 8);
      pTVar21 = UKismetMathLibrary::TLerp
                          (&local_168,&local_228,&local_288,this->toggle_alpha,
                           (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
      dVar5 = (pTVar21->Rotation).XY.m128d_f64[0];
      dVar6 = (pTVar21->Rotation).XY.m128d_f64[1];
      dVar7 = (pTVar21->Rotation).ZW.m128d_f64[0];
      dVar8 = (pTVar21->Rotation).ZW.m128d_f64[1];
      dVar9 = (pTVar21->Translation).XY.m128d_f64[0];
      dVar10 = (pTVar21->Translation).XY.m128d_f64[1];
      dVar11 = (pTVar21->Translation).ZW.m128d_f64[0];
      dVar12 = (pTVar21->Translation).ZW.m128d_f64[1];
      dVar13 = (pTVar21->Scale3D).XY.m128d_f64[0];
      dVar14 = (pTVar21->Scale3D).XY.m128d_f64[1];
      dVar15 = (pTVar21->Scale3D).ZW.m128d_f64[0];
      dVar16 = (pTVar21->Scale3D).ZW.m128d_f64[1];
      uVar19 = 0;
      if ((int)uVar26 < (this->LegIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->LegIK_Transforms).AllocatorInstance.Data;
      *(double *)(pFVar3 + lVar27 + 0x10) = dVar5;
      *(double *)(pFVar3 + lVar27 + 0x10 + 8) = dVar6;
      *(double *)(pFVar3 + lVar27 + 0x20) = dVar7;
      *(double *)(pFVar3 + lVar27 + 0x20 + 8) = dVar8;
      *(double *)(pFVar3 + lVar27 + 0x30) = dVar9;
      *(double *)(pFVar3 + lVar27 + 0x30 + 8) = dVar10;
      *(double *)(pFVar3 + lVar27 + 0x40) = dVar11;
      *(double *)(pFVar3 + lVar27 + 0x40 + 8) = dVar12;
      *(double *)(pFVar3 + lVar27 + 0x50) = dVar13;
      *(double *)(pFVar3 + lVar27 + 0x50 + 8) = dVar14;
      *(double *)(pFVar3 + lVar27 + 0x60) = dVar15;
      *(double *)(pFVar3 + lVar27 + 0x60 + 8) = dVar16;
      uVar19 = 0;
      if ((int)uVar26 < (this->LegIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar24 = (this->LegIK_Transforms).AllocatorInstance.Data + lVar27;
      if (((pFVar3 <= pFVar24) && (pFVar24 < pFVar3 + (longlong)param_2->ArrayMax * 0x70)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = param_2->ArrayNum;
      if (iVar20 == param_2->ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar26 = uVar26 + 1;
      param_2->ArrayNum = iVar20 + 1;
      lVar27 = lVar27 + 0x70;
      uVar17 = *(undefined8 *)(pFVar24 + 8);
      lVar22 = (longlong)iVar20 * 0x70;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar22) = *(undefined8 *)pFVar24;
      *(undefined8 *)(pFVar3 + lVar22 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x18);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10) = *(undefined8 *)(pFVar24 + 0x10);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x28);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20) = *(undefined8 *)(pFVar24 + 0x20);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x38);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30) = *(undefined8 *)(pFVar24 + 0x30);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x48);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40) = *(undefined8 *)(pFVar24 + 0x40);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x58);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50) = *(undefined8 *)(pFVar24 + 0x50);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x68);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60) = *(undefined8 *)(pFVar24 + 0x60);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60 + 8) = uVar17;
      iVar20 = (this->LegIK_Transforms).ArrayNum;
    } while ((int)uVar26 < iVar20);
  }
  uVar26 = 0;
  if (0 < (this->HandIK_Transforms).ArrayNum) {
    lVar27 = 0;
    do {
      uVar23 = ~uVar26 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar26 < (this->HandIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->HandIK_Transforms).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar26 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + lVar27) =
           *(undefined4 *)(pFVar3 + lVar27);
      if ((this->Enable_Hand_Interpolation == false) || (this->test_counter < 0x65)) {
        uVar19 = 0;
        if ((int)uVar26 < (this->HandIK_Transforms).ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar24 = (this->HandIK_Transforms).AllocatorInstance.Data;
        pFVar3 = pFVar24 + lVar27 + 0x10;
        uVar28 = *(undefined4 *)pFVar3;
        uVar29 = *(undefined4 *)(pFVar3 + 4);
        uVar30 = *(undefined4 *)(pFVar3 + 8);
        uVar31 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar24 + lVar27 + 0x20;
        uVar32 = *(undefined4 *)pFVar3;
        uVar33 = *(undefined4 *)(pFVar3 + 4);
        uVar34 = *(undefined4 *)(pFVar3 + 8);
        uVar35 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar24 + lVar27 + 0x30;
        uVar36 = *(undefined4 *)pFVar3;
        uVar37 = *(undefined4 *)(pFVar3 + 4);
        uVar38 = *(undefined4 *)(pFVar3 + 8);
        uVar39 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar24 + lVar27 + 0x40;
        uVar40 = *(undefined4 *)pFVar3;
        uVar41 = *(undefined4 *)(pFVar3 + 4);
        uVar42 = *(undefined4 *)(pFVar3 + 8);
        uVar43 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar3 = pFVar24 + lVar27 + 0x50;
        uVar44 = *(undefined4 *)pFVar3;
        uVar45 = *(undefined4 *)(pFVar3 + 4);
        uVar46 = *(undefined4 *)(pFVar3 + 8);
        uVar47 = *(undefined4 *)(pFVar3 + 0xc);
        pFVar24 = pFVar24 + lVar27 + 0x60;
        uVar48 = *(undefined4 *)pFVar24;
        uVar49 = *(undefined4 *)(pFVar24 + 4);
        uVar50 = *(undefined4 *)(pFVar24 + 8);
        uVar51 = *(undefined4 *)(pFVar24 + 0xc);
        uVar19 = 0;
        if ((int)uVar26 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        fVar1 = this->Hand_Interpolation_Speed;
        fVar2 = this->delta_seconds_saved;
        uVar19 = 0;
        if ((int)uVar26 < (this->HandIK_Transforms).ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->HandIK_Transforms).AllocatorInstance.Data;
        uVar19 = 0;
        if ((int)uVar26 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar21 = UKismetMathLibrary::TInterpTo
                            (&local_108,
                             (TTransform<double> *)
                             ((this->Lerp_HandIK_Transforms).AllocatorInstance.Data +
                             (longlong)(int)uVar26 * 0x70 + 0x10),
                             (TTransform<double> *)(pFVar3 + (longlong)(int)uVar26 * 0x70 + 0x10),
                             fVar2,fVar1);
        uVar28 = *(undefined4 *)(pTVar21->Rotation).XY.m128d_f64;
        uVar29 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 4);
        uVar30 = *(undefined4 *)((pTVar21->Rotation).XY.m128d_f64 + 1);
        uVar31 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 0xc);
        uVar32 = *(undefined4 *)(pTVar21->Rotation).ZW.m128d_f64;
        uVar33 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 4);
        uVar34 = *(undefined4 *)((pTVar21->Rotation).ZW.m128d_f64 + 1);
        uVar35 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 0xc);
        uVar36 = *(undefined4 *)(pTVar21->Translation).XY.m128d_f64;
        uVar37 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 4);
        uVar38 = *(undefined4 *)((pTVar21->Translation).XY.m128d_f64 + 1);
        uVar39 = *(undefined4 *)((longlong)(pTVar21->Translation).XY.m128d_f64 + 0xc);
        uVar40 = *(undefined4 *)(pTVar21->Translation).ZW.m128d_f64;
        uVar41 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 4);
        uVar42 = *(undefined4 *)((pTVar21->Translation).ZW.m128d_f64 + 1);
        uVar43 = *(undefined4 *)((longlong)(pTVar21->Translation).ZW.m128d_f64 + 0xc);
        uVar44 = *(undefined4 *)(pTVar21->Scale3D).XY.m128d_f64;
        uVar45 = *(undefined4 *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 4);
        uVar46 = *(undefined4 *)((pTVar21->Scale3D).XY.m128d_f64 + 1);
        uVar47 = *(undefined4 *)((longlong)(pTVar21->Scale3D).XY.m128d_f64 + 0xc);
        uVar48 = *(undefined4 *)(pTVar21->Scale3D).ZW.m128d_f64;
        uVar49 = *(undefined4 *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4);
        uVar50 = *(undefined4 *)((pTVar21->Scale3D).ZW.m128d_f64 + 1);
        uVar51 = *(undefined4 *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc);
        uVar19 = 0;
        if ((int)uVar26 < (this->Lerp_HandIK_Transforms).ArrayNum) {
          uVar19 = uVar23;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      piVar25 = &param_2->ArrayMax;
      pFVar24 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data;
      pFVar3 = pFVar24 + lVar27 + 0x10;
      *(undefined4 *)pFVar3 = uVar28;
      *(undefined4 *)(pFVar3 + 4) = uVar29;
      *(undefined4 *)(pFVar3 + 8) = uVar30;
      *(undefined4 *)(pFVar3 + 0xc) = uVar31;
      pFVar3 = pFVar24 + lVar27 + 0x20;
      *(undefined4 *)pFVar3 = uVar32;
      *(undefined4 *)(pFVar3 + 4) = uVar33;
      *(undefined4 *)(pFVar3 + 8) = uVar34;
      *(undefined4 *)(pFVar3 + 0xc) = uVar35;
      pFVar3 = pFVar24 + lVar27 + 0x30;
      *(undefined4 *)pFVar3 = uVar36;
      *(undefined4 *)(pFVar3 + 4) = uVar37;
      *(undefined4 *)(pFVar3 + 8) = uVar38;
      *(undefined4 *)(pFVar3 + 0xc) = uVar39;
      pFVar3 = pFVar24 + lVar27 + 0x40;
      *(undefined4 *)pFVar3 = uVar40;
      *(undefined4 *)(pFVar3 + 4) = uVar41;
      *(undefined4 *)(pFVar3 + 8) = uVar42;
      *(undefined4 *)(pFVar3 + 0xc) = uVar43;
      pFVar3 = pFVar24 + lVar27 + 0x50;
      *(undefined4 *)pFVar3 = uVar44;
      *(undefined4 *)(pFVar3 + 4) = uVar45;
      *(undefined4 *)(pFVar3 + 8) = uVar46;
      *(undefined4 *)(pFVar3 + 0xc) = uVar47;
      pFVar24 = pFVar24 + lVar27 + 0x60;
      *(undefined4 *)pFVar24 = uVar48;
      *(undefined4 *)(pFVar24 + 4) = uVar49;
      *(undefined4 *)(pFVar24 + 8) = uVar50;
      *(undefined4 *)(pFVar24 + 0xc) = uVar51;
      uVar19 = 0;
      if ((int)uVar26 < (this->Lerp_HandIK_Transforms).ArrayNum) {
        uVar19 = uVar23;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar24 = (this->Lerp_HandIK_Transforms).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x70
      ;
      if (((pFVar3 <= pFVar24) && (pFVar24 < pFVar3 + (longlong)*piVar25 * 0x70)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = param_2->ArrayNum;
      if (iVar20 == *piVar25) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,piVar25);
      }
      param_2->ArrayNum = iVar20 + 1;
      uVar17 = *(undefined8 *)(pFVar24 + 8);
      uVar26 = uVar26 + 1;
      lVar27 = lVar27 + 0x70;
      lVar22 = (longlong)iVar20 * 0x70;
      pFVar3 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar3 + lVar22) = *(undefined8 *)pFVar24;
      *(undefined8 *)(pFVar3 + lVar22 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x18);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10) = *(undefined8 *)(pFVar24 + 0x10);
      *(undefined8 *)(pFVar3 + lVar22 + 0x10 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x28);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20) = *(undefined8 *)(pFVar24 + 0x20);
      *(undefined8 *)(pFVar3 + lVar22 + 0x20 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x38);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30) = *(undefined8 *)(pFVar24 + 0x30);
      *(undefined8 *)(pFVar3 + lVar22 + 0x30 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x48);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40) = *(undefined8 *)(pFVar24 + 0x40);
      *(undefined8 *)(pFVar3 + lVar22 + 0x40 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x58);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50) = *(undefined8 *)(pFVar24 + 0x50);
      *(undefined8 *)(pFVar3 + lVar22 + 0x50 + 8) = uVar17;
      uVar17 = *(undefined8 *)(pFVar24 + 0x68);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60) = *(undefined8 *)(pFVar24 + 0x60);
      *(undefined8 *)(pFVar3 + lVar22 + 0x60 + 8) = uVar17;
    } while ((int)uVar26 < (this->HandIK_Transforms).ArrayNum);
  }
  return;
}

// GetChildBone @ 14d2f1110

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
FAnimNode_DragonAimSolver::GetChildBone
          (FAnimNode_DragonAimSolver *this,FName param_1,USkeletalMeshComponent *param_2)

{
  USkinnedMeshComponent *in_R9;
  
  USkinnedMeshComponent::GetBoneIndex(in_R9,(FName)param_2);
  USkinnedMeshComponent::GetBoneName(in_R9,param_1.ComparisonIndex.Value.Value);
  return param_1;
}

// GetCurrentLocation @ 14d2f11d0

TVector<double> * __thiscall
FAnimNode_DragonAimSolver::GetCurrentLocation
          (FAnimNode_DragonAimSolver *this,TVector<double> *__return_storage_ptr__,
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

// GetLODThreshold @ 14d2f2280

int __thiscall FAnimNode_DragonAimSolver::GetLODThreshold(FAnimNode_DragonAimSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d2f2790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonAimSolver::InitializeBoneReferences
          (FAnimNode_DragonAimSolver *this,FBoneContainer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  int *piVar8;
  int *piVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar13;
  ForElementType<unsigned_int> *pFVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  FName FVar17;
  undefined8 uVar18;
  FName FVar19;
  FDragonData_SpineFeetPair *pFVar20;
  USkeletalMeshComponent *this_00;
  code *pcVar21;
  ForElementType<unsigned_int> FVar22;
  FReferenceSkeleton *pFVar23;
  FBoneContainer *pFVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  FCompactPoseBoneIndex FVar29;
  FName *pFVar30;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar31;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar32;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar33;
  FScriptContainerElement *pFVar34;
  ulonglong uVar35;
  FBoneContainer *pFVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  FScriptContainerElement *pFVar41;
  longlong lVar42;
  uint uVar43;
  ForAnyElementType FVar44;
  ulonglong uVar45;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2a8 [8];
  ForAnyElementType local_2a0;
  int local_298;
  int iStack_294;
  longlong local_290;
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  FBoneReference local_278;
  undefined1 local_268 [8];
  FReferenceSkeleton *local_260;
  ForAnyElementType local_258;
  FBoneContainer *local_250;
  ForAnyElementType local_248;
  int iStack_240;
  int iStack_23c;
  undefined1 local_238 [8];
  undefined1 local_230 [16];
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> local_220;
  FBoneReference local_210;
  FName local_200;
  FName local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_1c8;
  FDragonData_SpineFeetPair local_1b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FVar33 = (this->dragon_input_data).Start_Spine;
  this->SavedBoneContainer = param_1;
  this->solve_should_fail = false;
  if (FVar33 == (this->dragon_input_data).Pelvis) {
    this->solve_should_fail = true;
  }
  (this->dragon_bone_data).Start_Spine.BoneName = FVar33;
  (this->dragon_bone_data).Start_Spine.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  puVar2 = &(this->dragon_bone_data).Start_Spine.field_0x8;
  (this->dragon_bone_data).Start_Spine.BoneIndex = -1;
  (this->dragon_bone_data).Start_Spine.bUseSkeletonIndex = 0;
  local_250 = param_1;
  FBoneReference::Initialize(&(this->dragon_bone_data).Start_Spine,param_1);
  (this->dragon_bone_data).Pelvis.BoneName = (this->dragon_input_data).Pelvis;
  (this->dragon_bone_data).Pelvis.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  puVar2 = &(this->dragon_bone_data).Pelvis.field_0x8;
  (this->dragon_bone_data).Pelvis.BoneIndex = -1;
  (this->dragon_bone_data).Pelvis.bUseSkeletonIndex = 0;
  FBoneReference::Initialize(&(this->dragon_bone_data).Pelvis,param_1);
  bVar25 = FBoneContainer::BoneIsChildOf
                     (param_1,(this->dragon_bone_data).Start_Spine.BoneIndex,
                      (this->dragon_bone_data).Pelvis.BoneIndex);
  if (!bVar25) {
    this->solve_should_fail = true;
  }
  if (this->Use_FName_Bone_Input == true) {
    (this->EndSplineBone).BoneName = this->Name_EndSpline_Bone;
    (this->EndSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar2 = &(this->EndSplineBone).field_0x8;
    (this->EndSplineBone).BoneIndex = -1;
    (this->EndSplineBone).bUseSkeletonIndex = 0;
    (this->StartSplineBone).BoneName = this->Name_StartSpline_Bone;
    (this->StartSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar2 = &(this->StartSplineBone).field_0x8;
    (this->StartSplineBone).BoneIndex = -1;
    (this->StartSplineBone).bUseSkeletonIndex = 0;
  }
  uVar38 = 0;
  if ((this->Use_Advanced_Input_Mode != false) &&
     (iVar27 = (this->Bone_Structure_Precise).Bone_Input.ArrayNum, 0 < iVar27)) {
    uVar37 = iVar27 - 1;
    uVar39 = 0;
    if ((int)uVar37 < iVar27) {
      uVar39 = ~uVar37 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    (this->EndSplineBone).BoneName =
         *(FName *)((this->Bone_Structure_Precise).Bone_Input.AllocatorInstance.Data +
                   (longlong)(int)uVar37 * 8);
    (this->EndSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar2 = &(this->EndSplineBone).field_0x8;
    (this->EndSplineBone).BoneIndex = -1;
    (this->EndSplineBone).bUseSkeletonIndex = 0;
    if (((this->Bone_Structure_Precise).Bone_Input.ArrayNum < 1) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    (this->StartSplineBone).BoneName =
         *(FName *)(this->Bone_Structure_Precise).Bone_Input.AllocatorInstance.Data;
    (this->StartSplineBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar2 = &(this->StartSplineBone).field_0x8;
    (this->StartSplineBone).BoneIndex = -1;
    (this->StartSplineBone).bUseSkeletonIndex = 0;
  }
  FBoneReference::Initialize(&this->EndSplineBone,this->SavedBoneContainer);
  FBoneReference::Initialize(&this->StartSplineBone,this->SavedBoneContainer);
  piVar1 = &(this->Hand_Array).ArrayMax;
  (this->Hand_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Hand_Array).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Elbow_Array).ArrayMax;
  (this->Elbow_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Elbow_Array).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Shoulder_Array).ArrayMax;
  (this->Shoulder_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Shoulder_Array).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Actual_Shoulder_Array).ArrayMax;
  (this->Actual_Shoulder_Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Actual_Shoulder_Array).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Lerp_HandIK_Transforms).ArrayNum;
  if (*piVar1 == 0) {
    iVar27 = (this->Aiming_Hand_Limbs).ArrayNum * 6;
    iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,iVar27,&(this->Lerp_HandIK_Transforms).AllocatorInstance,piVar1,
                        &(this->Lerp_HandIK_Transforms).ArrayMax);
    DefaultConstructItems<FBoneTransform,int>
              ((this->Lerp_HandIK_Transforms).AllocatorInstance.Data + (longlong)iVar26 * 0x70,
               iVar27);
  }
  piVar1 = &(this->Last_Shoulder_Angles).ArrayMax;
  (this->Last_Shoulder_Angles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Last_Shoulder_Angles).AllocatorInstance,0,piVar1);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::AddDefaulted
            (&this->Last_Shoulder_Angles,(this->Aiming_Hand_Limbs).ArrayNum);
  iVar27 = (this->Aiming_Hand_Limbs).ArrayNum;
  if ((this->Debug_Hand_Locations).ArrayNum < iVar27) {
    ResizeDebugLocations(this,iVar27);
  }
  if (0 < (this->Aiming_Hand_Limbs).ArrayNum) {
    pTVar3 = &this->Hand_Array;
    local_290 = 0;
    pTVar4 = &this->Elbow_Array;
    pTVar5 = &this->Shoulder_Array;
    pTVar6 = &this->Actual_Shoulder_Array;
    do {
      lVar42 = local_290;
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar34 = (pTVar3->AllocatorInstance).Data;
      pFVar41 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar42 + 0x30;
      if (((pFVar34 <= pFVar41) &&
          (pFVar41 < pFVar34 + (longlong)(this->Hand_Array).ArrayMax * 0x10)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar27 = (this->Hand_Array).ArrayNum;
      if (iVar27 == (this->Hand_Array).ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar3->AllocatorInstance,&(this->Hand_Array).ArrayMax);
      }
      (this->Hand_Array).ArrayNum = iVar27 + 1;
      uVar18 = *(undefined8 *)(pFVar41 + 8);
      pFVar34 = (pTVar3->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar34 = *(undefined8 *)pFVar41;
      *(undefined8 *)(pFVar34 + 8) = uVar18;
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar41 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + local_290 + 0x20;
      pFVar34 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar34 <= pFVar41) &&
          (pFVar41 < pFVar34 + (longlong)(this->Elbow_Array).ArrayMax * 0x10)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar27 = (this->Elbow_Array).ArrayNum;
      if (iVar27 == (this->Elbow_Array).ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar4->AllocatorInstance,&(this->Elbow_Array).ArrayMax);
      }
      (this->Elbow_Array).ArrayNum = iVar27 + 1;
      uVar18 = *(undefined8 *)(pFVar41 + 8);
      pFVar34 = (pTVar4->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar34 = *(undefined8 *)pFVar41;
      *(undefined8 *)(pFVar34 + 8) = uVar18;
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar34 = (pTVar5->AllocatorInstance).Data;
      pFVar41 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + local_290 + 0x10;
      if (((pFVar34 <= pFVar41) &&
          (pFVar41 < pFVar34 + (longlong)(this->Shoulder_Array).ArrayMax * 0x10)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar27 = (this->Shoulder_Array).ArrayNum;
      if (iVar27 == (this->Shoulder_Array).ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar5->AllocatorInstance,&(this->Shoulder_Array).ArrayMax);
      }
      (this->Shoulder_Array).ArrayNum = iVar27 + 1;
      uVar18 = *(undefined8 *)(pFVar41 + 8);
      pFVar34 = (pTVar5->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar34 = *(undefined8 *)pFVar41;
      *(undefined8 *)(pFVar34 + 8) = uVar18;
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar41 = (this->Aiming_Hand_Limbs).AllocatorInstance.Data + local_290 + 0x10;
      pFVar34 = (pTVar6->AllocatorInstance).Data;
      if (((pFVar34 <= pFVar41) &&
          (pFVar41 < pFVar34 + (longlong)(this->Actual_Shoulder_Array).ArrayMax * 0x10)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar27 = (this->Actual_Shoulder_Array).ArrayNum;
      if (iVar27 == (this->Actual_Shoulder_Array).ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&pTVar6->AllocatorInstance,&(this->Actual_Shoulder_Array).ArrayMax
                           );
      }
      (this->Actual_Shoulder_Array).ArrayNum = iVar27 + 1;
      uVar18 = *(undefined8 *)(pFVar41 + 8);
      pFVar34 = (pTVar6->AllocatorInstance).Data + (longlong)iVar27 * 0x10;
      *(undefined8 *)pFVar34 = *(undefined8 *)pFVar41;
      *(undefined8 *)(pFVar34 + 8) = uVar18;
      uVar39 = 0;
      if ((int)uVar38 < (this->Hand_Array).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      lVar42 = (longlong)(int)uVar38 * 0x10;
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar3->AllocatorInstance).Data + lVar42),
                 this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Elbow_Array).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar4->AllocatorInstance).Data + lVar42),
                 this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Shoulder_Array).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar5->AllocatorInstance).Data + lVar42),
                 this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Actual_Shoulder_Array).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar38 * 0x10)
                 ,this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      lVar42 = (longlong)(int)uVar38 * 0x200;
      FBoneReference::Initialize
                ((FBoneReference *)((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar42),
                 this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar42 + 0x44),
                 this->SavedBoneContainer);
      uVar39 = 0;
      if ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)
                 ((this->Aiming_Hand_Limbs).AllocatorInstance.Data + lVar42 + 0x54),
                 this->SavedBoneContainer);
      uVar38 = uVar38 + 1;
      local_290 = local_290 + 0x200;
    } while ((int)uVar38 < (this->Aiming_Hand_Limbs).ArrayNum);
  }
  pTVar7 = &this->Elbow_Bone_Transform_Array;
  this->debug_hands_initialized = true;
  piVar1 = &(this->Elbow_Bone_Transform_Array).ArrayMax;
  (this->Elbow_Bone_Transform_Array).ArrayNum = 0;
  if ((this->Elbow_Bone_Transform_Array).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  piVar8 = &(this->Hand_Default_Transform_Array).ArrayNum;
  *piVar8 = 0;
  piVar9 = &(this->Hand_Default_Transform_Array).ArrayMax;
  if (*piVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->Hand_Default_Transform_Array).AllocatorInstance,0,piVar9);
  }
  iVar27 = (this->Aiming_Hand_Limbs).ArrayNum;
  iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar27,&pTVar7->AllocatorInstance,
                      &(this->Elbow_Bone_Transform_Array).ArrayNum,piVar1);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((pTVar7->AllocatorInstance).Data + (longlong)iVar26 * 0x60,iVar27);
  iVar27 = (this->Aiming_Hand_Limbs).ArrayNum;
  iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x60,0x10,iVar27,&(this->Hand_Default_Transform_Array).AllocatorInstance,
                      piVar8,piVar9);
  DefaultConstructItems<UE::Math::TTransform<double>,int>
            ((this->Hand_Default_Transform_Array).AllocatorInstance.Data + (longlong)iVar26 * 0x60,
             iVar27);
  if (this->solve_should_fail == false) {
    DestructItems<FDragonData_SpineFeetPair,int>
              ((FDragonData_SpineFeetPair *)(this->spine_Feet_pair).AllocatorInstance.Data,
               (this->spine_Feet_pair).ArrayNum);
    uVar45 = 0;
    piVar1 = &(this->spine_Feet_pair).ArrayMax;
    (this->spine_Feet_pair).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x170,0x10,0,&(this->spine_Feet_pair).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Total_spine_bones).ArrayMax;
    (this->Total_spine_bones).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->Total_spine_bones).AllocatorInstance,0,piVar1);
    }
    if (this->test_counter < 10) {
      DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
                ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)
                 (this->spine_Transform_pairs).AllocatorInstance.Data,
                 (this->spine_Transform_pairs).ArrayNum);
      piVar1 = &(this->spine_Transform_pairs).ArrayMax;
      (this->spine_Transform_pairs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,0x10,0,&(this->spine_Transform_pairs).AllocatorInstance,0,piVar1);
      }
      DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
                ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)
                 (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data,
                 (this->spine_AnimatedTransform_pairs).ArrayNum);
      piVar1 = &(this->spine_AnimatedTransform_pairs).ArrayMax;
      (this->spine_AnimatedTransform_pairs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x160,0x10,0,&(this->spine_AnimatedTransform_pairs).AllocatorInstance,0,piVar1);
      }
      DestructItems<FDragonData_HitPairs,int>
                ((FDragonData_HitPairs *)(this->spine_hit_pairs).AllocatorInstance.Data,
                 (this->spine_hit_pairs).ArrayNum);
      piVar1 = &(this->spine_hit_pairs).ArrayMax;
      (this->spine_hit_pairs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x5f8,8,0,&(this->spine_hit_pairs).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->spine_LocDifference).ArrayMax;
      (this->spine_LocDifference).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->spine_LocDifference).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->spine_RotDifference).ArrayMax;
      (this->spine_RotDifference).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->spine_RotDifference).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->Total_spine_heights).ArrayMax;
      (this->Total_spine_heights).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Total_spine_heights).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->Total_spine_alphas).ArrayMax;
      (this->Total_spine_alphas).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->Total_spine_alphas).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->spine_hit_between).ArrayMax;
      (this->spine_hit_between).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,8,0,&(this->spine_hit_between).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->spine_hit_edges).ArrayMax;
      (this->spine_hit_edges).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,8,0,&(this->spine_hit_edges).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->knee_Animated_transform_array).ArrayMax;
      (this->knee_Animated_transform_array).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->knee_Animated_transform_array).AllocatorInstance,0,piVar1);
      }
    }
    FVar33 = (this->dragon_input_data).Pelvis;
    pFVar30 = ::FName::FName(&local_200,"");
    FVar17 = *pFVar30;
    pFVar30 = ::FName::FName(&local_1f8,"");
    pTVar31 = BoneArrayMachine(this,&local_1d8,0,(this->dragon_input_data).Start_Spine,*pFVar30,
                               FVar17,FVar33,false);
    pTVar10 = &this->Total_spine_bones;
    if (pTVar10 != pTVar31) {
      pFVar34 = (pTVar10->AllocatorInstance).Data;
      if (pFVar34 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar34);
      }
      (pTVar10->AllocatorInstance).Data = (pTVar31->AllocatorInstance).Data;
      (pTVar31->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Total_spine_bones).ArrayNum = pTVar31->ArrayNum;
      (this->Total_spine_bones).ArrayMax = pTVar31->ArrayMax;
      pTVar31->ArrayNum = 0;
      pTVar31->ArrayMax = 0;
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    iVar27 = (this->Total_spine_bones).ArrayNum;
    pFVar34 = (this->Total_spine_bones).AllocatorInstance.Data;
    iVar26 = iVar27 / 2;
    if (0 < iVar26) {
      uVar35 = uVar45;
      pFVar41 = pFVar34 + (longlong)(iVar27 + -1) * 8;
      do {
        uVar18 = *(undefined8 *)(pFVar34 + uVar35 * 8);
        *(undefined8 *)(pFVar34 + uVar35 * 8) = *(undefined8 *)pFVar41;
        uVar35 = uVar35 + 1;
        *(undefined8 *)pFVar41 = uVar18;
        pFVar41 = pFVar41 + -8;
      } while ((longlong)uVar35 < (longlong)iVar26);
    }
    iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
    this->solve_should_fail = false;
    uVar35 = uVar45;
    if (0 < iVar27) {
      do {
        uVar40 = 0;
        uVar38 = (uint)uVar35;
        uVar35 = uVar40;
        if (0 < iVar27) {
          do {
            uVar39 = (uint)uVar40;
            if (uVar38 != uVar39) {
              uVar37 = 0;
              if ((int)uVar39 < iVar27) {
                uVar37 = ~uVar39 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar21 = (code *)swi(3);
                (*pcVar21)();
                return;
              }
              pFVar34 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
              uVar37 = 0;
              if ((int)uVar38 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar37 = ~uVar38 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar25)) {
                pcVar21 = (code *)swi(3);
                (*pcVar21)();
                return;
              }
              if (*(longlong *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + uVar45)
                  == *(longlong *)(pFVar34 + uVar35)) {
                this->solve_should_fail = true;
              }
            }
            iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
            uVar40 = (ulonglong)(uVar39 + 1);
            uVar35 = uVar35 + 0xd0;
          } while ((int)(uVar39 + 1) < iVar27);
        }
        FVar33 = (this->dragon_input_data).Pelvis;
        uVar37 = ~uVar38 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar38 < iVar27) {
          uVar39 = uVar37;
        }
        if ((uVar39 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        uVar39 = 0;
        if ((int)uVar38 < (this->dragon_input_data).FeetBones.ArrayNum) {
          uVar39 = uVar37;
        }
        FVar17 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                           uVar45 + 0x18);
        if ((uVar39 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        uVar39 = 0;
        if ((int)uVar38 < (this->dragon_input_data).FeetBones.ArrayNum) {
          uVar39 = uVar37;
        }
        FVar19 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + uVar45 + 8)
        ;
        if ((uVar39 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        BoneArrayMachine(this,&local_1c8,uVar38,
                         *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                                   uVar45),FVar19,FVar17,FVar33,true);
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
        uVar45 = uVar45 + 0xd0;
        uVar35 = (ulonglong)(uVar38 + 1);
      } while ((int)(uVar38 + 1) < iVar27);
    }
    uVar45 = 0;
    (this->Spine_Indices).ArrayNum = 0;
    if ((this->Spine_Indices).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Spine_Indices).AllocatorInstance,0,&(this->Spine_Indices).ArrayMax);
    }
    (this->Total_spine_angles).ArrayNum = 0;
    if ((this->Total_spine_angles).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Total_spine_angles).AllocatorInstance,0,
                 &(this->Total_spine_angles).ArrayMax);
    }
    (this->Total_Terrain_Locations).ArrayNum = 0;
    if ((this->Total_Terrain_Locations).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->Total_Terrain_Locations).AllocatorInstance,0,
                 &(this->Total_Terrain_Locations).ArrayMax);
    }
    iVar27 = (this->spine_Feet_pair).ArrayNum;
    pFVar20 = (FDragonData_SpineFeetPair *)(this->spine_Feet_pair).AllocatorInstance.Data;
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = iVar27;
    if (iVar27 == 0) {
      local_27c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x170,0x10,iVar27,0,&local_288,iVar27,&local_27c);
      ConstructItems<FDragonData_SpineFeetPair,FDragonData_SpineFeetPair,int>
                (local_288.Data,pFVar20,iVar27);
    }
    iVar27 = local_280;
    if (this->test_counter < 10) {
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_280,&(this->Total_spine_alphas).AllocatorInstance,
                          &(this->Total_spine_alphas).ArrayNum,&(this->Total_spine_alphas).ArrayMax)
      ;
      memset((this->Total_spine_alphas).AllocatorInstance.Data + (longlong)iVar26 * 4,0,
             (longlong)iVar27 << 2);
    }
    uVar35 = uVar45;
    uVar40 = uVar45;
    iVar27 = local_280;
    if (0 < local_280) {
      do {
        uVar38 = (uint)uVar45;
        if (this->test_counter < 10) {
          uVar39 = 0;
          if ((int)uVar38 < (this->Total_spine_alphas).ArrayNum) {
            uVar39 = ~uVar38 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          *(undefined4 *)((this->Total_spine_alphas).AllocatorInstance.Data + uVar35) = 0;
          iVar27 = local_280;
        }
        uVar37 = ~uVar38 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar38 < iVar27) {
          uVar39 = uVar37;
        }
        if ((uVar39 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), iVar27 = local_280, bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        if ((*(int *)(local_288.Data + uVar40 + 0x28) == 0) && ((int)uVar38 < iVar27)) {
          uVar39 = 0;
          if ((int)uVar38 < iVar27) {
            uVar39 = uVar37;
          }
          if ((uVar39 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::Remove
                    (&this->spine_Feet_pair,
                     (FDragonData_SpineFeetPair *)(local_288.Data + (longlong)(int)uVar38 * 0x170));
          iVar27 = local_280;
        }
        uVar45 = (ulonglong)(uVar38 + 1);
        uVar35 = uVar35 + 4;
        uVar40 = uVar40 + 0x170;
      } while ((int)(uVar38 + 1) < iVar27);
    }
    uVar45 = 0;
    iVar27 = (this->spine_Feet_pair).ArrayNum;
    if ((this->spine_Feet_pair).ArrayMax != iVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x170,0x10,iVar27,&(this->spine_Feet_pair).AllocatorInstance,iVar27,
                 &(this->spine_Feet_pair).ArrayMax);
    }
    if ((this->spine_Feet_pair).ArrayNum == 1) {
      memset(&local_1b8,0,0x170);
      FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_1b8);
      iVar27 = (this->Total_spine_bones).ArrayNum;
      uVar39 = iVar27 - 1;
      uVar38 = 0;
      if ((int)uVar39 < iVar27) {
        uVar38 = ~uVar39 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      local_1b8.Spine_Involved.BoneName =
           *(FName *)((this->Total_spine_bones).AllocatorInstance.Data + (longlong)(int)uVar39 * 8);
      local_1b8.Spine_Involved.bUseSkeletonIndex = 0;
      local_1b8.Spine_Involved.BoneIndex = -1;
      local_1b8.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize(&local_1b8.Spine_Involved,this->SavedBoneContainer);
      pTVar11 = &this->spine_Feet_pair;
      pFVar20 = (FDragonData_SpineFeetPair *)(pTVar11->AllocatorInstance).Data;
      if (((pFVar20 <= &local_1b8) && (&local_1b8 < pFVar20 + (this->spine_Feet_pair).ArrayMax)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      if (iVar27 == (this->spine_Feet_pair).ArrayMax) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x170,0x10,&pTVar11->AllocatorInstance,&(this->spine_Feet_pair).ArrayMax
                           );
      }
      (this->spine_Feet_pair).ArrayNum = iVar27 + 1;
      FDragonData_SpineFeetPair::FDragonData_SpineFeetPair
                ((FDragonData_SpineFeetPair *)
                 ((pTVar11->AllocatorInstance).Data + (longlong)iVar27 * 0x170),&local_1b8);
      FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_1b8);
    }
    else {
      pTVar32 = Swap_Spine_Pairs(this,&local_220,&this->spine_Feet_pair);
      pTVar11 = &this->spine_Feet_pair;
      if (pTVar11 != pTVar32) {
        DestructItems<FDragonData_SpineFeetPair,int>
                  ((FDragonData_SpineFeetPair *)(pTVar11->AllocatorInstance).Data,
                   (this->spine_Feet_pair).ArrayNum);
        pFVar34 = (pTVar11->AllocatorInstance).Data;
        if (pFVar34 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar34);
        }
        (pTVar11->AllocatorInstance).Data = (pTVar32->AllocatorInstance).Data;
        (pTVar32->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->spine_Feet_pair).ArrayNum = pTVar32->ArrayNum;
        (this->spine_Feet_pair).ArrayMax = pTVar32->ArrayMax;
        pTVar32->ArrayNum = 0;
        pTVar32->ArrayMax = 0;
      }
      DestructItems<FDragonData_SpineFeetPair,int>
                ((FDragonData_SpineFeetPair *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
      if ((FDragonData_SpineFeetPair *)local_220.AllocatorInstance.Data !=
          (FDragonData_SpineFeetPair *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
    }
    if (this->test_counter < 10) {
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x5f8,8,iVar27,&(this->spine_hit_pairs).AllocatorInstance,
                          &(this->spine_hit_pairs).ArrayNum,&(this->spine_hit_pairs).ArrayMax);
      DefaultConstructItems<FDragonData_HitPairs,int>
                ((this->spine_hit_pairs).AllocatorInstance.Data + (longlong)iVar26 * 0x5f8,iVar27);
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x160,0x10,iVar27,&(this->spine_Transform_pairs).AllocatorInstance,
                          &(this->spine_Transform_pairs).ArrayNum,
                          &(this->spine_Transform_pairs).ArrayMax);
      DefaultConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
                ((this->spine_Transform_pairs).AllocatorInstance.Data + (longlong)iVar26 * 0x160,
                 iVar27);
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x160,0x10,iVar27,&(this->spine_AnimatedTransform_pairs).AllocatorInstance
                          ,&(this->spine_AnimatedTransform_pairs).ArrayNum,
                          &(this->spine_AnimatedTransform_pairs).ArrayMax);
      DefaultConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
                ((this->spine_AnimatedTransform_pairs).AllocatorInstance.Data +
                 (longlong)iVar26 * 0x160,iVar27);
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar27,&(this->Total_spine_angles).AllocatorInstance,
                          &(this->Total_spine_angles).ArrayNum,&(this->Total_spine_angles).ArrayMax)
      ;
      memset((this->Total_spine_angles).AllocatorInstance.Data + (longlong)iVar26 * 4,0,
             (longlong)iVar27 << 2);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(this->spine_Feet_pair).ArrayNum,
                 &(this->Total_Terrain_Locations).AllocatorInstance,
                 &(this->Total_Terrain_Locations).ArrayNum,&(this->Total_Terrain_Locations).ArrayMax
                );
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(this->spine_Feet_pair).ArrayNum,
                 &(this->spine_LocDifference).AllocatorInstance,
                 &(this->spine_LocDifference).ArrayNum,&(this->spine_LocDifference).ArrayMax);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(this->spine_Feet_pair).ArrayNum,
                 &(this->spine_RotDifference).AllocatorInstance,
                 &(this->spine_RotDifference).ArrayNum,&(this->spine_RotDifference).ArrayMax);
      iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,0x10,iVar27,&(this->knee_Animated_transform_array).AllocatorInstance,
                          &(this->knee_Animated_transform_array).ArrayNum,
                          &(this->knee_Animated_transform_array).ArrayMax);
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                ((this->knee_Animated_transform_array).AllocatorInstance.Data +
                 (longlong)iVar26 * 0x60,iVar27);
    }
    iVar27 = (this->spine_Feet_pair).ArrayNum;
    if (0 < iVar27) {
      local_290 = 0;
      local_258.Data = (FScriptContainerElement *)0x0;
      local_260 = (FReferenceSkeleton *)0x0;
      uVar35 = uVar45;
      do {
        uVar38 = 0;
        uVar39 = (uint)uVar35;
        this->every_foot_dont_have_child = false;
        this->feet_is_empty = true;
        uVar37 = ~uVar39 >> 0x1f;
        while( true ) {
          uVar43 = 0;
          uVar28 = uVar43;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar28 = uVar37;
          }
          if ((uVar28 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = (this->spine_Feet_pair).ArrayNum;
          if (*(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28) <=
              (int)uVar38) break;
          local_230._8_8_ = this->owning_skel;
          if ((int)uVar39 < iVar27) {
            uVar43 = uVar37;
          }
          if ((uVar43 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          uVar28 = 0;
          if ((int)uVar38 < *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28)
             ) {
            uVar28 = ~uVar38 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          local_210.BoneName =
               USkinnedMeshComponent::GetParentBone
                         ((USkinnedMeshComponent *)local_230._8_8_,(FName)local_1f0);
          local_210.BoneName = *(FName *)local_210.BoneName;
          local_210.bUseSkeletonIndex = 0;
          local_210.BoneIndex = -1;
          local_210.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
          FBoneReference::Initialize(&local_210,this->SavedBoneContainer);
          uVar38 = uVar38 + 1;
        }
        uVar38 = uVar43;
        if ((int)uVar39 < iVar27) {
          uVar38 = uVar37;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        lVar42 = local_290;
        pFVar34 = (this->spine_Feet_pair).AllocatorInstance.Data;
        uVar38 = uVar43;
        if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
        iVar26 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar27,(ForAnyElementType *)(pFVar34 + uVar45 + 0xc0),
                            (int *)(pFVar34 + uVar45 + 200),(int *)(pFVar34 + uVar45 + 0xcc));
        memset((void *)(*(longlong *)(pFVar34 + uVar45 + 0xc0) + (longlong)iVar26 * 4),0,
               (longlong)iVar27 << 2);
        FVar44.Data = local_258.Data;
        if (this->test_counter < 10) {
          if ((int)uVar39 < (this->spine_hit_pairs).ArrayNum) {
            uVar43 = ~uVar39 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar23 = local_260;
          pFVar34 = (this->spine_hit_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x100,8,iVar27,
                              (ForAnyElementType *)
                              (pFVar34 + (longlong)&pFVar23[5].RawRefBoneInfo.AllocatorInstance),
                              (int *)(pFVar34 + 8 +
                                     (longlong)&pFVar23[5].RawRefBoneInfo.AllocatorInstance),
                              (int *)(pFVar34 + 0xc +
                                     (longlong)&pFVar23[5].RawRefBoneInfo.AllocatorInstance));
          DefaultConstructItems<FHitResult,int>
                    ((void *)((longlong)iVar26 * 0x100 +
                             *(longlong *)
                              (pFVar34 + (longlong)&pFVar23[5].RawRefBoneInfo.AllocatorInstance)),
                     iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Transform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          FVar44.Data = local_258.Data;
          pFVar34 = (this->spine_Transform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x98)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0xa0)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0xa4)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x98))),iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Transform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar34 = (this->spine_Transform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x138)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x140)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x144)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x138))),iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Transform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar34 = (this->spine_Transform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x128)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x130)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x134)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x128))),iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar34 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x98)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0xa0)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0xa4)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x98))),iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar34 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x138)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x140)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x144)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x138))),iVar27);
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          pFVar34 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
          uVar38 = 0;
          if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          if ((uVar38 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28);
          iVar26 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x60,0x10,iVar27,
                              (ForAnyElementType *)(FVar44.Data + (longlong)(pFVar34 + 0x128)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x130)),
                              (int *)(FVar44.Data + (longlong)(pFVar34 + 0x134)));
          DefaultConstructItems<UE::Math::TTransform<double>,int>
                    ((void *)((longlong)iVar26 * 0x60 +
                             *(longlong *)(FVar44.Data + (longlong)(pFVar34 + 0x128))),iVar27);
        }
        uVar38 = 0;
        if ((int)uVar39 < (this->spine_Feet_pair).ArrayNum) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        if (0 < *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar45 + 0x28)) {
          this->feet_is_empty = false;
        }
        local_260 = (FReferenceSkeleton *)&local_260[5].RawNameToIndexMap.field_0x40;
        local_258.Data = FVar44.Data + 0x160;
        iVar27 = (this->spine_Feet_pair).ArrayNum;
        local_290 = lVar42 + 1;
        uVar35 = (ulonglong)(uVar39 + 1);
        uVar45 = uVar45 + 0x170;
      } while ((int)(uVar39 + 1) < iVar27);
    }
    uVar45 = 0;
    if ((this->dragon_input_data).Start_Spine == (this->dragon_input_data).Pelvis) {
      this->solve_should_fail = true;
    }
    if (0 < iVar27) {
      uVar38 = iVar27 - 1;
      uVar39 = 0;
      if ((int)uVar38 < iVar27) {
        uVar39 = ~uVar38 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pFVar34 = (this->spine_Feet_pair).AllocatorInstance.Data;
      if (((this->spine_Feet_pair).ArrayNum < 1) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      if (*(int *)(pFVar34 + (longlong)(int)uVar38 * 0x170 + 8) * 2 <
          *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + 8) * 2) {
        this->solve_should_fail = true;
      }
    }
    pFVar24 = local_250;
    bVar25 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Start_Spine,local_250);
    if ((!bVar25) ||
       (bVar25 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Pelvis,pFVar24),
       !bVar25)) {
      this->solve_should_fail = true;
    }
    (this->Extra_Spine_Indices).ArrayNum = 0;
    if ((this->Extra_Spine_Indices).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Extra_Spine_Indices).AllocatorInstance,0,
                 &(this->Extra_Spine_Indices).ArrayMax);
    }
    if (0 < (this->spine_Feet_pair).ArrayNum) {
      pFVar30 = (FName *)(this->spine_Feet_pair).AllocatorInstance.Data;
      *pFVar30 = (this->dragon_bone_data).Pelvis.BoneName;
      uVar15 = *(undefined4 *)&(this->dragon_bone_data).Pelvis.field_0x8;
      pFVar30[1].ComparisonIndex.Value =
           (uVar15 ^ pFVar30[1].ComparisonIndex.Value) & 0x80000000 ^ uVar15;
      uVar16 = *(undefined4 *)&(this->dragon_bone_data).Pelvis.field_0x8;
      pFVar30[1].ComparisonIndex.Value =
           (SPULL(uVar15,0,0x1f) ^ SPULL(uVar16,0,0x1f)) & 0x7fffffffU ^ uVar16;
      pFVar30[1].Number = (uint)(this->dragon_bone_data).Pelvis.CachedCompactPoseIndex;
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      if (1 < iVar27) {
        uVar39 = iVar27 - 1;
        uVar38 = 0;
        if ((int)uVar39 < iVar27) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        pFVar34 = (this->spine_Feet_pair).AllocatorInstance.Data;
        lVar42 = (longlong)(int)uVar39 * 0x170;
        *(FName *)(pFVar34 + lVar42) = (this->dragon_bone_data).Start_Spine.BoneName;
        uVar15 = *(undefined4 *)&(this->dragon_bone_data).Start_Spine.field_0x8;
        *(uint *)(pFVar34 + lVar42 + 8) =
             (uVar15 ^ *(uint *)(pFVar34 + lVar42 + 8)) & 0x80000000 ^ uVar15;
        uVar16 = *(undefined4 *)&(this->dragon_bone_data).Start_Spine.field_0x8;
        *(uint *)(pFVar34 + lVar42 + 8) =
             (SPULL(uVar15,0,0x1f) ^ SPULL(uVar16,0,0x1f)) & 0x7fffffffU ^ uVar16;
        *(FCompactPoseBoneIndex *)(pFVar34 + lVar42 + 0xc) =
             (this->dragon_bone_data).Start_Spine.CachedCompactPoseIndex;
      }
    }
    if (0 < (this->Total_spine_bones).ArrayNum) {
      pTVar12 = &this->Extra_Spine_Indices;
      pTVar13 = &this->Spine_Indices;
      uVar35 = uVar45;
      do {
        uVar39 = (uint)uVar45;
        uVar38 = 0;
        if ((int)uVar39 < (this->Total_spine_bones).ArrayNum) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        local_278.BoneName = *(FName *)((this->Total_spine_bones).AllocatorInstance.Data + uVar35);
        local_278.bUseSkeletonIndex = 0;
        local_278.BoneIndex = -1;
        local_278.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_278,pFVar24);
        iVar27 = (this->spine_Feet_pair).ArrayNum;
        if (iVar27 < 1) {
          pFVar36 = (FBoneContainer *)local_230;
LAB_14d2f4de7:
          FVar29 = FBoneReference::GetCompactPoseIndex(&local_278,pFVar36);
          pFVar41 = (FScriptContainerElement *)CONCAT44(extraout_var_00,FVar29);
          pFVar34 = (pTVar13->AllocatorInstance).Data;
          if (((pFVar34 <= pFVar41) &&
              (pFVar41 < pFVar34 + (longlong)(this->Spine_Indices).ArrayMax * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = (this->Spine_Indices).ArrayNum;
          if (iVar27 == (this->Spine_Indices).ArrayMax) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar13->AllocatorInstance,&(this->Spine_Indices).ArrayMax);
          }
          (this->Spine_Indices).ArrayNum = iVar27 + 1;
          pFVar34 = (pTVar13->AllocatorInstance).Data;
        }
        else {
          if (*(int *)((this->spine_Feet_pair).AllocatorInstance.Data + 8) * 2 <=
              local_278._8_4_ * 2) {
            uVar37 = iVar27 - 1;
            uVar38 = 0;
            if ((int)uVar37 < iVar27) {
              uVar38 = ~uVar37 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
            if (local_278._8_4_ * 2 <=
                *(int *)((this->spine_Feet_pair).AllocatorInstance.Data +
                        (longlong)(int)uVar37 * 0x170 + 8) * 2) {
              pFVar36 = (FBoneContainer *)local_238;
              goto LAB_14d2f4de7;
            }
          }
          FVar29 = FBoneReference::GetCompactPoseIndex(&local_278,(FBoneContainer *)(local_238 + 4))
          ;
          pFVar41 = (FScriptContainerElement *)CONCAT44(extraout_var,FVar29);
          pFVar34 = (pTVar12->AllocatorInstance).Data;
          if (((pFVar34 <= pFVar41) &&
              (pFVar41 < pFVar34 + (longlong)(this->Extra_Spine_Indices).ArrayMax * 4)) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar25)) {
            pcVar21 = (code *)swi(3);
            (*pcVar21)();
            return;
          }
          iVar27 = (this->Extra_Spine_Indices).ArrayNum;
          if (iVar27 == (this->Extra_Spine_Indices).ArrayMax) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar12->AllocatorInstance,
                                &(this->Extra_Spine_Indices).ArrayMax);
          }
          (this->Extra_Spine_Indices).ArrayNum = iVar27 + 1;
          pFVar34 = (pTVar12->AllocatorInstance).Data;
        }
        uVar45 = (ulonglong)(uVar39 + 1);
        uVar35 = uVar35 + 8;
        *(undefined4 *)(pFVar34 + (longlong)iVar27 * 4) = *(undefined4 *)pFVar41;
      } while ((int)(uVar39 + 1) < (this->Total_spine_bones).ArrayNum);
    }
    uVar45 = 0;
    if (this->test_counter < 10) {
      (this->spine_between_transforms).ArrayNum = 0;
      if ((this->spine_between_transforms).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->spine_between_transforms).AllocatorInstance,0,
                   &(this->spine_between_transforms).ArrayMax);
      }
      (this->spine_between_heights).ArrayNum = 0;
      if ((this->spine_between_heights).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->spine_between_heights).AllocatorInstance,0,
                   &(this->spine_between_heights).ArrayMax);
      }
    }
    (this->combined_indices).ArrayNum = 0;
    if ((this->combined_indices).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->combined_indices).AllocatorInstance,0,
                 &(this->combined_indices).ArrayMax);
    }
    if ((1 < (this->spine_Feet_pair).ArrayNum) && (this->solve_should_fail == false)) {
      local_2a0.Data = (FScriptContainerElement *)0x0;
      local_298 = 0;
      iStack_294 = 0;
      FBoneReference::GetCompactPoseIndex
                ((FBoneReference *)(this->spine_Feet_pair).AllocatorInstance.Data,
                 (FBoneContainer *)local_268);
      iVar27 = (this->spine_Feet_pair).ArrayNum;
      uVar39 = iVar27 - 1;
      uVar38 = 0;
      if ((int)uVar39 < iVar27) {
        uVar38 = ~uVar39 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      FBoneReference::GetCompactPoseIndex
                ((FBoneReference *)
                 ((this->spine_Feet_pair).AllocatorInstance.Data + (longlong)(int)uVar39 * 0x170),
                 (FBoneContainer *)local_2a8);
      do {
        if (((local_2a0.Data <= (FScriptContainerElement *)local_2a8) &&
            ((FScriptContainerElement *)local_2a8 < local_2a0.Data + (longlong)iStack_294 * 4)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        if (local_298 == iStack_294) {
          local_298 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_2a0,&iStack_294);
        }
        lVar42 = (longlong)local_298;
        local_298 = local_298 + 1;
        memmove(local_2a0.Data + 4,local_2a0.Data,lVar42 << 2);
        *(undefined4 *)local_2a0.Data = local_2a8._0_4_;
        this_00 = this->owning_skel;
        USkinnedMeshComponent::GetBoneName((USkinnedMeshComponent *)this_00,(int)local_1e8);
        FVar33 = USkinnedMeshComponent::GetParentBone
                           ((USkinnedMeshComponent *)this_00,(FName)local_1e0);
        local_2a8._0_4_ =
             USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_00,*(FName *)FVar33);
      } while (local_2a8._0_4_ != local_268._0_4_);
      if (((local_2a0.Data <= (FScriptContainerElement *)local_2a8) &&
          ((FScriptContainerElement *)local_2a8 < local_2a0.Data + (longlong)iStack_294 * 4)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      if (local_298 == iStack_294) {
        local_298 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_2a0,&iStack_294);
      }
      lVar42 = (longlong)local_298;
      local_298 = local_298 + 1;
      memmove(local_2a0.Data + 4,local_2a0.Data,lVar42 << 2);
      FVar44.Data = local_2a0.Data;
      pTVar12 = &this->combined_indices;
      *(undefined4 *)local_2a0.Data = local_2a8._0_4_;
      if (pTVar12 != (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)&local_2a0) {
        iVar26 = local_298;
        lVar42 = (longlong)local_298;
        iVar27 = (this->combined_indices).ArrayMax;
        (this->combined_indices).ArrayNum = local_298;
        if ((local_298 == 0) && (iVar27 == 0)) {
          (this->combined_indices).ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_298,iVar27,&pTVar12->AllocatorInstance,local_298,
                     &(this->combined_indices).ArrayMax);
          if (iVar26 != 0) {
            memcpy((pTVar12->AllocatorInstance).Data,FVar44.Data,lVar42 << 2);
          }
        }
      }
      if (this->test_counter < 10) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(this->combined_indices).ArrayNum + -2,
                   &(this->spine_between_transforms).AllocatorInstance,
                   &(this->spine_between_transforms).ArrayNum,
                   &(this->spine_between_transforms).ArrayMax);
        iVar27 = (this->combined_indices).ArrayNum;
        iVar26 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,8,iVar27 + -2,&(this->spine_hit_edges).AllocatorInstance,
                            &(this->spine_hit_edges).ArrayNum,&(this->spine_hit_edges).ArrayMax);
        DefaultConstructItems<FHitResult,int>
                  ((this->spine_hit_edges).AllocatorInstance.Data + (longlong)iVar26 * 0x100,
                   iVar27 + -2);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(this->combined_indices).ArrayNum + -2,
                   &(this->spine_between_offseted_transforms).AllocatorInstance,
                   &(this->spine_between_offseted_transforms).ArrayNum,
                   &(this->spine_between_offseted_transforms).ArrayMax);
        iVar26 = (this->combined_indices).ArrayNum + -2;
        iVar27 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar26,&(this->spine_between_heights).AllocatorInstance,
                            &(this->spine_between_heights).ArrayNum,
                            &(this->spine_between_heights).ArrayMax);
        memset((this->spine_between_heights).AllocatorInstance.Data + (longlong)iVar27 * 4,0,
               (longlong)iVar26 << 2);
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(this->combined_indices).ArrayNum,
                   &(this->snake_spine_positions).AllocatorInstance,
                   &(this->snake_spine_positions).ArrayNum,&(this->snake_spine_positions).ArrayMax);
      }
      if (local_2a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data);
      }
    }
    if (this->test_counter < 10) {
      iVar27 = (this->spine_between_transforms).ArrayNum;
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,8,iVar27,&(this->spine_hit_between).AllocatorInstance,
                          &(this->spine_hit_between).ArrayNum,&(this->spine_hit_between).ArrayMax);
      DefaultConstructItems<FHitResult,int>
                ((this->spine_hit_between).AllocatorInstance.Data + (longlong)iVar26 * 0x100,iVar27)
      ;
    }
    if ((this->dragon_input_data).Pelvis == (this->dragon_input_data).Start_Spine) {
      this->solve_should_fail = true;
    }
    bVar25 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Start_Spine,pFVar24);
    if ((!bVar25) ||
       (bVar25 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Pelvis,pFVar24),
       !bVar25)) {
      this->solve_should_fail = true;
    }
    pTVar3 = &(this->dragon_bone_data).FeetBones;
    iVar27 = (this->dragon_bone_data).FeetBones.ArrayMax;
    piVar1 = &(this->dragon_bone_data).FeetBones.ArrayMax;
    (this->dragon_bone_data).FeetBones.ArrayNum = 0;
    if (iVar27 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&pTVar3->AllocatorInstance,0,piVar1);
    }
    iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
    uVar35 = uVar45;
    if (0 < iVar27) {
      do {
        uVar39 = (uint)uVar45;
        uVar38 = 0;
        if ((int)uVar39 < iVar27) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        local_248.Data =
             *(FScriptContainerElement **)
              ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + uVar35);
        pFVar34 = (pTVar3->AllocatorInstance).Data;
        iStack_240 = 0x7fffffff;
        iStack_23c = -1;
        if (((pFVar34 <= (FScriptContainerElement *)&local_248) &&
            ((FScriptContainerElement *)&local_248 <
             pFVar34 + (longlong)(this->dragon_bone_data).FeetBones.ArrayMax * 0x10)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        iVar27 = (this->dragon_bone_data).FeetBones.ArrayNum;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&pTVar3->AllocatorInstance,
                              &(this->dragon_bone_data).FeetBones.ArrayMax);
        }
        FVar22._4_4_ = iStack_23c;
        FVar22._0_4_ = iStack_240;
        (this->dragon_bone_data).FeetBones.ArrayNum = iVar27 + 1;
        pFVar14 = (ForElementType<unsigned_int> *)
                  ((pTVar3->AllocatorInstance).Data + (longlong)iVar27 * 0x10);
        *pFVar14 = (ForElementType<unsigned_int>)local_248.Data;
        pFVar14[1] = FVar22;
        uVar38 = 0;
        if ((int)uVar39 < (this->dragon_bone_data).FeetBones.ArrayNum) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        FBoneReference::Initialize
                  ((FBoneReference *)
                   ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar39 * 0x10),local_250);
        uVar38 = 0;
        if ((int)uVar39 < (this->dragon_bone_data).FeetBones.ArrayNum) {
          uVar38 = ~uVar39 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar21 = (code *)swi(3);
          (*pcVar21)();
          return;
        }
        bVar25 = FBoneReference::IsValidToEvaluate
                           ((FBoneReference *)
                            ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar39 * 0x10),
                            local_250);
        if (bVar25) {
          this->feet_is_empty = false;
        }
        iVar27 = (this->dragon_input_data).FeetBones.ArrayNum;
        uVar45 = (ulonglong)(uVar39 + 1);
        uVar35 = uVar35 + 0xd0;
      } while ((int)(uVar39 + 1) < iVar27);
    }
    DestructItems<FDragonData_SpineFeetPair,int>
              ((FDragonData_SpineFeetPair *)local_288.Data,local_280);
    if ((FDragonData_SpineFeetPair *)local_288.Data != (FDragonData_SpineFeetPair *)0x0) {
      FMemory::Free(local_288.Data);
    }
  }
  return;
}

// Initialize_AnyThread @ 14d2fff70

void __thiscall
FAnimNode_DragonAimSolver::Initialize_AnyThread
          (FAnimNode_DragonAimSolver *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
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

// IsValidToEvaluate @ 14d3007d0

bool __thiscall
FAnimNode_DragonAimSolver::IsValidToEvaluate
          (FAnimNode_DragonAimSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FBoneReference local_58;
  FBoneReference local_48;
  FBoneReference local_38;
  FBoneReference local_28;
  FBoneReference local_18;
  
  iVar7 = (this->dragon_input_data).FeetBones.ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = uVar8;
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
      local_48.BoneName =
           *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar10);
      local_48.bUseSkeletonIndex = 0;
      local_48.BoneIndex = -1;
      local_48.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize(&local_48,param_2);
      uVar6 = 0;
      if ((int)uVar9 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar6 = uVar8;
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
      local_38.BoneName =
           *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar10 + 8);
      local_38.bUseSkeletonIndex = 0;
      local_38.BoneIndex = -1;
      local_38.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize(&local_38,param_2);
      uVar6 = 0;
      if ((int)uVar9 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar6 = uVar8;
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
      local_28.BoneName =
           *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar10 + 0x18);
      local_28.bUseSkeletonIndex = 0;
      local_28.BoneIndex = -1;
      local_28.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize(&local_28,param_2);
      iVar7 = (this->dragon_input_data).FeetBones.ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0xd0;
    } while ((int)uVar9 < iVar7);
  }
  local_18.BoneName = (this->dragon_input_data).Pelvis;
  local_18.bUseSkeletonIndex = 0;
  local_18.BoneIndex = -1;
  local_18.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  FBoneReference::Initialize(&local_18,param_2);
  bVar2 = true;
  if (this->Use_Advanced_Input_Mode == false) {
    bVar5 = FBoneReference::IsValidToEvaluate(&this->EndSplineBone,param_2);
    if ((((!bVar5) ||
         (bVar5 = FBoneReference::IsValidToEvaluate(&this->StartSplineBone,param_2), !bVar5)) ||
        (bVar5 = FBoneContainer::BoneIsChildOf
                           (param_2,(this->EndSplineBone).BoneIndex,
                            (this->StartSplineBone).BoneIndex), !bVar5)) &&
       (((bVar5 = FBoneReference::IsValidToEvaluate(&this->EndSplineBone,param_2), !bVar5 ||
         (bVar5 = FBoneReference::IsValidToEvaluate(&this->StartSplineBone,param_2), !bVar5)) ||
        (bVar5 = FBoneContainer::BoneIsChildOf
                           (param_2,(this->EndSplineBone).BoneIndex,
                            (this->StartSplineBone).BoneIndex), !bVar5)))) {
      bVar2 = false;
    }
  }
  else {
    uVar9 = 0;
    if (0 < (this->Bone_Structure_Precise).Bone_Input.ArrayNum) {
      lVar10 = 0;
      bVar5 = bVar2;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Bone_Structure_Precise).Bone_Input.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        local_58.BoneName =
             *(FName *)((this->Bone_Structure_Precise).Bone_Input.AllocatorInstance.Data + lVar10);
        local_58.bUseSkeletonIndex = 0;
        local_58.BoneIndex = -1;
        local_58.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_58,param_2);
        bVar4 = FBoneReference::IsValidToEvaluate(&local_58,param_2);
        bVar2 = false;
        if (bVar4) {
          bVar2 = bVar5;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
        bVar5 = bVar2;
      } while ((int)uVar9 < (this->Bone_Structure_Precise).Bone_Input.ArrayNum);
    }
  }
  bVar5 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Pelvis,param_2);
  if (((((bVar5) ||
        (bVar5 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Start_Spine,param_2),
        bVar5)) &&
       (bVar5 = FBoneContainer::BoneIsChildOf
                          (param_2,(this->dragon_bone_data).Start_Spine.BoneIndex,
                           (this->dragon_bone_data).Pelvis.BoneIndex), !bVar5)) ||
      ((!bVar2 || (bVar2 = FWeakObjectPtr::IsValid(&(param_2->Asset).WeakPtr), !bVar2)))) ||
     ((param_2->RefSkeleton == (FReferenceSkeleton *)0x0 ||
      ((param_2->BoneIndicesArray).ArrayNum < 1)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// LookAtAroundPoint @ 14d30f400

TTransform<double> * __thiscall
FAnimNode_DragonAimSolver::LookAtAroundPoint
          (FAnimNode_DragonAimSolver *this,TTransform<double> *__return_storage_ptr__,
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

// LookAt_Processor @ 14d30f4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoneTransform * __thiscall
FAnimNode_DragonAimSolver::LookAt_Processor
          (FAnimNode_DragonAimSolver *this,FBoneTransform *__return_storage_ptr__,
          FCSPose<FCompactPose> *param_1,TVector<double> *param_2,FName param_3,int param_4,
          float param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ForElementType<unsigned_int> FVar11;
  undefined1 auVar12 [16];
  FScriptContainerElement *pFVar13;
  double dVar14;
  ForElementType<unsigned_int> FVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  uint uVar23;
  TTransform<double> *pTVar24;
  FBoneTransform *pFVar25;
  TMatrix<double> *pTVar26;
  TQuat<double> *pTVar27;
  TQuat<double> *pTVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined1 auStackY_418 [32];
  FCompactPoseBoneIndex local_3e8;
  undefined1 local_3e0 [16];
  TReferenceControllerBase<1> *local_3d0;
  undefined1 local_3c8 [16];
  FWeakObjectPtr local_3b8;
  int local_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  FReferenceSkeleton *local_3a0;
  ForAnyElementType local_398;
  double dStack_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  ForAnyElementType local_368;
  double local_360;
  ForAnyElementType local_358;
  double local_350;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  int local_2d8;
  int iStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  undefined8 local_2c8;
  double local_2b0;
  TRotator<double> local_2a8;
  TRotator<double> local_290;
  TQuat<double> local_278;
  TQuat<double> local_258;
  TTransform<double> local_238;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  FBoneReference::GetCompactPoseIndex(&this->EndSplineBone,(FBoneContainer *)&local_3e8);
  pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_1,local_3e8);
  iVar4 = (this->HeadTransforms).ArrayNum;
  local_338 = (pTVar24->Rotation).XY.m128d_f64[0];
  dStack_330 = (pTVar24->Rotation).XY.m128d_f64[1];
  local_328 = (pTVar24->Rotation).ZW.m128d_f64[0];
  dStack_320 = (pTVar24->Rotation).ZW.m128d_f64[1];
  iVar39 = *(int *)(pTVar24->Translation).XY.m128d_f64;
  iVar40 = *(int *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 4);
  iVar41 = *(int *)((pTVar24->Translation).XY.m128d_f64 + 1);
  iVar42 = *(int *)((longlong)(pTVar24->Translation).XY.m128d_f64 + 0xc);
  uVar29 = *(undefined4 *)(pTVar24->Translation).ZW.m128d_f64;
  uVar31 = *(undefined4 *)((longlong)(pTVar24->Translation).ZW.m128d_f64 + 4);
  uVar43 = *(undefined4 *)((pTVar24->Translation).ZW.m128d_f64 + 1);
  uVar44 = *(undefined4 *)((longlong)(pTVar24->Translation).ZW.m128d_f64 + 0xc);
  local_318 = (pTVar24->Scale3D).XY.m128d_f64[0];
  dStack_310 = (pTVar24->Scale3D).XY.m128d_f64[1];
  local_398.Data = (FScriptContainerElement *)(pTVar24->Scale3D).ZW.m128d_f64[0];
  dStack_390 = (pTVar24->Scale3D).ZW.m128d_f64[1];
  if (0 < iVar4) {
    uVar23 = 0;
    if (param_4 < iVar4) {
      uVar23 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar6 = (code *)swi(3);
      pFVar25 = (FBoneTransform *)(*pcVar6)();
      return pFVar25;
    }
    pFVar5 = (this->HeadTransforms).AllocatorInstance.Data;
    local_2c8 = *(undefined8 *)(pFVar5 + (longlong)param_4 * 0x70 + 0x40);
    uVar29 = (undefined4)local_2c8;
    uVar31 = SUB84(local_2c8,4);
    pFVar5 = pFVar5 + (longlong)param_4 * 0x70 + 0x30;
    iVar39 = *(int *)pFVar5;
    iVar40 = *(int *)(pFVar5 + 4);
    iVar41 = *(int *)(pFVar5 + 8);
    iVar42 = *(int *)(pFVar5 + 0xc);
    uVar43 = 0;
    uVar44 = 0;
    local_2d8 = iVar39;
    iStack_2d4 = iVar40;
    iStack_2d0 = iVar41;
    iStack_2cc = iVar42;
  }
  dVar14 = __real_3e45798ee0000000;
  dVar35 = __real_3ff0000000000000;
  local_2b0 = (param_2->field0_0x0)._s_0.Z;
  dVar33 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X +
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z *
           UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  if ((dVar33 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar33)) {
    local_368.Data = (FScriptContainerElement *)(__real_3ff0000000000000 / SQRT(dVar33));
  }
  dVar33 = (this->LookAt_Axis).field0_0x0._s_0.X;
  dVar1 = (this->LookAt_Axis).field0_0x0._s_0.Y;
  dVar2 = (this->LookAt_Axis).field0_0x0._s_0.Z;
  FVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  dVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dVar34 = dVar1 * dVar1 + dVar33 * dVar33 + dVar2 * dVar2;
  if (dVar34 == __real_3ff0000000000000) {
    auVar3 = *(undefined1 (*) [16])&(this->LookAt_Axis).field0_0x0;
    uVar30 = auVar3._8_4_;
    uVar32 = auVar3._12_4_;
    local_3b8 = (FWeakObjectPtr)(this->LookAt_Axis).field0_0x0._s_0.Z;
    FVar11 = auVar3._0_8_;
    dVar36 = auVar3._8_8_;
  }
  else {
    local_3b8 = (FWeakObjectPtr)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FVar11 = FVar15;
    dVar36 = dVar7;
    if (__real_3e45798ee0000000 <= dVar34) {
      local_360 = __real_3ff0000000000000 / SQRT(dVar34);
      dVar36 = dVar1 * local_360;
      uVar30 = SUB84(dVar36,0);
      uVar32 = (undefined4)((ulonglong)dVar36 >> 0x20);
      local_3b8 = (FWeakObjectPtr)(dVar2 * local_360);
      FVar11 = (ForElementType<unsigned_int>)(dVar33 * local_360);
    }
  }
  dVar33 = (double)FVar11 * (double)FVar11 + dVar36 * dVar36 + (double)local_3b8 * (double)local_3b8
  ;
  if (dVar33 == __real_3ff0000000000000) {
    local_3c8._8_4_ = uVar30;
    local_3c8._0_8_ = FVar11;
    local_3c8._12_4_ = uVar32;
    dVar36 = (double)CONCAT44(uVar32,uVar30);
  }
  else if (__real_3e45798ee0000000 <= dVar33) {
    local_358.Data = (FScriptContainerElement *)(__real_3ff0000000000000 / SQRT(dVar33));
    FVar11 = (ForElementType<unsigned_int>)((double)local_358.Data * (double)FVar11);
    dVar36 = (double)local_358.Data * dVar36;
    local_3b8 = (FWeakObjectPtr)((double)local_358.Data * (double)local_3b8);
    local_3c8._8_8_ = dVar36;
    local_3c8._0_8_ = FVar11;
  }
  else {
    local_3b8 = (FWeakObjectPtr)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    FVar11 = FVar15;
    dVar36 = dVar7;
  }
  local_3e0._0_8_ = (param_2->field0_0x0)._s_0.X - (double)CONCAT44(iVar40,iVar39);
  local_3d0 = (TReferenceControllerBase<1> *)(local_2b0 - (double)CONCAT44(uVar31,uVar29));
  local_3a0 = (FReferenceSkeleton *)CONCAT44(uVar31,uVar29);
  local_3e0._8_8_ = (param_2->field0_0x0)._s_0.Y - (double)CONCAT44(iVar42,iVar41);
  dVar33 = (double)local_3e0._8_8_ * (double)local_3e0._8_8_ +
           (double)local_3e0._0_8_ * (double)local_3e0._0_8_ + (double)local_3d0 * (double)local_3d0
  ;
  if (dVar33 != __real_3ff0000000000000) {
    if (dVar33 < __real_3e45798ee0000000) {
      local_3d0 = (TReferenceControllerBase<1> *)
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_3e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
      goto LAB_14d30f8c7;
    }
    local_350 = __real_3ff0000000000000 / SQRT(dVar33);
    local_3e0._0_8_ = (double)local_3e0._0_8_ * local_350;
    local_3e0._8_8_ = (double)local_3e0._8_8_ * local_350;
    local_3d0 = (TReferenceControllerBase<1> *)(local_350 * (double)local_3d0);
  }
  dVar7 = (double)local_3e0._8_8_;
  FVar15 = (ForElementType<unsigned_int>)local_3e0._0_8_;
LAB_14d30f8c7:
  if (__real_43340000 <= param_5) {
    param_5 = __real_43340000;
  }
  fVar38 = param_5 * __real_3c8efa35;
  uVar30 = SUB84(__real_bff0000000000000,0);
  uVar32 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar33 = dVar7 * dVar36 + (double)FVar15 * (double)FVar11 + (double)local_3d0 * (double)local_3b8;
  if (__real_bff0000000000000 <= dVar33) {
    if (__real_3ff0000000000000 <= dVar33) {
      dVar33 = __real_3ff0000000000000;
    }
    uVar30 = SUB84(dVar33,0);
    uVar32 = (undefined4)((ulonglong)dVar33 >> 0x20);
  }
  local_3b0 = iVar39;
  iStack_3ac = iVar40;
  iStack_3a8 = iVar41;
  iStack_3a4 = iVar42;
  dVar33 = acos((double)CONCAT44(uVar32,uVar30));
  fVar45 = (float)dVar33;
  if (fVar38 < fVar45) {
    if (fVar45 <= 0.0) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("DiffAngle > 0.f",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonAimSolver.cpp"
                          ,0xb57,L"");
      if (bVar22) {
        pcVar6 = (code *)swi(3);
        pFVar25 = (FBoneTransform *)(*pcVar6)();
        return pFVar25;
      }
      FVar11 = (ForElementType<unsigned_int>)local_3c8._0_8_;
      dVar36 = (double)local_3c8._8_8_;
      dVar7 = (double)local_3e0._8_8_;
      FVar15 = (ForElementType<unsigned_int>)local_3e0._0_8_;
    }
    dVar33 = (double)(fVar38 / fVar45);
    local_3e0._0_8_ = ((double)FVar15 - (double)FVar11) * dVar33 + (double)FVar11;
    local_3e0._8_8_ = (dVar7 - dVar36) * dVar33 + dVar36;
    local_3d0 = (TReferenceControllerBase<1> *)
                (((double)local_3d0 - (double)local_3b8) * dVar33 + (double)local_3b8);
    dVar33 = (double)local_3e0._8_8_ * (double)local_3e0._8_8_ +
             (double)local_3e0._0_8_ * (double)local_3e0._0_8_ +
             (double)local_3d0 * (double)local_3d0;
    if (dVar14 < dVar33) {
      dVar35 = dVar35 / SQRT(dVar33);
      local_3d0 = (TReferenceControllerBase<1> *)(dVar35 * (double)local_3d0);
      local_3e0._8_8_ = dVar35 * (double)local_3e0._8_8_;
      local_3e0._0_8_ = dVar35 * (double)local_3e0._0_8_;
    }
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            ((TQuat<double> *)local_388,(TVector<double> *)local_3c8,(TVector<double> *)local_3e0);
  if (this->Use_Natural_Method == false) {
    local_308._s_0.X = (double)local_3e0._0_8_;
    local_308._s_0.Y = (double)local_3e0._8_8_;
    local_308._s_0.Z = (double)local_3d0;
    pTVar26 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_1d8,(TVector<double> *)&local_308._s_0);
    UE::Math::TMatrix<double>::Rotator(pTVar26,&local_2a8);
    local_2f0._s_0.X = (double)local_3c8._0_8_;
    local_2f0._s_0.Y = (double)local_3c8._8_8_;
    local_2f0._s_0.Z = (double)local_3b8;
    pTVar26 = UE::Math::TRotationMatrix<double>::MakeFromX
                        (&local_158,(TVector<double> *)&local_2f0._s_0);
    UE::Math::TMatrix<double>::Rotator(pTVar26,&local_290);
    pTVar27 = UE::Math::TRotator<double>::Quaternion(&local_2a8,&local_278);
    pTVar28 = UE::Math::TRotator<double>::Quaternion(&local_290,&local_258);
    dVar1 = pTVar27->X;
    dVar2 = pTVar27->Y;
    dVar7 = pTVar27->Z;
    dVar34 = pTVar27->W;
    dVar36 = pTVar28->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar37 = pTVar28->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar35 = pTVar28->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar33 = pTVar28->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    pFVar13 = (FScriptContainerElement *)
              (dVar1 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar34 * dVar35 +
               dVar2 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar7 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
    dVar14 = dVar1 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar34 * dVar33 +
             dVar2 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar7 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    pFVar5 = (FScriptContainerElement *)
             (dVar1 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar34 * dVar36 +
              dVar2 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar7 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
    dVar35 = dVar1 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar34 * dVar37 +
             dVar2 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar7 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_388._8_4_ = SUB84(dVar14,0);
    local_388._0_8_ = pFVar13;
    local_388._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    local_378._8_4_ = SUB84(dVar35,0);
    local_378._0_8_ = pFVar5;
    local_378._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  }
  else {
    pFVar13 = (FScriptContainerElement *)local_388._0_8_;
    dVar14 = (double)local_388._8_8_;
    pFVar5 = (FScriptContainerElement *)local_378._0_8_;
    dVar35 = (double)local_378._8_8_;
  }
  dVar21 = dStack_310;
  dVar20 = local_318;
  dVar19 = dStack_320;
  dVar18 = local_328;
  dVar17 = dStack_330;
  dVar16 = local_338;
  local_238.Scale3D.XY.m128d_f64[0] = local_318;
  local_238.Scale3D.XY.m128d_f64[1] = dStack_310;
  local_238.Scale3D.ZW.m128d_f64[0] = (double)local_398.Data;
  local_238.Scale3D.ZW.m128d_f64[1] = dStack_390;
  local_238.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar14,0);
  local_238.Rotation.XY.m128d_f64[0] = (double)pFVar13;
  local_238.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_238.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar35,0);
  local_238.Rotation.ZW.m128d_f64[0] = (double)pFVar5;
  local_238.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
  local_238.Translation.XY.m128d_f64[0]._0_4_ = iVar39;
  local_238.Translation.XY.m128d_f64[0]._4_4_ = iVar40;
  local_238.Translation.XY.m128d_f64[1]._0_4_ = iVar41;
  local_238.Translation.XY.m128d_f64[1]._4_4_ = iVar42;
  local_238.Translation.ZW.m128d_f64[0]._0_4_ = uVar29;
  local_238.Translation.ZW.m128d_f64[0]._4_4_ = uVar31;
  local_238.Translation.ZW.m128d_f64[1]._0_4_ = uVar43;
  local_238.Translation.ZW.m128d_f64[1]._4_4_ = uVar44;
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            (&this->owner_skel_w_transform,param_1,&local_238,local_3e8,BCS_WorldSpace);
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            (&this->owner_skel_w_transform,param_1,&local_238,local_3e8,BCS_WorldSpace);
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar36 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar37 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  __return_storage_ptr__->BoneIndex = local_3e8;
  dVar34 = local_238.Rotation.XY.m128d_f64[0] * dVar18 * dVar34 +
           local_238.Rotation.ZW.m128d_f64[1] * dVar17 +
           local_238.Rotation.XY.m128d_f64[1] * dVar19 * dVar8 +
           local_238.Rotation.ZW.m128d_f64[0] * dVar16 * dVar37;
  auVar3._8_4_ = SUB84(dVar34,0);
  auVar3._0_8_ = local_238.Rotation.XY.m128d_f64[0] * dVar19 * dVar35 +
                 local_238.Rotation.ZW.m128d_f64[1] * dVar16 +
                 local_238.Rotation.XY.m128d_f64[1] * dVar18 * dVar1 +
                 local_238.Rotation.ZW.m128d_f64[0] * dVar17 * dVar33;
  auVar3._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Transform).Rotation.XY.m128d_f64 = auVar3;
  dVar35 = local_238.Rotation.XY.m128d_f64[0] * dVar16 * dVar36 +
           local_238.Rotation.ZW.m128d_f64[1] * dVar19 +
           local_238.Rotation.XY.m128d_f64[1] * dVar17 * dVar9 +
           local_238.Rotation.ZW.m128d_f64[0] * dVar18 * dVar10;
  auVar12._8_4_ = SUB84(dVar35,0);
  auVar12._0_8_ =
       local_238.Rotation.XY.m128d_f64[0] * dVar17 * dVar14 +
       local_238.Rotation.ZW.m128d_f64[1] * dVar18 +
       local_238.Rotation.XY.m128d_f64[1] * dVar16 * dVar2 +
       local_238.Rotation.ZW.m128d_f64[0] * dVar19 * dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Transform).Rotation.ZW.m128d_f64 = auVar12;
  *(int *)(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 = iVar39;
  *(int *)((longlong)(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 + 4) = iVar40;
  *(int *)((__return_storage_ptr__->Transform).Translation.XY.m128d_f64 + 1) = iVar41;
  *(int *)((longlong)(__return_storage_ptr__->Transform).Translation.XY.m128d_f64 + 0xc) = iVar42;
  *(undefined4 *)(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 = uVar29;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 + 4) =
       uVar31;
  *(undefined4 *)((__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 + 1) = uVar43;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Transform).Translation.ZW.m128d_f64 + 0xc) =
       uVar44;
  (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[0] = dVar20;
  (__return_storage_ptr__->Transform).Scale3D.XY.m128d_f64[1] = dVar21;
  (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[0] = (double)local_398.Data;
  (__return_storage_ptr__->Transform).Scale3D.ZW.m128d_f64[1] = dStack_390;
  return __return_storage_ptr__;
}

// LookRotation @ 14d30fd90

TQuat<double> * __thiscall
FAnimNode_DragonAimSolver::LookRotation
          (FAnimNode_DragonAimSolver *this,TQuat<double> *__return_storage_ptr__,
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

// Make_All_Bones @ 14d3102d0

void __thiscall
FAnimNode_DragonAimSolver::Make_All_Bones
          (FAnimNode_DragonAimSolver *this,FCSPose<FCompactPose> *param_1)

{
  int *piVar1;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FCompactPoseBoneIndex local_res8 [2];
  FCompactPoseBoneIndex local_res10;
  FCompactPoseBoneIndex local_48;
  ForAnyElementType local_40;
  int local_38;
  int aiStack_34 [3];
  
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  aiStack_34[0] = 0;
  if (((this->spine_Feet_pair).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FBoneReference::GetCompactPoseIndex
            ((FBoneReference *)(this->spine_Feet_pair).AllocatorInstance.Data,
             (FBoneContainer *)&local_res10);
  iVar3 = (this->spine_Feet_pair).ArrayNum;
  uVar7 = iVar3 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar3) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FBoneReference::GetCompactPoseIndex
            ((FBoneReference *)
             ((this->spine_Feet_pair).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x170),
             (FBoneContainer *)&local_48);
  do {
    if (((local_40.Data <= &local_48) &&
        (&local_48 < (FCompactPoseBoneIndex *)(local_40.Data + (longlong)aiStack_34[0] * 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_38 == aiStack_34[0]) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_40,aiStack_34);
    }
    lVar8 = (longlong)local_38;
    local_38 = local_38 + 1;
    memmove((FCompactPoseBoneIndex *)(local_40.Data + 4),local_40.Data,lVar8 << 2);
    *(FCompactPoseBoneIndex *)local_40.Data = local_48;
    FBoneContainer::GetParentBoneIndex(*(FBoneContainer **)&(param_1->Pose).field_0x10,local_res8);
    local_48 = local_res8[0];
  } while (local_res8[0] != local_res10);
  if (((local_40.Data <= &local_48) &&
      (&local_48 < (FCompactPoseBoneIndex *)(local_40.Data + (longlong)aiStack_34[0] * 4))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_38 == aiStack_34[0]) {
    local_38 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_40,aiStack_34);
  }
  lVar8 = (longlong)local_38;
  local_38 = local_38 + 1;
  memmove((FCompactPoseBoneIndex *)(local_40.Data + 4),local_40.Data,lVar8 << 2);
  _Src.Data = local_40.Data;
  pTVar2 = &this->combined_indices;
  *(FCompactPoseBoneIndex *)local_40.Data = local_48;
  if (pTVar2 != (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)&local_40) {
    iVar3 = local_38;
    lVar8 = (longlong)local_38;
    piVar1 = &(this->combined_indices).ArrayMax;
    (this->combined_indices).ArrayNum = local_38;
    if ((local_38 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_38,*piVar1,&pTVar2->AllocatorInstance,local_38,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src.Data,lVar8 << 2);
      }
    }
  }
  if ((FCompactPoseBoneIndex *)local_40.Data != (FCompactPoseBoneIndex *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// OrthoNormalize @ 14d3109d0

void __thiscall
FAnimNode_DragonAimSolver::OrthoNormalize
          (FAnimNode_DragonAimSolver *this,TVector<double> *param_1,TVector<double> *param_2)

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

// PhysicsAdaptTransform @ 14d310d50

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

TTransform<double> * __thiscall
FAnimNode_DragonAimSolver::PhysicsAdaptTransform
          (FAnimNode_DragonAimSolver *this,TTransform<double> *__return_storage_ptr__,
          FCSPose<FCompactPose> *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  FCompactPoseBoneIndex FVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  uint uVar10;
  USkeletalMeshComponent *this_00;
  longlong lVar11;
  longlong lVar12;
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
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auStack_2c8 [32];
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  dVar2 = (param_2->Rotation).XY.m128d_f64[1];
  dVar3 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar25 = (param_2->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar25;
  dVar3 = (param_2->Translation).ZW.m128d_f64[0];
  dVar25 = (param_2->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar25;
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar25 = (param_2->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar25;
  if ((this->Use_Physics_Adaptation != false) &&
     (FVar7 = (FCompactPoseBoneIndex)
              USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)this->owning_skel,this->physics_root_reference),
     -1 < (int)FVar7)) {
    pTVar9 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_1,FVar7);
    local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1e8,pTVar9,&this->owner_skel_w_transform);
    this_00 = this->owning_skel;
    pTVar9 = USkinnedMeshComponent::GetBoneTransform
                       ((USkinnedMeshComponent *)this_00,&local_188,(int)FVar7);
    local_128.Rotation.XY.m128d_f64[0] = (__return_storage_ptr__->Rotation).XY.m128d_f64[0];
    local_128.Rotation.XY.m128d_f64[1] = (__return_storage_ptr__->Rotation).XY.m128d_f64[1];
    local_128.Rotation.ZW.m128d_f64[0] = (__return_storage_ptr__->Rotation).ZW.m128d_f64[0];
    local_128.Rotation.ZW.m128d_f64[1] = (__return_storage_ptr__->Rotation).ZW.m128d_f64[1];
    local_128.Translation.XY.m128d_f64[0] = (__return_storage_ptr__->Translation).XY.m128d_f64[0];
    local_128.Translation.XY.m128d_f64[1] = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
    auVar21._0_8_ =
         (double)CONCAT44(local_188.Scale3D.ZW.m128d_f64[0]._4_4_ &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          local_188.Scale3D.ZW.m128d_f64[0]._0_4_ &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar21._8_4_ = local_188.Scale3D.ZW.m128d_f64[1]._0_4_ & _UNK_15061cc88;
    auVar21._12_4_ = local_188.Scale3D.ZW.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
    uVar39 = local_188.Scale3D.XY.m128d_f64[0]._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar40 = local_188.Scale3D.XY.m128d_f64[0]._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar41 = local_188.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88;
    uVar42 = local_188.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c;
    local_128.Scale3D.XY.m128d_f64[0] = (__return_storage_ptr__->Scale3D).XY.m128d_f64[0];
    local_128.Scale3D.XY.m128d_f64[1] = (__return_storage_ptr__->Scale3D).XY.m128d_f64[1];
    local_128.Translation.ZW.m128d_f64[0] = (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
    local_128.Translation.ZW.m128d_f64[1] = (__return_storage_ptr__->Translation).ZW.m128d_f64[1];
    local_128.Scale3D.ZW.m128d_f64[0] = (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0];
    local_128.Scale3D.ZW.m128d_f64[1] = (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1];
    auVar31._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar21._8_8_);
    auVar31._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar21._0_8_);
    uVar10 = movmskpd((int)this_00,auVar31);
    auVar18._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < (double)CONCAT44(uVar42,uVar41))
    ;
    auVar18._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < (double)CONCAT44(uVar40,uVar39))
    ;
    iVar8 = movmskpd((int)pTVar9,auVar18);
    if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
      local_248.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_248.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_248.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_248.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_248.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_248.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      lVar11 = -(ulonglong)
                ((double)CONCAT44(local_188.Scale3D.ZW.m128d_f64[0]._4_4_ &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_188.Scale3D.ZW.m128d_f64[0]._0_4_ &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      (undefined1  [16])local_188.Scale3D.XY.m128d_f64);
      lVar12 = -(ulonglong)
                ((double)CONCAT44(uVar40,uVar39) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar13 = -(ulonglong)
                ((double)CONCAT44(uVar42,uVar41) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      local_248.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar12 & auVar18._0_4_;
      local_248.Scale3D.XY.m128d_f64[0]._4_4_ = ~(uint)((ulonglong)lVar12 >> 0x20) & auVar18._4_4_;
      local_248.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar13 & auVar18._8_4_;
      local_248.Scale3D.XY.m128d_f64[1]._4_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar18._12_4_;
      auVar1._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar1._0_8_ = local_188.Scale3D.ZW.m128d_f64[0];
      auVar1._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar1);
      auVar32._0_8_ =
           (double)CONCAT44(local_248.Scale3D.XY.m128d_f64[0]._4_4_,
                            local_248.Scale3D.XY.m128d_f64[0]._0_4_);
      auVar32._8_4_ = local_248.Scale3D.XY.m128d_f64[1]._0_4_;
      auVar32._12_4_ = local_248.Scale3D.XY.m128d_f64[1]._4_4_;
      local_188.Translation.XY.m128d_f64[0] = auVar32._0_8_ * local_188.Translation.XY.m128d_f64[0];
      local_188.Translation.XY.m128d_f64[1] = auVar32._8_8_ * local_188.Translation.XY.m128d_f64[1];
      local_188.Rotation.ZW.m128d_f64[0] =
           local_188.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_188.Rotation.ZW.m128d_f64[1] =
           local_188.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar36 = (undefined4)((ulonglong)local_188.Rotation.ZW.m128d_f64[1] >> 0x20);
      local_248.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar18._4_4_,
                            ~(uint)lVar11 & auVar18._0_4_);
      local_188.Rotation.XY.m128d_f64[0] =
           local_188.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_188.Rotation.XY.m128d_f64[1] =
           local_188.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar37 = SUB84(local_188.Rotation.XY.m128d_f64[1],0);
      uVar38 = (undefined4)((ulonglong)local_188.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar33._8_4_ = SUB84(local_188.Translation.XY.m128d_f64[1],0);
      auVar33._0_8_ = local_188.Translation.XY.m128d_f64[0];
      uVar28 = (undefined4)((ulonglong)local_188.Translation.XY.m128d_f64[1] >> 0x20);
      auVar33._12_4_ = uVar28;
      auVar22._8_4_ = uVar37;
      auVar22._0_8_ = local_188.Rotation.XY.m128d_f64[0];
      auVar22._12_4_ = uVar38;
      dVar25 = auVar22._8_8_;
      local_188.Translation.ZW.m128d_f64[0] =
           local_248.Scale3D.ZW.m128d_f64[0] * local_188.Translation.ZW.m128d_f64[0];
      local_188.Translation.ZW.m128d_f64[1] = local_188.Translation.ZW.m128d_f64[1] * 0.0;
      auVar14._8_4_ = SUB84(local_188.Rotation.ZW.m128d_f64[0],0);
      auVar14._0_8_ = dVar25;
      auVar14._12_4_ = (int)((ulonglong)local_188.Rotation.ZW.m128d_f64[0] >> 0x20);
      auVar30._8_4_ = uVar37;
      auVar30._0_8_ = local_188.Rotation.XY.m128d_f64[0];
      auVar30._12_4_ = uVar38;
      auVar19._8_4_ = SUB84(local_188.Translation.XY.m128d_f64[1],0);
      auVar19._0_8_ = local_188.Translation.XY.m128d_f64[0];
      auVar19._12_4_ = uVar28;
      auVar4._8_4_ = SUB84(local_188.Translation.ZW.m128d_f64[1],0);
      auVar4._0_8_ = local_188.Translation.ZW.m128d_f64[0];
      auVar4._12_4_ = (int)((ulonglong)local_188.Translation.ZW.m128d_f64[1] >> 0x20);
      auVar18 = blendpd(auVar19,auVar4,2);
      auVar34._0_8_ =
           auVar33._8_8_ * local_188.Rotation.XY.m128d_f64[0] -
           dVar25 * local_188.Translation.XY.m128d_f64[0];
      auVar34._8_8_ =
           local_188.Translation.ZW.m128d_f64[0] * local_188.Rotation.XY.m128d_f64[1] -
           auVar14._8_8_ * local_188.Translation.XY.m128d_f64[1];
      auVar5._8_4_ = SUB84(local_188.Rotation.ZW.m128d_f64[1],0);
      auVar5._0_8_ = local_188.Rotation.ZW.m128d_f64[0];
      auVar5._12_4_ = uVar36;
      auVar31 = blendpd(auVar30,auVar5,2);
      auVar20._0_8_ =
           auVar18._0_8_ * local_188.Rotation.ZW.m128d_f64[0] -
           auVar31._0_8_ * local_188.Translation.ZW.m128d_f64[0];
      auVar20._8_8_ =
           auVar18._8_8_ * local_188.Rotation.ZW.m128d_f64[1] -
           auVar31._8_8_ * local_188.Translation.ZW.m128d_f64[1];
      dVar2 = auVar34._8_8_ + auVar34._8_8_;
      dVar3 = auVar20._0_8_ + auVar20._0_8_;
      uVar28 = SUB84(dVar3,0);
      uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar18 = blendpd(auVar34,auVar20,2);
      auVar35._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar35._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar26._8_4_ = uVar28;
      auVar26._0_8_ = dVar2;
      auVar26._12_4_ = uVar29;
      auVar15._8_4_ = uVar28;
      auVar15._0_8_ = dVar2;
      auVar15._12_4_ = uVar29;
      auVar23._8_4_ = uVar28;
      auVar23._0_8_ = dVar2;
      auVar23._12_4_ = uVar29;
      auVar18 = blendpd(auVar23,auVar35,2);
      auVar27._0_8_ = auVar26._8_8_ * local_188.Rotation.XY.m128d_f64[0] - dVar2 * dVar25;
      auVar27._8_8_ =
           auVar35._0_8_ * local_188.Rotation.XY.m128d_f64[1] -
           auVar15._8_8_ * local_188.Rotation.ZW.m128d_f64[0];
      auVar16._8_4_ = SUB84(auVar35._8_8_,0);
      auVar16._0_8_ = auVar35._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
      auVar24._0_8_ =
           auVar18._0_8_ * local_188.Rotation.ZW.m128d_f64[0] - auVar35._0_8_ * auVar31._0_8_;
      auVar24._8_8_ =
           auVar18._8_8_ * local_188.Rotation.ZW.m128d_f64[1] - auVar16._8_8_ * auVar31._8_8_;
      auVar17._8_4_ = SUB84(auVar27._8_8_,0);
      auVar17._0_8_ = auVar27._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
      auVar18 = blendpd(auVar27,auVar24,2);
      local_248.Rotation.XY.m128d_f64[1]._0_4_ = uVar37;
      local_248.Rotation.XY.m128d_f64[0] = local_188.Rotation.XY.m128d_f64[0];
      local_248.Rotation.XY.m128d_f64[1]._4_4_ = uVar38;
      local_248.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(local_188.Rotation.ZW.m128d_f64[1],0);
      local_248.Rotation.ZW.m128d_f64[0] = local_188.Rotation.ZW.m128d_f64[0];
      local_248.Rotation.ZW.m128d_f64[1]._4_4_ = uVar36;
      local_248.Translation.ZW.m128d_f64[1] = 0.0;
      local_248.Translation.ZW.m128d_f64[0] =
           0.0 - (auVar35._0_8_ * local_188.Rotation.ZW.m128d_f64[1] +
                  local_188.Translation.ZW.m128d_f64[0] + auVar18._0_8_);
      local_248.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_248.Translation.XY.m128d_f64[1] =
           0.0 - (dVar3 * local_188.Rotation.ZW.m128d_f64[1] + local_188.Translation.XY.m128d_f64[1]
                 + auVar24._0_8_);
      local_248.Translation.XY.m128d_f64[0] =
           0.0 - (dVar2 * local_188.Rotation.ZW.m128d_f64[1] + local_188.Translation.XY.m128d_f64[0]
                 + auVar17._8_8_);
    }
    local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_2a8,&local_248,&local_1e8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_2a8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_2a8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_2a8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_2a8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_2a8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_2a8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_2a8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_2a8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_2a8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_2a8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_2a8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_2a8.Scale3D.ZW.m128d_f64[1];
    local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_2a8,&local_128,__return_storage_ptr__);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_2a8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_2a8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_2a8.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_2a8.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_2a8.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_2a8.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_2a8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_2a8.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_2a8.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_2a8.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_2a8.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_2a8.Scale3D.ZW.m128d_f64[1];
  }
  return __return_storage_ptr__;
}

// ResizeDebugLocations @ 14d3115c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_DragonAimSolver::ResizeDebugLocations(FAnimNode_DragonAimSolver *this,int param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  __m128d _Var7;
  __m128d _Var8;
  __m128d _Var9;
  __m128d _Var10;
  __m128d _Var11;
  __m128d _Var12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  pTVar2 = &this->Debug_Hand_Locations;
  piVar1 = &(this->Debug_Hand_Locations).ArrayNum;
  if (param_1 == 0) {
    *piVar1 = 0;
    if ((this->Debug_Hand_Locations).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&pTVar2->AllocatorInstance,0,&(this->Debug_Hand_Locations).ArrayMax);
    }
  }
  else {
    iVar15 = *piVar1;
    uVar18 = (ulonglong)iVar15;
    if (iVar15 != param_1) {
      if (iVar15 < param_1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x60,0x10,param_1 - iVar15,&pTVar2->AllocatorInstance,piVar1,
                            &(this->Debug_Hand_Locations).ArrayMax);
        DefaultConstructItems<UE::Math::TTransform<double>,int>
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x60,param_1 - iVar15);
      }
      else {
        if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
        }
        if (param_1 < iVar15) {
          uVar19 = iVar15 - param_1;
          if (((int)(uVar19 | param_1) < 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar19 != 0) {
            pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)param_1 * 0x60;
            iVar14 = (*piVar1 - uVar19) - param_1;
            if (iVar14 != 0) {
              memmove(pFVar16,pFVar16 + (longlong)(int)uVar19 * 0x60,(longlong)iVar14 * 0x60);
            }
            *piVar1 = *piVar1 - uVar19;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,&pTVar2->AllocatorInstance,*piVar1,
                       &(this->Debug_Hand_Locations).ArrayMax);
          }
        }
      }
      uVar6 = _UNK_152af9258;
      uVar5 = ___xmm_4052c000000000004052c00000000000;
      iVar14 = 1;
      if (iVar15 < (this->Debug_Hand_Locations).ArrayNum) {
        lVar21 = uVar18 * 0x60;
        do {
          _Var12.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          _Var11.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          _Var10.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          _Var9.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          _Var8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          _Var7.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          uVar17 = (uint)uVar18;
          uVar20 = ~uVar17 >> 0x1f;
          uVar19 = 0;
          if ((int)uVar17 < *piVar1) {
            uVar19 = uVar20;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar16 = (pTVar2->AllocatorInstance).Data;
          *(double (*) [2])(pFVar16 + lVar21) = _Var7.m128d_f64;
          *(double (*) [2])(pFVar16 + lVar21 + 0x10) = _Var8.m128d_f64;
          *(double (*) [2])(pFVar16 + lVar21 + 0x20) = _Var9.m128d_f64;
          *(double (*) [2])(pFVar16 + lVar21 + 0x30) = _Var10.m128d_f64;
          *(double (*) [2])(pFVar16 + lVar21 + 0x40) = _Var11.m128d_f64;
          *(double (*) [2])(pFVar16 + lVar21 + 0x50) = _Var12.m128d_f64;
          local_b0 = (undefined4)uVar5;
          uStack_ac = (undefined4)((ulonglong)uVar5 >> 0x20);
          if ((uVar18 & 1) == 0) {
            uVar19 = 0;
            if ((int)uVar17 < *piVar1) {
              uVar19 = uVar20;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar15 = (iVar14 + 1) * 0x32;
            iVar14 = iVar14 + 1;
          }
          else {
            uVar19 = 0;
            if ((int)uVar17 < *piVar1) {
              uVar19 = uVar20;
            }
            if ((uVar19 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar15 = iVar14 * -0x32;
          }
          pFVar16 = (pTVar2->AllocatorInstance).Data;
          uVar18 = (ulonglong)(uVar17 + 1);
          auVar4._8_4_ = local_b0;
          auVar4._0_8_ = (double)iVar15;
          auVar4._12_4_ = uStack_ac;
          *(undefined1 (*) [16])(pFVar16 + lVar21 + 0x20) = auVar4;
          pFVar16 = pFVar16 + lVar21 + 0x30;
          *(undefined8 *)pFVar16 = uVar6;
          *(undefined8 *)(pFVar16 + 8) = 0;
          lVar21 = lVar21 + 0x60;
        } while ((int)(uVar17 + 1) < (this->Debug_Hand_Locations).ArrayNum);
      }
    }
  }
  return;
}

// RotateAroundPoint @ 14d3119b0

TVector<double> * __thiscall
FAnimNode_DragonAimSolver::RotateAroundPoint
          (FAnimNode_DragonAimSolver *this,TVector<double> *__return_storage_ptr__,
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

// SmoothApproach @ 14d3124d0

TVector<double> * __thiscall
FAnimNode_DragonAimSolver::SmoothApproach
          (FAnimNode_DragonAimSolver *this,TVector<double> *__return_storage_ptr__,
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

// Swap_Spine_Pairs @ 14d315300

TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_DragonAimSolver::Swap_Spine_Pairs
          (FAnimNode_DragonAimSolver *this,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FDragonData_SpineFeetPair *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong local_a8;
  int local_9c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  do {
    bVar12 = false;
    uVar22 = 1;
    if (param_1->ArrayNum < 2) break;
    local_78 = 0x170;
    do {
      local_88 = 0;
      uVar21 = ~uVar22 >> 0x1f;
      uVar23 = 1;
      local_a8 = 1;
      local_9c = 0;
      local_80 = 0x10;
      while( true ) {
        uVar13 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar13 = uVar21;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar14;
          }
        }
        if (*(int *)((param_1->AllocatorInstance).Data + local_78 + 0x28) <= (int)uVar23) break;
        uVar13 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar13 = uVar21;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar14;
          }
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        lVar24 = (longlong)(int)uVar22 * 0x170;
        uVar13 = 0;
        if ((int)uVar22 < param_1->ArrayNum) {
          uVar13 = uVar21;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar14;
          }
        }
        pFVar5 = (param_1->AllocatorInstance).Data;
        uVar17 = ~uVar23 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar23 < *(int *)(pFVar5 + lVar24 + 0x28)) {
          uVar13 = uVar17;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar14;
          }
        }
        lVar15 = *(longlong *)(pFVar5 + lVar24 + 0x20);
        uVar18 = -uVar23 >> 0x1f;
        uVar13 = 0;
        if (local_9c < *(int *)(pFVar4 + lVar24 + 0x28)) {
          uVar13 = uVar18;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
            return pTVar14;
          }
        }
        if (*(int *)(*(longlong *)(pFVar4 + lVar24 + 0x20) + 8 + local_88 * 0x10) * 2 <
            *(int *)(lVar15 + 8 + local_80) * 2) {
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x28)) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          lVar15 = (local_a8 + -1) * 0x10;
          puVar20 = (undefined8 *)(*(longlong *)(pFVar4 + lVar24 + 0x20) + lVar15);
          uVar9 = *puVar20;
          uVar10 = puVar20[1];
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x28)) {
            uVar13 = uVar17;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          lVar16 = local_a8 * 0x10;
          puVar20 = (undefined8 *)(*(longlong *)(pFVar4 + lVar24 + 0x20) + lVar16);
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x28)) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          puVar19 = (undefined8 *)(lVar15 + *(longlong *)(pFVar4 + lVar24 + 0x20));
          *puVar19 = *puVar20;
          uVar13 = *(uint *)(puVar20 + 1);
          *(uint *)(puVar19 + 1) = (uVar13 ^ *(uint *)(puVar19 + 1)) & 0x80000000 ^ uVar13;
          *(uint *)(puVar19 + 1) =
               (uVar13 ^ *(uint *)(puVar20 + 1)) & 0x7fffffff ^ *(uint *)(puVar20 + 1);
          *(undefined4 *)((longlong)puVar19 + 0xc) = *(undefined4 *)((longlong)puVar20 + 0xc);
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x28)) {
            uVar13 = uVar17;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          lVar6 = *(longlong *)(pFVar4 + lVar24 + 0x20);
          uStack_58 = (undefined4)uVar10;
          uStack_54 = (undefined4)((ulonglong)uVar10 >> 0x20);
          *(undefined8 *)(lVar6 + lVar16) = uVar9;
          *(undefined4 *)(lVar6 + 8 + lVar16) = uStack_58;
          *(undefined4 *)(lVar6 + 0xc + lVar16) = uStack_54;
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x38)) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          puVar20 = (undefined8 *)(*(longlong *)(pFVar4 + lVar24 + 0x30) + lVar15);
          uVar9 = *puVar20;
          uVar10 = puVar20[1];
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x38)) {
            uVar13 = uVar17;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          puVar20 = (undefined8 *)(lVar16 + *(longlong *)(pFVar4 + lVar24 + 0x30));
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x38)) {
            uVar13 = uVar18;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          puVar19 = (undefined8 *)(lVar15 + *(longlong *)(pFVar4 + lVar24 + 0x30));
          *puVar19 = *puVar20;
          uVar13 = *(uint *)(puVar20 + 1);
          *(uint *)(puVar19 + 1) = (uVar13 ^ *(uint *)(puVar19 + 1)) & 0x80000000 ^ uVar13;
          *(uint *)(puVar19 + 1) =
               (*(uint *)(puVar20 + 1) ^ uVar13) & 0x7fffffff ^ *(uint *)(puVar20 + 1);
          *(undefined4 *)((longlong)puVar19 + 0xc) = *(undefined4 *)((longlong)puVar20 + 0xc);
          uVar13 = 0;
          if ((int)uVar22 < param_1->ArrayNum) {
            uVar13 = uVar21;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          pFVar4 = (param_1->AllocatorInstance).Data;
          uVar13 = 0;
          if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x38)) {
            uVar13 = uVar17;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar8)()
              ;
              return pTVar14;
            }
          }
          lVar6 = *(longlong *)(pFVar4 + lVar24 + 0x30);
          uStack_68 = (undefined4)uVar10;
          uStack_64 = (undefined4)((ulonglong)uVar10 >> 0x20);
          *(undefined8 *)(lVar6 + lVar16) = uVar9;
          *(undefined4 *)(lVar6 + 8 + lVar16) = uStack_68;
          *(undefined4 *)(lVar6 + 0xc + lVar16) = uStack_64;
          if (this->automatic_leg_make == false) {
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x48)) {
              uVar13 = uVar18;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            puVar20 = (undefined8 *)(*(longlong *)(pFVar4 + lVar24 + 0x40) + lVar15);
            uVar9 = *puVar20;
            uVar10 = puVar20[1];
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x48)) {
              uVar13 = uVar17;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            puVar20 = (undefined8 *)(lVar16 + *(longlong *)(pFVar4 + lVar24 + 0x40));
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x48)) {
              uVar13 = uVar18;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            puVar19 = (undefined8 *)(lVar15 + *(longlong *)(pFVar4 + lVar24 + 0x40));
            *puVar19 = *puVar20;
            uVar13 = *(uint *)(puVar20 + 1);
            *(uint *)(puVar19 + 1) = (uVar13 ^ *(uint *)(puVar19 + 1)) & 0x80000000 ^ uVar13;
            *(uint *)(puVar19 + 1) =
                 (*(uint *)(puVar20 + 1) ^ uVar13) & 0x7fffffff ^ *(uint *)(puVar20 + 1);
            *(undefined4 *)((longlong)puVar19 + 0xc) = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x48)) {
              uVar13 = uVar17;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            lVar15 = *(longlong *)(pFVar4 + lVar24 + 0x40);
            uStack_68 = (undefined4)uVar10;
            uStack_64 = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(undefined8 *)(lVar15 + lVar16) = uVar9;
            *(undefined4 *)(lVar15 + 8 + lVar16) = uStack_68;
            *(undefined4 *)(lVar15 + 0xc + lVar16) = uStack_64;
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x138)) {
              uVar13 = uVar18;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            uVar1 = *(undefined4 *)(*(longlong *)(pFVar4 + lVar24 + 0x130) + -4 + local_a8 * 4);
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x138)) {
              uVar13 = uVar17;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            uVar2 = *(undefined4 *)(*(longlong *)(pFVar4 + lVar24 + 0x130) + local_a8 * 4);
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)(uVar23 - 1) < *(int *)(pFVar4 + lVar24 + 0x138)) {
              uVar13 = uVar18;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            *(undefined4 *)(*(longlong *)(pFVar4 + lVar24 + 0x130) + -4 + local_a8 * 4) = uVar2;
            uVar13 = 0;
            if ((int)uVar22 < param_1->ArrayNum) {
              uVar13 = uVar21;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            pFVar4 = (param_1->AllocatorInstance).Data;
            uVar13 = 0;
            if ((int)uVar23 < *(int *)(pFVar4 + lVar24 + 0x138)) {
              uVar13 = uVar17;
            }
            if (uVar13 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar8 = (code *)swi(3);
                pTVar14 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)
                          (*pcVar8)();
                return pTVar14;
              }
            }
            *(undefined4 *)(*(longlong *)(pFVar4 + lVar24 + 0x130) + local_a8 * 4) = uVar1;
          }
          bVar12 = true;
        }
        local_a8 = local_a8 + 1;
        uVar23 = uVar23 + 1;
        local_88 = local_88 + 1;
        local_9c = local_9c + 1;
        local_80 = local_80 + 0x10;
      }
      local_78 = local_78 + 0x170;
      uVar22 = uVar22 + 1;
    } while ((int)uVar22 < param_1->ArrayNum);
  } while (bVar12);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_1->ArrayNum;
  pFVar7 = (FDragonData_SpineFeetPair *)(param_1->AllocatorInstance).Data;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FDragonData_SpineFeetPair,FDragonData_SpineFeetPair,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,pFVar7,iVar3);
  }
  return __return_storage_ptr__;
}

// UpdateInternal @ 14d317990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonAimSolver::UpdateInternal
          (FAnimNode_DragonAimSolver *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  int *piVar2;
  USkeletalMeshComponent *pUVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  FLinearColor FVar16;
  TQuat<double> *pTVar17;
  UWorld *pUVar18;
  FHitResult *pFVar19;
  char cVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  uint uVar26;
  double dVar27;
  undefined1 auStackY_318 [32];
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  FLinearColor_u_0 local_288;
  FHitResult local_278;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_318;
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  pUVar3 = this->owning_skel;
  if (pUVar3 == (USkeletalMeshComponent *)0x0) {
    pUVar18 = _DAT_000000b0;
    if (_DAT_000000b0 == (UWorld *)0x0) {
      pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)0x0);
    }
    fVar21 = pUVar18->DeltaTimeSeconds;
  }
  else {
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar5;
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar5;
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar5;
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar5;
    dVar5 = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] = (double)pUVar3->_padding_;
    (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar5;
    pTVar17 = UE::Math::TRotator<double>::Quaternion
                        (&this->Extra_Aiming_Rotation_Offset,(TQuat<double> *)&local_2c8._s_0);
    dVar8 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
    dVar9 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
    dVar10 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
    dVar11 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
    dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar12 = pTVar17->X;
    dVar13 = pTVar17->Y;
    dVar14 = pTVar17->Z;
    dVar15 = pTVar17->W;
    dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar7 = dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar9 * dVar15 +
            dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar5 = dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar11 * dVar15 +
            dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar10 * dVar15 +
                   dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar14 * dVar11 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64 = auVar4;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar12 * dVar11 * dVar24 + dVar8 * dVar15 + dVar10 * dVar13 * dVar25 +
                   dVar14 * dVar9 * dVar27;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64 = auVar6;
    pUVar3 = this->owning_skel;
    pUVar18 = (UWorld *)pUVar3->_padding_;
    if ((AActor *)pUVar3->_padding_ == (AActor *)0x0) {
      if (pUVar18 == (UWorld *)0x0) {
        pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar3);
      }
      fVar21 = pUVar18->DeltaTimeSeconds;
    }
    else {
      if (pUVar18 == (UWorld *)0x0) {
        pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar3);
      }
      fVar21 = *(float *)(this->owning_skel->_padding_ + 0x68) * pUVar18->DeltaTimeSeconds;
    }
  }
  this->delta_seconds_saved = fVar21;
  piVar1 = &(this->TraceStartList).ArrayMax;
  (this->TraceStartList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceStartList).AllocatorInstance,0,piVar1);
  }
  piVar2 = &(this->TraceEndList).ArrayMax;
  (this->TraceEndList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceEndList).AllocatorInstance,0,piVar2);
  }
  fVar21 = this->Toggle_Interpolation_Speed;
  if (__real_42c80000 <= this->Toggle_Interpolation_Speed) {
    fVar21 = __real_42c80000;
  }
  fVar22 = this->Interpolation_Speed;
  if (__real_42c80000 <= this->Interpolation_Speed) {
    fVar22 = __real_42c80000;
  }
  cVar20 = this->enable_solver;
  if (fVar21 <= __real_3e800000) {
    fVar21 = __real_3e800000;
  }
  if (fVar22 <= __real_3e800000) {
    fVar22 = __real_3e800000;
  }
  this->Toggle_Interpolation_Speed = fVar21;
  this->Interpolation_Speed = fVar22;
  if (this->DisplayLineTrace == false) {
    pUVar18 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar18 == (UWorld *)0x0) {
      pUVar18 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
      fVar21 = this->Toggle_Interpolation_Speed;
    }
    if ((pUVar18->WorldType).Value == '\x04') {
      cVar20 = '\0';
    }
  }
  if (this->Adaptive_Terrain_Tail == false) {
    if (cVar20 != '\0') goto LAB_14d317d2f;
LAB_14d317d16:
    if ((double)fVar21 <= 0.0) {
      dVar5 = 0.0;
      goto LAB_14d317dcf;
    }
    dVar27 = (double)this->toggle_alpha;
    uVar23 = SUB84(dVar27,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)dVar27 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar25 = (double)CONCAT44(uVar26,uVar23);
    if ((double)CONCAT44(uVar26,uVar23) * dVar25 < __real_3e45798ee0000000) {
      dVar5 = 0.0;
      goto LAB_14d317dcf;
    }
    dVar5 = (double)this->delta_seconds_saved * (double)fVar21;
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  else {
    if ((this->enable_solver == false) || ((this->TTS_Aim_Hit).bBlockingHit == 0))
    goto LAB_14d317d16;
LAB_14d317d2f:
    dVar5 = __real_3ff0000000000000;
    if ((double)fVar21 <= 0.0) goto LAB_14d317dcf;
    dVar27 = (double)this->toggle_alpha;
    dVar25 = __real_3ff0000000000000 - dVar27;
    if (dVar25 * dVar25 < __real_3e45798ee0000000) goto LAB_14d317dcf;
    dVar5 = (double)this->delta_seconds_saved * (double)fVar21;
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  dVar5 = dVar5 * dVar25 + dVar27;
LAB_14d317dcf:
  this->toggle_alpha = (float)dVar5;
  (this->TraceStartList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceStartList).AllocatorInstance,0,piVar1);
  }
  (this->TraceEndList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceEndList).AllocatorInstance,0,piVar2);
  }
  if (this->test_counter < 500) {
    this->test_counter = this->test_counter + 1;
  }
  this->trace_draw_counter = this->trace_draw_counter + 1;
  if (5 < this->trace_draw_counter) {
    this->trace_draw_counter = 0;
  }
  local_2c8._s_0.Z = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  local_2c8._s_0.X = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  local_2c8._s_0.Y = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  this->component_scale = (float)local_2c8._s_0.Z;
  local_178.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_178.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_178.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_178.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_178,&this->Debug_LookAtLocation,&this->owner_skel_w_transform);
  FVar16 = FLinearColor::Blue;
  dVar5 = local_178.Translation.XY.m128d_f64[0];
  dVar25 = local_178.Translation.XY.m128d_f64[1];
  dVar27 = local_178.Translation.ZW.m128d_f64[0];
  local_2c8._s_0.Z = local_178.Translation.ZW.m128d_f64[0];
  if (this->Adaptive_Terrain_Tail != false) {
    pFVar19 = FHitResult::FHitResult(&local_278,&this->TTS_Aim_Hit);
    local_2a8._s_0.X = dVar5;
    local_2a8._s_0.Y = dVar25;
    local_2c8._s_0.X = dVar5;
    local_2c8._s_0.Y = dVar25;
    local_2a8._s_0.Z = dVar27 - (double)this->Trace_Down_Height * (double)this->component_scale;
    local_288 = FVar16.field0_0x0;
    local_2c8._s_0.Z = (double)this->Trace_Up_Height * (double)this->component_scale + dVar27;
    line_trace_func(this,this->owning_skel,(TVector<double> *)&local_2c8._s_0,
                    (TVector<double> *)&local_2a8._s_0,pFVar19,(FName)0x0,(FName)0x0,
                    &this->TTS_Aim_Hit,(FLinearColor *)&local_288._s_0,true);
  }
  local_118.Rotation.XY.m128d_f64[0] = (this->Debug_LookAtLocation).Rotation.XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = (this->Debug_LookAtLocation).Rotation.XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] = (this->Debug_LookAtLocation).Rotation.ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = (this->Debug_LookAtLocation).Rotation.ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = (this->Debug_LookAtLocation).Scale3D.XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] = (this->Debug_LookAtLocation).Scale3D.XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (this->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] = (this->Debug_LookAtLocation).Scale3D.ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] = (this->Debug_LookAtLocation).Translation.XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] = (this->Debug_LookAtLocation).Translation.XY.m128d_f64[1];
  local_178.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_178.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_178.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_178.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_178.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_178.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_118.Translation.ZW.m128d_f64[0] = 0.0;
  local_118.Translation.ZW.m128d_f64[1] = 0.0;
  local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_178,&local_118,&this->owner_skel_w_transform);
  this->TTS_Height =
       (float)SQRT((dVar25 - local_178.Translation.XY.m128d_f64[1]) *
                   (dVar25 - local_178.Translation.XY.m128d_f64[1]) +
                   (dVar5 - local_178.Translation.XY.m128d_f64[0]) *
                   (dVar5 - local_178.Translation.XY.m128d_f64[0]) +
                   (dVar27 - local_178.Translation.ZW.m128d_f64[0]) *
                   (dVar27 - local_178.Translation.ZW.m128d_f64[0]));
  return;
}

// getDefaultSpineColliParams @ 14d329610

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
FAnimNode_DragonAimSolver::getDefaultSpineColliParams
          (FAnimNode_DragonAimSolver *this,FCollisionQueryParams *__return_storage_ptr__,
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

// line_trace_func @ 14d3296d0

void __thiscall
FAnimNode_DragonAimSolver::line_trace_func
          (FAnimNode_DragonAimSolver *this,USkeletalMeshComponent *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FHitResult *param_4,FName param_5,FName param_6,
          FHitResult *param_7,FLinearColor *param_8,bool param_9)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_88;
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  lVar13 = this->owning_skel->_padding_;
  if (lVar13 != 0) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_88.AllocatorInstance,&local_88.ArrayMax);
    local_88.ArrayNum = iVar12 + 1;
    *(longlong *)(local_88.AllocatorInstance.Data + (longlong)iVar12 * 8) = lVar13;
    local_58._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_58._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_78 = FLinearColor::Green.field0_0x0;
    local_68._0_8_ = *(undefined8 *)&param_8->field0_0x0;
    local_68._8_8_ = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8);
    local_38._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_38._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_38._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    UKismetSystemLibrary::LineTraceSingle
              ((UObject *)this->owning_skel->_padding_,(TVector<double> *)&local_38._s_0,
               (TVector<double> *)&local_58._s_0,(uint)(this->Trace_Channel).Value,true,&local_88,
               None,param_4,true,(FLinearColor *)&local_68._s_0,(FLinearColor *)&local_78._s_0,
               __real_40a00000);
  }
  pTVar2 = &this->TraceStartList;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(this->TraceStartList).ArrayMax * 0x18))
  {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = (this->TraceStartList).ArrayNum;
  piVar1 = &(this->TraceStartList).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  (this->TraceStartList).ArrayNum = iVar12 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pTVar2 = &this->TraceEndList;
  pFVar3 = pFVar4 + (longlong)iVar12 * 0x18;
  *(double *)pFVar3 = dVar6;
  *(double *)(pFVar3 + 8) = dVar7;
  *(double *)(pFVar4 + (longlong)iVar12 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_3) && (param_3 < pFVar3 + (longlong)(this->TraceEndList).ArrayMax * 0x18)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar12 = (this->TraceEndList).ArrayNum;
  piVar1 = &(this->TraceEndList).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  dVar6 = (param_3->field0_0x0)._s_0.X;
  dVar7 = (param_3->field0_0x0)._s_0.Y;
  (this->TraceEndList).ArrayNum = iVar12 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar12 * 0x18;
  *(double *)pFVar3 = dVar6;
  *(double *)(pFVar3 + 8) = dVar7;
  *(double *)(pFVar4 + (longlong)iVar12 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  lVar13 = 2;
  do {
    fVar9 = param_4->Time;
    fVar10 = param_4->Distance;
    iVar12 = param_4->_padding_;
    param_7->FaceIndex = param_4->FaceIndex;
    param_7->Time = fVar9;
    param_7->Distance = fVar10;
    param_7->_padding_ = iVar12;
    uVar8 = *(undefined8 *)&(param_4->Location).field_0x8;
    *(undefined8 *)&param_7->Location = *(undefined8 *)&param_4->Location;
    *(undefined8 *)&(param_7->Location).field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&param_4->ImpactPoint;
    *(undefined8 *)&(param_7->Location).field_0x10 = *(undefined8 *)&(param_4->Location).field_0x10;
    *(undefined8 *)&param_7->ImpactPoint = uVar8;
    uVar8 = *(undefined8 *)&(param_4->ImpactPoint).field_0x10;
    *(undefined8 *)&(param_7->ImpactPoint).field_0x8 =
         *(undefined8 *)&(param_4->ImpactPoint).field_0x8;
    *(undefined8 *)&(param_7->ImpactPoint).field_0x10 = uVar8;
    uVar8 = *(undefined8 *)&(param_4->Normal).field_0x8;
    *(undefined8 *)&param_7->Normal = *(undefined8 *)&param_4->Normal;
    *(undefined8 *)&(param_7->Normal).field_0x8 = uVar8;
    uVar8 = *(undefined8 *)&param_4->ImpactNormal;
    *(undefined8 *)&(param_7->Normal).field_0x10 = *(undefined8 *)&(param_4->Normal).field_0x10;
    *(undefined8 *)&param_7->ImpactNormal = uVar8;
    uVar8 = *(undefined8 *)&(param_4->ImpactNormal).field_0x10;
    *(undefined8 *)&(param_7->ImpactNormal).field_0x8 =
         *(undefined8 *)&(param_4->ImpactNormal).field_0x8;
    *(undefined8 *)&(param_7->ImpactNormal).field_0x10 = uVar8;
    uVar8 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
    *(undefined8 *)&param_7->TraceStart = *(undefined8 *)&param_4->TraceStart;
    *(undefined8 *)&(param_7->TraceStart).field_0x8 = uVar8;
    lVar13 = lVar13 + -1;
    param_7 = (FHitResult *)&(param_7->TraceStart).field_0x10;
    param_4 = (FHitResult *)&(param_4->TraceStart).field_0x10;
  } while (lVar13 != 0);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

