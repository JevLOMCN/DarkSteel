// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 40

// StaticStruct @ 14de3b5a0

UScriptStruct * __cdecl FAnimNode_KawaiiPhysics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics,(UObject *)pUVar1,
                         L"AnimNode_KawaiiPhysics");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_KawaiiPhysics.OuterSingleton;
}

// FAnimNode_KawaiiPhysics @ 14de3d290

FAnimNode_KawaiiPhysics * __thiscall
FAnimNode_KawaiiPhysics::FAnimNode_KawaiiPhysics(FAnimNode_KawaiiPhysics *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  fVar2 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x100;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)&this->_padding_,fVar2);
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41200000;
  this->_padding_ = 0x41200000;
  this->_padding_ = 0;
  this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_KawaiiPhysics__6B_;
  (this->RootBone).BoneName.ComparisonIndex = 0;
  (this->RootBone).BoneName.Number = 0;
  puVar1 = &(this->RootBone).field_0x8;
  (this->RootBone).BoneIndex = -1;
  (this->RootBone).bUseSkeletonIndex = 0;
  (this->RootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->ExcludeBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludeBones).ArrayNum = 0;
  (this->ExcludeBones).ArrayMax = 0;
  this->TargetFramerate = 0x3c;
  this->OverrideTargetFramerate = false;
  this->bNeedWarmUp = false;
  this->WarmUpFrames = 0;
  (this->PhysicsSettings).Damping = 0.1;
  (this->PhysicsSettings).WorldDampingLocation = 0.8;
  (this->PhysicsSettings).WorldDampingRotation = 0.8;
  (this->PhysicsSettings).Stiffness = 0.05;
  (this->PhysicsSettings).Radius = 3.0;
  (this->PhysicsSettings).LimitAngle = 0.0;
  this->DampingCurve_DEPRECATED = (UCurveFloat *)0x0;
  this->WorldDampingLocationCurve_DEPRECATED = (UCurveFloat *)0x0;
  this->WorldDampingRotationCurve_DEPRECATED = (UCurveFloat *)0x0;
  this->StiffnessCurve_DEPRECATED = (UCurveFloat *)0x0;
  this->RadiusCurve_DEPRECATED = (UCurveFloat *)0x0;
  this->LimitAngleCurve_DEPRECATED = (UCurveFloat *)0x0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->DampingCurveData);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->WorldDampingLocationCurveData);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->WorldDampingRotationCurveData);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->StiffnessCurveData);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->RadiusCurveData);
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->LimitAngleCurveData);
  this->bUpdatePhysicsSettingsInGame = true;
  this->DummyBoneLength = 0.0;
  this->BoneForwardAxis = X_Positive;
  this->PlanarConstraint = None;
  this->ResetBoneTransformWhenBoneNotFound = false;
  (this->SphericalLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphericalLimits).ArrayNum = 0;
  (this->SphericalLimits).ArrayMax = 0;
  (this->CapsuleLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleLimits).ArrayNum = 0;
  (this->CapsuleLimits).ArrayMax = 0;
  (this->PlanarLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimits).ArrayNum = 0;
  (this->PlanarLimits).ArrayMax = 0;
  this->BoneConstraintGlobalComplianceType = Leather;
  this->BoneConstraintIterationCountBeforeCollision = 0;
  this->BoneConstraintIterationCountAfterCollision = 0;
  this->bAutoAddChildDummyBoneConstraint = true;
  (this->BoneConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneConstraints).ArrayNum = 0;
  (this->BoneConstraints).ArrayMax = 0;
  (this->BoneConstraintsDataAsset).field0_0x0.DebugPtr =
       (UKawaiiPhysicsBoneConstraintsDataAsset *)0x0;
  (this->BoneConstraintsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneConstraintsData).ArrayNum = 0;
  (this->BoneConstraintsData).ArrayMax = 0;
  (this->MergedBoneConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MergedBoneConstraints).ArrayNum = 0;
  (this->MergedBoneConstraints).ArrayMax = 0;
  (this->LimitsDataAsset).field0_0x0.DebugPtr = (UKawaiiPhysicsLimitsDataAsset *)0x0;
  (this->SphericalLimitsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphericalLimitsData).ArrayNum = 0;
  (this->SphericalLimitsData).ArrayMax = 0;
  (this->CapsuleLimitsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CapsuleLimitsData).ArrayNum = 0;
  (this->CapsuleLimitsData).ArrayMax = 0;
  (this->PlanarLimitsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimitsData).ArrayNum = 0;
  (this->PlanarLimitsData).ArrayMax = 0;
  this->TeleportDistanceThreshold = 300.0;
  this->TeleportRotationThreshold = 10.0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Gravity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Gravity).field0_0x0._s_0.Y = (double)uVar10;
  (this->Gravity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bEnableWind = false;
  this->WindScale = 1.0;
  this->bAllowWorldCollision = false;
  this->bOverrideCollisionParams = false;
  FBodyInstance::FBodyInstance(&this->CollisionChannelSettings);
  (this->IgnoreBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreBones).ArrayNum = 0;
  (this->IgnoreBones).ArrayMax = 0;
  (this->IgnoreBoneNamePrefix).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IgnoreBoneNamePrefix).ArrayNum = 0;
  (this->IgnoreBoneNamePrefix).ArrayMax = 0;
  (this->ModifyBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifyBones).ArrayNum = 0;
  (this->ModifyBones).ArrayMax = 0;
  this->bIgnoreSelfComponent = true;
  this->TotalBoneLength = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->PreSkelCompTransform).Scale3D.ZW.m128d_f64 = auVar9;
  this->bInitPhysicsSettings = false;
  this->DeltaTime = 0.0;
  this->DeltaTimeOld = 0.0;
  this->bResetDynamics = false;
  return this;
}

// ~FAnimNode_KawaiiPhysics @ 14de3daa0

void __thiscall FAnimNode_KawaiiPhysics::~FAnimNode_KawaiiPhysics(FAnimNode_KawaiiPhysics *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FKawaiiPhysicsModifyBone,int>
            ((FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data,
             (this->ModifyBones).ArrayNum);
  pFVar1 = (this->ModifyBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreBoneNamePrefix).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IgnoreBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBodyInstance::~FBodyInstance(&this->CollisionChannelSettings);
  pFVar1 = (this->PlanarLimitsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleLimitsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphericalLimitsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MergedBoneConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneConstraintsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlanarLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapsuleLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphericalLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LimitAngleCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->LimitAngleCurveData).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->LimitAngleCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->LimitAngleCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->LimitAngleCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->LimitAngleCurveData).EditorCurveData._padding_);
  pFVar1 = (this->RadiusCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->RadiusCurveData).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->RadiusCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->RadiusCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->RadiusCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RadiusCurveData).EditorCurveData._padding_);
  pFVar1 = (this->StiffnessCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->StiffnessCurveData).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->StiffnessCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->StiffnessCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->StiffnessCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StiffnessCurveData).EditorCurveData._padding_);
  pFVar1 = (this->WorldDampingRotationCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WorldDampingRotationCurveData).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->WorldDampingRotationCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->WorldDampingRotationCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->WorldDampingRotationCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WorldDampingRotationCurveData).EditorCurveData._padding_);
  pFVar1 = (this->WorldDampingLocationCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->WorldDampingLocationCurveData).EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->WorldDampingLocationCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->WorldDampingLocationCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->WorldDampingLocationCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->WorldDampingLocationCurveData).EditorCurveData._padding_);
  pFVar1 = (this->DampingCurveData).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DampingCurveData).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->DampingCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->DampingCurveData).EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->DampingCurveData).EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DampingCurveData).EditorCurveData._padding_);
  pFVar1 = (this->ExcludeBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14de3e100

FAnimNode_KawaiiPhysics * __thiscall
FAnimNode_KawaiiPhysics::operator=(FAnimNode_KawaiiPhysics *this,FAnimNode_KawaiiPhysics *param_1)

{
  int *piVar1;
  longlong *plVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKawaiiPhysicsModifyBone,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *_Src;
  UKawaiiPhysicsBoneConstraintsDataAsset *pUVar9;
  UKawaiiPhysicsLimitsDataAsset *pUVar10;
  FScriptContainerElement *_Src_00;
  FKawaiiPhysicsModifyBone *pFVar11;
  longlong lVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  this->_padding_ = param_1->_padding_;
  lVar12 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar12;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  plVar2 = &this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar12 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar12;
  lVar12 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar12;
  lVar12 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar12;
  if (plVar2 != &param_1->_padding_) {
    iVar8 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    _Src = (void *)param_1->_padding_;
    iVar5 = *piVar1;
    *(int *)&this->_padding_ = iVar8;
    if ((iVar8 == 0) && (iVar5 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar8,iVar5,(ForAnyElementType *)plVar2,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((void *)*plVar2,_Src,(longlong)iVar8 * 0x70);
      }
    }
  }
  (this->RootBone).BoneName = (param_1->RootBone).BoneName;
  uVar6 = *(undefined4 *)&(param_1->RootBone).field_0x8;
  *(uint *)&(this->RootBone).field_0x8 =
       (uVar6 ^ *(uint *)&(this->RootBone).field_0x8) & 0x80000000 ^ uVar6;
  uVar7 = *(undefined4 *)&(param_1->RootBone).field_0x8;
  *(uint *)&(this->RootBone).field_0x8 =
       (SPULL(uVar6,0,0x1f) ^ SPULL(uVar7,0,0x1f)) & 0x7fffffffU ^ uVar7;
  (this->RootBone).CachedCompactPoseIndex = (param_1->RootBone).CachedCompactPoseIndex;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->ExcludeBones,&param_1->ExcludeBones);
  this->TargetFramerate = param_1->TargetFramerate;
  this->OverrideTargetFramerate = param_1->OverrideTargetFramerate;
  this->bNeedWarmUp = param_1->bNeedWarmUp;
  this->WarmUpFrames = param_1->WarmUpFrames;
  fVar14 = (param_1->PhysicsSettings).WorldDampingLocation;
  fVar15 = (param_1->PhysicsSettings).WorldDampingRotation;
  fVar16 = (param_1->PhysicsSettings).Stiffness;
  (this->PhysicsSettings).Damping = (param_1->PhysicsSettings).Damping;
  (this->PhysicsSettings).WorldDampingLocation = fVar14;
  (this->PhysicsSettings).WorldDampingRotation = fVar15;
  (this->PhysicsSettings).Stiffness = fVar16;
  fVar14 = (param_1->PhysicsSettings).LimitAngle;
  (this->PhysicsSettings).Radius = (param_1->PhysicsSettings).Radius;
  (this->PhysicsSettings).LimitAngle = fVar14;
  this->DampingCurve_DEPRECATED = param_1->DampingCurve_DEPRECATED;
  this->WorldDampingLocationCurve_DEPRECATED = param_1->WorldDampingLocationCurve_DEPRECATED;
  this->WorldDampingRotationCurve_DEPRECATED = param_1->WorldDampingRotationCurve_DEPRECATED;
  this->StiffnessCurve_DEPRECATED = param_1->StiffnessCurve_DEPRECATED;
  this->RadiusCurve_DEPRECATED = param_1->RadiusCurve_DEPRECATED;
  this->LimitAngleCurve_DEPRECATED = param_1->LimitAngleCurve_DEPRECATED;
  FRuntimeFloatCurve::operator=(&this->DampingCurveData,&param_1->DampingCurveData);
  FRuntimeFloatCurve::operator=
            (&this->WorldDampingLocationCurveData,&param_1->WorldDampingLocationCurveData);
  FRuntimeFloatCurve::operator=
            (&this->WorldDampingRotationCurveData,&param_1->WorldDampingRotationCurveData);
  FRuntimeFloatCurve::operator=(&this->StiffnessCurveData,&param_1->StiffnessCurveData);
  FRuntimeFloatCurve::operator=(&this->RadiusCurveData,&param_1->RadiusCurveData);
  FRuntimeFloatCurve::operator=(&this->LimitAngleCurveData,&param_1->LimitAngleCurveData);
  this->bUpdatePhysicsSettingsInGame = param_1->bUpdatePhysicsSettingsInGame;
  this->DummyBoneLength = param_1->DummyBoneLength;
  this->BoneForwardAxis = param_1->BoneForwardAxis;
  this->PlanarConstraint = param_1->PlanarConstraint;
  this->ResetBoneTransformWhenBoneNotFound = param_1->ResetBoneTransformWhenBoneNotFound;
  TArray<FSphericalLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->SphericalLimits,&param_1->SphericalLimits);
  TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->CapsuleLimits,&param_1->CapsuleLimits);
  TArray<FPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->PlanarLimits,&param_1->PlanarLimits);
  this->BoneConstraintGlobalComplianceType = param_1->BoneConstraintGlobalComplianceType;
  this->BoneConstraintIterationCountBeforeCollision =
       param_1->BoneConstraintIterationCountBeforeCollision;
  this->BoneConstraintIterationCountAfterCollision =
       param_1->BoneConstraintIterationCountAfterCollision;
  this->bAutoAddChildDummyBoneConstraint = param_1->bAutoAddChildDummyBoneConstraint;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneConstraints,&param_1->BoneConstraints);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 = (param_1->BoneConstraintsDataAsset).field0_0x0.DebugPtr,
     pUVar9 != (UKawaiiPhysicsBoneConstraintsDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->BoneConstraintsDataAsset).field0_0x0 = (param_1->BoneConstraintsDataAsset).field0_0x0;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>::operator=
            (&this->BoneConstraintsData,&param_1->BoneConstraintsData);
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>::operator=
            (&this->MergedBoneConstraints,&param_1->MergedBoneConstraints);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 = (param_1->LimitsDataAsset).field0_0x0.DebugPtr,
     pUVar10 != (UKawaiiPhysicsLimitsDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->LimitsDataAsset).field0_0x0 = (param_1->LimitsDataAsset).field0_0x0;
  TArray<FSphericalLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->SphericalLimitsData,&param_1->SphericalLimitsData);
  TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->CapsuleLimitsData,&param_1->CapsuleLimitsData);
  TArray<FPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->PlanarLimitsData,&param_1->PlanarLimitsData);
  this->TeleportDistanceThreshold = param_1->TeleportDistanceThreshold;
  this->TeleportRotationThreshold = param_1->TeleportRotationThreshold;
  dVar13 = (param_1->Gravity).field0_0x0._s_0.Y;
  (this->Gravity).field0_0x0._s_0.X = (param_1->Gravity).field0_0x0._s_0.X;
  (this->Gravity).field0_0x0._s_0.Y = dVar13;
  (this->Gravity).field0_0x0._s_0.Z = (param_1->Gravity).field0_0x0._s_0.Z;
  this->bEnableWind = param_1->bEnableWind;
  this->WindScale = param_1->WindScale;
  this->bAllowWorldCollision = param_1->bAllowWorldCollision;
  this->bOverrideCollisionParams = param_1->bOverrideCollisionParams;
  FBodyInstance::operator=(&this->CollisionChannelSettings,&param_1->CollisionChannelSettings);
  this->bIgnoreSelfComponent = param_1->bIgnoreSelfComponent;
  TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
            (&this->IgnoreBones,&param_1->IgnoreBones);
  pTVar3 = &this->IgnoreBoneNamePrefix;
  if (pTVar3 != &param_1->IgnoreBoneNamePrefix) {
    iVar8 = (param_1->IgnoreBoneNamePrefix).ArrayNum;
    piVar1 = &(this->IgnoreBoneNamePrefix).ArrayMax;
    _Src_00 = (param_1->IgnoreBoneNamePrefix).AllocatorInstance.Data;
    (this->IgnoreBoneNamePrefix).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar8,*piVar1,&pTVar3->AllocatorInstance,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src_00,(longlong)iVar8 << 3);
      }
    }
  }
  pTVar4 = &this->ModifyBones;
  if (pTVar4 != &param_1->ModifyBones) {
    DestructItems<FKawaiiPhysicsModifyBone,int>
              ((FKawaiiPhysicsModifyBone *)(pTVar4->AllocatorInstance).Data,
               (this->ModifyBones).ArrayNum);
    iVar8 = (param_1->ModifyBones).ArrayNum;
    piVar1 = &(this->ModifyBones).ArrayMax;
    pFVar11 = (FKawaiiPhysicsModifyBone *)(param_1->ModifyBones).AllocatorInstance.Data;
    (this->ModifyBones).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,iVar8,*piVar1,&pTVar4->AllocatorInstance,iVar8,piVar1);
      ConstructItems<FKawaiiPhysicsModifyBone,FKawaiiPhysicsModifyBone,int>
                ((pTVar4->AllocatorInstance).Data,pFVar11,iVar8);
    }
  }
  this->TotalBoneLength = param_1->TotalBoneLength;
  dVar13 = (param_1->PreSkelCompTransform).Rotation.XY.m128d_f64[1];
  (this->PreSkelCompTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Rotation.XY.m128d_f64[0];
  (this->PreSkelCompTransform).Rotation.XY.m128d_f64[1] = dVar13;
  dVar13 = (param_1->PreSkelCompTransform).Rotation.ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Rotation.ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[1] = dVar13;
  dVar13 = (param_1->PreSkelCompTransform).Translation.XY.m128d_f64[1];
  (this->PreSkelCompTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Translation.XY.m128d_f64[0];
  (this->PreSkelCompTransform).Translation.XY.m128d_f64[1] = dVar13;
  dVar13 = (param_1->PreSkelCompTransform).Translation.ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Translation.ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Translation.ZW.m128d_f64[1] = dVar13;
  dVar13 = (param_1->PreSkelCompTransform).Scale3D.XY.m128d_f64[1];
  (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Scale3D.XY.m128d_f64[0];
  (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[1] = dVar13;
  dVar13 = (param_1->PreSkelCompTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreSkelCompTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[1] = dVar13;
  this->bInitPhysicsSettings = param_1->bInitPhysicsSettings;
  dVar13 = (param_1->SkelCompMoveVector).field0_0x0._s_0.Y;
  (this->SkelCompMoveVector).field0_0x0._s_0.X = (param_1->SkelCompMoveVector).field0_0x0._s_0.X;
  (this->SkelCompMoveVector).field0_0x0._s_0.Y = dVar13;
  (this->SkelCompMoveVector).field0_0x0._s_0.Z = (param_1->SkelCompMoveVector).field0_0x0._s_0.Z;
  dVar13 = (param_1->SkelCompMoveRotation).Y;
  (this->SkelCompMoveRotation).X = (param_1->SkelCompMoveRotation).X;
  (this->SkelCompMoveRotation).Y = dVar13;
  dVar13 = (param_1->SkelCompMoveRotation).W;
  (this->SkelCompMoveRotation).Z = (param_1->SkelCompMoveRotation).Z;
  (this->SkelCompMoveRotation).W = dVar13;
  this->DeltaTime = param_1->DeltaTime;
  this->DeltaTimeOld = param_1->DeltaTimeOld;
  this->bResetDynamics = param_1->bResetDynamics;
  return this;
}

// AddModifyBone @ 14de3e980

/* WARNING: Type propagation algorithm not settling */

int __thiscall
FAnimNode_KawaiiPhysics::AddModifyBone
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          ,FReferenceSkeleton *param_3,int param_4)

{
  int *piVar1;
  TArray<FKawaiiPhysicsModifyBone,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName FVar4;
  FName *pFVar5;
  FKawaiiPhysicsModifyBone *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FName *pFVar15;
  TVector<double> *pTVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  FScriptContainerElement *local_2a8;
  longlong local_2a0;
  TTransform<double> *local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  FKawaiiPhysicsModifyBone local_258;
  double local_168;
  double dStack_160;
  double local_158;
  FKawaiiPhysicsModifyBone local_148;
  TVector<double> local_58;
  
  iVar12 = param_4;
  lVar19 = (longlong)param_4;
  if ((param_4 < 0) || (iVar3 = (param_3->FinalRefBoneInfo).ArrayNum, iVar3 < param_4)) {
    return -1;
  }
  uVar13 = 0;
  if (param_4 < iVar3) {
    uVar13 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  FVar4 = *(FName *)((param_3->FinalRefBoneInfo).AllocatorInstance.Data + lVar19 * 0xc);
  iVar3 = (this->ExcludeBones).ArrayNum;
  if (0 < iVar3) {
    pFVar5 = (FName *)(this->ExcludeBones).AllocatorInstance.Data;
    for (pFVar15 = pFVar5; pFVar15 != pFVar5 + (longlong)iVar3 * 2; pFVar15 = pFVar15 + 2) {
      if (*pFVar15 == FVar4) {
        if (-1 < (int)((longlong)pFVar15 - (longlong)pFVar5 >> 4)) {
          return -1;
        }
        break;
      }
    }
  }
  FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone(&local_258);
  uVar13 = 0xffffffff;
  local_258.BoneRef.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  local_258.BoneRef.bUseSkeletonIndex = 0;
  local_258.BoneRef.BoneIndex = -1;
  local_258.BoneRef.BoneName = FVar4;
  FBoneReference::Initialize(&local_258.BoneRef,param_2);
  if (local_258.BoneRef.CachedCompactPoseIndex == (FCompactPoseBoneIndex)0xffffffff)
  goto LAB_14de3f0c9;
  local_298 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,local_258.BoneRef.CachedCompactPoseIndex);
  pTVar2 = &this->ModifyBones;
  pFVar6 = (FKawaiiPhysicsModifyBone *)(pTVar2->AllocatorInstance).Data;
  local_258.Location.field0_0x0._s_0.X = (local_298->Translation).XY.m128d_f64[0];
  local_258.Location.field0_0x0._s_0.Y = (local_298->Translation).XY.m128d_f64[1];
  local_258.Location.field0_0x0._s_0.Z = (local_298->Translation).ZW.m128d_f64[0];
  local_258.PrevRotation.Z = (local_298->Rotation).ZW.m128d_f64[0];
  local_258.PrevRotation.W = (local_298->Rotation).ZW.m128d_f64[1];
  local_258.PrevRotation.X = (local_298->Rotation).XY.m128d_f64[0];
  local_258.PrevRotation.Y = (local_298->Rotation).XY.m128d_f64[1];
  local_280 = (local_298->Scale3D).ZW.m128d_f64[0];
  local_290 = (local_298->Scale3D).XY.m128d_f64[0];
  dStack_288 = (local_298->Scale3D).XY.m128d_f64[1];
  local_258.PrevLocation.field0_0x0._s_0.X = local_258.Location.field0_0x0._s_0.X;
  local_258.PrevLocation.field0_0x0._s_0.Y = local_258.Location.field0_0x0._s_0.Y;
  local_258.PrevLocation.field0_0x0._s_0.Z = local_258.Location.field0_0x0._s_0.Z;
  local_258.PoseLocation.field0_0x0._s_0.X = local_258.Location.field0_0x0._s_0.X;
  local_258.PoseLocation.field0_0x0._s_0.Y = local_258.Location.field0_0x0._s_0.Y;
  local_258.PoseLocation.field0_0x0._s_0.Z = local_258.Location.field0_0x0._s_0.Z;
  local_258.PoseRotation.X = local_258.PrevRotation.X;
  local_258.PoseRotation.Y = local_258.PrevRotation.Y;
  local_258.PoseRotation.Z = local_258.PrevRotation.Z;
  local_258.PoseRotation.W = local_258.PrevRotation.W;
  local_258.PoseScale.field0_0x0._s_0.X = local_290;
  local_258.PoseScale.field0_0x0._s_0.Y = dStack_288;
  local_258.PoseScale.field0_0x0._s_0.Z = local_280;
  local_168 = local_258.Location.field0_0x0._s_0.X;
  dStack_160 = local_258.Location.field0_0x0._s_0.Y;
  local_158 = local_258.Location.field0_0x0._s_0.Z;
  if (((pFVar6 <= &local_258) && (&local_258 < pFVar6 + (this->ModifyBones).ArrayMax)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    iVar12 = (*pcVar8)();
    return iVar12;
  }
  uVar13 = (this->ModifyBones).ArrayNum;
  if (uVar13 == (this->ModifyBones).ArrayMax) {
    uVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10f0,&pTVar2->AllocatorInstance,&(this->ModifyBones).ArrayMax);
  }
  (this->ModifyBones).ArrayNum = uVar13 + 1;
  local_2a0 = (longlong)(int)uVar13 * 0xf0;
  FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone
            ((FKawaiiPhysicsModifyBone *)((pTVar2->AllocatorInstance).Data + local_2a0),&local_258);
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.ArrayNum = 0;
  local_2b8.ArrayMax = 0;
  CollectChildBones(this,param_3,iVar12,&local_2b8);
  uVar17 = (ulonglong)local_2b8.ArrayNum;
  bVar11 = false;
  uVar21 = 0;
  if (local_2b8.ArrayNum < 1) {
LAB_14de3edc7:
    if (0.0 < this->DummyBoneLength) {
      FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone(&local_148);
      local_148.bDummy = true;
      pTVar16 = GetBoneForwardVector(this,&local_58,&local_258.PrevRotation);
      piVar1 = &(this->ModifyBones).ArrayMax;
      pFVar6 = (FKawaiiPhysicsModifyBone *)(pTVar2->AllocatorInstance).Data;
      dVar9 = (double)this->DummyBoneLength;
      dVar10 = dVar9 * (pTVar16->field0_0x0)._s_0.X + local_258.Location.field0_0x0._s_0.X;
      dVar24 = dVar9 * (pTVar16->field0_0x0)._s_0.Y + local_258.Location.field0_0x0._s_0.Y;
      local_148.Location.field0_0x0._s_0.Z =
           dVar9 * (pTVar16->field0_0x0)._s_0.Z + local_258.Location.field0_0x0._s_0.Z;
      uVar22 = SUB84(dVar24,0);
      uVar23 = (undefined4)((ulonglong)dVar24 >> 0x20);
      local_148.Location.field0_0x0._8_4_ = uVar22;
      local_148.Location.field0_0x0._0_8_ = dVar10;
      local_148.Location.field0_0x0._12_4_ = uVar23;
      local_148.PrevLocation.field0_0x0._8_4_ = uVar22;
      local_148.PrevLocation.field0_0x0._0_8_ = dVar10;
      local_148.PrevLocation.field0_0x0._12_4_ = uVar23;
      local_148.PoseLocation.field0_0x0._8_4_ = uVar22;
      local_148.PoseLocation.field0_0x0._0_8_ = dVar10;
      local_148.PoseLocation.field0_0x0._12_4_ = uVar23;
      local_148.PrevRotation.Z = local_258.PrevRotation.Z;
      local_148.PrevRotation.W = local_258.PrevRotation.W;
      local_148.PoseRotation.Z = local_258.PrevRotation.Z;
      local_148.PoseRotation.W = local_258.PrevRotation.W;
      local_268 = (local_298->Scale3D).ZW.m128d_f64[0];
      local_148.PrevRotation.X = local_258.PrevRotation.X;
      local_148.PrevRotation.Y = local_258.PrevRotation.Y;
      local_148.PoseRotation.X = local_258.PrevRotation.X;
      local_148.PoseRotation.Y = local_258.PrevRotation.Y;
      local_278 = (local_298->Scale3D).XY.m128d_f64[0];
      dStack_270 = (local_298->Scale3D).XY.m128d_f64[1];
      local_148.PrevLocation.field0_0x0._s_0.Z = local_148.Location.field0_0x0._s_0.Z;
      local_148.PoseLocation.field0_0x0._s_0.Z = local_148.Location.field0_0x0._s_0.Z;
      local_148.PoseScale.field0_0x0._s_0.X = local_278;
      local_148.PoseScale.field0_0x0._s_0.Y = dStack_270;
      local_148.PoseScale.field0_0x0._s_0.Z = local_268;
      if (((pFVar6 <= &local_148) && (&local_148 < pFVar6 + *piVar1)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      local_2c4 = (this->ModifyBones).ArrayNum;
      if (local_2c4 == *piVar1) {
        local_2c4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10f0,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ModifyBones).ArrayNum = local_2c4 + 1;
      FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone
                ((FKawaiiPhysicsModifyBone *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)local_2c4 * 0xf0),&local_148);
      uVar14 = uVar21;
      if ((int)uVar13 < (this->ModifyBones).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      lVar19 = local_2a0;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (((*(uint **)(pFVar7 + local_2a0 + 0x18) <= &local_2c4) &&
          (&local_2c4 < *(uint **)(pFVar7 + local_2a0 + 0x18) + *(int *)(pFVar7 + local_2a0 + 0x24))
          ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      iVar12 = *(int *)(pFVar7 + lVar19 + 0x20);
      if (iVar12 == *(int *)(pFVar7 + lVar19 + 0x24)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar7 + lVar19 + 0x18),
                            (int *)(pFVar7 + lVar19 + 0x24));
      }
      *(int *)(pFVar7 + lVar19 + 0x20) = iVar12 + 1;
      *(uint *)(*(longlong *)(pFVar7 + lVar19 + 0x18) + (longlong)iVar12 * 4) = local_2c4;
      lVar19 = (longlong)(int)local_2c4;
      if ((int)local_2c4 < (this->ModifyBones).ArrayNum) {
        uVar21 = ~local_2c4 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      *(uint *)((pTVar2->AllocatorInstance).Data + lVar19 * 0xf0 + 0x10) = uVar13;
      if (local_148.ChildIndexs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.ChildIndexs.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_2c0 = local_2b8.ArrayNum;
    local_2a8 = local_2b8.AllocatorInstance.Data + uVar17 * 4;
    uVar18 = uVar17;
    FVar20.Data = local_2b8.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar17 != (int)uVar18) {
        param_4 = param_4 & 0xffffff00;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_4);
      }
      if (FVar20.Data == local_2a8) break;
      local_2c8 = AddModifyBone(this,param_1,param_2,param_3,*(int *)FVar20.Data);
      if (-1 < (int)local_2c8) {
        uVar14 = 0;
        if ((int)uVar13 < (this->ModifyBones).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          iVar12 = (*pcVar8)();
          return iVar12;
        }
        lVar19 = local_2a0;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        if (((*(uint **)(pFVar7 + local_2a0 + 0x18) <= &local_2c8) &&
            (&local_2c8 <
             *(uint **)(pFVar7 + local_2a0 + 0x18) + *(int *)(pFVar7 + local_2a0 + 0x24))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          iVar12 = (*pcVar8)();
          return iVar12;
        }
        iVar12 = *(int *)(pFVar7 + lVar19 + 0x20);
        if (iVar12 == *(int *)(pFVar7 + lVar19 + 0x24)) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)(pFVar7 + lVar19 + 0x18),
                              (int *)(pFVar7 + lVar19 + 0x24));
        }
        *(int *)(pFVar7 + lVar19 + 0x20) = iVar12 + 1;
        *(uint *)(*(longlong *)(pFVar7 + lVar19 + 0x18) + (longlong)iVar12 * 4) = local_2c8;
        lVar19 = (longlong)(int)local_2c8;
        uVar14 = uVar21;
        if ((int)local_2c8 < (this->ModifyBones).ArrayNum) {
          uVar14 = ~local_2c8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          iVar12 = (*pcVar8)();
          return iVar12;
        }
        bVar11 = true;
        *(uint *)((pTVar2->AllocatorInstance).Data + lVar19 * 0xf0 + 0x10) = uVar13;
      }
      uVar17 = local_2b8._8_8_ & 0xffffffff;
      FVar20.Data = FVar20.Data + 4;
      uVar18 = (ulonglong)local_2c0;
    }
    if (!bVar11) goto LAB_14de3edc7;
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
LAB_14de3f0c9:
  if (local_258.ChildIndexs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.ChildIndexs.AllocatorInstance.Data);
  }
  return uVar13;
}

// AdjustByAngleLimit @ 14de3f110

void __thiscall
FAnimNode_KawaiiPhysics::AdjustByAngleLimit
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          ,TTransform<double> *param_3,FKawaiiPhysicsModifyBone *param_4,
          FKawaiiPhysicsModifyBone *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double extraout_XMM0_Qa;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double extraout_XMM0_Qb;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double local_f8;
  double local_f0;
  double local_e8;
  
  dVar14 = __real_3e45798ee0000000;
  dVar5 = __real_3ff0000000000000;
  if ((param_4->PhysicsSettings).LimitAngle != 0.0) {
    local_f8 = (param_4->Location).field0_0x0._s_0.Z - (param_5->Location).field0_0x0._s_0.Z;
    local_e8 = (param_4->Location).field0_0x0._s_0.X - (param_5->Location).field0_0x0._s_0.X;
    uVar1 = (param_4->Location).field0_0x0._s_0.Y - (param_5->Location).field0_0x0._s_0.Y;
    dVar10 = (double)uVar1 * (double)uVar1 + local_e8 * local_e8 + local_f8 * local_f8;
    if (dVar10 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar10) {
        dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
        local_e8 = local_e8 * dVar10;
        local_f8 = local_f8 * dVar10;
        uVar1 = (double)uVar1 * dVar10;
      }
      else {
        local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
    }
    dVar10 = (param_4->PoseLocation).field0_0x0._s_0.X - (param_5->PoseLocation).field0_0x0._s_0.X;
    dVar15 = (param_4->PoseLocation).field0_0x0._s_0.Y - (param_5->PoseLocation).field0_0x0._s_0.Y;
    dVar18 = (param_4->PoseLocation).field0_0x0._s_0.Z - (param_5->PoseLocation).field0_0x0._s_0.Z;
    dVar11 = dVar15 * dVar15 + dVar10 * dVar10 + dVar18 * dVar18;
    uVar16 = dVar15;
    uVar17 = 0;
    uVar19 = dVar18;
    uVar4 = dVar10;
    if ((dVar11 != __real_3ff0000000000000) &&
       (uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
       uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar11)) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      uVar16 = dVar15 * dVar11;
      uVar17 = 0;
      uVar19 = dVar18 * dVar11;
      uVar4 = dVar10 * dVar11;
    }
    uVar2 = (double)uVar16 * local_f8 - (double)uVar19 * (double)uVar1;
    uVar3 = (double)uVar19 * local_e8 - (double)uVar4 * local_f8;
    local_f0 = (double)uVar4 * (double)uVar1 - (double)uVar16 * local_e8;
    auVar6._8_4_ = (int)uVar17;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
    auVar7._8_8_ = auVar6._8_8_;
    auVar7._0_8_ = (double)uVar2 * (double)uVar2;
    dVar10 = (double)uVar3 * (double)uVar3 + auVar7._0_8_ + local_f0 * local_f0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar10;
    auVar8 = sqrtpd(auVar7,auVar8);
    dVar11 = FGenericPlatformMath::Atan2
                       (auVar8._0_8_,
                        (double)uVar16 * (double)uVar1 + (double)uVar4 * local_e8 +
                        (double)uVar19 * local_f8);
    if (__real_00000000 < (float)dVar11 * __real_42652ee0 - (param_4->PhysicsSettings).LimitAngle) {
      if (dVar10 != dVar5) {
        if (dVar14 <= dVar10) {
          dVar14 = dVar5 / SQRT(dVar10);
          local_f0 = local_f0 * dVar14;
          uVar3 = (double)uVar3 * dVar14;
          uVar2 = (double)uVar2 * dVar14;
        }
        else {
          local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
      }
      __libm_sse2_sincos_();
      dVar9 = (param_4->Location).field0_0x0._s_0.X - (param_5->Location).field0_0x0._s_0.X;
      dVar14 = (param_5->Location).field0_0x0._s_0.Y;
      dVar10 = (param_5->Location).field0_0x0._s_0.Z;
      dVar12 = (param_4->Location).field0_0x0._s_0.Y - dVar14;
      dVar5 = dVar5 - extraout_XMM0_Qb;
      dVar11 = (double)uVar2 * local_f0 * dVar5;
      dVar15 = local_f0 * (double)uVar3 * dVar5;
      dVar20 = (double)uVar2 * (double)uVar3 * dVar5;
      dVar18 = (param_4->Location).field0_0x0._s_0.Z - dVar10;
      auVar13._0_8_ = dVar12 * dVar12 + dVar9 * dVar9 + dVar18 * dVar18;
      auVar13._8_8_ = 0;
      auVar8 = sqrtpd(auVar13,auVar13);
      dVar18 = auVar8._0_8_;
      (param_4->Location).field0_0x0._s_0.X =
           (((double)uVar2 * (double)uVar2 * dVar5 + extraout_XMM0_Qb) * local_e8 +
            (dVar20 - local_f0 * extraout_XMM0_Qa) * (double)uVar1 +
           (dVar11 + (double)uVar3 * extraout_XMM0_Qa) * local_f8) * dVar18 +
           (param_5->Location).field0_0x0._s_0.X;
      (param_4->Location).field0_0x0._s_0.Y =
           (((double)uVar3 * (double)uVar3 * dVar5 + extraout_XMM0_Qb) * (double)uVar1 +
            (dVar20 + local_f0 * extraout_XMM0_Qa) * local_e8 +
           (dVar15 - (double)uVar2 * extraout_XMM0_Qa) * local_f8) * dVar18 + dVar14;
      (param_4->Location).field0_0x0._s_0.Z =
           ((dVar15 + (double)uVar2 * extraout_XMM0_Qa) * (double)uVar1 +
            (dVar11 - (double)uVar3 * extraout_XMM0_Qa) * local_e8 +
           (local_f0 * local_f0 * dVar5 + extraout_XMM0_Qb) * local_f8) * dVar18 + dVar10;
    }
  }
  return;
}

// AdjustByBoneConstraints @ 14de3f610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimNode_KawaiiPhysics::AdjustByBoneConstraints(FAnimNode_KawaiiPhysics *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByBoneConstraint> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  ulonglong uVar24;
  FStatMessage *pFVar25;
  FNameEntryId FVar26;
  uint uVar27;
  FName FVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement FVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 local_res8 [8];
  FColor_u_0 local_res10 [2];
  uint local_res18;
  FName local_148;
  uint local_140;
  uint uStack_13c;
  FName local_138;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  FScriptContainerElement *local_110;
  FStatMessage local_108;
  FStatMessage local_f8;
  FStatMessage local_e8;
  FName local_d8 [19];
  
  fVar16 = __real_40000000;
  dVar15 = __real_3ff0000000000000;
  pFVar29 = (this->MergedBoneConstraints).AllocatorInstance.Data;
  local_res18 = (this->MergedBoneConstraints).ArrayNum;
  uVar24 = (ulonglong)(int)local_res18;
  local_110 = pFVar29 + uVar24 * 0x38;
LAB_14de3f6a4:
  do {
    pFVar3 = local_110;
    if ((this->MergedBoneConstraints).ArrayNum != (int)uVar24) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar29 == pFVar3) {
      return;
    }
    FVar21 = StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint;
    if (StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint ==
        (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByBoneConstraint>)0x0) {
      pFVar20 = ::FName::FName(local_d8,"STAT_KawaiiPhysics_AdjustByBoneConstraint");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByBoneConstraint>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_KawaiiPhysics_AdjustByBoneConstraint,*pFVar20,
                          L"KawaiiPhysics_AdjustByBoneConstraint","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar21;
    bVar12 = false;
    bVar14 = false;
    local_138.ComparisonIndex.Value = 0;
    local_138.Number = 0;
    FVar26 = FVar28.ComparisonIndex.Value;
    uVar27 = FVar28.Number;
    if ((FVar26.Value == 0) && (uVar27 == 0)) {
LAB_14de3f7ee:
      bVar13 = false;
      FVar28 = local_138;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res10[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
        bVar12 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = FVar26.Value;
          local_148.Number = uVar27;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                     ,0x3f2);
          bVar12 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14de3f7ee;
      local_140 = FVar26.Value;
      uStack_13c = uVar27;
      local_138 = FVar28;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar13 = true;
    }
    FVar26 = FVar28.ComparisonIndex.Value;
    uVar27 = FVar28.Number;
    if (0.0 < *(float *)(pFVar29 + 0x2c)) {
      uVar2 = *(uint *)(pFVar29 + 0x24);
      uVar18 = 0;
      if ((int)uVar2 < (this->ModifyBones).ArrayNum) {
        uVar18 = ~uVar2 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar18 = *(uint *)(pFVar29 + 0x28);
      pFVar3 = (this->ModifyBones).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar18 < (this->ModifyBones).ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->ModifyBones).AllocatorInstance.Data;
      if (pFVar29[0x20] == (FScriptContainerElement)0x0) {
        FVar30 = (FScriptContainerElement)this->BoneConstraintGlobalComplianceType;
      }
      else {
        FVar30 = pFVar29[0x21];
      }
      dVar7 = *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x40) -
              *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x40);
      dVar9 = *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x48) -
              *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x48);
      dVar11 = *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x50) -
               *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x50);
      auVar31._0_8_ = dVar7 * dVar7;
      auVar31._8_8_ = 0;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar9 * dVar9 + auVar31._0_8_ + dVar11 * dVar11;
      auVar32 = sqrtpd(auVar31,auVar32);
      fVar36 = (float)auVar32._0_8_;
      if (0.0 < fVar36) {
        fVar35 = *(float *)(pFVar29 + 0x2c);
        if ((XPBDComplianceValues.ArrayNum <= (int)(uint)(byte)FVar30) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar33 = *(float *)(XPBDComplianceValues.AllocatorInstance.Data +
                           (ulonglong)(byte)FVar30 * 4) / (this->DeltaTime * this->DeltaTime);
        fVar35 = ((fVar36 - fVar35) - fVar33 * *(float *)(pFVar29 + 0x34)) / (fVar33 + fVar16);
        dVar6 = dVar15 / (double)fVar36;
        dVar34 = (double)fVar35;
        dVar8 = dVar7 * dVar6 * dVar34;
        dVar10 = dVar9 * dVar6 * dVar34;
        dVar34 = dVar11 * dVar6 * dVar34;
        *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x40) =
             dVar8 + *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x40);
        *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x48) =
             dVar10 + *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x48);
        *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x50) =
             dVar34 + *(double *)(pFVar3 + (longlong)(int)uVar2 * 0xf0 + 0x50);
        dVar7 = *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x48);
        *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x40) =
             *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x40) - dVar8;
        dVar9 = *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x50);
        *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x48) = dVar7 - dVar10;
        *(double *)(pFVar4 + (longlong)(int)uVar18 * 0xf0 + 0x50) = dVar9 - dVar34;
        *(float *)(pFVar29 + 0x34) = fVar35 + *(float *)(pFVar29 + 0x34);
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar13) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
            local_e8.NameAndInfo.Number = uVar27 & 0xffff6fff | 0x6000;
            local_e8.NameAndInfo.Index.Value = FVar26.Value;
            QueryPerformanceCounter(&local_118);
            local_e8.StatData.Pad[4] = '\0';
            local_e8.StatData.Pad[5] = '\0';
            local_e8.StatData.Pad[6] = '\0';
            local_e8.StatData.Pad[7] = '\0';
            local_e8.StatData.Pad[0] = local_118.s.LowPart._0_1_;
            local_e8.StatData.Pad[1] = local_118.s.LowPart._1_1_;
            local_e8.StatData.Pad[2] = local_118.s.LowPart._2_1_;
            local_e8.StatData.Pad[3] = local_118.s.LowPart._3_1_;
            pFVar25 = &local_e8;
            goto LAB_14de3fc6d;
          }
        }
      }
      else {
        if (bVar14) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar12) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((bVar13) && (FVar28 != (FName)0x0)) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar22 == (FThreadStats *)0x0) {
            pFVar23 = FThreadStatsPool::Get();
            pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
          }
          if (pFVar22->bWaitForExplicitFlush < pFVar22->ScopeCount) {
            local_f8.NameAndInfo.Number = uVar27 & 0xffff6fff | 0x6000;
            local_f8.NameAndInfo.Index.Value = FVar26.Value;
            QueryPerformanceCounter(&local_120);
            local_f8.StatData.Pad[4] = '\0';
            local_f8.StatData.Pad[5] = '\0';
            local_f8.StatData.Pad[6] = '\0';
            local_f8.StatData.Pad[7] = '\0';
            local_f8.StatData.Pad[0] = local_120.s.LowPart._0_1_;
            local_f8.StatData.Pad[1] = local_120.s.LowPart._1_1_;
            local_f8.StatData.Pad[2] = local_120.s.LowPart._2_1_;
            local_f8.StatData.Pad[3] = local_120.s.LowPart._3_1_;
            pFVar25 = &local_f8;
LAB_14de3fc6d:
            FThreadStats::AddStatMessage(pFVar22,pFVar25);
            piVar1 = &pFVar22->ScopeCount;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FThreadStats::Flush(pFVar22,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar22,false,false);
            }
          }
        }
      }
LAB_14de3fca7:
      pFVar29 = pFVar29 + 0x38;
      uVar24 = (ulonglong)local_res18;
      goto LAB_14de3f6a4;
    }
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((!bVar13) || (FVar28 == (FName)0x0)) ||
       ((FThreadStats::bPrimaryDisableForever != false || (FThreadStats::TlsSlot == 0xffffffff))))
    goto LAB_14de3fca7;
    pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar22 == (FThreadStats *)0x0) {
      pFVar23 = FThreadStatsPool::Get();
      pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
    }
    if (pFVar22->ScopeCount <= pFVar22->bWaitForExplicitFlush) goto LAB_14de3fca7;
    local_108.NameAndInfo.Number = uVar27 & 0xffff6fff | 0x6000;
    local_108.NameAndInfo.Index.Value = FVar26.Value;
    QueryPerformanceCounter(&local_128);
    local_108.StatData.Pad[4] = '\0';
    local_108.StatData.Pad[5] = '\0';
    local_108.StatData.Pad[6] = '\0';
    local_108.StatData.Pad[7] = '\0';
    local_108.StatData.Pad[0] = local_128.s.LowPart._0_1_;
    local_108.StatData.Pad[1] = local_128.s.LowPart._1_1_;
    local_108.StatData.Pad[2] = local_128.s.LowPart._2_1_;
    local_108.StatData.Pad[3] = local_128.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(pFVar22,&local_108);
    piVar1 = &pFVar22->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FThreadStats::Flush(pFVar22,false,false);
      uVar24 = (ulonglong)local_res18;
      pFVar29 = pFVar29 + 0x38;
    }
    else {
      if (FThreadStats::bIsRawStatsActive == false) goto LAB_14de3fca7;
      FThreadStats::FlushRawStats(pFVar22,false,false);
      uVar24 = (ulonglong)local_res18;
      pFVar29 = pFVar29 + 0x38;
    }
  } while( true );
}

// AdjustByCapsuleCollision @ 14de3fd30

void __thiscall
FAnimNode_KawaiiPhysics::AdjustByCapsuleCollision
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 local_res18 [16];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8 [7];
  
  dVar8 = __real_3fe0000000000000;
  dVar7 = __real_3e45798ee0000000;
  dVar6 = __real_3ff0000000000000;
  iVar3 = param_2->ArrayNum;
  pFVar9 = (param_2->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x90;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FCapsuleLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar9 == pFVar10) break;
    if (((pFVar9[0x80] != (FScriptContainerElement)0x0) && (0.0 < *(float *)(pFVar9 + 0x88))) &&
       (fVar11 = *(float *)(pFVar9 + 0x8c), 0.0 < fVar11)) {
      local_d8[0]._s_0.Z = dVar6;
      local_d8[0]._s_0.X = 0.0;
      local_d8[0]._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar9 + 0x60),(TVector<double> *)&local_f8._s_0,
                 (TVector<double> *)&local_d8[0]._s_0);
      dVar12 = *(double *)(pFVar9 + 0x40);
      dVar1 = *(double *)(pFVar9 + 0x48);
      dVar5 = (double)fVar11;
      dVar2 = *(double *)(pFVar9 + 0x50);
      local_d8[0]._s_0.Z = dVar6;
      local_110._s_0.X = dVar5 * local_f8._s_0.X * dVar8 + dVar12;
      local_110._s_0.Y = dVar5 * local_f8._s_0.Y * dVar8 + dVar1;
      local_110._s_0.Z = dVar5 * local_f8._s_0.Z * dVar8 + dVar2;
      local_d8[0]._s_0.X = 0.0;
      local_d8[0]._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar9 + 0x60),(TVector<double> *)&local_f8._s_0,
                 (TVector<double> *)&local_d8[0]._s_0);
      local_128._s_0.X = dVar12 - dVar5 * local_f8._s_0.X * dVar8;
      local_128._s_0.Z = dVar2 - dVar5 * local_f8._s_0.Z * dVar8;
      local_128._s_0.Y = dVar1 - dVar5 * local_f8._s_0.Y * dVar8;
      fVar11 = FMath::PointDistToSegmentSquared
                         (&param_1->Location,(TVector<double> *)&local_110._s_0,
                          (TVector<double> *)&local_128._s_0);
      fVar15 = (param_1->PhysicsSettings).Radius + *(float *)(pFVar9 + 0x88);
      if (fVar11 < fVar15 * fVar15) {
        FMath::ClosestPointOnSegment<double>
                  ((TVector<double> *)&local_f8._s_0,&param_1->Location,
                   (TVector<double> *)&local_110._s_0,(TVector<double> *)&local_128._s_0);
        uVar13 = (param_1->Location).field0_0x0._s_0.X - local_f8._s_0.X;
        uVar14 = (param_1->Location).field0_0x0._s_0.Y - local_f8._s_0.Y;
        uVar4 = (param_1->Location).field0_0x0._s_0.Z - local_f8._s_0.Z;
        dVar12 = (double)uVar14 * (double)uVar14 + (double)uVar13 * (double)uVar13 +
                 (double)uVar4 * (double)uVar4;
        if (dVar12 != dVar6) {
          if (dVar7 <= dVar12) {
            dVar12 = dVar6 / SQRT(dVar12);
            uVar14 = (double)uVar14 * dVar12;
            uVar4 = (double)uVar4 * dVar12;
            uVar13 = (double)uVar13 * dVar12;
          }
          else {
            local_d8[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        dVar12 = (double)fVar15;
        (param_1->Location).field0_0x0._s_0.X = dVar12 * (double)uVar13 + local_f8._s_0.X;
        (param_1->Location).field0_0x0._s_0.Y = dVar12 * (double)uVar14 + local_f8._s_0.Y;
        (param_1->Location).field0_0x0._s_0.Z = dVar12 * (double)uVar4 + local_f8._s_0.Z;
      }
    }
    pFVar9 = pFVar9 + 0x90;
  }
  return;
}

// AdjustByPlanarConstraint @ 14de40080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_KawaiiPhysics::AdjustByPlanarConstraint
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          FKawaiiPhysicsModifyBone *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  EPlanarConstraint EVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double local_res8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [4];
  
  EVar4 = this->PlanarConstraint;
  if (EVar4 == None) {
    return;
  }
  if (EVar4 == X) {
    local_68[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_68[0]._s_0.Y = _UNK_150689518;
    local_68[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&param_2->PoseRotation,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_68[0]._s_0);
    uVar11 = SUB84(local_88._s_0.X,0);
    uVar12 = (undefined4)((ulonglong)local_88._0_8_ >> 0x20);
    uVar13 = SUB84(local_88._s_0.Y,0);
    uVar14 = (undefined4)((ulonglong)local_88._8_8_ >> 0x20);
    dVar5 = local_88._s_0.X * (param_2->Location).field0_0x0._s_0.X +
            local_88._s_0.Y * (param_2->Location).field0_0x0._s_0.Y;
  }
  else if (EVar4 == Y) {
    local_68[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_68[0]._s_0.Y = _UNK_15061cbc8;
    local_68[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&param_2->PoseRotation,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_68[0]._s_0);
    auVar3 = *(undefined1 (*) [16])&(param_2->Location).field0_0x0;
    uVar11 = SUB84(local_88._s_0.X,0);
    uVar12 = (undefined4)((ulonglong)local_88._0_8_ >> 0x20);
    uVar13 = SUB84(local_88._s_0.Y,0);
    uVar14 = (undefined4)((ulonglong)local_88._8_8_ >> 0x20);
    auVar7._4_8_ = extraout_XMM0_Qb_00;
    auVar7._0_4_ = auVar3._4_4_;
    auVar9._0_8_ = auVar7._0_8_ << 0x20;
    auVar9._8_4_ = auVar3._8_4_;
    auVar9._12_4_ = auVar3._12_4_;
    dVar5 = local_88._s_0.Y * auVar9._8_8_ + local_88._s_0.X * auVar3._0_8_;
  }
  else {
    if (EVar4 != Z) {
      uVar11 = SUB84(local_res8,0);
      uVar12 = (undefined4)((ulonglong)local_res8 >> 0x20);
      uVar13 = uVar11;
      uVar14 = uVar12;
      uVar15 = uVar11;
      uVar16 = uVar12;
      goto LAB_14de401fa;
    }
    local_68[0]._s_0.Z = __real_3ff0000000000000;
    local_68[0]._s_0.X = 0.0;
    local_68[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&param_2->PoseRotation,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_68[0]._s_0);
    auVar3 = *(undefined1 (*) [16])&(param_2->Location).field0_0x0;
    uVar11 = SUB84(local_88._s_0.X,0);
    uVar12 = (undefined4)((ulonglong)local_88._0_8_ >> 0x20);
    uVar13 = SUB84(local_88._s_0.Y,0);
    uVar14 = (undefined4)((ulonglong)local_88._8_8_ >> 0x20);
    auVar6._4_8_ = extraout_XMM0_Qb;
    auVar6._0_4_ = auVar3._4_4_;
    auVar8._0_8_ = auVar6._0_8_ << 0x20;
    auVar8._8_4_ = auVar3._8_4_;
    auVar8._12_4_ = auVar3._12_4_;
    dVar5 = local_88._s_0.Y * auVar8._8_8_ + local_88._s_0.X * auVar3._0_8_;
  }
  local_res8 = dVar5 + local_88._s_0.Z * (param_2->Location).field0_0x0._s_0.Z;
  uVar15 = SUB84(local_88._s_0.Z,0);
  uVar16 = (int)((ulonglong)local_88._16_8_ >> 0x20);
LAB_14de401fa:
  dVar5 = (param_1->Location).field0_0x0._s_0.X;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  dVar2 = (param_1->Location).field0_0x0._s_0.Z;
  dVar10 = (dVar1 * (double)CONCAT44(uVar14,uVar13) + dVar5 * (double)CONCAT44(uVar12,uVar11) +
           dVar2 * (double)CONCAT44(uVar16,uVar15)) - local_res8;
  (param_1->Location).field0_0x0._s_0.X = dVar5 - dVar10 * (double)CONCAT44(uVar12,uVar11);
  (param_1->Location).field0_0x0._s_0.Y = dVar1 - dVar10 * (double)CONCAT44(uVar14,uVar13);
  (param_1->Location).field0_0x0._s_0.Z = dVar2 - dVar10 * (double)CONCAT44(uVar16,uVar15);
  return;
}

// AdjustByPlanerCollision @ 14de402a0

void __thiscall
FAnimNode_KawaiiPhysics::AdjustByPlanerCollision
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          TArray<FPlanarLimit,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  double dVar14;
  undefined1 local_res18 [16];
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double> local_98 [4];
  
  dVar8 = __real_3ff0000000000000;
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  pFVar10 = pFVar11 + 0x98;
  pFVar12 = pFVar11 + (longlong)iVar5 * 0xb0;
  do {
    if (param_2->ArrayNum != iVar5) {
      `TCheckedPointerIterator<FPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar12) {
      return;
    }
    if (pFVar10[-0x18] != (FScriptContainerElement)0x0) {
      dVar2 = (param_1->Location).field0_0x0._s_0.X;
      dVar3 = (param_1->Location).field0_0x0._s_0.Y;
      dVar4 = (param_1->Location).field0_0x0._s_0.Z;
      fVar1 = (param_1->PhysicsSettings).Radius;
      dVar7 = (*(double *)(pFVar10 + -8) * dVar2 + *(double *)pFVar10 * dVar3 +
              *(double *)(pFVar10 + 8) * dVar4) - *(double *)(pFVar10 + 0x10);
      dVar6 = dVar7 * (double)((TPlane<double> *)(pFVar10 + -8))->_padding_;
      dVar13 = dVar7 * *(double *)pFVar10;
      dVar7 = dVar7 * *(double *)(pFVar10 + 8);
      if (fVar1 * fVar1 <= (float)(dVar6 * dVar6 + dVar13 * dVar13 + dVar7 * dVar7)) {
        bVar9 = FMath::SegmentPlaneIntersection
                          (&param_1->Location,&param_1->PrevLocation,
                           (TPlane<double> *)(pFVar10 + -8),local_98);
        if (!bVar9) goto LAB_14de40421;
      }
      local_b8._s_0.Z = dVar8;
      local_b8._s_0.X = 0.0;
      local_b8._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)(pFVar10 + -0x38),(TVector<double> *)&local_d8._s_0,
                 (TVector<double> *)&local_b8._s_0);
      dVar14 = (double)(param_1->PhysicsSettings).Radius;
      (param_1->Location).field0_0x0._s_0.X = dVar14 * local_d8._s_0.X + (dVar2 - dVar6);
      (param_1->Location).field0_0x0._s_0.Y = dVar14 * local_d8._s_0.Y + (dVar3 - dVar13);
      (param_1->Location).field0_0x0._s_0.Z = dVar14 * local_d8._s_0.Z + (dVar4 - dVar7);
    }
LAB_14de40421:
    pFVar11 = pFVar11 + 0xb0;
    pFVar10 = pFVar10 + 0xb0;
  } while( true );
}

// AdjustBySphereCollision @ 14de40490

void __thiscall
FAnimNode_KawaiiPhysics::AdjustBySphereCollision
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          TArray<FSphericalLimit,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  float fVar22;
  undefined1 local_res18 [16];
  double dStack_100;
  double local_f8;
  double dStack_e8;
  double local_e0;
  
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  iVar2 = param_2->ArrayNum;
  pFVar13 = (param_2->AllocatorInstance).Data;
  pFVar14 = pFVar13 + (longlong)iVar2 * 0x90;
  do {
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      pTVar10 = CVarEnableOldPhysicsMethodSphereLimit.Ref;
      if (pFVar13 == pFVar14) {
        return;
      }
      if ((pFVar13[0x80] != (FScriptContainerElement)0x0) && (0.0 < *(float *)(pFVar13 + 0x88)))
      break;
LAB_14de4083f:
      pFVar13 = pFVar13 + 0x90;
    }
    fVar22 = *(float *)(pFVar13 + 0x88) + (param_1->PhysicsSettings).Radius;
    dVar1 = (param_1->Location).field0_0x0._s_0.X;
    if (pFVar13[0x8c] != (FScriptContainerElement)0x1) {
      dVar15 = (param_1->Location).field0_0x0._s_0.Y - *(double *)(pFVar13 + 0x48);
      dVar18 = (param_1->Location).field0_0x0._s_0.Z - *(double *)(pFVar13 + 0x50);
      if ((double)(fVar22 * fVar22) <=
          (dVar1 - *(double *)(pFVar13 + 0x40)) * (dVar1 - *(double *)(pFVar13 + 0x40)) +
          dVar15 * dVar15 + dVar18 * dVar18) {
        bVar11 = IsInParallelGameThread();
        if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
          lVar12 = 0;
        }
        else {
          lVar12 = 4;
        }
        dVar1 = *(double *)(pFVar13 + 0x50);
        dVar15 = *(double *)(pFVar13 + 0x40);
        local_f8 = (param_1->Location).field0_0x0._s_0.Z - dVar1;
        dVar18 = *(double *)(pFVar13 + 0x48);
        uVar3 = (param_1->Location).field0_0x0._s_0.X - dVar15;
        dStack_100 = (param_1->Location).field0_0x0._s_0.Y - dVar18;
        if (*(int *)((longlong)pTVar10->ShadowedValue + lVar12) == 0) {
          dVar17 = (double)uVar3 * (double)uVar3 + dStack_100 * dStack_100 + local_f8 * local_f8;
          if (dVar17 != dVar8) {
            if (dVar9 <= dVar17) {
              dVar17 = dVar8 / SQRT(dVar17);
              dStack_100 = dStack_100 * dVar17;
              local_f8 = local_f8 * dVar17;
              uVar3 = (double)uVar3 * dVar17;
            }
            else {
              dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
          }
          dVar17 = (double)(*(float *)(pFVar13 + 0x88) - (param_1->PhysicsSettings).Radius);
          (param_1->Location).field0_0x0._s_0.X = (double)uVar3 * dVar17 + dVar15;
          (param_1->Location).field0_0x0._s_0.Y = dStack_100 * dVar17 + dVar18;
        }
        else {
          dVar17 = dStack_100 * dStack_100 + (double)uVar3 * (double)uVar3 + local_f8 * local_f8;
          dStack_e8 = dStack_100;
          local_e0 = local_f8;
          if (dVar17 != dVar8) {
            if (dVar9 <= dVar17) {
              dVar17 = dVar8 / SQRT(dVar17);
              dStack_e8 = dStack_100 * dVar17;
              local_e0 = dVar17 * local_f8;
              uVar3 = (double)uVar3 * dVar17;
            }
            else {
              dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
          }
          dVar17 = (double)*(float *)(pFVar13 + 0x88);
          (param_1->Location).field0_0x0._s_0.X = (double)uVar3 * dVar17 + dVar15;
          (param_1->Location).field0_0x0._s_0.Y = dStack_e8 * dVar17 + dVar18;
          local_f8 = local_e0;
        }
        (param_1->Location).field0_0x0._s_0.Z = local_f8 * dVar17 + dVar1;
      }
      goto LAB_14de4083f;
    }
    dVar15 = (param_1->Location).field0_0x0._s_0.Y;
    dVar17 = dVar1 - *(double *)(pFVar13 + 0x40);
    dVar18 = (param_1->Location).field0_0x0._s_0.Z;
    dVar20 = dVar15 - *(double *)(pFVar13 + 0x48);
    dVar4 = dVar18 - *(double *)(pFVar13 + 0x50);
    auVar16._0_8_ = dVar20 * dVar20;
    auVar16._8_8_ = 0;
    dVar6 = dVar17 * dVar17 + auVar16._0_8_ + dVar4 * dVar4;
    if ((double)(fVar22 * fVar22) < dVar6) goto LAB_14de4083f;
    uVar21 = dVar20;
    uVar3 = dVar17;
    uVar7 = dVar4;
    if ((dVar6 != dVar8) &&
       (uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, dVar9 <= dVar6)) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = dVar6;
      dVar19 = dVar8 / SQRT(dVar6);
      uVar21 = dVar20 * dVar19;
      uVar3 = dVar17 * dVar19;
      uVar7 = dVar4 * dVar19;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6;
    auVar16 = sqrtpd(auVar16,auVar5);
    pFVar13 = pFVar13 + 0x90;
    dVar17 = (double)fVar22 - auVar16._0_8_;
    (param_1->Location).field0_0x0._s_0.X = (double)uVar3 * dVar17 + dVar1;
    (param_1->Location).field0_0x0._s_0.Y = (double)uVar21 * dVar17 + dVar15;
    (param_1->Location).field0_0x0._s_0.Z = (double)uVar7 * dVar17 + dVar18;
  } while( true );
}

// AdjustByWorldCollision @ 14de408c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014de4176c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::AdjustByWorldCollision
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          USkeletalMeshComponent *param_2,FBoneContainer *param_3)

{
  double adVar1 [2];
  double adVar2 [2];
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  ECollisionChannel EVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WorldCollision> FVar18;
  undefined8 *puVar19;
  UWorld *this_00;
  TVector<double> *pTVar20;
  ulonglong uVar21;
  FString *this_01;
  FString *pFVar22;
  TVector<double>_u_0 *__return_storage_ptr__;
  wchar_t *pwVar23;
  FColor_u_0 FVar24;
  FName FVar25;
  TStatId TVar26;
  FScriptContainerElement *pFVar27;
  FName FVar28;
  int iVar29;
  TVector<double>_u_0 *pTVar30;
  FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
  FVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar55;
  undefined4 uVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
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
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  undefined4 uVar95;
  undefined1 auVar90 [16];
  double dVar96;
  undefined4 uVar97;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar98;
  undefined1 auVar99 [16];
  double dVar106;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar107;
  undefined1 auVar108 [16];
  double dVar112;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  double dVar120;
  double dVar123;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  double dVar136;
  undefined1 auVar135 [16];
  undefined1 auStackY_428 [32];
  undefined1 local_3c7 [7];
  FColor_u_0 local_3c0;
  uint uStack_3bc;
  undefined1 local_3b8 [16];
  TVector<double>_u_0 local_3a8;
  undefined4 uStack_390;
  undefined1 uStack_38c;
  undefined2 uStack_38b;
  undefined1 uStack_389;
  TStatId local_388;
  USkeletalMeshComponent *local_380;
  FKawaiiPhysicsModifyBone *local_378;
  undefined1 local_370 [16];
  FName local_360;
  TVector<double>_u_0 local_350;
  FName local_338;
  FCollisionResponseContainer_u_0 local_330;
  double local_308;
  double dStack_300;
  TVector<double>_u_0 local_2f8;
  TTransform<double> local_2d8;
  undefined1 local_278 [72];
  double local_230;
  double local_228;
  float local_1d8;
  int local_1d4;
  byte local_1cb;
  FWeakObjectPtr local_1c0;
  FWeakObjectPtr FStack_1b8;
  IActorInstanceManagerInterface *local_1b0;
  undefined8 uStack_1a8;
  FCollisionQueryParams local_178;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  FVar18 = StatPtr_STAT_KawaiiPhysics_WorldCollision;
  local_380 = param_2;
  local_378 = param_1;
  if (StatPtr_STAT_KawaiiPhysics_WorldCollision ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WorldCollision>)0x0) {
    pFVar17 = ::FName::FName((FName *)local_370,"STAT_KawaiiPhysics_WorldCollision");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WorldCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_WorldCollision,
                        *pFVar17,L"KawaiiPhysics_WorldCollision","STATGROUP_Anim","STATCAT_Advanced"
                        ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar18;
  bVar10 = false;
  bVar11 = false;
  local_360.ComparisonIndex.Value = 0;
  local_360.Number = 0;
  bVar13 = false;
  bVar14 = false;
  FVar24.Bits = (uint)FVar25.ComparisonIndex.Value;
  uVar15 = FVar25.Number;
  if ((FVar24.Bits != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3c0._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3c0.Bits = FVar24.Bits;
        uStack_3bc = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_3c0._s_0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x2fd);
        bVar10 = true;
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_3c0.Bits = FVar24.Bits;
      uStack_3bc = uVar15;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar13 = true;
      goto LAB_14de40a44;
    }
  }
  bVar11 = bVar14;
  bVar10 = bVar13;
  bVar13 = false;
  FVar25 = local_360;
LAB_14de40a44:
  if ((param_2 != (USkeletalMeshComponent *)0x0) && (-1 < param_1->ParentIndex)) {
    lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_KawaiiCollision =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
            )0x0;
      pFVar17 = ::FName::FName((FName *)local_370,"KawaiiCollision");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_KawaiiCollision,*pFVar17,L"KawaiiCollision",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_388.StatIdPtr = (TStatIdData *)StatPtr_KawaiiCollision;
    if (StatPtr_KawaiiCollision ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
         )0x0) {
      pFVar17 = ::FName::FName((FName *)local_370,"KawaiiCollision");
      local_388.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_KawaiiCollision,*pFVar17,
                      L"KawaiiCollision","STATGROUP_CollisionTags","STATCAT_Advanced",
                      L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    }
    if ((*(int *)(lVar33 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"KawaiiCollision");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_178,::StaticName,&local_388,false,(AActor *)0x0);
    if (this->bIgnoreSelfComponent != false) {
      FCollisionQueryParams::AddIgnoredComponent(&local_178,(UPrimitiveComponent *)param_2);
    }
    if (this->bOverrideCollisionParams == false) {
      EVar16 = (**(code **)(param_2->_padding_ + 0x5f0))(param_2);
    }
    else {
      EVar16 = (ECollisionChannel)(this->CollisionChannelSettings).ObjectType.Value;
    }
    if (this->bOverrideCollisionParams == false) {
      puVar19 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x5c8))(param_2);
      FCollisionResponseContainer::FCollisionResponseContainer
                ((FCollisionResponseContainer *)&local_330._s_0);
      local_330._0_8_ = *puVar19;
      local_330._8_8_ = puVar19[1];
      local_330._16_8_ = puVar19[2];
      local_330._24_8_ = puVar19[3];
    }
    else {
      FCollisionResponseContainer::FCollisionResponseContainer
                ((FCollisionResponseContainer *)&local_330._s_0);
      local_330._0_8_ =
           *(undefined8 *)
            &(this->CollisionChannelSettings).CollisionResponses.ResponseToChannels.field0_0x0;
      local_330._8_8_ =
           *(undefined8 *)
            ((longlong)
             &(this->CollisionChannelSettings).CollisionResponses.ResponseToChannels.field0_0x0 + 8)
      ;
      local_330._16_8_ =
           *(undefined8 *)
            ((longlong)
             &(this->CollisionChannelSettings).CollisionResponses.ResponseToChannels.field0_0x0 +
            0x10);
      local_330._24_8_ =
           *(undefined8 *)
            ((longlong)
             &(this->CollisionChannelSettings).CollisionResponses.ResponseToChannels.field0_0x0 +
            0x18);
    }
    dVar120 = (double)param_2->_padding_;
    dVar123 = (double)param_2->_padding_;
    dVar98 = (double)param_2->_padding_;
    dVar106 = (double)param_2->_padding_;
    this_00 = (UWorld *)param_2->_padding_;
    adVar1[0] = (double)param_2->_padding_;
    adVar1[1] = (double)param_2->_padding_;
    adVar2[0] = (double)param_2->_padding_;
    adVar2[1] = (double)param_2->_padding_;
    dVar76 = (double)param_2->_padding_;
    dVar5 = (double)param_2->_padding_;
    dVar78 = (double)param_2->_padding_;
    local_2d8.Translation.ZW.m128d_f64[1] = (double)param_2->_padding_;
    local_2f8._0_4_ = SUB84(dVar120,0);
    local_2f8._4_4_ = (undefined4)((ulonglong)dVar120 >> 0x20);
    local_2f8._8_4_ = SUB84(dVar123,0);
    local_2f8._12_4_ = (undefined4)((ulonglong)dVar123 >> 0x20);
    local_308 = dVar98;
    dStack_300 = dVar106;
    local_2d8.Rotation.XY.m128d_f64 = adVar1;
    local_2d8.Rotation.ZW.m128d_f64 = adVar2;
    local_2d8.Translation.XY.m128d_f64[0] = dVar76;
    local_2d8.Translation.XY.m128d_f64[1] = dVar5;
    local_2d8.Translation.ZW.m128d_f64[0] = dVar78;
    local_2d8.Scale3D.XY.m128d_f64[0] = dVar120;
    local_2d8.Scale3D.XY.m128d_f64[1] = dVar123;
    local_2d8.Scale3D.ZW.m128d_f64[0] = dVar98;
    local_2d8.Scale3D.ZW.m128d_f64[1] = dVar106;
    if ((this_00 != (UWorld *)0x0) ||
       (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_2),
       this_00 != (UWorld *)0x0)) {
      uVar56 = (undefined4)((ulonglong)adVar2[0] >> 0x20);
      if (this->bIgnoreSelfComponent == false) {
        local_370._4_4_ = (param_1->PhysicsSettings).Radius;
        local_370._0_4_ = 2;
        auVar113._0_8_ = (param_1->Location).field0_0x0._s_0.Z * dVar98;
        auVar113._8_8_ = dVar106 * 0.0;
        local_3b8._0_8_ =
             (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
              )0x0;
        local_3b8._8_8_ = 0;
        dVar107 = (param_1->Location).field0_0x0._s_0.X * dVar120;
        dVar112 = (param_1->Location).field0_0x0._s_0.Y * dVar123;
        uVar95 = SUB84(dVar112,0);
        auVar100._8_4_ = uVar95;
        auVar100._0_8_ = dVar107;
        uVar97 = (undefined4)((ulonglong)dVar112 >> 0x20);
        auVar100._12_4_ = uVar97;
        auVar58._8_4_ = uVar95;
        auVar58._0_8_ = dVar107;
        auVar58._12_4_ = uVar97;
        auVar62._8_4_ = uVar95;
        auVar62._0_8_ = dVar107;
        auVar62._12_4_ = uVar97;
        auVar101._0_8_ = auVar100._8_8_ * adVar1[0] - dVar107 * adVar1[1];
        auVar101._8_8_ = auVar113._0_8_ * adVar1[1] - auVar58._8_8_ * adVar2[0];
        auVar58 = blendpd(auVar62,auVar113,2);
        auVar90._8_4_ = SUB84(auVar101._8_8_,0);
        auVar90._0_8_ = auVar101._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
        auVar108._8_4_ = SUB84(auVar113._8_8_,0);
        auVar108._0_8_ = auVar113._0_8_;
        auVar108._12_4_ = (int)((ulonglong)auVar113._8_8_ >> 0x20);
        auVar134 = blendpd((undefined1  [16])adVar1,(undefined1  [16])adVar2,2);
        dVar77 = auVar134._0_8_;
        dVar136 = auVar134._8_8_;
        auVar63._0_8_ = auVar58._0_8_ * adVar2[0] - auVar113._0_8_ * dVar77;
        auVar63._8_8_ = auVar58._8_8_ * adVar2[1] - auVar108._8_8_ * dVar136;
        auVar58 = blendpd(auVar101,auVar63,2);
        dVar89 = auVar90._8_8_ + auVar90._8_8_;
        dVar96 = auVar63._0_8_ + auVar63._0_8_;
        auVar102._0_8_ = auVar58._0_8_ + auVar58._0_8_;
        auVar102._8_8_ = auVar58._8_8_ + auVar58._8_8_;
        uVar95 = SUB84(dVar96,0);
        auVar81._8_4_ = uVar95;
        auVar81._0_8_ = dVar89;
        uVar97 = (undefined4)((ulonglong)dVar96 >> 0x20);
        auVar81._12_4_ = uVar97;
        auVar134._8_4_ = uVar95;
        auVar134._0_8_ = dVar89;
        auVar134._12_4_ = uVar97;
        auVar64._8_4_ = uVar95;
        auVar64._0_8_ = dVar89;
        auVar64._12_4_ = uVar97;
        auVar58 = blendpd(auVar64,auVar102,2);
        auVar109._0_8_ = (param_1->PrevLocation).field0_0x0._s_0.Z * dVar98;
        auVar109._8_8_ = dVar106 * 0.0;
        auVar82._0_8_ = auVar81._8_8_ * adVar1[0] - dVar89 * adVar1[1];
        auVar82._8_8_ = auVar102._0_8_ * adVar1[1] - auVar134._8_8_ * adVar2[0];
        auVar40._8_4_ = SUB84(auVar102._8_8_,0);
        auVar40._0_8_ = auVar102._0_8_;
        auVar40._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
        auVar65._0_8_ = auVar58._0_8_ * adVar2[0] - auVar102._0_8_ * dVar77;
        auVar65._8_8_ = auVar58._8_8_ * adVar2[1] - auVar40._8_8_ * dVar136;
        auVar41._8_4_ = SUB84(auVar82._8_8_,0);
        auVar41._0_8_ = auVar82._0_8_;
        auVar41._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
        auVar58 = blendpd(auVar82,auVar65,2);
        local_3a8._s_0.X = dVar89 * adVar2[1] + dVar107 + auVar41._8_8_ + dVar76;
        local_3a8._s_0.Y = dVar96 * adVar2[1] + dVar112 + auVar65._0_8_ + dVar5;
        local_3a8._s_0.Z = auVar102._0_8_ * adVar2[1] + auVar113._0_8_ + auVar58._0_8_ + dVar78;
        dVar107 = (param_1->PrevLocation).field0_0x0._s_0.X * dVar120;
        dVar112 = (param_1->PrevLocation).field0_0x0._s_0.Y * dVar123;
        uVar95 = SUB84(dVar112,0);
        auVar114._8_4_ = uVar95;
        auVar114._0_8_ = dVar107;
        uVar97 = (undefined4)((ulonglong)dVar112 >> 0x20);
        auVar114._12_4_ = uVar97;
        auVar42._8_4_ = uVar95;
        auVar42._0_8_ = dVar107;
        auVar42._12_4_ = uVar97;
        auVar66._8_4_ = uVar95;
        auVar66._0_8_ = dVar107;
        auVar66._12_4_ = uVar97;
        auVar58 = blendpd(auVar66,auVar109,2);
        auVar115._0_8_ = auVar114._8_8_ * adVar1[0] - dVar107 * adVar1[1];
        auVar115._8_8_ = auVar109._0_8_ * adVar1[1] - auVar42._8_8_ * adVar2[0];
        auVar43._8_4_ = SUB84(auVar109._8_8_,0);
        auVar43._0_8_ = auVar109._0_8_;
        auVar43._12_4_ = (int)((ulonglong)auVar109._8_8_ >> 0x20);
        auVar91._8_4_ = SUB84(auVar115._8_8_,0);
        auVar91._0_8_ = auVar115._0_8_;
        auVar91._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
        auVar67._0_8_ = auVar58._0_8_ * adVar2[0] - auVar109._0_8_ * dVar77;
        auVar67._8_8_ = auVar58._8_8_ * adVar2[1] - auVar43._8_8_ * dVar136;
        dVar89 = auVar91._8_8_ + auVar91._8_8_;
        dVar96 = auVar67._0_8_ + auVar67._0_8_;
        auVar58 = blendpd(auVar115,auVar67,2);
        uVar95 = SUB84(dVar96,0);
        auVar83._8_4_ = uVar95;
        auVar83._0_8_ = dVar89;
        uVar97 = (undefined4)((ulonglong)dVar96 >> 0x20);
        auVar83._12_4_ = uVar97;
        auVar116._0_8_ = auVar58._0_8_ + auVar58._0_8_;
        auVar116._8_8_ = auVar58._8_8_ + auVar58._8_8_;
        auVar44._8_4_ = uVar95;
        auVar44._0_8_ = dVar89;
        auVar44._12_4_ = uVar97;
        auVar68._8_4_ = uVar95;
        auVar68._0_8_ = dVar89;
        auVar68._12_4_ = uVar97;
        auVar58 = blendpd(auVar68,auVar116,2);
        auVar84._0_8_ = auVar83._8_8_ * adVar1[0] - dVar89 * adVar1[1];
        auVar84._8_8_ = auVar116._0_8_ * adVar1[1] - auVar44._8_8_ * adVar2[0];
        auVar45._8_4_ = SUB84(auVar116._8_8_,0);
        auVar45._0_8_ = auVar116._0_8_;
        auVar45._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
        auVar69._0_8_ = auVar58._0_8_ * adVar2[0] - auVar116._0_8_ * dVar77;
        auVar69._8_8_ = auVar58._8_8_ * adVar2[1] - auVar45._8_8_ * dVar136;
        auVar46._8_4_ = SUB84(auVar84._8_8_,0);
        auVar46._0_8_ = auVar84._0_8_;
        auVar46._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
        auVar58 = blendpd(auVar84,auVar69,2);
        local_350._s_0.X = dVar89 * adVar2[1] + dVar107 + auVar46._8_8_ + dVar76;
        local_350._s_0.Y = dVar96 * adVar2[1] + dVar112 + auVar69._0_8_ + dVar5;
        local_350._s_0.Z = auVar116._0_8_ * adVar2[1] + auVar109._0_8_ + auVar58._0_8_ + dVar78;
        bVar14 = UWorld::SweepMultiByChannel
                           (this_00,(TArray<FHitResult,TSizedDefaultAllocator<32>_> *)local_3b8,
                            (TVector<double> *)&local_350._s_0,(TVector<double> *)&local_3a8._s_0,
                            &UE::Math::TQuat<double>::Identity,EVar16,(FCollisionShape *)local_370,
                            &local_178,(FCollisionResponseParams *)&local_330._s_0);
        if (bVar14) {
          uVar21 = (ulonglong)(int)local_3b8._8_4_;
          TVar26.StatIdPtr = (TStatIdData *)(uVar21 * 0x100 + local_3b8._0_8_);
          local_3c0.Bits = local_3b8._8_4_;
          FVar31 = (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
                    )local_3b8._0_8_;
          local_388.StatIdPtr = TVar26.StatIdPtr;
          do {
            if ((float)local_3b8._8_4_ != (float)uVar21) {
              `TCheckedPointerIterator<FHitResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_3c7);
            }
            if (FVar31 == (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
                           )TVar26.StatIdPtr) break;
            if ((*(byte *)((longlong)FVar31 + 0xad) & 1) != 0) {
              bVar14 = TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>::
                       UEOpEquals<USkeletalMeshComponent,bool>
                                 ((TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)
                                  ((longlong)FVar31 + 0xd8),param_2);
              if ((!bVar14) || (*(FName *)((longlong)FVar31 + 0xf0) == (FName)0x0)) {
LAB_14de412a3:
                dVar89 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar107 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                dVar96 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar112 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                if ((*(byte *)((longlong)FVar31 + 0xad) & 2) == 0) {
                  dVar120 = adVar1[0] * dVar89;
                  dVar123 = adVar1[1] * dVar107;
                  uVar95 = (undefined4)((ulonglong)dVar123 >> 0x20);
                  dVar78 = *(double *)((longlong)FVar31 + 0x20) - dVar78;
                  dVar76 = *(double *)((longlong)FVar31 + 0x10) - dVar76;
                  dVar5 = *(double *)((longlong)FVar31 + 0x18) - dVar5;
                  uVar56 = (undefined4)((ulonglong)dVar5 >> 0x20);
                  auVar88._8_4_ = SUB84(dVar123,0);
                  auVar88._0_8_ = dVar120;
                  auVar88._12_4_ = uVar95;
                  auVar132._8_4_ = SUB84(dVar5,0);
                  auVar132._0_8_ = dVar76;
                  auVar132._12_4_ = uVar56;
                  dVar98 = auVar88._8_8_;
                  auVar51._8_4_ = SUB84(dVar5,0);
                  auVar51._0_8_ = dVar76;
                  auVar51._12_4_ = uVar56;
                  auVar94._8_4_ = SUB84(dVar123,0);
                  auVar94._0_8_ = dVar120;
                  auVar94._12_4_ = uVar95;
                  auVar131._0_8_ = auVar132._8_8_ * dVar120 - dVar76 * dVar98;
                  auVar131._8_8_ = dVar78 * dVar123 - auVar51._8_8_ * adVar2[0] * dVar96;
                  auVar7._8_4_ = SUB84(adVar2[1] * dVar112,0);
                  auVar7._0_8_ = adVar2[0] * dVar96;
                  auVar7._12_4_ = (int)((ulonglong)(adVar2[1] * dVar112) >> 0x20);
                  auVar58 = blendpd(auVar94,auVar7,2);
                  dVar123 = dVar78 * auVar58._0_8_;
                  dVar120 = auVar58._8_8_;
                }
                else {
                  auVar92._8_4_ = SUB84(adVar2[1],0);
                  auVar92._0_8_ = adVar2[1];
                  auVar92._12_4_ = (int)((ulonglong)adVar2[1] >> 0x20);
                  auVar117._0_8_ = (param_1->Location).field0_0x0._s_0.Z * dVar98;
                  auVar117._8_8_ = dVar106 * 0.0;
                  auVar109._0_8_ = (param_1->Location).field0_0x0._s_0.X * dVar120;
                  auVar109._8_8_ = (param_1->Location).field0_0x0._s_0.Y * dVar123;
                  auVar47._8_4_ = SUB84(adVar2[0],0);
                  auVar47._0_8_ = adVar1[1];
                  auVar47._12_4_ = uVar56;
                  auVar103._8_4_ = SUB84(auVar109._8_8_,0);
                  auVar103._0_8_ = auVar109._0_8_;
                  uVar56 = (undefined4)((ulonglong)auVar109._8_8_ >> 0x20);
                  auVar103._12_4_ = uVar56;
                  auVar70._8_4_ = SUB84(auVar109._8_8_,0);
                  auVar70._0_8_ = auVar109._0_8_;
                  auVar70._12_4_ = uVar56;
                  auVar58 = blendpd(auVar70,auVar117,2);
                  auVar104._0_8_ = auVar103._8_8_ * adVar1[0] - adVar1[1] * auVar109._0_8_;
                  auVar104._8_8_ = auVar117._0_8_ * adVar1[1] - auVar47._8_8_ * auVar109._8_8_;
                  auVar71._0_8_ = auVar58._0_8_ * adVar2[0] - dVar77 * auVar117._0_8_;
                  auVar71._8_8_ = auVar58._8_8_ * adVar2[1] - dVar136 * auVar117._8_8_;
                  auVar48._8_4_ = SUB84(auVar104._8_8_,0);
                  auVar48._0_8_ = auVar104._0_8_;
                  auVar48._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
                  dVar98 = auVar48._8_8_ + auVar48._8_8_;
                  dVar55 = auVar71._0_8_ + auVar71._0_8_;
                  auVar58 = blendpd(auVar104,auVar71,2);
                  auVar85._8_4_ = SUB84(dVar55,0);
                  auVar85._0_8_ = dVar98;
                  uVar56 = (undefined4)((ulonglong)dVar55 >> 0x20);
                  auVar85._12_4_ = uVar56;
                  auVar72._8_4_ = SUB84(dVar55,0);
                  auVar72._0_8_ = dVar98;
                  auVar72._12_4_ = uVar56;
                  auVar105._0_8_ = auVar58._0_8_ + auVar58._0_8_;
                  auVar105._8_8_ = auVar58._8_8_ + auVar58._8_8_;
                  dVar123 = adVar1[0] * dVar89;
                  dVar106 = adVar1[1] * dVar107;
                  uVar56 = (undefined4)((ulonglong)dVar106 >> 0x20);
                  auVar86._0_8_ = auVar85._8_8_ * adVar1[0] - adVar1[1] * dVar98;
                  auVar86._8_8_ = auVar105._0_8_ * adVar1[1] - adVar2[0] * dVar55;
                  auVar49._8_4_ = SUB84(auVar86._8_8_,0);
                  auVar49._0_8_ = auVar86._0_8_;
                  auVar49._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
                  auVar58 = blendpd(auVar72,auVar105,2);
                  dVar120 = adVar2[0] * dVar96;
                  auVar73._0_8_ = auVar58._0_8_ * adVar2[0] - dVar77 * auVar105._0_8_;
                  auVar73._8_8_ = auVar58._8_8_ * adVar2[1] - dVar136 * auVar105._8_8_;
                  auVar108 = blendpd(auVar86,auVar73,2);
                  dVar77 = (double)*(float *)((longlong)FVar31 + 0xa0);
                  auVar93._8_4_ = SUB84(dVar106,0);
                  auVar93._0_8_ = dVar123;
                  auVar93._12_4_ = uVar56;
                  auVar6._8_4_ = SUB84(adVar2[1] * dVar112,0);
                  auVar6._0_8_ = dVar120;
                  auVar6._12_4_ = (int)((ulonglong)(adVar2[1] * dVar112) >> 0x20);
                  auVar58 = blendpd(auVar93,auVar6,2);
                  dVar78 = (dVar77 * *(double *)((longlong)FVar31 + 0x50) +
                           adVar2[1] * auVar105._0_8_ + auVar117._0_8_ + auVar108._0_8_ + dVar78) -
                           dVar78;
                  auVar87._8_4_ = SUB84(dVar106,0);
                  auVar87._0_8_ = dVar123;
                  auVar87._12_4_ = uVar56;
                  dVar76 = (dVar77 * *(double *)((longlong)FVar31 + 0x40) +
                           adVar2[1] * dVar98 + auVar109._0_8_ + auVar49._8_8_ + dVar76) - dVar76;
                  dVar5 = (dVar77 * *(double *)((longlong)FVar31 + 0x48) +
                          auVar92._8_8_ * dVar55 + auVar109._8_8_ + auVar73._0_8_ + dVar5) - dVar5;
                  dVar98 = auVar87._8_8_;
                  auVar130._8_4_ = SUB84(dVar5,0);
                  auVar130._0_8_ = dVar76;
                  auVar130._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                  auVar50._8_4_ = SUB84(dVar120,0);
                  auVar50._0_8_ = dVar98;
                  auVar50._12_4_ = (int)((ulonglong)dVar120 >> 0x20);
                  auVar131._0_8_ = auVar130._8_8_ * dVar123 - dVar98 * dVar76;
                  auVar131._8_8_ = dVar78 * dVar106 - auVar50._8_8_ * dVar5;
                  dVar120 = auVar58._8_8_;
                  dVar123 = auVar58._0_8_ * dVar78;
                }
                dVar112 = adVar2[1] * dVar112;
                dVar96 = adVar2[0] * dVar96;
                auVar135._8_8_ = 0;
                auVar135._0_8_ = dVar78;
                auVar8._4_8_ = auVar109._8_8_;
                auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
                auVar110._0_8_ = auVar8._0_8_ << 0x20;
                auVar110._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
                auVar110._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
                auVar74._8_4_ = SUB84(dVar5,0);
                auVar74._0_8_ = dVar76;
                auVar74._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                auVar108 = blendpd(auVar74,auVar135,2);
                auVar75._0_8_ = auVar108._0_8_ * dVar96 - dVar123;
                auVar75._8_8_ = auVar108._8_8_ * dVar112 - dVar120 * 0.0;
                auVar108 = blendpd(auVar131,auVar75,2);
                dVar120 = auVar131._8_8_ + auVar131._8_8_;
                dVar123 = auVar75._0_8_ + auVar75._0_8_;
                auVar133._0_8_ = auVar108._0_8_ + auVar108._0_8_;
                auVar133._8_8_ = auVar108._8_8_ + auVar108._8_8_;
                uVar56 = SUB84(dVar123,0);
                auVar128._8_4_ = uVar56;
                auVar128._0_8_ = dVar120;
                uVar95 = (undefined4)((ulonglong)dVar123 >> 0x20);
                auVar128._12_4_ = uVar95;
                auVar52._8_4_ = uVar56;
                auVar52._0_8_ = dVar120;
                auVar52._12_4_ = uVar95;
                auVar121._8_4_ = uVar56;
                auVar121._0_8_ = dVar120;
                auVar121._12_4_ = uVar95;
                auVar108 = blendpd(auVar121,auVar133,2);
                auVar129._0_8_ = auVar128._8_8_ * adVar1[0] * dVar89 - dVar120 * dVar98;
                auVar129._8_8_ = auVar133._0_8_ * adVar1[1] * dVar107 - auVar52._8_8_ * dVar96;
                auVar53._8_4_ = SUB84(auVar133._8_8_,0);
                auVar53._0_8_ = auVar133._0_8_;
                auVar53._12_4_ = (int)((ulonglong)auVar133._8_8_ >> 0x20);
                auVar122._0_8_ = auVar108._0_8_ * dVar96 - auVar133._0_8_ * auVar58._0_8_;
                auVar122._8_8_ = auVar108._8_8_ * dVar112 - auVar53._8_8_ * auVar58._8_8_;
                auVar111._8_8_ = auVar110._8_8_;
                auVar111._0_8_ = local_308;
                auVar118._0_8_ =
                     (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & local_2f8._4_4_
                                      ,(uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       local_2f8._0_4_);
                auVar118._8_4_ = _UNK_15061cc88 & local_2f8._8_4_;
                auVar118._12_4_ = _UNK_15061cc8c & local_2f8._12_4_;
                lVar33 = -(ulonglong)
                          ((double)CONCAT44((uint)((ulonglong)local_308 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(local_308,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                          (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
                auVar9._4_4_ = local_2f8._4_4_;
                auVar9._0_4_ = local_2f8._0_4_;
                auVar9._8_4_ = local_2f8._8_4_;
                auVar9._12_4_ = local_2f8._12_4_;
                auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                                auVar9);
                lVar34 = -(ulonglong)
                          (auVar118._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
                ;
                lVar35 = -(ulonglong)
                          (auVar118._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
                ;
                auVar54._8_4_ = SUB84(auVar129._8_8_,0);
                auVar54._0_8_ = auVar129._0_8_;
                auVar54._12_4_ = (int)((ulonglong)auVar129._8_8_ >> 0x20);
                auVar119._0_8_ =
                     (double)CONCAT44(~(uint)((ulonglong)lVar34 >> 0x20) & auVar58._4_4_,
                                      ~(uint)lVar34 & auVar58._0_4_);
                auVar119._8_4_ = ~(uint)lVar35 & auVar58._8_4_;
                auVar119._12_4_ = ~(uint)((ulonglong)lVar35 >> 0x20) & auVar58._12_4_;
                auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                                auVar111);
                auVar108 = blendpd(auVar129,auVar122,2);
                (param_1->Location).field0_0x0._s_0.X =
                     auVar119._0_8_ * (dVar120 * dVar112 + dVar76 + auVar54._8_8_);
                (param_1->Location).field0_0x0._s_0.Y =
                     auVar119._8_8_ * (dVar123 * dVar112 + dVar5 + auVar122._0_8_);
                (param_1->Location).field0_0x0._s_0.Z =
                     (double)CONCAT44(~(uint)((ulonglong)lVar33 >> 0x20) & auVar58._4_4_,
                                      ~(uint)lVar33 & auVar58._0_4_) *
                     (auVar133._0_8_ * dVar112 + dVar78 + auVar108._0_8_);
                break;
              }
              param_2 = local_380;
              if (*(FName *)((longlong)FVar31 + 0xf0) != (param_1->BoneRef).BoneName) {
                iVar3 = (this->IgnoreBones).ArrayNum;
                pFVar27 = (this->IgnoreBones).AllocatorInstance.Data;
                pFVar32 = pFVar27 + (longlong)iVar3 * 0x10;
                while( true ) {
                  if ((this->IgnoreBones).ArrayNum != iVar3) {
                    `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_3c7);
                  }
                  if (pFVar27 == pFVar32) {
                    FVar28 = (FName)(this->IgnoreBoneNamePrefix).AllocatorInstance.Data;
                    iVar3 = (this->IgnoreBoneNamePrefix).ArrayNum;
                    local_370._0_8_ = (longlong)FVar28 + (longlong)iVar3 * 8;
                    goto LAB_14de411e0;
                  }
                  TVar26.StatIdPtr = local_388.StatIdPtr;
                  param_2 = local_380;
                  param_1 = local_378;
                  if (*(longlong *)pFVar27 == *(longlong *)((longlong)FVar31 + 0xf0)) break;
                  pFVar27 = pFVar27 + 0x10;
                }
              }
            }
LAB_14de4128f:
            uVar21 = (ulonglong)local_3c0.Bits;
            FVar31 = (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
                      )((longlong)FVar31 + 0x100);
          } while( true );
        }
        if ((FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
             )local_3b8._0_8_ !=
            (FThreadSafeStaticStat<_public:___cdecl__protected:_void___cdecl_FAnimNode_KawaiiPhysics::AdjustByWorldCollision(FKawaiiPhysicsModifyBone_&,USkeletalMeshComponent_const_*,FBoneContainer_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_KawaiiCollision>
             )0x0) {
          FMemory::Free((void *)local_3b8._0_8_);
        }
      }
      else {
        memset(local_278,0,0x100);
        uStack_390 = 0xffffffff;
        uStack_38b = 0;
        local_1c0.ObjectIndex = 0;
        local_1c0.ObjectSerialNumber = 0;
        FStack_1b8.ObjectIndex = 0;
        FStack_1b8.ObjectSerialNumber = 0;
        uStack_389 = 0;
        local_3a8._s_0.Z = 0.0;
        uStack_38c = 0;
        uStack_1a8._0_4_ = -1;
        uStack_1a8._4_1_ = Invalid;
        uStack_1a8._5_3_ = 0;
        local_278._4_4_ = 1.0;
        local_1d4 = -1;
        local_1b0 = (IActorInstanceManagerInterface *)0x0;
        local_3b8._4_4_ = (param_1->PhysicsSettings).Radius;
        local_3b8._0_4_ = 2;
        pTVar20 = UE::Math::TTransform<double>::TransformPosition
                            (&local_2d8,(TVector<double> *)&local_350._s_0,&param_1->Location);
        dVar120 = (param_1->PrevLocation).field0_0x0._s_0.X * dVar120;
        dVar123 = (param_1->PrevLocation).field0_0x0._s_0.Y * dVar123;
        auVar127._0_8_ = (param_1->PrevLocation).field0_0x0._s_0.Z * dVar98;
        auVar127._8_8_ = dVar106 * 0.0;
        auVar124._8_4_ = SUB84(dVar123,0);
        auVar124._0_8_ = dVar120;
        uVar95 = (undefined4)((ulonglong)dVar123 >> 0x20);
        auVar124._12_4_ = uVar95;
        auVar36._8_4_ = SUB84(adVar2[0],0);
        auVar36._0_8_ = adVar1[1];
        auVar36._12_4_ = uVar56;
        auVar57._8_4_ = SUB84(dVar123,0);
        auVar57._0_8_ = dVar120;
        auVar57._12_4_ = uVar95;
        auVar125._0_8_ = auVar124._8_8_ * adVar1[0] - adVar1[1] * dVar120;
        auVar125._8_8_ = auVar127._0_8_ * adVar1[1] - auVar36._8_8_ * dVar123;
        auVar58 = blendpd(auVar57,auVar127,2);
        auVar99._8_4_ = SUB84(auVar125._8_8_,0);
        auVar99._0_8_ = auVar125._0_8_;
        auVar99._12_4_ = (int)((ulonglong)auVar125._8_8_ >> 0x20);
        auVar108 = blendpd((undefined1  [16])adVar1,(undefined1  [16])adVar2,2);
        auVar59._0_8_ = auVar58._0_8_ * adVar2[0] - auVar108._0_8_ * auVar127._0_8_;
        auVar59._8_8_ = auVar58._8_8_ * adVar2[1] - auVar108._8_8_ * auVar127._8_8_;
        auVar58 = blendpd(auVar125,auVar59,2);
        dVar98 = auVar99._8_8_ + auVar99._8_8_;
        dVar106 = auVar59._0_8_ + auVar59._0_8_;
        auVar126._0_8_ = auVar58._0_8_ + auVar58._0_8_;
        auVar126._8_8_ = auVar58._8_8_ + auVar58._8_8_;
        uVar56 = SUB84(dVar106,0);
        auVar79._8_4_ = uVar56;
        auVar79._0_8_ = dVar98;
        uVar95 = (undefined4)((ulonglong)dVar106 >> 0x20);
        auVar79._12_4_ = uVar95;
        auVar37._8_4_ = uVar56;
        auVar37._0_8_ = dVar98;
        auVar37._12_4_ = uVar95;
        auVar60._8_4_ = uVar56;
        auVar60._0_8_ = dVar98;
        auVar60._12_4_ = uVar95;
        auVar58 = blendpd(auVar60,auVar126,2);
        auVar80._0_8_ = auVar79._8_8_ * adVar1[0] - dVar98 * adVar1[1];
        auVar80._8_8_ = auVar126._0_8_ * adVar1[1] - auVar37._8_8_ * adVar2[0];
        auVar38._8_4_ = SUB84(auVar126._8_8_,0);
        auVar38._0_8_ = auVar126._0_8_;
        auVar38._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
        auVar61._0_8_ = auVar58._0_8_ * adVar2[0] - auVar126._0_8_ * auVar108._0_8_;
        auVar61._8_8_ = auVar58._8_8_ * adVar2[1] - auVar38._8_8_ * auVar108._8_8_;
        auVar39._8_4_ = SUB84(auVar80._8_8_,0);
        auVar39._0_8_ = auVar80._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
        auVar58 = blendpd(auVar80,auVar61,2);
        local_3a8._s_0.X = dVar98 * adVar2[1] + dVar120 + auVar39._8_8_ + dVar76;
        local_3a8._s_0.Y = dVar106 * adVar2[1] + dVar123 + auVar61._0_8_ + dVar5;
        local_3a8._s_0.Z = auVar126._0_8_ * adVar2[1] + auVar127._0_8_ + auVar58._0_8_ + dVar78;
        bVar14 = UWorld::SweepSingleByChannel
                           (this_00,(FHitResult *)local_278,(TVector<double> *)&local_3a8._s_0,
                            pTVar20,&UE::Math::TQuat<double>::Identity,EVar16,
                            (FCollisionShape *)local_3b8,&local_178,
                            (FCollisionResponseParams *)&local_330._s_0);
        if (bVar14) {
          if ((local_1cb & 2) == 0) {
            pTVar30 = (TVector<double>_u_0 *)(local_278 + 0x10);
            __return_storage_ptr__ = &local_3a8;
          }
          else {
            pTVar20 = UE::Math::TTransform<double>::TransformPosition
                                (&local_2d8,(TVector<double> *)&local_350._s_0,&param_1->Location);
            pTVar30 = &local_3a8;
            dVar76 = (double)local_1d8;
            __return_storage_ptr__ = &local_2f8;
            local_3a8._s_0.X = dVar76 * (double)local_278._64_8_ + (pTVar20->field0_0x0)._s_0.X;
            local_3a8._s_0.Y = dVar76 * local_230 + (pTVar20->field0_0x0)._s_0.Y;
            local_3a8._s_0.Z = dVar76 * local_228 + (pTVar20->field0_0x0)._s_0.Z;
          }
          pTVar20 = UE::Math::TTransform<double>::InverseTransformPosition
                              (&local_2d8,(TVector<double> *)&__return_storage_ptr__->_s_0,
                               (TVector<double> *)&pTVar30->_s_0);
          dVar76 = (pTVar20->field0_0x0)._s_0.Y;
          (param_1->Location).field0_0x0._s_0.X = (pTVar20->field0_0x0)._s_0.X;
          (param_1->Location).field0_0x0._s_0.Y = dVar76;
          (param_1->Location).field0_0x0._s_0.Z = (pTVar20->field0_0x0)._s_0.Z;
        }
      }
    }
    if (local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_178.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_178.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_178.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar25,CycleScopeEnd);
  }
  return;
LAB_14de411e0:
  uVar12 = local_370._0_8_;
  if ((this->IgnoreBoneNamePrefix).ArrayNum != iVar3) {
    `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_3c7);
  }
  param_1 = local_378;
  if (FVar28 == (FName)uVar12) goto LAB_14de412a3;
  local_338 = *(FName *)FVar28;
  this_01 = ::FName::ToString((FName *)((longlong)FVar31 + 0xf0),(FString *)&local_3a8._s_0);
  pFVar22 = ::FName::ToString(&local_338,(FString *)&local_350._s_0);
  iVar4 = (pFVar22->Data).ArrayNum;
  iVar29 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar29 = 0;
    pwVar23 = L"";
  }
  else {
    pwVar23 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
  }
  bVar14 = ::FString::StartsWith(this_01,pwVar23,iVar29,IgnoreCase);
  if ((void *)local_350._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_350._s_0.X);
  }
  if ((void *)local_3a8._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_3a8._s_0.X);
  }
  TVar26.StatIdPtr = local_388.StatIdPtr;
  param_2 = local_380;
  param_1 = local_378;
  if (bVar14) goto LAB_14de4128f;
  FVar28 = (FName)((longlong)FVar28 + 8);
  goto LAB_14de411e0;
}

// ApplyBoneConstraintDataAsset @ 14de41790

void __thiscall
FAnimNode_KawaiiPhysics::ApplyBoneConstraintDataAsset
          (FAnimNode_KawaiiPhysics *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  UKawaiiPhysicsBoneConstraintsDataAsset *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FBoneReference *this_00;
  FBoneReference *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  ForAnyElementType local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  
  pTVar2 = &this->BoneConstraintsData;
  piVar1 = &(this->BoneConstraintsData).ArrayMax;
  (this->BoneConstraintsData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar9 = 0;
  pUVar5 = (this->BoneConstraintsDataAsset).field0_0x0.DebugPtr;
  if (pUVar5 != (UKawaiiPhysicsBoneConstraintsDataAsset *)0x0) {
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    pFVar11 = (pUVar5->BoneConstraintsData).AllocatorInstance.Data;
    iVar4 = (pUVar5->BoneConstraintsData).ArrayNum;
    pFVar3 = pFVar11 + (longlong)iVar4 * 0x14;
    while( true ) {
      if ((pUVar5->BoneConstraintsData).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FModifyBoneConstraintData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
        iVar9 = (int)local_90;
      }
      if (pFVar11 == pFVar3) break;
      local_88 = *(undefined8 *)pFVar11;
      uStack_80 = *(undefined8 *)(pFVar11 + 8);
      local_50 = (undefined1)*(undefined4 *)(pFVar11 + 0x10);
      uStack_68 = 0x7fffffff;
      uStack_64 = 0xffffffff;
      uStack_58 = 0x7fffffff;
      uStack_54 = 0xffffffff;
      uStack_4c = 0xffffffff;
      uStack_48 = 0xffffffff;
      uStack_44 = 0xbf800000;
      local_40 = local_40 & 0xffffff00;
      uStack_3c = 0;
      uStack_4f = (undefined1)((uint)*(undefined4 *)(pFVar11 + 0x10) >> 8);
      iVar8 = iVar9;
      local_70 = local_88;
      local_60 = uStack_80;
      if ((local_98.Data <= (FScriptContainerElement *)&local_70) &&
         ((FScriptContainerElement *)&local_70 < local_98.Data + (longlong)local_90._4_4_ * 0x38)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (int)local_90;
      }
      if (iVar8 == local_90._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x438,&local_98,(int *)((longlong)&local_90 + 4));
      }
      iVar9 = iVar8 + 1;
      local_90 = CONCAT44(local_90._4_4_,iVar9);
      lVar10 = (longlong)iVar8 * 0x38;
      pFVar11 = pFVar11 + 0x14;
      *(undefined8 *)(local_98.Data + lVar10) = local_70;
      *(ulonglong *)(local_98.Data + lVar10 + 8) = CONCAT44(uStack_64,uStack_68);
      *(undefined8 *)(local_98.Data + lVar10 + 0x10) = local_60;
      *(ulonglong *)(local_98.Data + lVar10 + 0x10 + 8) = CONCAT44(uStack_54,uStack_58);
      *(ulonglong *)(local_98.Data + lVar10 + 0x20) =
           CONCAT44(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,local_50)));
      *(ulonglong *)(local_98.Data + lVar10 + 0x20 + 8) = CONCAT44(uStack_44,uStack_48);
      *(ulonglong *)(local_98.Data + lVar10 + 0x30) = CONCAT44(uStack_3c,local_40);
    }
    if (pTVar2 != (TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *)&local_98) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
        iVar9 = (int)local_90;
      }
      iVar4 = local_90._4_4_;
      (pTVar2->AllocatorInstance).Data = local_98.Data;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      (this->BoneConstraintsData).ArrayNum = iVar9;
      *piVar1 = iVar4;
    }
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    iVar9 = (this->BoneConstraintsData).ArrayNum;
    this_00 = (FBoneReference *)(pTVar2->AllocatorInstance).Data;
    pFVar12 = (FBoneReference *)((longlong)this_00 + (longlong)iVar9 * 0x38);
    while( true ) {
      if ((this->BoneConstraintsData).ArrayNum != iVar9) {
        `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar12) break;
      FBoneReference::Initialize(this_00,param_1);
      FBoneReference::Initialize(this_00 + 1,param_1);
      this_00 = (FBoneReference *)&this_00[3].field_0x8;
    }
  }
  return;
}

// ApplyLimitsDataAsset @ 14de41a20

void __thiscall
FAnimNode_KawaiiPhysics::ApplyLimitsDataAsset(FAnimNode_KawaiiPhysics *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FSphericalLimit,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_> *this_01;
  TArray<FPlanarLimit,TSizedDefaultAllocator<32>_> *this_02;
  int iVar2;
  UKawaiiPhysicsLimitsDataAsset *pUVar3;
  FBoneReference *pFVar4;
  FBoneReference *pFVar5;
  undefined1 local_res8 [8];
  
  this_00 = &this->SphericalLimitsData;
  piVar1 = &(this->SphericalLimitsData).ArrayMax;
  (this->SphericalLimitsData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,&this_00->AllocatorInstance,0,piVar1);
  }
  this_01 = &this->CapsuleLimitsData;
  piVar1 = &(this->CapsuleLimitsData).ArrayMax;
  (this->CapsuleLimitsData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,&this_01->AllocatorInstance,0,piVar1);
  }
  this_02 = &this->PlanarLimitsData;
  piVar1 = &(this->PlanarLimitsData).ArrayMax;
  (this->PlanarLimitsData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&this_02->AllocatorInstance,0,piVar1);
  }
  pUVar3 = (this->LimitsDataAsset).field0_0x0.DebugPtr;
  if (pUVar3 != (UKawaiiPhysicsLimitsDataAsset *)0x0) {
    TArray<FSphericalLimit,TSizedDefaultAllocator<32>_>::operator=(this_00,&pUVar3->SphericalLimits)
    ;
    TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_>::operator=
              (this_01,&((this->LimitsDataAsset).field0_0x0.DebugPtr)->CapsuleLimits);
    TArray<FPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
              (this_02,&((this->LimitsDataAsset).field0_0x0.DebugPtr)->PlanarLimits);
  }
  iVar2 = (this->SphericalLimitsData).ArrayNum;
  pFVar4 = (FBoneReference *)(this_00->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 9;
  while( true ) {
    if ((this->SphericalLimitsData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    FBoneReference::Initialize(pFVar4,param_1);
    pFVar4 = pFVar4 + 9;
  }
  iVar2 = (this->CapsuleLimitsData).ArrayNum;
  pFVar4 = (FBoneReference *)(this_01->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 9;
  while( true ) {
    if ((this->CapsuleLimitsData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCapsuleLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    FBoneReference::Initialize(pFVar4,param_1);
    pFVar4 = pFVar4 + 9;
  }
  iVar2 = (this->PlanarLimitsData).ArrayNum;
  pFVar4 = (FBoneReference *)(this_02->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0xb;
  while( true ) {
    if ((this->PlanarLimitsData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    FBoneReference::Initialize(pFVar4,param_1);
    pFVar4 = pFVar4 + 0xb;
  }
  return;
}

// ApplySimulateResult @ 14de41bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_KawaiiPhysics::ApplySimulateResult
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          ,TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  FScriptContainerElement *pFVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  bool bVar23;
  uint uVar24;
  FCompactPoseBoneIndex FVar25;
  int iVar26;
  undefined4 extraout_var;
  TQuat<double> *pTVar27;
  uint uVar28;
  longlong lVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  int iVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  FScriptContainerElement *pFVar36;
  int iVar37;
  FScriptContainerElement *pFVar38;
  byte bVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  uint uVar57;
  undefined1 auStack_278 [32];
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  FIdentityFunctor local_228 [4];
  uint local_224;
  FScriptContainerElement *local_220;
  FScriptContainerElement *local_218;
  longlong local_210;
  FBoneContainer *local_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [12];
  undefined4 uStack_1c4;
  double local_1c0;
  undefined1 local_1b8 [12];
  undefined4 uStack_1ac;
  double local_1a8;
  undefined1 local_1a0 [16];
  double local_190;
  double local_188;
  TQuat<double> local_178;
  undefined4 local_158;
  undefined4 uStack_154;
  ForAnyElementType FStack_150;
  undefined8 local_148;
  ForAnyElementType FStack_140;
  undefined8 local_138;
  ForAnyElementType FStack_130;
  int local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  ForAnyElementType FStack_110;
  int local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar31 = (FScriptContainerElement *)0x0;
  uVar32 = 0;
  local_208 = param_2;
  local_1a0._8_8_ = param_3;
  if (0 < (this->ModifyBones).ArrayNum) {
    local_210 = 0x70;
    pFVar38 = pFVar31;
    pFVar34 = pFVar31;
    pFVar36 = pFVar31;
    do {
      iVar26 = (this->ModifyBones).ArrayNum;
      uVar28 = (uint)pFVar34;
      uVar35 = ~uVar28 >> 0x1f;
      uVar57 = uVar32;
      if ((int)uVar28 < iVar26) {
        uVar57 = uVar35;
      }
      if (uVar57 == 0) {
        local_258 = (FScriptContainerElement *)(longlong)(int)uVar28;
        local_250 = (FScriptContainerElement *)(longlong)iVar26;
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar23) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_220 = (this->ModifyBones).AllocatorInstance.Data;
      iVar26 = (this->ModifyBones).ArrayNum;
      uVar57 = uVar32;
      if ((int)uVar28 < iVar26) {
        uVar57 = uVar35;
      }
      if ((uVar57 == 0) &&
         (local_258 = pFVar38, local_250 = (FScriptContainerElement *)(longlong)iVar26,
         bVar23 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_218 = (this->ModifyBones).AllocatorInstance.Data;
      iVar26 = (this->ModifyBones).ArrayNum;
      uVar57 = uVar32;
      if ((int)uVar28 < iVar26) {
        uVar57 = uVar35;
      }
      if ((uVar57 == 0) &&
         (local_258 = pFVar38, local_250 = (FScriptContainerElement *)(longlong)iVar26,
         bVar23 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar30 = (this->ModifyBones).AllocatorInstance.Data;
      iVar26 = (this->ModifyBones).ArrayNum;
      pFVar34 = pFVar30 + 0xb0 + (longlong)pFVar36;
      uVar18 = *(undefined8 *)pFVar34;
      pFVar19 = *(FScriptContainerElement **)(pFVar34 + 8);
      pFVar34 = pFVar30 + 0xc0 + (longlong)pFVar36;
      uVar20 = *(undefined8 *)pFVar34;
      pFVar34 = *(FScriptContainerElement **)(pFVar34 + 8);
      iVar37 = *(int *)(local_218 + 0x90 + (longlong)pFVar36);
      iVar33 = *(int *)(local_218 + 0x90 + (longlong)pFVar36 + 4);
      uVar1 = *(undefined8 *)(local_218 + 0xa0 + (longlong)pFVar36);
      uVar43 = (undefined4)*(undefined8 *)(local_218 + 0x98 + (longlong)pFVar36);
      uVar44 = (undefined4)
               ((ulonglong)*(undefined8 *)(local_218 + 0x98 + (longlong)pFVar36) >> 0x20);
      iVar16 = *(int *)(local_220 + 0xd0 + (longlong)pFVar36);
      iVar17 = *(int *)(local_220 + 0xd0 + (longlong)pFVar36 + 4);
      uVar2 = *(undefined8 *)(local_220 + 0xe0 + (longlong)pFVar36);
      uVar24 = 0;
      uVar57 = uVar24;
      if ((int)uVar28 < iVar26) {
        uVar57 = uVar35;
      }
      uVar45 = (undefined4)*(undefined8 *)(local_220 + 0xd8 + (longlong)pFVar36);
      uVar46 = (undefined4)
               ((ulonglong)*(undefined8 *)(local_220 + 0xd8 + (longlong)pFVar36) >> 0x20);
      if ((uVar57 == 0) &&
         (local_258 = pFVar38, local_250 = (FScriptContainerElement *)(longlong)iVar26,
         bVar23 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar25 = FBoneReference::GetCompactPoseIndex
                         ((FBoneReference *)
                          ((this->ModifyBones).AllocatorInstance.Data + (longlong)pFVar36),
                          (FBoneContainer *)local_1a0);
      local_158 = *(undefined4 *)CONCAT44(extraout_var,FVar25);
      pFVar30 = (param_3->AllocatorInstance).Data;
      FStack_110.Data = (FScriptContainerElement *)0x0;
      lStack_f0 = 0;
      local_148 = uVar18;
      FStack_140.Data = pFVar19;
      local_138 = uVar20;
      FStack_130.Data = pFVar34;
      local_128 = iVar37;
      iStack_124 = iVar33;
      uStack_120 = uVar43;
      uStack_11c = uVar44;
      local_118 = uVar1;
      local_108 = iVar16;
      iStack_104 = iVar17;
      uStack_100 = uVar45;
      uStack_fc = uVar46;
      local_f8 = uVar2;
      if ((pFVar30 <= (FScriptContainerElement *)&local_158) &&
         ((FScriptContainerElement *)&local_158 < pFVar30 + (longlong)param_3->ArrayMax * 0x70)) {
        local_240 = (longlong)param_3->ArrayNum;
        local_238 = 0x70;
        local_258 = (FScriptContainerElement *)&local_158;
        local_250 = pFVar30;
        local_248 = (longlong)param_3->ArrayMax;
        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar23) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar26 = param_3->ArrayNum;
      if (iVar26 == param_3->ArrayMax) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = iVar26 + 1;
      pFVar34 = (FScriptContainerElement *)(ulonglong)(uVar28 + 1);
      pFVar38 = pFVar38 + 1;
      lVar29 = (longlong)iVar26 * 0x70;
      pFVar30 = (param_3->AllocatorInstance).Data;
      pFVar36 = pFVar36 + 0xf0;
      *(ulonglong *)(pFVar30 + lVar29) = CONCAT44(uStack_154,local_158);
      *(FScriptContainerElement **)(pFVar30 + lVar29 + 8) = FStack_150.Data;
      *(undefined8 *)(pFVar30 + lVar29 + 0x10) = local_148;
      *(FScriptContainerElement **)(pFVar30 + lVar29 + 0x10 + 8) = FStack_140.Data;
      *(undefined8 *)(pFVar30 + lVar29 + 0x20) = local_138;
      *(FScriptContainerElement **)(pFVar30 + lVar29 + 0x20 + 8) = FStack_130.Data;
      *(ulonglong *)(pFVar30 + lVar29 + 0x30) = CONCAT44(iStack_124,local_128);
      *(ulonglong *)(pFVar30 + lVar29 + 0x30 + 8) = CONCAT44(uStack_11c,uStack_120);
      *(undefined8 *)(pFVar30 + lVar29 + 0x40) = local_118;
      *(FScriptContainerElement **)(pFVar30 + lVar29 + 0x40 + 8) = FStack_110.Data;
      *(ulonglong *)(pFVar30 + lVar29 + 0x50) = CONCAT44(iStack_104,local_108);
      *(ulonglong *)(pFVar30 + lVar29 + 0x50 + 8) = CONCAT44(uStack_fc,uStack_100);
      *(undefined8 *)(pFVar30 + lVar29 + 0x60) = local_f8;
      *(longlong *)(pFVar30 + lVar29 + 0x60 + 8) = lStack_f0;
      iVar26 = (this->ModifyBones).ArrayNum;
    } while ((int)(uVar28 + 1) < iVar26);
    local_220 = (FScriptContainerElement *)0x1;
    if (1 < iVar26) {
      uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar52 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      lVar29 = 0xf0;
      local_218 = (FScriptContainerElement *)&DAT_00000001;
      uVar55 = SUB84(__real_3ff0000000000000,0);
      uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar32 = (uint)__xmm_80000000000000008000000000000000;
      uVar57 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      do {
        iVar26 = (this->ModifyBones).ArrayNum;
        uVar28 = (uint)local_220;
        local_208 = (FBoneContainer *)CONCAT44(local_208._4_4_,~uVar28 >> 0x1f);
        uVar35 = uVar24;
        if ((int)uVar28 < iVar26) {
          uVar35 = ~uVar28 >> 0x1f;
        }
        if (uVar35 == 0) {
          local_258 = (FScriptContainerElement *)(longlong)(int)uVar28;
          local_250 = (FScriptContainerElement *)(longlong)iVar26;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        }
        pFVar38 = (this->ModifyBones).AllocatorInstance.Data;
        iVar26 = (this->ModifyBones).ArrayNum;
        uVar35 = *(uint *)(pFVar38 + lVar29 + 0x10);
        uVar28 = uVar24;
        if ((int)uVar35 < iVar26) {
          uVar28 = ~uVar35 >> 0x1f;
        }
        if (uVar28 == 0) {
          local_258 = (FScriptContainerElement *)(longlong)(int)uVar35;
          local_250 = (FScriptContainerElement *)(longlong)iVar26;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar52 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        }
        pFVar34 = (this->ModifyBones).AllocatorInstance.Data;
        lVar40 = (longlong)(int)uVar35 * 0xf0;
        if ((*(int *)(pFVar34 + lVar40 + 0x20) < 2) &&
           ((*(uint *)(pFVar34 + lVar40 + 8) & 0x40000000) == 0)) {
          dVar4 = *(double *)(pFVar38 + lVar29 + 0x90) - *(double *)(pFVar34 + lVar40 + 0x90);
          uVar28 = SUB84(dVar4,0);
          uVar21 = (ulonglong)dVar4 >> 0x20;
          dVar8 = *(double *)(pFVar38 + lVar29 + 0x98) - *(double *)(pFVar34 + lVar40 + 0x98);
          uVar49 = SUB84(dVar8,0);
          uVar50 = (uint)((ulonglong)dVar8 >> 0x20);
          local_1d8 = *(double *)(pFVar38 + lVar29 + 0xa0) - *(double *)(pFVar34 + lVar40 + 0xa0);
          dVar42 = *(double *)(pFVar38 + lVar29 + 0x40) - *(double *)(pFVar34 + lVar40 + 0x40);
          uVar35 = SUB84(dVar42,0);
          uVar22 = (ulonglong)dVar42 >> 0x20;
          dVar5 = *(double *)(pFVar38 + lVar29 + 0x48) - *(double *)(pFVar34 + lVar40 + 0x48);
          uVar47 = SUB84(dVar5,0);
          uVar48 = (uint)((ulonglong)dVar5 >> 0x20);
          local_1f0 = *(double *)(pFVar38 + lVar29 + 0x50) - *(double *)(pFVar34 + lVar40 + 0x50);
          dStack_1e0 = dVar8;
          local_1e8 = dVar4;
          dStack_1f8 = dVar5;
          local_200 = dVar42;
          dVar41 = dVar8 * dVar8 + dVar4 * dVar4 + (double)local_1d8 * (double)local_1d8;
          if (dVar41 == (double)CONCAT44(uVar56,uVar55)) {
            dStack_1e0._0_4_ = uVar49;
            dStack_1e0._4_4_ = uVar50;
            local_1d0._8_4_ = uVar49;
            local_1d0._0_8_ = dVar4;
            uStack_1c4 = uVar50;
            local_1c0 = (double)local_1d8;
          }
          else if (__real_3e45798ee0000000 <= dVar41) {
            local_190 = (double)CONCAT44(uVar56,uVar55) / SQRT(dVar41);
            dVar8 = dVar8 * local_190;
            dVar4 = dVar4 * local_190;
            stack0xfffffffffffffe38 = dVar8;
            local_1c0 = (double)local_1d8 * local_190;
          }
          else {
            local_1c0 = (double)CONCAT44(uVar52,uVar51);
            dVar8 = (double)CONCAT44(uVar46,uVar45);
            dVar4 = (double)CONCAT44(uVar54,uVar53);
            local_1d0._4_4_ = uVar44;
            local_1d0._0_4_ = uVar43;
            local_1d0._8_4_ = uVar45;
            uStack_1c4 = uVar46;
          }
          dVar41 = dVar42 * dVar42 + dVar5 * dVar5 + (double)local_1f0 * (double)local_1f0;
          if (dVar41 == __real_3ff0000000000000) {
            dStack_1f8._0_4_ = uVar47;
            dStack_1f8._4_4_ = uVar48;
            local_1b8._8_4_ = uVar47;
            local_1b8._0_8_ = dVar42;
            uStack_1ac = uVar48;
            local_1a8 = (double)local_1f0;
          }
          else if (__real_3e45798ee0000000 <= dVar41) {
            local_188 = __real_3ff0000000000000 / SQRT(dVar41);
            dVar5 = dVar5 * local_188;
            dVar42 = dVar42 * local_188;
            stack0xfffffffffffffe50 = dVar5;
            local_1a8 = (double)local_1f0 * local_188;
          }
          else {
            local_1a8 = (double)CONCAT44(uVar52,uVar51);
            dVar5 = (double)CONCAT44(uVar46,uVar45);
            dVar42 = (double)CONCAT44(uVar54,uVar53);
            local_1b8._4_4_ = uVar44;
            local_1b8._0_4_ = uVar43;
            local_1b8._8_4_ = uVar45;
            uStack_1ac = uVar46;
          }
          if (((dVar4 != dVar42) || (dVar8 != dVar5)) || (local_1c0 != local_1a8)) {
            if ((this->BoneForwardAxis == X_Negative) ||
               ((this->BoneForwardAxis - Y_Negative & 0xfd) == 0)) {
              local_1e8._4_4_ = (uint)uVar21 ^ uVar57;
              local_1e8._0_4_ = uVar28 ^ uVar32;
              dStack_1e0._4_4_ = uVar50 ^ uVar57;
              dStack_1e0._0_4_ = uVar49 ^ uVar32;
              local_1d8 = CONCAT44((uint)((ulonglong)local_1d8 >> 0x20) ^ uVar57,
                                   (uint)local_1d8 ^ uVar32);
              local_200._4_4_ = (uint)uVar22 ^ uVar57;
              local_200._0_4_ = uVar35 ^ uVar32;
              dStack_1f8._4_4_ = uVar48 ^ uVar57;
              dStack_1f8._0_4_ = uVar47 ^ uVar32;
              local_1f0 = CONCAT44((uint)((ulonglong)local_1f0 >> 0x20) ^ uVar57,
                                   (uint)local_1f0 ^ uVar32);
            }
            pTVar27 = UE::Math::TQuat<double>::FindBetweenVectors
                                (&local_178,(TVector<double> *)&local_1e8,
                                 (TVector<double> *)&local_200);
            dVar8 = *(double *)(pFVar34 + lVar40 + 0xc0);
            dVar5 = *(double *)(pFVar34 + lVar40 + 0xc0 + 8);
            dVar42 = *(double *)(pFVar34 + lVar40 + 0xb0);
            dVar4 = *(double *)(pFVar34 + lVar40 + 0xb0 + 8);
            local_224 = *(uint *)(pFVar38 + lVar29 + 0x10);
            dVar41 = pTVar27->X;
            dVar13 = pTVar27->Y;
            dVar14 = pTVar27->Z;
            dVar15 = pTVar27->W;
            uVar35 = uVar24;
            if ((int)local_224 < param_3->ArrayNum) {
              uVar35 = ~local_224 >> 0x1f;
            }
            dVar11 = dVar41 * dVar5 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar15 * dVar42 +
                     dVar13 * dVar8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar14 * dVar4 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar12 = dVar41 * dVar8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     dVar15 * dVar4 +
                     dVar13 * dVar5 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar14 * dVar42 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar45 = SUB84(dVar12,0);
            uVar46 = (undefined4)((ulonglong)dVar12 >> 0x20);
            dVar12 = dVar41 * dVar4 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar15 * dVar8 +
                     dVar13 * dVar42 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar14 * dVar5 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar8 = dVar41 * dVar42 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar15 * dVar5
                    + dVar13 * dVar4 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
            ;
            uVar43 = SUB84(dVar8,0);
            uVar44 = (undefined4)((ulonglong)dVar8 >> 0x20);
            if ((uVar35 == 0) &&
               (local_258 = (FScriptContainerElement *)(longlong)(int)local_224,
               local_250 = (FScriptContainerElement *)(longlong)param_3->ArrayNum,
               bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar36 = (param_3->AllocatorInstance).Data;
            auVar9._8_4_ = uVar45;
            auVar9._0_8_ = dVar11;
            auVar9._12_4_ = uVar46;
            *(undefined1 (*) [16])(pFVar36 + (longlong)(int)local_224 * 0x70 + 0x10) = auVar9;
            auVar6._8_4_ = uVar43;
            auVar6._0_8_ = dVar12;
            auVar6._12_4_ = uVar44;
            *(undefined1 (*) [16])(pFVar36 + (longlong)(int)local_224 * 0x70 + 0x20) = auVar6;
            auVar10._8_4_ = uVar45;
            auVar10._0_8_ = dVar11;
            auVar10._12_4_ = uVar46;
            *(undefined1 (*) [16])(pFVar34 + lVar40 + 0x70) = auVar10;
            auVar7._8_4_ = uVar43;
            auVar7._0_8_ = dVar12;
            auVar7._12_4_ = uVar44;
            *(undefined1 (*) [16])(pFVar34 + lVar40 + 0x80) = auVar7;
            uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            goto LAB_14de42482;
          }
        }
        else {
LAB_14de42482:
          if (((*(uint *)(pFVar38 + lVar29 + 8) & 0x40000000) == 0) &&
             (pFVar38[lVar29 + 0xec] == (FScriptContainerElement)0x0)) {
            uVar35 = uVar24;
            if ((int)local_220 < param_3->ArrayNum) {
              uVar35 = (uint)local_208;
            }
            if (uVar35 == 0) {
              local_258 = local_218;
              local_250 = (FScriptContainerElement *)(longlong)param_3->ArrayNum;
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            pFVar36 = (param_3->AllocatorInstance).Data;
            uVar2 = *(undefined8 *)(pFVar38 + lVar29 + 0x40 + 8);
            uVar1 = *(undefined8 *)(pFVar38 + lVar29 + 0x50);
            pFVar34 = pFVar36 + local_210 + 0x30;
            *(undefined8 *)pFVar34 = *(undefined8 *)(pFVar38 + lVar29 + 0x40);
            *(undefined8 *)(pFVar34 + 8) = uVar2;
            pFVar36 = pFVar36 + local_210 + 0x40;
            *(undefined8 *)pFVar36 = uVar1;
            *(undefined8 *)(pFVar36 + 8) = 0;
            uVar51 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar52 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar43 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
            uVar45 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
            uVar46 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
            uVar53 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
            uVar54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          }
        }
        lVar29 = lVar29 + 0xf0;
        local_218 = local_218 + 1;
        uVar35 = (int)local_220 + 1;
        local_220 = (FScriptContainerElement *)(ulonglong)uVar35;
        local_210 = local_210 + 0x70;
        uVar55 = SUB84(__real_3ff0000000000000,0);
        uVar56 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      } while ((int)uVar35 < (this->ModifyBones).ArrayNum);
    }
  }
  lVar29 = (longlong)param_3->ArrayNum;
  iVar26 = 0;
  if (param_3->ArrayNum != 0) {
    pFVar38 = (param_3->AllocatorInstance).Data;
    bVar39 = (byte)((uint)*(undefined4 *)pFVar38 >> 0x1f);
    pFVar34 = pFVar31;
    pFVar36 = pFVar31;
    do {
      bVar39 = bVar39 ^ 1;
      iVar26 = (int)pFVar36;
      pFVar31 = pFVar31 + 1;
      pFVar36 = (FScriptContainerElement *)(ulonglong)(iVar26 + 1);
      if ((longlong)pFVar31 < lVar29) {
        pFVar30 = pFVar38 + (longlong)pFVar31 * 0x70;
        do {
          if ((uint)bVar39 != ~*(uint *)pFVar30 >> 0x1f) break;
          pFVar36 = (FScriptContainerElement *)(ulonglong)((int)pFVar36 + 1);
          pFVar31 = pFVar31 + 1;
          pFVar30 = pFVar30 + 0x70;
        } while ((longlong)pFVar31 < lVar29);
      }
      iVar37 = (int)pFVar36 - iVar26;
      if (bVar39 != 0) {
        iVar33 = (int)pFVar34;
        if (iVar33 != iVar26) {
          memmove(pFVar38 + (longlong)iVar33 * 0x70,pFVar38 + (longlong)iVar26 * 0x70,
                  (longlong)iVar37 * 0x70);
        }
        pFVar34 = (FScriptContainerElement *)(ulonglong)(uint)(iVar33 + iVar37);
      }
    } while ((longlong)pFVar31 < lVar29);
    iVar26 = (int)pFVar34;
    *(int *)(local_1a0._8_8_ + 8) = iVar26;
    param_3 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)local_1a0._8_8_;
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_3->AllocatorInstance).Data,iVar26,local_228[0],
             (FCompareBoneTransformIndex *)local_228);
  return;
}

// CacheBones_AnyThread @ 14de42690

void __thiscall
FAnimNode_KawaiiPhysics::CacheBones_AnyThread
          (FAnimNode_KawaiiPhysics *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::CacheBones_AnyThread");
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  lVar1 = *(longlong *)param_1;
  pcVar2 = *(code **)(this->_padding_ + 0xd0);
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*pcVar2)(this,*(undefined8 *)(lVar1 + 0x660));
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->_padding_,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalcBoneLength @ 14de426a0

void __thiscall
FAnimNode_KawaiiPhysics::CalcBoneLength
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  undefined1 local_res10 [8];
  
  uVar8 = param_1->ParentIndex;
  if ((int)uVar8 < 0) {
    param_1->LengthFromRoot = 0.0;
  }
  else {
    if (param_1->bDummy == false) {
      uVar9 = (param_1->BoneRef).BoneIndex;
      uVar8 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar8 = param_1->ParentIndex;
      pFVar10 = (param_2->AllocatorInstance).Data;
      pFVar1 = pFVar10 + (longlong)(int)uVar9 * 0x60 + 0x20;
      dVar4 = *(double *)pFVar1;
      dVar5 = *(double *)(pFVar1 + 8);
      dVar6 = *(double *)(pFVar10 + (longlong)(int)uVar9 * 0x60 + 0x30);
      uVar9 = 0;
      if ((int)uVar8 < (this->ModifyBones).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      fVar11 = (float)((double)*(float *)((this->ModifyBones).AllocatorInstance.Data +
                                         (longlong)(int)uVar8 * 0xf0 + 0xe8) +
                      SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6));
    }
    else {
      uVar9 = 0;
      if ((int)uVar8 < (this->ModifyBones).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      fVar11 = *(float *)((this->ModifyBones).AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 0xf0 + 0xe8) + this->DummyBoneLength;
    }
    param_1->LengthFromRoot = fVar11;
    if (fVar11 <= this->TotalBoneLength) {
      fVar11 = this->TotalBoneLength;
    }
    this->TotalBoneLength = fVar11;
  }
  pFVar10 = (param_1->ChildIndexs).AllocatorInstance.Data;
  iVar2 = (param_1->ChildIndexs).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 4;
  while( true ) {
    if ((param_1->ChildIndexs).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar1) break;
    uVar8 = *(uint *)pFVar10;
    uVar9 = 0;
    if ((int)uVar8 < (this->ModifyBones).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    CalcBoneLength(this,(FKawaiiPhysicsModifyBone *)
                        ((this->ModifyBones).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xf0),
                   param_2);
    pFVar10 = pFVar10 + 4;
  }
  return;
}

// CollectChildBones @ 14de42b40

int __thiscall
FAnimNode_KawaiiPhysics::CollectChildBones
          (FAnimNode_KawaiiPhysics *this,FReferenceSkeleton *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_28 [4];
  
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  iVar7 = (param_1->FinalRefBoneInfo).ArrayNum;
  local_28[0] = param_2;
  while( true ) {
    uVar4 = local_28[0] + 1;
    if (iVar7 <= (int)uVar4) {
      return param_3->ArrayNum;
    }
    uVar6 = 0;
    if ((int)uVar4 < (param_1->FinalRefBoneInfo).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    local_28[0] = uVar4;
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    if (param_2 ==
        *(int *)((param_1->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar4 * 0xc + 8
                )) {
      pFVar2 = (param_3->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        iVar7 = (*pcVar3)();
        return iVar7;
      }
      iVar8 = param_3->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_3->AllocatorInstance,piVar1);
      }
      param_3->ArrayNum = iVar8 + 1;
      *(uint *)((param_3->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_28[0];
    }
  }
  pcVar3 = (code *)swi(3);
  iVar7 = (*pcVar3)();
  return iVar7;
}

// EvaluateSkeletalControl_AnyThread @ 14de42df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::EvaluateSkeletalControl_AnyThread
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FBoneContainer *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Eval> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined1 auStackY_148 [32];
  FColor_u_0 local_e8 [2];
  LARGE_INTEGER local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FName local_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  FVar10 = StatPtr_STAT_KawaiiPhysics_Eval;
  if (StatPtr_STAT_KawaiiPhysics_Eval == (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Eval>)0x0)
  {
    pFVar9 = ::FName::FName(&local_b0,"STAT_KawaiiPhysics_Eval");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_Eval,*pFVar9,
                        L"KawaiiPhysics_Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_e8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar12.Value;
        local_d8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x43);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_e0.s.LowPart = FVar12.Value;
      local_e0.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14de42f48;
    }
  }
  bVar6 = false;
  FVar13 = local_d0;
LAB_14de42f48:
  if (param_2->ArrayNum != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBoneTransforms.Num() == 0",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                       ,0x45,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (this->bResetDynamics != false) {
    uVar11 = (this->ModifyBones).ArrayNum;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    DestructItems<FKawaiiPhysicsModifyBone,int>
              ((FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data,uVar11);
    piVar1 = &(this->ModifyBones).ArrayMax;
    (this->ModifyBones).ArrayNum = 0;
    if (*piVar1 != uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,uVar11,&(this->ModifyBones).AllocatorInstance,0,piVar1);
    }
    this->bResetDynamics = false;
    this->bInitPhysicsSettings = false;
  }
  lVar2 = param_1->_padding_;
  pFVar3 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  local_a8.Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  local_a8.Rotation.XY.m128d_f64[1] = *(double *)(lVar2 + 0x28);
  local_a8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  local_a8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x38);
  local_a8.Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  local_a8.Translation.XY.m128d_f64[1] = *(double *)(lVar2 + 0x48);
  local_a8.Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  local_a8.Translation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x58);
  local_a8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  local_a8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar2 + 0x68);
  local_a8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar2 + 0x70);
  local_a8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar2 + 0x78);
  bVar8 = FBoneReference::IsValidToEvaluate(&this->RootBone,pFVar3);
  if (bVar8) {
    if ((this->ModifyBones).ArrayNum == 0) {
      InitModifyBones(this,param_1,pFVar3);
      InitBoneConstraints(this);
      (this->PreSkelCompTransform).Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
      (this->PreSkelCompTransform).Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
      (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
      (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
      (this->PreSkelCompTransform).Translation.XY.m128d_f64[0] =
           local_a8.Translation.XY.m128d_f64[0];
      (this->PreSkelCompTransform).Translation.XY.m128d_f64[1] =
           local_a8.Translation.XY.m128d_f64[1];
      (this->PreSkelCompTransform).Translation.ZW.m128d_f64[0] =
           local_a8.Translation.ZW.m128d_f64[0];
      (this->PreSkelCompTransform).Translation.ZW.m128d_f64[1] =
           local_a8.Translation.ZW.m128d_f64[1];
      (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
      (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
      (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
      (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1];
    }
    if ((this->bInitPhysicsSettings == false) || (this->bUpdatePhysicsSettingsInGame != false)) {
      UpdatePhysicsSettingsOfModifyBones(this);
      this->bInitPhysicsSettings = true;
    }
    UpdateSphericalLimits(this,&this->SphericalLimits,param_1,pFVar3,&local_a8);
    UpdateSphericalLimits(this,&this->SphericalLimitsData,param_1,pFVar3,&local_a8);
    UpdateCapsuleLimits(this,&this->CapsuleLimits,param_1,pFVar3,&local_a8);
    UpdateCapsuleLimits(this,&this->CapsuleLimitsData,param_1,pFVar3,&local_a8);
    UpdatePlanerLimits(this,&this->PlanarLimits,param_1,pFVar3,&local_a8);
    UpdatePlanerLimits(this,&this->PlanarLimitsData,param_1,pFVar3,&local_a8);
    UpdateModifyBonesPoseTransform(this,param_1,pFVar3);
    UpdateSkelCompMove(this,&local_a8);
    if ((this->bNeedWarmUp != false) && (0 < this->WarmUpFrames)) {
      WarmUp(this,param_1,pFVar3,&local_a8);
      this->bNeedWarmUp = false;
    }
    SimulateModifyBones(this,param_1,pFVar3,&local_a8);
    ApplySimulateResult(this,param_1,pFVar3,param_2);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_c0.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GetBoneForwardVector @ 14de434c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FAnimNode_KawaiiPhysics::GetBoneForwardVector
          (FAnimNode_KawaiiPhysics *this,TVector<double> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  switch(this->BoneForwardAxis) {
  default:
    local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689518;
    break;
  case X_Negative:
    local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689518;
    local_28._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0);
    uVar1 = local_48._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar2 = local_48._8_4_ ^ _UNK_15066df78;
    uVar3 = local_48._12_4_ ^ _UNK_15066df7c;
    uVar4 = SUB84(local_48._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)local_48._16_8_ >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         local_48._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar1;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar5,uVar4);
    return __return_storage_ptr__;
  case Y_Positive:
    local_28._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_28._s_0.Y = _UNK_15061cbc8;
    break;
  case Y_Negative:
    local_28._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_28._s_0.Y = _UNK_15061cbc8;
    local_28._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0);
    uVar1 = local_48._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar2 = local_48._8_4_ ^ _UNK_15066df78;
    uVar3 = local_48._12_4_ ^ _UNK_15066df7c;
    uVar4 = SUB84(local_48._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)local_48._16_8_ >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         local_48._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar1;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar5,uVar4);
    return __return_storage_ptr__;
  case Z_Positive:
    local_28._s_0.Z = __real_3ff0000000000000;
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    goto LAB_14de4361d;
  case Z_Negative:
    local_28._s_0.Z = __real_3ff0000000000000;
    local_28._s_0.X = 0.0;
    local_28._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_1,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0);
    uVar1 = local_48._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar2 = local_48._8_4_ ^ _UNK_15066df78;
    uVar3 = local_48._12_4_ ^ _UNK_15066df7c;
    uVar4 = SUB84(local_48._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)local_48._16_8_ >> 0x20) ^
            __xmm_80000000000000008000000000000000._4_4_;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         local_48._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar1;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar5,uVar4);
    return __return_storage_ptr__;
  }
  local_28._s_0.Z = 0.0;
LAB_14de4361d:
  UE::Math::TQuat<double>::RotateVector
            (param_1,__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetWindVelocity @ 14de43b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall
FAnimNode_KawaiiPhysics::GetWindVelocity
          (FAnimNode_KawaiiPhysics *this,TVector<double> *__return_storage_ptr__,
          FSceneInterface *param_1,TTransform<double> *param_2,FKawaiiPhysicsModifyBone *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_GetWindVelocity> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  LARGE_INTEGER LVar15;
  TAlignedBytes<8,8> TVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  FNameEntryId FVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  FColor_u_0 local_168;
  uint uStack_164;
  float local_160 [4];
  LARGE_INTEGER local_150;
  FName local_148;
  FStatMessage local_138;
  double local_128;
  TVector<double>_u_0 local_118;
  TTransform<double> local_f8 [2];
  
  FVar19.Value = 0;
  FVar13 = StatPtr_STAT_KawaiiPhysics_GetWindVelocity;
  local_150 = (LARGE_INTEGER)param_1;
  if (StatPtr_STAT_KawaiiPhysics_GetWindVelocity ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_GetWindVelocity>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_138,"STAT_KawaiiPhysics_GetWindVelocity");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_GetWindVelocity>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_GetWindVelocity,
                        *pFVar12,L"KawaiiPhysics_GetWindVelocity","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar14 = FVar18.Number;
  if ((FVar17.Bits != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_168.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_168._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.Bits = FVar17.Bits;
        uStack_164 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_168._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x2e9);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_168.Bits = FVar17.Bits;
      uStack_164 = uVar14;
      local_148 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      FVar19.Value = local_148.ComparisonIndex.Value;
      goto LAB_14de43cbb;
    }
  }
  bVar8 = false;
  FVar18 = local_148;
LAB_14de43cbb:
  auVar44 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar26 = auVar44._0_8_;
  dVar37 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar5 = (param_3->PoseLocation).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar33 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  local_160[0] = 0.0;
  local_160[2] = 0.0;
  local_160[1] = 0.0;
  local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar32 = (param_2->Scale3D).XY.m128d_f64[0] * (param_3->PoseLocation).field0_0x0._s_0.X;
  dVar3 = (param_2->Scale3D).XY.m128d_f64[1] * (param_3->PoseLocation).field0_0x0._s_0.Y;
  uVar10 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar20 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar34 = blendpd(auVar20,auVar44,2);
  auVar47._8_4_ = SUB84(dVar3,0);
  auVar47._0_8_ = dVar32;
  auVar47._12_4_ = uVar10;
  auVar48._0_8_ = auVar47._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar32;
  auVar48._8_8_ = dVar5 * auVar20._8_8_ - dVar26 * dVar3;
  auVar49._8_4_ = SUB84(dVar3,0);
  auVar49._0_8_ = dVar32;
  auVar49._12_4_ = uVar10;
  auVar20._8_4_ = SUB84(dVar33,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar20 = blendpd(auVar49,auVar20,2);
  auVar21._0_8_ = auVar20._0_8_ * dVar26 - auVar34._0_8_ * dVar5;
  auVar21._8_8_ = auVar20._8_8_ * auVar44._8_8_ - auVar34._8_8_ * dVar33;
  auVar20 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar49 = blendpd(auVar48,auVar21,2);
  dVar33 = auVar48._8_8_ + auVar48._8_8_;
  dVar2 = auVar21._0_8_ + auVar21._0_8_;
  uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar50._0_8_ = auVar49._0_8_ + auVar49._0_8_;
  auVar50._8_8_ = auVar49._8_8_ + auVar49._8_8_;
  auVar42._8_4_ = SUB84(dVar2,0);
  auVar42._0_8_ = dVar33;
  auVar42._12_4_ = uVar10;
  auVar38._8_4_ = SUB84(dVar2,0);
  auVar38._0_8_ = dVar33;
  auVar38._12_4_ = uVar10;
  auVar49 = blendpd(auVar38,auVar50,2);
  auVar43._0_8_ = auVar42._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar33;
  auVar43._8_8_ = auVar50._0_8_ * auVar20._8_8_ - dVar26 * dVar2;
  auVar34._8_4_ = SUB84(auVar43._8_8_,0);
  auVar34._0_8_ = auVar43._0_8_;
  auVar34._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar20 = blendpd(auVar20,auVar44,2);
  auVar39._0_8_ = auVar49._0_8_ * dVar26 - auVar20._0_8_ * auVar50._0_8_;
  auVar39._8_8_ = auVar49._8_8_ * auVar44._8_8_ - auVar20._8_8_ * auVar50._8_8_;
  auVar44 = blendpd(auVar43,auVar39,2);
  dVar2 = dVar2 * dVar37 + dVar3 + auVar39._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  local_128 = auVar50._0_8_ * dVar37 + dVar5 + auVar44._0_8_ +
              (param_2->Translation).ZW.m128d_f64[0];
  local_138.NameAndInfo.Index.Value = SUB84(dVar2,0);
  local_138.StatData.Pad =
       (uchar  [8])
       (dVar33 * dVar37 + dVar32 + auVar34._8_8_ + (param_2->Translation).XY.m128d_f64[0]);
  local_138.NameAndInfo.Number = (int)((ulonglong)dVar2 >> 0x20);
  LVar15 = local_150;
  uVar10 = (**(code **)(*(longlong *)local_150 + 0x3a0))
                     (local_150.QuadPart,&local_138,&local_118,local_160,local_160 + 2,local_160 + 1
                     );
  auVar40._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(param_2->Scale3D).ZW.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar40._8_4_ = *(uint *)((param_2->Scale3D).ZW.m128d_f64 + 1) & _UNK_15061cc88;
  auVar40._12_4_ = *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc) & _UNK_15061cc8c;
  auVar27._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar40._8_8_);
  auVar27._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar40._0_8_);
  uVar14 = movmskpd(LVar15.s.LowPart,auVar27);
  auVar44._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
        (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c
                         ,*(uint *)((param_2->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88));
  auVar44._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(*(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         *(uint *)(param_2->Scale3D).XY.m128d_f64 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  iVar11 = movmskpd(uVar10,auVar44);
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    local_f8[0].Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_f8[0].Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_f8[0].Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_f8[0].Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_f8[0].Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
    local_f8[0].Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_2,local_f8);
  }
  auVar41._4_4_ = local_f8[0].Rotation.XY.m128d_f64[0]._4_4_;
  auVar41._0_4_ = local_f8[0].Rotation.XY.m128d_f64[0]._0_4_;
  auVar41._8_4_ = local_f8[0].Rotation.XY.m128d_f64[1]._0_4_;
  auVar41._12_4_ = local_f8[0].Rotation.XY.m128d_f64[1]._4_4_;
  dVar32 = local_118._s_0.X * local_f8[0].Scale3D.XY.m128d_f64[0];
  dVar3 = local_118._s_0.Y * local_f8[0].Scale3D.XY.m128d_f64[1];
  uVar10 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar5 = local_118._s_0.Z * local_f8[0].Scale3D.ZW.m128d_f64[0];
  dVar33 = local_f8[0].Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar37 = auVar41._8_8_;
  auVar51._8_4_ = SUB84(dVar3,0);
  auVar51._0_8_ = dVar32;
  auVar51._12_4_ = uVar10;
  auVar22._8_4_ = local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_;
  auVar22._0_8_ = dVar37;
  auVar22._12_4_ = local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_;
  auVar45._4_4_ = local_f8[0].Rotation.XY.m128d_f64[0]._4_4_;
  auVar45._0_4_ = local_f8[0].Rotation.XY.m128d_f64[0]._0_4_;
  auVar45._8_4_ = local_f8[0].Rotation.XY.m128d_f64[1]._0_4_;
  auVar45._12_4_ = local_f8[0].Rotation.XY.m128d_f64[1]._4_4_;
  auVar28._8_4_ = SUB84(dVar3,0);
  auVar28._0_8_ = dVar32;
  auVar28._12_4_ = uVar10;
  auVar52._0_8_ =
       auVar51._8_8_ *
       (double)CONCAT44(local_f8[0].Rotation.XY.m128d_f64[0]._4_4_,
                        local_f8[0].Rotation.XY.m128d_f64[0]._0_4_) - dVar37 * dVar32;
  auVar52._8_8_ =
       dVar5 * (double)CONCAT44(local_f8[0].Rotation.XY.m128d_f64[1]._4_4_,
                                local_f8[0].Rotation.XY.m128d_f64[1]._0_4_) - auVar22._8_8_ * dVar3;
  auVar4._8_4_ = SUB84(dVar33,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar44 = blendpd(auVar28,auVar4,2);
  auVar6._4_4_ = local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_;
  auVar6._0_4_ = local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_;
  auVar6._8_4_ = local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_;
  auVar6._12_4_ = local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_;
  auVar20 = blendpd(auVar45,auVar6,2);
  auVar29._0_8_ =
       auVar44._0_8_ *
       (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_,
                        local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_) - auVar20._0_8_ * dVar5;
  auVar29._8_8_ =
       auVar44._8_8_ *
       (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_,
                        local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_) - auVar20._8_8_ * dVar33;
  auVar44 = blendpd(auVar52,auVar29,2);
  dVar33 = auVar52._8_8_ + auVar52._8_8_;
  dVar2 = auVar29._0_8_ + auVar29._0_8_;
  uVar10 = SUB84(dVar2,0);
  uVar46 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar53._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar53._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar35._8_4_ = uVar10;
  auVar35._0_8_ = dVar33;
  auVar35._12_4_ = uVar46;
  auVar23._8_4_ = uVar10;
  auVar23._0_8_ = dVar33;
  auVar23._12_4_ = uVar46;
  auVar30._8_4_ = uVar10;
  auVar30._0_8_ = dVar33;
  auVar30._12_4_ = uVar46;
  auVar44 = blendpd(auVar30,auVar53,2);
  auVar36._0_8_ =
       auVar35._8_8_ *
       (double)CONCAT44(local_f8[0].Rotation.XY.m128d_f64[0]._4_4_,
                        local_f8[0].Rotation.XY.m128d_f64[0]._0_4_) - dVar33 * dVar37;
  auVar36._8_8_ =
       auVar53._0_8_ *
       (double)CONCAT44(local_f8[0].Rotation.XY.m128d_f64[1]._4_4_,
                        local_f8[0].Rotation.XY.m128d_f64[1]._0_4_) -
       auVar23._8_8_ *
       (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_,
                        local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_);
  auVar24._8_4_ = SUB84(auVar53._8_8_,0);
  auVar24._0_8_ = auVar53._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
  dVar37 = (double)local_160[0];
  auVar31._0_8_ =
       auVar44._0_8_ *
       (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[0]._4_4_,
                        local_f8[0].Rotation.ZW.m128d_f64[0]._0_4_) - auVar53._0_8_ * auVar20._0_8_;
  auVar31._8_8_ =
       auVar44._8_8_ *
       (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_,
                        local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_) - auVar24._8_8_ * auVar20._8_8_;
  auVar25._8_4_ = SUB84(auVar36._8_8_,0);
  auVar25._0_8_ = auVar36._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar44 = blendpd(auVar36,auVar31,2);
  dVar33 = dVar33 * (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_) + dVar32 +
           auVar25._8_8_;
  dVar2 = dVar2 * (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_,
                                   local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_) + dVar3 +
          auVar31._0_8_;
  local_128 = auVar53._0_8_ *
              (double)CONCAT44(local_f8[0].Rotation.ZW.m128d_f64[1]._4_4_,
                               local_f8[0].Rotation.ZW.m128d_f64[1]._0_4_) + dVar5 + auVar44._0_8_;
  dVar32 = (double)this->WindScale;
  local_118._8_4_ = SUB84(dVar2,0);
  local_118._s_0.X = dVar33;
  local_118._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar37 * dVar33 * dVar32;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar37 * local_128 * dVar32;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar37 * dVar2 * dVar32;
  local_118._s_0.Z = local_128;
  uVar14 = rand();
  dVar33 = (double)((float)(uVar14 & 0x7fff) * __real_38800100);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (__return_storage_ptr__->field0_0x0)._s_0.X * dVar33
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar33
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar33 * (__return_storage_ptr__->field0_0x0)._s_0.Z
  ;
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_138.NameAndInfo.Index.Value = FVar19.Value;
      local_138.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_150);
      TVar16.Pad = (uchar  [8])(local_150.QuadPart & 0xffffffff);
      local_138.StatData.Pad[0] = TVar16.Pad[0];
      local_138.StatData.Pad[1] = TVar16.Pad[1];
      local_138.StatData.Pad[2] = TVar16.Pad[2];
      local_138.StatData.Pad[3] = TVar16.Pad[3];
      local_138.StatData.Pad[4] = TVar16.Pad[4];
      local_138.StatData.Pad[5] = TVar16.Pad[5];
      local_138.StatData.Pad[6] = TVar16.Pad[6];
      local_138.StatData.Pad[7] = TVar16.Pad[7];
      FThreadStats::AddStatMessage(this_00,&local_138);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// HasPreUpdate @ 14de44120

bool __thiscall FAnimNode_KawaiiPhysics::HasPreUpdate(FAnimNode_KawaiiPhysics *this)

{
  return false;
}

// InitBoneConstraints @ 14de44130

void __thiscall FAnimNode_KawaiiPhysics::InitBoneConstraints(FAnimNode_KawaiiPhysics *this)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *pTVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  ForAnyElementType local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 local_d8;
  undefined2 uStack_d6;
  uint uStack_d4;
  uint uStack_d0;
  float fStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  
  pTVar18 = &this->MergedBoneConstraints;
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>::operator=
            (pTVar18,&this->BoneConstraints);
  TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>::
  Append<FModifyBoneConstraint,TSizedDefaultAllocator<32>_>(pTVar18,&this->BoneConstraintsData);
  local_res10 = (this->MergedBoneConstraints).ArrayNum;
  uVar9 = (ulonglong)(int)local_res10;
  pFVar17 = (pTVar18->AllocatorInstance).Data;
  local_108.Data = (FScriptContainerElement *)0x0;
  pFVar16 = pFVar17 + uVar9 * 0x38;
  local_100 = 0;
  local_res18 = pFVar16;
LAB_14de44196:
  do {
    if ((this->MergedBoneConstraints).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar17 == pFVar16) {
      pTVar18 = &this->MergedBoneConstraints;
      if ((pTVar18 == (TArray<FModifyBoneConstraint,TSizedDefaultAllocator<32>_> *)&local_108) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar13 = (longlong)(int)local_100;
      if ((int)local_100 != 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x38,4,(int)local_100,&pTVar18->AllocatorInstance,
                            &(this->MergedBoneConstraints).ArrayNum,
                            &(this->MergedBoneConstraints).ArrayMax);
        memcpy((pTVar18->AllocatorInstance).Data + (longlong)iVar12 * 0x38,local_108.Data,
               lVar13 * 0x38);
      }
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return;
    }
    pFVar1 = (this->ModifyBones).AllocatorInstance.Data;
    local_b8 = *(longlong *)pFVar17;
    lStack_b0 = *(longlong *)(pFVar17 + 8);
    local_a8 = *(longlong *)(pFVar17 + 0x10);
    lStack_a0 = *(longlong *)(pFVar17 + 0x18);
    local_98 = *(longlong *)(pFVar17 + 0x20);
    lStack_90 = *(longlong *)(pFVar17 + 0x28);
    local_88 = *(longlong *)(pFVar17 + 0x30);
    for (pFVar10 = pFVar1; pFVar10 != pFVar1 + (longlong)(this->ModifyBones).ArrayNum * 0xf0;
        pFVar10 = pFVar10 + 0xf0) {
      if (*(longlong *)pFVar10 == local_b8) {
        lVar13 = ((longlong)pFVar10 - (longlong)pFVar1) +
                 SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar10 - (longlong)pFVar1)
                        ,8);
        uVar14 = (int)(lVar13 >> 7) - (int)(lVar13 >> 0x3f);
        *(uint *)(pFVar17 + 0x24) = uVar14;
        if ((int)uVar14 < 0) goto LAB_14de44976;
        pFVar1 = (this->ModifyBones).AllocatorInstance.Data;
        local_78 = *(longlong *)pFVar17;
        lStack_70 = *(longlong *)(pFVar17 + 8);
        local_68 = *(longlong *)(pFVar17 + 0x10);
        lStack_60 = *(longlong *)(pFVar17 + 0x18);
        local_58 = *(longlong *)(pFVar17 + 0x20);
        lStack_50 = *(longlong *)(pFVar17 + 0x28);
        local_48 = *(longlong *)(pFVar17 + 0x30);
        pFVar10 = pFVar1;
        if (pFVar1 == pFVar1 + (longlong)(this->ModifyBones).ArrayNum * 0xf0) goto LAB_14de442b7;
        goto LAB_14de442a6;
      }
    }
    uVar9 = (ulonglong)local_res10;
    *(undefined4 *)(pFVar17 + 0x24) = 0xffffffff;
    pFVar17 = pFVar17 + 0x38;
  } while( true );
  while (pFVar10 = pFVar10 + 0xf0, pFVar10 != pFVar1 + (longlong)(this->ModifyBones).ArrayNum * 0xf0
        ) {
LAB_14de442a6:
    if (*(longlong *)pFVar10 == local_68) {
      lVar13 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar10 - (longlong)pFVar1),8
                     ) + ((longlong)pFVar10 - (longlong)pFVar1);
      iVar12 = (int)(lVar13 >> 7) - (int)(lVar13 >> 0x3f);
      *(int *)(pFVar17 + 0x28) = iVar12;
      if (iVar12 < 0) goto LAB_14de44976;
      uVar6 = 0;
      uVar7 = uVar6;
      if ((int)uVar14 < (this->ModifyBones).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
      uVar7 = *(uint *)(pFVar17 + 0x28);
      lVar13 = (longlong)(int)uVar14 * 0xf0;
      uVar14 = uVar6;
      if ((int)uVar7 < (this->ModifyBones).ArrayNum) {
        uVar14 = ~uVar7 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->ModifyBones).AllocatorInstance.Data;
      lVar11 = (longlong)(int)uVar7 * 0xf0;
      auVar19._0_8_ =
           (*(double *)(pFVar16 + lVar13 + 0x50) - *(double *)(pFVar1 + lVar11 + 0x50)) *
           (*(double *)(pFVar16 + lVar13 + 0x50) - *(double *)(pFVar1 + lVar11 + 0x50));
      auVar19._8_8_ = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ =
           (*(double *)(pFVar16 + lVar13 + 0x48) - *(double *)(pFVar1 + lVar11 + 0x48)) *
           (*(double *)(pFVar16 + lVar13 + 0x48) - *(double *)(pFVar1 + lVar11 + 0x48)) +
           (*(double *)(pFVar16 + lVar13 + 0x40) - *(double *)(pFVar1 + lVar11 + 0x40)) *
           (*(double *)(pFVar16 + lVar13 + 0x40) - *(double *)(pFVar1 + lVar11 + 0x40)) +
           auVar19._0_8_;
      auVar20 = sqrtpd(auVar19,auVar20);
      *(float *)(pFVar17 + 0x2c) = (float)auVar20._0_8_;
      pFVar16 = local_res18;
      if (this->bAutoAddChildDummyBoneConstraint == false) goto LAB_14de44976;
      uVar14 = *(uint *)(pFVar17 + 0x24);
      uVar7 = uVar6;
      if ((int)uVar14 < (this->ModifyBones).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
      puVar2 = *(uint **)(pFVar16 + (longlong)(int)uVar14 * 0xf0 + 0x18);
      iVar12 = *(int *)(pFVar16 + (longlong)(int)uVar14 * 0xf0 + 0x20);
      puVar15 = puVar2;
      goto joined_r0x00014de44476;
    }
  }
LAB_14de442b7:
  uVar9 = (ulonglong)local_res10;
  *(undefined4 *)(pFVar17 + 0x28) = 0xffffffff;
  pFVar17 = pFVar17 + 0x38;
  goto LAB_14de44196;
joined_r0x00014de44476:
  if (puVar15 == puVar2 + iVar12) goto LAB_14de444ee;
  uVar14 = *puVar15;
  if (-1 < (int)uVar14) {
    uVar7 = uVar6;
    if ((int)uVar14 < (this->ModifyBones).ArrayNum) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ModifyBones).AllocatorInstance.Data[(longlong)(int)uVar14 * 0xf0 + 0xec] ==
        (FScriptContainerElement)0x1) {
      uVar14 = (uint)((longlong)puVar15 - (longlong)puVar2 >> 2);
      goto LAB_14de444f3;
    }
  }
  puVar15 = puVar15 + 1;
  goto joined_r0x00014de44476;
LAB_14de444ee:
  uVar14 = 0xffffffff;
LAB_14de444f3:
  uVar7 = *(uint *)(pFVar17 + 0x28);
  if ((int)uVar7 < (this->ModifyBones).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
  puVar2 = *(uint **)(pFVar16 + (longlong)(int)uVar7 * 0xf0 + 0x18);
  iVar12 = *(int *)(pFVar16 + (longlong)(int)uVar7 * 0xf0 + 0x20);
  for (puVar15 = puVar2; puVar15 != puVar2 + iVar12; puVar15 = puVar15 + 1) {
    uVar7 = *puVar15;
    if (-1 < (int)uVar7) {
      uVar6 = 0;
      if ((int)uVar7 < (this->ModifyBones).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((this->ModifyBones).AllocatorInstance.Data[(longlong)(int)uVar7 * 0xf0 + 0xec] ==
          (FScriptContainerElement)0x1) {
        uVar7 = (uint)((longlong)puVar15 - (longlong)puVar2 >> 2);
        goto LAB_14de445df;
      }
    }
  }
  uVar7 = 0xffffffff;
LAB_14de445df:
  pFVar16 = local_res18;
  if ((-1 < (int)uVar14) && (-1 < (int)uVar7)) {
    uVar6 = *(uint *)(pFVar17 + 0x24);
    local_f8 = 0;
    uStack_f0 = 0x7fffffff;
    uStack_ec = 0xffffffff;
    uVar8 = 0;
    if ((int)uVar6 < (this->ModifyBones).ArrayNum) {
      uVar8 = ~uVar6 >> 0x1f;
    }
    local_e8 = 0;
    uStack_e0 = 0x7fffffff;
    uStack_dc = 0xffffffff;
    local_d8 = 0x200;
    uStack_d4 = 0xffffffff;
    uStack_d0 = 0xffffffff;
    fStack_cc = -1.0;
    local_c8 = local_c8 & 0xffffff00;
    uStack_c4 = 0;
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
    uVar8 = 0;
    if ((int)uVar14 < *(int *)(pFVar16 + (longlong)(int)uVar6 * 0xf0 + 0x20)) {
      uVar8 = ~uVar14 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = *(uint *)(pFVar17 + 0x28);
    uStack_d4 = *(uint *)(*(longlong *)(pFVar16 + (longlong)(int)uVar6 * 0xf0 + 0x18) +
                         (longlong)(int)uVar14 * 4);
    uVar6 = 0;
    uVar14 = uVar6;
    if ((int)uVar8 < (this->ModifyBones).ArrayNum) {
      uVar14 = ~uVar8 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
    uVar14 = uVar6;
    if ((int)uVar7 < *(int *)(pFVar16 + (longlong)(int)uVar8 * 0xf0 + 0x20)) {
      uVar14 = ~uVar7 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar13 = (longlong)(int)uStack_d4;
    uStack_d0 = *(uint *)(*(longlong *)(pFVar16 + (longlong)(int)uVar8 * 0xf0 + 0x18) +
                         (longlong)(int)uVar7 * 4);
    uVar14 = uVar6;
    if ((int)uStack_d4 < (this->ModifyBones).ArrayNum) {
      uVar14 = ~uStack_d4 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar16 = (this->ModifyBones).AllocatorInstance.Data;
    lVar13 = lVar13 * 0xf0;
    lVar11 = (longlong)(int)uStack_d0;
    if ((int)uStack_d0 < (this->ModifyBones).ArrayNum) {
      uVar6 = ~uStack_d0 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (this->ModifyBones).AllocatorInstance.Data;
    lVar11 = lVar11 * 0xf0;
    local_c8 = CONCAT31(local_c8._1_3_,1);
    auVar21._0_8_ =
         (*(double *)(pFVar16 + lVar13 + 0x50) - *(double *)(pFVar1 + lVar11 + 0x50)) *
         (*(double *)(pFVar16 + lVar13 + 0x50) - *(double *)(pFVar1 + lVar11 + 0x50));
    auVar21._8_8_ = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (*(double *)(pFVar16 + lVar13 + 0x48) - *(double *)(pFVar1 + lVar11 + 0x48)) *
                   (*(double *)(pFVar16 + lVar13 + 0x48) - *(double *)(pFVar1 + lVar11 + 0x48)) +
                   (*(double *)(pFVar16 + lVar13 + 0x40) - *(double *)(pFVar1 + lVar11 + 0x40)) *
                   (*(double *)(pFVar16 + lVar13 + 0x40) - *(double *)(pFVar1 + lVar11 + 0x40)) +
                   auVar21._0_8_;
    auVar20 = sqrtpd(auVar21,auVar4);
    fStack_cc = (float)auVar20._0_8_;
    if (((local_108.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < local_108.Data + (longlong)local_100._4_4_ * 0x38))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar12 = (int)local_100;
    if ((int)local_100 == local_100._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x438,&local_108,(int *)((longlong)&local_100 + 4));
    }
    local_100 = CONCAT44(local_100._4_4_,iVar12 + 1);
    lVar13 = (longlong)iVar12 * 0x38;
    *(undefined8 *)(local_108.Data + lVar13) = local_f8;
    *(ulonglong *)(local_108.Data + lVar13 + 8) = CONCAT44(uStack_ec,uStack_f0);
    *(undefined8 *)(local_108.Data + lVar13 + 0x10) = local_e8;
    *(ulonglong *)(local_108.Data + lVar13 + 0x10 + 8) = CONCAT44(uStack_dc,uStack_e0);
    *(ulonglong *)(local_108.Data + lVar13 + 0x20) =
         CONCAT44(uStack_d4,CONCAT22(uStack_d6,local_d8));
    *(ulonglong *)(local_108.Data + lVar13 + 0x20 + 8) = CONCAT44(fStack_cc,uStack_d0);
    *(ulonglong *)(local_108.Data + lVar13 + 0x30) = CONCAT44(uStack_c4,local_c8);
    pFVar16 = local_res18;
  }
LAB_14de44976:
  uVar9 = (ulonglong)local_res10;
  pFVar17 = pFVar17 + 0x38;
  goto LAB_14de44196;
}

// InitModifyBones @ 14de44a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::InitModifyBones
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          )

{
  TArray<FKawaiiPhysicsModifyBone,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_InitModifyBones> FVar7;
  UObject *pUVar8;
  int *piVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  int iVar13;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_48;
  
  FVar7 = StatPtr_STAT_KawaiiPhysics_InitModifyBones;
  if (StatPtr_STAT_KawaiiPhysics_InitModifyBones ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_InitModifyBones>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_KawaiiPhysics_InitModifyBones");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_InitModifyBones>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_InitModifyBones,
                       *pFVar6,L"KawaiiPhysics_InitModifyBones","STATGROUP_Anim","STATCAT_Advanced",
                       L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0xd2);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar11.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      goto LAB_14de44bb1;
    }
  }
  bVar4 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14de44bb1:
  pUVar8 = FWeakObjectPtr::Get(&(param_2->AssetSkeleton).WeakPtr);
  pTVar1 = &this->ModifyBones;
  DestructItems<FKawaiiPhysicsModifyBone,int>
            ((FKawaiiPhysicsModifyBone *)(pTVar1->AllocatorInstance).Data,
             (this->ModifyBones).ArrayNum);
  piVar9 = &(this->ModifyBones).ArrayMax;
  (this->ModifyBones).ArrayNum = 0;
  if (*piVar9 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,0,&pTVar1->AllocatorInstance,0,piVar9);
  }
  FVar2 = (this->RootBone).BoneName;
  iVar13 = -1;
  if (FVar2 != (FName)0x0) {
    piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&pUVar8[5].field_0x10,FVar2);
    if (piVar9 != (int *)0x0) {
      iVar13 = *piVar9;
    }
  }
  AddModifyBone(this,param_1,param_2,(FReferenceSkeleton *)&pUVar8[1].field_0x20,iVar13);
  if (0 < (this->ModifyBones).ArrayNum) {
    this->TotalBoneLength = 0.0;
    CalcBoneLength(this,(FKawaiiPhysicsModifyBone *)(pTVar1->AllocatorInstance).Data,
                   &param_2->RefSkeleton->FinalRefBonePose);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar9 = &this_00->ScopeCount;
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitializeBoneReferences @ 14de44d60

void __thiscall
FAnimNode_KawaiiPhysics::InitializeBoneReferences
          (FAnimNode_KawaiiPhysics *this,FBoneContainer *param_1)

{
  int iVar1;
  FBoneReference *pFVar2;
  FBoneReference *pFVar3;
  undefined1 local_res8 [8];
  
  FBoneReference::Initialize(&this->RootBone,param_1);
  iVar1 = (this->ModifyBones).ArrayNum;
  pFVar3 = (FBoneReference *)(this->ModifyBones).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((this->ModifyBones).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FBoneReference::Initialize(pFVar3,param_1);
    pFVar3 = pFVar3 + 0xf;
  }
  iVar1 = (this->SphericalLimits).ArrayNum;
  pFVar3 = (FBoneReference *)(this->SphericalLimits).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 9;
  while( true ) {
    if ((this->SphericalLimits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FBoneReference::Initialize(pFVar3,param_1);
    pFVar3 = pFVar3 + 9;
  }
  iVar1 = (this->CapsuleLimits).ArrayNum;
  pFVar3 = (FBoneReference *)(this->CapsuleLimits).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 9;
  while( true ) {
    if ((this->CapsuleLimits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FCapsuleLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FBoneReference::Initialize(pFVar3,param_1);
    pFVar3 = pFVar3 + 9;
  }
  iVar1 = (this->PlanarLimits).ArrayNum;
  pFVar3 = (FBoneReference *)(this->PlanarLimits).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0xb;
  while( true ) {
    if ((this->PlanarLimits).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FBoneReference::Initialize(pFVar3,param_1);
    pFVar3 = pFVar3 + 0xb;
  }
  iVar1 = (this->BoneConstraints).ArrayNum;
  pFVar3 = (FBoneReference *)(this->BoneConstraints).AllocatorInstance.Data;
  pFVar2 = (FBoneReference *)((longlong)pFVar3 + (longlong)iVar1 * 0x38);
  while( true ) {
    if ((this->BoneConstraints).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FBoneReference::Initialize(pFVar3,param_1);
    FBoneReference::Initialize(pFVar3 + 1,param_1);
    pFVar3 = (FBoneReference *)&pFVar3[3].field_0x8;
  }
  return;
}

// Initialize_AnyThread @ 14de44f40

void __thiscall
FAnimNode_KawaiiPhysics::Initialize_AnyThread
          (FAnimNode_KawaiiPhysics *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  longlong lVar2;
  FBoneContainer *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  lVar2 = *(longlong *)param_1;
  if (*(longlong *)(lVar2 + 0x660) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = *(FBoneContainer **)(lVar2 + 0x660);
  ApplyLimitsDataAsset(this,pFVar3);
  ApplyBoneConstraintDataAsset(this,pFVar3);
  DestructItems<FKawaiiPhysicsModifyBone,int>
            ((FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data,
             (this->ModifyBones).ArrayNum);
  piVar1 = &(this->ModifyBones).ArrayMax;
  (this->ModifyBones).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xf0,0x10,0,&(this->ModifyBones).AllocatorInstance,0,piVar1);
  }
  fVar5 = __real_3f800000;
  this->bResetDynamics = false;
  this->DeltaTimeOld = fVar5 / (float)this->TargetFramerate;
  return;
}

// IsValidToEvaluate @ 14de45030

bool __thiscall
FAnimNode_KawaiiPhysics::IsValidToEvaluate
          (FAnimNode_KawaiiPhysics *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->RootBone).BoneName.ComparisonIndex.Value);
  return bVar1;
}

// NeedsDynamicReset @ 14de45050

bool __thiscall FAnimNode_KawaiiPhysics::NeedsDynamicReset(FAnimNode_KawaiiPhysics *this)

{
  return true;
}

// PreUpdate @ 14de45060

void __thiscall
FAnimNode_KawaiiPhysics::PreUpdate(FAnimNode_KawaiiPhysics *this,UAnimInstance *param_1)

{
  return;
}

// ResetDynamics @ 14de45070

void __thiscall
FAnimNode_KawaiiPhysics::ResetDynamics(FAnimNode_KawaiiPhysics *this,ETeleportType param_1)

{
  this->bResetDynamics = (bool)(this->bResetDynamics | param_1 == ResetPhysics);
  return;
}

// Simulate @ 14de45470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::Simulate
          (FAnimNode_KawaiiPhysics *this,FKawaiiPhysicsModifyBone *param_1,FSceneInterface *param_2,
          TTransform<double> *param_3,TVector<double> *param_4,float *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Simulate> FVar14;
  TVector<double> *pTVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  longlong lVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_108;
  FName local_100;
  FStatMessage local_f0;
  FName local_e0;
  TVector<double>_u_0 local_d8;
  TVector<double> local_b8;
  TVector<double> local_a0 [4];
  
  lVar19 = 0;
  FVar14 = StatPtr_STAT_KawaiiPhysics_Simulate;
  if (StatPtr_STAT_KawaiiPhysics_Simulate ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Simulate>)0x0) {
    pFVar13 = ::FName::FName(&local_e0,"STAT_KawaiiPhysics_Simulate");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_Simulate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_Simulate,*pFVar13,
                        L"KawaiiPhysics_Simulate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar17.Value;
        local_res10.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x2bf);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108.s.LowPart = FVar17.Value;
      local_108.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      goto LAB_14de455e2;
    }
  }
  bVar7 = false;
  FVar18 = local_100;
LAB_14de455e2:
  uVar16 = param_1->ParentIndex;
  uVar12 = 0;
  if ((int)uVar16 < (this->ModifyBones).ArrayNum) {
    uVar12 = ~uVar16 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  fVar9 = __real_3f800000;
  dVar25 = (param_1->Location).field0_0x0._s_0.X;
  dVar2 = (param_1->PrevLocation).field0_0x0._s_0.X;
  dVar23 = (param_1->Location).field0_0x0._s_0.Y;
  dVar3 = (param_1->PrevLocation).field0_0x0._s_0.Y;
  dVar24 = (param_1->Location).field0_0x0._s_0.Z;
  dVar27 = (param_1->PrevLocation).field0_0x0._s_0.Z;
  dVar21 = __real_3ff0000000000000 / (double)this->DeltaTimeOld;
  pFVar4 = (this->ModifyBones).AllocatorInstance.Data;
  dVar22 = (param_1->Location).field0_0x0._s_0.Y;
  (param_1->PrevLocation).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (param_1->PrevLocation).field0_0x0._s_0.Y = dVar22;
  fVar20 = (param_1->PhysicsSettings).Damping;
  (param_1->PrevLocation).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar22 = (double)(fVar9 - fVar20);
  dVar25 = (dVar25 - dVar2) * dVar21 * dVar22;
  dVar2 = (dVar23 - dVar3) * dVar21 * dVar22;
  dVar22 = (dVar24 - dVar27) * dVar21 * dVar22;
  if ((this->bEnableWind != false) && (param_2 != (FSceneInterface *)0x0)) {
    pTVar15 = GetWindVelocity(this,&local_b8,param_2,param_3,param_1);
    dVar23 = (double)this->TargetFramerate;
    dVar25 = dVar25 + dVar23 * (pTVar15->field0_0x0)._s_0.X;
    dVar2 = dVar2 + dVar23 * (pTVar15->field0_0x0)._s_0.Y;
    dVar22 = dVar22 + dVar23 * (pTVar15->field0_0x0)._s_0.Z;
  }
  dVar23 = (double)this->DeltaTime;
  dVar21 = dVar23 * dVar2 + (param_1->Location).field0_0x0._s_0.Y;
  dVar24 = dVar23 * dVar25 + (param_1->Location).field0_0x0._s_0.X;
  dVar27 = dVar23 * dVar22 + (param_1->Location).field0_0x0._s_0.Z;
  (param_1->Location).field0_0x0._s_0.Y = dVar21;
  (param_1->Location).field0_0x0._s_0.X = dVar24;
  (param_1->Location).field0_0x0._s_0.Z = dVar27;
  dVar25 = (double)(fVar9 - (param_1->PhysicsSettings).WorldDampingLocation);
  dVar21 = dVar21 + dVar25 * (this->SkelCompMoveVector).field0_0x0._s_0.Y;
  dVar27 = dVar25 * (this->SkelCompMoveVector).field0_0x0._s_0.Z + dVar27;
  dVar24 = dVar25 * (this->SkelCompMoveVector).field0_0x0._s_0.X + dVar24;
  (param_1->Location).field0_0x0._s_0.Y = dVar21;
  (param_1->Location).field0_0x0._s_0.Z = dVar27;
  (param_1->Location).field0_0x0._s_0.X = dVar24;
  local_d8._s_0.X = (param_1->PrevLocation).field0_0x0._s_0.X;
  local_d8._s_0.Y = (param_1->PrevLocation).field0_0x0._s_0.Y;
  local_d8._s_0.Z = (param_1->PrevLocation).field0_0x0._s_0.Z;
  pTVar15 = UE::Math::TQuat<double>::RotateVector
                      (&this->SkelCompMoveRotation,local_a0,(TVector<double> *)&local_d8._s_0);
  dVar25 = (pTVar15->field0_0x0)._s_0.Z;
  dVar2 = (param_1->PrevLocation).field0_0x0._s_0.Z;
  dVar22 = (double)(fVar9 - (param_1->PhysicsSettings).WorldDampingRotation);
  dVar23 = (pTVar15->field0_0x0)._s_0.X;
  dVar3 = (param_1->PrevLocation).field0_0x0._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y =
       ((pTVar15->field0_0x0)._s_0.Y - (param_1->PrevLocation).field0_0x0._s_0.Y) * dVar22 + dVar21;
  (param_1->Location).field0_0x0._s_0.Z = (dVar25 - dVar2) * dVar22 + dVar27;
  (param_1->Location).field0_0x0._s_0.X = (dVar23 - dVar3) * dVar22 + dVar24;
  pTVar10 = CVarEnableOldPhysicsMethodGravity.Ref;
  bVar11 = IsInParallelGameThread();
  if (!bVar11) {
    bVar11 = IsInGameThread();
    if (!bVar11) {
      lVar19 = 4;
    }
  }
  if (*(int *)((longlong)pTVar10->ShadowedValue + lVar19) == 0) {
    dVar25 = (double)this->DeltaTime;
    dVar2 = dVar25 * (param_4->field0_0x0)._s_0.Y * dVar25 * __real_3fe0000000000000;
    dVar23 = dVar25 * dVar25 * (param_4->field0_0x0)._s_0.Z * __real_3fe0000000000000;
    (param_1->Location).field0_0x0._s_0.X =
         dVar25 * dVar25 * (param_4->field0_0x0)._s_0.X * __real_3fe0000000000000 +
         (param_1->Location).field0_0x0._s_0.X;
  }
  else {
    dVar25 = (double)this->DeltaTime;
    dVar2 = dVar25 * (param_4->field0_0x0)._s_0.Y;
    dVar23 = dVar25 * (param_4->field0_0x0)._s_0.Z;
    (param_1->Location).field0_0x0._s_0.X =
         dVar25 * (param_4->field0_0x0)._s_0.X + (param_1->Location).field0_0x0._s_0.X;
  }
  dVar23 = dVar23 + (param_1->Location).field0_0x0._s_0.Z;
  dVar2 = dVar2 + (param_1->Location).field0_0x0._s_0.Y;
  (param_1->Location).field0_0x0._s_0.Z = dVar23;
  (param_1->Location).field0_0x0._s_0.Y = dVar2;
  fVar20 = powf(fVar9 - (param_1->PhysicsSettings).Stiffness,*param_5);
  dVar25 = (param_1->PoseLocation).field0_0x0._s_0.Y;
  dVar3 = (param_1->PoseLocation).field0_0x0._s_0.Z;
  dVar24 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0x98);
  dVar27 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0xa0);
  dVar26 = (double)(fVar9 - fVar20);
  dVar22 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0x48);
  dVar21 = *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0x50);
  (param_1->Location).field0_0x0._s_0.X =
       ((((param_1->PoseLocation).field0_0x0._s_0.X -
         *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0x90)) +
        *(double *)(pFVar4 + (longlong)(int)uVar16 * 0xf0 + 0x40)) -
       (param_1->Location).field0_0x0._s_0.X) * dVar26 + (param_1->Location).field0_0x0._s_0.X;
  (param_1->Location).field0_0x0._s_0.Y = (((dVar25 - dVar24) + dVar22) - dVar2) * dVar26 + dVar2;
  (param_1->Location).field0_0x0._s_0.Z =
       (((dVar3 - dVar27) + dVar21) - dVar23) * dVar26 + (param_1->Location).field0_0x0._s_0.Z;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_f0.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_f0.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_108);
      local_f0.StatData.Pad[4] = '\0';
      local_f0.StatData.Pad[5] = '\0';
      local_f0.StatData.Pad[6] = '\0';
      local_f0.StatData.Pad[7] = '\0';
      local_f0.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_f0.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_f0.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_f0.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_f0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SimulateModifyBones @ 14de45aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::SimulateModifyBones
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          ,TTransform<double> *param_3)

{
  double dVar1;
  EPlanarConstraint EVar2;
  uint uVar3;
  USkeletalMeshComponent *this_00;
  code *pcVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TTransform<double> *pTVar10;
  FComponentSpacePoseContext *pFVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_SimulatemodifyBones> FVar16;
  UWorld *pUVar17;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByCollision> FVar18;
  int iVar19;
  FNameEntryId FVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  FKawaiiPhysicsModifyBone *pFVar23;
  FScriptContainerElement *pFVar24;
  FKawaiiPhysicsModifyBone *pFVar25;
  FKawaiiPhysicsModifyBone *pFVar26;
  FSceneInterface *pFVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  FNameEntryId FVar47;
  uint uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  double dVar62;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 local_257;
  undefined1 local_256;
  undefined1 local_255;
  undefined1 local_254;
  undefined1 local_253;
  undefined1 local_252 [2];
  FName local_250;
  FName local_248;
  FColor_u_0 local_240;
  float local_23c;
  FColor_u_0 local_238 [4];
  double local_228;
  double dStack_220;
  double local_218;
  FName local_208;
  FName local_200;
  uint local_1f8;
  uint uStack_1f4;
  TTransform<double> *local_1f0;
  FBoneContainer *local_1e8;
  FName local_1e0;
  FName local_1d0;
  USkeletalMeshComponent *local_1c0;
  FComponentSpacePoseContext *local_1b8;
  TVector<double> local_1b0;
  TVector<double> local_198;
  TVector<double> local_180;
  FName local_168;
  double local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [8];
  undefined8 uVar39;
  
  FVar16 = StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones;
  local_1f0 = param_3;
  local_1e8 = param_2;
  local_1b8 = param_1;
  if (StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_SimulatemodifyBones>)0x0) {
    pFVar15 = ::FName::FName(&local_168,"STAT_KawaiiPhysics_SimulatemodifyBones");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_SimulatemodifyBones>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_SimulatemodifyBones
                        ,*pFVar15,L"KawaiiPhysics_SimulatemodifyBones","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar16;
  bVar8 = false;
  bVar9 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  bVar12 = false;
  bVar13 = false;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_208.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x249);
        bVar8 = true;
        bVar9 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_250 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar12 = true;
      goto LAB_14de45c1e;
    }
  }
  bVar9 = bVar13;
  bVar8 = bVar12;
  bVar12 = false;
  local_250 = local_1e0;
  FVar22 = local_1e0;
LAB_14de45c1e:
  if (0.0 < this->DeltaTime) {
    lVar28 = param_1->_padding_;
    if ((*(longlong *)(lVar28 + 0x158) == 0) &&
       (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_2821110184175206020>,true,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                            ,0x17c,"SkeletalMeshComponent"), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = *(USkeletalMeshComponent **)(lVar28 + 0x158);
    iVar19 = (this->ModifyBones).ArrayNum;
    pFVar21 = (this->ModifyBones).AllocatorInstance.Data;
    pFVar24 = pFVar21 + (longlong)iVar19 * 0xf0;
    local_1c0 = this_00;
    while( true ) {
      if ((this->ModifyBones).ArrayNum != iVar19) {
        local_257 = 0;
        `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_257);
      }
      if (pFVar21 == pFVar24) break;
      if (((*(uint *)(pFVar21 + 8) & 0x40000000) == 0) ||
         (pFVar21[0xec] != (FScriptContainerElement)0x0)) {
        if (*(int *)(pFVar21 + 0x10) < 0) {
          pFVar21[0xed] = (FScriptContainerElement)0x1;
          *(undefined8 *)(pFVar21 + 0x58) = *(undefined8 *)(pFVar21 + 0x40);
          *(undefined8 *)(pFVar21 + 0x60) = *(undefined8 *)(pFVar21 + 0x48);
          *(undefined8 *)(pFVar21 + 0x68) = *(undefined8 *)(pFVar21 + 0x50);
          *(undefined8 *)(pFVar21 + 0x40) = *(undefined8 *)(pFVar21 + 0x90);
          *(undefined8 *)(pFVar21 + 0x48) = *(undefined8 *)(pFVar21 + 0x98);
          *(undefined8 *)(pFVar21 + 0x50) = *(undefined8 *)(pFVar21 + 0xa0);
          pFVar21 = pFVar21 + 0xf0;
        }
        else {
          pFVar21[0xed] = (FScriptContainerElement)0x0;
          pFVar21 = pFVar21 + 0xf0;
        }
      }
      else {
        pFVar21[0xed] = (FScriptContainerElement)0x1;
        pFVar21 = pFVar21 + 0xf0;
      }
    }
    auVar38 = *(undefined1 (*) [16])&(this->Gravity).field0_0x0;
    dVar1 = (this->Gravity).field0_0x0._s_0.Z;
    local_23c = (float)this->TargetFramerate * this->DeltaTime;
    dVar55 = (param_3->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar58 = (param_3->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar59 = (param_3->Rotation).ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar44 = (param_3->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar45._8_4_ = SUB84(dVar58,0);
    auVar45._0_8_ = dVar55;
    auVar45._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    auVar43._8_8_ = 0;
    auVar43._0_8_ = dVar1;
    auVar41 = blendpd(auVar38,auVar43,2);
    dVar62 = auVar38._8_8_;
    auVar46._8_4_ = SUB84(dVar44,0);
    auVar46._0_8_ = dVar59;
    auVar46._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    auVar46 = blendpd(auVar45,auVar46,2);
    auVar32._8_4_ = SUB84(dVar59,0);
    auVar32._0_8_ = dVar58;
    auVar32._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    auVar60._0_8_ = dVar62 * dVar55 - dVar58 * auVar38._0_8_;
    auVar60._8_8_ = dVar1 * dVar58 - auVar32._8_8_ * dVar62;
    auVar42._0_8_ = auVar41._0_8_ * dVar59 - auVar46._0_8_ * dVar1;
    auVar42._8_8_ = auVar41._8_8_ * dVar44 - auVar46._8_8_ * 0.0;
    auVar41 = blendpd(auVar60,auVar42,2);
    dVar31 = auVar60._8_8_ + auVar60._8_8_;
    dVar40 = auVar42._0_8_ + auVar42._0_8_;
    uVar53 = SUB84(dVar40,0);
    uVar54 = (undefined4)((ulonglong)dVar40 >> 0x20);
    auVar61._0_8_ = auVar41._0_8_ + auVar41._0_8_;
    auVar61._8_8_ = auVar41._8_8_ + auVar41._8_8_;
    auVar56._8_4_ = uVar53;
    auVar56._0_8_ = dVar31;
    auVar56._12_4_ = uVar54;
    auVar33._8_4_ = uVar53;
    auVar33._0_8_ = dVar31;
    auVar33._12_4_ = uVar54;
    auVar50._8_4_ = uVar53;
    auVar50._0_8_ = dVar31;
    auVar50._12_4_ = uVar54;
    auVar57._0_8_ = auVar56._8_8_ * dVar55 - dVar31 * dVar58;
    auVar57._8_8_ = auVar61._0_8_ * dVar58 - auVar33._8_8_ * dVar59;
    auVar41 = blendpd(auVar50,auVar61,2);
    auVar34._8_4_ = SUB84(auVar61._8_8_,0);
    auVar34._0_8_ = auVar61._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar51._0_8_ = auVar41._0_8_ * dVar59 - auVar61._0_8_ * auVar46._0_8_;
    auVar51._8_8_ = auVar41._8_8_ * dVar44 - auVar34._8_8_ * auVar46._8_8_;
    auVar46 = *(undefined1 (*) [16])(param_3->Scale3D).ZW.m128d_f64;
    lVar28 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar46._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar46._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar43 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(param_3->Scale3D).XY.m128d_f64);
    lVar29 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 4) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                *(uint *)(param_3->Scale3D).XY.m128d_f64 &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar30 = -(ulonglong)
              ((double)CONCAT44(*(uint *)((longlong)(param_3->Scale3D).XY.m128d_f64 + 0xc) &
                                _UNK_15061cc8c,
                                *(uint *)((param_3->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar35._8_4_ = SUB84(auVar57._8_8_,0);
    auVar35._0_8_ = auVar57._0_8_;
    auVar35._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar41._0_8_ = auVar46._0_8_;
    auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
    dVar55 = (double)CONCAT44(~(uint)((ulonglong)lVar30 >> 0x20) & auVar43._12_4_,
                              ~(uint)lVar30 & auVar43._8_4_) *
             (dVar40 * dVar44 + dVar62 + auVar51._0_8_);
    auVar41 = blendpd(auVar57,auVar51,2);
    local_158._8_4_ = SUB84(dVar55,0);
    local_158._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar29 >> 0x20) & auVar43._4_4_,
                          ~(uint)lVar29 & auVar43._0_4_) *
         (dVar31 * dVar44 + auVar38._0_8_ + auVar35._8_8_);
    local_158._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
    local_158._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar46._4_4_,
                          ~(uint)lVar28 & auVar46._0_4_) *
         (auVar61._0_8_ * dVar44 + dVar1 + auVar41._0_8_);
    if ((this_00 == (USkeletalMeshComponent *)0x0) ||
       (((pUVar17 = (UWorld *)this_00->_padding_, pUVar17 == (UWorld *)0x0 &&
         (pUVar17 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
         pUVar17 == (UWorld *)0x0)) || (pFVar27 = pUVar17->Scene, pFVar27 == (FSceneInterface *)0x0)
        ))) {
      pFVar27 = (FSceneInterface *)0x0;
    }
    pTVar10 = local_1f0;
    iVar19 = (this->ModifyBones).ArrayNum;
    pFVar23 = (FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data;
    pFVar25 = pFVar23 + iVar19;
    while( true ) {
      if ((this->ModifyBones).ArrayNum != iVar19) {
        local_256 = 0;
        `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_256);
      }
      if (pFVar23 == pFVar25) break;
      if (pFVar23->bSkipSimulate == false) {
        Simulate(this,pFVar23,pFVar27,pTVar10,(TVector<double> *)&local_158._s_0,&local_23c);
      }
      pFVar23 = pFVar23 + 1;
    }
    if (0 < this->BoneConstraintIterationCountBeforeCollision) {
      iVar19 = (this->MergedBoneConstraints).ArrayNum;
      pFVar21 = (this->MergedBoneConstraints).AllocatorInstance.Data;
      pFVar24 = pFVar21 + (longlong)iVar19 * 0x38;
      while( true ) {
        if ((this->MergedBoneConstraints).ArrayNum != iVar19) {
          local_255 = 0;
          `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_255);
        }
        if (pFVar21 == pFVar24) break;
        *(undefined4 *)(pFVar21 + 0x34) = 0;
        pFVar21 = pFVar21 + 0x38;
      }
      iVar19 = 0;
      if (0 < this->BoneConstraintIterationCountBeforeCollision) {
        do {
          AdjustByBoneConstraints(this);
          iVar19 = iVar19 + 1;
        } while (iVar19 < this->BoneConstraintIterationCountBeforeCollision);
      }
    }
    iVar19 = (this->ModifyBones).ArrayNum;
    pFVar23 = (FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data;
    pFVar25 = pFVar23 + iVar19;
    while( true ) {
      if ((this->ModifyBones).ArrayNum != iVar19) {
        local_254 = 0;
        `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_254);
      }
      if (pFVar23 == pFVar25) break;
      if (pFVar23->bSkipSimulate == false) {
        FVar18 = StatPtr_STAT_KawaiiPhysics_AdjustByCollision;
        if (StatPtr_STAT_KawaiiPhysics_AdjustByCollision ==
            (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByCollision>)0x0) {
          pFVar15 = ::FName::FName(&local_248,"STAT_KawaiiPhysics_AdjustByCollision");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_AdjustByCollision>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_KawaiiPhysics_AdjustByCollision,*pFVar15,
                              L"KawaiiPhysics_AdjustByCollision","STATGROUP_Anim","STATCAT_Advanced"
                              ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
        }
        FVar22 = *(FName *)FVar18;
        bVar6 = false;
        bVar13 = false;
        local_1d0.ComparisonIndex.Value = 0;
        local_1d0.Number = 0;
        FVar20 = FVar22.ComparisonIndex.Value;
        uVar52 = FVar22.Number;
        if ((FVar20.Value == 0) && (uVar52 == 0)) {
LAB_14de46191:
          bVar7 = false;
          FVar22 = local_1d0;
        }
        else {
          if (GCycleStatsShouldEmitNamedEvents != 0) {
            local_238[0].Bits = 0;
            FGenericPlatformMisc::BeginNamedEvent
                      ((FColor *)&local_238[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
            bVar6 = false;
            bVar13 = true;
            if (-1 < CpuChannel->Enabled) {
              local_200.ComparisonIndex.Value = FVar20.Value;
              local_200.Number = uVar52;
              FCpuProfilerTrace::OutputBeginDynamicEventWithId
                        (&local_200,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                         ,0x289);
              bVar6 = true;
              bVar13 = true;
            }
          }
          if (FThreadStats::bPrimaryEnable == false) goto LAB_14de46191;
          local_1f8 = FVar20.Value;
          uStack_1f4 = uVar52;
          local_1d0 = FVar22;
          FThreadStats::AddMessage(FVar22,CycleScopeStart);
          bVar7 = true;
        }
        AdjustBySphereCollision(this,pFVar23,&this->SphericalLimits);
        AdjustBySphereCollision(this,pFVar23,&this->SphericalLimitsData);
        AdjustByCapsuleCollision(this,pFVar23,&this->CapsuleLimits);
        AdjustByCapsuleCollision(this,pFVar23,&this->CapsuleLimitsData);
        AdjustByPlanerCollision(this,pFVar23,&this->PlanarLimits);
        AdjustByPlanerCollision(this,pFVar23,&this->PlanarLimitsData);
        if (this->bAllowWorldCollision != false) {
          AdjustByWorldCollision(this,pFVar23,local_1c0,local_1e8);
        }
        if (bVar13) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar6) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (bVar7) {
          FThreadStats::AddMessage(FVar22,CycleScopeEnd);
        }
      }
      pFVar23 = pFVar23 + 1;
    }
    if (0 < this->BoneConstraintIterationCountAfterCollision) {
      iVar19 = (this->MergedBoneConstraints).ArrayNum;
      pFVar21 = (this->MergedBoneConstraints).AllocatorInstance.Data;
      pFVar24 = pFVar21 + (longlong)iVar19 * 0x38;
      while( true ) {
        if ((this->MergedBoneConstraints).ArrayNum != iVar19) {
          local_253 = 0;
          `TCheckedPointerIterator<FModifyBoneConstraint,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_253);
        }
        if (pFVar21 == pFVar24) break;
        *(undefined4 *)(pFVar21 + 0x34) = 0;
        pFVar21 = pFVar21 + 0x38;
      }
      iVar19 = 0;
      if (0 < this->BoneConstraintIterationCountAfterCollision) {
        do {
          AdjustByBoneConstraints(this);
          iVar19 = iVar19 + 1;
        } while (iVar19 < this->BoneConstraintIterationCountAfterCollision);
      }
    }
    pFVar11 = local_1b8;
    pTVar10 = local_1f0;
    dVar1 = __real_3ff0000000000000;
    iVar19 = (this->ModifyBones).ArrayNum;
    pFVar23 = (FKawaiiPhysicsModifyBone *)(this->ModifyBones).AllocatorInstance.Data;
    FVar47 = local_248.ComparisonIndex.Value;
    uVar48 = local_248.Number;
    pFVar25 = pFVar23 + iVar19;
    FVar20.Value = FVar47.Value;
    uVar52 = uVar48;
    FVar22 = local_248;
    uVar49 = local_248;
    dVar55 = ___xmm_00000000000000003ff0000000000000;
    dVar58 = _UNK_150689518;
    dVar59 = ___xmm_3ff00000000000000000000000000000;
    dVar44 = _UNK_15061cbc8;
    while( true ) {
      if ((this->ModifyBones).ArrayNum != iVar19) {
        local_252[0] = 0;
        `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_252);
      }
      if (pFVar23 == pFVar25) break;
      if (pFVar23->bSkipSimulate == false) {
        uVar3 = pFVar23->ParentIndex;
        uVar14 = 0;
        if ((int)uVar3 < (this->ModifyBones).ArrayNum) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar26 = (FKawaiiPhysicsModifyBone *)
                  ((this->ModifyBones).AllocatorInstance.Data + (longlong)(int)uVar3 * 0xf0);
        AdjustByAngleLimit(this,pFVar11,local_1e8,pTVar10,pFVar23,pFVar26);
        EVar2 = this->PlanarConstraint;
        if (EVar2 != None) {
          if (EVar2 == X) {
            local_f8[0]._s_0.Z = 0.0;
            local_f8[0]._0_8_ = dVar55;
            local_f8[0]._8_8_ = dVar58;
            UE::Math::TQuat<double>::RotateVector
                      (&pFVar26->PoseRotation,&local_180,(TVector<double> *)&local_f8[0]._s_0);
            uVar39 = extraout_XMM0_01._8_8_;
            FVar47.Value = SUB84(local_180.field0_0x0._s_0.X,0);
            uVar48 = (uint)((ulonglong)local_180.field0_0x0._0_8_ >> 0x20);
            FVar20.Value = SUB84(local_180.field0_0x0._s_0.Z,0);
            uVar52 = (uint)((ulonglong)local_180.field0_0x0._16_8_ >> 0x20);
            uVar49 = local_180.field0_0x0._s_0.Y;
LAB_14de464a1:
            auVar38 = *(undefined1 (*) [16])&(pFVar26->Location).field0_0x0;
            auVar5._4_8_ = uVar39;
            auVar5._0_4_ = auVar38._4_4_;
            auVar36._0_8_ = auVar5._0_8_ << 0x20;
            auVar36._8_4_ = auVar38._8_4_;
            auVar36._12_4_ = auVar38._12_4_;
            FVar22 = (FName)((double)uVar49 * auVar36._8_8_ +
                             (double)CONCAT44(uVar48,FVar47.Value) * auVar38._0_8_ +
                            (double)CONCAT44(uVar52,FVar20.Value) *
                            (pFVar26->Location).field0_0x0._s_0.Z);
          }
          else {
            if (EVar2 == Y) {
              local_118._s_0.Z = 0.0;
              local_118._s_0.X = dVar59;
              local_118._s_0.Y = dVar44;
              UE::Math::TQuat<double>::RotateVector
                        (&pFVar26->PoseRotation,&local_198,(TVector<double> *)&local_118._s_0);
              uVar39 = extraout_XMM0_00._8_8_;
              FVar47.Value = SUB84(local_198.field0_0x0._s_0.X,0);
              uVar48 = (uint)((ulonglong)local_198.field0_0x0._0_8_ >> 0x20);
              FVar20.Value = SUB84(local_198.field0_0x0._s_0.Z,0);
              uVar52 = (uint)((ulonglong)local_198.field0_0x0._16_8_ >> 0x20);
              uVar49 = local_198.field0_0x0._s_0.Y;
              goto LAB_14de464a1;
            }
            if (EVar2 == Z) {
              local_138._s_0.Z = dVar1;
              local_138._s_0.X = 0.0;
              local_138._s_0.Y = 0.0;
              UE::Math::TQuat<double>::RotateVector
                        (&pFVar26->PoseRotation,&local_1b0,(TVector<double> *)&local_138._s_0);
              uVar39 = extraout_XMM0._8_8_;
              FVar47.Value = SUB84(local_1b0.field0_0x0._s_0.X,0);
              uVar48 = (uint)((ulonglong)local_1b0.field0_0x0._0_8_ >> 0x20);
              FVar20.Value = SUB84(local_1b0.field0_0x0._s_0.Z,0);
              uVar52 = (uint)((ulonglong)local_1b0.field0_0x0._16_8_ >> 0x20);
              uVar49 = local_1b0.field0_0x0._s_0.Y;
              goto LAB_14de464a1;
            }
          }
          dVar55 = (pFVar23->Location).field0_0x0._s_0.Y;
          dVar58 = (pFVar23->Location).field0_0x0._s_0.X;
          dVar59 = (pFVar23->Location).field0_0x0._s_0.Z;
          dVar44 = ((double)CONCAT44(uVar48,FVar47.Value) * dVar58 + (double)uVar49 * dVar55 +
                   (double)CONCAT44(uVar52,FVar20.Value) * dVar59) - (double)FVar22;
          (pFVar23->Location).field0_0x0._s_0.X =
               dVar58 - (double)CONCAT44(uVar48,FVar47.Value) * dVar44;
          (pFVar23->Location).field0_0x0._s_0.Y = dVar55 - (double)uVar49 * dVar44;
          (pFVar23->Location).field0_0x0._s_0.Z =
               dVar59 - (double)CONCAT44(uVar52,FVar20.Value) * dVar44;
        }
        dVar44 = (pFVar23->PoseLocation).field0_0x0._s_0.Y -
                 (pFVar26->PoseLocation).field0_0x0._s_0.Y;
        dVar40 = (pFVar23->PoseLocation).field0_0x0._s_0.X -
                 (pFVar26->PoseLocation).field0_0x0._s_0.X;
        dVar31 = (pFVar23->PoseLocation).field0_0x0._s_0.Z -
                 (pFVar26->PoseLocation).field0_0x0._s_0.Z;
        dVar55 = (pFVar26->Location).field0_0x0._s_0.X;
        dVar58 = (pFVar26->Location).field0_0x0._s_0.Y;
        uVar39 = (pFVar23->Location).field0_0x0._s_0.X - dVar55;
        dVar59 = (pFVar26->Location).field0_0x0._s_0.Z;
        dStack_220 = (pFVar23->Location).field0_0x0._s_0.Y - dVar58;
        local_218 = (pFVar23->Location).field0_0x0._s_0.Z - dVar59;
        auVar37._0_8_ = dVar31 * dVar31;
        auVar37._8_8_ = 0;
        auVar38._8_8_ = 0;
        auVar38._0_8_ = dVar44 * dVar44 + dVar40 * dVar40 + auVar37._0_8_;
        auVar38 = sqrtpd(auVar37,auVar38);
        dVar44 = dStack_220 * dStack_220 + (double)uVar39 * (double)uVar39 + local_218 * local_218;
        if (dVar44 != dVar1) {
          if (__real_3e45798ee0000000 <= dVar44) {
            local_160 = dVar1 / SQRT(dVar44);
            dStack_220 = dStack_220 * local_160;
            local_218 = local_218 * local_160;
            uVar39 = (double)uVar39 * local_160;
          }
          else {
            local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            local_228 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            dStack_220 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
        }
        dVar44 = (double)(float)auVar38._0_8_;
        (pFVar23->Location).field0_0x0._s_0.X = (double)uVar39 * dVar44 + dVar55;
        (pFVar23->Location).field0_0x0._s_0.Y = dStack_220 * dVar44 + dVar58;
        (pFVar23->Location).field0_0x0._s_0.Z = local_218 * dVar44 + dVar59;
        dVar55 = ___xmm_00000000000000003ff0000000000000;
        dVar58 = _UNK_150689518;
        dVar59 = ___xmm_3ff00000000000000000000000000000;
        dVar44 = _UNK_15061cbc8;
      }
      pFVar23 = pFVar23 + 1;
    }
    this->DeltaTimeOld = this->DeltaTime;
    FVar22 = local_250;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// UpdateCapsuleLimits @ 14de46800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::UpdateCapsuleLimits
          (FAnimNode_KawaiiPhysics *this,TArray<FCapsuleLimit,TSizedDefaultAllocator<32>_> *param_1,
          FComponentSpacePoseContext *param_2,FBoneContainer *param_3,TTransform<double> *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateCapsuleLimit> FVar17;
  TTransform<double> *pTVar18;
  TQuat<double> *pTVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar20;
  ulonglong uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FCSPose<FCompactPose> *this_02;
  FBoneReference *pFVar24;
  FBoneReference *this_03;
  FNameEntryId FVar25;
  undefined1 auStackY_1e8 [32];
  undefined1 local_188 [4];
  FCompactPoseBoneIndex local_184;
  FColor_u_0 local_180;
  uint local_17c;
  FName local_178;
  FName local_168;
  uint local_160;
  uint uStack_15c;
  TTransform<double> *local_158;
  FBoneContainer *local_150;
  FComponentSpacePoseContext *local_148;
  LARGE_INTEGER local_140;
  FStatMessage local_138;
  FName local_128 [2];
  TQuat<double> local_118;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_17c = param_1->ArrayNum;
  uVar21 = (ulonglong)(int)local_17c;
  this_03 = (FBoneReference *)(param_1->AllocatorInstance).Data;
  pFVar24 = this_03 + uVar21 * 9;
  local_158 = param_4;
  local_150 = param_3;
  local_148 = param_2;
LAB_14de46876:
  do {
    FVar25.Value = 0;
    if (param_1->ArrayNum != (int)uVar21) {
      `TCheckedPointerIterator<FCapsuleLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_188);
    }
    if (this_03 == pFVar24) {
      return;
    }
    FVar17 = StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit;
    if (StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit ==
        (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateCapsuleLimit>)0x0) {
      pFVar16 = ::FName::FName(local_128,"STAT_KawaiiPhysics_UpdateCapsuleLimit");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateCapsuleLimit>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_KawaiiPhysics_UpdateCapsuleLimit,*pFVar16,
                          L"KawaiiPhysics_UpdateCapsuleLimit","STATGROUP_Anim","STATCAT_Advanced",
                          L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    FVar23 = *(FName *)FVar17;
    bVar12 = false;
    bVar14 = false;
    FVar22 = FVar23.ComparisonIndex.Value;
    uVar20 = FVar23.Number;
    if ((FVar22.Value == 0) && (uVar20 == 0)) {
LAB_14de469bb:
      bVar13 = false;
      FVar23 = local_178;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_180.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_180._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar12 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_168.ComparisonIndex.Value = FVar22.Value;
          local_168.Number = uVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_168,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                     ,0x1df);
          bVar12 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14de469bb;
      local_178 = FVar23;
      local_160 = FVar22.Value;
      uStack_15c = uVar20;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar13 = true;
      FVar25.Value = local_178.ComparisonIndex.Value;
    }
    bVar15 = FBoneReference::IsValidToEvaluate(this_03,local_150);
    if (bVar15) {
      FBoneReference::GetCompactPoseIndex(this_03,(FBoneContainer *)&local_184);
      this_02 = &local_148->Pose;
      pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_02,local_184);
      local_f8.Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = (pTVar18->Rotation).XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = (pTVar18->Rotation).ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = (pTVar18->Translation).XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] = (pTVar18->Translation).ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = (pTVar18->Scale3D).XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                (local_158,this_02,&local_f8,local_184,BCS_BoneSpace);
      pTVar19 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&this_03[2].field_0x8,&local_118);
      dVar9 = pTVar19->X;
      dVar10 = pTVar19->Y;
      dVar6 = pTVar19->Z;
      dVar11 = pTVar19->W;
      dVar5 = dVar9 * local_f8.Rotation.XY.m128d_f64[1];
      dVar2 = dVar6 * local_f8.Rotation.XY.m128d_f64[1];
      dVar4 = dVar9 * local_f8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              local_f8.Rotation.XY.m128d_f64[1] * dVar11 +
              local_f8.Rotation.ZW.m128d_f64[1] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar6 * local_f8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar7 = local_f8.Rotation.XY.m128d_f64[0] * dVar10;
      dVar3 = local_f8.Translation.XY.m128d_f64[1] + *(double *)&this_03[1].field_0x8;
      local_f8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_f8.Translation.XY.m128d_f64[0] =
           local_f8.Translation.XY.m128d_f64[0] + (double)this_03[1].BoneName;
      local_f8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar8 = dVar6 * local_f8.Rotation.ZW.m128d_f64[1];
      dVar3 = local_f8.Translation.ZW.m128d_f64[1] + 0.0;
      dVar6 = dVar9 * local_f8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              local_f8.Rotation.ZW.m128d_f64[1] * dVar11 +
              local_f8.Rotation.XY.m128d_f64[1] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * local_f8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_f8.Translation.ZW.m128d_f64[0] =
           local_f8.Translation.ZW.m128d_f64[0] + (double)this_03[2].BoneName;
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
      local_f8.Rotation.XY.m128d_f64[0] =
           dVar9 * local_f8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_f8.Rotation.XY.m128d_f64[0] * dVar11 +
           local_f8.Rotation.ZW.m128d_f64[0] * dVar10 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_f8.Rotation.ZW.m128d_f64[0] =
           dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_f8.Rotation.ZW.m128d_f64[0] * dVar11 +
           dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      FAnimationRuntime::ConvertBoneSpaceTransformToCS
                (local_158,this_02,&local_f8,local_184,BCS_BoneSpace);
      this_03[4].BoneName = (FName)local_f8.Translation.XY.m128d_f64[0];
      *(double *)&this_03[4].field_0x8 = local_f8.Translation.XY.m128d_f64[1];
      this_03[5].BoneName = (FName)local_f8.Translation.ZW.m128d_f64[0];
      local_118.X = local_f8.Rotation.XY.m128d_f64[0];
      local_118.Y = local_f8.Rotation.XY.m128d_f64[1];
      this_03[6].BoneName = (FName)local_f8.Rotation.XY.m128d_f64[0];
      *(double *)&this_03[6].field_0x8 = local_f8.Rotation.XY.m128d_f64[1];
      this_03[7].BoneName = (FName)local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)&this_03[7].field_0x8 = local_f8.Rotation.ZW.m128d_f64[1];
    }
    *(bool *)&this_03[8].BoneName.ComparisonIndex.Value = bVar15;
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar13) || (FVar23 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
       || (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_14de46c6c:
      uVar21 = (ulonglong)local_17c;
      this_03 = this_03 + 9;
      goto LAB_14de46876;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14de46c6c;
    local_138.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
    local_138.NameAndInfo.Index.Value = FVar25.Value;
    QueryPerformanceCounter(&local_140);
    local_138.StatData.Pad[4] = '\0';
    local_138.StatData.Pad[5] = '\0';
    local_138.StatData.Pad[6] = '\0';
    local_138.StatData.Pad[7] = '\0';
    local_138.StatData.Pad[0] = local_140.s.LowPart._0_1_;
    local_138.StatData.Pad[1] = local_140.s.LowPart._1_1_;
    local_138.StatData.Pad[2] = local_140.s.LowPart._2_1_;
    local_138.StatData.Pad[3] = local_140.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_138);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
      goto LAB_14de46c6c;
    }
    FThreadStats::Flush(this_00,false,false);
    uVar21 = (ulonglong)local_17c;
    this_03 = this_03 + 9;
  } while( true );
}

// UpdateInternal @ 14de46ce0

void __thiscall
FAnimNode_KawaiiPhysics::UpdateInternal
          (FAnimNode_KawaiiPhysics *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  this->DeltaTime = param_1->DeltaTime;
  return;
}

// UpdateModifyBonesPoseTransform @ 14de46d10

void __thiscall
FAnimNode_KawaiiPhysics::UpdateModifyBonesPoseTransform
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          )

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  void *_Src;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FName FVar8;
  double dVar9;
  FName FVar10;
  double dVar11;
  undefined8 uVar12;
  bool bVar13;
  TTransform<double> *pTVar14;
  ulonglong uVar15;
  FBoneReference *pFVar16;
  FBoneReference *pFVar17;
  longlong lVar18;
  FBoneReference *this_00;
  longlong lVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined1 local_res8 [8];
  FComponentSpacePoseContext *local_res10;
  FBoneContainer *local_res18;
  FCompactPoseBoneIndex local_res20;
  ForAnyElementType local_1a0;
  int local_198;
  int local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  FName local_e8;
  FName FStack_e0;
  FName local_d8;
  undefined4 local_d0;
  FScriptContainerElement local_cc;
  FScriptContainerElement local_cb;
  FName local_c8;
  double dStack_c0;
  FName local_b8;
  FName local_b0;
  double dStack_a8;
  FName local_a0;
  
  dVar11 = __real_3ff0000000000000;
  this_00 = (FBoneReference *)(this->ModifyBones).AllocatorInstance.Data;
  uVar1 = (this->ModifyBones).ArrayNum;
  uVar15 = (ulonglong)(int)uVar1;
  uVar26 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pFVar16 = this_00 + 9;
  pFVar17 = this_00 + uVar15 * 0xf;
  local_res10 = param_1;
  local_res18 = param_2;
  do {
    if ((this->ModifyBones).ArrayNum != (int)uVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar17) {
      return;
    }
    if (*(char *)&pFVar16[5].CachedCompactPoseIndex == '\0') {
      bVar13 = this->ResetBoneTransformWhenBoneNotFound;
      FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)&local_res20);
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if ((int)local_res20 < 0) {
        if (bVar13 != false) {
          pFVar16->BoneName = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)&pFVar16->field_0x8 = uVar12;
          pFVar16[1].BoneName = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dVar9 = UE::Math::TQuat<double>::Identity.Y;
          pFVar16[2].BoneName = (FName)UE::Math::TQuat<double>::Identity.X;
          *(double *)&pFVar16[2].field_0x8 = dVar9;
          dVar9 = UE::Math::TQuat<double>::Identity.W;
          pFVar16[3].BoneName = (FName)UE::Math::TQuat<double>::Identity.Z;
          *(double *)&pFVar16[3].field_0x8 = dVar9;
          uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
          pFVar16[4].BoneName = (FName)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
          *(undefined8 *)&pFVar16[4].field_0x8 = uVar12;
          pFVar16[5].BoneName = (FName)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        }
      }
      else {
        pTVar14 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_res20);
        local_c8 = (FName)(pTVar14->Translation).XY.m128d_f64[0];
        dStack_c0 = (pTVar14->Translation).XY.m128d_f64[1];
        local_b0 = (FName)(pTVar14->Scale3D).XY.m128d_f64[0];
        dStack_a8 = (pTVar14->Scale3D).XY.m128d_f64[1];
        local_a0 = (FName)(pTVar14->Scale3D).ZW.m128d_f64[0];
        local_b8 = (FName)(pTVar14->Translation).ZW.m128d_f64[0];
        FVar8 = (FName)(pTVar14->Rotation).XY.m128d_f64[0];
        dVar9 = (pTVar14->Rotation).XY.m128d_f64[1];
        FVar10 = (FName)(pTVar14->Rotation).ZW.m128d_f64[0];
        dVar21 = (pTVar14->Rotation).ZW.m128d_f64[1];
        pFVar16->BoneName = local_c8;
        *(double *)&pFVar16->field_0x8 = dStack_c0;
        pFVar16[1].BoneName = local_b8;
        pFVar16[2].BoneName = FVar8;
        *(double *)&pFVar16[2].field_0x8 = dVar9;
        pFVar16[3].BoneName = FVar10;
        *(double *)&pFVar16[3].field_0x8 = dVar21;
        pFVar16[4].BoneName = local_b0;
        *(double *)&pFVar16[4].field_0x8 = dStack_a8;
        pFVar16[5].BoneName = local_a0;
      }
      goto LAB_14de472c9;
    }
    uVar24 = pFVar16[-8].BoneName.ComparisonIndex.Value;
    uVar25 = 0;
    if ((int)uVar24 < (this->ModifyBones).ArrayNum) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->ModifyBones).AllocatorInstance.Data;
    lVar18 = (longlong)(int)uVar24 * 0xf0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = *(int *)(pFVar2 + lVar18 + 0x20);
    lVar19 = (longlong)local_198;
    _Src = *(void **)(pFVar2 + lVar18 + 0x18);
    if (local_198 == 0) {
      local_194 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_198,0,&local_1a0,local_198,&local_194);
      memcpy(local_1a0.Data,_Src,lVar19 << 2);
    }
    local_190 = *(undefined8 *)(pFVar2 + lVar18 + 0x28);
    uStack_188 = *(undefined8 *)(pFVar2 + lVar18 + 0x28 + 8);
    local_180 = *(undefined8 *)(pFVar2 + lVar18 + 0x38);
    local_178 = *(undefined8 *)(pFVar2 + lVar18 + 0x40);
    uStack_170 = *(undefined8 *)(pFVar2 + lVar18 + 0x40 + 8);
    local_168 = *(undefined8 *)(pFVar2 + lVar18 + 0x50);
    local_160 = *(undefined8 *)(pFVar2 + lVar18 + 0x58);
    uStack_158 = *(undefined8 *)(pFVar2 + lVar18 + 0x58 + 8);
    local_150 = *(undefined8 *)(pFVar2 + lVar18 + 0x68);
    local_148 = *(undefined8 *)(pFVar2 + lVar18 + 0x70);
    uStack_140 = *(undefined8 *)(pFVar2 + lVar18 + 0x70 + 8);
    local_138 = *(undefined8 *)(pFVar2 + lVar18 + 0x80);
    uStack_130 = *(undefined8 *)(pFVar2 + lVar18 + 0x80 + 8);
    local_128 = *(double *)(pFVar2 + lVar18 + 0x90);
    dStack_120 = *(double *)(pFVar2 + lVar18 + 0x90 + 8);
    local_118 = *(double *)(pFVar2 + lVar18 + 0xa0);
    local_108 = *(undefined1 (*) [16])(pFVar2 + lVar18 + 0xb0);
    uVar24 = local_108._0_4_;
    uVar25 = local_108._4_4_;
    local_f8 = *(undefined1 (*) [16])(pFVar2 + lVar18 + 0xc0);
    local_e8 = *(FName *)(pFVar2 + lVar18 + 0xd0);
    FStack_e0 = ((FName *)(pFVar2 + lVar18 + 0xd0))[1];
    local_d8 = *(FName *)(pFVar2 + lVar18 + 0xe0);
    local_d0 = *(undefined4 *)(pFVar2 + lVar18 + 0xe8);
    local_cc = pFVar2[lVar18 + 0xec];
    local_cb = pFVar2[lVar18 + 0xed];
    dVar21 = local_f8._8_8_;
    FVar10 = local_108._0_8_;
    dVar9 = local_108._8_8_;
    FVar8 = local_f8._0_8_;
    switch(this->BoneForwardAxis) {
    default:
      dVar5 = (double)FVar8 + (double)FVar8;
      uVar24 = local_108._8_4_ ^ uVar26;
      uVar25 = local_108._12_4_ ^ uVar27;
      dVar20 = (double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar25,uVar24);
      dVar4 = (double)FVar10 * dVar20;
      dVar7 = (double)FVar10 * dVar5 + dVar21 * dVar20;
      dVar20 = (dVar9 * dVar20 - (double)FVar8 * dVar5) + dVar11;
      uVar24 = local_f8._8_4_;
      uVar25 = local_f8._12_4_;
      goto LAB_14de4724f;
    case X_Negative:
      dVar20 = (double)FVar8 + (double)FVar8;
      uVar22 = local_108._8_4_ ^ uVar26;
      uVar23 = local_108._12_4_ ^ uVar27;
      dVar5 = (double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar23,uVar22);
      dVar4 = dVar21 * dVar20;
      dVar7 = (double)CONCAT44((uint)((ulonglong)((double)FVar10 * dVar20) >> 0x20) ^ uVar27,
                               SUB84((double)FVar10 * dVar20,0) ^ uVar26) - dVar21 * dVar5;
      dVar20 = ((double)FVar8 * dVar20 - dVar9 * dVar5) - dVar11;
LAB_14de4724f:
      dVar5 = (double)CONCAT44(uVar25,uVar24) * dVar5;
LAB_14de47254:
      dVar5 = dVar5 - dVar4;
      break;
    case Y_Positive:
      dVar4 = (double)FVar10 + (double)FVar10;
      uVar24 = local_f8._0_4_ ^ uVar26;
      uVar25 = local_f8._4_4_ ^ uVar27;
      dVar7 = (double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar25,uVar24);
      dVar5 = ((double)FVar8 * dVar7 - (double)FVar10 * dVar4) + dVar11;
      dVar20 = dVar21 * dVar7 + dVar9 * dVar4;
      dVar7 = dVar21 * dVar4 - dVar9 * dVar7;
      break;
    case Y_Negative:
      dVar4 = (double)FVar10 + (double)FVar10;
      uVar24 = local_f8._0_4_ ^ uVar26;
      uVar25 = local_f8._4_4_ ^ uVar27;
      dVar7 = (double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar25,uVar24);
      dVar5 = ((double)FVar10 * dVar4 - (double)FVar8 * dVar7) - dVar11;
      dVar20 = (double)CONCAT44((uint)((ulonglong)(dVar9 * dVar4) >> 0x20) ^ uVar27,
                                SUB84(dVar9 * dVar4,0) ^ uVar26) - dVar21 * dVar7;
      dVar7 = dVar9 * dVar7 - dVar21 * dVar4;
      break;
    case Z_Positive:
      dVar4 = dVar9 + dVar9;
      dVar7 = (double)CONCAT44(uVar25 ^ uVar27,uVar24 ^ uVar26) +
              (double)CONCAT44(uVar25 ^ uVar27,uVar24 ^ uVar26);
      dVar20 = dVar21 * dVar4 - (double)FVar8 * dVar7;
      dVar5 = dVar21 * dVar7 + (double)FVar8 * dVar4;
      dVar7 = ((double)FVar10 * dVar7 - dVar9 * dVar4) + dVar11;
      break;
    case Z_Negative:
      dVar20 = dVar9 + dVar9;
      dVar6 = (double)CONCAT44(uVar25 ^ uVar27,uVar24 ^ uVar26) +
              (double)CONCAT44(uVar25 ^ uVar27,uVar24 ^ uVar26);
      dVar5 = (double)CONCAT44((uint)((ulonglong)((double)FVar8 * dVar20) >> 0x20) ^ uVar27,
                               SUB84((double)FVar8 * dVar20,0) ^ uVar26);
      dVar4 = dVar21 * dVar6;
      dVar7 = (dVar9 * dVar20 - (double)FVar10 * dVar6) - dVar11;
      dVar20 = (double)FVar8 * dVar6 - dVar21 * dVar20;
      goto LAB_14de47254;
    }
    dVar4 = (double)this->DummyBoneLength;
    pFVar16->BoneName = (FName)(dVar20 * dVar4 + local_128);
    *(double *)&pFVar16->field_0x8 = dVar5 * dVar4 + dStack_120;
    pFVar16[1].BoneName = (FName)(dVar7 * dVar4 + local_118);
    pFVar16[2].BoneName = FVar10;
    *(double *)&pFVar16[2].field_0x8 = dVar9;
    pFVar16[3].BoneName = FVar8;
    *(double *)&pFVar16[3].field_0x8 = dVar21;
    pFVar16[4].BoneName = local_e8;
    *(uint *)&pFVar16[4].field_0x8 = FStack_e0.ComparisonIndex.Value;
    pFVar16[4].CachedCompactPoseIndex = (FCompactPoseBoneIndex)FStack_e0.Number;
    pFVar16[5].BoneName = local_d8;
    param_1 = local_res10;
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
      param_1 = local_res10;
    }
LAB_14de472c9:
    this_00 = this_00 + 0xf;
    uVar15 = (ulonglong)uVar1;
    pFVar16 = pFVar16 + 0xf;
  } while( true );
}

// UpdatePhysicsSettingsOfModifyBones @ 14de47360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::UpdatePhysicsSettingsOfModifyBones(FAnimNode_KawaiiPhysics *this)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePhysicsSetting> FVar8;
  FRichCurve *pFVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  FNameEntryId FVar15;
  float fVar16;
  float fVar17;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  uint local_res18;
  uint uStackX_1c;
  LARGE_INTEGER local_res20;
  FName local_a8;
  FName local_a0;
  FStatMessage local_90 [5];
  
  fVar6 = __real_3f800000;
  iVar2 = (this->ModifyBones).ArrayNum;
  pFVar13 = (this->ModifyBones).AllocatorInstance.Data;
  pFVar14 = pFVar13 + (longlong)iVar2 * 0xf0;
LAB_14de473ad:
  do {
    FVar15.Value = 0;
    if ((this->ModifyBones).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FKawaiiPhysicsModifyBone,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar14) {
      return;
    }
    FVar8 = StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting;
    if (StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting ==
        (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePhysicsSetting>)0x0) {
      pFVar7 = ::FName::FName(&local_a8,"STAT_KawaiiPhysics_UpdatePhysicsSetting");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePhysicsSetting>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_KawaiiPhysics_UpdatePhysicsSetting,*pFVar7,
                         L"KawaiiPhysics_UpdatePhysicsSetting","STATGROUP_Anim","STATCAT_Advanced",
                         L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_a0.ComparisonIndex.Value = 0;
    local_a0.Number = 0;
    FVar12 = *(FName *)FVar8;
    bVar3 = false;
    bVar5 = false;
    FVar11 = FVar12.ComparisonIndex.Value;
    uVar10 = FVar12.Number;
    if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_14de47517:
      bVar4 = false;
      FVar12 = local_a0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_res8[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
        bVar3 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_res10.ComparisonIndex.Value = FVar11.Value;
          local_res10.Number = uVar10;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                     ,0x185);
          bVar3 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14de47517;
      local_res18 = FVar11.Value;
      uStackX_1c = uVar10;
      local_a0 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar4 = true;
      FVar15.Value = local_a0.ComparisonIndex.Value;
    }
    fVar17 = *(float *)(pFVar13 + 0xe8) / this->TotalBoneLength;
    *(float *)(pFVar13 + 0x28) = (this->PhysicsSettings).Damping;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->DampingCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->DampingCurveData);
        fVar16 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x28) = fVar16 * *(float *)(pFVar13 + 0x28);
      }
    }
    fVar16 = *(float *)(pFVar13 + 0x28);
    if (fVar6 <= *(float *)(pFVar13 + 0x28)) {
      fVar16 = fVar6;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(pFVar13 + 0x28) = fVar16;
    *(float *)(pFVar13 + 0x2c) = (this->PhysicsSettings).WorldDampingLocation;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->WorldDampingLocationCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->WorldDampingLocationCurveData);
        fVar16 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x2c) = fVar16 * *(float *)(pFVar13 + 0x2c);
      }
    }
    fVar16 = *(float *)(pFVar13 + 0x2c);
    if (fVar6 <= *(float *)(pFVar13 + 0x2c)) {
      fVar16 = fVar6;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(pFVar13 + 0x2c) = fVar16;
    *(float *)(pFVar13 + 0x30) = (this->PhysicsSettings).WorldDampingRotation;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->WorldDampingRotationCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->WorldDampingRotationCurveData);
        fVar16 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x30) = fVar16 * *(float *)(pFVar13 + 0x30);
      }
    }
    fVar16 = *(float *)(pFVar13 + 0x30);
    if (fVar6 <= *(float *)(pFVar13 + 0x30)) {
      fVar16 = fVar6;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(pFVar13 + 0x30) = fVar16;
    *(float *)(pFVar13 + 0x34) = (this->PhysicsSettings).Stiffness;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->StiffnessCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->StiffnessCurveData);
        fVar16 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x34) = fVar16 * *(float *)(pFVar13 + 0x34);
      }
    }
    fVar16 = *(float *)(pFVar13 + 0x34);
    if (fVar6 <= *(float *)(pFVar13 + 0x34)) {
      fVar16 = fVar6;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(pFVar13 + 0x34) = fVar16;
    *(float *)(pFVar13 + 0x38) = (this->PhysicsSettings).Radius;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->RadiusCurveData);
        fVar16 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x38) = fVar16 * *(float *)(pFVar13 + 0x38);
      }
    }
    fVar16 = *(float *)(pFVar13 + 0x38);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    *(float *)(pFVar13 + 0x38) = fVar16;
    *(float *)(pFVar13 + 0x3c) = (this->PhysicsSettings).LimitAngle;
    if (0.0 < this->TotalBoneLength) {
      pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->LimitAngleCurveData);
      if ((pFVar9->Keys).ArrayNum != 0) {
        pFVar9 = FRuntimeFloatCurve::GetRichCurve(&this->LimitAngleCurveData);
        fVar17 = FRichCurve::Eval(pFVar9,fVar17,0.0);
        *(float *)(pFVar13 + 0x3c) = fVar17 * *(float *)(pFVar13 + 0x3c);
      }
    }
    fVar17 = *(float *)(pFVar13 + 0x3c);
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    *(float *)(pFVar13 + 0x3c) = fVar17;
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_90[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
        local_90[0].NameAndInfo.Index.Value = FVar15.Value;
        QueryPerformanceCounter(&local_res20);
        local_90[0].StatData.Pad[4] = '\0';
        local_90[0].StatData.Pad[5] = '\0';
        local_90[0].StatData.Pad[6] = '\0';
        local_90[0].StatData.Pad[7] = '\0';
        local_90[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
        local_90[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
        local_90[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
        local_90[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,local_90);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
          pFVar13 = pFVar13 + 0xf0;
          goto LAB_14de473ad;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    pFVar13 = pFVar13 + 0xf0;
  } while( true );
}

// UpdatePlanerLimits @ 14de47870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::UpdatePlanerLimits
          (FAnimNode_KawaiiPhysics *this,TArray<FPlanarLimit,TSizedDefaultAllocator<32>_> *param_1,
          FComponentSpacePoseContext *param_2,FBoneContainer *param_3,TTransform<double> *param_4)

{
  int *piVar1;
  FName FVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FCompactPoseBoneIndex FVar14;
  double dVar15;
  double dVar16;
  FBoneReference *pFVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePlanerLimit> FVar20;
  TTransform<double> *pTVar21;
  TQuat<double> *pTVar22;
  TQuat<double> *pTVar23;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar24;
  FNameEntryId FVar25;
  FName FVar26;
  FBoneReference *pFVar27;
  FCSPose<FCompactPose> *this_02;
  FNameEntryId FVar28;
  FBoneReference *this_03;
  ulonglong uVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  FBoneReference in_XMM4;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar46;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  uint uVar50;
  undefined4 uVar51;
  undefined1 auStackY_238 [32];
  undefined1 local_1d8 [4];
  FCompactPoseBoneIndex local_1d4;
  double local_1d0;
  uint local_1c8;
  FName local_1c0;
  FName local_1b0;
  uint local_1a8;
  uint uStack_1a4;
  TTransform<double> *local_1a0;
  TVector<double>_u_0 local_198;
  FBoneContainer *local_178;
  FComponentSpacePoseContext *local_170;
  LARGE_INTEGER local_168;
  FBoneReference *local_160;
  FStatMessage local_158;
  TVector<double>_u_0 local_148;
  FName local_128 [2];
  TTransform<double> local_118;
  ulonglong local_b8;
  
  dVar16 = __real_3e45798ee0000000;
  dVar15 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1c8 = param_1->ArrayNum;
  uVar24 = (ulonglong)(int)local_1c8;
  this_03 = (FBoneReference *)(param_1->AllocatorInstance).Data;
  pFVar27 = this_03 + 7;
  local_160 = this_03 + uVar24 * 0xb;
  local_1a0 = param_4;
  local_178 = param_3;
  local_170 = param_2;
  do {
    pFVar17 = local_160;
    if (param_1->ArrayNum != (int)uVar24) {
      `TCheckedPointerIterator<FPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1d8);
    }
    if (this_03 == pFVar17) {
      return;
    }
    FVar20 = StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit;
    if (StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit ==
        (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePlanerLimit>)0x0) {
      pFVar19 = ::FName::FName(local_128,"STAT_KawaiiPhysics_UpdatePlanerLimit");
      FVar20 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdatePlanerLimit>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_UpdatePlanerLimit
                          ,*pFVar19,L"KawaiiPhysics_UpdatePlanerLimit","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar26 = *(FName *)FVar20;
    FVar28.Value = 0;
    bVar12 = false;
    bVar11 = false;
    local_1c0.ComparisonIndex.Value = 0;
    local_1c0.Number = 0;
    FVar25 = FVar26.ComparisonIndex.Value;
    uVar37 = FVar26.Number;
    if ((FVar25.Value == 0) && (uVar37 == 0)) {
LAB_14de47a59:
      bVar13 = false;
      FVar26 = local_1c0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1d0 = (double)((ulonglong)local_1d0 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1d0,(char *)*(FName *)((longlong)FVar20 + 0x10));
        bVar12 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1b0.ComparisonIndex.Value = FVar25.Value;
          local_1b0.Number = uVar37;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1b0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                     ,0x1fd);
          bVar12 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14de47a59;
      local_1c0 = FVar26;
      local_1a8 = FVar25.Value;
      uStack_1a4 = uVar37;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar13 = true;
      FVar28.Value = local_1c0.ComparisonIndex.Value;
    }
    bVar18 = FBoneReference::IsValidToEvaluate(this_03,local_178);
    if (bVar18) {
      FBoneReference::GetCompactPoseIndex(this_03,(FBoneContainer *)&local_1d4);
      this_02 = &local_170->Pose;
      pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_02,local_1d4);
      local_118.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
      local_118.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
      local_118.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
      local_118.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
      local_118.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
      local_118.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
      local_118.Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
      local_118.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
      local_118.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
      local_118.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
      local_118.Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
      local_118.Scale3D.ZW.m128d_f64[1] = (pTVar21->Scale3D).ZW.m128d_f64[1];
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                (local_1a0,this_02,&local_118,local_1d4,BCS_BoneSpace);
      pTVar22 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&pFVar27[-5].field_0x8,
                           (TQuat<double> *)&local_198._s_0);
      dVar8 = pTVar22->X;
      dVar9 = pTVar22->Y;
      dVar6 = pTVar22->Z;
      dVar10 = pTVar22->W;
      dVar5 = dVar8 * local_118.Rotation.XY.m128d_f64[1];
      dVar4 = dVar6 * local_118.Rotation.XY.m128d_f64[1];
      dVar31 = dVar8 * local_118.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               local_118.Rotation.XY.m128d_f64[1] * dVar10 +
               local_118.Rotation.ZW.m128d_f64[1] * dVar9 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dVar6 * local_118.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar35 = local_118.Rotation.XY.m128d_f64[0] * dVar9;
      local_118.Translation.XY.m128d_f64[0] =
           local_118.Translation.XY.m128d_f64[0] + (double)pFVar27[-6].BoneName;
      local_118.Translation.XY.m128d_f64[1] =
           local_118.Translation.XY.m128d_f64[1] + *(double *)&pFVar27[-6].field_0x8;
      auVar40._0_8_ = local_118.Rotation.ZW.m128d_f64[0] * dVar10;
      auVar40._8_8_ = local_118.Rotation.ZW.m128d_f64[1] * dVar10;
      dVar36 = dVar6 * local_118.Rotation.ZW.m128d_f64[1];
      local_118.Translation.ZW.m128d_f64[0] =
           local_118.Translation.ZW.m128d_f64[0] + (double)pFVar27[-5].BoneName;
      local_118.Translation.ZW.m128d_f64[1] = local_118.Translation.ZW.m128d_f64[1] + 0.0;
      dVar6 = dVar8 * local_118.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + auVar40._8_8_ +
              local_118.Rotation.XY.m128d_f64[1] * dVar9 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * local_118.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_118.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar31,0);
      local_118.Rotation.XY.m128d_f64[0] =
           dVar8 * local_118.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_118.Rotation.XY.m128d_f64[0] * dVar10 +
           local_118.Rotation.ZW.m128d_f64[0] * dVar9 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_118.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar31 >> 0x20);
      local_118.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_118.Rotation.ZW.m128d_f64[0] =
           dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar40._0_8_ +
           dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_118.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      FAnimationRuntime::ConvertBoneSpaceTransformToCS
                (local_1a0,this_02,&local_118,local_1d4,BCS_BoneSpace);
      pTVar22 = (TQuat<double> *)(pFVar27 + -1);
      pFVar27[-3].BoneName = (FName)local_118.Translation.XY.m128d_f64[0];
      *(double *)&pFVar27[-3].field_0x8 = local_118.Translation.XY.m128d_f64[1];
      pFVar27[-2].BoneName = (FName)local_118.Translation.ZW.m128d_f64[0];
      local_198._s_0.X = local_118.Rotation.XY.m128d_f64[0];
      local_198._s_0.Y = local_118.Rotation.XY.m128d_f64[1];
      pTVar22->X = local_118.Rotation.XY.m128d_f64[0];
      *(double *)&pFVar27[-1].field_0x8 = local_118.Rotation.XY.m128d_f64[1];
      pFVar27->BoneName = (FName)local_118.Rotation.ZW.m128d_f64[0];
      *(double *)&pFVar27->field_0x8 = local_118.Rotation.ZW.m128d_f64[1];
      dVar5 = pTVar22->X;
      dVar6 = *(double *)&pFVar27[-1].field_0x8;
      dVar31 = dVar5 * dVar5 +
               local_118.Rotation.ZW.m128d_f64[0] * local_118.Rotation.ZW.m128d_f64[0];
      dVar35 = dVar6 * dVar6 +
               local_118.Rotation.ZW.m128d_f64[1] * local_118.Rotation.ZW.m128d_f64[1];
      local_1d0 = dVar16;
      local_148._s_0.Z = dVar15;
      dVar4 = dVar35 + dVar31;
      dVar31 = dVar31 + dVar35;
      auVar3._8_4_ = SUB84(dVar31,0);
      auVar3._0_8_ = dVar4;
      auVar3._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar41 = sqrtpd(auVar40,auVar3);
      uVar29 = -(ulonglong)(dVar16 <= dVar4);
      uVar30 = -(ulonglong)(dVar16 <= dVar31);
      uVar37 = (uint)(uVar29 >> 0x20);
      uVar50 = (uint)(uVar30 >> 0x20);
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
      auVar43._0_8_ = uVar29 & (ulonglong)(auVar42._0_8_ * dVar5);
      uVar24 = uVar30 & (ulonglong)(auVar42._8_8_ * dVar6);
      auVar43._8_4_ = (undefined4)uVar24;
      auVar43._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar32._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar32._4_4_ =
           ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar32._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar32._12_4_ =
           ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar43 = auVar43 | auVar32;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
      auVar38._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar38._4_4_ =
           ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar38._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar38._12_4_ =
           ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      pTVar22->X = (double)auVar43._0_8_;
      pTVar22->Y = (double)auVar43._8_8_;
      auVar33._0_8_ = (ulonglong)(auVar41._0_8_ * local_118.Rotation.ZW.m128d_f64[0]) & uVar29;
      uVar30 = (ulonglong)(auVar41._8_8_ * local_118.Rotation.ZW.m128d_f64[1]) & uVar30;
      auVar33._8_4_ = (undefined4)uVar30;
      auVar33._12_4_ = (undefined4)(uVar30 >> 0x20);
      local_148._s_0.X = 0.0;
      local_148._s_0.Y = 0.0;
      *pFVar27 = (FBoneReference)(auVar38 | auVar33);
      UE::Math::TQuat<double>::RotateVector
                (pTVar22,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_148._s_0);
      uVar46 = auVar43._8_8_;
      FVar25.Value = SUB84(local_198._s_0.Z,0);
      uVar37 = (uint)((ulonglong)local_198._16_8_ >> 0x20);
      *(undefined1 *)&pFVar27[1].BoneName.ComparisonIndex.Value = 1;
      uVar47 = local_198._0_4_;
      uVar48 = local_198._4_4_;
      uVar49 = local_198._8_4_;
      uVar51 = local_198._12_4_;
    }
    else {
      uVar47 = *(undefined4 *)&pFVar27[-6].field_0x8;
      FVar14 = pFVar27[-6].CachedCompactPoseIndex;
      FVar2 = pFVar27[-5].BoneName;
      pFVar27[-3].BoneName = pFVar27[-6].BoneName;
      *(undefined4 *)&pFVar27[-3].field_0x8 = uVar47;
      pFVar27[-3].CachedCompactPoseIndex = FVar14;
      pFVar27[-2].BoneName = FVar2;
      pTVar23 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&pFVar27[-5].field_0x8,
                           (TQuat<double> *)&local_198._s_0);
      pTVar22 = (TQuat<double> *)(pFVar27 + -1);
      local_1d0 = dVar16;
      dVar4 = pTVar23->Y;
      pTVar22->X = pTVar23->X;
      *(double *)&pFVar27[-1].field_0x8 = dVar4;
      dVar4 = pTVar23->W;
      pFVar27->BoneName = (FName)pTVar23->Z;
      *(double *)&pFVar27->field_0x8 = dVar4;
      dVar5 = pTVar22->X;
      dVar6 = *(double *)&pFVar27[-1].field_0x8;
      FVar2 = pFVar27->BoneName;
      dVar35 = *(double *)&pFVar27->field_0x8;
      local_198._s_0.Z = dVar15;
      dVar31 = dVar5 * dVar5 + (double)FVar2 * (double)FVar2;
      dVar36 = dVar6 * dVar6 + dVar35 * dVar35;
      dVar4 = dVar36 + dVar31;
      dVar31 = dVar31 + dVar36;
      auVar41._8_4_ = SUB84(dVar31,0);
      auVar41._0_8_ = dVar4;
      auVar41._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar41 = sqrtpd((undefined1  [16])in_XMM4,auVar41);
      uVar29 = -(ulonglong)(dVar16 <= dVar4);
      uVar30 = -(ulonglong)(dVar16 <= dVar31);
      uVar37 = (uint)(uVar29 >> 0x20);
      uVar50 = (uint)(uVar30 >> 0x20);
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar41);
      auVar44._0_8_ = uVar29 & (ulonglong)(auVar42._0_8_ * dVar5);
      uVar24 = uVar30 & (ulonglong)(auVar42._8_8_ * dVar6);
      auVar44._8_4_ = (undefined4)uVar24;
      auVar44._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar42._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar42._4_4_ =
           ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar42._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar42._12_4_ =
           ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar44 = auVar44 | auVar42;
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
      auVar39._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar39._4_4_ =
           ~uVar37 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar39._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar39._12_4_ =
           ~uVar50 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      pTVar22->X = (double)auVar44._0_8_;
      pTVar22->Y = (double)auVar44._8_8_;
      auVar34._0_8_ = (ulonglong)(auVar41._0_8_ * (double)FVar2) & uVar29;
      uVar30 = (ulonglong)(auVar41._8_8_ * dVar35) & uVar30;
      auVar34._8_4_ = (undefined4)uVar30;
      auVar34._12_4_ = (undefined4)(uVar30 >> 0x20);
      local_198._s_0.X = 0.0;
      local_198._s_0.Y = 0.0;
      *pFVar27 = (FBoneReference)(auVar39 | auVar34);
      UE::Math::TQuat<double>::RotateVector
                (pTVar22,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_198._s_0);
      uVar46 = auVar44._8_8_;
      FVar25.Value = SUB84(local_148._s_0.Z,0);
      uVar37 = (uint)((ulonglong)local_148._16_8_ >> 0x20);
      uVar47 = local_148._0_4_;
      uVar48 = local_148._4_4_;
      uVar49 = local_148._8_4_;
      uVar51 = local_148._12_4_;
    }
    local_198._s_0.Z = (double)pFVar27[-2].BoneName;
    in_XMM4.BoneName.Number = uVar37;
    in_XMM4.BoneName.ComparisonIndex.Value = FVar25.Value;
    auVar7._4_8_ = uVar46;
    auVar7._0_4_ = uVar48;
    auVar45._0_8_ = auVar7._0_8_ << 0x20;
    auVar45._8_4_ = uVar49;
    auVar45._12_4_ = uVar51;
    FVar2 = pFVar27[-3].BoneName;
    dVar4 = *(double *)&pFVar27[-3].field_0x8;
    pFVar27[2].BoneName.ComparisonIndex.Value = uVar47;
    pFVar27[2].BoneName.Number = uVar48;
    *(undefined4 *)&pFVar27[2].field_0x8 = uVar49;
    pFVar27[2].CachedCompactPoseIndex = (FCompactPoseBoneIndex)uVar51;
    in_XMM4._8_8_ =
         auVar45._8_8_ * dVar4 + (double)CONCAT44(uVar48,uVar47) * (double)FVar2 +
         (double)CONCAT44(uVar37,FVar25.Value) * local_198._s_0.Z;
    pFVar27[3] = in_XMM4;
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar13) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_158.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        local_158.NameAndInfo.Index.Value = FVar28.Value;
        QueryPerformanceCounter(&local_168);
        local_158.StatData.Pad[4] = '\0';
        local_158.StatData.Pad[5] = '\0';
        local_158.StatData.Pad[6] = '\0';
        local_158.StatData.Pad[7] = '\0';
        local_158.StatData.Pad[0] = local_168.s.LowPart._0_1_;
        local_158.StatData.Pad[1] = local_168.s.LowPart._1_1_;
        local_158.StatData.Pad[2] = local_168.s.LowPart._2_1_;
        local_158.StatData.Pad[3] = local_168.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_158);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    this_03 = this_03 + 0xb;
    uVar24 = (ulonglong)local_1c8;
    pFVar27 = pFVar27 + 0xb;
  } while( true );
}

// UpdateSkelCompMove @ 14de47f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_KawaiiPhysics::UpdateSkelCompMove
          (FAnimNode_KawaiiPhysics *this,TTransform<double> *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  dVar34 = (param_1->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar35 = (param_1->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar17 = (param_1->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar35,0);
  auVar27._0_8_ = dVar34;
  uVar36 = (undefined4)((ulonglong)dVar35 >> 0x20);
  auVar27._12_4_ = uVar36;
  dVar16 = (this->PreSkelCompTransform).Translation.ZW.m128d_f64[0] -
           (param_1->Translation).ZW.m128d_f64[0];
  auVar29._8_4_ = SUB84(dVar35,0);
  auVar29._0_8_ = dVar34;
  auVar29._12_4_ = uVar36;
  auVar24._8_4_ = SUB84(dVar17,0);
  auVar24._0_8_ = dVar3;
  auVar24._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar30 = blendpd(auVar29,auVar24,2);
  dVar5 = (this->PreSkelCompTransform).Translation.XY.m128d_f64[0] -
          (param_1->Translation).XY.m128d_f64[0];
  dVar6 = (this->PreSkelCompTransform).Translation.XY.m128d_f64[1] -
          (param_1->Translation).XY.m128d_f64[1];
  uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar28 = auVar27._8_8_;
  auVar44._8_4_ = SUB84(dVar6,0);
  auVar44._0_8_ = dVar5;
  auVar44._12_4_ = uVar36;
  auVar18._8_4_ = SUB84(dVar3,0);
  auVar18._0_8_ = dVar28;
  auVar18._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar36;
  auVar45._0_8_ = auVar44._8_8_ * dVar34 - dVar28 * dVar5;
  auVar45._8_8_ = dVar16 * dVar35 - auVar18._8_8_ * dVar6;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar16;
  auVar24 = blendpd(auVar23,auVar7,2);
  auVar25._0_8_ = auVar24._0_8_ * dVar3 - auVar30._0_8_ * dVar16;
  auVar25._8_8_ = auVar24._8_8_ * dVar17 - auVar30._8_8_ * 0.0;
  dVar26 = auVar45._8_8_ + auVar45._8_8_;
  dVar4 = auVar25._0_8_ + auVar25._0_8_;
  uVar36 = SUB84(dVar4,0);
  uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar24 = blendpd(auVar45,auVar25,2);
  auVar41._8_4_ = uVar36;
  auVar41._0_8_ = dVar26;
  auVar41._12_4_ = uVar39;
  auVar19._8_4_ = uVar36;
  auVar19._0_8_ = dVar26;
  auVar19._12_4_ = uVar39;
  auVar37._8_4_ = uVar36;
  auVar37._0_8_ = dVar26;
  auVar37._12_4_ = uVar39;
  auVar46._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar46._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar24 = blendpd(auVar37,auVar46,2);
  auVar42._0_8_ = auVar41._8_8_ * dVar34 - dVar26 * dVar28;
  auVar42._8_8_ = auVar46._0_8_ * dVar35 - auVar19._8_8_ * dVar3;
  auVar20._8_4_ = SUB84(auVar46._8_8_,0);
  auVar20._0_8_ = auVar46._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar38._0_8_ = auVar24._0_8_ * dVar3 - auVar46._0_8_ * auVar30._0_8_;
  auVar38._8_8_ = auVar24._8_8_ * dVar17 - auVar20._8_8_ * auVar30._8_8_;
  auVar24 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
  auVar31._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88;
  auVar31._12_4_ = *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) & _UNK_15061cc8c;
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
  lVar14 = -(ulonglong)(auVar31._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar15 = -(ulonglong)(auVar31._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar21._8_4_ = SUB84(auVar42._8_8_,0);
  auVar21._0_8_ = auVar42._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  auVar32._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar30._4_4_,
                        ~(uint)lVar14 & auVar30._0_4_);
  auVar32._8_4_ = ~(uint)lVar15 & auVar30._8_4_;
  auVar32._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar30._12_4_;
  auVar30._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar30._0_8_ = auVar24._0_8_;
  auVar30._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  (this->SkelCompMoveVector).field0_0x0._s_0.X =
       auVar32._0_8_ * (dVar26 * dVar17 + dVar5 + auVar21._8_8_);
  (this->SkelCompMoveVector).field0_0x0._s_0.Y =
       auVar32._8_8_ * (dVar4 * dVar17 + dVar6 + auVar38._0_8_);
  fVar1 = this->TeleportDistanceThreshold;
  auVar30 = blendpd(auVar42,auVar38,2);
  dVar26 = (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar24._4_4_,
                            ~(uint)lVar13 & auVar24._0_4_) *
           (auVar46._0_8_ * dVar17 + dVar16 + auVar30._0_8_);
  (this->SkelCompMoveVector).field0_0x0._s_0.Z = dVar26;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar3 = (this->SkelCompMoveVector).field0_0x0._s_0.X;
  dVar17 = (this->SkelCompMoveVector).field0_0x0._s_0.Y;
  if ((double)(fVar1 * fVar1) < dVar17 * dVar17 + dVar3 * dVar3 + dVar26 * dVar26) {
    (this->SkelCompMoveVector).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->SkelCompMoveVector).field0_0x0._s_0.Y = (double)uVar12;
    (this->SkelCompMoveVector).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar8 = (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[0];
  dVar9 = (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[1];
  dVar10 = (this->PreSkelCompTransform).Rotation.XY.m128d_f64[0];
  dVar11 = (this->PreSkelCompTransform).Rotation.XY.m128d_f64[1];
  dVar34 = (param_1->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar35 = (param_1->Rotation).XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar40 = (param_1->Rotation).ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar43 = (param_1->Rotation).ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar33._8_4_ = SUB84(dVar43,0);
  auVar33._0_8_ = dVar40;
  auVar33._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar40,0);
  auVar22._0_8_ = dVar40;
  auVar22._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  fVar1 = this->TeleportRotationThreshold;
  dVar17 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar16 = dVar9 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar10 * auVar33._8_8_ +
           dVar8 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar40 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar28 = dVar8 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar11 * dVar43 +
           dVar9 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar22._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar2._8_4_ = SUB84(dVar28,0);
  auVar2._0_8_ = dVar16;
  auVar2._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  (this->SkelCompMoveRotation).X = dVar16;
  (this->SkelCompMoveRotation).Y = (double)auVar2._8_8_;
  (this->SkelCompMoveRotation).Z =
       dVar34 * dVar11 * dVar3 + dVar8 * auVar33._8_8_ + dVar10 * dVar35 * dVar17 +
       dVar40 * dVar9 * dVar26;
  (this->SkelCompMoveRotation).W =
       dVar34 * dVar10 * dVar4 + dVar9 * dVar43 + dVar11 * dVar35 * dVar5 + dVar40 * dVar8 * dVar6;
  if (0.0 <= fVar1) {
    dVar3 = (this->SkelCompMoveRotation).W;
    dVar17 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar3) && (dVar17 = dVar3, __real_3ff0000000000000 <= dVar3)) {
      dVar17 = __real_3ff0000000000000;
    }
    dVar17 = acos(dVar17);
    dVar3 = UE::Math::TQuat<double>::Identity.Y;
    if ((double)fVar1 < dVar17 * __real_405ca5dc1a63c1f8) {
      (this->SkelCompMoveRotation).X = UE::Math::TQuat<double>::Identity.X;
      (this->SkelCompMoveRotation).Y = dVar3;
      dVar3 = UE::Math::TQuat<double>::Identity.W;
      (this->SkelCompMoveRotation).Z = UE::Math::TQuat<double>::Identity.Z;
      (this->SkelCompMoveRotation).W = dVar3;
    }
  }
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  (this->PreSkelCompTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->PreSkelCompTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  (this->PreSkelCompTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->PreSkelCompTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Translation).ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->PreSkelCompTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->PreSkelCompTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  return;
}

// UpdateSphericalLimits @ 14de48350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::UpdateSphericalLimits
          (FAnimNode_KawaiiPhysics *this,
          TArray<FSphericalLimit,TSizedDefaultAllocator<32>_> *param_1,
          FComponentSpacePoseContext *param_2,FBoneContainer *param_3,TTransform<double> *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateSphericalLimit> FVar17;
  TTransform<double> *pTVar18;
  TQuat<double> *pTVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar20;
  ulonglong uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FCSPose<FCompactPose> *this_02;
  FBoneReference *pFVar24;
  FBoneReference *this_03;
  FNameEntryId FVar25;
  undefined1 auStackY_1e8 [32];
  undefined1 local_188 [4];
  FCompactPoseBoneIndex local_184;
  FColor_u_0 local_180;
  uint local_17c;
  FName local_178;
  FName local_168;
  uint local_160;
  uint uStack_15c;
  TTransform<double> *local_158;
  FBoneContainer *local_150;
  FComponentSpacePoseContext *local_148;
  LARGE_INTEGER local_140;
  FStatMessage local_138;
  FName local_128 [2];
  TQuat<double> local_118;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_17c = param_1->ArrayNum;
  uVar21 = (ulonglong)(int)local_17c;
  this_03 = (FBoneReference *)(param_1->AllocatorInstance).Data;
  pFVar24 = this_03 + uVar21 * 9;
  local_158 = param_4;
  local_150 = param_3;
  local_148 = param_2;
LAB_14de483c6:
  do {
    FVar25.Value = 0;
    if (param_1->ArrayNum != (int)uVar21) {
      `TCheckedPointerIterator<FSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_188);
    }
    if (this_03 == pFVar24) {
      return;
    }
    FVar17 = StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit;
    if (StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit ==
        (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateSphericalLimit>)0x0) {
      pFVar16 = ::FName::FName(local_128,"STAT_KawaiiPhysics_UpdateSphericalLimit");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_UpdateSphericalLimit>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_KawaiiPhysics_UpdateSphericalLimit,*pFVar16,
                          L"KawaiiPhysics_UpdateSphericalLimit","STATGROUP_Anim","STATCAT_Advanced",
                          L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_178.ComparisonIndex.Value = 0;
    local_178.Number = 0;
    FVar23 = *(FName *)FVar17;
    bVar12 = false;
    bVar14 = false;
    FVar22 = FVar23.ComparisonIndex.Value;
    uVar20 = FVar23.Number;
    if ((FVar22.Value == 0) && (uVar20 == 0)) {
LAB_14de4850b:
      bVar13 = false;
      FVar23 = local_178;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_180.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_180._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
        bVar12 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_168.ComparisonIndex.Value = FVar22.Value;
          local_168.Number = uVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_168,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                     ,0x1c1);
          bVar12 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14de4850b;
      local_178 = FVar23;
      local_160 = FVar22.Value;
      uStack_15c = uVar20;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar13 = true;
      FVar25.Value = local_178.ComparisonIndex.Value;
    }
    bVar15 = FBoneReference::IsValidToEvaluate(this_03,local_150);
    if (bVar15) {
      FBoneReference::GetCompactPoseIndex(this_03,(FBoneContainer *)&local_184);
      this_02 = &local_148->Pose;
      pTVar18 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_02,local_184);
      local_f8.Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = (pTVar18->Rotation).XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = (pTVar18->Rotation).ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = (pTVar18->Translation).XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] = (pTVar18->Translation).ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = (pTVar18->Scale3D).XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar18->Scale3D).ZW.m128d_f64[1];
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                (local_158,this_02,&local_f8,local_184,BCS_BoneSpace);
      pTVar19 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&this_03[2].field_0x8,&local_118);
      dVar9 = pTVar19->X;
      dVar10 = pTVar19->Y;
      dVar6 = pTVar19->Z;
      dVar11 = pTVar19->W;
      dVar5 = dVar9 * local_f8.Rotation.XY.m128d_f64[1];
      dVar2 = dVar6 * local_f8.Rotation.XY.m128d_f64[1];
      dVar4 = dVar9 * local_f8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              local_f8.Rotation.XY.m128d_f64[1] * dVar11 +
              local_f8.Rotation.ZW.m128d_f64[1] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar6 * local_f8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar7 = local_f8.Rotation.XY.m128d_f64[0] * dVar10;
      dVar3 = local_f8.Translation.XY.m128d_f64[1] + *(double *)&this_03[1].field_0x8;
      local_f8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_f8.Translation.XY.m128d_f64[0] =
           local_f8.Translation.XY.m128d_f64[0] + (double)this_03[1].BoneName;
      local_f8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar8 = dVar6 * local_f8.Rotation.ZW.m128d_f64[1];
      dVar3 = local_f8.Translation.ZW.m128d_f64[1] + 0.0;
      dVar6 = dVar9 * local_f8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              local_f8.Rotation.ZW.m128d_f64[1] * dVar11 +
              local_f8.Rotation.XY.m128d_f64[1] * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * local_f8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_f8.Translation.ZW.m128d_f64[0] =
           local_f8.Translation.ZW.m128d_f64[0] + (double)this_03[2].BoneName;
      local_f8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
      local_f8.Rotation.XY.m128d_f64[0] =
           dVar9 * local_f8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_f8.Rotation.XY.m128d_f64[0] * dVar11 +
           local_f8.Rotation.ZW.m128d_f64[0] * dVar10 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_f8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
      local_f8.Rotation.ZW.m128d_f64[0] =
           dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_f8.Rotation.ZW.m128d_f64[0] * dVar11 +
           dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
      FAnimationRuntime::ConvertBoneSpaceTransformToCS
                (local_158,this_02,&local_f8,local_184,BCS_BoneSpace);
      this_03[4].BoneName = (FName)local_f8.Translation.XY.m128d_f64[0];
      *(double *)&this_03[4].field_0x8 = local_f8.Translation.XY.m128d_f64[1];
      this_03[5].BoneName = (FName)local_f8.Translation.ZW.m128d_f64[0];
      local_118.X = local_f8.Rotation.XY.m128d_f64[0];
      local_118.Y = local_f8.Rotation.XY.m128d_f64[1];
      this_03[6].BoneName = (FName)local_f8.Rotation.XY.m128d_f64[0];
      *(double *)&this_03[6].field_0x8 = local_f8.Rotation.XY.m128d_f64[1];
      this_03[7].BoneName = (FName)local_f8.Rotation.ZW.m128d_f64[0];
      *(double *)&this_03[7].field_0x8 = local_f8.Rotation.ZW.m128d_f64[1];
    }
    *(bool *)&this_03[8].BoneName.ComparisonIndex.Value = bVar15;
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar13) || (FVar23 == (FName)0x0)) || (FThreadStats::bPrimaryDisableForever != false))
       || (FThreadStats::TlsSlot == 0xffffffff)) {
LAB_14de487bc:
      uVar21 = (ulonglong)local_17c;
      this_03 = this_03 + 9;
      goto LAB_14de483c6;
    }
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->ScopeCount <= this_00->bWaitForExplicitFlush) goto LAB_14de487bc;
    local_138.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
    local_138.NameAndInfo.Index.Value = FVar25.Value;
    QueryPerformanceCounter(&local_140);
    local_138.StatData.Pad[4] = '\0';
    local_138.StatData.Pad[5] = '\0';
    local_138.StatData.Pad[6] = '\0';
    local_138.StatData.Pad[7] = '\0';
    local_138.StatData.Pad[0] = local_140.s.LowPart._0_1_;
    local_138.StatData.Pad[1] = local_140.s.LowPart._1_1_;
    local_138.StatData.Pad[2] = local_140.s.LowPart._2_1_;
    local_138.StatData.Pad[3] = local_140.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(this_00,&local_138);
    piVar1 = &this_00->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
      goto LAB_14de487bc;
    }
    FThreadStats::Flush(this_00,false,false);
    uVar21 = (ulonglong)local_17c;
    this_03 = this_03 + 9;
  } while( true );
}

// WarmUp @ 14de48830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_KawaiiPhysics::WarmUp
          (FAnimNode_KawaiiPhysics *this,FComponentSpacePoseContext *param_1,FBoneContainer *param_2
          ,TTransform<double> *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WarmUp> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  int iVar10;
  LARGE_INTEGER local_res8;
  FStatMessage local_48;
  FName local_38;
  
  iVar10 = 0;
  FVar6 = StatPtr_STAT_KawaiiPhysics_WarmUp;
  if (StatPtr_STAT_KawaiiPhysics_WarmUp ==
      (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WarmUp>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,"STAT_KawaiiPhysics_WarmUp");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_KawaiiPhysics_WarmUp>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_KawaiiPhysics_WarmUp,*pFVar5,
                       L"KawaiiPhysics_WarmUp","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                       ,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\KawaiiPhysics\\Source\\KawaiiPhysics\\Private\\AnimNode_KawaiiPhysics.cpp"
                   ,0x41a);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      local_38 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      goto LAB_14de4899a;
    }
  }
  bVar3 = false;
  FVar9 = local_38;
LAB_14de4899a:
  if (0 < this->WarmUpFrames) {
    do {
      SimulateModifyBones(this,param_1,param_2,param_3);
      iVar10 = iVar10 + 1;
    } while (iVar10 < this->WarmUpFrames);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_38.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

