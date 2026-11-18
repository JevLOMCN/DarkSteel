// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticStruct @ 1463d6310

UScriptStruct * __cdecl FAnimNode_Trail::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail,(UObject *)pUVar1,
                         L"AnimNode_Trail");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton;
}

// FAnimNode_Trail @ 146405df0

FAnimNode_Trail * __thiscall FAnimNode_Trail::FAnimNode_Trail(FAnimNode_Trail *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  FRichCurve *this_00;
  undefined1 in_R9B;
  float fVar12;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffe8;
  FKeyHandle FVar13;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_Trail__6B_;
  fVar12 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar12;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar12;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar12;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->OldBaseTransform).Scale3D.ZW.m128d_f64 = auVar10;
  (this->TrailBone).BoneName.ComparisonIndex = 0;
  (this->TrailBone).BoneName.Number = 0;
  puVar1 = &(this->TrailBone).field_0x8;
  (this->TrailBone).BoneIndex = -1;
  (this->TrailBone).bUseSkeletonIndex = 0;
  (this->TrailBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->ChainLength = 2;
  (this->ChainBoneAxis).Value = '\x01';
  puVar2 = &this->field_0x145;
  this->bInvertChainBoneAxis = '\0';
  this->bHadValidStrength = '\0';
  this->bReorientParentToChild = '\x01';
  this->bActorSpaceFakeVel = '\0';
  this->bUsePlanarLimit = '\0';
  this->bLimitRotation = '\0';
  this->bLimitStretch = '\0';
  this->MaxDeltaTime = 0.0;
  this->RelaxationSpeedScale = 1.0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->TrailRelaxationSpeed);
  (this->RelaxationSpeedScaleInputProcessor).bMapRange = false;
  (this->RelaxationSpeedScaleInputProcessor).bClampResult = false;
  (this->RelaxationSpeedScaleInputProcessor).bInterpResult = false;
  (this->RelaxationSpeedScaleInputProcessor).bInitialized = false;
  (this->RelaxationSpeedScaleInputProcessor).InRange.Min = 0.0;
  (this->RelaxationSpeedScaleInputProcessor).Scale = 1.0;
  (this->RelaxationSpeedScaleInputProcessor).Bias = 0.0;
  (this->RelaxationSpeedScaleInputProcessor).ClampMin = 0.0;
  (this->RelaxationSpeedScaleInputProcessor).ClampMax = 1.0;
  (this->RelaxationSpeedScaleInputProcessor).InterpSpeedIncreasing = 10.0;
  (this->RelaxationSpeedScaleInputProcessor).InterpSpeedDecreasing = 10.0;
  (this->RelaxationSpeedScaleInputProcessor).InterpolatedResult = 0.0;
  (this->RotationLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationLimits).ArrayNum = 0;
  (this->RotationLimits).ArrayMax = 0;
  (this->RotationOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RotationOffsets).ArrayNum = 0;
  (this->RotationOffsets).ArrayMax = 0;
  (this->PlanarLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimits).ArrayNum = 0;
  (this->PlanarLimits).ArrayMax = 0;
  *(undefined8 *)&(this->RelaxationSpeedScaleInputProcessor).InRange.Max = 0x3f800000;
  (this->RelaxationSpeedScaleInputProcessor).OutRange.Max = 1.0;
  this->StretchLimit = 0.0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FakeVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FakeVelocity).field0_0x0._s_0.Y = (double)uVar11;
  (this->FakeVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->BaseJoint).BoneName.ComparisonIndex = 0;
  (this->BaseJoint).BoneName.Number = 0;
  puVar1 = &(this->BaseJoint).field_0x8;
  (this->BaseJoint).BoneIndex = -1;
  (this->BaseJoint).bUseSkeletonIndex = 0;
  (this->BaseJoint).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->LastBoneRotationAnimAlphaBlend = 0.0;
  (this->TrailBoneLocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TrailBoneLocations).ArrayNum = 0;
  (this->TrailBoneLocations).ArrayMax = 0;
  (this->PerJointTrailData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerJointTrailData).ArrayNum = 0;
  (this->PerJointTrailData).ArrayMax = 0;
  (this->ChainBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainBoneIndices).ArrayNum = 0;
  (this->ChainBoneIndices).ArrayMax = 0;
  this_00 = FRuntimeFloatCurve::GetRichCurve(&this->TrailRelaxationSpeed);
  FKeyHandle::FKeyHandle(local_res8);
  FVar13.Index = in_stack_ffffffffffffffe8 & 0xffffff00;
  FRichCurve::AddKey(this_00,fVar12,0.0,(bool)in_R9B,FVar13);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(this_00,fVar12,__real_3f800000,(bool)in_R9B,
                     (FKeyHandle)(FVar13.Index & 0xffffff00));
  return this;
}

// ~FAnimNode_Trail @ 146409110

void __thiscall FAnimNode_Trail::~FAnimNode_Trail(FAnimNode_Trail *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ChainBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerJointTrailData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrailBoneLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlanarLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RotationLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrailRelaxationSpeed).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TrailRelaxationSpeed).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->TrailRelaxationSpeed).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->TrailRelaxationSpeed).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->TrailRelaxationSpeed).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TrailRelaxationSpeed).EditorCurveData._padding_);
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14640c4e0

FAnimNode_Trail * __thiscall
FAnimNode_Trail::operator=(FAnimNode_Trail *this,FAnimNode_Trail *param_1)

{
  int *piVar1;
  TArray<FRotationLimit,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FPerJointTrailSetup,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  UCurveFloat *pUVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  dVar9 = (param_1->OldBaseTransform).Rotation.XY.m128d_f64[1];
  (this->OldBaseTransform).Rotation.XY.m128d_f64[0] =
       (param_1->OldBaseTransform).Rotation.XY.m128d_f64[0];
  (this->OldBaseTransform).Rotation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->OldBaseTransform).Rotation.ZW.m128d_f64[1];
  (this->OldBaseTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->OldBaseTransform).Rotation.ZW.m128d_f64[0];
  (this->OldBaseTransform).Rotation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->OldBaseTransform).Translation.XY.m128d_f64[1];
  (this->OldBaseTransform).Translation.XY.m128d_f64[0] =
       (param_1->OldBaseTransform).Translation.XY.m128d_f64[0];
  (this->OldBaseTransform).Translation.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->OldBaseTransform).Translation.ZW.m128d_f64[1];
  (this->OldBaseTransform).Translation.ZW.m128d_f64[0] =
       (param_1->OldBaseTransform).Translation.ZW.m128d_f64[0];
  (this->OldBaseTransform).Translation.ZW.m128d_f64[1] = dVar9;
  dVar9 = (param_1->OldBaseTransform).Scale3D.XY.m128d_f64[1];
  (this->OldBaseTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->OldBaseTransform).Scale3D.XY.m128d_f64[0];
  (this->OldBaseTransform).Scale3D.XY.m128d_f64[1] = dVar9;
  dVar9 = (param_1->OldBaseTransform).Scale3D.ZW.m128d_f64[1];
  (this->OldBaseTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->OldBaseTransform).Scale3D.ZW.m128d_f64[0];
  (this->OldBaseTransform).Scale3D.ZW.m128d_f64[1] = dVar9;
  (this->TrailBone).BoneName = (param_1->TrailBone).BoneName;
  uVar4 = *(undefined4 *)&(param_1->TrailBone).field_0x8;
  *(uint *)&(this->TrailBone).field_0x8 =
       (uVar4 ^ *(uint *)&(this->TrailBone).field_0x8) & 0x80000000 ^ uVar4;
  uVar5 = *(undefined4 *)&(param_1->TrailBone).field_0x8;
  *(uint *)&(this->TrailBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar4,0,0x1f)) & 0x7fffffffU ^ uVar5;
  (this->TrailBone).CachedCompactPoseIndex = (param_1->TrailBone).CachedCompactPoseIndex;
  this->ChainLength = param_1->ChainLength;
  (this->ChainBoneAxis).Value = (param_1->ChainBoneAxis).Value;
  bVar17 = (this->bInvertChainBoneAxis ^ param_1->bInvertChainBoneAxis) & 1 ^ this->field_0x145;
  this->field_0x145 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x145) & 2 ^ bVar17;
  this->field_0x145 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x145) & 4 ^ bVar17;
  this->field_0x145 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x145) & 8 ^ bVar17;
  this->field_0x145 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x145) & 0x10 ^ bVar17;
  this->field_0x145 = bVar17;
  bVar17 = (bVar17 ^ param_1->field_0x145) & 0x20 ^ bVar17;
  this->field_0x145 = bVar17;
  this->field_0x145 = (bVar17 ^ param_1->field_0x145) & 0x40 ^ bVar17;
  this->MaxDeltaTime = param_1->MaxDeltaTime;
  this->RelaxationSpeedScale = param_1->RelaxationSpeedScale;
  FRichCurve::operator=
            (&(this->TrailRelaxationSpeed).EditorCurveData,
             &(param_1->TrailRelaxationSpeed).EditorCurveData);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->TrailRelaxationSpeed).ExternalCurve.field0_0x0.DebugPtr,
     pUVar7 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->TrailRelaxationSpeed).ExternalCurve.field0_0x0 =
       (param_1->TrailRelaxationSpeed).ExternalCurve.field0_0x0;
  pTVar2 = &this->RotationLimits;
  bVar11 = (param_1->RelaxationSpeedScaleInputProcessor).bClampResult;
  bVar12 = (param_1->RelaxationSpeedScaleInputProcessor).bInterpResult;
  bVar13 = (param_1->RelaxationSpeedScaleInputProcessor).bInitialized;
  fVar14 = (param_1->RelaxationSpeedScaleInputProcessor).InRange.Min;
  uVar10 = *(undefined8 *)&(param_1->RelaxationSpeedScaleInputProcessor).InRange.Max;
  (this->RelaxationSpeedScaleInputProcessor).bMapRange =
       (param_1->RelaxationSpeedScaleInputProcessor).bMapRange;
  (this->RelaxationSpeedScaleInputProcessor).bClampResult = bVar11;
  (this->RelaxationSpeedScaleInputProcessor).bInterpResult = bVar12;
  (this->RelaxationSpeedScaleInputProcessor).bInitialized = bVar13;
  (this->RelaxationSpeedScaleInputProcessor).InRange.Min = fVar14;
  *(undefined8 *)&(this->RelaxationSpeedScaleInputProcessor).InRange.Max = uVar10;
  fVar14 = (param_1->RelaxationSpeedScaleInputProcessor).Bias;
  fVar15 = (param_1->RelaxationSpeedScaleInputProcessor).ClampMin;
  *(undefined8 *)&(this->RelaxationSpeedScaleInputProcessor).OutRange.Max =
       *(undefined8 *)&(param_1->RelaxationSpeedScaleInputProcessor).OutRange.Max;
  (this->RelaxationSpeedScaleInputProcessor).Bias = fVar14;
  (this->RelaxationSpeedScaleInputProcessor).ClampMin = fVar15;
  fVar14 = (param_1->RelaxationSpeedScaleInputProcessor).InterpSpeedIncreasing;
  fVar15 = (param_1->RelaxationSpeedScaleInputProcessor).InterpSpeedDecreasing;
  fVar16 = (param_1->RelaxationSpeedScaleInputProcessor).InterpolatedResult;
  (this->RelaxationSpeedScaleInputProcessor).ClampMax =
       (param_1->RelaxationSpeedScaleInputProcessor).ClampMax;
  (this->RelaxationSpeedScaleInputProcessor).InterpSpeedIncreasing = fVar14;
  (this->RelaxationSpeedScaleInputProcessor).InterpSpeedDecreasing = fVar15;
  (this->RelaxationSpeedScaleInputProcessor).InterpolatedResult = fVar16;
  if (pTVar2 != &param_1->RotationLimits) {
    iVar6 = (param_1->RotationLimits).ArrayNum;
    piVar1 = &(this->RotationLimits).ArrayMax;
    pFVar8 = (param_1->RotationLimits).AllocatorInstance.Data;
    (this->RotationLimits).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar6 * 0x30);
      }
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RotationOffsets,&param_1->RotationOffsets);
  TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->PlanarLimits,&param_1->PlanarLimits);
  this->StretchLimit = param_1->StretchLimit;
  dVar9 = (param_1->FakeVelocity).field0_0x0._s_0.Y;
  (this->FakeVelocity).field0_0x0._s_0.X = (param_1->FakeVelocity).field0_0x0._s_0.X;
  (this->FakeVelocity).field0_0x0._s_0.Y = dVar9;
  (this->FakeVelocity).field0_0x0._s_0.Z = (param_1->FakeVelocity).field0_0x0._s_0.Z;
  (this->BaseJoint).BoneName = (param_1->BaseJoint).BoneName;
  uVar4 = *(undefined4 *)&(param_1->BaseJoint).field_0x8;
  *(uint *)&(this->BaseJoint).field_0x8 =
       (uVar4 ^ *(uint *)&(this->BaseJoint).field_0x8) & 0x80000000 ^ uVar4;
  uVar5 = *(undefined4 *)&(param_1->BaseJoint).field_0x8;
  *(uint *)&(this->BaseJoint).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar4,0,0x1f)) & 0x7fffffffU ^ uVar5;
  (this->BaseJoint).CachedCompactPoseIndex = (param_1->BaseJoint).CachedCompactPoseIndex;
  this->LastBoneRotationAnimAlphaBlend = param_1->LastBoneRotationAnimAlphaBlend;
  this->ThisTimstep = param_1->ThisTimstep;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->TrailBoneLocations,&param_1->TrailBoneLocations);
  pTVar3 = &this->PerJointTrailData;
  if (pTVar3 != &param_1->PerJointTrailData) {
    iVar6 = (param_1->PerJointTrailData).ArrayNum;
    piVar1 = &(this->PerJointTrailData).ArrayMax;
    pFVar8 = (param_1->PerJointTrailData).AllocatorInstance.Data;
    (this->PerJointTrailData).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 2);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ChainBoneIndices,&param_1->ChainBoneIndices);
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 146435a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_Trail::EvaluateSkeletalControl_AnyThread
          (FAnimNode_Trail *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  uchar uVar1;
  FBoneContainer *this_00;
  FScriptContainerElement *pFVar2;
  FCompactPoseBoneIndex *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  FWeakObjectPtr FVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar21;
  FCSPose<FCompactPose> *this_01;
  ForElementType<unsigned_int> FVar22;
  ForAnyElementType FVar23;
  bool bVar24;
  bool bVar25;
  ushort uVar26;
  int iVar27;
  TStatId TVar28;
  TTransform<double> *pTVar29;
  TVector<double> *pTVar30;
  longlong lVar31;
  FSkelMeshRefPoseOverride *pFVar32;
  longlong lVar33;
  longlong lVar34;
  FCompactPoseBoneIndex FVar35;
  uint uVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  uint uVar43;
  FCompactPoseBoneIndex FVar44;
  uint uVar45;
  uint uVar46;
  FBoneReference *this_02;
  uint uVar47;
  uint uVar48;
  int *piVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  float fVar55;
  double dVar56;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
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
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar74 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  double dVar81;
  double dVar99;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar82;
  FWeakObjectPtr FVar83;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  FWeakObjectPtr FVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined4 uVar115;
  undefined1 auVar112 [16];
  double dVar116;
  undefined4 uVar117;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double dVar127;
  undefined8 uVar128;
  undefined8 uVar130;
  undefined1 auVar129 [16];
  undefined8 uVar131;
  double dVar137;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined4 uVar144;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  int iVar145;
  int iVar146;
  undefined4 uVar147;
  undefined4 uVar148;
  undefined4 uVar149;
  undefined4 uVar150;
  undefined4 uVar151;
  undefined4 uVar152;
  float fVar153;
  undefined4 uVar154;
  undefined4 uVar155;
  undefined4 uVar156;
  int iVar157;
  undefined4 uVar158;
  undefined4 uVar159;
  undefined4 uVar160;
  undefined4 uVar161;
  undefined4 uVar162;
  undefined1 auStackY_8b8 [32];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_878;
  int *local_870;
  longlong local_860;
  uint local_858;
  int *local_850;
  longlong local_838;
  FCycleCounter local_820;
  FCSPose<FCompactPose> *local_810;
  int local_808;
  FCompactPoseBoneIndex local_804;
  FCompactPoseBoneIndex local_800;
  FCompactPoseBoneIndex local_7fc;
  TVector<double>_u_0 local_7f8;
  ForElementType<unsigned_int> local_7e0;
  TVector<double>_u_0 local_7d8;
  FWeakObjectPtr local_7c0;
  FWeakObjectPtr FStack_7b8;
  FWeakObjectPtr local_7b0;
  undefined1 local_7a8 [16];
  double local_798;
  int local_788;
  int iStack_784;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  int local_778;
  int iStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  double local_768;
  ForAnyElementType FStack_760;
  double local_758;
  TQuat<double> local_748;
  FWeakObjectPtr local_728;
  undefined8 local_720;
  FSkelMeshRefPoseOverride *local_718;
  FSharedReferencer<1> local_710;
  FWeakObjectPtr local_708;
  double local_700;
  double dStack_6f8;
  double local_6f0;
  FSourceLocation local_6e8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  TVector<double>_u_0 local_6b0;
  TVector<double>_u_0 local_698;
  TVector<double>_u_0 local_680;
  TVector<double>_u_0 local_668;
  undefined8 local_648;
  undefined8 uStack_640;
  double local_638;
  TQuat<double> local_628;
  undefined1 local_608 [16];
  double local_5f8;
  TVector<double>_u_0 local_5e8;
  double local_5c8;
  undefined1 local_5c0 [16];
  double local_5b0;
  double local_5a8;
  double local_598;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  TQuat<double> local_4a8;
  TQuat<double> local_488;
  TTransform<double> local_468;
  undefined1 local_408 [16];
  FName local_3f8;
  double local_3f0;
  double dStack_3e8;
  double local_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  TVector<double> local_358;
  TVector<double> local_340;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_Trail::EvaluateSkeletalControl_AnyThread");
  TVar28 = FThreadSafeStaticStatInner<FStat_STAT_Trail_Eval,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_Trail_Eval,1> *)
                      &StatPtr_STAT_Trail_Eval);
  uVar42 = 0;
  local_6e8.Impl._Line = 0x4b;
  local_6e8.Impl._Column = 2;
  local_6e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_Trail.cpp"
  ;
  local_820.StatId.ComparisonIndex.Value = 0;
  local_820.StatId.Number = 0;
  local_6e8.Impl._Function =
       "void __cdecl FAnimNode_Trail::EvaluateSkeletalControl_AnyThread(struct FComponentSpacePoseContext &,class TArray<struct FBoneTransform,class TSizedDefaultAllocator<32> > &)"
  ;
  local_820.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_820,*(TStatIdData **)&(TVar28.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_6e8);
  uVar41 = 0;
  if ((param_2->ArrayNum != 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_Trail.cpp"
                          ,0x4d,L""), bVar24)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  fVar55 = this->MaxDeltaTime;
  fVar153 = this->ThisTimstep;
  if (0.0 < fVar55) {
    if (fVar55 <= fVar153) {
      fVar153 = fVar55;
    }
    if (fVar153 <= 0.0) {
      fVar153 = 0.0;
    }
  }
  this->ThisTimstep = 0.0;
  if (0 < (this->ChainBoneIndices).ArrayNum) {
    lVar40 = param_1->_padding_;
    local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    this_00 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
    local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    auVar84._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
    auVar84._0_8_ = auVar84._8_8_;
    local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    bVar24 = FBoneReference::IsValidToEvaluate(&this->BaseJoint,this_00);
    if (bVar24) {
      local_808 = (this->BaseJoint).BoneIndex;
      FBoneContainer::MakeCompactPoseIndex(this_00,(FMeshPoseBoneIndex *)&local_804);
      pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_804);
      local_208.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
      local_208.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
      local_208.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
      local_208.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
      local_208.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
      local_208.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
      local_208.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
      local_208.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
      local_208.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
      local_208.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
      local_208.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
      local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      auVar84._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
      auVar84._0_8_ = auVar84._8_8_;
      local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_2c8,&local_208,(TTransform<double> *)(lVar40 + 0x20));
      local_328.Rotation.XY.m128d_f64[0] = local_2c8.Rotation.XY.m128d_f64[0];
      local_328.Rotation.XY.m128d_f64[1] = local_2c8.Rotation.XY.m128d_f64[1];
      local_328.Rotation.ZW.m128d_f64[0] = local_2c8.Rotation.ZW.m128d_f64[0];
      local_328.Rotation.ZW.m128d_f64[1] = local_2c8.Rotation.ZW.m128d_f64[1];
      local_328.Translation.XY.m128d_f64[0] = local_2c8.Translation.XY.m128d_f64[0];
      local_328.Translation.XY.m128d_f64[1] = local_2c8.Translation.XY.m128d_f64[1];
      local_328.Translation.ZW.m128d_f64[0] = local_2c8.Translation.ZW.m128d_f64[0];
      local_328.Translation.ZW.m128d_f64[1] = local_2c8.Translation.ZW.m128d_f64[1];
      local_328.Scale3D.XY.m128d_f64[0] = local_2c8.Scale3D.XY.m128d_f64[0];
      local_328.Scale3D.XY.m128d_f64[1] = local_2c8.Scale3D.XY.m128d_f64[1];
      local_328.Scale3D.ZW.m128d_f64[0] = local_2c8.Scale3D.ZW.m128d_f64[0];
      local_328.Scale3D.ZW.m128d_f64[1] = local_2c8.Scale3D.ZW.m128d_f64[1];
    }
    else {
      local_328.Rotation.XY.m128d_f64[0] = *(double *)(lVar40 + 0x20);
      local_328.Rotation.XY.m128d_f64[1] = *(double *)(lVar40 + 0x28);
      local_328.Rotation.ZW.m128d_f64[0] = *(double *)(lVar40 + 0x30);
      local_328.Rotation.ZW.m128d_f64[1] = *(double *)(lVar40 + 0x38);
      local_328.Translation.XY.m128d_f64[0] = *(double *)(lVar40 + 0x40);
      local_328.Translation.XY.m128d_f64[1] = *(double *)(lVar40 + 0x48);
      local_328.Translation.ZW.m128d_f64[0] = *(double *)(lVar40 + 0x50);
      local_328.Translation.ZW.m128d_f64[1] = *(double *)(lVar40 + 0x58);
      local_328.Scale3D.XY.m128d_f64[0] = *(double *)(lVar40 + 0x60);
      local_328.Scale3D.XY.m128d_f64[1] = *(double *)(lVar40 + 0x68);
      local_328.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar40 + 0x70);
      local_328.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar40 + 0x78);
    }
    iVar157 = this->ChainLength;
    iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x70,0x10,iVar157,&param_2->AllocatorInstance,&param_2->ArrayNum,
                        &param_2->ArrayMax);
    memset((param_2->AllocatorInstance).Data + (longlong)iVar27 * 0x70,0,(longlong)iVar157 * 0x70);
    bVar24 = 0.0 < *(float *)((longlong)&this->_padding_ + 4);
    uVar39 = 0;
    if ((bVar24) && (this->bHadValidStrength == '\0')) {
      uVar54 = uVar42;
      uVar50 = uVar42;
      uVar51 = uVar42;
      if (0 < (this->ChainBoneIndices).ArrayNum) {
        do {
          uVar38 = (uint)uVar54;
          uVar46 = ~uVar38 >> 0x1f;
          uVar36 = uVar41;
          if ((int)uVar38 < (this->ChainBoneIndices).ArrayNum) {
            uVar36 = uVar46;
          }
          if ((uVar36 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar26 = IntCastChecked<unsigned_short,int>
                             (*(int *)((this->ChainBoneIndices).AllocatorInstance.Data + uVar50 * 4)
                             );
          bVar25 = FBoneContainer::Contains(this_00,uVar26);
          uVar131 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          if (bVar25) {
            uVar36 = uVar41;
            if ((int)uVar38 < (this->ChainBoneIndices).ArrayNum) {
              uVar36 = uVar46;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this_00->BoneIndicesArray).AllocatorInstance.Data;
            for (pFVar37 = pFVar2;
                pFVar37 != pFVar2 + (longlong)(this_00->BoneIndicesArray).ArrayNum * 2;
                pFVar37 = pFVar37 + 2) {
              if ((uint)*(ushort *)pFVar37 ==
                  *(uint *)((this->ChainBoneIndices).AllocatorInstance.Data + uVar50 * 4)) {
                FVar35 = SUB84((longlong)pFVar37 - (longlong)pFVar2 >> 1,0);
                goto LAB_146435efa;
              }
            }
            FVar35 = (FCompactPoseBoneIndex)0xffffffff;
LAB_146435efa:
            pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar35);
            uVar131 = (pTVar29->Translation).ZW.m128d_f64[0];
            uVar128 = (pTVar29->Translation).XY.m128d_f64[0];
            uVar130 = (pTVar29->Translation).XY.m128d_f64[1];
            uVar36 = uVar41;
            if ((int)uVar38 < (this->TrailBoneLocations).ArrayNum) {
              uVar36 = uVar46;
            }
            local_3a8 = (double)uVar128;
            dStack_3a0 = (double)uVar130;
            local_398 = (double)uVar131;
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            uVar36 = uVar39;
            if ((int)uVar38 < (this->TrailBoneLocations).ArrayNum) {
              uVar36 = uVar46;
            }
            if ((uVar36 == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar25)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
          pFVar2 = pFVar37 + uVar51;
          *(undefined8 *)pFVar2 = uVar128;
          *(undefined8 *)(pFVar2 + 8) = uVar130;
          *(undefined8 *)(pFVar37 + uVar51 + 0x10) = uVar131;
          uVar54 = (ulonglong)(uVar38 + 1);
          uVar50 = uVar50 + 1;
          uVar51 = uVar51 + 0x18;
        } while ((int)(uVar38 + 1) < (this->ChainBoneIndices).ArrayNum);
      }
      (this->OldBaseTransform).Rotation.XY.m128d_f64[0] = local_328.Rotation.XY.m128d_f64[0];
      (this->OldBaseTransform).Rotation.XY.m128d_f64[1] = local_328.Rotation.XY.m128d_f64[1];
      (this->OldBaseTransform).Rotation.ZW.m128d_f64[0] = local_328.Rotation.ZW.m128d_f64[0];
      (this->OldBaseTransform).Rotation.ZW.m128d_f64[1] = local_328.Rotation.ZW.m128d_f64[1];
      (this->OldBaseTransform).Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
      (this->OldBaseTransform).Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
      (this->OldBaseTransform).Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
      (this->OldBaseTransform).Translation.ZW.m128d_f64[1] = local_328.Translation.ZW.m128d_f64[1];
      (this->OldBaseTransform).Scale3D.XY.m128d_f64[0] = local_328.Scale3D.XY.m128d_f64[0];
      (this->OldBaseTransform).Scale3D.XY.m128d_f64[1] = local_328.Scale3D.XY.m128d_f64[1];
      (this->OldBaseTransform).Scale3D.ZW.m128d_f64[0] = local_328.Scale3D.ZW.m128d_f64[0];
      (this->OldBaseTransform).Scale3D.ZW.m128d_f64[1] = local_328.Scale3D.ZW.m128d_f64[1];
    }
    local_870 = &param_2->ArrayNum;
    this->bHadValidStrength = bVar24;
    UE::Math::TTransform<double>::GetRelativeTransform
              (&this->OldBaseTransform,&local_1a8,&local_328);
    dVar56 = (this->FakeVelocity).field0_0x0._s_0.X;
    lVar40 = 0x18;
    local_838 = 0x18;
    uVar36 = (uint)__xmm_80000000000000008000000000000000;
    uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (((dVar56 != 0.0) || ((this->FakeVelocity).field0_0x0._s_0.Y != 0.0)) ||
       ((this->FakeVelocity).field0_0x0._s_0.Z != 0.0)) {
      dVar82 = (this->FakeVelocity).field0_0x0._s_0.Z;
      auVar84._8_8_ = 0.0;
      auVar84._0_8_ = dVar82;
      dVar118 = (double)fVar153;
      dVar56 = dVar118 * dVar56;
      dVar80 = dVar118 * (this->FakeVelocity).field0_0x0._s_0.Y;
      dVar118 = dVar118 * dVar82;
      local_7f8._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^ uVar38,SUB84(dVar56,0) ^ uVar36);
      local_7f8._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar80 >> 0x20) ^ uVar38,SUB84(dVar80,0) ^ uVar36);
      local_7f8._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)dVar118 >> 0x20) ^ uVar38,SUB84(dVar118,0) ^ uVar36);
      if (this->bActorSpaceFakeVel != '\0') {
        lVar33 = param_1->_padding_;
        dVar56 = *(double *)(lVar33 + 0xe0);
        dVar82 = *(double *)(lVar33 + 0xe8);
        dVar80 = *(double *)(lVar33 + 0xf0);
        dVar118 = *(double *)(lVar33 + 0xf8);
        local_468.Translation.XY.m128d_f64[0] = *(double *)(lVar33 + 0x100);
        local_468.Translation.XY.m128d_f64[1] = *(double *)(lVar33 + 0x108);
        local_468.Translation.ZW.m128d_f64[0] = *(double *)(lVar33 + 0x110);
        local_468.Translation.ZW.m128d_f64[1] = *(double *)(lVar33 + 0x118);
        local_468.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_468.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        auVar101._8_8_ = GlobalVectorConstants::Float1110.m128_u64[1];
        auVar101._0_8_ = auVar101._8_8_;
        local_468.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_468.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        dVar81 = dVar56 * dVar56 + dVar80 * dVar80;
        dVar99 = dVar82 * dVar82 + dVar118 * dVar118;
        auVar102._8_4_ = SUB84(dVar99,0);
        auVar102._0_8_ = dVar81;
        auVar102._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
        auVar122._0_8_ = auVar102._8_8_ + dVar81;
        auVar122._8_8_ = dVar81 + dVar99;
        auVar102 = sqrtpd(auVar101,auVar122);
        uVar50 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar122._0_8_);
        uVar52 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar122._8_8_);
        uVar51 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar122._0_8_);
        uVar53 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar122._8_8_);
        auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar102);
        auVar102 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar102);
        auVar85._0_8_ = (ulonglong)(auVar84._0_8_ * dVar56) & uVar50;
        uVar54 = uVar52 & (ulonglong)(auVar84._8_8_ * dVar82);
        auVar85._8_4_ = (undefined4)uVar54;
        auVar85._12_4_ = (undefined4)(uVar54 >> 0x20);
        auVar84._0_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar84._4_4_ =
             ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar84._8_4_ = ~(uint)uVar52 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar84._12_4_ =
             ~(uint)(uVar52 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar108._0_8_ = (ulonglong)(auVar102._0_8_ * dVar80) & uVar51;
        uVar54 = uVar53 & (ulonglong)(auVar102._8_8_ * dVar118);
        auVar108._8_4_ = (undefined4)uVar54;
        auVar108._12_4_ = (undefined4)(uVar54 >> 0x20);
        local_468.Rotation.XY.m128d_f64 = (double  [2])(auVar85 | auVar84);
        auVar119._0_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar119._4_4_ =
             ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar119._8_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar119._12_4_ =
             ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_468.Rotation.ZW.m128d_f64 = (double  [2])(auVar108 | auVar119);
        pTVar30 = UE::Math::TTransform<double>::TransformVector
                            (&local_468,&local_340,(TVector<double> *)&local_7f8._s_0);
        local_7f8._s_0.X = (pTVar30->field0_0x0)._s_0.X;
        local_7f8._s_0.Y = (pTVar30->field0_0x0)._s_0.Y;
        local_7f8._s_0.Z = (pTVar30->field0_0x0)._s_0.Z;
      }
      pTVar30 = UE::Math::TTransform<double>::InverseTransformVector
                          (&local_328,&local_358,(TVector<double> *)&local_7f8._s_0);
      uVar46 = 1;
      local_7f8._s_0.X = (pTVar30->field0_0x0)._s_0.X;
      local_7f8._s_0.Y = (pTVar30->field0_0x0)._s_0.Y;
      local_7f8._s_0.Z = (pTVar30->field0_0x0)._s_0.Z;
      if (1 < (this->TrailBoneLocations).ArrayNum) {
        do {
          uVar45 = uVar39;
          if ((int)uVar46 < (this->TrailBoneLocations).ArrayNum) {
            uVar45 = ~uVar46 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
          uVar46 = uVar46 + 1;
          *(double *)(pFVar2 + lVar40) = local_7f8._s_0.X + *(double *)(pFVar2 + lVar40);
          *(double *)(pFVar2 + lVar40 + 8) = local_7f8._s_0.Y + *(double *)(pFVar2 + lVar40 + 8);
          *(double *)(pFVar2 + lVar40 + 0x10) =
               local_7f8._s_0.Z + *(double *)(pFVar2 + lVar40 + 0x10);
          lVar40 = lVar40 + 0x18;
        } while ((int)uVar46 < (this->TrailBoneLocations).ArrayNum);
      }
    }
    if (((this->ChainBoneIndices).ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this_00->BoneIndicesArray).AllocatorInstance.Data;
    for (pFVar37 = pFVar2; pFVar37 != pFVar2 + (longlong)(this_00->BoneIndicesArray).ArrayNum * 2;
        pFVar37 = pFVar37 + 2) {
      if ((uint)*(ushort *)pFVar37 == *(uint *)(this->ChainBoneIndices).AllocatorInstance.Data) {
        FVar35 = SUB84((longlong)pFVar37 - (longlong)pFVar2 >> 1,0);
        goto LAB_14643636e;
      }
    }
    FVar35 = (FCompactPoseBoneIndex)0xffffffff;
LAB_14643636e:
    local_810 = &param_1->Pose;
    pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_810,FVar35);
    local_508 = (pTVar29->Rotation).XY.m128d_f64[0];
    dStack_500 = (pTVar29->Rotation).XY.m128d_f64[1];
    local_4f8 = (pTVar29->Rotation).ZW.m128d_f64[0];
    dStack_4f0 = (pTVar29->Rotation).ZW.m128d_f64[1];
    local_4e8 = (pTVar29->Translation).XY.m128d_f64[0];
    dStack_4e0 = (pTVar29->Translation).XY.m128d_f64[1];
    local_4d8 = (pTVar29->Translation).ZW.m128d_f64[0];
    dStack_4d0 = (pTVar29->Translation).ZW.m128d_f64[1];
    local_4c8 = (pTVar29->Scale3D).XY.m128d_f64[0];
    dStack_4c0 = (pTVar29->Scale3D).XY.m128d_f64[1];
    local_4b8 = (pTVar29->Scale3D).ZW.m128d_f64[0];
    dStack_4b0 = (pTVar29->Scale3D).ZW.m128d_f64[1];
    if ((param_2->ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
    *pFVar3 = FVar35;
    *(double *)(pFVar3 + 4) = local_508;
    *(double *)(pFVar3 + 6) = dStack_500;
    *(double *)(pFVar3 + 8) = local_4f8;
    *(double *)(pFVar3 + 10) = dStack_4f0;
    *(double *)(pFVar3 + 0xc) = local_4e8;
    *(double *)(pFVar3 + 0xe) = dStack_4e0;
    *(double *)(pFVar3 + 0x10) = local_4d8;
    *(double *)(pFVar3 + 0x12) = dStack_4d0;
    *(double *)(pFVar3 + 0x14) = local_4c8;
    *(double *)(pFVar3 + 0x16) = dStack_4c0;
    *(double *)(pFVar3 + 0x18) = local_4b8;
    *(double *)(pFVar3 + 0x1a) = dStack_4b0;
    auVar102 = *(undefined1 (*) [16])(pTVar29->Translation).ZW.m128d_f64;
    dVar80 = auVar102._0_8_;
    dVar56 = (pTVar29->Translation).XY.m128d_f64[0];
    dVar82 = (pTVar29->Translation).XY.m128d_f64[1];
    local_3f0 = dVar56;
    dStack_3e8 = dVar82;
    local_3e0 = dVar80;
    if (((this->TrailBoneLocations).ArrayNum < 1) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       auVar102 = extraout_XMM0, bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar131 = auVar102._8_8_;
    pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
    uVar45 = 1;
    *(double *)pFVar2 = dVar56;
    *(double *)(pFVar2 + 8) = dVar82;
    *(double *)(pFVar2 + 0x10) = dVar80;
    iVar157 = (int)__real_3ff0000000000000;
    iVar27 = SUB84(__real_3ff0000000000000,4);
    iVar145 = __real_bff0000000000000.ObjectIndex;
    iVar146 = __real_bff0000000000000.ObjectSerialNumber;
    local_720 = __real_3ff0000000000000;
    uVar46 = 0;
    if (1 < (this->ChainBoneIndices).ArrayNum) {
      local_7e0 = (ForElementType<unsigned_int>)0x0;
      uVar36 = 0;
      local_858 = 0;
      local_860 = 1;
      uVar54 = uVar42;
      do {
        FVar22 = local_7e0;
        uVar43 = -uVar45 >> 0x1f;
        uVar38 = uVar36;
        if ((int)uVar54 < (this->ChainBoneIndices).ArrayNum) {
          uVar38 = uVar43;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this_00->BoneIndicesArray).AllocatorInstance.Data;
        for (pFVar37 = pFVar2;
            pFVar37 != pFVar2 + (longlong)(this_00->BoneIndicesArray).ArrayNum * 2;
            pFVar37 = pFVar37 + 2) {
          if ((uint)*(ushort *)pFVar37 ==
              *(uint *)((this->ChainBoneIndices).AllocatorInstance.Data + (longlong)FVar22 * 4)) {
            FVar35 = SUB84((longlong)pFVar37 - (longlong)pFVar2 >> 1,0);
            goto LAB_14643659b;
          }
        }
        FVar35 = (FCompactPoseBoneIndex)0xffffffff;
LAB_14643659b:
        lVar40 = local_860 + -1;
        uVar38 = uVar36;
        if ((int)(uVar45 - 1) < (this->TrailBoneLocations).ArrayNum) {
          uVar38 = uVar43;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = local_810;
        pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
        pFVar2 = pFVar37 + lVar40 * 0x18;
        dVar56 = *(double *)pFVar2;
        dVar82 = *(double *)(pFVar2 + 8);
        local_638 = *(double *)(pFVar37 + lVar40 * 0x18 + 0x10);
        pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_810,FVar35);
        uVar47 = ~uVar45 >> 0x1f;
        local_6c8 = (pTVar29->Translation).XY.m128d_f64[0];
        dStack_6c0 = (pTVar29->Translation).XY.m128d_f64[1];
        local_6b8 = (pTVar29->Translation).ZW.m128d_f64[0];
        uVar38 = uVar36;
        if ((int)uVar45 < (this->ChainBoneIndices).ArrayNum) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this_00->BoneIndicesArray).AllocatorInstance.Data;
        for (pFVar37 = pFVar2;
            pFVar37 != pFVar2 + (longlong)(this_00->BoneIndicesArray).ArrayNum * 2;
            pFVar37 = pFVar37 + 2) {
          if ((uint)*(ushort *)pFVar37 ==
              *(uint *)((this->ChainBoneIndices).AllocatorInstance.Data + local_860 * 4)) {
            FVar44 = SUB84((longlong)pFVar37 - (longlong)pFVar2 >> 1,0);
            goto LAB_1464366dc;
          }
        }
        FVar44 = (FCompactPoseBoneIndex)0xffffffff;
LAB_1464366dc:
        uVar38 = uVar36;
        if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
        dVar127 = local_1a8.Rotation.ZW.m128d_f64[0];
        dVar137 = local_1a8.Rotation.ZW.m128d_f64[1];
        dVar126 = local_1a8.Rotation.XY.m128d_f64[1];
        auVar102 = blendpd((undefined1  [16])local_1a8.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_1a8.Rotation.ZW.m128d_f64,2);
        pFVar2 = pFVar37 + local_838;
        dVar81 = *(double *)(pFVar37 + local_838 + 0x10) * local_1a8.Scale3D.ZW.m128d_f64[0];
        dVar99 = local_1a8.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar80 = local_1a8.Scale3D.XY.m128d_f64[0] * *(double *)pFVar2;
        dVar118 = local_1a8.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar2 + 8);
        uVar115 = (undefined4)((ulonglong)dVar118 >> 0x20);
        auVar57._8_4_ = local_1a8.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar57._0_8_ = dVar126;
        auVar57._12_4_ = local_1a8.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar138._8_4_ = SUB84(dVar118,0);
        auVar138._0_8_ = dVar80;
        auVar138._12_4_ = uVar115;
        auVar86._8_4_ = SUB84(dVar118,0);
        auVar86._0_8_ = dVar80;
        auVar86._12_4_ = uVar115;
        auVar6._8_4_ = SUB84(dVar99,0);
        auVar6._0_8_ = dVar81;
        auVar6._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
        auVar84 = blendpd(auVar86,auVar6,2);
        auVar139._0_8_ = auVar138._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar126 * dVar80;
        auVar139._8_8_ = dVar81 * dVar126 - auVar57._8_8_ * dVar118;
        auVar112._8_4_ = SUB84(auVar139._8_8_,0);
        auVar112._0_8_ = auVar139._0_8_;
        auVar112._12_4_ = (int)((ulonglong)auVar139._8_8_ >> 0x20);
        auVar87._0_8_ = auVar84._0_8_ * dVar127 - auVar102._0_8_ * dVar81;
        auVar87._8_8_ = auVar84._8_8_ * dVar137 - auVar102._8_8_ * dVar99;
        auVar84 = blendpd(auVar139,auVar87,2);
        dVar99 = auVar112._8_8_ + auVar112._8_8_;
        dVar116 = auVar87._0_8_ + auVar87._0_8_;
        auVar140._0_8_ = auVar84._0_8_ + auVar84._0_8_;
        auVar140._8_8_ = auVar84._8_8_ + auVar84._8_8_;
        uVar115 = SUB84(dVar116,0);
        auVar103._8_4_ = uVar115;
        auVar103._0_8_ = dVar99;
        uVar117 = (undefined4)((ulonglong)dVar116 >> 0x20);
        auVar103._12_4_ = uVar117;
        auVar58._8_4_ = uVar115;
        auVar58._0_8_ = dVar99;
        auVar58._12_4_ = uVar117;
        auVar88._8_4_ = uVar115;
        auVar88._0_8_ = dVar99;
        auVar88._12_4_ = uVar117;
        auVar84 = blendpd(auVar88,auVar140,2);
        auVar104._0_8_ = auVar103._8_8_ * local_1a8.Rotation.XY.m128d_f64[0] - dVar99 * dVar126;
        auVar104._8_8_ = auVar140._0_8_ * dVar126 - auVar58._8_8_ * dVar127;
        auVar59._8_4_ = SUB84(auVar140._8_8_,0);
        auVar59._0_8_ = auVar140._0_8_;
        auVar59._12_4_ = (int)((ulonglong)auVar140._8_8_ >> 0x20);
        auVar89._0_8_ = auVar84._0_8_ * dVar127 - auVar140._0_8_ * auVar102._0_8_;
        auVar89._8_8_ = auVar84._8_8_ * dVar137 - auVar59._8_8_ * auVar102._8_8_;
        auVar60._8_4_ = SUB84(auVar104._8_8_,0);
        auVar60._0_8_ = auVar104._0_8_;
        auVar60._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
        auVar102 = blendpd(auVar104,auVar89,2);
        auVar84._0_8_ =
             dVar99 * dVar137 + dVar80 + auVar60._8_8_ + local_1a8.Translation.XY.m128d_f64[0];
        auVar84._8_8_ =
             dVar116 * dVar137 + dVar118 + auVar89._0_8_ + local_1a8.Translation.XY.m128d_f64[1];
        local_798 = auVar140._0_8_ * dVar137 + dVar81 + auVar102._0_8_ +
                    local_1a8.Translation.ZW.m128d_f64[0];
        local_7a8 = auVar84;
        pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_01,FVar44);
        local_3c0 = (pTVar29->Translation).XY.m128d_f64[0];
        dStack_3b8 = (pTVar29->Translation).XY.m128d_f64[1];
        local_3b0 = (pTVar29->Translation).ZW.m128d_f64[0];
        dVar81 = local_3c0 - local_6c8;
        dVar80 = dStack_3b8 - dStack_6c0;
        dVar118 = local_3b0 - local_6b8;
        dVar99 = (dVar81 + dVar56) - (double)local_7a8._0_8_;
        dVar56 = (dVar80 + dVar82) - (double)local_7a8._8_8_;
        dVar82 = (dVar118 + local_638) - local_798;
        fVar55 = FInputScaleBiasClamp::ApplyTo
                           (&this->RelaxationSpeedScaleInputProcessor,this->RelaxationSpeedScale,
                            fVar153);
        uVar38 = uVar36;
        if ((int)uVar45 < (this->PerJointTrailData).ArrayNum) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar55 = fVar55 * fVar153 *
                 *(float *)((this->PerJointTrailData).AllocatorInstance.Data + local_860 * 4);
        uVar38 = uVar36;
        if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
          uVar38 = uVar47;
        }
        if (__real_3f800000 <= fVar55) {
          fVar55 = __real_3f800000;
        }
        if (fVar55 <= __real_00000000) {
          fVar55 = __real_00000000;
        }
        local_710.ReferenceController = (TReferenceControllerBase<1> *)(double)fVar55;
        dVar99 = dVar99 * (double)local_710.ReferenceController + (double)local_7a8._0_8_;
        dVar56 = dVar56 * (double)local_710.ReferenceController + (double)local_7a8._8_8_;
        dVar82 = dVar82 * (double)local_710.ReferenceController + local_798;
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
        *(double *)(pFVar2 + local_860 * 0x18) = dVar99;
        *(double *)(pFVar2 + local_860 * 0x18 + 8) = dVar56;
        *(double *)(pFVar2 + local_860 * 0x18 + 0x10) = dVar82;
        if (this->bLimitStretch == '\0') {
          uVar115 = SUB84(__real_3e45798ee2308c3a,0);
          uVar117 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
        }
        else {
          uVar38 = uVar36;
          if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
            uVar38 = uVar47;
          }
          dVar56 = SQRT(dVar81 * dVar81 + dVar80 * dVar80 + dVar118 * dVar118);
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
          uVar38 = uVar46;
          if ((int)(uVar45 - 1) < (this->TrailBoneLocations).ArrayNum) {
            uVar38 = uVar43;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
          dVar82 = *(double *)(pFVar2 + local_860 * 0x18) - *(double *)(pFVar37 + lVar40 * 0x18);
          dVar80 = *(double *)(pFVar2 + local_860 * 0x18 + 8) -
                   *(double *)(pFVar37 + lVar40 * 0x18 + 8);
          dVar81 = *(double *)(pFVar2 + local_860 * 0x18 + 0x10) -
                   *(double *)(pFVar37 + lVar40 * 0x18 + 0x10);
          uVar115 = SUB84(__real_3e45798ee2308c3a,0);
          uVar117 = (undefined4)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
          auVar105._0_8_ = dVar80 * dVar80 + dVar82 * dVar82 + dVar81 * dVar81;
          auVar105._8_8_ = 0;
          auVar84 = sqrtpd(auVar84,auVar105);
          dVar118 = auVar84._0_8_;
          if (((double)this->StretchLimit < dVar118 - dVar56) && (__real_3e45798ee2308c3a < dVar118)
             ) {
            dVar118 = (double)CONCAT44(iVar27,iVar157) / dVar118;
            uVar38 = uVar46;
            if ((int)(uVar45 - 1) < (this->TrailBoneLocations).ArrayNum) {
              uVar38 = uVar43;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
            dVar56 = (double)this->StretchLimit + dVar56;
            dVar99 = *(double *)(pFVar2 + lVar40 * 0x18 + 0x10);
            dVar116 = *(double *)(pFVar2 + lVar40 * 0x18 + 8);
            dVar126 = *(double *)(pFVar2 + lVar40 * 0x18);
            uVar38 = uVar39;
            if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
              uVar38 = uVar47;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
            *(double *)(pFVar2 + local_860 * 0x18) = dVar118 * dVar82 * dVar56 + dVar126;
            *(double *)(pFVar2 + local_860 * 0x18 + 8) = dVar118 * dVar80 * dVar56 + dVar116;
            *(double *)(pFVar2 + local_860 * 0x18 + 0x10) = dVar118 * dVar81 * dVar56 + dVar99;
          }
        }
        if ((this->bUsePlanarLimit != '\0') &&
           (uVar54 = uVar42, uVar50 = uVar42, 0 < (this->PlanarLimits).ArrayNum)) {
          do {
            uVar48 = (uint)uVar50;
            uVar38 = uVar39;
            if ((int)uVar48 < (this->PlanarLimits).ArrayNum) {
              uVar38 = ~uVar48 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_02 = (FBoneReference *)((this->PlanarLimits).AllocatorInstance.Data + uVar54);
            local_268.Rotation.XY.m128d_f64[0] = *(double *)&this_02[1].BoneName;
            local_268.Rotation.XY.m128d_f64[1] = *(double *)&this_02[1].field_0x8;
            local_268.Rotation.ZW.m128d_f64[0] = *(double *)&this_02[2].BoneName;
            local_268.Rotation.ZW.m128d_f64[1] = *(double *)&this_02[2].field_0x8;
            local_268.Translation.XY.m128d_f64[0] = *(double *)&this_02[3].BoneName;
            local_268.Translation.XY.m128d_f64[1] = *(double *)&this_02[3].field_0x8;
            local_268.Translation.ZW.m128d_f64[0] = *(double *)&this_02[4].BoneName;
            local_268.Translation.ZW.m128d_f64[1] = *(double *)&this_02[4].field_0x8;
            local_268.Scale3D.XY.m128d_f64[0] = *(double *)&this_02[5].BoneName;
            local_268.Scale3D.XY.m128d_f64[1] = *(double *)&this_02[5].field_0x8;
            local_268.Scale3D.ZW.m128d_f64[0] = *(double *)&this_02[6].BoneName;
            local_268.Scale3D.ZW.m128d_f64[1] = *(double *)&this_02[6].field_0x8;
            bVar24 = FBoneReference::IsValidToEvaluate(this_02,this_00);
            if (bVar24) {
              FBoneReference::GetCompactPoseIndex(this_02,(FBoneContainer *)&local_800);
              pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_810,local_800);
              local_148.Rotation.XY.m128d_f64[0] = (pTVar29->Rotation).XY.m128d_f64[0];
              local_148.Rotation.XY.m128d_f64[1] = (pTVar29->Rotation).XY.m128d_f64[1];
              local_148.Rotation.ZW.m128d_f64[0] = (pTVar29->Rotation).ZW.m128d_f64[0];
              local_148.Rotation.ZW.m128d_f64[1] = (pTVar29->Rotation).ZW.m128d_f64[1];
              local_148.Translation.XY.m128d_f64[0] = (pTVar29->Translation).XY.m128d_f64[0];
              local_148.Translation.XY.m128d_f64[1] = (pTVar29->Translation).XY.m128d_f64[1];
              local_148.Translation.ZW.m128d_f64[0] = (pTVar29->Translation).ZW.m128d_f64[0];
              local_148.Translation.ZW.m128d_f64[1] = (pTVar29->Translation).ZW.m128d_f64[1];
              local_148.Scale3D.XY.m128d_f64[0] = (pTVar29->Scale3D).XY.m128d_f64[0];
              local_148.Scale3D.XY.m128d_f64[1] = (pTVar29->Scale3D).XY.m128d_f64[1];
              local_148.Scale3D.ZW.m128d_f64[0] = (pTVar29->Scale3D).ZW.m128d_f64[0];
              local_148.Scale3D.ZW.m128d_f64[1] = (pTVar29->Scale3D).ZW.m128d_f64[1];
              UE::Math::TTransform<double>::Multiply(&local_268,&local_268,&local_148);
            }
            dVar80 = local_268.Rotation.ZW.m128d_f64[1];
            auVar20._8_8_ = local_268.Rotation.ZW.m128d_f64[1];
            auVar20._0_8_ = local_268.Rotation.ZW.m128d_f64[0];
            auVar84._8_8_ = local_268.Rotation.XY.m128d_f64[1];
            auVar84._0_8_ = local_268.Rotation.XY.m128d_f64[0];
            local_380 = CONCAT44(iVar27,iVar157);
            auVar5._4_4_ = iVar27;
            auVar5._0_4_ = iVar157;
            auVar5._8_8_ = 0;
            auVar102 = blendpd(ZEXT816(0),auVar5,2);
            auVar122 = blendpd(auVar84,auVar20,2);
            auVar132._0_8_ =
                 local_268.Rotation.XY.m128d_f64[0] * 0.0 - local_268.Rotation.XY.m128d_f64[1] * 0.0
            ;
            auVar132._8_8_ =
                 (double)CONCAT44(iVar27,iVar157) * local_268.Rotation.XY.m128d_f64[1] -
                 local_268.Rotation.ZW.m128d_f64[0] * 0.0;
            auVar90._0_8_ =
                 auVar102._0_8_ * local_268.Rotation.ZW.m128d_f64[0] -
                 auVar122._0_8_ * (double)CONCAT44(iVar27,iVar157);
            auVar90._8_8_ =
                 auVar102._8_8_ * local_268.Rotation.ZW.m128d_f64[1] - auVar122._8_8_ * 0.0;
            auVar102 = blendpd(auVar132,auVar90,2);
            auVar133._0_8_ = auVar102._0_8_ + auVar102._0_8_;
            auVar133._8_8_ = auVar102._8_8_ + auVar102._8_8_;
            dVar56 = auVar132._8_8_ + auVar132._8_8_;
            dVar82 = auVar90._0_8_ + auVar90._0_8_;
            uVar144 = SUB84(dVar82,0);
            uVar148 = (undefined4)((ulonglong)dVar82 >> 0x20);
            local_390 = 0;
            uStack_388 = 0;
            auVar106._8_4_ = uVar144;
            auVar106._0_8_ = dVar56;
            auVar106._12_4_ = uVar148;
            auVar61._8_4_ = uVar144;
            auVar61._0_8_ = dVar56;
            auVar61._12_4_ = uVar148;
            auVar91._8_4_ = uVar144;
            auVar91._0_8_ = dVar56;
            auVar91._12_4_ = uVar148;
            auVar102 = blendpd(auVar91,auVar133,2);
            auVar107._0_8_ =
                 auVar106._8_8_ * local_268.Rotation.XY.m128d_f64[0] -
                 dVar56 * local_268.Rotation.XY.m128d_f64[1];
            auVar107._8_8_ =
                 auVar133._0_8_ * local_268.Rotation.XY.m128d_f64[1] -
                 auVar61._8_8_ * local_268.Rotation.ZW.m128d_f64[0];
            auVar62._8_4_ = SUB84(auVar133._8_8_,0);
            auVar62._0_8_ = auVar133._0_8_;
            auVar62._12_4_ = (int)((ulonglong)auVar133._8_8_ >> 0x20);
            auVar92._0_8_ =
                 auVar102._0_8_ * local_268.Rotation.ZW.m128d_f64[0] -
                 auVar133._0_8_ * auVar122._0_8_;
            auVar92._8_8_ =
                 auVar102._8_8_ * local_268.Rotation.ZW.m128d_f64[1] -
                 auVar62._8_8_ * auVar122._8_8_;
            auVar63._8_4_ = SUB84(auVar107._8_8_,0);
            auVar63._0_8_ = auVar107._0_8_;
            auVar63._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
            auVar102 = blendpd(auVar107,auVar92,2);
            local_408._8_8_ = local_268.Translation.XY.m128d_f64[1];
            local_408._0_8_ = local_268.Translation.XY.m128d_f64[0];
            dVar56 = dVar56 * local_268.Rotation.ZW.m128d_f64[1] + auVar63._8_8_;
            uVar144 = (undefined4)((ulonglong)dVar56 >> 0x20);
            dVar82 = dVar82 * local_268.Rotation.ZW.m128d_f64[1] + auVar92._0_8_;
            uVar148 = SUB84(dVar82,0);
            uVar149 = (undefined4)((ulonglong)dVar82 >> 0x20);
            local_638 = auVar133._0_8_ * local_268.Rotation.ZW.m128d_f64[1] +
                        (double)CONCAT44(iVar27,iVar157) + auVar102._0_8_;
            auVar8._4_8_ = local_268.Rotation.ZW.m128d_f64[1];
            auVar8._0_4_ = (uint)((ulonglong)local_268.Translation.XY.m128d_f64[0] >> 0x20);
            auVar141._0_8_ = auVar8._0_8_ << 0x20;
            auVar141._8_4_ = SUB84(local_268.Translation.XY.m128d_f64[1],0);
            auVar141._12_4_ = (int)((ulonglong)local_268.Translation.XY.m128d_f64[1] >> 0x20);
            auVar9._4_8_ = auVar92._0_8_;
            auVar9._0_4_ = uVar144;
            auVar64._0_8_ = auVar9._0_8_ << 0x20;
            auVar64._8_4_ = uVar148;
            auVar64._12_4_ = uVar149;
            local_3f8 = (FName)local_268.Translation.ZW.m128d_f64[0];
            dVar118 = local_268.Translation.ZW.m128d_f64[0] * local_638;
            dVar82 = local_268.Translation.XY.m128d_f64[0] * dVar56;
            local_608._8_4_ = uVar148;
            local_608._0_8_ = dVar56;
            local_608._12_4_ = uVar149;
            uVar38 = uVar46;
            if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
              uVar38 = uVar47;
            }
            local_5f8 = local_638;
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
            auVar10._4_8_ = dVar80;
            auVar10._0_4_ = uVar144;
            auVar129._0_8_ = auVar10._0_8_ << 0x20;
            auVar129._8_4_ = uVar148;
            auVar129._12_4_ = uVar149;
            dVar82 = (auVar129._8_8_ * *(double *)(pFVar2 + local_860 * 0x18 + 8) +
                      dVar56 * *(double *)(pFVar2 + local_860 * 0x18) +
                     local_638 * *(double *)(pFVar2 + local_860 * 0x18 + 0x10)) -
                     (auVar141._8_8_ * auVar64._8_8_ + dVar82 + dVar118);
            if (dVar82 < 0.0) {
              uVar38 = uVar46;
              if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
                uVar38 = uVar47;
              }
              dVar80 = local_638 * dVar82;
              if ((uVar38 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (this->TrailBoneLocations).AllocatorInstance.Data;
              *(double *)(pFVar2 + local_860 * 0x18) =
                   *(double *)(pFVar2 + local_860 * 0x18) - dVar56 * dVar82;
              *(double *)(pFVar2 + local_860 * 0x18 + 8) =
                   *(double *)(pFVar2 + local_860 * 0x18 + 8) - auVar129._8_8_ * dVar82;
              *(double *)(pFVar2 + local_860 * 0x18 + 0x10) =
                   *(double *)(pFVar2 + local_860 * 0x18 + 0x10) - dVar80;
            }
            uVar54 = uVar54 + 0x70;
            uVar50 = (ulonglong)(uVar48 + 1);
          } while ((int)(uVar48 + 1) < (this->PlanarLimits).ArrayNum);
        }
        pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_810,FVar44);
        local_578 = (pTVar29->Rotation).XY.m128d_f64[0];
        dStack_570 = (pTVar29->Rotation).XY.m128d_f64[1];
        local_568 = (pTVar29->Rotation).ZW.m128d_f64[0];
        dStack_560 = (pTVar29->Rotation).ZW.m128d_f64[1];
        local_558 = (pTVar29->Translation).XY.m128d_f64[0];
        dStack_550 = (pTVar29->Translation).XY.m128d_f64[1];
        local_548 = (pTVar29->Translation).ZW.m128d_f64[0];
        dStack_540 = (pTVar29->Translation).ZW.m128d_f64[1];
        local_538 = (pTVar29->Scale3D).XY.m128d_f64[0];
        dStack_530 = (pTVar29->Scale3D).XY.m128d_f64[1];
        local_528 = (pTVar29->Scale3D).ZW.m128d_f64[0];
        dStack_520 = (pTVar29->Scale3D).ZW.m128d_f64[1];
        uVar38 = uVar36;
        if ((int)uVar45 < *local_870) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar33 = local_860 * 0x70;
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(FCompactPoseBoneIndex *)(pFVar2 + lVar33) = FVar44;
        *(double *)(pFVar2 + lVar33 + 0x10) = local_578;
        *(double *)(pFVar2 + lVar33 + 0x10 + 8) = dStack_570;
        *(double *)(pFVar2 + lVar33 + 0x20) = local_568;
        *(double *)(pFVar2 + lVar33 + 0x20 + 8) = dStack_560;
        *(double *)(pFVar2 + lVar33 + 0x30) = local_558;
        *(double *)(pFVar2 + lVar33 + 0x30 + 8) = dStack_550;
        *(double *)(pFVar2 + lVar33 + 0x40) = local_548;
        *(double *)(pFVar2 + lVar33 + 0x40 + 8) = dStack_540;
        *(double *)(pFVar2 + lVar33 + 0x50) = local_538;
        *(double *)(pFVar2 + lVar33 + 0x50 + 8) = dStack_530;
        *(double *)(pFVar2 + lVar33 + 0x60) = local_528;
        *(double *)(pFVar2 + lVar33 + 0x60 + 8) = dStack_520;
        uVar38 = uVar36;
        if ((int)uVar45 < param_2->ArrayNum) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (param_2->AllocatorInstance).Data;
        uVar38 = uVar36;
        if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
          uVar38 = uVar47;
        }
        if ((uVar38 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
        uVar131 = *(undefined8 *)(pFVar37 + local_860 * 0x18 + 0x10);
        auVar74 = *(undefined1 (*) [16])(pFVar37 + local_860 * 0x18);
        *(undefined1 (*) [16])(pFVar2 + lVar33 + 0x30) = auVar74;
        pFVar2 = pFVar2 + lVar33 + 0x40;
        *(undefined8 *)pFVar2 = uVar131;
        *(undefined8 *)(pFVar2 + 8) = 0;
        if (this->bReorientParentToChild != '\0') {
          uVar38 = uVar36;
          if ((int)(uVar45 - 1) < *local_870) {
            uVar38 = uVar43;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar1 = (this->ChainBoneAxis).Value;
          lVar31 = (local_860 + -1) * 0x70;
          pFVar2 = (param_2->AllocatorInstance).Data;
          FVar100 = __real_8000000000000000;
          FVar17 = __real_8000000000000000;
          if (uVar1 == '\x01') {
            local_7c0 = ___xmm_00000000000000003ff0000000000000;
            FStack_7b8 = _UNK_150689518;
            local_7b0.ObjectIndex = 0;
            local_7b0.ObjectSerialNumber = 0;
            FVar83 = __real_bff0000000000000;
          }
          else {
            FVar83 = __real_8000000000000000;
            if (uVar1 == '\x02') {
              local_7c0 = ___xmm_3ff00000000000000000000000000000;
              FStack_7b8 = _UNK_15061cbc8;
              local_7b0.ObjectIndex = 0;
              local_7b0.ObjectSerialNumber = 0;
              FVar100 = __real_bff0000000000000;
            }
            else {
              local_7c0.ObjectIndex = 0;
              local_7c0.ObjectSerialNumber = 0;
              FStack_7b8.ObjectIndex = 0;
              FStack_7b8.ObjectSerialNumber = 0;
              local_7b0.ObjectSerialNumber = iVar27;
              local_7b0.ObjectIndex = iVar157;
              FVar17 = __real_bff0000000000000;
            }
          }
          if (this->bInvertChainBoneAxis != 0) {
            local_7c0 = FVar83;
            FStack_7b8 = FVar100;
            local_7b0 = FVar17;
          }
          dVar81 = (double)local_7c0 * *(double *)(pFVar2 + lVar31 + 0x50);
          dVar99 = (double)FStack_7b8 * *(double *)(pFVar2 + lVar31 + 0x50 + 8);
          local_648 = *(undefined8 *)(pFVar2 + lVar31 + 0x10);
          uStack_640 = *(undefined8 *)(pFVar2 + lVar31 + 0x10 + 8);
          auVar123._8_4_ = SUB84(dVar99,0);
          auVar123._0_8_ = dVar81;
          uVar144 = (undefined4)((ulonglong)dVar99 >> 0x20);
          auVar123._12_4_ = uVar144;
          auVar134._0_8_ = (double)local_7b0 * *(double *)(pFVar2 + lVar31 + 0x60);
          auVar134._8_8_ = *(double *)(pFVar2 + lVar31 + 0x60 + 8) * 0.0;
          auVar84 = *(undefined1 (*) [16])(pFVar2 + lVar31 + 0x20);
          dVar118 = auVar84._0_8_;
          auVar102 = *(undefined1 (*) [16])(pFVar2 + lVar31 + 0x10);
          auVar122 = *(undefined1 (*) [16])(pFVar2 + lVar31 + 0x10);
          dVar80 = *(double *)(pFVar2 + lVar31 + 0x28);
          auVar108 = blendpd(auVar102,auVar84,2);
          auVar124._0_8_ = auVar123._8_8_ * auVar102._0_8_ - auVar102._8_8_ * dVar81;
          auVar124._8_8_ = auVar134._0_8_ * auVar102._8_8_ - dVar118 * dVar99;
          auVar65._8_4_ = SUB84(dVar99,0);
          auVar65._0_8_ = dVar81;
          auVar65._12_4_ = uVar144;
          auVar102 = blendpd(auVar65,auVar134,2);
          auVar66._0_8_ = auVar102._0_8_ * dVar118 - auVar108._0_8_ * auVar134._0_8_;
          auVar66._8_8_ = auVar102._8_8_ * auVar84._8_8_ - auVar108._8_8_ * auVar134._8_8_;
          auVar102 = blendpd(auVar124,auVar66,2);
          dVar56 = auVar124._8_8_ + auVar124._8_8_;
          dVar82 = auVar66._0_8_ + auVar66._0_8_;
          uVar144 = (undefined4)((ulonglong)dVar82 >> 0x20);
          auVar125._0_8_ = auVar102._0_8_ + auVar102._0_8_;
          auVar125._8_8_ = auVar102._8_8_ + auVar102._8_8_;
          auVar120._8_4_ = SUB84(dVar82,0);
          auVar120._0_8_ = dVar56;
          auVar120._12_4_ = uVar144;
          auVar93._8_4_ = SUB84(dVar82,0);
          auVar93._0_8_ = dVar56;
          auVar93._12_4_ = uVar144;
          auVar102 = blendpd(auVar93,auVar125,2);
          auVar121._0_8_ = auVar120._8_8_ * auVar122._0_8_ - auVar122._8_8_ * dVar56;
          auVar121._8_8_ = auVar125._0_8_ * auVar122._8_8_ - dVar118 * dVar82;
          auVar67._8_4_ = SUB84(auVar121._8_8_,0);
          auVar67._0_8_ = auVar121._0_8_;
          auVar67._12_4_ = (int)((ulonglong)auVar121._8_8_ >> 0x20);
          auVar122 = blendpd(auVar122,auVar84,2);
          auVar94._0_8_ = auVar102._0_8_ * dVar118 - auVar122._0_8_ * auVar125._0_8_;
          auVar94._8_8_ = auVar102._8_8_ * auVar84._8_8_ - auVar122._8_8_ * auVar125._8_8_;
          dVar56 = dVar56 * dVar80 + dVar81 + auVar67._8_8_;
          uVar131 = dVar82 * dVar80 + dVar99 + auVar94._0_8_;
          auVar84 = blendpd(auVar121,auVar94,2);
          dVar80 = dVar80 * auVar125._0_8_ + auVar134._0_8_ + auVar84._0_8_;
          auVar11._4_8_ = auVar134._8_8_;
          auVar11._0_4_ = (int)((ulonglong)dVar56 >> 0x20);
          auVar135._0_8_ = auVar11._0_8_ << 0x20;
          auVar135._8_4_ = (int)uVar131;
          auVar135._12_4_ = (int)((ulonglong)uVar131 >> 0x20);
          dVar118 = auVar135._8_8_;
          dVar82 = dVar118 * dVar118 + dVar56 * dVar56 + dVar80 * dVar80;
          uVar128 = dVar56;
          local_6b0._s_0.Z = dVar80;
          if ((dVar82 != (double)CONCAT44(iVar27,iVar157)) &&
             (uVar128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             uVar131 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             local_6b0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             (double)CONCAT44(uVar117,uVar115) <= dVar82)) {
            local_598 = (double)CONCAT44(iVar27,iVar157) / SQRT(dVar82);
            local_5b0 = local_598 * dVar80;
            uVar128 = dVar56 * local_598;
            uVar131 = local_598 * dVar118;
            local_6b0._s_0.Z = local_5b0;
          }
          local_6b0._8_4_ = (int)uVar131;
          local_6b0._0_8_ = uVar128;
          local_6b0._12_4_ = (int)((ulonglong)uVar131 >> 0x20);
          uVar38 = uVar36;
          if ((int)uVar45 < *local_870) {
            uVar38 = uVar47;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar37 = (param_2->AllocatorInstance).Data;
          pFVar2 = pFVar37 + lVar33 + 0x30;
          local_700 = *(double *)pFVar2;
          dStack_6f8 = *(double *)(pFVar2 + 8);
          local_6f0 = *(double *)(pFVar37 + lVar33 + 0x40);
          uVar38 = uVar36;
          if ((int)(uVar45 - 1) < *local_870) {
            uVar38 = uVar43;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          local_5c0 = *(undefined1 (*) [16])(pFVar2 + lVar31 + 0x30);
          pFVar2 = pFVar2 + lVar31 + 0x40;
          local_5b0 = *(double *)pFVar2;
          local_718 = (FSkelMeshRefPoseOverride *)(local_700 - local_5c0._0_8_);
          local_728 = (FWeakObjectPtr)(local_6f0 - local_5b0);
          auVar12._4_8_ = *(double *)(pFVar2 + 8);
          auVar12._0_4_ = local_5c0._4_4_;
          auVar68._0_8_ = auVar12._0_8_ << 0x20;
          auVar68._8_4_ = local_5c0._8_4_;
          auVar68._12_4_ = local_5c0._12_4_;
          local_708 = (FWeakObjectPtr)(dStack_6f8 - auVar68._8_8_);
          dVar56 = (double)local_718 * (double)local_718 + (double)local_708 * (double)local_708 +
                   (double)local_728 * (double)local_728;
          local_7d8._0_8_ = local_718;
          local_7d8._8_8_ = local_708;
          local_7d8._16_8_ = local_728;
          if ((dVar56 != (double)CONCAT44(iVar27,iVar157)) &&
             (local_7d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
             local_7d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
             local_7d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
             (double)CONCAT44(uVar117,uVar115) <= dVar56)) {
            local_5a8 = (double)CONCAT44(iVar27,iVar157) / SQRT(dVar56);
            local_7d8._s_0.X = (double)(FSkelMeshRefPoseOverride *)(local_5a8 * (double)local_718);
            local_7d8._s_0.Y = (double)local_708 * local_5a8;
            local_7d8._s_0.Z = (double)local_728 * local_5a8;
          }
          UE::Math::TQuat<double>::FindBetweenNormals
                    (&local_4a8,(TVector<double> *)&local_6b0._s_0,
                     (TVector<double> *)&local_7d8._s_0);
          uVar38 = uVar36;
          if ((int)(uVar45 - 1) < *local_870) {
            uVar38 = uVar43;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar126 = local_4a8.X;
          uVar117 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
          uVar150 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
          uVar151 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
          uVar152 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
          uVar115 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
          uVar149 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
          uVar161 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
          uVar162 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
          uVar144 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
          uVar154 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
          uVar155 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
          uVar156 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
          pFVar37 = (param_2->AllocatorInstance).Data;
          uVar148 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
          uVar158 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
          uVar159 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
          uVar160 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
          dVar127 = local_4a8.Y;
          auVar109._8_4_ = local_4a8.X._0_4_;
          auVar109._0_8_ = dVar126;
          auVar109._12_4_ = local_4a8.X._4_4_;
          dVar80 = local_4a8.W;
          pFVar2 = pFVar37 + lVar31 + 0x20;
          dVar118 = *(double *)pFVar2;
          dVar81 = *(double *)(pFVar2 + 8);
          pFVar37 = pFVar37 + lVar31 + 0x10;
          dVar99 = *(double *)pFVar37;
          dVar116 = *(double *)(pFVar37 + 8);
          auVar84._8_8_ = dVar118;
          auVar84._0_8_ = dVar81;
          dVar82 = local_4a8.Z;
          auVar69._8_4_ = local_4a8.Z._0_4_;
          auVar69._0_8_ = dVar82;
          auVar69._12_4_ = local_4a8.Z._4_4_;
          local_748.X = dVar126 * dVar81 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                        dVar99 * dVar80 +
                        dVar118 * dVar127 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                        dVar82 * dVar116 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_748.Y = auVar109._8_8_ * dVar118 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                        dVar116 * dVar80 +
                        dVar81 * dVar127 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                        auVar69._8_8_ * dVar99 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_748.Z = dVar126 * dVar116 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                        dVar118 * dVar80 +
                        dVar99 * dVar127 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                        dVar82 * dVar81 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_748.W = dVar126 * dVar99 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                        dVar81 * dVar80 +
                        dVar116 * dVar127 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                        dVar82 * dVar118 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          if (this->bLimitRotation != '\0') {
            local_788 = SUB84(UE::Math::TQuat<double>::Identity.X,0);
            iStack_784 = (int)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20);
            uStack_780 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
            uStack_77c = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
            local_778 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
            iStack_774 = (int)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
            uStack_770 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
            uStack_76c = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
            if (uVar45 == 1) {
              FBoneContainer::GetParentBoneIndex(this_00,&local_7fc);
              if (local_7fc == (FCompactPoseBoneIndex)0xffffffff) {
                uVar115 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
                uVar149 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
                uVar161 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
                uVar162 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
                uVar117 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
                uVar150 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
                uVar151 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
                uVar152 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
                uVar144 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
                uVar154 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
                uVar155 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
                uVar156 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
                uVar148 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
                uVar158 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
                uVar159 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
                uVar160 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
              }
              else {
                pTVar29 = FCSPose<FCompactPose>::GetComponentSpaceTransform(local_810,local_7fc);
                uVar115 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
                uVar149 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
                uVar161 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
                uVar162 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
                uVar117 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
                uVar150 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
                uVar151 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
                uVar152 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
                uVar144 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
                uVar154 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
                uVar155 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
                uVar156 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
                local_788 = *(int *)(pTVar29->Rotation).XY.m128d_f64;
                iStack_784 = *(int *)((longlong)(pTVar29->Rotation).XY.m128d_f64 + 4);
                uStack_780 = *(undefined4 *)((pTVar29->Rotation).XY.m128d_f64 + 1);
                uStack_77c = *(undefined4 *)((longlong)(pTVar29->Rotation).XY.m128d_f64 + 0xc);
                local_778 = *(int *)(pTVar29->Rotation).ZW.m128d_f64;
                iStack_774 = *(int *)((longlong)(pTVar29->Rotation).ZW.m128d_f64 + 4);
                uStack_770 = *(undefined4 *)((pTVar29->Rotation).ZW.m128d_f64 + 1);
                uStack_76c = *(undefined4 *)((longlong)(pTVar29->Rotation).ZW.m128d_f64 + 0xc);
                uVar148 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
                uVar158 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
                uVar159 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
                uVar160 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
              }
            }
            else {
              uVar38 = uVar36;
              if ((int)(uVar45 - 2) < *local_870) {
                uVar38 = 1 - uVar45 >> 0x1f;
              }
              if (uVar38 == 0) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar24) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                uVar148 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._0_4_;
                uVar158 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]._4_4_;
                uVar159 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._0_4_;
                uVar160 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]._4_4_;
                uVar144 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._0_4_;
                uVar154 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]._4_4_;
                uVar155 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._0_4_;
                uVar156 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]._4_4_;
                uVar117 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._0_4_;
                uVar150 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]._4_4_;
                uVar151 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._0_4_;
                uVar152 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]._4_4_;
                uVar115 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._0_4_;
                uVar149 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]._4_4_;
                uVar161 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._0_4_;
                uVar162 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]._4_4_;
              }
              lVar34 = (local_860 + -2) * 0x70;
              pFVar37 = (param_2->AllocatorInstance).Data;
              pFVar2 = pFVar37 + lVar34 + 0x10;
              local_788 = *(int *)pFVar2;
              iStack_784 = *(int *)(pFVar2 + 4);
              uStack_780 = *(undefined4 *)(pFVar2 + 8);
              uStack_77c = *(undefined4 *)(pFVar2 + 0xc);
              pFVar37 = pFVar37 + lVar34 + 0x20;
              local_778 = *(int *)pFVar37;
              iStack_774 = *(int *)(pFVar37 + 4);
              uStack_770 = *(undefined4 *)(pFVar37 + 8);
              uStack_76c = *(undefined4 *)(pFVar37 + 0xc);
            }
            dVar82 = (double)CONCAT44(iStack_784,local_788) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar80 = (double)CONCAT44(uStack_77c,uStack_780) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar118 = (double)CONCAT44(iStack_774,local_778) *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar81 = (double)CONCAT44(uStack_76c,uStack_770) *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            uVar147 = (undefined4)((ulonglong)dVar81 >> 0x20);
            auVar142._8_4_ = SUB84(dVar81,0);
            auVar142._0_8_ = dVar118;
            auVar142._12_4_ = uVar147;
            auVar110._8_4_ = SUB84(dVar82,0);
            auVar110._0_8_ = dVar82;
            auVar110._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
            dVar99 = auVar142._8_8_;
            auVar70._8_4_ = SUB84(dVar81,0);
            auVar70._0_8_ = dVar99;
            auVar70._12_4_ = uVar147;
            auVar84._8_8_ = local_748.X;
            auVar84._0_8_ = local_748.Y;
            auVar71._8_4_ = SUB84(dVar118,0);
            auVar71._0_8_ = dVar118;
            auVar71._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
            local_628.X = dVar82 * local_748.W * (double)CONCAT44(uVar150,uVar117) +
                          dVar99 * local_748.X +
                          local_748.Z * dVar80 * (double)CONCAT44(uVar154,uVar144) +
                          dVar118 * local_748.Y * (double)CONCAT44(uVar158,uVar148);
            local_628.Y = auVar110._8_8_ * local_748.Z * (double)CONCAT44(uVar152,uVar151) +
                          auVar70._8_8_ * local_748.Y +
                          local_748.W * dVar80 * (double)CONCAT44(uVar156,uVar155) +
                          auVar71._8_8_ * local_748.X * (double)CONCAT44(uVar160,uVar159);
            local_628.Z = dVar82 * local_748.Y * (double)CONCAT44(uVar149,uVar115) +
                          local_748.Z * dVar99 +
                          dVar80 * local_748.X *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                          dVar118 * local_748.W *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            local_628.W = dVar82 * local_748.X * (double)CONCAT44(uVar162,uVar161) +
                          local_748.W * dVar81 +
                          dVar80 * local_748.Y *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                          dVar118 * local_748.Z *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            if ((this_00->RefPoseOverride).Object == (FSkelMeshRefPoseOverride *)0x0) {
              local_878 = &this_00->RefSkeleton->FinalRefBonePose;
              pTVar21 = &this_00->RefSkeleton->FinalRefBonePose;
            }
            else {
              pFVar32 = TSharedPtr<FSkelMeshRefPoseOverride,1>::operator->
                                  (&this_00->RefPoseOverride);
              local_878 = &pFVar32->RefBonePoses;
              pTVar21 = &pFVar32->RefBonePoses;
            }
            local_850 = &pTVar21->ArrayNum;
            uVar38 = uVar39;
            if ((int)FVar35 < (this_00->BoneIndicesArray).ArrayNum) {
              uVar38 = ~(uint)FVar35 >> 0x1f;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar26 = *(ushort *)
                      ((this_00->BoneIndicesArray).AllocatorInstance.Data +
                      (longlong)(int)FVar35 * 2);
            uVar54 = (ulonglong)uVar26;
            if (*local_850 <= (int)(uint)uVar26) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar24) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar54 = (ulonglong)(uint)uVar26;
            }
            pFVar37 = (local_878->AllocatorInstance).Data;
            pFVar2 = pFVar37 + uVar54 * 0x60;
            local_488.X = *(double *)pFVar2;
            local_488.Y = *(double *)(pFVar2 + 8);
            pFVar37 = pFVar37 + uVar54 * 0x60 + 0x10;
            local_488.Z = *(double *)pFVar37;
            local_488.W = *(double *)(pFVar37 + 8);
            uVar38 = uVar39;
            if ((int)(uVar45 - 1) < (this->RotationLimits).ArrayNum) {
              uVar38 = uVar43;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar2 = (this->RotationLimits).AllocatorInstance.Data;
            lVar34 = (local_860 + -1) * 0x30;
            uVar38 = uVar39;
            if ((int)(uVar45 - 1) < (this->RotationOffsets).ArrayNum) {
              uVar38 = uVar43;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar37 = (this->RotationOffsets).AllocatorInstance.Data;
            local_698._s_0.Z =
                 *(double *)(pFVar2 + lVar34 + 0x28) + *(double *)(pFVar37 + lVar40 * 0x18 + 0x10);
            local_698._s_0.Y =
                 *(double *)(pFVar2 + lVar34 + 0x20) + *(double *)(pFVar37 + lVar40 * 0x18 + 8);
            local_698._s_0.X =
                 *(double *)(pFVar37 + lVar40 * 0x18) + *(double *)(pFVar2 + lVar34 + 0x18);
            uVar38 = uVar39;
            if ((int)(uVar45 - 1) < (this->RotationOffsets).ArrayNum) {
              uVar38 = uVar43;
            }
            if ((uVar38 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar37 = (this->RotationOffsets).AllocatorInstance.Data;
            local_680._s_0.Z =
                 *(double *)(pFVar2 + lVar34 + 0x10) + *(double *)(pFVar37 + lVar40 * 0x18 + 0x10);
            local_680._s_0.Y =
                 *(double *)(pFVar2 + lVar34 + 8) + *(double *)(pFVar37 + lVar40 * 0x18 + 8);
            local_680._s_0.X = *(double *)(pFVar2 + lVar34) + *(double *)(pFVar37 + lVar40 * 0x18);
            bVar24 = AnimationCore::ConstrainAngularRangeUsingEuler
                               (&local_628,&local_488,(TVector<double> *)&local_680._s_0,
                                (TVector<double> *)&local_698._s_0);
            if (bVar24) {
              dVar80 = (double)CONCAT44(iStack_784,local_788);
              auVar18._8_4_ = uStack_780;
              auVar18._0_8_ = dVar80;
              auVar18._12_4_ = uStack_77c;
              dVar118 = (double)CONCAT44(iStack_774,local_778);
              auVar19._8_4_ = uStack_770;
              auVar19._0_8_ = dVar118;
              auVar19._12_4_ = uStack_76c;
              dVar81 = auVar18._8_8_;
              auVar111._8_4_ = local_788;
              auVar111._0_8_ = dVar80;
              auVar111._12_4_ = iStack_784;
              dVar82 = auVar19._8_8_;
              auVar84._8_8_ = local_628.X;
              auVar84._0_8_ = local_628.Y;
              auVar72._8_4_ = uStack_770;
              auVar72._0_8_ = dVar82;
              auVar72._12_4_ = uStack_76c;
              auVar73._8_4_ = local_778;
              auVar73._0_8_ = dVar118;
              auVar73._12_4_ = iStack_774;
              local_748.X = dVar80 * local_628.W *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                            dVar82 * local_628.X +
                            local_628.Z * dVar81 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                            dVar118 * local_628.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              local_748.Y = auVar111._8_8_ * local_628.Z *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            auVar72._8_8_ * local_628.Y +
                            local_628.W * dVar81 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            auVar73._8_8_ * local_628.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              local_748.Z = dVar80 * local_628.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                            local_628.Z * dVar82 +
                            dVar81 * local_628.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                            dVar118 * local_628.W *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              local_748.W = dVar80 * local_628.X *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            local_628.W * dVar82 +
                            dVar81 * local_628.Y *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            dVar118 * local_628.Z *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              local_5e8._s_0.Z = 0.0;
              local_5e8._s_0.X = (double)___xmm_00000000000000003ff0000000000000;
              local_5e8._s_0.Y = (double)_UNK_150689518;
              local_378 = local_748.X;
              dStack_370 = local_748.Y;
              local_368 = local_748.Z;
              dStack_360 = local_748.W;
              UE::Math::TQuat<double>::RotateVector
                        (&local_748,(TVector<double> *)&local_668._s_0,
                         (TVector<double> *)&local_5e8._s_0);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = dVar56;
              auVar102 = sqrtpd(extraout_XMM0_00,auVar7);
              uVar38 = uVar46;
              if ((int)(uVar45 - 1) < *local_870) {
                uVar38 = uVar43;
              }
              dVar56 = auVar102._0_8_;
              dVar82 = (local_668._s_0.X * dVar56 - (double)local_718) *
                       (double)local_710.ReferenceController + (double)local_718;
              dVar80 = (local_668._s_0.Y * dVar56 - (double)local_708) *
                       (double)local_710.ReferenceController + (double)local_708;
              dVar56 = (local_668._s_0.Z * dVar56 - (double)local_728) *
                       (double)local_710.ReferenceController + (double)local_728;
              if ((uVar38 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar37 = (param_2->AllocatorInstance).Data;
              pFVar2 = pFVar37 + lVar31 + 0x30;
              local_3d8 = *(double *)pFVar2;
              dStack_3d0 = *(double *)(pFVar2 + 8);
              local_3c8 = *(double *)(pFVar37 + lVar31 + 0x40);
              local_768 = local_3d8 + dVar82;
              FStack_760.Data = (FScriptContainerElement *)(dStack_3d0 + dVar80);
              local_758 = local_3c8 + dVar56;
              uVar38 = uVar46;
              if ((int)uVar45 < *local_870) {
                uVar38 = uVar47;
              }
              if ((uVar38 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              dVar82 = local_758;
              FVar23.Data = FStack_760.Data;
              dVar56 = local_768;
              pFVar37 = (param_2->AllocatorInstance).Data;
              pFVar2 = pFVar37 + lVar33 + 0x30;
              *(double *)pFVar2 = local_768;
              *(FScriptContainerElement **)(pFVar2 + 8) = FStack_760.Data;
              pFVar37 = pFVar37 + lVar33 + 0x40;
              *(double *)pFVar37 = local_758;
              *(undefined8 *)(pFVar37 + 8) = 0;
              uVar38 = uVar39;
              if ((int)uVar45 < (this->TrailBoneLocations).ArrayNum) {
                uVar38 = uVar47;
              }
              if ((uVar38 == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar24)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar37 = (this->TrailBoneLocations).AllocatorInstance.Data;
              pFVar2 = pFVar37 + local_860 * 0x18;
              *(double *)pFVar2 = dVar56;
              *(FScriptContainerElement **)(pFVar2 + 8) = FVar23.Data;
              *(double *)(pFVar37 + local_860 * 0x18 + 0x10) = dVar82;
            }
          }
          uVar38 = uVar39;
          if ((int)(uVar45 - 1) < *local_870) {
            uVar38 = uVar43;
          }
          if ((uVar38 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          auVar74._8_8_ = local_748.Y;
          auVar74._0_8_ = local_748.X;
          iVar157 = (int)local_720;
          iVar27 = SUB84(local_720,4);
          pFVar2 = (param_2->AllocatorInstance).Data;
          *(undefined1 (*) [16])(pFVar2 + lVar31 + 0x10) = auVar74;
          pFVar2 = pFVar2 + lVar31 + 0x20;
          *(double *)pFVar2 = local_748.Z;
          *(double *)(pFVar2 + 8) = local_748.W;
        }
        uVar131 = auVar74._8_8_;
        local_860 = local_860 + 1;
        uVar45 = uVar45 + 1;
        local_838 = local_838 + 0x18;
        local_7e0 = (ForElementType<unsigned_int>)((longlong)local_7e0 + 1);
        local_858 = local_858 + 1;
        uVar54 = (ulonglong)local_858;
      } while ((int)uVar45 < (this->ChainBoneIndices).ArrayNum);
      iVar145 = __real_bff0000000000000.ObjectIndex;
      iVar146 = __real_bff0000000000000.ObjectSerialNumber;
      uVar36 = (uint)__xmm_80000000000000008000000000000000;
      uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    }
    piVar49 = &param_2->ArrayNum;
    uVar45 = this->ChainLength - 1;
    dVar56 = (double)this->LastBoneRotationAnimAlphaBlend;
    uVar39 = uVar46;
    if ((int)uVar45 < *piVar49) {
      uVar39 = ~uVar45 >> 0x1f;
    }
    if (uVar39 == 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar131 = extraout_XMM0_01._8_8_;
      if (bVar24) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar128 = auVar84._8_8_;
    pFVar2 = (param_2->AllocatorInstance).Data;
    uVar39 = this->ChainLength - 2;
    auVar102 = *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar45 * 0x70 + 0x10);
    auVar122 = *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar45 * 0x70 + 0x20);
    if ((int)uVar39 < *piVar49) {
      uVar46 = ~uVar39 >> 0x1f;
    }
    if (uVar46 == 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar131 = extraout_XMM0_02._8_8_;
      uVar128 = auVar84._8_8_;
      if (bVar24) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    auVar13._4_8_ = uVar128;
    auVar13._0_4_ = auVar102._4_4_;
    auVar113._0_8_ = auVar13._0_8_ << 0x20;
    auVar113._8_4_ = auVar102._8_4_;
    auVar113._12_4_ = auVar102._12_4_;
    dVar80 = auVar102._8_8_;
    pFVar2 = (param_2->AllocatorInstance).Data;
    auVar84 = *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar39 * 0x70 + 0x10);
    auVar108 = *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar39 * 0x70 + 0x20);
    auVar14._4_8_ = uVar131;
    auVar14._0_4_ = auVar84._4_4_;
    auVar75._0_8_ = auVar14._0_8_ << 0x20;
    auVar75._8_4_ = auVar84._8_4_;
    auVar75._12_4_ = auVar84._12_4_;
    auVar15._4_8_ = auVar84._8_8_;
    auVar15._0_4_ = auVar108._4_4_;
    auVar76._0_8_ = auVar15._0_8_ << 0x20;
    auVar76._8_4_ = auVar108._8_4_;
    auVar76._12_4_ = auVar108._12_4_;
    auVar16._4_8_ = dVar80;
    auVar16._0_4_ = auVar122._4_4_;
    auVar95._0_8_ = auVar16._0_8_ << 0x20;
    auVar95._8_4_ = auVar122._8_4_;
    auVar95._12_4_ = auVar122._12_4_;
    auVar114._0_8_ =
         auVar113._8_8_ * auVar75._8_8_ + auVar102._0_8_ * auVar84._0_8_ +
         auVar122._0_8_ * auVar108._0_8_ + auVar95._8_8_ * auVar76._8_8_;
    auVar114._8_8_ = dVar80;
    dVar82 = dVar56;
    if (auVar114._0_8_ < 0.0) {
      dVar82 = (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^ uVar38,SUB84(dVar56,0) ^ uVar36)
      ;
      iVar157 = iVar145;
      iVar27 = iVar146;
    }
    dVar82 = (double)CONCAT44(iVar27,iVar157) - dVar82;
    uVar39 = this->ChainLength - 1;
    if ((int)uVar39 < *piVar49) {
      uVar41 = ~uVar39 >> 0x1f;
    }
    local_5c8 = __real_3e45798ee0000000;
    dVar118 = auVar84._0_8_ * dVar82 + auVar102._0_8_ * dVar56;
    dVar80 = auVar84._8_8_ * dVar82 + dVar80 * dVar56;
    auVar77._8_4_ = SUB84(dVar80,0);
    auVar77._0_8_ = dVar118;
    auVar77._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
    dVar81 = auVar108._0_8_ * dVar82 + auVar122._0_8_ * dVar56;
    dVar99 = auVar108._8_8_ * dVar82 + auVar122._8_8_ * dVar56;
    auVar96._8_4_ = SUB84(dVar99,0);
    auVar96._0_8_ = dVar81;
    auVar96._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
    dVar56 = dVar81 * dVar81 + dVar118 * dVar118;
    dVar82 = auVar96._8_8_ * dVar99 + auVar77._8_8_ * dVar80;
    auVar78._8_4_ = SUB84(dVar82,0);
    auVar78._0_8_ = dVar56;
    auVar78._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
    auVar79._0_8_ = auVar78._8_8_ + dVar56;
    auVar79._8_8_ = dVar56 + dVar82;
    auVar84 = sqrtpd(auVar114,auVar79);
    uVar50 = -(ulonglong)(__real_3e45798ee0000000 <= auVar79._0_8_);
    uVar54 = -(ulonglong)(__real_3e45798ee0000000 <= auVar79._8_8_);
    uVar36 = (uint)(uVar50 >> 0x20);
    uVar38 = (uint)(uVar54 >> 0x20);
    auVar102 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar84);
    auVar97._0_4_ = ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar97._4_4_ =
         ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar97._8_4_ = ~(uint)uVar54 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar97._12_4_ =
         ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar136._0_8_ = uVar50 & (ulonglong)(auVar102._0_8_ * dVar118);
    uVar42 = uVar54 & (ulonglong)(auVar102._8_8_ * dVar80);
    auVar136._8_4_ = (undefined4)uVar42;
    auVar136._12_4_ = (undefined4)(uVar42 >> 0x20);
    auVar143._0_4_ = ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar143._4_4_ =
         ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar143._8_4_ = ~(uint)uVar54 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar143._12_4_ =
         ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar84);
    auVar98._0_8_ = (ulonglong)(auVar84._0_8_ * dVar81) & uVar50;
    uVar54 = (ulonglong)(auVar84._8_8_ * dVar99) & uVar54;
    auVar98._8_4_ = (undefined4)uVar54;
    auVar98._12_4_ = (undefined4)(uVar54 >> 0x20);
    if ((uVar41 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar39 * 0x70 + 0x10) = auVar136 | auVar97;
    *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar39 * 0x70 + 0x20) = auVar143 | auVar98;
    (this->OldBaseTransform).Rotation.XY.m128d_f64[0] = local_328.Rotation.XY.m128d_f64[0];
    (this->OldBaseTransform).Rotation.XY.m128d_f64[1] = local_328.Rotation.XY.m128d_f64[1];
    (this->OldBaseTransform).Rotation.ZW.m128d_f64[0] = local_328.Rotation.ZW.m128d_f64[0];
    (this->OldBaseTransform).Rotation.ZW.m128d_f64[1] = local_328.Rotation.ZW.m128d_f64[1];
    (this->OldBaseTransform).Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
    (this->OldBaseTransform).Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
    (this->OldBaseTransform).Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
    (this->OldBaseTransform).Translation.ZW.m128d_f64[1] = local_328.Translation.ZW.m128d_f64[1];
    (this->OldBaseTransform).Scale3D.XY.m128d_f64[0] = local_328.Scale3D.XY.m128d_f64[0];
    (this->OldBaseTransform).Scale3D.XY.m128d_f64[1] = local_328.Scale3D.XY.m128d_f64[1];
    (this->OldBaseTransform).Scale3D.ZW.m128d_f64[0] = local_328.Scale3D.ZW.m128d_f64[0];
    (this->OldBaseTransform).Scale3D.ZW.m128d_f64[1] = local_328.Scale3D.ZW.m128d_f64[1];
  }
  if ((local_820.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_820.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_820.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_820.StatId,CycleScopeEnd);
  }
  local_820.EmittedEvent = '\0';
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146446c30

void __thiscall FAnimNode_Trail::GatherDebugData(FAnimNode_Trail *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Trail::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail,(UObject *)pUVar1,
                         L"AnimNode_Trail");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Trail.OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_48,"(",1);
  ::FString::PrintfImpl(&local_58,L"Alpha: %.1f%%");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->TrailBone).BoneName,local_38);
  ::FString::PrintfImpl(&local_58,L" Active: %s)");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetAlignVector @ 146447550

TVector<double> * __thiscall
FAnimNode_Trail::GetAlignVector
          (FAnimNode_Trail *this,TVector<double> *__return_storage_ptr__,Type param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 == X) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    dVar1 = __real_bff0000000000000;
    dVar2 = __real_8000000000000000;
    dVar3 = __real_8000000000000000;
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    if (param_1 == Y) {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      dVar1 = __real_8000000000000000;
      dVar2 = __real_bff0000000000000;
      dVar3 = __real_8000000000000000;
    }
    else {
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
      dVar1 = __real_8000000000000000;
      dVar2 = __real_8000000000000000;
      dVar3 = __real_bff0000000000000;
    }
  }
  if (param_2) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3;
  }
  return __return_storage_ptr__;
}

// InitializeBoneReferences @ 146457da0

void __thiscall
FAnimNode_Trail::InitializeBoneReferences(FAnimNode_Trail *this,FBoneContainer *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FBoneReference *this_00;
  int iVar10;
  FBoneReference *pFVar11;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Trail::InitializeBoneReferences");
  FBoneReference::Initialize(&this->TrailBone,param_1);
  FBoneReference::Initialize(&this->BaseJoint,param_1);
  pTVar3 = &this->ChainBoneIndices;
  piVar1 = &(this->ChainBoneIndices).ArrayMax;
  (this->ChainBoneIndices).ArrayNum = 0;
  piVar2 = &(this->ChainBoneIndices).ArrayNum;
  if ((this->ChainBoneIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  if ((1 < this->ChainLength) &&
     (bVar5 = FBoneReference::IsValidToEvaluate(&this->TrailBone,param_1), bVar5)) {
    iVar7 = this->ChainLength;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar7,&pTVar3->AllocatorInstance,piVar2,piVar1);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 4,0,(longlong)iVar7 << 2);
    uVar9 = this->ChainLength - 1;
    iVar7 = (this->TrailBone).BoneIndex;
    uVar8 = 0;
    if ((int)uVar9 < *piVar2) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar10 = 1;
    *(int *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar9 * 4) = iVar7;
    iVar6 = this->ChainLength;
    if (1 < iVar6) {
      do {
        uVar8 = (iVar6 - iVar10) - 1;
        if (iVar7 + 1U < 2) {
          uVar9 = 0;
          if ((int)uVar8 < *piVar2) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = 0xffffffff;
        }
        else {
          iVar7 = FBoneContainer::GetParentBoneIndex(param_1,iVar7);
          uVar9 = 0;
          if ((int)uVar8 < *piVar2) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar8 * 4) = iVar7;
        }
        iVar6 = this->ChainLength;
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
  }
  iVar7 = (this->PlanarLimits).ArrayNum;
  this_00 = (FBoneReference *)(this->PlanarLimits).AllocatorInstance.Data;
  pFVar11 = this_00 + (longlong)iVar7 * 7;
  while( true ) {
    if ((this->PlanarLimits).ArrayNum != iVar7) {
      `TCheckedPointerIterator<FAnimPhysPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar11) break;
    FBoneReference::Initialize(this_00,param_1);
    this_00 = this_00 + 7;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 14645a730

void __thiscall
FAnimNode_Trail::Initialize_AnyThread(FAnimNode_Trail *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<FPerJointTrailSetup,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FRichCurve *this_00;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Trail::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  pTVar3 = &this->PerJointTrailData;
  uVar11 = 0;
  piVar1 = &(this->PerJointTrailData).ArrayMax;
  (this->PerJointTrailData).ArrayNum = 0;
  piVar2 = &(this->PerJointTrailData).ArrayNum;
  if ((this->PerJointTrailData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  piVar4 = &(this->TrailBoneLocations).ArrayMax;
  (this->TrailBoneLocations).ArrayNum = 0;
  if (*piVar4 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TrailBoneLocations).AllocatorInstance,0,piVar4);
  }
  iVar5 = this->ChainLength;
  if (1 < iVar5) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar5,&pTVar3->AllocatorInstance,piVar2,piVar1);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 4,0,(longlong)iVar5 << 2);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->TrailBoneLocations,this->ChainLength);
    if (this->ChainLength < 2) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = __real_3f800000 / (float)(this->ChainLength + -1);
    }
    this_00 = FRuntimeFloatCurve::GetRichCurveConst(&this->TrailRelaxationSpeed);
    if ((this_00 == (FRichCurve *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TrailRelaxRichCurve",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_Trail.cpp"
                           ,499,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = uVar11;
    if (0 < this->ChainLength) {
      do {
        uVar10 = (uint)uVar11;
        fVar13 = FRichCurve::Eval(this_00,(float)(int)uVar10 * fVar14,0.0);
        uVar9 = 0;
        if ((int)uVar10 < *piVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        *(float *)((pTVar3->AllocatorInstance).Data + uVar12) = fVar13;
        uVar12 = uVar12 + 4;
      } while ((int)(uVar10 + 1) < this->ChainLength);
    }
  }
  (this->RelaxationSpeedScaleInputProcessor).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bd80

bool __thiscall
FAnimNode_Trail::IsValidToEvaluate(FAnimNode_Trail *this,USkeleton *param_1,FBoneContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 local_res8 [8];
  
  bVar6 = FBoneReference::IsValidToEvaluate(&this->TrailBone,param_2);
  if (bVar6) {
    pFVar8 = (this->ChainBoneIndices).AllocatorInstance.Data;
    iVar2 = (this->ChainBoneIndices).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ChainBoneIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) goto LAB_14645be84;
      uVar3 = *(uint *)pFVar8;
      if (uVar3 == 0xffffffff) break;
      if ((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      if ((param_2->BoneSwitchArray).NumBits <= (int)(uVar3 & 0xffff)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      FVar4 = (param_2->BoneSwitchArray).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&param_2->BoneSwitchArray;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar4;
      }
      if ((*(uint *)((longlong)FVar9 + (ulonglong)(ushort)((ushort)uVar3 >> 5) * 4) >>
           (uVar3 & 0x1f) & 1) == 0) break;
      pFVar8 = pFVar8 + 4;
    }
    bVar6 = false;
  }
  else {
LAB_14645be84:
    bVar6 = 0 < (this->ChainBoneIndices).ArrayNum;
  }
  return bVar6;
}

// PostLoad @ 1464602b0

void __thiscall FAnimNode_Trail::PostLoad(FAnimNode_Trail *this)

{
  return;
}

// UpdateInternal @ 146474b20

void __thiscall
FAnimNode_Trail::UpdateInternal(FAnimNode_Trail *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_Trail::UpdateInternal");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  this->ThisTimstep = param_1->DeltaTime + this->ThisTimstep;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Active Bone",&(this->TrailBone).BoneName);
  FStatsHierarchical::EndMeasurement();
  return;
}

