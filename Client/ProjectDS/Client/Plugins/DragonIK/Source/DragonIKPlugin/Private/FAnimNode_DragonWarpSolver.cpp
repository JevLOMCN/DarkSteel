// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 16

// StaticStruct @ 14d2a4db0

UScriptStruct * __cdecl FAnimNode_DragonWarpSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_DragonWarpSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FAnimNode_DragonWarpSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_DragonWarpSolver,(UObject *)pUVar1,
                         L"AnimNode_DragonWarpSolver");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_DragonWarpSolver.OuterSingleton;
}

// ~FAnimNode_DragonWarpSolver @ 14d2a6300

void __thiscall
FAnimNode_DragonWarpSolver::~FAnimNode_DragonWarpSolver(FAnimNode_DragonWarpSolver *this)

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
  pFVar1 = (this->Spine_Indices).AllocatorInstance.Data;
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
  pFVar1 = (this->Hip_Lifting_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Hip_Lifting_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Hip_Lifting_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Hip_Lifting_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Hip_Lifting_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Hip_Lifting_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Limb_Lifting_Curve).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Limb_Lifting_Curve).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->Limb_Lifting_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->Limb_Lifting_Curve).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->Limb_Lifting_Curve).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Limb_Lifting_Curve).EditorCurveData._padding_);
  pFVar1 = (this->Total_spine_bones).AllocatorInstance.Data;
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
  pFVar1 = (this->feet_mod_transform_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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
  pFVar1 = (this->original_foot_array).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->dragon_limb_data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->dragon_limb_input).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d2a7360

FAnimNode_DragonWarpSolver * __thiscall
FAnimNode_DragonWarpSolver::operator=
          (FAnimNode_DragonWarpSolver *this,FAnimNode_DragonWarpSolver *param_1)

{
  int *piVar1;
  TArray<FDragonData_WarpLimbsData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDragonData_WarpLimbStruct,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar5;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FScriptContainerElement *pFVar12;
  TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  FDragonData_HitPairs *pFVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  FHitResult *pFVar21;
  FHitResult *pFVar22;
  longlong lVar23;
  longlong lVar24;
  
  FAnimNode_DragonControlBase::operator=
            ((FAnimNode_DragonControlBase *)this,(FAnimNode_DragonControlBase *)param_1);
  pTVar2 = &this->dragon_limb_input;
  if (pTVar2 != &param_1->dragon_limb_input) {
    iVar9 = (param_1->dragon_limb_input).ArrayNum;
    piVar1 = &(this->dragon_limb_input).ArrayMax;
    pFVar12 = (param_1->dragon_limb_input).AllocatorInstance.Data;
    (this->dragon_limb_input).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar9,*piVar1,&pTVar2->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar12,(longlong)iVar9 * 0x38);
      }
    }
  }
  pTVar3 = &this->dragon_limb_data;
  this->Hip_Bone_Name = param_1->Hip_Bone_Name;
  this->delta_seconds_saved = param_1->delta_seconds_saved;
  (this->Hip_Bone_Ref).BoneName = (param_1->Hip_Bone_Ref).BoneName;
  uVar10 = *(undefined4 *)&(param_1->Hip_Bone_Ref).field_0x8;
  *(uint *)&(this->Hip_Bone_Ref).field_0x8 =
       (uVar10 ^ *(uint *)&(this->Hip_Bone_Ref).field_0x8) & 0x80000000 ^ uVar10;
  uVar11 = *(undefined4 *)&(param_1->Hip_Bone_Ref).field_0x8;
  *(uint *)&(this->Hip_Bone_Ref).field_0x8 =
       (SPULL(uVar10,0,0x1f) ^ SPULL(uVar11,0,0x1f)) & 0x7fffffffU ^ uVar11;
  (this->Hip_Bone_Ref).CachedCompactPoseIndex = (param_1->Hip_Bone_Ref).CachedCompactPoseIndex;
  this->Hip_Offset = param_1->Hip_Offset;
  if (pTVar3 != &param_1->dragon_limb_data) {
    iVar9 = (param_1->dragon_limb_data).ArrayNum;
    piVar1 = &(this->dragon_limb_data).ArrayMax;
    pFVar12 = (param_1->dragon_limb_data).AllocatorInstance.Data;
    (this->dragon_limb_data).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,4,iVar9,*piVar1,&pTVar3->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar12,(longlong)iVar9 * 0x38);
      }
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->original_foot_array,&param_1->original_foot_array);
  this->test_counter = param_1->test_counter;
  this->trace_draw_counter = param_1->trace_draw_counter;
  this->scale_mode = param_1->scale_mode;
  this->enable_solver = param_1->enable_solver;
  this->SavedBoneContainer = param_1->SavedBoneContainer;
  dVar17 = (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->ChestEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->ChestEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Rotation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Translation.XY.m128d_f64[1];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.XY.m128d_f64[0];
  (this->RootEffectorTransform).Translation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Translation.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Translation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.XY.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[1];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->RootEffectorTransform).Scale3D.ZW.m128d_f64[0];
  (this->RootEffectorTransform).Scale3D.ZW.m128d_f64[1] = dVar17;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_bone_array,&param_1->feet_bone_array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_transform_array,&param_1->feet_transform_array);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_Alpha_array,&param_1->feet_Alpha_array);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->feet_mod_transform_array,&param_1->feet_mod_transform_array);
  pTVar4 = &this->feet_fingers_transform_array;
  if (pTVar4 != &param_1->feet_fingers_transform_array) {
    DestructItems<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *)(pTVar4->AllocatorInstance).Data,(this->feet_fingers_transform_array).ArrayNum);
    iVar9 = (param_1->feet_fingers_transform_array).ArrayNum;
    piVar1 = &(this->feet_fingers_transform_array).ArrayMax;
    pTVar13 = (TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *)(param_1->feet_fingers_transform_array).AllocatorInstance.Data;
    (this->feet_fingers_transform_array).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,*piVar1,&pTVar4->AllocatorInstance,iVar9,piVar1);
      ConstructItems<TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar4->AllocatorInstance).Data,pTVar13,iVar9);
    }
  }
  pTVar5 = &this->feet_knee_offset_array;
  if (pTVar5 != &param_1->feet_knee_offset_array) {
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (pTVar5->AllocatorInstance).Data,(this->feet_knee_offset_array).ArrayNum);
    iVar9 = (param_1->feet_knee_offset_array).ArrayNum;
    piVar1 = &(this->feet_knee_offset_array).ArrayMax;
    pTVar14 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
              (param_1->feet_knee_offset_array).AllocatorInstance.Data;
    (this->feet_knee_offset_array).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,*piVar1,&pTVar5->AllocatorInstance,iVar9,piVar1);
      ConstructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar5->AllocatorInstance).Data,pTVar14,iVar9);
    }
  }
  pTVar13 = &this->feet_Animated_transform_array;
  if (pTVar13 != &param_1->feet_Animated_transform_array) {
    DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               (pTVar13->AllocatorInstance).Data,(this->feet_Animated_transform_array).ArrayNum);
    iVar9 = (param_1->feet_Animated_transform_array).ArrayNum;
    piVar1 = &(this->feet_Animated_transform_array).ArrayMax;
    pTVar15 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
              (param_1->feet_Animated_transform_array).AllocatorInstance.Data;
    (this->feet_Animated_transform_array).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar9,*piVar1,&pTVar13->AllocatorInstance,iVar9,piVar1);
      ConstructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
                ((pTVar13->AllocatorInstance).Data,pTVar15,iVar9);
    }
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->knee_Animated_transform_array,&param_1->knee_Animated_transform_array);
  pTVar6 = &this->feet_hit_array;
  this->atleast_one_hit = param_1->atleast_one_hit;
  if (pTVar6 != &param_1->feet_hit_array) {
    iVar9 = (param_1->feet_hit_array).ArrayNum;
    piVar1 = &(this->feet_hit_array).ArrayMax;
    pFVar21 = (FHitResult *)(param_1->feet_hit_array).AllocatorInstance.Data;
    (this->feet_hit_array).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,8,iVar9,*piVar1,&pTVar6->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FHitResult,FHitResult,int>((pTVar6->AllocatorInstance).Data,pFVar21,iVar9);
    }
  }
  this->solve_should_fail = param_1->solve_should_fail;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_bones,&param_1->Total_spine_bones);
  this->every_foot_dont_have_child = param_1->every_foot_dont_have_child;
  this->is_initialized = param_1->is_initialized;
  dVar17 = (param_1->character_direction_vector_CS).field0_0x0._s_0.Y;
  (this->character_direction_vector_CS).field0_0x0._s_0.X =
       (param_1->character_direction_vector_CS).field0_0x0._s_0.X;
  (this->character_direction_vector_CS).field0_0x0._s_0.Y = dVar17;
  (this->character_direction_vector_CS).field0_0x0._s_0.Z =
       (param_1->character_direction_vector_CS).field0_0x0._s_0.Z;
  dVar17 = (param_1->forward_vector_CS).field0_0x0._s_0.Y;
  (this->forward_vector_CS).field0_0x0._s_0.X = (param_1->forward_vector_CS).field0_0x0._s_0.X;
  (this->forward_vector_CS).field0_0x0._s_0.Y = dVar17;
  (this->forward_vector_CS).field0_0x0._s_0.Z = (param_1->forward_vector_CS).field0_0x0._s_0.Z;
  this->speed_warping_const = param_1->speed_warping_const;
  this->enable_slope_warp = param_1->enable_slope_warp;
  this->automatic_speed_warping_const = param_1->automatic_speed_warping_const;
  this->slope_detection_tolerance = param_1->slope_detection_tolerance;
  this->Warp_Slope_Interpolation = param_1->Warp_Slope_Interpolation;
  dVar17 = (param_1->Hip_Transform_Value).Rotation.XY.m128d_f64[1];
  (this->Hip_Transform_Value).Rotation.XY.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Rotation.XY.m128d_f64[0];
  (this->Hip_Transform_Value).Rotation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->Hip_Transform_Value).Rotation.ZW.m128d_f64[1];
  (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Rotation.ZW.m128d_f64[0];
  (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->Hip_Transform_Value).Translation.XY.m128d_f64[1];
  (this->Hip_Transform_Value).Translation.XY.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Translation.XY.m128d_f64[0];
  (this->Hip_Transform_Value).Translation.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->Hip_Transform_Value).Translation.ZW.m128d_f64[1];
  (this->Hip_Transform_Value).Translation.ZW.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Translation.ZW.m128d_f64[0];
  (this->Hip_Transform_Value).Translation.ZW.m128d_f64[1] = dVar17;
  dVar17 = (param_1->Hip_Transform_Value).Scale3D.XY.m128d_f64[1];
  (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Scale3D.XY.m128d_f64[0];
  (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[1] = dVar17;
  dVar17 = (param_1->Hip_Transform_Value).Scale3D.ZW.m128d_f64[1];
  (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[0] =
       (param_1->Hip_Transform_Value).Scale3D.ZW.m128d_f64[0];
  (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[1] = dVar17;
  (this->Trace_Channel).Value = (param_1->Trace_Channel).Value;
  this->line_trace_downward_height = param_1->line_trace_downward_height;
  this->line_trace_upper_height = param_1->line_trace_upper_height;
  this->virtual_leg_width = param_1->virtual_leg_width;
  this->virtual_scale = param_1->virtual_scale;
  this->internal_slope_diff = param_1->internal_slope_diff;
  this->DisplayLineTrace = param_1->DisplayLineTrace;
  this->Limb_Compression_Intensity = param_1->Limb_Compression_Intensity;
  FRuntimeFloatCurve::operator=(&this->Limb_Lifting_Curve,&param_1->Limb_Lifting_Curve);
  this->Hip_Change_Intensity = param_1->Hip_Change_Intensity;
  FRuntimeFloatCurve::operator=(&this->Hip_Lifting_Curve,&param_1->Hip_Lifting_Curve);
  lVar24 = 2;
  lVar23 = 2;
  pFVar21 = &this->front_hit_result;
  pFVar22 = &param_1->front_hit_result;
  do {
    fVar19 = pFVar22->Time;
    fVar20 = pFVar22->Distance;
    iVar9 = pFVar22->_padding_;
    pFVar21->FaceIndex = pFVar22->FaceIndex;
    pFVar21->Time = fVar19;
    pFVar21->Distance = fVar20;
    pFVar21->_padding_ = iVar9;
    uVar18 = *(undefined8 *)&(pFVar22->Location).field_0x8;
    *(undefined8 *)&pFVar21->Location = *(undefined8 *)&pFVar22->Location;
    *(undefined8 *)&(pFVar21->Location).field_0x8 = uVar18;
    uVar18 = *(undefined8 *)&pFVar22->ImpactPoint;
    *(undefined8 *)&(pFVar21->Location).field_0x10 = *(undefined8 *)&(pFVar22->Location).field_0x10;
    *(undefined8 *)&pFVar21->ImpactPoint = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar21->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar22->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar21->ImpactPoint).field_0x10 = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->Normal).field_0x8;
    *(undefined8 *)&pFVar21->Normal = *(undefined8 *)&pFVar22->Normal;
    *(undefined8 *)&(pFVar21->Normal).field_0x8 = uVar18;
    uVar18 = *(undefined8 *)&pFVar22->ImpactNormal;
    *(undefined8 *)&(pFVar21->Normal).field_0x10 = *(undefined8 *)&(pFVar22->Normal).field_0x10;
    *(undefined8 *)&pFVar21->ImpactNormal = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar21->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar22->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar21->ImpactNormal).field_0x10 = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->TraceStart).field_0x8;
    *(undefined8 *)&pFVar21->TraceStart = *(undefined8 *)&pFVar22->TraceStart;
    *(undefined8 *)&(pFVar21->TraceStart).field_0x8 = uVar18;
    lVar23 = lVar23 + -1;
    pFVar21 = (FHitResult *)&(pFVar21->TraceStart).field_0x10;
    pFVar22 = (FHitResult *)&(pFVar22->TraceStart).field_0x10;
  } while (lVar23 != 0);
  pFVar21 = &this->back_hit_result;
  pFVar22 = &param_1->back_hit_result;
  do {
    fVar19 = pFVar22->Time;
    fVar20 = pFVar22->Distance;
    iVar9 = pFVar22->_padding_;
    pFVar21->FaceIndex = pFVar22->FaceIndex;
    pFVar21->Time = fVar19;
    pFVar21->Distance = fVar20;
    pFVar21->_padding_ = iVar9;
    uVar18 = *(undefined8 *)&(pFVar22->Location).field_0x8;
    *(undefined8 *)&pFVar21->Location = *(undefined8 *)&pFVar22->Location;
    *(undefined8 *)&(pFVar21->Location).field_0x8 = uVar18;
    uVar18 = *(undefined8 *)&pFVar22->ImpactPoint;
    *(undefined8 *)&(pFVar21->Location).field_0x10 = *(undefined8 *)&(pFVar22->Location).field_0x10;
    *(undefined8 *)&pFVar21->ImpactPoint = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->ImpactPoint).field_0x10;
    *(undefined8 *)&(pFVar21->ImpactPoint).field_0x8 =
         *(undefined8 *)&(pFVar22->ImpactPoint).field_0x8;
    *(undefined8 *)&(pFVar21->ImpactPoint).field_0x10 = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->Normal).field_0x8;
    *(undefined8 *)&pFVar21->Normal = *(undefined8 *)&pFVar22->Normal;
    *(undefined8 *)&(pFVar21->Normal).field_0x8 = uVar18;
    uVar18 = *(undefined8 *)&pFVar22->ImpactNormal;
    *(undefined8 *)&(pFVar21->Normal).field_0x10 = *(undefined8 *)&(pFVar22->Normal).field_0x10;
    *(undefined8 *)&pFVar21->ImpactNormal = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->ImpactNormal).field_0x10;
    *(undefined8 *)&(pFVar21->ImpactNormal).field_0x8 =
         *(undefined8 *)&(pFVar22->ImpactNormal).field_0x8;
    *(undefined8 *)&(pFVar21->ImpactNormal).field_0x10 = uVar18;
    uVar18 = *(undefined8 *)&(pFVar22->TraceStart).field_0x8;
    *(undefined8 *)&pFVar21->TraceStart = *(undefined8 *)&pFVar22->TraceStart;
    *(undefined8 *)&(pFVar21->TraceStart).field_0x8 = uVar18;
    lVar24 = lVar24 + -1;
    pFVar21 = (FHitResult *)&(pFVar21->TraceStart).field_0x10;
    pFVar22 = (FHitResult *)&(pFVar22->TraceStart).field_0x10;
  } while (lVar24 != 0);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->EffectorLocationList,&param_1->EffectorLocationList);
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            (&this->Total_spine_heights,&param_1->Total_spine_heights);
  pTVar7 = &this->spine_hit_pairs;
  if (pTVar7 != &param_1->spine_hit_pairs) {
    DestructItems<FDragonData_HitPairs,int>
              ((FDragonData_HitPairs *)(pTVar7->AllocatorInstance).Data,
               (this->spine_hit_pairs).ArrayNum);
    iVar9 = (param_1->spine_hit_pairs).ArrayNum;
    piVar1 = &(this->spine_hit_pairs).ArrayMax;
    pFVar16 = (FDragonData_HitPairs *)(param_1->spine_hit_pairs).AllocatorInstance.Data;
    (this->spine_hit_pairs).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x5f8,8,iVar9,*piVar1,&pTVar7->AllocatorInstance,iVar9,piVar1);
      ConstructItems<FDragonData_HitPairs,FDragonData_HitPairs,int>
                ((pTVar7->AllocatorInstance).Data,pFVar16,iVar9);
    }
  }
  pTVar8 = &this->Spine_Indices;
  if (pTVar8 != &param_1->Spine_Indices) {
    iVar9 = (param_1->Spine_Indices).ArrayNum;
    piVar1 = &(this->Spine_Indices).ArrayMax;
    pFVar12 = (param_1->Spine_Indices).AllocatorInstance.Data;
    (this->Spine_Indices).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,*piVar1,&pTVar8->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar12,(longlong)iVar9 << 2);
      }
    }
  }
  this->owning_skel = param_1->owning_skel;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceStartList,&param_1->TraceStartList);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TraceEndList,&param_1->TraceEndList);
  return this;
}

// FAnimNode_DragonWarpSolver @ 14d32cf40

FAnimNode_DragonWarpSolver * __thiscall
FAnimNode_DragonWarpSolver::FAnimNode_DragonWarpSolver(FAnimNode_DragonWarpSolver *this)

{
  undefined1 *puVar1;
  FRichCurve *pFVar2;
  undefined1 in_R9B;
  float fVar3;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffb8;
  FKeyHandle FVar4;
  
  FAnimNode_DragonControlBase::FAnimNode_DragonControlBase((FAnimNode_DragonControlBase *)this);
  this->delta_seconds_saved = 1.0;
  (this->Hip_Bone_Ref).BoneName.ComparisonIndex = 0;
  this->_padding_ = (longlong)&___7FAnimNode_DragonWarpSolver__6B_;
  (this->dragon_limb_input).ArrayNum = 0;
  (this->dragon_limb_input).ArrayMax = 0;
  (this->Hip_Bone_Name).ComparisonIndex = 0;
  (this->Hip_Bone_Name).Number = 0;
  (this->dragon_limb_input).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Hip_Bone_Ref).BoneName.Number = 0;
  puVar1 = &(this->Hip_Bone_Ref).field_0x8;
  (this->Hip_Bone_Ref).BoneIndex = -1;
  (this->Hip_Bone_Ref).bUseSkeletonIndex = 0;
  (this->Hip_Bone_Ref).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->dragon_limb_data).ArrayNum = 0;
  (this->dragon_limb_data).ArrayMax = 0;
  (this->original_foot_array).ArrayNum = 0;
  (this->original_foot_array).ArrayMax = 0;
  (this->dragon_limb_data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->original_foot_array).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Hip_Offset = 0.0;
  this->test_counter = 0;
  this->trace_draw_counter = 0;
  this->scale_mode = 1.0;
  this->enable_solver = true;
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
  (this->Total_spine_bones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_bones).ArrayNum = 0;
  (this->Total_spine_bones).ArrayMax = 0;
  (this->character_direction_vector_CS).field0_0x0._s_0.X = 0.0;
  (this->character_direction_vector_CS).field0_0x0._s_0.Y = 0.0;
  (this->character_direction_vector_CS).field0_0x0._s_0.Z = 1.0;
  (this->forward_vector_CS).field0_0x0._s_0.X = 0.0;
  (this->forward_vector_CS).field0_0x0._s_0.Y = 1.0;
  (this->forward_vector_CS).field0_0x0._s_0.Z = 0.0;
  this->atleast_one_hit = false;
  this->solve_should_fail = false;
  this->every_foot_dont_have_child = false;
  this->is_initialized = false;
  this->speed_warping_const = 1.0;
  this->enable_slope_warp = false;
  this->automatic_speed_warping_const = 1.0;
  this->slope_detection_tolerance = 0.01;
  this->Warp_Slope_Interpolation = 25.0;
  *&(this->Hip_Transform_Value).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Hip_Transform_Value).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Hip_Transform_Value).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Hip_Transform_Value).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Hip_Transform_Value).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  fVar3 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
  *&(this->Hip_Transform_Value).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->Trace_Channel).Value = '\0';
  this->line_trace_downward_height = 200.0;
  this->line_trace_upper_height = 200.0;
  this->virtual_leg_width = 25.0;
  this->virtual_scale = 1.0;
  this->internal_slope_diff = 0.0;
  this->DisplayLineTrace = true;
  this->Limb_Compression_Intensity = 0.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Limb_Lifting_Curve);
  this->Hip_Change_Intensity = 5.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->Hip_Lifting_Curve);
  memset(&this->front_hit_result,0,0x100);
  (this->front_hit_result).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->front_hit_result).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->front_hit_result).Time = 1.0;
  (this->front_hit_result).MyItem = -1;
  (this->front_hit_result).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->front_hit_result).HitObjectHandle.InstanceIndex = -1;
  (this->front_hit_result).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->front_hit_result).HitObjectHandle.field_0x1d = 0;
  memset(&this->back_hit_result,0,0x100);
  (this->back_hit_result).Time = 1.0;
  (this->back_hit_result).MyItem = -1;
  (this->back_hit_result).HitObjectHandle.ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (this->back_hit_result).HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  (this->back_hit_result).HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (this->back_hit_result).HitObjectHandle.InstanceIndex = -1;
  (this->back_hit_result).HitObjectHandle.ResolutionStatus = Invalid;
  *(undefined3 *)&(this->back_hit_result).HitObjectHandle.field_0x1d = 0;
  (this->EffectorLocationList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectorLocationList).ArrayNum = 0;
  (this->EffectorLocationList).ArrayMax = 0;
  (this->Total_spine_heights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Total_spine_heights).ArrayNum = 0;
  (this->Total_spine_heights).ArrayMax = 0;
  (this->spine_hit_pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->spine_hit_pairs).ArrayNum = 0;
  (this->spine_hit_pairs).ArrayMax = 0;
  (this->Spine_Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Spine_Indices).ArrayNum = 0;
  (this->Spine_Indices).ArrayMax = 0;
  (this->TraceStartList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceStartList).ArrayNum = 0;
  (this->TraceStartList).ArrayMax = 0;
  (this->TraceEndList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceEndList).ArrayNum = 0;
  (this->TraceEndList).ArrayMax = 0;
  this->is_initialized = false;
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->Hip_Lifting_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = in_stack_ffffffffffffffb8 & 0xffffff00;
  FRichCurve::AddKey(pFVar2,fVar3,0.0,(bool)in_R9B,FVar4);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = FVar4.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar2,fVar3,__real_3f800000,(bool)in_R9B,FVar4);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = FVar4.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar2,fVar3,__real_3fc00000,(bool)in_R9B,FVar4);
  pFVar2 = FRuntimeFloatCurve::GetRichCurve(&this->Limb_Lifting_Curve);
  FKeyHandle::FKeyHandle(local_res8);
  FVar4.Index = FVar4.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar2,fVar3,0.0,(bool)in_R9B,FVar4);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(pFVar2,fVar3,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar4.Index & 0xffffff00));
  return this;
}

// ConditionalDebugDraw @ 14d336ef0

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
FAnimNode_DragonWarpSolver::ConditionalDebugDraw
          (FAnimNode_DragonWarpSolver *this,FPrimitiveDrawInterface *param_1,
          USkeletalMeshComponent *param_2)

{
  return;
}

// EvaluateComponentSpaceInternal @ 14d339200

void __thiscall
FAnimNode_DragonWarpSolver::EvaluateComponentSpaceInternal
          (FAnimNode_DragonWarpSolver *this,FComponentSpacePoseContext *param_1)

{
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14d3392b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_DragonWarpSolver::EvaluateSkeletalControl_AnyThread
          (FAnimNode_DragonWarpSolver *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  double dVar2;
  code *pcVar3;
  undefined8 uVar4;
  FCompactPoseBoneIndex *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  FCompactPoseBoneIndex FVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_DragonWarpSolver_Eval> FVar19;
  FRichCurve *pFVar20;
  undefined4 extraout_var;
  TTransform<double> *pTVar21;
  longlong lVar22;
  FNameEntryId FVar23;
  FName FVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined1 auStackY_1f8 [32];
  FColor_u_0 local_198 [2];
  FName local_190;
  uint local_188;
  uint uStack_184;
  FName local_180;
  FBoneReference local_168;
  FBoneReference local_158;
  undefined8 uStack_148;
  double local_140;
  FName local_138 [2];
  FBoneReference local_128;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  FCompactPoseBoneIndex local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (this->enable_solver == false) {
    return;
  }
  lVar22 = *(longlong *)&(param_1->Pose).Pose.field_0x10;
  if (lVar22 == 0) {
    return;
  }
  bVar12 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar22 + 0x30));
  if (!bVar12) {
    return;
  }
  if (*(longlong *)(lVar22 + 0x48) == 0) {
    return;
  }
  if (*(int *)(lVar22 + 8) < 1) {
    return;
  }
  lVar22 = param_1->_padding_;
  local_118 = *(double *)(lVar22 + 0x120);
  dStack_110 = *(double *)(lVar22 + 0x128);
  local_108 = *(double *)(lVar22 + 0x130);
  if (SQRT(dStack_110 * dStack_110 + local_118 * local_118 + local_108 * local_108) <= 0.0) {
    return;
  }
  if (*(float *)((longlong)&this->_padding_ + 4) <= __real_3727c5ac) {
    return;
  }
  pcVar3 = *(code **)(this->_padding_ + 0xd0);
  if ((*(longlong *)(lVar22 + 0x660) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = *(undefined8 *)(lVar22 + 0x660);
  lVar22 = param_1->_padding_;
  if ((*(longlong *)(lVar22 + 0x150) == 0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206029>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x173,"Skeleton"), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  cVar13 = (*pcVar3)(this,*(undefined8 *)(lVar22 + 0x150),uVar4);
  if (cVar13 == '\0') {
    return;
  }
  if ((this->dragon_limb_input).ArrayNum < 1) {
    return;
  }
  bVar12 = FComponentSpacePoseContext::ContainsNaN(param_1);
  if (bVar12) {
    return;
  }
  (**(code **)(this->_padding_ + 0xb8))(this,param_1);
  FComponentSpacePoseLink::EvaluateComponentSpace
            ((FComponentSpacePoseLink *)&this->_padding_,param_1);
  FVar19 = StatPtr_STAT_DragonWarpSolver_Eval;
  if (StatPtr_STAT_DragonWarpSolver_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_DragonWarpSolver_Eval>)0x0) {
    pFVar18 = ::FName::FName(local_138,"STAT_DragonWarpSolver_Eval");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_DragonWarpSolver_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DragonWarpSolver_Eval,*pFVar18,
                        L"DragonWarpSolver Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar19;
  bVar12 = false;
  bVar11 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar25 = FVar24.Number;
  if ((FVar23.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_198[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_198[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_190.ComparisonIndex.Value = FVar23.Value;
        local_190.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_190,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonWarpSolver.cpp"
                   ,0x95);
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_188 = FVar23.Value;
      uStack_184 = uVar25;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar10 = true;
      goto LAB_14d33958a;
    }
  }
  bVar10 = false;
  FVar24 = local_180;
LAB_14d33958a:
  if ((param_2->ArrayNum != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DragonIK\\Source\\DragonIKPlugin\\Private\\AnimNode_DragonWarpSolver.cpp"
                          ,0x96,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->enable_slope_warp == false) {
    pFVar20 = FRuntimeFloatCurve::GetRichCurve(&this->Hip_Lifting_Curve);
    fVar27 = this->Hip_Change_Intensity;
    fVar26 = FRichCurve::Eval(pFVar20,this->speed_warping_const,0.0);
  }
  else {
    fVar26 = this->internal_slope_diff;
    fVar1 = this->automatic_speed_warping_const;
    pFVar20 = FRuntimeFloatCurve::GetRichCurve(&this->Hip_Lifting_Curve);
    fVar27 = this->Hip_Change_Intensity;
    fVar26 = FRichCurve::Eval(pFVar20,fVar26 * fVar1,0.0);
  }
  this->Hip_Offset = fVar26 * fVar27;
  if ((!(BADTYPE)(this->Hip_Bone_Ref).bUseSkeletonIndex) &&
     ((this->Hip_Bone_Ref).CachedCompactPoseIndex != (FCompactPoseBoneIndex)0xffffffff)) {
    FVar15 = FBoneReference::GetCompactPoseIndex(&this->Hip_Bone_Ref,(FBoneContainer *)&local_158);
    pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar15));
    local_100 = 0;
    uStack_f8 = 0;
    dVar2 = (pTVar21->Rotation).XY.m128d_f64[1];
    (this->Hip_Transform_Value).Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
    (this->Hip_Transform_Value).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar21->Rotation).ZW.m128d_f64[1];
    (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
    (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar21->Translation).XY.m128d_f64[1];
    (this->Hip_Transform_Value).Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0]
    ;
    (this->Hip_Transform_Value).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar21->Translation).ZW.m128d_f64[1];
    (this->Hip_Transform_Value).Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0]
    ;
    (this->Hip_Transform_Value).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pTVar21->Scale3D).XY.m128d_f64[1];
    (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
    (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pTVar21->Scale3D).ZW.m128d_f64[1];
    fVar27 = this->Hip_Offset;
    (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
    (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[1] = dVar2;
    dVar9 = (this->Hip_Transform_Value).Translation.XY.m128d_f64[1];
    local_f0 = (double)fVar27;
    dVar2 = (this->Hip_Transform_Value).Translation.ZW.m128d_f64[0];
    dVar8 = (this->Hip_Transform_Value).Translation.ZW.m128d_f64[1] + 0.0;
    (this->Hip_Transform_Value).Translation.XY.m128d_f64[0] =
         (this->Hip_Transform_Value).Translation.XY.m128d_f64[0];
    (this->Hip_Transform_Value).Translation.XY.m128d_f64[1] = dVar9;
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = local_f0 + dVar2;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(this->Hip_Transform_Value).Translation.ZW.m128d_f64 = auVar7;
    local_e8 = (this->Hip_Bone_Ref).CachedCompactPoseIndex;
    local_d8 = (this->Hip_Transform_Value).Rotation.XY.m128d_f64[0];
    dStack_d0 = (this->Hip_Transform_Value).Rotation.XY.m128d_f64[1];
    local_c8 = (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[0];
    dStack_c0 = (this->Hip_Transform_Value).Rotation.ZW.m128d_f64[1];
    pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
    local_b8 = (this->Hip_Transform_Value).Translation.XY.m128d_f64[0];
    dStack_b0 = (this->Hip_Transform_Value).Translation.XY.m128d_f64[1];
    local_a8 = (this->Hip_Transform_Value).Translation.ZW.m128d_f64[0];
    dStack_a0 = (this->Hip_Transform_Value).Translation.ZW.m128d_f64[1];
    local_98 = (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[0];
    dStack_90 = (this->Hip_Transform_Value).Scale3D.XY.m128d_f64[1];
    local_88 = (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[0];
    dStack_80 = (this->Hip_Transform_Value).Scale3D.ZW.m128d_f64[1];
    if ((pFVar5 <= &local_e8) &&
       ((&local_e8 < pFVar5 + (longlong)param_2->ArrayMax * 0x1c &&
        (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar16 = param_2->ArrayNum;
    if (iVar16 == param_2->ArrayMax) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    fVar27 = __real_3f800000;
    param_2->ArrayNum = iVar16 + 1;
    lVar22 = (longlong)iVar16 * 0x70;
    pFVar6 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar6 + lVar22) = CONCAT44(uStack_e4,local_e8);
    *(undefined8 *)(pFVar6 + lVar22 + 8) = uStack_e0;
    *(double *)(pFVar6 + lVar22 + 0x10) = local_d8;
    *(double *)(pFVar6 + lVar22 + 0x10 + 8) = dStack_d0;
    *(double *)(pFVar6 + lVar22 + 0x20) = local_c8;
    *(double *)(pFVar6 + lVar22 + 0x20 + 8) = dStack_c0;
    *(double *)(pFVar6 + lVar22 + 0x30) = local_b8;
    *(double *)(pFVar6 + lVar22 + 0x30 + 8) = dStack_b0;
    *(double *)(pFVar6 + lVar22 + 0x40) = local_a8;
    *(double *)(pFVar6 + lVar22 + 0x40 + 8) = dStack_a0;
    *(double *)(pFVar6 + lVar22 + 0x50) = local_98;
    *(double *)(pFVar6 + lVar22 + 0x50 + 8) = dStack_90;
    *(double *)(pFVar6 + lVar22 + 0x60) = local_88;
    *(double *)(pFVar6 + lVar22 + 0x60 + 8) = dStack_80;
    if (((this->front_hit_result).bBlockingHit != 0) && ((this->back_hit_result).bBlockingHit != 0))
    {
      local_140 = *(double *)&(this->back_hit_result).ImpactPoint.field_0x10;
      dVar2 = *(double *)&(this->front_hit_result).ImpactPoint.field_0x10 - local_140;
      local_158._8_8_ = *(undefined8 *)&(this->back_hit_result).ImpactPoint;
      uStack_148 = *(undefined8 *)&(this->back_hit_result).ImpactPoint.field_0x8;
      fVar27 = fVar27 - (float)((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                                 SUB84(dVar2,0) &
                                                 (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                               (double)this->slope_detection_tolerance);
      if (__real_41200000 <= fVar27) {
        fVar27 = __real_41200000;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
    }
    iVar16 = (this->dragon_limb_input).ArrayNum;
    this->internal_slope_diff =
         (fVar27 - this->internal_slope_diff) * this->delta_seconds_saved * __real_41700000 +
         this->internal_slope_diff;
    if ((0 < iVar16) && (uVar25 = 0, 0 < (this->dragon_limb_data).ArrayNum)) {
      lVar22 = 0;
      do {
        uVar17 = 0;
        if ((int)uVar25 < (this->dragon_limb_input).ArrayNum) {
          uVar17 = ~uVar25 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_168.bUseSkeletonIndex = 0;
        local_168.BoneIndex = -1;
        local_168.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
        local_168.BoneName = *(FName *)((this->dragon_limb_input).AllocatorInstance.Data + lVar22);
        FBoneReference::Initialize(&local_168,this->SavedBoneContainer);
        local_128.CachedCompactPoseIndex = local_168.CachedCompactPoseIndex;
        local_128._8_4_ = local_168._8_4_;
        local_128.BoneName = local_168.BoneName;
        Leg_ik_Function(this,&local_128,uVar25,(TEnumAsByte<EBoneControlSpace>)0x0,
                        (TEnumAsByte<EBoneControlSpace>)0x1,param_1,param_2);
        uVar25 = uVar25 + 1;
        lVar22 = lVar22 + 0x38;
      } while ((int)uVar25 < (this->dragon_limb_data).ArrayNum);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// Evaluate_AnyThread @ 14d33bc80

void __thiscall
FAnimNode_DragonWarpSolver::Evaluate_AnyThread
          (FAnimNode_DragonWarpSolver *this,FPoseContext *param_1)

{
  return;
}

// GetLODThreshold @ 14d3483f0

int __thiscall FAnimNode_DragonWarpSolver::GetLODThreshold(FAnimNode_DragonWarpSolver *this)

{
  return (int)this->_padding_;
}

// InitializeBoneReferences @ 14d349ed0

void __thiscall
FAnimNode_DragonWarpSolver::InitializeBoneReferences
          (FAnimNode_DragonWarpSolver *this,FBoneContainer *param_1)

{
  TArray<FDragonData_WarpLimbStruct,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  
  pTVar1 = &this->dragon_limb_data;
  this->SavedBoneContainer = param_1;
  this->solve_should_fail = false;
  piVar4 = &(this->dragon_limb_data).ArrayMax;
  piVar5 = &(this->dragon_limb_data).ArrayNum;
  *piVar5 = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,0,&pTVar1->AllocatorInstance,0,piVar4);
  }
  piVar2 = &(this->original_foot_array).ArrayMax;
  (this->original_foot_array).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->original_foot_array).AllocatorInstance,0,piVar2);
  }
  iVar7 = (this->dragon_limb_input).ArrayNum;
  iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x38,4,iVar7,&pTVar1->AllocatorInstance,piVar5,piVar4);
  DefaultConstructItems<FDragonData_WarpLimbStruct,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x38,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,(this->dragon_limb_input).ArrayNum,
             &(this->original_foot_array).AllocatorInstance,&(this->original_foot_array).ArrayNum,
             piVar2);
  (this->Hip_Bone_Ref).BoneName = this->Hip_Bone_Name;
  (this->Hip_Bone_Ref).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  puVar3 = &(this->Hip_Bone_Ref).field_0x8;
  (this->Hip_Bone_Ref).BoneIndex = -1;
  (this->Hip_Bone_Ref).bUseSkeletonIndex = 0;
  FBoneReference::Initialize(&this->Hip_Bone_Ref,param_1);
  bVar11 = FBoneReference::IsValidToEvaluate(&this->Hip_Bone_Ref,param_1);
  if (!bVar11) {
    this->solve_should_fail = true;
  }
  uVar15 = 0;
  if (0 < (this->dragon_limb_input).ArrayNum) {
    lVar16 = 0;
    do {
      uVar14 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->dragon_limb_input).ArrayNum) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      uVar8 = *(undefined8 *)((this->dragon_limb_input).AllocatorInstance.Data + lVar16);
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar9 + lVar16 + 0x20) = uVar8;
      *(undefined4 *)(pFVar9 + lVar16 + 0x2c) = 0xffffffff;
      *(undefined4 *)(pFVar9 + lVar16 + 0x28) = 0x7fffffff;
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x20),param_1);
      uVar13 = 0;
      if ((int)uVar15 < (this->dragon_limb_input).ArrayNum) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      uVar8 = *(undefined8 *)((this->dragon_limb_input).AllocatorInstance.Data + lVar16 + 8);
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar9 + lVar16 + 0x10) = uVar8;
      *(undefined4 *)(pFVar9 + lVar16 + 0x1c) = 0xffffffff;
      *(undefined4 *)(pFVar9 + lVar16 + 0x18) = 0x7fffffff;
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x10),param_1);
      uVar13 = 0;
      if ((int)uVar15 < (this->dragon_limb_input).ArrayNum) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      uVar8 = *(undefined8 *)((this->dragon_limb_input).AllocatorInstance.Data + lVar16 + 0x10);
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar9 + lVar16) = uVar8;
      *(undefined4 *)(pFVar9 + lVar16 + 0xc) = 0xffffffff;
      *(undefined4 *)(pFVar9 + lVar16 + 8) = 0x7fffffff;
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      FBoneReference::Initialize
                ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16),param_1);
      uVar13 = 0;
      if ((int)uVar15 < (this->dragon_limb_input).ArrayNum) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar6 = *(undefined4 *)((this->dragon_limb_input).AllocatorInstance.Data + lVar16 + 0x18);
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x30) = uVar6;
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = FBoneReference::IsValidToEvaluate
                         ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x20),
                          param_1);
      if (!bVar11) {
        this->solve_should_fail = true;
      }
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = FBoneReference::IsValidToEvaluate
                         ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16 + 0x10),
                          param_1);
      if (!bVar11) {
        this->solve_should_fail = true;
      }
      uVar13 = 0;
      if ((int)uVar15 < *piVar5) {
        uVar13 = uVar14;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar11 = FBoneReference::IsValidToEvaluate
                         ((FBoneReference *)((pTVar1->AllocatorInstance).Data + lVar16),param_1);
      if (!bVar11) {
        this->solve_should_fail = true;
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x38;
    } while ((int)uVar15 < (this->dragon_limb_input).ArrayNum);
  }
  return;
}

// Initialize_AnyThread @ 14d34b6b0

void __thiscall
FAnimNode_DragonWarpSolver::Initialize_AnyThread
          (FAnimNode_DragonWarpSolver *this,FAnimationInitializeContext *param_1)

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

// IsValidToEvaluate @ 14d34b920

bool __thiscall
FAnimNode_DragonWarpSolver::IsValidToEvaluate
          (FAnimNode_DragonWarpSolver *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return this->solve_should_fail == false;
}

// Leg_Full_Function @ 14d34bfa0

void __thiscall
FAnimNode_DragonWarpSolver::Leg_Full_Function
          (FAnimNode_DragonWarpSolver *this,FName param_1,int param_2,
          FComponentSpacePoseContext *param_3,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_4)

{
  FBoneReference local_28;
  FBoneReference local_18;
  
  local_28.bUseSkeletonIndex = 0;
  local_28.BoneIndex = -1;
  local_28.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_28.BoneName = param_1;
  FBoneReference::Initialize(&local_28,this->SavedBoneContainer);
  local_18.CachedCompactPoseIndex = local_28.CachedCompactPoseIndex;
  local_18._8_4_ = local_28._8_4_;
  local_18.BoneName = local_28.BoneName;
  Leg_ik_Function(this,&local_18,param_2,(TEnumAsByte<EBoneControlSpace>)0x0,
                  (TEnumAsByte<EBoneControlSpace>)0x1,param_3,param_4);
  return;
}

// Leg_ik_Function @ 14d34c030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_DragonWarpSolver::Leg_ik_Function
          (FAnimNode_DragonWarpSolver *this,FBoneReference *param_1,int param_2,
          TEnumAsByte<EBoneControlSpace> param_3,TEnumAsByte<EBoneControlSpace> param_4,
          FComponentSpacePoseContext *param_5,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_6)

{
  undefined8 uVar3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  USkeletalMeshComponent *pUVar4;
  FBoneContainer *this_00;
  FScriptContainerElement *pFVar5;
  FCompactPoseBoneIndex *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  TTransform<double> *pTVar33;
  FRichCurve *this_01;
  TVector<double> *pTVar34;
  longlong lVar35;
  FCompactPoseBoneIndex FVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar65;
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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  double dVar78;
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar90;
  undefined4 uVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar91;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar97;
  float fVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar105;
  float fVar106;
  undefined4 uVar107;
  double dVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar113;
  undefined1 auStackY_908 [32];
  FCompactPoseBoneIndex local_8a8;
  FCompactPoseBoneIndex local_8a4;
  FComponentSpacePoseContext *local_8a0;
  FCompactPoseBoneIndex local_898 [2];
  double local_890;
  undefined1 local_888 [16];
  double local_878;
  double local_870;
  TVector<double>_u_0 local_868;
  undefined1 local_848 [16];
  double local_838;
  TVector<double>_u_0 local_830;
  double local_818;
  double dStack_810;
  TVector<double>_u_0 local_808;
  TVector<double>_u_0 local_7e8;
  double local_7c8;
  double dStack_7c0;
  TVector<double>_u_0 local_7b8;
  FName local_7a0;
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double local_750;
  double dStack_748;
  double local_740;
  double local_738;
  double dStack_730;
  undefined8 local_728;
  TVector<double>_u_0 local_718;
  undefined1 local_700 [16];
  double local_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double local_6c8;
  double dStack_6c0;
  TVector<double>_u_0 local_6b8;
  double local_6a0;
  double dStack_698;
  double local_690;
  undefined1 local_688 [2] [16];
  double local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  double local_618;
  double dStack_610;
  double local_608;
  double dStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double dStack_5c0;
  undefined1 local_5b8 [16];
  double local_5a8;
  double local_5a0;
  double dStack_598;
  double local_590;
  undefined1 local_588 [16];
  double local_578;
  double local_568;
  double dStack_560;
  undefined1 local_558 [16];
  TQuat<double> local_538;
  undefined1 local_518 [16];
  double local_508;
  undefined1 local_500 [16];
  double local_4f0;
  undefined1 local_4e8 [16];
  double local_4d8;
  undefined1 local_4d0 [16];
  double local_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double local_4a0;
  double dStack_498;
  double local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double local_470;
  double dStack_468;
  double local_460;
  undefined1 local_458 [16];
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  double local_428;
  double dStack_420;
  double local_418;
  undefined1 local_410 [16];
  double local_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  TVector<double> local_398;
  TVector<double> local_380;
  TVector<double> local_368;
  TVector<double> local_350;
  undefined8 local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined1 local_2e8 [16];
  double local_2d8;
  TVector<double> local_2c8;
  TVector<double> local_2b0;
  FCompactPoseBoneIndex local_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  uchar local_268;
  uchar uStack_267;
  uchar uStack_266;
  uchar uStack_265;
  undefined4 uStack_264;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  FCompactPoseBoneIndex local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  FCompactPoseBoneIndex local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_908;
  lVar39 = (longlong)param_2;
  local_8a0 = param_5;
  FBoneReference::GetCompactPoseIndex(param_1,(FBoneContainer *)&local_8a4);
  uVar41 = 0;
  uVar40 = (uint)~param_2 >> 0x1f;
  uVar38 = uVar41;
  if (param_2 < (this->dragon_limb_data).ArrayNum) {
    uVar38 = uVar40;
  }
  if ((uVar38 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2e8 = *(undefined1 (*) [16])&(this->character_direction_vector_CS).field0_0x0;
  local_2d8 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = local_2d8;
  lVar35 = lVar39 * 0x38;
  dVar99 = local_2e8._8_8_;
  local_8a4 = *(FCompactPoseBoneIndex *)
               ((this->dragon_limb_data).AllocatorInstance.Data + lVar35 + 0x2c);
  pUVar4 = this->owning_skel;
  auVar95._0_8_ = pUVar4->_padding_;
  auVar95._8_8_ = pUVar4->_padding_;
  local_558._0_8_ = pUVar4->_padding_;
  local_558._8_8_ = pUVar4->_padding_;
  uVar3 = pUVar4->_padding_;
  auVar73 = blendpd(local_558,auVar95,2);
  auVar103._0_8_ = dVar99 * (double)local_558._0_8_ - (double)local_558._8_8_ * local_2e8._0_8_;
  auVar103._8_8_ = local_2d8 * (double)local_558._8_8_ - (double)auVar95._0_8_ * dVar99;
  auVar87._8_4_ = SUB84(auVar103._8_8_,0);
  auVar87._0_8_ = auVar103._0_8_;
  auVar87._12_4_ = (int)((ulonglong)auVar103._8_8_ >> 0x20);
  auVar48 = blendpd(local_2e8,auVar109,2);
  auVar74._0_8_ = auVar48._0_8_ * (double)auVar95._0_8_ - auVar73._0_8_ * local_2d8;
  auVar74._8_8_ = auVar48._8_8_ * (double)auVar95._8_8_ - auVar73._8_8_ * 0.0;
  auVar48._0_8_ = pUVar4->_padding_;
  auVar48._8_8_ = pUVar4->_padding_;
  auVar73 = blendpd(auVar103,auVar74,2);
  dVar85 = auVar87._8_8_ + auVar87._8_8_;
  dVar90 = auVar74._0_8_ + auVar74._0_8_;
  auVar104._0_8_ = auVar73._0_8_ + auVar73._0_8_;
  auVar104._8_8_ = auVar73._8_8_ + auVar73._8_8_;
  auVar93._8_4_ = SUB84(dVar90,0);
  auVar93._0_8_ = dVar85;
  uVar92 = (undefined4)((ulonglong)dVar90 >> 0x20);
  auVar93._12_4_ = uVar92;
  auVar80._8_4_ = SUB84(dVar90,0);
  auVar80._0_8_ = dVar85;
  auVar80._12_4_ = uVar92;
  auVar74 = blendpd(auVar48,auVar95,2);
  auVar80 = blendpd(auVar80,auVar104,2);
  auVar68._8_4_ = (int)uVar3;
  auVar68._0_8_ = uVar3;
  auVar68._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  auVar94._0_8_ = auVar93._8_8_ * (double)auVar48._0_8_ - (double)auVar48._8_8_ * dVar85;
  auVar94._8_8_ = auVar104._0_8_ * (double)auVar48._8_8_ - (double)auVar95._0_8_ * dVar90;
  auVar73._8_4_ = SUB84(auVar94._8_8_,0);
  auVar73._0_8_ = auVar94._0_8_;
  auVar73._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
  auVar81._0_8_ = auVar80._0_8_ * (double)auVar95._0_8_ - auVar74._0_8_ * auVar104._0_8_;
  auVar81._8_8_ = auVar80._8_8_ * (double)auVar95._8_8_ - auVar74._8_8_ * auVar104._8_8_;
  auVar95 = blendpd(auVar94,auVar81,2);
  local_6a0 = (double)uVar3 * dVar85 + local_2e8._0_8_ + auVar73._8_8_;
  dStack_698 = auVar68._8_8_ * dVar90 + dVar99 + auVar81._0_8_;
  local_690 = (double)uVar3 * auVar104._0_8_ + local_2d8 + auVar95._0_8_;
  FBoneContainer::GetParentBoneIndex(this->SavedBoneContainer,&local_8a8);
  uVar38 = uVar41;
  if (param_2 < (this->dragon_limb_data).ArrayNum) {
    uVar38 = uVar40;
  }
  if ((uVar38 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_8a8 = *(FCompactPoseBoneIndex *)
               ((this->dragon_limb_data).AllocatorInstance.Data + lVar35 + 0x1c);
  bVar28 = local_8a8 == (FCompactPoseBoneIndex)0xffffffff;
  FBoneContainer::GetParentBoneIndex(this->SavedBoneContainer,local_898);
  uVar30 = 0;
  uVar38 = uVar30;
  if (param_2 < (this->dragon_limb_data).ArrayNum) {
    uVar38 = uVar40;
  }
  if ((uVar38 == 0) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar29)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar38 = (uint)bVar28;
  local_870 = (double)CONCAT44(local_870._4_4_,(uint)param_3.Value);
  local_898[0] = *(FCompactPoseBoneIndex *)
                  ((this->dragon_limb_data).AllocatorInstance.Data + lVar35 + 0xc);
  if (local_898[0] == (FCompactPoseBoneIndex)0xffffffff) {
    uVar38 = 1;
  }
  local_890 = (double)CONCAT44(local_890._4_4_,uVar38);
  if (param_3.Value == '\x02' || param_3.Value == '\x03') {
    this_00 = this->SavedBoneContainer;
    ::FName::FName(&local_7a0,"");
    uVar31 = FBoneContainer::GetPoseBoneIndexForBoneName(this_00,&local_7a0);
    uVar38 = (uint)local_890._0_4_;
  }
  else {
    uVar31 = 0xffffffff;
  }
  pFVar5 = (this->SavedBoneContainer->BoneIndicesArray).AllocatorInstance.Data;
  for (pFVar37 = pFVar5;
      pFVar37 != pFVar5 + (longlong)(this->SavedBoneContainer->BoneIndicesArray).ArrayNum * 2;
      pFVar37 = pFVar37 + 2) {
    if (*(ushort *)pFVar37 == uVar31) {
      FVar36 = SUB84((longlong)pFVar37 - (longlong)pFVar5 >> 1,0);
      goto LAB_14d34c399;
    }
  }
  FVar36 = (FCompactPoseBoneIndex)0xffffffff;
LAB_14d34c399:
  if ((char)uVar38 != '\0') {
    return;
  }
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_8a0->Pose,local_8a8);
  local_668 = (pTVar33->Rotation).XY.m128d_f64[0];
  dStack_660 = (pTVar33->Rotation).XY.m128d_f64[1];
  local_658 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dStack_650 = (pTVar33->Rotation).ZW.m128d_f64[1];
  dVar108 = (pTVar33->Translation).XY.m128d_f64[0];
  dVar97 = (pTVar33->Translation).XY.m128d_f64[1];
  dVar90 = (pTVar33->Translation).ZW.m128d_f64[0];
  dStack_560 = (pTVar33->Translation).ZW.m128d_f64[1];
  local_628 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dStack_620 = (pTVar33->Scale3D).XY.m128d_f64[1];
  local_618 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dStack_610 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  local_5c8 = dVar108;
  dStack_5c0 = dVar97;
  local_568 = dVar90;
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_8a0->Pose,local_898[0]);
  local_778 = (pTVar33->Rotation).XY.m128d_f64[0];
  dStack_770 = (pTVar33->Rotation).XY.m128d_f64[1];
  local_6c8 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dStack_6c0 = (pTVar33->Rotation).ZW.m128d_f64[1];
  auVar95 = *(undefined1 (*) [16])(pTVar33->Translation).XY.m128d_f64;
  dVar99 = (pTVar33->Translation).ZW.m128d_f64[0];
  dStack_810 = (pTVar33->Translation).ZW.m128d_f64[1];
  local_648 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dStack_640 = (pTVar33->Scale3D).XY.m128d_f64[1];
  local_638 = (pTVar33->Scale3D).ZW.m128d_f64[0];
  dStack_630 = (pTVar33->Scale3D).ZW.m128d_f64[1];
  local_818 = dVar99;
  local_788 = auVar95;
  pTVar33 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_8a0->Pose,local_8a4);
  local_608 = (pTVar33->Rotation).XY.m128d_f64[0];
  dStack_600 = (pTVar33->Rotation).XY.m128d_f64[1];
  auVar48 = *(undefined1 (*) [16])(pTVar33->Translation).XY.m128d_f64;
  dVar85 = auVar48._8_8_;
  dVar43 = (pTVar33->Translation).ZW.m128d_f64[0];
  dStack_7c0 = (pTVar33->Translation).ZW.m128d_f64[1];
  local_5e8 = (pTVar33->Rotation).ZW.m128d_f64[0];
  dStack_5e0 = (pTVar33->Rotation).ZW.m128d_f64[1];
  local_5f8 = (pTVar33->Scale3D).XY.m128d_f64[0];
  dStack_5f0 = (pTVar33->Scale3D).XY.m128d_f64[1];
  local_558 = *(undefined1 (*) [16])(pTVar33->Scale3D).ZW.m128d_f64;
  uVar38 = uVar30;
  if (param_2 < (this->original_foot_array).ArrayNum) {
    uVar38 = uVar40;
  }
  local_7c8 = dVar43;
  local_798 = auVar48;
  local_518 = auVar48;
  local_508 = dVar43;
  if ((uVar38 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (this->original_foot_array).AllocatorInstance.Data;
  *(undefined1 (*) [16])(pFVar5 + lVar39 * 0x18) = auVar48;
  *(double *)(pFVar5 + lVar39 * 0x18 + 0x10) = dVar43;
  uVar38 = uVar30;
  if (param_2 < (this->original_foot_array).ArrayNum) {
    uVar38 = uVar40;
  }
  if ((uVar38 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(undefined8 *)((this->original_foot_array).AllocatorInstance.Data + lVar39 * 0x18 + 0x10) = 0;
  iVar32 = (this->dragon_limb_input).ArrayNum;
  uVar38 = 0;
  local_888 = auVar95;
  local_878 = dVar99;
  local_700 = auVar48;
  local_6f0 = dVar43;
  local_6e8 = dVar108;
  dStack_6e0 = dVar97;
  local_6d8 = dVar90;
  if (this->enable_slope_warp == false) {
    uVar31 = uVar38;
    if (param_2 < iVar32) {
      uVar31 = uVar40;
    }
    if ((uVar31 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar106 = *(float *)((this->dragon_limb_input).AllocatorInstance.Data + lVar35 + 0x1c) +
              this->speed_warping_const;
  }
  else {
    uVar31 = uVar38;
    if (param_2 < iVar32) {
      uVar31 = uVar40;
    }
    if ((uVar31 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar106 = (*(float *)((this->dragon_limb_input).AllocatorInstance.Data + lVar35 + 0x1c) +
              this->automatic_speed_warping_const) * this->internal_slope_diff;
  }
  uVar31 = uVar30;
  if (param_2 < (this->dragon_limb_input).ArrayNum) {
    uVar31 = uVar40;
  }
  if ((uVar31 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar90 = *(double *)((this->dragon_limb_input).AllocatorInstance.Data + lVar35 + 0x28);
  if (param_2 < (this->dragon_limb_input).ArrayNum) {
    uVar30 = uVar40;
  }
  if ((uVar30 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar108 = __real_3ff0000000000000;
  dVar97 = auVar95._0_8_;
  uVar17 = auVar48._0_8_ - dVar97;
  dVar72 = (double)fVar106;
  if (dVar90 <= (double)fVar106) {
    dVar72 = dVar90;
  }
  uVar16 = dVar43 - dVar99;
  dVar90 = *(double *)((this->dragon_limb_input).AllocatorInstance.Data + lVar35 + 0x20);
  if (dVar72 <= dVar90) {
    dVar72 = dVar90;
  }
  uVar13 = dVar85 - auVar95._8_8_;
  local_890 = (double)CONCAT44(local_890._4_4_,(float)dVar72);
  dVar90 = (double)uVar13 * (double)uVar13 + (double)uVar17 * (double)uVar17 +
           (double)uVar16 * (double)uVar16;
  uVar25 = dVar85;
  if (dVar90 != __real_3ff0000000000000) {
    if (__real_3e45798ee0000000 <= dVar90) {
      local_5d8 = __real_3ff0000000000000 / SQRT(dVar90);
      uVar17 = (double)uVar17 * local_5d8;
      uVar13 = (double)uVar13 * local_5d8;
      uVar16 = (double)uVar16 * local_5d8;
    }
    else {
      local_578 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  uVar92 = (undefined4)((ulonglong)uVar25 >> 0x20);
  fVar106 = __real_3f800000 - (float)dVar72;
  if (param_2 < (this->dragon_limb_input).ArrayNum) {
    uVar38 = uVar40;
  }
  if (__real_3f800000 <= fVar106) {
    fVar106 = __real_3f800000;
  }
  if (fVar106 <= 0.0) {
    fVar106 = 0.0;
  }
  local_500 = auVar48;
  local_4f0 = dVar43;
  local_4e8 = auVar95;
  local_4d8 = dVar99;
  if ((uVar38 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_2 < (this->dragon_limb_input).ArrayNum) {
    uVar41 = uVar40;
  }
  uVar65 = 0;
  fVar106 = (float)(((double)*(float *)((this->dragon_limb_input).AllocatorInstance.Data +
                                       lVar35 + 0x18) + dVar43) *
                   (double)(fVar106 * __real_3f000000));
  local_588 = auVar48;
  local_578 = dVar43;
  if ((uVar41 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar65 = extraout_XMM0_Qb, bVar28)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar90 = auVar48._0_8_ - dVar97;
  auVar18._4_8_ = uVar65;
  auVar18._0_4_ = auVar95._4_4_;
  auVar49._0_8_ = auVar18._0_8_ << 0x20;
  auVar49._8_4_ = auVar95._8_4_;
  auVar49._12_4_ = auVar95._12_4_;
  local_4c0 = local_7c8;
  fVar77 = *(float *)((this->dragon_limb_input).AllocatorInstance.Data + lVar35 + 0x30);
  if (fVar106 <= fVar77) {
    fVar77 = fVar106;
  }
  dVar85 = dVar85 - auVar49._8_8_;
  local_4a8 = local_818;
  dVar99 = local_7c8 - local_818;
  if (fVar77 <= 0.0) {
    fVar77 = 0.0;
  }
  local_4d0 = auVar48;
  local_4b8 = auVar95;
  this_01 = FRuntimeFloatCurve::GetRichCurve(&this->Limb_Lifting_Curve);
  fVar106 = local_890._0_4_;
  fVar42 = FRichCurve::Eval(this_01,local_890._0_4_,0.0);
  dVar72 = (dVar108 - (this->forward_vector_CS).field0_0x0._s_0.Y) * (double)uVar13;
  local_5a8 = local_818;
  dVar43 = (double)fVar106;
  dVar78 = (dVar108 - (this->forward_vector_CS).field0_0x0._s_0.Z) * (double)uVar16;
  dStack_760 = ((double)uVar13 - dVar72) * dVar43 + dVar72;
  local_758 = ((double)uVar16 - dVar78) * dVar43 + dVar78;
  dVar72 = (dVar108 - (this->forward_vector_CS).field0_0x0._s_0.X) * (double)uVar17;
  uVar17 = ((double)uVar17 - dVar72) * dVar43 + dVar72;
  auVar50._8_4_ = (int)uVar25;
  auVar50._0_8_ = uVar17;
  auVar50._12_4_ = uVar92;
  auVar51._8_8_ = auVar50._8_8_;
  auVar51._0_8_ = (double)uVar17 * (double)uVar17;
  dVar43 = dStack_760 * dStack_760 + auVar51._0_8_ + local_758 * local_758;
  if (dVar43 != dVar108) {
    if (__real_3e45798ee0000000 <= dVar43) {
      auVar51._8_4_ = (int)uVar25;
      auVar51._0_8_ = dVar43;
      auVar51._12_4_ = uVar92;
      local_5d0 = dVar108 / SQRT(dVar43);
      dStack_760 = dStack_760 * local_5d0;
      local_758 = local_758 * local_5d0;
      uVar17 = (double)uVar17 * local_5d0;
    }
    else {
      auVar51._8_8_ = 0;
      auVar51._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_768 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_760 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_758 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
  }
  pUVar4 = this->owning_skel;
  auVar19._4_8_ = auVar51._8_8_;
  auVar19._0_4_ = auVar95._4_4_;
  auVar52._0_8_ = auVar19._0_8_ << 0x20;
  auVar52._8_4_ = auVar95._8_4_;
  auVar52._12_4_ = auVar95._12_4_;
  dVar85 = (double)((float)SQRT(dVar85 * dVar85 + dVar90 * dVar90 + dVar99 * dVar99) -
                   fVar77 * fVar42 * this->Limb_Compression_Intensity);
  dVar72 = (double)pUVar4->_padding_;
  auVar1._0_8_ = pUVar4->_padding_;
  auVar1._8_8_ = pUVar4->_padding_;
  local_490 = local_758 * dVar85 + local_818;
  local_4a0 = dVar85 * (double)uVar17 + dVar97;
  dStack_498 = dStack_760 * dVar85 + auVar52._8_8_;
  dVar99 = local_490 * (double)pUVar4->_padding_;
  dVar43 = (double)pUVar4->_padding_ * 0.0;
  local_688[0]._0_8_ = pUVar4->_padding_;
  local_688[0]._8_8_ = pUVar4->_padding_;
  dVar85 = (double)pUVar4->_padding_ * local_4a0;
  dVar90 = (double)pUVar4->_padding_ * dStack_498;
  uVar92 = (undefined4)((ulonglong)dVar90 >> 0x20);
  auVar74 = blendpd(local_688[0],auVar1,2);
  auVar110._8_4_ = SUB84(dVar90,0);
  auVar110._0_8_ = dVar85;
  auVar110._12_4_ = uVar92;
  auVar111._0_8_ = auVar110._8_8_ * (double)local_688[0]._0_8_ - (double)local_688[0]._8_8_ * dVar85
  ;
  auVar111._8_8_ = dVar99 * (double)local_688[0]._8_8_ - (double)auVar1._0_8_ * dVar90;
  auVar53._8_4_ = SUB84(dVar90,0);
  auVar53._0_8_ = dVar85;
  auVar53._12_4_ = uVar92;
  auVar11._8_4_ = SUB84(dVar43,0);
  auVar11._0_8_ = dVar99;
  auVar11._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  auVar48 = blendpd(auVar53,auVar11,2);
  auVar96._8_4_ = SUB84(auVar111._8_8_,0);
  auVar96._0_8_ = auVar111._0_8_;
  auVar96._12_4_ = (int)((ulonglong)auVar111._8_8_ >> 0x20);
  auVar54._0_8_ = auVar48._0_8_ * (double)auVar1._0_8_ - auVar74._0_8_ * dVar99;
  auVar54._8_8_ = auVar48._8_8_ * (double)auVar1._8_8_ - auVar74._8_8_ * dVar43;
  auVar2._0_8_ = pUVar4->_padding_;
  auVar2._8_8_ = pUVar4->_padding_;
  auVar48 = blendpd(auVar111,auVar54,2);
  dVar43 = auVar96._8_8_ + auVar96._8_8_;
  dVar97 = auVar54._0_8_ + auVar54._0_8_;
  auVar112._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar112._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar88._8_4_ = SUB84(dVar97,0);
  auVar88._0_8_ = dVar43;
  uVar92 = (undefined4)((ulonglong)dVar97 >> 0x20);
  auVar88._12_4_ = uVar92;
  auVar82._8_4_ = SUB84(dVar97,0);
  auVar82._0_8_ = dVar43;
  auVar82._12_4_ = uVar92;
  auVar74 = blendpd(auVar82,auVar112,2);
  auVar48 = blendpd(auVar2,auVar1,2);
  auVar89._0_8_ = auVar88._8_8_ * (double)auVar2._0_8_ - (double)auVar2._8_8_ * dVar43;
  auVar89._8_8_ = auVar112._0_8_ * (double)auVar2._8_8_ - (double)auVar1._0_8_ * dVar97;
  auVar83._0_8_ = auVar74._0_8_ * (double)auVar1._0_8_ - auVar48._0_8_ * auVar112._0_8_;
  auVar83._8_8_ = auVar74._8_8_ * (double)auVar1._8_8_ - auVar48._8_8_ * auVar112._8_8_;
  auVar55._8_4_ = SUB84(auVar89._8_8_,0);
  auVar55._0_8_ = auVar89._0_8_;
  auVar55._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_470 = dVar43 * dVar72 + dVar85 + auVar55._8_8_ + (double)pUVar4->_padding_;
  dStack_468 = dVar97 * dVar72 + dVar90 + auVar83._0_8_ + (double)pUVar4->_padding_;
  auVar48 = blendpd(auVar89,auVar83,2);
  local_460 = auVar112._0_8_ * dVar72 + dVar99 + auVar48._0_8_ + (double)pUVar4->_padding_;
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  auVar20._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
  auVar20._0_4_ = (int)((ulonglong)local_470 >> 0x20);
  auVar69._0_8_ = auVar20._0_8_ << 0x20;
  auVar69._8_4_ = SUB84(dStack_468,0);
  auVar69._12_4_ = (int)((ulonglong)dStack_468 >> 0x20);
  local_148.Translation.XY.m128d_f64[1] = auVar69._8_8_;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_5b8 = auVar95;
  local_488 = local_4a0;
  dStack_480 = dStack_498;
  local_478 = local_490;
  local_148.Translation.XY.m128d_f64[0] = local_470;
  local_148.Translation.ZW.m128d_f64[0] = local_460;
  FAnimationRuntime::ConvertBoneSpaceTransformToCS
            ((TTransform<double> *)&pUVar4->_padding_,&local_8a0->Pose,&local_148,FVar36,
             local_870._0_4_);
  dVar85 = local_148.Translation.ZW.m128d_f64[0];
  dStack_730 = local_148.Translation.XY.m128d_f64[1];
  local_738 = local_148.Translation.XY.m128d_f64[0];
  auVar21._4_8_ = auVar83._8_8_;
  auVar21._0_4_ = (int)((ulonglong)local_148.Translation.XY.m128d_f64[0] >> 0x20);
  auVar84._0_8_ = auVar21._0_8_ << 0x20;
  auVar84._8_4_ = SUB84(local_148.Translation.XY.m128d_f64[1],0);
  auVar84._12_4_ = (int)((ulonglong)local_148.Translation.XY.m128d_f64[1] >> 0x20);
  local_868._4_4_ = local_888._12_4_;
  dVar99 = local_148.Translation.XY.m128d_f64[0] - local_888._0_8_;
  dVar43 = local_148.Translation.ZW.m128d_f64[0] - local_878;
  local_448 = local_148.Translation.ZW.m128d_f64[0];
  auVar22._4_8_ = local_148.Translation.XY.m128d_f64[1];
  auVar22._0_4_ = local_888._4_4_;
  auVar56._0_8_ = auVar22._0_8_ << 0x20;
  local_868._0_4_ = local_888._8_4_;
  auVar56._8_4_ = local_868._0_4_;
  auVar56._12_4_ = local_868._4_4_;
  local_868._s_0.Y = (double)local_888._8_8_;
  dVar90 = auVar84._8_8_ - auVar56._8_8_;
  fVar106 = (float)SQRT(dVar90 * dVar90 + dVar99 * dVar99 + dVar43 * dVar43);
  if (__real_38d1b717 <= fVar106) {
    dVar97 = dVar108 / (double)fVar106;
    local_718._s_0.Z = dVar97 * dVar43;
    dVar108 = dVar97 * dVar99;
    dVar97 = dVar97 * dVar90;
    local_808._s_0.Y = 0.0;
    local_7e8._s_0.X = dVar97;
    local_718._s_0.X = dVar108;
  }
  else {
    dVar97 = 0.0;
    local_718._s_0.Z = 0.0;
    local_808._s_0.Y = _UNK_150689518;
    local_718._s_0.X = ___xmm_00000000000000003ff0000000000000;
    fVar106 = __real_38d1b717;
    local_7e8._s_0.X = _UNK_150689518;
  }
  uVar16 = local_718._s_0.Z;
  pUVar4 = this->owning_skel;
  local_8a0 = (FComponentSpacePoseContext *)local_718._s_0.Z;
  local_808._s_0.X = local_718._s_0.X;
  local_7e8._s_0.Y = local_808._s_0.Y;
  local_718._s_0.Y = local_7e8._s_0.X;
  local_458 = _local_738;
  USceneComponent::GetRightVector((USceneComponent *)pUVar4,&local_2c8);
  dVar100 = local_568;
  dVar99 = dStack_5c0;
  dVar90 = local_5c8;
  dVar72 = __real_3e45798ee0000000;
  auVar24._8_8_ = dStack_5c0;
  auVar24._0_8_ = local_5c8;
  uVar92 = (undefined4)((ulonglong)dStack_5c0 >> 0x20);
  local_688[0] = *(undefined1 (*) [16])(((VectorRegister4Double *)&pUVar4->_padding_)->XY).m128d_f64
  ;
  local_400 = local_568;
  local_428 = (double)local_798._0_8_;
  dStack_420 = (double)local_798._8_8_;
  local_440 = (double)local_788._0_8_;
  dStack_438 = (double)local_788._8_8_;
  local_3e8 = local_568;
  local_430 = local_818;
  local_6b8._s_0.X =
       ((double)local_788._0_8_ + (double)local_798._0_8_ + local_5c8) * __real_3fd5555555555555 -
       local_5c8;
  auVar23._4_8_ = local_788._8_8_;
  auVar23._0_4_ = (int)((ulonglong)local_5c8 >> 0x20);
  auVar57._0_8_ = auVar23._0_8_ << 0x20;
  auVar57._8_4_ = SUB84(dStack_5c0,0);
  auVar57._12_4_ = uVar92;
  auVar58._0_8_ = auVar24._4_8_ << 0x20;
  auVar58._8_4_ = SUB84(dStack_5c0,0);
  auVar58._12_4_ = uVar92;
  local_6b8._s_0.Y =
       ((double)local_788._8_8_ + (double)local_798._8_8_ + auVar57._8_8_) * __real_3fd5555555555555
       - auVar58._8_8_;
  local_418 = local_7c8;
  local_6b8._s_0.Z = (local_818 + local_7c8 + local_568) * __real_3fd5555555555555 - local_568;
  local_410 = auVar24;
  local_3f8 = auVar24;
  pTVar34 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_6b8._s_0,&local_2b0,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  dVar78 = local_878;
  uVar17 = local_888._0_8_;
  local_5a0 = (pTVar34->field0_0x0)._s_0.X;
  dStack_598 = (pTVar34->field0_0x0)._s_0.Y;
  local_590 = (pTVar34->field0_0x0)._s_0.Z;
  dVar43 = (double)CONCAT44(local_868._4_4_,local_868._0_4_);
  local_3d0 = dVar100;
  dStack_3c0 = dVar99 - dStack_598 * __real_408f400000000000;
  local_3c8 = dVar90 - local_5a0 * __real_408f400000000000;
  local_3b8 = dVar100 - local_590 * __real_408f400000000000;
  dVar99 = local_3c8 - (double)local_888._0_8_;
  dVar100 = dStack_3c0 - dVar43;
  dVar90 = local_3b8 - local_878;
  local_3e0 = auVar24;
  local_3b0 = local_3c8;
  dStack_3a8 = dStack_3c0;
  local_3a0 = local_3b8;
  if (__real_322bcc76 <= (float)(dVar100 * dVar100 + dVar99 * dVar99 + dVar90 * dVar90)) {
    local_7b8._s_0.X = dVar90 * dVar97 - dVar100 * (double)uVar16;
    local_7b8._s_0.Y = dVar99 * (double)uVar16 - dVar90 * dVar108;
    local_7b8._s_0.Z = dVar100 * dVar108 - dVar99 * dVar97;
    if (__real_3e45798ec0000000 <=
        local_7b8._s_0.Y * local_7b8._s_0.Y + local_7b8._s_0.X * local_7b8._s_0.X +
        local_7b8._s_0.Z * local_7b8._s_0.Z) {
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_7b8._s_0,dVar72);
      dVar43 = dVar108 * dVar99 + dVar97 * dVar100 + (double)uVar16 * dVar90;
      local_830._s_0.X = dVar99 - dVar108 * dVar43;
      local_830._s_0.Y = dVar100 - dVar97 * dVar43;
      local_830._s_0.Z = dVar90 - (double)uVar16 * dVar43;
      UE::Math::TVector<double>::Normalize((TVector<double> *)&local_830._s_0,dVar72);
    }
    else {
      UE::Math::TVector<double>::FindBestAxisVectors
                ((TVector<double> *)&local_718._s_0,(TVector<double> *)&local_7b8._s_0,
                 (TVector<double> *)&local_830._s_0);
    }
    dVar43 = (double)CONCAT44(local_868._4_4_,local_868._0_4_);
  }
  else {
    local_830._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_830._s_0.Y = _UNK_15061cbc8;
    local_830._s_0.Z = 0.0;
    local_7b8._s_0.X = local_6a0;
    local_7b8._s_0.Y = dStack_698;
    local_7b8._s_0.Z = local_690;
  }
  local_7c8 = (double)local_700._8_8_ - dStack_6e0;
  local_890 = dStack_6e0 - dVar43;
  dVar100 = (double)local_700._0_8_ - local_6e8;
  local_870 = local_6e8 - (double)uVar17;
  dVar72 = local_738;
  dVar99 = dStack_730;
  local_818 = local_6f0 - local_6d8;
  dVar90 = local_6d8 - dVar78;
  local_788._0_8_ = dVar100;
  auVar59._0_8_ = dVar100 * dVar100;
  auVar59._8_8_ = 0;
  local_798._0_8_ = dVar90;
  local_848 = _local_738;
  auVar75._0_8_ = local_7c8 * local_7c8 + auVar59._0_8_ + local_818 * local_818;
  auVar75._8_8_ = 0;
  auVar95 = sqrtpd(auVar59,auVar75);
  fVar77 = (float)auVar95._0_8_;
  auVar60._0_8_ = local_870 * local_870;
  auVar60._8_8_ = 0;
  auVar76._0_8_ = local_890 * local_890 + auVar60._0_8_ + dVar90 * dVar90;
  auVar76._8_8_ = 0;
  local_838 = dVar85;
  auVar95 = sqrtpd(auVar60,auVar76);
  fVar42 = (float)auVar95._0_8_;
  uVar92 = SUB84(local_878,0);
  uVar107 = (undefined4)((ulonglong)local_878 >> 0x20);
  dVar85 = (double)local_888._0_8_;
  if (fVar106 <= fVar42 + fVar77) {
    fVar98 = 0.0;
    fVar66 = (fVar42 + fVar42) * fVar106;
    if (fVar66 == 0.0) {
      fVar66 = 0.0;
      bVar28 = false;
    }
    else {
      fVar66 = ((fVar106 * fVar106 + fVar42 * fVar42) - fVar77 * fVar77) / fVar66;
      bVar28 = fVar66 < 0.0;
      if ((__real_3f800000 < fVar66) || (fVar66 < __real_bf800000)) {
        dVar90 = (double)fVar42;
        dVar108 = (double)fVar77;
        if (fVar42 <= fVar77) {
          dVar100 = (double)uVar17 - dVar90 * local_808._s_0.X;
          dVar43 = dVar43 - dVar90 * local_7e8._s_0.X;
          dVar72 = dVar108 * local_808._s_0.X + dVar100;
          dVar97 = local_878 - dVar90 * (double)local_8a0;
          dVar99 = dVar108 * local_7e8._s_0.X + dVar43;
          local_838 = dVar108 * (double)local_8a0 + dVar97;
        }
        else {
          dVar97 = dVar90 * (double)local_8a0 + local_878;
          dVar100 = dVar90 * local_808._s_0.X + (double)uVar17;
          dVar43 = dVar90 * local_7e8._s_0.X + dVar43;
          dVar72 = dVar100 - dVar108 * local_808._s_0.X;
          dVar99 = dVar43 - dVar108 * local_7e8._s_0.X;
          local_838 = dVar97 - dVar108 * (double)local_8a0;
        }
        local_848._8_4_ = SUB84(dVar99,0);
        local_848._0_8_ = dVar72;
        local_848._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
        goto LAB_14d34d4a6;
      }
    }
    if (__real_3f800000 <= fVar66) {
      fVar66 = __real_3f800000;
    }
    fVar106 = acosf(fVar66);
    fVar106 = sinf(fVar106);
    fVar106 = fVar106 * fVar42;
    fVar77 = fVar42 * fVar42 - fVar106 * fVar106;
    if (0.0 < fVar77) {
      fVar98 = SQRT(fVar77);
    }
    if (bVar28) {
      fVar98 = (float)((uint)fVar98 ^ __xmm_80000000800000008000000080000000);
    }
    uVar92 = SUB84(local_878,0);
    uVar107 = (undefined4)((ulonglong)local_878 >> 0x20);
    dVar85 = (double)fVar98;
    dVar90 = (double)fVar106;
    dVar100 = dVar85 * local_808._s_0.X + (double)uVar17 + local_830._s_0.X * dVar90;
    dVar43 = dVar85 * local_7e8._s_0.X + (double)CONCAT44(local_868._4_4_,local_868._0_4_) +
             local_830._s_0.Y * dVar90;
    dVar97 = dVar85 * (double)local_8a0 + dVar78 + local_830._s_0.Z * dVar90;
    dVar85 = (double)local_888._0_8_;
  }
  else {
    dVar90 = (double)(fVar42 + fVar77);
    dVar72 = dVar108 * dVar90 + (double)uVar17;
    dVar78 = (double)fVar42;
    local_838 = (double)uVar16 * dVar90 + local_878;
    dVar99 = dVar97 * dVar90 + dVar43;
    dVar100 = dVar108 * dVar78 + (double)local_888._0_8_;
    dVar43 = dVar97 * dVar78 + dVar43;
    local_848._8_4_ = SUB84(dVar99,0);
    local_848._0_8_ = dVar72;
    local_848._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
    dVar97 = (double)uVar16 * dVar78 + local_878;
  }
LAB_14d34d4a6:
  dVar14 = local_838;
  uVar27 = local_868._4_4_;
  uVar26 = local_868._0_4_;
  local_728 = local_798._0_8_;
  dStack_730 = local_890;
  local_738 = local_870;
  local_740 = dVar97;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_738,&local_380,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  local_7e8._s_0.X = dVar100 - dVar85;
  local_7e8._s_0.Y = dVar43 - (double)CONCAT44(uVar27,uVar26);
  local_7e8._s_0.Z = dVar97 - (double)CONCAT44(uVar107,uVar92);
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_7e8._s_0,&local_398,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  UE::Math::TQuat<double>::FindBetweenNormals(&local_538,&local_380,&local_398);
  dVar47 = local_538.X;
  dVar113 = local_538.Z;
  dVar46 = local_538.Y;
  dVar91 = local_538.W;
  auVar61._8_4_ = local_538.W._0_4_;
  auVar61._0_8_ = dVar91;
  auVar61._12_4_ = local_538.W._4_4_;
  dVar79 = dVar91 * local_778;
  dVar44 = dVar91 * local_6c8;
  auVar70._8_4_ = local_538.Y._0_4_;
  auVar70._0_8_ = dVar46;
  auVar70._12_4_ = local_538.Y._4_4_;
  dVar67 = dVar46 * local_778;
  dVar86 = dVar46 * local_6c8;
  dVar85 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar90 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
  dVar9 = dVar47 * dStack_770;
  dVar108 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  auVar62._8_4_ = local_538.Z._0_4_;
  auVar62._0_8_ = dVar113;
  auVar62._12_4_ = local_538.Z._4_4_;
  dVar45 = dVar113 * dStack_6c0;
  dVar12 = dStack_6c0 * dVar47;
  dVar78 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar101 = dVar113 * dStack_770;
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar10 = dVar47 * local_778 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           auVar61._8_8_ * dStack_6c0 +
           auVar70._8_8_ * dStack_770 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           auVar62._8_8_ * local_6c8 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_808._s_0.Z = local_818;
  dVar47 = local_6c8 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar91 * dStack_770 +
           dVar46 * dStack_6c0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar113 * local_778 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_808._s_0.X = (double)local_788._0_8_;
  local_808._s_0.Y = local_7c8;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_808._s_0,&local_350,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  local_868._s_0.X = dVar72 - dVar100;
  local_868._s_0.Y = dVar99 - dVar43;
  local_868._s_0.Z = dVar14 - dVar97;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_868._s_0,&local_368,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  UE::Math::TQuat<double>::FindBetweenNormals((TQuat<double> *)local_688,&local_350,&local_368);
  auVar95 = local_888;
  dVar113 = local_688[0]._0_8_;
  dVar102 = local_688[1]._0_8_;
  dVar105 = local_688[1]._8_8_;
  dVar91 = local_688[0]._8_8_;
  auVar63._8_4_ = local_688[1]._8_4_;
  auVar63._0_8_ = dVar105;
  auVar63._12_4_ = local_688[1]._12_4_;
  dVar46 = dVar105 * local_658;
  local_298 = local_898[0];
  dVar14 = dVar113 * dStack_660;
  dVar97 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  auVar64._8_4_ = local_688[1]._0_4_;
  auVar64._0_8_ = dVar102;
  auVar64._12_4_ = local_688[1]._4_4_;
  local_288._8_4_ = SUB84(dVar47,0);
  local_288._0_8_ = dVar12 * dVar8 + dVar79 + dVar86 * dVar90 + dVar101 * dVar15;
  local_288._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  dVar47 = dVar102 * dStack_650;
  dVar90 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  auVar71._8_4_ = local_688[0]._8_4_;
  auVar71._0_8_ = dVar91;
  auVar71._12_4_ = local_688[0]._12_4_;
  local_328 = (double)this->Hip_Offset;
  dVar79 = dVar91 * local_668;
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar15 = dVar113 * local_668 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           auVar63._8_8_ * dStack_650 +
           auVar71._8_8_ * dStack_660 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           auVar64._8_8_ * local_658 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_338 = 0;
  uStack_330 = 0;
  local_258 = local_328 + local_878;
  local_320 = 0;
  uStack_318 = 0;
  dVar86 = dStack_650 * dVar113 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar105 * local_668 +
           dVar91 * local_658 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar102 * dStack_660 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar113 = local_658 * dVar113 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar105 * dStack_660 +
            dVar91 * dStack_650 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar102 * local_668 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar12 = local_328 + local_740;
  local_278._8_4_ = SUB84(dVar10,0);
  local_278._0_8_ = dVar9 * dVar108 + dVar44 + dVar67 * dVar85 + dVar45 * dVar78;
  local_278._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_308 = 0;
  uStack_300 = 0;
  dVar85 = local_328 + local_838;
  local_268 = local_888[0];
  uStack_267 = local_888[1];
  uStack_266 = local_888[2];
  uStack_265 = local_888[3];
  uStack_264 = local_888._4_4_;
  uStack_260 = local_888._8_8_;
  dStack_250 = 0.0;
  pFVar6 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
  local_248 = local_648;
  dStack_240 = dStack_640;
  local_238 = local_638;
  dStack_230 = dStack_630;
  local_888 = auVar95;
  local_750 = dVar100;
  dStack_748 = dVar43;
  local_310 = local_328;
  local_2f8 = local_328;
  if ((pFVar6 <= &local_298) && (&local_298 < pFVar6 + (longlong)param_6->ArrayMax * 0x1c)) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar28) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar32 = param_6->ArrayNum;
  if (iVar32 == param_6->ArrayMax) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar32 + 1;
  lVar39 = (longlong)iVar32 * 0x70;
  local_208._8_4_ = SUB84(dVar15,0);
  local_208._0_8_ = dVar14 * dVar97 + dVar46 + dVar79 * dVar8 + dVar47 * dVar90;
  local_208._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  dStack_1e0 = 0.0;
  pFVar5 = (param_6->AllocatorInstance).Data;
  *(ulonglong *)(pFVar5 + lVar39) = CONCAT44(uStack_294,local_298);
  *(undefined8 *)(pFVar5 + lVar39 + 8) = uStack_290;
  *(undefined8 *)(pFVar5 + lVar39 + 0x10) = local_288._0_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x10 + 8) = local_288._8_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x20) = local_278._0_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x20 + 8) = local_278._8_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x30) = _local_268;
  *(undefined8 *)(pFVar5 + lVar39 + 0x30 + 8) = uStack_260;
  *(double *)(pFVar5 + lVar39 + 0x40) = local_258;
  *(double *)(pFVar5 + lVar39 + 0x40 + 8) = dStack_250;
  *(double *)(pFVar5 + lVar39 + 0x50) = local_248;
  *(double *)(pFVar5 + lVar39 + 0x50 + 8) = dStack_240;
  *(double *)(pFVar5 + lVar39 + 0x60) = local_238;
  *(double *)(pFVar5 + lVar39 + 0x60 + 8) = dStack_230;
  pFVar6 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
  local_228 = local_8a8;
  local_1d8 = local_628;
  dStack_1d0 = dStack_620;
  local_1c8 = local_618;
  dStack_1c0 = dStack_610;
  local_218 = dVar86;
  dStack_210 = dVar113;
  local_1f8 = dVar100;
  dStack_1f0 = dVar43;
  local_1e8 = dVar12;
  if ((pFVar6 <= &local_228) && (&local_228 < pFVar6 + (longlong)param_6->ArrayMax * 0x1c)) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar28) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar32 = param_6->ArrayNum;
  if (iVar32 == param_6->ArrayMax) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar32 + 1;
  lVar39 = (longlong)iVar32 * 0x70;
  local_188._8_4_ = SUB84(dVar99,0);
  local_188._0_8_ = dVar72;
  local_188._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
  dStack_170 = 0.0;
  pFVar5 = (param_6->AllocatorInstance).Data;
  *(ulonglong *)(pFVar5 + lVar39) = CONCAT44(uStack_224,local_228);
  *(undefined8 *)(pFVar5 + lVar39 + 8) = uStack_220;
  *(double *)(pFVar5 + lVar39 + 0x10) = local_218;
  *(double *)(pFVar5 + lVar39 + 0x10 + 8) = dStack_210;
  *(undefined8 *)(pFVar5 + lVar39 + 0x20) = local_208._0_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x20 + 8) = local_208._8_8_;
  *(double *)(pFVar5 + lVar39 + 0x30) = local_1f8;
  *(double *)(pFVar5 + lVar39 + 0x30 + 8) = dStack_1f0;
  *(double *)(pFVar5 + lVar39 + 0x40) = local_1e8;
  *(double *)(pFVar5 + lVar39 + 0x40 + 8) = dStack_1e0;
  *(double *)(pFVar5 + lVar39 + 0x50) = local_1d8;
  *(double *)(pFVar5 + lVar39 + 0x50 + 8) = dStack_1d0;
  *(double *)(pFVar5 + lVar39 + 0x60) = local_1c8;
  *(double *)(pFVar5 + lVar39 + 0x60 + 8) = dStack_1c0;
  pFVar6 = (FCompactPoseBoneIndex *)(param_6->AllocatorInstance).Data;
  local_1b8 = local_8a4;
  local_1a8 = local_608;
  dStack_1a0 = dStack_600;
  local_198 = local_5e8;
  dStack_190 = dStack_5e0;
  local_168 = local_5f8;
  dStack_160 = dStack_5f0;
  local_158 = local_558._0_8_;
  uStack_150 = local_558._8_8_;
  local_178 = dVar85;
  if ((pFVar6 <= &local_1b8) && (&local_1b8 < pFVar6 + (longlong)param_6->ArrayMax * 0x1c)) {
    bVar28 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar28) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar32 = param_6->ArrayNum;
  if (iVar32 == param_6->ArrayMax) {
    iVar32 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_6->AllocatorInstance,&param_6->ArrayMax);
  }
  param_6->ArrayNum = iVar32 + 1;
  lVar39 = (longlong)iVar32 * 0x70;
  pFVar5 = (param_6->AllocatorInstance).Data;
  *(ulonglong *)(pFVar5 + lVar39) = CONCAT44(uStack_1b4,local_1b8);
  *(undefined8 *)(pFVar5 + lVar39 + 8) = uStack_1b0;
  *(double *)(pFVar5 + lVar39 + 0x10) = local_1a8;
  *(double *)(pFVar5 + lVar39 + 0x10 + 8) = dStack_1a0;
  *(double *)(pFVar5 + lVar39 + 0x20) = local_198;
  *(double *)(pFVar5 + lVar39 + 0x20 + 8) = dStack_190;
  *(undefined8 *)(pFVar5 + lVar39 + 0x30) = local_188._0_8_;
  *(undefined8 *)(pFVar5 + lVar39 + 0x30 + 8) = local_188._8_8_;
  *(double *)(pFVar5 + lVar39 + 0x40) = local_178;
  *(double *)(pFVar5 + lVar39 + 0x40 + 8) = dStack_170;
  *(double *)(pFVar5 + lVar39 + 0x50) = local_168;
  *(double *)(pFVar5 + lVar39 + 0x50 + 8) = dStack_160;
  *(undefined8 *)(pFVar5 + lVar39 + 0x60) = local_158;
  *(undefined8 *)(pFVar5 + lVar39 + 0x60 + 8) = uStack_150;
  return;
}

// UpdateInternal @ 14d35ecd0

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
FAnimNode_DragonWarpSolver::UpdateInternal
          (FAnimNode_DragonWarpSolver *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  USkeletalMeshComponent *pUVar7;
  FName FVar8;
  FName FVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FLinearColor FVar18;
  UWorld *pUVar19;
  FName *pFVar20;
  FHitResult *pFVar21;
  float fVar22;
  undefined1 auVar23 [16];
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
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar61;
  FName local_res8;
  FName local_res18 [2];
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_238 [2];
  double local_208;
  FLinearColor_u_0 local_1f8;
  double local_1e8;
  double local_1c8;
  FHitResult local_1c0;
  
  FAnimNode_DragonControlBase::UpdateInternal((FAnimNode_DragonControlBase *)this,param_1);
  piVar1 = &(this->TraceStartList).ArrayMax;
  (this->TraceStartList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceStartList).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TraceEndList).ArrayMax;
  (this->TraceEndList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TraceEndList).AllocatorInstance,0,piVar1);
  }
  pUVar7 = this->owning_skel;
  if ((AActor *)pUVar7->_padding_ == (AActor *)0x0) {
    pUVar19 = (UWorld *)pUVar7->_padding_;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar7);
    }
    fVar22 = pUVar19->DeltaTimeSeconds;
  }
  else {
    local_208 = (double)pUVar7->_padding_;
    this->scale_mode = (float)((double)this->virtual_scale * local_208);
    pUVar19 = (UWorld *)pUVar7->_padding_;
    if (pUVar19 == (UWorld *)0x0) {
      pUVar19 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar7);
    }
    fVar22 = *(float *)(this->owning_skel->_padding_ + 0x68) * pUVar19->DeltaTimeSeconds;
  }
  this->delta_seconds_saved = fVar22;
  if (this->enable_solver != false) {
    if (this->test_counter < 500) {
      this->test_counter = this->test_counter + 1;
    }
    this->trace_draw_counter = this->trace_draw_counter + 1;
    if (5 < this->trace_draw_counter) {
      this->trace_draw_counter = 0;
    }
    pUVar7 = this->owning_skel;
    this->scale_mode = 1.0;
    if (pUVar7->_padding_ != 0) {
      this->scale_mode = (float)((double)this->virtual_scale * (double)pUVar7->_padding_);
    }
    FVar18.field0_0x0 = FLinearColor::Green.field0_0x0;
    auVar4._0_8_ = pUVar7->_padding_;
    auVar4._8_8_ = pUVar7->_padding_;
    auVar26 = *(undefined1 (*) [16])&(this->character_direction_vector_CS).field0_0x0;
    dVar2 = (this->character_direction_vector_CS).field0_0x0._s_0.Z;
    auVar23._0_8_ = pUVar7->_padding_;
    auVar23._8_8_ = pUVar7->_padding_;
    dVar13 = (double)pUVar7->_padding_;
    dVar59 = auVar26._8_8_;
    auVar32 = blendpd(auVar23,auVar4,2);
    auVar52._0_8_ = dVar59 * (double)auVar23._0_8_ - (double)auVar23._8_8_ * auVar26._0_8_;
    auVar52._8_8_ = dVar2 * (double)auVar23._8_8_ - (double)auVar4._0_8_ * dVar59;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar2;
    auVar23 = blendpd(auVar26,auVar10,2);
    auVar24._0_8_ = auVar23._0_8_ * (double)auVar4._0_8_ - auVar32._0_8_ * dVar2;
    auVar24._8_8_ = auVar23._8_8_ * (double)auVar4._8_8_ - auVar32._8_8_ * 0.0;
    auVar32._0_8_ = pUVar7->_padding_;
    auVar32._8_8_ = pUVar7->_padding_;
    auVar23 = blendpd(auVar52,auVar24,2);
    auVar53._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar53._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    dVar35 = auVar52._8_8_ + auVar52._8_8_;
    dVar44 = auVar24._0_8_ + auVar24._0_8_;
    uVar61 = (undefined4)((ulonglong)dVar44 >> 0x20);
    auVar45._8_4_ = SUB84(dVar44,0);
    auVar45._0_8_ = dVar35;
    auVar45._12_4_ = uVar61;
    auVar36._8_4_ = SUB84(dVar44,0);
    auVar36._0_8_ = dVar35;
    auVar36._12_4_ = uVar61;
    auVar37 = blendpd(auVar36,auVar53,2);
    auVar33 = blendpd(auVar32,auVar4,2);
    auVar46._0_8_ = auVar45._8_8_ * (double)auVar32._0_8_ - (double)auVar32._8_8_ * dVar35;
    auVar46._8_8_ = auVar53._0_8_ * (double)auVar32._8_8_ - (double)auVar4._0_8_ * dVar44;
    auVar25._8_4_ = SUB84(auVar46._8_8_,0);
    auVar25._0_8_ = auVar46._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
    dVar3 = (this->forward_vector_CS).field0_0x0._s_0.Z;
    auVar23 = *(undefined1 (*) [16])&(this->forward_vector_CS).field0_0x0;
    auVar38._0_8_ = auVar37._0_8_ * (double)auVar4._0_8_ - auVar33._0_8_ * auVar53._0_8_;
    auVar38._8_8_ = auVar37._8_8_ * (double)auVar4._8_8_ - auVar33._8_8_ * auVar53._8_8_;
    dVar15 = dVar35 * dVar13 + auVar26._0_8_ + auVar25._8_8_;
    dVar16 = dVar44 * dVar13 + dVar59 + auVar38._0_8_;
    auVar26._0_8_ = pUVar7->_padding_;
    auVar26._8_8_ = pUVar7->_padding_;
    auVar32 = blendpd(auVar46,auVar38,2);
    local_1c8 = auVar53._0_8_ * dVar13 + dVar2 + auVar32._0_8_;
    auVar32 = blendpd(auVar26,auVar4,2);
    dVar60 = auVar23._8_8_;
    auVar54._0_8_ = dVar60 * (double)auVar26._0_8_ - (double)auVar26._8_8_ * auVar23._0_8_;
    auVar54._8_8_ = dVar3 * (double)auVar26._8_8_ - (double)auVar4._0_8_ * dVar60;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar3;
    auVar26 = blendpd(auVar23,auVar11,2);
    auVar27._0_8_ = auVar26._0_8_ * (double)auVar4._0_8_ - auVar32._0_8_ * dVar3;
    auVar27._8_8_ = auVar26._8_8_ * (double)auVar4._8_8_ - auVar32._8_8_ * 0.0;
    auVar33._0_8_ = pUVar7->_padding_;
    auVar33._8_8_ = pUVar7->_padding_;
    auVar26 = blendpd(auVar54,auVar27,2);
    dVar13 = auVar54._8_8_ + auVar54._8_8_;
    dVar59 = auVar27._0_8_ + auVar27._0_8_;
    uVar61 = (undefined4)((ulonglong)dVar59 >> 0x20);
    auVar55._0_8_ = auVar26._0_8_ + auVar26._0_8_;
    auVar55._8_8_ = auVar26._8_8_ + auVar26._8_8_;
    auVar47._8_4_ = SUB84(dVar59,0);
    auVar47._0_8_ = dVar13;
    auVar47._12_4_ = uVar61;
    auVar39._8_4_ = SUB84(dVar59,0);
    auVar39._0_8_ = dVar13;
    auVar39._12_4_ = uVar61;
    auVar32 = blendpd(auVar39,auVar55,2);
    auVar48._0_8_ = auVar47._8_8_ * (double)auVar33._0_8_ - (double)auVar33._8_8_ * dVar13;
    auVar48._8_8_ = auVar55._0_8_ * (double)auVar33._8_8_ - (double)auVar4._0_8_ * dVar59;
    auVar28._8_4_ = SUB84(auVar48._8_8_,0);
    auVar28._0_8_ = auVar48._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
    auVar26 = blendpd(auVar33,auVar4,2);
    local_258._s_0.X = (this->Hip_Transform_Value).Translation.XY.m128d_f64[0];
    local_258._s_0.Y = (this->Hip_Transform_Value).Translation.XY.m128d_f64[1];
    auVar40._0_8_ = auVar32._0_8_ * (double)auVar4._0_8_ - auVar26._0_8_ * auVar55._0_8_;
    auVar40._8_8_ = auVar32._8_8_ * (double)auVar4._8_8_ - auVar26._8_8_ * auVar55._8_8_;
    dVar17 = (double)pUVar7->_padding_;
    auVar26 = blendpd(auVar48,auVar40,2);
    local_1e8 = auVar55._0_8_ * (double)auVar4._8_8_ + dVar3 + auVar26._0_8_;
    local_258._s_0.Z = (this->Hip_Transform_Value).Translation.ZW.m128d_f64[0];
    auVar37._0_8_ = pUVar7->_padding_;
    auVar37._8_8_ = pUVar7->_padding_;
    dVar2 = (double)pUVar7->_padding_ * local_258._s_0.X;
    dVar3 = (double)pUVar7->_padding_ * local_258._s_0.Y;
    uVar61 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar56._8_4_ = SUB84(dVar3,0);
    auVar56._0_8_ = dVar2;
    auVar56._12_4_ = uVar61;
    auVar5._0_8_ = pUVar7->_padding_;
    auVar5._8_8_ = pUVar7->_padding_;
    dVar35 = local_258._s_0.Z * (double)pUVar7->_padding_;
    dVar44 = (double)pUVar7->_padding_ * 0.0;
    auVar32 = blendpd(auVar37,auVar5,2);
    auVar57._0_8_ = auVar56._8_8_ * (double)auVar37._0_8_ - (double)auVar37._8_8_ * dVar2;
    auVar57._8_8_ = dVar35 * (double)auVar37._8_8_ - (double)auVar5._0_8_ * dVar3;
    auVar29._8_4_ = SUB84(dVar3,0);
    auVar29._0_8_ = dVar2;
    auVar29._12_4_ = uVar61;
    auVar12._8_4_ = SUB84(dVar44,0);
    auVar12._0_8_ = dVar35;
    auVar12._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    auVar26 = blendpd(auVar29,auVar12,2);
    auVar30._0_8_ = auVar26._0_8_ * (double)auVar5._0_8_ - auVar32._0_8_ * dVar35;
    auVar30._8_8_ = auVar26._8_8_ * (double)auVar5._8_8_ - auVar32._8_8_ * dVar44;
    auVar6._0_8_ = pUVar7->_padding_;
    auVar6._8_8_ = pUVar7->_padding_;
    auVar26 = blendpd(auVar57,auVar30,2);
    dVar44 = auVar57._8_8_ + auVar57._8_8_;
    dVar14 = auVar30._0_8_ + auVar30._0_8_;
    uVar61 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar58._0_8_ = auVar26._0_8_ + auVar26._0_8_;
    auVar58._8_8_ = auVar26._8_8_ + auVar26._8_8_;
    auVar49._8_4_ = SUB84(dVar14,0);
    auVar49._0_8_ = dVar44;
    auVar49._12_4_ = uVar61;
    auVar41._8_4_ = SUB84(dVar14,0);
    auVar41._0_8_ = dVar44;
    auVar41._12_4_ = uVar61;
    auVar32 = blendpd(auVar41,auVar58,2);
    auVar50._0_8_ = auVar49._8_8_ * (double)auVar6._0_8_ - (double)auVar6._8_8_ * dVar44;
    auVar50._8_8_ = auVar58._0_8_ * (double)auVar6._8_8_ - (double)auVar5._0_8_ * dVar14;
    auVar31._8_4_ = SUB84(auVar50._8_8_,0);
    auVar31._0_8_ = auVar50._0_8_;
    auVar31._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar26 = blendpd(auVar6,auVar5,2);
    auVar42._0_8_ = auVar32._0_8_ * (double)auVar5._0_8_ - auVar26._0_8_ * auVar58._0_8_;
    auVar42._8_8_ = auVar32._8_8_ * (double)auVar5._8_8_ - auVar26._8_8_ * auVar58._8_8_;
    auVar26 = blendpd(auVar50,auVar42,2);
    local_208 = auVar58._0_8_ * dVar17 + dVar35 + auVar26._0_8_ + (double)pUVar7->_padding_;
    dVar2 = dVar44 * dVar17 + dVar2 + auVar31._8_8_ + (double)pUVar7->_padding_;
    dVar3 = dVar14 * dVar17 + dVar3 + auVar42._0_8_ + (double)pUVar7->_padding_;
    if (this->enable_slope_warp != false) {
      local_238[0]._16_8_ = local_258._s_0.Z;
      pFVar20 = ::FName::FName(&local_res8,"");
      FVar8 = *pFVar20;
      pFVar20 = ::FName::FName(local_res18,"");
      FVar9 = *pFVar20;
      pFVar21 = FHitResult::FHitResult(&local_1c0,&this->front_hit_result);
      dVar17 = local_1c8;
      dVar14 = local_208;
      fVar22 = this->scale_mode;
      dVar35 = (double)this->virtual_leg_width;
      dVar43 = (double)(fVar22 * this->line_trace_downward_height);
      dVar44 = (double)fVar22;
      dVar51 = dVar44 * (dVar13 * (double)auVar4._8_8_ + auVar23._0_8_ + auVar28._8_8_) * dVar35;
      dVar13 = dVar44 * local_1e8 * dVar35;
      dVar34 = (double)(fVar22 * this->line_trace_upper_height);
      dVar35 = dVar44 * (dVar59 * (double)auVar4._8_8_ + dVar60 + auVar40._0_8_) * dVar35;
      local_1f8 = FVar18.field0_0x0;
      local_238[0]._0_8_ = (dVar2 - dVar43 * dVar15) + dVar51;
      local_238[0]._8_8_ = (dVar3 - dVar43 * dVar16) + dVar35;
      local_258._s_0.X = dVar34 * dVar15 + dVar2 + dVar51;
      local_238[0]._16_8_ = (local_208 - dVar43 * local_1c8) + dVar13;
      local_258._s_0.Y = dVar34 * dVar16 + dVar3 + dVar35;
      local_258._s_0.Z = dVar34 * local_1c8 + local_208 + dVar13;
      line_trace_func(this,this->owning_skel,(TVector<double> *)&local_258._s_0,
                      (TVector<double> *)&local_238[0]._s_0,pFVar21,FVar9,FVar8,
                      &this->front_hit_result,(FLinearColor *)&local_1f8._s_0,true);
      FVar18 = FLinearColor::Green;
      pFVar20 = ::FName::FName(&local_res8,"");
      FVar8 = *pFVar20;
      pFVar20 = ::FName::FName(local_res18,"");
      FVar9 = *pFVar20;
      pFVar21 = FHitResult::FHitResult(&local_1c0,&this->back_hit_result);
      fVar22 = this->scale_mode;
      dVar35 = (double)(fVar22 * this->line_trace_downward_height);
      local_1f8 = FVar18.field0_0x0;
      dVar44 = (double)(fVar22 * this->line_trace_upper_height);
      local_258._s_0.X = dVar2 - dVar35 * dVar15;
      local_258._s_0.Y = dVar3 - dVar35 * dVar16;
      local_238[0]._0_8_ = dVar44 * dVar15 + dVar2;
      local_258._s_0.Z = dVar14 - dVar35 * dVar17;
      local_238[0]._8_8_ = dVar44 * dVar16 + dVar3;
      local_238[0]._16_8_ = dVar44 * dVar17 + dVar14;
      line_trace_func(this,this->owning_skel,(TVector<double> *)&local_238[0]._s_0,
                      (TVector<double> *)&local_258._s_0,pFVar21,FVar9,FVar8,&this->back_hit_result,
                      (FLinearColor *)&local_1f8._s_0,true);
    }
  }
  return;
}

// line_trace_func @ 14d35ffe0

void __thiscall
FAnimNode_DragonWarpSolver::line_trace_func
          (FAnimNode_DragonWarpSolver *this,USkeletalMeshComponent *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,FHitResult *param_4,FName param_5,FName param_6,
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

