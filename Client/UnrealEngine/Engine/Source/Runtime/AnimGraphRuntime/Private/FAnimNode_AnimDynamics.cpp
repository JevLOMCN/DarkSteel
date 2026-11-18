// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 39

// StaticStruct @ 1463e1700

UScriptStruct * __cdecl FAnimNode_AnimDynamics::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics,(UObject *)pUVar1,
                         L"AnimNode_AnimDynamics");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton;
}

// FAnimNode_AnimDynamics @ 146402f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAnimNode_AnimDynamics * __thiscall
FAnimNode_AnimDynamics::FAnimNode_AnimDynamics(FAnimNode_AnimDynamics *this)

{
  TArray<FAnimPhysBodyDefinition,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FAnimNode_AnimDynamics *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 uStack_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  uint uStack_10;
  undefined4 uStack_c;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  *(undefined ***)this = &___7FAnimNode_AnimDynamics__6B_;
  pTVar1 = &this->PhysicsBodyDefinitions;
  this->LinearDampingOverride = 0.0;
  this->AngularDampingOverride = 0.0;
  *&(this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1] = (double)fVar4;
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0] = (double)fVar5;
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[1] = (double)fVar4;
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0] = (double)fVar5;
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1] = (double)fVar4;
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0] = (double)fVar5;
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1] = (double)fVar6;
  (this->RelativeSpaceBone).BoneName.ComparisonIndex = 0;
  (this->RelativeSpaceBone).BoneName.Number = 0;
  puVar2 = &(this->RelativeSpaceBone).field_0x8;
  (this->RelativeSpaceBone).BoneIndex = -1;
  (this->RelativeSpaceBone).bUseSkeletonIndex = 0;
  (this->RelativeSpaceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->BoundBone).BoneName.ComparisonIndex = 0;
  (this->BoundBone).BoneName.Number = 0;
  puVar2 = &(this->BoundBone).field_0x8;
  (this->BoundBone).BoneIndex = -1;
  (this->BoundBone).bUseSkeletonIndex = 0;
  (this->BoundBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->ChainEnd).BoneName.ComparisonIndex = 0;
  (this->ChainEnd).BoneName.Number = 0;
  puVar2 = &(this->ChainEnd).field_0x8;
  (this->ChainEnd).BoneIndex = -1;
  (this->ChainEnd).bUseSkeletonIndex = 0;
  (this->ChainEnd).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PhysicsBodyDefinitions).ArrayNum = 0;
  (this->PhysicsBodyDefinitions).ArrayMax = 0;
  (this->GravityOverride).field0_0x0._s_0.X = 0.0;
  (this->GravityOverride).field0_0x0._s_0.Y = 0.0;
  (this->GravityOverride).field0_0x0._s_0.Z = 0.0;
  (this->SimSpaceSettings).SimSpaceAngularAlpha = 0.0;
  (this->SimSpaceSettings).MaxAngularVelocity = 10000.0;
  (this->SimSpaceSettings).MaxAngularAcceleration = 10000.0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->GravityScale = 1.0;
  this->LinearSpringConstant = 0.0;
  this->AngularSpringConstant = 0.0;
  this->WindScale = 1.0;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y = (double)uVar7;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->AngularBiasOverride = 0.0;
  this->NumSolverIterationsPreUpdate = 4;
  this->NumSolverIterationsPostUpdate = 1;
  (this->SphericalLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphericalLimits).ArrayNum = 0;
  (this->SphericalLimits).ArrayMax = 0;
  (this->ExternalForce).field0_0x0._s_0.X = 0.0;
  (this->ExternalForce).field0_0x0._s_0.Y = 0.0;
  (this->ExternalForce).field0_0x0._s_0.Z = 0.0;
  this->bWindWasEnabled = '\0';
  this->bChain = '\0';
  this->bAngularSpring = '\0';
  this->bLinearSpring = '\0';
  this->bGravityOverrideInSimSpace = '\0';
  this->bUseGravityOverride = '\0';
  (this->PlanarLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlanarLimits).ArrayNum = 0;
  (this->PlanarLimits).ArrayMax = 0;
  this->SimulationSpace = Component;
  this->LastSimSpace = Component;
  this->InitTeleportType = None;
  this->field_0x31b = 0xe;
  FRotationRetargetingInfo::FRotationRetargetingInfo(&this->RetargetingSettings,false);
  (this->Bodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies).ArrayNum = 0;
  (this->Bodies).ArrayMax = 0;
  (this->BodiesToReset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodiesToReset).ArrayNum = 0;
  (this->BodiesToReset).ArrayMax = 0;
  (this->BaseBodyPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseBodyPtrs).ArrayNum = 0;
  (this->BaseBodyPtrs).ArrayMax = 0;
  (this->LinearLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinearLimits).ArrayNum = 0;
  (this->LinearLimits).ArrayMax = 0;
  (this->AngularLimits).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AngularLimits).ArrayNum = 0;
  (this->AngularLimits).ArrayMax = 0;
  (this->Springs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Springs).ArrayNum = 0;
  (this->Springs).ArrayMax = 0;
  (this->PhysicsBodyJointOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsBodyJointOffsets).ArrayNum = 0;
  (this->PhysicsBodyJointOffsets).ArrayMax = 0;
  (this->ConstraintOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintOffsets).ArrayNum = 0;
  (this->ConstraintOffsets).ArrayMax = 0;
  (this->ActiveBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveBoneIndices).ArrayNum = 0;
  (this->ActiveBoneIndices).ArrayMax = 0;
  this->FilteredBoneIndex = -1;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ComponentLinearAccScale).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Y = (double)uVar7;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ComponentLinearVelScale).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Y = (double)uVar7;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X = 100000.0;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y = 100000.0;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z = 100000.0;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = 0;
  uStack_d0 = 0x7fffffff;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = (double)uVar7;
  uStack_cc = 0xffffffff;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = 0x10101;
  local_60 = 0;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Y = (double)uVar7;
  local_5e = 0;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar11 = (pTVar1->AllocatorInstance).Data;
  local_5c = 0;
  uStack_10 = uStack_10 & 0xffffff00;
  uStack_c = 0x41200000;
  local_c8 = ___xmm_40240000000000004024000000000000;
  uStack_c0 = _UNK_15104e4d8;
  local_b8 = __real_4024000000000000;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = 0;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_90 = 0;
  uStack_88 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if ((pFVar11 <= (FScriptContainerElement *)&local_d8) &&
     ((FScriptContainerElement *)&local_d8 <
      pFVar11 + (longlong)(this->PhysicsBodyDefinitions).ArrayMax * 0xd0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FAnimNode_AnimDynamics *)(*pcVar3)();
      return pFVar10;
    }
  }
  iVar9 = (this->PhysicsBodyDefinitions).ArrayNum;
  if (iVar9 == (this->PhysicsBodyDefinitions).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8d0,&pTVar1->AllocatorInstance,&(this->PhysicsBodyDefinitions).ArrayMax);
  }
  (this->PhysicsBodyDefinitions).ArrayNum = iVar9 + 1;
  pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0xd0;
  *(undefined8 *)pFVar11 = local_d8;
  *(ulonglong *)(pFVar11 + 8) = CONCAT44(uStack_cc,uStack_d0);
  *(undefined8 *)(pFVar11 + 0x10) = local_c8;
  *(undefined8 *)(pFVar11 + 0x18) = uStack_c0;
  *(undefined8 *)(pFVar11 + 0x20) = local_b8;
  *(double *)(pFVar11 + 0x28) = dStack_b0;
  *(double *)(pFVar11 + 0x30) = dStack_a8;
  *(double *)(pFVar11 + 0x38) = dStack_a0;
  *(ulonglong *)(pFVar11 + 0x40) = CONCAT44(uStack_94,local_98);
  *(undefined8 *)(pFVar11 + 0x48) = uStack_90;
  *(undefined8 *)(pFVar11 + 0x50) = uStack_88;
  *(undefined8 *)(pFVar11 + 0x58) = uStack_80;
  *(undefined8 *)(pFVar11 + 0x60) = uStack_78;
  *(undefined8 *)(pFVar11 + 0x68) = local_70;
  *(undefined8 *)(pFVar11 + 0x70) = uStack_68;
  *(ulonglong *)(pFVar11 + 0x78) =
       CONCAT44(local_5c,CONCAT13(uStack_5d,CONCAT12(local_5e,local_60)));
  *(undefined8 *)(pFVar11 + 0x80) = local_58;
  *(undefined8 *)(pFVar11 + 0x88) = uStack_50;
  *(undefined8 *)(pFVar11 + 0x90) = local_48;
  *(undefined8 *)(pFVar11 + 0x98) = uStack_40;
  *(undefined8 *)(pFVar11 + 0xa0) = local_38;
  *(undefined8 *)(pFVar11 + 0xa8) = uStack_30;
  *(undefined8 *)(pFVar11 + 0xb0) = local_28;
  *(undefined8 *)(pFVar11 + 0xb8) = uStack_20;
  *(undefined8 *)(pFVar11 + 0xc0) = local_18;
  *(ulonglong *)(pFVar11 + 200) = CONCAT44(uStack_c,uStack_10);
  return this;
}

// ~FAnimNode_AnimDynamics @ 146408700

void __thiscall FAnimNode_AnimDynamics::~FAnimNode_AnimDynamics(FAnimNode_AnimDynamics *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ActiveBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsBodyJointOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Springs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AngularLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinearLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseBodyPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodiesToReset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FAnimPhysLinkedBody,int>
            ((FAnimPhysLinkedBody *)(this->Bodies).AllocatorInstance.Data,(this->Bodies).ArrayNum);
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRotationRetargetingInfo::~FRotationRetargetingInfo(&this->RetargetingSettings);
  pFVar1 = (this->PlanarLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SphericalLimits).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsBodyDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14640a7c0

FAnimNode_AnimDynamics * __thiscall
FAnimNode_AnimDynamics::operator=(FAnimNode_AnimDynamics *this,FAnimNode_AnimDynamics *param_1)

{
  int *piVar1;
  TArray<FAnimPhysBodyDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FAnimPhysSphericalLimit,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAnimPhysLinkedBody,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FAnimPhysLinkedBody_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FAnimPhysSpring,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FAnimConstraintOffsetPair,TSizedDefaultAllocator<32>_> *pTVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FAnimPhysLinkedBody *pFVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  this->LinearDampingOverride = param_1->LinearDampingOverride;
  this->AngularDampingOverride = param_1->AngularDampingOverride;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[0];
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Translation.XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1] = dVar16;
  dVar16 = (param_1->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar16;
  (this->RelativeSpaceBone).BoneName = (param_1->RelativeSpaceBone).BoneName;
  uVar11 = *(undefined4 *)&(param_1->RelativeSpaceBone).field_0x8;
  *(uint *)&(this->RelativeSpaceBone).field_0x8 =
       (uVar11 ^ *(uint *)&(this->RelativeSpaceBone).field_0x8) & 0x80000000 ^ uVar11;
  uVar12 = *(undefined4 *)&(param_1->RelativeSpaceBone).field_0x8;
  *(uint *)&(this->RelativeSpaceBone).field_0x8 =
       (SPULL(uVar11,0,0x1f) ^ SPULL(uVar12,0,0x1f)) & 0x7fffffffU ^ uVar12;
  (this->RelativeSpaceBone).CachedCompactPoseIndex =
       (param_1->RelativeSpaceBone).CachedCompactPoseIndex;
  (this->BoundBone).BoneName = (param_1->BoundBone).BoneName;
  uVar11 = *(undefined4 *)&(param_1->BoundBone).field_0x8;
  *(uint *)&(this->BoundBone).field_0x8 =
       (uVar11 ^ *(uint *)&(this->BoundBone).field_0x8) & 0x80000000 ^ uVar11;
  uVar12 = *(undefined4 *)&(param_1->BoundBone).field_0x8;
  *(uint *)&(this->BoundBone).field_0x8 =
       (SPULL(uVar12,0,0x1f) ^ SPULL(uVar11,0,0x1f)) & 0x7fffffffU ^ uVar12;
  (this->BoundBone).CachedCompactPoseIndex = (param_1->BoundBone).CachedCompactPoseIndex;
  (this->ChainEnd).BoneName = (param_1->ChainEnd).BoneName;
  uVar11 = *(undefined4 *)&(param_1->ChainEnd).field_0x8;
  *(uint *)&(this->ChainEnd).field_0x8 =
       (uVar11 ^ *(uint *)&(this->ChainEnd).field_0x8) & 0x80000000 ^ uVar11;
  pTVar2 = &this->PhysicsBodyDefinitions;
  uVar12 = *(undefined4 *)&(param_1->ChainEnd).field_0x8;
  *(uint *)&(this->ChainEnd).field_0x8 =
       (SPULL(uVar11,0,0x1f) ^ SPULL(uVar12,0,0x1f)) & 0x7fffffffU ^ uVar12;
  (this->ChainEnd).CachedCompactPoseIndex = (param_1->ChainEnd).CachedCompactPoseIndex;
  if (pTVar2 != &param_1->PhysicsBodyDefinitions) {
    iVar13 = (param_1->PhysicsBodyDefinitions).ArrayNum;
    piVar1 = &(this->PhysicsBodyDefinitions).ArrayMax;
    pFVar14 = (param_1->PhysicsBodyDefinitions).AllocatorInstance.Data;
    (this->PhysicsBodyDefinitions).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd0,8,iVar13,*piVar1,&pTVar2->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0xd0);
      }
    }
  }
  this->GravityScale = param_1->GravityScale;
  pTVar3 = &this->SphericalLimits;
  dVar16 = (param_1->GravityOverride).field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X = (param_1->GravityOverride).field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = dVar16;
  (this->GravityOverride).field0_0x0._s_0.Z = (param_1->GravityOverride).field0_0x0._s_0.Z;
  this->LinearSpringConstant = param_1->LinearSpringConstant;
  this->AngularSpringConstant = param_1->AngularSpringConstant;
  this->WindScale = param_1->WindScale;
  dVar16 = (param_1->ComponentLinearAccScale).field0_0x0._s_0.Y;
  (this->ComponentLinearAccScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.X;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Y = dVar16;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.Z;
  dVar16 = (param_1->ComponentLinearVelScale).field0_0x0._s_0.Y;
  (this->ComponentLinearVelScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.X;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Y = dVar16;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.Z;
  dVar16 = (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y = dVar16;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
  fVar17 = (param_1->SimSpaceSettings).MaxAngularVelocity;
  fVar18 = (param_1->SimSpaceSettings).MaxAngularAcceleration;
  uVar11 = *(undefined4 *)&(param_1->SimSpaceSettings).field_0xc;
  (this->SimSpaceSettings).SimSpaceAngularAlpha = (param_1->SimSpaceSettings).SimSpaceAngularAlpha;
  (this->SimSpaceSettings).MaxAngularVelocity = fVar17;
  (this->SimSpaceSettings).MaxAngularAcceleration = fVar18;
  *(undefined4 *)&(this->SimSpaceSettings).field_0xc = uVar11;
  dVar16 = (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y = dVar16;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
  this->AngularBiasOverride = param_1->AngularBiasOverride;
  this->NumSolverIterationsPreUpdate = param_1->NumSolverIterationsPreUpdate;
  this->NumSolverIterationsPostUpdate = param_1->NumSolverIterationsPostUpdate;
  if (pTVar3 != &param_1->SphericalLimits) {
    iVar13 = (param_1->SphericalLimits).ArrayNum;
    piVar1 = &(this->SphericalLimits).ArrayMax;
    pFVar14 = (param_1->SphericalLimits).AllocatorInstance.Data;
    (this->SphericalLimits).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar13,*piVar1,&pTVar3->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0x30);
      }
    }
  }
  dVar16 = (param_1->ExternalForce).field0_0x0._s_0.Y;
  (this->ExternalForce).field0_0x0._s_0.X = (param_1->ExternalForce).field0_0x0._s_0.X;
  (this->ExternalForce).field0_0x0._s_0.Y = dVar16;
  (this->ExternalForce).field0_0x0._s_0.Z = (param_1->ExternalForce).field0_0x0._s_0.Z;
  TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
            (&this->PlanarLimits,&param_1->PlanarLimits);
  this->SimulationSpace = param_1->SimulationSpace;
  this->LastSimSpace = param_1->LastSimSpace;
  this->InitTeleportType = param_1->InitTeleportType;
  bVar19 = (this->bUseSphericalLimits ^ param_1->bUseSphericalLimits) & 1 ^ this->field_0x31b;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 2 ^ bVar19;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 4 ^ bVar19;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 8 ^ bVar19;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 0x10 ^ bVar19;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 0x20 ^ bVar19;
  this->field_0x31b = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31b) & 0x40 ^ bVar19;
  this->field_0x31b = bVar19;
  this->field_0x31b = (bVar19 ^ param_1->field_0x31b) & 0x7f ^ param_1->field_0x31b;
  bVar19 = (this->bWindWasEnabled ^ param_1->bWindWasEnabled) & 1 ^ this->field_0x31c;
  this->field_0x31c = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31c) & 2 ^ bVar19;
  this->field_0x31c = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31c) & 4 ^ bVar19;
  this->field_0x31c = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31c) & 8 ^ bVar19;
  this->field_0x31c = bVar19;
  bVar19 = (bVar19 ^ param_1->field_0x31c) & 0x10 ^ bVar19;
  this->field_0x31c = bVar19;
  this->field_0x31c = (bVar19 ^ param_1->field_0x31c) & 0x20 ^ bVar19;
  FRotationRetargetingInfo::operator=(&this->RetargetingSettings,&param_1->RetargetingSettings);
  this->NextTimeStep = param_1->NextTimeStep;
  pTVar4 = &this->Bodies;
  this->TimeDebt = param_1->TimeDebt;
  this->AnimPhysicsMinDeltaTime = param_1->AnimPhysicsMinDeltaTime;
  this->MaxPhysicsDeltaTime = param_1->MaxPhysicsDeltaTime;
  this->MaxSubstepDeltaTime = param_1->MaxSubstepDeltaTime;
  this->MaxSubsteps = param_1->MaxSubsteps;
  if (pTVar4 != &param_1->Bodies) {
    DestructItems<FAnimPhysLinkedBody,int>
              ((FAnimPhysLinkedBody *)(pTVar4->AllocatorInstance).Data,(this->Bodies).ArrayNum);
    iVar13 = (param_1->Bodies).ArrayNum;
    piVar1 = &(this->Bodies).ArrayMax;
    pFVar15 = (FAnimPhysLinkedBody *)(param_1->Bodies).AllocatorInstance.Data;
    (this->Bodies).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x400,0x10,iVar13,*piVar1,&pTVar4->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FAnimPhysLinkedBody,FAnimPhysLinkedBody,int>
                ((pTVar4->AllocatorInstance).Data,pFVar15,iVar13);
    }
  }
  pTVar5 = &this->BodiesToReset;
  if (pTVar5 != &param_1->BodiesToReset) {
    iVar13 = (param_1->BodiesToReset).ArrayNum;
    piVar1 = &(this->BodiesToReset).ArrayMax;
    pFVar14 = (param_1->BodiesToReset).AllocatorInstance.Data;
    (this->BodiesToReset).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar5->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 3);
      }
    }
  }
  pTVar6 = &this->BaseBodyPtrs;
  if (pTVar6 != &param_1->BaseBodyPtrs) {
    iVar13 = (param_1->BaseBodyPtrs).ArrayNum;
    piVar1 = &(this->BaseBodyPtrs).ArrayMax;
    pFVar14 = (param_1->BaseBodyPtrs).AllocatorInstance.Data;
    (this->BaseBodyPtrs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar6->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 3);
      }
    }
  }
  pTVar7 = &this->LinearLimits;
  if (pTVar7 != &param_1->LinearLimits) {
    iVar13 = (param_1->LinearLimits).ArrayNum;
    piVar1 = &(this->LinearLimits).ArrayMax;
    pFVar14 = (param_1->LinearLimits).AllocatorInstance.Data;
    (this->LinearLimits).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,8,iVar13,*piVar1,&pTVar7->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0xa0);
      }
    }
  }
  pTVar8 = &this->AngularLimits;
  if (pTVar8 != &param_1->AngularLimits) {
    iVar13 = (param_1->AngularLimits).ArrayNum;
    piVar1 = &(this->AngularLimits).ArrayMax;
    pFVar14 = (param_1->AngularLimits).AllocatorInstance.Data;
    (this->AngularLimits).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar13,*piVar1,&pTVar8->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar14,(longlong)iVar13 << 6);
      }
    }
  }
  pTVar9 = &this->Springs;
  if (pTVar9 != &param_1->Springs) {
    iVar13 = (param_1->Springs).ArrayNum;
    piVar1 = &(this->Springs).ArrayMax;
    pFVar14 = (param_1->Springs).AllocatorInstance.Data;
    (this->Springs).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,iVar13,*piVar1,&pTVar9->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0x90);
      }
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PhysicsBodyJointOffsets,&param_1->PhysicsBodyJointOffsets);
  pTVar10 = &this->ConstraintOffsets;
  if (pTVar10 != &param_1->ConstraintOffsets) {
    iVar13 = (param_1->ConstraintOffsets).ArrayNum;
    piVar1 = &(this->ConstraintOffsets).ArrayMax;
    pFVar14 = (param_1->ConstraintOffsets).AllocatorInstance.Data;
    (this->ConstraintOffsets).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar13,*piVar1,&pTVar10->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar14,(longlong)iVar13 * 0x30);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->ActiveBoneIndices,&param_1->ActiveBoneIndices);
  dVar16 = (param_1->SimSpaceGravityDirection).field0_0x0._s_0.Y;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.X =
       (param_1->SimSpaceGravityDirection).field0_0x0._s_0.X;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.Y = dVar16;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.Z =
       (param_1->SimSpaceGravityDirection).field0_0x0._s_0.Z;
  dVar16 = (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Y;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar16;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Z;
  dVar16 = (param_1->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Y;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.X =
       (param_1->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.X;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Y = dVar16;
  (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Z =
       (param_1->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Z;
  this->FilteredBoneIndex = param_1->FilteredBoneIndex;
  return this;
}

// operator() @ 14640e210

FName __thiscall
`FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>::operator()(void *this,FName param_1)

{
  int iVar1;
  int *piVar2;
  FName in_R8;
  
  iVar1 = -1;
  if (in_R8 != (FName)0x0) {
    piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)(*(longlong *)this + 0x90),in_R8);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
    }
  }
  if (-1 < iVar1) {
    if (iVar1 < ((*(FReferenceSkeleton **)this)->FinalRefBoneInfo).ArrayNum) {
      iVar1 = FReferenceSkeleton::GetParentIndex(*(FReferenceSkeleton **)this,iVar1);
      if (iVar1 < 0) goto LAB_14640e287;
    }
    if (iVar1 < ((*(FReferenceSkeleton **)this)->FinalRefBoneInfo).ArrayNum) {
      FReferenceSkeleton::GetBoneName
                (*(FReferenceSkeleton **)this,param_1.ComparisonIndex.Value.Value);
      return param_1;
    }
  }
LAB_14640e287:
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// CalculateSimulationSpaceMotion @ 14641d310

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FAnimNode_AnimDynamics::CalculateSimulationSpaceMotion
          (FAnimNode_AnimDynamics *this,AnimPhysSimSpaceType param_1,
          FAnimPhysSimSpaceSettings *param_2,FComponentSpacePoseContext *param_3,float param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  TConsoleVariableData<bool> *pTVar10;
  bool bVar11;
  longlong lVar12;
  TVector<double> *pTVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double local_188;
  double dStack_180;
  double local_178;
  TTransform<double> local_168;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  TVector<double> local_c8;
  TVector<double> local_b0 [6];
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar1 = param_2->SimSpaceAngularAlpha;
  (param_5->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_5->field0_0x0)._s_0.Y = (double)uVar9;
  (param_5->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_6->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_6->field0_0x0)._s_0.Y = (double)uVar9;
  (param_6->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pTVar10 = CVarDisableWorldSpace.Ref;
  if ((fVar1 != 0.0) && (__real_322bcc77 <= param_4)) {
    if (param_1 == World) {
      bVar11 = IsInParallelGameThread();
      if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
        lVar12 = 0;
      }
      else {
        lVar12 = 1;
      }
      if (pTVar10->ShadowedValue[lVar12] == false) {
        dVar2 = (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
        (param_5->field0_0x0)._s_0.X =
             (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
        (param_5->field0_0x0)._s_0.Y = dVar2;
        (param_5->field0_0x0)._s_0.Z =
             (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
        return;
      }
    }
    GetSimToWorldSpaceTransform(this,&local_168,this->SimulationSpace,param_3);
    local_108 = local_168.Rotation.XY.m128d_f64[0];
    dStack_100 = local_168.Rotation.XY.m128d_f64[1];
    local_d8 = (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0];
    dStack_d0 = (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1];
    local_f8 = local_168.Rotation.ZW.m128d_f64[0];
    dStack_f0 = local_168.Rotation.ZW.m128d_f64[1];
    local_e8 = (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0];
    dStack_e0 = (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1];
    Chaos::TRotation<double,3>::CalculateAngularVelocity1
              ((TVector<double,3> *)&local_188,(TRotation<double,3> *)&local_e8,
               (TRotation<double,3> *)&local_108,(double)param_4);
    dVar26 = __real_3ff0000000000000;
    (param_5->field0_0x0)._s_0.X = local_188;
    (param_5->field0_0x0)._s_0.Y = dStack_180;
    (param_5->field0_0x0)._s_0.Z = local_178;
    dVar2 = (param_5->field0_0x0)._s_0.Y;
    dVar3 = (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Y;
    dVar4 = (param_5->field0_0x0)._s_0.Z;
    dVar21 = (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Z;
    dVar26 = dVar26 / (double)param_4;
    (param_6->field0_0x0)._s_0.X =
         ((param_5->field0_0x0)._s_0.X - (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.X)
         * dVar26;
    (param_6->field0_0x0)._s_0.Y = (dVar2 - dVar3) * dVar26;
    (param_6->field0_0x0)._s_0.Z = (dVar4 - dVar21) * dVar26;
    dVar2 = (param_5->field0_0x0)._s_0.Y;
    fVar1 = param_2->MaxAngularVelocity;
    (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
    (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Y = dVar2;
    dVar2 = (param_5->field0_0x0)._s_0.Z;
    (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
    (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
    (this->PreviousSimSpaceAngularVelocity).field0_0x0._s_0.Z = dVar2;
    (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
    (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
    (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[0] = local_168.Translation.XY.m128d_f64[0];
    (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[1] = local_168.Translation.XY.m128d_f64[1];
    (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0] = local_168.Translation.ZW.m128d_f64[0];
    (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1] = local_168.Translation.ZW.m128d_f64[1];
    (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0] = local_168.Scale3D.XY.m128d_f64[0];
    (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1] = local_168.Scale3D.XY.m128d_f64[1];
    (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0] = local_168.Scale3D.ZW.m128d_f64[0];
    (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1] = local_168.Scale3D.ZW.m128d_f64[1];
    pTVar13 = UE::Math::TVector<double>::GetClampedToMaxSize(param_5,&local_c8,(double)fVar1);
    dVar2 = (param_2->ExternalAngularVelocity).field0_0x0._s_0.Y;
    dVar3 = (param_2->ExternalAngularVelocity).field0_0x0._s_0.Z;
    dVar4 = (pTVar13->field0_0x0)._s_0.Y;
    dVar21 = (pTVar13->field0_0x0)._s_0.Z;
    (param_5->field0_0x0)._s_0.X =
         (pTVar13->field0_0x0)._s_0.X + (param_2->ExternalAngularVelocity).field0_0x0._s_0.X;
    (param_5->field0_0x0)._s_0.Y = dVar2 + dVar4;
    (param_5->field0_0x0)._s_0.Z = dVar3 + dVar21;
    pTVar13 = UE::Math::TVector<double>::GetClampedToMaxSize
                        (param_6,local_b0,(double)param_2->MaxAngularAcceleration);
    dVar2 = (pTVar13->field0_0x0)._s_0.Y;
    (param_6->field0_0x0)._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    (param_6->field0_0x0)._s_0.Y = dVar2;
    (param_6->field0_0x0)._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
    auVar31._0_8_ =
         local_168.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar31._8_8_ =
         local_168.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar4 = local_168.Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar21 = local_168.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar5 = *(undefined1 (*) [16])&param_5->field0_0x0;
    dVar2 = (param_5->field0_0x0)._s_0.Z;
    auVar27._8_4_ = SUB84(dVar21,0);
    auVar27._0_8_ = dVar4;
    auVar27._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar28 = blendpd(auVar27,auVar31,2);
    dVar3 = auVar5._8_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar2;
    auVar14 = blendpd(auVar5,auVar7,2);
    auVar34._0_8_ = dVar3 * dVar4 - auVar5._0_8_ * dVar21;
    auVar34._8_8_ = dVar2 * dVar21 - dVar3 * auVar31._0_8_;
    auVar15._0_8_ = auVar14._0_8_ * auVar31._0_8_ - dVar2 * auVar28._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar31._8_8_ - auVar28._8_8_ * 0.0;
    auVar14 = blendpd(auVar34,auVar15,2);
    dVar26 = auVar34._8_8_ + auVar34._8_8_;
    dVar6 = auVar15._0_8_ + auVar15._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar35._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar35._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar26;
    auVar22._12_4_ = uVar30;
    auVar16._8_4_ = SUB84(dVar6,0);
    auVar16._0_8_ = dVar26;
    auVar16._12_4_ = uVar30;
    auVar14 = blendpd(auVar16,auVar35,2);
    auVar23._0_8_ = auVar22._8_8_ * dVar4 - dVar26 * dVar21;
    auVar23._8_8_ = auVar35._0_8_ * dVar21 - dVar6 * auVar31._0_8_;
    auVar17._0_8_ = auVar14._0_8_ * auVar31._0_8_ - auVar35._0_8_ * auVar28._0_8_;
    auVar17._8_8_ = auVar14._8_8_ * auVar31._8_8_ - auVar35._8_8_ * auVar28._8_8_;
    dVar3 = dVar6 * auVar31._8_8_ + dVar3 + auVar17._0_8_;
    auVar14 = blendpd(auVar23,auVar17,2);
    auVar28._8_4_ = SUB84(dVar3,0);
    auVar28._0_8_ = dVar26 * auVar31._8_8_ + auVar5._0_8_ + auVar23._8_8_;
    auVar28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_5->field0_0x0 = auVar28;
    (param_5->field0_0x0)._s_0.Z = auVar35._0_8_ * auVar31._8_8_ + dVar2 + auVar14._0_8_;
    local_168.Rotation.ZW.m128d_f64[0] =
         local_168.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_168.Rotation.ZW.m128d_f64[1] =
         local_168.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_168.Rotation.XY.m128d_f64[0] =
         local_168.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_168.Rotation.XY.m128d_f64[1] =
         local_168.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar5 = *(undefined1 (*) [16])&param_6->field0_0x0;
    dVar2 = (param_6->field0_0x0)._s_0.Z;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar2;
    dVar26 = auVar5._8_8_;
    auVar29._8_4_ = SUB84(local_168.Rotation.XY.m128d_f64[1],0);
    auVar29._0_8_ = local_168.Rotation.XY.m128d_f64[0];
    auVar29._12_4_ = (int)((ulonglong)local_168.Rotation.XY.m128d_f64[1] >> 0x20);
    auVar32._0_8_ =
         dVar26 * local_168.Rotation.XY.m128d_f64[0] -
         auVar5._0_8_ * local_168.Rotation.XY.m128d_f64[1];
    auVar32._8_8_ =
         dVar2 * local_168.Rotation.XY.m128d_f64[1] - dVar26 * local_168.Rotation.ZW.m128d_f64[0];
    auVar14 = blendpd(auVar5,auVar36,2);
    auVar8._8_4_ = SUB84(local_168.Rotation.ZW.m128d_f64[1],0);
    auVar8._0_8_ = local_168.Rotation.ZW.m128d_f64[0];
    auVar8._12_4_ = (int)((ulonglong)local_168.Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar28 = blendpd(auVar29,auVar8,2);
    auVar18._0_8_ = auVar14._0_8_ * local_168.Rotation.ZW.m128d_f64[0] - dVar2 * auVar28._0_8_;
    auVar18._8_8_ = auVar14._8_8_ * local_168.Rotation.ZW.m128d_f64[1] - auVar28._8_8_ * 0.0;
    auVar14 = blendpd(auVar32,auVar18,2);
    auVar33._0_8_ = auVar14._0_8_ + auVar14._0_8_;
    auVar33._8_8_ = auVar14._8_8_ + auVar14._8_8_;
    dVar3 = auVar32._8_8_ + auVar32._8_8_;
    dVar4 = auVar18._0_8_ + auVar18._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar24._8_4_ = SUB84(dVar4,0);
    auVar24._0_8_ = dVar3;
    auVar24._12_4_ = uVar30;
    auVar19._8_4_ = SUB84(dVar4,0);
    auVar19._0_8_ = dVar3;
    auVar19._12_4_ = uVar30;
    auVar14 = blendpd(auVar19,auVar33,2);
    auVar25._0_8_ =
         auVar24._8_8_ * local_168.Rotation.XY.m128d_f64[0] -
         dVar3 * local_168.Rotation.XY.m128d_f64[1];
    auVar25._8_8_ =
         auVar33._0_8_ * local_168.Rotation.XY.m128d_f64[1] -
         dVar4 * local_168.Rotation.ZW.m128d_f64[0];
    auVar20._0_8_ =
         auVar14._0_8_ * local_168.Rotation.ZW.m128d_f64[0] - auVar33._0_8_ * auVar28._0_8_;
    auVar20._8_8_ =
         auVar14._8_8_ * local_168.Rotation.ZW.m128d_f64[1] - auVar33._8_8_ * auVar28._8_8_;
    auVar28 = blendpd(auVar25,auVar20,2);
    dVar21 = (double)param_2->SimSpaceAngularAlpha;
    dVar4 = dVar4 * local_168.Rotation.ZW.m128d_f64[1] + dVar26 + auVar20._0_8_;
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar3 * local_168.Rotation.ZW.m128d_f64[1] + auVar5._0_8_ + auVar25._8_8_;
    auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&param_6->field0_0x0 = auVar14;
    (param_6->field0_0x0)._s_0.Z =
         auVar33._0_8_ * local_168.Rotation.ZW.m128d_f64[1] + dVar2 + auVar28._0_8_;
    (param_5->field0_0x0)._s_0.X = (param_5->field0_0x0)._s_0.X * dVar21;
    (param_5->field0_0x0)._s_0.Y = (param_5->field0_0x0)._s_0.Y * dVar21;
    (param_5->field0_0x0)._s_0.Z = dVar21 * (param_5->field0_0x0)._s_0.Z;
    dVar3 = (param_6->field0_0x0)._s_0.Y * dVar21;
    dVar2 = (param_6->field0_0x0)._s_0.Z;
    auVar5._8_4_ = SUB84(dVar3,0);
    auVar5._0_8_ = (param_6->field0_0x0)._s_0.X * dVar21;
    auVar5._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&param_6->field0_0x0 = auVar5;
    (param_6->field0_0x0)._s_0.Z = dVar21 * dVar2;
  }
  return;
}

// ConvertSimulationSpace @ 146421430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_AnimDynamics::ConvertSimulationSpace
          (FAnimNode_AnimDynamics *this,FComponentSpacePoseContext *param_1,
          AnimPhysSimSpaceType param_2,AnimPhysSimSpaceType param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double *pdVar3;
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
  TTransform<double> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [16];
  TTransform<double> local_148;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar13 = _UNK_150689688;
  dVar12 = ___xmm_3ff00000000000003ff0000000000000;
  dVar11 = _UNK_150689518;
  dVar10 = ___xmm_00000000000000003ff0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar15 = (this->BaseBodyPtrs).AllocatorInstance.Data;
  iVar2 = (this->BaseBodyPtrs).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BaseBodyPtrs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimPhysRigidBody_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_158);
    }
    if ((pFVar15 == pFVar1) || (pdVar3 = *(double **)pFVar15, pdVar3 == (double *)0x0)) break;
    local_148.Rotation.XY.m128d_f64[0] = pdVar3[4];
    local_148.Rotation.XY.m128d_f64[1] = pdVar3[5];
    local_148.Rotation.ZW.m128d_f64[0] = pdVar3[6];
    local_148.Rotation.ZW.m128d_f64[1] = pdVar3[7];
    local_148.Translation.ZW.m128d_f64[0] = pdVar3[2];
    local_148.Translation.XY.m128d_f64[1] = pdVar3[1];
    local_148.Translation.XY.m128d_f64[0] = *pdVar3;
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_148.Scale3D.XY.m128d_f64[0] = dVar12;
    local_148.Scale3D.XY.m128d_f64[1] = dVar13;
    local_148.Scale3D.ZW.m128d_f64[0] = dVar10;
    local_148.Scale3D.ZW.m128d_f64[1] = dVar11;
    GetComponentSpaceTransformFromSimSpace
              (this,&local_c8,this->LastSimSpace,param_1,&local_148,
               (TTransform<double> *)(param_1->_padding_ + 0x20),
               (TTransform<double> *)(param_1->_padding_ + 0xe0));
    local_148.Rotation.XY.m128d_f64[0] = local_c8.Rotation.XY.m128d_f64[0];
    local_148.Rotation.XY.m128d_f64[1] = local_c8.Rotation.XY.m128d_f64[1];
    local_148.Rotation.ZW.m128d_f64[0] = local_c8.Rotation.ZW.m128d_f64[0];
    local_148.Rotation.ZW.m128d_f64[1] = local_c8.Rotation.ZW.m128d_f64[1];
    local_148.Translation.XY.m128d_f64[0] = local_c8.Translation.XY.m128d_f64[0];
    local_148.Translation.XY.m128d_f64[1] = local_c8.Translation.XY.m128d_f64[1];
    local_148.Translation.ZW.m128d_f64[0] = local_c8.Translation.ZW.m128d_f64[0];
    local_148.Translation.ZW.m128d_f64[1] = local_c8.Translation.ZW.m128d_f64[1];
    local_148.Scale3D.XY.m128d_f64[0] = local_c8.Scale3D.XY.m128d_f64[0];
    local_148.Scale3D.XY.m128d_f64[1] = local_c8.Scale3D.XY.m128d_f64[1];
    local_148.Scale3D.ZW.m128d_f64[0] = local_c8.Scale3D.ZW.m128d_f64[0];
    local_148.Scale3D.ZW.m128d_f64[1] = local_c8.Scale3D.ZW.m128d_f64[1];
    pTVar14 = GetSimSpaceTransformFromComponentSpace
                        (this,&local_c8,this->SimulationSpace,param_1,&local_148);
    pFVar15 = pFVar15 + 8;
    local_148.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
    local_148.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
    local_148.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
    local_148.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
    dVar5 = (pTVar14->Rotation).XY.m128d_f64[1];
    dVar6 = (pTVar14->Rotation).ZW.m128d_f64[0];
    dVar7 = (pTVar14->Rotation).ZW.m128d_f64[1];
    dVar8 = (pTVar14->Translation).XY.m128d_f64[0];
    dVar9 = (pTVar14->Translation).XY.m128d_f64[1];
    dVar4 = (pTVar14->Translation).ZW.m128d_f64[0];
    pdVar3[4] = (pTVar14->Rotation).XY.m128d_f64[0];
    pdVar3[5] = dVar5;
    pdVar3[6] = dVar6;
    pdVar3[7] = dVar7;
    *pdVar3 = dVar8;
    pdVar3[1] = dVar9;
    pdVar3[2] = dVar4;
  }
  return;
}

// DrawBodies @ 146423b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_AnimDynamics::DrawBodies
          (FAnimNode_AnimDynamics *this,FComponentSpacePoseContext *param_1,
          TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  AnimPhysSimSpaceType AVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
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
  float fVar26;
  float fVar27;
  float fVar28;
  TConsoleVariableData<FString> *pTVar29;
  __m128d _Var30;
  __m128d _Var31;
  bool bVar32;
  int iVar33;
  uint uVar34;
  FName *pFVar35;
  TVector<double> *pTVar36;
  TTransform<double> *pTVar37;
  ulonglong uVar38;
  FCompactPoseBoneIndex FVar39;
  ForAnyElementType FVar40;
  uint uVar41;
  longlong *plVar42;
  int iVar43;
  longlong *plVar44;
  longlong lVar45;
  FAnimInstanceProxy *this_00;
  ulonglong uVar46;
  FScriptContainerElement *pFVar47;
  uint uVar48;
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
  undefined4 uVar79;
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
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
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
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
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
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  double dVar144;
  undefined1 auVar145 [16];
  double dVar166;
  undefined4 uVar168;
  undefined1 auVar146 [16];
  double dVar167;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  double dVar185;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auStackY_a68 [32];
  undefined1 local_a18 [4];
  int local_a14;
  uint local_a10;
  longlong local_a08;
  TTransform<double> local_9f8;
  int local_998;
  uint local_994;
  FAnimInstanceProxy *local_990;
  longlong *local_988;
  longlong local_980;
  longlong local_978;
  longlong *local_970;
  longlong local_968;
  FString local_960;
  FScriptContainerElement *local_948;
  longlong local_940;
  undefined8 local_938;
  TVector<double>_u_0 local_928;
  TVector<double>_u_0 local_910;
  TVector<double>_u_0 local_8f8;
  TVector<double>_u_0 local_8e0;
  TVector<double>_u_0 local_8c8;
  TVector<double>_u_0 local_8b0;
  double local_898;
  double dStack_890;
  double local_888;
  double local_880;
  double dStack_878;
  double local_870;
  double local_868;
  double dStack_860;
  double local_858;
  TVector<double>_u_0 local_850;
  TVector<double>_u_0 local_838;
  TVector<double>_u_0 local_820;
  TVector<double>_u_0 local_808;
  TVector<double>_u_0 local_7f0;
  TVector<double>_u_0 local_7d8;
  FName local_7c0;
  TQuat<double> local_7b8;
  TQuat<double> local_798;
  undefined8 local_778;
  undefined8 uStack_770;
  double local_758;
  double dStack_750;
  double local_748;
  double local_740;
  double dStack_738;
  double local_730;
  double local_728;
  double dStack_720;
  double local_718;
  TRotator<double> local_710;
  TRotator<double> local_6f8;
  TTransform<double> local_6d8;
  TTransform<double> local_678;
  TTransform<double> local_618;
  TTransform<double> local_5b8;
  TTransform<double> local_558;
  TTransform<double> local_4f8;
  TVector<double> local_498;
  TVector<double> local_480;
  TVector<double> local_468;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_a68;
  iVar33 = TAutoConsoleVariable<int>::GetValueOnAnyThread(&CVarShowDebug,false);
  if (iVar33 != 0) {
    this_00 = (FAnimInstanceProxy *)param_1->_padding_;
    local_990 = this_00;
    if ((this_00 == (FAnimInstanceProxy *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Proxy",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                            ,0x60,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar29 = CVarDebugBone.Ref;
    uVar34 = TConsoleVariableData<FString>::GetShadowIndex(false);
    ::FString::FString(&local_960,pTVar29->ShadowedValue + uVar34);
    iVar33 = (this->Bodies).ArrayNum;
    local_940 = (longlong)iVar33;
    local_998 = local_960.Data.ArrayNum + -1;
    if (local_960.Data.ArrayNum == 0) {
      local_998 = 0;
    }
    if (((this->PhysicsBodyDefinitions).ArrayNum < iVar33) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("PhysicsBodyDefinitions.Num() >= NumBodies",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                            ,0x67,L""), bVar32)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    fVar28 = __real_3e19999a;
    fVar27 = __real_40000000;
    fVar26 = __real_bf800000;
    local_a10 = 0;
    if (0 < iVar33) {
      local_a08 = 0;
      local_980 = 0;
      local_968 = 0;
      do {
        lVar45 = local_968;
        uVar34 = local_a10;
        uVar41 = ~local_a10;
        uVar48 = 0;
        if ((int)local_a10 < (this->Bodies).ArrayNum) {
          uVar48 = uVar41 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar47 = (this->Bodies).AllocatorInstance.Data;
        uVar48 = 0;
        if ((int)uVar34 < (this->PhysicsBodyDefinitions).ArrayNum) {
          uVar48 = uVar41 >> 0x1f;
        }
        local_948 = pFVar47;
        if ((uVar48 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->PhysicsBodyDefinitions).AllocatorInstance.Data;
        if (local_998 < 1) {
LAB_146423e0c:
          local_9f8.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar47 + lVar45 + 0x30);
          local_9f8.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar47 + lVar45 + 0x30 + 8);
          local_9f8.Rotation.XY.m128d_f64[0] = *(double *)(pFVar47 + lVar45 + 0x20);
          local_9f8.Rotation.XY.m128d_f64[1] = *(double *)(pFVar47 + lVar45 + 0x20 + 8);
          local_9f8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar47 + lVar45 + 0x10);
          local_9f8.Translation.XY.m128d_f64 = *(double (*) [2])(pFVar47 + lVar45);
          local_9f8.Scale3D.XY.m128d_f64[0] = (double)*(float *)(pFVar47 + lVar45 + 0x40);
          local_9f8.Translation.ZW.m128d_f64[1] = 0.0;
          local_9f8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_9f8.Scale3D.XY.m128d_f64[1] = local_9f8.Scale3D.XY.m128d_f64[0];
          local_9f8.Scale3D.ZW.m128d_f64[0] = local_9f8.Scale3D.XY.m128d_f64[0];
          GetComponentSpaceTransformFromSimSpace
                    (this,&local_3e8,this->SimulationSpace,param_1,&local_9f8,
                     (TTransform<double> *)(param_1->_padding_ + 0x20),
                     (TTransform<double> *)(param_1->_padding_ + 0xe0));
          dVar7 = local_3e8.Translation.ZW.m128d_f64[0];
          _Var30.m128d_f64 = local_3e8.Translation.XY.m128d_f64;
          local_9f8.Rotation.XY.m128d_f64[0] = local_3e8.Rotation.XY.m128d_f64[0];
          local_9f8.Rotation.XY.m128d_f64[1] = local_3e8.Rotation.XY.m128d_f64[1];
          local_9f8.Rotation.ZW.m128d_f64[0] = local_3e8.Rotation.ZW.m128d_f64[0];
          local_9f8.Rotation.ZW.m128d_f64[1] = local_3e8.Rotation.ZW.m128d_f64[1];
          local_9f8.Scale3D.XY.m128d_f64[0] = local_3e8.Scale3D.XY.m128d_f64[0];
          local_9f8.Scale3D.XY.m128d_f64[1] = local_3e8.Scale3D.XY.m128d_f64[1];
          local_9f8.Scale3D.ZW.m128d_f64[0] = local_3e8.Scale3D.ZW.m128d_f64[0];
          local_9f8.Scale3D.ZW.m128d_f64[1] = local_3e8.Scale3D.ZW.m128d_f64[1];
          local_7b8.X = local_3e8.Rotation.XY.m128d_f64[0];
          local_7b8.Y = local_3e8.Rotation.XY.m128d_f64[1];
          local_7b8.Z = local_3e8.Rotation.ZW.m128d_f64[0];
          local_7b8.W = local_3e8.Rotation.ZW.m128d_f64[1];
          local_9f8.Translation.XY.m128d_f64[0] = local_3e8.Translation.XY.m128d_f64[0];
          local_9f8.Translation.XY.m128d_f64[1] = local_3e8.Translation.XY.m128d_f64[1];
          local_9f8.Translation.ZW.m128d_f64[0] = local_3e8.Translation.ZW.m128d_f64[0];
          local_9f8.Translation.ZW.m128d_f64[1] = local_3e8.Translation.ZW.m128d_f64[1];
          UE::Math::TQuat<double>::Rotator(&local_7b8,&local_6f8);
          _Var31.m128d_f64 = local_3e8.Translation.XY.m128d_f64;
          local_3e8.Translation.XY.m128d_f64[0] = _Var30.m128d_f64[0];
          local_3e8.Translation.XY.m128d_f64[1] = _Var30.m128d_f64[1];
          local_850._s_0.X = local_3e8.Translation.XY.m128d_f64[0];
          local_850._s_0.Y = local_3e8.Translation.XY.m128d_f64[1];
          local_850._s_0.Z = dVar7;
          local_3e8.Translation.XY.m128d_f64 = _Var31.m128d_f64;
          FAnimInstanceProxy::AnimDrawDebugCoordinateSystem
                    (this_00,(TVector<double> *)&local_850._s_0,&local_6f8,fVar27,false,fVar26,
                     fVar28,SDPG_World);
          local_994 = *(uint *)(pFVar47 + lVar45 + 0x3d8);
          uVar38 = (ulonglong)(int)local_994;
          plVar42 = *(longlong **)(pFVar47 + lVar45 + 0x3d0);
          local_970 = plVar42 + uVar38 * 8;
          plVar44 = plVar42 + 1;
          while( true ) {
            local_988 = plVar44;
            if (*(int *)(pFVar47 + lVar45 + 0x3d8) != (int)uVar38) {
              local_a18[0] = 0;
              `TCheckedPointerIterator<FAnimPhysShape_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_a18);
            }
            uVar34 = local_a10;
            if (plVar42 == local_970) break;
            local_978 = (longlong)(int)plVar42[3];
            uVar46 = 0;
            uVar38 = uVar46;
            if (0 < local_978) {
              do {
                uVar48 = (uint)uVar38;
                uVar34 = 0;
                if ((int)uVar48 < (int)plVar42[3]) {
                  uVar34 = ~uVar48 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar2 = *(undefined8 *)(uVar46 + plVar42[2]);
                iVar33 = *(int *)(uVar46 + 8 + plVar42[2]);
                lVar45 = (longlong)iVar33;
                uVar41 = (uint)((ulonglong)uVar2 >> 0x20);
                uVar34 = 0;
                if ((int)uVar41 < (int)*plVar44) {
                  uVar34 = ~uVar41 >> 0x1f;
                }
                local_938 = uVar2;
                if ((uVar34 == 0) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar113._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar113._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar171._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar171._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                local_a14 = local_938._4_4_;
                auVar139 = blendpd(auVar171,auVar113,2);
                pdVar1 = (double *)(*plVar42 + (longlong)local_938._4_4_ * 0x18);
                dVar49 = *(double *)(*plVar42 + 0x10 + (longlong)local_938._4_4_ * 0x18) *
                         local_9f8.Scale3D.ZW.m128d_f64[0];
                dVar144 = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar50._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar50._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar50._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar173._8_4_ = SUB84(dVar8,0);
                auVar173._0_8_ = dVar7;
                auVar173._12_4_ = uVar79;
                auVar80._8_4_ = SUB84(dVar8,0);
                auVar80._0_8_ = dVar7;
                auVar80._12_4_ = uVar79;
                auVar81._8_4_ = SUB84(dVar144,0);
                auVar81._0_8_ = dVar49;
                auVar81._12_4_ = (int)((ulonglong)dVar144 >> 0x20);
                auVar81 = blendpd(auVar80,auVar81,2);
                auVar174._0_8_ =
                     auVar173._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar174._8_8_ = dVar49 * local_9f8.Rotation.XY.m128d_f64[1] - auVar50._8_8_ * dVar8
                ;
                auVar145._8_4_ = SUB84(auVar174._8_8_,0);
                auVar145._0_8_ = auVar174._0_8_;
                auVar145._12_4_ = (int)((ulonglong)auVar174._8_8_ >> 0x20);
                auVar82._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] - auVar139._0_8_ * dVar49;
                auVar82._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] - auVar139._8_8_ * dVar144;
                auVar81 = blendpd(auVar174,auVar82,2);
                dVar144 = auVar145._8_8_ + auVar145._8_8_;
                dVar166 = auVar82._0_8_ + auVar82._0_8_;
                auVar175._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar175._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                uVar79 = SUB84(dVar166,0);
                auVar111._8_4_ = uVar79;
                auVar111._0_8_ = dVar144;
                uVar168 = (undefined4)((ulonglong)dVar166 >> 0x20);
                auVar111._12_4_ = uVar168;
                auVar51._8_4_ = uVar79;
                auVar51._0_8_ = dVar144;
                auVar51._12_4_ = uVar168;
                auVar83._8_4_ = uVar79;
                auVar83._0_8_ = dVar144;
                auVar83._12_4_ = uVar168;
                auVar81 = blendpd(auVar83,auVar175,2);
                auVar112._0_8_ =
                     auVar111._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     dVar144 * local_9f8.Rotation.XY.m128d_f64[1];
                auVar112._8_8_ =
                     auVar175._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     auVar51._8_8_ * local_9f8.Rotation.ZW.m128d_f64[0];
                auVar52._8_4_ = SUB84(auVar175._8_8_,0);
                auVar52._0_8_ = auVar175._0_8_;
                auVar52._12_4_ = (int)((ulonglong)auVar175._8_8_ >> 0x20);
                auVar84._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar175._0_8_ * auVar139._0_8_;
                auVar84._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar52._8_8_ * auVar139._8_8_;
                auVar53._8_4_ = SUB84(auVar112._8_8_,0);
                auVar53._0_8_ = auVar112._0_8_;
                auVar53._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
                auVar81 = blendpd(auVar112,auVar84,2);
                local_678.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_678.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_880 = dVar144 * local_9f8.Rotation.ZW.m128d_f64[1] + dVar7 + auVar53._8_8_ +
                            local_9f8.Translation.XY.m128d_f64[0];
                dStack_878 = dVar166 * local_9f8.Rotation.ZW.m128d_f64[1] + dVar8 + auVar84._0_8_ +
                             local_9f8.Translation.XY.m128d_f64[1];
                local_678.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_678.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar10._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar10._0_4_ = (int)((ulonglong)local_880 >> 0x20);
                auVar85._0_8_ = auVar10._0_8_ << 0x20;
                auVar85._8_4_ = SUB84(dStack_878,0);
                auVar85._12_4_ = (int)((ulonglong)dStack_878 >> 0x20);
                local_870 = auVar175._0_8_ * local_9f8.Rotation.ZW.m128d_f64[1] + dVar49 +
                            auVar81._0_8_ + local_9f8.Translation.ZW.m128d_f64[0];
                local_678.Translation.XY.m128d_f64[1] = auVar85._8_8_;
                local_678.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_678.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_678.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_678.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_678.Translation.ZW.m128d_f64[1] = 0.0;
                local_678.Translation.XY.m128d_f64[0] = local_880;
                local_678.Translation.ZW.m128d_f64[0] = local_870;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_388,this->SimulationSpace,param_1,&local_678,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                lVar5 = param_1->_padding_;
                dVar49 = local_870 * *(double *)(lVar5 + 0x70);
                dVar144 = *(double *)(lVar5 + 0x78) * 0.0;
                dVar7 = *(double *)(lVar5 + 0x60) * local_880;
                dVar8 = *(double *)(lVar5 + 0x68) * dStack_878;
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                local_778 = *(undefined8 *)(lVar5 + 0x20);
                uStack_770 = *(undefined8 *)(lVar5 + 0x28);
                auVar169._8_4_ = SUB84(dVar8,0);
                auVar169._0_8_ = dVar7;
                auVar169._12_4_ = uVar79;
                auVar81 = *(undefined1 (*) [16])(lVar5 + 0x30);
                dVar166 = auVar81._0_8_;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                auVar171 = *(undefined1 (*) [16])(lVar5 + 0x30);
                auVar113 = blendpd(auVar139,auVar81,2);
                auVar170._0_8_ = auVar169._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar7;
                auVar170._8_8_ = dVar49 * auVar139._8_8_ - dVar166 * dVar8;
                dVar185 = auVar171._8_8_;
                auVar146._8_4_ = SUB84(auVar170._8_8_,0);
                auVar146._0_8_ = auVar170._0_8_;
                auVar146._12_4_ = (int)((ulonglong)auVar170._8_8_ >> 0x20);
                auVar120._8_4_ = auVar171._8_4_;
                auVar120._0_8_ = dVar185;
                auVar120._12_4_ = auVar171._12_4_;
                auVar54._8_4_ = SUB84(dVar8,0);
                auVar54._0_8_ = dVar7;
                auVar54._12_4_ = uVar79;
                auVar139._8_4_ = SUB84(dVar144,0);
                auVar139._0_8_ = dVar49;
                auVar139._12_4_ = (int)((ulonglong)dVar144 >> 0x20);
                auVar139 = blendpd(auVar54,auVar139,2);
                auVar55._0_8_ = auVar139._0_8_ * dVar166 - auVar113._0_8_ * dVar49;
                auVar55._8_8_ = auVar139._8_8_ * auVar81._8_8_ - auVar113._8_8_ * dVar144;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                auVar171 = blendpd(auVar170,auVar55,2);
                dVar144 = auVar146._8_8_ + auVar146._8_8_;
                dVar167 = auVar55._0_8_ + auVar55._0_8_;
                auVar172._0_8_ = auVar171._0_8_ + auVar171._0_8_;
                auVar172._8_8_ = auVar171._8_8_ + auVar171._8_8_;
                auVar140._8_4_ = SUB84(dVar167,0);
                auVar140._0_8_ = dVar144;
                uVar79 = (undefined4)((ulonglong)dVar167 >> 0x20);
                auVar140._12_4_ = uVar79;
                auVar133._8_4_ = SUB84(dVar167,0);
                auVar133._0_8_ = dVar144;
                auVar133._12_4_ = uVar79;
                auVar141._0_8_ = auVar140._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar144;
                auVar141._8_8_ = auVar172._0_8_ * auVar139._8_8_ - dVar166 * dVar167;
                auVar139 = blendpd(auVar139,auVar81,2);
                auVar171 = blendpd(auVar133,auVar172,2);
                auVar56._8_4_ = SUB84(auVar141._8_8_,0);
                auVar56._0_8_ = auVar141._0_8_;
                auVar56._12_4_ = (int)((ulonglong)auVar141._8_8_ >> 0x20);
                auVar134._0_8_ = auVar171._0_8_ * dVar166 - auVar139._0_8_ * auVar172._0_8_;
                auVar134._8_8_ = auVar171._8_8_ * auVar81._8_8_ - auVar139._8_8_ * auVar172._8_8_;
                auVar81 = blendpd(auVar141,auVar134,2);
                local_928._s_0.X =
                     dVar185 * dVar144 + dVar7 + auVar56._8_8_ + *(double *)(lVar5 + 0x40);
                local_928._s_0.Y =
                     auVar120._8_8_ * dVar167 + dVar8 + auVar134._0_8_ + *(double *)(lVar5 + 0x48);
                local_928._s_0.Z =
                     dVar185 * auVar172._0_8_ + dVar49 + auVar81._0_8_ + *(double *)(lVar5 + 0x50);
                iVar43 = (int)uVar2;
                local_758 = local_928._s_0.X;
                dStack_750 = local_928._s_0.Y;
                local_748 = local_928._s_0.Z;
                if ((iVar43 < 0 || (int)plVar42[1] <= iVar43) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar21._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar21._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar16._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar16._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                auVar139 = blendpd(auVar16,auVar21,2);
                pdVar1 = (double *)(*plVar42 + (longlong)iVar43 * 0x18);
                auVar176._0_8_ =
                     *(double *)(*plVar42 + 0x10 + (longlong)iVar43 * 0x18) *
                     local_9f8.Scale3D.ZW.m128d_f64[0];
                auVar176._8_8_ = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar57._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar57._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar57._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar147._8_4_ = SUB84(dVar8,0);
                auVar147._0_8_ = dVar7;
                auVar147._12_4_ = uVar79;
                auVar86._8_4_ = SUB84(dVar8,0);
                auVar86._0_8_ = dVar7;
                auVar86._12_4_ = uVar79;
                auVar81 = blendpd(auVar86,auVar176,2);
                auVar148._0_8_ =
                     auVar147._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar148._8_8_ =
                     auVar176._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] - auVar57._8_8_ * dVar8;
                auVar87._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar176._0_8_;
                auVar87._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar176._8_8_;
                auVar58._8_4_ = SUB84(auVar148._8_8_,0);
                auVar58._0_8_ = auVar148._0_8_;
                auVar58._12_4_ = (int)((ulonglong)auVar148._8_8_ >> 0x20);
                dVar49 = auVar58._8_8_ + auVar58._8_8_;
                dVar144 = auVar87._0_8_ + auVar87._0_8_;
                auVar81 = blendpd(auVar148,auVar87,2);
                auVar121._8_4_ = SUB84(dVar144,0);
                auVar121._0_8_ = dVar49;
                uVar79 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar121._12_4_ = uVar79;
                auVar88._8_4_ = SUB84(dVar144,0);
                auVar88._0_8_ = dVar49;
                auVar88._12_4_ = uVar79;
                auVar149._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar149._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                auVar81 = blendpd(auVar88,auVar149,2);
                auVar114._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[1],0);
                auVar114._0_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar114._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[1] >> 0x20);
                auVar122._0_8_ =
                     auVar121._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar49;
                auVar122._8_8_ =
                     auVar149._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     local_9f8.Rotation.ZW.m128d_f64[0] * dVar144;
                auVar59._8_4_ = SUB84(auVar122._8_8_,0);
                auVar59._0_8_ = auVar122._0_8_;
                auVar59._12_4_ = (int)((ulonglong)auVar122._8_8_ >> 0x20);
                auVar89._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar149._0_8_;
                auVar89._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar149._8_8_;
                auVar81 = blendpd(auVar122,auVar89,2);
                local_838._s_0.X =
                     local_9f8.Rotation.ZW.m128d_f64[1] * dVar49 + dVar7 + auVar59._8_8_ +
                     local_9f8.Translation.XY.m128d_f64[0];
                local_838._s_0.Y =
                     auVar114._8_8_ * dVar144 + dVar8 + auVar89._0_8_ +
                     local_9f8.Translation.XY.m128d_f64[1];
                local_618.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_618.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_618.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_618.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar11._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar11._0_4_ = (int)((ulonglong)local_838._s_0.X >> 0x20);
                auVar90._0_8_ = auVar11._0_8_ << 0x20;
                auVar90._8_4_ = SUB84(local_838._s_0.Y,0);
                auVar90._12_4_ = (int)((ulonglong)local_838._s_0.Y >> 0x20);
                local_618.Translation.XY.m128d_f64[1] = auVar90._8_8_;
                local_838._s_0.Z =
                     local_9f8.Rotation.ZW.m128d_f64[1] * auVar149._0_8_ + auVar176._0_8_ +
                     auVar81._0_8_ + local_9f8.Translation.ZW.m128d_f64[0];
                local_618.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_618.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_618.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_618.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_618.Translation.ZW.m128d_f64[1] = 0.0;
                local_618.Translation.XY.m128d_f64[0] = local_838._s_0.X;
                local_618.Translation.ZW.m128d_f64[0] = local_838._s_0.Z;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_328,this->SimulationSpace,param_1,&local_618,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                local_910._s_0.Z = local_328.Translation.ZW.m128d_f64[0];
                local_910._s_0.X = local_328.Translation.XY.m128d_f64[0];
                local_910._s_0.Y = local_328.Translation.XY.m128d_f64[1];
                pTVar36 = UE::Math::TTransform<double>::TransformPosition
                                    ((TTransform<double> *)(param_1->_padding_ + 0x20),&local_498,
                                     (TVector<double> *)&local_838._s_0);
                local_910._s_0.X = (pTVar36->field0_0x0)._s_0.X;
                local_910._s_0.Y = (pTVar36->field0_0x0)._s_0.Y;
                local_910._s_0.Z = (pTVar36->field0_0x0)._s_0.Z;
                FAnimInstanceProxy::AnimDrawDebugLine
                          (local_990,(TVector<double> *)&local_910._s_0,
                           (TVector<double> *)&local_928._s_0,&FColor::Yellow,false,fVar26,fVar28,
                           SDPG_World);
                if ((iVar33 < 0 || (int)plVar42[1] <= iVar33) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar22._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar22._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar17._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar17._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                pdVar1 = (double *)(*plVar42 + lVar45 * 0x18);
                auVar177._0_8_ =
                     *(double *)(*plVar42 + 0x10 + lVar45 * 0x18) *
                     local_9f8.Scale3D.ZW.m128d_f64[0];
                auVar177._8_8_ = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar150._8_4_ = SUB84(dVar8,0);
                auVar150._0_8_ = dVar7;
                auVar150._12_4_ = uVar79;
                auVar60._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar60._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar60._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar139 = blendpd(auVar17,auVar22,2);
                auVar151._0_8_ =
                     auVar150._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar151._8_8_ =
                     auVar177._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] - auVar60._8_8_ * dVar8;
                auVar91._8_4_ = SUB84(dVar8,0);
                auVar91._0_8_ = dVar7;
                auVar91._12_4_ = uVar79;
                auVar81 = blendpd(auVar91,auVar177,2);
                auVar92._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar177._0_8_;
                auVar92._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar177._8_8_;
                auVar61._8_4_ = SUB84(auVar151._8_8_,0);
                auVar61._0_8_ = auVar151._0_8_;
                auVar61._12_4_ = (int)((ulonglong)auVar151._8_8_ >> 0x20);
                dVar49 = auVar61._8_8_ + auVar61._8_8_;
                dVar144 = auVar92._0_8_ + auVar92._0_8_;
                auVar81 = blendpd(auVar151,auVar92,2);
                auVar123._8_4_ = SUB84(dVar144,0);
                auVar123._0_8_ = dVar49;
                uVar79 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar123._12_4_ = uVar79;
                auVar93._8_4_ = SUB84(dVar144,0);
                auVar93._0_8_ = dVar49;
                auVar93._12_4_ = uVar79;
                auVar152._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar152._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                auVar81 = blendpd(auVar93,auVar152,2);
                auVar115._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[1],0);
                auVar115._0_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar115._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[1] >> 0x20);
                auVar124._0_8_ =
                     auVar123._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar49;
                auVar124._8_8_ =
                     auVar152._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     local_9f8.Rotation.ZW.m128d_f64[0] * dVar144;
                auVar62._8_4_ = SUB84(auVar124._8_8_,0);
                auVar62._0_8_ = auVar124._0_8_;
                auVar62._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
                auVar94._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar152._0_8_;
                auVar94._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar152._8_8_;
                auVar81 = blendpd(auVar124,auVar94,2);
                local_820._s_0.X =
                     local_9f8.Rotation.ZW.m128d_f64[1] * dVar49 + dVar7 + auVar62._8_8_ +
                     local_9f8.Translation.XY.m128d_f64[0];
                local_820._s_0.Y =
                     auVar115._8_8_ * dVar144 + dVar8 + auVar94._0_8_ +
                     local_9f8.Translation.XY.m128d_f64[1];
                local_5b8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_5b8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_5b8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_5b8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar12._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar12._0_4_ = (int)((ulonglong)local_820._s_0.X >> 0x20);
                auVar95._0_8_ = auVar12._0_8_ << 0x20;
                auVar95._8_4_ = SUB84(local_820._s_0.Y,0);
                auVar95._12_4_ = (int)((ulonglong)local_820._s_0.Y >> 0x20);
                local_5b8.Translation.XY.m128d_f64[1] = auVar95._8_8_;
                local_820._s_0.Z =
                     local_9f8.Rotation.ZW.m128d_f64[1] * auVar152._0_8_ + auVar177._0_8_ +
                     auVar81._0_8_ + local_9f8.Translation.ZW.m128d_f64[0];
                local_5b8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_5b8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_5b8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_5b8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_5b8.Translation.ZW.m128d_f64[1] = 0.0;
                local_5b8.Translation.XY.m128d_f64[0] = local_820._s_0.X;
                local_5b8.Translation.ZW.m128d_f64[0] = local_820._s_0.Z;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_2c8,this->SimulationSpace,param_1,&local_5b8,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                local_8f8._s_0.Z = local_2c8.Translation.ZW.m128d_f64[0];
                local_8f8._s_0.X = local_2c8.Translation.XY.m128d_f64[0];
                local_8f8._s_0.Y = local_2c8.Translation.XY.m128d_f64[1];
                pTVar36 = UE::Math::TTransform<double>::TransformPosition
                                    ((TTransform<double> *)(param_1->_padding_ + 0x20),&local_480,
                                     (TVector<double> *)&local_820._s_0);
                local_8f8._s_0.X = (pTVar36->field0_0x0)._s_0.X;
                local_8f8._s_0.Y = (pTVar36->field0_0x0)._s_0.Y;
                local_8f8._s_0.Z = (pTVar36->field0_0x0)._s_0.Z;
                if ((local_a14 < 0 || (int)plVar42[1] <= local_a14) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar23._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar23._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar18._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar18._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                auVar139 = blendpd(auVar18,auVar23,2);
                pdVar1 = (double *)(*plVar42 + (longlong)local_a14 * 0x18);
                auVar178._0_8_ =
                     *(double *)(*plVar42 + 0x10 + (longlong)local_a14 * 0x18) *
                     local_9f8.Scale3D.ZW.m128d_f64[0];
                auVar178._8_8_ = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar63._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar63._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar63._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar153._8_4_ = SUB84(dVar8,0);
                auVar153._0_8_ = dVar7;
                auVar153._12_4_ = uVar79;
                auVar96._8_4_ = SUB84(dVar8,0);
                auVar96._0_8_ = dVar7;
                auVar96._12_4_ = uVar79;
                auVar81 = blendpd(auVar96,auVar178,2);
                auVar154._0_8_ =
                     auVar153._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar154._8_8_ =
                     auVar178._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] - auVar63._8_8_ * dVar8;
                auVar97._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar178._0_8_;
                auVar97._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar178._8_8_;
                auVar64._8_4_ = SUB84(auVar154._8_8_,0);
                auVar64._0_8_ = auVar154._0_8_;
                auVar64._12_4_ = (int)((ulonglong)auVar154._8_8_ >> 0x20);
                dVar49 = auVar64._8_8_ + auVar64._8_8_;
                dVar144 = auVar97._0_8_ + auVar97._0_8_;
                auVar81 = blendpd(auVar154,auVar97,2);
                auVar125._8_4_ = SUB84(dVar144,0);
                auVar125._0_8_ = dVar49;
                uVar79 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar125._12_4_ = uVar79;
                auVar98._8_4_ = SUB84(dVar144,0);
                auVar98._0_8_ = dVar49;
                auVar98._12_4_ = uVar79;
                auVar155._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar155._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                auVar81 = blendpd(auVar98,auVar155,2);
                auVar116._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[1],0);
                auVar116._0_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar116._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[1] >> 0x20);
                auVar126._0_8_ =
                     auVar125._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar49;
                auVar126._8_8_ =
                     auVar155._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     local_9f8.Rotation.ZW.m128d_f64[0] * dVar144;
                auVar65._8_4_ = SUB84(auVar126._8_8_,0);
                auVar65._0_8_ = auVar126._0_8_;
                auVar65._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
                auVar99._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar155._0_8_;
                auVar99._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar155._8_8_;
                auVar81 = blendpd(auVar126,auVar99,2);
                local_868 = local_9f8.Rotation.ZW.m128d_f64[1] * dVar49 + dVar7 + auVar65._8_8_ +
                            local_9f8.Translation.XY.m128d_f64[0];
                dStack_860 = auVar116._8_8_ * dVar144 + dVar8 + auVar99._0_8_ +
                             local_9f8.Translation.XY.m128d_f64[1];
                local_558.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_558.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_558.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_558.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar13._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar13._0_4_ = (int)((ulonglong)local_868 >> 0x20);
                auVar100._0_8_ = auVar13._0_8_ << 0x20;
                auVar100._8_4_ = SUB84(dStack_860,0);
                auVar100._12_4_ = (int)((ulonglong)dStack_860 >> 0x20);
                local_558.Translation.XY.m128d_f64[1] = auVar100._8_8_;
                local_858 = local_9f8.Rotation.ZW.m128d_f64[1] * auVar155._0_8_ + auVar178._0_8_ +
                            auVar81._0_8_ + local_9f8.Translation.ZW.m128d_f64[0];
                local_558.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_558.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_558.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_558.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_558.Translation.ZW.m128d_f64[1] = 0.0;
                local_558.Translation.XY.m128d_f64[0] = local_868;
                local_558.Translation.ZW.m128d_f64[0] = local_858;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_268,this->SimulationSpace,param_1,&local_558,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                lVar5 = param_1->_padding_;
                auVar179._0_8_ = local_858 * *(double *)(lVar5 + 0x70);
                auVar179._8_8_ = *(double *)(lVar5 + 0x78) * 0.0;
                dVar7 = *(double *)(lVar5 + 0x60) * local_868;
                dVar8 = *(double *)(lVar5 + 0x68) * dStack_860;
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                local_778 = *(undefined8 *)(lVar5 + 0x20);
                uStack_770 = *(undefined8 *)(lVar5 + 0x28);
                auVar156._8_4_ = SUB84(dVar8,0);
                auVar156._0_8_ = dVar7;
                auVar156._12_4_ = uVar79;
                auVar81 = *(undefined1 (*) [16])(lVar5 + 0x30);
                dVar144 = auVar81._0_8_;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                dVar49 = *(double *)(lVar5 + 0x38);
                auVar171 = blendpd(auVar139,auVar81,2);
                auVar157._0_8_ = auVar156._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar7;
                auVar157._8_8_ = auVar179._0_8_ * auVar139._8_8_ - dVar144 * dVar8;
                auVar142._8_4_ = SUB84(auVar157._8_8_,0);
                auVar142._0_8_ = auVar157._0_8_;
                auVar142._12_4_ = (int)((ulonglong)auVar157._8_8_ >> 0x20);
                auVar66._8_4_ = SUB84(dVar8,0);
                auVar66._0_8_ = dVar7;
                auVar66._12_4_ = uVar79;
                auVar139 = blendpd(auVar66,auVar179,2);
                auVar67._0_8_ = auVar139._0_8_ * dVar144 - auVar171._0_8_ * auVar179._0_8_;
                auVar67._8_8_ = auVar139._8_8_ * auVar81._8_8_ - auVar171._8_8_ * auVar179._8_8_;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                auVar171 = blendpd(auVar157,auVar67,2);
                dVar166 = auVar142._8_8_ + auVar142._8_8_;
                dVar167 = auVar67._0_8_ + auVar67._0_8_;
                auVar158._0_8_ = auVar171._0_8_ + auVar171._0_8_;
                auVar158._8_8_ = auVar171._8_8_ + auVar171._8_8_;
                auVar135._8_4_ = SUB84(dVar167,0);
                auVar135._0_8_ = dVar166;
                uVar79 = (undefined4)((ulonglong)dVar167 >> 0x20);
                auVar135._12_4_ = uVar79;
                auVar127._8_4_ = SUB84(dVar167,0);
                auVar127._0_8_ = dVar166;
                auVar127._12_4_ = uVar79;
                auVar171 = blendpd(auVar127,auVar158,2);
                auVar136._0_8_ = auVar135._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar166;
                auVar136._8_8_ = auVar158._0_8_ * auVar139._8_8_ - dVar144 * dVar167;
                auVar139 = blendpd(auVar139,auVar81,2);
                auVar68._8_4_ = SUB84(auVar136._8_8_,0);
                auVar68._0_8_ = auVar136._0_8_;
                auVar68._12_4_ = (int)((ulonglong)auVar136._8_8_ >> 0x20);
                auVar128._0_8_ = auVar171._0_8_ * dVar144 - auVar139._0_8_ * auVar158._0_8_;
                auVar128._8_8_ = auVar171._8_8_ * auVar81._8_8_ - auVar139._8_8_ * auVar158._8_8_;
                auVar81 = blendpd(auVar136,auVar128,2);
                local_8e0._s_0.X =
                     dVar166 * dVar49 + dVar7 + auVar68._8_8_ + *(double *)(lVar5 + 0x40);
                local_8e0._s_0.Y =
                     dVar167 * dVar49 + dVar8 + auVar128._0_8_ + *(double *)(lVar5 + 0x48);
                local_8e0._s_0.Z =
                     auVar158._0_8_ * dVar49 + auVar179._0_8_ + auVar81._0_8_ +
                     *(double *)(lVar5 + 0x50);
                local_740 = local_8e0._s_0.X;
                dStack_738 = local_8e0._s_0.Y;
                local_730 = local_8e0._s_0.Z;
                FAnimInstanceProxy::AnimDrawDebugLine
                          (local_990,(TVector<double> *)&local_8e0._s_0,
                           (TVector<double> *)&local_8f8._s_0,&FColor::Yellow,false,fVar26,fVar28,
                           SDPG_World);
                if ((iVar43 < 0 || (int)plVar42[1] <= iVar43) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar24._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar24._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar19._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar19._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                auVar139 = blendpd(auVar19,auVar24,2);
                pdVar1 = (double *)(*plVar42 + (longlong)iVar43 * 0x18);
                auVar180._0_8_ =
                     *(double *)(*plVar42 + 0x10 + (longlong)iVar43 * 0x18) *
                     local_9f8.Scale3D.ZW.m128d_f64[0];
                auVar180._8_8_ = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar69._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar69._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar69._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar159._8_4_ = SUB84(dVar8,0);
                auVar159._0_8_ = dVar7;
                auVar159._12_4_ = uVar79;
                auVar101._8_4_ = SUB84(dVar8,0);
                auVar101._0_8_ = dVar7;
                auVar101._12_4_ = uVar79;
                auVar81 = blendpd(auVar101,auVar180,2);
                auVar160._0_8_ =
                     auVar159._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar160._8_8_ =
                     auVar180._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] - auVar69._8_8_ * dVar8;
                auVar102._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar180._0_8_;
                auVar102._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar180._8_8_;
                auVar70._8_4_ = SUB84(auVar160._8_8_,0);
                auVar70._0_8_ = auVar160._0_8_;
                auVar70._12_4_ = (int)((ulonglong)auVar160._8_8_ >> 0x20);
                dVar49 = auVar70._8_8_ + auVar70._8_8_;
                dVar144 = auVar102._0_8_ + auVar102._0_8_;
                auVar81 = blendpd(auVar160,auVar102,2);
                auVar129._8_4_ = SUB84(dVar144,0);
                auVar129._0_8_ = dVar49;
                uVar79 = (undefined4)((ulonglong)dVar144 >> 0x20);
                auVar129._12_4_ = uVar79;
                auVar103._8_4_ = SUB84(dVar144,0);
                auVar103._0_8_ = dVar49;
                auVar103._12_4_ = uVar79;
                auVar161._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar161._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                auVar81 = blendpd(auVar103,auVar161,2);
                auVar117._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[1],0);
                auVar117._0_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar117._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[1] >> 0x20);
                auVar130._0_8_ =
                     auVar129._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar49;
                auVar130._8_8_ =
                     auVar161._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     local_9f8.Rotation.ZW.m128d_f64[0] * dVar144;
                auVar71._8_4_ = SUB84(auVar130._8_8_,0);
                auVar71._0_8_ = auVar130._0_8_;
                auVar71._12_4_ = (int)((ulonglong)auVar130._8_8_ >> 0x20);
                auVar104._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar139._0_8_ * auVar161._0_8_;
                auVar104._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar139._8_8_ * auVar161._8_8_;
                auVar81 = blendpd(auVar130,auVar104,2);
                local_898 = local_9f8.Rotation.ZW.m128d_f64[1] * dVar49 + dVar7 + auVar71._8_8_ +
                            local_9f8.Translation.XY.m128d_f64[0];
                dStack_890 = auVar117._8_8_ * dVar144 + dVar8 + auVar104._0_8_ +
                             local_9f8.Translation.XY.m128d_f64[1];
                local_4f8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_4f8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_4f8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_4f8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar14._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar14._0_4_ = (int)((ulonglong)local_898 >> 0x20);
                auVar105._0_8_ = auVar14._0_8_ << 0x20;
                auVar105._8_4_ = SUB84(dStack_890,0);
                auVar105._12_4_ = (int)((ulonglong)dStack_890 >> 0x20);
                local_4f8.Translation.XY.m128d_f64[1] = auVar105._8_8_;
                local_888 = local_9f8.Rotation.ZW.m128d_f64[1] * auVar161._0_8_ + auVar180._0_8_ +
                            auVar81._0_8_ + local_9f8.Translation.ZW.m128d_f64[0];
                local_4f8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_4f8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_4f8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_4f8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_4f8.Translation.ZW.m128d_f64[1] = 0.0;
                local_4f8.Translation.XY.m128d_f64[0] = local_898;
                local_4f8.Translation.ZW.m128d_f64[0] = local_888;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_208,this->SimulationSpace,param_1,&local_4f8,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                lVar5 = param_1->_padding_;
                auVar181._0_8_ = local_888 * *(double *)(lVar5 + 0x70);
                auVar181._8_8_ = *(double *)(lVar5 + 0x78) * 0.0;
                dVar7 = *(double *)(lVar5 + 0x60) * local_898;
                dVar8 = *(double *)(lVar5 + 0x68) * dStack_890;
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                local_778 = *(undefined8 *)(lVar5 + 0x20);
                uStack_770 = *(undefined8 *)(lVar5 + 0x28);
                auVar162._8_4_ = SUB84(dVar8,0);
                auVar162._0_8_ = dVar7;
                auVar162._12_4_ = uVar79;
                auVar81 = *(undefined1 (*) [16])(lVar5 + 0x30);
                dVar144 = auVar81._0_8_;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                dVar49 = *(double *)(lVar5 + 0x38);
                auVar171 = blendpd(auVar139,auVar81,2);
                auVar163._0_8_ = auVar162._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar7;
                auVar163._8_8_ = auVar181._0_8_ * auVar139._8_8_ - dVar144 * dVar8;
                auVar143._8_4_ = SUB84(auVar163._8_8_,0);
                auVar143._0_8_ = auVar163._0_8_;
                auVar143._12_4_ = (int)((ulonglong)auVar163._8_8_ >> 0x20);
                auVar72._8_4_ = SUB84(dVar8,0);
                auVar72._0_8_ = dVar7;
                auVar72._12_4_ = uVar79;
                auVar139 = blendpd(auVar72,auVar181,2);
                auVar73._0_8_ = auVar139._0_8_ * dVar144 - auVar171._0_8_ * auVar181._0_8_;
                auVar73._8_8_ = auVar139._8_8_ * auVar81._8_8_ - auVar171._8_8_ * auVar181._8_8_;
                auVar139 = *(undefined1 (*) [16])(lVar5 + 0x20);
                auVar171 = blendpd(auVar163,auVar73,2);
                dVar166 = auVar143._8_8_ + auVar143._8_8_;
                dVar167 = auVar73._0_8_ + auVar73._0_8_;
                auVar164._0_8_ = auVar171._0_8_ + auVar171._0_8_;
                auVar164._8_8_ = auVar171._8_8_ + auVar171._8_8_;
                auVar137._8_4_ = SUB84(dVar167,0);
                auVar137._0_8_ = dVar166;
                uVar79 = (undefined4)((ulonglong)dVar167 >> 0x20);
                auVar137._12_4_ = uVar79;
                auVar131._8_4_ = SUB84(dVar167,0);
                auVar131._0_8_ = dVar166;
                auVar131._12_4_ = uVar79;
                auVar171 = blendpd(auVar131,auVar164,2);
                auVar138._0_8_ = auVar137._8_8_ * auVar139._0_8_ - auVar139._8_8_ * dVar166;
                auVar138._8_8_ = auVar164._0_8_ * auVar139._8_8_ - dVar144 * dVar167;
                auVar139 = blendpd(auVar139,auVar81,2);
                auVar74._8_4_ = SUB84(auVar138._8_8_,0);
                auVar74._0_8_ = auVar138._0_8_;
                auVar74._12_4_ = (int)((ulonglong)auVar138._8_8_ >> 0x20);
                auVar132._0_8_ = auVar171._0_8_ * dVar144 - auVar139._0_8_ * auVar164._0_8_;
                auVar132._8_8_ = auVar171._8_8_ * auVar81._8_8_ - auVar139._8_8_ * auVar164._8_8_;
                auVar81 = blendpd(auVar138,auVar132,2);
                local_8c8._s_0.X =
                     dVar166 * dVar49 + dVar7 + auVar74._8_8_ + *(double *)(lVar5 + 0x40);
                local_8c8._s_0.Y =
                     dVar167 * dVar49 + dVar8 + auVar132._0_8_ + *(double *)(lVar5 + 0x48);
                local_8c8._s_0.Z =
                     auVar164._0_8_ * dVar49 + auVar181._0_8_ + auVar81._0_8_ +
                     *(double *)(lVar5 + 0x50);
                local_728 = local_8c8._s_0.X;
                dStack_720 = local_8c8._s_0.Y;
                local_718 = local_8c8._s_0.Z;
                if ((iVar33 < 0 || (int)plVar42[1] <= iVar33) &&
                   (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar32)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                auVar25._8_8_ = local_9f8.Rotation.ZW.m128d_f64[1];
                auVar25._0_8_ = local_9f8.Rotation.ZW.m128d_f64[0];
                auVar20._8_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar20._0_8_ = local_9f8.Rotation.XY.m128d_f64[0];
                pdVar1 = (double *)(*plVar42 + lVar45 * 0x18);
                dVar49 = *(double *)(*plVar42 + 0x10 + lVar45 * 0x18) *
                         local_9f8.Scale3D.ZW.m128d_f64[0];
                dVar144 = local_9f8.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar7 = local_9f8.Scale3D.XY.m128d_f64[0] * *pdVar1;
                dVar8 = local_9f8.Scale3D.XY.m128d_f64[1] * pdVar1[1];
                uVar79 = (undefined4)((ulonglong)dVar8 >> 0x20);
                auVar139 = blendpd(auVar20,auVar25,2);
                auVar182._8_4_ = SUB84(dVar8,0);
                auVar182._0_8_ = dVar7;
                auVar182._12_4_ = uVar79;
                auVar75._8_4_ = SUB84(local_9f8.Rotation.ZW.m128d_f64[0],0);
                auVar75._0_8_ = local_9f8.Rotation.XY.m128d_f64[1];
                auVar75._12_4_ = (int)((ulonglong)local_9f8.Rotation.ZW.m128d_f64[0] >> 0x20);
                auVar106._8_4_ = SUB84(dVar8,0);
                auVar106._0_8_ = dVar7;
                auVar106._12_4_ = uVar79;
                auVar183._0_8_ =
                     auVar182._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     local_9f8.Rotation.XY.m128d_f64[1] * dVar7;
                auVar183._8_8_ = dVar49 * local_9f8.Rotation.XY.m128d_f64[1] - auVar75._8_8_ * dVar8
                ;
                auVar9._8_4_ = SUB84(dVar144,0);
                auVar9._0_8_ = dVar49;
                auVar9._12_4_ = (int)((ulonglong)dVar144 >> 0x20);
                auVar81 = blendpd(auVar106,auVar9,2);
                auVar165._8_4_ = SUB84(auVar183._8_8_,0);
                auVar165._0_8_ = auVar183._0_8_;
                auVar165._12_4_ = (int)((ulonglong)auVar183._8_8_ >> 0x20);
                auVar107._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] - auVar139._0_8_ * dVar49;
                auVar107._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] - auVar139._8_8_ * dVar144;
                auVar81 = blendpd(auVar183,auVar107,2);
                dVar144 = auVar165._8_8_ + auVar165._8_8_;
                dVar166 = auVar107._0_8_ + auVar107._0_8_;
                auVar184._0_8_ = auVar81._0_8_ + auVar81._0_8_;
                auVar184._8_8_ = auVar81._8_8_ + auVar81._8_8_;
                uVar79 = SUB84(dVar166,0);
                auVar118._8_4_ = uVar79;
                auVar118._0_8_ = dVar144;
                uVar168 = (undefined4)((ulonglong)dVar166 >> 0x20);
                auVar118._12_4_ = uVar168;
                auVar76._8_4_ = uVar79;
                auVar76._0_8_ = dVar144;
                auVar76._12_4_ = uVar168;
                auVar108._8_4_ = uVar79;
                auVar108._0_8_ = dVar144;
                auVar108._12_4_ = uVar168;
                auVar81 = blendpd(auVar108,auVar184,2);
                auVar119._0_8_ =
                     auVar118._8_8_ * local_9f8.Rotation.XY.m128d_f64[0] -
                     dVar144 * local_9f8.Rotation.XY.m128d_f64[1];
                auVar119._8_8_ =
                     auVar184._0_8_ * local_9f8.Rotation.XY.m128d_f64[1] -
                     auVar76._8_8_ * local_9f8.Rotation.ZW.m128d_f64[0];
                auVar77._8_4_ = SUB84(auVar184._8_8_,0);
                auVar77._0_8_ = auVar184._0_8_;
                auVar77._12_4_ = (int)((ulonglong)auVar184._8_8_ >> 0x20);
                auVar109._0_8_ =
                     auVar81._0_8_ * local_9f8.Rotation.ZW.m128d_f64[0] -
                     auVar184._0_8_ * auVar139._0_8_;
                auVar109._8_8_ =
                     auVar81._8_8_ * local_9f8.Rotation.ZW.m128d_f64[1] -
                     auVar77._8_8_ * auVar139._8_8_;
                auVar78._8_4_ = SUB84(auVar119._8_8_,0);
                auVar78._0_8_ = auVar119._0_8_;
                auVar78._12_4_ = (int)((ulonglong)auVar119._8_8_ >> 0x20);
                auVar81 = blendpd(auVar119,auVar109,2);
                local_6d8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_6d8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_808._s_0.X =
                     dVar144 * local_9f8.Rotation.ZW.m128d_f64[1] + dVar7 + auVar78._8_8_ +
                     local_9f8.Translation.XY.m128d_f64[0];
                local_808._s_0.Y =
                     dVar166 * local_9f8.Rotation.ZW.m128d_f64[1] + dVar8 + auVar109._0_8_ +
                     local_9f8.Translation.XY.m128d_f64[1];
                local_6d8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_6d8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                auVar15._4_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
                auVar15._0_4_ = (int)((ulonglong)local_808._s_0.X >> 0x20);
                auVar110._0_8_ = auVar15._0_8_ << 0x20;
                auVar110._8_4_ = SUB84(local_808._s_0.Y,0);
                auVar110._12_4_ = (int)((ulonglong)local_808._s_0.Y >> 0x20);
                local_808._s_0.Z =
                     auVar184._0_8_ * local_9f8.Rotation.ZW.m128d_f64[1] + dVar49 + auVar81._0_8_ +
                     local_9f8.Translation.ZW.m128d_f64[0];
                local_6d8.Translation.XY.m128d_f64[1] = auVar110._8_8_;
                local_6d8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_6d8.Scale3D.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[1];
                local_6d8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_6d8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_6d8.Translation.ZW.m128d_f64[1] = 0.0;
                local_6d8.Translation.XY.m128d_f64[0] = local_808._s_0.X;
                local_6d8.Translation.ZW.m128d_f64[0] = local_808._s_0.Z;
                GetComponentSpaceTransformFromSimSpace
                          (this,&local_1a8,this->SimulationSpace,param_1,&local_6d8,
                           (TTransform<double> *)(param_1->_padding_ + 0x20),
                           (TTransform<double> *)(param_1->_padding_ + 0xe0));
                local_8b0._s_0.Z = local_1a8.Translation.ZW.m128d_f64[0];
                local_8b0._s_0.X = local_1a8.Translation.XY.m128d_f64[0];
                local_8b0._s_0.Y = local_1a8.Translation.XY.m128d_f64[1];
                pTVar36 = UE::Math::TTransform<double>::TransformPosition
                                    ((TTransform<double> *)(param_1->_padding_ + 0x20),&local_468,
                                     (TVector<double> *)&local_808._s_0);
                this_00 = local_990;
                local_8b0._s_0.X = (pTVar36->field0_0x0)._s_0.X;
                local_8b0._s_0.Y = (pTVar36->field0_0x0)._s_0.Y;
                local_8b0._s_0.Z = (pTVar36->field0_0x0)._s_0.Z;
                FAnimInstanceProxy::AnimDrawDebugLine
                          (local_990,(TVector<double> *)&local_8b0._s_0,
                           (TVector<double> *)&local_8c8._s_0,&FColor::Yellow,false,fVar26,fVar28,
                           SDPG_World);
                uVar46 = uVar46 + 0xc;
                local_978 = local_978 + -1;
                plVar44 = local_988;
                uVar38 = (ulonglong)(uVar48 + 1);
              } while (local_978 != 0);
              local_978 = 0;
              pFVar47 = local_948;
            }
            plVar42 = plVar42 + 8;
            plVar44 = plVar44 + 8;
            uVar38 = (ulonglong)local_994;
            lVar45 = local_968;
          }
        }
        else {
          FVar40.Data = (FScriptContainerElement *)L"";
          if (local_960.Data.ArrayNum != 0) {
            FVar40.Data = local_960.Data.AllocatorInstance.Data;
          }
          pFVar35 = ::FName::FName(&local_7c0,(wchar_t *)FVar40.Data);
          if (*(FName *)(pFVar4 + local_980) == *pFVar35) goto LAB_146423e0c;
        }
        local_a10 = uVar34 + 1;
        local_a08 = local_a08 + 1;
        local_968 = lVar45 + 0x400;
        local_980 = local_980 + 0xd0;
      } while (local_a08 < local_940);
    }
    if ((this->SimulationSpace != World) ||
       (bVar32 = TAutoConsoleVariable<bool>::GetValueOnAnyThread(&CVarDisableWorldSpace,false),
       bVar32)) {
      AVar3 = this->SimulationSpace;
      local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_448.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      if (AVar3 == Component) {
        local_448.Rotation.XY.m128d_f64[0] = (this_00->ComponentTransform).Rotation.XY.m128d_f64[0];
        local_448.Rotation.XY.m128d_f64[1] = (this_00->ComponentTransform).Rotation.XY.m128d_f64[1];
        local_448.Rotation.ZW.m128d_f64[0] = (this_00->ComponentTransform).Rotation.ZW.m128d_f64[0];
        local_448.Rotation.ZW.m128d_f64[1] = (this_00->ComponentTransform).Rotation.ZW.m128d_f64[1];
        local_448.Translation.XY.m128d_f64[0] =
             (this_00->ComponentTransform).Translation.XY.m128d_f64[0];
        local_448.Translation.XY.m128d_f64[1] =
             (this_00->ComponentTransform).Translation.XY.m128d_f64[1];
        local_448.Translation.ZW.m128d_f64[0] =
             (this_00->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_448.Translation.ZW.m128d_f64[1] =
             (this_00->ComponentTransform).Translation.ZW.m128d_f64[1];
        local_448.Scale3D.XY.m128d_f64[0] = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[0];
        local_448.Scale3D.XY.m128d_f64[1] = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[1];
        local_448.Scale3D.ZW.m128d_f64[0] = (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        local_448.Scale3D.ZW.m128d_f64[1] = (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      }
      else if (AVar3 == Actor) {
        local_448.Rotation.XY.m128d_f64[0] = (this_00->ActorTransform).Rotation.XY.m128d_f64[0];
        local_448.Rotation.XY.m128d_f64[1] = (this_00->ActorTransform).Rotation.XY.m128d_f64[1];
        local_448.Rotation.ZW.m128d_f64[0] = (this_00->ActorTransform).Rotation.ZW.m128d_f64[0];
        local_448.Rotation.ZW.m128d_f64[1] = (this_00->ActorTransform).Rotation.ZW.m128d_f64[1];
        local_448.Translation.XY.m128d_f64[0] =
             (this_00->ActorTransform).Translation.XY.m128d_f64[0];
        local_448.Translation.XY.m128d_f64[1] =
             (this_00->ActorTransform).Translation.XY.m128d_f64[1];
        local_448.Translation.ZW.m128d_f64[0] =
             (this_00->ActorTransform).Translation.ZW.m128d_f64[0];
        local_448.Translation.ZW.m128d_f64[1] =
             (this_00->ActorTransform).Translation.ZW.m128d_f64[1];
        local_448.Scale3D.XY.m128d_f64[0] = (this_00->ActorTransform).Scale3D.XY.m128d_f64[0];
        local_448.Scale3D.XY.m128d_f64[1] = (this_00->ActorTransform).Scale3D.XY.m128d_f64[1];
        local_448.Scale3D.ZW.m128d_f64[0] = (this_00->ActorTransform).Scale3D.ZW.m128d_f64[0];
        local_448.Scale3D.ZW.m128d_f64[1] = (this_00->ActorTransform).Scale3D.ZW.m128d_f64[1];
      }
      else if (AVar3 == RootRelative) {
        pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                            (&param_1->Pose,(FCompactPoseBoneIndex)0x0);
        pTVar37 = UE::Math::TTransform<double>::operator*
                            (&this_00->ComponentTransform,&local_148,pTVar37);
        local_448.Rotation.XY.m128d_f64[0] = (pTVar37->Rotation).XY.m128d_f64[0];
        local_448.Rotation.XY.m128d_f64[1] = (pTVar37->Rotation).XY.m128d_f64[1];
        local_448.Rotation.ZW.m128d_f64[0] = (pTVar37->Rotation).ZW.m128d_f64[0];
        local_448.Rotation.ZW.m128d_f64[1] = (pTVar37->Rotation).ZW.m128d_f64[1];
        local_448.Translation.XY.m128d_f64[0] = (pTVar37->Translation).XY.m128d_f64[0];
        local_448.Translation.XY.m128d_f64[1] = (pTVar37->Translation).XY.m128d_f64[1];
        local_448.Translation.ZW.m128d_f64[0] = (pTVar37->Translation).ZW.m128d_f64[0];
        local_448.Translation.ZW.m128d_f64[1] = (pTVar37->Translation).ZW.m128d_f64[1];
        local_448.Scale3D.XY.m128d_f64[0] = (pTVar37->Scale3D).XY.m128d_f64[0];
        local_448.Scale3D.XY.m128d_f64[1] = (pTVar37->Scale3D).XY.m128d_f64[1];
        local_448.Scale3D.ZW.m128d_f64[0] = (pTVar37->Scale3D).ZW.m128d_f64[0];
        local_448.Scale3D.ZW.m128d_f64[1] = (pTVar37->Scale3D).ZW.m128d_f64[1];
      }
      else if (AVar3 == BoneRelative) {
        local_448.Rotation.XY.m128d_f64[0] = (this_00->ComponentTransform).Rotation.XY.m128d_f64[0];
        local_448.Rotation.XY.m128d_f64[1] = (this_00->ComponentTransform).Rotation.XY.m128d_f64[1];
        FVar39 = (this->RelativeSpaceBone).BoneIndex;
        local_448.Rotation.ZW.m128d_f64[0] = (this_00->ComponentTransform).Rotation.ZW.m128d_f64[0];
        local_448.Rotation.ZW.m128d_f64[1] = (this_00->ComponentTransform).Rotation.ZW.m128d_f64[1];
        local_448.Translation.XY.m128d_f64[0] =
             (this_00->ComponentTransform).Translation.XY.m128d_f64[0];
        local_448.Translation.XY.m128d_f64[1] =
             (this_00->ComponentTransform).Translation.XY.m128d_f64[1];
        local_448.Translation.ZW.m128d_f64[0] =
             (this_00->ComponentTransform).Translation.ZW.m128d_f64[0];
        local_448.Translation.ZW.m128d_f64[1] =
             (this_00->ComponentTransform).Translation.ZW.m128d_f64[1];
        local_448.Scale3D.XY.m128d_f64[0] = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[0];
        local_448.Scale3D.XY.m128d_f64[1] = (this_00->ComponentTransform).Scale3D.XY.m128d_f64[1];
        local_448.Scale3D.ZW.m128d_f64[0] = (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        local_448.Scale3D.ZW.m128d_f64[1] = (this_00->ComponentTransform).Scale3D.ZW.m128d_f64[1];
        if ((-1 < (int)FVar39) && ((int)FVar39 < *(int *)&(param_1->Pose).Pose.field_0x8)) {
          pTVar37 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar39);
          UE::Math::TTransform<double>::Multiply(&local_448,&local_448,pTVar37);
        }
      }
      local_7f0._s_0.X = local_448.Translation.XY.m128d_f64[0];
      local_7f0._s_0.Y = local_448.Translation.XY.m128d_f64[1];
      local_7f0._s_0.Z = local_448.Translation.ZW.m128d_f64[0];
      FAnimInstanceProxy::AnimDrawDebugSphere
                (this_00,(TVector<double> *)&local_7f0._s_0,__real_41c80000,0x10,&FColor::Green,
                 false,fVar26,fVar28,SDPG_World);
      local_798.X = local_448.Rotation.XY.m128d_f64[0];
      local_798.Y = local_448.Rotation.XY.m128d_f64[1];
      local_798.Z = local_448.Rotation.ZW.m128d_f64[0];
      local_798.W = local_448.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_798,&local_710);
      local_7d8._s_0.X = local_448.Translation.XY.m128d_f64[0];
      local_7d8._s_0.Y = local_448.Translation.XY.m128d_f64[1];
      local_7d8._s_0.Z = local_448.Translation.ZW.m128d_f64[0];
      FAnimInstanceProxy::AnimDrawDebugCoordinateSystem
                (this_00,(TVector<double> *)&local_7d8._s_0,&local_710,__real_40400000,false,fVar26,
                 fVar28,SDPG_World);
    }
    if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_960.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146427220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_AnimDynamics::EvaluateSkeletalControl_AnyThread
          (FAnimNode_AnimDynamics *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  AnimPhysCollisionType AVar7;
  ERotationComponent EVar8;
  bool bVar9;
  EEasingFuncType EVar10;
  double *pdVar11;
  FBoneContainer *pFVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  FWeakObjectPtr FVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  FWeakObjectPtr FVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  TConsoleVariableData<int> *pTVar24;
  TConsoleVariableData<int> *pTVar25;
  TConsoleVariableData<float> *pTVar26;
  TConsoleVariableData<bool> *pTVar27;
  ForElementType<unsigned_int> FVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  FCompactPoseBoneIndex FVar34;
  int iVar35;
  FName *pFVar36;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsOverall> FVar37;
  longlong lVar38;
  TTransform<double> *pTVar39;
  FAnimPhysShape *pFVar40;
  undefined4 extraout_var;
  TVector<double> *pTVar41;
  FTlsAutoCleanup *pFVar42;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsSubSteps> FVar43;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsBoneEval> FVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  uint uVar48;
  FScriptContainerElement *pFVar49;
  FBoneReference *this_02;
  FName FVar50;
  FName FVar51;
  FAnimPhysRigidBody *pFVar52;
  TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *this_03;
  uint uVar58;
  double dVar53;
  double dVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  double dVar57;
  uint uVar59;
  float fVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  FScriptContainerElement *pFVar64;
  double dVar65;
  FWeakObjectPtr FVar66;
  FScriptContainerElement *pFVar67;
  FScriptContainerElement *pFVar68;
  FScriptContainerElement *pFVar69;
  float fVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined1 auStackY_c48 [32];
  undefined1 local_bc6;
  undefined1 local_bc5;
  undefined1 local_bc4;
  undefined1 local_bc3 [3];
  FName local_bc0;
  TVector<double>_u_0 local_bb8;
  uint local_ba0;
  TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> local_b98;
  undefined1 local_b88 [16];
  undefined1 local_b78 [16];
  longlong local_b68;
  FColor_u_0 local_b60;
  FCompactPoseBoneIndex local_b5c;
  FColor_u_0 local_b58;
  FCompactPoseBoneIndex local_b54;
  uint local_b50;
  FWeakObjectPtr local_b48;
  FWeakObjectPtr FStack_b40;
  FWeakObjectPtr local_b38;
  ForAnyElementType local_b28;
  longlong local_b20;
  FName local_b18;
  FName local_b10;
  ForAnyElementType local_b08;
  FName local_b00;
  FName local_af0;
  TVector<double>_u_0 local_ae0;
  TVector<double>_u_0 local_ac8;
  undefined1 local_ab0 [8];
  FName local_aa8;
  FStatMessage local_aa0;
  ForElementType<unsigned_int> local_a90;
  TTransform<double> local_a88;
  TTransform<double> local_a28;
  FSkelMeshRefPoseOverride *local_9c8;
  FSharedReferencer<1> local_9c0;
  TVector<double>_u_0 local_9b8;
  TVector<double>_u_0 local_9a0;
  TVector<double>_u_0 local_988;
  TVector<double>_u_0 local_970;
  FName local_958;
  double local_950;
  double dStack_948;
  double local_940;
  double local_938;
  double dStack_930;
  double local_928;
  TVector<double>_u_0 local_920;
  TVector<double>_u_0 local_908;
  TVector<double> local_8f0;
  TVector<double> local_8d8;
  TVector<double>_u_0 local_8b8;
  FName local_898;
  FName local_890;
  FAnimPhysSimSpaceSettings local_888;
  TQuat<double> local_858;
  TQuat<double> local_838;
  FReferenceSkeleton *local_818;
  FScriptContainerElement *pFStack_810;
  double local_808;
  double local_800;
  double dStack_7f8;
  double local_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double local_7d0;
  double dStack_7c8;
  double local_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double local_7a0;
  double dStack_798;
  double local_790;
  TTransform<double> local_788;
  TTransform<double> local_728;
  TTransform<double> local_6c8;
  FAnimPhysShape local_668;
  TVector<double> local_628;
  TVector<double> local_610;
  TVector<double> local_5f8;
  TVector<double> local_5e0;
  TVector<double> local_5c8;
  TVector<double> local_5b0;
  TVector<double> local_598;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  TTransform<double> local_518;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined8 uStack_4b0;
  double local_4a8;
  FScriptContainerElement *pFStack_4a0;
  double local_498;
  FScriptContainerElement *pFStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_c48;
  local_b28.Data = (FScriptContainerElement *)param_1;
  local_a90 = (ForElementType<unsigned_int>)param_2;
  FStatsHierarchical::BeginMeasurement("FAnimNode_AnimDynamics::EvaluateSkeletalControl_AnyThread");
  lVar46 = 0;
  FVar37 = StatPtr_STAT_AnimDynamicsOverall;
  if (StatPtr_STAT_AnimDynamicsOverall == (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsOverall>)0x0
     ) {
    pFVar36 = ::FName::FName(&local_958,"STAT_AnimDynamicsOverall");
    FVar37 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsOverall>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsOverall,*pFVar36,
                        L"Anim Dynamics Overall","STATGROUP_Physics","STATCAT_Advanced",L"Physics",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar51 = *(FName *)FVar37;
  bVar21 = false;
  bVar23 = false;
  local_b00.ComparisonIndex.Value = 0;
  local_b00.Number = 0;
  bVar29 = false;
  bVar31 = false;
  if ((FVar51.ComparisonIndex.Value.Value == 0) && (FVar51.Number == 0)) {
LAB_14642739b:
    bVar23 = bVar31;
    bVar21 = bVar29;
    bVar29 = false;
    local_b78._8_4_ = local_b00.ComparisonIndex.Value;
    local_b78._12_4_ = local_b00.Number;
    FVar51 = local_b00;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b60.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b60._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
      bVar21 = false;
      bVar23 = true;
      bVar29 = false;
      bVar31 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b18.ComparisonIndex.Value = FVar51.ComparisonIndex.Value.Value;
        local_b18.Number = FVar51.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b18,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                   ,0x18d);
        bVar21 = true;
        bVar23 = true;
        bVar29 = true;
        bVar31 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14642739b;
    local_bc0 = FVar51;
    local_b78._8_8_ = FVar51;
    FThreadStats::AddMessage(FVar51,CycleScopeStart);
    bVar29 = true;
  }
  if (__CsvProfilerStat398 == false) {
    FCsvProfilerTrace::OutputInlineStat("AnimDynamicsEval",_GCsvCategory_Animation.Index);
    __CsvProfilerStat398 = true;
  }
  local_b50 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("AnimDynamicsEval",_GCsvCategory_Animation.Index,"CSV_AnimDynamicsEval");
  pTVar24 = CVarRestrictLod.Ref;
  iVar33 = *(int *)(param_1->_padding_ + 0x670);
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14642740f:
    lVar38 = lVar46;
  }
  else {
    bVar31 = IsInGameThread();
    lVar38 = 4;
    if (bVar31) goto LAB_14642740f;
  }
  pTVar25 = CVarEnableDynamics.Ref;
  iVar35 = *(int *)((longlong)pTVar24->ShadowedValue + lVar38);
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_14642743e:
    lVar38 = lVar46;
  }
  else {
    bVar31 = IsInGameThread();
    lVar38 = 4;
    if (bVar31) goto LAB_14642743e;
  }
  pTVar24 = CVarEnableScaling.Ref;
  if ((*(int *)((longlong)pTVar25->ShadowedValue + lVar38) != 1) ||
     (-1 < iVar35 && iVar33 != iVar35)) goto LAB_146429503;
  bVar31 = IsInParallelGameThread();
  if (bVar31) {
LAB_1464274ac:
    lVar38 = lVar46;
  }
  else {
    bVar31 = IsInGameThread();
    lVar38 = 4;
    if (bVar31) goto LAB_1464274ac;
  }
  local_b88._4_4_ = *(int *)((longlong)pTVar24->ShadowedValue + lVar38);
  if (this->LastSimSpace != this->SimulationSpace) {
    pFVar49 = (this->BaseBodyPtrs).AllocatorInstance.Data;
    iVar33 = (this->BaseBodyPtrs).ArrayNum;
    pFVar13 = pFVar49 + (longlong)iVar33 * 8;
    pFVar68 = ___xmm_3ff00000000000003ff0000000000000;
    pFVar69 = _UNK_150689688;
    pFVar64 = ___xmm_00000000000000003ff0000000000000;
    pFVar67 = _UNK_150689518;
    while( true ) {
      if ((this->BaseBodyPtrs).ArrayNum != iVar33) {
        local_bc6 = 0;
        `TCheckedPointerIterator<FAnimPhysRigidBody_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_bc6);
        pFVar68 = ___xmm_3ff00000000000003ff0000000000000;
        pFVar69 = _UNK_150689688;
        pFVar64 = ___xmm_00000000000000003ff0000000000000;
        pFVar67 = _UNK_150689518;
      }
      if ((pFVar49 == pFVar13) || (pdVar11 = *(double **)pFVar49, pdVar11 == (double *)0x0)) break;
      local_a88.Rotation.XY.m128d_f64[0] = pdVar11[4];
      local_a88.Rotation.XY.m128d_f64[1] = *(double *)(pdVar11 + 5);
      local_a88.Rotation.ZW.m128d_f64[0] = *(double *)(pdVar11 + 6);
      local_a88.Rotation.ZW.m128d_f64[1] = *(double *)(pdVar11 + 7);
      local_a88.Translation.ZW.m128d_f64[0] = pdVar11[2];
      local_a88.Translation.XY.m128d_f64[1] = pdVar11[1];
      local_a88.Translation.XY.m128d_f64[0] = *pdVar11;
      local_a88.Translation.ZW.m128d_f64[1] = 0.0;
      local_a88.Scale3D.XY.m128d_f64[0] = (double)pFVar68;
      local_a88.Scale3D.XY.m128d_f64[1] = (double)pFVar69;
      local_a88.Scale3D.ZW.m128d_f64[0] = (double)pFVar64;
      local_a88.Scale3D.ZW.m128d_f64[1] = (double)pFVar67;
      GetComponentSpaceTransformFromSimSpace
                (this,&local_328,this->LastSimSpace,param_1,&local_a88,
                 (TTransform<double> *)(param_1->_padding_ + 0x20),
                 (TTransform<double> *)(param_1->_padding_ + 0xe0));
      local_a88.Rotation.XY.m128d_f64[0] = local_328.Rotation.XY.m128d_f64[0];
      local_a88.Rotation.XY.m128d_f64[1] = local_328.Rotation.XY.m128d_f64[1];
      local_a88.Rotation.ZW.m128d_f64[0] = local_328.Rotation.ZW.m128d_f64[0];
      local_a88.Rotation.ZW.m128d_f64[1] = local_328.Rotation.ZW.m128d_f64[1];
      local_a88.Translation.XY.m128d_f64[0] = local_328.Translation.XY.m128d_f64[0];
      local_a88.Translation.XY.m128d_f64[1] = local_328.Translation.XY.m128d_f64[1];
      local_a88.Translation.ZW.m128d_f64[0] = local_328.Translation.ZW.m128d_f64[0];
      local_a88.Translation.ZW.m128d_f64[1] = local_328.Translation.ZW.m128d_f64[1];
      local_a88.Scale3D.XY.m128d_f64[0] = local_328.Scale3D.XY.m128d_f64[0];
      local_a88.Scale3D.XY.m128d_f64[1] = local_328.Scale3D.XY.m128d_f64[1];
      local_a88.Scale3D.ZW.m128d_f64[0] = local_328.Scale3D.ZW.m128d_f64[0];
      local_a88.Scale3D.ZW.m128d_f64[1] = local_328.Scale3D.ZW.m128d_f64[1];
      pTVar39 = GetSimSpaceTransformFromComponentSpace
                          (this,&local_148,this->SimulationSpace,param_1,&local_a88);
      pFVar49 = pFVar49 + 8;
      local_b48 = (FWeakObjectPtr)(pTVar39->Rotation).XY.m128d_f64[0];
      FStack_b40 = *(FWeakObjectPtr *)((pTVar39->Rotation).XY.m128d_f64 + 1);
      local_a88.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
      local_a88.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
      local_a88.Translation.ZW.m128d_f64[0] = (pTVar39->Translation).ZW.m128d_f64[0];
      local_a88.Translation.ZW.m128d_f64[1] = (pTVar39->Translation).ZW.m128d_f64[1];
      local_a88.Rotation.ZW.m128d_f64[0] = (pTVar39->Rotation).ZW.m128d_f64[0];
      local_a88.Rotation.ZW.m128d_f64[1] = *(double *)((pTVar39->Rotation).ZW.m128d_f64 + 1);
      local_a88.Scale3D.XY.m128d_f64[0] = (pTVar39->Scale3D).XY.m128d_f64[0];
      local_a88.Scale3D.XY.m128d_f64[1] = (pTVar39->Scale3D).XY.m128d_f64[1];
      local_a88.Scale3D.ZW.m128d_f64[0] = (pTVar39->Scale3D).ZW.m128d_f64[0];
      local_a88.Scale3D.ZW.m128d_f64[1] = (pTVar39->Scale3D).ZW.m128d_f64[1];
      *(FWeakObjectPtr *)(pdVar11 + 4) = local_b48;
      *(FWeakObjectPtr *)(pdVar11 + 5) = FStack_b40;
      *(double *)(pdVar11 + 6) = local_a88.Rotation.ZW.m128d_f64[0];
      *(double *)(pdVar11 + 7) = local_a88.Rotation.ZW.m128d_f64[1];
      pFVar69 = _UNK_150689688;
      pFVar68 = ___xmm_3ff00000000000003ff0000000000000;
      pFVar67 = _UNK_150689518;
      pFVar64 = ___xmm_00000000000000003ff0000000000000;
      *pdVar11 = local_a88.Translation.XY.m128d_f64[0];
      pdVar11[1] = local_a88.Translation.XY.m128d_f64[1];
      pdVar11[2] = local_a88.Translation.ZW.m128d_f64[0];
      local_a88.Rotation.XY.m128d_f64[0] = (double)local_b48;
      local_a88.Rotation.XY.m128d_f64[1] = (double)FStack_b40;
      local_818 = (FReferenceSkeleton *)local_a88.Translation.XY.m128d_f64[0];
      pFStack_810 = (FScriptContainerElement *)local_a88.Translation.XY.m128d_f64[1];
      local_808 = local_a88.Translation.ZW.m128d_f64[0];
    }
  }
  uVar77 = local_b88._4_4_;
  if (this->InitTeleportType != None) {
    InitPhysics(this,param_1);
    this->InitTeleportType = None;
  }
  uVar59 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar61 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (uVar77 != 0) {
    GetSimToWorldSpaceTransform(this,&local_518,this->SimulationSpace,param_1);
    dVar54 = __real_3fe0000000000000;
    local_938 = (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0];
    dStack_930 = (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1];
    local_940 = local_518.Scale3D.ZW.m128d_f64[0];
    local_928 = SUB168(*(undefined1 (*) [16])(this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64,0);
    local_950 = local_518.Scale3D.XY.m128d_f64[0];
    dStack_948 = local_518.Scale3D.XY.m128d_f64[1];
    if (((local_518.Scale3D.XY.m128d_f64[0] != local_938) ||
        (local_518.Scale3D.XY.m128d_f64[1] != dStack_930)) ||
       (local_518.Scale3D.ZW.m128d_f64[0] != local_928)) {
      local_ba0 = (this->ActiveBoneIndices).ArrayNum;
      uVar45 = (ulonglong)(int)local_ba0;
      FVar50 = (FName)(this->ActiveBoneIndices).AllocatorInstance.Data;
      local_bc0.ComparisonIndex.Value = *(uint *)&(param_1->Pose).Pose.field_0x10;
      local_bc0.Number = *(uint *)&(param_1->Pose).Pose.field_0x14;
      local_b88._8_8_ = (longlong)FVar50 + uVar45 * 4;
      while( true ) {
        uVar55 = local_b88._8_8_;
        if ((this->ActiveBoneIndices).ArrayNum != (int)uVar45) {
          local_bc5 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_bc5)
          ;
        }
        FVar51 = (FName)local_b78._8_8_;
        if (FVar50 == (FName)uVar55) break;
        uVar62 = *(uint *)FVar50;
        uVar48 = ~uVar62 >> 0x1f;
        uVar63 = 0;
        if ((int)uVar62 < (this->PhysicsBodyDefinitions).ArrayNum) {
          uVar63 = uVar48;
        }
        if ((uVar63 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        this_02 = (FBoneReference *)
                  ((this->PhysicsBodyDefinitions).AllocatorInstance.Data +
                  (longlong)(int)uVar62 * 0xd0);
        bVar31 = FBoneReference::IsValidToEvaluate(this_02,(FBoneContainer *)local_bc0);
        if (bVar31) {
          uVar63 = 0;
          if ((int)uVar62 < (this->Bodies).ArrayNum) {
            uVar63 = uVar48;
          }
          if ((uVar63 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          uVar63 = 0;
          if ((int)uVar62 < (this->Bodies).ArrayNum) {
            uVar63 = uVar48;
          }
          if ((uVar63 == 0) &&
             (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar31)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pFVar52 = (FAnimPhysRigidBody *)
                    ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar62 * 0x400);
          FBoneReference::GetCompactPoseIndex(this_02,(FBoneContainer *)&local_b5c);
          pTVar39 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_b5c);
          local_788.Rotation.XY.m128d_f64[0] = (pTVar39->Rotation).XY.m128d_f64[0];
          local_788.Rotation.XY.m128d_f64[1] = (pTVar39->Rotation).XY.m128d_f64[1];
          local_788.Rotation.ZW.m128d_f64[0] = (pTVar39->Rotation).ZW.m128d_f64[0];
          local_788.Rotation.ZW.m128d_f64[1] = (pTVar39->Rotation).ZW.m128d_f64[1];
          local_788.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
          local_788.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
          local_788.Translation.ZW.m128d_f64[0] = (pTVar39->Translation).ZW.m128d_f64[0];
          local_788.Translation.ZW.m128d_f64[1] = (pTVar39->Translation).ZW.m128d_f64[1];
          local_788.Scale3D.XY.m128d_f64[0] = (pTVar39->Scale3D).XY.m128d_f64[0];
          local_788.Scale3D.XY.m128d_f64[1] = (pTVar39->Scale3D).XY.m128d_f64[1];
          local_788.Scale3D.ZW.m128d_f64[0] = (pTVar39->Scale3D).ZW.m128d_f64[0];
          local_788.Scale3D.ZW.m128d_f64[1] = (pTVar39->Scale3D).ZW.m128d_f64[1];
          GetSimSpaceTransformFromComponentSpace
                    (this,&local_1a8,this->SimulationSpace,param_1,&local_788);
          fVar70 = (float)local_1a8.Scale3D.XY.m128d_f64[0];
          local_7f0 = local_1a8.Scale3D.ZW.m128d_f64[0];
          local_800 = local_1a8.Scale3D.XY.m128d_f64[0];
          dStack_7f8 = local_1a8.Scale3D.XY.m128d_f64[1];
          if (*(float *)&pFVar52->_padding_ == fVar70) goto LAB_146427bd5;
          FAnimPhys::ScaleRigidBodyMass(pFVar52,fVar70 / *(float *)&pFVar52->_padding_);
          dVar16 = (double)fVar70;
          local_b98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b98.ArrayNum = 0;
          local_b98.ArrayMax = 0;
          dVar71 = dVar16 * *(double *)&this_02[1].field_0x8;
          local_920._s_0.Z = dVar16 * (double)this_02[2].BoneName;
          local_920._8_4_ = SUB84(dVar71,0);
          local_920._0_8_ = dVar16 * (double)this_02[1].BoneName;
          local_920._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
          pFVar40 = FAnimPhysShape::MakeBox(&local_668,(TVector<double> *)&local_920._s_0);
          if (((local_b98.AllocatorInstance.Data <= pFVar40) &&
              (pFVar40 < (FAnimPhysShape *)
                         (local_b98.AllocatorInstance.Data + (longlong)local_b98.ArrayMax * 0x40)))
             && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar31)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar33 = local_b98.ArrayNum;
          if (local_b98.ArrayNum == local_b98.ArrayMax) {
            iVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&local_b98.AllocatorInstance,&local_b98.ArrayMax);
          }
          local_b98.ArrayNum = iVar33 + 1;
          lVar46 = (longlong)iVar33 * 0x40;
          *(undefined8 *)&local_b98.AllocatorInstance.Data[lVar46].field_0x0 = 0;
          *(FScriptContainerElement **)&local_b98.AllocatorInstance.Data[lVar46].field_0x0 =
               (pFVar40->Vertices).AllocatorInstance.Data;
          (pFVar40->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_b98.AllocatorInstance.Data + lVar46 + 8) = (pFVar40->Vertices).ArrayNum;
          *(int *)(local_b98.AllocatorInstance.Data + lVar46 + 0xc) = (pFVar40->Vertices).ArrayMax;
          (pFVar40->Vertices).ArrayNum = 0;
          (pFVar40->Vertices).ArrayMax = 0;
          *(undefined8 *)(local_b98.AllocatorInstance.Data + lVar46 + 0x10) = 0;
          *(FScriptContainerElement **)(local_b98.AllocatorInstance.Data + lVar46 + 0x10) =
               (pFVar40->Triangles).AllocatorInstance.Data;
          (pFVar40->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(local_b98.AllocatorInstance.Data + lVar46 + 0x18) = (pFVar40->Triangles).ArrayNum
          ;
          *(int *)(local_b98.AllocatorInstance.Data + lVar46 + 0x1c) = (pFVar40->Triangles).ArrayMax
          ;
          (pFVar40->Triangles).ArrayNum = 0;
          (pFVar40->Triangles).ArrayMax = 0;
          *(float *)(local_b98.AllocatorInstance.Data + lVar46 + 0x20) = pFVar40->Volume;
          dVar71 = (pFVar40->CenterOfMass).field0_0x0._s_0.Y;
          *(double *)(local_b98.AllocatorInstance.Data + lVar46 + 0x28) =
               (pFVar40->CenterOfMass).field0_0x0._s_0.X;
          *(double *)(local_b98.AllocatorInstance.Data + lVar46 + 0x28 + 8) = dVar71;
          *(double *)(local_b98.AllocatorInstance.Data + lVar46 + 0x38) =
               (pFVar40->CenterOfMass).field0_0x0._s_0.Z;
          if (local_668.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Triangles.AllocatorInstance.Data);
          }
          if (local_668.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_668.Vertices.AllocatorInstance.Data);
          }
          AVar7 = pFVar52->CollisionType;
          *(float *)&pFVar52->_padding_ = fVar70;
          if (AVar7 == CustomSphere) {
            pFVar52->SphereCollisionRadius = fVar70 * (float)this_02[0xc].CachedCompactPoseIndex;
          }
          else {
            if (AVar7 == InnerSphere) {
              uVar62 = (uint)*(undefined8 *)&this_02[1].field_0x8 & uVar59;
              uVar63 = (uint)((ulonglong)*(undefined8 *)&this_02[1].field_0x8 >> 0x20) & uVar61;
              uVar48 = this_02[1].BoneName.ComparisonIndex.Value & uVar59;
              uVar58 = this_02[1].BoneName.Number & uVar61;
              if ((double)CONCAT44(uVar58,uVar48) <= (double)CONCAT44(uVar63,uVar62)) {
                uVar62 = uVar48;
                uVar63 = uVar58;
              }
              uVar48 = this_02[2].BoneName.ComparisonIndex.Value & uVar59;
              uVar58 = this_02[2].BoneName.Number & uVar61;
              if ((double)CONCAT44(uVar58,uVar48) <= (double)CONCAT44(uVar63,uVar62)) {
                uVar62 = uVar48;
                uVar63 = uVar58;
              }
            }
            else {
              if (AVar7 != OuterSphere) goto LAB_146427b78;
              uVar62 = (uint)*(undefined8 *)&this_02[1].field_0x8 & uVar59;
              uVar63 = (uint)((ulonglong)*(undefined8 *)&this_02[1].field_0x8 >> 0x20) & uVar61;
              uVar48 = this_02[1].BoneName.ComparisonIndex.Value & uVar59;
              uVar58 = this_02[1].BoneName.Number & uVar61;
              if ((double)CONCAT44(uVar63,uVar62) <= (double)CONCAT44(uVar58,uVar48)) {
                uVar62 = uVar48;
                uVar63 = uVar58;
              }
              uVar48 = this_02[2].BoneName.ComparisonIndex.Value & uVar59;
              uVar58 = this_02[2].BoneName.Number & uVar61;
              if ((double)CONCAT44(uVar63,uVar62) <= (double)CONCAT44(uVar58,uVar48)) {
                uVar62 = uVar48;
                uVar63 = uVar58;
              }
            }
            pFVar52->SphereCollisionRadius =
                 (float)((double)CONCAT44(uVar63,uVar62) * dVar16 * dVar54);
          }
LAB_146427b78:
          this_03 = &pFVar52->Shapes;
          if (this_03 != &local_b98) {
            DestructItems<FAnimPhysShape,int>
                      ((FAnimPhysShape *)(this_03->AllocatorInstance).Data,
                       (pFVar52->Shapes).ArrayNum);
            TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_>::CopyToEmpty<FAnimPhysShape,int>
                      (this_03,(FAnimPhysShape *)local_b98.AllocatorInstance.Data,local_b98.ArrayNum
                       ,(pFVar52->Shapes).ArrayMax);
          }
          DestructItems<FAnimPhysShape,int>
                    ((FAnimPhysShape *)local_b98.AllocatorInstance.Data,local_b98.ArrayNum);
          if ((FAnimPhysShape *)local_b98.AllocatorInstance.Data == (FAnimPhysShape *)0x0)
          goto LAB_146427bd5;
          FMemory::Free(local_b98.AllocatorInstance.Data);
          uVar45 = (ulonglong)local_ba0;
          FVar50 = (FName)((longlong)FVar50 + 4);
        }
        else {
LAB_146427bd5:
          uVar45 = (ulonglong)local_ba0;
          FVar50 = (FName)((longlong)FVar50 + 4);
        }
      }
    }
  }
  pFVar12 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  iVar33 = (this->BodiesToReset).ArrayNum;
  while (0 < iVar33) {
    if (((this->BodiesToReset).ArrayNum < 1) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    iVar33 = (this->BodiesToReset).ArrayNum;
    pdVar11 = *(double **)((this->BodiesToReset).AllocatorInstance.Data + (longlong)iVar33 * 8 + -8)
    ;
    (this->BodiesToReset).ArrayNum = iVar33 + -1;
    if ((pdVar11 != (double *)0x0) &&
       (bVar31 = FBoneReference::IsValidToEvaluate((FBoneReference *)(pdVar11 + 0x7c),pFVar12),
       bVar31)) {
      FVar34 = FBoneReference::GetCompactPoseIndex
                         ((FBoneReference *)(pdVar11 + 0x7c),(FBoneContainer *)local_ab0);
      pTVar39 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar34));
      local_728.Rotation.XY.m128d_f64[0] = (pTVar39->Rotation).XY.m128d_f64[0];
      local_728.Rotation.XY.m128d_f64[1] = (pTVar39->Rotation).XY.m128d_f64[1];
      local_728.Rotation.ZW.m128d_f64[0] = (pTVar39->Rotation).ZW.m128d_f64[0];
      local_728.Rotation.ZW.m128d_f64[1] = (pTVar39->Rotation).ZW.m128d_f64[1];
      local_728.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
      local_728.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
      local_728.Translation.ZW.m128d_f64[0] = (pTVar39->Translation).ZW.m128d_f64[0];
      local_728.Translation.ZW.m128d_f64[1] = (pTVar39->Translation).ZW.m128d_f64[1];
      local_728.Scale3D.XY.m128d_f64[0] = (pTVar39->Scale3D).XY.m128d_f64[0];
      local_728.Scale3D.XY.m128d_f64[1] = (pTVar39->Scale3D).XY.m128d_f64[1];
      local_728.Scale3D.ZW.m128d_f64[0] = (pTVar39->Scale3D).ZW.m128d_f64[0];
      local_728.Scale3D.ZW.m128d_f64[1] = (pTVar39->Scale3D).ZW.m128d_f64[1];
      GetSimSpaceTransformFromComponentSpace
                (this,&local_2c8,this->SimulationSpace,param_1,&local_728);
      *pdVar11 = local_2c8.Translation.XY.m128d_f64[0];
      pdVar11[1] = local_2c8.Translation.XY.m128d_f64[1];
      pdVar11[2] = local_2c8.Translation.ZW.m128d_f64[0];
      local_7d8 = local_2c8.Translation.ZW.m128d_f64[0];
      local_7e8 = local_2c8.Translation.XY.m128d_f64[0];
      dStack_7e0 = local_2c8.Translation.XY.m128d_f64[1];
      local_b48 = (FWeakObjectPtr)local_2c8.Rotation.XY.m128d_f64[0];
      FStack_b40 = (FWeakObjectPtr)local_2c8.Rotation.XY.m128d_f64[1];
      *(double *)(pdVar11 + 4) = local_2c8.Rotation.XY.m128d_f64[0];
      *(double *)(pdVar11 + 5) = local_2c8.Rotation.XY.m128d_f64[1];
      pdVar11[6] = local_2c8.Rotation.ZW.m128d_f64[0];
      pdVar11[7] = local_2c8.Rotation.ZW.m128d_f64[1];
      local_7c0 = local_2c8.Scale3D.ZW.m128d_f64[0];
      local_7d0 = local_2c8.Scale3D.XY.m128d_f64[0];
      dStack_7c8 = local_2c8.Scale3D.XY.m128d_f64[1];
      *(float *)(pdVar11 + 8) = (float)local_2c8.Scale3D.XY.m128d_f64[0];
      uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar11[10] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar11[0xb] = (double)uVar55;
      pdVar11[0xc] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar11[0xd] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar11[0xe] = (double)uVar55;
      pdVar11[0xf] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    iVar33 = (this->BodiesToReset).ArrayNum;
  }
  if ((this->bDoUpdate != '\0') && (this->AnimPhysicsMinDeltaTime < this->NextTimeStep)) {
    local_908._s_0.X = 0.0;
    local_908._s_0.Y = 0.0;
    local_908._s_0.Z = __real_bff0000000000000;
    pTVar41 = TransformWorldVectorToSimSpace
                        (this,&local_628,param_1,(TVector<double> *)&local_908._s_0);
    uVar62 = *(uint *)&(this->ExternalForce).field0_0x0;
    uVar63 = *(uint *)((longlong)&(this->ExternalForce).field0_0x0 + 4);
    local_ac8._s_0.X = (this->ExternalForce).field0_0x0._s_0.X;
    pdVar11 = &(this->ExternalForce).field0_0x0._s_0.Y;
    uVar48 = *(uint *)pdVar11;
    uVar58 = *(uint *)((longlong)&(this->ExternalForce).field0_0x0 + 0xc);
    local_ac8._s_0.Y = *pdVar11;
    dVar54 = (pTVar41->field0_0x0)._s_0.Y;
    (this->SimSpaceGravityDirection).field0_0x0._s_0.X = (pTVar41->field0_0x0)._s_0.X;
    (this->SimSpaceGravityDirection).field0_0x0._s_0.Y = dVar54;
    local_ac8._s_0.Z = *(double *)((longlong)&(this->ExternalForce).field0_0x0 + 0x10);
    (this->SimSpaceGravityDirection).field0_0x0._s_0.Z = (pTVar41->field0_0x0)._s_0.Z;
    if ((__real_3f1a36e2e0000000 < (double)CONCAT44(uVar63 & uVar61,uVar62 & uVar59)) ||
       ((uVar48 = uVar48 & uVar59, uVar58 = uVar58 & uVar61,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar58,uVar48) &&
        (double)CONCAT44(uVar58,uVar48) != __real_3f1a36e2e0000000 ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)local_ac8._s_0.Z >> 0x20) & uVar61,
                          SUB84(local_ac8._s_0.Z,0) & uVar59))))) {
      pTVar41 = TransformWorldVectorToSimSpace
                          (this,&local_610,param_1,(TVector<double> *)&local_ac8._s_0);
      local_ac8._s_0.X = (pTVar41->field0_0x0)._s_0.X;
      local_ac8._s_0.Y = (pTVar41->field0_0x0)._s_0.Y;
      local_ac8._s_0.Z = (pTVar41->field0_0x0)._s_0.Z;
    }
    local_9c0.ReferenceController = (TReferenceControllerBase<1> *)local_b88;
    local_9c8 = (FSkelMeshRefPoseOverride *)
                UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FSimBodiesScratch>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar42 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_9c8,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FSimBodiesScratch>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    uVar59 = *(uint *)(pFVar42 + 3);
    pTVar1 = (TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *)(pFVar42 + 2);
    if ((int)uVar59 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar59);
    }
    uVar61 = *(uint *)&pFVar42[3].field_0x4;
    *(undefined4 *)(pFVar42 + 3) = 0;
    puVar2 = &pFVar42[3].field_0x4;
    if (uVar61 != uVar59) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar59,(ForAnyElementType *)pTVar1,0,(int *)puVar2);
    }
    pFVar49 = (this->ActiveBoneIndices).AllocatorInstance.Data;
    iVar33 = (this->ActiveBoneIndices).ArrayNum;
    pFVar13 = pFVar49 + (longlong)iVar33 * 4;
    while( true ) {
      if ((this->ActiveBoneIndices).ArrayNum != iVar33) {
        local_bc4 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_bc4);
      }
      param_1 = (FComponentSpacePoseContext *)local_b28.Data;
      if (pFVar49 == pFVar13) break;
      uVar59 = *(uint *)pFVar49;
      if ((-1 < (int)uVar59) && ((int)uVar59 < (this->BaseBodyPtrs).ArrayNum)) {
        uVar61 = 0;
        if ((int)uVar59 < (this->BaseBodyPtrs).ArrayNum) {
          uVar61 = ~uVar59 >> 0x1f;
        }
        if ((uVar61 == 0) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar67 = (pTVar1->AllocatorInstance).Data;
        pFVar64 = (this->BaseBodyPtrs).AllocatorInstance.Data + (longlong)(int)uVar59 * 8;
        if (((pFVar67 <= pFVar64) && (pFVar64 < pFVar67 + (longlong)*(int *)puVar2 * 8)) &&
           (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar31)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar35 = *(int *)(pFVar42 + 3);
        if (iVar35 == *(int *)puVar2) {
          iVar35 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)pTVar1,(int *)puVar2);
        }
        *(int *)(pFVar42 + 3) = iVar35 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar35 * 8) =
             *(undefined8 *)pFVar64;
      }
      pFVar49 = pFVar49 + 4;
    }
    local_ae0._s_0.Z = (this->GravityOverride).field0_0x0._s_0.Z;
    local_bb8._s_0.X = 0.0;
    local_bb8._s_0.Y = 0.0;
    local_ae0._s_0.X = (this->GravityOverride).field0_0x0._s_0.X;
    local_ae0._s_0.Y = (this->GravityOverride).field0_0x0._s_0.Y;
    local_888.ExternalAngularVelocity.field0_0x0._s_0.X =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
    local_888.ExternalAngularVelocity.field0_0x0._s_0.Y =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
    local_888.SimSpaceAngularAlpha = (this->SimSpaceSettings).SimSpaceAngularAlpha;
    local_888.MaxAngularVelocity = (this->SimSpaceSettings).MaxAngularVelocity;
    local_888.MaxAngularAcceleration = (this->SimSpaceSettings).MaxAngularAcceleration;
    local_888._12_4_ = *(undefined4 *)&(this->SimSpaceSettings).field_0xc;
    local_bb8._s_0.Z = 0.0;
    local_888.ExternalAngularVelocity.field0_0x0._s_0.Z =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
    CalculateSimulationSpaceMotion
              (this,this->SimulationSpace,&local_888,(FComponentSpacePoseContext *)local_b28.Data,
               this->NextTimeStep,&local_8f0,&local_8d8);
    FVar51 = (FName)local_b78._8_8_;
    pTVar27 = CVarDisableWorldSpace.Ref;
    if (this->SimulationSpace == World) {
      bVar31 = IsInParallelGameThread();
      if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
        lVar46 = 0;
      }
      else {
        lVar46 = 1;
      }
      if (pTVar27->ShadowedValue[lVar46] != false) goto LAB_14642810a;
    }
    else {
LAB_14642810a:
      if ((this->bUseGravityOverride != '\0') && (this->bGravityOverrideInSimSpace == '\0')) {
        pTVar41 = TransformWorldVectorToSimSpace
                            (this,&local_598,param_1,(TVector<double> *)&local_ae0._s_0);
        local_ae0._s_0.X = (pTVar41->field0_0x0)._s_0.X;
        local_ae0._s_0.Y = (pTVar41->field0_0x0)._s_0.Y;
        local_ae0._s_0.Z = (pTVar41->field0_0x0)._s_0.Z;
      }
      uVar77 = local_b88._4_4_;
      dVar71 = __real_3ff0000000000000;
      lVar46 = param_1->_padding_;
      uVar48 = (uint)__xmm_80000000000000008000000000000000;
      uVar58 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_790 = (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0];
      local_578 = *(undefined8 *)(lVar46 + 0x20);
      uStack_570 = *(undefined8 *)(lVar46 + 0x28);
      local_7b8 = *(double *)(lVar46 + 0x40);
      dStack_7b0 = *(double *)(lVar46 + 0x48);
      local_7a8 = *(double *)(lVar46 + 0x50);
      local_568 = *(undefined8 *)(lVar46 + 0x30);
      uStack_560 = *(undefined8 *)(lVar46 + 0x38);
      local_538 = *(undefined8 *)(lVar46 + 0x60);
      uStack_530 = *(undefined8 *)(lVar46 + 0x68);
      local_528 = *(undefined8 *)(lVar46 + 0x70);
      uStack_520 = *(undefined8 *)(lVar46 + 0x78);
      local_7a0 = (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0];
      dStack_798 = (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1];
      dVar54 = __real_3ff0000000000000 / (double)this->NextTimeStep;
      dVar17 = (local_7b8 - local_7a0) * dVar54;
      dVar16 = (local_7a8 - local_790) * dVar54;
      dVar54 = (dStack_7b0 - dStack_798) * dVar54;
      dVar53 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar58,SUB84(dVar17,0) ^ uVar48)
      ;
      uVar62 = SUB84(dVar16,0) ^ uVar48;
      uVar63 = (uint)((ulonglong)dVar16 >> 0x20) ^ uVar58;
      uVar59 = SUB84(dVar54,0) ^ uVar48;
      uVar61 = (uint)((ulonglong)dVar54 >> 0x20) ^ uVar58;
      if (local_b88._4_4_ == 0) {
        local_988._s_0.Y = (double)CONCAT44(uVar61,uVar59);
        local_988._s_0.Z = (double)CONCAT44(uVar63,uVar62);
        local_988._s_0.X = dVar53;
        pTVar41 = TransformWorldVectorToSimSpace
                            (this,&local_5e0,param_1,(TVector<double> *)&local_988._s_0);
      }
      else {
        local_9a0._s_0.Y = (double)CONCAT44(uVar61,uVar59);
        local_9a0._s_0.Z = (double)CONCAT44(uVar63,uVar62);
        local_9a0._s_0.X = dVar53;
        pTVar41 = TransformWorldVectorToSimSpaceScaled
                            (this,&local_5f8,param_1,(TVector<double> *)&local_9a0._s_0);
      }
      local_bb8._s_0.X =
           local_bb8._s_0.X +
           (pTVar41->field0_0x0)._s_0.X * (this->ComponentLinearVelScale).field0_0x0._s_0.X;
      local_bb8._s_0.Y =
           local_bb8._s_0.Y +
           (pTVar41->field0_0x0)._s_0.Y * (this->ComponentLinearVelScale).field0_0x0._s_0.Y;
      dVar53 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y;
      local_bb8._s_0.Z =
           local_bb8._s_0.Z +
           (pTVar41->field0_0x0)._s_0.Z * (this->ComponentLinearVelScale).field0_0x0._s_0.Z;
      dVar65 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z;
      fVar70 = this->NextTimeStep;
      dVar6 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
      (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X = dVar17;
      (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar54;
      (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z = dVar16;
      dVar71 = dVar71 / (double)fVar70;
      dVar65 = (dVar65 - dVar16) / (double)fVar70;
      dVar16 = (dVar6 - dVar17) * dVar71;
      dVar71 = (dVar53 - dVar54) * dVar71;
      if (uVar77 == 0) {
        local_9b8._s_0.X = dVar16;
        local_9b8._s_0.Y = dVar71;
        local_9b8._s_0.Z = dVar65;
        pTVar41 = TransformWorldVectorToSimSpace
                            (this,&local_5c8,param_1,(TVector<double> *)&local_9b8._s_0);
        dVar54 = (pTVar41->field0_0x0)._s_0.X * (this->ComponentLinearAccScale).field0_0x0._s_0.X;
      }
      else {
        local_970._s_0.X = dVar16;
        local_970._s_0.Y = dVar71;
        local_970._s_0.Z = dVar65;
        pTVar41 = TransformWorldVectorToSimSpaceScaled
                            (this,&local_5b0,param_1,(TVector<double> *)&local_970._s_0);
        dVar54 = (this->ComponentLinearAccScale).field0_0x0._s_0.X * (pTVar41->field0_0x0)._s_0.X;
      }
      pTVar26 = CVarComponentAppliedLinearAccClampOverride.Ref;
      local_bb8._s_0.X = local_bb8._s_0.X + dVar54;
      local_bb8._s_0.Y =
           local_bb8._s_0.Y +
           (pTVar41->field0_0x0)._s_0.Y * (this->ComponentLinearAccScale).field0_0x0._s_0.Y;
      local_bb8._s_0.Z =
           local_bb8._s_0.Z +
           (pTVar41->field0_0x0)._s_0.Z * (this->ComponentLinearAccScale).field0_0x0._s_0.Z;
      local_b48 = *(FWeakObjectPtr *)&(this->ComponentAppliedLinearAccClamp).field0_0x0;
      FStack_b40 = (FWeakObjectPtr)(this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y;
      local_b38 = (FWeakObjectPtr)(this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
      bVar31 = IsInParallelGameThread();
      if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
        lVar46 = 0;
      }
      else {
        lVar46 = 4;
      }
      fVar70 = *(float *)((longlong)pTVar26->ShadowedValue + lVar46);
      uVar55 = local_b48;
      FVar15 = FStack_b40;
      FVar19 = local_b38;
      if (0.0 <= fVar70) {
        uVar55 = (undefined8)fVar70;
        FVar15 = (FWeakObjectPtr)uVar55;
        FVar19 = (FWeakObjectPtr)uVar55;
      }
      uVar59 = (uint)uVar55 ^ uVar48;
      uVar61 = SUB84(uVar55,4) ^ uVar58;
      if (local_bb8._s_0.X <= (double)uVar55) {
        uVar55 = local_bb8._s_0.X;
      }
      if ((double)uVar55 <= (double)CONCAT44(uVar61,uVar59)) {
        uVar55._4_4_ = uVar61;
        uVar55._0_4_ = uVar59;
      }
      uVar18 = FVar15;
      if (local_bb8._s_0.Y <= (double)FVar15) {
        uVar18 = local_bb8._s_0.Y;
      }
      uVar59 = FVar15.ObjectIndex ^ uVar48;
      uVar61 = FVar15.ObjectSerialNumber ^ uVar58;
      FVar15.ObjectSerialNumber = uVar61;
      FVar15.ObjectIndex = uVar59;
      uVar56 = FVar19;
      if (local_bb8._s_0.Z <= (double)FVar19) {
        uVar56 = local_bb8._s_0.Z;
      }
      FVar66.ObjectIndex = FVar19.ObjectIndex ^ uVar48;
      FVar66.ObjectSerialNumber = FVar19.ObjectSerialNumber ^ uVar58;
      local_bb8._8_8_ = uVar18;
      if ((double)uVar18 <= (double)CONCAT44(uVar61,uVar59)) {
        local_bb8._s_0.Y = (double)FVar15;
      }
      local_bb8._0_8_ = uVar55;
      local_bb8._16_8_ = uVar56;
      if ((double)uVar56 <= (double)FVar66) {
        local_bb8._s_0.Z = (double)FVar66;
      }
    }
    pTVar26 = CVarGravityScale.Ref;
    bVar31 = IsInParallelGameThread();
    if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
      lVar46 = 0;
    }
    else {
      lVar46 = 4;
    }
    fVar70 = *(float *)((longlong)pTVar26->ShadowedValue + lVar46);
    pFVar49 = (pTVar1->AllocatorInstance).Data;
    iVar33 = *(int *)(pFVar42 + 3);
    dVar54 = (double)fVar70;
    pFVar13 = pFVar49 + (longlong)iVar33 * 8;
    fVar60 = this->GravityScale;
    local_b48 = (FWeakObjectPtr)(local_ae0._s_0.X * dVar54);
    FStack_b40 = (FWeakObjectPtr)(local_ae0._s_0.Y * dVar54);
    FVar15 = (FWeakObjectPtr)(dVar54 * local_ae0._s_0.Z);
    auVar72._8_4_ = FStack_b40.ObjectIndex;
    auVar72._0_4_ = local_b48.ObjectIndex;
    auVar72._4_4_ = local_b48.ObjectSerialNumber;
    auVar72._12_4_ = FStack_b40.ObjectSerialNumber;
    local_b38 = FVar15;
    while( true ) {
      if (*(int *)(pFVar42 + 3) != iVar33) {
        local_bc3[0] = 0;
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_bc3);
      }
      pTVar24 = CVarEnableAdaptiveSubstep.Ref;
      if (pFVar49 == pFVar13) break;
      lVar46 = *(longlong *)pFVar49;
      pFVar49 = pFVar49 + 8;
      *(undefined1 (*) [16])(lVar46 + 0x318) = auVar72;
      *(FWeakObjectPtr *)(lVar46 + 0x328) = FVar15;
      *(float *)(lVar46 + 0x310) = fVar70 * fVar60;
    }
    bVar31 = IsInParallelGameThread();
    if ((bVar31) || (bVar31 = IsInGameThread(), bVar31)) {
      lVar46 = 0;
    }
    else {
      lVar46 = 4;
    }
    if (*(int *)((longlong)pTVar24->ShadowedValue + lVar46) == 1) {
      fVar70 = *(float *)(param_1->_padding_ + 0x16c) * this->MaxSubstepDeltaTime;
      if (this->MaxPhysicsDeltaTime <= fVar70) {
        fVar70 = this->MaxPhysicsDeltaTime;
      }
      if (fVar70 <= 0.0) {
        fVar70 = 0.0;
      }
      uVar61 = (uint)((*(float *)(param_1->_padding_ + 0x16c) * this->TimeDebt + this->NextTimeStep)
                     / fVar70);
      uVar59 = this->MaxSubsteps;
      if ((int)uVar61 < this->MaxSubsteps) {
        uVar59 = uVar61;
      }
      uVar45 = 0;
      if (0 < (int)uVar59) {
        uVar45 = (ulonglong)uVar59;
      }
      iVar33 = (int)uVar45;
      if (FThreadStats::bPrimaryEnable != false) {
        FVar43 = StatPtr_STAT_AnimDynamicsSubSteps;
        if (StatPtr_STAT_AnimDynamicsSubSteps ==
            (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsSubSteps>)0x0) {
          pFVar36 = ::FName::FName(&local_890,"STAT_AnimDynamicsSubSteps");
          FVar43 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsSubSteps>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsSubSteps,
                              *pFVar36,L"Anim Dynamics Sub-Steps","STATGROUP_Physics",
                              "STATCAT_Advanced",L"Physics",true,true,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar50 = *(FName *)FVar43;
        local_bc0 = FVar50;
        local_b88._8_8_ = FVar50;
        if (((FVar50 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_aa0.NameAndInfo.Index.Value = (uint)local_b88._8_8_;
          local_aa0.NameAndInfo.Number = FVar50.Number & 0xffff8fff | 0x8000;
          local_aa8 = FVar50;
          local_aa0.StatData.Pad = (uchar  [8])(longlong)iVar33;
          FThreadStats::AddStatMessage(this_00,&local_aa0);
          FStatsTrace::Set(&local_aa8,(longlong)iVar33);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
      fVar60 = this->NextTimeStep;
      this->NextTimeStep = fVar70;
      fVar60 = (this->TimeDebt + fVar60) - (float)iVar33 * fVar70;
      if (__real_3daaaaab <= fVar60) {
        fVar60 = __real_3daaaaab;
      }
      if (fVar60 <= 0.0) {
        fVar60 = 0.0;
      }
      this->TimeDebt = fVar60;
      if (0 < iVar33) {
        do {
          UpdateLimits(this,param_1);
          FAnimPhys::PhysicsUpdate
                    (fVar70,pTVar1,&this->LinearLimits,&this->AngularLimits,&this->Springs,
                     &this->SimSpaceGravityDirection,(TVector<double> *)&local_ac8._s_0,
                     (TVector<double> *)&local_bb8._s_0,&local_8d8,&local_8f0,
                     this->NumSolverIterationsPreUpdate,this->NumSolverIterationsPostUpdate);
          uVar45 = uVar45 - 1;
        } while (uVar45 != 0);
      }
    }
    else {
      fVar70 = this->NextTimeStep;
      if (this->MaxPhysicsDeltaTime <= this->NextTimeStep) {
        fVar70 = this->MaxPhysicsDeltaTime;
      }
      this->NextTimeStep = fVar70;
      UpdateLimits(this,param_1);
      FAnimPhys::PhysicsUpdate
                (this->NextTimeStep,pTVar1,&this->LinearLimits,&this->AngularLimits,&this->Springs,
                 &this->SimSpaceGravityDirection,(TVector<double> *)&local_ac8._s_0,
                 (TVector<double> *)&local_bb8._s_0,&local_8d8,&local_8f0,
                 this->NumSolverIterationsPreUpdate,this->NumSolverIterationsPostUpdate);
    }
    DrawBodies(this,param_1,pTVar1);
  }
  if (this->bDoEval != '\0') {
    if (FAnimPhys::bEnableDetailedStats == false) {
      FVar44 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsBoneEval>)&TStatId::TStatId_NAME_None;
    }
    else {
      FVar44 = StatPtr_STAT_AnimDynamicsBoneEval;
      if (StatPtr_STAT_AnimDynamicsBoneEval ==
          (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsBoneEval>)0x0) {
        pFVar36 = ::FName::FName(&local_898,"STAT_AnimDynamicsBoneEval");
        FVar44 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsBoneEval>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsBoneEval,*pFVar36
                            ,L"Anim Dynamics Bone Evaluation","STATGROUP_Physics","STATCAT_Advanced"
                            ,L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
      }
    }
    FVar50 = *(FName *)FVar44;
    bVar31 = false;
    bVar22 = false;
    local_af0.ComparisonIndex.Value = 0;
    local_af0.Number = 0;
    bVar30 = false;
    bVar32 = false;
    if ((FVar50.ComparisonIndex.Value.Value == 0) && (FVar50.Number == 0)) {
LAB_1464289cd:
      bVar22 = bVar32;
      bVar31 = bVar30;
      bVar30 = false;
      local_b88._8_4_ = local_af0.ComparisonIndex.Value;
      local_b88._12_4_ = local_af0.Number;
      FVar50 = local_af0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_b58.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_b58._s_0,(char *)*(FName *)((longlong)FVar44 + 0x10));
        bVar31 = false;
        bVar22 = true;
        bVar30 = false;
        bVar32 = true;
        if (-1 < CpuChannel->Enabled) {
          local_b10.ComparisonIndex.Value = FVar50.ComparisonIndex.Value.Value;
          local_b10.Number = FVar50.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_b10,(wchar_t *)*(FName *)((longlong)FVar44 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                     ,0x287);
          bVar31 = true;
          bVar22 = true;
          bVar30 = true;
          bVar32 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1464289cd;
      local_bc0 = FVar50;
      local_b88._8_8_ = FVar50;
      FThreadStats::AddMessage(FVar50,CycleScopeStart);
      bVar30 = true;
    }
    local_bc0.ComparisonIndex.Value = *(uint *)&(param_1->Pose).Pose.field_0x10;
    local_bc0.Number = *(uint *)&(param_1->Pose).Pose.field_0x14;
    if (((this->PhysicsBodyDefinitions).ArrayNum < (this->Bodies).ArrayNum) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bodies.Num() <= PhysicsBodyDefinitions.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                            ,0x28b,L""), bVar32)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (((this->PhysicsBodyJointOffsets).ArrayNum < (this->Bodies).ArrayNum) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bodies.Num() <= PhysicsBodyJointOffsets.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                            ,0x28c,L""), bVar32)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_ba0 = 0;
    if (0 < (this->Bodies).ArrayNum) {
      lVar46 = 0;
      local_b68 = 0;
      local_b20 = 0;
      do {
        lVar38 = local_b20;
        uVar59 = local_ba0;
        uVar62 = ~local_ba0 >> 0x1f;
        uVar61 = 0;
        if ((int)local_ba0 < (this->PhysicsBodyDefinitions).ArrayNum) {
          uVar61 = uVar62;
        }
        if ((uVar61 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_b08.Data = (this->PhysicsBodyDefinitions).AllocatorInstance.Data + lVar38;
        uVar61 = 0;
        if ((int)uVar59 < (this->Bodies).ArrayNum) {
          uVar61 = uVar62;
        }
        if ((uVar61 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar13 = (this->Bodies).AllocatorInstance.Data;
        bVar32 = FBoneReference::IsValidToEvaluate
                           ((FBoneReference *)local_b08.Data,(FBoneContainer *)local_bc0);
        if (bVar32) {
          FBoneReference::GetCompactPoseIndex
                    ((FBoneReference *)local_b08.Data,(FBoneContainer *)local_b78);
          iVar33 = (this->PhysicsBodyJointOffsets).ArrayNum;
          if (local_b88._4_4_ == 0) {
            uVar61 = 0;
            if ((int)uVar59 < iVar33) {
              uVar61 = uVar62;
            }
            if ((uVar61 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            dVar54 = *(double *)(pFVar13 + lVar46 + 0x28);
            dVar71 = *(double *)(pFVar13 + lVar46 + 0x30);
            dVar16 = *(double *)(pFVar13 + lVar46 + 0x20);
            pFVar64 = (this->PhysicsBodyJointOffsets).AllocatorInstance.Data;
            dVar17 = *(double *)(pFVar13 + lVar46 + 0x38);
            pFVar49 = pFVar13 + lVar46 + 0x20;
            uVar77 = *(undefined4 *)pFVar49;
            uVar78 = *(undefined4 *)(pFVar49 + 4);
            local_a28.Rotation.XY.m128d_f64[0] = *(double *)pFVar49;
            uVar79 = *(undefined4 *)(pFVar49 + 8);
            uVar80 = *(undefined4 *)(pFVar49 + 0xc);
            local_a28.Rotation.XY.m128d_f64[1] = *(double *)(pFVar49 + 8);
            pFVar49 = pFVar13 + lVar46 + 0x30;
            uVar73 = *(undefined4 *)pFVar49;
            uVar74 = *(undefined4 *)(pFVar49 + 4);
            local_a28.Rotation.ZW.m128d_f64[0] = *(double *)pFVar49;
            uVar75 = *(undefined4 *)(pFVar49 + 8);
            uVar76 = *(undefined4 *)(pFVar49 + 0xc);
            local_a28.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar49 + 8);
            pFVar49 = pFVar64 + local_b68;
            dVar20 = *(double *)pFVar49;
            dVar57 = *(double *)(pFVar49 + 8);
            local_b38 = *(FWeakObjectPtr *)(pFVar64 + local_b68 + 0x10);
            dVar6 = dVar54 * (double)local_b38 - dVar71 * dVar57;
            dVar6 = dVar6 + dVar6;
            dVar65 = dVar71 * dVar20 - dVar16 * (double)local_b38;
            dVar65 = dVar65 + dVar65;
            dVar53 = dVar16 * dVar57 - dVar54 * dVar20;
            dVar53 = dVar53 + dVar53;
            dVar57 = *(double *)(pFVar13 + lVar46 + 8) -
                     ((dVar71 * dVar6 - dVar16 * dVar53) + dVar17 * dVar65 + dVar57);
            local_a28.Translation.ZW.m128d_f64[0] =
                 *(double *)(pFVar13 + lVar46 + 0x10) -
                 ((dVar16 * dVar65 - dVar54 * dVar6) + dVar17 * dVar53 + (double)local_b38);
            local_a28.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar57,0);
            local_a28.Translation.XY.m128d_f64[0] =
                 *(double *)(pFVar13 + lVar46) -
                 ((dVar54 * dVar53 - dVar71 * dVar65) + dVar17 * dVar6 + dVar20);
            local_a28.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar57 >> 0x20);
            local_a28.Scale3D.XY.m128d_f64[0] = (double)___xmm_3ff00000000000003ff0000000000000;
            local_a28.Scale3D.XY.m128d_f64[1] = (double)_UNK_150689688;
            local_a28.Scale3D.ZW.m128d_f64[0] = (double)___xmm_00000000000000003ff0000000000000;
            local_a28.Scale3D.ZW.m128d_f64[1] = (double)_UNK_150689518;
          }
          else {
            pFVar49 = (FScriptContainerElement *)(double)*(float *)(pFVar13 + lVar46 + 0x40);
            uVar61 = 0;
            if ((int)uVar59 < iVar33) {
              uVar61 = uVar62;
            }
            if ((uVar61 == 0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar32)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            dVar54 = *(double *)(pFVar13 + lVar46 + 0x28);
            dVar71 = *(double *)(pFVar13 + lVar46 + 0x30);
            dVar16 = *(double *)(pFVar13 + lVar46 + 0x20);
            pFVar67 = (this->PhysicsBodyJointOffsets).AllocatorInstance.Data;
            dVar17 = *(double *)(pFVar13 + lVar46 + 0x38);
            pFVar64 = pFVar13 + lVar46 + 0x20;
            uVar77 = *(undefined4 *)pFVar64;
            uVar78 = *(undefined4 *)(pFVar64 + 4);
            local_a28.Rotation.XY.m128d_f64[0] = *(double *)pFVar64;
            uVar79 = *(undefined4 *)(pFVar64 + 8);
            uVar80 = *(undefined4 *)(pFVar64 + 0xc);
            local_a28.Rotation.XY.m128d_f64[1] = *(double *)(pFVar64 + 8);
            pFVar64 = pFVar13 + lVar46 + 0x30;
            uVar73 = *(undefined4 *)pFVar64;
            uVar74 = *(undefined4 *)(pFVar64 + 4);
            local_a28.Rotation.ZW.m128d_f64[0] = *(double *)pFVar64;
            uVar75 = *(undefined4 *)(pFVar64 + 8);
            uVar76 = *(undefined4 *)(pFVar64 + 0xc);
            local_a28.Rotation.ZW.m128d_f64[1] = *(double *)(pFVar64 + 8);
            pFVar64 = pFVar67 + local_b68;
            dVar20 = *(double *)pFVar64;
            dVar57 = *(double *)(pFVar64 + 8);
            local_b38 = *(FWeakObjectPtr *)(pFVar67 + local_b68 + 0x10);
            dVar6 = dVar54 * (double)local_b38 - dVar71 * dVar57;
            dVar6 = dVar6 + dVar6;
            dVar65 = dVar71 * dVar20 - dVar16 * (double)local_b38;
            dVar65 = dVar65 + dVar65;
            dVar53 = dVar16 * dVar57 - dVar54 * dVar20;
            dVar53 = dVar53 + dVar53;
            dVar57 = *(double *)(pFVar13 + lVar46 + 8) -
                     ((dVar71 * dVar6 - dVar16 * dVar53) + dVar17 * dVar65 + dVar57);
            local_a28.Translation.ZW.m128d_f64[0] =
                 *(double *)(pFVar13 + lVar46 + 0x10) -
                 ((dVar16 * dVar65 - dVar54 * dVar6) + dVar17 * dVar53 + (double)local_b38);
            local_a28.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar57,0);
            local_a28.Translation.XY.m128d_f64[0] =
                 *(double *)(pFVar13 + lVar46) -
                 ((dVar54 * dVar53 - dVar71 * dVar65) + dVar17 * dVar6 + dVar20);
            local_a28.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar57 >> 0x20);
            local_a28.Scale3D.ZW.m128d_f64[1] = 0.0;
            local_a28.Scale3D.XY.m128d_f64[0] = (double)pFVar49;
            local_a28.Scale3D.XY.m128d_f64[1] = (double)pFVar49;
            local_a28.Scale3D.ZW.m128d_f64[0] = (double)pFVar49;
          }
          local_a28.Translation.ZW.m128d_f64[1] = 0.0;
          if ((this->RetargetingSettings).bEnabled != false) {
            local_448.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_448.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_448.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            local_448.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_448.Scale3D.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
            local_448.Scale3D.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
            FBoneContainer::GetParentBoneIndex((FBoneContainer *)local_bc0,&local_b54);
            if (local_b54 != (FCompactPoseBoneIndex)0xffffffff) {
              pTVar39 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_b54);
              local_6c8.Rotation.XY.m128d_f64[0] = (pTVar39->Rotation).XY.m128d_f64[0];
              local_6c8.Rotation.XY.m128d_f64[1] = (pTVar39->Rotation).XY.m128d_f64[1];
              local_6c8.Rotation.ZW.m128d_f64[0] = (pTVar39->Rotation).ZW.m128d_f64[0];
              local_6c8.Rotation.ZW.m128d_f64[1] = (pTVar39->Rotation).ZW.m128d_f64[1];
              local_6c8.Translation.XY.m128d_f64[0] = (pTVar39->Translation).XY.m128d_f64[0];
              local_6c8.Translation.XY.m128d_f64[1] = (pTVar39->Translation).XY.m128d_f64[1];
              local_6c8.Translation.ZW.m128d_f64[0] = (pTVar39->Translation).ZW.m128d_f64[0];
              local_6c8.Translation.ZW.m128d_f64[1] = (pTVar39->Translation).ZW.m128d_f64[1];
              local_6c8.Scale3D.XY.m128d_f64[0] = (pTVar39->Scale3D).XY.m128d_f64[0];
              local_6c8.Scale3D.XY.m128d_f64[1] = (pTVar39->Scale3D).XY.m128d_f64[1];
              local_6c8.Scale3D.ZW.m128d_f64[0] = (pTVar39->Scale3D).ZW.m128d_f64[0];
              local_6c8.Scale3D.ZW.m128d_f64[1] = (pTVar39->Scale3D).ZW.m128d_f64[1];
              GetSimSpaceTransformFromComponentSpace
                        (this,&local_268,this->SimulationSpace,param_1,&local_6c8);
              local_448.Rotation.XY.m128d_f64[1] = local_268.Rotation.XY.m128d_f64[1];
              local_448.Rotation.XY.m128d_f64[0] = local_268.Rotation.XY.m128d_f64[0];
              local_448.Rotation.ZW.m128d_f64[1] = local_268.Rotation.ZW.m128d_f64[1];
              local_448.Rotation.ZW.m128d_f64[0] = local_268.Rotation.ZW.m128d_f64[0];
              local_448.Translation.XY.m128d_f64[1] = local_268.Translation.XY.m128d_f64[1];
              local_448.Translation.XY.m128d_f64[0] = local_268.Translation.XY.m128d_f64[0];
              local_448.Translation.ZW.m128d_f64[1] = local_268.Translation.ZW.m128d_f64[1];
              local_448.Translation.ZW.m128d_f64[0] = local_268.Translation.ZW.m128d_f64[0];
              local_448.Scale3D.XY.m128d_f64[1] = local_268.Scale3D.XY.m128d_f64[1];
              local_448.Scale3D.XY.m128d_f64[0] = local_268.Scale3D.XY.m128d_f64[0];
              local_448.Scale3D.ZW.m128d_f64[1] = local_268.Scale3D.ZW.m128d_f64[1];
              local_448.Scale3D.ZW.m128d_f64[0] = local_268.Scale3D.ZW.m128d_f64[0];
            }
            fVar70 = (this->RetargetingSettings).TargetMaximum;
            fVar60 = (this->RetargetingSettings).TargetMinimum;
            fVar3 = (this->RetargetingSettings).SourceMaximum;
            fVar4 = (this->RetargetingSettings).SourceMinimum;
            bVar32 = (this->RetargetingSettings).bUseAbsoluteAngle;
            dVar71 = (this->RetargetingSettings).TwistAxis.field0_0x0._s_0.X;
            dVar16 = (this->RetargetingSettings).TwistAxis.field0_0x0._s_0.Y;
            EVar8 = (this->RetargetingSettings).RotationComponent;
            dVar54 = (this->RetargetingSettings).TwistAxis.field0_0x0._s_0.Z;
            fVar5 = (this->RetargetingSettings).EasingWeight;
            bVar9 = (this->RetargetingSettings).bFlipEasing;
            EVar10 = (this->RetargetingSettings).EasingType;
            local_3e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_3e8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_3e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_3e8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_3e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_3e8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_3e8.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_3e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_3e8.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_3e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_3e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_3e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_3e8,&(this->RetargetingSettings).Target,&local_448);
            local_388.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_388.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_388.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_388.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_388.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_388.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_388.Translation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_388.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_388.Translation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_388.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            local_388.Scale3D.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
            local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_388.Scale3D.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      (&local_388,&(this->RetargetingSettings).Source,&local_448);
            local_8b8._s_0.X = dVar71;
            local_8b8._s_0.Y = dVar16;
            local_8b8._s_0.Z = dVar54;
            local_858.X._0_4_ = uVar77;
            local_858.X._4_4_ = uVar78;
            local_858.Y._0_4_ = uVar79;
            local_858.Y._4_4_ = uVar80;
            local_858.Z._0_4_ = uVar73;
            local_858.Z._4_4_ = uVar74;
            local_858.W._0_4_ = uVar75;
            local_858.W._4_4_ = uVar76;
            CommonAnimationLibrary::RetargetSingleRotation
                      (&local_838,&local_858,&local_388,&local_3e8,
                       &(this->RetargetingSettings).CustomCurve,EVar10,bVar9,fVar5,EVar8,
                       (TVector<double> *)&local_8b8._s_0,bVar32,fVar4,fVar3,fVar60,fVar70);
            local_a28.Rotation.XY.m128d_f64[0] = local_838.X;
            local_a28.Rotation.XY.m128d_f64[1] = local_838.Y;
            local_a28.Rotation.ZW.m128d_f64[0] = local_838.Z;
            local_a28.Rotation.ZW.m128d_f64[1] = local_838.W;
            param_1 = (FComponentSpacePoseContext *)local_b28.Data;
            uVar59 = local_ba0;
          }
          GetComponentSpaceTransformFromSimSpace
                    (this,&local_208,this->SimulationSpace,param_1,&local_a28,
                     (TTransform<double> *)(param_1->_padding_ + 0x20),
                     (TTransform<double> *)(param_1->_padding_ + 0xe0));
          FVar28 = local_a90;
          local_4b8 = local_b78._0_4_;
          local_a28.Rotation.XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
          local_a28.Rotation.XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
          local_a28.Rotation.ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
          local_a28.Rotation.ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
          local_a28.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
          local_a28.Translation.ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
          local_a28.Scale3D.XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
          local_a28.Scale3D.XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
          local_a28.Scale3D.ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
          local_a28.Scale3D.ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
          local_4a8 = local_208.Rotation.XY.m128d_f64[0];
          pFStack_4a0 = (FScriptContainerElement *)local_208.Rotation.XY.m128d_f64[1];
          local_498 = local_208.Rotation.ZW.m128d_f64[0];
          pFStack_490 = (FScriptContainerElement *)local_208.Rotation.ZW.m128d_f64[1];
          local_488 = local_208.Translation.XY.m128d_f64[0];
          dStack_480 = local_208.Translation.XY.m128d_f64[1];
          local_478 = local_208.Translation.ZW.m128d_f64[0];
          dStack_470 = local_208.Translation.ZW.m128d_f64[1];
          local_468 = local_208.Scale3D.XY.m128d_f64[0];
          dStack_460 = local_208.Scale3D.XY.m128d_f64[1];
          local_458 = local_208.Scale3D.ZW.m128d_f64[0];
          dStack_450 = local_208.Scale3D.ZW.m128d_f64[1];
          if (((*(undefined4 **)local_a90 <= &local_4b8) &&
              (&local_4b8 <
               *(undefined4 **)local_a90 + (longlong)*(int *)((longlong)local_a90 + 0xc) * 0x1c)) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar32)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          iVar33 = *(int *)((longlong)FVar28 + 8);
          if (iVar33 == *(int *)((longlong)FVar28 + 0xc)) {
            iVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1070,(ForAnyElementType *)FVar28,(int *)((longlong)FVar28 + 0xc));
          }
          *(int *)((longlong)FVar28 + 8) = iVar33 + 1;
          lVar47 = (longlong)iVar33 * 0x70;
          lVar38 = *(longlong *)FVar28;
          *(undefined8 *)(lVar47 + lVar38) = CONCAT44(uStack_4b4,local_4b8);
          ((undefined8 *)(lVar47 + lVar38))[1] = uStack_4b0;
          pdVar11 = (double *)(lVar47 + 0x10 + lVar38);
          *pdVar11 = local_4a8;
          pdVar11[1] = (double)pFStack_4a0;
          pdVar11 = (double *)(lVar47 + 0x20 + lVar38);
          *pdVar11 = local_498;
          pdVar11[1] = (double)pFStack_490;
          pdVar11 = (double *)(lVar47 + 0x30 + lVar38);
          *pdVar11 = local_488;
          pdVar11[1] = dStack_480;
          pdVar11 = (double *)(lVar47 + 0x40 + lVar38);
          *pdVar11 = local_478;
          pdVar11[1] = dStack_470;
          pdVar11 = (double *)(lVar47 + 0x50 + lVar38);
          *pdVar11 = local_468;
          pdVar11[1] = dStack_460;
          pdVar11 = (double *)(lVar47 + 0x60 + lVar38);
          *pdVar11 = local_458;
          pdVar11[1] = dStack_450;
        }
        local_ba0 = uVar59 + 1;
        local_b68 = local_b68 + 0x18;
        local_b20 = local_b20 + 0xd0;
        lVar46 = lVar46 + 0x400;
        FVar50 = (FName)local_b88._8_8_;
        FVar51 = (FName)local_b78._8_8_;
      } while ((int)local_ba0 < (this->Bodies).ArrayNum);
    }
    if (bVar22) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar31) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar30) {
      FThreadStats::AddMessage(FVar50,CycleScopeEnd);
    }
  }
  this->LastSimSpace = this->SimulationSpace;
  lVar46 = param_1->_padding_;
  dVar54 = *(double *)(lVar46 + 0x28);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar46 + 0x20);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x38);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x30);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x48);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar46 + 0x40);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x58);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x50);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x68);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar46 + 0x60);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x78);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x70);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar54;
  lVar46 = param_1->_padding_;
  dVar54 = *(double *)(lVar46 + 0xe8);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar46 + 0xe0);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0xf8);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0xf0);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x108);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar46 + 0x100);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x118);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x110);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x128);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar46 + 0x120);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar54;
  dVar54 = *(double *)(lVar46 + 0x138);
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar46 + 0x130);
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar54;
LAB_146429503:
  FCsvProfiler::EndStat("AnimDynamicsEval",local_b50);
  if (bVar23) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar29) {
    FThreadStats::AddMessage(FVar51,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// FindChainBoneNames @ 146440a80

void __thiscall
FAnimNode_AnimDynamics::FindChainBoneNames
          (FAnimNode_AnimDynamics *this,FReferenceSkeleton *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FReferenceSkeleton *local_res8 [4];
  code *local_18;
  FReferenceSkeleton **local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>,FName,FName>
             ::Call;
  local_res8[0] = param_1;
  FindChainBones((this->BoundBone).BoneName,(this->ChainEnd).BoneName,
                 (TFunctionRef<FName___cdecl(FName)> *)&local_18,param_2);
  return;
}

// GatherDebugData @ 146442010

void __thiscall
FAnimNode_AnimDynamics::GatherDebugData(FAnimNode_AnimDynamics *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48 [3];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_AnimDynamics::GatherDebugData");
  FInputScaleBias::ApplyTo((FInputScaleBias *)&this->field_0x30,*(float *)&this->field_0x2c);
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics,(UObject *)pUVar1,
                         L"AnimNode_AnimDynamics");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_AnimDynamics.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_58,L"(Alpha: %.1f%%)");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48[0].Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48[0].Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48[0].Data.ArrayNum,0,(ForAnyElementType *)&local_58,
               local_48[0].Data.ArrayNum,&local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetBodyComponentSpaceTransform @ 1464481c0

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
FAnimNode_AnimDynamics::GetBodyComponentSpaceTransform
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          FAnimPhysRigidBody *param_1,USkeletalMeshComponent *param_2)

{
  AnimPhysSimSpaceType AVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  TTransform<double> *pTVar9;
  undefined1 auStack_228 [32];
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  dVar6 = _UNK_150689688;
  dVar5 = ___xmm_3ff00000000000003ff0000000000000;
  dVar4 = _UNK_150689518;
  dVar3 = ___xmm_00000000000000003ff0000000000000;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_228;
  local_148.Rotation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_148.Rotation.XY.m128d_f64[1] = (double)param_1->_padding_;
  local_148.Rotation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  local_148.Rotation.ZW.m128d_f64[1] = (double)param_1->_padding_;
  local_148.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
  AVar1 = this->SimulationSpace;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_148.Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
  local_148.Translation.XY.m128d_f64[1] = (double)param_1->_padding_;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                       ,0x5b9,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TTransform<double> *)(*pcVar2)();
      return pTVar9;
    }
  }
  else {
    if (AVar1 == RootRelative) {
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_2,&local_e8,0);
      local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_208,&local_148,&local_e8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_208.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_208.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_208.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_208.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_208.Translation.ZW.m128d_f64[1];
    }
    else {
      if (AVar1 != BoneRelative) {
        return __return_storage_ptr__;
      }
      iVar8 = USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)param_2,(this->RelativeSpaceBone).BoneName);
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_2,&local_88,iVar8);
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,&local_88);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
      local_208.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
      local_208.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
      local_208.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
      local_208.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
    }
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_208.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_208.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_208.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_208.Scale3D.ZW.m128d_f64[1];
  }
  return __return_storage_ptr__;
}

// GetBoneTransformInSimSpace @ 146448600

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetBoneTransformInSimSpace
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          FComponentSpacePoseContext *param_1,FCompactPoseBoneIndex *param_2)

{
  TTransform<double> *pTVar1;
  TTransform<double> local_68;
  
  pTVar1 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,*param_2);
  local_68.Rotation.XY.m128d_f64[0] = (pTVar1->Rotation).XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (pTVar1->Rotation).XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (pTVar1->Rotation).ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (pTVar1->Rotation).ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (pTVar1->Translation).XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (pTVar1->Translation).XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (pTVar1->Translation).ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (pTVar1->Translation).ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (pTVar1->Scale3D).XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (pTVar1->Scale3D).XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (pTVar1->Scale3D).ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (pTVar1->Scale3D).ZW.m128d_f64[1];
  GetSimSpaceTransformFromComponentSpace
            (this,__return_storage_ptr__,this->SimulationSpace,param_1,&local_68);
  return __return_storage_ptr__;
}

// GetComponentSpaceTransformFromSimSpace @ 146448f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetComponentSpaceTransformFromSimSpace
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          AnimPhysSimSpaceType param_1,FComponentSpacePoseContext *param_2,
          TTransform<double> *param_3,TTransform<double> *param_4,TTransform<double> *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  FCompactPoseBoneIndex FVar6;
  int iVar7;
  undefined4 extraout_var;
  TTransform<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar3 = (param_3->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar3;
  dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  pTVar4 = CVarDisableWorldSpace.Ref;
  if (param_1 == World) {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
      param_3 = (TTransform<double> *)0x0;
    }
    else {
      param_3 = (TTransform<double> *)&DAT_00000001;
    }
    if (pTVar4->ShadowedValue[(longlong)&param_3->Rotation] != false) {
      param_1 = Component;
    }
  }
  FVar6 = (FCompactPoseBoneIndex)0x0;
  if (param_1 == Actor) {
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_108,__return_storage_ptr__,param_5);
    UE::Math::TTransform<double>::SetToRelativeTransform(&local_108,param_4);
  }
  else {
    if (param_1 == World) {
      auVar11._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_4->Scale3D).XY.m128d_f64);
      auVar11._8_4_ = _UNK_15061cc88 & *(uint *)((param_4->Scale3D).XY.m128d_f64 + 1);
      auVar11._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc);
      lVar10 = -(ulonglong)
                ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                (double)CONCAT44(_UNK_15061cc8c &
                                 *(uint *)((longlong)(param_4->Scale3D).ZW.m128d_f64 + 0xc),
                                 _UNK_15061cc88 & *(uint *)((param_4->Scale3D).ZW.m128d_f64 + 1)));
      auVar2._8_4_ = (int)lVar10;
      auVar2._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                      (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                       *(uint *)((longlong)(param_4->Scale3D).ZW.m128d_f64 + 4),
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                       *(uint *)(param_4->Scale3D).ZW.m128d_f64));
      auVar2._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      uVar9 = movmskpd(0,auVar2);
      lVar10 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar11._8_8_);
      auVar1._8_4_ = (int)lVar10;
      auVar1._0_8_ = -(ulonglong)
                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar11._0_8_);
      auVar1._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
      iVar7 = movmskpd((int)param_3,auVar1);
      if ((uVar9 & 0x3fffffff) != 0 || iVar7 != 0) {
        UE::Math::TTransform<double>::InverseFast(param_4,&local_108);
        UE::Math::TTransform<double>::Multiply
                  (__return_storage_ptr__,__return_storage_ptr__,&local_108);
        return __return_storage_ptr__;
      }
      local_108.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_108.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_108.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_108.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_108.Scale3D.XY.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_108.Scale3D.XY.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_108.Scale3D.ZW.m128d_f64[0] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_108.Scale3D.ZW.m128d_f64[1] =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,__return_storage_ptr__,&local_108);
      return __return_storage_ptr__;
    }
    if (param_1 != RootRelative) {
      if (param_1 != BoneRelative) {
        return __return_storage_ptr__;
      }
      bVar5 = FBoneReference::IsValidToEvaluate
                        (&this->RelativeSpaceBone,
                         *(FBoneContainer **)&(param_2->Pose).Pose.field_0x10);
      if (!bVar5) {
        return __return_storage_ptr__;
      }
      FVar6 = FBoneReference::GetCompactPoseIndex
                        (&this->RelativeSpaceBone,(FBoneContainer *)local_118);
      FVar6 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar6);
    }
    pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_2->Pose,FVar6);
    local_a8.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (pTVar8->Rotation).XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (pTVar8->Scale3D).XY.m128d_f64[1];
    local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_108,__return_storage_ptr__,&local_a8);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
  *(double *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
       local_108.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// GetComponentSpaceTransformFromSimSpace @ 146449240

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetComponentSpaceTransformFromSimSpace
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          AnimPhysSimSpaceType param_1,FComponentSpacePoseContext *param_2,
          TTransform<double> *param_3)

{
  GetComponentSpaceTransformFromSimSpace
            (this,__return_storage_ptr__,param_1,param_2,param_3,
             (TTransform<double> *)(param_2->_padding_ + 0x20),
             (TTransform<double> *)(param_2->_padding_ + 0xe0));
  return __return_storage_ptr__;
}

// GetComponentSpaceTransformFromSimSpace @ 146449280

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

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetComponentSpaceTransformFromSimSpace
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          AnimPhysSimSpaceType param_1,USkeletalMeshComponent *param_2,TTransform<double> *param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  TTransform<double> *pTVar5;
  undefined1 auStack_1c8 [32];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  dVar2 = (param_3->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (param_3->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  if (param_2 == (USkeletalMeshComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                       ,0x5b9,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTransform<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  else {
    if (param_1 == RootRelative) {
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_2,&local_e8,0);
      local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_1a8,param_3,&local_e8);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
    }
    else {
      if (param_1 != BoneRelative) {
        return __return_storage_ptr__;
      }
      iVar4 = USkinnedMeshComponent::GetBoneIndex
                        ((USkinnedMeshComponent *)param_2,(this->RelativeSpaceBone).BoneName);
      USkinnedMeshComponent::GetBoneTransform((USkinnedMeshComponent *)param_2,&local_88,iVar4);
      local_148.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_148.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_148.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_148.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_148.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_148.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_148.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_148.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_148,param_3,&local_88);
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
      local_1a8.Scale3D.XY.m128d_f64[0]._0_4_ = local_148.Scale3D.XY.m128d_f64[0]._0_4_;
      local_1a8.Scale3D.XY.m128d_f64[0]._4_4_ = local_148.Scale3D.XY.m128d_f64[0]._4_4_;
      local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = local_148.Scale3D.XY.m128d_f64[1]._0_4_;
      local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = local_148.Scale3D.XY.m128d_f64[1]._4_4_;
      local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_ = local_148.Scale3D.ZW.m128d_f64[0]._0_4_;
      local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_ = local_148.Scale3D.ZW.m128d_f64[0]._4_4_;
      local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = local_148.Scale3D.ZW.m128d_f64[1]._0_4_;
      local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = local_148.Scale3D.ZW.m128d_f64[1]._4_4_;
    }
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         local_1a8.Scale3D.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) =
         local_1a8.Scale3D.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).XY.m128d_f64 + 1) =
         local_1a8.Scale3D.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 0xc) =
         local_1a8.Scale3D.XY.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         local_1a8.Scale3D.ZW.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
         local_1a8.Scale3D.ZW.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
         local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
         local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  return __return_storage_ptr__;
}

// GetLODThreshold @ 14644b3a0

int __thiscall FAnimNode_AnimDynamics::GetLODThreshold(FAnimNode_AnimDynamics *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = CVarLODThreshold.Ref;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar3 = CVarLODThreshold.Ref;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != -1) {
    if (*(int *)&this->field_0x20 == -1) {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar6 = 0;
      }
      return *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
    if (*(int *)&this->field_0x20 < iVar1) {
      iVar1 = *(int *)&this->field_0x20;
    }
    return iVar1;
  }
  return *(int *)&this->field_0x20;
}

// GetNumBodies @ 14644bea0

int __thiscall FAnimNode_AnimDynamics::GetNumBodies(FAnimNode_AnimDynamics *this)

{
  return (this->Bodies).ArrayNum;
}

// GetPhysBody @ 14644c310

FAnimPhysRigidBody * __thiscall
FAnimNode_AnimDynamics::GetPhysBody(FAnimNode_AnimDynamics *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimPhysRigidBody *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Bodies).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnimPhysRigidBody *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FAnimPhysRigidBody *)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 0x400);
}

// GetSimSpaceTransformFromComponentSpace @ 14644eeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetSimSpaceTransformFromComponentSpace
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          AnimPhysSimSpaceType param_1,FComponentSpacePoseContext *param_2,
          TTransform<double> *param_3)

{
  double dVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  FCompactPoseBoneIndex FVar4;
  longlong lVar5;
  undefined4 extraout_var;
  TTransform<double> *pTVar6;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar1 = (param_3->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_3->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  pTVar2 = CVarDisableWorldSpace.Ref;
  FVar4 = (FCompactPoseBoneIndex)0x0;
  if (param_1 != World) goto LAB_14644ef46;
  bVar3 = IsInParallelGameThread();
  if (bVar3) {
LAB_14644ef3b:
    lVar5 = 0;
  }
  else {
    bVar3 = IsInGameThread();
    lVar5 = 1;
    if (bVar3) goto LAB_14644ef3b;
  }
  if (pTVar2->ShadowedValue[lVar5] != false) {
    param_1 = Component;
  }
LAB_14644ef46:
  if (param_1 == Actor) {
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] =
         (FScriptContainerElement *)(double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,__return_storage_ptr__,(TTransform<double> *)(param_2->_padding_ + 0x20));
    UE::Math::TTransform<double>::SetToRelativeTransform
              (&local_108,(TTransform<double> *)(param_2->_padding_ + 0xe0));
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    *(double *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
         local_108.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  }
  else {
    if (param_1 == World) {
      UE::Math::TTransform<double>::Multiply
                (__return_storage_ptr__,__return_storage_ptr__,
                 (TTransform<double> *)(param_2->_padding_ + 0x20));
      return __return_storage_ptr__;
    }
    if (param_1 != RootRelative) {
      if (param_1 != BoneRelative) {
        return __return_storage_ptr__;
      }
      bVar3 = FBoneReference::IsValidToEvaluate
                        (&this->RelativeSpaceBone,
                         *(FBoneContainer **)&(param_2->Pose).Pose.field_0x10);
      if (!bVar3) {
        return __return_storage_ptr__;
      }
      FVar4 = FBoneReference::GetCompactPoseIndex
                        (&this->RelativeSpaceBone,(FBoneContainer *)local_118);
      FVar4 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar4);
    }
    pTVar6 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_2->Pose,FVar4);
    local_108.Rotation.XY.m128d_f64 = *&(pTVar6->Rotation).XY.m128d_f64;
    local_108.Rotation.ZW.m128d_f64 = *&(pTVar6->Rotation).ZW.m128d_f64;
    local_108.Translation.XY.m128d_f64 = *&(pTVar6->Translation).XY.m128d_f64;
    local_108.Translation.ZW.m128d_f64 = *&(pTVar6->Translation).ZW.m128d_f64;
    local_108.Scale3D.XY.m128d_f64 = *&(pTVar6->Scale3D).XY.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64 = *&(pTVar6->Scale3D).ZW.m128d_f64;
    pTVar6 = UE::Math::TTransform<double>::GetRelativeTransform
                       (__return_storage_ptr__,&local_a8,&local_108);
    dVar1 = (pTVar6->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar6->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar6->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar6->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar6->Scale3D).XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    local_108.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Scale3D).ZW.m128d_f64;
    local_108.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(pTVar6->Scale3D).ZW.m128d_f64 + 4);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = *(int *)((pTVar6->Scale3D).ZW.m128d_f64 + 1);
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(int *)((longlong)(pTVar6->Scale3D).ZW.m128d_f64 + 0xc);
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(int *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(int *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// GetSimToWorldSpaceTransform @ 14644f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TTransform<double> * __thiscall
FAnimNode_AnimDynamics::GetSimToWorldSpaceTransform
          (FAnimNode_AnimDynamics *this,TTransform<double> *__return_storage_ptr__,
          AnimPhysSimSpaceType param_1,FComponentSpacePoseContext *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  TConsoleVariableData<bool> *pTVar10;
  bool bVar11;
  FCompactPoseBoneIndex FVar12;
  longlong lVar13;
  undefined4 extraout_var;
  TTransform<double> *pTVar14;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  pTVar10 = CVarDisableWorldSpace.Ref;
  bVar11 = IsInParallelGameThread();
  if (!bVar11) {
    bVar11 = IsInGameThread();
    lVar13 = 1;
    if (!bVar11) goto LAB_14644f1ad;
  }
  lVar13 = 0;
LAB_14644f1ad:
  FVar12 = (FCompactPoseBoneIndex)0x0;
  if ((pTVar10->ShadowedValue[lVar13] != false) && (param_1 == World)) {
    param_1 = Component;
  }
  if (param_1 == Component) {
    lVar13 = param_2->_padding_;
    dVar9 = *(double *)(lVar13 + 0x28);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar13 + 0x20);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x38);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(lVar13 + 0x30);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x48);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar13 + 0x40);
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x58);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(lVar13 + 0x50);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x68);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar13 + 0x60);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    local_108.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(lVar13 + 0x70);
    local_108.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(lVar13 + 0x74);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = *(int *)(lVar13 + 0x78);
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = *(int *)(lVar13 + 0x7c);
  }
  else if (param_1 == Actor) {
    lVar13 = param_2->_padding_;
    dVar9 = *(double *)(lVar13 + 0xe8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar13 + 0xe0);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0xf8);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(lVar13 + 0xf0);
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x108);
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar13 + 0x100);
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x118);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(lVar13 + 0x110);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    dVar9 = *(double *)(lVar13 + 0x128);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar13 + 0x120);
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    local_108.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(lVar13 + 0x130);
    local_108.Scale3D.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)(lVar13 + 0x134);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ = *(int *)(lVar13 + 0x138);
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ = *(int *)(lVar13 + 0x13c);
  }
  else {
    if (param_1 != RootRelative) {
      if (param_1 != BoneRelative) {
        return __return_storage_ptr__;
      }
      bVar11 = FBoneReference::IsValidToEvaluate
                         (&this->RelativeSpaceBone,
                          *(FBoneContainer **)&(param_2->Pose).Pose.field_0x10);
      if (!bVar11) {
        return __return_storage_ptr__;
      }
      FVar12 = FBoneReference::GetCompactPoseIndex
                         (&this->RelativeSpaceBone,(FBoneContainer *)local_118);
      FVar12 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar12);
    }
    pTVar14 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_2->Pose,FVar12);
    local_a8.Rotation.XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = (pTVar14->Rotation).XY.m128d_f64[1];
    local_a8.Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (pTVar14->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (pTVar14->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (pTVar14->Translation).ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = (pTVar14->Scale3D).XY.m128d_f64[1];
    local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar14->Scale3D).ZW.m128d_f64[1];
    local_108.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_108.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_108.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_108.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_108.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_108.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_108.Scale3D.ZW.m128d_f64[0] =
         (FScriptContainerElement *)(double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_108,(TTransform<double> *)(param_2->_padding_ + 0x20),&local_a8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
    *(double *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
         local_108.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) =
       local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(int *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) =
       local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(int *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) =
       local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

// HasPreUpdate @ 146450ac0

bool __thiscall FAnimNode_AnimDynamics::HasPreUpdate(FAnimNode_AnimDynamics *this)

{
  void *_Src;
  TConsoleVariableData<int> *pTVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<FString> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  pTVar1 = CVarEnableDynamics.Ref;
  lVar6 = 0;
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_146450afd:
    lVar5 = lVar6;
  }
  else {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (bVar4) goto LAB_146450afd;
  }
  pTVar2 = CVarEnableWind.Ref;
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) != 1) {
    return false;
  }
  bVar4 = IsInParallelGameThread();
  if (bVar4) {
LAB_146450b26:
    lVar5 = lVar6;
  }
  else {
    bVar4 = IsInGameThread();
    lVar5 = 4;
    if (bVar4) goto LAB_146450b26;
  }
  pTVar1 = CVarShowDebug.Ref;
  if ((*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == 1) &&
     (((bool)this->bEnableWind || (this->bWindWasEnabled != 0)))) {
LAB_146450bf5:
    bVar4 = true;
  }
  else {
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), lVar5 = 4, bVar4)) {
      lVar5 = lVar6;
    }
    pTVar3 = CVarDebugBone.Ref;
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) == 1) {
      bVar4 = IsInParallelGameThread();
      if (bVar4) {
LAB_146450b8c:
        lVar5 = lVar6;
      }
      else {
        bVar4 = IsInGameThread();
        lVar5 = 0x10;
        if (bVar4) goto LAB_146450b8c;
      }
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = *(int *)((longlong)&pTVar3->ShadowedValue[0].Data.ArrayNum + lVar5);
      lVar6 = (longlong)local_10;
      _Src = *(void **)((longlong)&pTVar3->ShadowedValue[0].Data.AllocatorInstance.Data + lVar5);
      if (local_10 == 0) {
        local_c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_10,0,&local_18,local_10,&local_c);
        memcpy(local_18.Data,_Src,lVar6 * 2);
      }
      lVar6 = 1;
      if (1 < local_10) goto LAB_146450bf5;
    }
    bVar4 = false;
  }
  if ((lVar6 != 0) && (local_18.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data);
  }
  return bVar4;
}

// InitPhysics @ 146451230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_AnimDynamics::InitPhysics
          (FAnimNode_AnimDynamics *this,FComponentSpacePoseContext *param_1)

{
  int *piVar1;
  TArray<FAnimConstraintOffsetPair,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAnimPhysLinkedBody,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined1 *puVar7;
  float fVar8;
  AnimPhysSimSpaceType AVar9;
  FBoneContainer *pFVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  longlong lVar22;
  FName FVar23;
  double dVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  bool bVar29;
  bool bVar30;
  TConsoleVariableData<int> *pTVar31;
  TConsoleVariableData<float> *pTVar32;
  FComponentSpacePoseContext *pFVar33;
  FBoneReference *pFVar34;
  bool bVar35;
  undefined1 uVar36;
  uint uVar37;
  FCompactPoseBoneIndex FVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  TVector<double>_u_0 *pTVar42;
  longlong lVar43;
  undefined4 extraout_var;
  TTransform<double> *pTVar44;
  FAnimPhysShape *pFVar45;
  TVector<double> *pTVar46;
  UPhysicsSettings *pUVar47;
  ulonglong uVar48;
  uint uVar49;
  FAnimPhysRigidBody *this_00;
  FBoneReference *this_01;
  FScriptContainerElement *pFVar50;
  FScriptContainerElement *pFVar51;
  FScriptContainerElement *pFVar52;
  uint uVar53;
  uint uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  FWeakObjectPtr FVar66;
  undefined1 auVar65 [16];
  double dVar67;
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar76;
  double dVar74;
  double dVar75;
  uint uVar77;
  uint uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auStackY_bf8 [32];
  undefined1 local_ba8;
  undefined1 local_ba7;
  undefined1 local_ba6 [6];
  TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> local_ba0;
  int local_b90;
  int local_b8c;
  FScriptContainerElement *local_b88;
  FComponentSpacePoseContext *local_b80;
  uint local_b78;
  double *local_b70;
  double local_b68;
  double local_b60;
  ForElementType<unsigned_int> local_b58;
  ForElementType<unsigned_int> FStack_b50;
  double local_b48;
  undefined1 local_b38 [16];
  double local_b28;
  FBoneReference *local_b20;
  TTransform<double> local_b18;
  FWeakObjectPtr local_ab8;
  FReferenceSkeleton *pFStack_ab0;
  ForAnyElementType local_aa8;
  double local_aa0;
  ForAnyElementType FStack_a98;
  double local_a90;
  double dStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  double local_a70;
  double dStack_a68;
  double local_a60;
  uint uStack_a58;
  uint uStack_a54;
  uint uStack_a50;
  uint uStack_a4c;
  FSharedReferencer<1> FStack_a48;
  TVector<double>_u_0 local_a40;
  TVector<double>_u_0 local_a28;
  TVector<double>_u_0 local_a08;
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [16];
  double local_9c8;
  double dStack_9c0;
  undefined1 local_9b8 [16];
  double local_9a8;
  double dStack_9a0;
  double local_998;
  double dStack_990;
  TVector<double>_u_0 local_988;
  TVector<double>_u_0 local_968;
  TVector<double>_u_0 local_948;
  TVector<double>_u_0 local_930;
  TQuat<double> local_918;
  TQuat<double> local_8f8;
  TQuat<double> local_8d8;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double local_8a0;
  double dStack_898;
  double local_890;
  double local_888;
  double dStack_880;
  double local_878;
  undefined1 local_870 [16];
  double local_860;
  double local_858;
  double dStack_850;
  double local_848;
  undefined1 local_840 [16];
  double local_830;
  double local_828;
  double dStack_820;
  double local_818;
  double local_810;
  double dStack_808;
  double local_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double local_7e0;
  double dStack_7d8;
  double local_7d0;
  TTransform<double> local_7c8;
  FAnimPhysShape local_768;
  FAnimPhysShape local_728;
  TVector<double> local_6e8;
  TVector<double> local_6d0;
  TVector<double> local_6b8;
  TVector<double> local_6a0;
  TVector<double> local_688;
  TTransform<double> local_668;
  undefined1 local_608 [560];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  bool local_338;
  bool local_308;
  float local_304;
  bool local_300;
  float local_2fc;
  float local_2f8;
  bool local_2f4;
  TVector<double>_u_0 local_2f0 [7];
  AnimPhysCollisionType local_240;
  float local_23c;
  ForAnyElementType local_238;
  int local_230;
  FName local_228;
  longlong lStack_220;
  FScriptContainerElement *local_218;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  pTVar31 = CVarEnableScaling.Ref;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_bf8;
  local_b80 = param_1;
  bVar35 = IsInParallelGameThread();
  if ((bVar35) || (bVar35 = IsInGameThread(), bVar35)) {
    lVar43 = 0;
  }
  else {
    lVar43 = 4;
  }
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar62 = _UNK_150689688;
  pFVar52 = ___xmm_3ff00000000000003ff0000000000000;
  dVar24 = _UNK_150689518;
  pFVar50 = ___xmm_00000000000000003ff0000000000000;
  iVar39 = *(int *)((longlong)pTVar31->ShadowedValue + lVar43);
  local_b8c = iVar39;
  if (this->InitTeleportType == TeleportPhysics) {
    (this->ExternalForce).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->ExternalForce).field0_0x0._s_0.Y = (double)uVar25;
    (this->ExternalForce).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar51 = (this->ActiveBoneIndices).AllocatorInstance.Data;
    iVar39 = (this->ActiveBoneIndices).ArrayNum;
    pFVar12 = pFVar51 + (longlong)iVar39 * 4;
    while( true ) {
      if ((this->ActiveBoneIndices).ArrayNum != iVar39) {
        local_ba6[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_ba6);
      }
      param_1 = local_b80;
      if (pFVar51 == pFVar12) break;
      uVar37 = *(uint *)pFVar51;
      uVar49 = 0;
      if ((int)uVar37 < (this->Bodies).ArrayNum) {
        uVar49 = ~uVar37 >> 0x1f;
      }
      if ((uVar49 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar49 = *(uint *)pFVar51;
      pFVar13 = (this->Bodies).AllocatorInstance.Data;
      lVar43 = (longlong)(int)uVar37 * 0x400;
      uVar37 = 0;
      if ((int)uVar49 < (this->PhysicsBodyDefinitions).ArrayNum) {
        uVar37 = ~uVar49 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      dVar69 = *(double *)(pFVar13 + lVar43 + 0x28);
      dVar74 = *(double *)(pFVar13 + lVar43 + 0x30);
      dVar18 = *(double *)(pFVar13 + lVar43 + 0x20);
      pFVar14 = (this->PhysicsBodyDefinitions).AllocatorInstance.Data;
      dVar19 = *(double *)(pFVar13 + lVar43 + 0x38);
      local_b18.Rotation.ZW.m128d_f64[0] = *(double *)(pFVar13 + lVar43 + 0x30);
      local_b18.Rotation.ZW.m128d_f64[1] =
           *(double *)((FWeakObjectPtr *)(pFVar13 + lVar43 + 0x30) + 1);
      local_b18.Scale3D.XY.m128d_f64[0] = (double)pFVar52;
      local_b18.Scale3D.XY.m128d_f64[1] = dVar62;
      local_b18.Scale3D.ZW.m128d_f64[0] = (double)pFVar50;
      local_b18.Scale3D.ZW.m128d_f64[1] = dVar24;
      auVar58 = *(undefined1 (*) [16])(pFVar14 + (longlong)(int)uVar49 * 0xd0 + 0x28);
      local_b48 = *(double *)(pFVar14 + (longlong)(int)uVar49 * 0xd0 + 0x38);
      dVar16 = auVar58._0_8_;
      auVar20._4_8_ = unaff_XMM7_Qb;
      auVar20._0_4_ = auVar58._4_4_;
      auVar68._0_8_ = auVar20._0_8_ << 0x20;
      auVar68._8_4_ = auVar58._8_4_;
      auVar68._12_4_ = auVar58._12_4_;
      dVar70 = auVar68._8_8_;
      dVar67 = local_b48 * dVar69 - dVar70 * dVar74;
      dVar67 = dVar67 + dVar67;
      dVar17 = dVar16 * dVar74 - local_b48 * dVar18;
      dVar17 = dVar17 + dVar17;
      dVar75 = dVar70 * dVar18 - dVar16 * dVar69;
      local_b18.Rotation.XY.m128d_f64[0] = *(double *)(pFVar13 + lVar43 + 0x20);
      local_b18.Rotation.XY.m128d_f64[1] =
           *(double *)((ForElementType<unsigned_int> *)(pFVar13 + lVar43 + 0x20) + 1);
      dVar75 = dVar75 + dVar75;
      local_b18.Translation.XY.m128d_f64[0] =
           *(double *)(pFVar13 + lVar43) -
           ((dVar75 * dVar69 - dVar17 * dVar74) + dVar67 * dVar19 + dVar16);
      local_b18.Translation.XY.m128d_f64[1] =
           *(double *)(pFVar13 + lVar43 + 8) -
           ((dVar67 * dVar74 - dVar75 * dVar18) + dVar17 * dVar19 + dVar70);
      local_b18.Translation.ZW.m128d_f64[0] =
           *(double *)(pFVar13 + lVar43 + 0x10) -
           ((dVar17 * dVar18 - dVar67 * dVar69) + dVar75 * dVar19 + local_b48);
      local_b18.Translation.ZW.m128d_f64[1] = 0.0;
      pTVar44 = GetComponentSpaceTransformFromSimSpace
                          (this,&local_1a8,this->SimulationSpace,local_b80,&local_b18,
                           &this->PreviousCompWorldSpaceTM,&this->PreviousActorWorldSpaceTM);
      local_b18.Rotation.XY.m128d_f64[0] = (pTVar44->Rotation).XY.m128d_f64[0];
      local_b18.Rotation.XY.m128d_f64[1] = (pTVar44->Rotation).XY.m128d_f64[1];
      local_b18.Rotation.ZW.m128d_f64[0] = (pTVar44->Rotation).ZW.m128d_f64[0];
      local_b18.Rotation.ZW.m128d_f64[1] = *(double *)((pTVar44->Rotation).ZW.m128d_f64 + 1);
      local_b18.Translation.XY.m128d_f64[0] = (pTVar44->Translation).XY.m128d_f64[0];
      local_b18.Translation.XY.m128d_f64[1] = (pTVar44->Translation).XY.m128d_f64[1];
      local_b18.Translation.ZW.m128d_f64[0] = (pTVar44->Translation).ZW.m128d_f64[0];
      local_b18.Translation.ZW.m128d_f64[1] = (pTVar44->Translation).ZW.m128d_f64[1];
      local_b18.Scale3D.XY.m128d_f64[0] = (pTVar44->Scale3D).XY.m128d_f64[0];
      local_b18.Scale3D.XY.m128d_f64[1] = (pTVar44->Scale3D).XY.m128d_f64[1];
      local_b18.Scale3D.ZW.m128d_f64[0] = (pTVar44->Scale3D).ZW.m128d_f64[0];
      local_b18.Scale3D.ZW.m128d_f64[1] = (pTVar44->Scale3D).ZW.m128d_f64[1];
      pTVar44 = GetSimSpaceTransformFromComponentSpace
                          (this,&local_148,this->SimulationSpace,local_b80,&local_b18);
      local_b18.Translation.XY.m128d_f64[0] = (pTVar44->Translation).XY.m128d_f64[0];
      local_b18.Translation.XY.m128d_f64[1] = (pTVar44->Translation).XY.m128d_f64[1];
      local_b18.Translation.ZW.m128d_f64[0] = (pTVar44->Translation).ZW.m128d_f64[0];
      local_b18.Translation.ZW.m128d_f64[1] = (pTVar44->Translation).ZW.m128d_f64[1];
      local_b58 = (ForElementType<unsigned_int>)(pTVar44->Rotation).XY.m128d_f64[0];
      FStack_b50 = *(ForElementType<unsigned_int> *)((pTVar44->Rotation).XY.m128d_f64 + 1);
      local_b18.Rotation.ZW.m128d_f64[0] = (pTVar44->Rotation).ZW.m128d_f64[0];
      FVar66 = *(FWeakObjectPtr *)((pTVar44->Rotation).ZW.m128d_f64 + 1);
      local_b18.Scale3D.XY.m128d_f64[0] = (pTVar44->Scale3D).XY.m128d_f64[0];
      local_b18.Scale3D.XY.m128d_f64[1] = (pTVar44->Scale3D).XY.m128d_f64[1];
      local_b18.Scale3D.ZW.m128d_f64[0] = (pTVar44->Scale3D).ZW.m128d_f64[0];
      local_b18.Scale3D.ZW.m128d_f64[1] = (pTVar44->Scale3D).ZW.m128d_f64[1];
      *(ForElementType<unsigned_int> *)(pFVar13 + lVar43 + 0x20) = local_b58;
      ((ForElementType<unsigned_int> *)(pFVar13 + lVar43 + 0x20))[1] = FStack_b50;
      *(FWeakObjectPtr *)(pFVar13 + lVar43 + 0x30) =
           (FWeakObjectPtr)local_b18.Rotation.ZW.m128d_f64[0];
      ((FWeakObjectPtr *)(pFVar13 + lVar43 + 0x30))[1] = FVar66;
      uVar25 = *(undefined8 *)(pFVar13 + lVar43 + 0x20);
      uVar26 = *(undefined8 *)(pFVar13 + lVar43 + 0x20 + 8);
      *(undefined8 *)(pFVar13 + lVar43 + 0x270) = uVar25;
      *(undefined8 *)(pFVar13 + lVar43 + 0x270 + 8) = uVar26;
      *(undefined8 *)(pFVar13 + lVar43 + 0x230) = uVar25;
      *(undefined8 *)(pFVar13 + lVar43 + 0x230 + 8) = uVar26;
      *(FWeakObjectPtr *)(pFVar13 + lVar43 + 0x280) =
           (FWeakObjectPtr)local_b18.Rotation.ZW.m128d_f64[0];
      ((FWeakObjectPtr *)(pFVar13 + lVar43 + 0x280))[1] = FVar66;
      *(FWeakObjectPtr *)(pFVar13 + lVar43 + 0x240) =
           (FWeakObjectPtr)local_b18.Rotation.ZW.m128d_f64[0];
      ((FWeakObjectPtr *)(pFVar13 + lVar43 + 0x240))[1] = FVar66;
      uVar37 = *(uint *)pFVar51;
      uVar49 = 0;
      if ((int)uVar37 < (this->PhysicsBodyDefinitions).ArrayNum) {
        uVar49 = ~uVar37 >> 0x1f;
      }
      local_b18.Rotation.XY.m128d_f64[0] = (double)local_b58;
      local_b18.Rotation.XY.m128d_f64[1] = (double)FStack_b50;
      local_b18.Rotation.ZW.m128d_f64[1] = (double)FVar66;
      local_ab8 = (FWeakObjectPtr)local_b18.Translation.XY.m128d_f64[0];
      pFStack_ab0 = (FReferenceSkeleton *)local_b18.Translation.XY.m128d_f64[1];
      local_aa8.Data = (FScriptContainerElement *)local_b18.Translation.ZW.m128d_f64[0];
      if ((uVar49 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      dVar69 = *(double *)(pFVar13 + lVar43 + 0x28);
      dVar74 = *(double *)(pFVar13 + lVar43 + 0x30);
      dVar18 = *(double *)(pFVar13 + lVar43 + 0x20);
      pFVar14 = (this->PhysicsBodyDefinitions).AllocatorInstance.Data;
      dVar19 = *(double *)(pFVar13 + lVar43 + 0x38);
      pFVar51 = pFVar51 + 4;
      auVar58 = *(undefined1 (*) [16])(pFVar14 + (longlong)(int)uVar37 * 0xd0 + 0x28);
      dVar75 = auVar58._0_8_;
      local_b48 = *(double *)(pFVar14 + (longlong)(int)uVar37 * 0xd0 + 0x38);
      auVar21._4_4_ = FVar66.ObjectIndex;
      auVar21._8_4_ = FVar66.ObjectSerialNumber;
      auVar21._0_4_ = auVar58._4_4_;
      auVar65._0_8_ = auVar21._0_8_ << 0x20;
      auVar65._8_4_ = auVar58._8_4_;
      auVar65._12_4_ = auVar58._12_4_;
      dVar67 = auVar65._8_8_;
      dVar17 = dVar69 * local_b48 - dVar74 * dVar67;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar74 * dVar75 - dVar18 * local_b48;
      dVar70 = dVar18 * dVar67 - dVar69 * dVar75;
      dVar16 = dVar16 + dVar16;
      dVar70 = dVar70 + dVar70;
      unaff_XMM7_Qb = 0;
      *(double *)(pFVar13 + lVar43) =
           (dVar70 * dVar69 - dVar16 * dVar74) + dVar17 * dVar19 + dVar75 + (double)local_ab8;
      *(double *)(pFVar13 + lVar43 + 8) =
           (dVar17 * dVar74 - dVar70 * dVar18) + dVar16 * dVar19 + dVar67 + (double)pFStack_ab0;
      *(double *)(pFVar13 + lVar43 + 0x10) =
           (dVar16 * dVar18 - dVar17 * dVar69) + dVar70 * dVar19 + local_b48 +
           (double)local_aa8.Data;
    }
    goto LAB_146452bc4;
  }
  if (this->InitTeleportType != ResetPhysics) goto LAB_146452bc4;
  TermPhysics(this);
  iVar41 = (this->PhysicsBodyDefinitions).ArrayNum;
  pFVar10 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  local_b38._8_8_ = pFVar10;
  if (iVar41 != 0) {
    if ((iVar41 < 1) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (*(FName *)(this->PhysicsBodyDefinitions).AllocatorInstance.Data ==
        (this->BoundBone).BoneName) {
      iVar41 = (this->PhysicsBodyDefinitions).ArrayNum;
      uVar49 = iVar41 - 1;
      uVar37 = 0;
      if ((int)uVar49 < iVar41) {
        uVar37 = ~uVar49 >> 0x1f;
      }
      if ((uVar37 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      if (*(FName *)((this->PhysicsBodyDefinitions).AllocatorInstance.Data +
                    (longlong)(this->PhysicsBodyDefinitions).ArrayNum * 0xd0 + -0xd0) ==
          (this->ChainEnd).BoneName) goto LAB_1464513ff;
    }
    UpdateChainPhysicsBodyDefinitions(this,pFVar10->RefSkeleton);
  }
LAB_1464513ff:
  if (this->bUseGravityOverride == '\x01' && this->bGravityOverrideInSimSpace == '\0') {
    pTVar42 = &TransformWorldVectorToSimSpace(this,&local_6e8,param_1,&this->GravityOverride)->
               field0_0x0;
  }
  else {
    pTVar42 = &local_988;
    local_988._s_0.X = (this->GravityOverride).field0_0x0._s_0.X;
    local_988._s_0.Y = (this->GravityOverride).field0_0x0._s_0.Y;
    local_988._s_0.Z = (this->GravityOverride).field0_0x0._s_0.Z;
  }
  pTVar32 = CVarGravityScale.Ref;
  local_b58 = (ForElementType<unsigned_int>)(((TVector<double>_u_0 *)&(pTVar42->_s_0).X)->_s_0).X;
  FStack_b50 = (ForElementType<unsigned_int>)(pTVar42->_s_0).Y;
  local_b48 = (pTVar42->_s_0).Z;
  bVar35 = IsInParallelGameThread();
  if ((bVar35) || (bVar35 = IsInGameThread(), bVar35)) {
    lVar43 = 0;
  }
  else {
    lVar43 = 4;
  }
  fVar8 = *(float *)((longlong)pTVar32->ShadowedValue + lVar43);
  if (((this->PhysicsBodyDefinitions).ArrayNum < 1) &&
     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("PhysicsBodyDefinitions.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                          ,0x3b8,L""), bVar35)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar41 = (this->PhysicsBodyDefinitions).ArrayNum;
  if (0 < iVar41) {
    if ((this->Bodies).ArrayMax < iVar41) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x400,0x10,iVar41,&(this->Bodies).AllocatorInstance,(this->Bodies).ArrayNum,
                 &(this->Bodies).ArrayMax);
    }
    if (((this->PhysicsBodyDefinitions).ArrayNum < 1) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pFVar11 = (FName *)(this->PhysicsBodyDefinitions).AllocatorInstance.Data;
    *pFVar11 = (this->BoundBone).BoneName;
    uVar79 = *(undefined4 *)&(this->BoundBone).field_0x8;
    pFVar11[1].ComparisonIndex.Value =
         (uVar79 ^ pFVar11[1].ComparisonIndex.Value) & 0x80000000 ^ uVar79;
    uVar80 = *(undefined4 *)&(this->BoundBone).field_0x8;
    pFVar11[1].ComparisonIndex.Value =
         (SPULL(uVar80,0,0x1f) ^ SPULL(uVar79,0,0x1f)) & 0x7fffffffU ^ uVar80;
    pFVar11[1].Number = (uint)(this->BoundBone).CachedCompactPoseIndex;
  }
  uVar37 = (this->PhysicsBodyDefinitions).ArrayNum;
  pTVar2 = &this->ConstraintOffsets;
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  (this->ConstraintOffsets).ArrayNum = 0;
  if ((this->ConstraintOffsets).ArrayMax < (int)uVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar37,&pTVar2->AllocatorInstance,0,&(this->ConstraintOffsets).ArrayMax);
  }
  uVar37 = (this->PhysicsBodyDefinitions).ArrayNum;
  pTVar3 = &this->PhysicsBodyJointOffsets;
  if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
  }
  (this->PhysicsBodyJointOffsets).ArrayNum = 0;
  if ((this->PhysicsBodyJointOffsets).ArrayMax < (int)uVar37) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar37,&pTVar3->AllocatorInstance,0,&(this->PhysicsBodyJointOffsets).ArrayMax)
    ;
  }
  uVar49 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar37 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar24 = __real_3fe0000000000000;
  local_b78 = (this->PhysicsBodyDefinitions).ArrayNum;
  uVar48 = (ulonglong)(int)local_b78;
  this_01 = (FBoneReference *)(this->PhysicsBodyDefinitions).AllocatorInstance.Data;
  uVar81 = FStack_b50._0_4_;
  uVar82 = FStack_b50._4_4_;
  uVar79 = SUB84(local_b48,0);
  uVar80 = (undefined4)((ulonglong)local_b48 >> 0x20);
  local_b70 = (double *)&this_01[2].field_0x8;
  local_9e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_9e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_9e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_9c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_9c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_9d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_9d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_9d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b20 = this_01 + uVar48 * 0xd;
  local_b68 = local_b48;
  local_9b8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_9b8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_9b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b28 = (double)local_b58;
  local_b60 = (double)FStack_b50;
  local_b58._4_4_ = __xmm_80000000000000008000000000000000._4_4_;
  local_b58._0_4_ = (uint)__xmm_80000000000000008000000000000000;
  FStack_b50._4_4_ = _UNK_15066df7c;
  FStack_b50._0_4_ = _UNK_15066df78;
  uVar40 = (uint)__xmm_80000000000000008000000000000000;
  uVar76 = __xmm_80000000000000008000000000000000._4_4_;
  uVar77 = _UNK_15066df78;
  uVar78 = _UNK_15066df7c;
  while( true ) {
    pFVar34 = local_b20;
    if ((this->PhysicsBodyDefinitions).ArrayNum != (int)uVar48) {
      local_ba8 = 0;
      `TCheckedPointerIterator<FAnimPhysBodyDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_ba8);
    }
    if (this_01 == pFVar34) break;
    local_ba0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ba0.ArrayNum = 0;
    local_ba0.ArrayMax = 0;
    FBoneReference::Initialize(this_01,(FBoneContainer *)local_b38._8_8_);
    FVar38 = FBoneReference::GetCompactPoseIndex(this_01,(FBoneContainer *)local_b38);
    pFVar33 = local_b80;
    pTVar44 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&local_b80->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar38));
    local_7c8.Rotation.XY.m128d_f64[0] = (pTVar44->Rotation).XY.m128d_f64[0];
    local_7c8.Rotation.XY.m128d_f64[1] = (pTVar44->Rotation).XY.m128d_f64[1];
    local_7c8.Rotation.ZW.m128d_f64[0] = (pTVar44->Rotation).ZW.m128d_f64[0];
    local_7c8.Rotation.ZW.m128d_f64[1] = (pTVar44->Rotation).ZW.m128d_f64[1];
    local_7c8.Translation.XY.m128d_f64[0] = (pTVar44->Translation).XY.m128d_f64[0];
    local_7c8.Translation.XY.m128d_f64[1] = (pTVar44->Translation).XY.m128d_f64[1];
    local_7c8.Translation.ZW.m128d_f64[0] = (pTVar44->Translation).ZW.m128d_f64[0];
    local_7c8.Translation.ZW.m128d_f64[1] = (pTVar44->Translation).ZW.m128d_f64[1];
    local_7c8.Scale3D.XY.m128d_f64[0] = (pTVar44->Scale3D).XY.m128d_f64[0];
    local_7c8.Scale3D.XY.m128d_f64[1] = (pTVar44->Scale3D).XY.m128d_f64[1];
    local_7c8.Scale3D.ZW.m128d_f64[0] = (pTVar44->Scale3D).ZW.m128d_f64[0];
    local_7c8.Scale3D.ZW.m128d_f64[1] = (pTVar44->Scale3D).ZW.m128d_f64[1];
    GetSimSpaceTransformFromComponentSpace(this,&local_208,this->SimulationSpace,pFVar33,&local_7c8)
    ;
    if (iVar39 == 0) {
      pFVar45 = FAnimPhysShape::MakeBox(&local_728,(TVector<double> *)(this_01 + 1));
      if (((local_ba0.AllocatorInstance.Data <= pFVar45) &&
          (pFVar45 < (FAnimPhysShape *)
                     (local_ba0.AllocatorInstance.Data + (longlong)local_ba0.ArrayMax * 0x40))) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar39 = local_ba0.ArrayNum;
      if (local_ba0.ArrayNum == local_ba0.ArrayMax) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_ba0.AllocatorInstance,&local_ba0.ArrayMax);
      }
      local_ba0.ArrayNum = iVar39 + 1;
      lVar43 = (longlong)iVar39 * 0x40;
      *(undefined8 *)&local_ba0.AllocatorInstance.Data[lVar43].field_0x0 = 0;
      *(FScriptContainerElement **)&local_ba0.AllocatorInstance.Data[lVar43].field_0x0 =
           (pFVar45->Vertices).AllocatorInstance.Data;
      (pFVar45->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 8) = (pFVar45->Vertices).ArrayNum;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0xc) = (pFVar45->Vertices).ArrayMax;
      (pFVar45->Vertices).ArrayNum = 0;
      (pFVar45->Vertices).ArrayMax = 0;
      *(undefined8 *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x10) = 0;
      *(FScriptContainerElement **)(local_ba0.AllocatorInstance.Data + lVar43 + 0x10) =
           (pFVar45->Triangles).AllocatorInstance.Data;
      (pFVar45->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x18) = (pFVar45->Triangles).ArrayNum;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x1c) = (pFVar45->Triangles).ArrayMax;
      (pFVar45->Triangles).ArrayNum = 0;
      (pFVar45->Triangles).ArrayMax = 0;
      *(float *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x20) = pFVar45->Volume;
      dVar62 = (pFVar45->CenterOfMass).field0_0x0._s_0.Y;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x28) =
           (pFVar45->CenterOfMass).field0_0x0._s_0.X;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x28 + 8) = dVar62;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x38) =
           (pFVar45->CenterOfMass).field0_0x0._s_0.Z;
      if (local_728.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Triangles.AllocatorInstance.Data);
      }
      if (local_728.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_728.Vertices.AllocatorInstance.Data);
      }
      dVar74 = local_208.Translation.ZW.m128d_f64[0];
      dVar62 = local_208.Translation.XY.m128d_f64[0];
      dVar69 = local_208.Translation.XY.m128d_f64[1];
      local_8d8.X = local_208.Rotation.XY.m128d_f64[0];
      local_8d8.Y = local_208.Rotation.XY.m128d_f64[1];
      local_968._s_0.X = (double)*(undefined8 *)&this_01[2].field_0x8;
      local_968._s_0.Y = (double)this_01[3].BoneName;
      local_8d8.Z = local_208.Rotation.ZW.m128d_f64[0];
      local_8d8.W = local_208.Rotation.ZW.m128d_f64[1];
      local_968._s_0.Z = (double)*(undefined8 *)&this_01[3].field_0x8;
      local_7f8 = local_208.Translation.XY.m128d_f64[0];
      dStack_7f0 = local_208.Translation.XY.m128d_f64[1];
      pTVar46 = UE::Math::TQuat<double>::RotateVector
                          (&local_8d8,&local_6d0,(TVector<double> *)&local_968._s_0);
      local_7e8 = dVar74;
      local_948._s_0.Z = dVar74 + (pTVar46->field0_0x0)._s_0.Z;
      dVar62 = dVar62 + (pTVar46->field0_0x0)._s_0.X;
      dVar69 = dVar69 + (pTVar46->field0_0x0)._s_0.Y;
      local_870._8_4_ = SUB84(dVar69,0);
      local_870._0_8_ = dVar62;
      local_870._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      local_860 = local_948._s_0.Z;
    }
    else {
      local_818 = local_208.Scale3D.ZW.m128d_f64[0];
      local_a40._s_0.X = local_208.Scale3D.XY.m128d_f64[0] * (double)this_01[1].BoneName;
      local_a40._s_0.Z = local_208.Scale3D.ZW.m128d_f64[0] * (double)this_01[2].BoneName;
      local_828 = local_208.Scale3D.XY.m128d_f64[0];
      dStack_820 = local_208.Scale3D.XY.m128d_f64[1];
      local_a40._s_0.Y = local_208.Scale3D.XY.m128d_f64[1] * *(double *)&this_01[1].field_0x8;
      pFVar45 = FAnimPhysShape::MakeBox(&local_768,(TVector<double> *)&local_a40._s_0);
      if (((local_ba0.AllocatorInstance.Data <= pFVar45) &&
          (pFVar45 < (FAnimPhysShape *)
                     (local_ba0.AllocatorInstance.Data + (longlong)local_ba0.ArrayMax * 0x40))) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar39 = local_ba0.ArrayNum;
      if (local_ba0.ArrayNum == local_ba0.ArrayMax) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_ba0.AllocatorInstance,&local_ba0.ArrayMax);
      }
      local_ba0.ArrayNum = iVar39 + 1;
      lVar43 = (longlong)iVar39 * 0x40;
      *(undefined8 *)&local_ba0.AllocatorInstance.Data[lVar43].field_0x0 = 0;
      *(FScriptContainerElement **)&local_ba0.AllocatorInstance.Data[lVar43].field_0x0 =
           (pFVar45->Vertices).AllocatorInstance.Data;
      (pFVar45->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 8) = (pFVar45->Vertices).ArrayNum;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0xc) = (pFVar45->Vertices).ArrayMax;
      (pFVar45->Vertices).ArrayNum = 0;
      (pFVar45->Vertices).ArrayMax = 0;
      *(undefined8 *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x10) = 0;
      *(FScriptContainerElement **)(local_ba0.AllocatorInstance.Data + lVar43 + 0x10) =
           (pFVar45->Triangles).AllocatorInstance.Data;
      (pFVar45->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x18) = (pFVar45->Triangles).ArrayNum;
      *(int *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x1c) = (pFVar45->Triangles).ArrayMax;
      (pFVar45->Triangles).ArrayNum = 0;
      (pFVar45->Triangles).ArrayMax = 0;
      *(float *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x20) = pFVar45->Volume;
      dVar62 = (pFVar45->CenterOfMass).field0_0x0._s_0.Y;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x28) =
           (pFVar45->CenterOfMass).field0_0x0._s_0.X;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x28 + 8) = dVar62;
      *(double *)(local_ba0.AllocatorInstance.Data + lVar43 + 0x38) =
           (pFVar45->CenterOfMass).field0_0x0._s_0.Z;
      if (local_768.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Triangles.AllocatorInstance.Data);
      }
      if (local_768.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_768.Vertices.AllocatorInstance.Data);
      }
      auVar28._8_8_ = local_208.Rotation.ZW.m128d_f64[1];
      auVar28._0_8_ = local_208.Rotation.ZW.m128d_f64[0];
      auVar27._8_8_ = local_208.Rotation.XY.m128d_f64[1];
      auVar27._0_8_ = local_208.Rotation.XY.m128d_f64[0];
      auVar68 = blendpd(auVar27,auVar28,2);
      dVar74 = local_b70[2] * local_208.Scale3D.ZW.m128d_f64[0];
      dVar18 = local_208.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar62 = local_208.Scale3D.XY.m128d_f64[0] * *local_b70;
      dVar69 = local_208.Scale3D.XY.m128d_f64[1] * local_b70[1];
      uVar79 = (undefined4)((ulonglong)dVar69 >> 0x20);
      auVar71._8_4_ = SUB84(dVar69,0);
      auVar71._0_8_ = dVar62;
      auVar71._12_4_ = uVar79;
      auVar57._8_4_ = SUB84(dVar69,0);
      auVar57._0_8_ = dVar62;
      auVar57._12_4_ = uVar79;
      auVar58._8_4_ = SUB84(dVar18,0);
      auVar58._0_8_ = dVar74;
      auVar58._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      auVar58 = blendpd(auVar57,auVar58,2);
      auVar72._0_8_ =
           auVar71._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
           local_208.Rotation.XY.m128d_f64[1] * dVar62;
      auVar72._8_8_ =
           dVar74 * local_208.Rotation.XY.m128d_f64[1] - local_208.Rotation.ZW.m128d_f64[0] * dVar69
      ;
      auVar59._0_8_ = auVar58._0_8_ * local_208.Rotation.ZW.m128d_f64[0] - auVar68._0_8_ * dVar74;
      auVar59._8_8_ = auVar58._8_8_ * local_208.Rotation.ZW.m128d_f64[1] - auVar68._8_8_ * dVar18;
      auVar58 = blendpd(auVar72,auVar59,2);
      dVar18 = auVar72._8_8_ + auVar72._8_8_;
      dVar19 = auVar59._0_8_ + auVar59._0_8_;
      uVar79 = (undefined4)((ulonglong)dVar19 >> 0x20);
      auVar73._0_8_ = auVar58._0_8_ + auVar58._0_8_;
      auVar73._8_8_ = auVar58._8_8_ + auVar58._8_8_;
      auVar63._8_4_ = SUB84(dVar19,0);
      auVar63._0_8_ = dVar18;
      auVar63._12_4_ = uVar79;
      auVar60._8_4_ = SUB84(dVar19,0);
      auVar60._0_8_ = dVar18;
      auVar60._12_4_ = uVar79;
      auVar58 = blendpd(auVar60,auVar73,2);
      auVar64._0_8_ =
           auVar63._8_8_ * local_208.Rotation.XY.m128d_f64[0] -
           dVar18 * local_208.Rotation.XY.m128d_f64[1];
      auVar64._8_8_ =
           auVar73._0_8_ * local_208.Rotation.XY.m128d_f64[1] -
           dVar19 * local_208.Rotation.ZW.m128d_f64[0];
      uVar79 = SUB84(local_b68,0);
      uVar80 = (undefined4)((ulonglong)local_b68 >> 0x20);
      uVar81 = SUB84(local_b60,0);
      uVar82 = (undefined4)((ulonglong)local_b60 >> 0x20);
      auVar61._0_8_ =
           auVar58._0_8_ * local_208.Rotation.ZW.m128d_f64[0] - auVar73._0_8_ * auVar68._0_8_;
      auVar61._8_8_ =
           auVar58._8_8_ * local_208.Rotation.ZW.m128d_f64[1] - auVar73._8_8_ * auVar68._8_8_;
      auVar58 = blendpd(auVar64,auVar61,2);
      local_948._s_0.Z =
           auVar73._0_8_ * local_208.Rotation.ZW.m128d_f64[1] + dVar74 + auVar58._0_8_ +
           local_208.Translation.ZW.m128d_f64[0];
      dVar62 = dVar18 * local_208.Rotation.ZW.m128d_f64[1] + dVar62 + auVar64._8_8_ +
               local_208.Translation.XY.m128d_f64[0];
      dVar69 = dVar19 * local_208.Rotation.ZW.m128d_f64[1] + dVar69 + auVar61._0_8_ +
               local_208.Translation.XY.m128d_f64[1];
      local_840._8_4_ = SUB84(dVar69,0);
      local_840._0_8_ = dVar62;
      local_840._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      uVar40 = local_b58._0_4_;
      uVar76 = local_b58._4_4_;
      uVar77 = FStack_b50._0_4_;
      uVar78 = FStack_b50._4_4_;
      local_830 = local_948._s_0.Z;
    }
    uVar55 = (undefined4)((ulonglong)dVar69 >> 0x20);
    local_208.Translation.ZW.m128d_f64[1] = 0.0;
    local_208.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar69,0);
    local_208.Translation.XY.m128d_f64[0] = dVar62;
    local_208.Translation.XY.m128d_f64[1]._4_4_ = uVar55;
    local_948._8_4_ = SUB84(dVar69,0);
    local_948._0_8_ = dVar62;
    local_948._12_4_ = uVar55;
    puVar7 = &this_01[2].field_0x8;
    local_208.Translation.ZW.m128d_f64[0] = local_948._s_0.Z;
    FAnimPhysRigidBody::FAnimPhysRigidBody
              ((FAnimPhysRigidBody *)local_608,&local_ba0,(TVector<double> *)&local_948._s_0);
    local_228 = this_01->BoneName;
    lStack_220 = *(longlong *)&this_01->field_0x8;
    local_240 = this_01[0xc].field_0x8;
    local_608._64_4_ = (undefined4)local_208.Scale3D.XY.m128d_f64[0];
    local_218 = (FScriptContainerElement *)0x0;
    local_608._32_8_ = local_208.Rotation.XY.m128d_f64[0];
    local_608._40_8_ = local_208.Rotation.XY.m128d_f64[1];
    local_608._48_8_ = local_208.Rotation.ZW.m128d_f64[0];
    local_608._56_8_ = local_208.Rotation.ZW.m128d_f64[1];
    local_848 = local_208.Scale3D.ZW.m128d_f64[0];
    local_398 = local_208.Rotation.XY.m128d_f64[0];
    dStack_390 = local_208.Rotation.XY.m128d_f64[1];
    local_388 = local_208.Rotation.ZW.m128d_f64[0];
    dStack_380 = local_208.Rotation.ZW.m128d_f64[1];
    local_3d8 = local_208.Rotation.XY.m128d_f64[0];
    dStack_3d0 = local_208.Rotation.XY.m128d_f64[1];
    local_3c8 = local_208.Rotation.ZW.m128d_f64[0];
    dStack_3c0 = local_208.Rotation.ZW.m128d_f64[1];
    local_858 = local_208.Scale3D.XY.m128d_f64[0];
    dStack_850 = local_208.Scale3D.XY.m128d_f64[1];
    if (local_240 == CustomSphere) {
      dVar62 = (double)(float)this_01[0xc].CachedCompactPoseIndex;
      if (local_b8c != 0) {
        local_8b8 = local_208.Scale3D.XY.m128d_f64[0];
        dStack_8b0 = local_208.Scale3D.XY.m128d_f64[1];
        local_8a8 = local_208.Scale3D.ZW.m128d_f64[0];
        dVar62 = dVar62 * local_208.Scale3D.XY.m128d_f64[0];
      }
      local_23c = (float)dVar62;
    }
    else if (local_240 == InnerSphere) {
      dVar62 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this_01[1].field_0x8 >> 0x20) &
                                uVar49,(uint)*(undefined8 *)&this_01[1].field_0x8 & uVar37);
      uVar53 = this_01[1].BoneName.ComparisonIndex.Value & uVar37;
      uVar54 = this_01[1].BoneName.Number & uVar49;
      if ((double)CONCAT44(uVar54,uVar53) <= dVar62) {
        dVar62 = (double)CONCAT44(uVar54,uVar53);
      }
      dVar69 = (double)CONCAT44(this_01[2].BoneName.Number & uVar49,
                                this_01[2].BoneName.ComparisonIndex.Value & uVar37);
      if (dVar69 <= dVar62) {
        dVar62 = dVar69;
      }
      if (local_b8c != 0) {
        local_7e0 = local_208.Scale3D.XY.m128d_f64[0];
        dStack_7d8 = local_208.Scale3D.XY.m128d_f64[1];
        local_7d0 = local_208.Scale3D.ZW.m128d_f64[0];
        dVar62 = dVar62 * local_208.Scale3D.XY.m128d_f64[0];
      }
      local_23c = (float)(dVar62 * dVar24);
    }
    else if (local_240 == OuterSphere) {
      dVar62 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this_01[1].field_0x8 >> 0x20) &
                                uVar49,(uint)*(undefined8 *)&this_01[1].field_0x8 & uVar37);
      uVar53 = this_01[1].BoneName.ComparisonIndex.Value & uVar37;
      uVar54 = this_01[1].BoneName.Number & uVar49;
      if (dVar62 <= (double)CONCAT44(uVar54,uVar53)) {
        dVar62 = (double)CONCAT44(uVar54,uVar53);
      }
      dVar69 = (double)CONCAT44(this_01[2].BoneName.Number & uVar49,
                                this_01[2].BoneName.ComparisonIndex.Value & uVar37);
      if (dVar62 <= dVar69) {
        dVar62 = dVar69;
      }
      if (local_b8c != 0) {
        local_810 = local_208.Scale3D.XY.m128d_f64[0];
        dStack_808 = local_208.Scale3D.XY.m128d_f64[1];
        local_800 = local_208.Scale3D.ZW.m128d_f64[0];
        dVar62 = dVar62 * local_208.Scale3D.XY.m128d_f64[0];
      }
      local_23c = (float)(dVar62 * dVar24);
    }
    if (this->bOverrideLinearDamping != '\0') {
      local_2fc = this->LinearDampingOverride;
      local_300 = true;
    }
    if (this->bOverrideAngularDamping != '\0') {
      local_304 = this->AngularDampingOverride;
      local_308 = true;
    }
    local_2f8 = fVar8 * this->GravityScale;
    iVar39 = (this->Bodies).ArrayNum;
    local_338 = this->bWindWasEnabled;
    dVar62 = (double)fVar8;
    local_2f4 = this->bUseGravityOverride;
    local_2f0[0]._0_8_ = local_b28 * dVar62;
    local_2f0[0]._8_8_ = (double)CONCAT44(uVar82,uVar81) * dVar62;
    local_2f0[0]._16_8_ = (double)CONCAT44(uVar80,uVar79) * dVar62;
    if (iVar39 < 1) {
      pFVar50 = (pTVar2->AllocatorInstance).Data;
      piVar1 = &(this->ConstraintOffsets).ArrayMax;
      local_a70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_a68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uStack_a58 = *(uint *)puVar7 ^ uVar40;
      uStack_a54 = (uint)this_01[2].CachedCompactPoseIndex ^ uVar76;
      uStack_a50 = this_01[3].BoneName.ComparisonIndex.Value ^ uVar77;
      uStack_a4c = this_01[3].BoneName.Number ^ uVar78;
      local_a60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      FStack_a48.ReferenceController =
           (TReferenceControllerBase<1> *)
           CONCAT44((uint)((ulonglong)*(undefined8 *)&this_01[3].field_0x8 >> 0x20) ^ uVar76,
                    (uint)*(undefined8 *)&this_01[3].field_0x8 ^ uVar40);
      if (((pFVar50 <= (FScriptContainerElement *)&local_a70) &&
          ((FScriptContainerElement *)&local_a70 < pFVar50 + (longlong)*piVar1 * 0x30)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar39 = (this->ConstraintOffsets).ArrayNum;
      if (iVar39 == *piVar1) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar43 = (longlong)iVar39;
      (this->ConstraintOffsets).ArrayNum = iVar39 + 1;
      pFVar50 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar50 + lVar43 * 0x30) = local_a70;
      *(double *)(pFVar50 + lVar43 * 0x30 + 8) = dStack_a68;
      *(double *)(pFVar50 + lVar43 * 0x30 + 0x10) = local_a60;
      *(ulonglong *)(pFVar50 + lVar43 * 0x30 + 0x10 + 8) = CONCAT44(uStack_a54,uStack_a58);
      uVar53 = uStack_a50;
      uVar54 = uStack_a4c;
      uVar55 = FStack_a48.ReferenceController._0_4_;
      uVar56 = FStack_a48.ReferenceController._4_4_;
    }
    else {
      uVar40 = 0;
      if ((int)(iVar39 - 1U) < iVar39) {
        uVar40 = ~(iVar39 - 1U) >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      dVar74 = local_208.Translation.XY.m128d_f64[0] - local_9c8;
      local_888 = local_9c8;
      dStack_880 = dStack_9c0;
      local_878 = (double)local_9b8._0_8_;
      local_8a0 = local_208.Translation.XY.m128d_f64[0];
      dStack_898 = local_208.Translation.XY.m128d_f64[1];
      dVar62 = local_208.Translation.XY.m128d_f64[1] - dStack_9c0;
      local_218 = (this->Bodies).AllocatorInstance.Data +
                  (longlong)((this->Bodies).ArrayNum + -1) * 0x400;
      local_918.X = local_208.Rotation.XY.m128d_f64[0];
      local_918.Y = local_208.Rotation.XY.m128d_f64[1];
      local_a28._s_0.X = dVar74 * __real_bfe0000000000000;
      local_890 = local_208.Translation.ZW.m128d_f64[0];
      dVar69 = local_208.Translation.ZW.m128d_f64[0] - (double)local_9b8._0_8_;
      local_918.Z = local_208.Rotation.ZW.m128d_f64[0];
      local_918.W = local_208.Rotation.ZW.m128d_f64[1];
      local_a28._s_0.Y = dVar62 * __real_bfe0000000000000;
      local_a28._s_0.Z = dVar69 * __real_bfe0000000000000;
      pTVar46 = UE::Math::TQuat<double>::UnrotateVector
                          (&local_918,&local_6b8,(TVector<double> *)&local_a28._s_0);
      local_a08._s_0.X = dVar74 * dVar24;
      dVar74 = (pTVar46->field0_0x0)._s_0.X;
      lVar22 = *(longlong *)((longlong)&pTVar46->field0_0x0 + 8);
      lVar43 = *(longlong *)((longlong)&pTVar46->field0_0x0 + 0x10);
      local_a08._s_0.Y = dVar62 * dVar24;
      local_a08._s_0.Z = dVar69 * dVar24;
      local_8f8.X = (double)local_9e8._0_8_;
      local_8f8.Y = (double)local_9e8._8_8_;
      local_8f8.Z = (double)local_9d8._0_8_;
      local_8f8.W = (double)local_9d8._8_8_;
      pTVar46 = UE::Math::TQuat<double>::UnrotateVector
                          (&local_8f8,&local_6a0,(TVector<double> *)&local_a08._s_0);
      pFVar50 = (pTVar2->AllocatorInstance).Data;
      piVar1 = &(this->ConstraintOffsets).ArrayMax;
      local_aa0 = (pTVar46->field0_0x0)._s_0.X;
      FStack_a98.Data = (FScriptContainerElement *)(pTVar46->field0_0x0)._s_0.Y;
      local_a90 = (pTVar46->field0_0x0)._s_0.Z;
      dStack_a88 = dVar74;
      uStack_a80 = lVar22;
      uStack_a78 = lVar43;
      if (((pFVar50 <= (FScriptContainerElement *)&local_aa0) &&
          ((FScriptContainerElement *)&local_aa0 < pFVar50 + (longlong)*piVar1 * 0x30)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar39 = (this->ConstraintOffsets).ArrayNum;
      if (iVar39 == *piVar1) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar43 = (longlong)iVar39;
      uVar79 = SUB84(local_b68,0);
      uVar80 = (undefined4)((ulonglong)local_b68 >> 0x20);
      uVar81 = SUB84(local_b60,0);
      uVar82 = (undefined4)((ulonglong)local_b60 >> 0x20);
      (this->ConstraintOffsets).ArrayNum = iVar39 + 1;
      pFVar50 = (pTVar2->AllocatorInstance).Data;
      *(double *)(pFVar50 + lVar43 * 0x30) = local_aa0;
      *(FScriptContainerElement **)(pFVar50 + lVar43 * 0x30 + 8) = FStack_a98.Data;
      *(double *)(pFVar50 + lVar43 * 0x30 + 0x10) = local_a90;
      *(double *)(pFVar50 + lVar43 * 0x30 + 0x10 + 8) = dStack_a88;
      uVar53 = (uint)uStack_a80;
      uVar54 = uStack_a80._4_4_;
      uVar55 = (undefined4)uStack_a78;
      uVar56 = uStack_a78._4_4_;
      uVar40 = local_b58._0_4_;
      uVar76 = local_b58._4_4_;
      uVar77 = FStack_b50._0_4_;
      uVar78 = FStack_b50._4_4_;
    }
    pFVar50 = pFVar50 + lVar43 * 0x30 + 0x20;
    *(uint *)pFVar50 = uVar53;
    *(uint *)(pFVar50 + 4) = uVar54;
    *(undefined4 *)(pFVar50 + 8) = uVar55;
    *(undefined4 *)(pFVar50 + 0xc) = uVar56;
    if (((char)this_01[4].BoneName.ComparisonIndex.Value == '\0') ||
       (*(double *)&this_01[4].field_0x8 - (double)this_01[6].BoneName != 0.0)) {
      bVar35 = false;
    }
    else {
      bVar35 = true;
    }
    if ((*(char *)((longlong)&this_01[4].BoneName.ComparisonIndex.Value + 1) == '\0') ||
       ((double)this_01[5].BoneName - *(double *)&this_01[6].field_0x8 != 0.0)) {
      bVar29 = false;
    }
    else {
      bVar29 = true;
    }
    if ((*(char *)((longlong)&this_01[4].BoneName.ComparisonIndex.Value + 2) == '\0') ||
       (*(double *)&this_01[5].field_0x8 - (double)this_01[7].BoneName != 0.0)) {
      bVar30 = false;
    }
    else {
      bVar30 = true;
    }
    if (((bVar35) && (bVar29)) && (bVar30)) {
      uVar36 = 1;
    }
    else {
      uVar36 = 0;
    }
    *(undefined1 *)((longlong)&this_01[4].BoneName.ComparisonIndex.Value + 3) = uVar36;
    pTVar4 = &this->Bodies;
    pFVar50 = (pTVar4->AllocatorInstance).Data;
    if (((pFVar50 <= (FScriptContainerElement *)local_608) &&
        ((FScriptContainerElement *)local_608 < pFVar50 + (longlong)(this->Bodies).ArrayMax * 0x400)
        ) && (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar39 = (this->Bodies).ArrayNum;
    piVar1 = &(this->Bodies).ArrayMax;
    if (iVar39 == *piVar1) {
      iVar39 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x400,0x10,&pTVar4->AllocatorInstance,piVar1);
    }
    (this->Bodies).ArrayNum = iVar39 + 1;
    this_00 = (FAnimPhysRigidBody *)((pTVar4->AllocatorInstance).Data + (longlong)iVar39 * 0x400);
    FAnimPhysRigidBody::FAnimPhysRigidBody(this_00,(FAnimPhysRigidBody *)local_608);
    this_00[1]._padding_ = (longlong)local_228;
    this_00[1]._padding_ = lStack_220;
    this_00[1]._padding_ = (longlong)local_218;
    pTVar5 = &this->ActiveBoneIndices;
    pFVar50 = (pTVar5->AllocatorInstance).Data;
    local_b90 = (this->Bodies).ArrayNum + -1;
    if (((pFVar50 <= (FScriptContainerElement *)&local_b90) &&
        ((FScriptContainerElement *)&local_b90 <
         pFVar50 + (longlong)(this->ActiveBoneIndices).ArrayMax * 4)) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar39 = (this->ActiveBoneIndices).ArrayNum;
    piVar1 = &(this->ActiveBoneIndices).ArrayMax;
    if (iVar39 == *piVar1) {
      iVar39 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar5->AllocatorInstance,piVar1);
    }
    (this->ActiveBoneIndices).ArrayNum = iVar39 + 1;
    piVar1 = &(this->PhysicsBodyJointOffsets).ArrayMax;
    *(int *)((pTVar5->AllocatorInstance).Data + (longlong)iVar39 * 4) = local_b90;
    pFVar50 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar50 <= puVar7) && (puVar7 < pFVar50 + (longlong)*piVar1 * 0x18)) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar39 = (this->PhysicsBodyJointOffsets).ArrayNum;
    if (iVar39 == *piVar1) {
      iVar39 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->PhysicsBodyJointOffsets).ArrayNum = iVar39 + 1;
    FVar23 = this_01[3].BoneName;
    pFVar52 = (pTVar3->AllocatorInstance).Data;
    pFVar50 = pFVar52 + (longlong)iVar39 * 0x18;
    *(undefined8 *)pFVar50 = *(undefined8 *)puVar7;
    *(FName *)(pFVar50 + 8) = FVar23;
    *(undefined8 *)(pFVar52 + (longlong)iVar39 * 0x18 + 0x10) = *(undefined8 *)&this_01[3].field_0x8
    ;
    local_9e8._8_8_ = local_208.Rotation.XY.m128d_f64[1];
    local_9e8._0_8_ = local_208.Rotation.XY.m128d_f64[0];
    local_9d8._8_8_ = local_208.Rotation.ZW.m128d_f64[1];
    local_9d8._0_8_ = local_208.Rotation.ZW.m128d_f64[0];
    local_9c8 = local_208.Translation.XY.m128d_f64[0];
    dStack_9c0 = local_208.Translation.XY.m128d_f64[1];
    local_9b8._8_8_ = local_208.Translation.ZW.m128d_f64[1];
    local_9b8._0_8_ = local_208.Translation.ZW.m128d_f64[0];
    local_9a8 = local_208.Scale3D.XY.m128d_f64[0];
    dStack_9a0 = local_208.Scale3D.XY.m128d_f64[1];
    local_998 = local_208.Scale3D.ZW.m128d_f64[0];
    dStack_990 = local_208.Scale3D.ZW.m128d_f64[1];
    DestructItems<FAnimPhysShape,int>((FAnimPhysShape *)local_238.Data,local_230);
    if ((FAnimPhysShape *)local_238.Data != (FAnimPhysShape *)0x0) {
      FMemory::Free(local_238.Data);
    }
    DestructItems<FAnimPhysShape,int>
              ((FAnimPhysShape *)local_ba0.AllocatorInstance.Data,local_ba0.ArrayNum);
    if ((FAnimPhysShape *)local_ba0.AllocatorInstance.Data != (FAnimPhysShape *)0x0) {
      FMemory::Free(local_ba0.AllocatorInstance.Data);
    }
    local_b70 = local_b70 + 0x1a;
    this_01 = this_01 + 0xd;
    uVar48 = (ulonglong)local_b78;
    iVar39 = local_b8c;
  }
  pTVar6 = &this->BaseBodyPtrs;
  piVar1 = &(this->BaseBodyPtrs).ArrayMax;
  (this->BaseBodyPtrs).ArrayNum = 0;
  if ((this->BaseBodyPtrs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar6->AllocatorInstance,0,piVar1);
  }
  iVar39 = (this->Bodies).ArrayNum;
  pFVar50 = (this->Bodies).AllocatorInstance.Data;
  pFVar52 = pFVar50 + (longlong)iVar39 * 0x400;
  while( true ) {
    if ((this->Bodies).ArrayNum != iVar39) {
      local_ba7 = 0;
      `TCheckedPointerIterator<FAnimPhysLinkedBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_ba7);
    }
    if (pFVar50 == pFVar52) break;
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    local_b88 = pFVar50;
    if (((pFVar12 <= (FScriptContainerElement *)&local_b88) &&
        ((FScriptContainerElement *)&local_b88 < pFVar12 + (longlong)*piVar1 * 8)) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar35)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar41 = (this->BaseBodyPtrs).ArrayNum;
    if (iVar41 == *piVar1) {
      iVar41 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar6->AllocatorInstance,piVar1);
    }
    pFVar50 = pFVar50 + 0x400;
    (this->BaseBodyPtrs).ArrayNum = iVar41 + 1;
    *(FScriptContainerElement **)((pTVar6->AllocatorInstance).Data + (longlong)iVar41 * 8) =
         local_b88;
  }
  pUVar47 = UPhysicsSettings::Get();
  param_1 = local_b80;
  if (pUVar47 == (UPhysicsSettings *)0x0) {
    this->AnimPhysicsMinDeltaTime = 0.0;
    iVar39 = 4;
    this->MaxPhysicsDeltaTime = 0.033333335;
    this->MaxSubstepDeltaTime = 0.016666668;
  }
  else {
    this->AnimPhysicsMinDeltaTime = pUVar47->AnimPhysicsMinDeltaTime;
    this->MaxPhysicsDeltaTime = pUVar47->MaxPhysicsDeltaTime;
    this->MaxSubstepDeltaTime = pUVar47->MaxSubstepDeltaTime;
    iVar39 = pUVar47->MaxSubsteps;
  }
  this->MaxSubsteps = iVar39;
  local_930._s_0.X = 0.0;
  local_930._s_0.Y = 0.0;
  local_930._s_0.Z = __real_bff0000000000000;
  pTVar46 = TransformWorldVectorToSimSpace
                      (this,&local_688,local_b80,(TVector<double> *)&local_930._s_0);
  dVar24 = (pTVar46->field0_0x0)._s_0.Y;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.X = (pTVar46->field0_0x0)._s_0.X;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.Y = dVar24;
  (this->SimSpaceGravityDirection).field0_0x0._s_0.Z = (pTVar46->field0_0x0)._s_0.Z;
LAB_146452bc4:
  AVar9 = this->SimulationSpace;
  this->InitTeleportType = None;
  lVar43 = param_1->_padding_;
  dVar24 = *(double *)(lVar43 + 0x28);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar43 + 0x20);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x38);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar43 + 0x30);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x48);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar43 + 0x40);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x58);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar43 + 0x50);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x68);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar43 + 0x60);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x78);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar43 + 0x70);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar24;
  lVar43 = param_1->_padding_;
  dVar24 = *(double *)(lVar43 + 0xe8);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar43 + 0xe0);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0xf8);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar43 + 0xf0);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x108);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar43 + 0x100);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x118);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar43 + 0x110);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x128);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar43 + 0x120);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = *(double *)(lVar43 + 0x138);
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar43 + 0x130);
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar24;
  pTVar44 = GetSimToWorldSpaceTransform(this,&local_668,AVar9,param_1);
  dVar24 = (pTVar44->Rotation).XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0] = (pTVar44->Rotation).XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1] = dVar24;
  dVar24 = (pTVar44->Rotation).ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0] = (pTVar44->Rotation).ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (pTVar44->Translation).XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[0] = (pTVar44->Translation).XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[1] = dVar24;
  dVar24 = (pTVar44->Translation).ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0] = (pTVar44->Translation).ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1] = dVar24;
  dVar24 = (pTVar44->Scale3D).XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0] = (pTVar44->Scale3D).XY.m128d_f64[0];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1] = dVar24;
  dVar24 = (pTVar44->Scale3D).ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0] = (pTVar44->Scale3D).ZW.m128d_f64[0];
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar24;
  return;
}

// InitializeBoneReferences @ 146455c40

void __thiscall
FAnimNode_AnimDynamics::InitializeBoneReferences
          (FAnimNode_AnimDynamics *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FAnimPhysLinkedBody_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FBoneReference *pFVar11;
  uint uVar12;
  FBoneReference *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  uint local_48;
  int local_44;
  FScriptContainerElement *local_40;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_AnimDynamics::InitializeBoneReferences");
  FBoneReference::Initialize(&this->BoundBone,param_1);
  if (this->bChain != '\0') {
    FBoneReference::Initialize(&this->ChainEnd,param_1);
  }
  iVar8 = (this->PlanarLimits).ArrayNum;
  pFVar11 = (FBoneReference *)(this->PlanarLimits).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar8 * 7;
  while( true ) {
    if ((this->PlanarLimits).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FAnimPhysPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar13) break;
    FBoneReference::Initialize(pFVar11,param_1);
    pFVar11 = pFVar11 + 7;
  }
  iVar8 = (this->SphericalLimits).ArrayNum;
  pFVar11 = (FBoneReference *)(this->SphericalLimits).AllocatorInstance.Data;
  pFVar13 = pFVar11 + (longlong)iVar8 * 3;
  while( true ) {
    if ((this->SphericalLimits).ArrayNum != iVar8) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FAnimPhysSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar11 == pFVar13) break;
    FBoneReference::Initialize(pFVar11,param_1);
    pFVar11 = pFVar11 + 3;
  }
  if (this->SimulationSpace == BoneRelative) {
    FBoneReference::Initialize(&this->RelativeSpaceBone,param_1);
  }
  local_res20 = (this->ActiveBoneIndices).ArrayNum;
  uVar12 = 0;
  local_44 = (this->PhysicsBodyDefinitions).ArrayNum;
  if (0 < local_44) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->PhysicsBodyDefinitions).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (FBoneReference *)((this->PhysicsBodyDefinitions).AllocatorInstance.Data + lVar14);
      FBoneReference::Initialize(pFVar11,param_1);
      if ((0 < local_res20) && (bVar6 = FBoneReference::IsValidToEvaluate(pFVar11,param_1), bVar6))
      {
        pFVar10 = (this->ActiveBoneIndices).AllocatorInstance.Data;
        pFVar4 = pFVar10 + (longlong)(this->ActiveBoneIndices).ArrayNum * 4;
        for (; pFVar10 != pFVar4; pFVar10 = pFVar10 + 4) {
          if (*(uint *)pFVar10 == uVar12) goto LAB_146455f18;
        }
        pTVar2 = &this->BodiesToReset;
        uVar7 = 0;
        if ((int)uVar12 < (this->Bodies).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_40 = (this->Bodies).AllocatorInstance.Data + lVar15;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             pFVar4 + (longlong)(this->BodiesToReset).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->BodiesToReset).ArrayNum;
        piVar1 = &(this->BodiesToReset).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->BodiesToReset).ArrayNum = iVar8 + 1;
        *(FScriptContainerElement **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             local_40;
      }
LAB_146455f18:
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x400;
      lVar14 = lVar14 + 0xd0;
    } while ((int)uVar12 < local_44);
  }
  uVar12 = (this->ActiveBoneIndices).ArrayNum;
  pTVar3 = &this->ActiveBoneIndices;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(this->ActiveBoneIndices).ArrayMax;
  (this->ActiveBoneIndices).ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar12,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar8 = (this->Bodies).ArrayNum;
  local_48 = 0;
  if (0 < iVar8) {
    do {
      uVar12 = local_48;
      uVar7 = 0;
      if ((int)local_48 < (this->Bodies).ArrayNum) {
        uVar7 = ~local_48 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->Bodies).AllocatorInstance.Data;
      FBoneReference::Initialize
                ((FBoneReference *)(pFVar4 + (longlong)(int)uVar12 * 0x400 + 0x3e0),param_1);
      bVar6 = FBoneReference::IsValidToEvaluate
                        ((FBoneReference *)(pFVar4 + (longlong)(int)uVar12 * 0x400 + 0x3e0),param_1)
      ;
      if (bVar6) {
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->ActiveBoneIndices).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->ActiveBoneIndices).ArrayNum = iVar9 + 1;
        *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_48;
      }
      local_48 = local_48 + 1;
    } while ((int)local_48 < iVar8);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 146459500

void __thiscall
FAnimNode_AnimDynamics::Initialize_AnyThread
          (FAnimNode_AnimDynamics *this,FAnimationInitializeContext *param_1)

{
  longlong lVar1;
  FBoneContainer *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  ETeleportType EVar9;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_AnimDynamics::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  this->field_0x41 = 0;
  this->field_0x8b = 0;
  FStatsHierarchical::EndMeasurement();
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FBoneContainer **)(lVar1 + 0x660);
  (**(code **)(*(longlong *)this + 0xd0))(this,pFVar2);
  bVar8 = FBoneReference::IsValidToEvaluate(&this->BoundBone,pFVar2);
  if (bVar8) {
    EVar9 = this->InitTeleportType;
    if (this->InitTeleportType < ResetPhysics) {
      EVar9 = ResetPhysics;
    }
    this->InitTeleportType = EVar9;
  }
  lVar1 = *(longlong *)param_1;
  dVar4 = *(double *)(lVar1 + 0x28);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x20);
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x38);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x30);
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x48);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x40);
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x58);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x50);
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x68);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar1 + 0x60);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x78);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x70);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar4;
  lVar1 = *(longlong *)param_1;
  dVar4 = *(double *)(lVar1 + 0xe8);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[0] = *(double *)(lVar1 + 0xe0);
  (this->PreviousActorWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0xf8);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0xf0);
  (this->PreviousActorWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x108);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x100);
  (this->PreviousActorWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x118);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x110);
  (this->PreviousActorWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x128);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[0] = *(double *)(lVar1 + 0x120);
  (this->PreviousActorWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar4;
  dVar4 = *(double *)(lVar1 + 0x130);
  dVar5 = *(double *)(lVar1 + 0x138);
  dVar6 = (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0];
  dVar7 = (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1];
  this->NextTimeStep = 0.0;
  this->TimeDebt = 0.0;
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = dVar4;
  (this->PreviousActorWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0];
  dVar5 = (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[0] = dVar6;
  (this->PreviousSimSpaceTM).Rotation.XY.m128d_f64[1] = dVar7;
  dVar6 = (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0];
  dVar7 = (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[0] = dVar4;
  (this->PreviousSimSpaceTM).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0];
  dVar5 = (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[0] = dVar6;
  (this->PreviousSimSpaceTM).Translation.XY.m128d_f64[1] = dVar7;
  dVar6 = (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0];
  dVar7 = (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[0] = dVar4;
  (this->PreviousSimSpaceTM).Translation.ZW.m128d_f64[1] = dVar5;
  dVar4 = (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0];
  dVar5 = (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[0] = dVar6;
  (this->PreviousSimSpaceTM).Scale3D.XY.m128d_f64[1] = dVar7;
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[0] = dVar4;
  (this->PreviousSimSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar5;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsAnimDynamicsSystemEnabledFor @ 14645ac30

bool __cdecl FAnimNode_AnimDynamics::IsAnimDynamicsSystemEnabledFor(int param_1)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = CVarRestrictLod.Ref;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar3 = CVarEnableDynamics.Ref;
  iVar1 = *(int *)((longlong)pTVar2->ShadowedValue + lVar5);
  bVar4 = IsInParallelGameThread();
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar6 = 0;
  }
  if ((*(int *)((longlong)pTVar3->ShadowedValue + lVar6) == 1) && (iVar1 < 0 || param_1 == iVar1)) {
    return true;
  }
  return false;
}

// IsValidToEvaluate @ 14645b420

bool __thiscall
FAnimNode_AnimDynamics::IsValidToEvaluate
          (FAnimNode_AnimDynamics *this,USkeleton *param_1,FBoneContainer *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FBoneReference *this_00;
  FBoneReference *pFVar5;
  undefined1 local_res8 [8];
  
  bVar2 = FBoneReference::IsValidToEvaluate(&this->BoundBone,param_2);
  if (this->bChain != '\0') {
    bVar3 = FBoneReference::IsValidToEvaluate(&this->ChainEnd,param_2);
    bVar4 = false;
    if (!bVar3) {
      this_00 = (FBoneReference *)(this->PhysicsBodyDefinitions).AllocatorInstance.Data;
      iVar1 = (this->PhysicsBodyDefinitions).ArrayNum;
      pFVar5 = this_00 + (longlong)iVar1 * 0xd;
      while( true ) {
        if ((this->PhysicsBodyDefinitions).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FAnimPhysBodyDefinition,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        bVar4 = false;
        if (this_00 == pFVar5) goto LAB_14645b4e2;
        bVar4 = FBoneReference::IsValidToEvaluate(this_00,param_2);
        if (bVar4) break;
        this_00 = this_00 + 0xd;
      }
      bVar4 = true;
    }
LAB_14645b4e2:
    if ((bVar2) && ((bVar3 || (bVar4)))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

// NeedsDynamicReset @ 14645ed00

bool __thiscall FAnimNode_AnimDynamics::NeedsDynamicReset(FAnimNode_AnimDynamics *this)

{
  return true;
}

// PreUpdate @ 1464602e0

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
FAnimNode_AnimDynamics::PreUpdate(FAnimNode_AnimDynamics *this,UAnimInstance *param_1)

{
  FName FVar1;
  double *pdVar2;
  FSceneInterface *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  TConsoleVariableData<int> *pTVar15;
  TConsoleVariableData<FString> *pTVar16;
  bool bVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  USkeletalMeshComponent *this_00;
  UWorld *pUVar23;
  TStatId TVar24;
  FName *pFVar25;
  uint uVar26;
  double *pdVar27;
  ForAnyElementType FVar28;
  TStatIdData *pTVar29;
  FName FVar30;
  longlong lVar31;
  FNameEntryId FVar32;
  FScriptContainerElement *pFVar33;
  byte bVar34;
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
  double dVar57;
  double dVar58;
  undefined4 uVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined4 uVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar68;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  byte local_1d8 [8];
  FName local_1d0;
  FName local_1c8;
  ForAnyElementType local_1c0;
  int local_1b8;
  int local_1b4;
  FColor_u_0 local_1b0 [2];
  uint local_1a8;
  uint uStack_1a4;
  FName local_1a0;
  FName local_198;
  FName local_188;
  undefined1 local_178 [24];
  FName local_160;
  double local_158;
  double dStack_150;
  double local_148;
  TTransform<double> local_138;
  undefined1 local_d8 [16];
  double local_c8;
  
  pTVar15 = CVarEnableDynamics.Ref;
  bVar17 = IsInParallelGameThread();
  lVar31 = 0;
  if (bVar17) {
LAB_146460321:
    lVar22 = lVar31;
  }
  else {
    bVar17 = IsInGameThread();
    lVar22 = 4;
    if (bVar17) goto LAB_146460321;
  }
  if (*(int *)((longlong)pTVar15->ShadowedValue + lVar22) == 0) {
    return;
  }
  if (param_1 == (UAnimInstance *)0x0) {
    return;
  }
  this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  if ((this_00->_padding_ == 0) &&
     (pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00),
     pUVar23 == (UWorld *)0x0)) {
    return;
  }
  pUVar23 = (UWorld *)this_00->_padding_;
  if (pUVar23 == (UWorld *)0x0) {
    pUVar23 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
  }
  pTVar15 = CVarEnableWind.Ref;
  bVar17 = IsInParallelGameThread();
  if ((bVar17) || (bVar17 = IsInGameThread(), lVar22 = 4, bVar17)) {
    lVar22 = lVar31;
  }
  if ((*(int *)((longlong)pTVar15->ShadowedValue + lVar22) == 1) && ((bool)this->bEnableWind)) {
    if (FAnimPhys::bEnableDetailedStats == false) {
      pTVar29 = &TStatId::TStatId_NAME_None;
    }
    else {
      TVar24 = FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsWindData,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsWindData,1> *)
                          &StatPtr_STAT_AnimDynamicsWindData);
      pTVar29 = *(TStatIdData **)&(TVar24.StatIdPtr)->Name;
    }
    FVar1 = *(FName *)pTVar29;
    local_198.ComparisonIndex.Value = 0;
    local_198.Number = 0;
    local_1d8[0] = 0;
    FVar32 = FVar1.ComparisonIndex.Value;
    uVar18 = FVar1.Number;
    if ((FVar32.Value == 0) && (uVar18 == 0)) {
LAB_1464604b6:
      local_1c8 = local_198;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1b0[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1b0[0]._s_0,(char *)*(FName *)((longlong)pTVar29 + 0x10));
        lVar31 = 1;
        local_1d8[0] = 1;
        if (-1 < CpuChannel->Enabled) {
          local_1d0.ComparisonIndex.Value = FVar32.Value;
          local_1d0.Number = uVar18;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1d0,(wchar_t *)*(FName *)((longlong)pTVar29 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                     ,0x529);
          lVar31 = 3;
          local_1d8[0] = 3;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1464604b6;
      local_1c8 = FVar1;
      local_1a8 = FVar32.Value;
      uStack_1a4 = uVar18;
      FThreadStats::AddMessage(FVar1,CycleScopeStart);
      local_1d8[0] = (byte)lVar31 | 4;
    }
    fVar14 = __real_38800100;
    uVar13 = _UNK_15061cc8c;
    uVar12 = _UNK_15061cc88;
    uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar33 = (this->BaseBodyPtrs).AllocatorInstance.Data;
    iVar21 = (this->BaseBodyPtrs).ArrayNum;
    pFVar4 = pFVar33 + (longlong)iVar21 * 8;
    while( true ) {
      if ((this->BaseBodyPtrs).ArrayNum != iVar21) {
        local_1d8[1] = 0;
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1d8 + 1);
      }
      FVar30 = local_1c8;
      bVar34 = local_1d8[0];
      if (pFVar33 == pFVar4) break;
      pdVar2 = *(double **)pFVar33;
      *(byte *)(pdVar2 + 0x5a) = this->bEnableWind;
      if (((bool)this->bEnableWind) && (pFVar3 = pUVar23->Scene, pFVar3 != (FSceneInterface *)0x0))
      {
        *(undefined1 *)(pdVar2 + 0x5a) = 1;
        auVar61._0_8_ = this_00->_padding_;
        auVar61._8_8_ = this_00->_padding_;
        local_d8._0_8_ = this_00->_padding_;
        local_d8._8_8_ = this_00->_padding_;
        auVar55._0_8_ = this_00->_padding_;
        auVar55._8_8_ = this_00->_padding_;
        dVar7 = *pdVar2 * (double)this_00->_padding_;
        dVar58 = pdVar2[1] * (double)this_00->_padding_;
        uVar19 = (undefined4)((ulonglong)dVar58 >> 0x20);
        pdVar27 = &local_158;
        dVar8 = pdVar2[2] * (double)this_00->_padding_;
        dVar65 = (double)this_00->_padding_ * 0.0;
        dVar57 = (double)this_00->_padding_;
        auVar69._8_4_ = SUB84(dVar58,0);
        auVar69._0_8_ = dVar7;
        auVar69._12_4_ = uVar19;
        auVar48 = blendpd(local_d8,auVar61,2);
        auVar70._0_8_ = auVar69._8_8_ * (double)local_d8._0_8_ - (double)local_d8._8_8_ * dVar7;
        auVar70._8_8_ = dVar8 * (double)local_d8._8_8_ - (double)auVar61._0_8_ * dVar58;
        auVar66._8_4_ = SUB84(auVar70._8_8_,0);
        auVar66._0_8_ = auVar70._0_8_;
        auVar66._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
        auVar35._8_4_ = SUB84(dVar58,0);
        auVar35._0_8_ = dVar7;
        auVar35._12_4_ = uVar19;
        auVar36._8_4_ = SUB84(dVar65,0);
        auVar36._0_8_ = dVar8;
        auVar36._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
        auVar36 = blendpd(auVar35,auVar36,2);
        auVar37._0_8_ = auVar36._0_8_ * (double)auVar61._0_8_ - auVar48._0_8_ * dVar8;
        auVar37._8_8_ = auVar36._8_8_ * (double)auVar61._8_8_ - auVar48._8_8_ * dVar65;
        auVar36 = blendpd(auVar70,auVar37,2);
        dVar65 = auVar66._8_8_ + auVar66._8_8_;
        dVar68 = auVar37._0_8_ + auVar37._0_8_;
        auVar71._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar71._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar59._8_4_ = SUB84(dVar68,0);
        auVar59._0_8_ = dVar65;
        uVar19 = (undefined4)((ulonglong)dVar68 >> 0x20);
        auVar59._12_4_ = uVar19;
        auVar49._8_4_ = SUB84(dVar68,0);
        auVar49._0_8_ = dVar65;
        auVar49._12_4_ = uVar19;
        auVar36 = blendpd(auVar49,auVar71,2);
        auVar60._0_8_ = auVar59._8_8_ * (double)auVar55._0_8_ - (double)auVar55._8_8_ * dVar65;
        auVar60._8_8_ = auVar71._0_8_ * (double)auVar55._8_8_ - (double)auVar61._0_8_ * dVar68;
        auVar48._8_4_ = SUB84(auVar60._8_8_,0);
        auVar48._0_8_ = auVar60._0_8_;
        auVar48._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
        auVar55 = blendpd(auVar55,auVar61,2);
        auVar50._0_8_ = auVar36._0_8_ * (double)auVar61._0_8_ - auVar55._0_8_ * auVar71._0_8_;
        auVar50._8_8_ = auVar36._8_8_ * (double)auVar61._8_8_ - auVar55._8_8_ * auVar71._8_8_;
        auVar61 = blendpd(auVar60,auVar50,2);
        local_158 = dVar65 * dVar57 + dVar7 + auVar48._8_8_ + (double)this_00->_padding_;
        dStack_150 = dVar68 * dVar57 + dVar58 + auVar50._0_8_ + (double)this_00->_padding_;
        local_148 = auVar71._0_8_ * dVar57 + dVar8 + auVar61._0_8_ + (double)this_00->_padding_;
        uVar19 = (**(code **)(pFVar3->_padding_ + 0x3a0))
                           (pFVar3,pdVar27,pdVar2 + 0x5c,(longlong)pdVar2 + 0x2dc,&local_1a8,
                            local_178);
        auVar51._0_8_ =
             (double)CONCAT44(uVar11 & *(uint *)((longlong)&this_00->_padding_ + 4),
                              uVar18 & (uint)this_00->_padding_);
        auVar51._8_4_ = uVar12 & (uint)this_00->_padding_;
        auVar51._12_4_ = uVar13 & *(uint *)((longlong)&this_00->_padding_ + 4);
        auVar43._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar51._8_8_);
        auVar43._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar51._0_8_);
        uVar26 = movmskpd((int)pdVar27,auVar43);
        auVar52._0_8_ =
             (double)CONCAT44(uVar11 & *(uint *)((longlong)&this_00->_padding_ + 4),
                              uVar18 & (uint)this_00->_padding_);
        auVar52._8_4_ = uVar12 & (uint)this_00->_padding_;
        auVar52._12_4_ = uVar13 & *(uint *)((longlong)&this_00->_padding_ + 4);
        auVar38._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar52._8_8_);
        auVar38._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar52._0_8_);
        iVar20 = movmskpd(uVar19,auVar38);
        if ((uVar26 & 0x3fffffff) == 0 && iVar20 == 0) {
          uVar19 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar81 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar82 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar83 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          uVar77 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar78 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar79 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar80 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar63 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar75 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar76 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_138.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_138.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_138.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_138.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_138.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_138.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)&this_00->_padding_,&local_138);
          uVar63 = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar64 = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar75 = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar76 = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar77 = local_138.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar78 = local_138.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar79 = local_138.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar80 = local_138.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar19 = local_138.Rotation.XY.m128d_f64[0]._0_4_;
          uVar81 = local_138.Rotation.XY.m128d_f64[0]._4_4_;
          uVar82 = local_138.Rotation.XY.m128d_f64[1]._0_4_;
          uVar83 = local_138.Rotation.XY.m128d_f64[1]._4_4_;
        }
        auVar56._4_4_ = uVar81;
        auVar56._0_4_ = uVar19;
        auVar56._8_4_ = uVar82;
        auVar56._12_4_ = uVar83;
        dVar8 = (double)CONCAT44(uVar64,uVar63) * pdVar2[0x5c];
        dVar65 = (double)CONCAT44(uVar76,uVar75) * pdVar2[0x5d];
        uVar63 = (undefined4)((ulonglong)dVar65 >> 0x20);
        dVar7 = pdVar2[0x5e] * local_138.Scale3D.ZW.m128d_f64[0];
        dVar58 = local_138.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar57 = auVar56._8_8_;
        auVar72._8_4_ = SUB84(dVar65,0);
        auVar72._0_8_ = dVar8;
        auVar72._12_4_ = uVar63;
        auVar39._8_4_ = uVar77;
        auVar39._0_8_ = dVar57;
        auVar39._12_4_ = uVar78;
        auVar67._4_4_ = uVar81;
        auVar67._0_4_ = uVar19;
        auVar67._8_4_ = uVar82;
        auVar67._12_4_ = uVar83;
        auVar44._8_4_ = SUB84(dVar65,0);
        auVar44._0_8_ = dVar8;
        auVar44._12_4_ = uVar63;
        auVar73._0_8_ = auVar72._8_8_ * (double)CONCAT44(uVar81,uVar19) - dVar57 * dVar8;
        auVar73._8_8_ = dVar7 * (double)CONCAT44(uVar83,uVar82) - auVar39._8_8_ * dVar65;
        auVar6._8_4_ = SUB84(dVar58,0);
        auVar6._0_8_ = dVar7;
        auVar6._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
        auVar61 = blendpd(auVar44,auVar6,2);
        auVar62._8_4_ = SUB84(auVar73._8_8_,0);
        auVar62._0_8_ = auVar73._0_8_;
        auVar62._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
        auVar9._4_4_ = uVar78;
        auVar9._0_4_ = uVar77;
        auVar9._8_4_ = uVar79;
        auVar9._12_4_ = uVar80;
        auVar55 = blendpd(auVar67,auVar9,2);
        auVar45._0_8_ = auVar61._0_8_ * (double)CONCAT44(uVar78,uVar77) - auVar55._0_8_ * dVar7;
        auVar45._8_8_ = auVar61._8_8_ * (double)CONCAT44(uVar80,uVar79) - auVar55._8_8_ * dVar58;
        auVar61 = blendpd(auVar73,auVar45,2);
        dVar58 = auVar62._8_8_ + auVar62._8_8_;
        dVar68 = auVar45._0_8_ + auVar45._0_8_;
        auVar74._0_8_ = auVar61._0_8_ + auVar61._0_8_;
        auVar74._8_8_ = auVar61._8_8_ + auVar61._8_8_;
        uVar63 = SUB84(dVar68,0);
        auVar53._8_4_ = uVar63;
        auVar53._0_8_ = dVar58;
        uVar64 = (undefined4)((ulonglong)dVar68 >> 0x20);
        auVar53._12_4_ = uVar64;
        auVar40._8_4_ = uVar63;
        auVar40._0_8_ = dVar58;
        auVar40._12_4_ = uVar64;
        auVar46._8_4_ = uVar63;
        auVar46._0_8_ = dVar58;
        auVar46._12_4_ = uVar64;
        auVar61 = blendpd(auVar46,auVar74,2);
        auVar54._0_8_ = auVar53._8_8_ * (double)CONCAT44(uVar81,uVar19) - dVar58 * dVar57;
        auVar54._8_8_ =
             auVar74._0_8_ * (double)CONCAT44(uVar83,uVar82) -
             auVar40._8_8_ * (double)CONCAT44(uVar78,uVar77);
        auVar41._8_4_ = SUB84(auVar74._8_8_,0);
        auVar41._0_8_ = auVar74._0_8_;
        auVar41._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
        auVar47._0_8_ =
             auVar61._0_8_ * (double)CONCAT44(uVar78,uVar77) - auVar74._0_8_ * auVar55._0_8_;
        auVar47._8_8_ =
             auVar61._8_8_ * (double)CONCAT44(uVar80,uVar79) - auVar41._8_8_ * auVar55._8_8_;
        auVar42._8_4_ = SUB84(auVar54._8_8_,0);
        auVar42._0_8_ = auVar54._0_8_;
        auVar42._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
        local_d8._0_8_ = dVar58 * (double)CONCAT44(uVar80,uVar79) + dVar8 + auVar42._8_8_;
        local_d8._8_8_ = dVar68 * (double)CONCAT44(uVar80,uVar79) + dVar65 + auVar47._0_8_;
        auVar61 = blendpd(auVar54,auVar47,2);
        local_c8 = auVar74._0_8_ * (double)CONCAT44(uVar80,uVar79) + dVar7 + auVar61._0_8_;
        pdVar2[0x5c] = (double)local_d8._0_8_;
        pdVar2[0x5d] = (double)local_d8._8_8_;
        pdVar2[0x5e] = local_c8;
        uVar26 = rand();
        *(float *)(pdVar2 + 0x5f) = (float)(uVar26 & 0x7fff) * fVar14;
        *(float *)(pdVar2 + 0x5b) = this->WindScale;
      }
      pFVar33 = pFVar33 + 8;
    }
    if ((local_1d8[0] & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((bVar34 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    if (this->bWindWasEnabled == 0) goto LAB_146460a4c;
    if (FAnimPhys::bEnableDetailedStats == false) {
      pTVar29 = &TStatId::TStatId_NAME_None;
    }
    else {
      TVar24 = FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsWindData,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsWindData,1> *)
                          &StatPtr_STAT_AnimDynamicsWindData);
      pTVar29 = *(TStatIdData **)&(TVar24.StatIdPtr)->Name;
    }
    FVar1 = *(FName *)pTVar29;
    bVar34 = 0;
    local_188.ComparisonIndex.Value = 0;
    local_188.Number = 0;
    FVar32 = FVar1.ComparisonIndex.Value;
    uVar18 = FVar1.Number;
    if ((FVar32.Value != 0) || (FVar30 = local_188, uVar18 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1c8 = (FName)((ulonglong)local_1c8 & 0xffffffff00000000);
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1c8,(char *)*(FName *)((longlong)pTVar29 + 0x10));
        bVar34 = 1;
        if (-1 < CpuChannel->Enabled) {
          local_1a0.ComparisonIndex.Value = FVar32.Value;
          local_1a0.Number = uVar18;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1a0,(wchar_t *)*(FName *)((longlong)pTVar29 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                     ,0x543);
          bVar34 = 3;
        }
      }
      FVar30 = local_188;
      if (FThreadStats::bPrimaryEnable != false) {
        local_1d0.ComparisonIndex.Value = FVar32.Value;
        local_1d0.Number = uVar18;
        FThreadStats::AddMessage(FVar1,CycleScopeStart);
        bVar34 = bVar34 | 4;
        FVar30 = FVar1;
      }
    }
    this->bWindWasEnabled = '\0';
    pFVar33 = (this->BaseBodyPtrs).AllocatorInstance.Data;
    iVar21 = (this->BaseBodyPtrs).ArrayNum;
    pFVar4 = pFVar33 + (longlong)iVar21 * 8;
    while( true ) {
      if ((this->BaseBodyPtrs).ArrayNum != iVar21) {
        local_1d8[0] = 0;
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1d8);
      }
      if (pFVar33 == pFVar4) break;
      lVar31 = *(longlong *)pFVar33;
      pFVar33 = pFVar33 + 8;
      *(undefined1 *)(lVar31 + 0x2d0) = 0;
    }
    if ((bVar34 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((bVar34 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((bVar34 & 4) != 0) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
LAB_146460a4c:
  this->FilteredBoneIndex = -1;
  pTVar16 = CVarDebugBone.Ref;
  bVar17 = IsInParallelGameThread();
  if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = pTVar16->ShadowedValue[0].Data.ArrayNum;
  lVar31 = (longlong)local_1b8;
  pFVar4 = pTVar16->ShadowedValue[0].Data.AllocatorInstance.Data;
  if (local_1b8 == 0) {
    local_1b4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b8,0,&local_1c0,local_1b8,&local_1b4);
    memcpy(local_1c0.Data,pFVar4,lVar31 * 2);
  }
  iVar21 = local_1b8 + -1;
  if (local_1b8 == 0) {
    iVar21 = 0;
  }
  if (0 < iVar21) {
    FVar28.Data = (FScriptContainerElement *)L"";
    if (local_1b8 != 0) {
      FVar28.Data = local_1c0.Data;
    }
    pFVar25 = ::FName::FName(&local_160,(wchar_t *)FVar28.Data);
    iVar21 = USkinnedMeshComponent::GetBoneIndex((USkinnedMeshComponent *)this_00,*pFVar25);
    this->FilteredBoneIndex = iVar21;
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  return;
}

// RequestInitialise @ 146464280

void __thiscall
FAnimNode_AnimDynamics::RequestInitialise(FAnimNode_AnimDynamics *this,ETeleportType param_1)

{
  ETeleportType EVar1;
  
  EVar1 = this->InitTeleportType;
  if (this->InitTeleportType < param_1) {
    EVar1 = param_1;
  }
  this->InitTeleportType = EVar1;
  return;
}

// ResetDynamics @ 146464410

void __thiscall
FAnimNode_AnimDynamics::ResetDynamics(FAnimNode_AnimDynamics *this,ETeleportType param_1)

{
  ETeleportType EVar1;
  
  EVar1 = this->InitTeleportType;
  if (this->InitTeleportType < param_1) {
    EVar1 = param_1;
  }
  this->InitTeleportType = EVar1;
  return;
}

// ShouldDoPhysicsUpdate @ 14646b710

bool __thiscall FAnimNode_AnimDynamics::ShouldDoPhysicsUpdate(FAnimNode_AnimDynamics *this)

{
  return this->bDoUpdate;
}

// TermPhysics @ 14646ebc0

void __thiscall FAnimNode_AnimDynamics::TermPhysics(FAnimNode_AnimDynamics *this)

{
  int *piVar1;
  int iVar2;
  FAnimPhysLinkedBody *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  piVar1 = &(this->Bodies).ArrayMax;
  pFVar3 = (FAnimPhysLinkedBody *)(this->Bodies).AllocatorInstance.Data;
  iVar2 = (this->Bodies).ArrayNum;
  if ((this->Bodies).ArrayMax < 0) {
    DestructItems<FAnimPhysLinkedBody,int>(pFVar3,iVar2);
    (this->Bodies).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x400,0x10,0,&(this->Bodies).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAnimPhysLinkedBody,int>(pFVar3,iVar2);
    (this->Bodies).ArrayNum = 0;
  }
  (this->LinearLimits).ArrayNum = 0;
  if ((this->LinearLimits).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,0,&(this->LinearLimits).AllocatorInstance,0,&(this->LinearLimits).ArrayMax);
  }
  (this->AngularLimits).ArrayNum = 0;
  if ((this->AngularLimits).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->AngularLimits).AllocatorInstance,0,&(this->AngularLimits).ArrayMax);
  }
  (this->Springs).ArrayNum = 0;
  if ((this->Springs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,&(this->Springs).AllocatorInstance,0,&(this->Springs).ArrayMax);
  }
  (this->ActiveBoneIndices).ArrayNum = 0;
  if ((this->ActiveBoneIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ActiveBoneIndices).AllocatorInstance,0,
               &(this->ActiveBoneIndices).ArrayMax);
  }
  (this->PhysicsBodyJointOffsets).ArrayNum = 0;
  if ((this->PhysicsBodyJointOffsets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PhysicsBodyJointOffsets).AllocatorInstance,0,
               &(this->PhysicsBodyJointOffsets).ArrayMax);
  }
  (this->ConstraintOffsets).ArrayNum = 0;
  if ((this->ConstraintOffsets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->ConstraintOffsets).AllocatorInstance,0,
               &(this->ConstraintOffsets).ArrayMax);
  }
  (this->BodiesToReset).ArrayNum = 0;
  if ((this->BodiesToReset).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BodiesToReset).AllocatorInstance,0,&(this->BodiesToReset).ArrayMax);
  }
  iVar2 = (this->PhysicsBodyDefinitions).ArrayNum;
  pFVar4 = (this->PhysicsBodyDefinitions).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0xd0;
  while( true ) {
    if ((this->PhysicsBodyDefinitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimPhysBodyDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    *(uint *)(pFVar4 + 8) = *(uint *)(pFVar4 + 8) | 0x7fffffff;
    pFVar4 = pFVar4 + 0xd0;
  }
  return;
}

// TransformWorldVectorToSimSpace @ 14646f6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
FAnimNode_AnimDynamics::TransformWorldVectorToSimSpace
          (FAnimNode_AnimDynamics *this,TVector<double> *__return_storage_ptr__,
          FComponentSpacePoseContext *param_1,TVector<double> *param_2)

{
  AnimPhysSimSpaceType AVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  TConsoleVariableData<bool> *pTVar13;
  bool bVar14;
  FCompactPoseBoneIndex FVar15;
  longlong lVar16;
  undefined4 extraout_var;
  TTransform<double> *pTVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar51;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_188 [48];
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_188;
  auVar48._0_8_ = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar48._0_8_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  pTVar13 = CVarDisableWorldSpace.Ref;
  if (this->SimulationSpace == World) {
    bVar14 = IsInParallelGameThread();
    if ((bVar14) || (bVar14 = IsInGameThread(), bVar14)) {
      lVar16 = 0;
    }
    else {
      lVar16 = 1;
    }
    if (pTVar13->ShadowedValue[lVar16] != false) {
      auVar32 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
      lVar16 = param_1->_padding_;
      auVar48._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.Z;
      dVar51 = auVar32._8_8_;
      dVar52 = *(double *)(lVar16 + 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar6 = *(double *)(lVar16 + 0x28) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar53 = *(double *)(lVar16 + 0x30) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = *(double *)(lVar16 + 0x38) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar48._0_8_;
      auVar18 = blendpd(auVar32,auVar10,2);
      auVar33._8_4_ = SUB84(dVar6,0);
      auVar33._0_8_ = dVar52;
      auVar33._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar34._8_4_ = SUB84(dVar9,0);
      auVar34._0_8_ = dVar53;
      auVar34._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar34 = blendpd(auVar33,auVar34,2);
      auVar45._0_8_ = dVar51 * dVar52 - auVar32._0_8_ * dVar6;
      auVar45._8_8_ = auVar48._0_8_ * dVar6 - dVar51 * dVar53;
      auVar19._0_8_ = auVar18._0_8_ * dVar53 - auVar48._0_8_ * auVar34._0_8_;
      auVar19._8_8_ = auVar18._8_8_ * dVar9 - auVar34._8_8_ * 0.0;
      auVar18 = blendpd(auVar45,auVar19,2);
      dVar3 = auVar45._8_8_ + auVar45._8_8_;
      dVar4 = auVar19._0_8_ + auVar19._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar46._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar46._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar27._8_4_ = SUB84(dVar4,0);
      auVar27._0_8_ = dVar3;
      auVar27._12_4_ = uVar37;
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3;
      auVar20._12_4_ = uVar37;
      auVar18 = blendpd(auVar20,auVar46,2);
      auVar28._0_8_ = auVar27._8_8_ * dVar52 - dVar3 * dVar6;
      auVar28._8_8_ = auVar46._0_8_ * dVar6 - dVar4 * dVar53;
      auVar21._0_8_ = auVar18._0_8_ * dVar53 - auVar46._0_8_ * auVar34._0_8_;
      auVar21._8_8_ = auVar18._8_8_ * dVar9 - auVar46._8_8_ * auVar34._8_8_;
      auVar34 = blendpd(auVar28,auVar21,2);
      dVar4 = dVar4 * dVar9 + dVar51 + auVar21._0_8_;
      auVar18._8_4_ = SUB84(dVar4,0);
      auVar18._0_8_ = dVar3 * dVar9 + auVar32._0_8_ + auVar28._8_8_;
      auVar18._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar18;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           auVar46._0_8_ * dVar9 + auVar48._0_8_ + auVar34._0_8_;
    }
  }
  AVar1 = this->SimulationSpace;
  if (AVar1 == Component) {
    lVar16 = param_1->_padding_;
    uVar37 = *(undefined4 *)(lVar16 + 0x20);
    uVar38 = *(undefined4 *)(lVar16 + 0x24);
    uVar39 = *(undefined4 *)(lVar16 + 0x28);
    uVar40 = *(undefined4 *)(lVar16 + 0x2c);
    uVar42 = *(undefined4 *)(lVar16 + 0x30);
    uVar41 = *(undefined4 *)(lVar16 + 0x34);
    uVar43 = *(undefined4 *)(lVar16 + 0x38);
    uVar44 = *(undefined4 *)(lVar16 + 0x3c);
  }
  else {
    if (AVar1 != Actor) {
      if (AVar1 == RootRelative) {
        FVar15 = (FCompactPoseBoneIndex)0x0;
      }
      else {
        if (AVar1 != BoneRelative) {
          return __return_storage_ptr__;
        }
        bVar14 = FBoneReference::IsValidToEvaluate
                           (&this->RelativeSpaceBone,
                            *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10);
        if (!bVar14) {
          return __return_storage_ptr__;
        }
        FVar15 = FBoneReference::GetCompactPoseIndex
                           (&this->RelativeSpaceBone,(FBoneContainer *)(auStack_188 + 0x20));
        FVar15 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar15);
      }
      pTVar17 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar15);
      local_f8.Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = (pTVar17->Rotation).XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = (pTVar17->Rotation).ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = (pTVar17->Translation).XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = (pTVar17->Translation).XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = (pTVar17->Translation).ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] = (pTVar17->Translation).ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] = (pTVar17->Scale3D).XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar17->Scale3D).ZW.m128d_f64[1];
      local_158.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_158.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_158.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_158.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_158.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_158.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_158.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_158.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_158,(TTransform<double> *)(param_1->_padding_ + 0x20),&local_f8);
      auVar32 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
      auVar48._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.Z;
      uVar38 = SUB84(auVar48._0_8_,0);
      uVar39 = (undefined4)((ulonglong)auVar48._0_8_ >> 0x20);
      local_158.Rotation.XY.m128d_f64[0] =
           local_158.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_158.Rotation.XY.m128d_f64[1] =
           local_158.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_158.Rotation.ZW.m128d_f64[0] =
           local_158.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_158.Rotation.ZW.m128d_f64[1] =
           local_158.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar42 = SUB84(local_158.Rotation.ZW.m128d_f64[1],0);
      dVar52 = auVar32._8_8_;
      auVar35._8_4_ = SUB84(local_158.Rotation.XY.m128d_f64[1],0);
      auVar35._0_8_ = local_158.Rotation.XY.m128d_f64[0];
      auVar35._12_4_ = (int)((ulonglong)local_158.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar7._8_4_ = uVar42;
      auVar7._0_8_ = local_158.Rotation.ZW.m128d_f64[0];
      auVar7._12_4_ = (int)((ulonglong)local_158.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar34 = blendpd(auVar35,auVar7,2);
      auVar47._0_8_ =
           dVar52 * local_158.Rotation.XY.m128d_f64[0] -
           auVar32._0_8_ * local_158.Rotation.XY.m128d_f64[1];
      auVar47._8_8_ =
           auVar48._0_8_ * local_158.Rotation.XY.m128d_f64[1] -
           dVar52 * local_158.Rotation.ZW.m128d_f64[0];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar48._0_8_;
      auVar18 = blendpd(auVar32,auVar11,2);
      auVar22._0_8_ =
           auVar18._0_8_ * local_158.Rotation.ZW.m128d_f64[0] - auVar48._0_8_ * auVar34._0_8_;
      auVar22._8_8_ = auVar18._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar34._8_8_ * 0.0;
      dVar3 = auVar47._8_8_ + auVar47._8_8_;
      dVar4 = auVar22._0_8_ + auVar22._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar18 = blendpd(auVar47,auVar22,2);
      auVar48._0_8_ = auVar18._0_8_ + auVar18._0_8_;
      auVar48._8_8_ = auVar18._8_8_ + auVar18._8_8_;
      auVar29._8_4_ = SUB84(dVar4,0);
      auVar29._0_8_ = dVar3;
      auVar29._12_4_ = uVar37;
      auVar23._8_4_ = SUB84(dVar4,0);
      auVar23._0_8_ = dVar3;
      auVar23._12_4_ = uVar37;
      auVar18 = blendpd(auVar23,auVar48,2);
      auVar30._0_8_ =
           auVar29._8_8_ * local_158.Rotation.XY.m128d_f64[0] -
           dVar3 * local_158.Rotation.XY.m128d_f64[1];
      auVar30._8_8_ =
           auVar48._0_8_ * local_158.Rotation.XY.m128d_f64[1] -
           dVar4 * local_158.Rotation.ZW.m128d_f64[0];
      auVar24._0_8_ =
           auVar18._0_8_ * local_158.Rotation.ZW.m128d_f64[0] - auVar48._0_8_ * auVar34._0_8_;
      auVar24._8_8_ =
           auVar18._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar48._8_8_ * auVar34._8_8_;
      dVar4 = dVar4 * local_158.Rotation.ZW.m128d_f64[1] + dVar52 + auVar24._0_8_;
      auVar5._8_4_ = SUB84(dVar4,0);
      auVar5._0_8_ = dVar3 * local_158.Rotation.ZW.m128d_f64[1] + auVar32._0_8_ + auVar30._8_8_;
      auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar5;
      goto LAB_14646fb46;
    }
    lVar16 = param_1->_padding_;
    uVar37 = *(undefined4 *)(lVar16 + 0xe0);
    uVar38 = *(undefined4 *)(lVar16 + 0xe4);
    uVar39 = *(undefined4 *)(lVar16 + 0xe8);
    uVar40 = *(undefined4 *)(lVar16 + 0xec);
    uVar42 = *(undefined4 *)(lVar16 + 0xf0);
    uVar41 = *(undefined4 *)(lVar16 + 0xf4);
    uVar43 = *(undefined4 *)(lVar16 + 0xf8);
    uVar44 = *(undefined4 *)(lVar16 + 0xfc);
  }
  dVar6 = (double)CONCAT44(uVar41,uVar42) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_158.Rotation.ZW.m128d_f64[1] =
       (double)CONCAT44(uVar44,uVar43) *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar42 = SUB84(local_158.Rotation.ZW.m128d_f64[1],0);
  dVar4 = (double)CONCAT44(uVar38,uVar37) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar52 = (double)CONCAT44(uVar40,uVar39) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar32 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
  auVar48._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  uVar38 = SUB84(auVar48._0_8_,0);
  uVar39 = (undefined4)((ulonglong)auVar48._0_8_ >> 0x20);
  dVar53 = auVar32._8_8_;
  auVar36._8_4_ = SUB84(dVar52,0);
  auVar36._0_8_ = dVar4;
  auVar36._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
  auVar49._0_8_ = dVar53 * dVar4 - auVar32._0_8_ * dVar52;
  auVar49._8_8_ = auVar48._0_8_ * dVar52 - dVar53 * dVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = auVar48._0_8_;
  auVar18 = blendpd(auVar32,auVar12,2);
  auVar8._8_4_ = uVar42;
  auVar8._0_8_ = dVar6;
  auVar8._12_4_ = (int)((ulonglong)local_158.Rotation.ZW.m128d_f64[1] >> 0x20);
  auVar34 = blendpd(auVar36,auVar8,2);
  auVar25._0_8_ = auVar18._0_8_ * dVar6 - auVar48._0_8_ * auVar34._0_8_;
  auVar25._8_8_ = auVar18._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar34._8_8_ * 0.0;
  auVar48._0_8_ = auVar49._8_8_ + auVar49._8_8_;
  dVar3 = auVar25._0_8_ + auVar25._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar18 = blendpd(auVar49,auVar25,2);
  auVar31._8_4_ = SUB84(dVar3,0);
  auVar31._0_8_ = auVar48._0_8_;
  auVar31._12_4_ = uVar37;
  auVar26._8_4_ = SUB84(dVar3,0);
  auVar26._0_8_ = auVar48._0_8_;
  auVar26._12_4_ = uVar37;
  auVar50._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar50._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar18 = blendpd(auVar26,auVar50,2);
  auVar30._0_8_ = auVar31._8_8_ * dVar4 - auVar48._0_8_ * dVar52;
  auVar30._8_8_ = auVar50._0_8_ * dVar52 - dVar3 * dVar6;
  auVar24._0_8_ = auVar18._0_8_ * dVar6 - auVar50._0_8_ * auVar34._0_8_;
  auVar24._8_8_ = auVar18._8_8_ * local_158.Rotation.ZW.m128d_f64[1] - auVar50._8_8_ * auVar34._8_8_
  ;
  dVar3 = dVar3 * local_158.Rotation.ZW.m128d_f64[1] + dVar53 + auVar24._0_8_;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = auVar48._0_8_ * local_158.Rotation.ZW.m128d_f64[1] + auVar32._0_8_ + auVar30._8_8_;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  auVar48._0_8_ = auVar50._0_8_;
LAB_14646fb46:
  auVar32 = blendpd(auVar30,auVar24,2);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       auVar48._0_8_ *
       (double)CONCAT44((int)((ulonglong)local_158.Rotation.ZW.m128d_f64[1] >> 0x20),uVar42) +
       (double)CONCAT44(uVar39,uVar38) + auVar32._0_8_;
  return __return_storage_ptr__;
}

// TransformWorldVectorToSimSpaceScaled @ 14646fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FAnimNode_AnimDynamics::TransformWorldVectorToSimSpaceScaled
          (FAnimNode_AnimDynamics *this,TVector<double> *__return_storage_ptr__,
          FComponentSpacePoseContext *param_1,TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  AnimPhysSimSpaceType AVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TConsoleVariableData<bool> *pTVar18;
  bool bVar19;
  FCompactPoseBoneIndex FVar20;
  longlong lVar21;
  undefined4 extraout_var;
  TTransform<double> *pTVar22;
  TVector<double> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined4 uVar56;
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
  double dVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [32];
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  dVar37 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar37;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  pTVar18 = CVarDisableWorldSpace.Ref;
  if (this->SimulationSpace == World) {
    bVar19 = IsInParallelGameThread();
    if ((bVar19) || (bVar19 = IsInGameThread(), bVar19)) {
      lVar21 = 0;
    }
    else {
      lVar21 = 1;
    }
    if (pTVar18->ShadowedValue[lVar21] != false) {
      lVar21 = param_1->_padding_;
      auVar1 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
      dVar37 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
      dVar47 = *(double *)(lVar21 + 0x20) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar48 = *(double *)(lVar21 + 0x28) *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar6 = *(double *)(lVar21 + 0x30) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar7 = *(double *)(lVar21 + 0x38) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar49 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar66._8_4_ = SUB84(dVar7,0);
      auVar66._0_8_ = dVar6;
      auVar66._12_4_ = uVar49;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = dVar37;
      auVar38 = blendpd(auVar1,auVar40,2);
      auVar27._8_4_ = SUB84(dVar6,0);
      auVar27._0_8_ = dVar48;
      auVar27._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar74 = auVar1._8_8_;
      auVar43._8_4_ = SUB84(dVar48,0);
      auVar43._0_8_ = dVar47;
      auVar43._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      auVar70._0_8_ = dVar74 * dVar47 - dVar48 * auVar1._0_8_;
      auVar70._8_8_ = dVar37 * dVar48 - auVar27._8_8_ * dVar74;
      auVar44._8_4_ = SUB84(dVar7,0);
      auVar44._0_8_ = dVar6;
      auVar44._12_4_ = uVar49;
      auVar44 = blendpd(auVar43,auVar44,2);
      auVar39._0_8_ = auVar38._0_8_ * dVar6 - auVar44._0_8_ * dVar37;
      auVar39._8_8_ = auVar38._8_8_ * dVar7 - auVar44._8_8_ * 0.0;
      auVar38 = blendpd(auVar70,auVar39,2);
      dVar10 = auVar70._8_8_ + auVar70._8_8_;
      dVar11 = auVar39._0_8_ + auVar39._0_8_;
      uVar49 = SUB84(dVar11,0);
      uVar56 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar71._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar71._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      auVar57._8_4_ = uVar49;
      auVar57._0_8_ = dVar10;
      auVar57._12_4_ = uVar56;
      auVar28._8_4_ = uVar49;
      auVar28._0_8_ = dVar10;
      auVar28._12_4_ = uVar56;
      auVar50._8_4_ = uVar49;
      auVar50._0_8_ = dVar10;
      auVar50._12_4_ = uVar56;
      auVar38 = blendpd(auVar50,auVar71,2);
      auVar58._0_8_ = auVar57._8_8_ * dVar47 - dVar10 * dVar48;
      auVar58._8_8_ = auVar71._0_8_ * dVar48 - auVar28._8_8_ * dVar6;
      auVar29._8_4_ = SUB84(auVar71._8_8_,0);
      auVar29._0_8_ = auVar71._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar51._0_8_ = auVar38._0_8_ * dVar6 - auVar71._0_8_ * auVar44._0_8_;
      auVar51._8_8_ = auVar38._8_8_ * dVar7 - auVar29._8_8_ * auVar44._8_8_;
      auVar38 = *(undefined1 (*) [16])(lVar21 + 0x70);
      lVar24 = -(ulonglong)
                ((double)CONCAT44(uVar15 & auVar38._4_4_,uVar14 & auVar38._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(lVar21 + 0x60));
      lVar25 = -(ulonglong)
                ((double)CONCAT44(uVar15 & *(uint *)(lVar21 + 100),uVar14 & *(uint *)(lVar21 + 0x60)
                                 ) <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar21 = -(ulonglong)
                ((double)CONCAT44(uVar17 & *(uint *)(lVar21 + 0x6c),
                                  uVar16 & *(uint *)(lVar21 + 0x68)) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar30._8_4_ = SUB84(auVar58._8_8_,0);
      auVar30._0_8_ = auVar58._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      auVar59._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar59._0_8_ = auVar38._0_8_;
      auVar59._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar59);
      auVar59 = blendpd(auVar58,auVar51,2);
      dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar40._12_4_,
                               ~(uint)lVar21 & auVar40._8_4_) *
              (dVar11 * dVar7 + dVar74 + auVar51._0_8_);
      auVar38._8_4_ = SUB84(dVar6,0);
      auVar38._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar40._4_4_,
                            ~(uint)lVar25 & auVar40._0_4_) *
           (dVar10 * auVar66._8_8_ + auVar1._0_8_ + auVar30._8_8_);
      auVar38._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar38;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                            ~(uint)lVar24 & auVar44._0_4_) *
           (auVar71._0_8_ * auVar66._8_8_ + dVar37 + auVar59._0_8_);
    }
  }
  AVar2 = this->SimulationSpace;
  if (AVar2 == Component) {
    lVar21 = param_1->_padding_;
    auVar1 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar47 = *(double *)(lVar21 + 0x20) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar48 = *(double *)(lVar21 + 0x28) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar6 = *(double *)(lVar21 + 0x30) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar7 = *(double *)(lVar21 + 0x38) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar35._8_4_ = SUB84(dVar6,0);
    auVar35._0_8_ = dVar48;
    auVar35._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar74 = auVar1._8_8_;
    auVar46._8_4_ = SUB84(dVar48,0);
    auVar46._0_8_ = dVar47;
    auVar46._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    dVar37 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    auVar54._0_8_ =
         (double)CONCAT44(*(uint *)(lVar21 + 100) & uVar15,*(uint *)(lVar21 + 0x60) & uVar14);
    auVar54._8_4_ = *(uint *)(lVar21 + 0x68) & uVar16;
    auVar54._12_4_ = *(uint *)(lVar21 + 0x6c) & uVar17;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar37;
    auVar38 = blendpd(auVar1,auVar13,2);
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar59 = blendpd(auVar46,auVar5,2);
    auVar68._0_8_ = dVar74 * dVar47 - dVar48 * auVar1._0_8_;
    auVar68._8_8_ = dVar37 * dVar48 - auVar35._8_8_ * dVar74;
    auVar42._0_8_ = auVar38._0_8_ * dVar6 - auVar59._0_8_ * dVar37;
    auVar42._8_8_ = auVar38._8_8_ * dVar7 - auVar59._8_8_ * 0.0;
    auVar38 = *(undefined1 (*) [16])(lVar21 + 0x70);
    auVar44 = blendpd(auVar68,auVar42,2);
    dVar10 = auVar68._8_8_ + auVar68._8_8_;
    dVar11 = auVar42._0_8_ + auVar42._0_8_;
    uVar49 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar69._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar69._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar64._8_4_ = SUB84(dVar11,0);
    auVar64._0_8_ = dVar10;
    auVar64._12_4_ = uVar49;
    auVar62._8_4_ = SUB84(dVar11,0);
    auVar62._0_8_ = dVar10;
    auVar62._12_4_ = uVar49;
    auVar40 = blendpd(auVar62,auVar69,2);
    auVar65._0_8_ = auVar64._8_8_ * dVar47 - dVar48 * dVar10;
    auVar65._8_8_ = auVar69._0_8_ * dVar48 - dVar6 * dVar11;
    lVar24 = -(ulonglong)(auVar54._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar26 = -(ulonglong)(auVar54._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar36._8_4_ = SUB84(auVar65._8_8_,0);
    auVar36._0_8_ = auVar65._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    lVar25 = -(ulonglong)
              ((double)CONCAT44(auVar38._4_4_ & uVar15,auVar38._0_4_ & uVar14) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                    *(undefined1 (*) [16])(lVar21 + 0x60));
    auVar63._0_8_ = auVar40._0_8_ * dVar6 - auVar59._0_8_ * auVar69._0_8_;
    auVar63._8_8_ = auVar40._8_8_ * dVar7 - auVar59._8_8_ * auVar69._8_8_;
    auVar55._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                          ~(uint)lVar24 & auVar44._0_4_);
    auVar55._8_4_ = ~(uint)lVar26 & auVar44._8_4_;
    auVar55._12_4_ = ~(uint)((ulonglong)lVar26 >> 0x20) & auVar44._12_4_;
    auVar9._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar9._0_8_ = auVar38._0_8_;
    auVar9._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar9);
    auVar44 = blendpd(auVar65,auVar63,2);
    dVar37 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar38._4_4_,
                              ~(uint)lVar25 & auVar38._0_4_) *
             (dVar7 * auVar69._0_8_ + dVar37 + auVar44._0_8_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         auVar55._0_8_ * (dVar7 * dVar10 + auVar1._0_8_ + auVar36._8_8_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         auVar55._8_8_ * (dVar7 * dVar11 + dVar74 + auVar63._0_8_);
  }
  else if (AVar2 == Actor) {
    lVar21 = param_1->_padding_;
    auVar1 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar37 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar47 = *(double *)(lVar21 + 0xe0) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar48 = *(double *)(lVar21 + 0xe8) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar6 = *(double *)(lVar21 + 0xf0) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar7 = *(double *)(lVar21 + 0xf8) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar49 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar67._8_4_ = SUB84(dVar7,0);
    auVar67._0_8_ = dVar6;
    auVar67._12_4_ = uVar49;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar37;
    auVar38 = blendpd(auVar1,auVar12,2);
    auVar31._8_4_ = SUB84(dVar6,0);
    auVar31._0_8_ = dVar48;
    auVar31._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    dVar74 = auVar1._8_8_;
    auVar45._8_4_ = SUB84(dVar48,0);
    auVar45._0_8_ = dVar47;
    auVar45._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
    auVar72._0_8_ = dVar74 * dVar47 - dVar48 * auVar1._0_8_;
    auVar72._8_8_ = dVar37 * dVar48 - auVar31._8_8_ * dVar74;
    auVar4._8_4_ = SUB84(dVar7,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = uVar49;
    auVar44 = blendpd(auVar45,auVar4,2);
    auVar41._0_8_ = auVar38._0_8_ * dVar6 - auVar44._0_8_ * dVar37;
    auVar41._8_8_ = auVar38._8_8_ * dVar7 - auVar44._8_8_ * 0.0;
    auVar38 = blendpd(auVar72,auVar41,2);
    dVar10 = auVar72._8_8_ + auVar72._8_8_;
    dVar11 = auVar41._0_8_ + auVar41._0_8_;
    uVar49 = SUB84(dVar11,0);
    uVar56 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar73._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar73._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    auVar60._8_4_ = uVar49;
    auVar60._0_8_ = dVar10;
    auVar60._12_4_ = uVar56;
    auVar32._8_4_ = uVar49;
    auVar32._0_8_ = dVar10;
    auVar32._12_4_ = uVar56;
    auVar52._8_4_ = uVar49;
    auVar52._0_8_ = dVar10;
    auVar52._12_4_ = uVar56;
    auVar59 = blendpd(auVar52,auVar73,2);
    auVar61._0_8_ = auVar60._8_8_ * dVar47 - dVar10 * dVar48;
    auVar61._8_8_ = auVar73._0_8_ * dVar48 - auVar32._8_8_ * dVar6;
    auVar33._8_4_ = SUB84(auVar73._8_8_,0);
    auVar33._0_8_ = auVar73._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
    auVar38 = *(undefined1 (*) [16])(lVar21 + 0x120);
    auVar53._0_8_ = auVar59._0_8_ * dVar6 - auVar73._0_8_ * auVar44._0_8_;
    auVar53._8_8_ = auVar59._8_8_ * dVar7 - auVar33._8_8_ * auVar44._8_8_;
    auVar44 = *(undefined1 (*) [16])(lVar21 + 0x130);
    lVar21 = -(ulonglong)
              ((double)CONCAT44(auVar44._4_4_ & uVar15,auVar44._0_4_ & uVar14) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar59 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar38);
    lVar24 = -(ulonglong)
              ((double)CONCAT44(auVar38._4_4_ & uVar15,auVar38._0_4_ & uVar14) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar25 = -(ulonglong)
              ((double)CONCAT44(auVar38._12_4_ & uVar17,auVar38._8_4_ & uVar16) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar34._8_4_ = SUB84(auVar61._8_8_,0);
    auVar34._0_8_ = auVar61._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar8._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar8._0_8_ = auVar44._0_8_;
    auVar8._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar38 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar8);
    dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar59._12_4_,
                             ~(uint)lVar25 & auVar59._8_4_) *
            (dVar11 * dVar7 + dVar74 + auVar53._0_8_);
    auVar44 = blendpd(auVar61,auVar53,2);
    dVar37 = (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar38._4_4_,
                              ~(uint)lVar21 & auVar38._0_4_) *
             (auVar73._0_8_ * auVar67._8_8_ + dVar37 + auVar44._0_8_);
    auVar3._8_4_ = SUB84(dVar6,0);
    auVar3._0_8_ = (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar59._4_4_,
                                    ~(uint)lVar24 & auVar59._0_4_) *
                   (dVar10 * auVar67._8_8_ + auVar1._0_8_ + auVar34._8_8_);
    auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  }
  else {
    if (AVar2 == RootRelative) {
      FVar20 = (FCompactPoseBoneIndex)0x0;
    }
    else {
      if (AVar2 != BoneRelative) {
        return __return_storage_ptr__;
      }
      bVar19 = FBoneReference::IsValidToEvaluate
                         (&this->RelativeSpaceBone,
                          *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10);
      if (!bVar19) {
        return __return_storage_ptr__;
      }
      FVar20 = FBoneReference::GetCompactPoseIndex
                         (&this->RelativeSpaceBone,(FBoneContainer *)local_1b8);
      FVar20 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar20);
    }
    pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,FVar20);
    local_198.Rotation.XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
    local_198.Rotation.XY.m128d_f64[1] = (pTVar22->Rotation).XY.m128d_f64[1];
    local_198.Rotation.ZW.m128d_f64[0] = (pTVar22->Rotation).ZW.m128d_f64[0];
    local_198.Rotation.ZW.m128d_f64[1] = *(double *)((pTVar22->Rotation).ZW.m128d_f64 + 1);
    local_198.Translation.XY.m128d_f64[0] = (pTVar22->Translation).XY.m128d_f64[0];
    local_198.Translation.XY.m128d_f64[1] = (pTVar22->Translation).XY.m128d_f64[1];
    local_198.Translation.ZW.m128d_f64[0] = (pTVar22->Translation).ZW.m128d_f64[0];
    local_198.Translation.ZW.m128d_f64[1] = (pTVar22->Translation).ZW.m128d_f64[1];
    local_198.Scale3D.XY.m128d_f64[0] = (pTVar22->Scale3D).XY.m128d_f64[0];
    local_198.Scale3D.XY.m128d_f64[1] = (pTVar22->Scale3D).XY.m128d_f64[1];
    local_198.Scale3D.ZW.m128d_f64[0] = (pTVar22->Scale3D).ZW.m128d_f64[0];
    local_198.Scale3D.ZW.m128d_f64[1] = (pTVar22->Scale3D).ZW.m128d_f64[1];
    local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_138.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_138.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_138.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_138.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_138,(TTransform<double> *)(param_1->_padding_ + 0x20),&local_198);
    local_198.Rotation.XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
    local_198.Rotation.XY.m128d_f64[1] = local_138.Rotation.XY.m128d_f64[1];
    local_198.Rotation.ZW.m128d_f64[0] = local_138.Rotation.ZW.m128d_f64[0];
    local_198.Rotation.ZW.m128d_f64[1] = local_138.Rotation.ZW.m128d_f64[1];
    local_198.Translation.XY.m128d_f64[0] = local_138.Translation.XY.m128d_f64[0];
    local_198.Translation.XY.m128d_f64[1] = local_138.Translation.XY.m128d_f64[1];
    local_198.Translation.ZW.m128d_f64[0] = local_138.Translation.ZW.m128d_f64[0];
    local_198.Translation.ZW.m128d_f64[1] = local_138.Translation.ZW.m128d_f64[1];
    local_198.Scale3D.XY.m128d_f64[0] = local_138.Scale3D.XY.m128d_f64[0];
    local_198.Scale3D.XY.m128d_f64[1] = local_138.Scale3D.XY.m128d_f64[1];
    local_198.Scale3D.ZW.m128d_f64[0] = local_138.Scale3D.ZW.m128d_f64[0];
    local_198.Scale3D.ZW.m128d_f64[1] = local_138.Scale3D.ZW.m128d_f64[1];
    pTVar23 = UE::Math::TTransform<double>::InverseTransformVector
                        (&local_198,(TVector<double> *)(local_1b8 + 8),__return_storage_ptr__);
    dVar37 = (pTVar23->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar23->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar37;
    dVar37 = (pTVar23->field0_0x0)._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar37;
  return __return_storage_ptr__;
}

// UpdateChainPhysicsBodyDefinitions @ 1464727f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_AnimDynamics::UpdateChainPhysicsBodyDefinitions
          (FAnimNode_AnimDynamics *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FName *pFVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  TArray<FAnimPhysBodyDefinition,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar17;
  longlong lVar18;
  undefined1 local_res8 [8];
  uint local_res10;
  FReferenceSkeleton *local_res18;
  <lambda_1> local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_148;
  FScriptContainerElement *local_138;
  code *local_130;
  FReferenceSkeleton **local_128;
  undefined1 local_118 [8];
  uint uStack_110;
  FCompactPoseBoneIndex FStack_10c;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 TStack_f0;
  FNameEntryId local_d8;
  uint uStack_d4;
  TVector<double>_u_0 TStack_d0;
  TVector<double>_u_0 local_b8;
  undefined2 uStack_a0;
  AnimPhysTwistAxis AStack_9e;
  undefined1 uStack_9d;
  float fStack_9c;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 TStack_80;
  TVector<double>_u_0 local_68;
  FNameEntryId FStack_50;
  float fStack_4c;
  
  local_128 = &local_res18;
  uVar17 = 0;
  local_130 = UE::Core::Private::Function::
              TFunctionRefCaller<`FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>,FName,FName>
              ::Call;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_res18 = param_1;
  FindChainBones((this->BoundBone).BoneName,(this->ChainEnd).BoneName,
                 (TFunctionRef<FName___cdecl(FName)> *)&local_130,&local_148);
  if ((local_148.ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChainBoneNames.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                         ,0x2fb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = &this->PhysicsBodyDefinitions;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0;
  local_108._s_0.X = (double)___xmm_40240000000000004024000000000000;
  local_108._s_0.Y = (double)_UNK_15104e4d8;
  local_108._s_0.Z = (double)__real_4024000000000000;
  TStack_f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  TStack_f0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  TStack_f0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uStack_110 = 0x7fffffff;
  TStack_d0._s_0.Y = 0.0;
  TStack_d0._s_0.Z = 0.0;
  local_98._s_0.Z = 0.0;
  TStack_80._s_0.X = 0.0;
  local_68._s_0.X = 0.0;
  local_68._s_0.Y = 0.0;
  TStack_d0._s_0.X = 0.0;
  local_b8._s_0.Z = 0.0;
  local_68._s_0.Z = 0.0;
  FStack_10c = (FCompactPoseBoneIndex)0xffffffff;
  local_d8.Value = 0x10101;
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  uStack_a0._0_1_ = Angular;
  uStack_a0._1_1_ = AxisX;
  AStack_9e = AxisX;
  fStack_9c = 0.0;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  TStack_80._s_0.Y = 0.0;
  TStack_80._s_0.Z = 0.0;
  FStack_50.Value = FStack_50.Value & 0xffffff00;
  fStack_4c = 10.0;
  if ((this->PhysicsBodyDefinitions).ArrayNum == 1) {
    FAnimPhysBodyDefinition::operator=
              ((FAnimPhysBodyDefinition *)local_118,
               (FAnimPhysBodyDefinition *)(this_00->AllocatorInstance).Data);
  }
  local_res20.ChainBoneNames = &local_148;
  TArray<FAnimPhysBodyDefinition,TSizedDefaultAllocator<32>_>::
  RemoveAll<_FAnimNode_AnimDynamics::UpdateChainPhysicsBodyDefinitions_::__l2::<lambda_1>_>
            (this_00,&local_res20);
  uVar14 = local_148._8_8_ & 0xffffffff;
  if (local_148.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar14);
  }
  piVar1 = &(this->PhysicsBodyDefinitions).ArrayMax;
  if ((this->PhysicsBodyDefinitions).ArrayMax < local_148.ArrayNum) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,local_148.ArrayNum,&this_00->AllocatorInstance,
               (this->PhysicsBodyDefinitions).ArrayNum,piVar1);
    uVar14 = local_148._8_8_ & 0xffffffff;
  }
  local_res10 = (uint)uVar14;
  uVar12 = (ulonglong)(int)local_res10;
  local_138 = local_148.AllocatorInstance.Data + uVar12 * 8;
  FVar16.Data = local_148.AllocatorInstance.Data;
  do {
    pFVar15 = local_138;
    if ((int)uVar14 != (int)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      uVar14 = local_148._8_8_ & 0xffffffff;
    }
    if (FVar16.Data == pFVar15) {
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      return;
    }
    pFVar15 = (this_00->AllocatorInstance).Data;
    lVar2 = *(longlong *)FVar16.Data;
    for (pFVar11 = pFVar15;
        pFVar11 != pFVar15 + (longlong)(this->PhysicsBodyDefinitions).ArrayNum * 0xd0;
        pFVar11 = pFVar11 + 0xd0) {
      if (*(longlong *)pFVar11 == lVar2) goto LAB_146472b8a;
    }
    if (((pFVar15 <= (FScriptContainerElement *)local_118) &&
        ((FScriptContainerElement *)local_118 < pFVar15 + (longlong)*piVar1 * 0xd0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = (this->PhysicsBodyDefinitions).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8d0,&this_00->AllocatorInstance,piVar1);
    }
    pFVar15 = (this_00->AllocatorInstance).Data;
    (this->PhysicsBodyDefinitions).ArrayNum = iVar9 + 1;
    lVar18 = (longlong)(int)uVar17 * 0xd0;
    pFVar15 = pFVar15 + lVar18;
    memmove(pFVar15 + 0xd0,pFVar15,(longlong)(int)(iVar9 - uVar17) * 0xd0);
    FVar4.Number = (uint)FStack_10c;
    FVar4.ComparisonIndex.Value = uStack_110;
    pFVar13 = (FName *)((this_00->AllocatorInstance).Data + lVar18);
    pFVar13->ComparisonIndex = (FNameEntryId)local_118._0_4_;
    pFVar13->Number = local_118._4_4_;
    pFVar13[1] = FVar4;
    pFVar13[2] = (FName)local_108._s_0.X;
    pFVar13[3] = (FName)local_108._s_0.Y;
    pFVar13[4] = (FName)local_108._s_0.Z;
    pFVar13[5] = (FName)TStack_f0._s_0.X;
    pFVar13[6] = (FName)TStack_f0._s_0.Y;
    pFVar13[7] = (FName)TStack_f0._s_0.Z;
    FVar5.Number = uStack_d4;
    FVar5.ComparisonIndex.Value = local_d8.Value;
    pFVar13[8] = FVar5;
    pFVar13[9] = (FName)TStack_d0._s_0.X;
    pFVar13[10] = (FName)TStack_d0._s_0.Y;
    pFVar13[0xb] = (FName)TStack_d0._s_0.Z;
    pFVar13[0xc] = (FName)local_b8._s_0.X;
    pFVar13[0xd] = (FName)local_b8._s_0.Y;
    FVar6.ComparisonIndex.Value._2_1_ = AStack_9e;
    FVar6.ComparisonIndex.Value._0_1_ = (AnimPhysAngularConstraintType)uStack_a0;
    FVar6.ComparisonIndex.Value._1_1_ = uStack_a0._1_1_;
    FVar6.ComparisonIndex.Value._3_1_ = uStack_9d;
    FVar6.Number = (uint)fStack_9c;
    pFVar13[0xe] = (FName)local_b8._s_0.Z;
    pFVar13[0xf] = FVar6;
    pFVar13[0x10] = (FName)local_98._s_0.X;
    pFVar13[0x11] = (FName)local_98._s_0.Y;
    pFVar13[0x12] = (FName)local_98._s_0.Z;
    pFVar13[0x13] = (FName)TStack_80._s_0.X;
    pFVar13[0x14] = (FName)TStack_80._s_0.Y;
    pFVar13[0x15] = (FName)TStack_80._s_0.Z;
    pFVar13[0x16] = (FName)local_68._s_0.X;
    pFVar13[0x17] = (FName)local_68._s_0.Y;
    FVar7.Number = (uint)fStack_4c;
    FVar7.ComparisonIndex.Value = FStack_50.Value;
    pFVar13[0x18] = (FName)local_68._s_0.Z;
    pFVar13[0x19] = FVar7;
    uVar10 = 0;
    if ((int)uVar17 < (this->PhysicsBodyDefinitions).ArrayNum) {
      uVar10 = ~uVar17 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(longlong *)((this_00->AllocatorInstance).Data + lVar18) = lVar2;
    uVar14 = local_148._8_8_ & 0xffffffff;
LAB_146472b8a:
    uVar12 = (ulonglong)local_res10;
    uVar17 = uVar17 + 1;
    FVar16.Data = FVar16.Data + 8;
  } while( true );
}

// UpdateInternal @ 146473d70

void __thiscall
FAnimNode_AnimDynamics::UpdateInternal
          (FAnimNode_AnimDynamics *this,FAnimationUpdateContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_AnimDynamics::UpdateInternal");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  this->NextTimeStep = param_1->DeltaTime;
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateLimits @ 146474b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_AnimDynamics::UpdateLimits
          (FAnimNode_AnimDynamics *this,FComponentSpacePoseContext *param_1)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FAnimPhysRigidBody *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FName FVar16;
  FComponentSpacePoseContext *pFVar17;
  ForAnyElementType FVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLimitUpdate> FVar23;
  TTransform<double> *pTVar24;
  ulonglong uVar25;
  uint uVar26;
  FBoneContainer *pFVar27;
  uint uVar28;
  FBoneReference *pFVar29;
  ForElementType<unsigned_int> FVar30;
  FAnimPhysRigidBody *pFVar31;
  FBoneReference *pFVar32;
  FBoneReference *this_00;
  FBoneReference *pFVar33;
  FName FVar34;
  longlong lVar35;
  undefined8 uVar36;
  int iVar37;
  double dVar38;
  float fVar39;
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
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auStackY_828 [32];
  undefined1 local_7c7;
  undefined1 local_7c6;
  undefined1 local_7c5 [5];
  FName local_7c0;
  FBoneContainer *local_7b8;
  FComponentSpacePoseContext *local_7b0;
  FColor_u_0 local_7a8;
  FCompactPoseBoneIndex local_7a4;
  FCompactPoseBoneIndex local_7a0;
  FCompactPoseBoneIndex local_79c;
  uint local_798;
  FName local_790;
  FBoneReference *local_788;
  ForElementType<unsigned_int> local_780;
  FName local_778;
  FName local_770;
  FAnimPhysRigidBody *local_758;
  ForAnyElementType local_750;
  TVector<double>_u_0 local_748;
  TArray<int,TSizedDefaultAllocator<32>_> local_730;
  FName local_720;
  TVector2<double>_u_0 local_718;
  TVector2<double>_u_0 local_708;
  TVector2<double>_u_0 local_6f8;
  FName local_6e8;
  double local_6e0;
  TVector<double>_u_0 local_6d8;
  TVector<double>_u_0 local_6b8;
  TVector<double>_u_0 local_698;
  TVector<double>_u_0 local_678;
  TVector<double>_u_0 local_658;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_618;
  TVector<double>_u_0 local_5f8;
  TVector<double>_u_0 local_5d8;
  undefined4 local_5c0;
  undefined1 auStack_5bc [20];
  TVector<double>_u_0 local_5a8;
  TVector<double>_u_0 local_588;
  TQuat<double> local_568;
  TQuat<double> local_548;
  TQuat<double> local_528;
  TQuat<double> local_508;
  TQuat<double> local_4e8;
  TVector<double> local_4c8;
  TVector<double> local_4b0;
  TVector<double> local_498;
  TVector<double> local_480;
  double local_458;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  TTransform<double> local_2c8;
  undefined1 local_268 [48];
  undefined4 local_238;
  undefined4 uStack_234;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_828;
  local_7b0 = param_1;
  if (FAnimPhys::bEnableDetailedStats) {
    FVar23 = StatPtr_STAT_AnimDynamicsLimitUpdate;
    if (StatPtr_STAT_AnimDynamicsLimitUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLimitUpdate>)0x0) {
      pFVar22 = ::FName::FName(&local_6e8,"STAT_AnimDynamicsLimitUpdate");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLimitUpdate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsLimitUpdate,
                          *pFVar22,L"Limits Update","STATGROUP_Physics","STATCAT_Advanced",
                          L"Physics",true,true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLimitUpdate>)&TStatId::TStatId_NAME_None;
  }
  FVar34 = *(FName *)FVar23;
  bVar9 = false;
  bVar10 = false;
  local_770.ComparisonIndex.Value = 0;
  local_770.Number = 0;
  bVar19 = false;
  bVar20 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_7a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_7a8._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_790.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_790.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_790,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_AnimDynamics.cpp"
                   ,0x46b);
        bVar9 = true;
        bVar10 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_7c0 = FVar34;
      local_778 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar19 = true;
      goto LAB_146474d12;
    }
  }
  bVar10 = bVar20;
  bVar9 = bVar19;
  bVar19 = false;
  local_778 = local_770;
LAB_146474d12:
  uVar21 = (this->LinearLimits).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar1 = &(this->LinearLimits).ArrayMax;
  (this->LinearLimits).ArrayNum = 0;
  if (*piVar1 != uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,8,uVar21,&(this->LinearLimits).AllocatorInstance,0,piVar1);
  }
  uVar21 = (this->AngularLimits).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar1 = &(this->AngularLimits).ArrayMax;
  (this->AngularLimits).ArrayNum = 0;
  if (*piVar1 != uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar21,&(this->AngularLimits).AllocatorInstance,0,piVar1);
  }
  uVar21 = (this->Springs).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  piVar1 = &(this->Springs).ArrayMax;
  (this->Springs).ArrayNum = 0;
  if (*piVar1 != uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,uVar21,&(this->Springs).AllocatorInstance,0,piVar1);
  }
  fVar15 = __real_7f7fffff;
  fVar14 = __real_ff7fffff;
  fVar13 = __real_3e99999a;
  dVar12 = _UNK_150689518;
  dVar11 = ___xmm_00000000000000003ff0000000000000;
  local_798 = (this->ActiveBoneIndices).ArrayNum;
  uVar25 = (ulonglong)(int)local_798;
  pFVar27 = *(FBoneContainer **)&(param_1->Pose).Pose.field_0x10;
  FVar30 = (ForElementType<unsigned_int>)(this->ActiveBoneIndices).AllocatorInstance.Data;
  local_750.Data = (FScriptContainerElement *)((longlong)FVar30 + uVar25 * 4);
  local_7b8 = pFVar27;
  do {
    FVar18.Data = local_750.Data;
    dVar2 = __real_3ff0000000000000;
    local_780 = FVar30;
    if ((this->ActiveBoneIndices).ArrayNum != (int)uVar25) {
      local_7c7 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_7c7);
    }
    FVar34 = local_778;
    if (FVar30 == (ForElementType<unsigned_int>)FVar18.Data) {
      if (bVar10) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar19) {
        FThreadStats::AddMessage(FVar34,CycleScopeEnd);
      }
      return;
    }
    uVar21 = *(uint *)FVar30;
    lVar35 = (longlong)(int)uVar21;
    uVar28 = ~uVar21 >> 0x1f;
    uVar26 = 0;
    if ((int)uVar21 < (this->PhysicsBodyDefinitions).ArrayNum) {
      uVar26 = uVar28;
    }
    if ((uVar26 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FBoneReference *)
              ((this->PhysicsBodyDefinitions).AllocatorInstance.Data + lVar35 * 0xd0);
    local_788 = this_00;
    bVar20 = FBoneReference::IsValidToEvaluate(this_00,pFVar27);
    if (bVar20) {
      uVar26 = 0;
      if ((int)uVar21 < (this->Bodies).ArrayNum) {
        uVar26 = uVar28;
      }
      if ((uVar26 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->Bodies).AllocatorInstance.Data;
      uVar26 = 0;
      if ((int)uVar21 < (this->Bodies).ArrayNum) {
        uVar26 = uVar28;
      }
      if ((uVar26 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_7c0 = (FName)((longlong)(this->Bodies).AllocatorInstance.Data + lVar35 * 0x400);
      pFVar4 = *(FAnimPhysRigidBody **)(pFVar3 + lVar35 * 0x400 + 0x3f0);
      pFVar31 = (FAnimPhysRigidBody *)0x0;
      if (pFVar4 != (FAnimPhysRigidBody *)0x0) {
        pFVar31 = pFVar4;
      }
      local_758 = pFVar31;
      FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)&local_7a4);
      pFVar17 = local_7b0;
      pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_7b0->Pose,local_7a4);
      local_448.Rotation.XY.m128d_f64[0] = (pTVar24->Rotation).XY.m128d_f64[0];
      local_448.Rotation.XY.m128d_f64[1] = (pTVar24->Rotation).XY.m128d_f64[1];
      local_448.Rotation.ZW.m128d_f64[0] = (pTVar24->Rotation).ZW.m128d_f64[0];
      local_448.Rotation.ZW.m128d_f64[1] = (pTVar24->Rotation).ZW.m128d_f64[1];
      local_448.Translation.XY.m128d_f64[0] = (pTVar24->Translation).XY.m128d_f64[0];
      local_448.Translation.XY.m128d_f64[1] = (pTVar24->Translation).XY.m128d_f64[1];
      local_448.Translation.ZW.m128d_f64[0] = (pTVar24->Translation).ZW.m128d_f64[0];
      local_448.Translation.ZW.m128d_f64[1] = (pTVar24->Translation).ZW.m128d_f64[1];
      local_448.Scale3D.XY.m128d_f64[0] = (pTVar24->Scale3D).XY.m128d_f64[0];
      local_448.Scale3D.XY.m128d_f64[1] = (pTVar24->Scale3D).XY.m128d_f64[1];
      local_448.Scale3D.ZW.m128d_f64[0] = (pTVar24->Scale3D).ZW.m128d_f64[0];
      local_448.Scale3D.ZW.m128d_f64[1] = (pTVar24->Scale3D).ZW.m128d_f64[1];
      GetSimSpaceTransformFromComponentSpace
                (this,(TTransform<double> *)local_268,this->SimulationSpace,pFVar17,&local_448);
      local_2e8 = local_228;
      dStack_2e0 = dStack_220;
      local_2d8 = local_218;
      dStack_2d0 = dStack_210;
      uVar40 = local_268._32_4_;
      uVar41 = local_268._36_4_;
      uVar42 = local_268._40_4_;
      uVar43 = local_268._44_4_;
      uVar44 = local_238;
      uVar45 = uStack_234;
      uVar46 = local_268._0_4_;
      uVar47 = local_268._4_4_;
      uVar48 = local_268._8_4_;
      uVar49 = local_268._12_4_;
      uVar50 = local_268._16_4_;
      uVar51 = local_268._20_4_;
      uVar52 = local_268._24_4_;
      uVar53 = local_268._28_4_;
      if (pFVar31 != (FAnimPhysRigidBody *)0x0) {
        uVar26 = 0;
        if ((int)uVar21 < (this->ConstraintOffsets).ArrayNum) {
          uVar26 = uVar28;
        }
        if ((uVar26 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (this->ConstraintOffsets).AllocatorInstance.Data;
        uVar40 = (undefined4)*(undefined8 *)(pFVar3 + lVar35 * 0x30);
        uVar41 = (undefined4)((ulonglong)*(undefined8 *)(pFVar3 + lVar35 * 0x30) >> 0x20);
        uVar44 = (undefined4)*(undefined8 *)(pFVar3 + lVar35 * 0x30 + 0x10);
        uVar45 = (undefined4)((ulonglong)*(undefined8 *)(pFVar3 + lVar35 * 0x30 + 0x10) >> 0x20);
        uVar42 = (undefined4)*(undefined8 *)(pFVar3 + lVar35 * 0x30 + 8);
        uVar43 = (undefined4)((ulonglong)*(undefined8 *)(pFVar3 + lVar35 * 0x30 + 8) >> 0x20);
        uVar46 = UE::Math::TQuat<double>::Identity.X._0_4_;
        uVar47 = UE::Math::TQuat<double>::Identity.X._4_4_;
        uVar48 = UE::Math::TQuat<double>::Identity.Y._0_4_;
        uVar49 = UE::Math::TQuat<double>::Identity.Y._4_4_;
        uVar50 = UE::Math::TQuat<double>::Identity.Z._0_4_;
        uVar51 = UE::Math::TQuat<double>::Identity.Z._4_4_;
        uVar52 = UE::Math::TQuat<double>::Identity.W._0_4_;
        uVar53 = UE::Math::TQuat<double>::Identity.W._4_4_;
      }
      uVar26 = 0;
      if ((int)uVar21 < (this->ConstraintOffsets).ArrayNum) {
        uVar26 = uVar28;
      }
      if ((uVar26 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar34 = local_7c0;
      pFVar5 = (this->ConstraintOffsets).AllocatorInstance.Data;
      pFVar3 = pFVar5 + lVar35 * 0x30 + 0x18;
      local_748._s_0.X = (double)*(undefined8 *)pFVar3;
      local_748._s_0.Y = (double)*(undefined8 *)(pFVar3 + 8);
      local_748._s_0.Z = (double)*(undefined8 *)(pFVar5 + lVar35 * 0x30 + 0x28);
      if (*(char *)((longlong)&this_00[4].BoneName.ComparisonIndex.Value + 3) == '\0') {
        if ((char)this_00[4].BoneName.ComparisonIndex.Value != '\0') {
          local_6b8._s_0.Z = 0.0;
          local_6b8._s_0.X = dVar11;
          local_6b8._s_0.Y = dVar12;
          local_568.X._0_4_ = uVar46;
          local_568.X._4_4_ = uVar47;
          local_568.Y._0_4_ = uVar48;
          local_568.Y._4_4_ = uVar49;
          local_568.Z._0_4_ = uVar50;
          local_568.Z._4_4_ = uVar51;
          local_568.W._0_4_ = uVar52;
          local_568.W._4_4_ = uVar53;
          UE::Math::TQuat<double>::RotateVector
                    (&local_568,&local_4c8,(TVector<double> *)&local_6b8._s_0);
          FVar34 = local_7c0;
          local_718._s_0.X = (double)*(undefined8 *)&this_00[4].field_0x8;
          local_718._s_0.Y = (double)this_00[6].BoneName;
          local_698._s_0.Z = (double)CONCAT44(uVar45,uVar44);
          local_698._0_4_ = uVar40;
          local_698._4_4_ = uVar41;
          local_698._8_4_ = uVar42;
          local_698._12_4_ = uVar43;
          FAnimPhys::ConstrainAlongDirection
                    (this->NextTimeStep,&this->LinearLimits,pFVar31,
                     (TVector<double> *)&local_698._s_0,(FAnimPhysRigidBody *)local_7c0,
                     (TVector<double> *)&local_748._s_0,&local_4c8,
                     (TVector2<double> *)&local_718._s_0,fVar14,fVar15);
        }
        if (*(char *)((longlong)&this_00[4].BoneName.ComparisonIndex.Value + 1) != '\0') {
          local_678._s_0.X = ___xmm_3ff00000000000000000000000000000;
          local_678._s_0.Y = _UNK_15061cbc8;
          local_678._s_0.Z = 0.0;
          local_548.X._0_4_ = uVar46;
          local_548.X._4_4_ = uVar47;
          local_548.Y._0_4_ = uVar48;
          local_548.Y._4_4_ = uVar49;
          local_548.Z._0_4_ = uVar50;
          local_548.Z._4_4_ = uVar51;
          local_548.W._0_4_ = uVar52;
          local_548.W._4_4_ = uVar53;
          UE::Math::TQuat<double>::RotateVector
                    (&local_548,&local_4b0,(TVector<double> *)&local_678._s_0);
          local_708._s_0.X = (double)this_00[5].BoneName;
          local_708._s_0.Y = (double)*(undefined8 *)&this_00[6].field_0x8;
          local_658._s_0.Z = (double)CONCAT44(uVar45,uVar44);
          local_658._0_4_ = uVar40;
          local_658._4_4_ = uVar41;
          local_658._8_4_ = uVar42;
          local_658._12_4_ = uVar43;
          FAnimPhys::ConstrainAlongDirection
                    (this->NextTimeStep,&this->LinearLimits,pFVar31,
                     (TVector<double> *)&local_658._s_0,(FAnimPhysRigidBody *)FVar34,
                     (TVector<double> *)&local_748._s_0,&local_4b0,
                     (TVector2<double> *)&local_708._s_0,fVar14,fVar15);
        }
        if (*(char *)((longlong)&this_00[4].BoneName.ComparisonIndex.Value + 2) != '\0') {
          local_638._s_0.Z = dVar2;
          local_638._s_0.X = 0.0;
          local_638._s_0.Y = 0.0;
          local_528.X._0_4_ = uVar46;
          local_528.X._4_4_ = uVar47;
          local_528.Y._0_4_ = uVar48;
          local_528.Y._4_4_ = uVar49;
          local_528.Z._0_4_ = uVar50;
          local_528.Z._4_4_ = uVar51;
          local_528.W._0_4_ = uVar52;
          local_528.W._4_4_ = uVar53;
          UE::Math::TQuat<double>::RotateVector
                    (&local_528,&local_498,(TVector<double> *)&local_638._s_0);
          local_6f8._s_0.X = (double)*(undefined8 *)&this_00[5].field_0x8;
          local_6f8._s_0.Y = (double)this_00[7].BoneName;
          local_618._s_0.Z = (double)CONCAT44(uVar45,uVar44);
          local_618._0_4_ = uVar40;
          local_618._4_4_ = uVar41;
          local_618._8_4_ = uVar42;
          local_618._12_4_ = uVar43;
          FAnimPhys::ConstrainAlongDirection
                    (this->NextTimeStep,&this->LinearLimits,pFVar31,
                     (TVector<double> *)&local_618._s_0,(FAnimPhysRigidBody *)FVar34,
                     (TVector<double> *)&local_748._s_0,&local_498,
                     (TVector2<double> *)&local_6f8._s_0,fVar14,fVar15);
        }
      }
      else {
        local_6d8._s_0.Z = (double)CONCAT44(uVar45,uVar44);
        local_6d8._0_4_ = uVar40;
        local_6d8._4_4_ = uVar41;
        local_6d8._8_4_ = uVar42;
        local_6d8._12_4_ = uVar43;
        FAnimPhys::ConstrainPositionNailed
                  (this->NextTimeStep,&this->LinearLimits,pFVar31,(TVector<double> *)&local_6d8._s_0
                   ,(FAnimPhysRigidBody *)local_7c0,(TVector<double> *)&local_748._s_0);
      }
      if (this_00[7].field_0x8 == '\0') {
        fVar39 = fVar13;
        if (this->bOverrideAngularBias != '\0') {
          fVar39 = this->AngularBiasOverride;
        }
        local_508.X._0_4_ = uVar46;
        local_508.X._4_4_ = uVar47;
        local_508.Y._0_4_ = uVar48;
        local_508.Y._4_4_ = uVar49;
        local_508.Z._0_4_ = uVar50;
        local_508.Z._4_4_ = uVar51;
        local_508.W._0_4_ = uVar52;
        local_508.W._4_4_ = uVar53;
        FAnimPhys::ConstrainAngularRange
                  (this->NextTimeStep,&this->AngularLimits,pFVar31,(FAnimPhysRigidBody *)FVar34,
                   &local_508,this_00[7].field_0x9,(TVector<double> *)(this_00 + 8),
                   (TVector<double> *)&this_00[9].field_0x8,fVar39);
      }
      else {
        fVar39 = fVar13;
        if (this->bOverrideAngularBias != '\0') {
          fVar39 = this->AngularBiasOverride;
        }
        local_5d8._s_0.Z = 0.0;
        local_5f8._s_0.Z = 0.0;
        local_5d8._s_0.X = dVar11;
        local_5d8._s_0.Y = dVar12;
        local_5f8._s_0.X = dVar11;
        local_5f8._s_0.Y = dVar12;
        UE::Math::TQuat<double>::RotateVector
                  (&local_4e8,&local_480,(TVector<double> *)&local_5f8._s_0);
        FAnimPhys::ConstrainConeAngle
                  (this->NextTimeStep,&this->AngularLimits,pFVar31,&local_480,
                   (FAnimPhysRigidBody *)FVar34,(TVector<double> *)&local_5d8._s_0,
                   (float)this_00[7].CachedCompactPoseIndex,fVar39);
      }
      pFVar17 = local_7b0;
      FVar16 = local_7c0;
      iVar37 = (this->PlanarLimits).ArrayNum;
      if ((0 < iVar37) && (this->bUsePlanarLimit != '\0')) {
        pFVar33 = (FBoneReference *)(this->PlanarLimits).AllocatorInstance.Data;
        pFVar29 = pFVar33 + 1;
        pFVar32 = pFVar33 + (longlong)iVar37 * 7;
        while( true ) {
          if ((this->PlanarLimits).ArrayNum != iVar37) {
            local_7c6 = 0;
            `TCheckedPointerIterator<FAnimPhysPlanarLimit,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_7c6);
          }
          this_00 = local_788;
          FVar34 = FVar16;
          if (pFVar33 == pFVar32) break;
          local_208.Rotation.XY.m128d_f64[0] = *(double *)&pFVar29->BoneName;
          local_208.Rotation.XY.m128d_f64[1] = *(double *)&pFVar29->field_0x8;
          local_208.Rotation.ZW.m128d_f64[0] = *(double *)&pFVar29[1].BoneName;
          local_208.Rotation.ZW.m128d_f64[1] = *(double *)&pFVar29[1].field_0x8;
          local_208.Translation.XY.m128d_f64[0] = *(double *)&pFVar29[2].BoneName;
          local_208.Translation.XY.m128d_f64[1] = *(double *)&pFVar29[2].field_0x8;
          local_208.Translation.ZW.m128d_f64[0] = *(double *)&pFVar29[3].BoneName;
          local_208.Translation.ZW.m128d_f64[1] = *(double *)&pFVar29[3].field_0x8;
          local_208.Scale3D.XY.m128d_f64[0] = *(double *)&pFVar29[4].BoneName;
          local_208.Scale3D.XY.m128d_f64[1] = *(double *)&pFVar29[4].field_0x8;
          local_208.Scale3D.ZW.m128d_f64[0] = *(double *)&pFVar29[5].BoneName;
          local_208.Scale3D.ZW.m128d_f64[1] = *(double *)&pFVar29[5].field_0x8;
          bVar20 = FBoneReference::IsValidToEvaluate(pFVar33,local_7b8);
          if (bVar20) {
            FBoneReference::GetCompactPoseIndex(pFVar33,(FBoneContainer *)&local_7a0);
            pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&pFVar17->Pose,local_7a0);
            local_3e8.Rotation.XY.m128d_f64[0] = (pTVar24->Rotation).XY.m128d_f64[0];
            local_3e8.Rotation.XY.m128d_f64[1] = (pTVar24->Rotation).XY.m128d_f64[1];
            local_3e8.Rotation.ZW.m128d_f64[0] = (pTVar24->Rotation).ZW.m128d_f64[0];
            local_3e8.Rotation.ZW.m128d_f64[1] = (pTVar24->Rotation).ZW.m128d_f64[1];
            local_3e8.Translation.XY.m128d_f64[0] = (pTVar24->Translation).XY.m128d_f64[0];
            local_3e8.Translation.XY.m128d_f64[1] = (pTVar24->Translation).XY.m128d_f64[1];
            local_3e8.Translation.ZW.m128d_f64[0] = (pTVar24->Translation).ZW.m128d_f64[0];
            local_3e8.Translation.ZW.m128d_f64[1] = (pTVar24->Translation).ZW.m128d_f64[1];
            local_3e8.Scale3D.XY.m128d_f64[0] = (pTVar24->Scale3D).XY.m128d_f64[0];
            local_3e8.Scale3D.XY.m128d_f64[1] = (pTVar24->Scale3D).XY.m128d_f64[1];
            local_3e8.Scale3D.ZW.m128d_f64[0] = (pTVar24->Scale3D).ZW.m128d_f64[0];
            local_3e8.Scale3D.ZW.m128d_f64[1] = (pTVar24->Scale3D).ZW.m128d_f64[1];
            GetSimSpaceTransformFromComponentSpace
                      (this,&local_1a8,this->SimulationSpace,local_7b0,&local_3e8);
            UE::Math::TTransform<double>::Multiply(&local_208,&local_208,&local_1a8);
          }
          FAnimPhys::ConstrainPlanar
                    (this->NextTimeStep,&this->LinearLimits,(FAnimPhysRigidBody *)FVar16,&local_208)
          ;
          pFVar33 = pFVar33 + 7;
          pFVar29 = pFVar29 + 7;
        }
      }
      pFVar17 = local_7b0;
      iVar37 = (this->SphericalLimits).ArrayNum;
      if ((0 < iVar37) && (this->bUseSphericalLimits != 0)) {
        pFVar29 = (FBoneReference *)(this->SphericalLimits).AllocatorInstance.Data;
        pFVar33 = pFVar29 + (longlong)iVar37 * 3;
        while( true ) {
          if ((this->SphericalLimits).ArrayNum != iVar37) {
            local_7c5[0] = 0;
            `TCheckedPointerIterator<FAnimPhysSphericalLimit,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_7c5);
          }
          this_00 = local_788;
          if (pFVar29 == pFVar33) break;
          local_2c8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_2c8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_2c8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_2c8.Translation.XY.m128d_f64[0] = *(double *)&pFVar29[1].BoneName;
          local_2c8.Translation.XY.m128d_f64[1] = *(double *)&pFVar29[1].field_0x8;
          local_2c8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_2c8.Translation.ZW.m128d_f64[0] = *(double *)&pFVar29[2].BoneName;
          local_2c8.Translation.ZW.m128d_f64[1] = 0.0;
          bVar20 = FBoneReference::IsValidToEvaluate(pFVar29,local_7b8);
          if (bVar20) {
            FBoneReference::GetCompactPoseIndex(pFVar29,(FBoneContainer *)&local_79c);
            pTVar24 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&pFVar17->Pose,local_79c);
            local_388.Rotation.XY.m128d_f64[0] = (pTVar24->Rotation).XY.m128d_f64[0];
            local_388.Rotation.XY.m128d_f64[1] = (pTVar24->Rotation).XY.m128d_f64[1];
            local_388.Rotation.ZW.m128d_f64[0] = (pTVar24->Rotation).ZW.m128d_f64[0];
            local_388.Rotation.ZW.m128d_f64[1] = (pTVar24->Rotation).ZW.m128d_f64[1];
            local_388.Translation.XY.m128d_f64[0] = (pTVar24->Translation).XY.m128d_f64[0];
            local_388.Translation.XY.m128d_f64[1] = (pTVar24->Translation).XY.m128d_f64[1];
            local_388.Translation.ZW.m128d_f64[0] = (pTVar24->Translation).ZW.m128d_f64[0];
            local_388.Translation.ZW.m128d_f64[1] = (pTVar24->Translation).ZW.m128d_f64[1];
            local_388.Scale3D.XY.m128d_f64[0] = (pTVar24->Scale3D).XY.m128d_f64[0];
            local_388.Scale3D.XY.m128d_f64[1] = (pTVar24->Scale3D).XY.m128d_f64[1];
            local_388.Scale3D.ZW.m128d_f64[0] = (pTVar24->Scale3D).ZW.m128d_f64[0];
            local_388.Scale3D.ZW.m128d_f64[1] = (pTVar24->Scale3D).ZW.m128d_f64[1];
            GetSimSpaceTransformFromComponentSpace
                      (this,&local_148,this->SimulationSpace,pFVar17,&local_388);
            UE::Math::TTransform<double>::Multiply(&local_2c8,&local_2c8,&local_148);
          }
          if (*(char *)&pFVar29[2].CachedCompactPoseIndex == '\0') {
            FAnimPhys::ConstrainSphericalInner
                      (this->NextTimeStep,&this->LinearLimits,(FAnimPhysRigidBody *)FVar34,
                       &local_2c8,*(float *)&pFVar29[2].field_0x8);
LAB_14647588c:
            pFVar29 = pFVar29 + 3;
          }
          else {
            if (*(char *)&pFVar29[2].CachedCompactPoseIndex != '\x01') goto LAB_14647588c;
            FAnimPhys::ConstrainSphericalOuter
                      (this->NextTimeStep,&this->LinearLimits,(FAnimPhysRigidBody *)FVar34,
                       &local_2c8,*(float *)&pFVar29[2].field_0x8);
            pFVar29 = pFVar29 + 3;
          }
        }
      }
      pFVar27 = local_7b8;
      if (this->bLinearSpring != '\0' || this->bAngularSpring != '\0') {
        auStack_5bc._12_8_ = CONCAT44(uVar45,uVar44);
        local_5a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_5a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_5a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_5c0 = uVar40;
        auStack_5bc._0_4_ = uVar41;
        auStack_5bc._4_4_ = uVar42;
        auStack_5bc._8_4_ = uVar43;
        local_588._0_4_ = uVar40;
        local_588._4_4_ = uVar41;
        local_588._8_4_ = uVar42;
        local_588._12_4_ = uVar43;
        local_588._s_0.Z = (double)auStack_5bc._12_8_;
        local_458 = (double)auStack_5bc._12_8_;
        FAnimPhys::CreateSpring
                  (&this->Springs,local_758,(TVector<double> *)&local_588._s_0,
                   (FAnimPhysRigidBody *)FVar34,(TVector<double> *)&local_5a8._s_0);
        iVar37 = (this->Springs).ArrayNum;
        uVar26 = iVar37 - 1;
        uVar21 = 0;
        if ((int)uVar26 < iVar37) {
          uVar21 = ~uVar26 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar35 = (longlong)(this->Springs).ArrayNum;
        pFVar3 = (this->Springs).AllocatorInstance.Data;
        *(float *)(pFVar3 + lVar35 * 0x90 + -0x10) = this->LinearSpringConstant;
        *(float *)(pFVar3 + lVar35 * 0x90 + -0xc) = this->AngularSpringConstant;
        FVar34 = this_00[0xb].BoneName;
        dVar2 = *(double *)&this_00[0xb].field_0x8;
        local_720 = this_00[0xc].BoneName;
        dVar38 = dVar2 * dVar2 + (double)FVar34 * (double)FVar34 +
                 (double)local_720 * (double)local_720;
        if (dVar38 == __real_3ff0000000000000) {
          local_720 = this_00[0xc].BoneName;
          uVar8 = this_00[0xb].BoneName;
          uVar36 = *(double *)&this_00[0xb].field_0x8;
        }
        else if (__real_3e45798ee0000000 <= dVar38) {
          local_6e0 = __real_3ff0000000000000 / SQRT(dVar38);
          uVar8 = local_6e0 * (double)FVar34;
          local_720 = (FName)(local_6e0 * (double)local_720);
          uVar36 = local_6e0 * dVar2;
        }
        else {
          local_720 = (FName)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        }
        iVar37 = (int)((ulonglong)uVar36 >> 0x20);
        auVar7._8_4_ = (int)uVar36;
        auVar7._0_4_ = (uint)uVar8;
        auVar7._4_4_ = SUB84(uVar8,4);
        auVar7._12_4_ = iVar37;
        *(undefined1 (*) [16])(pFVar3 + lVar35 * 0x90 + -0x60) = auVar7;
        *(FName *)(pFVar3 + lVar35 * 0x90 + -0x50) = local_720;
        pFVar3[lVar35 * 0x90 + -0x48] = (FScriptContainerElement)this_00[7].field_0xa;
        local_730.ArrayNum = (int)uVar36;
        local_730.AllocatorInstance.Data = (FScriptContainerElement *)uVar8;
        local_730.ArrayMax = iVar37;
        pFVar5 = pFVar3 + lVar35 * 0x90 + -0x80;
        *(undefined4 *)pFVar5 = uVar46;
        *(undefined4 *)(pFVar5 + 4) = uVar47;
        *(undefined4 *)(pFVar5 + 8) = uVar48;
        *(undefined4 *)(pFVar5 + 0xc) = uVar49;
        pFVar5 = pFVar3 + lVar35 * 0x90 + -0x70;
        *(undefined4 *)pFVar5 = uVar50;
        *(undefined4 *)(pFVar5 + 4) = uVar51;
        *(undefined4 *)(pFVar5 + 8) = uVar52;
        *(undefined4 *)(pFVar5 + 0xc) = uVar53;
        pFVar3[lVar35 * 0x90 + -7] = this->bAngularSpring;
        pFVar3[lVar35 * 0x90 + -8] = this->bLinearSpring;
        pFVar27 = local_7b8;
      }
    }
    uVar25 = (ulonglong)local_798;
    FVar30 = (ForElementType<unsigned_int>)((longlong)local_780 + 4);
  } while( true );
}

// ValidateChainPhysicsBodyDefinitions @ 1464793a0

void __thiscall
FAnimNode_AnimDynamics::ValidateChainPhysicsBodyDefinitions
          (FAnimNode_AnimDynamics *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<FAnimPhysBodyDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FScriptContainerElement *_Dst;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  FReferenceSkeleton *local_res8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  code *local_38;
  FReferenceSkeleton **local_30;
  
  local_30 = &local_res8;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>,FName,FName>
             ::Call;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  local_res8 = param_1;
  FindChainBones((this->BoundBone).BoneName,(this->ChainEnd).BoneName,
                 (TFunctionRef<FName___cdecl(FName)> *)&local_38,&local_48);
  iVar6 = local_48.ArrayNum;
  uVar8 = (ulonglong)local_48.ArrayNum;
  pTVar2 = &this->PhysicsBodyDefinitions;
  iVar10 = (this->PhysicsBodyDefinitions).ArrayNum;
  piVar1 = &(this->PhysicsBodyDefinitions).ArrayNum;
  if (iVar10 < local_48.ArrayNum) {
    iVar10 = local_48.ArrayNum - iVar10;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,8,iVar10,&pTVar2->AllocatorInstance,piVar1,
                       &(this->PhysicsBodyDefinitions).ArrayMax);
    DefaultConstructItems<FAnimPhysBodyDefinition,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0xd0,iVar10);
  }
  else {
    if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_48._8_8_ & 0xffffffff);
    }
    uVar9 = uVar8;
    if (iVar10 <= local_48.ArrayNum) goto LAB_146479501;
    uVar12 = iVar10 - local_48.ArrayNum;
    if ((int)(local_48.ArrayNum | uVar12) < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = local_48._8_8_ & 0xffffffff;
    }
    if (uVar12 == 0) goto LAB_146479501;
    _Dst = (pTVar2->AllocatorInstance).Data + uVar8 * 0xd0;
    iVar10 = (*piVar1 - iVar6) - uVar12;
    if (iVar10 != 0) {
      memmove(_Dst,_Dst + (longlong)(int)uVar12 * 0xd0,(longlong)iVar10 * 0xd0);
    }
    *piVar1 = *piVar1 - uVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,&pTVar2->AllocatorInstance,*piVar1,&(this->PhysicsBodyDefinitions).ArrayMax);
  }
  uVar9 = local_48._8_8_ & 0xffffffff;
LAB_146479501:
  uVar12 = (this->PhysicsBodyDefinitions).ArrayNum;
  if ((int)(uint)uVar9 < (int)uVar12) {
    uVar12 = (uint)uVar9;
  }
  uVar13 = 0;
  if (uVar12 != 0) {
    while( true ) {
      uVar7 = 0;
      if ((int)uVar13 < (int)uVar9) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar11 = (longlong)(int)uVar13;
      uVar7 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      uVar3 = *(undefined8 *)(local_48.AllocatorInstance.Data + lVar11 * 8);
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar13 = uVar13 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar11 * 0xd0) = uVar3;
      if (uVar12 <= uVar13) break;
      uVar9 = local_48._8_8_ & 0xffffffff;
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

