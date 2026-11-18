// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 36

// StaticStruct @ 14d29ad00

UScriptStruct * __cdecl FAnimNode_DragonFeetSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonFeetSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonFeetSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonFeetSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonFeetSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonFeetSolver.OuterSingleton;
}

// ~FAnimNode_DragonFeetSolver @ 14d29f2b0

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
FAnimNode_DragonFeetSolver::~FAnimNode_DragonFeetSolver(FAnimNode_DragonFeetSolver *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
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
  pFVar1 = (this->AnimatedBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (this->FeetFingerHeights).AllocatorInstance.Data,(this->FeetFingerHeights).ArrayNum);
  pFVar1 = (this->FeetFingerHeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->FeetRootHeights).AllocatorInstance.Data,(this->FeetRootHeights).ArrayNum);
  pFVar1 = (this->FeetRootHeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->Feet_Previous_Position).AllocatorInstance.Data,
             (this->Feet_Previous_Position).ArrayNum);
  pFVar1 = (this->Feet_Previous_Position).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)
             (this->FeetStepBools).AllocatorInstance.Data,(this->FeetStepBools).ArrayNum);
  pFVar1 = (this->FeetStepBools).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->FeetWidthSpacing).AllocatorInstance.Data,(this->FeetWidthSpacing).ArrayNum);
  pFVar1 = (this->FeetWidthSpacing).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->FeetTipLocations).AllocatorInstance.Data,(this->FeetTipLocations).ArrayNum);
  pFVar1 = (this->FeetTipLocations).AllocatorInstance.Data;
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
  DestructItems<FDragonData_HitPairs,int>
            ((FDragonData_HitPairs *)(this->spine_hit_pairs).AllocatorInstance.Data,
             (this->spine_hit_pairs).ArrayNum);
  pFVar1 = (this->spine_hit_pairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Total_spine_heights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectorLocationList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->sticky_feets_data).sticky_feet_alpha_array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->sticky_feets_data).sticky_feet_array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Finger_Alpha_Velocity_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Finger_Alpha_Velocity_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Finger_Alpha_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Finger_Alpha_Velocity_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Finger_Alpha_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Finger_Alpha_Velocity_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Trace_Down_Multiplier_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Trace_Down_Multiplier_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Trace_Down_Multiplier_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Trace_Down_Multiplier_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Trace_Down_Multiplier_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Trace_Down_Multiplier_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Total_spine_bones).AllocatorInstance.Data;
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
  pFVar1 = (this->feet_hit_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->knee_Animated_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_Animated_transform_array).AllocatorInstance.Data,
             (this->feet_Animated_transform_array).ArrayNum);
  pFVar1 = (this->feet_Animated_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_knee_offset_array).AllocatorInstance.Data,
             (this->feet_knee_offset_array).ArrayNum);
  pFVar1 = (this->feet_knee_offset_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(this->feet_fingers_transform_array).AllocatorInstance.Data,
             (this->feet_fingers_transform_array).ArrayNum);
  pFVar1 = (this->feet_fingers_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_impactpoint_array).AllocatorInstance.Data,
             (this->feet_impactpoint_array).ArrayNum);
  pFVar1 = (this->feet_impactpoint_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
            ((TArray<bool,TSizedDefaultAllocator<32>_> *)
             (this->feet_ishit_array).AllocatorInstance.Data,(this->feet_ishit_array).ArrayNum);
  pFVar1 = (this->feet_ishit_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_modified_normals).AllocatorInstance.Data,
             (this->feet_modified_normals).ArrayNum);
  pFVar1 = (this->feet_modified_normals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_frozen_rotator_array).AllocatorInstance.Data,
             (this->feet_frozen_rotator_array).ArrayNum);
  pFVar1 = (this->feet_frozen_rotator_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (this->feet_mod_transform_array).AllocatorInstance.Data,
             (this->feet_mod_transform_array).ArrayNum);
  pFVar1 = (this->feet_mod_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (this->feet_Alpha_array).AllocatorInstance.Data,(this->feet_Alpha_array).ArrayNum);
  pFVar1 = (this->feet_Alpha_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->feet_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->feet_bone_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceRadiusList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Is_Line_Mode).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceEndList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TraceStartList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ComplexSimpleFoot_Velocity_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Interpolation_Velocity_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Interpolation_Velocity_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_
  ;
  pvVar2 = (void *)(this->Interpolation_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Interpolation_Velocity_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Interpolation_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Interpolation_Velocity_Curve).EditorCurveData._padding_);
  pFVar1 = (this->feet_extra_offset_array).feet_extra_offset_array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->feet_alpha_multiplier_array).feet_IK_alpha_array.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Interval_Velocity_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Interval_Velocity_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Interval_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Interval_Velocity_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Interval_Velocity_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Interval_Velocity_Curve).EditorCurveData._padding_);
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
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d2a1360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimNode_DragonFeetSolver * __thiscall
FAnimNode_DragonFeetSolver::operator=
          (FAnimNode_DragonFeetSolver *this,FAnimNode_DragonFeetSolver *param_1)

{
  int *piVar1;
  TArray<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FDragonData_StickySocketStruct *pFVar4;
  TArray<TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  int iVar7;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FScriptContainerElement *_Src;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar10;
  double dVar11;
  undefined8 uVar12;
  
  FAnimNode_DragonControlBase::operator=
            ((FAnimNode_DragonControlBase *)this,(FAnimNode_DragonControlBase *)param_1);
  this->Dragon_Trace_Manager = param_1->Dragon_Trace_Manager;
  this->use_trace_manager_component = param_1->use_trace_manager_component;
  this->solver_identifier = param_1->solver_identifier;
  this->Identifier_Counter = param_1->Identifier_Counter;
  FDragonData_MultiInput::operator=(&this->dragon_input_data,&param_1->dragon_input_data);
  FDragonData_BoneStruct::operator=(&this->dragon_bone_data,&param_1->dragon_bone_data);
  this->PelvisBoneName = param_1->PelvisBoneName;
  this->SpineBoneName = param_1->SpineBoneName;
  this->test_counter = param_1->test_counter;
  this->trace_draw_counter = param_1->trace_draw_counter;
  this->ik_type = param_1->ik_type;
  this->trace_type = param_1->trace_type;
  this->Trace_Radius = param_1->Trace_Radius;
  this->line_trace_hit_complex = param_1->line_trace_hit_complex;
  this->trace_distance_legal = param_1->trace_distance_legal;
  this->trace_timer_count = param_1->trace_timer_count;
  this->current_trace_interval = param_1->current_trace_interval;
  this->solver_time_reference = param_1->solver_time_reference;
  this->trace_interval_duration = param_1->trace_interval_duration;
  this->Use_LOD_Specific_Intervals = param_1->Use_LOD_Specific_Intervals;
  this->LOD0_Interval = param_1->LOD0_Interval;
  this->LOD1_Interval = param_1->LOD1_Interval;
  this->LOD2_Interval = param_1->LOD2_Interval;
  this->Use_Trace_Distance_Adapting = param_1->Use_Trace_Distance_Adapting;
  this->Trace_Max_Distance = param_1->Trace_Max_Distance;
  this->Use_Interval_Velocity_Curve = param_1->Use_Interval_Velocity_Curve;
  FRuntimeFloatCurve::operator=(&this->Interval_Velocity_Curve,&param_1->Interval_Velocity_Curve);
  this->Override_Curve_Velocity = param_1->Override_Curve_Velocity;
  this->custom_velocity = param_1->custom_velocity;
  this->loc_interp_type = param_1->loc_interp_type;
  this->scale_mode = param_1->scale_mode;
  this->delta_seconds_saved = param_1->delta_seconds_saved;
  this->rot_interp_type = param_1->rot_interp_type;
  this->virtual_scale = param_1->virtual_scale;
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->feet_alpha_multiplier_array).feet_IK_alpha_array,
             &(param_1->feet_alpha_multiplier_array).feet_IK_alpha_array);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->feet_extra_offset_array).feet_extra_offset_array,
             &(param_1->feet_extra_offset_array).feet_extra_offset_array);
  dVar11 = (param_1->Overall_Feet_Rotation_Offset).Yaw;
  (this->Overall_Feet_Rotation_Offset).Pitch = (param_1->Overall_Feet_Rotation_Offset).Pitch;
  (this->Overall_Feet_Rotation_Offset).Yaw = dVar11;
  (this->Overall_Feet_Rotation_Offset).Roll = (param_1->Overall_Feet_Rotation_Offset).Roll;
  this->automatic_leg_make = param_1->automatic_leg_make;
  this->Use_OptionalRef_Feet_As_Ref = param_1->Use_OptionalRef_Feet_As_Ref;
  this->enable_solver = param_1->enable_solver;
  this->Work_Outside_PIE = param_1->Work_Outside_PIE;
  uVar12 = *(undefined8 *)&(param_1->OptionalRefPose).field_0x8;
  *(undefined8 *)&this->OptionalRefPose = *(undefined8 *)&param_1->OptionalRefPose;
  *(undefined8 *)&(this->OptionalRefPose).field_0x8 = uVar12;
  this->interpolate_only_z = param_1->interpolate_only_z;
  this->shift_speed = param_1->shift_speed;
  this->Delta_Loc_Speed = param_1->Delta_Loc_Speed;
  this->Delta_Rot_Speed = param_1->Delta_Rot_Speed;
  this->Location_Lerp_Speed = param_1->Location_Lerp_Speed;
  this->feet_rotation_speed = param_1->feet_rotation_speed;
  this->ignore_shift_speed = param_1->ignore_shift_speed;
  this->Ignore_Lerping = param_1->Ignore_Lerping;
  this->Ignore_Location_Lerping = param_1->Ignore_Location_Lerping;
  FRuntimeFloatCurve::operator=
            (&this->Interpolation_Velocity_Curve,&param_1->Interpolation_Velocity_Curve);
  this->Enable_Complex_Rotation_Method = param_1->Enable_Complex_Rotation_Method;
  FRuntimeFloatCurve::operator=
            (&this->ComplexSimpleFoot_Velocity_Curve,&param_1->ComplexSimpleFoot_Velocity_Curve);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceStartList,&param_1->TraceStartList);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceEndList,&param_1->TraceEndList);
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=(&this->Is_Line_Mode,&param_1->Is_Line_Mode);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceRadiusList,&param_1->TraceRadiusList);
  (this->Trace_Channel).Value = (param_1->Trace_Channel).Value;
  (this->Anti_Trace_Channel).Value = (param_1->Anti_Trace_Channel).Value;
  this->FPS_Lerp_Treshold = param_1->FPS_Lerp_Treshold;
  this->current_fps = param_1->current_fps;
  this->SavedBoneContainer = param_1->SavedBoneContainer;
  dVar11 = (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_bone_array,&param_1->feet_bone_array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_transform_array,&param_1->feet_transform_array);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_Alpha_array,&param_1->feet_Alpha_array);
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->feet_mod_transform_array,&param_1->feet_mod_transform_array);
  pTVar2 = &this->feet_frozen_rotator_array;
  if (pTVar2 != &param_1->feet_frozen_rotator_array) {
    DestructItems<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
               (pTVar2->AllocatorInstance).Data,(this->feet_frozen_rotator_array).ArrayNum);
    iVar6 = (param_1->feet_frozen_rotator_array).ArrayNum;
    piVar1 = &(this->feet_frozen_rotator_array).ArrayMax;
    pTVar8 = (TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *)
             (param_1->feet_frozen_rotator_array).AllocatorInstance.Data;
    (this->feet_frozen_rotator_array).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar2->AllocatorInstance).Data,pTVar8,iVar6);
    }
  }
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->feet_modified_normals,&param_1->feet_modified_normals);
  TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_ishit_array,&param_1->feet_ishit_array);
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->feet_impactpoint_array,&param_1->feet_impactpoint_array);
  pTVar3 = &this->feet_fingers_transform_array;
  if (pTVar3 != &param_1->feet_fingers_transform_array) {
    DestructItems<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar3->AllocatorInstance).Data,(this->feet_fingers_transform_array).ArrayNum);
    iVar6 = (param_1->feet_fingers_transform_array).ArrayNum;
    piVar1 = &(this->feet_fingers_transform_array).ArrayMax;
    pTVar9 = (TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)(param_1->feet_fingers_transform_array).AllocatorInstance.Data;
    (this->feet_fingers_transform_array).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar3->AllocatorInstance).Data,pTVar9,iVar6);
    }
  }
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->feet_knee_offset_array,&param_1->feet_knee_offset_array);
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->feet_Animated_transform_array,&param_1->feet_Animated_transform_array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->knee_Animated_transform_array,&param_1->knee_Animated_transform_array);
  this->atleast_one_hit = param_1->atleast_one_hit;
  TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_hit_array,&param_1->feet_hit_array);
  this->solve_should_fail = param_1->solve_should_fail;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_Feet_pair,&param_1->spine_Feet_pair);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_bones,&param_1->Total_spine_bones);
  this->every_foot_dont_have_child = param_1->every_foot_dont_have_child;
  this->line_trace_upper_height = param_1->line_trace_upper_height;
  this->line_trace_down_height = param_1->line_trace_down_height;
  FRuntimeFloatCurve::operator=
            (&this->Trace_Down_Multiplier_Curve,&param_1->Trace_Down_Multiplier_Curve);
  this->Use_Anti_Channel = param_1->Use_Anti_Channel;
  this->use_footstep_listening = param_1->use_footstep_listening;
  this->footstep_listening_counter = param_1->footstep_listening_counter;
  this->dragon_footsteps_component = param_1->dragon_footsteps_component;
  this->Should_Rotate_Feet = param_1->Should_Rotate_Feet;
  this->Use_Feet_Tips = param_1->Use_Feet_Tips;
  this->show_trace_in_game = param_1->show_trace_in_game;
  this->execute_in_preview = param_1->execute_in_preview;
  this->Automatic_Foot_Height_Detection = param_1->Automatic_Foot_Height_Detection;
  this->Character_Speed = param_1->Character_Speed;
  this->Character_Actor = param_1->Character_Actor;
  this->is_initialized = param_1->is_initialized;
  this->first_time_setup = param_1->first_time_setup;
  this->first_time_count = param_1->first_time_count;
  this->Enable_Pitch = param_1->Enable_Pitch;
  this->Enable_Roll = param_1->Enable_Roll;
  dVar11 = (param_1->character_direction_vector_CS).field0_0x0._s_0.Y;
  (this->character_direction_vector_CS).field0_0x0._s_0.X =
       (param_1->character_direction_vector_CS).field0_0x0._s_0.X;
  (this->character_direction_vector_CS).field0_0x0._s_0.Y = dVar11;
  (this->character_direction_vector_CS).field0_0x0._s_0.Z =
       (param_1->character_direction_vector_CS).field0_0x0._s_0.Z;
  dVar11 = (param_1->character_forward_direction_vector_CS).field0_0x0._s_0.Y;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.X =
       (param_1->character_forward_direction_vector_CS).field0_0x0._s_0.X;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.Y = dVar11;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.Z =
       (param_1->character_forward_direction_vector_CS).field0_0x0._s_0.Z;
  dVar11 = (param_1->poles_forward_direction_vector_CS).field0_0x0._s_0.Y;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.X =
       (param_1->poles_forward_direction_vector_CS).field0_0x0._s_0.X;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.Y = dVar11;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.Z =
       (param_1->poles_forward_direction_vector_CS).field0_0x0._s_0.Z;
  this->Use_Four_Point_Feets = param_1->Use_Four_Point_Feets;
  this->Enable_Foot_Lift_Limit = param_1->Enable_Foot_Lift_Limit;
  this->Affect_Toes_Always = param_1->Affect_Toes_Always;
  FRuntimeFloatCurve::operator=
            (&this->Finger_Alpha_Velocity_Curve,&param_1->Finger_Alpha_Velocity_Curve);
  this->Max_Limb_Radius = param_1->Max_Limb_Radius;
  this->Feet_Lift_Warping = param_1->Feet_Lift_Warping;
  this->Feet_Lift_Warp_Multiplier = param_1->Feet_Lift_Warp_Multiplier;
  this->feet_vertical_size = param_1->feet_vertical_size;
  this->Feet_Lift_Limit = param_1->Feet_Lift_Limit;
  this->sticky_feet_mode = param_1->sticky_feet_mode;
  this->sticky_feet_on_speed = param_1->sticky_feet_on_speed;
  this->sticky_feet_off_speed = param_1->sticky_feet_off_speed;
  this->Sticky_Feet_Range = param_1->Sticky_Feet_Range;
  this->Lock_Feet_Rotation = param_1->Lock_Feet_Rotation;
  TArray<bool,TSizedDefaultAllocator<32>_>::operator=
            (&(this->sticky_feets_data).sticky_feet_array,
             &(param_1->sticky_feets_data).sticky_feet_array);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&(this->sticky_feets_data).sticky_feet_alpha_array,
             &(param_1->sticky_feets_data).sticky_feet_alpha_array);
  this->sticky_floor_detection = param_1->sticky_floor_detection;
  pFVar4 = &this->sticky_sockets_data;
  this->floor_value = param_1->floor_value;
  this->Auto_Sticky_Toggle = param_1->Auto_Sticky_Toggle;
  if (pFVar4 != &param_1->sticky_sockets_data) {
    iVar6 = (param_1->sticky_sockets_data).sticky_socket_array.ArrayNum;
    piVar1 = &(this->sticky_sockets_data).sticky_socket_array.ArrayMax;
    _Src = (param_1->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
    iVar7 = *piVar1;
    (this->sticky_sockets_data).sticky_socket_array.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar7 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,iVar6,iVar7,(ForAnyElementType *)pFVar4,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pFVar4->sticky_socket_array).AllocatorInstance.Data,_Src,(longlong)iVar6 * 0x90);
      }
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->EffectorLocationList,&param_1->EffectorLocationList);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_heights,&param_1->Total_spine_heights);
  TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_hit_pairs,&param_1->spine_hit_pairs);
  TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_Transform_pairs,&param_1->spine_Transform_pairs);
  TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::operator=
            (&this->spine_AnimatedTransform_pairs,&param_1->spine_AnimatedTransform_pairs);
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->FeetTipLocations,&param_1->FeetTipLocations);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->FeetWidthSpacing,&param_1->FeetWidthSpacing);
  TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->FeetStepBools,&param_1->FeetStepBools);
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->Feet_Previous_Position,&param_1->Feet_Previous_Position);
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            (&this->FeetRootHeights,&param_1->FeetRootHeights);
  pTVar5 = &this->FeetFingerHeights;
  if (pTVar5 != &param_1->FeetFingerHeights) {
    DestructItems<TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
               (pTVar5->AllocatorInstance).Data,(this->FeetFingerHeights).ArrayNum);
    iVar6 = (param_1->FeetFingerHeights).ArrayNum;
    piVar1 = &(this->FeetFingerHeights).ArrayMax;
    pTVar10 = (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
              (param_1->FeetFingerHeights).AllocatorInstance.Data;
    (this->FeetFingerHeights).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar6,*piVar1,&pTVar5->AllocatorInstance,iVar6,piVar1);
      ConstructItems<TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar5->AllocatorInstance).Data,pTVar10,iVar6);
    }
  }
  this->saved_pose = param_1->saved_pose;
  this->owning_skel = param_1->owning_skel;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->RestBoneTransforms,&param_1->RestBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->AnimatedBoneTransforms,&param_1->AnimatedBoneTransforms);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->FinalBoneTransforms,&param_1->FinalBoneTransforms);
  this->tot_len_of_bones = param_1->tot_len_of_bones;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneTransforms,&param_1->BoneTransforms);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&this->combined_indices,&param_1->combined_indices);
  dVar11 = (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0] =
       (param_1->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] = dVar11;
  this->Foot_01_Height_Offset = param_1->Foot_01_Height_Offset;
  this->Foot_02_Height_Offset = param_1->Foot_02_Height_Offset;
  this->Foot_03_Height_Offset = param_1->Foot_03_Height_Offset;
  this->Foot_04_Height_Offset = param_1->Foot_04_Height_Offset;
  return this;
}

// FAnimNode_DragonFeetSolver @ 14d2b6cf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAnimNode_DragonFeetSolver * __thiscall
FAnimNode_DragonFeetSolver::FAnimNode_DragonFeetSolver(FAnimNode_DragonFeetSolver *this)

{
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  FRichCurve *pFVar4;
  undefined1 in_R9B;
  float fVar5;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffa8;
  FKeyHandle FVar6;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->use_trace_manager_component = false;
  this->_padding_ = (longlong)&___7FAnimNode_DragonFeetSolver__6B_;
  this->solver_identifier = 1;
  this->Identifier_Counter = 0;
  (this->dragon_input_data).Start_Spine.ComparisonIndex = 0;
  (this->dragon_input_data).Start_Spine.Number = 0;
  (this->dragon_input_data).Pelvis.ComparisonIndex = 0;
  (this->dragon_input_data).Pelvis.Number = 0;
  (this->dragon_input_data).FeetBones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->dragon_input_data).FeetBones.ArrayNum = 0;
  (this->dragon_input_data).FeetBones.ArrayMax = 0;
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
  this->ik_type = ENUM_Two_Bone_Ik;
  this->trace_type = ENUM_LineTrace_Type;
  this->Trace_Radius = 20.0;
  this->line_trace_hit_complex = true;
  this->trace_distance_legal = true;
  this->trace_timer_count = 1000.0;
  this->current_trace_interval = 0.1;
  this->solver_time_reference = 0.0;
  this->trace_interval_duration = 0.1;
  this->Use_LOD_Specific_Intervals = false;
  this->LOD0_Interval = 0.1;
  this->LOD1_Interval = 0.2;
  this->LOD2_Interval = 0.5;
  this->Use_Trace_Distance_Adapting = false;
  this->Trace_Max_Distance = 5000.0;
  this->Use_Interval_Velocity_Curve = true;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Interval_Velocity_Curve);
  (this->feet_alpha_multiplier_array).feet_IK_alpha_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->feet_alpha_multiplier_array).feet_IK_alpha_array.ArrayNum = 0;
  (this->feet_alpha_multiplier_array).feet_IK_alpha_array.ArrayMax = 0;
  (this->feet_extra_offset_array).feet_extra_offset_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->feet_extra_offset_array).feet_extra_offset_array.ArrayNum = 0;
  (this->feet_extra_offset_array).feet_extra_offset_array.ArrayMax = 0;
  this->Override_Curve_Velocity = false;
  this->custom_velocity = 0.0;
  this->loc_interp_type = ENUM_LegacyLoc_Interp;
  this->scale_mode = 1.0;
  this->delta_seconds_saved = 1.0;
  this->rot_interp_type = ENUM_LegacyRot_Interp;
  this->virtual_scale = 1.0;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Overall_Feet_Rotation_Offset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Overall_Feet_Rotation_Offset).Yaw = dVar3;
  (this->Overall_Feet_Rotation_Offset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&this->OptionalRefPose = 0;
  *(undefined4 *)&(this->OptionalRefPose).field_0x8 = 0xffffffff;
  (this->OptionalRefPose).field_0xc = 0;
  this->automatic_leg_make = false;
  this->Use_OptionalRef_Feet_As_Ref = true;
  this->enable_solver = true;
  this->Work_Outside_PIE = false;
  this->interpolate_only_z = false;
  this->shift_speed = 2.0;
  this->Delta_Loc_Speed = 0.0;
  this->Delta_Rot_Speed = 0.0;
  this->Location_Lerp_Speed = 1.0;
  this->feet_rotation_speed = 2.0;
  this->ignore_shift_speed = false;
  this->Ignore_Lerping = false;
  this->Ignore_Location_Lerping = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Interpolation_Velocity_Curve);
  this->Enable_Complex_Rotation_Method = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->ComplexSimpleFoot_Velocity_Curve);
  (this->TraceStartList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceStartList).ArrayNum = 0;
  (this->TraceStartList).ArrayMax = 0;
  (this->TraceEndList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceEndList).ArrayNum = 0;
  (this->TraceEndList).ArrayMax = 0;
  (this->Is_Line_Mode).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Is_Line_Mode).ArrayNum = 0;
  (this->Is_Line_Mode).ArrayMax = 0;
  (this->TraceRadiusList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceRadiusList).ArrayNum = 0;
  (this->TraceRadiusList).ArrayMax = 0;
  this->Trace_Channel = '\0';
  this->Anti_Trace_Channel = '\x01';
  this->FPS_Lerp_Treshold = 15.0;
  this->current_fps = -1.0;
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
  (this->feet_bone_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_bone_array).ArrayNum = 0;
  (this->feet_bone_array).ArrayMax = 0;
  (this->feet_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_transform_array).ArrayNum = 0;
  (this->feet_transform_array).ArrayMax = 0;
  (this->feet_Alpha_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_Alpha_array).ArrayNum = 0;
  (this->feet_Alpha_array).ArrayMax = 0;
  (this->feet_mod_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_mod_transform_array).ArrayNum = 0;
  (this->feet_mod_transform_array).ArrayMax = 0;
  (this->feet_frozen_rotator_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_frozen_rotator_array).ArrayNum = 0;
  (this->feet_frozen_rotator_array).ArrayMax = 0;
  (this->feet_modified_normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_modified_normals).ArrayNum = 0;
  (this->feet_modified_normals).ArrayMax = 0;
  (this->feet_ishit_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_ishit_array).ArrayNum = 0;
  (this->feet_ishit_array).ArrayMax = 0;
  (this->feet_impactpoint_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_impactpoint_array).ArrayNum = 0;
  (this->feet_impactpoint_array).ArrayMax = 0;
  (this->feet_fingers_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_fingers_transform_array).ArrayNum = 0;
  (this->feet_fingers_transform_array).ArrayMax = 0;
  (this->feet_knee_offset_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_knee_offset_array).ArrayNum = 0;
  (this->feet_knee_offset_array).ArrayMax = 0;
  (this->feet_Animated_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_Animated_transform_array).ArrayNum = 0;
  (this->feet_Animated_transform_array).ArrayMax = 0;
  (this->knee_Animated_transform_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->knee_Animated_transform_array).ArrayNum = 0;
  (this->knee_Animated_transform_array).ArrayMax = 0;
  (this->feet_hit_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->feet_hit_array).ArrayNum = 0;
  (this->feet_hit_array).ArrayMax = 0;
  (this->spine_Feet_pair).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_Feet_pair).ArrayNum = 0;
  (this->spine_Feet_pair).ArrayMax = 0;
  (this->Total_spine_bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_bones).ArrayNum = 0;
  (this->Total_spine_bones).ArrayMax = 0;
  this->atleast_one_hit = false;
  this->solve_should_fail = false;
  this->every_foot_dont_have_child = false;
  this->line_trace_upper_height = 200.0;
  this->line_trace_down_height = 5.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Trace_Down_Multiplier_Curve);
  this->Use_Anti_Channel = false;
  this->use_footstep_listening = false;
  this->footstep_listening_counter = 0;
  this->Should_Rotate_Feet = true;
  this->Use_Feet_Tips = false;
  this->show_trace_in_game = true;
  this->execute_in_preview = false;
  this->Automatic_Foot_Height_Detection = true;
  this->Character_Speed = 0.0;
  this->is_initialized = false;
  this->first_time_setup = true;
  this->first_time_count = 0;
  this->Enable_Pitch = true;
  this->Enable_Roll = true;
  (this->character_direction_vector_CS).field0_0x0._s_0.X = 0.0;
  (this->character_direction_vector_CS).field0_0x0._s_0.Z = 1.0;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.Y = 1.0;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.Y = 1.0;
  (this->character_direction_vector_CS).field0_0x0._s_0.Y = 0.0;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.X = 0.0;
  (this->character_forward_direction_vector_CS).field0_0x0._s_0.Z = 0.0;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.X = 0.0;
  (this->poles_forward_direction_vector_CS).field0_0x0._s_0.Z = 0.0;
  this->Use_Four_Point_Feets = false;
  this->Enable_Foot_Lift_Limit = true;
  this->Affect_Toes_Always = true;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Finger_Alpha_Velocity_Curve);
  (this->sticky_feets_data).sticky_feet_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->sticky_feets_data).sticky_feet_array.ArrayNum = 0;
  (this->sticky_feets_data).sticky_feet_array.ArrayMax = 0;
  (this->sticky_feets_data).sticky_feet_alpha_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->sticky_feets_data).sticky_feet_alpha_array.ArrayNum = 0;
  (this->sticky_feets_data).sticky_feet_alpha_array.ArrayMax = 0;
  (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->sticky_sockets_data).sticky_socket_array.ArrayNum = 0;
  (this->sticky_sockets_data).sticky_socket_array.ArrayMax = 0;
  (this->EffectorLocationList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectorLocationList).ArrayNum = 0;
  (this->EffectorLocationList).ArrayMax = 0;
  (this->Total_spine_heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_heights).ArrayNum = 0;
  (this->Total_spine_heights).ArrayMax = 0;
  (this->spine_hit_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_hit_pairs).ArrayNum = 0;
  (this->spine_hit_pairs).ArrayMax = 0;
  (this->spine_Transform_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_Transform_pairs).ArrayNum = 0;
  (this->spine_Transform_pairs).ArrayMax = 0;
  (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_AnimatedTransform_pairs).ArrayNum = 0;
  (this->spine_AnimatedTransform_pairs).ArrayMax = 0;
  (this->FeetTipLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetTipLocations).ArrayNum = 0;
  (this->FeetTipLocations).ArrayMax = 0;
  (this->FeetWidthSpacing).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetWidthSpacing).ArrayNum = 0;
  (this->FeetWidthSpacing).ArrayMax = 0;
  (this->FeetStepBools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetStepBools).ArrayNum = 0;
  (this->FeetStepBools).ArrayMax = 0;
  (this->Feet_Previous_Position).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Feet_Previous_Position).ArrayNum = 0;
  (this->Feet_Previous_Position).ArrayMax = 0;
  (this->FeetRootHeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetRootHeights).ArrayNum = 0;
  (this->FeetRootHeights).ArrayMax = 0;
  (this->FeetFingerHeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetFingerHeights).ArrayNum = 0;
  (this->FeetFingerHeights).ArrayMax = 0;
  (this->RestBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestBoneTransforms).ArrayNum = 0;
  (this->RestBoneTransforms).ArrayMax = 0;
  (this->AnimatedBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimatedBoneTransforms).ArrayNum = 0;
  (this->AnimatedBoneTransforms).ArrayMax = 0;
  (this->FinalBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FinalBoneTransforms).ArrayNum = 0;
  (this->FinalBoneTransforms).ArrayMax = 0;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  (this->combined_indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->combined_indices).ArrayNum = 0;
  (this->combined_indices).ArrayMax = 0;
  this->Max_Limb_Radius = 140.0;
  this->Feet_Lift_Warping = false;
  this->Feet_Lift_Warp_Multiplier = 1.0;
  this->feet_vertical_size = 15.0;
  this->Feet_Lift_Limit = 100.0;
  this->sticky_feet_mode = false;
  this->sticky_feet_on_speed = 15.0;
  this->sticky_feet_off_speed = 5.0;
  this->Sticky_Feet_Range = 0.0;
  this->Lock_Feet_Rotation = true;
  this->sticky_floor_detection = false;
  this->floor_value = 2.2;
  this->Auto_Sticky_Toggle = true;
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
  fVar5 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  *&(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->Foot_01_Height_Offset = 0.0;
  this->Foot_02_Height_Offset = 0.0;
  this->Foot_03_Height_Offset = 0.0;
  this->Foot_04_Height_Offset = 0.0;
  this->is_initialized = false;
  pFVar4 = FRuntimeFloatCurve::GetRichCurve(&this->Interval_Velocity_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = in_stack_ffffffffffffffa8 & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  fVar2 = __real_42c80000;
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,__real_42c80000,(bool)in_R9B,FVar6);
  pFVar4 = FRuntimeFloatCurve::GetRichCurve(&this->Interpolation_Velocity_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,__real_44bb8000,(bool)in_R9B,FVar6);
  pFVar4 = FRuntimeFloatCurve::GetRichCurve(&this->ComplexSimpleFoot_Velocity_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,FVar6);
  pFVar4 = FRuntimeFloatCurve::GetRichCurve(&this->Trace_Down_Multiplier_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,FVar6);
  pFVar4 = FRuntimeFloatCurve::GetRichCurve(&this->Finger_Alpha_Velocity_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar6.Index = FVar6.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar4,fVar5,0.0,(bool)in_R9B,FVar6);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(pFVar4,fVar5,fVar2,(bool)in_R9B,(FKeyHandle)(FVar6.Index & 0xffffff00));
  this->first_time_setup = true;
  this->first_time_count = 0;
  return this;
}

// AnimLocLerp @ 14d2b9560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FAnimNode_DragonFeetSolver::AnimLocLerp
          (FAnimNode_DragonFeetSolver *this,TVector<double> *__return_storage_ptr__,bool param_1,
          int param_2,int param_3,TVector<double> *param_4,TVector<double> *param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  if (this->current_fps <= this->FPS_Lerp_Treshold && this->FPS_Lerp_Treshold != this->current_fps)
  {
    dVar3 = (param_5->field0_0x0)._s_0.Y;
    dVar1 = (param_5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  fVar7 = __real_40c00000 - this->Location_Lerp_Speed;
  dVar3 = (param_4->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  dVar5 = (param_5->field0_0x0)._s_0.X;
  dVar6 = (param_5->field0_0x0)._s_0.Y;
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  if (__real_40c00000 <= fVar7) {
    fVar7 = __real_40c00000;
  }
  dVar2 = (param_5->field0_0x0)._s_0.Z;
  if (fVar7 <= __real_3f800000) {
    fVar7 = __real_3f800000;
  }
  dVar8 = __real_3ff0000000000000 / (double)fVar7;
  if (this->loc_interp_type == ENUM_DivisiveLoc_Interp) {
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 - (dVar1 - dVar2) * dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3 - (dVar3 - dVar5) * dVar8;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4 - (dVar4 - dVar6) * dVar8;
    return __return_storage_ptr__;
  }
  dVar3 = (param_4->field0_0x0)._s_0.X;
  dVar4 = (param_4->field0_0x0)._s_0.Y;
  dVar5 = (param_5->field0_0x0)._s_0.X;
  dVar6 = (param_5->field0_0x0)._s_0.Y;
  dVar8 = (double)param_6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar2 - dVar1) * dVar8 + dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 - dVar3) * dVar8 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar6 - dVar4) * dVar8 + dVar4;
  return __return_storage_ptr__;
}

// AnimRotLerp @ 14d2b96c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
FAnimNode_DragonFeetSolver::AnimRotLerp
          (FAnimNode_DragonFeetSolver *this,TRotator<double> *__return_storage_ptr__,bool param_1,
          int param_2,int param_3,TRotator<double> *param_4,TRotator<double> *param_5,float param_6)

{
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  __return_storage_ptr__->Roll = 0.0;
  return __return_storage_ptr__;
}

// AnimRotSLerp @ 14d2b96e0

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

TQuat<double> * __thiscall
FAnimNode_DragonFeetSolver::AnimRotSLerp
          (FAnimNode_DragonFeetSolver *this,TQuat<double> *__return_storage_ptr__,bool param_1,
          int param_2,int param_3,TQuat<double> *param_4,TQuat<double> *param_5,float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  TQuat<double> *pTVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  uint uVar45;
  uint uVar47;
  uint uVar48;
  uint uVar50;
  undefined1 auVar46 [16];
  double dVar49;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  TQuat<double> local_108;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  TQuat<double> local_c8 [6];
  
  dVar8 = __real_3e45798ee0000000;
  if (this->current_fps <= this->FPS_Lerp_Treshold && this->FPS_Lerp_Treshold != this->current_fps)
  {
    dVar8 = param_5->Y;
    dVar4 = param_5->Z;
    dVar16 = param_5->W;
    __return_storage_ptr__->X = param_5->X;
    __return_storage_ptr__->Y = dVar8;
    __return_storage_ptr__->Z = dVar4;
    __return_storage_ptr__->W = dVar16;
    return __return_storage_ptr__;
  }
  local_e8._0_8_ = param_4->X;
  local_e8._8_8_ = param_4->Y;
  local_d8 = param_4->Z;
  dStack_d0 = param_4->W;
  dVar9 = (double)local_e8._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar49 = (double)local_e8._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_108.X = param_5->X;
  local_108.Y = param_5->Y;
  local_108.Z = param_5->Z;
  local_108.W = param_5->W;
  dVar10 = local_d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = dStack_d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar16 = ___xmm_3fe00000000000003fe0000000000000 * local_108.X;
  dVar6 = _UNK_150689678 * local_108.Y;
  dVar32 = ___xmm_3fe00000000000003fe0000000000000 * local_108.Z;
  dVar36 = _UNK_150689678 * local_108.W;
  auVar17._8_4_ = SUB84(dVar36,0);
  auVar17._0_8_ = dVar32;
  auVar17._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar18._0_8_ = dVar32 * dVar32 + dVar16 * dVar16;
  auVar18._8_8_ = auVar17._8_8_ * dVar36 + dVar6 * dVar6;
  dVar4 = auVar18._0_8_ + auVar18._8_8_;
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = auVar18._8_8_ + auVar18._0_8_;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar19 = sqrtpd(auVar18,auVar19);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar18._8_8_ + auVar18._0_8_);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar20._8_4_ = SUB84(dVar49,0);
  auVar20._0_8_ = dVar49;
  auVar20._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  uVar51 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  uVar52 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  uVar53 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar54 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  uVar27 = (uint)(uVar14 >> 0x20);
  auVar42._0_8_ = uVar14 & (ulonglong)(auVar41._0_8_ * dVar16);
  uVar12 = uVar15 & (ulonglong)(auVar41._8_8_ * dVar6);
  auVar42._8_4_ = (undefined4)uVar12;
  uVar28 = (uint)(uVar15 >> 0x20);
  auVar42._12_4_ = (undefined4)(uVar12 >> 0x20);
  uVar45 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  uVar47 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  uVar48 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar50 = (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar37._0_8_ = (ulonglong)(auVar19._0_8_ * dVar32) & uVar14;
  uVar12 = (ulonglong)(auVar19._8_8_ * dVar36) & uVar15;
  auVar37._8_4_ = (undefined4)uVar12;
  auVar37._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar41._4_4_ = ~uVar27 & uVar47;
  auVar41._0_4_ = ~(uint)uVar14 & uVar45;
  auVar41._8_4_ = ~(uint)uVar15 & uVar48;
  auVar41._12_4_ = ~uVar28 & uVar50;
  auVar29._0_4_ = ~(uint)uVar14 & uVar51;
  auVar29._4_4_ = ~uVar27 & uVar52;
  auVar29._8_4_ = ~(uint)uVar15 & uVar53;
  auVar29._12_4_ = ~uVar28 & uVar54;
  auVar30._8_4_ = SUB84(dVar11,0);
  auVar30._0_8_ = dVar10;
  auVar30._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar40 = SUB168(auVar42 | auVar41,0);
  dVar44 = SUB168(auVar42 | auVar41,8);
  dVar33 = SUB168(auVar37 | auVar29,0);
  dVar39 = SUB168(auVar37 | auVar29,8);
  auVar34._8_8_ = dVar33;
  auVar34._0_8_ = dVar39;
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar32 = dVar9 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           auVar30._8_8_ * dVar40 +
           dVar49 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar10 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar36 = dVar9 * dVar33 * dVar4 + dVar11 * dVar44 + auVar20._8_8_ * dVar39 * dVar16 +
           dVar10 * dVar40 * dVar6;
  dVar26 = dVar9 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           auVar30._8_8_ * dVar33 +
           dVar49 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar10 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar49 = dVar9 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar11 * dVar39 +
           dVar49 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar10 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar49,0);
  auVar21._0_8_ = dVar26;
  auVar21._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  auVar22._0_8_ = dVar26 * dVar26 + dVar32 * dVar32;
  auVar22._8_8_ = auVar21._8_8_ * dVar49 + dVar36 * dVar36;
  dVar9 = auVar22._0_8_ + auVar22._8_8_;
  auVar1._8_4_ = SUB84(dVar9,0);
  auVar1._0_8_ = auVar22._8_8_ + auVar22._0_8_;
  auVar1._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar19 = sqrtpd(auVar22,auVar1);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar22._8_8_ + auVar22._0_8_);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  uVar27 = (uint)(uVar14 >> 0x20);
  uVar28 = (uint)(uVar15 >> 0x20);
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
  auVar43._0_8_ = uVar14 & (ulonglong)(auVar41._0_8_ * dVar32);
  uVar12 = uVar15 & (ulonglong)(auVar41._8_8_ * dVar36);
  auVar43._8_4_ = (undefined4)uVar12;
  auVar43._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar46._0_8_ = (ulonglong)(auVar19._0_8_ * dVar26) & uVar14;
  uVar12 = (ulonglong)(auVar19._8_8_ * dVar49) & uVar15;
  auVar46._8_4_ = (undefined4)uVar12;
  auVar46._12_4_ = (undefined4)(uVar12 >> 0x20);
  auVar2._4_4_ = ~uVar27 & uVar47;
  auVar2._0_4_ = ~(uint)uVar14 & uVar45;
  auVar2._8_4_ = ~(uint)uVar15 & uVar48;
  auVar2._12_4_ = ~uVar28 & uVar50;
  auVar5._4_4_ = ~uVar27 & uVar52;
  auVar5._0_4_ = ~(uint)uVar14 & uVar51;
  auVar5._8_4_ = ~(uint)uVar15 & uVar53;
  auVar5._12_4_ = ~uVar28 & uVar54;
  if (this->rot_interp_type == ENUM_DivisiveRot_Interp) {
    dVar32 = SUB168(auVar46 | auVar5,0);
    auVar35._8_4_ = (int)local_e8._0_8_;
    auVar35._0_8_ = local_e8._0_8_;
    auVar35._12_4_ = (int)((ulonglong)local_e8._0_8_ >> 0x20);
    dVar36 = SUB168(auVar43 | auVar2,0);
    dVar26 = SUB168(auVar43 | auVar2,8);
    auVar23._8_4_ = (int)local_e8._8_8_;
    auVar23._0_8_ = local_e8._8_8_;
    auVar23._12_4_ = (int)((ulonglong)local_e8._8_8_ >> 0x20);
    dVar49 = SUB168(auVar46 | auVar5,8);
    dVar8 = (double)local_e8._0_8_ * dVar26 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dStack_d0 * dVar32 +
            (double)local_e8._8_8_ * dVar36 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            local_d8 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar9 = (double)local_e8._0_8_ * dVar36 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dStack_d0 * dVar49 +
            (double)local_e8._8_8_ * dVar26 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            local_d8 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    __return_storage_ptr__->X =
         (double)local_e8._0_8_ * dVar49 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dStack_d0 * dVar36 +
         (double)local_e8._8_8_ * dVar32 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_d8 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    __return_storage_ptr__->Y =
         auVar35._8_8_ * dVar32 * dVar4 + dStack_d0 * dVar26 + auVar23._8_8_ * dVar49 * dVar16 +
         local_d8 * dVar36 * dVar6;
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar8;
    auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    __return_storage_ptr__->Z = dVar8;
    __return_storage_ptr__->W = (double)auVar7._8_8_;
  }
  else {
    pTVar13 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_c8,(TQuat<double> *)local_e8,&local_108,(double)param_6);
    dVar4 = pTVar13->Y;
    __return_storage_ptr__->X = pTVar13->X;
    __return_storage_ptr__->Y = dVar4;
    dVar6 = pTVar13->Z;
    dVar9 = pTVar13->W;
    __return_storage_ptr__->Z = dVar6;
    __return_storage_ptr__->W = dVar9;
    dVar32 = __return_storage_ptr__->X;
    dVar36 = __return_storage_ptr__->Y;
    dVar16 = dVar6 * dVar6 + dVar32 * dVar32;
    dVar26 = dVar9 * dVar9 + dVar36 * dVar36;
    dVar4 = dVar26 + dVar16;
    dVar16 = dVar16 + dVar26;
    auVar3._8_4_ = SUB84(dVar16,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    auVar19 = sqrtpd(auVar34,auVar3);
    uVar15 = -(ulonglong)(dVar8 <= dVar4);
    uVar14 = -(ulonglong)(dVar8 <= dVar16);
    uVar27 = (uint)(uVar15 >> 0x20);
    uVar28 = (uint)(uVar14 >> 0x20);
    auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar38._0_8_ = uVar15 & (ulonglong)(auVar41._0_8_ * dVar32);
    uVar12 = uVar14 & (ulonglong)(auVar41._8_8_ * dVar36);
    auVar38._8_4_ = (undefined4)uVar12;
    auVar38._12_4_ = (undefined4)(uVar12 >> 0x20);
    auVar24._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar24._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar24._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar24._12_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar19);
    auVar31._0_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar31._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar31._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar31._12_4_ =
         ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    __return_storage_ptr__->X = (double)SUB168(auVar38 | auVar24,0);
    __return_storage_ptr__->Y = (double)SUB168(auVar38 | auVar24,8);
    auVar25._0_8_ = (ulonglong)(auVar19._0_8_ * dVar6) & uVar15;
    uVar14 = (ulonglong)(auVar19._8_8_ * dVar9) & uVar14;
    auVar25._8_4_ = (undefined4)uVar14;
    auVar25._12_4_ = (undefined4)(uVar14 >> 0x20);
    __return_storage_ptr__->Z = (double)SUB168(auVar31 | auVar25,0);
    __return_storage_ptr__->W = (double)SUB168(auVar31 | auVar25,8);
  }
  return __return_storage_ptr__;
}

// BoneArrayMachine @ 14d2baac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_DragonFeetSolver::BoneArrayMachine
          (FAnimNode_DragonFeetSolver *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          FName param_2,FName param_3,bool param_4)

{
  int *piVar1;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FDragonData_SpineFeetPair *pFVar10;
  FScriptContainerElement *pFVar11;
  FName FVar12;
  FName FVar13;
  void *pvVar14;
  USkeletalMeshComponent *this_00;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar27;
  FName *pFVar28;
  FName FVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  ulonglong uVar34;
  undefined1 auStackY_528 [32];
  uint local_498;
  longlong local_478;
  TArray<FName,TSizedDefaultAllocator<32>_> local_470;
  TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_> local_460;
  longlong local_450;
  FName local_448;
  FName local_440;
  undefined1 local_438 [16];
  TRotator<double> local_428;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3e8;
  undefined1 local_3c8 [8];
  uint uStack_3c0;
  FCompactPoseBoneIndex FStack_3bc;
  void *local_3b8;
  undefined8 local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  void *local_308;
  undefined8 local_300;
  void *local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_2c8;
  undefined8 local_2c0;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_2b8;
  undefined8 local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  FDragonData_SpineFeetPair local_258;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_498 = 0;
  iVar25 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar25 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar25 * 8) = param_2;
  if (!param_4) {
    memset(&local_258,0,0x170);
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_258);
    local_258.Spine_Involved.bUseSkeletonIndex = 0;
    local_258.Spine_Involved.BoneIndex = -1;
    local_258.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_258.Spine_Involved.BoneName = param_2;
    FBoneReference::Initialize(&local_258.Spine_Involved,this->SavedBoneContainer);
    pTVar2 = &this->spine_Feet_pair;
    pFVar10 = (FDragonData_SpineFeetPair *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar10 <= &local_258) && (&local_258 < pFVar10 + (this->spine_Feet_pair).ArrayMax)) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar24)) {
      pcVar15 = (code *)swi(3);
      pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
      return pTVar27;
    }
    iVar25 = (this->spine_Feet_pair).ArrayNum;
    piVar1 = &(this->spine_Feet_pair).ArrayMax;
    if (iVar25 == *piVar1) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x170,0x10,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->spine_Feet_pair).ArrayNum = iVar25 + 1;
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair
              ((FDragonData_SpineFeetPair *)
               ((pTVar2->AllocatorInstance).Data + (longlong)iVar25 * 0x170),&local_258);
    FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_258);
  }
  local_478 = 0;
  uVar34 = (longlong)param_1;
  do {
    local_450 = local_478;
    if (param_4) {
      local_470.ArrayNum = (this->Total_spine_bones).ArrayNum;
      lVar31 = (longlong)local_470.ArrayNum;
      pFVar11 = (this->Total_spine_bones).AllocatorInstance.Data;
      local_470.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_470.ArrayNum == 0) {
        local_470.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_470.ArrayNum,0,&local_470.AllocatorInstance,local_470.ArrayNum,
                   &local_470.ArrayMax);
        memcpy(local_470.AllocatorInstance.Data,pFVar11,lVar31 << 3);
      }
      uVar30 = __return_storage_ptr__->ArrayNum - 1;
      uVar26 = 0;
      if ((int)uVar30 < __return_storage_ptr__->ArrayNum) {
        uVar26 = ~uVar30 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      FVar12 = *(FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                         (longlong)(int)uVar30 * 8);
      pFVar28 = ::FName::FName(&local_448,"");
      FVar29 = *pFVar28;
      pFVar28 = ::FName::FName(&local_440,"");
      uVar30 = ~(uint)uVar34 >> 0x1f;
      FVar13 = *pFVar28;
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      lVar31 = (longlong)param_1 * 0xd0;
      fVar3 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x88)
      ;
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      pFVar33 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar33 + lVar31 + 0x28;
      dVar16 = *(double *)pFVar11;
      dVar17 = *(double *)(pFVar11 + 8);
      dVar7 = *(double *)(pFVar33 + lVar31 + 0x38);
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      fVar4 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x80)
      ;
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      pFVar33 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar33 + lVar31 + 0x48;
      dVar18 = *(double *)pFVar11;
      dVar19 = *(double *)(pFVar11 + 8);
      dVar8 = *(double *)(pFVar33 + lVar31 + 0x58);
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      pFVar33 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar33 + lVar31 + 0x60;
      dVar20 = *(double *)pFVar11;
      dVar21 = *(double *)(pFVar11 + 8);
      dVar9 = *(double *)(pFVar33 + lVar31 + 0x70);
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      fVar5 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x90)
      ;
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      fVar6 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x8c)
      ;
      uVar26 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar26 = uVar30;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      pFVar11 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      local_460.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_460.ArrayNum = *(int *)(pFVar11 + lVar31 + 200);
      lVar32 = (longlong)local_460.ArrayNum;
      pvVar14 = *(void **)(pFVar11 + lVar31 + 0xc0);
      if (local_460.ArrayNum == 0) {
        local_460.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,local_460.ArrayNum,0,&local_460.AllocatorInstance,local_460.ArrayNum,
                   &local_460.ArrayMax);
        memcpy(local_460.AllocatorInstance.Data,pvVar14,lVar32 * 0x30);
      }
      local_428.Pitch = dVar16;
      local_428.Yaw = dVar17;
      local_428.Roll = dVar7;
      local_408._s_0.X = dVar18;
      local_408._s_0.Y = dVar19;
      local_408._s_0.Z = dVar8;
      local_3e8._s_0.X = dVar20;
      local_3e8._s_0.Y = dVar21;
      local_3e8._s_0.Z = dVar9;
      bVar24 = Check_Loop_Exist(this,param_1,0.0,&local_460,fVar6,fVar5,
                                (TVector<double> *)&local_3e8._s_0,
                                (TVector<double> *)&local_408._s_0,fVar4,&local_428,fVar3,param_2,
                                FVar13,FVar29,FVar12,&local_470);
      if (bVar24) {
        return __return_storage_ptr__;
      }
    }
    local_478 = local_478 + 1;
    this_00 = this->owning_skel;
    uVar26 = 0;
    if ((int)local_498 < __return_storage_ptr__->ArrayNum) {
      uVar26 = ~local_498 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar15 = (code *)swi(3);
      pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
      return pTVar27;
    }
    FVar29 = USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)this_00,(FName)local_438)
    ;
    FVar12 = (FName)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((((ulonglong)FVar12 <= (ulonglong)FVar29) &&
        ((ulonglong)FVar29 <
         (ulonglong)((longlong)FVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8))) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar24)) {
      pcVar15 = (code *)swi(3);
      pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
      return pTVar27;
    }
    iVar25 = __return_storage_ptr__->ArrayNum;
    if (iVar25 == __return_storage_ptr__->ArrayMax) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar25 + 1;
    *(undefined8 *)(pFVar11 + (longlong)iVar25 * 8) = *(undefined8 *)FVar29;
    if (!param_4) {
      local_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      local_374 = 0;
      uVar30 = __return_storage_ptr__->ArrayNum - 1;
      local_36c = 0;
      local_264 = 0;
      uStack_260 = 0;
      local_25c = 0;
      local_3c8._0_4_ = 0;
      local_3c8._4_4_ = 0;
      local_368._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_368._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_368._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      uVar26 = 0;
      if ((int)uVar30 < __return_storage_ptr__->ArrayNum) {
        uVar26 = ~uVar30 >> 0x1f;
      }
      uStack_3c0 = 0x7fffffff;
      FStack_3bc = (FCompactPoseBoneIndex)0xffffffff;
      local_3b8 = (void *)0x0;
      local_3b0 = 0;
      local_3a8 = (void *)0x0;
      local_3a0 = 0;
      local_398 = (void *)0x0;
      local_390 = 0;
      local_388 = (void *)0x0;
      local_380 = 0;
      local_378 = 0;
      local_308 = (void *)0x0;
      local_300 = 0;
      local_2f8 = (void *)0x0;
      local_2f0 = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      local_2d8 = (void *)0x0;
      local_2d0 = 0;
      local_2c8 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_2c0 = 0;
      local_2b8 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_2b0 = 0;
      local_2a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_2a0 = 0;
      local_298 = (void *)0x0;
      local_290 = 0;
      local_288 = (void *)0x0;
      local_280 = 0;
      local_278 = 0;
      local_358._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_358._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_358._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_348._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_348._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_348._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_338._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_338._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_338._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_328._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_328._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_318._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_318._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_318._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      local_3c8 = *(undefined1 (*) [8])
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar30 * 8);
      uStack_3c0 = 0x7fffffff;
      FStack_3bc = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize((FBoneReference *)local_3c8,this->SavedBoneContainer);
      pTVar2 = &this->spine_Feet_pair;
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_3c8) &&
          ((FScriptContainerElement *)local_3c8 <
           pFVar11 + (longlong)(this->spine_Feet_pair).ArrayMax * 0x170)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar15 = (code *)swi(3);
        pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
        return pTVar27;
      }
      iVar25 = (this->spine_Feet_pair).ArrayNum;
      piVar1 = &(this->spine_Feet_pair).ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x170,0x10,&pTVar2->AllocatorInstance,piVar1);
      }
      pvVar14 = local_3b8;
      FVar12.Number = (uint)FStack_3bc;
      FVar12.ComparisonIndex.Value = uStack_3c0;
      (this->spine_Feet_pair).ArrayNum = iVar25 + 1;
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      lVar31 = (longlong)iVar25 * 0x170;
      pFVar33 = pFVar11 + lVar31 + 0x10;
      pFVar28 = (FName *)(pFVar11 + lVar31);
      pFVar28->ComparisonIndex = (FNameEntryId)local_3c8._0_4_;
      pFVar28->Number = local_3c8._4_4_;
      pFVar28[1] = FVar12;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_3b0;
      *(int *)(pFVar33 + 8) = (int)local_3b0;
      if ((int)local_3b0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_3b0,0,(ForAnyElementType *)pFVar33,(int)local_3b0,
                   (int *)(pFVar11 + lVar31 + 0x1c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 4);
      }
      pvVar14 = local_3a8;
      pFVar33 = pFVar11 + lVar31 + 0x20;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_3a0;
      *(int *)(pFVar33 + 8) = (int)local_3a0;
      if ((int)local_3a0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x2c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_3a0,0,(ForAnyElementType *)pFVar33,(int)local_3a0,
                   (int *)(pFVar11 + lVar31 + 0x2c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 4);
      }
      pvVar14 = local_398;
      pFVar33 = pFVar11 + lVar31 + 0x30;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_390;
      *(int *)(pFVar33 + 8) = (int)local_390;
      if ((int)local_390 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_390,0,(ForAnyElementType *)pFVar33,(int)local_390,
                   (int *)(pFVar11 + lVar31 + 0x3c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 4);
      }
      pvVar14 = local_388;
      pFVar33 = pFVar11 + lVar31 + 0x40;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_380;
      *(int *)(pFVar33 + 8) = (int)local_380;
      if ((int)local_380 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x4c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_380,0,(ForAnyElementType *)pFVar33,(int)local_380,
                   (int *)(pFVar11 + lVar31 + 0x4c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 4);
      }
      pvVar14 = local_308;
      *(undefined4 *)(pFVar11 + lVar31 + 0x50) = local_378;
      pFVar33 = pFVar11 + lVar31 + 0xc0;
      *(undefined8 *)(pFVar11 + lVar31 + 0x60) = local_368._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x60 + 8) = local_368._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x70) = local_358._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x70 + 8) = local_358._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x80) = local_348._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x80 + 8) = local_348._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x90) = local_338._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x90 + 8) = local_338._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xa0) = local_328._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xa0 + 8) = local_328._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xb0) = local_318._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xb0 + 8) = local_318._8_8_;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_300;
      *(int *)(pFVar33 + 8) = (int)local_300;
      if ((int)local_300 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xcc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_300,0,(ForAnyElementType *)pFVar33,(int)local_300,
                   (int *)(pFVar11 + lVar31 + 0xcc));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 2);
      }
      pvVar14 = local_2f8;
      pFVar33 = pFVar11 + lVar31 + 0xd0;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_2f0;
      *(int *)(pFVar33 + 8) = (int)local_2f0;
      if ((int)local_2f0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xdc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_2f0,0,(ForAnyElementType *)pFVar33,(int)local_2f0,
                   (int *)(pFVar11 + lVar31 + 0xdc));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 * 0x18);
      }
      pvVar14 = local_2e8;
      pFVar33 = pFVar11 + lVar31 + 0xe0;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_2e0;
      *(int *)(pFVar33 + 8) = (int)local_2e0;
      if ((int)local_2e0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xec) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_2e0,0,(ForAnyElementType *)pFVar33,(int)local_2e0,
                   (int *)(pFVar11 + lVar31 + 0xec));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 2);
      }
      pvVar14 = local_2d8;
      pFVar33 = pFVar11 + lVar31 + 0xf0;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_2d0;
      *(int *)(pFVar33 + 8) = (int)local_2d0;
      if ((int)local_2d0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xfc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_2d0,0,(ForAnyElementType *)pFVar33,(int)local_2d0,
                   (int *)(pFVar11 + lVar31 + 0xfc));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 * 0x18);
      }
      pTVar22 = local_2c8;
      pFVar33 = pFVar11 + lVar31 + 0x100;
      *(undefined8 *)pFVar33 = 0;
      iVar25 = (int)local_2c0;
      *(int *)(pFVar33 + 8) = (int)local_2c0;
      if ((int)local_2c0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x10c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2c0,0,(ForAnyElementType *)pFVar33,(int)local_2c0,
                   (int *)(pFVar11 + lVar31 + 0x10c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar33,pTVar22,iVar25);
      }
      pTVar22 = local_2b8;
      pFVar33 = pFVar11 + lVar31 + 0x110;
      *(undefined8 *)pFVar33 = 0;
      iVar25 = (int)local_2b0;
      *(int *)(pFVar33 + 8) = (int)local_2b0;
      if ((int)local_2b0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x11c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2b0,0,(ForAnyElementType *)pFVar33,(int)local_2b0,
                   (int *)(pFVar11 + lVar31 + 0x11c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar33,pTVar22,iVar25);
      }
      pTVar23 = local_2a8;
      pFVar33 = pFVar11 + lVar31 + 0x120;
      *(undefined8 *)pFVar33 = 0;
      iVar25 = (int)local_2a0;
      *(int *)(pFVar33 + 8) = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        *(int *)(pFVar11 + lVar31 + 300) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2a0,0,(ForAnyElementType *)pFVar33,(int)local_2a0,
                   (int *)(pFVar11 + lVar31 + 300));
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar33,pTVar23,iVar25);
      }
      pvVar14 = local_298;
      pFVar33 = pFVar11 + lVar31 + 0x130;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_290;
      *(int *)(pFVar33 + 8) = (int)local_290;
      if ((int)local_290 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x13c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_290,0,(ForAnyElementType *)pFVar33,(int)local_290,
                   (int *)(pFVar11 + lVar31 + 0x13c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 << 2);
      }
      pvVar14 = local_288;
      pFVar33 = pFVar11 + lVar31 + 0x140;
      *(undefined8 *)pFVar33 = 0;
      lVar32 = (longlong)(int)local_280;
      *(int *)(pFVar33 + 8) = (int)local_280;
      if ((int)local_280 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x14c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_280,0,(ForAnyElementType *)pFVar33,(int)local_280,
                   (int *)(pFVar11 + lVar31 + 0x14c));
        memcpy(*(void **)pFVar33,pvVar14,lVar32 * 0x18);
      }
      *(undefined4 *)(pFVar11 + lVar31 + 0x150) = local_278;
      *(ulonglong *)(pFVar11 + lVar31 + 0x158) = CONCAT44(uStack_26c,uStack_270);
      *(ulonglong *)(pFVar11 + lVar31 + 0x158 + 8) = CONCAT44(local_264,uStack_268);
      *(ulonglong *)(pFVar11 + lVar31 + 0x168) = CONCAT44(local_25c,uStack_260);
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_2a8,(int)local_2a0);
      if (local_2a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2a8);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_2b8,(int)local_2b0);
      if (local_2b8 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2b8);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_2c8,(int)local_2c0);
      if (local_2c8 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2c8);
      }
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      if (local_308 != (void *)0x0) {
        FMemory::Free(local_308);
      }
      if (local_388 != (void *)0x0) {
        FMemory::Free(local_388);
      }
      if (local_398 != (void *)0x0) {
        FMemory::Free(local_398);
      }
      if (local_3a8 != (void *)0x0) {
        FMemory::Free(local_3a8);
      }
      if (local_3b8 != (void *)0x0) {
        FMemory::Free(local_3b8);
      }
    }
    uVar30 = __return_storage_ptr__->ArrayNum - 1;
    uVar26 = 0;
    if ((int)uVar30 < __return_storage_ptr__->ArrayNum) {
      uVar26 = ~uVar30 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar15 = (code *)swi(3);
      pTVar27 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar15)();
      return pTVar27;
    }
    if ((*(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar30 * 8) ==
         param_3) && (!param_4)) {
      return __return_storage_ptr__;
    }
    if (0x31 < (int)(local_498 + 1)) {
      return __return_storage_ptr__;
    }
    uVar34 = (ulonglong)(uint)param_1;
    local_498 = local_498 + 1;
  } while( true );
}

// BoneArrayMachine_Feet @ 14d2bcb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_DragonFeetSolver::BoneArrayMachine_Feet
          (FAnimNode_DragonFeetSolver *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          FName param_2,FName param_3,FName param_4,FName param_5,bool param_6)

{
  int *piVar1;
  FName *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FDragonData_SpineFeetPair *pFVar10;
  FScriptContainerElement *pFVar11;
  FName FVar12;
  void *pvVar13;
  USkeletalMeshComponent *this_00;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar21;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar26;
  FName FVar27;
  uint uVar28;
  uint uVar29;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  undefined1 auStackY_518 [32];
  uint local_480;
  TArray<FName,TSizedDefaultAllocator<32>_> local_458;
  TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_> local_448;
  undefined1 local_438 [16];
  TRotator<double> local_428;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3e8;
  undefined1 local_3c8 [8];
  uint uStack_3c0;
  FCompactPoseBoneIndex FStack_3bc;
  void *local_3b8;
  undefined8 local_3b0;
  void *local_3a8;
  undefined8 local_3a0;
  void *local_398;
  undefined8 local_390;
  void *local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  void *local_308;
  undefined8 local_300;
  void *local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_2c8;
  undefined8 local_2c0;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *local_2b8;
  undefined8 local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  FDragonData_SpineFeetPair local_258;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_518;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_480 = 0;
  iVar24 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&__return_storage_ptr__->AllocatorInstance,
                      &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar24 + 1;
  *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar24 * 8) = param_2;
  if (!param_6) {
    memset(&local_258,0,0x170);
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_258);
    local_258.Spine_Involved.bUseSkeletonIndex = 0;
    local_258.Spine_Involved.BoneIndex = -1;
    local_258.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    local_258.Spine_Involved.BoneName = param_2;
    FBoneReference::Initialize(&local_258.Spine_Involved,this->SavedBoneContainer);
    pTVar30 = &this->spine_Feet_pair;
    pFVar10 = (FDragonData_SpineFeetPair *)(pTVar30->AllocatorInstance).Data;
    if (((pFVar10 <= &local_258) && (&local_258 < pFVar10 + (this->spine_Feet_pair).ArrayMax)) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar14 = (code *)swi(3);
      pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
      return pTVar26;
    }
    iVar24 = (this->spine_Feet_pair).ArrayNum;
    piVar1 = &(this->spine_Feet_pair).ArrayMax;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x170,0x10,&pTVar30->AllocatorInstance,piVar1);
    }
    (this->spine_Feet_pair).ArrayNum = iVar24 + 1;
    FDragonData_SpineFeetPair::FDragonData_SpineFeetPair
              ((FDragonData_SpineFeetPair *)
               ((pTVar30->AllocatorInstance).Data + (longlong)iVar24 * 0x170),&local_258);
    FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_258);
  }
  do {
    if (param_6) {
      local_458.ArrayNum = (this->Total_spine_bones).ArrayNum;
      lVar31 = (longlong)local_458.ArrayNum;
      local_458.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar11 = (this->Total_spine_bones).AllocatorInstance.Data;
      if (local_458.ArrayNum == 0) {
        local_458.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_458.ArrayNum,0,&local_458.AllocatorInstance,local_458.ArrayNum,
                   &local_458.ArrayMax);
        memcpy(local_458.AllocatorInstance.Data,pFVar11,lVar31 << 3);
      }
      uVar28 = __return_storage_ptr__->ArrayNum - 1;
      uVar25 = 0;
      if ((int)uVar28 < __return_storage_ptr__->ArrayNum) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      FVar12 = *(FName *)((__return_storage_ptr__->AllocatorInstance).Data +
                         (longlong)(int)uVar28 * 8);
      uVar28 = (uint)~param_1 >> 0x1f;
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      lVar31 = (longlong)param_1 * 0xd0;
      fVar3 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x88)
      ;
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      pFVar32 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar32 + lVar31 + 0x28;
      dVar15 = *(double *)pFVar11;
      dVar16 = *(double *)(pFVar11 + 8);
      dVar7 = *(double *)(pFVar32 + lVar31 + 0x38);
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      fVar4 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x80)
      ;
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      pFVar32 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar32 + lVar31 + 0x48;
      dVar17 = *(double *)pFVar11;
      dVar18 = *(double *)(pFVar11 + 8);
      dVar8 = *(double *)(pFVar32 + lVar31 + 0x58);
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      pFVar32 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      pFVar11 = pFVar32 + lVar31 + 0x60;
      dVar19 = *(double *)pFVar11;
      dVar20 = *(double *)(pFVar11 + 8);
      dVar9 = *(double *)(pFVar32 + lVar31 + 0x70);
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      fVar5 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x90)
      ;
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      fVar6 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar31 + 0x8c)
      ;
      uVar25 = 0;
      if (param_1 < (this->dragon_input_data).FeetBones.ArrayNum) {
        uVar25 = uVar28;
      }
      if ((uVar25 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      local_448.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar11 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
      local_448.ArrayNum = *(int *)(pFVar11 + lVar31 + 200);
      lVar33 = (longlong)local_448.ArrayNum;
      pvVar13 = *(void **)(pFVar11 + lVar31 + 0xc0);
      if (local_448.ArrayNum == 0) {
        local_448.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,local_448.ArrayNum,0,&local_448.AllocatorInstance,local_448.ArrayNum,
                   &local_448.ArrayMax);
        memcpy(local_448.AllocatorInstance.Data,pvVar13,lVar33 * 0x30);
      }
      local_428.Pitch = dVar15;
      local_428.Yaw = dVar16;
      local_428.Roll = dVar7;
      local_408._s_0.X = dVar17;
      local_408._s_0.Y = dVar18;
      local_408._s_0.Z = dVar8;
      local_3e8._s_0.X = dVar19;
      local_3e8._s_0.Y = dVar20;
      local_3e8._s_0.Z = dVar9;
      bVar23 = Check_Loop_Exist(this,param_1,0.0,&local_448,fVar6,fVar5,
                                (TVector<double> *)&local_3e8._s_0,
                                (TVector<double> *)&local_408._s_0,fVar4,&local_428,fVar3,param_2,
                                param_3,param_4,FVar12,&local_458);
      if (bVar23) {
        return __return_storage_ptr__;
      }
    }
    uVar25 = local_480 + 1;
    this_00 = this->owning_skel;
    uVar28 = 0;
    if ((int)local_480 < __return_storage_ptr__->ArrayNum) {
      uVar28 = ~local_480 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar14 = (code *)swi(3);
      pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
      return pTVar26;
    }
    FVar27 = USkinnedMeshComponent::GetParentBone((USkinnedMeshComponent *)this_00,(FName)local_438)
    ;
    FVar12 = (FName)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((((ulonglong)FVar12 <= (ulonglong)FVar27) &&
        ((ulonglong)FVar27 <
         (ulonglong)((longlong)FVar12 + (longlong)__return_storage_ptr__->ArrayMax * 8))) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar23)) {
      pcVar14 = (code *)swi(3);
      pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
      return pTVar26;
    }
    iVar24 = __return_storage_ptr__->ArrayNum;
    if (iVar24 == __return_storage_ptr__->ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&__return_storage_ptr__->AllocatorInstance,
                          &__return_storage_ptr__->ArrayMax);
    }
    pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar24 + 1;
    *(undefined8 *)(pFVar11 + (longlong)iVar24 * 8) = *(undefined8 *)FVar27;
    if (!param_6) {
      local_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      local_374 = 0;
      uVar29 = __return_storage_ptr__->ArrayNum - 1;
      local_36c = 0;
      local_264 = 0;
      uStack_260 = 0;
      local_25c = 0;
      local_3c8._0_4_ = 0;
      local_3c8._4_4_ = 0;
      local_368._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_368._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_368._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_3b8 = (void *)0x0;
      local_3b0 = 0;
      local_3a8 = (void *)0x0;
      local_3a0 = 0;
      local_398 = (void *)0x0;
      local_390 = 0;
      local_388 = (void *)0x0;
      local_380 = 0;
      local_378 = 0;
      local_308 = (void *)0x0;
      local_358._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_358._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_358._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_300 = 0;
      local_2f8 = (void *)0x0;
      local_2f0 = 0;
      local_2e8 = (void *)0x0;
      local_2e0 = 0;
      local_348._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_348._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_348._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_2d8 = (void *)0x0;
      local_2d0 = 0;
      local_2c8 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_2c0 = 0;
      local_2b8 = (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0;
      local_338._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_338._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_338._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_2b0 = 0;
      local_2a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_2a0 = 0;
      local_298 = (void *)0x0;
      local_290 = 0;
      local_288 = (void *)0x0;
      local_280 = 0;
      local_278 = 0;
      uVar28 = 0;
      if ((int)uVar29 < __return_storage_ptr__->ArrayNum) {
        uVar28 = ~uVar29 >> 0x1f;
      }
      local_318._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_318._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_318._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      uStack_3c0 = 0x7fffffff;
      FStack_3bc = (FCompactPoseBoneIndex)0xffffffff;
      local_328._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_328._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_328._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      if ((uVar28 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      local_3c8 = *(undefined1 (*) [8])
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar29 * 8);
      uStack_3c0 = 0x7fffffff;
      FStack_3bc = (FCompactPoseBoneIndex)0xffffffff;
      FBoneReference::Initialize((FBoneReference *)local_3c8,this->SavedBoneContainer);
      pTVar30 = &this->spine_Feet_pair;
      pFVar11 = (pTVar30->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_3c8) &&
          ((FScriptContainerElement *)local_3c8 <
           pFVar11 + (longlong)(this->spine_Feet_pair).ArrayMax * 0x170)) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar23)) {
        pcVar14 = (code *)swi(3);
        pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
        return pTVar26;
      }
      iVar24 = (this->spine_Feet_pair).ArrayNum;
      piVar1 = &(this->spine_Feet_pair).ArrayMax;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x170,0x10,&pTVar30->AllocatorInstance,piVar1);
      }
      pvVar13 = local_3b8;
      FVar12.Number = (uint)FStack_3bc;
      FVar12.ComparisonIndex.Value = uStack_3c0;
      (this->spine_Feet_pair).ArrayNum = iVar24 + 1;
      pFVar11 = (pTVar30->AllocatorInstance).Data;
      lVar31 = (longlong)iVar24 * 0x170;
      pFVar32 = pFVar11 + lVar31 + 0x10;
      pFVar2 = (FName *)(pFVar11 + lVar31);
      pFVar2->ComparisonIndex = (FNameEntryId)local_3c8._0_4_;
      pFVar2->Number = local_3c8._4_4_;
      pFVar2[1] = FVar12;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_3b0;
      *(int *)(pFVar32 + 8) = (int)local_3b0;
      if ((int)local_3b0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_3b0,0,(ForAnyElementType *)pFVar32,(int)local_3b0,
                   (int *)(pFVar11 + lVar31 + 0x1c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 4);
      }
      pvVar13 = local_3a8;
      pFVar32 = pFVar11 + lVar31 + 0x20;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_3a0;
      *(int *)(pFVar32 + 8) = (int)local_3a0;
      if ((int)local_3a0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x2c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_3a0,0,(ForAnyElementType *)pFVar32,(int)local_3a0,
                   (int *)(pFVar11 + lVar31 + 0x2c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 4);
      }
      pvVar13 = local_398;
      pFVar32 = pFVar11 + lVar31 + 0x30;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_390;
      *(int *)(pFVar32 + 8) = (int)local_390;
      if ((int)local_390 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x3c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_390,0,(ForAnyElementType *)pFVar32,(int)local_390,
                   (int *)(pFVar11 + lVar31 + 0x3c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 4);
      }
      pvVar13 = local_388;
      pFVar32 = pFVar11 + lVar31 + 0x40;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_380;
      *(int *)(pFVar32 + 8) = (int)local_380;
      if ((int)local_380 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x4c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(int)local_380,0,(ForAnyElementType *)pFVar32,(int)local_380,
                   (int *)(pFVar11 + lVar31 + 0x4c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 4);
      }
      pvVar13 = local_308;
      *(undefined4 *)(pFVar11 + lVar31 + 0x50) = local_378;
      pFVar32 = pFVar11 + lVar31 + 0xc0;
      *(undefined8 *)(pFVar11 + lVar31 + 0x60) = local_368._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x60 + 8) = local_368._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x70) = local_358._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x70 + 8) = local_358._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x80) = local_348._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x80 + 8) = local_348._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x90) = local_338._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0x90 + 8) = local_338._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xa0) = local_328._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xa0 + 8) = local_328._8_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xb0) = local_318._0_8_;
      *(undefined8 *)(pFVar11 + lVar31 + 0xb0 + 8) = local_318._8_8_;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_300;
      *(int *)(pFVar32 + 8) = (int)local_300;
      if ((int)local_300 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xcc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_300,0,(ForAnyElementType *)pFVar32,(int)local_300,
                   (int *)(pFVar11 + lVar31 + 0xcc));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 2);
      }
      pvVar13 = local_2f8;
      pFVar32 = pFVar11 + lVar31 + 0xd0;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_2f0;
      *(int *)(pFVar32 + 8) = (int)local_2f0;
      if ((int)local_2f0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xdc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_2f0,0,(ForAnyElementType *)pFVar32,(int)local_2f0,
                   (int *)(pFVar11 + lVar31 + 0xdc));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 * 0x18);
      }
      pvVar13 = local_2e8;
      pFVar32 = pFVar11 + lVar31 + 0xe0;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_2e0;
      *(int *)(pFVar32 + 8) = (int)local_2e0;
      if ((int)local_2e0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xec) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_2e0,0,(ForAnyElementType *)pFVar32,(int)local_2e0,
                   (int *)(pFVar11 + lVar31 + 0xec));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 2);
      }
      pvVar13 = local_2d8;
      pFVar32 = pFVar11 + lVar31 + 0xf0;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_2d0;
      *(int *)(pFVar32 + 8) = (int)local_2d0;
      if ((int)local_2d0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0xfc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_2d0,0,(ForAnyElementType *)pFVar32,(int)local_2d0,
                   (int *)(pFVar11 + lVar31 + 0xfc));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 * 0x18);
      }
      pTVar21 = local_2c8;
      pFVar32 = pFVar11 + lVar31 + 0x100;
      *(undefined8 *)pFVar32 = 0;
      iVar24 = (int)local_2c0;
      *(int *)(pFVar32 + 8) = (int)local_2c0;
      if ((int)local_2c0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x10c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2c0,0,(ForAnyElementType *)pFVar32,(int)local_2c0,
                   (int *)(pFVar11 + lVar31 + 0x10c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar32,pTVar21,iVar24);
      }
      pTVar21 = local_2b8;
      pFVar32 = pFVar11 + lVar31 + 0x110;
      *(undefined8 *)pFVar32 = 0;
      iVar24 = (int)local_2b0;
      *(int *)(pFVar32 + 8) = (int)local_2b0;
      if ((int)local_2b0 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x11c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2b0,0,(ForAnyElementType *)pFVar32,(int)local_2b0,
                   (int *)(pFVar11 + lVar31 + 0x11c));
        ConstructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar32,pTVar21,iVar24);
      }
      pTVar22 = local_2a8;
      pFVar32 = pFVar11 + lVar31 + 0x120;
      *(undefined8 *)pFVar32 = 0;
      iVar24 = (int)local_2a0;
      *(int *)(pFVar32 + 8) = (int)local_2a0;
      if ((int)local_2a0 == 0) {
        *(int *)(pFVar11 + lVar31 + 300) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(int)local_2a0,0,(ForAnyElementType *)pFVar32,(int)local_2a0,
                   (int *)(pFVar11 + lVar31 + 300));
        ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
                  (*(void **)pFVar32,pTVar22,iVar24);
      }
      pvVar13 = local_298;
      pFVar32 = pFVar11 + lVar31 + 0x130;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_290;
      *(int *)(pFVar32 + 8) = (int)local_290;
      if ((int)local_290 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x13c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_290,0,(ForAnyElementType *)pFVar32,(int)local_290,
                   (int *)(pFVar11 + lVar31 + 0x13c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 << 2);
      }
      pvVar13 = local_288;
      pFVar32 = pFVar11 + lVar31 + 0x140;
      *(undefined8 *)pFVar32 = 0;
      lVar33 = (longlong)(int)local_280;
      *(int *)(pFVar32 + 8) = (int)local_280;
      if ((int)local_280 == 0) {
        *(int *)(pFVar11 + lVar31 + 0x14c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_280,0,(ForAnyElementType *)pFVar32,(int)local_280,
                   (int *)(pFVar11 + lVar31 + 0x14c));
        memcpy(*(void **)pFVar32,pvVar13,lVar33 * 0x18);
      }
      *(undefined4 *)(pFVar11 + lVar31 + 0x150) = local_278;
      *(ulonglong *)(pFVar11 + lVar31 + 0x158) = CONCAT44(uStack_26c,uStack_270);
      *(ulonglong *)(pFVar11 + lVar31 + 0x158 + 8) = CONCAT44(local_264,uStack_268);
      *(ulonglong *)(pFVar11 + lVar31 + 0x168) = CONCAT44(local_25c,uStack_260);
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_2a8,(int)local_2a0);
      if (local_2a8 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2a8);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_2b8,(int)local_2b0);
      if (local_2b8 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2b8);
      }
      DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                (local_2c8,(int)local_2c0);
      if (local_2c8 != (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_2c8);
      }
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
      if (local_2e8 != (void *)0x0) {
        FMemory::Free(local_2e8);
      }
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      if (local_308 != (void *)0x0) {
        FMemory::Free(local_308);
      }
      if (local_388 != (void *)0x0) {
        FMemory::Free(local_388);
      }
      if (local_398 != (void *)0x0) {
        FMemory::Free(local_398);
      }
      if (local_3a8 != (void *)0x0) {
        FMemory::Free(local_3a8);
      }
      if (local_3b8 != (void *)0x0) {
        FMemory::Free(local_3b8);
      }
    }
    uVar29 = __return_storage_ptr__->ArrayNum - 1;
    uVar28 = 0;
    if ((int)uVar29 < __return_storage_ptr__->ArrayNum) {
      uVar28 = ~uVar29 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar14 = (code *)swi(3);
      pTVar26 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar14)();
      return pTVar26;
    }
    if ((*(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)(int)uVar29 * 8) ==
         param_5) && (!param_6)) {
      return __return_storage_ptr__;
    }
    local_480 = uVar25;
    if (0x31 < (int)uVar25) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// BoneInverseConversion @ 14d2bde30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
FAnimNode_DragonFeetSolver::BoneInverseConversion
          (FAnimNode_DragonFeetSolver *this,TRotator<double> *__return_storage_ptr__,
          FCompactPoseBoneIndex param_1,TRotator<double> *param_2,FBoneContainer *param_3,
          FCSPose<FCompactPose> *param_4)

{
  longlong lVar1;
  USceneComponent *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TTransform<double> *pTVar11;
  TRotator<double> *pTVar12;
  TQuat<double> *pTVar13;
  TQuat<double> *pTVar14;
  undefined1 auStackY_268 [32];
  TQuat<double> local_238;
  TRotator<double> local_218;
  TQuat<double> local_1f8;
  TRotator<double> local_1d8;
  TQuat<double> local_1b8;
  TRotator<double> local_198;
  TRotator<double> local_180;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_4,param_1);
  local_148.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
  local_e8.Rotation.XY.m128d_f64[0] = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  local_e8.Rotation.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  local_e8.Translation.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            (&local_e8,param_4,&local_148,param_1,BCS_WorldSpace);
  local_1f8.X = 0.0;
  local_1f8.Y = 0.0;
  local_1f8.Z = 0.0;
  local_1f8.W = 0.0;
  lVar1 = this->owning_skel->_padding_;
  if (lVar1 != 0) {
    this_00 = *(USceneComponent **)(lVar1 + 0x1b8);
    if (this_00 == (USceneComponent *)0x0) {
      pTVar12 = &local_218;
      local_218.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_218.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_218.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar12 = USceneComponent::GetComponentRotation(this_00,&local_180);
    }
    local_1d8.Pitch = pTVar12->Pitch;
    local_1d8.Yaw = pTVar12->Yaw;
    local_1d8.Roll = pTVar12->Roll;
    pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_1d8,&local_168);
    local_238.X = local_148.Rotation.XY.m128d_f64[0];
    local_238.Y = local_148.Rotation.XY.m128d_f64[1];
    local_238.Z = local_148.Rotation.ZW.m128d_f64[0];
    local_238.W = local_148.Rotation.ZW.m128d_f64[1];
    pTVar12 = UE::Math::TRotator<double>::TRotator<double>(&local_198,&local_238);
    pTVar14 = UE::Math::TRotator<double>::Quaternion(pTVar12,&local_1b8);
    dVar2 = pTVar13->X;
    dVar3 = pTVar13->Y;
    dVar4 = pTVar13->Z;
    dVar5 = pTVar13->W;
    dVar6 = pTVar14->Z;
    dVar7 = pTVar14->W;
    dVar8 = pTVar14->X;
    dVar9 = pTVar14->Y;
    local_1f8.X = dVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar5 * dVar8 +
                  dVar3 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_1f8.Y = dVar2 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar5 * dVar9 +
                  dVar3 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_1f8.Z = dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  dVar5 * dVar6 +
                  dVar3 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_1f8.W = dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar5 * dVar7 +
                  dVar3 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_238.X = local_148.Rotation.XY.m128d_f64[0];
    local_238.Y = local_148.Rotation.XY.m128d_f64[1];
    local_238.Z = local_148.Rotation.ZW.m128d_f64[0];
    local_238.W = local_148.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_238,&local_218);
    pTVar12 = UE::Math::TRotator<double>::TRotator<double>(&local_198,&local_1f8);
    local_218.Yaw = pTVar12->Yaw;
    pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_218,&local_1b8);
    local_148.Rotation.ZW.m128d_f64[0] = pTVar13->Z;
    local_148.Rotation.ZW.m128d_f64[1] = pTVar13->W;
    local_148.Rotation.XY.m128d_f64[0] = pTVar13->X;
    local_148.Rotation.XY.m128d_f64[1] = pTVar13->Y;
  }
  pTVar13 = UE::Math::TRotator<double>::Quaternion(param_2,&local_1b8);
  dVar8 = pTVar13->X;
  dVar9 = pTVar13->Y;
  dVar5 = pTVar13->Z;
  dVar10 = pTVar13->W;
  dVar4 = dVar8 * local_148.Rotation.XY.m128d_f64[1];
  dVar3 = dVar9 * local_148.Rotation.XY.m128d_f64[0];
  dVar2 = dVar5 * local_148.Rotation.ZW.m128d_f64[1];
  dVar7 = dVar5 * local_148.Rotation.XY.m128d_f64[1];
  dVar6 = local_148.Rotation.ZW.m128d_f64[0] * dVar8 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * local_148.Rotation.XY.m128d_f64[1] +
          dVar9 * local_148.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar5 * local_148.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = dVar8 * local_148.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * local_148.Rotation.ZW.m128d_f64[1] +
          dVar9 * local_148.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar5 * local_148.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_148.Rotation.XY.m128d_f64[0] =
       local_148.Rotation.ZW.m128d_f64[1] * dVar8 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar10 * local_148.Rotation.XY.m128d_f64[0] +
       dVar9 * local_148.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_148.Rotation.ZW.m128d_f64[0] =
       dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar10 * local_148.Rotation.ZW.m128d_f64[0] +
       dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            (&local_e8,param_4,&local_148,param_1,BCS_WorldSpace);
  local_238.X = local_148.Rotation.XY.m128d_f64[0];
  local_238.Y = local_148.Rotation.XY.m128d_f64[1];
  local_238.Z = local_148.Rotation.ZW.m128d_f64[0];
  local_238.W = local_148.Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_238,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// BoneRelativeConversion @ 14d2be270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
FAnimNode_DragonFeetSolver::BoneRelativeConversion
          (FAnimNode_DragonFeetSolver *this,TRotator<double> *__return_storage_ptr__,
          TRotator<double> *param_1,FCompactPoseBoneIndex param_2,TRotator<double> *param_3,
          FBoneContainer *param_4,FCSPose<FCompactPose> *param_5)

{
  longlong lVar1;
  USceneComponent *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TTransform<double> *pTVar11;
  TRotator<double> *pTVar12;
  TQuat<double> *pTVar13;
  undefined1 auStackY_238 [32];
  TQuat<double> local_208;
  TRotator<double> local_1e8;
  TRotator<double> local_1d0;
  TQuat<double> local_1b8;
  TRotator<double> local_198;
  TRotator<double> local_180;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(param_5,param_2);
  local_148.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
  local_e8.Rotation.XY.m128d_f64[0] = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
  local_e8.Rotation.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
  local_e8.Translation.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1];
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            (&local_e8,param_5,&local_148,param_2,BCS_WorldSpace);
  lVar1 = this->owning_skel->_padding_;
  if (lVar1 != 0) {
    this_00 = *(USceneComponent **)(lVar1 + 0x1b8);
    if (this_00 == (USceneComponent *)0x0) {
      pTVar12 = &local_1e8;
      local_1e8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_1e8.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_1e8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    else {
      pTVar12 = USceneComponent::GetComponentRotation(this_00,&local_198);
    }
    local_1d0.Pitch = pTVar12->Pitch;
    local_1d0.Yaw = pTVar12->Yaw;
    local_1d0.Roll = pTVar12->Roll;
    UE::Math::TRotator<double>::Quaternion(&local_1d0,&local_168);
    local_208.X = local_148.Rotation.XY.m128d_f64[0];
    local_208.Y = local_148.Rotation.XY.m128d_f64[1];
    local_208.Z = local_148.Rotation.ZW.m128d_f64[0];
    local_208.W = local_148.Rotation.ZW.m128d_f64[1];
    pTVar12 = UE::Math::TRotator<double>::TRotator<double>(&local_180,&local_208);
    UE::Math::TRotator<double>::Quaternion(pTVar12,&local_1b8);
    local_208.X = local_148.Rotation.XY.m128d_f64[0];
    local_208.Y = local_148.Rotation.XY.m128d_f64[1];
    local_208.Z = local_148.Rotation.ZW.m128d_f64[0];
    local_208.W = local_148.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_208,&local_1e8);
    pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_1e8,&local_1b8);
    local_148.Rotation.ZW.m128d_f64[0] = pTVar13->Z;
    local_148.Rotation.ZW.m128d_f64[1] = pTVar13->W;
    local_148.Rotation.XY.m128d_f64[0] = pTVar13->X;
    local_148.Rotation.XY.m128d_f64[1] = pTVar13->Y;
  }
  pTVar13 = UE::Math::TRotator<double>::Quaternion(param_3,&local_1b8);
  dVar8 = pTVar13->X;
  dVar9 = pTVar13->Y;
  dVar5 = pTVar13->Z;
  dVar10 = pTVar13->W;
  dVar4 = dVar8 * local_148.Rotation.XY.m128d_f64[1];
  dVar3 = dVar9 * local_148.Rotation.XY.m128d_f64[0];
  dVar2 = dVar5 * local_148.Rotation.ZW.m128d_f64[1];
  dVar7 = dVar5 * local_148.Rotation.XY.m128d_f64[1];
  dVar6 = local_148.Rotation.ZW.m128d_f64[0] * dVar8 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar10 * local_148.Rotation.XY.m128d_f64[1] +
          dVar9 * local_148.Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar5 * local_148.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = dVar8 * local_148.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * local_148.Rotation.ZW.m128d_f64[1] +
          dVar9 * local_148.Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar5 * local_148.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_148.Rotation.XY.m128d_f64[0] =
       local_148.Rotation.ZW.m128d_f64[1] * dVar8 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar10 * local_148.Rotation.XY.m128d_f64[0] +
       dVar9 * local_148.Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_148.Rotation.ZW.m128d_f64[0] =
       dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar10 * local_148.Rotation.ZW.m128d_f64[0] +
       dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            (&local_e8,param_5,&local_148,param_2,BCS_WorldSpace);
  local_208.X = local_148.Rotation.XY.m128d_f64[0];
  local_208.Y = local_148.Rotation.XY.m128d_f64[1];
  local_208.Z = local_148.Rotation.ZW.m128d_f64[0];
  local_208.W = local_148.Rotation.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_208,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Calculate_Feet_Rotation @ 14d2bec50

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
FAnimNode_DragonFeetSolver::Calculate_Feet_Rotation
          (FAnimNode_DragonFeetSolver *this,FComponentSpacePoseContext *param_1,
          TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  undefined4 *puVar1;
  FWeakObjectPtr *pFVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FCompactPoseBoneIndex FVar6;
  int iVar7;
  longlong lVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  FReferenceSkeleton *pFVar11;
  ForAnyElementType FVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  ulonglong uVar16;
  FWeakObjectPtr FVar17;
  double dVar18;
  bool bVar19;
  TTransform<double> *pTVar20;
  TQuat<double> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  TVector<double> *pTVar24;
  double *pdVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  TVector<double>_u_0 *this_00;
  longlong lVar29;
  FWeakObjectPtr FVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  uint uVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar72;
  undefined1 auVar60 [16];
  double dVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar74;
  undefined1 in_XMM2 [16];
  uint uVar82;
  uint uVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  double dVar96;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar97;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined4 uVar108;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar109;
  undefined4 uVar110;
  uint uVar111;
  uint uVar112;
  undefined4 uVar113;
  uint uVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  uint uVar117;
  undefined8 uVar118;
  uint uVar127;
  __m128d _Var119;
  uint uVar126;
  uint uVar128;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined4 uVar129;
  undefined4 uVar130;
  undefined4 uVar131;
  double dVar132;
  double dVar133;
  __m128d _Var134;
  undefined1 auVar135 [16];
  double dVar138;
  double dVar139;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  __m128d _Var140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined4 uVar143;
  undefined4 uVar144;
  undefined4 uVar145;
  undefined4 uVar146;
  undefined4 uVar147;
  undefined4 uVar148;
  undefined1 auStackY_978 [32];
  bool local_914;
  longlong local_910;
  longlong local_908;
  longlong local_900;
  longlong local_8f8;
  longlong local_8c0;
  longlong local_8b8;
  longlong local_8b0;
  longlong local_8a8;
  FCompactPoseBoneIndex local_8a0;
  uint local_89c;
  TVector<double>_u_0 local_898;
  FCSPose<FCompactPose> *local_878;
  FWeakObjectPtr local_870;
  undefined1 local_868 [24];
  ForAnyElementType FStack_850;
  TVector<double>_u_0 local_848;
  TRotator<double> local_830;
  TVector<double>_u_0 local_818;
  TVector<double>_u_0 local_800;
  TVector<double>_u_0 local_7e8;
  TVector<double>_u_0 local_7d0;
  TVector<double>_u_0 local_7b8;
  TVector<double>_u_0 local_7a0;
  TVector<double>_u_0 local_788;
  undefined1 local_768 [16];
  double local_758;
  double dStack_750;
  double local_748;
  double local_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  undefined1 local_6e8 [16];
  double local_6d8;
  double dStack_6d0;
  TVector<double>_u_0 local_6c8;
  TVector<double>_u_0 local_6a8;
  TVector<double>_u_0 local_688;
  TVector<double>_u_0 local_668;
  TVector<double>_u_0 local_648;
  TRotator<double> local_628;
  double local_610;
  double dStack_608;
  double local_600;
  undefined1 local_5f8 [16];
  double local_5e8;
  undefined1 local_5d8 [16];
  double local_5c8;
  undefined1 local_5b8 [16];
  double local_5a8;
  double local_598;
  double dStack_590;
  double local_588;
  double local_570;
  double local_568;
  TRotator<double> local_560;
  double local_548;
  double local_540;
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  TQuat<double> local_518;
  TQuat<double> local_4f8;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  TQuat<double> local_4b8;
  double local_498;
  double dStack_490;
  double local_488;
  undefined1 local_478 [16];
  double local_468;
  undefined1 local_458 [16];
  double local_448;
  undefined1 local_438 [16];
  double local_428;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  FWeakObjectPtr local_338;
  FWeakObjectPtr FStack_330;
  undefined1 local_328 [16];
  TVector<double> local_318;
  TVector<double> local_300;
  TQuat<double> local_2e8;
  TQuat<double> local_2c8;
  TQuat<double> local_2a8;
  TQuat<double> local_288;
  TQuat<double> local_268;
  TQuat<double> local_248;
  TQuat<double> local_228;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  dVar18 = __real_3e45798ee0000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_978;
  uVar35 = 0;
  if (0 < (this->spine_hit_pairs).ArrayNum) {
    lVar34 = 0;
    uVar147 = (undefined4)__real_3ff0000000000000;
    uVar148 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_910 = 0;
    uVar82 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar139 = ___xmm_3fe00000000000003fe0000000000000;
    dVar133 = _UNK_150689678;
    do {
      if ((int)uVar35 <= (this->spine_Feet_pair).ArrayNum + -1) {
        uVar36 = 0;
        local_900 = 0;
        uVar32 = ~uVar35 >> 0x1f;
        local_8c0 = 0;
        local_8b8 = 0;
        local_8b0 = 0;
        local_8a8 = 0;
        while( true ) {
          uVar83 = 0;
          if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
            uVar83 = uVar32;
          }
          if ((uVar83 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + lVar34 + 0x580) <=
              (int)uVar36) break;
          uVar83 = 0;
          if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
            uVar83 = uVar32;
          }
          if ((uVar83 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((int)uVar36 <=
              *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + local_910 * 0x170 + 0x28) +
              -1) {
            uVar83 = 0;
            if ((int)uVar35 < param_2->ArrayNum) {
              uVar83 = uVar32;
            }
            if ((uVar83 == 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((int)uVar36 <=
                *(int *)((param_2->AllocatorInstance).Data + local_910 * 0x10 + 8) + -1) {
              uVar83 = 0;
              if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                uVar83 = uVar32;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
              uVar83 = 0;
              if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x28)) {
                uVar83 = ~uVar36 >> 0x1f;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pTVar20 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  (&param_1->Pose,
                                   *(FCompactPoseBoneIndex *)
                                    (*(longlong *)(pFVar31 + local_910 * 0x170 + 0x20) + 0xc +
                                    (longlong)(int)uVar36 * 0x10));
              local_208.Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
              local_208.Rotation.XY.m128d_f64[1] = (pTVar20->Rotation).XY.m128d_f64[1];
              local_208.Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
              local_208.Rotation.ZW.m128d_f64[1] = (pTVar20->Rotation).ZW.m128d_f64[1];
              local_208.Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
              local_208.Translation.XY.m128d_f64[1] = (pTVar20->Translation).XY.m128d_f64[1];
              local_208.Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
              local_208.Translation.ZW.m128d_f64[1] = (pTVar20->Translation).ZW.m128d_f64[1];
              local_208.Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
              local_208.Scale3D.XY.m128d_f64[1] = (pTVar20->Scale3D).XY.m128d_f64[1];
              local_208.Scale3D.ZW.m128d_f64 = *&(pTVar20->Scale3D).ZW.m128d_f64;
              if (this->sticky_feet_mode != false) {
                uVar82 = 0;
                if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                  uVar82 = uVar32;
                }
                if ((uVar82 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                uVar82 = 0;
                if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x138)) {
                  uVar82 = ~uVar36 >> 0x1f;
                }
                if ((uVar82 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (*(int *)(local_8c0 + *(longlong *)(pFVar31 + local_910 * 0x170 + 0x130)) <
                    (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar82 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x138)) {
                    uVar82 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar82 = *(uint *)(*(longlong *)(pFVar31 + local_910 * 0x170 + 0x130) +
                                    local_900 * 4);
                  uVar83 = 0;
                  if ((int)uVar82 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
                    uVar83 = ~uVar82 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
                  lVar26 = (longlong)(int)uVar82 * 0x90;
                  if (pFVar31[lVar26] == (FScriptContainerElement)0x0) {
                    bVar19 = FBoneReference::IsValidToEvaluate
                                       ((FBoneReference *)(pFVar31 + lVar26 + 4),
                                        this->SavedBoneContainer);
                  }
                  else {
                    bVar19 = *(int *)(pFVar31 + lVar26 + 0x8c) != -1;
                  }
                  if (bVar19 == false) {
                    uVar108 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
                    uVar110 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
                    uVar115 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
                    uVar113 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
                    _Var119.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
                    _Var119.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
                    uVar116 = local_208.Translation.XY.m128d_f64[0]._0_4_;
                    uVar129 = local_208.Translation.XY.m128d_f64[0]._4_4_;
                    uVar130 = local_208.Translation.XY.m128d_f64[1]._0_4_;
                    uVar131 = local_208.Translation.XY.m128d_f64[1]._4_4_;
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
                      uVar82 = ~uVar35 >> 0x1f;
                    }
                    _Var134.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
                    _Var134.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
                    _Var140.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
                    _Var140.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
                    uVar143 = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
                    uVar144 = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
                    uVar145 = local_208.Scale3D.ZW.m128d_f64[1]._0_4_;
                    uVar146 = local_208.Scale3D.ZW.m128d_f64[1]._4_4_;
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x160 + 0xb0)) {
                      uVar82 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    goto LAB_14d2bf699;
                  }
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar82 = ~uVar35 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x138)) {
                    uVar82 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar82 = *(uint *)(*(longlong *)(pFVar31 + local_910 * 0x170 + 0x130) +
                                    local_900 * 4);
                  uVar83 = 0;
                  if ((int)uVar82 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
                    uVar83 = ~uVar82 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
                  if (*(int *)(pFVar31 + (longlong)(int)uVar82 * 0x90 + 0x8c) == -1) {
                    uVar108 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
                    uVar110 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
                    uVar115 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
                    uVar113 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
                    uVar116 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0].
                              _0_4_;
                    uVar129 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0].
                              _4_4_;
                    uVar130 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1].
                              _0_4_;
                    uVar131 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1].
                              _4_4_;
                    uVar143 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
                    uVar144 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
                    uVar145 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
                    uVar146 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
                    local_1a8.Rotation.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                    local_1a8.Rotation.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                    local_1a8.Translation.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                    local_1a8.Translation.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                    local_1a8.Scale3D.XY.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                    local_1a8.Scale3D.ZW.m128d_f64 =
                         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                  }
                  else {
                    pTVar20 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                        (&param_1->Pose,
                                         *(FCompactPoseBoneIndex *)
                                          (pFVar31 + (longlong)(int)uVar82 * 0x90 + 0x8c));
                    local_148.Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
                    local_148.Rotation.XY.m128d_f64[1] = (pTVar20->Rotation).XY.m128d_f64[1];
                    local_148.Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
                    local_148.Rotation.ZW.m128d_f64[1] = (pTVar20->Rotation).ZW.m128d_f64[1];
                    local_148.Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
                    local_148.Translation.XY.m128d_f64[1] = (pTVar20->Translation).XY.m128d_f64[1];
                    local_148.Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
                    local_148.Translation.ZW.m128d_f64[1] = (pTVar20->Translation).ZW.m128d_f64[1];
                    local_148.Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
                    local_148.Scale3D.XY.m128d_f64[1] = (pTVar20->Scale3D).XY.m128d_f64[1];
                    local_148.Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
                    local_148.Scale3D.ZW.m128d_f64[1] = (pTVar20->Scale3D).ZW.m128d_f64[1];
                    local_1a8.Rotation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[1];
                    local_1a8.Rotation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[0];
                    local_1a8.Rotation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[3];
                    local_1a8.Rotation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float0001.m128_f32[2];
                    local_1a8.Translation.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                    local_1a8.Translation.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                    local_1a8.Scale3D.XY.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[0];
                    local_1a8.Scale3D.XY.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[1];
                    in_XMM2._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
                    in_XMM2._0_8_ = in_XMM2._8_8_;
                    local_1a8.Translation.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                    local_1a8.Translation.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                    local_1a8.Scale3D.ZW.m128d_f64[1] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[3];
                    local_1a8.Scale3D.ZW.m128d_f64[0] =
                         (double)GlobalVectorConstants::Float1110.m128_f32[2];
                    UE::Math::TTransform<double>::Multiply
                              (&local_1a8,
                               (TTransform<double> *)(pFVar31 + (longlong)(int)uVar82 * 0x90 + 0x20)
                               ,&local_148);
                    uVar108 = local_1a8.Rotation.XY.m128d_f64[0]._0_4_;
                    uVar110 = local_1a8.Rotation.XY.m128d_f64[0]._4_4_;
                    uVar115 = local_1a8.Rotation.XY.m128d_f64[1]._0_4_;
                    uVar113 = local_1a8.Rotation.XY.m128d_f64[1]._4_4_;
                    uVar116 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
                    uVar129 = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
                    uVar130 = local_1a8.Translation.XY.m128d_f64[1]._0_4_;
                    uVar131 = local_1a8.Translation.XY.m128d_f64[1]._4_4_;
                    uVar143 = local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_;
                    uVar144 = local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_;
                    uVar145 = local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
                    uVar146 = local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
                  }
                  _Var140.m128d_f64 = local_1a8.Scale3D.XY.m128d_f64;
                  _Var134.m128d_f64 = local_1a8.Translation.ZW.m128d_f64;
                  _Var119.m128d_f64 = local_1a8.Rotation.ZW.m128d_f64;
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
                    uVar82 = uVar32;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x160 + 0xb0)) {
                    uVar82 = ~uVar36 >> 0x1f;
                  }
                  lVar26 = local_8b8;
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                else {
                  uVar108 = local_208.Rotation.XY.m128d_f64[0]._0_4_;
                  uVar110 = local_208.Rotation.XY.m128d_f64[0]._4_4_;
                  uVar115 = local_208.Rotation.XY.m128d_f64[1]._0_4_;
                  uVar113 = local_208.Rotation.XY.m128d_f64[1]._4_4_;
                  _Var119.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
                  _Var119.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
                  uVar116 = local_208.Translation.XY.m128d_f64[0]._0_4_;
                  uVar129 = local_208.Translation.XY.m128d_f64[0]._4_4_;
                  uVar130 = local_208.Translation.XY.m128d_f64[1]._0_4_;
                  uVar131 = local_208.Translation.XY.m128d_f64[1]._4_4_;
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
                    uVar82 = ~uVar35 >> 0x1f;
                  }
                  _Var134.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
                  _Var134.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
                  _Var140.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
                  _Var140.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
                  uVar143 = local_208.Scale3D.ZW.m128d_f64[0]._0_4_;
                  uVar144 = local_208.Scale3D.ZW.m128d_f64[0]._4_4_;
                  uVar145 = local_208.Scale3D.ZW.m128d_f64[1]._0_4_;
                  uVar146 = local_208.Scale3D.ZW.m128d_f64[1]._4_4_;
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x160 + 0xb0)) {
                    uVar82 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
LAB_14d2bf699:
                  lVar26 = local_900 * 0x60;
                }
                lVar29 = *(longlong *)(pFVar31 + local_910 * 0x160 + 0xa8);
                puVar1 = (undefined4 *)(lVar26 + lVar29);
                *puVar1 = uVar108;
                puVar1[1] = uVar110;
                puVar1[2] = uVar115;
                puVar1[3] = uVar113;
                *(double (*) [2])(lVar26 + 0x10 + lVar29) = _Var119.m128d_f64;
                uVar82 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                puVar1 = (undefined4 *)(lVar26 + 0x20 + lVar29);
                *puVar1 = uVar116;
                puVar1[1] = uVar129;
                puVar1[2] = uVar130;
                puVar1[3] = uVar131;
                *(double (*) [2])(lVar26 + 0x30 + lVar29) = _Var134.m128d_f64;
                dVar133 = _UNK_150689678;
                dVar139 = ___xmm_3fe00000000000003fe0000000000000;
                *(double (*) [2])(lVar26 + 0x40 + lVar29) = _Var140.m128d_f64;
                puVar1 = (undefined4 *)(lVar26 + 0x50 + lVar29);
                *puVar1 = uVar143;
                puVar1[1] = uVar144;
                puVar1[2] = uVar145;
                puVar1[3] = uVar146;
              }
              uVar83 = 0;
              if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                uVar83 = uVar32;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
              uVar83 = 0;
              if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x138)) {
                uVar83 = ~uVar36 >> 0x1f;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar83 = *(uint *)(*(longlong *)(pFVar31 + local_910 * 0x170 + 0x130) + local_900 * 4)
              ;
              uVar33 = 0;
              if ((int)uVar83 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar33 = ~uVar83 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              fVar109 = (float)(*(uint *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data
                                         + (longlong)(int)uVar83 * 0xd0 + 0x80) & uVar82);
              local_6e8 = ZEXT416((uint)fVar109);
              uVar83 = 0;
              if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                uVar83 = uVar32;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
              uVar83 = 0;
              if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x580)) {
                uVar83 = ~uVar36 >> 0x1f;
              }
              if ((uVar83 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              if ((*(byte *)(local_8b0 + 0xad + *(longlong *)(pFVar31 + lVar34 + 0x578)) & 1) != 0)
              {
                uVar83 = 0;
                if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                  uVar83 = uVar32;
                }
                if ((uVar83 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                uVar83 = 0;
                if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x580)) {
                  uVar83 = ~uVar36 >> 0x1f;
                }
                if ((uVar83 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                if (((*(byte *)(local_900 * 0x100 + 0xad + *(longlong *)(pFVar31 + lVar34 + 0x578))
                     & 1) != 0) && (this->atleast_one_hit != false)) {
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x28)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FAnimationRuntime::ConvertCSTransformToBoneSpace
                            (&this->owner_skel_w_transform,&param_1->Pose,&local_208,
                             *(FCompactPoseBoneIndex *)
                              (*(longlong *)(pFVar31 + local_910 * 0x170 + 0x20) + 0xc +
                              (longlong)(int)uVar36 * 0x10),BCS_WorldSpace);
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x28)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FVar6 = *(FCompactPoseBoneIndex *)
                           (*(longlong *)(pFVar31 + local_910 * 0x170 + 0x20) + 0xc + local_8a8);
                  uVar83 = 0;
                  if ((int)uVar35 < param_2->ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (param_2->AllocatorInstance).Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x10 + 8)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FAnimationRuntime::ConvertCSTransformToBoneSpace
                            (&this->owner_skel_w_transform,&param_1->Pose,
                             (TTransform<double> *)
                             ((longlong)(int)uVar36 * 0x60 +
                             *(longlong *)(pFVar31 + local_910 * 0x10)),FVar6,BCS_WorldSpace);
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x580)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar26 = *(longlong *)(pFVar31 + lVar34 + 0x578);
                  puVar1 = (undefined4 *)(local_900 * 0x100 + 0x58 + lVar26);
                  uVar147 = *puVar1;
                  uVar148 = puVar1[1];
                  uVar108 = puVar1[2];
                  uVar116 = puVar1[3];
                  uVar118 = *(undefined8 *)(local_900 * 0x100 + 0x68 + lVar26);
                  uVar110 = (undefined4)uVar118;
                  uVar129 = (undefined4)((ulonglong)uVar118 >> 0x20);
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5c0)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((*(byte *)(local_900 * 0x100 + 0xad + *(longlong *)(pFVar31 + lVar34 + 0x5b8))
                      & 1) == 0) {
LAB_14d2bfee7:
                    bVar19 = false;
                  }
                  else {
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5f0)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((*(byte *)(local_900 * 0x100 + 0xad +
                                  *(longlong *)(pFVar31 + lVar34 + 0x5e8)) & 1) == 0)
                    goto LAB_14d2bfee7;
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5e0)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((*(byte *)(local_900 * 0x100 + 0xad +
                                  *(longlong *)(pFVar31 + lVar34 + 0x5d8)) & 1) == 0)
                    goto LAB_14d2bfee7;
                    bVar19 = true;
                  }
                  if ((this->Use_Four_Point_Feets != false) && (bVar19)) {
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x580)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar26 = *(longlong *)(pFVar31 + lVar34 + 0x578);
                    lVar29 = local_900 * 0x100;
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5c0)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = local_900 * 0x100;
                    lVar22 = *(longlong *)(pFVar31 + lVar34 + 0x5b8);
                    local_7e8._s_0.X =
                         *(double *)(lVar29 + 0x28 + lVar26) - *(double *)(lVar27 + 0x28 + lVar22);
                    local_7e8._s_0.Y =
                         *(double *)(lVar29 + 0x30 + lVar26) - *(double *)(lVar27 + 0x30 + lVar22);
                    local_7e8._s_0.Z =
                         *(double *)(lVar29 + 0x38 + lVar26) - *(double *)(lVar27 + 0x38 + lVar22);
                    UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_7e8._s_0,(TVector<double> *)&local_7a0._s_0
                               ,dVar18,&UE::Math::TVector<double>::ZeroVector);
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5f0)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar26 = *(longlong *)(pFVar31 + lVar34 + 0x5e8);
                    lVar29 = local_900 * 0x100;
                    uVar83 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar83 = uVar32;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5e0)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = local_900 * 0x100;
                    lVar22 = *(longlong *)(pFVar31 + lVar34 + 0x5d8);
                    local_7d0._s_0.X =
                         *(double *)(lVar29 + 0x28 + lVar26) - *(double *)(lVar27 + 0x28 + lVar22);
                    local_7d0._s_0.Y =
                         *(double *)(lVar29 + 0x30 + lVar26) - *(double *)(lVar27 + 0x30 + lVar22);
                    local_7d0._s_0.Z =
                         *(double *)(lVar29 + 0x38 + lVar26) - *(double *)(lVar27 + 0x38 + lVar22);
                    UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_7d0._s_0,(TVector<double> *)&local_7b8._s_0
                               ,dVar18,&UE::Math::TVector<double>::ZeroVector);
                    local_788._s_0.X =
                         local_7b8._s_0.Z * local_7a0._s_0.Y - local_7a0._s_0.Z * local_7b8._s_0.Y;
                    local_788._s_0.Y =
                         local_7a0._s_0.Z * local_7b8._s_0.X - local_7b8._s_0.Z * local_7a0._s_0.X;
                    local_788._s_0.Z =
                         local_7a0._s_0.X * local_7b8._s_0.Y - local_7a0._s_0.Y * local_7b8._s_0.X;
                    in_XMM2._8_8_ = 0;
                    in_XMM2._0_8_ = dVar18;
                    UE::Math::TVector<double>::GetSafeNormal
                              ((TVector<double> *)&local_788._s_0,(TVector<double> *)&local_848._s_0
                               ,dVar18,&UE::Math::TVector<double>::ZeroVector);
                    local_6c8._s_0.X = local_848._s_0.X;
                    local_6c8._s_0.Y = local_848._s_0.Y;
                    local_6c8._s_0.Z = local_848._s_0.Z;
                    UE::Math::TTransform<double>::InverseTransformVectorNoScale
                              (&this->owner_skel_w_transform,(TVector<double> *)&local_6a8._s_0,
                               (TVector<double> *)&local_6c8._s_0);
                    local_688._s_0.X = local_6a8._s_0.X;
                    local_688._s_0.Y = local_6a8._s_0.Y;
                    local_848._s_0.X = local_6a8._s_0.X;
                    local_848._s_0.Y = local_6a8._s_0.Y;
                    local_848._s_0.Z = local_6a8._s_0.Z;
                    local_688._s_0.Z = local_6a8._s_0.Z;
                    UE::Math::TTransform<double>::TransformVectorNoScale
                              (&this->owner_skel_w_transform,(TVector<double> *)&local_668._s_0,
                               (TVector<double> *)&local_688._s_0);
                    uVar110 = SUB84(local_668._s_0.Z,0);
                    uVar129 = (undefined4)((ulonglong)local_668._16_8_ >> 0x20);
                    uVar147 = local_668._0_4_;
                    uVar148 = local_668._4_4_;
                    uVar108 = local_668._8_4_;
                    uVar116 = local_668._12_4_;
                  }
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x28)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FAnimationRuntime::ConvertBoneSpaceTransformToCS
                            (&this->owner_skel_w_transform,&param_1->Pose,&local_208,
                             *(FCompactPoseBoneIndex *)
                              (*(longlong *)(pFVar31 + local_910 * 0x170 + 0x20) + 0xc +
                              (longlong)(int)uVar36 * 0x10),BCS_WorldSpace);
                  uVar83 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x170 + 0x28)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pTVar20 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                      (&param_1->Pose,
                                       *(FCompactPoseBoneIndex *)
                                        (*(longlong *)(pFVar31 + local_910 * 0x170 + 0x20) + 0xc +
                                        (longlong)(int)uVar36 * 0x10));
                  local_648._s_0.Z = (double)CONCAT44(uVar129,uVar110);
                  local_3b8.Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
                  local_3b8.Rotation.XY.m128d_f64[1] = (pTVar20->Rotation).XY.m128d_f64[1];
                  local_3b8.Rotation.ZW.m128d_f64[0] = (pTVar20->Rotation).ZW.m128d_f64[0];
                  local_3b8.Rotation.ZW.m128d_f64[1] = (pTVar20->Rotation).ZW.m128d_f64[1];
                  local_3b8.Translation.XY.m128d_f64[0] = (pTVar20->Translation).XY.m128d_f64[0];
                  local_3b8.Translation.XY.m128d_f64[1] = (pTVar20->Translation).XY.m128d_f64[1];
                  local_3b8.Translation.ZW.m128d_f64[0] = (pTVar20->Translation).ZW.m128d_f64[0];
                  local_3b8.Translation.ZW.m128d_f64[1] = (pTVar20->Translation).ZW.m128d_f64[1];
                  local_3b8.Scale3D.XY.m128d_f64[0] = (pTVar20->Scale3D).XY.m128d_f64[0];
                  local_3b8.Scale3D.XY.m128d_f64[1] = (pTVar20->Scale3D).XY.m128d_f64[1];
                  local_3b8.Scale3D.ZW.m128d_f64[0] = (pTVar20->Scale3D).ZW.m128d_f64[0];
                  local_3b8.Scale3D.ZW.m128d_f64[1] = (pTVar20->Scale3D).ZW.m128d_f64[1];
                  local_648._0_4_ = uVar147;
                  local_648._4_4_ = uVar148;
                  local_648._8_4_ = uVar108;
                  local_648._12_4_ = uVar116;
                  RotationFromImpactNormal
                            (this,&local_628,uVar35,uVar36,false,param_1,
                             (TVector<double> *)&local_648._s_0,&local_3b8,fVar109);
                  iVar7 = (this->feet_mod_transform_array).ArrayNum;
                  local_830.Pitch = local_628.Pitch;
                  local_830.Yaw = local_628.Yaw;
                  local_830.Roll = local_628.Roll;
                  if (this->Ignore_Lerping == false) {
                    uVar82 = 0;
                    if ((int)uVar35 < iVar7) {
                      uVar82 = ~uVar35 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_mod_transform_array).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x10 + 8)) {
                      uVar82 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    fVar109 = this->Delta_Rot_Speed;
                    lVar29 = local_900 * 0x60;
                    lVar26 = *(longlong *)(pFVar31 + local_910 * 0x10);
                    pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_830,&local_2e8);
                    FVar30 = (FWeakObjectPtr)pTVar21->X;
                    FVar17 = (FWeakObjectPtr)pTVar21->Y;
                    pFVar11 = (FReferenceSkeleton *)pTVar21->Z;
                    FVar12.Data = (FScriptContainerElement *)pTVar21->W;
                    auVar85._0_8_ = pTVar21->Z;
                    auVar85._8_8_ = pTVar21->W;
                    uVar82 = 0;
                    if ((int)uVar35 < (this->feet_mod_transform_array).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_mod_transform_array).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x10 + 8)) {
                      uVar82 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar22 = *(longlong *)(pFVar31 + local_910 * 0x10);
                    auVar46 = *(undefined1 (*) [16])(lVar22 + lVar29);
                    auVar76 = *(undefined1 (*) [16])(lVar22 + 0x10 + lVar29);
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar82 = 0;
                    if ((int)uVar36 <
                        *(int *)((this->spine_hit_pairs).AllocatorInstance.Data + lVar34 + 0x580)) {
                      uVar82 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    _Var134.m128d_f64 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64;
                    _Var119.m128d_f64 = GlobalVectorConstants::DoubleOne.XY.m128d_f64;
                    if (this->FPS_Lerp_Treshold < this->current_fps ||
                        this->FPS_Lerp_Treshold == this->current_fps) {
                      dVar87 = dVar139 * (double)FVar30;
                      dVar96 = dVar133 * (double)FVar17;
                      dVar138 = auVar46._0_8_;
                      dVar72 = auVar46._8_8_;
                      local_518.X = dVar138 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.
                                              m128d_f64[0];
                      local_518.Y = dVar72 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.
                                             m128d_f64[1];
                      dVar139 = dVar139 * (double)pFVar11;
                      dVar133 = dVar133 * (double)FVar12.Data;
                      dVar74 = auVar76._0_8_;
                      dVar132 = auVar76._8_8_;
                      local_518.Z = dVar74 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.
                                             m128d_f64[0];
                      local_518.W = dVar132 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.
                                              m128d_f64[1];
                      auVar60._8_4_ = SUB84(dVar133,0);
                      auVar60._0_8_ = dVar139;
                      auVar60._12_4_ = (int)((ulonglong)dVar133 >> 0x20);
                      local_568 = dVar18;
                      auVar78._8_4_ = SUB84(dVar96,0);
                      auVar78._0_8_ = dVar87;
                      auVar78._12_4_ = (int)((ulonglong)dVar96 >> 0x20);
                      dVar59 = dVar139 * dVar139 + dVar87 * dVar87;
                      dVar73 = auVar60._8_8_ * dVar133 + auVar78._8_8_ * dVar96;
                      auVar39._8_4_ = SUB84(dVar73,0);
                      auVar39._0_8_ = dVar59;
                      auVar39._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
                      auVar40._0_8_ = auVar39._8_8_ + dVar59;
                      auVar40._8_8_ = dVar59 + dVar73;
                      auVar78 = sqrtpd(in_XMM2,auVar40);
                      uVar37 = -(ulonglong)(dVar18 <= auVar40._0_8_);
                      uVar38 = -(ulonglong)(dVar18 <= auVar40._8_8_);
                      uVar33 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
                      uVar111 = (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
                      ;
                      uVar112 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                      uVar114 = (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
                      ;
                      auVar85 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar78);
                      uVar82 = (uint)(uVar37 >> 0x20);
                      uVar83 = (uint)(uVar38 >> 0x20);
                      auVar41._0_4_ = ~(uint)uVar37 & uVar33;
                      auVar41._4_4_ = ~uVar82 & uVar111;
                      auVar41._8_4_ = ~(uint)uVar38 & uVar112;
                      auVar41._12_4_ = ~uVar83 & uVar114;
                      local_538._0_8_ = uVar37 & (ulonglong)(auVar85._0_8_ * dVar87);
                      uVar16 = uVar38 & (ulonglong)(auVar85._8_8_ * dVar96);
                      local_538._8_4_ = (undefined4)uVar16;
                      local_538._12_4_ = (undefined4)(uVar16 >> 0x20);
                      local_538 = local_538 | auVar41;
                      auVar85 = divpd((undefined1  [16])
                                      GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar78);
                      local_528._0_8_ = (ulonglong)(auVar85._0_8_ * dVar139) & uVar37;
                      uVar16 = (ulonglong)(auVar85._8_8_ * dVar133) & uVar38;
                      local_528._8_4_ = (undefined4)uVar16;
                      local_528._12_4_ = (undefined4)(uVar16 >> 0x20);
                      uVar117 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
                      auVar84._0_4_ = ~(uint)uVar37 & uVar117;
                      uVar126 = (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
                      ;
                      auVar84._4_4_ = ~uVar82 & uVar126;
                      uVar127 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                      auVar84._8_4_ = ~(uint)uVar38 & uVar127;
                      uVar128 = (uint)((ulonglong)
                                       (double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
                      ;
                      auVar84._12_4_ = ~uVar83 & uVar128;
                      local_528 = local_528 | auVar84;
                      local_4f8.X = (double)FVar30;
                      local_4f8.Y = (double)FVar17;
                      local_4f8.Z = (double)pFVar11;
                      local_4f8.W = (double)FVar12.Data;
                      local_4d8 = auVar46;
                      local_4c8 = auVar76;
                      pTVar21 = UE::Math::TQuat<double>::operator*
                                          (&local_518,&local_228,(TQuat<double> *)local_538);
                      local_548 = dVar18;
                      dVar139 = pTVar21->X;
                      dVar133 = pTVar21->Y;
                      uVar4 = pTVar21->Z;
                      uVar5 = pTVar21->W;
                      auVar61._0_8_ = (double)uVar4 * (double)uVar4 + dVar139 * dVar139;
                      auVar61._8_8_ = (double)uVar5 * (double)uVar5 + dVar133 * dVar133;
                      auVar42._8_4_ = SUB84(auVar61._8_8_,0);
                      auVar42._0_8_ = auVar61._0_8_;
                      auVar42._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
                      auVar43._0_8_ = auVar42._8_8_ + auVar61._0_8_;
                      auVar43._8_8_ = auVar61._0_8_ + auVar61._8_8_;
                      auVar85 = sqrtpd(auVar61,auVar43);
                      uVar37 = -(ulonglong)(dVar18 <= auVar43._0_8_);
                      uVar38 = -(ulonglong)(dVar18 <= auVar43._8_8_);
                      auVar78 = divpd((undefined1  [16])_Var119.m128d_f64,auVar85);
                      auVar85 = divpd((undefined1  [16])_Var134.m128d_f64,auVar85);
                      uVar82 = (uint)(uVar37 >> 0x20);
                      uVar83 = (uint)(uVar38 >> 0x20);
                      local_358._0_8_ = uVar37 & (ulonglong)(auVar78._0_8_ * dVar139);
                      uVar16 = uVar38 & (ulonglong)(auVar78._8_8_ * dVar133);
                      local_358._8_4_ = (undefined4)uVar16;
                      local_358._12_4_ = (undefined4)(uVar16 >> 0x20);
                      local_348._0_8_ = (ulonglong)(auVar85._0_8_ * (double)uVar4) & uVar37;
                      uVar16 = (ulonglong)(auVar85._8_8_ * (double)uVar5) & uVar38;
                      local_348._8_4_ = (undefined4)uVar16;
                      local_348._12_4_ = (undefined4)(uVar16 >> 0x20);
                      auVar44._0_4_ = ~(uint)uVar37 & uVar33;
                      auVar44._4_4_ = ~uVar82 & uVar111;
                      auVar44._8_4_ = ~(uint)uVar38 & uVar112;
                      auVar44._12_4_ = ~uVar83 & uVar114;
                      auVar75._0_4_ = ~(uint)uVar37 & uVar117;
                      auVar75._4_4_ = ~uVar82 & uVar126;
                      auVar75._8_4_ = ~(uint)uVar38 & uVar127;
                      auVar75._12_4_ = ~uVar83 & uVar128;
                      local_358 = local_358 | auVar44;
                      local_348 = local_348 | auVar75;
                      if (this->rot_interp_type == ENUM_DivisiveRot_Interp) {
                        in_XMM2._8_8_ = (ulong64)dVar138;
                        in_XMM2._0_8_ = dVar138;
                        dVar139 = local_348._0_8_;
                        dVar73 = local_348._8_8_;
                        dVar133 = local_358._0_8_;
                        dVar59 = local_358._8_8_;
                        auVar120._8_4_ = local_348._0_4_;
                        auVar120._0_8_ = dVar73;
                        auVar120._12_4_ = local_348._4_4_;
                        auVar45._8_4_ = auVar76._8_4_;
                        auVar45._0_8_ = dVar132;
                        auVar45._12_4_ = auVar76._12_4_;
                        auVar76._8_4_ = auVar46._8_4_;
                        auVar76._0_8_ = dVar72;
                        auVar76._12_4_ = auVar46._12_4_;
                        auVar46._8_4_ = local_358._0_4_;
                        auVar46._0_8_ = dVar59;
                        auVar46._12_4_ = local_358._4_4_;
                        pFVar11 = (FReferenceSkeleton *)
                                  (dVar59 * dVar138 *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                                   dVar132 * dVar139 +
                                   dVar72 * dVar133 *
                                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                                  dVar73 * dVar74 *
                                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
                        FVar12.Data = (FScriptContainerElement *)
                                      (dVar133 * dVar138 *
                                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64
                                       [1] + dVar132 * dVar73 +
                                       dVar72 * dVar59 *
                                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64
                                       [1] + dVar139 * dVar74 *
                                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.
                                             m128d_f64[1]);
                        uVar115 = (undefined4)((ulonglong)FVar12.Data >> 0x20);
                        local_338 = (FWeakObjectPtr)
                                    (dVar73 * dVar138 *
                                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                                     + dVar132 * dVar133 +
                                     dVar72 * dVar139 *
                                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                                    + dVar59 * dVar74 *
                                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64
                                      [0]);
                        FStack_330 = (FWeakObjectPtr)
                                     (auVar120._8_8_ * dVar138 *
                                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64
                                      [1] + auVar45._8_8_ * dVar59 +
                                      auVar76._8_8_ * dVar73 *
                                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64
                                      [1] + auVar46._8_8_ * dVar74 *
                                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.
                                            m128d_f64[1]);
                        local_328._8_4_ = (int)FVar12.Data;
                        local_328._0_8_ = pFVar11;
                        local_328._12_4_ = uVar115;
                        auVar85._8_4_ = (int)FVar12.Data;
                        auVar85._0_8_ = pFVar11;
                        auVar85._12_4_ = uVar115;
                        FVar30 = local_338;
                        FVar17 = FStack_330;
                      }
                      else {
                        pTVar21 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                            (&local_2c8,(TQuat<double> *)local_4d8,&local_4f8,
                                             (double)fVar109);
                        in_XMM2._8_8_ = 0;
                        in_XMM2._0_8_ = dVar18;
                        UE::Math::TQuat<double>::GetNormalized
                                  (pTVar21,(TQuat<double> *)local_868,dVar18);
                        pFVar11 = (FReferenceSkeleton *)local_868._16_8_;
                        FVar12.Data = FStack_850.Data;
                        FVar30 = (FWeakObjectPtr)local_868._0_8_;
                        FVar17 = (FWeakObjectPtr)local_868._8_8_;
                        auVar85 = stack0xfffffffffffff7a8;
                      }
                    }
                    stack0xfffffffffffff7a8 = auVar85;
                    local_868._8_8_ = FVar17;
                    local_868._0_8_ = FVar30;
                    pFVar2 = (FWeakObjectPtr *)(lVar29 + lVar26);
                    pFVar2->ObjectIndex = local_868._0_4_;
                    pFVar2->ObjectSerialNumber = local_868._4_4_;
                    pFVar2[1].ObjectIndex = local_868._8_4_;
                    pFVar2[1].ObjectSerialNumber = local_868._12_4_;
                    auVar10._8_4_ = (int)FVar12.Data;
                    auVar10._0_8_ = pFVar11;
                    auVar10._12_4_ = (int)((ulonglong)FVar12.Data >> 0x20);
                    *(undefined1 (*) [16])(lVar29 + 0x10 + lVar26) = auVar10;
                    uVar82 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                  }
                  else {
                    uVar83 = 0;
                    if ((int)uVar35 < iVar7) {
                      uVar83 = ~uVar35 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_mod_transform_array).AllocatorInstance.Data;
                    uVar83 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x10 + 8)) {
                      uVar83 = ~uVar36 >> 0x1f;
                    }
                    if ((uVar83 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar26 = *(longlong *)(pFVar31 + local_910 * 0x10);
                    pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_830,&local_2a8);
                    dVar139 = pTVar21->Y;
                    auVar85 = *(undefined1 (*) [16])&pTVar21->Z;
                    pdVar25 = (double *)(local_900 * 0x60 + lVar26);
                    *pdVar25 = pTVar21->X;
                    pdVar25[1] = dVar139;
                    *(undefined1 (*) [16])(local_900 * 0x60 + 0x10 + lVar26) = auVar85;
                  }
                  uVar83 = 0;
                  if ((int)uVar35 < (this->feet_modified_normals).ArrayNum) {
                    uVar83 = uVar32;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->feet_modified_normals).AllocatorInstance.Data;
                  uVar83 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + local_910 * 0x10 + 8)) {
                    uVar83 = ~uVar36 >> 0x1f;
                  }
                  if ((uVar83 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar26 = *(longlong *)(pFVar31 + local_910 * 0x10);
                  puVar1 = (undefined4 *)(lVar26 + local_900 * 0x18);
                  *puVar1 = uVar147;
                  puVar1[1] = uVar148;
                  puVar1[2] = uVar108;
                  puVar1[3] = uVar116;
                  *(ulonglong *)(lVar26 + 0x10 + local_900 * 0x18) = CONCAT44(uVar129,uVar110);
                  uVar147 = (undefined4)__real_3ff0000000000000;
                  uVar148 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                }
              }
              dVar139 = ___xmm_3fe00000000000003fe0000000000000;
              dVar133 = _UNK_150689678;
              if (this->Affect_Toes_Always != false) {
                uVar33 = 0;
                local_878 = &param_1->Pose;
                local_8f8 = 0;
                lVar26 = local_910 * 0x170;
                local_908 = 0;
                local_89c = ~uVar36 >> 0x1f;
                lVar29 = local_900 * 0x100;
                lVar22 = local_910 * 0x10;
                local_870 = (FWeakObjectPtr)(local_900 << 4);
                FVar30 = local_870;
                uVar83 = local_89c;
                while( true ) {
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                    uVar82 = uVar32;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                    uVar82 = uVar83;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  uVar82 = __xmm_7fffffff7fffffff7fffffff7fffffff;
                  dVar139 = ___xmm_3fe00000000000003fe0000000000000;
                  dVar133 = _UNK_150689678;
                  if (*(int *)(*(longlong *)(pFVar31 + lVar34 + 0x598) + 8 + (longlong)FVar30) <=
                      (int)uVar33) break;
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                    uVar82 = uVar32;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar26 + 0x118)) {
                    uVar82 = uVar83;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar27 = *(longlong *)(pFVar31 + lVar26 + 0x110);
                  uVar82 = 0;
                  if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                    uVar82 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  FBoneReference::GetCompactPoseIndex
                            ((FBoneReference *)
                             ((longlong)(int)uVar33 * 0x10 +
                             *(longlong *)((longlong)FVar30 + lVar27)),(FBoneContainer *)&local_8a0)
                  ;
                  pTVar20 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_878,local_8a0);
                  in_XMM2 = *(undefined1 (*) [16])
                             (this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
                  dVar133 = in_XMM2._0_8_;
                  local_458 = *(undefined1 (*) [16])
                               &(this->character_direction_vector_CS).field0_0x0;
                  local_738 = (pTVar20->Rotation).XY.m128d_f64[0];
                  dStack_730 = (pTVar20->Rotation).XY.m128d_f64[1];
                  auVar85 = *(undefined1 (*) [16])
                             (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                  dVar139 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
                  local_728 = (pTVar20->Rotation).ZW.m128d_f64[0];
                  dStack_720 = (pTVar20->Rotation).ZW.m128d_f64[1];
                  local_718 = (pTVar20->Translation).XY.m128d_f64[0];
                  dStack_710 = (pTVar20->Translation).XY.m128d_f64[1];
                  local_708 = (pTVar20->Translation).ZW.m128d_f64[0];
                  dStack_700 = (pTVar20->Translation).ZW.m128d_f64[1];
                  local_6f8 = (pTVar20->Scale3D).XY.m128d_f64[0];
                  dStack_6f0 = (pTVar20->Scale3D).XY.m128d_f64[1];
                  local_6d8 = (pTVar20->Scale3D).ZW.m128d_f64[0];
                  dStack_6d0 = (pTVar20->Scale3D).ZW.m128d_f64[1];
                  local_448 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
                  local_5f8 = *(undefined1 (*) [16])
                               (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                  dVar74 = local_458._8_8_;
                  auVar76 = blendpd(local_5f8,in_XMM2,2);
                  auVar99._0_8_ = dVar74 * local_5f8._0_8_ - local_5f8._8_8_ * local_458._0_8_;
                  auVar99._8_8_ = local_448 * local_5f8._8_8_ - dVar133 * dVar74;
                  auVar135._8_4_ = SUB84(auVar99._8_8_,0);
                  auVar135._0_8_ = auVar99._0_8_;
                  auVar135._12_4_ = (int)((ulonglong)auVar99._8_8_ >> 0x20);
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = local_448;
                  auVar46 = blendpd(local_458,auVar13,2);
                  auVar47._0_8_ = auVar46._0_8_ * dVar133 - auVar76._0_8_ * local_448;
                  auVar47._8_8_ = auVar46._8_8_ * in_XMM2._8_8_ - auVar76._8_8_ * 0.0;
                  auVar46 = blendpd(auVar99,auVar47,2);
                  dVar132 = auVar135._8_8_ + auVar135._8_8_;
                  dVar138 = auVar47._0_8_ + auVar47._0_8_;
                  auVar100._0_8_ = auVar46._0_8_ + auVar46._0_8_;
                  auVar100._8_8_ = auVar46._8_8_ + auVar46._8_8_;
                  auVar88._8_4_ = SUB84(dVar138,0);
                  auVar88._0_8_ = dVar132;
                  uVar108 = (undefined4)((ulonglong)dVar138 >> 0x20);
                  auVar88._12_4_ = uVar108;
                  auVar62._8_4_ = SUB84(dVar138,0);
                  auVar62._0_8_ = dVar132;
                  auVar62._12_4_ = uVar108;
                  auVar46 = blendpd(auVar62,auVar100,2);
                  auVar89._0_8_ = auVar88._8_8_ * auVar85._0_8_ - auVar85._8_8_ * dVar132;
                  auVar89._8_8_ = auVar100._0_8_ * auVar85._8_8_ - dVar133 * dVar138;
                  auVar85 = blendpd(auVar85,in_XMM2,2);
                  auVar48._8_4_ = SUB84(auVar89._8_8_,0);
                  auVar48._0_8_ = auVar89._0_8_;
                  auVar48._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
                  auVar63._0_8_ = auVar46._0_8_ * dVar133 - auVar85._0_8_ * auVar100._0_8_;
                  auVar63._8_8_ = auVar46._8_8_ * in_XMM2._8_8_ - auVar85._8_8_ * auVar100._8_8_;
                  auVar85 = blendpd(auVar89,auVar63,2);
                  local_600 = auVar100._0_8_ * dVar139 + local_448 + auVar85._0_8_;
                  dVar133 = dVar132 * dVar139 + local_458._0_8_ + auVar48._8_8_;
                  dVar139 = dVar138 * dVar139 + dVar74 + auVar63._0_8_;
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                    uVar82 = uVar32;
                  }
                  local_610 = dVar133;
                  dStack_608 = dVar139;
                  local_570 = local_600;
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                    uVar82 = uVar83;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x598);
                  uVar82 = 0;
                  if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                    uVar82 = ~uVar33 >> 0x1f;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((*(byte *)(local_908 + 0xad + *(longlong *)((longlong)FVar30 + lVar27)) & 1)
                      == 0) {
LAB_14d2c1271:
                    local_914 = false;
                  }
                  else {
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5b0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x5a8);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    local_914 = true;
                    if ((*(byte *)(local_8f8 * 0x100 + 0xad +
                                  *(longlong *)((longlong)FVar30 + lVar27)) & 1) == 0)
                    goto LAB_14d2c1271;
                  }
                  uVar82 = 0;
                  if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                    uVar82 = uVar32;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                  uVar82 = 0;
                  if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5f0)) {
                    uVar82 = uVar83;
                  }
                  if ((uVar82 == 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar19)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  if ((*(byte *)(*(longlong *)(pFVar31 + lVar34 + 0x5e8) + 0xad + lVar29) & 1) == 0)
                  {
LAB_14d2c13f0:
                    bVar19 = false;
                  }
                  else {
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5e0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    if ((*(byte *)(lVar29 + 0xad + *(longlong *)(pFVar31 + lVar34 + 0x5d8)) & 1) ==
                        0) goto LAB_14d2c13f0;
                    bVar19 = true;
                  }
                  if (this->Use_Four_Point_Feets == false) {
                    bVar19 = true;
                  }
                  if ((local_914 != false) && (bVar19)) {
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5b0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x5a8);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar23 = local_8f8 * 0x100;
                    lVar27 = *(longlong *)((longlong)FVar30 + lVar27);
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar8 = *(longlong *)(pFVar31 + lVar34 + 0x598);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar8)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar28 = local_8f8 * 0x100;
                    lVar8 = *(longlong *)((longlong)FVar30 + lVar8);
                    dVar74 = *(double *)(lVar23 + 0x30 + lVar27) -
                             *(double *)(lVar28 + 0x30 + lVar8);
                    dVar133 = *(double *)(lVar23 + 0x28 + lVar27) -
                              *(double *)(lVar28 + 0x28 + lVar8);
                    dVar139 = *(double *)(lVar23 + 0x38 + lVar27) -
                              *(double *)(lVar28 + 0x38 + lVar8);
                    dVar139 = dVar74 * dVar74 + dVar133 * dVar133 + dVar139 * dVar139;
                    if ((dVar139 != (double)CONCAT44(uVar148,uVar147)) && (dVar18 <= dVar139)) {
                      local_540 = (double)CONCAT44(uVar148,uVar147) / SQRT(dVar139);
                    }
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_Feet_pair).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar26 + 0x138)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    uVar82 = *(uint *)(*(longlong *)(pFVar31 + lVar26 + 0x130) + local_900 * 4);
                    uVar111 = 0;
                    if ((int)uVar82 < (this->dragon_input_data).FeetBones.ArrayNum) {
                      uVar111 = ~uVar82 >> 0x1f;
                    }
                    if ((uVar111 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
                    uVar111 = 0;
                    if ((int)uVar33 < *(int *)(pFVar31 + (longlong)(int)uVar82 * 0xd0 + 200)) {
                      uVar111 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar111 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar7 = (this->spine_hit_pairs).ArrayNum;
                    if (*(char *)(*(longlong *)(pFVar31 + (longlong)(int)uVar82 * 0xd0 + 0xc0) +
                                  0x28 + local_8f8 * 0x30) == '\0') {
                      uVar82 = 0;
                      if ((int)uVar35 < iVar7) {
                        uVar82 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                      uVar82 = 0;
                      if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5b0)) {
                        uVar82 = uVar83;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x5a8);
                      uVar82 = 0;
                      if ((int)uVar33 < *(int *)(lVar27 + 8 + (longlong)FVar30)) {
                        uVar82 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar23 = local_8f8 * 0x100;
                      lVar27 = *(longlong *)(lVar27 + (longlong)FVar30);
                      uVar82 = 0;
                      if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                        uVar82 = uVar32;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                      uVar82 = 0;
                      if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                        uVar82 = uVar83;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar8 = *(longlong *)(pFVar31 + lVar34 + 0x598);
                      uVar82 = 0;
                      if ((int)uVar33 < *(int *)(lVar8 + 8 + (longlong)FVar30)) {
                        uVar82 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar28 = local_8f8 * 0x100;
                      lVar8 = *(longlong *)(lVar8 + (longlong)FVar30);
                      local_800._s_0.X =
                           *(double *)(lVar23 + 0x28 + lVar27) - *(double *)(lVar28 + 0x28 + lVar8);
                      local_800._s_0.Y =
                           *(double *)(lVar23 + 0x30 + lVar27) - *(double *)(lVar28 + 0x30 + lVar8);
                      pTVar24 = &local_318;
                      local_800._s_0.Z =
                           *(double *)(lVar23 + 0x38 + lVar27) - *(double *)(lVar28 + 0x38 + lVar8);
                      this_00 = &local_800;
                    }
                    else {
                      uVar82 = 0;
                      if ((int)uVar35 < iVar7) {
                        uVar82 = ~uVar35 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                      uVar82 = 0;
                      if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                        uVar82 = uVar83;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x598);
                      uVar82 = 0;
                      if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                        uVar82 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar23 = local_8f8 * 0x100;
                      lVar27 = *(longlong *)((longlong)FVar30 + lVar27);
                      uVar82 = 0;
                      if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                        uVar82 = uVar32;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                      uVar82 = 0;
                      if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5b0)) {
                        uVar82 = uVar83;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar8 = *(longlong *)(pFVar31 + lVar34 + 0x5a8);
                      uVar82 = 0;
                      if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar8)) {
                        uVar82 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar82 == 0) &&
                         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar19)) {
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      lVar28 = local_8f8 * 0x100;
                      lVar8 = *(longlong *)((longlong)FVar30 + lVar8);
                      local_818._s_0.X =
                           *(double *)(lVar23 + 0x28 + lVar27) - *(double *)(lVar28 + 0x28 + lVar8);
                      local_818._s_0.Y =
                           *(double *)(lVar23 + 0x30 + lVar27) - *(double *)(lVar28 + 0x30 + lVar8);
                      pTVar24 = &local_300;
                      local_818._s_0.Z =
                           *(double *)(lVar23 + 0x38 + lVar27) - *(double *)(lVar28 + 0x38 + lVar8);
                      this_00 = &local_818;
                    }
                    pTVar24 = UE::Math::TVector<double>::GetSafeNormal
                                        ((TVector<double> *)&this_00->_s_0,pTVar24,dVar18,
                                         &UE::Math::TVector<double>::ZeroVector);
                    local_5e8 = (pTVar24->field0_0x0)._s_0.Z;
                    auVar85 = *(undefined1 (*) [16])&pTVar24->field0_0x0;
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5f0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar34 + 0x5e8);
                    uVar82 = 0;
                    if ((int)uVar35 < (this->spine_hit_pairs).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar34 + 0x5e0)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar23 = *(longlong *)(pFVar31 + lVar34 + 0x5d8);
                    dVar74 = *(double *)(lVar27 + 0x28 + lVar29) -
                             *(double *)(lVar29 + 0x28 + lVar23);
                    dVar133 = *(double *)(lVar27 + 0x30 + lVar29) -
                              *(double *)(lVar29 + 0x30 + lVar23);
                    dVar139 = *(double *)(lVar27 + 0x38 + lVar29) -
                              *(double *)(lVar29 + 0x38 + lVar23);
                    auVar77._0_8_ = dVar133 * dVar133 + dVar74 * dVar74 + dVar139 * dVar139;
                    auVar77._8_8_ = 0;
                    uVar118 = dVar139;
                    uVar97 = dVar133;
                    uVar98 = dVar74;
                    if ((auVar77._0_8_ != (double)CONCAT44(uVar148,uVar147)) &&
                       (uVar118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                       uVar97 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                       uVar98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                       dVar18 <= auVar77._0_8_)) {
                      local_748 = (double)CONCAT44(uVar148,uVar147) / SQRT(auVar77._0_8_);
                      uVar118 = dVar139 * local_748;
                      uVar97 = dVar133 * local_748;
                      uVar98 = dVar74 * local_748;
                    }
                    if (this->Use_Four_Point_Feets == false) {
                      dVar139 = (this->character_forward_direction_vector_CS).field0_0x0._s_0.X;
                      dVar133 = (this->character_forward_direction_vector_CS).field0_0x0._s_0.Z;
                      dVar74 = (this->character_forward_direction_vector_CS).field0_0x0._s_0.Y;
                      dVar132 = (this->character_direction_vector_CS).field0_0x0._s_0.Y;
                      dVar138 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
                      dVar59 = (this->character_direction_vector_CS).field0_0x0._s_0.X;
                      dVar73 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
                      auVar77 = *(undefined1 (*) [16])
                                 (this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
                      dVar87 = auVar77._0_8_;
                      auVar46 = *(undefined1 (*) [16])
                                 (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                      dVar72 = dVar74 * dVar138 - dVar133 * dVar132;
                      dVar138 = dVar59 * dVar133 - dVar139 * dVar138;
                      auVar76 = *(undefined1 (*) [16])
                                 (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                      local_428 = dVar139 * dVar132 - dVar59 * dVar74;
                      auVar78 = blendpd(auVar76,auVar77,2);
                      auVar141._8_8_ = 0;
                      auVar141._0_8_ = local_428;
                      uVar108 = SUB84(dVar138,0);
                      uVar116 = (undefined4)((ulonglong)dVar138 >> 0x20);
                      auVar121._8_4_ = uVar108;
                      auVar121._0_8_ = dVar72;
                      auVar121._12_4_ = uVar116;
                      local_438._8_4_ = uVar108;
                      local_438._0_8_ = dVar72;
                      local_438._12_4_ = uVar116;
                      auVar122._0_8_ = auVar121._8_8_ * auVar76._0_8_ - auVar76._8_8_ * dVar72;
                      auVar122._8_8_ = local_428 * auVar76._8_8_ - dVar87 * dVar138;
                      auVar49._8_4_ = uVar108;
                      auVar49._0_8_ = dVar72;
                      auVar49._12_4_ = uVar116;
                      auVar76 = blendpd(auVar49,auVar141,2);
                      auVar101._8_4_ = SUB84(auVar122._8_8_,0);
                      auVar101._0_8_ = auVar122._0_8_;
                      auVar101._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
                      auVar50._0_8_ = auVar76._0_8_ * dVar87 - auVar78._0_8_ * local_428;
                      auVar50._8_8_ = auVar76._8_8_ * auVar77._8_8_ - auVar78._8_8_ * 0.0;
                      auVar76 = blendpd(auVar122,auVar50,2);
                      dVar139 = auVar101._8_8_ + auVar101._8_8_;
                      dVar133 = auVar50._0_8_ + auVar50._0_8_;
                      auVar123._0_8_ = auVar76._0_8_ + auVar76._0_8_;
                      auVar123._8_8_ = auVar76._8_8_ + auVar76._8_8_;
                      auVar90._8_4_ = SUB84(dVar133,0);
                      auVar90._0_8_ = dVar139;
                      uVar108 = (undefined4)((ulonglong)dVar133 >> 0x20);
                      auVar90._12_4_ = uVar108;
                      auVar64._8_4_ = SUB84(dVar133,0);
                      auVar64._0_8_ = dVar139;
                      auVar64._12_4_ = uVar108;
                      auVar76 = blendpd(auVar64,auVar123,2);
                      auVar91._0_8_ = auVar90._8_8_ * auVar46._0_8_ - auVar46._8_8_ * dVar139;
                      auVar91._8_8_ = auVar123._0_8_ * auVar46._8_8_ - dVar87 * dVar133;
                      auVar51._8_4_ = SUB84(auVar91._8_8_,0);
                      auVar51._0_8_ = auVar91._0_8_;
                      auVar51._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
                      auVar46 = blendpd(auVar46,auVar77,2);
                      auVar65._0_8_ = auVar76._0_8_ * dVar87 - auVar46._0_8_ * auVar123._0_8_;
                      auVar65._8_8_ = auVar76._8_8_ * auVar77._8_8_ - auVar46._8_8_ * auVar123._8_8_
                      ;
                      auVar46 = blendpd(auVar91,auVar65,2);
                      uVar118 = auVar123._0_8_ * dVar73 + local_428 + auVar46._0_8_;
                      uVar98 = dVar139 * dVar73 + dVar72 + auVar51._8_8_;
                      dStack_490 = dVar133 * dVar73 + dVar138 + auVar65._0_8_;
                      auVar14._4_8_ = auVar46._8_8_;
                      auVar14._0_4_ = (int)((ulonglong)uVar98 >> 0x20);
                      auVar92._0_8_ = auVar14._0_8_ << 0x20;
                      auVar92._8_4_ = SUB84(dStack_490,0);
                      auVar92._12_4_ = (int)((ulonglong)dStack_490 >> 0x20);
                      uVar97 = auVar92._8_8_;
                      local_498 = (double)uVar98;
                      local_488 = (double)uVar118;
                    }
                    auVar15._4_8_ = auVar77._8_8_;
                    auVar15._0_4_ = auVar85._4_4_;
                    auVar79._0_8_ = auVar15._0_8_ << 0x20;
                    auVar79._8_4_ = auVar85._8_4_;
                    auVar79._12_4_ = auVar85._12_4_;
                    dVar132 = (double)uVar118 * auVar79._8_8_ - (double)uVar97 * local_5e8;
                    dVar74 = (double)uVar97 * auVar85._0_8_ - (double)uVar98 * auVar79._8_8_;
                    dVar139 = (double)uVar98 * local_5e8 - (double)uVar118 * auVar85._0_8_;
                    dVar133 = dVar139 * dVar139 + dVar132 * dVar132 + dVar74 * dVar74;
                    uVar118 = dVar132;
                    uVar97 = dVar139;
                    local_468 = dVar74;
                    if ((dVar133 != (double)CONCAT44(uVar148,uVar147)) &&
                       (uVar118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                       uVar97 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                       local_468 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                       dVar18 <= dVar133)) {
                      local_740 = (double)CONCAT44(uVar148,uVar147) / SQRT(dVar133);
                      uVar118 = local_740 * dVar132;
                      uVar97 = local_740 * dVar139;
                      local_468 = local_740 * dVar74;
                    }
                    uVar110 = (undefined4)((ulonglong)uVar97 >> 0x20);
                    uVar116 = (undefined4)uVar97;
                    dVar139 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
                              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                    dVar133 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
                              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                    uVar108 = (undefined4)((ulonglong)dVar133 >> 0x20);
                    auVar136._8_8_ = 0;
                    auVar136._0_8_ = local_468;
                    auVar124._0_8_ =
                         (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                    auVar124._8_8_ =
                         (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
                         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                    auVar86._8_4_ = SUB84(dVar133,0);
                    auVar86._0_8_ = dVar139;
                    auVar86._12_4_ = uVar108;
                    auVar93._8_4_ = SUB84(dVar133,0);
                    auVar93._0_8_ = dVar139;
                    auVar93._12_4_ = uVar108;
                    auVar46 = blendpd(auVar93,auVar124,2);
                    auVar102._8_4_ = uVar116;
                    auVar102._0_8_ = uVar118;
                    auVar102._12_4_ = uVar110;
                    local_478._8_4_ = uVar116;
                    local_478._0_8_ = uVar118;
                    local_478._12_4_ = uVar110;
                    auVar52._8_4_ = uVar116;
                    auVar52._0_8_ = uVar118;
                    auVar52._12_4_ = uVar110;
                    auVar66._8_4_ = uVar116;
                    auVar66._0_8_ = uVar118;
                    auVar66._12_4_ = uVar110;
                    auVar103._0_8_ = auVar102._8_8_ * dVar139 - (double)uVar118 * auVar86._8_8_;
                    auVar103._8_8_ = local_468 * dVar133 - auVar52._8_8_ * auVar124._0_8_;
                    auVar85 = blendpd(auVar66,auVar136,2);
                    auVar142._8_4_ = SUB84(auVar103._8_8_,0);
                    auVar142._0_8_ = auVar103._0_8_;
                    auVar142._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
                    auVar67._0_8_ = auVar85._0_8_ * auVar124._0_8_ - local_468 * auVar46._0_8_;
                    auVar67._8_8_ = auVar85._8_8_ * auVar124._8_8_ - auVar46._8_8_ * 0.0;
                    auVar85 = blendpd(auVar103,auVar67,2);
                    auVar104._0_8_ = auVar85._0_8_ + auVar85._0_8_;
                    auVar104._8_8_ = auVar85._8_8_ + auVar85._8_8_;
                    dVar132 = auVar142._8_8_ + auVar142._8_8_;
                    dVar138 = auVar67._0_8_ + auVar67._0_8_;
                    uVar108 = SUB84(dVar138,0);
                    auVar80._8_4_ = uVar108;
                    auVar80._0_8_ = dVar132;
                    uVar116 = (undefined4)((ulonglong)dVar138 >> 0x20);
                    auVar80._12_4_ = uVar116;
                    auVar53._8_4_ = uVar108;
                    auVar53._0_8_ = dVar132;
                    auVar53._12_4_ = uVar116;
                    auVar68._8_4_ = uVar108;
                    auVar68._0_8_ = dVar132;
                    auVar68._12_4_ = uVar116;
                    auVar85 = blendpd(auVar68,auVar104,2);
                    dVar74 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
                    auVar81._0_8_ = auVar80._8_8_ * dVar139 - dVar132 * auVar86._8_8_;
                    auVar81._8_8_ = auVar104._0_8_ * dVar133 - auVar53._8_8_ * auVar124._0_8_;
                    auVar54._8_4_ = SUB84(auVar104._8_8_,0);
                    auVar54._0_8_ = auVar104._0_8_;
                    auVar54._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
                    auVar69._0_8_ = auVar85._0_8_ * auVar124._0_8_ - auVar104._0_8_ * auVar46._0_8_;
                    auVar69._8_8_ = auVar85._8_8_ * auVar124._8_8_ - auVar54._8_8_ * auVar46._8_8_;
                    auVar55._8_4_ = SUB84(auVar81._8_8_,0);
                    auVar55._0_8_ = auVar81._0_8_;
                    auVar55._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
                    auVar85 = blendpd(auVar81,auVar69,2);
                    in_XMM2 = *(undefined1 (*) [16])
                               (this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
                    dVar139 = in_XMM2._0_8_;
                    local_5c8 = auVar104._0_8_ * auVar124._8_8_ + local_468 + auVar85._0_8_;
                    auVar125._8_8_ = 0;
                    auVar125._0_8_ = local_5c8;
                    local_5d8._0_8_ = dVar132 * auVar124._8_8_ + (double)uVar118 + auVar55._8_8_;
                    local_5d8._8_8_ = dVar138 * auVar124._8_8_ + (double)uVar97 + auVar69._0_8_;
                    local_768 = *(undefined1 (*) [16])
                                 (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                    auVar105._8_4_ = SUB84(local_5d8._8_8_,0);
                    auVar105._0_8_ = local_5d8._0_8_;
                    uVar108 = (undefined4)((ulonglong)local_5d8._8_8_ >> 0x20);
                    auVar105._12_4_ = uVar108;
                    auVar46 = blendpd(local_768,in_XMM2,2);
                    auVar106._0_8_ =
                         auVar105._8_8_ * local_768._0_8_ - local_768._8_8_ * local_5d8._0_8_;
                    auVar106._8_8_ = local_5c8 * local_768._8_8_ - dVar139 * local_5d8._8_8_;
                    auVar56._8_4_ = SUB84(local_5d8._8_8_,0);
                    auVar56._0_8_ = local_5d8._0_8_;
                    auVar56._12_4_ = uVar108;
                    auVar137._8_4_ = SUB84(auVar106._8_8_,0);
                    auVar137._0_8_ = auVar106._0_8_;
                    auVar137._12_4_ = (int)((ulonglong)auVar106._8_8_ >> 0x20);
                    auVar85 = blendpd(auVar56,auVar125,2);
                    auVar57._0_8_ = auVar85._0_8_ * dVar139 - auVar46._0_8_ * local_5c8;
                    auVar57._8_8_ = auVar85._8_8_ * in_XMM2._8_8_ - auVar46._8_8_ * 0.0;
                    auVar85 = blendpd(auVar106,auVar57,2);
                    dVar133 = auVar137._8_8_ + auVar137._8_8_;
                    dVar132 = auVar57._0_8_ + auVar57._0_8_;
                    auVar107._0_8_ = auVar85._0_8_ + auVar85._0_8_;
                    auVar107._8_8_ = auVar85._8_8_ + auVar85._8_8_;
                    auVar85 = *(undefined1 (*) [16])
                               (this->owner_skel_w_transform).Rotation.XY.m128d_f64;
                    auVar94._8_4_ = SUB84(dVar132,0);
                    auVar94._0_8_ = dVar133;
                    uVar108 = (undefined4)((ulonglong)dVar132 >> 0x20);
                    auVar94._12_4_ = uVar108;
                    auVar70._8_4_ = SUB84(dVar132,0);
                    auVar70._0_8_ = dVar133;
                    auVar70._12_4_ = uVar108;
                    auVar46 = blendpd(auVar70,auVar107,2);
                    auVar95._0_8_ = auVar94._8_8_ * auVar85._0_8_ - auVar85._8_8_ * dVar133;
                    auVar95._8_8_ = auVar107._0_8_ * auVar85._8_8_ - dVar139 * dVar132;
                    auVar85 = blendpd(auVar85,in_XMM2,2);
                    auVar58._8_4_ = SUB84(auVar95._8_8_,0);
                    auVar58._0_8_ = auVar95._0_8_;
                    auVar58._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
                    auVar71._0_8_ = auVar46._0_8_ * dVar139 - auVar85._0_8_ * auVar107._0_8_;
                    auVar71._8_8_ = auVar46._8_8_ * in_XMM2._8_8_ - auVar85._8_8_ * auVar107._8_8_;
                    auVar85 = blendpd(auVar95,auVar71,2);
                    local_588 = auVar107._0_8_ * dVar74 + local_5c8 + auVar85._0_8_;
                    dVar133 = dVar133 * dVar74 + local_5d8._0_8_ + auVar58._8_8_;
                    dVar139 = dVar132 * dVar74 + local_5d8._8_8_ + auVar71._0_8_;
                    local_5b8 = local_5d8;
                    local_5a8 = local_5c8;
                    local_598 = dVar133;
                    dStack_590 = dVar139;
                    local_570 = local_588;
                  }
                  local_418.Rotation.XY.m128d_f64[0] = local_738;
                  local_418.Rotation.XY.m128d_f64[1] = dStack_730;
                  local_418.Translation.XY.m128d_f64[0] = local_718;
                  local_418.Translation.XY.m128d_f64[1] = dStack_710;
                  local_418.Scale3D.XY.m128d_f64[0] = local_6f8;
                  local_418.Scale3D.XY.m128d_f64[1] = dStack_6f0;
                  local_418.Rotation.ZW.m128d_f64[0] = local_728;
                  local_418.Rotation.ZW.m128d_f64[1] = dStack_720;
                  local_898._s_0.Z = local_570;
                  local_418.Translation.ZW.m128d_f64[0] = local_708;
                  local_418.Translation.ZW.m128d_f64[1] = dStack_700;
                  local_418.Scale3D.ZW.m128d_f64[0] = local_6d8;
                  local_418.Scale3D.ZW.m128d_f64[1] = dStack_6d0;
                  local_898._s_0.X = dVar133;
                  local_898._s_0.Y = dVar139;
                  RotationFromImpactNormal
                            (this,&local_560,uVar35,uVar36,true,param_1,
                             (TVector<double> *)&local_898._s_0,&local_418,(float)local_6e8._0_4_);
                  iVar7 = (this->feet_fingers_transform_array).ArrayNum;
                  if (this->Ignore_Lerping == false) {
                    uVar82 = 0;
                    if ((int)uVar35 < iVar7) {
                      uVar82 = ~uVar35 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_fingers_transform_array).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar22 + 8)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar22);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    fVar109 = this->Delta_Rot_Speed;
                    pdVar25 = (double *)
                              (local_8f8 * 0x60 + *(longlong *)((longlong)FVar30 + lVar27));
                    pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_560,&local_288);
                    dVar139 = pTVar21->X;
                    dVar133 = pTVar21->Y;
                    dVar74 = pTVar21->Z;
                    dVar132 = pTVar21->W;
                    uVar82 = 0;
                    if ((int)uVar35 < (this->feet_fingers_transform_array).ArrayNum) {
                      uVar82 = uVar32;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_fingers_transform_array).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar22 + 8)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar22);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)(lVar27 + 8 + (longlong)FVar30)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(lVar27 + (longlong)FVar30);
                    local_768 = *(undefined1 (*) [16])(local_8f8 * 0x60 + lVar27);
                    pdVar3 = (double *)(local_8f8 * 0x60 + 0x10 + lVar27);
                    local_758 = *pdVar3;
                    dStack_750 = pdVar3[1];
                    local_4b8.X = dVar139;
                    local_4b8.Y = dVar133;
                    local_4b8.Z = dVar74;
                    local_4b8.W = dVar132;
                    pTVar21 = AnimRotSLerp(this,&local_268,local_914,uVar35,uVar36,
                                           (TQuat<double> *)local_768,&local_4b8,fVar109);
                    local_8f8 = local_8f8 + 1;
                    uVar33 = uVar33 + 1;
                    local_908 = local_908 + 0x100;
                    auVar85 = *(undefined1 (*) [16])&pTVar21->Z;
                    dVar139 = pTVar21->Y;
                    *pdVar25 = pTVar21->X;
                    pdVar25[1] = dVar139;
                    *(undefined1 (*) [16])(pdVar25 + 2) = auVar85;
                  }
                  else {
                    uVar82 = 0;
                    if ((int)uVar35 < iVar7) {
                      uVar82 = ~uVar35 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pFVar31 = (this->feet_fingers_transform_array).AllocatorInstance.Data;
                    uVar82 = 0;
                    if ((int)uVar36 < *(int *)(pFVar31 + lVar22 + 8)) {
                      uVar82 = uVar83;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar27 = *(longlong *)(pFVar31 + lVar22);
                    uVar82 = 0;
                    if ((int)uVar33 < *(int *)((longlong)FVar30 + 8 + lVar27)) {
                      uVar82 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar82 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    lVar23 = local_8f8 * 0x60;
                    lVar27 = *(longlong *)((longlong)FVar30 + lVar27);
                    pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_560,&local_248);
                    local_8f8 = local_8f8 + 1;
                    uVar33 = uVar33 + 1;
                    local_908 = local_908 + 0x100;
                    dVar139 = pTVar21->Y;
                    auVar85 = *(undefined1 (*) [16])&pTVar21->Z;
                    pdVar25 = (double *)(lVar23 + lVar27);
                    *pdVar25 = pTVar21->X;
                    pdVar25[1] = dVar139;
                    *(undefined1 (*) [16])(lVar23 + 0x10 + lVar27) = auVar85;
                    FVar30 = local_870;
                    uVar83 = local_89c;
                  }
                }
              }
            }
          }
          local_900 = local_900 + 1;
          uVar36 = uVar36 + 1;
          local_8c0 = local_8c0 + 4;
          local_8b8 = local_8b8 + 0x60;
          local_8b0 = local_8b0 + 0x100;
          local_8a8 = local_8a8 + 0x10;
        }
      }
      local_910 = local_910 + 1;
      uVar35 = uVar35 + 1;
      lVar34 = lVar34 + 0x5f8;
    } while ((int)uVar35 < (this->spine_hit_pairs).ArrayNum);
  }
  DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar31 = (param_2->AllocatorInstance).Data;
  if (pFVar31 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar31);
  }
  return;
}

// Check_Loop_Exist @ 14d2c3570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonFeetSolver::Check_Loop_Exist
          (FAnimNode_DragonFeetSolver *this,int param_1,float param_2,
          TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_> *param_3,float param_4,
          float param_5,TVector<double> *param_6,TVector<double> *param_7,float param_8,
          TRotator<double> *param_9,float param_10,FName param_11,FName param_12,FName param_13,
          FName param_14,TArray<FName,TSizedDefaultAllocator<32>_> *param_15)

{
  FName *pFVar1;
  double *pdVar2;
  int iVar3;
  TRotator<double> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  FString *pFVar15;
  FString *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  TRotator<double> *pTVar21;
  longlong lVar22;
  undefined1 auStack_2a8 [32];
  TRotator<double> *local_288;
  TRotator<double> *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  uint uStack_248;
  FCompactPoseBoneIndex FStack_244;
  undefined1 local_240 [8];
  uint uStack_238;
  FCompactPoseBoneIndex FStack_234;
  undefined1 local_230 [8];
  uint uStack_228;
  FCompactPoseBoneIndex FStack_224;
  TRotator<double> *local_220;
  TRotator<double> *local_218;
  TRotator<double> *local_210;
  TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_> *local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FDragonData_SpineFeetPair local_1b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  uVar18 = 0;
  local_210 = (TRotator<double> *)param_6;
  local_218 = (TRotator<double> *)param_7;
  local_220 = param_9;
  local_258._0_4_ = param_1;
  local_208 = param_3;
  if (0 < param_15->ArrayNum) {
    do {
      pFVar15 = ::FName::ToString(&param_14,&local_1d0);
      pFVar15 = ::FString::TrimStartAndEnd(pFVar15,&local_1e0);
      uVar19 = ~uVar18 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar18 < param_15->ArrayNum) {
        uVar17 = uVar19;
      }
      if (uVar17 == 0) {
        local_288 = (TRotator<double> *)(longlong)(int)uVar18;
        local_280 = (TRotator<double> *)(longlong)param_15->ArrayNum;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
      }
      pTVar21 = (TRotator<double> *)(longlong)(int)uVar18;
      pFVar16 = ::FName::ToString((FName *)((param_15->AllocatorInstance).Data +
                                           (longlong)pTVar21 * 8),&local_1f0);
      pFVar16 = ::FString::TrimStartAndEnd(pFVar16,&local_200);
      iVar14 = (pFVar15->Data).ArrayNum;
      iVar3 = (pFVar16->Data).ArrayNum;
      if (iVar14 == iVar3) {
        if (iVar14 < 2) {
          bVar12 = true;
        }
        else {
          iVar14 = wcscmp((wchar_t *)(pFVar15->Data).AllocatorInstance.Data,
                          (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
          bVar12 = iVar14 == 0;
        }
      }
      else {
        bVar12 = iVar3 + iVar14 == 1;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
      if ((bVar12) && ((int)uVar18 < (this->spine_Feet_pair).ArrayNum)) {
        memset(&local_1b8,0,0x170);
        FDragonData_SpineFeetPair::FDragonData_SpineFeetPair(&local_1b8);
        uVar17 = 0;
        if ((int)uVar18 < param_15->ArrayNum) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)param_15->ArrayNum,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        local_1b8.Spine_Involved.BoneName =
             *(FName *)((param_15->AllocatorInstance).Data + (longlong)pTVar21 * 8);
        local_1b8.Spine_Involved.bUseSkeletonIndex = 0;
        local_1b8.Spine_Involved.BoneIndex = -1;
        local_1b8.Spine_Involved.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize(&local_1b8.Spine_Involved,this->SavedBoneContainer);
        local_250._0_4_ = param_11.ComparisonIndex.Value;
        local_250._4_4_ = param_11.Number;
        uStack_248 = 0x7fffffff;
        FStack_244 = (FCompactPoseBoneIndex)0xffffffff;
        FBoneReference::Initialize((FBoneReference *)local_250,this->SavedBoneContainer);
        if ((local_1b8.Associated_Feet.AllocatorInstance.Data <= (TRotator<double> *)local_250) &&
           ((FScriptContainerElement *)local_250 <
            local_1b8.Associated_Feet.AllocatorInstance.Data +
            (longlong)local_1b8.Associated_Feet.ArrayMax * 0x10)) {
          local_270 = (longlong)local_1b8.Associated_Feet.ArrayNum;
          local_268 = 0x10;
          local_288 = (TRotator<double> *)local_250;
          local_280 = (TRotator<double> *)local_1b8.Associated_Feet.AllocatorInstance.Data;
          local_278 = (longlong)local_1b8.Associated_Feet.ArrayMax;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        if (local_1b8.Associated_Feet.ArrayNum == local_1b8.Associated_Feet.ArrayMax) {
          local_1b8.Associated_Feet.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x410,&local_1b8.Associated_Feet.AllocatorInstance,
                          &local_1b8.Associated_Feet.ArrayMax);
        }
        FVar8.Number = (uint)FStack_244;
        FVar8.ComparisonIndex.Value = uStack_248;
        iVar14 = local_1b8.Associated_Feet.ArrayNum + 1;
        pFVar1 = (FName *)((longlong)
                           &((TRotator<double> *)local_1b8.Associated_Feet.AllocatorInstance.Data)->
                            Pitch + (longlong)local_1b8.Associated_Feet.ArrayNum * 0x10);
        pFVar1->ComparisonIndex = (FNameEntryId)local_250._0_4_;
        pFVar1->Number = local_250._4_4_;
        pFVar1[1] = FVar8;
        iVar3 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar3) {
          uVar17 = uVar19;
        }
        local_1b8.Associated_Feet.ArrayNum = iVar14;
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar3,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data;
        lVar22 = (longlong)pTVar21 * 0x170;
        *(FName *)(pFVar20 + lVar22) = local_1b8.Spine_Involved.BoneName;
        *(uint *)(pFVar20 + lVar22 + 8) =
             local_1b8.Spine_Involved._8_4_ & 0x7fffffff |
             *(uint *)(pFVar20 + lVar22 + 8) & 0x80000000;
        *(undefined4 *)(pFVar20 + lVar22 + 8) = local_1b8.Spine_Involved._8_4_;
        *(FCompactPoseBoneIndex *)(pFVar20 + lVar22 + 0xc) =
             local_1b8.Spine_Involved.CachedCompactPoseIndex;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data;
        pTVar4 = *(TRotator<double> **)(pFVar20 + lVar22 + 0x20);
        if ((pTVar4 <= (TRotator<double> *)local_250) &&
           (local_250 <
            (float *)((longlong)&pTVar4->Pitch + (longlong)*(int *)(pFVar20 + lVar22 + 0x2c) * 0x10)
           )) {
          local_270 = (longlong)*(int *)(pFVar20 + lVar22 + 0x28);
          local_268 = 0x10;
          local_288 = (TRotator<double> *)local_250;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + lVar22 + 0x2c);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)(pFVar20 + lVar22 + 0x28);
        if (iVar14 == *(int *)(pFVar20 + lVar22 + 0x2c)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,(ForAnyElementType *)(pFVar20 + lVar22 + 0x20),
                              (int *)(pFVar20 + lVar22 + 0x2c));
        }
        *(int *)(pFVar20 + lVar22 + 0x28) = iVar14 + 1;
        FVar9.Number = (uint)FStack_244;
        FVar9.ComparisonIndex.Value = uStack_248;
        pFVar1 = (FName *)(*(longlong *)(pFVar20 + lVar22 + 0x20) + (longlong)iVar14 * 0x10);
        pFVar1->ComparisonIndex = (FNameEntryId)local_250._0_4_;
        pFVar1->Number = local_250._4_4_;
        pFVar1[1] = FVar9;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xd0;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= local_220) && (local_220 < pTVar4 + *(int *)(pFVar20 + 0xc))) {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 0x18;
          local_288 = local_220;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        dVar7 = local_220->Yaw;
        lVar5 = *(longlong *)&pFVar20->field_0x0;
        pdVar2 = (double *)(lVar5 + (longlong)iVar14 * 0x18);
        *pdVar2 = (((TVector<double>_u_0 *)&local_220->Pitch)->_s_0).X;
        pdVar2[1] = dVar7;
        *(double *)(lVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_220->Roll;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xf0;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= local_218) && (local_218 < pTVar4 + *(int *)(pFVar20 + 0xc))) {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 0x18;
          local_288 = local_218;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        dVar7 = local_218->Yaw;
        lVar5 = *(longlong *)&pFVar20->field_0x0;
        pdVar2 = (double *)(lVar5 + (longlong)iVar14 * 0x18);
        *pdVar2 = (((TVector<double>_u_0 *)&local_218->Pitch)->_s_0).X;
        pdVar2[1] = dVar7;
        *(double *)(lVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_218->Roll;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0x130;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= (TRotator<double> *)local_258) &&
           (local_258 < (float *)((longlong)&pTVar4->Pitch + (longlong)*(int *)(pFVar20 + 0xc) * 4))
           ) {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 4;
          local_288 = (TRotator<double> *)local_258;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        *(undefined4 *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar14 * 4) = local_258._0_4_;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0x140;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= local_210) && (local_210 < pTVar4 + *(int *)(pFVar20 + 0xc))) {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 0x18;
          local_288 = local_210;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        dVar7 = local_210->Yaw;
        lVar5 = *(longlong *)&pFVar20->field_0x0;
        pdVar2 = (double *)(lVar5 + (longlong)iVar14 * 0x18);
        *pdVar2 = (((TVector<double>_u_0 *)&local_210->Pitch)->_s_0).X;
        pdVar2[1] = dVar7;
        *(double *)(lVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_210->Roll;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xc0;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= (TRotator<double> *)&param_10) &&
           (&param_10 < (float *)((longlong)&pTVar4->Pitch + (longlong)*(int *)(pFVar20 + 0xc) * 4))
           ) {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 4;
          local_288 = (TRotator<double> *)&param_10;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        *(float *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar14 * 4) = param_10;
        iVar14 = (this->spine_Feet_pair).ArrayNum;
        uVar17 = 0;
        if ((int)uVar18 < iVar14) {
          uVar17 = uVar19;
        }
        if ((uVar17 == 0) &&
           (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data + lVar22 + 0xe0;
        pTVar4 = *(TRotator<double> **)&pFVar20->field_0x0;
        if ((pTVar4 <= (TRotator<double> *)&param_8) &&
           (&param_8 < (float *)((longlong)&pTVar4->Pitch + (longlong)*(int *)(pFVar20 + 0xc) * 4)))
        {
          local_270 = (longlong)*(int *)&pFVar20[8].field_0x0;
          local_268 = 4;
          local_288 = (TRotator<double> *)&param_8;
          local_280 = pTVar4;
          local_278 = (longlong)*(int *)(pFVar20 + 0xc);
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar12) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
        }
        iVar14 = *(int *)&pFVar20[8].field_0x0;
        if (iVar14 == *(int *)(pFVar20 + 0xc)) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
        }
        *(int *)&pFVar20[8].field_0x0 = iVar14 + 1;
        *(float *)(*(longlong *)&pFVar20->field_0x0 + (longlong)iVar14 * 4) = param_8;
        if (this->automatic_leg_make == false) {
          local_240 = (undefined1  [8])param_12;
          uStack_238 = 0x7fffffff;
          FStack_234 = (FCompactPoseBoneIndex)0xffffffff;
          FBoneReference::Initialize((FBoneReference *)local_240,this->SavedBoneContainer);
          iVar14 = (this->spine_Feet_pair).ArrayNum;
          uVar17 = 0;
          if ((int)uVar18 < iVar14) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data;
          pTVar4 = *(TRotator<double> **)(pFVar20 + lVar22 + 0x30);
          if ((pTVar4 <= (TRotator<double> *)local_240) &&
             (local_240 <
              (float *)((longlong)&pTVar4->Pitch +
                       (longlong)*(int *)(pFVar20 + lVar22 + 0x3c) * 0x10))) {
            local_270 = (longlong)*(int *)(pFVar20 + lVar22 + 0x38);
            local_268 = 0x10;
            local_288 = (TRotator<double> *)local_240;
            local_280 = pTVar4;
            local_278 = (longlong)*(int *)(pFVar20 + lVar22 + 0x3c);
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
          }
          iVar14 = *(int *)(pFVar20 + lVar22 + 0x38);
          if (iVar14 == *(int *)(pFVar20 + lVar22 + 0x3c)) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)(pFVar20 + lVar22 + 0x30),
                                (int *)(pFVar20 + lVar22 + 0x3c));
          }
          *(int *)(pFVar20 + lVar22 + 0x38) = iVar14 + 1;
          FVar10.Number = (uint)FStack_234;
          FVar10.ComparisonIndex.Value = uStack_238;
          pFVar1 = (FName *)(*(longlong *)(pFVar20 + lVar22 + 0x30) + (longlong)iVar14 * 0x10);
          pFVar1->ComparisonIndex = (FNameEntryId)local_240._0_4_;
          pFVar1->Number = local_240._4_4_;
          pFVar1[1] = FVar10;
          local_230 = (undefined1  [8])param_13;
          uStack_228 = 0x7fffffff;
          FStack_224 = (FCompactPoseBoneIndex)0xffffffff;
          FBoneReference::Initialize((FBoneReference *)local_230,this->SavedBoneContainer);
          iVar14 = (this->spine_Feet_pair).ArrayNum;
          uVar17 = 0;
          if ((int)uVar18 < iVar14) {
            uVar17 = uVar19;
          }
          if ((uVar17 == 0) &&
             (local_288 = pTVar21, local_280 = (TRotator<double> *)(longlong)iVar14,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          pFVar20 = (this->spine_Feet_pair).AllocatorInstance.Data;
          pTVar21 = *(TRotator<double> **)(pFVar20 + lVar22 + 0x40);
          if ((pTVar21 <= (TRotator<double> *)local_230) &&
             (local_230 <
              (float *)((longlong)&pTVar21->Pitch +
                       (longlong)*(int *)(pFVar20 + lVar22 + 0x4c) * 0x10))) {
            local_270 = (longlong)*(int *)(pFVar20 + lVar22 + 0x48);
            local_268 = 0x10;
            local_288 = (TRotator<double> *)local_230;
            local_280 = pTVar21;
            local_278 = (longlong)*(int *)(pFVar20 + lVar22 + 0x4c);
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
          }
          iVar14 = *(int *)(pFVar20 + lVar22 + 0x48);
          if (iVar14 == *(int *)(pFVar20 + lVar22 + 0x4c)) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,(ForAnyElementType *)(pFVar20 + lVar22 + 0x40),
                                (int *)(pFVar20 + lVar22 + 0x4c));
          }
          *(int *)(pFVar20 + lVar22 + 0x48) = iVar14 + 1;
          FVar11.Number = (uint)FStack_224;
          FVar11.ComparisonIndex.Value = uStack_228;
          pFVar1 = (FName *)(*(longlong *)(pFVar20 + lVar22 + 0x40) + (longlong)iVar14 * 0x10);
          pFVar1->ComparisonIndex = (FNameEntryId)local_230._0_4_;
          pFVar1->Number = local_230._4_4_;
          pFVar1[1] = FVar11;
        }
        FDragonData_SpineFeetPair::~FDragonData_SpineFeetPair(&local_1b8);
        pFVar20 = (local_208->AllocatorInstance).Data;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar20);
        }
        pFVar20 = (param_15->AllocatorInstance).Data;
        if (pFVar20 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar20);
        }
        return true;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < param_15->ArrayNum);
  }
  pFVar20 = (local_208->AllocatorInstance).Data;
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar20);
  }
  pFVar20 = (param_15->AllocatorInstance).Data;
  if (pFVar20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar20);
  }
  return false;
}

// ConditionalDebugDraw @ 14d2c7060

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
FAnimNode_DragonFeetSolver::ConditionalDebugDraw
          (FAnimNode_DragonFeetSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d2d4d80

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
FAnimNode_DragonFeetSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonFeetSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d2dab90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d2db657) */
/* WARNING: Type propagation algorithm not settling */
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
FAnimNode_DragonFeetSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonFeetSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  FAnimInstanceProxy *this_00;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  ForAnyElementType FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  FComponentSpacePoseContext *pFVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  char cVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  int iVar27;
  UWorld *pUVar28;
  FBoneContainer *pFVar29;
  USkeleton *pUVar30;
  UDragonIKFootStepsComponent *pUVar31;
  TTransform<double> *pTVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_DragonFeetSolver_Eval> FVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  FName FVar38;
  FScriptContainerElement *pFVar39;
  ulonglong uVar40;
  uint uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auStackY_3b8 [32];
  FName local_350;
  ForAnyElementType local_348;
  undefined8 local_340;
  ulonglong local_338;
  FName local_330;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_328;
  FComponentSpacePoseContext *local_318;
  FCompactPoseBoneIndex local_310;
  FCompactPoseBoneIndex local_30c;
  FColor_u_0 local_308 [2];
  FScriptContainerElement *local_300;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_2f8;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_2e8;
  FName local_2d8;
  FWeakObjectPtr local_2d0;
  FName local_2c8;
  UClass *local_2b8;
  FName local_2b0;
  uint local_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint local_298;
  uint uStack_294;
  double local_288;
  ForAnyElementType FStack_280;
  double local_278;
  ForAnyElementType FStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  bVar24 = true;
  local_318 = param_1;
  local_2d0 = (FWeakObjectPtr)param_2;
  if (this->show_trace_in_game == false) {
    pUVar28 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar28 == (UWorld *)0x0) {
      pUVar28 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    bVar24 = true;
    if ((pUVar28->WorldType).Value == '\x04') {
      bVar24 = false;
    }
  }
  if (this->enable_solver == false) {
    LineTraceControl_AnyThread(this,param_1,&this->BoneTransforms);
  }
  if (this->solver_time_reference <= __real_3e19999a) {
    return;
  }
  if (!bVar24) {
    return;
  }
  if (this->enable_solver == false) {
    return;
  }
  uVar36 = (uint)__xmm_80000000000000008000000000000000;
  uVar41 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  this_00 = (FAnimInstanceProxy *)param_1->_padding_;
  local_2a8 = *(uint *)(this_00->ActorTransform).Scale3D.XY.m128d_f64;
  uStack_2a4 = *(uint *)((longlong)(this_00->ActorTransform).Scale3D.XY.m128d_f64 + 4);
  uStack_2a0 = *(uint *)((this_00->ActorTransform).Scale3D.XY.m128d_f64 + 1);
  uStack_29c = *(uint *)((longlong)(this_00->ActorTransform).Scale3D.XY.m128d_f64 + 0xc);
  local_298 = *(uint *)(this_00->ActorTransform).Scale3D.ZW.m128d_f64;
  uStack_294 = *(uint *)((longlong)(this_00->ActorTransform).Scale3D.ZW.m128d_f64 + 4);
  if (SQRT((double)CONCAT44(uStack_29c ^ uVar41,uStack_2a0 ^ uVar36) *
           (double)CONCAT44(uStack_29c ^ uVar41,uStack_2a0 ^ uVar36) +
           (double)CONCAT44(uStack_2a4 ^ uVar41,local_2a8 ^ uVar36) *
           (double)CONCAT44(uStack_2a4 ^ uVar41,local_2a8 ^ uVar36) +
           (double)CONCAT44(uStack_294 ^ uVar41,local_298 ^ uVar36) *
           (double)CONCAT44(uStack_294 ^ uVar41,local_298 ^ uVar36)) <= 0.0) {
    return;
  }
  if (*(float *)((longlong)&this->_padding_ + 4) <= __real_3727c5ac) {
    return;
  }
  pcVar2 = *(code **)(this->_padding_ + 0xd0);
  pFVar29 = FAnimInstanceProxy::GetRequiredBones(this_00);
  pUVar30 = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)param_1->_padding_);
  cVar23 = (*pcVar2)(this,pUVar30,pFVar29);
  if (cVar23 == '\0') {
    return;
  }
  if ((this->spine_Feet_pair).ArrayNum < 1) {
    return;
  }
  bVar24 = FComponentSpacePoseContext::ContainsNaN(param_1);
  if (bVar24) {
    return;
  }
  if (this->use_footstep_listening != false) {
    pUVar28 = (UWorld *)this->owning_skel->_padding_;
    if (pUVar28 == (UWorld *)0x0) {
      pUVar28 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
    }
    if (((pUVar28->WorldType).Value != '\x04') &&
       (this->dragon_footsteps_component == (UDragonIKFootStepsComponent *)0x0)) {
      plVar3 = (longlong *)this->owning_skel->_padding_;
      pcVar2 = *(code **)(*plVar3 + 0x738);
      local_2b8 = Z_Construct_UClass_UDragonIKFootStepsComponent_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2b8);
      }
      pUVar31 = (UDragonIKFootStepsComponent *)(*pcVar2)(plVar3,&local_2b8);
      this->dragon_footsteps_component = pUVar31;
    }
  }
  LineTraceControl_AnyThread(this,param_1,&this->BoneTransforms);
  FVar38 = (FName)&param_1->Pose;
  local_330 = FVar38;
  GetAnimatedPoseInfo(this,(FCSPose<FCompactPose> *)FVar38);
  iVar27 = (this->spine_Feet_pair).ArrayNum;
  uVar44 = 0;
  uVar36 = 0;
  if (0 < iVar27) {
    local_338 = 0;
    uVar43 = uVar44;
    uVar42 = uVar44;
    if (iVar27 < 1) goto LAB_14d2db4cc;
    do {
      uVar43 = local_338;
      uVar36 = (uint)uVar42;
      if ((int)uVar36 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
        uVar41 = ~uVar36 >> 0x1f;
        if (((int)uVar36 < 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FBoneReference::GetCompactPoseIndex
                  ((FBoneReference *)
                   ((this->spine_Feet_pair).AllocatorInstance.Data + (longlong)(int)uVar36 * 0x170),
                   (FBoneContainer *)&local_310);
        pTVar32 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            ((FCSPose<FCompactPose> *)FVar38,local_310);
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
        local_228.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_228.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_228.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_228.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_228.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_228.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_228,&local_168,&this->owner_skel_w_transform);
        dVar6 = local_228.Rotation.XY.m128d_f64[0];
        dVar7 = local_228.Rotation.XY.m128d_f64[1];
        dVar8 = local_228.Rotation.ZW.m128d_f64[0];
        dVar10 = local_228.Rotation.ZW.m128d_f64[1];
        dVar12 = local_228.Translation.XY.m128d_f64[0];
        dVar13 = local_228.Translation.XY.m128d_f64[1];
        uVar35 = 0;
        if ((int)uVar36 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
          uVar35 = uVar41;
        }
        dVar14 = local_228.Translation.ZW.m128d_f64[0];
        dVar15 = local_228.Translation.ZW.m128d_f64[1];
        dVar16 = local_228.Scale3D.XY.m128d_f64[0];
        dVar19 = local_228.Scale3D.XY.m128d_f64[1];
        dVar20 = local_228.Scale3D.ZW.m128d_f64[0];
        dVar21 = local_228.Scale3D.ZW.m128d_f64[1];
        if ((uVar35 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar39 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
        *(double *)(pFVar39 + uVar44) = dVar6;
        *(double *)(pFVar39 + uVar44 + 8) = dVar7;
        *(double *)(pFVar39 + uVar44 + 0x10) = dVar8;
        *(double *)(pFVar39 + uVar44 + 0x10 + 8) = dVar10;
        *(double *)(pFVar39 + uVar44 + 0x20) = dVar12;
        *(double *)(pFVar39 + uVar44 + 0x20 + 8) = dVar13;
        *(double *)(pFVar39 + uVar44 + 0x30) = dVar14;
        *(double *)(pFVar39 + uVar44 + 0x30 + 8) = dVar15;
        *(double *)(pFVar39 + uVar44 + 0x40) = dVar16;
        *(double *)(pFVar39 + uVar44 + 0x40 + 8) = dVar19;
        *(double *)(pFVar39 + uVar44 + 0x50) = dVar20;
        *(double *)(pFVar39 + uVar44 + 0x50 + 8) = dVar21;
        uVar35 = 0;
        if ((int)uVar36 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
          uVar35 = uVar41;
        }
        if ((uVar35 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar37 = 0;
        uVar35 = 0;
        dVar13 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
        dVar14 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
        dVar15 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0];
        dVar16 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
        pFVar39 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar12 = dVar13 * local_168.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar16 * local_168.Rotation.XY.m128d_f64[1] +
                 dVar14 * local_168.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar15 * local_168.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar10 = dVar13 * local_168.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar16 * local_168.Rotation.ZW.m128d_f64[1] +
                 dVar14 * local_168.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar15 * local_168.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar11._8_4_ = SUB84(dVar12,0);
        auVar11._0_8_ =
             dVar13 * local_168.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar16 * local_168.Rotation.XY.m128d_f64[0] +
             dVar14 * local_168.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar15 * local_168.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(pFVar39 + uVar44) = auVar11;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = dVar13 * local_168.Rotation.XY.m128d_f64[1] * dVar6 +
                       dVar16 * local_168.Rotation.ZW.m128d_f64[0] +
                       dVar14 * local_168.Rotation.XY.m128d_f64[0] * dVar7 +
                       dVar15 * local_168.Rotation.ZW.m128d_f64[1] * dVar8;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(pFVar39 + uVar44 + 0x10) = auVar9;
        while( true ) {
          uVar26 = 0;
          if ((int)uVar36 < (this->spine_Feet_pair).ArrayNum) {
            uVar26 = uVar41;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar38 = local_330;
          if (*(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar43 + 0x28) <=
              (int)uVar35) break;
          uVar26 = 0;
          if ((int)uVar36 < (this->spine_Feet_pair).ArrayNum) {
            uVar26 = uVar41;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar35 < *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar43 + 0x28)
             ) {
            uVar26 = 0;
            if ((int)uVar36 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar41;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_300 = (this->spine_Feet_pair).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar35 < *(int *)(local_300 + local_338 + 0x28)) {
              uVar26 = ~uVar35 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FBoneReference::GetCompactPoseIndex
                      ((FBoneReference *)
                       ((longlong)(int)uVar35 * 0x10 + *(longlong *)(local_300 + local_338 + 0x20)),
                       (FBoneContainer *)&local_30c);
            pTVar32 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                ((FCSPose<FCompactPose> *)local_330,local_30c);
            local_108.Rotation.XY.m128d_f64[0] = (pTVar32->Rotation).XY.m128d_f64[0];
            local_108.Rotation.XY.m128d_f64[1] = (pTVar32->Rotation).XY.m128d_f64[1];
            local_108.Rotation.ZW.m128d_f64[0] = (pTVar32->Rotation).ZW.m128d_f64[0];
            local_108.Rotation.ZW.m128d_f64[1] = (pTVar32->Rotation).ZW.m128d_f64[1];
            local_108.Translation.XY.m128d_f64[0] = (pTVar32->Translation).XY.m128d_f64[0];
            local_108.Translation.XY.m128d_f64[1] = (pTVar32->Translation).XY.m128d_f64[1];
            local_108.Translation.ZW.m128d_f64[0] = (pTVar32->Translation).ZW.m128d_f64[0];
            local_108.Translation.ZW.m128d_f64[1] = (pTVar32->Translation).ZW.m128d_f64[1];
            local_108.Scale3D.XY.m128d_f64[0] = (pTVar32->Scale3D).XY.m128d_f64[0];
            local_108.Scale3D.XY.m128d_f64[1] = (pTVar32->Scale3D).XY.m128d_f64[1];
            local_108.Scale3D.ZW.m128d_f64[0] = (pTVar32->Scale3D).ZW.m128d_f64[0];
            local_108.Scale3D.ZW.m128d_f64[1] = (pTVar32->Scale3D).ZW.m128d_f64[1];
            uVar43 = local_338;
            if ((int)uVar36 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              if (((int)uVar36 < 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar43 = local_338;
              if ((int)uVar35 <
                  *(int *)((this->spine_AnimatedTransform_pairs).AllocatorInstance.Data +
                          uVar44 + 0xa0)) {
                local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                local_1c8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
                local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                local_1c8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
                local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_1c8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                local_1c8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
                local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_1c8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                local_1c8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
                UE::Math::TTransform<double>::Multiply
                          (&local_1c8,&local_108,&this->owner_skel_w_transform);
                dVar6 = local_1c8.Rotation.XY.m128d_f64[0];
                dVar7 = local_1c8.Rotation.XY.m128d_f64[1];
                dVar8 = local_1c8.Rotation.ZW.m128d_f64[0];
                dVar10 = local_1c8.Rotation.ZW.m128d_f64[1];
                dVar12 = local_1c8.Translation.XY.m128d_f64[0];
                dVar13 = local_1c8.Translation.XY.m128d_f64[1];
                uVar26 = 0;
                if ((int)uVar36 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
                  uVar26 = uVar41;
                }
                dVar14 = local_1c8.Translation.ZW.m128d_f64[0];
                dVar15 = local_1c8.Translation.ZW.m128d_f64[1];
                dVar16 = local_1c8.Scale3D.XY.m128d_f64[0];
                dVar19 = local_1c8.Scale3D.XY.m128d_f64[1];
                dVar20 = local_1c8.Scale3D.ZW.m128d_f64[0];
                dVar21 = local_1c8.Scale3D.ZW.m128d_f64[1];
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                local_300 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
                uVar26 = 0;
                if ((int)uVar35 < *(int *)(local_300 + uVar44 + 0xa0)) {
                  uVar26 = ~uVar35 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar4 = *(longlong *)(local_300 + uVar44 + 0x98);
                *(double *)(lVar4 + lVar37) = dVar6;
                ((double *)(lVar4 + lVar37))[1] = dVar7;
                pdVar1 = (double *)(lVar4 + 0x10 + lVar37);
                *pdVar1 = dVar8;
                pdVar1[1] = dVar10;
                pdVar1 = (double *)(lVar4 + 0x20 + lVar37);
                *pdVar1 = dVar12;
                pdVar1[1] = dVar13;
                pdVar1 = (double *)(lVar4 + 0x30 + lVar37);
                *pdVar1 = dVar14;
                pdVar1[1] = dVar15;
                pdVar1 = (double *)(lVar4 + 0x40 + lVar37);
                *pdVar1 = dVar16;
                pdVar1[1] = dVar19;
                pdVar1 = (double *)(lVar4 + 0x50 + lVar37);
                *pdVar1 = dVar20;
                pdVar1[1] = dVar21;
                uVar43 = local_338;
              }
            }
          }
          uVar35 = uVar35 + 1;
          lVar37 = lVar37 + 0x60;
        }
      }
LAB_14d2db4cc:
      local_338 = uVar43 + 0x170;
      uVar42 = (ulonglong)(uVar36 + 1);
      uVar44 = uVar44 + 0x160;
    } while ((int)(uVar36 + 1) < (this->spine_Feet_pair).ArrayNum);
  }
  uVar44 = 0;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  if (0 < (this->spine_hit_pairs).ArrayNum) {
    local_338 = 0;
    uVar43 = uVar44;
    uVar42 = uVar44;
    uVar45 = uVar44;
    while( true ) {
      uVar40 = local_338;
      local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_328.ArrayNum = 0;
      local_328.ArrayMax = 0;
      iVar27 = (int)uVar43;
      if ((local_348.Data <= &local_328) &&
         (&local_328 <
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
          (local_348.Data + (longlong)local_340._4_4_ * 0x10))) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar24) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar27 = (int)local_340;
      }
      if (iVar27 == local_340._4_4_) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_348,(int *)((longlong)&local_340 + 4));
      }
      local_340 = CONCAT44(local_340._4_4_,iVar27 + 1);
      lVar37 = (longlong)iVar27;
      *(undefined8 *)&local_348.Data[lVar37 * 0x10].field_0x0 = 0;
      *(FScriptContainerElement **)&local_348.Data[lVar37 * 0x10].field_0x0 =
           local_328.AllocatorInstance.Data;
      *(int *)(local_348.Data + lVar37 * 0x10 + 8) = local_328.ArrayNum;
      *(int *)(local_348.Data + lVar37 * 0x10 + 0xc) = local_328.ArrayMax;
      local_328.ArrayNum = 0;
      local_328.ArrayMax = 0;
      local_328.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar41 = 0;
      uVar36 = (uint)uVar44;
      if ((int)uVar36 <= (this->spine_Feet_pair).ArrayNum + -1) {
        uVar35 = ~uVar36 >> 0x1f;
        while( true ) {
          uVar26 = 0;
          if ((int)uVar36 < (this->spine_hit_pairs).ArrayNum) {
            uVar26 = uVar35;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar40 = local_338;
          if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + uVar45 + 0x580) <=
              (int)uVar41) break;
          uVar26 = 0;
          if ((int)uVar36 < (this->spine_hit_pairs).ArrayNum) {
            uVar26 = uVar35;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar41 <
              *(int *)((this->spine_hit_pairs).AllocatorInstance.Data + uVar45 + 0x580)) {
            uVar26 = 0;
            if ((int)uVar36 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar35;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((int)uVar41 <=
                *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar42 + 0x28) + -1) {
              uVar26 = 0;
              if ((int)uVar36 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar35;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar39 = (this->spine_Feet_pair).AllocatorInstance.Data;
              uVar26 = 0;
              if ((int)uVar41 < *(int *)(pFVar39 + uVar42 + 0x28)) {
                uVar26 = ~uVar41 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pTVar32 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  ((FCSPose<FCompactPose> *)local_330,
                                   *(FCompactPoseBoneIndex *)
                                    (*(longlong *)(pFVar39 + uVar42 + 0x20) + 0xc +
                                    (longlong)(int)uVar41 * 0x10));
              local_288 = (pTVar32->Rotation).XY.m128d_f64[0];
              FStack_280.Data = (FScriptContainerElement *)(pTVar32->Rotation).XY.m128d_f64[1];
              local_278 = (pTVar32->Rotation).ZW.m128d_f64[0];
              FStack_270.Data = (FScriptContainerElement *)(pTVar32->Rotation).ZW.m128d_f64[1];
              local_268 = (pTVar32->Translation).XY.m128d_f64[0];
              dStack_260 = (pTVar32->Translation).XY.m128d_f64[1];
              local_258 = (pTVar32->Translation).ZW.m128d_f64[0];
              dStack_250 = (pTVar32->Translation).ZW.m128d_f64[1];
              local_248 = (pTVar32->Scale3D).XY.m128d_f64[0];
              dStack_240 = (pTVar32->Scale3D).XY.m128d_f64[1];
              local_238 = (pTVar32->Scale3D).ZW.m128d_f64[0];
              dStack_230 = (pTVar32->Scale3D).ZW.m128d_f64[1];
              uVar26 = 0;
              if ((int)uVar36 < (int)local_340) {
                uVar26 = uVar35;
              }
              if ((uVar26 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar39 = local_348.Data + local_338;
                    /* WARNING: Load size is inaccurate */
              if (((*pFVar39 <= (FScriptContainerElement *)&local_288) &&
                  ((FScriptContainerElement *)&local_288 <
                   *pFVar39 + (longlong)*(int *)(pFVar39 + 0xc) * 0x60)) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar24)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar27 = *(int *)(pFVar39 + 8);
              if (iVar27 == *(int *)(pFVar39 + 0xc)) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1060,(ForAnyElementType *)pFVar39,(int *)(pFVar39 + 0xc));
              }
              *(int *)(pFVar39 + 8) = iVar27 + 1;
                    /* WARNING: Load size is inaccurate */
              FVar5.Data = *pFVar39;
              lVar37 = (longlong)iVar27 * 0x60;
              *(double *)(FVar5.Data + lVar37) = local_288;
              *(FScriptContainerElement **)(FVar5.Data + lVar37 + 8) = FStack_280.Data;
              *(double *)(FVar5.Data + lVar37 + 0x10) = local_278;
              *(FScriptContainerElement **)(FVar5.Data + lVar37 + 0x10 + 8) = FStack_270.Data;
              *(double *)(FVar5.Data + lVar37 + 0x20) = local_268;
              *(double *)(FVar5.Data + lVar37 + 0x20 + 8) = dStack_260;
              *(double *)(FVar5.Data + lVar37 + 0x30) = local_258;
              *(double *)(FVar5.Data + lVar37 + 0x30 + 8) = dStack_250;
              *(double *)(FVar5.Data + lVar37 + 0x40) = local_248;
              *(double *)(FVar5.Data + lVar37 + 0x40 + 8) = dStack_240;
              *(double *)(FVar5.Data + lVar37 + 0x50) = local_238;
              *(double *)(FVar5.Data + lVar37 + 0x50 + 8) = dStack_230;
            }
          }
          uVar41 = uVar41 + 1;
        }
      }
      local_338 = uVar40 + 0x10;
      uVar44 = (ulonglong)(uVar36 + 1);
      uVar45 = uVar45 + 0x5f8;
      uVar42 = uVar42 + 0x170;
      if ((this->spine_hit_pairs).ArrayNum <= (int)(uVar36 + 1)) break;
      uVar43 = local_340 & 0xffffffff;
    }
  }
  pFVar18 = local_318;
  FComponentSpacePoseLink::EvaluateComponentSpace(&this->OptionalRefPose,local_318);
  GetFeetHeights(this,pFVar18);
  FVar5.Data = local_348.Data;
  if (this->Use_OptionalRef_Feet_As_Ref != false) {
    iVar27 = (int)local_340;
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = (int)local_340;
    if ((int)local_340 == 0) {
      local_2f8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_340,0,&local_2f8.AllocatorInstance,(int)local_340,
                 &local_2f8.ArrayMax);
      ConstructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
                (local_2f8.AllocatorInstance.Data,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)FVar5.Data,
                 iVar27);
    }
    Calculate_Feet_Rotation(this,pFVar18,&local_2f8);
  }
  (**(code **)(this->_padding_ + 0xb8))(this,pFVar18);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::Reset
            (&this->AnimatedBoneTransforms,(this->AnimatedBoneTransforms).ArrayNum);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::Reset
            (&this->FinalBoneTransforms,(this->FinalBoneTransforms).ArrayNum);
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::Reset
            (&this->BoneTransforms,(this->BoneTransforms).ArrayNum);
  this->saved_pose = pFVar18;
  FComponentSpacePoseLink::EvaluateComponentSpace
            ((FComponentSpacePoseLink *)&this->_padding_,pFVar18);
  FVar5.Data = local_348.Data;
  if (this->Use_OptionalRef_Feet_As_Ref == false) {
    iVar27 = (int)local_340;
    local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.ArrayNum = (int)local_340;
    if ((int)local_340 == 0) {
      local_2e8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_340,0,&local_2e8.AllocatorInstance,(int)local_340,
                 &local_2e8.ArrayMax);
      ConstructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
                (local_2e8.AllocatorInstance.Data,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)FVar5.Data,
                 iVar27);
    }
    Calculate_Feet_Rotation(this,pFVar18,&local_2e8);
  }
  FVar34 = StatPtr_STAT_DragonFeetSolver_Eval;
  if (StatPtr_STAT_DragonFeetSolver_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_DragonFeetSolver_Eval>)0x0) {
    pFVar33 = ::FName::FName(&local_2b0,"STAT_DragonFeetSolver_Eval");
    FVar34 = (FThreadSafeStaticStat<FStat_STAT_DragonFeetSolver_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DragonFeetSolver_Eval,*pFVar33,
                        L"DragonFeetSolver Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  local_350 = *(FName *)FVar34;
  bVar24 = false;
  bVar17 = false;
  local_2c8.ComparisonIndex.Value = 0;
  local_2c8.Number = 0;
  bVar22 = false;
  bVar25 = false;
  if ((local_350.ComparisonIndex.Value.Value != 0) || (local_350.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_308[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_308[0]._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar24 = false;
      bVar17 = true;
      bVar22 = false;
      bVar25 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d8.ComparisonIndex.Value = local_350.ComparisonIndex.Value.Value;
        local_2d8.Number = local_350.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d8,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonFeetSolver.cpp"
                   ,0x6c1);
        bVar24 = true;
        bVar17 = true;
        bVar22 = true;
        bVar25 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_330 = local_350;
      FThreadStats::AddMessage(local_350,CycleScopeStart);
      bVar22 = true;
      goto LAB_14d2dbc7d;
    }
  }
  bVar17 = bVar25;
  bVar24 = bVar22;
  bVar22 = false;
  local_350 = local_2c8;
LAB_14d2dbc7d:
  if ((*(int *)((longlong)local_2d0 + 8) != 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonFeetSolver.cpp"
                          ,0x6c2,L""), bVar25)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar18 = local_318;
  if (0 < (this->spine_hit_pairs).ArrayNum) {
    uVar43 = 0;
    local_330.ComparisonIndex.Value = 0;
    local_330.Number = 0;
    this->atleast_one_hit = true;
    uVar44 = uVar43;
    do {
      uVar36 = 0;
      uVar41 = (uint)uVar44;
      FVar38 = local_330;
      if ((int)uVar41 <= (this->spine_Feet_pair).ArrayNum + -1) {
        uVar35 = ~uVar41 >> 0x1f;
        while( true ) {
          uVar26 = 0;
          if ((int)uVar41 < (this->spine_hit_pairs).ArrayNum) {
            uVar26 = uVar35;
          }
          if ((uVar26 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + (longlong)FVar38 + 0x580) <=
              (int)uVar36) break;
          uVar26 = 0;
          if ((int)uVar41 < (this->spine_Feet_pair).ArrayNum) {
            uVar26 = uVar35;
          }
          if ((uVar26 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar36 <=
              *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + uVar43 + 0x28) + -1) {
            uVar26 = 0;
            if ((int)uVar41 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar35;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar39 = (this->spine_Feet_pair).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar36 < *(int *)(pFVar39 + uVar43 + 0x28)) {
              uVar26 = ~uVar36 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            Leg_Full_Function(this,*(FName *)(*(longlong *)(pFVar39 + uVar43 + 0x20) +
                                             (longlong)(int)uVar36 * 0x10),uVar41,uVar36,pFVar18,
                              (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)local_2d0);
            FVar38 = local_330;
          }
          uVar36 = uVar36 + 1;
        }
      }
      local_330 = (FName)((longlong)FVar38 + 0x5f8);
      uVar44 = (ulonglong)(uVar41 + 1);
      uVar43 = uVar43 + 0x170;
    } while ((int)(uVar41 + 1) < (this->spine_hit_pairs).ArrayNum);
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(local_350,CycleScopeEnd);
  }
  DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_348.Data,
             (int)local_340);
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)local_348.Data !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_348.Data);
  }
  return;
}

// Evaluate_AnyThread @ 14d2dd230

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
FAnimNode_DragonFeetSolver::Evaluate_AnyThread
          (FAnimNode_DragonFeetSolver *this,FPoseContext *param_1)

{
  return;
}

// GetAnimatedPoseInfo @ 14d2ea910

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
FAnimNode_DragonFeetSolver::GetAnimatedPoseInfo
          (FAnimNode_DragonFeetSolver *this,FCSPose<FCompactPose> *param_1)

{
  double *pdVar1;
  code *pcVar2;
  bool bVar3;
  FCompactPoseBoneIndex FVar4;
  uint uVar5;
  TTransform<double> *pTVar6;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  FCompactPoseBoneIndex local_res8 [2];
  FCSPose<FCompactPose> *local_res10;
  longlong local_res18;
  longlong local_res20;
  FBoneReference local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  
  uVar13 = 0;
  iVar8 = (this->dragon_input_data).FeetBones.ArrayNum;
  local_res10 = param_1;
  if (0 < iVar8) {
    lVar9 = 0;
    lVar14 = 0;
    do {
      uVar11 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < iVar8) {
        uVar12 = uVar11;
      }
      if ((uVar12 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_d8.BoneName =
           *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar14 + 8);
      local_d8.bUseSkeletonIndex = 0;
      local_d8.BoneIndex = -1;
      local_d8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      if (this->automatic_leg_make == true) {
        uVar12 = 0;
        if ((int)uVar13 < (this->dragon_input_data).FeetBones.ArrayNum) {
          uVar12 = uVar11;
        }
        if ((uVar12 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_d8.BoneName =
             *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar14);
      }
      local_d8.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
      local_d8.bUseSkeletonIndex = 0;
      local_d8.BoneIndex = -1;
      FBoneReference::Initialize(&local_d8,this->SavedBoneContainer);
      if (((local_d8.bUseSkeletonIndex == 0) &&
          (local_d8.CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) &&
         ((int)uVar13 < (this->knee_Animated_transform_array).ArrayNum)) {
        if (this->automatic_leg_make == false) {
          pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                             (param_1,local_d8.CachedCompactPoseIndex);
          local_b8 = (pTVar6->Rotation).ZW.m128d_f64[0];
          uStack_b0 = (pTVar6->Rotation).ZW.m128d_f64[1];
          local_a8 = (pTVar6->Translation).XY.m128d_f64[0];
          dStack_a0 = (pTVar6->Translation).XY.m128d_f64[1];
          local_c8 = (pTVar6->Rotation).XY.m128d_f64[0];
          uStack_c0 = *(undefined4 *)((pTVar6->Rotation).XY.m128d_f64 + 1);
          uStack_bc = *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 0xc);
          local_98 = (pTVar6->Translation).ZW.m128d_f64[0];
          dStack_90 = (pTVar6->Translation).ZW.m128d_f64[1];
          local_78 = (pTVar6->Scale3D).ZW.m128d_f64[0];
          uStack_70 = (pTVar6->Scale3D).ZW.m128d_f64[1];
          local_88 = (pTVar6->Scale3D).XY.m128d_f64[0];
          dStack_80 = (pTVar6->Scale3D).XY.m128d_f64[1];
          uVar12 = 0;
          if ((int)uVar13 < (this->knee_Animated_transform_array).ArrayNum) {
            uVar12 = uVar11;
          }
          uVar17 = *(undefined4 *)(pTVar6->Rotation).XY.m128d_f64;
          uVar18 = *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 4);
          if (uVar12 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar17 = (undefined4)local_c8;
            uVar18 = local_c8._4_4_;
          }
          pFVar7 = (this->knee_Animated_transform_array).AllocatorInstance.Data;
          pFVar15 = pFVar7 + lVar9;
          *(undefined4 *)pFVar15 = uVar17;
          *(undefined4 *)(pFVar15 + 4) = uVar18;
          *(undefined4 *)(pFVar15 + 8) = uStack_c0;
          *(undefined4 *)(pFVar15 + 0xc) = uStack_bc;
          *(double *)(pFVar7 + lVar9 + 0x10) = local_b8;
          *(double *)(pFVar7 + lVar9 + 0x10 + 8) = uStack_b0;
          *(double *)(pFVar7 + lVar9 + 0x20) = local_a8;
          *(double *)(pFVar7 + lVar9 + 0x20 + 8) = dStack_a0;
          *(double *)(pFVar7 + lVar9 + 0x30) = local_98;
          *(double *)(pFVar7 + lVar9 + 0x30 + 8) = dStack_90;
          *(double *)(pFVar7 + lVar9 + 0x40) = local_88;
          *(double *)(pFVar7 + lVar9 + 0x40 + 8) = dStack_80;
          uVar17 = (undefined4)local_78;
          uVar18 = local_78._4_4_;
          uVar19 = (undefined4)uStack_70;
          uVar20 = uStack_70._4_4_;
        }
        else {
          FVar4 = FBoneContainer::GetParentBoneIndex(this->SavedBoneContainer,local_res8);
          pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                             (param_1,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar4));
          local_78 = (pTVar6->Rotation).ZW.m128d_f64[0];
          uStack_70 = (pTVar6->Rotation).ZW.m128d_f64[1];
          local_88 = (pTVar6->Translation).XY.m128d_f64[0];
          dStack_80 = (pTVar6->Translation).XY.m128d_f64[1];
          local_c8 = (pTVar6->Rotation).XY.m128d_f64[0];
          uStack_c0 = *(undefined4 *)((pTVar6->Rotation).XY.m128d_f64 + 1);
          uStack_bc = *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 0xc);
          local_98 = (pTVar6->Translation).ZW.m128d_f64[0];
          dStack_90 = (pTVar6->Translation).ZW.m128d_f64[1];
          local_b8 = (pTVar6->Scale3D).ZW.m128d_f64[0];
          uStack_b0 = (pTVar6->Scale3D).ZW.m128d_f64[1];
          local_a8 = (pTVar6->Scale3D).XY.m128d_f64[0];
          dStack_a0 = (pTVar6->Scale3D).XY.m128d_f64[1];
          uVar12 = 0;
          if ((int)uVar13 < (this->knee_Animated_transform_array).ArrayNum) {
            uVar12 = uVar11;
          }
          uVar17 = *(undefined4 *)(pTVar6->Rotation).XY.m128d_f64;
          uVar18 = *(undefined4 *)((longlong)(pTVar6->Rotation).XY.m128d_f64 + 4);
          if (uVar12 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar17 = (undefined4)local_c8;
            uVar18 = local_c8._4_4_;
          }
          pFVar7 = (this->knee_Animated_transform_array).AllocatorInstance.Data;
          pFVar15 = pFVar7 + lVar9;
          *(undefined4 *)pFVar15 = uVar17;
          *(undefined4 *)(pFVar15 + 4) = uVar18;
          *(undefined4 *)(pFVar15 + 8) = uStack_c0;
          *(undefined4 *)(pFVar15 + 0xc) = uStack_bc;
          *(double *)(pFVar7 + lVar9 + 0x10) = local_78;
          *(double *)(pFVar7 + lVar9 + 0x10 + 8) = uStack_70;
          *(double *)(pFVar7 + lVar9 + 0x20) = local_88;
          *(double *)(pFVar7 + lVar9 + 0x20 + 8) = dStack_80;
          *(double *)(pFVar7 + lVar9 + 0x30) = local_98;
          *(double *)(pFVar7 + lVar9 + 0x30 + 8) = dStack_90;
          *(double *)(pFVar7 + lVar9 + 0x40) = local_a8;
          *(double *)(pFVar7 + lVar9 + 0x40 + 8) = dStack_a0;
          uVar17 = (undefined4)local_b8;
          uVar18 = local_b8._4_4_;
          uVar19 = (undefined4)uStack_b0;
          uVar20 = uStack_b0._4_4_;
        }
        pFVar7 = pFVar7 + lVar9 + 0x50;
        *(undefined4 *)pFVar7 = uVar17;
        *(undefined4 *)(pFVar7 + 4) = uVar18;
        *(undefined4 *)(pFVar7 + 8) = uVar19;
        *(undefined4 *)(pFVar7 + 0xc) = uVar20;
      }
      iVar8 = (this->dragon_input_data).FeetBones.ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0xd0;
      lVar9 = lVar9 + 0x60;
    } while ((int)uVar13 < iVar8);
  }
  uVar13 = 0;
  if (0 < (this->spine_hit_pairs).ArrayNum) {
    lVar9 = 0;
    local_res18 = 0;
    local_res20 = 0;
    local_c8 = 0.0;
    do {
      iVar8 = (this->spine_Feet_pair).ArrayNum;
      lVar14 = (longlong)local_c8;
      lVar16 = local_res20;
      if ((((int)uVar13 <= iVar8 + -1) &&
          ((int)uVar13 < (this->feet_Animated_transform_array).ArrayNum)) && ((int)uVar13 < iVar8))
      {
        uVar12 = 0;
        uVar11 = ~uVar13 >> 0x1f;
        lVar10 = 0;
        while( true ) {
          uVar5 = 0;
          if ((int)uVar13 < (this->spine_hit_pairs).ArrayNum) {
            uVar5 = uVar11;
          }
          local_b8 = (double)lVar10;
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + lVar14 + 0x580) <=
              (int)uVar12) break;
          uVar5 = 0;
          if ((int)uVar13 < (this->spine_Feet_pair).ArrayNum) {
            uVar5 = uVar11;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((int)uVar12 <=
              *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + lVar9 + 0x28) + -1) {
            uVar5 = 0;
            if ((int)uVar13 < (this->feet_Animated_transform_array).ArrayNum) {
              uVar5 = uVar11;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((int)uVar12 <
                *(int *)((this->feet_Animated_transform_array).AllocatorInstance.Data + lVar16 + 8))
            {
              uVar5 = 0;
              if ((int)uVar13 < (this->spine_Feet_pair).ArrayNum) {
                uVar5 = uVar11;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((int)uVar12 <
                  *(int *)((this->spine_Feet_pair).AllocatorInstance.Data + lVar9 + 0x28)) {
                uVar5 = 0;
                if ((int)uVar13 < (this->spine_Feet_pair).ArrayNum) {
                  uVar5 = uVar11;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar15 = (this->spine_Feet_pair).AllocatorInstance.Data;
                uVar5 = 0;
                if ((int)uVar12 < *(int *)(pFVar15 + lVar9 + 0x28)) {
                  uVar5 = ~uVar12 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                   (local_res10,
                                    *(FCompactPoseBoneIndex *)
                                     (*(longlong *)(pFVar15 + lVar9 + 0x20) + 0xc +
                                     (longlong)(int)uVar12 * 0x10));
                local_78 = (pTVar6->Rotation).XY.m128d_f64[0];
                uStack_70 = (pTVar6->Rotation).XY.m128d_f64[1];
                local_88 = (pTVar6->Rotation).ZW.m128d_f64[0];
                dStack_80 = (pTVar6->Rotation).ZW.m128d_f64[1];
                local_98 = (pTVar6->Translation).XY.m128d_f64[0];
                dStack_90 = (pTVar6->Translation).XY.m128d_f64[1];
                local_a8 = (pTVar6->Translation).ZW.m128d_f64[0];
                dStack_a0 = (pTVar6->Translation).ZW.m128d_f64[1];
                local_68 = (pTVar6->Scale3D).XY.m128d_f64[0];
                dStack_60 = (pTVar6->Scale3D).XY.m128d_f64[1];
                local_58 = (pTVar6->Scale3D).ZW.m128d_f64[0];
                dStack_50 = (pTVar6->Scale3D).ZW.m128d_f64[1];
                uVar5 = 0;
                if ((int)uVar13 < (this->feet_Animated_transform_array).ArrayNum) {
                  uVar5 = uVar11;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar15 = (this->feet_Animated_transform_array).AllocatorInstance.Data + local_res20
                ;
                uVar5 = 0;
                if ((int)uVar12 < *(int *)(pFVar15 + 8)) {
                  uVar5 = ~uVar12 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar14 = *(longlong *)pFVar15;
                *(double *)(lVar14 + (longlong)local_b8) = local_78;
                ((double *)(lVar14 + (longlong)local_b8))[1] = uStack_70;
                pdVar1 = (double *)(lVar14 + 0x10 + (longlong)local_b8);
                *pdVar1 = local_88;
                pdVar1[1] = dStack_80;
                pdVar1 = (double *)(lVar14 + 0x20 + (longlong)local_b8);
                *pdVar1 = local_98;
                pdVar1[1] = dStack_90;
                pdVar1 = (double *)(lVar14 + 0x30 + (longlong)local_b8);
                *pdVar1 = local_a8;
                pdVar1[1] = dStack_a0;
                pdVar1 = (double *)(lVar14 + 0x40 + (longlong)local_b8);
                *pdVar1 = local_68;
                pdVar1[1] = dStack_60;
                pdVar1 = (double *)(lVar14 + 0x50 + (longlong)local_b8);
                *pdVar1 = local_58;
                pdVar1[1] = dStack_50;
                lVar10 = (longlong)local_b8;
                lVar14 = (longlong)local_c8;
                lVar16 = local_res20;
              }
            }
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 0x60;
        }
      }
      local_res18 = local_res18 + 1;
      local_c8 = (double)(lVar14 + 0x5f8);
      local_res20 = lVar16 + 0x10;
      uVar13 = uVar13 + 1;
      lVar9 = lVar9 + 0x170;
    } while ((int)uVar13 < (this->spine_hit_pairs).ArrayNum);
  }
  return;
}

// GetChildBone @ 14d2f1150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall
FAnimNode_DragonFeetSolver::GetChildBone
          (FAnimNode_DragonFeetSolver *this,FName param_1,USkeletalMeshComponent *param_2)

{
  USkinnedMeshComponent *in_R9;
  
  USkinnedMeshComponent::GetBoneIndex(in_R9,(FName)param_2);
  USkinnedMeshComponent::GetBoneName(in_R9,param_1.ComparisonIndex.Value.Value);
  return param_1;
}

// GetCurrentLocation @ 14d2f1210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FAnimNode_DragonFeetSolver::GetCurrentLocation
          (FAnimNode_DragonFeetSolver *this,TVector<double> *__return_storage_ptr__,
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

// GetFeetHeights @ 14d2f1290

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
FAnimNode_DragonFeetSolver::GetFeetHeights
          (FAnimNode_DragonFeetSolver *this,FComponentSpacePoseContext *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  FCompactPoseBoneIndex FVar19;
  undefined4 extraout_EAX;
  int iVar20;
  undefined4 extraout_var;
  TTransform<double> *pTVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
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
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  double dVar61;
  undefined4 uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  undefined4 uVar67;
  undefined1 auStackY_3a8 [32];
  float local_348;
  float local_344;
  longlong local_340;
  USkeletalMeshComponent *local_338;
  USkeletalMeshComponent *local_330;
  int *local_328;
  FComponentSpacePoseContext *local_320;
  longlong local_318;
  undefined1 local_310 [8];
  TQuat<double> local_308;
  double local_2e8;
  FWeakObjectPtr FStack_2e0;
  uint local_2d8;
  uint uStack_2d4;
  FWeakObjectPtr local_2d0;
  FReferenceSkeleton *pFStack_2c8;
  ForAnyElementType local_2c0;
  longlong local_2b8;
  ForAnyElementType FStack_2b0;
  double local_2a8;
  ForAnyElementType local_2a0;
  longlong lStack_298;
  ForAnyElementType local_290;
  double local_288;
  FWeakObjectPtr FStack_280;
  double local_278;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  undefined1 auVar59 [16];
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  if (this->owning_skel != (USkeletalMeshComponent *)0x0) {
    pTVar3 = &this->FeetRootHeights;
    piVar1 = &(this->FeetRootHeights).ArrayNum;
    local_328 = piVar1;
    local_320 = param_1;
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>
              ((TArray<float,TSizedDefaultAllocator<32>_> *)(pTVar3->AllocatorInstance).Data,
               (this->FeetRootHeights).ArrayNum);
    piVar2 = &(this->FeetRootHeights).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
    iVar20 = (this->spine_Feet_pair).ArrayNum;
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar20,&pTVar3->AllocatorInstance,piVar1,piVar2);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar17 * 0x10,0,(longlong)iVar20 << 4);
    uVar29 = 0;
    if (0 < (this->spine_Feet_pair).ArrayNum) {
      local_318 = 0;
      do {
        uVar25 = 0;
        lVar28 = (longlong)(int)uVar29;
        local_340 = 0;
        uVar23 = ~uVar29 >> 0x1f;
        while( true ) {
          lVar26 = local_318;
          uVar18 = 0;
          if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
            uVar18 = uVar23;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)((this->spine_Feet_pair).AllocatorInstance.Data + lVar26 + 0x28) <=
              (int)uVar25) break;
          uVar18 = 0;
          if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
            uVar18 = uVar23;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar24 = (this->spine_Feet_pair).AllocatorInstance.Data;
          lVar26 = lVar28 * 0x170;
          uVar27 = ~uVar25 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar25 < *(int *)(pFVar24 + lVar26 + 0x28)) {
            uVar18 = uVar27;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar19 = FBoneReference::GetCompactPoseIndex
                             ((FBoneReference *)
                              ((longlong)(int)uVar25 * 0x10 + *(longlong *)(pFVar24 + lVar26 + 0x20)
                              ),(FBoneContainer *)local_310);
          pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (&local_320->Pose,
                               *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar19));
          local_268.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
          local_268.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
          local_268.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
          local_268.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
          local_268.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
          local_268.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
          local_268.Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
          local_268.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
          local_268.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
          local_268.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
          local_268.Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
          local_268.Scale3D.ZW.m128d_f64[1] = (pTVar21->Scale3D).ZW.m128d_f64[1];
          fVar55 = 0.0;
          if (uVar29 == 0) {
            if (uVar25 == 0) {
              fVar55 = this->Foot_01_Height_Offset;
            }
            else {
              fVar55 = 0.0;
              if (uVar25 == 1) {
                fVar55 = this->Foot_02_Height_Offset;
              }
            }
          }
          if (uVar29 == (this->spine_Feet_pair).ArrayNum - 1U) {
            if (uVar25 == 0) {
              fVar55 = this->Foot_03_Height_Offset;
            }
            else if (uVar25 == 1) {
              fVar55 = this->Foot_04_Height_Offset;
            }
          }
          UE::Math::TQuat<double>::FindBetweenNormals
                    (&local_308,&this->character_direction_vector_CS,
                     &UE::Math::TVector<double>::UpVector);
          pTVar21 = &local_208;
          local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_208.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_208.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_208.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_208.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(pTVar21,&local_268,&this->owner_skel_w_transform);
          uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          dVar13 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0];
          dVar6 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1];
          auVar35 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
          dVar60 = auVar35._0_8_;
          auVar41 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.XY.m128d_f64;
          local_268.Rotation.XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
          local_268.Rotation.XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
          local_268.Translation.XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
          local_268.Translation.XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
          local_268.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
          local_268.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
          dVar61 = auVar35._8_8_;
          local_268.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
          local_268.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
          auVar54._8_4_ = auVar35._8_4_;
          auVar54._0_8_ = dVar61;
          auVar54._12_4_ = auVar35._12_4_;
          local_268.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
          local_268.Translation.ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
          local_268.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
          local_268.Scale3D.ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
          auVar33._8_4_ = auVar35._0_4_;
          auVar33._0_8_ = dVar60;
          auVar33._12_4_ = auVar35._4_4_;
          auVar35 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Scale3D.ZW.m128d_f64;
          auVar44._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar35._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar35._0_4_);
          auVar44._8_4_ = _UNK_15061cc88 & auVar35._8_4_;
          auVar44._12_4_ = _UNK_15061cc8c & auVar35._12_4_;
          auVar40._8_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar44._8_8_);
          auVar40._0_8_ =
               -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar44._0_8_);
          uVar63 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar41._0_4_;
          uVar64 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar41._4_4_;
          uVar65 = _UNK_15061cc88 & auVar41._8_4_;
          uVar66 = _UNK_15061cc8c & auVar41._12_4_;
          uVar22 = movmskpd((int)pTVar21,auVar40);
          auVar34._8_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                (double)CONCAT44(uVar66,uVar65));
          auVar34._0_8_ =
               -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                (double)CONCAT44(uVar64,uVar63));
          iVar20 = movmskpd(extraout_EAX,auVar34);
          if ((uVar22 & 0x3fffffff) == 0 && iVar20 == 0) {
            local_1a8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1a8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1a8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_1a8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1a8.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_1a8.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          }
          else {
            dVar7 = (dVar13 * local_308.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     local_308.Z * dVar61 +
                     dVar6 * local_308.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar60 * local_308.W *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar8 = (dVar13 * local_308.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     local_308.W * dVar61 +
                     dVar6 * local_308.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar60 * local_308.Z *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]) *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            uVar51 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar60 = (dVar13 * local_308.W *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                      dVar61 * local_308.X +
                      local_308.Z * dVar6 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar60 * local_308.Y *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar61 = (dVar13 * local_308.Z *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      auVar54._8_8_ * local_308.Y +
                      local_308.W * dVar6 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar33._8_8_ * local_308.X *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar52 = SUB84(dVar61,0);
            uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
            local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar52;
            local_1a8.Rotation.XY.m128d_f64[0] = dVar60;
            local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar62;
            local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
            local_1a8.Rotation.ZW.m128d_f64[0] = dVar7;
            local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar51;
            lVar30 = -(ulonglong)
                      ((double)CONCAT44(auVar35._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_
                                        ,auVar35._0_4_ &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
            auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41)
            ;
            lVar31 = -(ulonglong)
                      ((double)CONCAT44(uVar64,uVar63) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
            lVar32 = -(ulonglong)
                      ((double)CONCAT44(uVar66,uVar65) <=
                      (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
            local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = ~(uint)lVar31 & auVar41._0_4_;
            local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ =
                 ~(uint)((ulonglong)lVar31 >> 0x20) & auVar41._4_4_;
            local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar32 & auVar41._8_4_;
            local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 ~(uint)((ulonglong)lVar32 >> 0x20) & auVar41._12_4_;
            auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
            auVar41._0_8_ = auVar35._0_8_;
            auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
            auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41)
            ;
            dVar9 = (this->owner_skel_w_transform).Translation.XY.m128d_f64[0] *
                    (double)CONCAT44(local_1a8.Scale3D.XY.m128d_f64[0]._4_4_,
                                     local_1a8.Scale3D.XY.m128d_f64[0]._0_4_);
            dVar10 = (this->owner_skel_w_transform).Translation.XY.m128d_f64[1] *
                     (double)CONCAT44(local_1a8.Scale3D.XY.m128d_f64[1]._4_4_,
                                      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_);
            uVar67 = (undefined4)((ulonglong)dVar10 >> 0x20);
            auVar45._8_4_ = uVar52;
            auVar45._0_8_ = dVar60;
            auVar45._12_4_ = uVar62;
            local_1a8.Scale3D.ZW.m128d_f64[0] =
                 (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar35._4_4_,
                                  ~(uint)lVar30 & auVar35._0_4_);
            dVar48 = auVar45._8_8_;
            auVar36._8_4_ = SUB84(dVar7,0);
            auVar36._0_8_ = dVar48;
            auVar36._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            auVar56._8_4_ = SUB84(dVar10,0);
            auVar56._0_8_ = dVar9;
            auVar56._12_4_ = uVar67;
            dVar12 = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0] *
                     local_1a8.Scale3D.ZW.m128d_f64[0];
            dVar13 = (this->owner_skel_w_transform).Translation.ZW.m128d_f64[1] * 0.0;
            auVar53._8_4_ = uVar52;
            auVar53._0_8_ = dVar60;
            auVar53._12_4_ = uVar62;
            auVar42._8_4_ = SUB84(dVar10,0);
            auVar42._0_8_ = dVar9;
            auVar42._12_4_ = uVar67;
            auVar11._8_4_ = SUB84(dVar13,0);
            auVar11._0_8_ = dVar12;
            auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            auVar41 = blendpd(auVar42,auVar11,2);
            auVar57._0_8_ = auVar56._8_8_ * dVar60 - dVar48 * dVar9;
            auVar57._8_8_ = dVar12 * dVar61 - auVar36._8_8_ * dVar10;
            auVar35._8_4_ = SUB84(dVar8,0);
            auVar35._0_8_ = dVar7;
            auVar35._12_4_ = uVar51;
            auVar54 = blendpd(auVar53,auVar35,2);
            auVar43._0_8_ = auVar41._0_8_ * dVar7 - auVar54._0_8_ * dVar12;
            auVar43._8_8_ = auVar41._8_8_ * dVar8 - auVar54._8_8_ * dVar13;
            dVar13 = auVar57._8_8_ + auVar57._8_8_;
            dVar6 = auVar43._0_8_ + auVar43._0_8_;
            uVar51 = SUB84(dVar6,0);
            uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
            auVar35 = blendpd(auVar57,auVar43,2);
            auVar58._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar58._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            auVar49._8_4_ = uVar51;
            auVar49._0_8_ = dVar13;
            auVar49._12_4_ = uVar52;
            auVar37._8_4_ = uVar51;
            auVar37._0_8_ = dVar13;
            auVar37._12_4_ = uVar52;
            auVar46._8_4_ = uVar51;
            auVar46._0_8_ = dVar13;
            auVar46._12_4_ = uVar52;
            auVar35 = blendpd(auVar46,auVar58,2);
            auVar50._0_8_ = auVar49._8_8_ * dVar60 - dVar13 * dVar48;
            auVar50._8_8_ = auVar58._0_8_ * dVar61 - auVar37._8_8_ * dVar7;
            auVar38._8_4_ = SUB84(auVar58._8_8_,0);
            auVar38._0_8_ = auVar58._0_8_;
            auVar38._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
            auVar47._0_8_ = auVar35._0_8_ * dVar7 - auVar58._0_8_ * auVar54._0_8_;
            auVar47._8_8_ = auVar35._8_8_ * dVar8 - auVar38._8_8_ * auVar54._8_8_;
            auVar39._8_4_ = SUB84(auVar50._8_8_,0);
            auVar39._0_8_ = auVar50._0_8_;
            auVar39._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
            auVar35 = blendpd(auVar50,auVar47,2);
            local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
            local_1a8.Translation.ZW.m128d_f64[0] =
                 0.0 - (auVar58._0_8_ * dVar8 + dVar12 + auVar35._0_8_);
            local_1a8.Translation.XY.m128d_f64[1] = 0.0 - (dVar6 * dVar8 + dVar10 + auVar47._0_8_);
            local_1a8.Translation.XY.m128d_f64[0] = 0.0 - (dVar13 * dVar8 + dVar9 + auVar39._8_8_);
            local_1a8.Scale3D.ZW.m128d_f64[1] = 0.0;
          }
          local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_148.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_148.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_148.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_148.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_148,&local_268,&local_1a8);
          local_268.Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
          local_268.Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
          uVar22 = 0;
          if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
            uVar22 = uVar23;
          }
          local_268.Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
          local_268.Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
          local_268.Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
          local_268.Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
          local_268.Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
          local_268.Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
          local_268.Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
          local_268.Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
          local_268.Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
          local_268.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar24 = (this->spine_Feet_pair).AllocatorInstance.Data;
          uVar22 = 0;
          if ((int)uVar25 < *(int *)(pFVar24 + lVar26 + 0x138)) {
            uVar22 = uVar27;
          }
          if ((uVar22 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar22 = *(uint *)(local_340 + *(longlong *)(pFVar24 + lVar26 + 0x130));
          uVar63 = 0;
          if ((int)uVar22 < (this->dragon_input_data).FeetBones.ArrayNum) {
            uVar63 = ~uVar22 >> 0x1f;
          }
          if ((uVar63 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((this->dragon_input_data).FeetBones.AllocatorInstance.Data
              [(longlong)(int)uVar22 * 0xd0 + 0x84] == (FScriptContainerElement)0x0) {
            uVar22 = 0;
            if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
              uVar22 = uVar23;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar24 = (this->spine_Feet_pair).AllocatorInstance.Data;
            uVar22 = 0;
            if ((int)uVar25 < *(int *)(pFVar24 + lVar26 + 0x138)) {
              uVar22 = uVar27;
            }
            if ((uVar22 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar30 = local_340;
            if (*(int *)(local_340 + *(longlong *)(pFVar24 + lVar26 + 0x130)) <
                (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar22 = 0;
              if ((int)uVar29 < *local_328) {
                uVar22 = uVar23;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_330 = this->owning_skel;
              pFVar24 = (this->FeetRootHeights).AllocatorInstance.Data + lVar28 * 0x10;
              uVar22 = 0;
              if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
                uVar22 = uVar23;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar4 = (this->spine_Feet_pair).AllocatorInstance.Data;
              local_338 = this->owning_skel;
              uVar22 = 0;
              if ((int)uVar25 < *(int *)(pFVar4 + lVar26 + 0x138)) {
                uVar22 = uVar27;
              }
              if ((uVar22 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              lVar30 = local_340;
              uVar22 = *(uint *)(local_340 + *(longlong *)(pFVar4 + lVar26 + 0x130));
              uVar63 = 0;
              if ((int)uVar22 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar63 = ~uVar22 >> 0x1f;
              }
              if ((uVar63 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_2d8 = local_268.Translation.ZW.m128d_f64[0]._0_4_;
              uStack_2d4 = local_268.Translation.ZW.m128d_f64[0]._4_4_;
              local_2b8 = local_338->_padding_;
              FStack_2b0.Data = (FScriptContainerElement *)local_338->_padding_;
              local_2a8 = (double)local_338->_padding_;
              local_2c0.Data = (FScriptContainerElement *)local_330->_padding_;
              local_2e8 = local_268.Translation.XY.m128d_f64[0];
              FStack_2e0 = (FWeakObjectPtr)local_268.Translation.XY.m128d_f64[1];
              local_2d0 = (FWeakObjectPtr)local_330->_padding_;
              pFStack_2c8 = (FReferenceSkeleton *)local_330->_padding_;
              local_348 = (float)((double)CONCAT44(local_268.Translation.ZW.m128d_f64[0]._4_4_ &
                                                   uVar15,local_268.Translation.ZW.m128d_f64[0].
                                                          _0_4_ & uVar18) * (double)local_2c0.Data +
                                 (double)(fVar55 + *(float *)((this->dragon_input_data).FeetBones.
                                                              AllocatorInstance.Data +
                                                             (longlong)(int)uVar22 * 0xd0 + 0x88)) *
                                 local_2a8);
              if (((*(float **)&pFVar24->field_0x0 <= &local_348) &&
                  (&local_348 < *(float **)&pFVar24->field_0x0 + *(int *)(pFVar24 + 0xc))) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar16)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar20 = *(int *)&pFVar24[8].field_0x0;
              if (iVar20 == *(int *)(pFVar24 + 0xc)) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
              }
              *(int *)&pFVar24[8].field_0x0 = iVar20 + 1;
              *(float *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar20 * 4) = local_348;
            }
          }
          else {
            uVar18 = 0;
            if ((int)uVar29 < *local_328) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar24 = (this->FeetRootHeights).AllocatorInstance.Data + lVar28 * 0x10;
            uVar18 = 0;
            if ((int)uVar29 < (this->spine_Feet_pair).ArrayNum) {
              uVar18 = uVar23;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_338 = (USkeletalMeshComponent *)(this->spine_Feet_pair).AllocatorInstance.Data;
            local_330 = this->owning_skel;
            uVar18 = 0;
            if ((int)uVar25 < (int)(&local_338->_padding_)[lVar28 * 0x2e]) {
              uVar18 = uVar27;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar30 = local_340;
            local_2a0.Data = (FScriptContainerElement *)local_330->_padding_;
            lStack_298 = local_330->_padding_;
            local_290.Data = (FScriptContainerElement *)local_330->_padding_;
            local_344 = (float)((double)(fVar55 + *(float *)(local_340 +
                                                            (&local_338->_padding_)[lVar28 * 0x2e]))
                               * (double)local_290.Data);
            if (((*(float **)&pFVar24->field_0x0 <= &local_344) &&
                (&local_344 < *(float **)&pFVar24->field_0x0 + *(int *)(pFVar24 + 0xc))) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar20 = *(int *)&pFVar24[8].field_0x0;
            if (iVar20 == *(int *)(pFVar24 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar24,(int *)(pFVar24 + 0xc));
            }
            *(int *)&pFVar24[8].field_0x0 = iVar20 + 1;
            *(float *)(*(longlong *)&pFVar24->field_0x0 + (longlong)iVar20 * 4) = local_344;
          }
          if (this->Feet_Lift_Warping != false) {
            local_288 = local_268.Translation.XY.m128d_f64[0];
            FStack_280 = (FWeakObjectPtr)local_268.Translation.XY.m128d_f64[1];
            local_278 = local_268.Translation.ZW.m128d_f64[0];
            uVar18 = 0;
            if ((int)uVar29 < *local_328) {
              uVar18 = uVar23;
            }
            fVar55 = (float)((local_268.Translation.ZW.m128d_f64[0] -
                             (double)this->feet_vertical_size) *
                            (double)this->Feet_Lift_Warp_Multiplier);
            auVar59 = ZEXT416((uint)fVar55);
            if (fVar55 <= 0.0) {
              auVar59 = ZEXT816(0) << 0x20;
            }
            if (this->Feet_Lift_Limit <= auVar59._0_4_) {
              auVar59._0_4_ = this->Feet_Lift_Limit;
            }
            if (auVar59._0_4_ <= 0.0) {
              auVar14._12_4_ = 0;
              auVar14._0_12_ = auVar59._4_12_;
              auVar59 = auVar14 << 0x20;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_338 = (USkeletalMeshComponent *)(this->FeetRootHeights).AllocatorInstance.Data;
            local_330 = (USkeletalMeshComponent *)(lVar28 * 0x10);
            uVar18 = 0;
            if ((int)uVar25 < *(int *)((longlong)&local_330->_padding_ + (longlong)local_338)) {
              uVar18 = uVar27;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *(longlong *)
                      ((longlong)&local_338->_padding_ + (longlong)&local_330->_padding_);
            *(float *)(lVar30 + lVar26) = auVar59._0_4_ + *(float *)(lVar30 + lVar26);
          }
          uVar25 = uVar25 + 1;
          local_340 = lVar30 + 4;
        }
        local_318 = lVar26 + 0x170;
        uVar29 = uVar29 + 1;
      } while ((int)uVar29 < (this->spine_Feet_pair).ArrayNum);
    }
  }
  return;
}

// GetLODThreshold @ 14d2f22a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall FAnimNode_DragonFeetSolver::GetLODThreshold(FAnimNode_DragonFeetSolver *this)

{
  return (int)this->_padding_;
}

// GetResetedPoseInfo @ 14d2f22d0

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
FAnimNode_DragonFeetSolver::GetResetedPoseInfo
          (FAnimNode_DragonFeetSolver *this,FCSPose<FCompactPose> *param_1)

{
  return;
}

// InitializeBoneReferences @ 14d2f5e20

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
FAnimNode_DragonFeetSolver::InitializeBoneReferences
          (FAnimNode_DragonFeetSolver *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  double *pdVar4;
  undefined1 *puVar5;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar6;
  USkeletalMeshComponent *pUVar7;
  FName FVar8;
  FName FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  FName FVar21;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar23;
  ForAnyElementType FVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ForAnyElementType *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar33;
  longlong lVar34;
  uint uVar35;
  ulonglong uVar36;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar37;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  longlong local_res18;
  FScriptContainerElement local_1c8 [8];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0 [2];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180 [8];
  uint uStack_178;
  FCompactPoseBoneIndex FStack_174;
  longlong local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  FName local_118;
  FNameEntryId FStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> local_e8;
  FName local_d8;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> local_d0;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> local_b0;
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  TArray<FName,TSizedDefaultAllocator<32>_> local_70 [3];
  
  this->solve_should_fail = false;
  if (this->owning_skel != (USkeletalMeshComponent *)0x0) {
    FVar21 = USkinnedMeshComponent::GetBoneName
                       ((USkinnedMeshComponent *)this->owning_skel,(int)local_a0);
    this->PelvisBoneName = *(FName *)FVar21;
    FVar21 = USkinnedMeshComponent::GetBoneName
                       ((USkinnedMeshComponent *)this->owning_skel,(int)local_98);
    this->SpineBoneName = *(FName *)FVar21;
  }
  if (this->SpineBoneName != (FName)0x0) {
    (this->dragon_bone_data).Start_Spine.BoneName = this->SpineBoneName;
    (this->dragon_bone_data).Start_Spine.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar5 = &(this->dragon_bone_data).Start_Spine.field_0x8;
    (this->dragon_bone_data).Start_Spine.BoneIndex = -1;
    (this->dragon_bone_data).Start_Spine.bUseSkeletonIndex = 0;
    FBoneReference::Initialize(&(this->dragon_bone_data).Start_Spine,param_1);
    (this->dragon_bone_data).Pelvis.BoneName = this->PelvisBoneName;
    (this->dragon_bone_data).Pelvis.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
    puVar5 = &(this->dragon_bone_data).Pelvis.field_0x8;
    (this->dragon_bone_data).Pelvis.BoneIndex = -1;
    (this->dragon_bone_data).Pelvis.bUseSkeletonIndex = 0;
    FBoneReference::Initialize(&(this->dragon_bone_data).Pelvis,param_1);
    local_e8.AllocatorInstance.Data =
         *(FScriptContainerElement **)&(this->dragon_bone_data).Pelvis.BoneName;
    local_e8.ArrayNum = *(int *)&(this->dragon_bone_data).Pelvis.field_0x8;
    local_e8.ArrayMax = *(int *)&(this->dragon_bone_data).Pelvis.CachedCompactPoseIndex;
    bVar15 = USkinnedMeshComponent::BoneIsChildOf
                       ((USkinnedMeshComponent *)this->owning_skel,
                        (this->dragon_bone_data).Start_Spine.BoneName,
                        (FName)local_e8.AllocatorInstance.Data);
    if (!bVar15) {
      this->solve_should_fail = true;
    }
    if (this->solve_should_fail == false) {
      uVar28 = 0;
      this->SavedBoneContainer = param_1;
      piVar1 = &(this->feet_bone_array).ArrayMax;
      (this->feet_bone_array).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&(this->feet_bone_array).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->feet_transform_array).ArrayMax;
      (this->feet_transform_array).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,0,&(this->feet_transform_array).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->feet_hit_array).ArrayMax;
      (this->feet_hit_array).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x100,8,0,&(this->feet_hit_array).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->EffectorLocationList).ArrayMax;
      (this->EffectorLocationList).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&(this->EffectorLocationList).AllocatorInstance,0,piVar1);
      }
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
                (&this->FeetRootHeights,0);
      TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::Empty(&this->FeetTipLocations,0);
      TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
                (&this->FeetStepBools,0);
      TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::Empty(&this->Feet_Previous_Position,0);
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
                (&this->FeetWidthSpacing,0);
      DestructItems<TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
                 (this->FeetFingerHeights).AllocatorInstance.Data,(this->FeetFingerHeights).ArrayNum
                );
      piVar1 = &(this->FeetFingerHeights).ArrayMax;
      (this->FeetFingerHeights).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->FeetFingerHeights).AllocatorInstance,0,piVar1);
      }
      piVar1 = &(this->Total_spine_bones).ArrayMax;
      (this->Total_spine_bones).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->Total_spine_bones).AllocatorInstance,0,piVar1);
      }
      TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::Empty(&this->spine_Feet_pair,0)
      ;
      if (this->test_counter < 10) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::Empty
                  (&this->spine_Transform_pairs,0);
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::Empty
                  (&this->spine_AnimatedTransform_pairs,0);
        TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::Empty(&this->spine_hit_pairs,0);
        TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(&this->feet_mod_transform_array,0);
        TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(&this->feet_modified_normals,0);
        TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
                  (&this->feet_ishit_array,0);
        TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(&this->feet_impactpoint_array,0);
        TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(&this->feet_Animated_transform_array,0);
        piVar1 = &(this->knee_Animated_transform_array).ArrayMax;
        (this->knee_Animated_transform_array).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,0,&(this->knee_Animated_transform_array).AllocatorInstance,0,piVar1);
        }
      }
      this->solve_should_fail = false;
      pTVar22 = BoneArrayMachine(this,&local_90,0,this->SpineBoneName,this->PelvisBoneName,false);
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this->Total_spine_bones,pTVar22);
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      AlgoImpl::Reverse<FName>
                ((FName *)(this->Total_spine_bones).AllocatorInstance.Data,
                 (this->Total_spine_bones).ArrayNum);
      iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
      uVar30 = 0;
      uVar27 = uVar28;
      uVar36 = uVar28;
      if (0 < iVar20) {
        do {
          uVar25 = (uint)uVar27;
          uVar27 = uVar28;
          uVar32 = uVar28;
          if (0 < iVar20) {
            do {
              uVar35 = (uint)uVar27;
              if (uVar25 != uVar35) {
                uVar26 = 0;
                if ((int)uVar35 < iVar20) {
                  uVar26 = ~uVar35 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar31 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
                uVar26 = uVar30;
                if ((int)uVar25 < (this->dragon_input_data).FeetBones.ArrayNum) {
                  uVar26 = ~uVar25 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                if (*(longlong *)
                     ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + uVar36) ==
                    *(longlong *)(pFVar31 + uVar32)) {
                  this->solve_should_fail = true;
                }
              }
              iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
              uVar27 = (ulonglong)(uVar35 + 1);
              uVar32 = uVar32 + 0xd0;
            } while ((int)(uVar35 + 1) < iVar20);
          }
          pUVar7 = this->owning_skel;
          uVar26 = ~uVar25 >> 0x1f;
          uVar35 = uVar30;
          if ((int)uVar25 < iVar20) {
            uVar35 = uVar26;
          }
          if ((uVar35 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar17 = USkinnedMeshComponent::GetBoneIndex
                             ((USkinnedMeshComponent *)pUVar7,
                              *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data
                                        + uVar36 + 0x10));
          FVar21 = this->PelvisBoneName;
          iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
          uVar35 = 0;
          if (iVar17 < 0) {
            uVar18 = uVar35;
            if ((int)uVar25 < iVar20) {
              uVar18 = uVar26;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar18 = uVar35;
            if ((int)uVar25 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar18 = uVar26;
            }
            FVar8 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                              uVar36 + 0x18);
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar9 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                              uVar36 + 8);
            if ((int)uVar25 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar35 = ~uVar25 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            BoneArrayMachine_Feet
                      (this,local_70,uVar25,
                       *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                                 uVar36),FVar9,FVar8,FVar21,true);
            FVar24.Data = local_70[0].AllocatorInstance.Data;
          }
          else {
            uVar18 = uVar35;
            if ((int)uVar25 < iVar20) {
              uVar18 = uVar26;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar18 = uVar35;
            if ((int)uVar25 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar18 = uVar26;
            }
            FVar8 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                              uVar36 + 0x10);
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FVar9 = *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                              uVar36 + 8);
            if ((int)uVar25 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar35 = ~uVar25 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            BoneArrayMachine_Feet
                      (this,&local_80,uVar25,
                       *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                                 uVar36),FVar9,FVar8,FVar21,true);
            FVar24.Data = local_80.AllocatorInstance.Data;
          }
          if (FVar24.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar24.Data);
          }
          iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
          uVar27 = (ulonglong)(uVar25 + 1);
          uVar36 = uVar36 + 0xd0;
        } while ((int)(uVar25 + 1) < iVar20);
      }
      pTVar23 = &this->spine_Feet_pair;
      if (this->PelvisBoneName == this->SpineBoneName) {
        this->solve_should_fail = true;
      }
      uVar27 = uVar28;
      if (0 < (this->spine_Feet_pair).ArrayNum) {
        do {
          uVar35 = (uint)uVar28;
          uVar25 = uVar30;
          if ((int)uVar35 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar35 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)((pTVar23->AllocatorInstance).Data + uVar27 + 0x28) == 0) {
            uVar25 = uVar30;
            if ((int)(uVar35 + 1) <= (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar35 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (pTVar23,uVar35,1);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x170,0x10,&pTVar23->AllocatorInstance,(this->spine_Feet_pair).ArrayNum,
                       &(this->spine_Feet_pair).ArrayMax);
          }
          uVar28 = (ulonglong)(uVar35 + 1);
          uVar27 = uVar27 + 0x170;
        } while ((int)(uVar35 + 1) < (this->spine_Feet_pair).ArrayNum);
      }
      this_00 = &this->spine_Feet_pair;
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FDragonData_SpineFeetPair,int>
                (&local_b0,(FDragonData_SpineFeetPair *)(this_00->AllocatorInstance).Data,
                 (this->spine_Feet_pair).ArrayNum,0);
      pTVar23 = Swap_Spine_Pairs(this,&local_d0,&local_b0);
      TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar23);
      DestructItems<FDragonData_SpineFeetPair,int>
                ((FDragonData_SpineFeetPair *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
      if ((FDragonData_SpineFeetPair *)local_d0.AllocatorInstance.Data !=
          (FDragonData_SpineFeetPair *)0x0) {
        FMemory::Free(local_d0.AllocatorInstance.Data);
      }
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FDragonData_SpineFeetPair,int>
                (&local_e8,(FDragonData_SpineFeetPair *)(this_00->AllocatorInstance).Data,
                 (this->spine_Feet_pair).ArrayNum,0);
      pTVar23 = Swap_Spine_Pairs(this,&local_c0,&local_e8);
      TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar23);
      DestructItems<FDragonData_SpineFeetPair,int>
                ((FDragonData_SpineFeetPair *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum);
      if ((FDragonData_SpineFeetPair *)local_c0.AllocatorInstance.Data !=
          (FDragonData_SpineFeetPair *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      iVar20 = (this->spine_Feet_pair).ArrayNum;
      uVar30 = 0;
      if (0 < iVar20) {
        local_190 = 0;
        lVar34 = 0;
        do {
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this_00->AllocatorInstance).Data;
          DestructItems<TArray<FBoneReference,TSizedDefaultAllocator<32>_>,int>
                    (*(TArray<FBoneReference,TSizedDefaultAllocator<32>_> **)
                      (pFVar31 + lVar34 + 0x110),*(int *)(pFVar31 + lVar34 + 0x118));
          *(undefined4 *)(pFVar31 + lVar34 + 0x118) = 0;
          if (*(int *)(pFVar31 + lVar34 + 0x11c) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar31 + lVar34 + 0x110),0,
                       (int *)(pFVar31 + lVar34 + 0x11c));
          }
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this_00->AllocatorInstance).Data;
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    (*(TArray<int,TSizedDefaultAllocator<32>_> **)(pFVar31 + lVar34 + 0x120),
                     *(int *)(pFVar31 + lVar34 + 0x128));
          *(undefined4 *)(pFVar31 + lVar34 + 0x128) = 0;
          if (*(int *)(pFVar31 + lVar34 + 300) != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,(ForAnyElementType *)(pFVar31 + lVar34 + 0x120),0,
                       (int *)(pFVar31 + lVar34 + 300));
          }
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this_00->AllocatorInstance).Data;
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = *(int *)((this_00->AllocatorInstance).Data + lVar34 + 0x28);
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x110),
                              (int *)(pFVar31 + lVar34 + 0x118),(int *)(pFVar31 + lVar34 + 0x11c));
          memset((void *)((longlong)iVar17 * 0x10 + *(longlong *)(pFVar31 + lVar34 + 0x110)),0,
                 (longlong)iVar20 << 4);
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this_00->AllocatorInstance).Data;
          uVar25 = 0;
          if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = *(int *)((this_00->AllocatorInstance).Data + lVar34 + 0x28);
          iVar17 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x120),
                              (int *)(pFVar31 + lVar34 + 0x128),(int *)(pFVar31 + lVar34 + 300));
          memset((void *)((longlong)iVar17 * 0x10 + *(longlong *)(pFVar31 + lVar34 + 0x120)),0,
                 (longlong)iVar20 << 4);
          uVar35 = 0;
          local_1b8 = 0;
          uVar25 = ~uVar30 >> 0x1f;
          local_1b0 = 0;
          while( true ) {
            uVar26 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (*(int *)((this_00->AllocatorInstance).Data + lVar34 + 0x28) <= (int)uVar35) break;
            iVar20 = 0;
            local_1c0 = 0;
            uVar26 = ~uVar35 >> 0x1f;
            while( true ) {
              local_198 = CONCAT44(local_198._4_4_,iVar20);
              uVar18 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar18 = uVar25;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this_00->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x138)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar18 = *(uint *)(local_1b0 + *(longlong *)(pFVar31 + lVar34 + 0x130));
              uVar19 = 0;
              if ((int)uVar18 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 0xd0 + 200) <= iVar20) break;
              uVar18 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar18 = uVar25;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this_00->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x138)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar18 = *(uint *)(local_1b0 + *(longlong *)(pFVar31 + lVar34 + 0x130));
              uVar19 = 0;
              if ((int)uVar18 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
              uVar19 = 0;
              if ((int)(uint)local_198 < *(int *)(pFVar31 + (longlong)(int)uVar18 * 0xd0 + 200)) {
                uVar19 = ~(uint)local_198 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_180 = *(undefined1 (*) [8])
                           (local_1c0 + *(longlong *)(pFVar31 + (longlong)(int)uVar18 * 0xd0 + 0xc0)
                           );
              uStack_178 = 0x7fffffff;
              FStack_174 = (FCompactPoseBoneIndex)0xffffffff;
              FBoneReference::Initialize((FBoneReference *)local_180,this->SavedBoneContainer);
              uVar18 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar18 = uVar25;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this_00->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x118)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(*(longlong *)(pFVar31 + lVar34 + 0x110) + local_1b8);
              if (((pFVar29->Data <= (FScriptContainerElement *)local_180) &&
                  ((FScriptContainerElement *)local_180 <
                   pFVar29->Data + (longlong)*(int *)((longlong)&pFVar29[1].Data + 4) * 0x10)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar20 = *(int *)&pFVar29[1].Data;
              piVar1 = (int *)((longlong)&pFVar29[1].Data + 4);
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x410,pFVar29,piVar1);
              }
              *(int *)&pFVar29[1].Data = iVar20 + 1;
              FVar21.Number = (uint)FStack_174;
              FVar21.ComparisonIndex.Value = uStack_178;
              pFVar3 = (FName *)(pFVar29->Data + (longlong)iVar20 * 0x10);
              pFVar3->ComparisonIndex = (FNameEntryId)local_180._0_4_;
              pFVar3->Number = local_180._4_4_;
              pFVar3[1] = FVar21;
              if (((uStack_178 & 0x80000000) != 0) ||
                 (FStack_174 == (FCompactPoseBoneIndex)0xffffffff)) {
                this->solve_should_fail = true;
              }
              uVar18 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar18 = uVar25;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this_00->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x138)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar18 = *(uint *)(local_1b0 + *(longlong *)(pFVar31 + lVar34 + 0x130));
              uVar19 = 0;
              if ((int)uVar18 < (this->dragon_input_data).FeetBones.ArrayNum) {
                uVar19 = ~uVar18 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
              uVar19 = 0;
              if ((int)(uint)local_198 < *(int *)(pFVar31 + (longlong)(int)uVar18 * 0xd0 + 200)) {
                uVar19 = ~(uint)local_198 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              local_1a8 = (int)*(float *)(local_1c0 + 0x2c +
                                         *(longlong *)
                                          (pFVar31 + (longlong)(int)uVar18 * 0xd0 + 0xc0));
              uVar18 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar18 = uVar25;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this_00->AllocatorInstance).Data;
              uVar18 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x128)) {
                uVar18 = uVar26;
              }
              if ((uVar18 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(*(longlong *)(pFVar31 + lVar34 + 0x120) + local_1b8);
              if (((pFVar29->Data <= (FScriptContainerElement *)&local_1a8) &&
                  ((FScriptContainerElement *)&local_1a8 <
                   pFVar29->Data + (longlong)*(int *)((longlong)&pFVar29[1].Data + 4) * 4)) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar17 = *(int *)&pFVar29[1].Data;
              piVar1 = (int *)((longlong)&pFVar29[1].Data + 4);
              if (iVar17 == *piVar1) {
                iVar17 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,pFVar29,piVar1);
              }
              *(int *)&pFVar29[1].Data = iVar17 + 1;
              iVar20 = (uint)local_198 + 1;
              local_1c0 = local_1c0 + 0x30;
              *(int *)(pFVar29->Data + (longlong)iVar17 * 4) = local_1a8;
            }
            local_1b0 = local_1b0 + 4;
            uVar35 = uVar35 + 1;
            local_1b8 = local_1b8 + 0x10;
          }
          uVar30 = uVar30 + 1;
          iVar20 = (this->spine_Feet_pair).ArrayNum;
          local_190 = local_190 + 1;
          lVar34 = lVar34 + 0x170;
        } while ((int)uVar30 < iVar20);
      }
      pTVar23 = &this->spine_Feet_pair;
      if (this->test_counter < 10) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->spine_Transform_pairs,iVar20);
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->spine_AnimatedTransform_pairs,(this->spine_Feet_pair).ArrayNum);
        TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::AddDefaulted(&this->feet_Animated_transform_array,(this->spine_Feet_pair).ArrayNum);
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->knee_Animated_transform_array,(this->dragon_input_data).FeetBones.ArrayNum
                  );
        TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::AddDefaulted(&this->feet_mod_transform_array,(this->spine_Feet_pair).ArrayNum);
        iVar20 = (this->spine_Feet_pair).ArrayNum;
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar20,&(this->feet_frozen_rotator_array).AllocatorInstance,
                            &(this->feet_frozen_rotator_array).ArrayNum,
                            &(this->feet_frozen_rotator_array).ArrayMax);
        memset((this->feet_frozen_rotator_array).AllocatorInstance.Data + (longlong)iVar17 * 0x10,0,
               (longlong)iVar20 << 4);
        TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::AddDefaulted(&this->feet_modified_normals,(this->spine_Feet_pair).ArrayNum);
        TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->feet_ishit_array,(this->spine_Feet_pair).ArrayNum);
        TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::AddDefaulted(&this->feet_impactpoint_array,(this->spine_Feet_pair).ArrayNum);
        iVar20 = (this->spine_Feet_pair).ArrayNum;
        iVar17 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,iVar20,&(this->feet_fingers_transform_array).AllocatorInstance,
                            &(this->feet_fingers_transform_array).ArrayNum,
                            &(this->feet_fingers_transform_array).ArrayMax);
        memset((this->feet_fingers_transform_array).AllocatorInstance.Data + (longlong)iVar17 * 0x10
               ,0,(longlong)iVar20 << 4);
        TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::AddDefaulted(&this->feet_knee_offset_array,(this->spine_Feet_pair).ArrayNum);
        TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->feet_Alpha_array,(this->spine_Feet_pair).ArrayNum);
        TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::AddDefaulted
                  (&this->spine_hit_pairs,(this->spine_Feet_pair).ArrayNum);
      }
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                (&this->FeetRootHeights,(this->spine_Feet_pair).ArrayNum);
      iVar20 = (this->spine_Feet_pair).ArrayNum;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar20,&(this->FeetFingerHeights).AllocatorInstance,
                          &(this->FeetFingerHeights).ArrayNum,&(this->FeetFingerHeights).ArrayMax);
      memset((this->FeetFingerHeights).AllocatorInstance.Data + (longlong)iVar17 * 0x10,0,
             (longlong)iVar20 << 4);
      TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::AddDefaulted(&this->FeetTipLocations,(this->spine_Feet_pair).ArrayNum);
      TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                (&this->FeetStepBools,(this->spine_Feet_pair).ArrayNum);
      TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::AddDefaulted(&this->Feet_Previous_Position,(this->spine_Feet_pair).ArrayNum);
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                (&this->FeetWidthSpacing,(this->spine_Feet_pair).ArrayNum);
      uVar30 = 0;
      if (0 < (this->spine_Feet_pair).ArrayNum) {
        local_res18 = 0;
        local_f8 = 0;
        local_198 = 0;
        local_170 = 0;
        local_190 = 0;
        do {
          lVar34 = local_f8;
          if (this->test_counter < 10) {
            uVar35 = ~uVar30 >> 0x1f;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = uVar35;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = uVar35;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_198 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,8,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x578),
                                (int *)(pFVar31 + lVar34 + 0x580),(int *)(pFVar31 + lVar34 + 0x584))
            ;
            DefaultConstructItems<FHitResult,int>
                      ((void *)((longlong)iVar17 * 0x100 + *(longlong *)(pFVar31 + lVar34 + 0x578)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = uVar35;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            lVar34 = local_res18 * 0x5f8;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,8,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x5b8),
                                (int *)(pFVar31 + lVar34 + 0x5c0),(int *)(pFVar31 + lVar34 + 0x5c4))
            ;
            DefaultConstructItems<FHitResult,int>
                      ((void *)((longlong)iVar17 * 0x100 + *(longlong *)(pFVar31 + lVar34 + 0x5b8)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,8,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x5c8),
                                (int *)(pFVar31 + lVar34 + 0x5d0),(int *)(pFVar31 + lVar34 + 0x5d4))
            ;
            DefaultConstructItems<FHitResult,int>
                      ((void *)((longlong)iVar17 * 0x100 + *(longlong *)(pFVar31 + lVar34 + 0x5c8)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,8,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x5f8 + 0x5d8),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5e0),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5e4));
            DefaultConstructItems<FHitResult,int>
                      ((void *)((longlong)iVar17 * 0x100 +
                               *(longlong *)(pFVar31 + local_res18 * 0x5f8 + 0x5d8)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,8,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x5f8 + 0x5e8),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5f0),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5f4));
            DefaultConstructItems<FHitResult,int>
                      ((void *)((longlong)iVar17 * 0x100 +
                               *(longlong *)(pFVar31 + local_res18 * 0x5f8 + 0x5e8)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x5f8 + 0x598),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5a0),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5a4));
            memset((void *)((longlong)iVar17 * 0x10 +
                           *(longlong *)(pFVar31 + local_res18 * 0x5f8 + 0x598)),0,
                   (longlong)iVar20 << 4);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x5f8 + 0x5a8),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5b0),
                                (int *)(pFVar31 + local_res18 * 0x5f8 + 0x5b4));
            memset((void *)((longlong)iVar17 * 0x10 +
                           *(longlong *)(pFVar31 + local_res18 * 0x5f8 + 0x5a8)),0,
                   (longlong)iVar20 << 4);
            local_1b0 = local_res18 * 0x170;
            lVar34 = local_res18 * 0x5f8;
            uVar35 = 0;
            uVar25 = ~uVar30 >> 0x1f;
            local_1b8 = 0;
            local_1c0 = 0;
            while( true ) {
              lVar37 = local_1c0;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + lVar34 + 0x5a0) <=
                  (int)uVar35) break;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x5a0)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(lVar37 + *(longlong *)(pFVar31 + lVar34 + 0x598));
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (pTVar23->AllocatorInstance).Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + local_1b0 + 0x118)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar37 = local_1c0;
              iVar20 = *(int *)(local_1c0 + 8 + *(longlong *)(pFVar31 + local_1b0 + 0x110));
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x100,8,iVar20,pFVar29,(int *)(pFVar29 + 1),
                                  (int *)((longlong)&pFVar29[1].Data + 4));
              DefaultConstructItems<FHitResult,int>(pFVar29->Data + (longlong)iVar17 * 0x100,iVar20)
              ;
              local_1b8 = local_1b8 + 1;
              uVar35 = uVar35 + 1;
              local_1c0 = lVar37 + 0x10;
            }
            local_1b0 = local_res18 * 0x170;
            lVar34 = local_res18 * 0x5f8;
            uVar25 = 0;
            uVar35 = ~uVar30 >> 0x1f;
            local_1b8 = 0;
            local_1c0 = 0;
            while( true ) {
              lVar37 = local_1c0;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
                uVar26 = uVar35;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((this->spine_hit_pairs).AllocatorInstance.Data + lVar34 + 0x5b0) <=
                  (int)uVar25) break;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_hit_pairs).ArrayNum) {
                uVar26 = uVar35;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->spine_hit_pairs).AllocatorInstance.Data;
              uVar26 = 0;
              if ((int)uVar25 < *(int *)(pFVar31 + lVar34 + 0x5b0)) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(lVar37 + *(longlong *)(pFVar31 + lVar34 + 0x5a8));
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar35;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (pTVar23->AllocatorInstance).Data;
              uVar26 = 0;
              if ((int)uVar25 < *(int *)(pFVar31 + local_1b0 + 0x118)) {
                uVar26 = ~uVar25 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar37 = local_1c0;
              iVar20 = *(int *)(*(longlong *)(pFVar31 + local_1b0 + 0x110) + 8 + local_1c0);
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x100,8,iVar20,pFVar29,(int *)(pFVar29 + 1),
                                  (int *)((longlong)&pFVar29[1].Data + 4));
              DefaultConstructItems<FHitResult,int>(pFVar29->Data + (longlong)iVar17 * 0x100,iVar20)
              ;
              local_1b8 = local_1b8 + 1;
              uVar25 = uVar25 + 1;
              local_1c0 = lVar37 + 0x10;
            }
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = uVar35;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar34 = local_170;
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0x98),
                                (int *)(pFVar31 + lVar34 + 0xa0),(int *)(pFVar31 + lVar34 + 0xa4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 + *(longlong *)(pFVar31 + lVar34 + 0x98)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            lVar34 = local_res18 * 0x160;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0xe8),
                                (int *)(pFVar31 + lVar34 + 0xf0),(int *)(pFVar31 + lVar34 + 0xf4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 + *(longlong *)(pFVar31 + lVar34 + 0xe8)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,(ForAnyElementType *)(pFVar31 + lVar34 + 0xd8),
                                (int *)(pFVar31 + lVar34 + 0xe0),(int *)(pFVar31 + lVar34 + 0xe4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 + *(longlong *)(pFVar31 + lVar34 + 0xd8)),
                       iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x148),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x150),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x154));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x148)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0xf8),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x100),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x104));
            memset((void *)(*(longlong *)(pFVar31 + local_res18 * 0x160 + 0xf8) +
                           (longlong)iVar17 * 4),0,(longlong)iVar20 << 2);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x118),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x120),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x124));
            memset((void *)((longlong)iVar17 * 0x10 +
                           *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x118)),0,
                   (longlong)iVar20 << 4);
            uVar35 = 0;
            local_1b8 = 0;
            uVar25 = ~uVar30 >> 0x1f;
            lVar34 = local_res18 * 0x160;
            local_1b0 = local_res18 * 0x170;
            local_1c0 = 0;
            while( true ) {
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((this->spine_Transform_pairs).AllocatorInstance.Data + lVar34 + 0x120) <=
                  (int)uVar35) break;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + lVar34 + 0x120)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(local_1c0 + *(longlong *)(pFVar31 + lVar34 + 0x118));
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (pTVar23->AllocatorInstance).Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + local_1b0 + 0x118)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              lVar37 = local_1c0;
              iVar20 = *(int *)(*(longlong *)(pFVar31 + local_1b0 + 0x110) + 8 + local_1c0);
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x60,0x10,iVar20,pFVar29,(int *)(pFVar29 + 1),
                                  (int *)((longlong)&pFVar29[1].Data + 4));
              DefaultConstructItems<UE::Math::TTransform<double>,int>
                        (pFVar29->Data + (longlong)iVar17 * 0x60,iVar20);
              local_1b8 = local_1b8 + 1;
              uVar35 = uVar35 + 1;
              local_1c0 = lVar37 + 0x10;
            }
            uVar35 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar35 = uVar25;
            }
            if ((uVar35 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x98),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xa0),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xa4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x98)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0xa8),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xb0),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xb4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0xa8)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0xb8),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xc0),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xc4));
            memset((void *)((longlong)iVar17 + *(longlong *)(pFVar31 + local_res18 * 0x160 + 0xb8)),
                   0,(longlong)iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 200),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xd0),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xd4));
            memset((void *)((longlong)iVar17 + *(longlong *)(pFVar31 + local_res18 * 0x160 + 200)),0
                   ,(longlong)iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0xf8),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x100),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x104));
            memset((void *)(*(longlong *)(pFVar31 + local_res18 * 0x160 + 0xf8) +
                           (longlong)iVar17 * 4),0,(longlong)iVar20 << 2);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,*(int *)((pTVar23->AllocatorInstance).Data +
                                      local_res18 * 0x170 + 0x28),
                       (ForAnyElementType *)(pFVar31 + (longlong)(int)uVar30 * 0x160 + 0x108),
                       (int *)(pFVar31 + (longlong)(int)uVar30 * 0x160 + 0x110),
                       (int *)(pFVar31 + (longlong)(int)uVar30 * 0x160 + 0x114));
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0xd8),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xe0),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0xe4));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0xd8)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x138),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x140),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x144));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x138)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x128),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x130),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x134));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x128)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_AnimatedTransform_pairs).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->spine_AnimatedTransform_pairs).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,
                                (ForAnyElementType *)(pFVar31 + local_res18 * 0x160 + 0x128),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x130),
                                (int *)(pFVar31 + local_res18 * 0x160 + 0x134));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)((longlong)iVar17 * 0x60 +
                               *(longlong *)(pFVar31 + local_res18 * 0x160 + 0x128)),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_mod_transform_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar34 = local_190;
            pFVar31 = (this->feet_mod_transform_array).AllocatorInstance.Data + local_190;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 0x60),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_frozen_rotator_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_frozen_rotator_array).AllocatorInstance.Data + lVar34;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,*(int *)((pTVar23->AllocatorInstance).Data +
                                      local_res18 * 0x170 + 0x28),(ForAnyElementType *)pFVar31,
                       (int *)(pFVar31 + 8),(int *)(pFVar31 + 0xc));
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_modified_normals).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_modified_normals).AllocatorInstance.Data +
                      (longlong)(int)uVar30 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,*(int *)((pTVar23->AllocatorInstance).Data +
                                      local_res18 * 0x170 + 0x28),(ForAnyElementType *)pFVar31,
                       (int *)(pFVar31 + 8),(int *)(pFVar31 + 0xc));
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_ishit_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_ishit_array).AllocatorInstance.Data + local_res18 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            memset((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17),0,(longlong)iVar20)
            ;
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_impactpoint_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_impactpoint_array).AllocatorInstance.Data +
                      (longlong)(int)uVar30 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,*(int *)((pTVar23->AllocatorInstance).Data +
                                      local_res18 * 0x170 + 0x28),(ForAnyElementType *)pFVar31,
                       (int *)(pFVar31 + 8),(int *)(pFVar31 + 0xc));
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_fingers_transform_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_fingers_transform_array).AllocatorInstance.Data +
                      local_res18 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            memset((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 0x10),0,
                   (longlong)iVar20 << 4);
            lVar34 = local_res18 * 0x160;
            uVar25 = 0;
            lVar37 = 0;
            while( true ) {
              uVar35 = 0;
              if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
                uVar35 = ~uVar30 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((this->spine_Transform_pairs).AllocatorInstance.Data + lVar34 + 0x100) <=
                  (int)uVar25) break;
              uVar35 = 0;
              if ((int)uVar30 < (this->spine_Transform_pairs).ArrayNum) {
                uVar35 = ~uVar30 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->spine_Transform_pairs).AllocatorInstance.Data;
              uVar35 = 0;
              if ((int)uVar25 < *(int *)(pFVar31 + lVar34 + 0x100)) {
                uVar35 = ~uVar25 >> 0x1f;
              }
              if ((uVar35 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar25 = uVar25 + 1;
              *(undefined4 *)(lVar37 + *(longlong *)(pFVar31 + lVar34 + 0xf8)) = 0x3f800000;
              lVar37 = lVar37 + 4;
            }
            local_1b0 = local_res18 * 0x170;
            uVar35 = 0;
            local_188 = local_res18 << 4;
            uVar25 = ~uVar30 >> 0x1f;
            local_1b8 = 0;
            lVar34 = 0;
            while( true ) {
              lVar37 = local_1b0;
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar25;
              }
              local_1c0 = lVar34;
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (*(int *)((pTVar23->AllocatorInstance).Data + lVar37 + 0x118) <= (int)uVar35)
              break;
              uVar26 = 0;
              if ((int)uVar30 < (this->feet_fingers_transform_array).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (this->feet_fingers_transform_array).AllocatorInstance.Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + local_188 + 8)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar29 = (ForAnyElementType *)(lVar34 + *(longlong *)(pFVar31 + local_188));
              uVar26 = 0;
              if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
                uVar26 = uVar25;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pFVar31 = (pTVar23->AllocatorInstance).Data;
              uVar26 = 0;
              if ((int)uVar35 < *(int *)(pFVar31 + local_1b0 + 0x118)) {
                uVar26 = ~uVar35 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar20 = *(int *)(local_1c0 + 8 + *(longlong *)(pFVar31 + local_1b0 + 0x110));
              iVar17 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x60,0x10,iVar20,pFVar29,(int *)(pFVar29 + 1),
                                  (int *)((longlong)&pFVar29[1].Data + 4));
              DefaultConstructItems<UE::Math::TTransform<double>,int>
                        (pFVar29->Data + (longlong)iVar17 * 0x60,iVar20);
              local_1b8 = local_1b8 + 1;
              uVar35 = uVar35 + 1;
              lVar34 = local_1c0 + 0x10;
            }
            uVar35 = 0;
            if ((int)uVar30 < (this->feet_knee_offset_array).ArrayNum) {
              uVar35 = uVar25;
            }
            if ((uVar35 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_knee_offset_array).AllocatorInstance.Data +
                      (longlong)(int)uVar30 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,*(int *)((pTVar23->AllocatorInstance).Data +
                                      local_res18 * 0x170 + 0x28),(ForAnyElementType *)pFVar31,
                       (int *)(pFVar31 + 8),(int *)(pFVar31 + 0xc));
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_Animated_transform_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_Animated_transform_array).AllocatorInstance.Data +
                      local_res18 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x60,0x10,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            DefaultConstructItems<UE::Math::TTransform<double>,int>
                      ((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 0x60),iVar20);
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_Alpha_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_Alpha_array).AllocatorInstance.Data + local_res18 * 0x10;
            uVar25 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((pTVar23->AllocatorInstance).Data + local_res18 * 0x170 + 0x28);
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (4,4,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            memset((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 4),0,
                   (longlong)iVar20 << 2);
          }
          local_188 = local_res18 * 0x170;
          this->every_foot_dont_have_child = false;
          uVar35 = 0;
          uVar25 = ~uVar30 >> 0x1f;
          lVar34 = 0;
          while( true ) {
            lVar37 = local_188;
            uVar26 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (*(int *)((pTVar23->AllocatorInstance).Data + lVar37 + 0x28) <= (int)uVar35) break;
            uVar26 = 0;
            if ((int)uVar30 < (this->FeetRootHeights).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->FeetRootHeights).AllocatorInstance.Data + local_res18 * 0x10;
            local_1a4 = 0;
            if (((*(undefined4 **)&pFVar31->field_0x0 <= &local_1a4) &&
                (&local_1a4 < *(undefined4 **)&pFVar31->field_0x0 + *(int *)(pFVar31 + 0xc))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)&pFVar31[8].field_0x0;
            if (iVar20 == *(int *)(pFVar31 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
            *(undefined4 *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar20 * 4) = local_1a4;
            uVar26 = 0;
            if ((int)uVar30 < (this->FeetTipLocations).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->FeetTipLocations).AllocatorInstance.Data + local_res18 * 0x10;
            if (((*(undefined1 **)&pFVar31->field_0x0 <
                  (undefined1 *)((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1))
                && (&UE::Math::TVector<double>::ZeroVector <
                    (TVector<double> *)
                    (*(undefined1 **)&pFVar31->field_0x0 + (longlong)*(int *)(pFVar31 + 0xc) * 0x18)
                   )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)&pFVar31[8].field_0x0;
            if (iVar20 == *(int *)(pFVar31 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            lVar10 = *(longlong *)&pFVar31->field_0x0;
            pdVar4 = (double *)(lVar10 + (longlong)iVar20 * 0x18);
            *pdVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            pdVar4[1] = (double)uVar40;
            *(double *)(lVar10 + (longlong)iVar20 * 0x18 + 0x10) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar26 = 0;
            if ((int)uVar30 < (this->FeetWidthSpacing).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->FeetWidthSpacing).AllocatorInstance.Data + local_res18 * 0x10;
            local_1a0[0] = 0;
            if (((*(undefined4 **)&pFVar31->field_0x0 <= local_1a0) &&
                (local_1a0 < *(undefined4 **)&pFVar31->field_0x0 + *(int *)(pFVar31 + 0xc))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)&pFVar31[8].field_0x0;
            if (iVar20 == *(int *)(pFVar31 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
            *(undefined4 *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar20 * 4) = local_1a0[0];
            uVar26 = 0;
            if ((int)uVar30 < (this->FeetStepBools).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->FeetStepBools).AllocatorInstance.Data + local_res18 * 0x10;
            local_1c8[0] = (FScriptContainerElement)0x0;
            if (((*(FScriptContainerElement **)&pFVar31->field_0x0 <= local_1c8) &&
                (local_1c8 <
                 *(FScriptContainerElement **)&pFVar31->field_0x0 + *(int *)(pFVar31 + 0xc))) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)&pFVar31[8].field_0x0;
            if (iVar20 == *(int *)(pFVar31 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x101,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
            *(FScriptContainerElement *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar20) =
                 local_1c8[0];
            uVar26 = 0;
            if ((int)uVar30 < (this->Feet_Previous_Position).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->Feet_Previous_Position).AllocatorInstance.Data + local_res18 * 0x10;
            if (((*(undefined1 **)&pFVar31->field_0x0 <
                  (undefined1 *)((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1))
                && (&UE::Math::TVector<double>::ZeroVector <
                    (TVector<double> *)
                    (*(undefined1 **)&pFVar31->field_0x0 + (longlong)*(int *)(pFVar31 + 0xc) * 0x18)
                   )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)&pFVar31[8].field_0x0;
            if (iVar20 == *(int *)(pFVar31 + 0xc)) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 0xc));
            }
            *(int *)&pFVar31[8].field_0x0 = iVar20 + 1;
            uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            lVar10 = *(longlong *)&pFVar31->field_0x0;
            pdVar4 = (double *)(lVar10 + (longlong)iVar20 * 0x18);
            *pdVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            pdVar4[1] = (double)uVar40;
            *(double *)(lVar10 + (longlong)iVar20 * 0x18 + 0x10) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar26 = 0;
            if ((int)uVar30 < (this->spine_Feet_pair).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (pTVar23->AllocatorInstance).Data;
            uVar26 = 0;
            if ((int)uVar35 < *(int *)(pFVar31 + lVar37 + 0x138)) {
              uVar26 = ~uVar35 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar26 = *(uint *)(*(longlong *)(pFVar31 + lVar37 + 0x130) + lVar34);
            uVar18 = 0;
            if ((int)uVar26 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar18 = ~uVar26 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = *(int *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                             (longlong)(int)uVar26 * 0xd0 + 200);
            uVar26 = 0;
            if ((int)uVar30 < (this->FeetFingerHeights).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->FeetFingerHeights).AllocatorInstance.Data + local_res18 * 0x10;
            iVar17 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,8,iVar20,(ForAnyElementType *)pFVar31,(int *)(pFVar31 + 8),
                                (int *)(pFVar31 + 0xc));
            memset((void *)(*(longlong *)&pFVar31->field_0x0 + (longlong)iVar17 * 0x10),0,
                   (longlong)iVar20 << 4);
            uVar26 = 0;
            if ((int)uVar30 < (this->feet_Alpha_array).ArrayNum) {
              uVar26 = uVar25;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_Alpha_array).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)uVar35 < *(int *)(pFVar31 + local_res18 * 0x10 + 8)) {
              uVar26 = ~uVar35 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar35 = uVar35 + 1;
            *(undefined4 *)(*(longlong *)(pFVar31 + local_res18 * 0x10) + lVar34) = 0x3f800000;
            lVar34 = lVar34 + 4;
          }
          uVar30 = uVar30 + 1;
          local_res18 = local_res18 + 1;
          local_198 = local_198 + 0x170;
          local_f8 = local_f8 + 0x5f8;
          local_170 = local_170 + 0x160;
          local_190 = local_190 + 0x10;
        } while ((int)uVar30 < (this->spine_Feet_pair).ArrayNum);
      }
      iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
      uVar30 = 0;
      if (0 < iVar20) {
        pTVar6 = &this->feet_bone_array;
        lVar34 = 0;
        do {
          uVar25 = 0;
          if ((int)uVar30 < iVar20) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_168 = *(undefined8 *)
                       ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34);
          pFVar31 = (pTVar6->AllocatorInstance).Data;
          uStack_160 = 0x7fffffff;
          uStack_15c = 0xffffffff;
          if (((pFVar31 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 <
               pFVar31 + (longlong)(this->feet_bone_array).ArrayMax * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = (this->feet_bone_array).ArrayNum;
          if (iVar20 == (this->feet_bone_array).ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar6->AllocatorInstance,&(this->feet_bone_array).ArrayMax);
          }
          (this->feet_bone_array).ArrayNum = iVar20 + 1;
          pFVar31 = (pTVar6->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
          *(undefined8 *)pFVar31 = local_168;
          *(ulonglong *)(pFVar31 + 8) = CONCAT44(uStack_15c,uStack_160);
          uVar25 = 0;
          if ((int)uVar30 < (this->feet_bone_array).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FBoneReference::Initialize
                    ((FBoneReference *)
                     ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
          iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0xd0;
        } while ((int)uVar30 < iVar20);
      }
      do {
        iVar20 = (this->feet_bone_array).ArrayNum;
        uVar30 = 1;
        bVar15 = false;
        if (iVar20 < 2) break;
        lVar34 = 0x10;
        iVar17 = 0;
        do {
          uVar25 = 0;
          if (iVar17 < (this->feet_bone_array).ArrayNum) {
            uVar25 = -uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this->feet_bone_array).AllocatorInstance.Data;
          uVar25 = 0;
          if ((int)uVar30 < (this->feet_bone_array).ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(int *)(pFVar31 + lVar34 + -8) * 2 <
              *(int *)((this->feet_bone_array).AllocatorInstance.Data + lVar34 + 8) * 2) {
            uVar25 = 0;
            if ((int)(uVar30 - 1) < (this->feet_bone_array).ArrayNum) {
              uVar25 = -uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_bone_array).AllocatorInstance.Data + lVar34 + -0x10;
            local_f8 = *(longlong *)pFVar31;
            uVar13 = *(undefined4 *)(pFVar31 + 8);
            uVar14 = *(undefined4 *)(pFVar31 + 0xc);
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_bone_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            uStack_f0 = uVar13;
            uStack_ec = uVar14;
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_bone_array).AllocatorInstance.Data;
            uVar25 = 0;
            if ((int)(uVar30 - 1) < (this->feet_bone_array).ArrayNum) {
              uVar25 = -uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar11 = (this->feet_bone_array).AllocatorInstance.Data;
            *(undefined8 *)(pFVar11 + lVar34 + -0x10) = *(undefined8 *)(pFVar31 + lVar34);
            uVar25 = *(uint *)(pFVar31 + lVar34 + 8);
            *(uint *)(pFVar11 + lVar34 + -8) =
                 (uVar25 ^ *(uint *)(pFVar11 + lVar34 + -8)) & 0x80000000 ^ uVar25;
            *(uint *)(pFVar11 + lVar34 + -8) =
                 (uVar25 ^ *(uint *)(pFVar31 + lVar34 + 8)) & 0x7fffffff ^
                 *(uint *)(pFVar31 + lVar34 + 8);
            *(undefined4 *)(pFVar11 + lVar34 + -4) = *(undefined4 *)(pFVar31 + lVar34 + 0xc);
            uVar25 = 0;
            if ((int)uVar30 < (this->feet_bone_array).ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar31 = (this->feet_bone_array).AllocatorInstance.Data;
            *(longlong *)(pFVar31 + lVar34) = local_f8;
            *(undefined4 *)(pFVar31 + lVar34 + 0xc) = uVar14;
            *(undefined4 *)(pFVar31 + lVar34 + 8) = uVar13;
            bVar15 = true;
          }
          iVar20 = (this->feet_bone_array).ArrayNum;
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0x10;
          iVar17 = iVar17 + 1;
        } while ((int)uVar30 < iVar20);
      } while (bVar15);
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x60,0x10,iVar20,&(this->feet_transform_array).AllocatorInstance,
                          &(this->feet_transform_array).ArrayNum,
                          &(this->feet_transform_array).ArrayMax);
      DefaultConstructItems<UE::Math::TTransform<double>,int>
                ((this->feet_transform_array).AllocatorInstance.Data + (longlong)iVar17 * 0x60,
                 iVar20);
      iVar20 = (this->feet_bone_array).ArrayNum;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar20,&(this->feet_Alpha_array).AllocatorInstance,
                          &(this->feet_Alpha_array).ArrayNum,&(this->feet_Alpha_array).ArrayMax);
      memset((this->feet_Alpha_array).AllocatorInstance.Data + (longlong)iVar17 * 0x10,0,
             (longlong)iVar20 << 4);
      iVar20 = (this->feet_bone_array).ArrayNum;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,8,iVar20,&(this->feet_hit_array).AllocatorInstance,
                          &(this->feet_hit_array).ArrayNum,&(this->feet_hit_array).ArrayMax);
      DefaultConstructItems<FHitResult,int>
                ((this->feet_hit_array).AllocatorInstance.Data + (longlong)iVar17 * 0x100,iVar20);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(this->feet_bone_array).ArrayNum,
                 &(this->EffectorLocationList).AllocatorInstance,
                 &(this->EffectorLocationList).ArrayNum,&(this->EffectorLocationList).ArrayMax);
      if (this->SpineBoneName == this->PelvisBoneName) {
        this->solve_should_fail = true;
      }
      uVar30 = 0;
      if (0 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
        lVar34 = 0;
        do {
          uVar25 = 0;
          if ((int)uVar30 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar31 = (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
          if (pFVar31[lVar34] == (FScriptContainerElement)0x0) {
            FBoneReference::Initialize((FBoneReference *)(pFVar31 + lVar34 + 4),param_1);
            *(undefined8 *)(pFVar31 + lVar34 + 0x88) = 0xffffffffffffffff;
          }
          else {
            FSocketReference::InitialzeCompactBoneIndex
                      ((FSocketReference *)(pFVar31 + lVar34 + 0x20),param_1);
            *(uint *)(pFVar31 + lVar34 + 0xc) = *(uint *)(pFVar31 + lVar34 + 0xc) | 0x7fffffff;
            *(undefined4 *)(pFVar31 + lVar34 + 0x10) = 0xffffffff;
          }
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0x90;
        } while ((int)uVar30 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum);
      }
      iVar20 = (this->dragon_bone_data).FeetBones.ArrayMax;
      (this->dragon_bone_data).FeetBones.ArrayNum = 0;
      if (iVar20 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&(this->dragon_bone_data).FeetBones.AllocatorInstance,0,
                   &(this->dragon_bone_data).FeetBones.ArrayMax);
      }
      iVar20 = (this->dragon_bone_data).KneeBones.ArrayMax;
      (this->dragon_bone_data).KneeBones.ArrayNum = 0;
      if (iVar20 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&(this->dragon_bone_data).KneeBones.AllocatorInstance,0,
                   &(this->dragon_bone_data).KneeBones.ArrayMax);
      }
      pTVar6 = &(this->dragon_bone_data).SecondKneeBones;
      iVar20 = (this->dragon_bone_data).SecondKneeBones.ArrayMax;
      (this->dragon_bone_data).SecondKneeBones.ArrayNum = 0;
      if (iVar20 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&pTVar6->AllocatorInstance,0,
                   &(this->dragon_bone_data).SecondKneeBones.ArrayMax);
      }
      pTVar2 = &(this->dragon_bone_data).ThighBones;
      iVar20 = (this->dragon_bone_data).ThighBones.ArrayMax;
      (this->dragon_bone_data).ThighBones.ArrayNum = 0;
      if (iVar20 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&pTVar2->AllocatorInstance,0,
                   &(this->dragon_bone_data).ThighBones.ArrayMax);
      }
      pTVar33 = &(this->dragon_bone_data).FeetBones;
      pTVar38 = &(this->dragon_bone_data).KneeBones;
      iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
      uVar30 = 0;
      if (0 < iVar20) {
        lVar34 = 0;
        do {
          uVar25 = 0;
          if ((int)uVar30 < iVar20) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_158 = *(undefined8 *)
                       ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34);
          pFVar31 = (pTVar33->AllocatorInstance).Data;
          uStack_150 = 0x7fffffff;
          uStack_14c = 0xffffffff;
          if (((pFVar31 <= (FScriptContainerElement *)&local_158) &&
              ((FScriptContainerElement *)&local_158 <
               pFVar31 + (longlong)(this->dragon_bone_data).FeetBones.ArrayMax * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = (this->dragon_bone_data).FeetBones.ArrayNum;
          if (iVar20 == (this->dragon_bone_data).FeetBones.ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar33->AllocatorInstance,
                                &(this->dragon_bone_data).FeetBones.ArrayMax);
            (this->dragon_bone_data).FeetBones.ArrayNum = iVar20;
          }
          (this->dragon_bone_data).FeetBones.ArrayNum = iVar20 + 1;
          pFVar31 = (pTVar33->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
          *(undefined8 *)pFVar31 = local_158;
          *(ulonglong *)(pFVar31 + 8) = CONCAT44(uStack_14c,uStack_150);
          uVar25 = 0;
          if ((int)uVar30 < (this->dragon_bone_data).FeetBones.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FBoneReference::Initialize
                    ((FBoneReference *)
                     ((pTVar33->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
          uVar25 = 0;
          if ((int)uVar30 < (this->dragon_input_data).FeetBones.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          local_148 = *(undefined8 *)
                       ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34 + 8);
          pFVar31 = (pTVar38->AllocatorInstance).Data;
          uStack_140 = 0x7fffffff;
          uStack_13c = 0xffffffff;
          if (((pFVar31 <= (FScriptContainerElement *)&local_148) &&
              ((FScriptContainerElement *)&local_148 <
               pFVar31 + (longlong)(this->dragon_bone_data).KneeBones.ArrayMax * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = (this->dragon_bone_data).KneeBones.ArrayNum;
          if (iVar20 == (this->dragon_bone_data).KneeBones.ArrayMax) {
            iVar20 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&pTVar38->AllocatorInstance,
                                &(this->dragon_bone_data).KneeBones.ArrayMax);
            (this->dragon_bone_data).KneeBones.ArrayNum = iVar20;
          }
          (this->dragon_bone_data).KneeBones.ArrayNum = iVar20 + 1;
          pFVar31 = (pTVar38->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
          *(undefined8 *)pFVar31 = local_148;
          *(ulonglong *)(pFVar31 + 8) = CONCAT44(uStack_13c,uStack_140);
          uVar25 = 0;
          if ((int)uVar30 < (this->dragon_bone_data).KneeBones.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FBoneReference::Initialize
                    ((FBoneReference *)
                     ((pTVar38->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
          pUVar7 = this->owning_skel;
          uVar25 = 0;
          if ((int)uVar30 < (this->dragon_input_data).FeetBones.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar20 = USkinnedMeshComponent::GetBoneIndex
                             ((USkinnedMeshComponent *)pUVar7,
                              *(FName *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data
                                        + lVar34 + 0x10));
          if (iVar20 < 0) {
            ::FName::FName(&local_d8,"None");
            pFVar3 = (FName *)(pTVar6->AllocatorInstance).Data;
            local_118 = local_d8;
            FStack_110.Value = 0x7fffffff;
            uStack_10c = 0xffffffff;
            if (((pFVar3 <= &local_118) &&
                (&local_118 <
                 pFVar3 + (longlong)(this->dragon_bone_data).SecondKneeBones.ArrayMax * 2)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = (this->dragon_bone_data).SecondKneeBones.ArrayNum;
            if (iVar20 == (this->dragon_bone_data).SecondKneeBones.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar6->AllocatorInstance,
                                  &(this->dragon_bone_data).SecondKneeBones.ArrayMax);
            }
            FVar8.Number = uStack_10c;
            FVar8.ComparisonIndex.Value = FStack_110.Value;
            (this->dragon_bone_data).SecondKneeBones.ArrayNum = iVar20 + 1;
            pFVar3 = (FName *)((pTVar6->AllocatorInstance).Data + (longlong)iVar20 * 0x10);
            *pFVar3 = local_118;
            pFVar3[1] = FVar8;
            uVar25 = 0;
            if ((int)uVar30 < (this->dragon_bone_data).SecondKneeBones.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FBoneReference::Initialize
                      ((FBoneReference *)
                       ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
            uVar25 = 0;
            if ((int)uVar30 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_108 = *(undefined8 *)
                         ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34 + 0x18
                         );
            pFVar31 = (pTVar2->AllocatorInstance).Data;
            uStack_100 = 0x7fffffff;
            uStack_fc = 0xffffffff;
            if (((pFVar31 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 <
                 pFVar31 + (longlong)(this->dragon_bone_data).ThighBones.ArrayMax * 0x10)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = (this->dragon_bone_data).ThighBones.ArrayNum;
            if (iVar20 == (this->dragon_bone_data).ThighBones.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar2->AllocatorInstance,
                                  &(this->dragon_bone_data).ThighBones.ArrayMax);
            }
            uVar40 = CONCAT44(uStack_fc,uStack_100);
            uVar39 = local_108;
          }
          else {
            uVar25 = 0;
            if ((int)uVar30 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_138 = *(undefined8 *)
                         ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34 + 0x18
                         );
            pFVar31 = (pTVar6->AllocatorInstance).Data;
            uStack_130 = 0x7fffffff;
            uStack_12c = 0xffffffff;
            if (((pFVar31 <= (FScriptContainerElement *)&local_138) &&
                ((FScriptContainerElement *)&local_138 <
                 pFVar31 + (longlong)(this->dragon_bone_data).SecondKneeBones.ArrayMax * 0x10)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = (this->dragon_bone_data).SecondKneeBones.ArrayNum;
            if (iVar20 == (this->dragon_bone_data).SecondKneeBones.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar6->AllocatorInstance,
                                  &(this->dragon_bone_data).SecondKneeBones.ArrayMax);
            }
            (this->dragon_bone_data).SecondKneeBones.ArrayNum = iVar20 + 1;
            pFVar31 = (pTVar6->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
            *(undefined8 *)pFVar31 = local_138;
            *(ulonglong *)(pFVar31 + 8) = CONCAT44(uStack_12c,uStack_130);
            uVar25 = 0;
            if ((int)uVar30 < (this->dragon_bone_data).SecondKneeBones.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            FBoneReference::Initialize
                      ((FBoneReference *)
                       ((pTVar6->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
            uVar25 = 0;
            if ((int)uVar30 < (this->dragon_input_data).FeetBones.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            local_128 = *(undefined8 *)
                         ((this->dragon_input_data).FeetBones.AllocatorInstance.Data + lVar34 + 0x10
                         );
            pFVar31 = (pTVar2->AllocatorInstance).Data;
            uStack_120 = 0x7fffffff;
            uStack_11c = 0xffffffff;
            if (((pFVar31 <= (FScriptContainerElement *)&local_128) &&
                ((FScriptContainerElement *)&local_128 <
                 pFVar31 + (longlong)(this->dragon_bone_data).ThighBones.ArrayMax * 0x10)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iVar20 = (this->dragon_bone_data).ThighBones.ArrayNum;
            if (iVar20 == (this->dragon_bone_data).ThighBones.ArrayMax) {
              iVar20 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x410,&pTVar2->AllocatorInstance,
                                  &(this->dragon_bone_data).ThighBones.ArrayMax);
            }
            uVar40 = CONCAT44(uStack_11c,uStack_120);
            uVar39 = local_128;
          }
          (this->dragon_bone_data).ThighBones.ArrayNum = iVar20 + 1;
          pFVar31 = (pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
          *(undefined8 *)pFVar31 = uVar39;
          *(undefined8 *)(pFVar31 + 8) = uVar40;
          uVar25 = 0;
          if ((int)uVar30 < (this->dragon_bone_data).ThighBones.ArrayNum) {
            uVar25 = ~uVar30 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FBoneReference::Initialize
                    ((FBoneReference *)
                     ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar30 * 0x10),param_1);
          iVar20 = (this->dragon_input_data).FeetBones.ArrayNum;
          uVar30 = uVar30 + 1;
          lVar34 = lVar34 + 0xd0;
        } while ((int)uVar30 < iVar20);
      }
      this->is_initialized = true;
    }
  }
  return;
}

// Initialize_AnyThread @ 14d300110

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
FAnimNode_DragonFeetSolver::Initialize_AnyThread
          (FAnimNode_DragonFeetSolver *this,FAnimationInitializeContext *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  USkeletalMeshComponent *pUVar5;
  longlong lVar6;
  uint uVar7;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_DragonControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  if (*(FAnimInstanceProxy **)param_1 != (FAnimInstanceProxy *)0x0) {
    pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(*(FAnimInstanceProxy **)param_1);
    this->owning_skel = pUVar5;
    pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(*(FAnimInstanceProxy **)param_1);
    if (pUVar5 != (USkeletalMeshComponent *)0x0) {
      pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(*(FAnimInstanceProxy **)param_1);
      this->Character_Actor = (AActor *)pUVar5->_padding_;
    }
  }
  uVar7 = 0;
  if (0 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->sticky_sockets_data).sticky_socket_array.AllocatorInstance.Data;
      if (pFVar1[lVar6] != (FScriptContainerElement)0x0) {
        FSocketReference::InitializeSocketInfo
                  ((FSocketReference *)(pFVar1 + lVar6 + 0x20),*(FAnimInstanceProxy **)param_1);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x90;
    } while ((int)uVar7 < (this->sticky_sockets_data).sticky_socket_array.ArrayNum);
  }
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->OptionalRefPose,param_1);
  return;
}

// IsValidToEvaluate @ 14d300bc0

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
FAnimNode_DragonFeetSolver::IsValidToEvaluate
          (FAnimNode_DragonFeetSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  iVar7 = (this->dragon_bone_data).FeetBones.ArrayNum;
  bVar5 = true;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)
                         ((this->dragon_bone_data).FeetBones.AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 0x10),param_2);
      if (!bVar3) {
        bVar5 = false;
      }
      if (this->automatic_leg_make == false) {
        uVar6 = 0;
        if ((int)uVar8 < (this->dragon_bone_data).KneeBones.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (FName *)((this->dragon_bone_data).KneeBones.AllocatorInstance.Data + lVar10);
        local_48._0_8_ = *pFVar1;
        local_48._8_8_ = pFVar1[1];
        bVar3 = FBoneReference::IsValidToEvaluate((FBoneReference *)local_48,param_2);
        if (!bVar3) {
          bVar5 = false;
        }
        uVar6 = 0;
        if ((int)uVar8 < (this->dragon_bone_data).ThighBones.ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (FName *)((this->dragon_bone_data).ThighBones.AllocatorInstance.Data + lVar10);
        local_38._0_8_ = *pFVar1;
        local_38._8_8_ = pFVar1[1];
        bVar3 = FBoneReference::IsValidToEvaluate((FBoneReference *)local_38,param_2);
        if (!bVar3) {
          bVar5 = false;
        }
      }
      iVar7 = (this->dragon_bone_data).FeetBones.ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar8 < iVar7);
  }
  if (this->SpineBoneName == (FName)0x0) {
    this->solve_should_fail = true;
  }
  if ((((this->solve_should_fail == false) && (bVar5)) &&
      (bVar5 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Start_Spine,param_2),
      bVar5)) &&
     ((bVar5 = FBoneReference::IsValidToEvaluate(&(this->dragon_bone_data).Pelvis,param_2), bVar5 &&
      (bVar5 = FBoneContainer::BoneIsChildOf
                         (param_2,(this->dragon_bone_data).Start_Spine.BoneIndex,
                          (this->dragon_bone_data).Pelvis.BoneIndex), bVar5)))) {
    return true;
  }
  return false;
}

// Leg_Full_Function @ 14d301420

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
FAnimNode_DragonFeetSolver::Leg_Full_Function
          (FAnimNode_DragonFeetSolver *this,FName param_1,int param_2,int param_3,
          FComponentSpacePoseContext *param_4,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UWorld *pUVar5;
  uint uVar6;
  FBoneReference local_38;
  FBoneReference local_28;
  FBoneReference local_18;
  
  local_38.bUseSkeletonIndex = 0;
  local_38.BoneIndex = -1;
  local_38.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_38.BoneName = param_1;
  FBoneReference::Initialize(&local_38,this->SavedBoneContainer);
  if (this->solver_time_reference <= __real_3e800000 &&
      __real_3e800000 != this->solver_time_reference) {
    uVar6 = 0;
    if (param_2 < (this->feet_Alpha_array).ArrayNum) {
      uVar6 = (uint)~param_2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->feet_Alpha_array).AllocatorInstance.Data;
    uVar6 = 0;
    if (param_3 < *(int *)(pFVar1 + (longlong)param_2 * 0x10 + 8)) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(pFVar1 + (longlong)param_2 * 0x10) + (longlong)param_3 * 4) = 0;
  }
  uVar3._4_4_ = local_38.CachedCompactPoseIndex;
  uVar3._0_4_ = local_38._8_4_;
  if (this->ik_type == ENUM_Two_Bone_Ik) {
    local_28.BoneName = local_38.BoneName;
    local_28._8_8_ = uVar3;
    Leg_ik_Function(this,&local_28,param_2,param_3,(TEnumAsByte<EBoneControlSpace>)0x0,
                    (TEnumAsByte<EBoneControlSpace>)0x1,param_4,param_5);
  }
  else {
    local_18.BoneName = local_38.BoneName;
    local_18._8_8_ = uVar3;
    Leg_Singleik_Function
              (this,&local_18,param_2,param_3,(TEnumAsByte<EBoneControlSpace>)0x0,
               (TEnumAsByte<EBoneControlSpace>)0x1,param_4,param_5);
  }
  pUVar5 = (UWorld *)this->owning_skel->_padding_;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar5 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
  }
  if (((pUVar5->WorldType).Value == '\x04') && (this->execute_in_preview == false)) {
    param_5->ArrayNum = 0;
    if (param_5->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
    }
  }
  return;
}

// Leg_Singleik_Function @ 14d301610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_DragonFeetSolver::Leg_Singleik_Function
          (FAnimNode_DragonFeetSolver *this,FBoneReference *param_1,int param_2,int param_3,
          TEnumAsByte<EBoneControlSpace> param_4,TEnumAsByte<EBoneControlSpace> param_5,
          FComponentSpacePoseContext *param_6,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_7)

{
  double *pdVar1;
  float fVar2;
  FBoneContainer *this_00;
  FScriptContainerElement *pFVar3;
  FCompactPoseBoneIndex *pFVar4;
  code *pcVar5;
  double adVar6 [2];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double adVar25 [2];
  FComponentSpacePoseContext *pFVar26;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  TTransform<double> *pTVar31;
  TVector<double> *pTVar32;
  longlong lVar33;
  TQuat<double> *pTVar34;
  UWorld *pUVar35;
  uint uVar36;
  longlong lVar37;
  FCompactPoseBoneIndex FVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  longlong lVar44;
  bool bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auStackY_828 [32];
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7b8;
  FCompactPoseBoneIndex local_7a8;
  FCompactPoseBoneIndex local_7a4;
  FScriptContainerElement *local_7a0;
  FScriptContainerElement *local_798;
  EBoneControlSpace local_790;
  FComponentSpacePoseContext *local_788;
  double local_778;
  double dStack_770;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_750;
  TVector<double>_u_0 local_738;
  double local_720;
  double dStack_718;
  double local_710;
  FName local_708;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_700;
  undefined1 local_6f8 [16];
  double local_6e8;
  double local_6e0;
  double dStack_6d8;
  double local_6d0;
  undefined1 local_6c8 [16];
  double local_6b8;
  double local_6b0;
  double local_6a8;
  undefined1 local_698 [32];
  undefined1 local_678 [16];
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double local_640;
  double dStack_638;
  double local_630;
  double local_628;
  double dStack_620;
  double local_618;
  undefined1 local_610 [16];
  double local_600;
  undefined1 local_5f8 [16];
  double local_5e8;
  undefined1 local_5e0 [16];
  double local_5d0;
  TRotator<double> local_5c8;
  undefined1 local_5a8 [16];
  double local_598;
  double local_588;
  double dStack_580;
  double local_578;
  TVector<double> local_570;
  TQuat<double> local_558;
  TTransform<double> local_538;
  TTransform<double> local_4d8;
  FCompactPoseBoneIndex local_478;
  undefined4 uStack_474;
  undefined8 uStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  FCompactPoseBoneIndex local_408;
  undefined4 uStack_404;
  undefined8 uStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  TTransform<double> local_398;
  TTransform<double> local_338;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_828;
  lVar44 = (longlong)param_2;
  local_700 = param_7;
  lVar41 = (longlong)param_3;
  local_788 = param_6;
  FBoneReference::GetCompactPoseIndex(param_1,(FBoneContainer *)&local_7a4);
  FBoneContainer::GetParentBoneIndex(this->SavedBoneContainer,&local_7a8);
  local_5a8 = *(undefined1 (*) [16])&(this->character_direction_vector_CS).field0_0x0;
  local_598 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
  bVar45 = local_7a8 != (FCompactPoseBoneIndex)0xffffffff;
  dVar9 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
  auVar75._8_8_ = 0;
  auVar75._0_8_ = local_598;
  auVar66 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
  local_678 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
  dVar63 = local_5a8._8_8_;
  local_790 = (EBoneControlSpace)param_4.Value;
  dVar8 = auVar66._0_8_;
  auVar56 = blendpd(local_678,auVar66,2);
  auVar72._0_8_ = dVar63 * local_678._0_8_ - local_678._8_8_ * local_5a8._0_8_;
  auVar72._8_8_ = local_598 * local_678._8_8_ - dVar8 * dVar63;
  auVar49 = blendpd(local_5a8,auVar75,2);
  auVar57._0_8_ = auVar49._0_8_ * dVar8 - auVar56._0_8_ * local_598;
  auVar57._8_8_ = auVar49._8_8_ * auVar66._8_8_ - auVar56._8_8_ * 0.0;
  auVar49 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
  auVar56 = blendpd(auVar72,auVar57,2);
  dVar55 = auVar72._8_8_ + auVar72._8_8_;
  dVar7 = auVar57._0_8_ + auVar57._0_8_;
  uVar69 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar73._0_8_ = auVar56._0_8_ + auVar56._0_8_;
  auVar73._8_8_ = auVar56._8_8_ + auVar56._8_8_;
  auVar64._8_4_ = SUB84(dVar7,0);
  auVar64._0_8_ = dVar55;
  auVar64._12_4_ = uVar69;
  auVar56._8_4_ = SUB84(dVar7,0);
  auVar56._0_8_ = dVar55;
  auVar56._12_4_ = uVar69;
  auVar56 = blendpd(auVar56,auVar73,2);
  auVar65._0_8_ = auVar64._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar55;
  auVar65._8_8_ = auVar73._0_8_ * auVar49._8_8_ - dVar8 * dVar7;
  auVar57 = blendpd(auVar49,auVar66,2);
  auVar49._8_4_ = SUB84(auVar65._8_8_,0);
  auVar49._0_8_ = auVar65._0_8_;
  auVar49._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  auVar60._0_8_ = auVar56._0_8_ * dVar8 - auVar57._0_8_ * auVar73._0_8_;
  auVar60._8_8_ = auVar56._8_8_ * auVar66._8_8_ - auVar57._8_8_ * auVar73._8_8_;
  auVar66 = blendpd(auVar65,auVar60,2);
  dVar8 = dVar7 * dVar9 + dVar63 + auVar60._0_8_;
  local_6e8 = auVar73._0_8_ * dVar9 + local_598 + auVar66._0_8_;
  local_6f8._8_4_ = SUB84(dVar8,0);
  local_6f8._0_8_ = dVar55 * dVar9 + local_5a8._0_8_ + auVar49._8_8_;
  local_6f8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  if ((byte)(param_4.Value - 2) < 2) {
    this_00 = this->SavedBoneContainer;
    ::FName::FName(&local_708,"");
    uVar28 = FBoneContainer::GetPoseBoneIndexForBoneName(this_00,&local_708);
  }
  else {
    uVar28 = 0xffffffff;
  }
  pFVar3 = (this->SavedBoneContainer->BoneIndicesArray).AllocatorInstance.Data;
  pFVar39 = pFVar3;
  do {
    if (pFVar39 == pFVar3 + (longlong)(this->SavedBoneContainer->BoneIndicesArray).ArrayNum * 2) {
      FVar38 = (FCompactPoseBoneIndex)0xffffffff;
LAB_14d30182c:
      if (bVar45) {
        pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_6->Pose,local_7a8);
        local_4d8.Rotation.XY.m128d_f64[0] = (pTVar31->Rotation).XY.m128d_f64[0];
        local_4d8.Rotation.XY.m128d_f64[1] = (pTVar31->Rotation).XY.m128d_f64[1];
        local_4d8.Rotation.ZW.m128d_f64 = *&(pTVar31->Rotation).ZW.m128d_f64;
        local_4d8.Translation.XY.m128d_f64[0] = (pTVar31->Translation).XY.m128d_f64[0];
        local_4d8.Translation.XY.m128d_f64[1] = (pTVar31->Translation).XY.m128d_f64[1];
        local_4d8.Translation.ZW.m128d_f64[0] = (pTVar31->Translation).ZW.m128d_f64[0];
        local_4d8.Translation.ZW.m128d_f64[1] = (pTVar31->Translation).ZW.m128d_f64[1];
        local_4d8.Scale3D.XY.m128d_f64[0] = (pTVar31->Scale3D).XY.m128d_f64[0];
        local_4d8.Scale3D.XY.m128d_f64[1] = (pTVar31->Scale3D).XY.m128d_f64[1];
        local_4d8.Scale3D.ZW.m128d_f64[0] = (pTVar31->Scale3D).ZW.m128d_f64[0];
        local_4d8.Scale3D.ZW.m128d_f64[1] = (pTVar31->Scale3D).ZW.m128d_f64[1];
        pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_6->Pose,local_7a4);
        uVar40 = 0;
        local_538.Rotation.XY.m128d_f64[0] = (pTVar31->Rotation).XY.m128d_f64[0];
        local_538.Rotation.XY.m128d_f64[1] = (pTVar31->Rotation).XY.m128d_f64[1];
        local_538.Rotation.ZW.m128d_f64[0] = (pTVar31->Rotation).ZW.m128d_f64[0];
        local_538.Rotation.ZW.m128d_f64[1] = (pTVar31->Rotation).ZW.m128d_f64[1];
        local_6e0 = (pTVar31->Translation).XY.m128d_f64[0];
        dStack_6d8 = (pTVar31->Translation).XY.m128d_f64[1];
        local_538.Translation.XY.m128d_f64 = *&(pTVar31->Translation).XY.m128d_f64;
        uVar36 = (uint)~param_2 >> 0x1f;
        local_6d0 = (pTVar31->Translation).ZW.m128d_f64[0];
        local_538.Translation.ZW.m128d_f64[1] = (pTVar31->Translation).ZW.m128d_f64[1];
        local_538.Scale3D.XY.m128d_f64[0] = (pTVar31->Scale3D).XY.m128d_f64[0];
        local_538.Scale3D.XY.m128d_f64[1] = (pTVar31->Scale3D).XY.m128d_f64[1];
        local_538.Scale3D.ZW.m128d_f64[0] = (pTVar31->Scale3D).ZW.m128d_f64[0];
        local_538.Scale3D.ZW.m128d_f64[1] = (pTVar31->Scale3D).ZW.m128d_f64[1];
        uVar28 = uVar40;
        if (param_2 < (this->spine_hit_pairs).ArrayNum) {
          uVar28 = uVar36;
        }
        local_710 = local_4d8.Translation.ZW.m128d_f64[0];
        local_720 = local_4d8.Translation.XY.m128d_f64[0];
        dStack_718 = local_4d8.Translation.XY.m128d_f64[1];
        local_538.Translation.ZW.m128d_f64[0] = local_6d0;
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->spine_hit_pairs).AllocatorInstance.Data;
        local_778 = (double)(lVar44 * 0x5f8);
        uVar43 = (uint)~param_3 >> 0x1f;
        uVar28 = uVar40;
        if (param_3 < *(int *)(pFVar3 + (longlong)local_778 + 0x580)) {
          uVar28 = uVar43;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar37 = lVar41 * 0x100;
        dVar8 = 0.0;
        if (((*(byte *)(*(longlong *)(pFVar3 + (longlong)local_778 + 0x578) + 0xad + lVar37) & 1) ==
             0) || (this->atleast_one_hit == false)) {
          local_398.Rotation.XY.m128d_f64[0] = local_538.Rotation.XY.m128d_f64[0];
          local_398.Rotation.XY.m128d_f64[1] = local_538.Rotation.XY.m128d_f64[1];
          uVar28 = uVar40;
          if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
            uVar28 = uVar36;
          }
          local_398.Rotation.ZW.m128d_f64[0] = local_538.Rotation.ZW.m128d_f64[0];
          local_398.Rotation.ZW.m128d_f64[1] = local_538.Rotation.ZW.m128d_f64[1];
          local_398.Translation.XY.m128d_f64[0] = local_538.Translation.XY.m128d_f64[0];
          local_398.Translation.XY.m128d_f64[1] = local_538.Translation.XY.m128d_f64[1];
          local_398.Translation.ZW.m128d_f64[0] = local_538.Translation.ZW.m128d_f64[0];
          local_398.Translation.ZW.m128d_f64[1] = local_538.Translation.ZW.m128d_f64[1];
          local_398.Scale3D.XY.m128d_f64[0] = local_538.Scale3D.XY.m128d_f64[0];
          local_398.Scale3D.XY.m128d_f64[1] = local_538.Scale3D.XY.m128d_f64[1];
          local_398.Scale3D.ZW.m128d_f64[0] = local_538.Scale3D.ZW.m128d_f64[0];
          local_398.Scale3D.ZW.m128d_f64[1] = local_538.Scale3D.ZW.m128d_f64[1];
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_mod_transform_array).AllocatorInstance.Data;
          lVar42 = lVar44 * 0x10;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_798 = (FScriptContainerElement *)(lVar41 * 0x60);
          local_658 = local_398.Translation.XY.m128d_f64[0];
          dStack_650 = local_398.Translation.XY.m128d_f64[1];
          lVar33 = *(longlong *)(pFVar3 + lVar42);
          local_648 = local_398.Translation.ZW.m128d_f64[0];
          pdVar1 = (double *)(lVar33 + 0x20 + (longlong)local_798);
          *pdVar1 = local_398.Translation.XY.m128d_f64[0];
          pdVar1[1] = local_398.Translation.XY.m128d_f64[1];
          pdVar1 = (double *)(lVar33 + 0x30 + (longlong)local_798);
          *pdVar1 = local_398.Translation.ZW.m128d_f64[0];
          pdVar1[1] = 0.0;
          FAnimationRuntime::ConvertCSTransformToBoneSpace
                    (&this->owner_skel_w_transform,&local_788->Pose,&local_398,FVar38,local_790);
          local_630 = local_398.Translation.ZW.m128d_f64[0];
          local_768._s_0.Z = local_398.Translation.ZW.m128d_f64[0];
          fVar59 = this->shift_speed * __real_3f000000;
          local_640 = local_398.Translation.XY.m128d_f64[0];
          dStack_638 = local_398.Translation.XY.m128d_f64[1];
          local_768._s_0.X = local_398.Translation.XY.m128d_f64[0];
          local_768._s_0.Y = local_398.Translation.XY.m128d_f64[1];
          fVar48 = expf(this->delta_seconds_saved * __real_c1200000);
          fVar48 = __real_3f800000 - fVar48;
          uVar28 = uVar40;
          if (param_2 < (this->feet_Alpha_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar55 = UKismetMathLibrary::FInterpTo
                             ((double)*(float *)(*(longlong *)(pFVar3 + lVar42) + lVar41 * 4),0.0,
                              (double)fVar48,(double)fVar59);
          uVar28 = uVar40;
          if (param_2 < (this->feet_Alpha_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7b8 = (this->feet_Alpha_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7b8 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          local_2d8.Rotation.XY.m128d_f64[0] = local_538.Rotation.XY.m128d_f64[0];
          local_2d8.Rotation.XY.m128d_f64[1] = local_538.Rotation.XY.m128d_f64[1];
          local_2d8.Rotation.ZW.m128d_f64[0] = local_538.Rotation.ZW.m128d_f64[0];
          local_2d8.Rotation.ZW.m128d_f64[1] = local_538.Rotation.ZW.m128d_f64[1];
          local_2d8.Translation.XY.m128d_f64[0] = local_538.Translation.XY.m128d_f64[0];
          local_2d8.Translation.XY.m128d_f64[1] = local_538.Translation.XY.m128d_f64[1];
          local_2d8.Translation.ZW.m128d_f64[0] = local_538.Translation.ZW.m128d_f64[0];
          local_2d8.Translation.ZW.m128d_f64[1] = local_538.Translation.ZW.m128d_f64[1];
          local_2d8.Scale3D.XY.m128d_f64[0] = local_538.Scale3D.XY.m128d_f64[0];
          local_2d8.Scale3D.XY.m128d_f64[1] = local_538.Scale3D.XY.m128d_f64[1];
          local_2d8.Scale3D.ZW.m128d_f64[0] = local_538.Scale3D.ZW.m128d_f64[0];
          local_2d8.Scale3D.ZW.m128d_f64[1] = local_538.Scale3D.ZW.m128d_f64[1];
          FAnimationRuntime::ConvertCSTransformToBoneSpace
                    (&this->owner_skel_w_transform,&local_788->Pose,&local_2d8,FVar38,local_790);
          uVar28 = uVar40;
          if (param_2 < (this->spine_hit_pairs).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->spine_hit_pairs).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + (longlong)local_778 + 0x580)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((*(byte *)(lVar37 + 0xad + *(longlong *)(pFVar3 + (longlong)local_778 + 0x578)) & 1)
              != 0) {
            uVar28 = uVar40;
            if (param_2 < (this->spine_hit_pairs).ArrayNum) {
              uVar28 = uVar36;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (this->spine_hit_pairs).AllocatorInstance.Data;
            uVar28 = uVar40;
            if (param_3 < *(int *)(pFVar3 + (longlong)local_778 + 0x580)) {
              uVar28 = uVar43;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_7a0 = *(FScriptContainerElement **)(pFVar3 + (longlong)local_778 + 0x578);
            uVar28 = uVar40;
            if (param_2 < (this->FeetRootHeights).ArrayNum) {
              uVar28 = uVar36;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_798 = (this->FeetRootHeights).AllocatorInstance.Data;
            uVar28 = uVar40;
            if (param_3 < *(int *)(local_798 + lVar44 * 0x10 + 8)) {
              uVar28 = uVar43;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            dVar55 = (double)*(float *)(*(longlong *)(local_798 + lVar44 * 0x10) + lVar41 * 4);
            local_768._s_0.X =
                 (double)local_6f8._0_8_ * dVar55 + *(double *)((longlong)local_7a0 + 0x28 + lVar37)
            ;
            local_768._s_0.Y =
                 (double)local_6f8._8_8_ * dVar55 + *(double *)((longlong)local_7a0 + 0x30 + lVar37)
            ;
            local_768._s_0.Z = local_6e8 * dVar55 + *(double *)((longlong)local_7a0 + 0x38 + lVar37)
            ;
            pTVar32 = UE::Math::TTransform<double>::InverseTransformPosition
                                (&this->owner_skel_w_transform,&local_570,
                                 (TVector<double> *)&local_768._s_0);
            local_768._s_0.X = (pTVar32->field0_0x0)._s_0.X;
            local_768._s_0.Y = (pTVar32->field0_0x0)._s_0.Y;
            local_768._s_0.Z = (pTVar32->field0_0x0)._s_0.Z;
            if (this->interpolate_only_z != false) {
              local_578 = local_538.Translation.ZW.m128d_f64[0];
              local_768._s_0.X = local_538.Translation.XY.m128d_f64[0];
              local_768._s_0.Y = local_538.Translation.XY.m128d_f64[1];
              local_588 = local_538.Translation.XY.m128d_f64[0];
              dStack_580 = local_538.Translation.XY.m128d_f64[1];
            }
          }
          uVar28 = uVar40;
          if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_mod_transform_array).AllocatorInstance.Data;
          lVar42 = lVar44 * 0x10;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_798 = (FScriptContainerElement *)(lVar41 * 0x60);
          lVar33 = *(longlong *)(pFVar3 + lVar42);
          pdVar1 = (double *)((longlong)local_798 + 0x20 + lVar33);
          *pdVar1 = local_768._s_0.X;
          pdVar1[1] = local_768._s_0.Y;
          pdVar1 = (double *)((longlong)local_798 + 0x30 + lVar33);
          *pdVar1 = local_768._s_0.Z;
          pdVar1[1] = 0.0;
          uVar28 = uVar40;
          if (param_2 < (this->spine_Feet_pair).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7a0 = (this->spine_Feet_pair).AllocatorInstance.Data;
          lVar33 = lVar44 * 0x170;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7a0 + lVar33 + 0x138)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar48 = __real_3f800000;
          iVar30 = *(int *)(*(longlong *)(local_7a0 + lVar33 + 0x130) + lVar41 * 4);
          local_7a0 = (FScriptContainerElement *)CONCAT44(local_7a0._4_4_,iVar30);
          fVar59 = __real_3f800000;
          if (iVar30 < (this->feet_alpha_multiplier_array).feet_IK_alpha_array.ArrayNum) {
            if ((iVar30 < 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar59 = *(float *)((this->feet_alpha_multiplier_array).feet_IK_alpha_array.
                                AllocatorInstance.Data + (longlong)(int)(uint)local_7a0 * 4);
          }
          fVar46 = this->shift_speed * __real_3f000000;
          fVar47 = expf(this->delta_seconds_saved * __real_c1200000);
          uVar28 = uVar40;
          if (param_2 < (this->spine_Feet_pair).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7a0 = (this->spine_Feet_pair).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7a0 + lVar33 + 0x138)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar28 = *(uint *)(*(longlong *)(local_7a0 + lVar33 + 0x130) + lVar41 * 4);
          local_7a0 = (FScriptContainerElement *)CONCAT44(local_7a0._4_4_,uVar28);
          uVar29 = uVar40;
          if ((int)uVar28 < (this->dragon_input_data).FeetBones.ArrayNum) {
            uVar29 = ~uVar28 >> 0x1f;
          }
          if (uVar29 == 0) {
            bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar45) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar28 = (uint)local_7a0;
          }
          fVar2 = *(float *)((this->dragon_input_data).FeetBones.AllocatorInstance.Data +
                            (longlong)(int)uVar28 * 0xd0 + 0x8c);
          uVar28 = uVar40;
          if (param_2 < (this->feet_Alpha_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar55 = UKismetMathLibrary::FInterpTo
                             ((double)*(float *)(*(longlong *)(pFVar3 + lVar42) + lVar41 * 4),
                              (double)(fVar59 * fVar2),(double)(fVar48 - fVar47),(double)fVar46);
          uVar28 = uVar40;
          if (param_2 < (this->feet_Alpha_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7b8 = (this->feet_Alpha_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7b8 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        lVar42 = lVar44 * 0x10;
        *(float *)(*(longlong *)(local_7b8 + lVar42) + lVar41 * 4) = (float)dVar55;
        uVar28 = uVar40;
        if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
          uVar28 = uVar36;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->feet_mod_transform_array).AllocatorInstance.Data;
        uVar28 = uVar40;
        if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
          uVar28 = uVar43;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar71 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
        lVar33 = *(longlong *)(pFVar3 + lVar42);
        local_618 = *(double *)(lVar33 + 0x30 + (longlong)local_798);
        pdVar1 = (double *)(lVar33 + 0x20 + (longlong)local_798);
        local_628 = *pdVar1;
        dStack_620 = pdVar1[1];
        dVar63 = local_618 * (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
        dVar7 = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] * 0.0;
        local_698._0_16_ =
             *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
        dVar70 = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] * local_628;
        dVar74 = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] * dStack_620;
        auVar66 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
        auVar76._8_4_ = SUB84(dVar74,0);
        auVar76._0_8_ = dVar70;
        uVar69 = (undefined4)((ulonglong)dVar74 >> 0x20);
        auVar76._12_4_ = uVar69;
        auVar57 = blendpd(local_698._0_16_,auVar66,2);
        dVar55 = auVar66._0_8_;
        auVar77._0_8_ = auVar76._8_8_ * local_698._0_8_ - local_698._8_8_ * dVar70;
        auVar77._8_8_ = dVar63 * local_698._8_8_ - dVar55 * dVar74;
        auVar50._8_4_ = SUB84(dVar74,0);
        auVar50._0_8_ = dVar70;
        auVar50._12_4_ = uVar69;
        auVar10._8_4_ = SUB84(dVar7,0);
        auVar10._0_8_ = dVar63;
        auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar49 = blendpd(auVar50,auVar10,2);
        auVar51._0_8_ = auVar49._0_8_ * dVar55 - auVar57._0_8_ * dVar63;
        auVar51._8_8_ = auVar49._8_8_ * auVar66._8_8_ - auVar57._8_8_ * dVar7;
        auVar49 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
        auVar57 = blendpd(auVar77,auVar51,2);
        dVar7 = auVar77._8_8_ + auVar77._8_8_;
        dVar9 = auVar51._0_8_ + auVar51._0_8_;
        uVar69 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar78._0_8_ = auVar57._0_8_ + auVar57._0_8_;
        auVar78._8_8_ = auVar57._8_8_ + auVar57._8_8_;
        auVar67._8_4_ = SUB84(dVar9,0);
        auVar67._0_8_ = dVar7;
        auVar67._12_4_ = uVar69;
        auVar61._8_4_ = SUB84(dVar9,0);
        auVar61._0_8_ = dVar7;
        auVar61._12_4_ = uVar69;
        auVar57 = blendpd(auVar49,auVar66,2);
        auVar68._0_8_ = auVar67._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar7;
        auVar68._8_8_ = auVar78._0_8_ * auVar49._8_8_ - dVar55 * dVar9;
        auVar49 = blendpd(auVar61,auVar78,2);
        auVar52._8_4_ = SUB84(auVar68._8_8_,0);
        auVar52._0_8_ = auVar68._0_8_;
        auVar52._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
        auVar62._0_8_ = auVar49._0_8_ * dVar55 - auVar57._0_8_ * auVar78._0_8_;
        auVar62._8_8_ = auVar49._8_8_ * auVar66._8_8_ - auVar57._8_8_ * auVar78._8_8_;
        local_338.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_338.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_338.Translation.XY.m128d_f64[0] =
             dVar7 * dVar71 + dVar70 + auVar52._8_8_ +
             (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
        local_338.Translation.XY.m128d_f64[1] =
             dVar9 * dVar71 + dVar74 + auVar62._0_8_ +
             (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
        local_338.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_338.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        auVar66 = blendpd(auVar68,auVar62,2);
        local_610._8_4_ = SUB84(local_338.Translation.XY.m128d_f64[1],0);
        local_610._0_8_ = local_338.Translation.XY.m128d_f64[0];
        local_610._12_4_ = (int)((ulonglong)local_338.Translation.XY.m128d_f64[1] >> 0x20);
        local_600 = auVar78._0_8_ * dVar71 + dVar63 + auVar66._0_8_ +
                    (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0];
        local_338.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_338.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_338.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_338.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_338.Translation.ZW.m128d_f64[1] = 0.0;
        local_338.Translation.ZW.m128d_f64[0] = local_600;
        FAnimationRuntime::ConvertBoneSpaceTransformToCS
                  (&this->owner_skel_w_transform,&local_788->Pose,&local_338,FVar38,local_790);
        dVar9 = dStack_718;
        dVar7 = local_720;
        local_5f8._8_8_ = local_338.Translation.XY.m128d_f64[1];
        local_5f8._0_8_ = local_338.Translation.XY.m128d_f64[0];
        dVar55 = local_338.Translation.XY.m128d_f64[0] - local_720;
        auVar11._4_8_ = dVar74;
        auVar11._0_4_ = (int)((ulonglong)local_338.Translation.XY.m128d_f64[0] >> 0x20);
        auVar66._0_8_ = auVar11._0_8_ << 0x20;
        auVar66._8_4_ = SUB84(local_338.Translation.XY.m128d_f64[1],0);
        auVar66._12_4_ = (int)((ulonglong)local_338.Translation.XY.m128d_f64[1] >> 0x20);
        dVar63 = local_338.Translation.ZW.m128d_f64[0] - local_710;
        dVar71 = auVar66._8_8_ - dStack_718;
        local_5e8 = local_338.Translation.ZW.m128d_f64[0];
        fVar59 = (float)SQRT(dVar71 * dVar71 + dVar55 * dVar55 + dVar63 * dVar63);
        if (__real_38d1b717 <= fVar59) {
          dVar70 = __real_3ff0000000000000 / (double)fVar59;
          dVar55 = dVar55 * dVar70;
          dVar8 = dVar71 * dVar70;
          dVar63 = dVar63 * dVar70;
        }
        else {
          dVar63 = 0.0;
          dVar55 = __real_3ff0000000000000;
          fVar59 = __real_38d1b717;
        }
        local_738._s_0.X = local_6e0 - local_720;
        local_738._s_0.Y = dStack_6d8 - dStack_718;
        local_738._s_0.Z = local_6d0 - local_710;
        auVar53._0_8_ = local_738._s_0.X * local_738._s_0.X;
        auVar53._8_8_ = 0;
        auVar58._0_8_ =
             local_738._s_0.Y * local_738._s_0.Y + auVar53._0_8_ +
             local_738._s_0.Z * local_738._s_0.Z;
        auVar58._8_8_ = 0;
        auVar66 = sqrtpd(auVar53,auVar58);
        if (fVar59 <= (float)auVar66._0_8_) {
          local_5d0 = local_338.Translation.ZW.m128d_f64[0];
          dVar55 = local_338.Translation.XY.m128d_f64[0];
          dVar63 = local_338.Translation.ZW.m128d_f64[0];
          local_5e0 = local_5f8;
          dVar8 = local_338.Translation.XY.m128d_f64[1];
        }
        else {
          dVar71 = (double)(float)auVar66._0_8_;
          dVar55 = dVar55 * dVar71 + local_720;
          dVar63 = dVar63 * dVar71 + local_710;
          dVar8 = dVar8 * dVar71 + dStack_718;
        }
        uVar69 = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_6c8._8_4_ = SUB84(dVar8,0);
        local_6c8._0_8_ = dVar55;
        local_6c8._12_4_ = uVar69;
        if (auVar58._0_8_ != __real_3ff0000000000000) {
          if (__real_3e45798ee0000000 <= auVar58._0_8_) {
            local_6b0 = __real_3ff0000000000000 / SQRT(auVar58._0_8_);
            local_738._s_0.X = local_6b0 * local_738._s_0.X;
            local_738._s_0.Y = local_6b0 * local_738._s_0.Y;
            local_738._s_0.Z = local_6b0 * local_738._s_0.Z;
          }
          else {
            local_738._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_738._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_738._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
        }
        local_750._s_0.Z = dVar63 - local_710;
        local_750._s_0.X = dVar55 - local_720;
        local_750._s_0.Y = dVar8 - dStack_718;
        dVar71 = local_750._s_0.Y * local_750._s_0.Y + local_750._s_0.X * local_750._s_0.X +
                 local_750._s_0.Z * local_750._s_0.Z;
        if (dVar71 != __real_3ff0000000000000) {
          if (__real_3e45798ee0000000 <= dVar71) {
            local_6a8 = __real_3ff0000000000000 / SQRT(dVar71);
            local_750._s_0.X = local_750._s_0.X * local_6a8;
            local_750._s_0.Y = local_750._s_0.Y * local_6a8;
            local_750._s_0.Z = local_750._s_0.Z * local_6a8;
          }
          else {
            local_750._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_750._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_750._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        local_6b8 = dVar63;
        UE::Math::TQuat<double>::FindBetweenNormals
                  ((TQuat<double> *)local_698,(TVector<double> *)&local_738._s_0,
                   (TVector<double> *)&local_750._s_0);
        dVar71 = local_698._24_8_;
        uVar28 = uVar40;
        if (param_2 < (this->spine_hit_pairs).ArrayNum) {
          uVar28 = uVar36;
        }
        dVar70 = local_698._16_8_;
        local_538.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
        local_538.Translation.XY.m128d_f64[0] = dVar55;
        local_538.Translation.XY.m128d_f64[1]._4_4_ = uVar69;
        auVar54._8_4_ = local_698._16_4_;
        auVar54._0_8_ = dVar70;
        auVar54._12_4_ = local_698._20_4_;
        local_538.Translation.ZW.m128d_f64[1] = 0.0;
        dVar8 = (double)local_698._0_8_ * local_4d8.Rotation.XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                local_4d8.Rotation.ZW.m128d_f64[1] * dVar71 +
                (double)local_698._8_8_ * local_4d8.Rotation.XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                auVar54._8_8_ * local_4d8.Rotation.ZW.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_4d8.Translation.XY.m128d_f64[0] = dVar7;
        local_4d8.Translation.XY.m128d_f64[1] = dVar9;
        adVar6[1]._0_4_ = SUB84(dVar8,0);
        adVar6[0] = (double)local_698._0_8_ * local_4d8.Rotation.XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    local_4d8.Rotation.ZW.m128d_f64[0] * dVar71 +
                    (double)local_698._8_8_ * local_4d8.Rotation.XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar70 * local_4d8.Rotation.ZW.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        adVar6[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
        dVar8 = dVar70 * local_4d8.Rotation.XY.m128d_f64[0];
        local_4d8.Translation.ZW.m128d_f64[0] = local_710;
        local_4d8.Translation.ZW.m128d_f64[1] = 0.0;
        local_4d8.Rotation.XY.m128d_f64[0] =
             (double)local_698._0_8_ * local_4d8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_4d8.Rotation.XY.m128d_f64[0] * dVar71 +
             (double)local_698._8_8_ * local_4d8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar70 * local_4d8.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_4d8.Rotation.XY.m128d_f64[1] =
             (double)local_698._0_8_ * local_4d8.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             local_4d8.Rotation.XY.m128d_f64[1] * dVar71 +
             (double)local_698._8_8_ * local_4d8.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_720 = dVar7;
        dStack_718 = dVar9;
        local_538.Translation.ZW.m128d_f64[0] = dVar63;
        local_4d8.Rotation.ZW.m128d_f64 = adVar6;
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->spine_hit_pairs).AllocatorInstance.Data;
        uVar28 = uVar40;
        if (param_3 < *(int *)(pFVar3 + (longlong)local_778 + 0x580)) {
          uVar28 = uVar43;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((*(byte *)(lVar37 + 0xad + *(longlong *)(pFVar3 + (longlong)local_778 + 0x578)) & 1) ==
             0) || (this->atleast_one_hit == false)) {
          pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_788->Pose,local_7a8);
          dVar8 = (pTVar31->Rotation).XY.m128d_f64[0];
          dVar55 = (pTVar31->Rotation).XY.m128d_f64[1];
          adVar25 = *&(pTVar31->Rotation).ZW.m128d_f64;
          dVar7 = (pTVar31->Translation).XY.m128d_f64[0];
          dVar9 = (pTVar31->Translation).XY.m128d_f64[1];
          dVar63 = (pTVar31->Translation).ZW.m128d_f64[0];
          dVar71 = (pTVar31->Translation).ZW.m128d_f64[1];
          dVar70 = (pTVar31->Scale3D).XY.m128d_f64[0];
          dVar74 = (pTVar31->Scale3D).XY.m128d_f64[1];
          dVar12 = (pTVar31->Scale3D).ZW.m128d_f64[0];
          dVar13 = (pTVar31->Scale3D).ZW.m128d_f64[1];
          pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_788->Pose,local_7a4);
          dVar14 = (pTVar31->Scale3D).XY.m128d_f64[0];
          dVar15 = (pTVar31->Scale3D).XY.m128d_f64[1];
          dVar16 = (pTVar31->Rotation).XY.m128d_f64[0];
          dVar17 = (pTVar31->Rotation).XY.m128d_f64[1];
          dVar18 = (pTVar31->Rotation).ZW.m128d_f64[0];
          dVar19 = (pTVar31->Rotation).ZW.m128d_f64[1];
          adVar6 = *&(pTVar31->Translation).XY.m128d_f64;
          dVar20 = (pTVar31->Translation).ZW.m128d_f64[0];
          dVar21 = (pTVar31->Translation).ZW.m128d_f64[1];
          local_778 = (pTVar31->Scale3D).ZW.m128d_f64[0];
          dStack_770 = (pTVar31->Scale3D).ZW.m128d_f64[1];
          uVar28 = uVar40;
          if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_mod_transform_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_678._8_8_ = local_538.Rotation.XY.m128d_f64[1];
          local_678._0_8_ = local_538.Rotation.XY.m128d_f64[0];
          local_668 = local_538.Rotation.ZW.m128d_f64[0];
          dStack_660 = local_538.Rotation.ZW.m128d_f64[1];
          lVar37 = *(longlong *)(pFVar3 + lVar42);
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_678,&local_5c8);
          pTVar34 = UE::Math::TRotator<double>::Quaternion(&local_5c8,&local_558);
          dVar22 = pTVar34->Z;
          dVar23 = pTVar34->W;
          dVar24 = pTVar34->Y;
          pdVar1 = (double *)((longlong)local_798 + lVar37);
          *pdVar1 = pTVar34->X;
          pdVar1[1] = dVar24;
          pdVar1 = (double *)((longlong)local_798 + 0x10 + lVar37);
          *pdVar1 = dVar22;
          pdVar1[1] = dVar23;
          uVar28 = uVar40;
          if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
            uVar28 = uVar36;
          }
          local_538.Scale3D.ZW.m128d_f64[0] = local_778;
          local_538.Scale3D.ZW.m128d_f64[1] = dStack_770;
          local_538.Rotation.XY.m128d_f64[0] = dVar16;
          local_538.Rotation.XY.m128d_f64[1] = dVar17;
          local_538.Rotation.ZW.m128d_f64[0] = dVar18;
          local_538.Rotation.ZW.m128d_f64[1] = dVar19;
          local_538.Translation.XY.m128d_f64 = adVar6;
          local_538.Translation.ZW.m128d_f64[0] = dVar20;
          local_538.Translation.ZW.m128d_f64[1] = dVar21;
          local_538.Scale3D.XY.m128d_f64[0] = dVar14;
          local_538.Scale3D.XY.m128d_f64[1] = dVar15;
          local_4d8.Rotation.XY.m128d_f64[0] = dVar8;
          local_4d8.Rotation.XY.m128d_f64[1] = dVar55;
          local_4d8.Rotation.ZW.m128d_f64 = adVar25;
          local_4d8.Translation.XY.m128d_f64[0] = dVar7;
          local_4d8.Translation.XY.m128d_f64[1] = dVar9;
          local_4d8.Translation.ZW.m128d_f64[0] = dVar63;
          local_4d8.Translation.ZW.m128d_f64[1] = dVar71;
          local_4d8.Scale3D.XY.m128d_f64[0] = dVar70;
          local_4d8.Scale3D.XY.m128d_f64[1] = dVar74;
          local_4d8.Scale3D.ZW.m128d_f64[0] = dVar12;
          local_4d8.Scale3D.ZW.m128d_f64[1] = dVar13;
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7c8 = (this->feet_mod_transform_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7c8 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar28 = uVar40;
          if (param_2 < (this->feet_mod_transform_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_7c8 = (this->feet_mod_transform_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(local_7c8 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pdVar1 = (double *)(*(longlong *)(local_7c8 + lVar42) + (longlong)local_798);
        local_538.Rotation.XY.m128d_f64[0] = *pdVar1;
        local_538.Rotation.XY.m128d_f64[1] = pdVar1[1];
        pdVar1 = (double *)(*(longlong *)(local_7c8 + lVar42) + 0x10 + (longlong)local_798);
        local_538.Rotation.ZW.m128d_f64[0] = *pdVar1;
        local_538.Rotation.ZW.m128d_f64[1] = pdVar1[1];
        if (this->ignore_shift_speed != false) {
          uVar28 = uVar40;
          if (param_2 < (this->feet_Alpha_array).ArrayNum) {
            uVar28 = uVar36;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
          uVar28 = uVar40;
          if (param_3 < *(int *)(pFVar3 + lVar42 + 8)) {
            uVar28 = uVar43;
          }
          if ((uVar28 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined4 *)(*(longlong *)(pFVar3 + lVar42) + lVar41 * 4) = 0x3f800000;
        }
        if (this->Work_Outside_PIE == false) {
          pUVar35 = (UWorld *)this->owning_skel->_padding_;
          if (pUVar35 == (UWorld *)0x0) {
            pUVar35 = UActorComponent::GetWorld_Uncached((UActorComponent *)this->owning_skel);
          }
          if ((pUVar35->WorldType).Value == '\x04') {
            uVar28 = uVar40;
            if (param_2 < (this->feet_Alpha_array).ArrayNum) {
              uVar28 = uVar36;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
            uVar28 = uVar40;
            if (param_3 < *(int *)(pFVar3 + lVar44 * 0x10 + 8)) {
              uVar28 = uVar43;
            }
            if ((uVar28 == 0) &&
               (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar45)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)(*(longlong *)(pFVar3 + lVar44 * 0x10) + lVar41 * 4) = 0;
          }
        }
        pFVar26 = local_788;
        pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_788->Pose,local_7a8);
        local_278.Rotation.XY.m128d_f64[0] = (pTVar31->Rotation).XY.m128d_f64[0];
        local_278.Rotation.XY.m128d_f64[1] = (pTVar31->Rotation).XY.m128d_f64[1];
        local_278.Rotation.ZW.m128d_f64[0] = (pTVar31->Rotation).ZW.m128d_f64[0];
        local_278.Rotation.ZW.m128d_f64[1] = (pTVar31->Rotation).ZW.m128d_f64[1];
        local_278.Translation.XY.m128d_f64[0] = (pTVar31->Translation).XY.m128d_f64[0];
        local_278.Translation.XY.m128d_f64[1] = (pTVar31->Translation).XY.m128d_f64[1];
        local_278.Translation.ZW.m128d_f64[0] = (pTVar31->Translation).ZW.m128d_f64[0];
        local_278.Translation.ZW.m128d_f64[1] = (pTVar31->Translation).ZW.m128d_f64[1];
        local_278.Scale3D.XY.m128d_f64[0] = (pTVar31->Scale3D).XY.m128d_f64[0];
        local_278.Scale3D.XY.m128d_f64[1] = (pTVar31->Scale3D).XY.m128d_f64[1];
        local_278.Scale3D.ZW.m128d_f64[0] = (pTVar31->Scale3D).ZW.m128d_f64[0];
        local_278.Scale3D.ZW.m128d_f64[1] = (pTVar31->Scale3D).ZW.m128d_f64[1];
        pTVar31 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&pFVar26->Pose,local_7a4);
        local_158.Rotation.XY.m128d_f64[0] = (pTVar31->Rotation).XY.m128d_f64[0];
        local_158.Rotation.XY.m128d_f64[1] = (pTVar31->Rotation).XY.m128d_f64[1];
        local_158.Rotation.ZW.m128d_f64[0] = (pTVar31->Rotation).ZW.m128d_f64[0];
        local_158.Rotation.ZW.m128d_f64[1] = (pTVar31->Rotation).ZW.m128d_f64[1];
        local_158.Translation.XY.m128d_f64[0] = (pTVar31->Translation).XY.m128d_f64[0];
        local_158.Translation.XY.m128d_f64[1] = (pTVar31->Translation).XY.m128d_f64[1];
        local_158.Translation.ZW.m128d_f64[0] = (pTVar31->Translation).ZW.m128d_f64[0];
        local_158.Translation.ZW.m128d_f64[1] = (pTVar31->Translation).ZW.m128d_f64[1];
        local_158.Scale3D.XY.m128d_f64[0] = (pTVar31->Scale3D).XY.m128d_f64[0];
        local_158.Scale3D.XY.m128d_f64[1] = (pTVar31->Scale3D).XY.m128d_f64[1];
        local_158.Scale3D.ZW.m128d_f64[0] = (pTVar31->Scale3D).ZW.m128d_f64[0];
        local_158.Scale3D.ZW.m128d_f64[1] = (pTVar31->Scale3D).ZW.m128d_f64[1];
        uVar28 = uVar40;
        if (param_2 < (this->feet_Alpha_array).ArrayNum) {
          uVar28 = uVar36;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
        uVar28 = uVar40;
        if (param_3 < *(int *)(pFVar3 + lVar44 * 0x10 + 8)) {
          uVar28 = uVar43;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UKismetMathLibrary::TLerp
                  (&local_1b8,&local_158,&local_538,
                   *(float *)(*(longlong *)(pFVar3 + lVar44 * 0x10) + lVar41 * 4),
                   (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
        uVar28 = uVar40;
        if (param_2 < (this->feet_Alpha_array).ArrayNum) {
          uVar28 = uVar36;
        }
        if ((uVar28 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (this->feet_Alpha_array).AllocatorInstance.Data;
        if (param_3 < *(int *)(pFVar3 + lVar44 * 0x10 + 8)) {
          uVar40 = uVar43;
        }
        if ((uVar40 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UKismetMathLibrary::TLerp
                  (&local_218,&local_278,&local_4d8,
                   *(float *)(*(longlong *)(pFVar3 + lVar44 * 0x10) + lVar41 * 4),
                   (TEnumAsByte<ELerpInterpolationMode::Type>)0x0);
        pTVar27 = local_700;
        local_3f8 = local_218.Rotation.XY.m128d_f64[0];
        dStack_3f0 = local_218.Rotation.XY.m128d_f64[1];
        local_3e8 = local_218.Rotation.ZW.m128d_f64[0];
        dStack_3e0 = local_218.Rotation.ZW.m128d_f64[1];
        pFVar4 = (FCompactPoseBoneIndex *)(local_700->AllocatorInstance).Data;
        local_408 = local_7a8;
        local_3d8 = local_218.Translation.XY.m128d_f64[0];
        dStack_3d0 = local_218.Translation.XY.m128d_f64[1];
        local_3c8 = local_218.Translation.ZW.m128d_f64[0];
        dStack_3c0 = local_218.Translation.ZW.m128d_f64[1];
        local_3b8 = local_218.Scale3D.XY.m128d_f64[0];
        dStack_3b0 = local_218.Scale3D.XY.m128d_f64[1];
        local_3a8 = local_218.Scale3D.ZW.m128d_f64[0];
        dStack_3a0 = local_218.Scale3D.ZW.m128d_f64[1];
        if (((pFVar4 <= &local_408) && (&local_408 < pFVar4 + (longlong)local_700->ArrayMax * 0x1c))
           && (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar30 = pTVar27->ArrayNum;
        if (iVar30 == pTVar27->ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
        }
        pTVar27->ArrayNum = iVar30 + 1;
        lVar41 = (longlong)iVar30 * 0x70;
        pFVar3 = (pTVar27->AllocatorInstance).Data;
        *(ulonglong *)(pFVar3 + lVar41) = CONCAT44(uStack_404,local_408);
        *(undefined8 *)(pFVar3 + lVar41 + 8) = uStack_400;
        *(double *)(pFVar3 + lVar41 + 0x10) = local_3f8;
        *(double *)(pFVar3 + lVar41 + 0x10 + 8) = dStack_3f0;
        *(double *)(pFVar3 + lVar41 + 0x20) = local_3e8;
        *(double *)(pFVar3 + lVar41 + 0x20 + 8) = dStack_3e0;
        *(double *)(pFVar3 + lVar41 + 0x30) = local_3d8;
        *(double *)(pFVar3 + lVar41 + 0x30 + 8) = dStack_3d0;
        *(double *)(pFVar3 + lVar41 + 0x40) = local_3c8;
        *(double *)(pFVar3 + lVar41 + 0x40 + 8) = dStack_3c0;
        *(double *)(pFVar3 + lVar41 + 0x50) = local_3b8;
        *(double *)(pFVar3 + lVar41 + 0x50 + 8) = dStack_3b0;
        *(double *)(pFVar3 + lVar41 + 0x60) = local_3a8;
        *(double *)(pFVar3 + lVar41 + 0x60 + 8) = dStack_3a0;
        pFVar4 = (FCompactPoseBoneIndex *)(pTVar27->AllocatorInstance).Data;
        local_468 = local_1b8.Rotation.XY.m128d_f64[0];
        dStack_460 = local_1b8.Rotation.XY.m128d_f64[1];
        local_458 = local_1b8.Rotation.ZW.m128d_f64[0];
        dStack_450 = local_1b8.Rotation.ZW.m128d_f64[1];
        local_478 = local_7a4;
        local_448 = local_1b8.Translation.XY.m128d_f64[0];
        dStack_440 = local_1b8.Translation.XY.m128d_f64[1];
        local_438 = local_1b8.Translation.ZW.m128d_f64[0];
        dStack_430 = local_1b8.Translation.ZW.m128d_f64[1];
        local_428 = local_1b8.Scale3D.XY.m128d_f64[0];
        dStack_420 = local_1b8.Scale3D.XY.m128d_f64[1];
        local_418 = local_1b8.Scale3D.ZW.m128d_f64[0];
        dStack_410 = local_1b8.Scale3D.ZW.m128d_f64[1];
        if (((pFVar4 <= &local_478) && (&local_478 < pFVar4 + (longlong)pTVar27->ArrayMax * 0x1c))
           && (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar45)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar30 = pTVar27->ArrayNum;
        if (iVar30 == pTVar27->ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,&pTVar27->AllocatorInstance,&pTVar27->ArrayMax);
        }
        pTVar27->ArrayNum = iVar30 + 1;
        lVar41 = (longlong)iVar30 * 0x70;
        pFVar3 = (pTVar27->AllocatorInstance).Data;
        *(ulonglong *)(pFVar3 + lVar41) = CONCAT44(uStack_474,local_478);
        *(undefined8 *)(pFVar3 + lVar41 + 8) = uStack_470;
        *(double *)(pFVar3 + lVar41 + 0x10) = local_468;
        *(double *)(pFVar3 + lVar41 + 0x10 + 8) = dStack_460;
        *(double *)(pFVar3 + lVar41 + 0x20) = local_458;
        *(double *)(pFVar3 + lVar41 + 0x20 + 8) = dStack_450;
        *(double *)(pFVar3 + lVar41 + 0x30) = local_448;
        *(double *)(pFVar3 + lVar41 + 0x30 + 8) = dStack_440;
        *(double *)(pFVar3 + lVar41 + 0x40) = local_438;
        *(double *)(pFVar3 + lVar41 + 0x40 + 8) = dStack_430;
        *(double *)(pFVar3 + lVar41 + 0x50) = local_428;
        *(double *)(pFVar3 + lVar41 + 0x50 + 8) = dStack_420;
        *(double *)(pFVar3 + lVar41 + 0x60) = local_418;
        *(double *)(pFVar3 + lVar41 + 0x60 + 8) = dStack_410;
      }
      return;
    }
    if (*(ushort *)pFVar39 == uVar28) {
      FVar38 = SUB84((longlong)pFVar39 - (longlong)pFVar3 >> 1,0);
      goto LAB_14d30182c;
    }
    pFVar39 = pFVar39 + 2;
  } while( true );
}

// LineTraceControl_AnyThread @ 14d30d830

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
FAnimNode_DragonFeetSolver::LineTraceControl_AnyThread
          (FAnimNode_DragonFeetSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  bool bVar31;
  int iVar32;
  ulonglong uVar33;
  undefined7 extraout_var;
  TTransform<double> *pTVar34;
  uint uVar35;
  uint uVar36;
  FAnimNode_DragonFeetSolver *pFVar37;
  undefined1 *this_00;
  uint uVar38;
  uint *puVar39;
  uint uVar40;
  uint *puVar41;
  longlong lVar42;
  longlong lVar43;
  ForElementType<unsigned_int> this_01;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  uint *puVar47;
  longlong lVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  undefined4 uVar69;
  FReferenceSkeleton *pFVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auStack_438 [32];
  longlong local_418;
  longlong local_410;
  undefined1 local_408 [4];
  uint local_404;
  FScriptContainerElement *local_400;
  uint local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  FComponentSpacePoseContext *local_3e0;
  FCompactPoseBoneIndex local_3d8;
  FCompactPoseBoneIndex local_3d4;
  uint local_3d0;
  FCompactPoseBoneIndex local_3cc;
  FCompactPoseBoneIndex local_3c8;
  longlong local_3c0;
  ForElementType<unsigned_int> local_3b8;
  longlong local_3b0;
  FWeakObjectPtr local_3a8;
  FWeakObjectPtr FStack_3a0;
  FWeakObjectPtr local_398;
  undefined1 local_390 [16];
  FReferenceSkeleton *local_380;
  ForAnyElementType local_378;
  double dStack_370;
  ForAnyElementType local_368;
  double dStack_360;
  FWeakObjectPtr local_358;
  FWeakObjectPtr FStack_350;
  FWeakObjectPtr local_348;
  double dStack_340;
  ForAnyElementType local_338;
  double dStack_330;
  ForAnyElementType local_328;
  double dStack_320;
  undefined1 local_318 [16];
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  double dVar61;
  
  auVar65 = ___xmm_7ff00000000000007ff0000000000000;
  uVar33 = __security_cookie.value ^ (ulonglong)auStack_438;
  local_3e0 = param_1;
  local_b8 = uVar33;
  if (((0 < (this->spine_hit_pairs).ArrayNum) && (0 < (this->spine_Feet_pair).ArrayNum)) &&
     (0 < (this->spine_Transform_pairs).ArrayNum)) {
    puVar41 = *(uint **)&(param_1->Pose).Pose;
    this_01 = (ForElementType<unsigned_int>)&param_1->Pose;
    iVar4 = *(int *)&(param_1->Pose).Pose.field_0x8;
    puVar39 = puVar41 + 0x10;
    puVar47 = puVar41 + (longlong)iVar4 * 0x18;
    pFVar37 = this;
    local_3b8 = this_01;
    while( true ) {
      uVar68 = (undefined4)uVar33;
      uVar69 = SUB84(pFVar37,0);
      if (*(int *)&(param_1->Pose).Pose.field_0x8 != iVar4) {
        this_00 = local_408;
        local_408[0] = 0;
        bVar31 = `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::
                 __l2::<lambda_1>::operator()(this_00);
        uVar69 = SUB84(this_00,0);
        uVar68 = (undefined4)CONCAT71(extraout_var,bVar31);
      }
      if (puVar41 == puVar47) break;
      uVar46 = auVar65._0_4_;
      uVar40 = auVar65._4_4_;
      dVar49 = auVar65._0_8_;
      uVar38 = auVar65._8_4_;
      uVar44 = auVar65._12_4_;
      dVar61 = auVar65._8_8_;
      auVar50._0_8_ = (double)CONCAT44(uVar40 & puVar41[5],uVar46 & puVar41[4]);
      auVar50._8_4_ = uVar38 & puVar41[6];
      auVar50._12_4_ = uVar44 & puVar41[7];
      auVar51._8_8_ = -(ulonglong)(auVar50._8_8_ == dVar61);
      auVar51._0_8_ = -(ulonglong)(auVar50._0_8_ == dVar49);
      uVar35 = movmskpd(uVar69,auVar51);
      lVar48 = -(ulonglong)((double)CONCAT44(uVar44 & puVar41[3],uVar38 & puVar41[2]) == dVar61);
      auVar62._8_4_ = (int)lVar48;
      auVar62._0_8_ =
           -(ulonglong)((double)CONCAT44(uVar40 & puVar41[1],uVar46 & *puVar41) == dVar49);
      auVar62._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      iVar32 = movmskpd(uVar68,auVar62);
      if ((uVar35 & 0x3fffffff) != 0 || iVar32 != 0) goto LAB_14d30e433;
      auVar52._0_8_ = (double)CONCAT44(uVar40 & puVar39[-3],uVar46 & puVar39[-4]);
      auVar52._8_4_ = uVar38 & puVar39[-2];
      auVar52._12_4_ = uVar44 & puVar39[-1];
      auVar53._8_8_ = -(ulonglong)(auVar52._8_8_ == dVar61);
      auVar53._0_8_ = -(ulonglong)(auVar52._0_8_ == dVar49);
      uVar35 = movmskpd(0,auVar53);
      lVar48 = -(ulonglong)((double)CONCAT44(uVar44 & puVar39[-5],uVar38 & puVar39[-6]) == dVar61);
      auVar16._8_4_ = (int)lVar48;
      auVar16._0_8_ =
           -(ulonglong)((double)CONCAT44(uVar40 & puVar39[-7],uVar46 & puVar39[-8]) == dVar49);
      auVar16._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      iVar32 = movmskpd(iVar32,auVar16);
      if ((uVar35 & 0x3fffffff) != 0 || iVar32 != 0) goto LAB_14d30e433;
      auVar54._0_8_ = (double)CONCAT44(uVar40 & puVar39[5],uVar46 & puVar39[4]);
      auVar54._8_4_ = uVar38 & puVar39[6];
      auVar54._12_4_ = uVar44 & puVar39[7];
      auVar55._8_8_ = -(ulonglong)(auVar54._8_8_ == dVar61);
      auVar55._0_8_ = -(ulonglong)(auVar54._0_8_ == dVar49);
      uVar36 = movmskpd(0,auVar55);
      lVar48 = -(ulonglong)((double)CONCAT44(uVar44 & puVar39[3],uVar38 & puVar39[2]) == dVar61);
      auVar17._8_4_ = (int)lVar48;
      auVar17._0_8_ =
           -(ulonglong)((double)CONCAT44(uVar40 & puVar39[1],uVar46 & *puVar39) == dVar49);
      auVar17._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      uVar35 = movmskpd(iVar32,auVar17);
      uVar33 = (ulonglong)uVar35;
      if ((uVar36 & 0x3fffffff) != 0 || uVar35 != 0) goto LAB_14d30e433;
      puVar41 = puVar41 + 0x18;
      puVar39 = puVar39 + 0x18;
      pFVar37 = (FAnimNode_DragonFeetSolver *)0x0;
    }
    local_404 = 0;
    if (0 < (this->spine_Feet_pair).ArrayNum) {
      lVar48 = 0;
      local_3b0 = 0;
      local_3f0 = 0;
      do {
        uVar35 = local_404;
        if ((int)local_404 < (this->spine_Transform_pairs).ArrayNum) {
          iVar4 = (this->spine_Feet_pair).ArrayNum;
          uVar40 = ~local_404 >> 0x1f;
          uVar46 = 0;
          if ((int)local_404 < iVar4) {
            uVar46 = uVar40;
          }
          local_3f8 = uVar40;
          if (uVar46 == 0) {
            local_418 = (longlong)(int)local_404;
            local_410 = (longlong)iVar4;
            bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar31) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar45 = (longlong)(int)uVar35;
          local_3e8 = lVar45;
          FBoneReference::GetCompactPoseIndex
                    ((FBoneReference *)
                     ((this->spine_Feet_pair).AllocatorInstance.Data + lVar45 * 0x170),
                     (FBoneContainer *)&local_3d8);
          local_2f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_2f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_2f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_2f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_2f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_2f8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_2f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_2f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_2f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_2f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_2f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_2f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_2f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_2f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          pTVar34 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              ((FCSPose<FCompactPose> *)this_01,local_3d8);
          local_2f8.Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
          local_2f8.Rotation.XY.m128d_f64[1] = (pTVar34->Rotation).XY.m128d_f64[1];
          local_2f8.Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
          local_2f8.Rotation.ZW.m128d_f64[1] = (pTVar34->Rotation).ZW.m128d_f64[1];
          local_2f8.Translation.XY.m128d_f64 = *&(pTVar34->Translation).XY.m128d_f64;
          local_2f8.Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
          local_2f8.Translation.ZW.m128d_f64[1] = (pTVar34->Translation).ZW.m128d_f64[1];
          local_2f8.Scale3D.XY.m128d_f64 = *&(pTVar34->Scale3D).XY.m128d_f64;
          local_2f8.Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
          local_2f8.Scale3D.ZW.m128d_f64[1] = (pTVar34->Scale3D).ZW.m128d_f64[1];
          local_298.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_298.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_298.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_298.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_298.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_298.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_298.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_298.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_298.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_298.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_298.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_298.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_298.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_298,&local_2f8,&this->owner_skel_w_transform);
          dVar23 = local_298.Scale3D.ZW.m128d_f64[1];
          dVar20 = local_298.Scale3D.ZW.m128d_f64[0];
          dVar61 = local_298.Rotation.ZW.m128d_f64[1];
          dVar49 = local_298.Rotation.ZW.m128d_f64[0];
          iVar4 = (this->spine_Transform_pairs).ArrayNum;
          auVar65._8_8_ = local_298.Rotation.XY.m128d_f64[1];
          auVar65._0_8_ = local_298.Rotation.XY.m128d_f64[0];
          dVar18 = local_298.Translation.XY.m128d_f64[0];
          dVar19 = local_298.Translation.XY.m128d_f64[1];
          uVar46 = 0;
          if ((int)uVar35 < iVar4) {
            uVar46 = uVar40;
          }
          uVar68 = local_298.Translation.ZW.m128d_f64[0]._0_4_;
          uVar69 = local_298.Translation.ZW.m128d_f64[0]._4_4_;
          uVar28 = local_298.Translation.ZW.m128d_f64[1]._0_4_;
          uVar29 = local_298.Translation.ZW.m128d_f64[1]._4_4_;
          dVar27 = local_298.Scale3D.XY.m128d_f64[0];
          dVar30 = local_298.Scale3D.XY.m128d_f64[1];
          if ((uVar46 == 0) &&
             (local_418 = lVar45, local_410 = (longlong)iVar4,
             bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->spine_Transform_pairs).AllocatorInstance.Data;
          uVar46 = 0;
          lVar43 = 0;
          local_3c0 = 0;
          *(undefined1 (*) [16])(pFVar5 + lVar48) = auVar65;
          *(double *)(pFVar5 + lVar48 + 0x10) = dVar49;
          *(double *)(pFVar5 + lVar48 + 0x10 + 8) = dVar61;
          *(double *)(pFVar5 + lVar48 + 0x20) = dVar18;
          *(double *)(pFVar5 + lVar48 + 0x20 + 8) = dVar19;
          pFVar6 = pFVar5 + lVar48 + 0x30;
          *(undefined4 *)pFVar6 = uVar68;
          *(undefined4 *)(pFVar6 + 4) = uVar69;
          *(undefined4 *)(pFVar6 + 8) = uVar28;
          *(undefined4 *)(pFVar6 + 0xc) = uVar29;
          *(double *)(pFVar5 + lVar48 + 0x40) = dVar27;
          *(double *)(pFVar5 + lVar48 + 0x40 + 8) = dVar30;
          *(double *)(pFVar5 + lVar48 + 0x50) = dVar20;
          *(double *)(pFVar5 + lVar48 + 0x50 + 8) = dVar23;
          while( true ) {
            iVar4 = (this->spine_Feet_pair).ArrayNum;
            uVar38 = 0;
            if ((int)uVar35 < iVar4) {
              uVar38 = uVar40;
            }
            if ((uVar38 == 0) &&
               (local_418 = lVar45, local_410 = (longlong)iVar4,
               bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            this_01 = local_3b8;
            if (*(int *)((this->spine_Feet_pair).AllocatorInstance.Data + local_3f0 + 0x28) <=
                (int)uVar46) break;
            iVar4 = (this->spine_Transform_pairs).ArrayNum;
            uVar38 = 0;
            if ((int)uVar35 < iVar4) {
              uVar38 = uVar40;
            }
            if ((uVar38 == 0) &&
               (local_418 = lVar45, local_410 = (longlong)iVar4,
               bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar31)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((int)uVar46 <
                *(int *)((this->spine_Transform_pairs).AllocatorInstance.Data + lVar48 + 0xa0)) {
              iVar4 = (this->spine_Feet_pair).ArrayNum;
              uVar38 = 0;
              if ((int)uVar35 < iVar4) {
                uVar38 = uVar40;
              }
              if ((uVar38 == 0) &&
                 (local_418 = lVar45, local_410 = (longlong)iVar4,
                 bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar31)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              local_400 = (this->spine_Feet_pair).AllocatorInstance.Data;
              local_3d0 = ~uVar46 >> 0x1f;
              uVar38 = 0;
              if ((int)uVar46 < *(int *)(local_400 + local_3f0 + 0x28)) {
                uVar38 = local_3d0;
              }
              if (uVar38 == 0) {
                local_418 = (longlong)(int)uVar46;
                local_410 = (longlong)*(int *)(local_400 + local_3f0 + 0x28);
                bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar31) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              FBoneReference::GetCompactPoseIndex
                        ((FBoneReference *)
                         ((longlong)(int)uVar46 * 0x10 + *(longlong *)(local_400 + local_3f0 + 0x20)
                         ),(FBoneContainer *)&local_3d4);
              local_238.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_238.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_238.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_238.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_238.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_238.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_238.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_238.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_238.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_238.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_238.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_238.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_238.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_238.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              pTVar34 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                  ((FCSPose<FCompactPose> *)local_3b8,local_3d4);
              local_238.Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
              local_238.Rotation.XY.m128d_f64[1] = (pTVar34->Rotation).XY.m128d_f64[1];
              local_238.Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
              local_238.Rotation.ZW.m128d_f64[1] = (pTVar34->Rotation).ZW.m128d_f64[1];
              local_238.Translation.XY.m128d_f64 = *&(pTVar34->Translation).XY.m128d_f64;
              local_238.Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
              local_238.Translation.ZW.m128d_f64[1] = (pTVar34->Translation).ZW.m128d_f64[1];
              local_238.Scale3D.XY.m128d_f64 = *&(pTVar34->Scale3D).XY.m128d_f64;
              local_238.Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
              local_238.Scale3D.ZW.m128d_f64[1] = (pTVar34->Scale3D).ZW.m128d_f64[1];
              local_1d8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_1d8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_1d8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_1d8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_1d8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_1d8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_1d8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_1d8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_1d8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_1d8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_1d8,&local_238,&this->owner_skel_w_transform);
              dVar23 = local_1d8.Scale3D.ZW.m128d_f64[1];
              dVar20 = local_1d8.Scale3D.ZW.m128d_f64[0];
              dVar61 = local_1d8.Rotation.ZW.m128d_f64[1];
              dVar49 = local_1d8.Rotation.ZW.m128d_f64[0];
              iVar4 = (this->spine_Transform_pairs).ArrayNum;
              auVar3._8_8_ = local_1d8.Rotation.XY.m128d_f64[1];
              auVar3._0_8_ = local_1d8.Rotation.XY.m128d_f64[0];
              dVar18 = local_1d8.Translation.XY.m128d_f64[0];
              dVar19 = local_1d8.Translation.XY.m128d_f64[1];
              uVar38 = 0;
              if ((int)uVar35 < iVar4) {
                uVar38 = uVar40;
              }
              uVar68 = local_1d8.Translation.ZW.m128d_f64[0]._0_4_;
              uVar69 = local_1d8.Translation.ZW.m128d_f64[0]._4_4_;
              uVar28 = local_1d8.Translation.ZW.m128d_f64[1]._0_4_;
              uVar29 = local_1d8.Translation.ZW.m128d_f64[1]._4_4_;
              dVar27 = local_1d8.Scale3D.XY.m128d_f64[0];
              dVar30 = local_1d8.Scale3D.XY.m128d_f64[1];
              if (uVar38 == 0) {
                local_418 = local_3b0;
                local_410 = (longlong)iVar4;
                bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar31) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = (this->spine_Transform_pairs).AllocatorInstance.Data;
              iVar4 = *(int *)(pFVar6 + lVar48 + 0xa0);
              uVar35 = 0;
              if ((int)uVar46 < iVar4) {
                uVar35 = local_3d0;
              }
              if ((uVar35 == 0) &&
                 (local_418 = (longlong)(int)uVar46, local_410 = (longlong)iVar4,
                 bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar31)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar45 = *(longlong *)(pFVar6 + lVar48 + 0x98);
              uVar38 = 0;
              uVar44 = ~uVar46 >> 0x1f;
              lVar42 = 0;
              *(undefined1 (*) [16])(local_3c0 + lVar45) = auVar3;
              pdVar1 = (double *)(local_3c0 + 0x10 + lVar45);
              *pdVar1 = dVar49;
              pdVar1[1] = dVar61;
              pdVar1 = (double *)(local_3c0 + 0x20 + lVar45);
              *pdVar1 = dVar18;
              pdVar1[1] = dVar19;
              puVar2 = (undefined4 *)(local_3c0 + 0x30 + lVar45);
              *puVar2 = uVar68;
              puVar2[1] = uVar69;
              puVar2[2] = uVar28;
              puVar2[3] = uVar29;
              pdVar1 = (double *)(local_3c0 + 0x40 + lVar45);
              *pdVar1 = dVar27;
              pdVar1[1] = dVar30;
              pdVar1 = (double *)(local_3c0 + 0x50 + lVar45);
              *pdVar1 = dVar20;
              pdVar1[1] = dVar23;
              while( true ) {
                iVar4 = (this->spine_Transform_pairs).ArrayNum;
                uVar35 = 0;
                if ((int)local_404 < iVar4) {
                  uVar35 = local_3f8;
                }
                if (uVar35 == 0) {
                  local_418 = local_3e8;
                  local_410 = (longlong)iVar4;
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                local_400 = (this->spine_Transform_pairs).AllocatorInstance.Data;
                uVar35 = 0;
                if ((int)uVar46 < *(int *)(local_400 + lVar48 + 0x120)) {
                  uVar35 = uVar44;
                }
                if (uVar35 == 0) {
                  local_418 = (longlong)(int)uVar46;
                  local_410 = (longlong)*(int *)(local_400 + lVar48 + 0x120);
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                lVar45 = local_3e8;
                uVar35 = local_404;
                uVar40 = local_3f8;
                if (*(int *)(*(longlong *)(local_400 + lVar48 + 0x118) + 8 + lVar43) <= (int)uVar38)
                break;
                iVar4 = (this->spine_Feet_pair).ArrayNum;
                uVar35 = 0;
                if ((int)local_404 < iVar4) {
                  uVar35 = local_3f8;
                }
                if (uVar35 == 0) {
                  local_418 = local_3e8;
                  local_410 = (longlong)iVar4;
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                local_400 = (this->spine_Feet_pair).AllocatorInstance.Data;
                uVar35 = 0;
                if ((int)uVar46 < *(int *)(local_400 + local_3f0 + 0x118)) {
                  uVar35 = uVar44;
                }
                if (uVar35 == 0) {
                  local_418 = (longlong)(int)uVar46;
                  local_410 = (longlong)*(int *)(local_400 + local_3f0 + 0x118);
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                local_400 = *(FScriptContainerElement **)(local_400 + local_3f0 + 0x110);
                iVar4 = *(int *)(lVar43 + 8 + (longlong)local_400);
                uVar35 = 0;
                if ((int)uVar38 < iVar4) {
                  uVar35 = ~uVar38 >> 0x1f;
                }
                if (uVar35 == 0) {
                  local_418 = (longlong)(int)uVar38;
                  local_410 = (longlong)iVar4;
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                FBoneReference::GetCompactPoseIndex
                          ((FBoneReference *)
                           ((longlong)(int)uVar38 * 0x10 +
                           *(longlong *)(lVar43 + (longlong)local_400)),(FBoneContainer *)&local_3cc
                          );
                local_178.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_178.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_178.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_178.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_178.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_178.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_178.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_178.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_178.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_178.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_178.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_178.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                pTVar34 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                                    ((FCSPose<FCompactPose> *)local_3b8,local_3cc);
                local_178.Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
                local_178.Rotation.XY.m128d_f64[1] = (pTVar34->Rotation).XY.m128d_f64[1];
                local_178.Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
                local_178.Rotation.ZW.m128d_f64[1] = (pTVar34->Rotation).ZW.m128d_f64[1];
                local_178.Translation.XY.m128d_f64 = *&(pTVar34->Translation).XY.m128d_f64;
                local_178.Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
                local_178.Translation.ZW.m128d_f64[1] = (pTVar34->Translation).ZW.m128d_f64[1];
                local_178.Scale3D.XY.m128d_f64 = *&(pTVar34->Scale3D).XY.m128d_f64;
                local_178.Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
                local_178.Scale3D.ZW.m128d_f64[1] = (pTVar34->Scale3D).ZW.m128d_f64[1];
                local_118.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_118.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_118.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_118.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_118.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_118.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_118.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_118.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_118.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_118.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_118.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_118.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                UE::Math::TTransform<double>::Multiply
                          (&local_118,&local_178,&this->owner_skel_w_transform);
                dVar19 = local_118.Scale3D.ZW.m128d_f64[1];
                dVar18 = local_118.Scale3D.ZW.m128d_f64[0];
                dVar61 = local_118.Rotation.ZW.m128d_f64[1];
                dVar49 = local_118.Rotation.ZW.m128d_f64[0];
                iVar4 = (this->spine_Transform_pairs).ArrayNum;
                auVar57._8_8_ = local_118.Rotation.XY.m128d_f64[1];
                auVar57._0_8_ = local_118.Rotation.XY.m128d_f64[0];
                uVar35 = 0;
                if ((int)local_404 < iVar4) {
                  uVar35 = local_3f8;
                }
                dVar20 = local_118.Translation.XY.m128d_f64[0];
                dVar23 = local_118.Translation.XY.m128d_f64[1];
                uVar68 = local_118.Translation.ZW.m128d_f64[0]._0_4_;
                uVar69 = local_118.Translation.ZW.m128d_f64[0]._4_4_;
                uVar28 = local_118.Translation.ZW.m128d_f64[1]._0_4_;
                uVar29 = local_118.Translation.ZW.m128d_f64[1]._4_4_;
                dVar27 = local_118.Scale3D.XY.m128d_f64[0];
                dVar30 = local_118.Scale3D.XY.m128d_f64[1];
                if (uVar35 == 0) {
                  local_418 = local_3e8;
                  local_410 = (longlong)iVar4;
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                local_400 = (this->spine_Transform_pairs).AllocatorInstance.Data;
                uVar35 = 0;
                if ((int)uVar46 < *(int *)(local_400 + lVar48 + 0x120)) {
                  uVar35 = uVar44;
                }
                if (uVar35 == 0) {
                  local_418 = (longlong)(int)uVar46;
                  local_410 = (longlong)*(int *)(local_400 + lVar48 + 0x120);
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                local_400 = *(FScriptContainerElement **)(local_400 + lVar48 + 0x118);
                uVar35 = 0;
                if ((int)uVar38 < *(int *)(local_400 + lVar43 + 8)) {
                  uVar35 = ~uVar38 >> 0x1f;
                }
                if (uVar35 == 0) {
                  local_418 = (longlong)(int)uVar38;
                  local_410 = (longlong)*(int *)(local_400 + lVar43 + 8);
                  bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar31) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
                uVar38 = uVar38 + 1;
                lVar45 = *(longlong *)(local_400 + lVar43);
                *(undefined1 (*) [16])(lVar42 + lVar45) = auVar57;
                pdVar1 = (double *)(lVar42 + 0x10 + lVar45);
                *pdVar1 = dVar49;
                pdVar1[1] = dVar61;
                pdVar1 = (double *)(lVar42 + 0x20 + lVar45);
                *pdVar1 = dVar20;
                pdVar1[1] = dVar23;
                puVar2 = (undefined4 *)(lVar42 + 0x30 + lVar45);
                *puVar2 = uVar68;
                puVar2[1] = uVar69;
                puVar2[2] = uVar28;
                puVar2[3] = uVar29;
                pdVar1 = (double *)(lVar42 + 0x40 + lVar45);
                *pdVar1 = dVar27;
                pdVar1[1] = dVar30;
                pdVar1 = (double *)(lVar42 + 0x50 + lVar45);
                *pdVar1 = dVar18;
                pdVar1[1] = dVar19;
                lVar42 = lVar42 + 0x60;
              }
            }
            local_3c0 = local_3c0 + 0x60;
            uVar46 = uVar46 + 1;
            lVar43 = lVar43 + 0x10;
          }
        }
        local_404 = uVar35 + 1;
        local_3b0 = local_3b0 + 1;
        local_3f0 = local_3f0 + 0x170;
        lVar48 = lVar48 + 0x160;
        param_1 = local_3e0;
      } while ((int)local_404 < (this->spine_Feet_pair).ArrayNum);
    }
  }
LAB_14d30e433:
  if ((0 < (this->feet_transform_array).ArrayNum) &&
     (uVar35 = 0, 0 < (this->feet_bone_array).ArrayNum)) {
    lVar48 = 0;
    do {
      iVar4 = (this->feet_bone_array).ArrayNum;
      uVar46 = 0;
      if ((int)uVar35 < iVar4) {
        uVar46 = ~uVar35 >> 0x1f;
      }
      if (uVar46 == 0) {
        local_418 = (longlong)(int)uVar35;
        local_410 = (longlong)iVar4;
        bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar31) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FBoneReference::GetCompactPoseIndex
                ((FBoneReference *)
                 ((this->feet_bone_array).AllocatorInstance.Data + (longlong)(int)uVar35 * 0x10),
                 (FBoneContainer *)&local_3c8);
      pTVar34 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_3c8);
      dVar27 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
      local_398 = (FWeakObjectPtr)(pTVar34->Translation).ZW.m128d_f64[0];
      dStack_340 = (pTVar34->Translation).ZW.m128d_f64[1];
      local_3a8 = (FWeakObjectPtr)(pTVar34->Translation).XY.m128d_f64[0];
      FStack_3a0 = *(FWeakObjectPtr *)((pTVar34->Translation).XY.m128d_f64 + 1);
      dVar23 = (double)local_398 * (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[0];
      dVar61 = (this->owner_skel_w_transform).Scale3D.ZW.m128d_f64[1] * 0.0;
      local_378.Data = (FScriptContainerElement *)(pTVar34->Rotation).XY.m128d_f64[0];
      dStack_370 = (pTVar34->Rotation).XY.m128d_f64[1];
      local_368.Data = (FScriptContainerElement *)(pTVar34->Rotation).ZW.m128d_f64[0];
      dStack_360 = (pTVar34->Rotation).ZW.m128d_f64[1];
      local_338.Data = (FScriptContainerElement *)(pTVar34->Scale3D).XY.m128d_f64[0];
      dStack_330 = (pTVar34->Scale3D).XY.m128d_f64[1];
      local_318 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
      dVar19 = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[0] * (double)local_3a8;
      dVar20 = (this->owner_skel_w_transform).Scale3D.XY.m128d_f64[1] * (double)FStack_3a0;
      uVar68 = (undefined4)((ulonglong)dVar20 >> 0x20);
      auVar71._8_4_ = SUB84(dVar20,0);
      auVar71._0_8_ = dVar19;
      auVar71._12_4_ = uVar68;
      local_328.Data = (FScriptContainerElement *)(pTVar34->Scale3D).ZW.m128d_f64[0];
      dStack_320 = (pTVar34->Scale3D).ZW.m128d_f64[1];
      auVar65 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
      auVar3 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
      dVar49 = auVar3._0_8_;
      auVar62 = blendpd(local_318,auVar3,2);
      auVar72._0_8_ = auVar71._8_8_ * local_318._0_8_ - local_318._8_8_ * dVar19;
      auVar72._8_8_ = dVar23 * local_318._8_8_ - dVar49 * dVar20;
      auVar56._8_4_ = SUB84(dVar20,0);
      auVar56._0_8_ = dVar19;
      auVar56._12_4_ = uVar68;
      auVar21._8_4_ = SUB84(dVar61,0);
      auVar21._0_8_ = dVar23;
      auVar21._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
      auVar57 = blendpd(auVar56,auVar21,2);
      auVar58._0_8_ = auVar57._0_8_ * dVar49 - auVar62._0_8_ * dVar23;
      auVar58._8_8_ = auVar57._8_8_ * auVar3._8_8_ - auVar62._8_8_ * dVar61;
      auVar57 = blendpd(auVar72,auVar58,2);
      dVar61 = auVar72._8_8_ + auVar72._8_8_;
      dVar18 = auVar58._0_8_ + auVar58._0_8_;
      uVar68 = (undefined4)((ulonglong)dVar18 >> 0x20);
      auVar73._0_8_ = auVar57._0_8_ + auVar57._0_8_;
      auVar73._8_8_ = auVar57._8_8_ + auVar57._8_8_;
      auVar66._8_4_ = SUB84(dVar18,0);
      auVar66._0_8_ = dVar61;
      auVar66._12_4_ = uVar68;
      auVar63._8_4_ = SUB84(dVar18,0);
      auVar63._0_8_ = dVar61;
      auVar63._12_4_ = uVar68;
      auVar57 = blendpd(auVar63,auVar73,2);
      auVar67._0_8_ = auVar66._8_8_ * auVar65._0_8_ - auVar65._8_8_ * dVar61;
      auVar67._8_8_ = auVar73._0_8_ * auVar65._8_8_ - dVar49 * dVar18;
      auVar59._8_4_ = SUB84(auVar67._8_8_,0);
      auVar59._0_8_ = auVar67._0_8_;
      auVar59._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
      auVar65 = blendpd(auVar65,auVar3,2);
      auVar64._0_8_ = auVar57._0_8_ * dVar49 - auVar65._0_8_ * auVar73._0_8_;
      auVar64._8_8_ = auVar57._8_8_ * auVar3._8_8_ - auVar65._8_8_ * auVar73._8_8_;
      fVar14 = GlobalVectorConstants::Float0001.m128_f32[0];
      dVar49 = dVar61 * dVar27 + dVar19 + auVar59._8_8_ +
               (this->owner_skel_w_transform).Translation.XY.m128d_f64[0];
      dVar61 = dVar18 * dVar27 + dVar20 + auVar64._0_8_ +
               (this->owner_skel_w_transform).Translation.XY.m128d_f64[1];
      uVar68 = SUB84(dVar61,0);
      uVar69 = (undefined4)((ulonglong)dVar61 >> 0x20);
      auVar65 = blendpd(auVar67,auVar64,2);
      fVar10 = GlobalVectorConstants::Float0001.m128_f32[1];
      pFVar70 = (FReferenceSkeleton *)
                (auVar73._0_8_ * dVar27 + dVar23 + auVar65._0_8_ +
                (this->owner_skel_w_transform).Translation.ZW.m128d_f64[0]);
      local_390._8_4_ = uVar68;
      local_390._0_8_ = dVar49;
      local_390._12_4_ = uVar69;
      iVar4 = (this->feet_transform_array).ArrayNum;
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
      uVar46 = 0;
      if ((int)uVar35 < iVar4) {
        uVar46 = ~uVar35 >> 0x1f;
      }
      auVar26._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
      auVar26._0_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar60._0_8_ = auVar26._0_8_ << 0x20;
      auVar60._8_4_ = uVar68;
      auVar60._12_4_ = uVar69;
      fVar15 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar12 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
      local_380 = pFVar70;
      local_358 = local_3a8;
      FStack_350 = FStack_3a0;
      local_348 = local_398;
      if ((uVar46 == 0) &&
         (local_418 = (longlong)(int)uVar35, local_410 = (longlong)iVar4,
         bVar31 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar31)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->feet_transform_array).AllocatorInstance.Data;
      uVar35 = uVar35 + 1;
      auVar22._8_4_ = SUB84((double)fVar10,0);
      auVar22._0_8_ = (double)fVar14;
      auVar22._12_4_ = (int)((ulonglong)(double)fVar10 >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + lVar48) = auVar22;
      auVar24._8_4_ = SUB84((double)fVar11,0);
      auVar24._0_8_ = (double)fVar8;
      auVar24._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + lVar48 + 0x10) = auVar24;
      *(double *)(pFVar6 + lVar48 + 0x20) = dVar49;
      *(double *)(pFVar6 + lVar48 + 0x20 + 8) = auVar60._8_8_;
      *(FReferenceSkeleton **)(pFVar6 + lVar48 + 0x30) = pFVar70;
      *(undefined8 *)(pFVar6 + lVar48 + 0x30 + 8) = 0;
      *(double *)(pFVar6 + lVar48 + 0x40) = (double)fVar15;
      *(double *)(pFVar6 + lVar48 + 0x40 + 8) = (double)fVar12;
      auVar25._8_4_ = SUB84((double)fVar13,0);
      auVar25._0_8_ = (double)fVar9;
      auVar25._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
      *(undefined1 (*) [16])(pFVar6 + lVar48 + 0x50) = auVar25;
      lVar48 = lVar48 + 0x60;
    } while ((int)uVar35 < (this->feet_bone_array).ArrayNum);
  }
  return;
}

// Make_All_Bones @ 14d3105d0

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
FAnimNode_DragonFeetSolver::Make_All_Bones
          (FAnimNode_DragonFeetSolver *this,FCSPose<FCompactPose> *param_1)

{
  return;
}

// RotateAroundPoint @ 14d311ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
FAnimNode_DragonFeetSolver::RotateAroundPoint
          (FAnimNode_DragonFeetSolver *this,TVector<double> *__return_storage_ptr__,
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

// RotationFromImpactNormal @ 14d311d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
FAnimNode_DragonFeetSolver::RotationFromImpactNormal
          (FAnimNode_DragonFeetSolver *this,TRotator<double> *__return_storage_ptr__,int param_1,
          int param_2,bool param_3,FComponentSpacePoseContext *param_4,TVector<double> *param_5,
          TTransform<double> *param_6,float param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  TQuat<double> *pTVar23;
  TRotator<double> *pTVar24;
  TQuat<double> *pTVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  TRotator<double> local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TRotator<double> local_240;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  TRotator<double> local_1c8;
  TRotator<double> local_1b0 [2];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  TQuat<double> local_138;
  TQuat<double> local_118;
  TQuat<double> local_f8;
  TQuat<double> local_d8;
  TQuat<double> local_b8;
  TQuat<double> local_98 [4];
  
  dVar12 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = (this->owner_skel_w_transform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar14 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar15 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar44._8_4_ = SUB84(dVar13,0);
  auVar44._0_8_ = dVar12;
  auVar44._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar31._8_4_ = SUB84(dVar15,0);
  auVar31._0_8_ = dVar14;
  auVar31._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar44 = blendpd(auVar44,auVar31,2);
  local_1e8 = *(undefined1 (*) [16])&param_5->field0_0x0;
  local_1d8 = (param_5->field0_0x0)._s_0.Z;
  dVar49 = local_1e8._8_8_;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = local_1d8;
  auVar31 = blendpd(local_1e8,auVar18,2);
  auVar46._0_8_ = dVar49 * dVar12 - dVar13 * local_1e8._0_8_;
  auVar46._8_8_ = local_1d8 * dVar13 - dVar14 * dVar49;
  auVar32._0_8_ = auVar31._0_8_ * dVar14 - auVar44._0_8_ * local_1d8;
  auVar32._8_8_ = auVar31._8_8_ * dVar15 - auVar44._8_8_ * 0.0;
  auVar31 = blendpd(auVar46,auVar32,2);
  dVar10 = auVar46._8_8_ + auVar46._8_8_;
  dVar11 = auVar32._0_8_ + auVar32._0_8_;
  uVar42 = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar47._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar47._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar38._8_4_ = SUB84(dVar11,0);
  auVar38._0_8_ = dVar10;
  auVar38._12_4_ = uVar42;
  auVar33._8_4_ = SUB84(dVar11,0);
  auVar33._0_8_ = dVar10;
  auVar33._12_4_ = uVar42;
  auVar31 = blendpd(auVar33,auVar47,2);
  auVar39._0_8_ = auVar38._8_8_ * dVar12 - dVar10 * dVar13;
  auVar39._8_8_ = auVar47._0_8_ * dVar13 - dVar11 * dVar14;
  auVar34._0_8_ = auVar31._0_8_ * dVar14 - auVar47._0_8_ * auVar44._0_8_;
  auVar34._8_8_ = auVar31._8_8_ * dVar15 - auVar47._8_8_ * auVar44._8_8_;
  auVar31 = blendpd(auVar39,auVar34,2);
  dVar11 = dVar11 * dVar15 + dVar49 + auVar34._0_8_;
  local_270._s_0.Z = auVar47._0_8_ * dVar15 + local_1d8 + auVar31._0_8_;
  local_270._8_4_ = SUB84(dVar11,0);
  local_270._0_8_ = dVar10 * dVar15 + local_1e8._0_8_ + auVar39._8_8_;
  local_270._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  pTVar23 = UE::Math::TQuat<double>::FindBetweenNormals
                      (&local_138,&this->character_direction_vector_CS,
                       (TVector<double> *)&local_270._s_0);
  UE::Math::TRotator<double>::TRotator<double>(__return_storage_ptr__,pTVar23);
  local_258._s_0.X = (this->character_direction_vector_CS).field0_0x0._s_0.X;
  local_258._s_0.Y = (this->character_direction_vector_CS).field0_0x0._s_0.Y;
  local_258._s_0.Z = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
  pTVar23 = UE::Math::TQuat<double>::FindBetweenNormals
                      (&local_118,&this->character_direction_vector_CS,
                       (TVector<double> *)&local_258._s_0);
  UE::Math::TRotator<double>::TRotator<double>(&local_288,pTVar23);
  uVar42 = 0;
  uVar43 = 0;
  if (this->Enable_Pitch == false) {
    __return_storage_ptr__->Pitch = 0.0;
    uVar28 = 0;
    uVar30 = 0;
  }
  else {
    uVar28 = SUB84(__return_storage_ptr__->Pitch,0);
    uVar30 = (undefined4)((ulonglong)__return_storage_ptr__->Pitch >> 0x20);
  }
  if (this->Enable_Roll != false) {
    uVar42 = SUB84(__return_storage_ptr__->Roll,0);
    uVar43 = (undefined4)((ulonglong)__return_storage_ptr__->Roll >> 0x20);
  }
  uVar27 = 0;
  fVar41 = (float)((uint)param_7 ^ __xmm_80000000800000008000000080000000);
  dVar10 = (param_6->Rotation).XY.m128d_f64[0];
  dVar11 = (param_6->Rotation).XY.m128d_f64[1];
  auVar31 = *(undefined1 (*) [16])(param_6->Rotation).ZW.m128d_f64;
  fVar29 = (float)(double)CONCAT44(uVar30,uVar28);
  if (param_7 <= (float)(double)CONCAT44(uVar30,uVar28)) {
    fVar29 = param_7;
  }
  fVar19 = (float)__return_storage_ptr__->Yaw;
  if (param_7 <= (float)__return_storage_ptr__->Yaw) {
    fVar19 = param_7;
  }
  if (fVar29 <= fVar41) {
    fVar29 = fVar41;
  }
  if (fVar19 <= fVar41) {
    fVar19 = fVar41;
  }
  __return_storage_ptr__->Pitch = (double)fVar29 - local_288.Pitch;
  fVar29 = (float)(double)CONCAT44(uVar43,uVar42);
  if (param_7 <= (float)(double)CONCAT44(uVar43,uVar42)) {
    fVar29 = param_7;
  }
  __return_storage_ptr__->Yaw = (double)fVar19 - local_288.Yaw;
  if (fVar29 <= fVar41) {
    fVar29 = fVar41;
  }
  local_168 = (param_6->Translation).ZW.m128d_f64[0];
  dStack_160 = (param_6->Translation).ZW.m128d_f64[1];
  local_148 = (param_6->Scale3D).ZW.m128d_f64[0];
  dStack_140 = (param_6->Scale3D).ZW.m128d_f64[1];
  __return_storage_ptr__->Roll = (double)fVar29 - local_288.Roll;
  local_178 = (param_6->Translation).XY.m128d_f64[0];
  dStack_170 = (param_6->Translation).XY.m128d_f64[1];
  local_158 = (param_6->Scale3D).XY.m128d_f64[0];
  dStack_150 = (param_6->Scale3D).XY.m128d_f64[1];
  uVar26 = uVar27;
  if (param_1 < (this->spine_Feet_pair).ArrayNum) {
    uVar26 = (uint)~param_1 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar9 = (code *)swi(3);
      pTVar24 = (TRotator<double> *)(*pcVar9)();
      return pTVar24;
    }
  }
  pFVar7 = (this->spine_Feet_pair).AllocatorInstance.Data;
  uVar26 = uVar27;
  if (param_2 < *(int *)(pFVar7 + (longlong)param_1 * 0x170 + 0x138)) {
    uVar26 = (uint)~param_2 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar9 = (code *)swi(3);
      pTVar24 = (TRotator<double> *)(*pcVar9)();
      return pTVar24;
    }
  }
  uVar26 = *(uint *)(*(longlong *)(pFVar7 + (longlong)param_1 * 0x170 + 0x130) +
                    (longlong)param_2 * 4);
  if ((int)uVar26 < (this->dragon_input_data).FeetBones.ArrayNum) {
    uVar27 = ~uVar26 >> 0x1f;
  }
  if (uVar27 == 0) {
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar9 = (code *)swi(3);
      pTVar24 = (TRotator<double> *)(*pcVar9)();
      return pTVar24;
    }
  }
  pFVar8 = (this->dragon_input_data).FeetBones.AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)(int)uVar26 * 0xd0 + 0x28;
  local_240.Pitch = *(double *)pFVar7;
  local_240.Yaw = *(double *)(pFVar7 + 8);
  local_240.Roll = *(double *)(pFVar8 + (longlong)(int)uVar26 * 0xd0 + 0x38);
  pTVar23 = UE::Math::TRotator<double>::Quaternion(&local_240,&local_f8);
  dVar13 = auVar31._0_8_;
  dVar12 = auVar31._8_8_;
  auVar48._8_4_ = auVar31._0_4_;
  auVar48._0_8_ = dVar12;
  auVar48._12_4_ = auVar31._4_4_;
  uVar1 = pTVar23->X;
  uVar4 = pTVar23->Y;
  dVar14 = pTVar23->Z;
  dVar15 = pTVar23->W;
  auVar35._8_4_ = (int)uVar4;
  auVar35._0_8_ = uVar4;
  auVar35._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  dVar45 = dVar12 * (double)uVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar15 * dVar10 +
           (double)uVar4 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar50 = auVar48._8_8_ * (double)uVar1 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar15 * dVar11 +
           auVar35._8_8_ * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar16 = (double)uVar1 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + dVar15 * dVar13 +
           (double)uVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar14 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar17 = (double)uVar1 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar15 * dVar12 +
           (double)uVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar14 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar23 = UE::Math::TRotator<double>::Quaternion(&this->Overall_Feet_Rotation_Offset,&local_d8);
  uVar2 = pTVar23->X;
  uVar5 = pTVar23->Y;
  dVar20 = pTVar23->Z;
  dVar21 = pTVar23->W;
  auVar40._8_4_ = SUB84(dVar50,0);
  auVar40._0_8_ = dVar45;
  auVar40._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
  auVar36._8_4_ = (int)uVar5;
  auVar36._0_8_ = uVar5;
  auVar36._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar49 = (double)uVar2 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar21 * dVar50 +
           auVar36._8_8_ * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar20 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar50 = (double)uVar2 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar21 * dVar17 +
           (double)uVar5 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar20 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar23 = UE::Math::TRotator<double>::Quaternion(__return_storage_ptr__,&local_b8);
  local_228._8_4_ = SUB84(dVar49,0);
  local_228._0_8_ =
       (double)uVar2 * dVar17 * dVar10 + dVar21 * dVar45 + (double)uVar5 * dVar16 * dVar12 +
       dVar20 * auVar40._8_8_ * dVar13;
  local_228._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  local_218._8_4_ = SUB84(dVar50,0);
  local_218._0_8_ =
       (double)uVar2 * auVar40._8_8_ * dVar11 + dVar21 * dVar16 + (double)uVar5 * dVar45 * dVar14 +
       dVar20 * dVar17 * dVar15;
  local_218._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
  UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_228,&local_1c8);
  pTVar25 = UE::Math::TRotator<double>::Quaternion(&local_1c8,local_98);
  uVar3 = pTVar23->X;
  uVar6 = pTVar23->Y;
  dVar12 = pTVar23->Z;
  dVar13 = pTVar23->W;
  dVar14 = pTVar25->Z;
  dVar15 = pTVar25->W;
  dVar49 = pTVar25->X;
  dVar50 = pTVar25->Y;
  auVar37._8_4_ = (int)uVar6;
  auVar37._0_8_ = uVar6;
  auVar37._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  dVar10 = (double)uVar3 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar13 * dVar50 +
           auVar37._8_8_ * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar12 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar11 = (double)uVar3 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar13 * dVar15 +
           (double)uVar6 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_208._8_4_ = SUB84(dVar10,0);
  local_208._0_8_ =
       (double)uVar3 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar13 * dVar49 +
       (double)uVar6 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar12 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_208._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_1f8._8_4_ = SUB84(dVar11,0);
  local_1f8._0_8_ =
       (double)uVar3 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar13 * dVar14 +
       (double)uVar6 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_1f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  pTVar24 = UE::Math::TRotator<double>::TRotator<double>(local_1b0,(TQuat<double> *)local_208);
  dVar10 = pTVar24->Yaw;
  __return_storage_ptr__->Pitch = pTVar24->Pitch;
  __return_storage_ptr__->Yaw = dVar10;
  __return_storage_ptr__->Roll = pTVar24->Roll;
  return __return_storage_ptr__;
}

// Swap_Spine_Pairs @ 14d316130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_DragonFeetSolver::Swap_Spine_Pairs
          (FAnimNode_DragonFeetSolver *this,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong local_a8;
  int local_9c;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  do {
    bVar10 = false;
    uVar20 = 1;
    if (param_1->ArrayNum < 2) break;
    local_70 = 0x170;
    do {
      local_80 = 0;
      uVar18 = 1;
      uVar21 = ~uVar20 >> 0x1f;
      local_a8 = 1;
      local_9c = 0;
      local_78 = 0x10;
      while( true ) {
        uVar11 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        if (*(int *)((param_1->AllocatorInstance).Data + local_70 + 0x28) <= (int)uVar18) break;
        uVar11 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        lVar22 = (longlong)(int)uVar20 * 0x170;
        uVar11 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar11 = uVar21;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        uVar15 = ~uVar18 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar18 < *(int *)(pFVar4 + lVar22 + 0x28)) {
          uVar11 = uVar15;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        lVar13 = *(longlong *)(pFVar4 + lVar22 + 0x20);
        uVar16 = -uVar18 >> 0x1f;
        uVar11 = 0;
        if (local_9c < *(int *)(pFVar3 + lVar22 + 0x28)) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        if (*(int *)(*(longlong *)(pFVar3 + lVar22 + 0x20) + 8 + local_80 * 0x10) * 2 <
            *(int *)(lVar13 + 8 + local_78) * 2) {
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x28)) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          lVar13 = (local_a8 + -1) * 0x10;
          puVar19 = (undefined8 *)(*(longlong *)(pFVar3 + lVar22 + 0x20) + lVar13);
          uVar7 = *puVar19;
          uVar8 = puVar19[1];
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x28)) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          lVar14 = local_a8 * 0x10;
          puVar19 = (undefined8 *)(*(longlong *)(pFVar3 + lVar22 + 0x20) + lVar14);
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x28)) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          puVar17 = (undefined8 *)(lVar13 + *(longlong *)(pFVar3 + lVar22 + 0x20));
          *puVar17 = *puVar19;
          uVar11 = *(uint *)(puVar19 + 1);
          *(uint *)(puVar17 + 1) = (uVar11 ^ *(uint *)(puVar17 + 1)) & 0x80000000 ^ uVar11;
          *(uint *)(puVar17 + 1) =
               (uVar11 ^ *(uint *)(puVar19 + 1)) & 0x7fffffff ^ *(uint *)(puVar19 + 1);
          *(undefined4 *)((longlong)puVar17 + 0xc) = *(undefined4 *)((longlong)puVar19 + 0xc);
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x28)) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          lVar5 = *(longlong *)(pFVar3 + lVar22 + 0x20);
          uStack_50 = (undefined4)uVar8;
          uStack_4c = (undefined4)((ulonglong)uVar8 >> 0x20);
          *(undefined8 *)(lVar5 + lVar14) = uVar7;
          *(undefined4 *)(lVar5 + 8 + lVar14) = uStack_50;
          *(undefined4 *)(lVar5 + 0xc + lVar14) = uStack_4c;
          if (this->automatic_leg_make == false) {
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x38)) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar19 = (undefined8 *)(*(longlong *)(pFVar3 + lVar22 + 0x30) + lVar13);
            uVar7 = *puVar19;
            uVar8 = puVar19[1];
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x38)) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar19 = (undefined8 *)(lVar14 + *(longlong *)(pFVar3 + lVar22 + 0x30));
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x38)) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar17 = (undefined8 *)(lVar13 + *(longlong *)(pFVar3 + lVar22 + 0x30));
            *puVar17 = *puVar19;
            uVar11 = *(uint *)(puVar19 + 1);
            *(uint *)(puVar17 + 1) = (uVar11 ^ *(uint *)(puVar17 + 1)) & 0x80000000 ^ uVar11;
            *(uint *)(puVar17 + 1) =
                 (*(uint *)(puVar19 + 1) ^ uVar11) & 0x7fffffff ^ *(uint *)(puVar19 + 1);
            *(undefined4 *)((longlong)puVar17 + 0xc) = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x38)) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            lVar5 = *(longlong *)(pFVar3 + lVar22 + 0x30);
            uStack_60 = (undefined4)uVar8;
            uStack_5c = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined8 *)(lVar5 + lVar14) = uVar7;
            *(undefined4 *)(lVar5 + 8 + lVar14) = uStack_60;
            *(undefined4 *)(lVar5 + 0xc + lVar14) = uStack_5c;
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x48)) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar19 = (undefined8 *)(*(longlong *)(pFVar3 + lVar22 + 0x40) + lVar13);
            uVar7 = *puVar19;
            uVar8 = puVar19[1];
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x48)) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar19 = (undefined8 *)(lVar14 + *(longlong *)(pFVar3 + lVar22 + 0x40));
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x48)) {
              uVar11 = uVar16;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            puVar17 = (undefined8 *)(lVar13 + *(longlong *)(pFVar3 + lVar22 + 0x40));
            *puVar17 = *puVar19;
            uVar11 = *(uint *)(puVar19 + 1);
            *(uint *)(puVar17 + 1) = (uVar11 ^ *(uint *)(puVar17 + 1)) & 0x80000000 ^ uVar11;
            *(uint *)(puVar17 + 1) =
                 (*(uint *)(puVar19 + 1) ^ uVar11) & 0x7fffffff ^ *(uint *)(puVar19 + 1);
            *(undefined4 *)((longlong)puVar17 + 0xc) = *(undefined4 *)((longlong)puVar19 + 0xc);
            uVar11 = 0;
            if ((int)uVar20 < param_1->ArrayNum) {
              uVar11 = uVar21;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            pFVar3 = (param_1->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x48)) {
              uVar11 = uVar15;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
              ;
              return pTVar12;
            }
            lVar13 = *(longlong *)(pFVar3 + lVar22 + 0x40);
            uStack_60 = (undefined4)uVar8;
            uStack_5c = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined8 *)(lVar13 + lVar14) = uVar7;
            *(undefined4 *)(lVar13 + 8 + lVar14) = uStack_60;
            *(undefined4 *)(lVar13 + 0xc + lVar14) = uStack_5c;
          }
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x138)) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          uVar1 = *(undefined4 *)(*(longlong *)(pFVar3 + lVar22 + 0x130) + -4 + local_a8 * 4);
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x138)) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          uVar2 = *(undefined4 *)(*(longlong *)(pFVar3 + lVar22 + 0x130) + local_a8 * 4);
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)(uVar18 - 1) < *(int *)(pFVar3 + lVar22 + 0x138)) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          *(undefined4 *)(*(longlong *)(pFVar3 + lVar22 + 0x130) + -4 + local_a8 * 4) = uVar2;
          uVar11 = 0;
          if ((int)uVar20 < param_1->ArrayNum) {
            uVar11 = uVar21;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar11 = 0;
          if ((int)uVar18 < *(int *)(pFVar3 + lVar22 + 0x138)) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar12;
          }
          *(undefined4 *)(*(longlong *)(pFVar3 + lVar22 + 0x130) + local_a8 * 4) = uVar1;
          bVar10 = true;
        }
        local_a8 = local_a8 + 1;
        uVar18 = uVar18 + 1;
        local_80 = local_80 + 1;
        local_9c = local_9c + 1;
        local_78 = local_78 + 0x10;
      }
      local_70 = local_70 + 0x170;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < param_1->ArrayNum);
  } while (bVar10);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = param_1->ArrayNum;
  __return_storage_ptr__->ArrayMax = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  DestructItems<FDragonData_SpineFeetPair,int>
            ((FDragonData_SpineFeetPair *)(param_1->AllocatorInstance).Data,0);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// Zero_XY_Vector @ 14d3292b0

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

TVector<double> * __thiscall
FAnimNode_DragonFeetSolver::Zero_XY_Vector
          (FAnimNode_DragonFeetSolver *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,TTransform<double> *param_3,bool param_4
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar29;
  undefined4 uVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  dVar36 = (param_1->field0_0x0)._s_0.X;
  dVar40 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.Z;
  dVar26 = (param_3->Rotation).XY.m128d_f64[0];
  dVar29 = (param_3->Rotation).XY.m128d_f64[1];
  dVar1 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar2 = (param_3->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar36;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar40;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar8;
  dVar1 = dVar1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar2 = dVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar26 = dVar26 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar29 = dVar29 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar29,0);
  auVar20._0_8_ = dVar26;
  uVar30 = (undefined4)((ulonglong)dVar29 >> 0x20);
  auVar20._12_4_ = uVar30;
  auVar22._8_4_ = SUB84(dVar29,0);
  auVar22._0_8_ = dVar26;
  auVar22._12_4_ = uVar30;
  dVar21 = auVar20._8_8_;
  dVar36 = dVar36 - (param_3->Translation).XY.m128d_f64[0];
  dVar40 = dVar40 - (param_3->Translation).XY.m128d_f64[1];
  uVar30 = (undefined4)((ulonglong)dVar40 >> 0x20);
  dVar8 = dVar8 - (param_3->Translation).ZW.m128d_f64[0];
  auVar18._8_4_ = SUB84(dVar2,0);
  auVar18._0_8_ = dVar1;
  auVar18._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar23 = blendpd(auVar22,auVar18,2);
  auVar45._8_4_ = SUB84(dVar40,0);
  auVar45._0_8_ = dVar36;
  auVar45._12_4_ = uVar30;
  auVar9._8_4_ = SUB84(dVar1,0);
  auVar9._0_8_ = dVar21;
  auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar17._8_4_ = SUB84(dVar40,0);
  auVar17._0_8_ = dVar36;
  auVar17._12_4_ = uVar30;
  auVar46._0_8_ = auVar45._8_8_ * dVar26 - dVar21 * dVar36;
  auVar46._8_8_ = dVar8 * dVar29 - auVar9._8_8_ * dVar40;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar8;
  auVar18 = blendpd(auVar17,auVar4,2);
  auVar19._0_8_ = auVar18._0_8_ * dVar1 - dVar8 * auVar23._0_8_;
  auVar19._8_8_ = auVar18._8_8_ * dVar2 - auVar23._8_8_ * 0.0;
  dVar3 = auVar46._8_8_ + auVar46._8_8_;
  dVar16 = auVar19._0_8_ + auVar19._0_8_;
  uVar30 = SUB84(dVar16,0);
  uVar41 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar18 = blendpd(auVar46,auVar19,2);
  auVar47._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar47._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar42._8_4_ = uVar30;
  auVar42._0_8_ = dVar3;
  auVar42._12_4_ = uVar41;
  auVar10._8_4_ = uVar30;
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar41;
  auVar37._8_4_ = uVar30;
  auVar37._0_8_ = dVar3;
  auVar37._12_4_ = uVar41;
  auVar38 = blendpd(auVar37,auVar47,2);
  auVar43._0_8_ = auVar42._8_8_ * dVar26 - dVar3 * dVar21;
  auVar43._8_8_ = auVar47._0_8_ * dVar29 - auVar10._8_8_ * dVar1;
  auVar11._8_4_ = SUB84(auVar47._8_8_,0);
  auVar11._0_8_ = auVar47._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
  auVar18 = *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64;
  auVar39._0_8_ = auVar38._0_8_ * dVar1 - auVar47._0_8_ * auVar23._0_8_;
  auVar39._8_8_ = auVar38._8_8_ * dVar2 - auVar11._8_8_ * auVar23._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64;
  auVar31._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar18._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar18._0_4_);
  auVar31._8_4_ = _UNK_15061cc88 & auVar18._8_4_;
  auVar31._12_4_ = _UNK_15061cc8c & auVar18._12_4_;
  lVar5 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar23._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar23._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  lVar6 = -(ulonglong)(auVar31._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar7 = -(ulonglong)(auVar31._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar32._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar38._4_4_,
                        ~(uint)lVar6 & auVar38._0_4_);
  auVar32._8_4_ = ~(uint)lVar7 & auVar38._8_4_;
  auVar32._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar38._12_4_;
  auVar12._8_4_ = SUB84(auVar43._8_8_,0);
  auVar12._0_8_ = auVar43._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar38._0_8_ = auVar23._0_8_;
  auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar38);
  dVar26 = (param_3->Rotation).ZW.m128d_f64[1];
  auVar44 = blendpd(auVar43,auVar39,2);
  auVar23 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  dVar36 = auVar18._0_8_ * auVar32._0_8_ * (dVar3 * dVar2 + dVar36 + auVar12._8_8_);
  dVar40 = auVar18._8_8_ * auVar32._8_8_ * (dVar16 * dVar2 + dVar40 + auVar39._0_8_);
  auVar33._8_4_ = SUB84(dVar40,0);
  auVar33._0_8_ = dVar36;
  uVar30 = (undefined4)((ulonglong)dVar40 >> 0x20);
  auVar33._12_4_ = uVar30;
  auVar18 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar16 = auVar18._0_8_;
  dVar3 = (double)CONCAT44(~(uint)((ulonglong)lVar5 >> 0x20) & auVar38._4_4_,
                           ~(uint)lVar5 & auVar38._0_4_) *
          (auVar47._0_8_ * dVar2 + dVar8 + auVar44._0_8_) * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar38 = blendpd(auVar23,auVar18,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar36;
  auVar34._8_8_ = dVar3 * auVar23._8_8_ - dVar16 * dVar40;
  auVar13._8_4_ = SUB84(dVar40,0);
  auVar13._0_8_ = dVar36;
  auVar13._12_4_ = uVar30;
  auVar44._8_4_ = SUB84(dVar8,0);
  auVar44._0_8_ = dVar3;
  auVar44._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar23 = blendpd(auVar13,auVar44,2);
  auVar14._0_8_ = auVar23._0_8_ * dVar16 - auVar38._0_8_ * dVar3;
  auVar14._8_8_ = auVar23._8_8_ * auVar18._8_8_ - auVar38._8_8_ * dVar8;
  auVar23 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar38 = blendpd(auVar34,auVar14,2);
  auVar35._0_8_ = auVar38._0_8_ + auVar38._0_8_;
  auVar35._8_8_ = auVar38._8_8_ + auVar38._8_8_;
  dVar1 = auVar34._8_8_ + auVar34._8_8_;
  dVar2 = auVar14._0_8_ + auVar14._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar1;
  auVar27._12_4_ = uVar30;
  auVar24._8_4_ = SUB84(dVar2,0);
  auVar24._0_8_ = dVar1;
  auVar24._12_4_ = uVar30;
  auVar38 = blendpd(auVar24,auVar35,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar1;
  auVar28._8_8_ = auVar35._0_8_ * auVar23._8_8_ - dVar16 * dVar2;
  auVar15._8_4_ = SUB84(auVar28._8_8_,0);
  auVar15._0_8_ = auVar28._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar23 = blendpd(auVar23,auVar18,2);
  auVar25._0_8_ = auVar38._0_8_ * dVar16 - auVar23._0_8_ * auVar35._0_8_;
  auVar25._8_8_ = auVar38._8_8_ * auVar18._8_8_ - auVar23._8_8_ * auVar35._8_8_;
  auVar18 = blendpd(auVar28,auVar25,2);
  dVar8 = (param_3->Translation).ZW.m128d_f64[0];
  dVar2 = dVar2 * dVar26 + dVar40 + auVar25._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  auVar23._8_4_ = SUB84(dVar2,0);
  auVar23._0_8_ = dVar1 * dVar26 + dVar36 + auVar15._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  auVar23._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar23;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar35._0_8_ * dVar26 + dVar3 + auVar18._0_8_ + dVar8;
  return __return_storage_ptr__;
}

// getDefaultColliParams @ 14d3295b0

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
FAnimNode_DragonFeetSolver::getDefaultColliParams
          (FAnimNode_DragonFeetSolver *this,FCollisionQueryParams *__return_storage_ptr__,
          FName param_1,AActor *param_2)

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

// line_trace_func @ 14d3299f0

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
FAnimNode_DragonFeetSolver::line_trace_func
          (FAnimNode_DragonFeetSolver *this,USkeletalMeshComponent *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,FHitResult *param_4,FName param_5,FName param_6,float param_7,
          FHitResult *param_8,FLinearColor *param_9,bool param_10,bool param_11)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  float fVar5;
  double dVar6;
  FLinearColor_u_0 FVar7;
  USkeletalMeshComponent *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  FName FVar15;
  FLinearColor *pFVar16;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  ECollisionChannel EVar20;
  FName *pFVar21;
  UObject *pUVar22;
  FLinearColor_u_0 *pFVar23;
  FHitResult *pFVar24;
  longlong lVar25;
  TVector<double>_u_0 *pTVar26;
  FName FVar27;
  TVector<double>_u_0 *pTVar28;
  FHitResult *pFVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  FName local_res8;
  bool bVar48;
  ETraceTypeQuery EVar49;
  FLinearColor_u_0 *pFVar50;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FLinearColor_u_0 local_6e8;
  double local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  undefined1 local_688 [16];
  undefined8 local_678;
  undefined4 uStack_670;
  undefined1 uStack_66c;
  undefined2 uStack_66b;
  undefined1 uStack_669;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_528;
  TVector<double>_u_0 local_508;
  TVector<double>_u_0 local_4e8;
  TVector<double>_u_0 local_4c8;
  TVector<double>_u_0 local_4a8;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_468;
  FLinearColor_u_0 local_448;
  FLinearColor_u_0 local_438;
  FLinearColor_u_0 local_428;
  FLinearColor_u_0 local_418;
  FLinearColor_u_0 local_408;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8 [2];
  FLinearColor_u_0 local_3d8;
  FLinearColor_u_0 local_3c8;
  FLinearColor_u_0 local_3b8;
  FLinearColor_u_0 local_3a8;
  FLinearColor_u_0 local_398;
  FLinearColor_u_0 local_388;
  FLinearColor_u_0 local_378;
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  FLinearColor_u_0 local_228;
  FLinearColor_u_0 local_218;
  undefined1 local_208 [16];
  double local_1f8;
  FLinearColor_u_0 local_1e8;
  double local_1d8;
  undefined1 local_1c8 [48];
  double local_198;
  double local_190;
  int local_124;
  byte local_11b;
  FWeakObjectPtr local_110;
  FWeakObjectPtr FStack_108;
  IActorInstanceManagerInterface *local_100;
  undefined8 uStack_f8;
  FWeakObjectPtr local_f0 [25];
  
  pFVar29 = param_4;
  pFVar23 = &local_6e8;
  local_768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_768.ArrayNum = 0;
  local_768.ArrayMax = 0;
  lVar25 = this->owning_skel->_padding_;
  if (((lVar25 == 0) || (this->trace_timer_count <= this->current_trace_interval)) ||
     (this->trace_distance_legal == false)) goto LAB_14d32ab09;
  iVar19 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_768.AllocatorInstance,&local_768.ArrayMax);
  local_768.ArrayNum = iVar19 + 1;
  *(longlong *)(local_768.AllocatorInstance.Data + (longlong)iVar19 * 8) = lVar25;
  pUVar8 = this->owning_skel;
                    /* WARNING: Load size is inaccurate */
  FVar7 = *(FLinearColor_u_0 *)&(this->character_direction_vector_CS).field0_0x0;
  dVar6 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
  fVar5 = this->scale_mode;
  local_6e8 = FVar7;
  local_6d8 = dVar6;
  if (pUVar8->_padding_ != 0) {
    dVar30 = (this->owner_skel_w_transform).Rotation.ZW.m128d_f64[1];
    local_688 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
    auVar40 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.ZW.m128d_f64;
    dVar45 = FVar7._8_8_;
    dVar33 = auVar40._0_8_;
    auVar32 = blendpd(local_688,auVar40,2);
    auVar43._0_8_ = dVar45 * local_688._0_8_ - local_688._8_8_ * FVar7._0_8_;
    auVar43._8_8_ = dVar6 * local_688._8_8_ - dVar33 * dVar45;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = dVar6;
    auVar31 = blendpd((undefined1  [16])FVar7,auVar31,2);
    auVar35._0_8_ = auVar31._0_8_ * dVar33 - auVar32._0_8_ * dVar6;
    auVar35._8_8_ = auVar31._8_8_ * auVar40._8_8_ - auVar32._8_8_ * 0.0;
    auVar31 = *(undefined1 (*) [16])(this->owner_skel_w_transform).Rotation.XY.m128d_f64;
    auVar32 = blendpd(auVar43,auVar35,2);
    dVar37 = auVar43._8_8_ + auVar43._8_8_;
    dVar12 = auVar35._0_8_ + auVar35._0_8_;
    uVar41 = (undefined4)((ulonglong)dVar12 >> 0x20);
    auVar44._0_8_ = auVar32._0_8_ + auVar32._0_8_;
    auVar44._8_8_ = auVar32._8_8_ + auVar32._8_8_;
    auVar38._8_4_ = SUB84(dVar12,0);
    auVar38._0_8_ = dVar37;
    auVar38._12_4_ = uVar41;
    auVar34._8_4_ = SUB84(dVar12,0);
    auVar34._0_8_ = dVar37;
    auVar34._12_4_ = uVar41;
    auVar35 = blendpd(auVar34,auVar44,2);
    auVar39._0_8_ = auVar38._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar37;
    auVar39._8_8_ = auVar44._0_8_ * auVar31._8_8_ - dVar33 * dVar12;
    auVar31 = blendpd(auVar31,auVar40,2);
    auVar32._8_4_ = SUB84(auVar39._8_8_,0);
    auVar32._0_8_ = auVar39._0_8_;
    auVar32._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
    auVar36._0_8_ = auVar35._0_8_ * dVar33 - auVar31._0_8_ * auVar44._0_8_;
    auVar36._8_8_ = auVar35._8_8_ * auVar40._8_8_ - auVar31._8_8_ * auVar44._8_8_;
    dVar33 = dVar37 * dVar30 + FVar7._0_8_ + auVar32._8_8_;
    dVar37 = dVar12 * dVar30 + dVar45 + auVar36._0_8_;
    uVar41 = SUB84(dVar37,0);
    uVar42 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar40 = blendpd(auVar39,auVar36,2);
    local_6d8 = auVar44._0_8_ * dVar30 + dVar6 + auVar40._0_8_;
    local_208._8_4_ = uVar41;
    local_208._0_8_ = dVar33;
    local_208._12_4_ = uVar42;
    local_6e8._s_0.B = (float)uVar41;
    local_6e8._0_8_ = dVar33;
    local_6e8._s_0.A = (float)uVar42;
    local_1f8 = local_6d8;
    local_1e8 = FVar7;
    local_1d8 = dVar6;
  }
  fVar47 = this->Trace_Radius;
  if (0.0 < param_7) {
    fVar47 = param_7;
  }
  fVar46 = fVar5 * fVar47;
  memset(local_1c8,0,0x100);
  dVar6 = local_6d8;
  pFVar16 = param_9;
  FVar15 = param_5;
  fVar14 = __real_40a00000;
  uVar17 = local_6e8._8_8_;
  uVar13 = local_6e8._0_8_;
  uStack_66b = 0;
  uStack_669 = 0;
  local_678 = 0;
  uStack_66c = 0;
  local_688 = ZEXT816(0);
  uStack_670 = 0xffffffff;
  local_110.ObjectIndex = 0;
  local_110.ObjectSerialNumber = 0;
  FStack_108.ObjectIndex = 0;
  FStack_108.ObjectSerialNumber = 0;
  local_1c8._4_4_ = 1.0;
  uStack_f8._0_4_ = -1;
  uStack_f8._4_1_ = Invalid;
  uStack_f8._5_3_ = 0;
  local_124 = -1;
  local_100 = (IActorInstanceManagerInterface *)0x0;
  if (this->Use_Anti_Channel != false) {
    if (this->use_trace_manager_component == false) {
      local_348._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_348._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_3c8 = FLinearColor::Green.field0_0x0;
      local_3b8._0_8_ = *(undefined8 *)&param_9->field0_0x0;
      local_3b8._8_8_ = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8);
      local_348._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      dVar33 = (double)this->line_trace_upper_height;
      dVar37 = (double)fVar5;
      local_568._s_0.X = (param_2->field0_0x0)._s_0.X - (double)local_6e8._0_8_ * dVar33 * dVar37;
      local_568._s_0.Y = (param_2->field0_0x0)._s_0.Y - (double)local_6e8._8_8_ * dVar33 * dVar37;
      local_568._s_0.Z = (param_2->field0_0x0)._s_0.Z - local_6d8 * dVar33 * dVar37;
      UKismetSystemLibrary::LineTraceSingle
                ((UObject *)pUVar8->_padding_,(TVector<double> *)&local_568._s_0,
                 (TVector<double> *)&local_348._s_0,(uint)(this->Anti_Trace_Channel).Value,
                 this->line_trace_hit_complex,&local_768,None,(FHitResult *)local_1c8,true,
                 (FLinearColor *)&local_3b8._s_0,(FLinearColor *)&local_3c8._s_0,__real_40a00000);
    }
    else {
      local_718.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_718.Data.ArrayNum = 0;
      local_718.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_718,this->Identifier_Counter);
      local_728.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_728.Data.ArrayNum = 0;
      local_728.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_728,this->solver_identifier);
      ::FString::FString(&local_608,"F");
      ::FString::ConcatFF(&local_598,&local_608,&local_728);
      ::FString::ConcatFF(&local_658,&local_598,&local_718);
      iVar19 = local_658.Data.ArrayNum + -1;
      if (local_658.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      pFVar21 = ::FName::FName((FName *)&param_4,iVar19,
                               (wchar_t *)local_658.Data.AllocatorInstance.Data,FNAME_Add);
      FVar27 = *pFVar21;
      if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data.AllocatorInstance.Data);
      }
      if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.Data.AllocatorInstance.Data);
      }
      if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data.AllocatorInstance.Data);
      }
      if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Data.AllocatorInstance.Data);
      }
      if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_718.Data.AllocatorInstance.Data);
      }
      local_368._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_368._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_3d8._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
      local_3d8._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      local_368._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      dVar33 = (double)this->line_trace_upper_height;
      dVar37 = (double)this->scale_mode;
      local_588._s_0.X = (param_2->field0_0x0)._s_0.X - (double)uVar13 * dVar33 * dVar37;
      local_588._s_0.Y = (param_2->field0_0x0)._s_0.Y - (double)uVar17 * dVar33 * dVar37;
      local_588._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar6 * dVar33 * dVar37;
      UDragonIK_Library::TraceSelectorFire
                (this->Dragon_Trace_Manager,(UObject *)this->owning_skel->_padding_,
                 (TVector<double> *)&local_588._s_0,(TVector<double> *)&local_368._s_0,0.0,true,
                 (uint)(this->Anti_Trace_Channel).Value,this->line_trace_hit_complex,&local_768,None
                 ,pFVar29,true,(FLinearColor *)&local_3d8._s_0,FVar27,FVar15);
    }
  }
  if (((local_11b & 1) == 0) || (this->Use_Anti_Channel == false)) {
    if ((this->trace_type == ENUM_LineTrace_Type) ||
       ((fVar47 < __real_3e4ccccd || (param_11 != false)))) {
      if (this->use_trace_manager_component == false) {
        pFVar50 = &local_408;
        local_248._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_248._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        pTVar28 = &local_248;
        pTVar26 = &local_468;
        local_408 = FLinearColor::Green.field0_0x0;
        local_6e8._s_0 = *(FLinearColor_u_0_s_0 *)&pFVar16->field0_0x0;
        local_248._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        local_468._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_468._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_468._s_0.Z = (param_2->field0_0x0)._s_0.Z;
LAB_14d32aa94:
        UKismetSystemLibrary::LineTraceSingle
                  ((UObject *)this->owning_skel->_padding_,(TVector<double> *)&pTVar26->_s_0,
                   (TVector<double> *)&pTVar28->_s_0,(uint)(this->Trace_Channel).Value,
                   this->line_trace_hit_complex,&local_768,None,pFVar29,true,
                   (FLinearColor *)&pFVar23->_s_0,(FLinearColor *)&pFVar50->_s_0,fVar14);
        goto LAB_14d32ab09;
      }
      local_738.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_738.Data.ArrayNum = 0;
      local_738.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_738,this->Identifier_Counter);
      local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_748.Data.ArrayNum = 0;
      local_748.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_748,this->solver_identifier);
      ::FString::FString(&local_5a8,"F");
      ::FString::ConcatFF(&local_618,&local_5a8,&local_748);
      ::FString::ConcatFF(&local_698,&local_618,&local_738);
      iVar19 = local_698.Data.ArrayNum + -1;
      if (local_698.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      pFVar21 = ::FName::FName(&local_3f0,iVar19,(wchar_t *)local_698.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar27 = *pFVar21;
      if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_698.Data.AllocatorInstance.Data);
      }
      if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_618.Data.AllocatorInstance.Data);
      }
      if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
      }
      if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_748.Data.AllocatorInstance.Data);
      }
      if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.Data.AllocatorInstance.Data);
      }
      local_418._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
      local_418._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      pFVar23 = &local_418;
      local_288._s_0.X = (param_3->field0_0x0)._s_0.X;
      local_288._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      pTVar28 = &local_288;
      pTVar26 = &local_268;
      local_288._s_0.Z = (param_3->field0_0x0)._s_0.Z;
      local_268._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_268._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_268._s_0.Z = (param_2->field0_0x0)._s_0.Z;
LAB_14d32a9a8:
      bVar18 = this->line_trace_hit_complex;
      EVar49 = (ETraceTypeQuery)(this->Trace_Channel).Value;
      bVar48 = true;
      fVar46 = 0.0;
    }
    else {
      if (this->trace_type != ENUM_SphereTrace_Type) goto LAB_14d32ab09;
      if (this->use_trace_manager_component == false) {
        dVar33 = (double)fVar46;
        local_4a8._s_0.X = (double)uVar13 * dVar33 + (param_3->field0_0x0)._s_0.X;
        local_488._s_0.X = (double)uVar13 * dVar33 + (param_2->field0_0x0)._s_0.X;
        local_438 = FLinearColor::Green.field0_0x0;
        local_428._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
        local_428._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
        local_4a8._s_0.Z = dVar6 * dVar33 + (param_3->field0_0x0)._s_0.Z;
        local_488._s_0.Z = dVar6 * dVar33 + (param_2->field0_0x0)._s_0.Z;
        local_4a8._s_0.Y = (double)uVar17 * dVar33 + (param_3->field0_0x0)._s_0.Y;
        local_488._s_0.Y = (double)uVar17 * dVar33 + (param_2->field0_0x0)._s_0.Y;
        UKismetSystemLibrary::SphereTraceSingle
                  ((UObject *)this->owning_skel->_padding_,(TVector<double> *)&local_488._s_0,
                   (TVector<double> *)&local_4a8._s_0,fVar46,(uint)(this->Trace_Channel).Value,
                   this->line_trace_hit_complex,&local_768,None,pFVar29,true,
                   (FLinearColor *)&local_428._s_0,(FLinearColor *)&local_438._s_0,fVar14);
        goto LAB_14d32ab09;
      }
      local_6a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6a8.Data.ArrayNum = 0;
      local_6a8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_6a8,this->Identifier_Counter);
      local_6b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6b8.Data.ArrayNum = 0;
      local_6b8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_6b8,this->solver_identifier);
      ::FString::FString(&local_628,"F");
      ::FString::ConcatFF(&local_5b8,&local_628,&local_6b8);
      ::FString::ConcatFF(&local_638,&local_5b8,&local_6a8);
      iVar19 = local_638.Data.ArrayNum + -1;
      if (local_638.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      pFVar21 = ::FName::FName(&local_3f8,iVar19,(wchar_t *)local_638.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar27 = *pFVar21;
      if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_638.Data.AllocatorInstance.Data);
      }
      if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
      }
      if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Data.AllocatorInstance.Data);
      }
      if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
      }
      if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
      }
      local_448._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
      local_448._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      pFVar23 = &local_448;
      local_2c8._s_0.X = (param_3->field0_0x0)._s_0.X;
      local_2c8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      pTVar28 = &local_2c8;
      pTVar26 = &local_2a8;
      bVar18 = this->line_trace_hit_complex;
      local_2c8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
      EVar49 = (ETraceTypeQuery)(this->Trace_Channel).Value;
      local_2a8._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_2a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      bVar48 = false;
      local_2a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    }
  }
  else {
    EVar20 = UEngineTypes::ConvertToCollisionChannel((uint)(this->Anti_Trace_Channel).Value);
    if (((local_11b & 1) == 0) ||
       (pUVar22 = FWeakObjectPtr::Get(local_f0), pUVar22 == (UObject *)0x0)) goto LAB_14d32ab09;
    pUVar22 = FWeakObjectPtr::Get(local_f0);
    iVar19 = (**(code **)(*(longlong *)pUVar22 + 0x5e8))(pUVar22,EVar20);
    if (iVar19 != 2) goto LAB_14d32ab09;
    dVar37 = (double)local_1c8._40_8_ - (double)uVar13 * __real_4014000000000000;
    dVar12 = local_198 - (double)uVar17 * __real_4014000000000000;
    dVar33 = local_190 - dVar6 * __real_4014000000000000;
    if (((this->trace_type == ENUM_LineTrace_Type) || (fVar47 < __real_3e4ccccd)) ||
       (param_11 != false)) {
      if (this->use_trace_manager_component == false) {
        pFVar50 = &local_228;
        local_2e8._s_0.X = (param_3->field0_0x0)._s_0.X;
        local_2e8._s_0.Y = (param_3->field0_0x0)._s_0.Y;
        pTVar28 = &local_2e8;
        pTVar26 = &local_4c8;
        pFVar23 = &local_218;
        local_228 = FLinearColor::Green.field0_0x0;
        local_218._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
        local_218._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
        local_2e8._s_0.Z = (param_3->field0_0x0)._s_0.Z;
        local_4c8._s_0.X = dVar37;
        local_4c8._s_0.Y = dVar12;
        local_4c8._s_0.Z = dVar33;
        goto LAB_14d32aa94;
      }
      local_6c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_6c8.Data.ArrayNum = 0;
      local_6c8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_6c8,this->Identifier_Counter);
      local_758.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_758.Data.ArrayNum = 0;
      local_758.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_758,this->solver_identifier);
      ::FString::FString(&local_5c8,"F");
      ::FString::ConcatFF(&local_5d8,&local_5c8,&local_758);
      ::FString::ConcatFF(&local_668,&local_5d8,&local_6c8);
      iVar19 = local_668.Data.ArrayNum + -1;
      if (local_668.Data.ArrayNum == 0) {
        iVar19 = 0;
      }
      pFVar21 = ::FName::FName(local_3e8,iVar19,(wchar_t *)local_668.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar27 = *pFVar21;
      if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_668.Data.AllocatorInstance.Data);
      }
      if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
      }
      if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
      }
      if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_758.Data.AllocatorInstance.Data);
      }
      if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
      }
      local_328._s_0.X = (param_3->field0_0x0)._s_0.X;
      local_328._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      pFVar23 = &local_378;
      local_378._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
      local_378._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      pTVar28 = &local_328;
      pTVar26 = &local_308;
      local_328._s_0.Z = (param_3->field0_0x0)._s_0.Z;
      local_308._8_4_ = SUB84(dVar12,0);
      local_308._0_8_ = dVar37;
      local_308._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_468._s_0.Z = dVar33;
      local_308._s_0.Z = dVar33;
      goto LAB_14d32a9a8;
    }
    if (this->trace_type != ENUM_SphereTrace_Type) goto LAB_14d32ab09;
    if (this->use_trace_manager_component == false) {
      dVar30 = (double)fVar46;
      local_4e8._s_0.X = (double)uVar13 * dVar30 + dVar37;
      local_508._s_0.X = (double)uVar13 * dVar30 + (param_3->field0_0x0)._s_0.X;
      local_398 = FLinearColor::Green.field0_0x0;
      local_388._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
      local_388._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
      local_508._s_0.Z = dVar6 * dVar30 + (param_3->field0_0x0)._s_0.Z;
      local_4e8._s_0.Z = dVar6 * dVar30 + dVar33;
      local_4e8._s_0.Y = (double)uVar17 * dVar30 + dVar12;
      local_508._s_0.Y = (double)uVar17 * dVar30 + (param_3->field0_0x0)._s_0.Y;
      UKismetSystemLibrary::SphereTraceSingle
                ((UObject *)this->owning_skel->_padding_,(TVector<double> *)&local_4e8._s_0,
                 (TVector<double> *)&local_508._s_0,fVar46,(uint)(this->Trace_Channel).Value,
                 this->line_trace_hit_complex,&local_768,None,pFVar29,true,
                 (FLinearColor *)&local_388._s_0,(FLinearColor *)&local_398._s_0,fVar14);
      goto LAB_14d32ab09;
    }
    local_6f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.Data.ArrayNum = 0;
    local_6f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_6f8,this->Identifier_Counter);
    local_708.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_708.Data.ArrayNum = 0;
    local_708.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_708,this->solver_identifier);
    ::FString::FString(&local_5e8,"F");
    ::FString::ConcatFF(&local_5f8,&local_5e8,&local_708);
    ::FString::ConcatFF(&local_648,&local_5f8,&local_6f8);
    iVar19 = local_648.Data.ArrayNum + -1;
    if (local_648.Data.ArrayNum == 0) {
      iVar19 = 0;
    }
    pFVar21 = ::FName::FName(&local_res8,iVar19,(wchar_t *)local_648.Data.AllocatorInstance.Data,
                             FNAME_Add);
    FVar27 = *pFVar21;
    if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_648.Data.AllocatorInstance.Data);
    }
    if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
    }
    if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
    }
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
    if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
    }
    pFVar23 = &local_3a8;
    pTVar28 = &local_548;
    pTVar26 = &local_528;
    bVar18 = this->line_trace_hit_complex;
    dVar30 = (double)fVar46;
    EVar49 = (ETraceTypeQuery)(this->Trace_Channel).Value;
    bVar48 = false;
    local_3a8._0_8_ = *(undefined8 *)&pFVar16->field0_0x0;
    local_3a8._8_8_ = *(undefined8 *)((longlong)&pFVar16->field0_0x0 + 8);
    local_528._s_0.X = (double)uVar13 * dVar30 + dVar37;
    local_548._s_0.X = (double)uVar13 * dVar30 + (param_3->field0_0x0)._s_0.X;
    local_548._s_0.Y = (double)uVar17 * dVar30 + (param_3->field0_0x0)._s_0.Y;
    local_528._s_0.Y = (double)uVar17 * dVar30 + dVar12;
    local_548._s_0.Z = dVar6 * dVar30 + (param_3->field0_0x0)._s_0.Z;
    local_528._s_0.Z = dVar6 * dVar30 + dVar33;
  }
  UDragonIK_Library::TraceSelectorFire
            (this->Dragon_Trace_Manager,(UObject *)this->owning_skel->_padding_,
             (TVector<double> *)&pTVar26->_s_0,(TVector<double> *)&pTVar28->_s_0,fVar46,bVar48,
             EVar49,bVar18,&local_768,None,pFVar29,true,(FLinearColor *)&pFVar23->_s_0,FVar27,FVar15
            );
LAB_14d32ab09:
  if (param_10 != false) {
    pTVar2 = &this->TraceStartList;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar9 <= param_2) &&
        (param_2 < pFVar9 + (longlong)(this->TraceStartList).ArrayMax * 0x18)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = (this->TraceStartList).ArrayNum;
    piVar1 = &(this->TraceStartList).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    dVar6 = (param_2->field0_0x0)._s_0.X;
    dVar33 = (param_2->field0_0x0)._s_0.Y;
    (this->TraceStartList).ArrayNum = iVar19 + 1;
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    pTVar2 = &this->TraceEndList;
    pFVar9 = pFVar10 + (longlong)iVar19 * 0x18;
    *(double *)pFVar9 = dVar6;
    *(double *)(pFVar9 + 8) = dVar33;
    *(double *)(pFVar10 + (longlong)iVar19 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar9 <= param_3) && (param_3 < pFVar9 + (longlong)(this->TraceEndList).ArrayMax * 0x18))
       && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = (this->TraceEndList).ArrayNum;
    piVar1 = &(this->TraceEndList).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    dVar6 = (param_3->field0_0x0)._s_0.X;
    dVar33 = (param_3->field0_0x0)._s_0.Y;
    (this->TraceEndList).ArrayNum = iVar19 + 1;
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    pTVar3 = &this->Is_Line_Mode;
    pFVar9 = pFVar10 + (longlong)iVar19 * 0x18;
    *(double *)pFVar9 = dVar6;
    *(double *)(pFVar9 + 8) = dVar33;
    *(double *)(pFVar10 + (longlong)iVar19 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
    pFVar9 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&param_11) &&
        ((FScriptContainerElement *)&param_11 < pFVar9 + (this->Is_Line_Mode).ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = (this->Is_Line_Mode).ArrayNum;
    piVar1 = &(this->Is_Line_Mode).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->Is_Line_Mode).ArrayNum = iVar19 + 1;
    pTVar4 = &this->TraceRadiusList;
    (pTVar3->AllocatorInstance).Data[iVar19] = (FScriptContainerElement)param_11;
    pFVar9 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&param_7) &&
        ((FScriptContainerElement *)&param_7 <
         pFVar9 + (longlong)(this->TraceRadiusList).ArrayMax * 4)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar19 = (this->TraceRadiusList).ArrayNum;
    piVar1 = &(this->TraceRadiusList).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->TraceRadiusList).ArrayNum = iVar19 + 1;
    *(float *)((pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 4) = param_7;
  }
  this->Identifier_Counter = this->Identifier_Counter + 1;
  lVar25 = 2;
  pFVar24 = param_8;
  do {
    fVar5 = pFVar29->Time;
    fVar47 = pFVar29->Distance;
    iVar19 = pFVar29->_padding_;
    pFVar24->FaceIndex = pFVar29->FaceIndex;
    pFVar24->Time = fVar5;
    pFVar24->Distance = fVar47;
    pFVar24->_padding_ = iVar19;
    uVar13 = *(undefined8 *)&(pFVar29->Location).field_0x8;
    *(undefined8 *)&pFVar24->Location = *(undefined8 *)&pFVar29->Location;
    *(undefined8 *)&(pFVar24->Location).field_0x8 = uVar13;
    uVar13 = *(undefined8 *)&pFVar29->ImpactPoint;
    *(undefined8 *)&(pFVar24->Location).field_0x10 = *(undefined8 *)&(pFVar29->Location).field_0x10;
    *(undefined8 *)&pFVar24->ImpactPoint = uVar13;
    uVar13 = *(undefined8 *)&(pFVar29->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar24->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar29->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar24->ImpactPoint).field_0x10 = uVar13;
    uVar13 = *(undefined8 *)&(pFVar29->Normal).field_0x8;
    *(undefined8 *)&pFVar24->Normal = *(undefined8 *)&pFVar29->Normal;
    *(undefined8 *)&(pFVar24->Normal).field_0x8 = uVar13;
    uVar13 = *(undefined8 *)&pFVar29->ImpactNormal;
    *(undefined8 *)&(pFVar24->Normal).field_0x10 = *(undefined8 *)&(pFVar29->Normal).field_0x10;
    *(undefined8 *)&pFVar24->ImpactNormal = uVar13;
    uVar13 = *(undefined8 *)&(pFVar29->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar24->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar29->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar24->ImpactNormal).field_0x10 = uVar13;
    uVar13 = *(undefined8 *)&(pFVar29->TraceStart).field_0x8;
    *(undefined8 *)&pFVar24->TraceStart = *(undefined8 *)&pFVar29->TraceStart;
    *(undefined8 *)&(pFVar24->TraceStart).field_0x8 = uVar13;
    lVar25 = lVar25 + -1;
    pFVar24 = (FHitResult *)&(pFVar24->TraceStart).field_0x10;
    pFVar29 = (FHitResult *)&(pFVar29->TraceStart).field_0x10;
  } while (lVar25 != 0);
  if (local_768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.AllocatorInstance.Data);
  }
  return;
}

