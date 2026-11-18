// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 24

// StaticStruct @ 14a712a10

UScriptStruct * __cdecl FAnimNode_SlopeWarping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping,(UObject *)pUVar1,
                         L"AnimNode_SlopeWarping");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton;
}

// FAnimNode_SlopeWarping @ 14a71b4c0

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

FAnimNode_SlopeWarping * __thiscall
FAnimNode_SlopeWarping::FAnimNode_SlopeWarping(FAnimNode_SlopeWarping *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  uVar9 = _UNK_15066df7c;
  uVar8 = _UNK_15066df78;
  uVar5 = __xmm_80000000000000008000000000000000._4_4_;
  uVar3 = (uint)__xmm_80000000000000008000000000000000;
  this->MySkelMeshComponent = (USkeletalMeshComponent *)0x0;
  this->_padding_ = (longlong)&___7FAnimNode_SlopeWarping__6B_;
  this->MyMovementComponent = (UCharacterMovementComponent *)0x0;
  this->MyAnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  (this->IKFootRootBone).BoneName.ComparisonIndex = 0;
  (this->IKFootRootBone).BoneName.Number = 0;
  puVar1 = &(this->IKFootRootBone).field_0x8;
  (this->IKFootRootBone).BoneIndex = -1;
  (this->IKFootRootBone).bUseSkeletonIndex = 0;
  (this->IKFootRootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PelvisBone).BoneName.ComparisonIndex = 0;
  (this->PelvisBone).BoneName.Number = 0;
  puVar1 = &(this->PelvisBone).field_0x8;
  (this->PelvisBone).BoneIndex = -1;
  (this->PelvisBone).bUseSkeletonIndex = 0;
  (this->PelvisBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->FeetDefinitions).ArrayNum = 0;
  (this->FeetDefinitions).ArrayMax = 0;
  (this->FeetData).ArrayNum = 0;
  (this->FeetData).ArrayMax = 0;
  *(undefined4 *)&this->PelvisOffsetInterpolator = 0x3f800000;
  *(undefined4 *)&(this->PelvisOffsetInterpolator).field_0x4 = 0x3f800000;
  *(undefined2 *)&(this->PelvisOffsetInterpolator).field_0x8 = 0;
  *(undefined4 *)&(this->PelvisOffsetInterpolator).field_0xc = 0;
  *(undefined4 *)&(this->PelvisOffsetInterpolator).field_0x10 = 0x3f800000;
  *(undefined4 *)&(this->PelvisOffsetInterpolator).field_0x14 = 0x3f800000;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x18 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x20 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x28 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x30 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x38 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x40 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x48 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x50 = 0;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x58 = 0;
  (this->FeetDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeetData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^ uVar5;
  uVar8 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^ uVar8;
  uVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^ uVar9;
  uVar10 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar4 = (ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20;
  *(uint *)&(this->GravityDir).field0_0x0 =
       UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^ uVar3;
  *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 4) = uVar7;
  *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 8) = uVar8;
  *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0xc) = uVar9;
  (this->GravityDir).field0_0x0._s_0.Z = (double)CONCAT44((uint)uVar4 ^ uVar5,uVar10 ^ uVar3);
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CustomFloorOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CustomFloorOffset).field0_0x0._s_0.Y = (double)uVar6;
  (this->CustomFloorOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X = 0.0;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y = 0.0;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z = 0.0;
  *(undefined2 *)&(this->FloorNormalInterpolator).field_0x8 = 0;
  *(undefined4 *)&(this->FloorNormalInterpolator).field_0xc = 0;
  *(undefined4 *)&(this->FloorNormalInterpolator).field_0x10 = 0x3f800000;
  *(undefined4 *)&(this->FloorNormalInterpolator).field_0x14 = 0x3f800000;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x18 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x20 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x28 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x30 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x38 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x40 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x48 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x50 = 0;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x58 = 0;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X = 0.0;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = 0.0;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z = 0.0;
  *(undefined2 *)&(this->FloorOffsetInterpolator).field_0x8 = 0;
  *(undefined4 *)&(this->FloorOffsetInterpolator).field_0xc = 0;
  *(undefined4 *)&(this->FloorOffsetInterpolator).field_0x10 = 0x3f800000;
  *(undefined4 *)&(this->FloorOffsetInterpolator).field_0x14 = 0x3f800000;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x18 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x20 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x28 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x30 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x38 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x40 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x48 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x50 = 0;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x58 = 0;
  this->CachedDeltaTime = 0.0;
  this->MaxStepHeight = 50.0;
  puVar2 = &this->field_0x2ac;
  this->bKeepMeshInsideOfCapsule = 1;
  this->bFloorSmoothingInitialized = 0;
  this->bShowDebug = 0;
  this->bWasOnGround = 0;
  this->bUseCustomFloorOffset = 0;
  this->bPullPelvisDown = 1;
  (this->ActorLocation).field0_0x0._s_0.X = 0.0;
  (this->ActorLocation).field0_0x0._s_0.Y = 0.0;
  (this->ActorLocation).field0_0x0._s_0.Z = 0.0;
  (this->GravityDirCompSpace).field0_0x0._s_0.X = 0.0;
  (this->GravityDirCompSpace).field0_0x0._s_0.Y = 0.0;
  (this->GravityDirCompSpace).field0_0x0._s_0.Z = 0.0;
  *(undefined4 *)&this->PelvisOffsetInterpolator = 0x437a0000;
  *(undefined4 *)&(this->PelvisOffsetInterpolator).field_0x4 = 0x3f800000;
  *(undefined4 *)&this->FloorNormalInterpolator = 0x447a0000;
  *(undefined4 *)&(this->FloorNormalInterpolator).field_0x4 = 0x3f800000;
  *(undefined4 *)&this->FloorOffsetInterpolator = 0x447a0000;
  *(undefined4 *)&(this->FloorOffsetInterpolator).field_0x4 = 0x3f800000;
  return this;
}

// operator= @ 14a71cb20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FAnimNode_SlopeWarping * __thiscall
FAnimNode_SlopeWarping::operator=(FAnimNode_SlopeWarping *this,FAnimNode_SlopeWarping *param_1)

{
  int *piVar1;
  TArray<FSlopeWarpingFootDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FSlopeWarpingFootData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  double dVar9;
  uint uVar10;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  pTVar2 = &this->FeetDefinitions;
  this->MySkelMeshComponent = param_1->MySkelMeshComponent;
  this->MyMovementComponent = param_1->MyMovementComponent;
  this->MyAnimInstanceProxy = param_1->MyAnimInstanceProxy;
  (this->IKFootRootBone).BoneName = (param_1->IKFootRootBone).BoneName;
  uVar4 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (uVar4 ^ *(uint *)&(this->IKFootRootBone).field_0x8) & 0x80000000 ^ uVar4;
  uVar5 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar4,0,0x1f)) & 0x7fffffffU ^ uVar5;
  (this->IKFootRootBone).CachedCompactPoseIndex = (param_1->IKFootRootBone).CachedCompactPoseIndex;
  (this->PelvisBone).BoneName = (param_1->PelvisBone).BoneName;
  uVar4 = *(undefined4 *)&(param_1->PelvisBone).field_0x8;
  *(uint *)&(this->PelvisBone).field_0x8 =
       (uVar4 ^ *(uint *)&(this->PelvisBone).field_0x8) & 0x80000000 ^ uVar4;
  uVar5 = *(undefined4 *)&(param_1->PelvisBone).field_0x8;
  *(uint *)&(this->PelvisBone).field_0x8 =
       (SPULL(uVar5,0,0x1f) ^ SPULL(uVar4,0,0x1f)) & 0x7fffffffU ^ uVar5;
  (this->PelvisBone).CachedCompactPoseIndex = (param_1->PelvisBone).CachedCompactPoseIndex;
  if (pTVar2 != &param_1->FeetDefinitions) {
    iVar6 = (param_1->FeetDefinitions).ArrayNum;
    piVar1 = &(this->FeetDefinitions).ArrayMax;
    pFVar7 = (param_1->FeetDefinitions).AllocatorInstance.Data;
    (this->FeetDefinitions).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,4,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x28);
      }
    }
  }
  pTVar3 = &this->FeetData;
  if (pTVar3 != &param_1->FeetData) {
    iVar6 = (param_1->FeetData).ArrayNum;
    piVar1 = &(this->FeetData).ArrayMax;
    pFVar7 = (param_1->FeetData).AllocatorInstance.Data;
    (this->FeetData).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,0x10,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xb0);
      }
    }
  }
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x8;
  *(undefined8 *)&this->PelvisOffsetInterpolator = *(undefined8 *)&param_1->PelvisOffsetInterpolator
  ;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x8 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x18;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x10 =
       *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x10;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x18 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x28;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x20 =
       *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x20;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x28 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x38;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x30 =
       *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x30;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x38 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x48;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x40 =
       *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x40;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x48 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x58;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x50 =
       *(undefined8 *)&(param_1->PelvisOffsetInterpolator).field_0x50;
  *(undefined8 *)&(this->PelvisOffsetInterpolator).field_0x58 = uVar8;
  dVar9 = (param_1->GravityDir).field0_0x0._s_0.Y;
  (this->GravityDir).field0_0x0._s_0.X = (param_1->GravityDir).field0_0x0._s_0.X;
  (this->GravityDir).field0_0x0._s_0.Y = dVar9;
  (this->GravityDir).field0_0x0._s_0.Z = (param_1->GravityDir).field0_0x0._s_0.Z;
  dVar9 = (param_1->CustomFloorOffset).field0_0x0._s_0.Y;
  (this->CustomFloorOffset).field0_0x0._s_0.X = (param_1->CustomFloorOffset).field0_0x0._s_0.X;
  (this->CustomFloorOffset).field0_0x0._s_0.Y = dVar9;
  (this->CustomFloorOffset).field0_0x0._s_0.Z = (param_1->CustomFloorOffset).field0_0x0._s_0.Z;
  this->CachedDeltaTime = param_1->CachedDeltaTime;
  dVar9 = (param_1->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X =
       (param_1->TargetFloorNormalWorldSpace).field0_0x0._s_0.X;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y = dVar9;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z =
       (param_1->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x8;
  *(undefined8 *)&this->FloorNormalInterpolator = *(undefined8 *)&param_1->FloorNormalInterpolator;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x8 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x18;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x10 =
       *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x10;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x18 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x28;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x20 =
       *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x20;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x28 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x38;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x30 =
       *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x30;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x38 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x48;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x40 =
       *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x40;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x48 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x58;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x50 =
       *(undefined8 *)&(param_1->FloorNormalInterpolator).field_0x50;
  *(undefined8 *)&(this->FloorNormalInterpolator).field_0x58 = uVar8;
  dVar9 = (param_1->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X =
       (param_1->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = dVar9;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z =
       (param_1->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x8;
  *(undefined8 *)&this->FloorOffsetInterpolator = *(undefined8 *)&param_1->FloorOffsetInterpolator;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x8 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x18;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x10 =
       *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x10;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x18 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x28;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x20 =
       *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x20;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x28 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x38;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x30 =
       *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x30;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x38 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x48;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x40 =
       *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x40;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x48 = uVar8;
  uVar8 = *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x58;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x50 =
       *(undefined8 *)&(param_1->FloorOffsetInterpolator).field_0x50;
  *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x58 = uVar8;
  this->MaxStepHeight = param_1->MaxStepHeight;
  uVar10 = (ZPULL(*(undefined4 *)&this->field_0x2ac,0,1) ^ param_1->bKeepMeshInsideOfCapsule) & 1 ^
           *(undefined4 *)&this->field_0x2ac;
  *(uint *)&this->field_0x2ac = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x2ac) & 2 ^ uVar10;
  *(uint *)&this->field_0x2ac = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x2ac) & 4 ^ uVar10;
  *(uint *)&this->field_0x2ac = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x2ac) & 8 ^ uVar10;
  *(uint *)&this->field_0x2ac = uVar10;
  uVar10 = (uVar10 ^ *(uint *)&param_1->field_0x2ac) & 0x10 ^ uVar10;
  *(uint *)&this->field_0x2ac = uVar10;
  *(uint *)&this->field_0x2ac = (uVar10 ^ *(uint *)&param_1->field_0x2ac) & 0x20 ^ uVar10;
  dVar9 = (param_1->ActorLocation).field0_0x0._s_0.Y;
  (this->ActorLocation).field0_0x0._s_0.X = (param_1->ActorLocation).field0_0x0._s_0.X;
  (this->ActorLocation).field0_0x0._s_0.Y = dVar9;
  (this->ActorLocation).field0_0x0._s_0.Z = (param_1->ActorLocation).field0_0x0._s_0.Z;
  dVar9 = (param_1->GravityDirCompSpace).field0_0x0._s_0.Y;
  (this->GravityDirCompSpace).field0_0x0._s_0.X = (param_1->GravityDirCompSpace).field0_0x0._s_0.X;
  (this->GravityDirCompSpace).field0_0x0._s_0.Y = dVar9;
  (this->GravityDirCompSpace).field0_0x0._s_0.Z = (param_1->GravityDirCompSpace).field0_0x0._s_0.Z;
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14a721fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread
          (FAnimNode_SlopeWarping *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  __m128d *p_Var1;
  TArray<FSlopeWarpingFootData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  double adVar4 [2];
  undefined8 uVar6;
  uchar auVar5 [16];
  FAnimInstanceProxy *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  bool bVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  TStatId TVar27;
  TTransform<double> *pTVar28;
  TVector<double> *pTVar29;
  TQuat<double> *pTVar30;
  ForAnyElementType FVar31;
  ForElementType<unsigned_int> FVar32;
  TQuat<double> *pTVar33;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  ForElementType<unsigned_int> extraout_RAX;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  ForElementType<unsigned_int> extraout_RAX_00;
  int iVar34;
  ulonglong uVar35;
  FCSPose<FCompactPose> *pFVar36;
  FScriptContainerElement *pFVar37;
  undefined8 *puVar38;
  FCSPose<FCompactPose> *this_00;
  undefined1 *this_01;
  FScriptContainerElement *pFVar39;
  FCompactPoseBoneIndex *pFVar40;
  ForElementType<unsigned_int> FVar41;
  FCompactPoseBoneIndex *pFVar42;
  FBoneReference *pFVar43;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar44;
  ForAnyElementType FVar45;
  FCompactPoseBoneIndex *pFVar46;
  FScriptContainerElement *pFVar47;
  FAnimNode_SlopeWarping *pFVar48;
  ForElementType<unsigned_int> FVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  double dVar57;
  uint uVar143;
  uint uVar144;
  uint uVar146;
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
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar145;
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
  double dVar147;
  undefined4 uVar216;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  double dVar217;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined8 uVar148;
  undefined4 uVar218;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  FWeakObjectPtr FVar149;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  double dVar219;
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  double dVar232;
  undefined1 in_XMM3 [16];
  double dVar250;
  undefined1 auVar234 [16];
  double dVar233;
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  double dVar268;
  double dVar269;
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  double dVar270;
  undefined1 in_XMM5 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  double dVar283;
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  double dVar284;
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  uint uVar297;
  undefined4 uVar298;
  uint uVar299;
  undefined4 uVar300;
  double dVar301;
  double dVar306;
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  double dVar307;
  undefined1 auVar308 [16];
  double dVar311;
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  double dVar312;
  int iVar313;
  int iVar314;
  int iVar315;
  int iVar316;
  float fVar317;
  undefined4 uVar318;
  undefined4 uVar319;
  undefined1 auStackY_1518 [32];
  undefined1 local_14bf;
  undefined1 local_14be;
  undefined1 local_14bd;
  undefined1 local_14bc;
  undefined1 local_14bb;
  FScriptContainerElement local_14ba;
  undefined1 local_14b9;
  undefined1 local_14b8;
  FIdentityFunctor local_14b7;
  TVector<double>_u_0 local_14b0;
  FCompactPoseBoneIndex local_1498;
  FCompactPoseBoneIndex local_1494;
  uchar local_1488 [16];
  ForElementType<unsigned_int> local_1478;
  undefined1 local_1470 [12];
  int iStack_1464;
  undefined1 local_1460 [16];
  FReferenceSkeleton *local_1450;
  ForAnyElementType local_1448;
  double dStack_1440;
  TQuat<double> local_1438;
  double local_1418;
  double dStack_1410;
  undefined8 local_1408;
  int local_1400;
  int iStack_13fc;
  int iStack_13f8;
  undefined4 uStack_13f4;
  double local_13f0;
  TVector<double>_u_0 local_13e8;
  FName local_13d0;
  byte local_13c8;
  undefined1 local_13c0 [16];
  FSkelMeshRefPoseOverride *local_13b0;
  FSharedReferencer<1> local_13a8;
  FAnimNode_SlopeWarping *local_13a0;
  double local_1398;
  TVector<double>_u_0 *local_1390;
  TVector<double>_u_0 *local_1388;
  TTransform<double> *local_1380;
  double *local_1378;
  TTransform<double> *local_1370;
  undefined1 *local_1368;
  TTransform<double> *local_1360;
  TVector<double>_u_0 local_1358;
  undefined1 local_1340 [16];
  double local_1330;
  FScriptContainerElement *local_1328;
  TQuat<double> *local_1320;
  FSourceLocation local_1318;
  TVector<double>_u_0 local_12f8;
  TVector<double>_u_0 local_12e0;
  double local_12c8;
  double dStack_12c0;
  double local_12b8;
  double local_12b0;
  double dStack_12a8;
  double local_12a0;
  FWeakObjectPtr local_1298;
  double dStack_1290;
  FReferenceSkeleton *local_1288;
  undefined1 local_1280 [12];
  undefined4 uStack_1274;
  FString local_1270;
  TVector<double>_u_0 local_1260;
  TVector<double>_u_0 local_1248;
  TVector<double>_u_0 local_1230;
  TVector<double>_u_0 local_1218;
  double local_11f8;
  double local_11f0;
  FString local_11e8;
  TVector<double>_u_0 local_11d8;
  TVector<double>_u_0 local_11b8;
  TVector<double>_u_0 local_1198;
  TVector<double>_u_0 local_1180;
  TVector<double>_u_0 local_1168;
  double local_1150;
  double dStack_1148;
  double local_1140;
  TVector<double>_u_0 local_1138;
  TVector<double>_u_0 local_1120;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  TVector<double>_u_0 local_10f0;
  TVector<double>_u_0 local_10d8;
  TVector<double>_u_0 local_10c0;
  TVector<double>_u_0 local_10a8;
  undefined1 local_1090 [16];
  double local_1080;
  TVector<double>_u_0 local_1078;
  TVector<double>_u_0 local_1060;
  TVector<double>_u_0 local_1048;
  TVector<double>_u_0 local_1030;
  double local_1018;
  TQuat<double> local_1008;
  TQuat<double> local_fe8;
  TVector<double> local_fc8;
  double local_fb0;
  double dStack_fa8;
  double local_fa0;
  double local_f98;
  double dStack_f90;
  double local_f88;
  double local_f80;
  double dStack_f78;
  double local_f70;
  TVector<double> local_f68;
  undefined1 local_f50 [16];
  double local_f40;
  undefined1 local_f38 [16];
  FSkelMeshRefPoseOverride *local_f28;
  undefined1 local_f20 [16];
  double local_f10;
  undefined1 local_f08 [16];
  double local_ef8;
  undefined1 local_ef0 [16];
  double local_ee0;
  undefined1 local_ed8 [16];
  FSkelMeshRefPoseOverride *local_ec8;
  TVector<double> local_ec0;
  undefined1 local_ea8 [16];
  FSkelMeshRefPoseOverride *local_e98;
  double local_e90;
  double dStack_e88;
  double local_e80;
  double local_e78;
  double dStack_e70;
  double local_e68;
  double local_e60;
  double dStack_e58;
  double local_e50;
  undefined1 local_e48 [16];
  FSkelMeshRefPoseOverride *local_e38;
  double local_e30;
  double dStack_e28;
  double local_e20;
  double local_e18;
  double dStack_e10;
  double local_e08;
  TVector<double> local_e00;
  double local_de8;
  double dStack_de0;
  double local_dd8;
  undefined1 local_dd0 [16];
  FAnimNode_SlopeWarping *local_dc0;
  undefined1 local_db8 [16];
  double local_da8;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_da0;
  FScriptContainerElement *local_d90;
  undefined1 local_d88 [16];
  double local_d78;
  double local_d70;
  double dStack_d68;
  FAnimNode_SlopeWarping *local_d60;
  double local_d58;
  FWeakObjectPtr FStack_d50;
  double local_d48;
  FScriptContainerElement *local_d40;
  double dStack_d38;
  FScriptContainerElement *local_d30;
  double local_d28;
  double dStack_d20;
  double local_d18;
  int local_d10;
  int iStack_d0c;
  int iStack_d08;
  int iStack_d04;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  FAnimNode_SlopeWarping *local_ce8;
  FScriptContainerElement *local_ce0;
  double dStack_cd8;
  FScriptContainerElement *local_cd0;
  undefined1 local_cc8 [16];
  double local_cb8;
  FScriptContainerElement *local_cb0;
  double dStack_ca8;
  FScriptContainerElement *local_ca0;
  double local_c98;
  double dStack_c90;
  double local_c88;
  double local_c80;
  double dStack_c78;
  double local_c70;
  double local_c68 [2];
  undefined8 local_c58;
  double local_c50;
  double dStack_c48;
  double local_c40;
  TVector<double> local_c38;
  double local_c18;
  double dStack_c10;
  double local_c08;
  double dStack_c00;
  undefined1 local_bf8 [16];
  uchar local_be8 [16];
  double local_bd8;
  double dStack_bd0;
  double local_bc8;
  double dStack_bc0;
  double local_bb8;
  double dStack_bb0;
  double local_ba8;
  double dStack_ba0;
  undefined1 local_b98 [16];
  FAnimNode_SlopeWarping *local_b88;
  double dStack_b80;
  double local_b78;
  double dStack_b70;
  double local_b68;
  double dStack_b60;
  double local_b58;
  double dStack_b50;
  double local_b48;
  double dStack_b40;
  undefined1 local_b38 [16];
  undefined1 local_b28 [16];
  double local_b18;
  double dStack_b10;
  double local_b08;
  double dStack_b00;
  FCompactPoseBoneIndex local_af8;
  FCompactPoseBoneIndex FStack_af4;
  FCompactPoseBoneIndex FStack_af0;
  FCompactPoseBoneIndex FStack_aec;
  FCompactPoseBoneIndex local_ae8;
  FCompactPoseBoneIndex FStack_ae4;
  FCompactPoseBoneIndex FStack_ae0;
  FCompactPoseBoneIndex FStack_adc;
  FCompactPoseBoneIndex local_ad8;
  FCompactPoseBoneIndex FStack_ad4;
  FCompactPoseBoneIndex FStack_ad0;
  FCompactPoseBoneIndex FStack_acc;
  FCompactPoseBoneIndex local_ac8;
  FCompactPoseBoneIndex FStack_ac4;
  FCompactPoseBoneIndex FStack_ac0;
  FCompactPoseBoneIndex FStack_abc;
  FCompactPoseBoneIndex local_ab8;
  FCompactPoseBoneIndex FStack_ab4;
  FCompactPoseBoneIndex FStack_ab0;
  FCompactPoseBoneIndex FStack_aac;
  FCompactPoseBoneIndex local_aa8;
  FCompactPoseBoneIndex FStack_aa4;
  FCompactPoseBoneIndex FStack_aa0;
  FCompactPoseBoneIndex FStack_a9c;
  double local_a98;
  double dStack_a90;
  double local_a88;
  undefined8 uStack_a80;
  undefined1 local_a78 [16];
  double local_a68;
  double dStack_a60;
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  undefined1 local_a38 [16];
  undefined1 local_a28 [16];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  double local_9f8;
  double dStack_9f0;
  undefined1 local_9e8 [16];
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  undefined8 uStack_9c0;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  double dStack_9a0;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  undefined1 local_938 [16];
  double local_928;
  double dStack_920;
  undefined1 local_918 [16];
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  undefined8 uStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  undefined1 local_8b8 [16];
  undefined1 local_8a8 [16];
  undefined1 local_898 [16];
  undefined1 local_888 [16];
  undefined1 local_878 [16];
  undefined1 local_868 [16];
  double local_858;
  double dStack_850;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  double local_828;
  double dStack_820;
  undefined1 local_818 [16];
  double local_808;
  double dStack_800;
  undefined1 local_7f8 [16];
  double local_7e8;
  double dStack_7e0;
  undefined1 local_7d8 [16];
  double local_7c8;
  undefined8 uStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  undefined8 uStack_7a0;
  FName local_798;
  double dStack_790;
  FName local_788;
  double dStack_780;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_778;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> local_768;
  FScriptContainerElement *local_758;
  double dStack_750;
  FScriptContainerElement *local_748;
  undefined8 uStack_740;
  FScriptContainerElement *local_738;
  double dStack_730;
  FScriptContainerElement *local_728;
  undefined8 uStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  double local_698;
  double dStack_690;
  undefined1 local_688 [16];
  uint local_678;
  uint uStack_674;
  uint uStack_670;
  uint uStack_66c;
  uint local_668;
  uint uStack_664;
  uint uStack_660;
  uint uStack_65c;
  uint local_658;
  uint uStack_654;
  uint uStack_650;
  uint uStack_64c;
  uint local_648;
  uint uStack_644;
  uint uStack_640;
  uint uStack_63c;
  uint local_638;
  uint uStack_634;
  uint uStack_630;
  uint uStack_62c;
  uint local_628;
  uint uStack_624;
  uint uStack_620;
  uint uStack_61c;
  double local_618;
  double dStack_610;
  double local_608;
  undefined8 uStack_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  TVector<double> local_598;
  TVector<double> local_580;
  TVector<double> local_568;
  TVector<double> local_550;
  TVector<double> local_538 [5];
  TQuat<double> local_4b8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [12];
  uint uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined1 local_378 [16];
  uint local_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  int local_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  uint local_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined1 local_2c8 [16];
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  FCompactPoseBoneIndex local_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  double local_298 [2];
  uint local_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  double local_278 [2];
  double local_268 [2];
  double local_258 [2];
  double local_248 [2];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  FCompactPoseBoneIndex local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178 [2];
  double local_168 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined7 extraout_var;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1518;
  local_1478 = (ForElementType<unsigned_int>)param_2;
  local_1448.Data = (FScriptContainerElement *)this;
  TVar27 = FThreadSafeStaticStatInner<FStat_STAT_SlopeWarping_Eval,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_SlopeWarping_Eval,1> *)
                      &StatPtr_STAT_SlopeWarping_Eval);
  local_1318.Impl._Line = 0x117;
  local_1318.Impl._Function =
       "void __cdecl FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread(struct FComponentSpacePoseContext &,class TArray<struct FBoneTransform,class TSizedDefaultAllocator<32> > &)"
  ;
  local_1318.Impl._Column = 2;
  local_1318.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13d0,*(TStatIdData **)&(TVar27.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1318);
  if ((param_2->ArrayNum != 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0x119,L""), bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = &param_1->Pose;
  local_1470._0_8_ = *(undefined8 *)&(param_1->Pose).Pose.field_0x10;
  iVar25 = TAutoConsoleVariable<int>::GetValueOnAnyThread(&CVarAnimNodeSlopeWarpingDebug,false);
  uVar143 = 0;
  if (iVar25 == 1) {
    uVar143 = 0x10;
  }
  *(uint *)&this->field_0x2ac = uVar143 | *(uint *)&this->field_0x2ac & 0xffffffef;
  FBoneReference::GetCompactPoseIndex(&this->IKFootRootBone,(FBoneContainer *)&local_1498);
  pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_1498);
  local_438.Rotation.XY.m128d_f64 = *&(pTVar28->Rotation).XY.m128d_f64;
  local_438.Rotation.ZW.m128d_f64 = *&(pTVar28->Rotation).ZW.m128d_f64;
  adVar4 = *&(pTVar28->Translation).XY.m128d_f64;
  p_Var1 = &(pTVar28->Translation).ZW;
  uVar318 = *(undefined4 *)p_Var1->m128d_f64;
  uVar319 = *(undefined4 *)((longlong)(pTVar28->Translation).ZW.m128d_f64 + 4);
  local_438.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
  local_438.Scale3D.XY.m128d_f64 = *&(pTVar28->Scale3D).XY.m128d_f64;
  local_438.Scale3D.ZW.m128d_f64 = *&(pTVar28->Scale3D).ZW.m128d_f64;
  local_438.Translation.XY.m128d_f64 = adVar4;
  bVar22 = UE::Math::TTransform<double>::ContainsNaN(&local_438);
  local_c68 = adVar4;
  if (bVar22) {
    local_13a8.ReferenceController = (TReferenceControllerBase<1> *)&local_438;
    bVar22 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l10::<lambda_1>::
             operator()(&local_13a8);
    if (bVar22) {
      local_c68 = local_438.Translation.XY.m128d_f64;
      uVar318 = local_438.Translation.ZW.m128d_f64[0]._0_4_;
      uVar319 = local_438.Translation.ZW.m128d_f64[0]._4_4_;
    }
    else {
      local_438.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_438.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_438.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_438.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_438.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_438.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_c68 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      uVar318 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar319 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    }
  }
  local_c58 = CONCAT44(uVar319,uVar318);
  UE::Math::TTransform<double>::GetUnitAxis(&local_438,&local_fc8,Z);
  bVar22 = UE::Math::TVector<double>::ContainsNaN(&this->GravityDir);
  if ((bVar22) &&
     (local_13a0 = this,
     bVar22 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l13::<lambda_2>::
              operator()(&local_13a0), !bVar22)) {
    uVar143 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^
              __xmm_80000000000000008000000000000000._4_4_;
    uVar144 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^ _UNK_15066df78;
    uVar146 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^ _UNK_15066df7c;
    in_XMM3._0_8_ =
         (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                                0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0) ^
                          (uint)__xmm_80000000000000008000000000000000);
    in_XMM3._8_4_ = _UNK_15066df78;
    in_XMM3._12_4_ = _UNK_15066df7c;
    *(uint *)&(this->GravityDir).field0_0x0 =
         UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^
         (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 4) = uVar143;
    *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 8) = uVar144;
    *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0xc) = uVar146;
    *(double *)((longlong)&(this->GravityDir).field0_0x0 + 0x10) = in_XMM3._0_8_;
  }
  pTVar29 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (&this->MyAnimInstanceProxy->ComponentTransform,&local_568,&this->GravityDir);
  pTVar29 = UE::Math::TVector<double>::GetSafeNormal
                      (pTVar29,&local_598,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  auVar166 = ___xmm_7ff00000000000007ff0000000000000;
  fVar317 = __real_bf800000;
  fVar54 = __real_40a00000;
  pTVar2 = &this->FeetData;
  dVar232 = (pTVar29->field0_0x0)._s_0.Y;
  (this->GravityDirCompSpace).field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  (this->GravityDirCompSpace).field0_0x0._s_0.Y = dVar232;
  (this->GravityDirCompSpace).field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  uVar143 = (this->FeetData).ArrayNum;
  uVar35 = (ulonglong)(int)uVar143;
  pFVar46 = (FCompactPoseBoneIndex *)(pTVar2->AllocatorInstance).Data;
  pFVar42 = pFVar46 + 4;
  pFVar40 = pFVar46 + uVar35 * 0x2c;
  while( true ) {
    local_1488._0_8_ = pFVar46;
    if ((this->FeetData).ArrayNum != (int)uVar35) {
      local_14bf = 0;
      `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_14bf);
    }
    dVar232 = auVar166._8_8_;
    if (pFVar46 == pFVar40) break;
    pFVar36 = this_00;
    pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,*pFVar46);
    dVar250 = (pTVar28->Rotation).XY.m128d_f64[1];
    *(double *)pFVar42 = (pTVar28->Rotation).XY.m128d_f64[0];
    *(double *)(pFVar42 + 2) = dVar250;
    dVar250 = (pTVar28->Rotation).ZW.m128d_f64[1];
    *(double *)(pFVar42 + 4) = (pTVar28->Rotation).ZW.m128d_f64[0];
    *(double *)(pFVar42 + 6) = dVar250;
    dVar250 = (pTVar28->Translation).XY.m128d_f64[1];
    *(double *)(pFVar42 + 8) = (pTVar28->Translation).XY.m128d_f64[0];
    *(double *)(pFVar42 + 10) = dVar250;
    dVar250 = (pTVar28->Translation).ZW.m128d_f64[1];
    *(double *)(pFVar42 + 0xc) = (pTVar28->Translation).ZW.m128d_f64[0];
    *(double *)(pFVar42 + 0xe) = dVar250;
    dVar250 = (pTVar28->Scale3D).XY.m128d_f64[1];
    *(double *)(pFVar42 + 0x10) = (pTVar28->Scale3D).XY.m128d_f64[0];
    *(double *)(pFVar42 + 0x12) = dVar250;
    dVar250 = (pTVar28->Scale3D).ZW.m128d_f64[1];
    *(double *)(pFVar42 + 0x14) = (pTVar28->Scale3D).ZW.m128d_f64[0];
    *(double *)(pFVar42 + 0x16) = dVar250;
    local_ae8 = pFVar42[4];
    FStack_ae4 = pFVar42[5];
    FStack_ae0 = pFVar42[6];
    FStack_adc = pFVar42[7];
    local_af8 = *pFVar42;
    FStack_af4 = pFVar42[1];
    FStack_af0 = pFVar42[2];
    FStack_aec = pFVar42[3];
    uVar146 = auVar166._0_4_;
    uVar297 = auVar166._4_4_;
    auVar150._0_8_ = (double)CONCAT44((uint)FStack_ae4 & uVar297,(uint)local_ae8 & uVar146);
    uVar299 = auVar166._8_4_;
    auVar150._8_4_ = (uint)FStack_ae0 & uVar299;
    uVar26 = auVar166._12_4_;
    auVar150._12_4_ = (uint)FStack_adc & uVar26;
    auVar58._0_8_ = (double)CONCAT44((uint)FStack_af4 & uVar297,(uint)local_af8 & uVar146);
    auVar58._8_4_ = (uint)FStack_af0 & uVar299;
    auVar58._12_4_ = (uint)FStack_aec & uVar26;
    dVar250 = auVar166._0_8_;
    auVar151._8_8_ = -(ulonglong)(auVar150._8_8_ == dVar232);
    auVar151._0_8_ = -(ulonglong)(auVar150._0_8_ == dVar250);
    uVar144 = movmskpd((int)pTVar28,auVar151);
    auVar59._8_8_ = -(ulonglong)(auVar58._8_8_ == dVar232);
    auVar59._0_8_ = -(ulonglong)(auVar58._0_8_ == dVar250);
    iVar25 = movmskpd((int)pFVar36,auVar59);
    if ((uVar144 & 0x3fffffff) == 0 && iVar25 == 0) {
      local_ac8 = pFVar42[0xc];
      FStack_ac4 = pFVar42[0xd];
      FStack_ac0 = pFVar42[0xe];
      FStack_abc = pFVar42[0xf];
      local_ad8 = pFVar42[8];
      FStack_ad4 = pFVar42[9];
      FStack_ad0 = pFVar42[10];
      FStack_acc = pFVar42[0xb];
      auVar152._0_8_ = (double)CONCAT44((uint)FStack_ac4 & uVar297,(uint)local_ac8 & uVar146);
      auVar152._8_4_ = (uint)FStack_ac0 & uVar299;
      auVar152._12_4_ = (uint)FStack_abc & uVar26;
      auVar60._0_8_ = (double)CONCAT44((uint)FStack_ad4 & uVar297,(uint)local_ad8 & uVar146);
      auVar60._8_4_ = (uint)FStack_ad0 & uVar299;
      auVar60._12_4_ = (uint)FStack_acc & uVar26;
      auVar153._8_8_ = -(ulonglong)(auVar152._8_8_ == dVar232);
      auVar153._0_8_ = -(ulonglong)(auVar152._0_8_ == dVar250);
      uVar144 = movmskpd(0,auVar153);
      auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ == dVar232);
      auVar61._0_8_ = -(ulonglong)(auVar60._0_8_ == dVar250);
      iVar25 = movmskpd(iVar25,auVar61);
      if ((uVar144 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a722421;
      local_aa8 = pFVar42[0x14];
      FStack_aa4 = pFVar42[0x15];
      FStack_aa0 = pFVar42[0x16];
      FStack_a9c = pFVar42[0x17];
      local_ab8 = pFVar42[0x10];
      FStack_ab4 = pFVar42[0x11];
      FStack_ab0 = pFVar42[0x12];
      FStack_aac = pFVar42[0x13];
      auVar154._0_8_ = (double)CONCAT44((uint)FStack_aa4 & uVar297,(uint)local_aa8 & uVar146);
      auVar154._8_4_ = (uint)FStack_aa0 & uVar299;
      auVar154._12_4_ = (uint)FStack_a9c & uVar26;
      auVar62._0_8_ = (double)CONCAT44((uint)FStack_ab4 & uVar297,(uint)local_ab8 & uVar146);
      auVar62._8_4_ = (uint)FStack_ab0 & uVar299;
      auVar62._12_4_ = (uint)FStack_aac & uVar26;
      auVar155._8_8_ = -(ulonglong)(auVar154._8_8_ == dVar232);
      auVar155._0_8_ = -(ulonglong)(auVar154._0_8_ == dVar250);
      uVar144 = movmskpd(0,auVar155);
      auVar63._8_8_ = -(ulonglong)(auVar62._8_8_ == dVar232);
      auVar63._0_8_ = -(ulonglong)(auVar62._0_8_ == dVar250);
      iVar25 = movmskpd(iVar25,auVar63);
      if ((uVar144 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a722421;
    }
    else {
LAB_14a722421:
      local_1398 = (double)local_1488._0_8_;
      bVar22 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l21::<lambda_3>::
               operator()(&local_1398);
      if (!bVar22) {
        *(double (*) [2])pFVar42 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        *(double (*) [2])(pFVar42 + 4) =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        *(double (*) [2])(pFVar42 + 8) =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        *(double (*) [2])(pFVar42 + 0xc) =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        *(double (*) [2])(pFVar42 + 0x10) =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        *(double (*) [2])(pFVar42 + 0x14) =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      }
    }
    local_c50 = *(double *)(pFVar42 + 8);
    dStack_c48 = *(double *)(pFVar42 + 10);
    local_c40 = *(double *)(pFVar42 + 0xc);
    uStack_a80 = *(undefined8 *)(pFVar42 + 0xe);
    local_a98 = local_c50;
    dStack_a90 = dStack_c48;
    local_a88 = local_c40;
    if (this->bShowDebug != 0) {
      pFVar7 = this->MyAnimInstanceProxy;
      local_a58 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
      local_b48 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
      dStack_b40 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1];
      local_b58 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
      dStack_b50 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
      in_XMM3 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Translation.ZW.m128d_f64;
      auVar308._0_8_ = local_c40 * local_b48;
      auVar308._8_8_ = dStack_b40 * 0.0;
      dVar301 = local_b58 * local_c50;
      dVar306 = dStack_b50 * dStack_c48;
      local_a48 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
      auVar156 = blendpd(local_a58,local_a48,2);
      dVar147 = local_a48._0_8_;
      dVar217 = local_a48._8_8_;
      dVar232 = auVar308._0_8_ * local_a58._8_8_ - dVar147 * dVar306;
      auVar64._8_4_ = SUB84(dVar306,0);
      auVar64._0_8_ = dVar301;
      auVar64._12_4_ = (int)((ulonglong)dVar306 >> 0x20);
      auVar65 = blendpd(auVar64,auVar308,2);
      auVar285._8_4_ = SUB84(dVar232,0);
      auVar285._0_8_ = dVar306 * local_a58._0_8_ - local_a58._8_8_ * dVar301;
      auVar285._12_4_ = (int)((ulonglong)dVar232 >> 0x20);
      auVar66._0_8_ = auVar65._0_8_ * dVar147 - auVar156._0_8_ * auVar308._0_8_;
      auVar66._8_8_ = auVar65._8_8_ * dVar217 - auVar156._8_8_ * auVar308._8_8_;
      local_a18 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
      auVar65 = blendpd(auVar285,auVar66,2);
      dVar232 = dVar232 + dVar232;
      dVar250 = auVar66._0_8_ + auVar66._0_8_;
      uVar318 = (undefined4)((ulonglong)dVar250 >> 0x20);
      auVar286._0_8_ = auVar65._0_8_ + auVar65._0_8_;
      auVar286._8_8_ = auVar65._8_8_ + auVar65._8_8_;
      auVar271._8_4_ = SUB84(dVar250,0);
      auVar271._0_8_ = dVar232;
      auVar271._12_4_ = uVar318;
      auVar251._8_4_ = SUB84(dVar250,0);
      auVar251._0_8_ = dVar232;
      auVar251._12_4_ = uVar318;
      auVar65 = blendpd(local_a18,local_a48,2);
      auVar272._0_8_ = auVar271._8_8_ * local_a18._0_8_ - local_a18._8_8_ * dVar232;
      auVar272._8_8_ = auVar286._0_8_ * local_a18._8_8_ - dVar147 * dVar250;
      auVar156 = blendpd(auVar251,auVar286,2);
      local_9f8 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
      dStack_9f0 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
      auVar67._8_4_ = SUB84(auVar272._8_8_,0);
      auVar67._0_8_ = auVar272._0_8_;
      auVar67._12_4_ = (int)((ulonglong)auVar272._8_8_ >> 0x20);
      auVar252._0_8_ = auVar156._0_8_ * dVar147 - auVar65._0_8_ * auVar286._0_8_;
      auVar252._8_8_ = auVar156._8_8_ * dVar217 - auVar65._8_8_ * auVar286._8_8_;
      auVar157._8_4_ = local_a48._8_4_;
      auVar157._0_8_ = dVar217;
      auVar157._12_4_ = local_a48._12_4_;
      in_XMM5 = blendpd(auVar272,auVar252,2);
      local_11d8._s_0.X = dVar217 * dVar232 + dVar301 + auVar67._8_8_ + local_9f8;
      local_11d8._s_0.Y = auVar157._8_8_ * dVar250 + dVar306 + auVar252._0_8_ + dStack_9f0;
      local_11d8._s_0.Z = dVar217 * auVar286._0_8_ + auVar308._0_8_ + in_XMM5._0_8_ + in_XMM3._0_8_;
      local_a38 = local_a58;
      local_a28 = local_a48;
      local_a08 = local_a48;
      local_9e8 = in_XMM3;
      FAnimInstanceProxy::AnimDrawDebugSphere
                (this->MyAnimInstanceProxy,(TVector<double> *)&local_11d8._s_0,fVar54,0x10,
                 &FColor::Red,false,fVar317,0.0,SDPG_World);
    }
    uVar35 = (ulonglong)uVar143;
    pFVar46 = (FCompactPoseBoneIndex *)(local_1488._0_8_ + 0xb0);
    pFVar42 = pFVar42 + 0x2c;
  }
  GetFootIKCentroid((TVector<double> *)&local_12f8._s_0,pTVar2);
  FVar41 = local_1478;
  if (this->bShowDebug != 0) {
    UE::Math::TTransform<double>::TransformPosition
              (&this->MyAnimInstanceProxy->ComponentTransform,&local_c38,
               (TVector<double> *)&local_12f8._s_0);
    FAnimInstanceProxy::AnimDrawDebugSphere
              (this->MyAnimInstanceProxy,&local_c38,fVar54,4,&FColor::Red,false,fVar317,0.0,
               SDPG_World);
  }
  GetSmoothedFloorInfo
            (this,this_00,(TVector<double> *)&local_13e8._s_0,(TVector<double> *)&local_14b0._s_0);
  bVar22 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)&local_13e8._s_0);
  if (bVar22) {
    local_1390 = &local_13e8;
    bVar22 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l30::<lambda_4>::
             operator()(&local_1390);
    if (!bVar22) {
      local_13e8._s_0.X =
           (double)CONCAT44(UE::Math::TVector<double>::UpVector.field0_0x0._4_4_,
                            UE::Math::TVector<double>::UpVector.field0_0x0._0_4_);
      local_13e8._s_0.Y =
           (double)CONCAT44(UE::Math::TVector<double>::UpVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::UpVector.field0_0x0._8_4_);
      local_13e8._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    }
  }
  bVar22 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)&local_14b0._s_0);
  if (bVar22) {
    local_1388 = &local_14b0;
    bVar22 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l33::<lambda_5>::
             operator()(&local_1388);
    if (!bVar22) {
      local_14b0._s_0.X = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      local_14b0._s_0.Y = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_14b0._s_0.Z = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    }
  }
  dVar232 = __real_3f1a36e2e0000000;
  uVar148 = __xmm_7fffffffffffffff7fffffffffffffff;
  uVar143 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar144 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_14b0._0_8_ >> 0x20) & uVar144,
                         SUB84(local_14b0._s_0.X,0) & uVar143)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_14b0._8_8_ >> 0x20) & uVar144,
                        SUB84(local_14b0._s_0.Y,0) & uVar143))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)local_14b0._16_8_ >> 0x20) & uVar144,
                       SUB84(local_14b0._s_0.Z,0) & uVar143))) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  if (this->bShowDebug != 0) {
    UE::Math::TTransform<double>::TransformPosition
              (&this->MyAnimInstanceProxy->ComponentTransform,(TVector<double> *)&local_1358._s_0,
               (TVector<double> *)&local_14b0._s_0);
    UE::Math::TTransform<double>::TransformVectorNoScale
              (&this->MyAnimInstanceProxy->ComponentTransform,(TVector<double> *)&local_1260._s_0,
               (TVector<double> *)&local_13e8._s_0);
    FAnimInstanceProxy::AnimDrawDebugSphere
              (this->MyAnimInstanceProxy,(TVector<double> *)&local_1358._s_0,__real_40400000,8,
               &FColor::Yellow,false,fVar317,0.0,SDPG_World);
    in_XMM3 = ZEXT416((uint)__real_41200000);
    local_1248._s_0.X = local_1260._s_0.X * __real_4059000000000000 + local_1358._s_0.X;
    local_1248._s_0.Z = local_1260._s_0.Z * __real_4059000000000000 + local_1358._s_0.Z;
    local_1248._s_0.Y = local_1260._s_0.Y * __real_4059000000000000 + local_1358._s_0.Y;
    FAnimInstanceProxy::AnimDrawDebugDirectionalArrow
              (this->MyAnimInstanceProxy,(TVector<double> *)&local_1358._s_0,
               (TVector<double> *)&local_1248._s_0,__real_41200000,&FColor::Yellow,false,fVar317,0.0
               ,SDPG_World);
    UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_14b0._s_0,&local_11e8);
    ::FString::PrintfImpl(&local_1270,L"FloorOffset: %s");
    if (local_11e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_11e8.Data.AllocatorInstance.Data);
    }
    FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
              (this->MyAnimInstanceProxy,&local_1270,&FColor::Red,
               &UE::Math::TVector2<double>::UnitVector,SDPG_World);
    if (local_1270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1270.Data.AllocatorInstance.Data);
    }
  }
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_1438,&local_fc8,(TVector<double> *)&local_13e8._s_0);
  iVar25 = _finite(local_1438.X);
  if (((iVar25 == 0) || (iVar25 = _finite(local_1438.Y), iVar25 == 0)) ||
     ((iVar25 = _finite(local_1438.Z), iVar25 == 0 || (iVar25 = _finite(local_1438.W), iVar25 == 0))
     )) {
    local_1320 = &local_1438;
    bVar23 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l39::<lambda_6>::
             operator()(&local_1320);
    if (!bVar23) {
      local_1438.X = UE::Math::TQuat<double>::Identity.X;
      local_1438.Y = UE::Math::TQuat<double>::Identity.Y;
      local_1438.Z = UE::Math::TQuat<double>::Identity.Z;
      local_1438.W = UE::Math::TQuat<double>::Identity.W;
    }
  }
  auVar65._8_8_ = 0;
  auVar65._0_8_ = __real_3e45798ee0000000;
  bVar23 = UE::Math::TQuat<double>::Equals
                     (&local_1438,&UE::Math::TQuat<double>::Identity,__real_3e45798ee0000000);
  if (!bVar23) {
    local_1008.X = local_438.Rotation.XY.m128d_f64[0];
    local_1008.Y = local_438.Rotation.XY.m128d_f64[1];
    local_1008.Z = local_438.Rotation.ZW.m128d_f64[0];
    local_1008.W = local_438.Rotation.ZW.m128d_f64[1];
    pTVar30 = UE::Math::TQuat<double>::operator*(&local_1438,&local_4b8,&local_1008);
    dVar232 = pTVar30->Z;
    dVar250 = pTVar30->W;
    uVar3 = pTVar30->X;
    uVar6 = pTVar30->Y;
    dVar147 = dVar232 * dVar232 + (double)uVar3 * (double)uVar3;
    dVar217 = dVar250 * dVar250 + (double)uVar6 * (double)uVar6;
    auVar156._8_4_ = SUB84(dVar217,0);
    auVar156._0_8_ = dVar147;
    auVar156._12_4_ = (int)((ulonglong)dVar217 >> 0x20);
    auVar68._0_8_ = auVar156._8_8_ + dVar147;
    auVar68._8_8_ = dVar147 + dVar217;
    auVar65 = sqrtpd(auVar65,auVar68);
    uVar50 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar68._0_8_);
    uVar52 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar68._8_8_);
    uVar51 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar68._0_8_);
    uVar53 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar68._8_8_);
    auVar156 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar65);
    auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
    auVar158._0_8_ = (ulonglong)(auVar156._0_8_ * (double)uVar3) & uVar50;
    uVar35 = uVar52 & (ulonglong)(auVar156._8_8_ * (double)uVar6);
    auVar158._8_4_ = (undefined4)uVar35;
    auVar158._12_4_ = (undefined4)(uVar35 >> 0x20);
    in_XMM3._0_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
    in_XMM3._4_4_ =
         ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
    in_XMM3._8_4_ = ~(uint)uVar52 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
    in_XMM3._12_4_ =
         ~(uint)(uVar52 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
    auVar69._0_8_ = (ulonglong)(auVar65._0_8_ * dVar232) & uVar51;
    uVar35 = uVar53 & (ulonglong)(auVar65._8_8_ * dVar250);
    auVar69._8_4_ = (undefined4)uVar35;
    auVar69._12_4_ = (undefined4)(uVar35 >> 0x20);
    in_XMM5._0_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
    in_XMM5._4_4_ =
         ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
    in_XMM5._8_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
    in_XMM5._12_4_ =
         ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
    local_438.Rotation.XY.m128d_f64 = (double  [2])(auVar158 | in_XMM3);
    local_438.Rotation.ZW.m128d_f64 = (double  [2])(auVar69 | in_XMM5);
    dVar232 = __real_3f1a36e2e0000000;
  }
  local_438.Translation.XY.m128d_f64[1] = local_438.Translation.XY.m128d_f64[1] + local_14b0._s_0.Y;
  local_438.Translation.XY.m128d_f64[0] = local_438.Translation.XY.m128d_f64[0] + local_14b0._s_0.X;
  local_438.Translation.ZW.m128d_f64[1] = local_438.Translation.ZW.m128d_f64[1] + 0.0;
  local_438.Translation.ZW.m128d_f64[0] = local_438.Translation.ZW.m128d_f64[0] + local_14b0._s_0.Z;
  if (bVar23) {
    if (bVar22) {
      uVar143 = (this->FeetData).ArrayNum;
      uVar35 = (ulonglong)(int)uVar143;
      pFVar47 = (pTVar2->AllocatorInstance).Data;
      pFVar37 = pFVar47 + 0x30;
      pFVar39 = pFVar47 + uVar35 * 0xb0;
      local_1488._0_8_ = pFVar39;
      while( true ) {
        if ((this->FeetData).ArrayNum != (int)uVar35) {
          local_14bd = 0;
          `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_14bd);
          uVar35 = (ulonglong)uVar143;
          pFVar39 = (FScriptContainerElement *)local_1488._0_8_;
        }
        if (pFVar47 == pFVar39) break;
        in_XMM3 = *(undefined1 (*) [16])pFVar37;
        pFVar47 = pFVar47 + 0xb0;
        local_828 = *(double *)&pFVar37[0x10].field_0x0;
        dStack_820 = *(double *)(pFVar37 + 0x18);
        *(double *)&pFVar37->field_0x0 = local_14b0._s_0.X + in_XMM3._0_8_;
        *(double *)(pFVar37 + 8) = local_14b0._s_0.Y + in_XMM3._8_8_;
        *(double *)&pFVar37[0x10].field_0x0 = local_14b0._s_0.Z + local_828;
        *(double *)(pFVar37 + 0x18) = dStack_820 + 0.0;
        pFVar37 = pFVar37 + 0xb0;
        local_838 = in_XMM3;
      }
    }
  }
  else {
    uVar143 = (this->FeetData).ArrayNum;
    uVar35 = (ulonglong)(int)uVar143;
    pFVar47 = (pTVar2->AllocatorInstance).Data;
    pFVar37 = pFVar47 + 0x10;
    local_1488._0_8_ = pFVar47 + uVar35 * 0xb0;
    pFVar39 = pFVar47 + uVar35 * 0xb0;
    while( true ) {
      if ((this->FeetData).ArrayNum != (int)uVar35) {
        local_14be = 0;
        `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_14be);
        pFVar39 = (FScriptContainerElement *)local_1488._0_8_;
      }
      dVar232 = __real_3f1a36e2e0000000;
      uVar148 = __xmm_7fffffffffffffff7fffffffffffffff;
      if (pFVar47 == pFVar39) break;
      local_11b8._s_0.X = (double)*(undefined8 *)&pFVar37[0x20].field_0x0;
      local_11b8._s_0.Y = (double)*(undefined8 *)(pFVar37 + 0x28);
      local_11b8._s_0.Z = (double)*(undefined8 *)&pFVar37[0x30].field_0x0;
      uStack_9c0 = *(undefined8 *)(pFVar37 + 0x38);
      local_fb0 = local_11b8._s_0.X;
      dStack_fa8 = local_11b8._s_0.Y;
      local_fa0 = local_11b8._s_0.Z;
      local_9d8 = local_11b8._s_0.X;
      dStack_9d0 = local_11b8._s_0.Y;
      local_9c8 = local_11b8._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (&local_1438,(TVector<double> *)&local_1230._s_0,(TVector<double> *)&local_11b8._s_0
                );
      local_f88 = local_1230._s_0.Z + local_14b0._s_0.Z;
      local_f98 = local_1230._s_0.X + local_14b0._s_0.X;
      dStack_f90 = local_1230._s_0.Y + local_14b0._s_0.Y;
      *(double *)&pFVar37[0x20].field_0x0 = local_f98;
      *(double *)(pFVar37 + 0x28) = dStack_f90;
      *(double *)&pFVar37[0x30].field_0x0 = local_f88;
      *(undefined8 *)(pFVar37 + 0x38) = 0;
      local_9b8 = *(double *)&pFVar37->field_0x0;
      dStack_9b0 = *(double *)(pFVar37 + 8);
      local_9a8 = *(double *)&pFVar37[0x10].field_0x0;
      dStack_9a0 = *(double *)(pFVar37 + 0x18);
      auVar253._8_4_ = SUB84(local_1438.X,0);
      auVar253._0_8_ = local_1438.X;
      auVar253._12_4_ = (int)((ulonglong)local_1438.X >> 0x20);
      auVar159._8_4_ = SUB84(local_1438.Y,0);
      auVar159._0_8_ = local_1438.Y;
      auVar159._12_4_ = (int)((ulonglong)local_1438.Y >> 0x20);
      auVar70._8_4_ = SUB84(local_1438.W,0);
      auVar70._0_8_ = local_1438.W;
      auVar70._12_4_ = (int)((ulonglong)local_1438.W >> 0x20);
      dVar232 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar217 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar250 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar301 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      auVar71._8_4_ = SUB84(local_1438.Z,0);
      auVar71._0_8_ = local_1438.Z;
      auVar71._12_4_ = (int)((ulonglong)local_1438.Z >> 0x20);
      dVar147 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar306 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar311 = local_1438.X * local_9a8 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                local_1438.W * dStack_9b0 +
                local_1438.Y * dStack_9a0 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                local_1438.Z * local_9b8 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar9._8_4_ = SUB84(dVar311,0);
      auVar9._0_8_ = local_1438.X * dStack_9a0 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_1438.W * local_9b8 +
                     local_1438.Y * local_9a8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     local_1438.Z * dStack_9b0 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar9._12_4_ = (int)((ulonglong)dVar311 >> 0x20);
      *(undefined1 (*) [16])pFVar37 = auVar9;
      *(double *)&pFVar37[0x10].field_0x0 =
           local_1438.X * dStack_9b0 * dVar250 + local_1438.W * local_9a8 +
           local_1438.Y * local_9b8 * dVar232 + local_1438.Z * dStack_9a0 * dVar147;
      *(double *)(pFVar37 + 0x18) =
           auVar253._8_8_ * local_9b8 * dVar301 + auVar70._8_8_ * dStack_9a0 +
           auVar159._8_8_ * dStack_9b0 * dVar217 + auVar71._8_8_ * local_9a8 * dVar306;
      local_a68 = *(double *)&pFVar37[0x10].field_0x0;
      dStack_a60 = *(double *)(pFVar37 + 0x18);
      local_a78 = *(undefined1 (*) [16])pFVar37;
      dVar232 = local_a68 * local_a68 + local_a78._0_8_ * local_a78._0_8_;
      dVar250 = dStack_a60 * dStack_a60 + local_a78._8_8_ * local_a78._8_8_;
      auVar72._8_4_ = SUB84(dVar250,0);
      auVar72._0_8_ = dVar232;
      auVar72._12_4_ = (int)((ulonglong)dVar250 >> 0x20);
      auVar73._0_8_ = auVar72._8_8_ + dVar232;
      auVar73._8_8_ = dVar232 + dVar250;
      local_918 = *(undefined1 (*) [16])pFVar37;
      auVar65 = sqrtpd(local_a78,auVar73);
      uVar50 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar73._0_8_)
      ;
      uVar52 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar73._8_8_)
      ;
      uVar51 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar73._0_8_)
      ;
      uVar53 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar73._8_8_)
      ;
      local_908 = *(double *)&pFVar37[0x10].field_0x0;
      dStack_900 = *(double *)(pFVar37 + 0x18);
      auVar156 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
      auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar65);
      auVar254._0_8_ = uVar50 & (ulonglong)(auVar156._0_8_ * local_908);
      uVar35 = uVar52 & (ulonglong)(auVar156._8_8_ * dStack_900);
      auVar254._8_4_ = (undefined4)uVar35;
      auVar254._12_4_ = (undefined4)(uVar35 >> 0x20);
      auVar160._0_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar160._4_4_ =
           ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar160._8_4_ = ~(uint)uVar52 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar160._12_4_ =
           ~(uint)(uVar52 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      auVar74._0_8_ = (ulonglong)(auVar65._0_8_ * local_918._0_8_) & uVar51;
      uVar35 = uVar53 & (ulonglong)(auVar65._8_8_ * local_918._8_8_);
      auVar74._8_4_ = (undefined4)uVar35;
      auVar74._12_4_ = (undefined4)(uVar35 >> 0x20);
      in_XMM5._0_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      in_XMM5._4_4_ =
           ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      in_XMM5._8_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      in_XMM5._12_4_ =
           ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])pFVar37 = auVar74 | in_XMM5;
      *(undefined1 (*) [16])(pFVar37 + 0x10) = auVar254 | auVar160;
      in_XMM3 = local_918;
      local_938 = local_a78;
      local_928 = local_a68;
      dStack_920 = dStack_a60;
      if (this->bShowDebug != 0) {
        pFVar7 = this->MyAnimInstanceProxy;
        local_f70 = *(double *)&pFVar37[0x30].field_0x0;
        uStack_8e0 = *(undefined8 *)(pFVar37 + 0x38);
        local_f80 = *(double *)&pFVar37[0x20].field_0x0;
        dStack_f78 = *(double *)(pFVar37 + 0x28);
        local_8d8 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
        dStack_8d0 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
        local_8c8 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dStack_8c0 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1];
        in_XMM3 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Translation.ZW.m128d_f64;
        dVar147 = local_f70 * local_8c8;
        dVar250 = dStack_8c0 * 0.0;
        local_8a8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
        dVar217 = local_8a8._0_8_;
        dVar306 = local_f80 * local_8d8;
        dVar311 = dStack_f78 * dStack_8d0;
        local_8b8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
        auVar156 = blendpd(local_8b8,local_8a8,2);
        dVar301 = local_8a8._8_8_;
        dVar232 = dVar147 * local_8b8._8_8_ - dVar217 * dVar311;
        auVar75._8_4_ = SUB84(dVar311,0);
        auVar75._0_8_ = dVar306;
        auVar75._12_4_ = (int)((ulonglong)dVar311 >> 0x20);
        auVar10._8_4_ = SUB84(dVar250,0);
        auVar10._0_8_ = dVar147;
        auVar10._12_4_ = (int)((ulonglong)dVar250 >> 0x20);
        auVar65 = blendpd(auVar75,auVar10,2);
        auVar287._8_4_ = SUB84(dVar232,0);
        auVar287._0_8_ = dVar311 * local_8b8._0_8_ - local_8b8._8_8_ * dVar306;
        auVar287._12_4_ = (int)((ulonglong)dVar232 >> 0x20);
        auVar76._0_8_ = auVar65._0_8_ * dVar217 - auVar156._0_8_ * dVar147;
        auVar76._8_8_ = auVar65._8_8_ * dVar301 - auVar156._8_8_ * dVar250;
        local_878 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
        auVar65 = blendpd(auVar287,auVar76,2);
        dVar232 = dVar232 + dVar232;
        dVar250 = auVar76._0_8_ + auVar76._0_8_;
        uVar318 = (undefined4)((ulonglong)dVar250 >> 0x20);
        auVar288._0_8_ = auVar65._0_8_ + auVar65._0_8_;
        auVar288._8_8_ = auVar65._8_8_ + auVar65._8_8_;
        auVar273._8_4_ = SUB84(dVar250,0);
        auVar273._0_8_ = dVar232;
        auVar273._12_4_ = uVar318;
        auVar255._8_4_ = SUB84(dVar250,0);
        auVar255._0_8_ = dVar232;
        auVar255._12_4_ = uVar318;
        auVar65 = blendpd(local_878,local_8a8,2);
        auVar156 = blendpd(auVar255,auVar288,2);
        auVar274._0_8_ = auVar273._8_8_ * local_878._0_8_ - local_878._8_8_ * dVar232;
        auVar274._8_8_ = auVar288._0_8_ * local_878._8_8_ - dVar217 * dVar250;
        local_858 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
        dStack_850 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
        auVar77._8_4_ = SUB84(auVar274._8_8_,0);
        auVar77._0_8_ = auVar274._0_8_;
        auVar77._12_4_ = (int)((ulonglong)auVar274._8_8_ >> 0x20);
        auVar256._0_8_ = auVar156._0_8_ * dVar217 - auVar65._0_8_ * auVar288._0_8_;
        auVar256._8_8_ = auVar156._8_8_ * dVar301 - auVar65._8_8_ * auVar288._8_8_;
        auVar161._8_4_ = local_8a8._8_4_;
        auVar161._0_8_ = dVar301;
        auVar161._12_4_ = local_8a8._12_4_;
        in_XMM5 = blendpd(auVar274,auVar256,2);
        local_1198._s_0.X = dVar301 * dVar232 + dVar306 + auVar77._8_8_ + local_858;
        local_1198._s_0.Y = auVar161._8_8_ * dVar250 + dVar311 + auVar256._0_8_ + dStack_850;
        local_1198._s_0.Z = dVar301 * auVar288._0_8_ + dVar147 + in_XMM5._0_8_ + in_XMM3._0_8_;
        local_8f8 = local_f80;
        dStack_8f0 = dStack_f78;
        local_8e8 = local_f70;
        local_898 = local_8b8;
        local_888 = local_8a8;
        local_868 = local_8a8;
        local_848 = in_XMM3;
        FAnimInstanceProxy::AnimDrawDebugSphere
                  (this->MyAnimInstanceProxy,(TVector<double> *)&local_1198._s_0,fVar54,0x10,
                   &FColor::Green,false,fVar317,0.0,SDPG_World);
      }
      pFVar47 = pFVar47 + 0xb0;
      uVar35 = (ulonglong)uVar143;
      pFVar37 = pFVar37 + 0xb0;
      pFVar39 = (FScriptContainerElement *)local_1488._0_8_;
    }
  }
  FBoneReference::GetCompactPoseIndex(&this->PelvisBone,(FBoneContainer *)&local_1494);
  pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,local_1494);
  local_498.Rotation.XY.m128d_f64 = *&(pTVar28->Rotation).XY.m128d_f64;
  local_498.Rotation.ZW.m128d_f64 = *&(pTVar28->Rotation).ZW.m128d_f64;
  iVar25 = *(int *)(pTVar28->Translation).XY.m128d_f64;
  iVar313 = *(int *)((longlong)(pTVar28->Translation).XY.m128d_f64 + 4);
  iVar314 = *(int *)((pTVar28->Translation).XY.m128d_f64 + 1);
  uVar318 = *(undefined4 *)((longlong)(pTVar28->Translation).XY.m128d_f64 + 0xc);
  local_498.Translation.XY.m128d_f64 = *&(pTVar28->Translation).XY.m128d_f64;
  p_Var1 = &(pTVar28->Translation).ZW;
  uVar319 = *(undefined4 *)p_Var1->m128d_f64;
  uVar298 = *(undefined4 *)((longlong)(pTVar28->Translation).ZW.m128d_f64 + 4);
  uVar300 = *(undefined4 *)((pTVar28->Translation).ZW.m128d_f64 + 1);
  uVar216 = *(undefined4 *)((longlong)(pTVar28->Translation).ZW.m128d_f64 + 0xc);
  local_498.Translation.ZW.m128d_f64 = *&p_Var1->m128d_f64;
  local_498.Scale3D.XY.m128d_f64 = *&(pTVar28->Scale3D).XY.m128d_f64;
  local_498.Scale3D.ZW.m128d_f64 = *&(pTVar28->Scale3D).ZW.m128d_f64;
  bVar24 = UE::Math::TTransform<double>::ContainsNaN(&local_498);
  local_1400 = iVar25;
  iStack_13fc = iVar313;
  iStack_13f8 = iVar314;
  uStack_13f4 = uVar318;
  if (bVar24) {
    local_1380 = &local_498;
    bVar24 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l63::<lambda_7>::
             operator()(&local_1380);
    if (bVar24) {
      uVar319 = local_498.Translation.ZW.m128d_f64[0]._0_4_;
      uVar298 = local_498.Translation.ZW.m128d_f64[0]._4_4_;
      uVar300 = local_498.Translation.ZW.m128d_f64[1]._0_4_;
      uVar216 = local_498.Translation.ZW.m128d_f64[1]._4_4_;
      local_1400 = local_498.Translation.XY.m128d_f64[0]._0_4_;
      iStack_13fc = local_498.Translation.XY.m128d_f64[0]._4_4_;
      iStack_13f8 = local_498.Translation.XY.m128d_f64[1]._0_4_;
      uStack_13f4 = local_498.Translation.XY.m128d_f64[1]._4_4_;
    }
    else {
      local_498.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_498.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_498.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_498.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_498.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_498.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      uVar319 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar298 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      uVar300 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
      uVar216 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
      local_1400 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      iStack_13fc = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      iStack_13f8 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uStack_13f4 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    }
  }
  local_13f0 = (double)CONCAT44(uVar298,uVar319);
  iVar25 = local_1400;
  iVar313 = iStack_13fc;
  iVar314 = iStack_13f8;
  uVar318 = uStack_13f4;
  if (this->bShowDebug != 0) {
    local_1180._s_0.Z = (double)CONCAT44(uVar298,uVar319);
    local_1180._0_4_ = local_1400;
    local_1180._4_4_ = iStack_13fc;
    local_1180._8_4_ = iStack_13f8;
    local_1180._12_4_ = uStack_13f4;
    UE::Math::TTransform<double>::TransformPosition
              (&this->MyAnimInstanceProxy->ComponentTransform,&local_f68,
               (TVector<double> *)&local_1180._s_0);
    FAnimInstanceProxy::AnimDrawDebugSphere
              (this->MyAnimInstanceProxy,&local_f68,fVar54,0x10,&FColor::Red,false,fVar317,0.0,
               SDPG_World);
    uVar319 = local_498.Translation.ZW.m128d_f64[0]._0_4_;
    uVar298 = local_498.Translation.ZW.m128d_f64[0]._4_4_;
    uVar300 = local_498.Translation.ZW.m128d_f64[1]._0_4_;
    uVar216 = local_498.Translation.ZW.m128d_f64[1]._4_4_;
    iVar25 = local_498.Translation.XY.m128d_f64[0]._0_4_;
    iVar313 = local_498.Translation.XY.m128d_f64[0]._4_4_;
    iVar314 = local_498.Translation.XY.m128d_f64[1]._0_4_;
    uVar318 = local_498.Translation.XY.m128d_f64[1]._4_4_;
  }
  auVar309._8_8_ = 0;
  auVar309._0_8_ = __real_3ff0000000000000;
  local_e38 = (FSkelMeshRefPoseOverride *)(local_14b0._s_0.Z + (double)CONCAT44(uVar298,uVar319));
  dVar217 = (double)CONCAT44(uVar216,uVar300) + 0.0;
  dVar250 = (double)CONCAT44(iVar313,iVar25) + local_14b0._s_0.X;
  dVar147 = (double)CONCAT44(uVar318,iVar314) + local_14b0._s_0.Y;
  uVar318 = (undefined4)((ulonglong)dVar147 >> 0x20);
  local_498.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar217,0);
  local_498.Translation.ZW.m128d_f64[0] = (double)local_e38;
  local_498.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar217 >> 0x20);
  local_498.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar147,0);
  local_498.Translation.XY.m128d_f64[0] = dVar250;
  local_498.Translation.XY.m128d_f64[1]._4_4_ = uVar318;
  local_1470._8_4_ = SUB84(dVar147,0);
  local_1470._0_8_ = dVar250;
  iStack_1464 = uVar318;
  FVar45.Data = (FScriptContainerElement *)this;
  local_13c0 = _local_1470;
  local_13b0 = local_e38;
  if (!bVar23) {
    GetFootIKCentroid((TVector<double> *)&local_12e0._s_0,pTVar2);
    local_f40 = (local_12e0._s_0.Z - local_12f8._s_0.Z) - local_14b0._s_0.Z;
    local_f50._0_8_ = (local_12e0._s_0.X - local_12f8._s_0.X) - local_14b0._s_0.X;
    dVar147 = (local_12e0._s_0.Y - local_12f8._s_0.Y) - local_14b0._s_0.Y;
    local_e38 = (FSkelMeshRefPoseOverride *)(local_498.Translation.ZW.m128d_f64[0] + local_f40);
    dVar217 = local_498.Translation.ZW.m128d_f64[1] + 0.0;
    local_f50._8_8_ = dVar147;
    dVar250 = local_498.Translation.XY.m128d_f64[0] + local_f50._0_8_;
    dVar147 = local_498.Translation.XY.m128d_f64[1] + dVar147;
    local_498.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar217,0);
    local_498.Translation.ZW.m128d_f64[0] = (double)local_e38;
    local_498.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar217 >> 0x20);
    local_498.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar147,0);
    local_498.Translation.XY.m128d_f64[0] = dVar250;
    local_498.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar147 >> 0x20);
    if (this->bShowDebug != 0) {
      pFVar7 = this->MyAnimInstanceProxy;
      pTVar29 = UE::Math::TTransform<double>::TransformPosition
                          (&pFVar7->ComponentTransform,&local_580,
                           (TVector<double> *)&local_12e0._s_0);
      fVar54 = __real_40a00000;
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar7,pTVar29,__real_40a00000,4,&FColor::Orange,false,fVar317,0.0,SDPG_World);
      pFVar7 = this->MyAnimInstanceProxy;
      local_1168._s_0.X = local_498.Translation.XY.m128d_f64[0];
      local_1168._s_0.Y = local_498.Translation.XY.m128d_f64[1];
      local_1168._s_0.Z = local_498.Translation.ZW.m128d_f64[0];
      pTVar29 = UE::Math::TTransform<double>::TransformPosition
                          (&pFVar7->ComponentTransform,&local_550,
                           (TVector<double> *)&local_1168._s_0);
      FAnimInstanceProxy::AnimDrawDebugSphere
                (pFVar7,pTVar29,fVar54,0x10,&FColor::Orange,false,fVar317,0.0,SDPG_World);
      local_e38 = (FSkelMeshRefPoseOverride *)local_498.Translation.ZW.m128d_f64[0];
      dVar217 = local_498.Translation.ZW.m128d_f64[1];
      dVar250 = local_498.Translation.XY.m128d_f64[0];
      dVar147 = local_498.Translation.XY.m128d_f64[1];
    }
    dVar301 = __real_3ff0000000000000;
    if (this->bPullPelvisDown != 0) {
      dVar232 = dVar250 - (double)CONCAT44(iStack_13fc,local_1400);
      local_f38._8_4_ = SUB84(dVar147,0);
      local_f38._0_8_ = dVar250;
      local_f38._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
      dVar250 = dVar147 - (double)CONCAT44(uStack_13f4,iStack_13f8);
      dVar217 = (double)local_e38 - local_13f0;
      iVar25 = 0;
      local_f28 = local_e38;
      do {
        if (3 < iVar25) break;
        pFVar47 = (pTVar2->AllocatorInstance).Data;
        iVar313 = (this->FeetData).ArrayNum;
        bVar24 = false;
        pFVar37 = pFVar47 + 0x30;
        pFVar39 = pFVar47 + (longlong)iVar313 * 0xb0;
        while( true ) {
          if ((this->FeetData).ArrayNum != iVar313) {
            local_14bc = 0;
            `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_14bc);
          }
          if (pFVar47 == pFVar39) break;
          pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (this_00,*(FCompactPoseBoneIndex *)(pFVar37 + -0x28));
          auVar166 = *(undefined1 (*) [16])(pTVar28->Translation).XY.m128d_f64;
          dVar307 = auVar166._0_8_;
          dVar311 = (pTVar28->Translation).ZW.m128d_f64[0];
          dStack_800 = (pTVar28->Translation).ZW.m128d_f64[1];
          local_f20 = auVar166;
          local_818 = auVar166;
          local_808 = dVar311;
          pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                              (this_00,*(FCompactPoseBoneIndex *)(pFVar37 + -0x2c));
          auVar275._8_4_ = SUB84(dVar147,0);
          auVar275._0_8_ = dVar250;
          auVar275._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
          local_f08 = *(undefined1 (*) [16])(pTVar28->Translation).XY.m128d_f64;
          local_ef8 = (pTVar28->Translation).ZW.m128d_f64[0];
          dStack_7e0 = (pTVar28->Translation).ZW.m128d_f64[1];
          dVar219 = dVar307 - local_f08._0_8_;
          auVar12._4_8_ = dStack_7e0;
          auVar12._0_4_ = local_f08._4_4_;
          auVar78._0_8_ = auVar12._0_8_ << 0x20;
          auVar78._8_4_ = local_f08._8_4_;
          auVar78._12_4_ = local_f08._12_4_;
          local_ef0 = *(undefined1 (*) [16])pFVar37;
          uVar148 = (dVar232 + dVar307) - local_ef0._0_8_;
          in_XMM5._8_8_ = auVar275._8_8_;
          dVar306 = auVar166._8_8_;
          auVar234._8_4_ = auVar166._8_4_;
          auVar234._0_8_ = dVar306;
          auVar234._12_4_ = auVar166._12_4_;
          in_XMM3._8_8_ = auVar234._8_8_;
          dVar233 = dVar306 - auVar78._8_8_;
          local_ee0 = *(double *)&pFVar37[0x10].field_0x0;
          uStack_7c0 = *(undefined8 *)(pFVar37 + 0x18);
          dVar284 = (dVar217 + dVar311) - local_ee0;
          auVar13._4_8_ = uStack_7c0;
          auVar13._0_4_ = local_ef0._4_4_;
          auVar166._0_8_ = auVar13._0_8_ << 0x20;
          auVar166._8_4_ = local_ef0._8_4_;
          auVar166._12_4_ = local_ef0._12_4_;
          in_XMM5._0_8_ = (FWeakObjectPtr)((dVar250 + dVar306) - auVar166._8_8_);
          in_XMM3._0_8_ = dVar233 * dVar233;
          dVar233 = (double)uVar148 * (double)uVar148 +
                    (double)in_XMM5._0_8_ * (double)in_XMM5._0_8_ + dVar284 * dVar284;
          fVar54 = (float)SQRT(dVar219 * dVar219 + in_XMM3._0_8_ +
                               (dVar311 - local_ef8) * (dVar311 - local_ef8));
          local_f10 = dVar311;
          local_7f8 = local_f08;
          local_7e8 = local_ef8;
          local_7d8 = local_ef0;
          local_7c8 = local_ee0;
          if ((float)SQRT(dVar233) <= fVar54) {
            pFVar47 = pFVar47 + 0xb0;
            pFVar37 = pFVar37 + 0xb0;
          }
          else {
            local_1150 = *(double *)&pFVar37->field_0x0;
            dStack_1148 = *(double *)(pFVar37 + 8);
            local_1140 = *(double *)&pFVar37[0x10].field_0x0;
            uStack_7a0 = *(undefined8 *)(pFVar37 + 0x18);
            if (dVar233 == dVar301) {
              local_1340._8_8_ = in_XMM5._0_8_;
              local_1330 = dVar284;
            }
            else if (__real_3e45798ee0000000 <= dVar233) {
              local_11f8 = dVar301 / SQRT(dVar233);
              local_1330 = local_11f8 * dVar284;
              in_XMM3._0_8_ = local_11f8 * (double)uVar148;
              in_XMM3._8_8_ = 0;
              local_1340._8_8_ = local_11f8 * (double)in_XMM5._0_8_;
              in_XMM5._8_8_ = 0.0;
              in_XMM5._0_8_ = (FWeakObjectPtr)(local_11f8 * (double)in_XMM5._0_8_);
              uVar148 = in_XMM3._0_8_;
            }
            else {
              local_1340._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              local_1340._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              auVar14._4_8_ = in_XMM5._8_8_;
              auVar14._0_4_ =
                   (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
              auVar276._0_8_ = auVar14._0_8_ << 0x20;
              auVar276._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
              auVar276._12_4_ =
                   (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
              local_1330 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              in_XMM5._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              in_XMM5._0_8_ = (FWeakObjectPtr)auVar276._8_8_;
              uVar148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            }
            dVar250 = (double)fVar54;
            pFVar47 = pFVar47 + 0xb0;
            bVar24 = true;
            pFVar37 = pFVar37 + 0xb0;
            dVar217 = (local_1330 * dVar250 + local_1140) - dVar311;
            dVar232 = ((double)uVar148 * dVar250 + local_1150) - dVar307;
            in_XMM5._0_8_ = (FWeakObjectPtr)((in_XMM5._0_8_ * dVar250 + dStack_1148) - dVar306);
            dVar250 = (double)in_XMM5._0_8_;
            dVar147 = in_XMM5._8_8_;
            local_7b8 = local_1150;
            dStack_7b0 = dStack_1148;
            local_7a8 = local_1140;
          }
        }
        iVar25 = iVar25 + 1;
      } while (bVar24);
      FVar45.Data = local_1448.Data;
      FVar41 = local_1478;
      auVar166 = ___xmm_7ff00000000000007ff0000000000000;
      local_e38 = (FSkelMeshRefPoseOverride *)(dVar217 + local_13f0);
      dVar147 = dVar250 + (double)CONCAT44(uStack_13f4,iStack_13f8);
      uVar298 = SUB84(dVar147,0);
      uVar300 = (undefined4)((ulonglong)dVar147 >> 0x20);
      dVar250 = dVar232 + (double)CONCAT44(iStack_13fc,local_1400);
      uVar318 = 0;
      uVar319 = 0;
      local_ed8._8_4_ = uVar298;
      local_ed8._0_8_ = dVar250;
      local_ed8._12_4_ = uVar300;
      local_498.Translation.XY.m128d_f64[1]._0_4_ = uVar298;
      local_498.Translation.XY.m128d_f64[0] = dVar250;
      local_498.Translation.XY.m128d_f64[1]._4_4_ = uVar300;
      local_498.Translation.ZW.m128d_f64[1] = 0.0;
      local_498.Translation.ZW.m128d_f64[0] = (double)local_e38;
      fVar317 = __real_bf800000;
      local_ec8 = local_e38;
      if (((byte)local_1448.Data[0x2ac] & 0x10) != 0) {
        local_1138._8_4_ = uVar298;
        local_1138._0_8_ = dVar250;
        local_1138._12_4_ = uVar300;
        local_1138._s_0.Z = (double)local_e38;
        UE::Math::TTransform<double>::TransformPosition
                  (&(*(FAnimInstanceProxy **)(local_1448.Data + 0xd8))->ComponentTransform,
                   &local_ec0,(TVector<double> *)&local_1138._s_0);
        fVar317 = __real_bf800000;
        FAnimInstanceProxy::AnimDrawDebugSphere
                  (*(FAnimInstanceProxy **)(FVar45.Data + 0xd8),&local_ec0,__real_40a00000,0x10,
                   &FColor::Emerald,false,__real_bf800000,0.0,SDPG_World);
        local_e38 = local_498.Translation.ZW.m128d_f64[0];
        uVar318 = local_498.Translation.ZW.m128d_f64[1]._0_4_;
        uVar319 = local_498.Translation.ZW.m128d_f64[1]._4_4_;
        dVar250 = local_498.Translation.XY.m128d_f64[0];
        dVar147 = local_498.Translation.XY.m128d_f64[1];
      }
      dVar217 = (double)CONCAT44(uVar319,uVar318);
      auVar309._8_8_ = 0;
      auVar309._0_8_ = __real_3ff0000000000000;
      dVar232 = __real_3f1a36e2e0000000;
      uVar148 = __xmm_7fffffffffffffff7fffffffffffffff;
    }
  }
  uVar300 = (undefined4)((ulonglong)dVar147 >> 0x20);
  uVar298 = SUB84(dVar147,0);
  uVar318 = SUB84(local_13b0,0);
  uVar319 = (undefined4)((ulonglong)local_13b0 >> 0x20);
  if ((FVar45.Data)->bKeepMeshInsideOfCapsule == 0) {
LAB_14a72395f:
    uVar216 = local_13c0._8_4_;
    uVar218 = local_13c0._12_4_;
    stack0xffffffffffffeb98 = (FWeakObjectPtr)0x0;
    local_1470._0_8_ = local_13c0._0_8_;
    dVar311 = (double)local_13c0._0_8_;
  }
  else {
    auVar277._8_4_ = uVar298;
    auVar277._0_8_ = dVar250;
    auVar277._12_4_ = uVar300;
    in_XMM5._8_8_ = auVar277._8_8_;
    in_XMM5._0_8_ = (FWeakObjectPtr)(dVar250 - local_1470._0_8_);
    auVar15._4_8_ = in_XMM3._8_8_;
    auVar15._0_4_ = (int)((ulonglong)dVar250 >> 0x20);
    auVar235._0_8_ = auVar15._0_8_ << 0x20;
    auVar235._8_4_ = uVar298;
    auVar235._12_4_ = uVar300;
    uVar216 = local_1470._8_4_;
    uVar218 = local_1470._12_4_;
    local_ea8._8_4_ = uVar298;
    local_ea8._0_8_ = dVar250;
    local_ea8._12_4_ = uVar300;
    dVar301 = (double)local_e38 - (double)local_13b0;
    uVar143 = (uint)uVar148;
    uVar144 = (uint)((ulonglong)uVar148 >> 0x20);
    dVar306 = auVar235._8_8_ - local_1470._8_8_;
    local_e98 = local_e38;
    if (((dVar232 < (double)CONCAT44((uint)((ulonglong)in_XMM5._0_8_ >> 0x20) & uVar144,
                                     SUB84(in_XMM5._0_8_,0) & uVar143)) ||
        (dVar232 < (double)CONCAT44((uint)((ulonglong)dVar306 >> 0x20) & uVar144,
                                    SUB84(dVar306,0) & uVar143))) ||
       (dVar311 = local_1470._0_8_,
       dVar232 < (double)CONCAT44((uint)((ulonglong)dVar301 >> 0x20) & uVar144,
                                  SUB84(dVar301,0) & uVar143))) {
      dVar311 = (double)in_XMM5._0_8_ * local_13e8._s_0.X + dVar306 * local_13e8._s_0.Y +
                dVar301 * local_13e8._s_0.Z;
      dVar219 = local_13e8._s_0.X * dVar311 - (double)in_XMM5._0_8_;
      dVar301 = local_13e8._s_0.Z * dVar311 - dVar301;
      dVar306 = local_13e8._s_0.Y * dVar311 - dVar306;
      local_498.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar217 + 0.0,0);
      local_498.Translation.ZW.m128d_f64[0] = (double)local_e38 + dVar301;
      local_498.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar217 + 0.0) >> 0x20);
      local_498.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar147 + dVar306,0);
      local_498.Translation.XY.m128d_f64[0] = dVar250 + dVar219;
      local_498.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar147 + dVar306) >> 0x20);
      uVar143 = (this->FeetData).ArrayNum;
      uVar35 = (ulonglong)(int)uVar143;
      pFVar48 = (FAnimNode_SlopeWarping *)(pTVar2->AllocatorInstance).Data;
      pFVar43 = (FBoneReference *)&pFVar48->_padding_;
      FVar31.Data = (FScriptContainerElement *)(&pFVar48->_padding_ + uVar35 * 0x16);
      local_1448.Data = FVar31.Data;
      local_e90 = dVar219;
      dStack_e88 = dVar306;
      local_e80 = dVar301;
      while( true ) {
        if ((this->FeetData).ArrayNum != (int)uVar35) {
          local_14bb = 0;
          `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_14bb);
          uVar35 = (ulonglong)uVar143;
          FVar31.Data = local_1448.Data;
        }
        if (pFVar48 == (FAnimNode_SlopeWarping *)FVar31.Data) break;
        local_788 = pFVar43[1].BoneName;
        dStack_780 = *(double *)&pFVar43[1].field_0x8;
        local_798 = pFVar43->BoneName;
        dStack_790 = *(double *)&pFVar43->field_0x8;
        pFVar48 = (FAnimNode_SlopeWarping *)&pFVar48->_padding_;
        pFVar43->BoneName = (FName)(dVar219 + (double)local_798);
        *(double *)&pFVar43->field_0x8 = dVar306 + dStack_790;
        pFVar43[1].BoneName = (FName)(dVar301 + (double)local_788);
        *(double *)&pFVar43[1].field_0x8 = dStack_780 + 0.0;
        pFVar43 = pFVar43 + 0xb;
        local_e78 = dVar219;
        dStack_e70 = dVar306;
        local_e68 = dVar301;
      }
      uVar318 = SUB84(local_13b0,0);
      uVar319 = (undefined4)((ulonglong)local_13b0 >> 0x20);
      local_438.Translation.XY.m128d_f64[1] = local_438.Translation.XY.m128d_f64[1] + dVar306;
      local_438.Translation.XY.m128d_f64[0] = local_438.Translation.XY.m128d_f64[0] + dVar219;
      local_438.Translation.ZW.m128d_f64[1] = local_438.Translation.ZW.m128d_f64[1] + 0.0;
      local_438.Translation.ZW.m128d_f64[0] = local_438.Translation.ZW.m128d_f64[0] + dVar301;
      dVar250 = local_498.Translation.XY.m128d_f64[0];
      dVar147 = local_498.Translation.XY.m128d_f64[1];
      local_e38 = (FSkelMeshRefPoseOverride *)local_498.Translation.ZW.m128d_f64[0];
      local_e60 = dVar219;
      dStack_e58 = dVar306;
      local_e50 = dVar301;
      goto LAB_14a72395f;
    }
  }
  local_e48._8_4_ = SUB84(dVar147,0);
  local_e48._0_8_ = dVar250;
  local_e48._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
  local_1218._s_0.X = dVar250 - dVar311;
  local_1218._s_0.Y = dVar147 - (double)CONCAT44(uVar218,uVar216);
  local_1218._s_0.Z = (double)local_e38 - (double)CONCAT44(uVar319,uVar318);
  FRK4SpringInterpolator<UE::Math::TVector<double>_>::Update
            ((FRK4SpringInterpolator<UE::Math::TVector<double>_> *)
             &((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator,local_538,
             (TVector<double> *)&local_1218._s_0,
             &((FAnimNode_SlopeWarping *)FVar45.Data)->CachedDeltaTime);
  local_e20 = *(double *)
               &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x40;
  local_e30 = *(double *)
               &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x30;
  dStack_e28 = *(double *)
                &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x38;
  local_e08 = local_e20 + (double)CONCAT44(uVar319,uVar318);
  local_e18 = local_e30 + (double)local_1470._0_8_;
  local_498.Translation.ZW.m128d_f64[1] = 0.0;
  local_498.Translation.ZW.m128d_f64[0] = local_e08;
  dStack_e10 = dStack_e28 + (double)CONCAT44(uVar218,uVar216);
  local_498.Translation.XY.m128d_f64[1] = dStack_e10;
  local_498.Translation.XY.m128d_f64[0] = local_e18;
  fVar54 = __real_40a00000;
  if ((FVar45.Data)->bShowDebug != 0) {
    local_1120._s_0.X = local_e18;
    local_1120._s_0.Y = dStack_e10;
    local_1120._s_0.Z = local_e08;
    UE::Math::TTransform<double>::TransformPosition
              (&((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy->ComponentTransform,
               &local_e00,(TVector<double> *)&local_1120._s_0);
    fVar54 = __real_40a00000;
    FAnimInstanceProxy::AnimDrawDebugSphere
              (((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy,&local_e00,
               __real_40a00000,0x10,&FColor::Purple,false,fVar317,0.0,SDPG_World);
  }
  local_1108 = *(undefined8 *)
                &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x30;
  uStack_1100 = *(undefined8 *)
                 &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x38;
  pFVar37 = (FScriptContainerElement *)&local_1108;
  local_10f8 = *(undefined8 *)
                &(((FAnimNode_SlopeWarping *)FVar45.Data)->PelvisOffsetInterpolator).field_0x40;
  FVar32._0_1_ = UE::Math::TVector<double>::IsNearlyZero((TVector<double> *)pFVar37,dVar232);
  FVar32._1_7_ = extraout_var;
  if ((!FVar32._0_1_) || (FVar49 = FVar32, !bVar23)) {
    local_12c8 = local_498.Translation.XY.m128d_f64[0] - (double)CONCAT44(iStack_13fc,local_1400);
    local_de8 = local_498.Translation.XY.m128d_f64[0];
    dStack_de0 = local_498.Translation.XY.m128d_f64[1];
    local_dd8 = local_498.Translation.ZW.m128d_f64[0];
    uVar143 = (this->FeetData).ArrayNum;
    pFVar37 = (FScriptContainerElement *)(longlong)(int)uVar143;
    FVar49 = (ForElementType<unsigned_int>)(pTVar2->AllocatorInstance).Data;
    local_12b8 = local_498.Translation.ZW.m128d_f64[0] - local_13f0;
    dStack_12c0 = local_498.Translation.XY.m128d_f64[1] - (double)CONCAT44(uStack_13f4,iStack_13f8);
    pTVar44 = (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *)((longlong)FVar49 + 0x30);
    local_1478 = (ForElementType<unsigned_int>)((longlong)pFVar37 * 0xb0 + (longlong)FVar49);
    while( true ) {
      if ((this->FeetData).ArrayNum != (int)pFVar37) {
        pFVar37 = &local_14ba;
        local_14ba = (FScriptContainerElement)0x0;
        `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(pFVar37);
      }
      uVar144 = auVar166._12_4_;
      dVar232 = auVar166._8_8_;
      if (FVar49 == local_1478) break;
      pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (this_00,(FCompactPoseBoneIndex)pTVar44[-3].ArrayNum);
      auVar65 = *(undefined1 (*) [16])(pTVar28->Translation).XY.m128d_f64;
      auVar5 = *(uchar (*) [16])(pTVar28->Translation).ZW.m128d_f64;
      local_c18 = (pTVar28->Rotation).XY.m128d_f64[0];
      dStack_c10 = (pTVar28->Rotation).XY.m128d_f64[1];
      auVar156 = *(undefined1 (*) [16])(pTVar28->Rotation).XY.m128d_f64;
      p_Var1 = &(pTVar28->Rotation).ZW;
      local_c08 = p_Var1->m128d_f64[0];
      dStack_c00 = (pTVar28->Rotation).ZW.m128d_f64[1];
      auVar68 = *(undefined1 (*) [16])p_Var1->m128d_f64;
      dVar147 = (pTVar28->Scale3D).XY.m128d_f64[0];
      dVar217 = (pTVar28->Scale3D).XY.m128d_f64[1];
      dVar301 = (pTVar28->Scale3D).ZW.m128d_f64[0];
      dVar306 = (pTVar28->Scale3D).ZW.m128d_f64[1];
      local_1488 = auVar5;
      _local_1470 = auVar65;
      local_bf8 = auVar65;
      local_be8 = auVar5;
      local_bd8 = dVar147;
      dStack_bd0 = dVar217;
      local_bc8 = dVar301;
      dStack_bc0 = dVar306;
      pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (this_00,*(FCompactPoseBoneIndex *)
                                    ((longlong)&pTVar44[-3].AllocatorInstance.Data + 4));
      _local_1280 = *(undefined1 (*) [16])(pTVar28->Translation).XY.m128d_f64;
      local_1448.Data = (FScriptContainerElement *)(pTVar28->Translation).ZW.m128d_f64[0];
      dStack_1440 = (pTVar28->Translation).ZW.m128d_f64[1];
      dVar219 = local_1280._0_8_;
      local_bb8 = (pTVar28->Rotation).XY.m128d_f64[0];
      dStack_bb0 = (pTVar28->Rotation).XY.m128d_f64[1];
      auVar257._0_8_ = dVar219 - auVar65._0_8_;
      local_ba8 = (pTVar28->Rotation).ZW.m128d_f64[0];
      dStack_ba0 = (pTVar28->Rotation).ZW.m128d_f64[1];
      auVar16._4_8_ = in_XMM5._8_8_;
      auVar16._0_4_ = local_1280._4_4_;
      auVar278._0_8_ = auVar16._0_8_ << 0x20;
      auVar278._8_4_ = local_1280._8_4_;
      auVar278._12_4_ = local_1280._12_4_;
      local_b78 = (pTVar28->Scale3D).XY.m128d_f64[0];
      dStack_b70 = (pTVar28->Scale3D).XY.m128d_f64[1];
      auVar17._4_8_ = dStack_b70;
      auVar17._0_4_ = auVar65._4_4_;
      auVar79._0_8_ = auVar17._0_8_ << 0x20;
      auVar79._8_4_ = auVar65._8_4_;
      auVar79._12_4_ = auVar65._12_4_;
      local_b68 = (pTVar28->Scale3D).ZW.m128d_f64[0];
      dStack_b60 = (pTVar28->Scale3D).ZW.m128d_f64[1];
      dStack_12a8 = auVar278._8_8_ - auVar79._8_8_;
      local_da8 = auVar5._0_8_;
      local_12a0 = (double)local_1448.Data - local_da8;
      local_1460._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_1460._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dVar232 = local_12c8 + auVar65._0_8_;
      dVar250 = dStack_12c0 + auVar65._8_8_;
      uVar318 = (undefined4)((ulonglong)dVar250 >> 0x20);
      local_d78 = local_12b8 + local_da8;
      uStack_3a0 = auVar5._8_8_ + 0.0;
      dVar311 = auVar257._0_8_ * auVar257._0_8_ + dStack_12a8 * dStack_12a8 +
                local_12a0 * local_12a0;
      dVar233 = auVar309._0_8_;
      local_3b8._8_4_ = SUB84(dVar250,0);
      local_3b8._0_8_ = dVar232;
      uStack_3ac = uVar318;
      if (dVar311 == dVar233) {
        auVar257._8_8_ = dStack_12a8;
        uVar148 = dStack_12a8;
        _local_1418 = auVar257;
        local_1408 = local_12a0;
        uVar55 = auVar257._0_8_;
      }
      else if (__real_3e45798ee0000000 <= dVar311) {
        local_1018 = dVar233 / SQRT(dVar311);
        uVar55 = local_1018 * auVar257._0_8_;
        local_1408 = local_1018 * local_12a0;
        uVar148 = local_1018 * dStack_12a8;
        dStack_1410 = (double)uVar148;
        local_1418 = (double)uVar55;
      }
      else {
        local_1408 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        uVar148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        _local_1418 = local_1460;
        uVar55 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      local_12b0 = auVar257._0_8_;
      local_da0 = *pTVar44;
      local_768 = pTVar44[1];
      local_d90 = (FScriptContainerElement *)local_768.AllocatorInstance.Data;
      local_1288 = (FReferenceSkeleton *)((double)local_d90 - local_d78);
      auVar18._4_8_ = uStack_3a0;
      auVar18._0_4_ = local_da0.AllocatorInstance.Data._4_4_;
      auVar289._0_8_ = auVar18._0_8_ << 0x20;
      auVar289._8_4_ = local_da0.ArrayNum;
      auVar289._12_4_ = local_da0.ArrayMax;
      in_XMM5._8_8_ = local_da0._8_8_;
      dStack_1290 = auVar289._8_8_ - dVar250;
      in_XMM5._0_8_ = (FWeakObjectPtr)((double)local_da0.AllocatorInstance.Data.Data - dVar232);
      auVar162._8_4_ = local_768.ArrayNum;
      auVar162._0_8_ = local_1288;
      auVar162._12_4_ = local_768.ArrayMax;
      local_d88._8_4_ = SUB84(dVar250,0);
      local_d88._0_8_ = dVar232;
      local_d88._12_4_ = uVar318;
      dVar232 = (double)in_XMM5._0_8_ * (double)in_XMM5._0_8_ + dStack_1290 * dStack_1290 +
                (double)local_1288 * (double)local_1288;
      if (dVar232 == dVar233) {
        local_1460._8_8_ = dStack_1290;
        local_1460._0_4_ = in_XMM5._0_4_;
        local_1460._4_4_ = in_XMM5._4_4_;
        auVar19._4_8_ = auVar162._8_8_;
        auVar19._0_4_ = in_XMM5._4_4_;
        auVar163._0_8_ = auVar19._0_8_ << 0x20;
        auVar163._8_4_ = SUB84(dStack_1290,0);
        auVar163._12_4_ = (int)((ulonglong)dStack_1290 >> 0x20);
        FVar149 = auVar163._8_8_;
        local_1450 = local_1288;
        uVar56 = in_XMM5._0_8_;
      }
      else if (__real_3e45798ee0000000 <= dVar232) {
        local_11f0 = dVar233 / SQRT(dVar232);
        uVar56 = local_11f0 * (double)in_XMM5._0_8_;
        FVar149 = (FWeakObjectPtr)(local_11f0 * dStack_1290);
        local_1450 = (FReferenceSkeleton *)(local_11f0 * (double)local_1288);
        local_1460._8_4_ = FVar149.ObjectIndex;
        local_1460._12_4_ = FVar149.ObjectSerialNumber;
        local_1460._0_4_ = (int)uVar56;
        local_1460._4_4_ = SUB84(uVar56,4);
      }
      else {
        auVar20._4_8_ = auVar162._8_8_;
        auVar20._0_4_ =
             (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        auVar164._0_8_ = auVar20._0_8_ << 0x20;
        auVar164._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
        auVar164._12_4_ =
             (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
        local_1450 = (FReferenceSkeleton *)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        FVar149 = auVar164._8_8_;
        uVar56 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      }
      local_1298.ObjectIndex = in_XMM5._0_4_;
      local_1298.ObjectSerialNumber = in_XMM5._4_4_;
      iVar25 = auVar65._0_4_;
      iVar313 = auVar65._4_4_;
      iVar314 = auVar65._8_4_;
      iVar315 = auVar65._12_4_;
      iVar316 = auVar5._0_4_;
      uVar318 = auVar5._4_4_;
      uVar319 = local_1280._0_4_;
      uVar298 = local_1280._4_4_;
      uVar300 = local_1280._8_4_;
      uVar216 = local_1280._12_4_;
      local_dd0 = _local_1280;
      local_dc0 = (FAnimNode_SlopeWarping *)local_1448.Data;
      local_db8 = auVar65;
      local_b98 = _local_1280;
      local_b88 = (FAnimNode_SlopeWarping *)local_1448.Data;
      dStack_b80 = dStack_1440;
      local_778 = local_da0;
      local_3d8 = auVar156;
      local_3c8 = auVar68;
      local_3a8 = local_d78;
      local_398 = dVar147;
      dStack_390 = dVar217;
      local_388 = dVar301;
      uStack_380 = dVar306;
      if ((FVar45.Data)->bShowDebug != 0) {
        pFVar7 = ((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy;
        local_988 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
        local_998 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
        dVar217 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
        dVar301 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
        dVar306 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dVar311 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1];
        dVar233 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
        dVar284 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
        dVar307 = (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[0];
        dStack_960 = (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[1];
        auVar290._0_8_ = (double)local_1448.Data * dVar306;
        auVar290._8_8_ = dVar311 * 0.0;
        dStack_d68 = stack0xffffffffffffed88;
        dVar270 = dVar219 * dVar217;
        dVar283 = stack0xffffffffffffed88 * dVar301;
        dVar250 = local_988._0_8_;
        dVar232 = local_998._8_8_;
        auVar258._8_4_ = SUB84(dVar283,0);
        auVar258._0_8_ = dVar270;
        uVar318 = (undefined4)((ulonglong)dVar283 >> 0x20);
        auVar258._12_4_ = uVar318;
        dVar147 = local_988._8_8_;
        auVar165._8_4_ = SUB84(dVar283,0);
        auVar165._0_8_ = dVar270;
        auVar165._12_4_ = uVar318;
        dVar312 = local_998._0_8_;
        auVar166 = blendpd(auVar165,auVar290,2);
        auVar65 = blendpd(local_998,local_988,2);
        auVar80._8_4_ = local_988._0_4_;
        auVar80._0_8_ = dVar232;
        auVar80._12_4_ = local_988._4_4_;
        dVar268 = auVar290._0_8_ * dVar232 - auVar80._8_8_ * dVar283;
        dVar57 = auVar65._0_8_;
        dVar145 = auVar65._8_8_;
        auVar236._8_4_ = SUB84(dVar268,0);
        auVar236._0_8_ = auVar258._8_8_ * dVar312 - dVar232 * dVar270;
        auVar236._12_4_ = (int)((ulonglong)dVar268 >> 0x20);
        auVar167._0_8_ = auVar166._0_8_ * dVar250 - dVar57 * auVar290._0_8_;
        auVar167._8_8_ = auVar166._8_8_ * dVar147 - dVar145 * auVar290._8_8_;
        dVar268 = dVar268 + dVar268;
        dVar269 = auVar167._0_8_ + auVar167._0_8_;
        auVar166 = blendpd(auVar236,auVar167,2);
        uVar318 = SUB84(dVar269,0);
        auVar220._8_4_ = uVar318;
        auVar220._0_8_ = dVar268;
        uVar319 = (undefined4)((ulonglong)dVar269 >> 0x20);
        auVar220._12_4_ = uVar319;
        auVar81._8_4_ = uVar318;
        auVar81._0_8_ = dVar268;
        auVar81._12_4_ = uVar319;
        auVar168._8_4_ = uVar318;
        auVar168._0_8_ = dVar268;
        auVar168._12_4_ = uVar319;
        auVar237._0_8_ = auVar166._0_8_ + auVar166._0_8_;
        auVar237._8_8_ = auVar166._8_8_ + auVar166._8_8_;
        auVar166 = blendpd(auVar168,auVar237,2);
        auVar221._0_8_ = auVar220._8_8_ * dVar312 - dVar268 * dVar232;
        auVar221._8_8_ = auVar237._0_8_ * dVar232 - auVar81._8_8_ * dVar250;
        auVar82._8_4_ = SUB84(auVar237._8_8_,0);
        auVar82._0_8_ = auVar237._0_8_;
        auVar82._12_4_ = (int)((ulonglong)auVar237._8_8_ >> 0x20);
        auVar169._0_8_ = auVar166._0_8_ * dVar250 - auVar237._0_8_ * dVar57;
        auVar169._8_8_ = auVar166._8_8_ * dVar147 - auVar82._8_8_ * dVar145;
        auVar83._8_4_ = SUB84(auVar221._8_8_,0);
        auVar83._0_8_ = auVar221._0_8_;
        auVar83._12_4_ = (int)((ulonglong)auVar221._8_8_ >> 0x20);
        local_10f0._s_0.X = dVar268 * dVar147 + dVar270 + auVar83._8_8_ + dVar233;
        local_10f0._s_0.Y = dVar269 * dVar147 + dVar283 + auVar169._0_8_ + dVar284;
        local_d48 = (double)local_1488._0_8_;
        auVar166 = blendpd(auVar221,auVar169,2);
        local_d58 = (double)local_1470._0_8_;
        FStack_d50 = stack0xffffffffffffeb98;
        dVar270 = (double)local_1470._0_8_ * dVar217;
        dVar283 = (double)stack0xffffffffffffeb98 * dVar301;
        auVar291._0_8_ = (double)local_1488._0_8_ * dVar306;
        auVar291._8_8_ = dVar311 * 0.0;
        local_10f0._s_0.Z = auVar237._0_8_ * dVar147 + auVar290._0_8_ + auVar166._0_8_ + dVar307;
        uVar318 = SUB84(dVar283,0);
        auVar259._8_4_ = uVar318;
        auVar259._0_8_ = dVar270;
        uVar319 = (undefined4)((ulonglong)dVar283 >> 0x20);
        auVar259._12_4_ = uVar319;
        auVar84._8_4_ = uVar318;
        auVar84._0_8_ = dVar270;
        auVar84._12_4_ = uVar319;
        dVar268 = auVar291._0_8_ * dVar232 - auVar84._8_8_ * dVar250;
        auVar170._8_4_ = uVar318;
        auVar170._0_8_ = dVar270;
        auVar170._12_4_ = uVar319;
        auVar85._8_4_ = SUB84(auVar291._8_8_,0);
        auVar85._0_8_ = auVar291._0_8_;
        auVar85._12_4_ = (int)((ulonglong)auVar291._8_8_ >> 0x20);
        auVar166 = blendpd(auVar170,auVar291,2);
        auVar238._8_4_ = SUB84(dVar268,0);
        auVar238._0_8_ = auVar259._8_8_ * dVar312 - dVar270 * dVar232;
        auVar238._12_4_ = (int)((ulonglong)dVar268 >> 0x20);
        auVar171._0_8_ = auVar166._0_8_ * dVar250 - auVar291._0_8_ * dVar57;
        auVar171._8_8_ = auVar166._8_8_ * dVar147 - auVar85._8_8_ * dVar145;
        auVar166 = blendpd(auVar238,auVar171,2);
        dVar268 = dVar268 + dVar268;
        dVar269 = auVar171._0_8_ + auVar171._0_8_;
        auVar239._0_8_ = auVar166._0_8_ + auVar166._0_8_;
        auVar239._8_8_ = auVar166._8_8_ + auVar166._8_8_;
        uVar318 = SUB84(dVar269,0);
        auVar222._8_4_ = uVar318;
        auVar222._0_8_ = dVar268;
        uVar319 = (undefined4)((ulonglong)dVar269 >> 0x20);
        auVar222._12_4_ = uVar319;
        auVar86._8_4_ = uVar318;
        auVar86._0_8_ = dVar268;
        auVar86._12_4_ = uVar319;
        auVar172._8_4_ = uVar318;
        auVar172._0_8_ = dVar268;
        auVar172._12_4_ = uVar319;
        auVar166 = blendpd(auVar172,auVar239,2);
        auVar223._0_8_ = auVar222._8_8_ * dVar312 - dVar268 * dVar232;
        auVar223._8_8_ = auVar239._0_8_ * dVar232 - auVar86._8_8_ * dVar250;
        auVar87._8_4_ = SUB84(auVar239._8_8_,0);
        auVar87._0_8_ = auVar239._0_8_;
        auVar87._12_4_ = (int)((ulonglong)auVar239._8_8_ >> 0x20);
        auVar173._0_8_ = auVar166._0_8_ * dVar250 - auVar239._0_8_ * dVar57;
        auVar173._8_8_ = auVar166._8_8_ * dVar147 - auVar87._8_8_ * dVar145;
        auVar88._8_4_ = SUB84(auVar223._8_8_,0);
        auVar88._0_8_ = auVar223._0_8_;
        auVar88._12_4_ = (int)((ulonglong)auVar223._8_8_ >> 0x20);
        auVar166 = blendpd(auVar223,auVar173,2);
        local_10d8._s_0.X = dVar268 * dVar147 + dVar270 + auVar88._8_8_ + dVar233;
        local_10d8._s_0.Y = dVar269 * dVar147 + dVar283 + auVar173._0_8_ + dVar284;
        local_10d8._s_0.Z = auVar239._0_8_ * dVar147 + auVar291._0_8_ + auVar166._0_8_ + dVar307;
        local_d70 = dVar219;
        local_d60 = (FAnimNode_SlopeWarping *)local_1448.Data;
        local_978 = dVar233;
        dStack_970 = dVar284;
        local_968 = dVar307;
        local_958 = dVar217;
        dStack_950 = dVar301;
        local_948 = dVar306;
        dStack_940 = dVar311;
        FAnimInstanceProxy::AnimDrawDebugLine
                  (pFVar7,(TVector<double> *)&local_10d8._s_0,(TVector<double> *)&local_10f0._s_0,
                   &FColor::Red,false,__real_bf800000,0.0,SDPG_World);
        local_d30 = pTVar44[1].AllocatorInstance.Data;
        uStack_740._0_4_ = pTVar44[1].ArrayNum;
        uStack_740._4_4_ = pTVar44[1].ArrayMax;
        local_d40 = (pTVar44->AllocatorInstance).Data;
        dStack_d38 = *(double *)&pTVar44->ArrayNum;
        auVar292._0_8_ = (double)local_d30 * dVar306;
        auVar292._8_8_ = dVar311 * 0.0;
        dVar269 = (double)local_d40 * dVar217;
        dVar270 = dStack_d38 * dVar301;
        uVar318 = SUB84(dVar270,0);
        auVar260._8_4_ = uVar318;
        auVar260._0_8_ = dVar269;
        uVar319 = (undefined4)((ulonglong)dVar270 >> 0x20);
        auVar260._12_4_ = uVar319;
        auVar89._8_4_ = uVar318;
        auVar89._0_8_ = dVar269;
        auVar89._12_4_ = uVar319;
        auVar174._8_4_ = uVar318;
        auVar174._0_8_ = dVar269;
        auVar174._12_4_ = uVar319;
        auVar166 = blendpd(auVar174,auVar292,2);
        dVar219 = auVar292._0_8_ * dVar232 - auVar89._8_8_ * dVar250;
        auVar90._8_4_ = SUB84(auVar292._8_8_,0);
        auVar90._0_8_ = auVar292._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar292._8_8_ >> 0x20);
        auVar240._8_4_ = SUB84(dVar219,0);
        auVar240._0_8_ = auVar260._8_8_ * dVar312 - dVar269 * dVar232;
        auVar240._12_4_ = (int)((ulonglong)dVar219 >> 0x20);
        auVar175._0_8_ = auVar166._0_8_ * dVar250 - auVar292._0_8_ * dVar57;
        auVar175._8_8_ = auVar166._8_8_ * dVar147 - auVar90._8_8_ * dVar145;
        dVar219 = dVar219 + dVar219;
        dVar268 = auVar175._0_8_ + auVar175._0_8_;
        auVar166 = blendpd(auVar240,auVar175,2);
        auVar241._0_8_ = auVar166._0_8_ + auVar166._0_8_;
        auVar241._8_8_ = auVar166._8_8_ + auVar166._8_8_;
        uVar318 = SUB84(dVar268,0);
        auVar224._8_4_ = uVar318;
        auVar224._0_8_ = dVar219;
        uVar319 = (undefined4)((ulonglong)dVar268 >> 0x20);
        auVar224._12_4_ = uVar319;
        auVar91._8_4_ = uVar318;
        auVar91._0_8_ = dVar219;
        auVar91._12_4_ = uVar319;
        auVar225._0_8_ = auVar224._8_8_ * dVar312 - dVar219 * dVar232;
        auVar225._8_8_ = auVar241._0_8_ * dVar232 - auVar91._8_8_ * dVar250;
        auVar176._8_4_ = uVar318;
        auVar176._0_8_ = dVar219;
        auVar176._12_4_ = uVar319;
        auVar166 = blendpd(auVar176,auVar241,2);
        auVar92._8_4_ = SUB84(auVar241._8_8_,0);
        auVar92._0_8_ = auVar241._0_8_;
        auVar92._12_4_ = (int)((ulonglong)auVar241._8_8_ >> 0x20);
        auVar177._0_8_ = auVar166._0_8_ * dVar250 - auVar241._0_8_ * dVar57;
        auVar177._8_8_ = auVar166._8_8_ * dVar147 - auVar92._8_8_ * dVar145;
        auVar93._8_4_ = SUB84(auVar225._8_8_,0);
        auVar93._0_8_ = auVar225._0_8_;
        auVar93._12_4_ = (int)((ulonglong)auVar225._8_8_ >> 0x20);
        auVar166 = blendpd(auVar225,auVar177,2);
        local_d18 = local_3a8;
        local_10c0._s_0.X = dVar219 * dVar147 + dVar269 + auVar93._8_8_ + dVar233;
        local_10c0._s_0.Y = dVar268 * dVar147 + dVar270 + auVar177._0_8_ + dVar284;
        local_10c0._s_0.Z = auVar241._0_8_ * dVar147 + auVar292._0_8_ + auVar166._0_8_ + dVar307;
        auVar293._0_8_ = local_3a8 * dVar306;
        auVar293._8_8_ = dVar311 * 0.0;
        local_d28 = (double)local_3b8._0_8_;
        dStack_d20 = stack0xfffffffffffffc50;
        in_XMM5._0_8_ = (FWeakObjectPtr)((double)local_3b8._0_8_ * dVar217);
        in_XMM5._8_8_ = stack0xfffffffffffffc50 * dVar301;
        uVar318 = SUB84(in_XMM5._8_8_,0);
        auVar261._8_4_ = uVar318;
        auVar261._0_8_ = in_XMM5._0_8_;
        uVar319 = (undefined4)((ulonglong)in_XMM5._8_8_ >> 0x20);
        auVar261._12_4_ = uVar319;
        auVar94._8_4_ = uVar318;
        auVar94._0_8_ = in_XMM5._0_8_;
        auVar94._12_4_ = uVar319;
        auVar178._8_4_ = uVar318;
        auVar178._0_8_ = in_XMM5._0_8_;
        auVar178._12_4_ = uVar319;
        auVar166 = blendpd(auVar178,auVar293,2);
        dVar217 = auVar293._0_8_ * dVar232 - auVar94._8_8_ * dVar250;
        auVar242._8_4_ = SUB84(dVar217,0);
        auVar242._0_8_ = auVar261._8_8_ * dVar312 - (double)in_XMM5._0_8_ * dVar232;
        auVar242._12_4_ = (int)((ulonglong)dVar217 >> 0x20);
        auVar95._8_4_ = SUB84(auVar293._8_8_,0);
        auVar95._0_8_ = auVar293._0_8_;
        auVar95._12_4_ = (int)((ulonglong)auVar293._8_8_ >> 0x20);
        auVar179._0_8_ = auVar166._0_8_ * dVar250 - auVar293._0_8_ * dVar57;
        auVar179._8_8_ = auVar166._8_8_ * dVar147 - auVar95._8_8_ * dVar145;
        auVar166 = blendpd(auVar242,auVar179,2);
        dVar217 = dVar217 + dVar217;
        dVar301 = auVar179._0_8_ + auVar179._0_8_;
        auVar243._0_8_ = auVar166._0_8_ + auVar166._0_8_;
        auVar243._8_8_ = auVar166._8_8_ + auVar166._8_8_;
        uVar318 = SUB84(dVar301,0);
        auVar226._8_4_ = uVar318;
        auVar226._0_8_ = dVar217;
        uVar319 = (undefined4)((ulonglong)dVar301 >> 0x20);
        auVar226._12_4_ = uVar319;
        auVar96._8_4_ = uVar318;
        auVar96._0_8_ = dVar217;
        auVar96._12_4_ = uVar319;
        auVar180._8_4_ = uVar318;
        auVar180._0_8_ = dVar217;
        auVar180._12_4_ = uVar319;
        auVar166 = blendpd(auVar180,auVar243,2);
        auVar227._0_8_ = auVar226._8_8_ * dVar312 - dVar217 * dVar232;
        auVar227._8_8_ = auVar243._0_8_ * dVar232 - auVar96._8_8_ * dVar250;
        auVar97._8_4_ = SUB84(auVar243._8_8_,0);
        auVar97._0_8_ = auVar243._0_8_;
        auVar97._12_4_ = (int)((ulonglong)auVar243._8_8_ >> 0x20);
        auVar181._0_8_ = auVar166._0_8_ * dVar250 - auVar243._0_8_ * dVar57;
        auVar181._8_8_ = auVar166._8_8_ * dVar147 - auVar97._8_8_ * dVar145;
        auVar98._8_4_ = SUB84(auVar227._8_8_,0);
        auVar98._0_8_ = auVar227._0_8_;
        auVar98._12_4_ = (int)((ulonglong)auVar227._8_8_ >> 0x20);
        auVar166 = blendpd(auVar227,auVar181,2);
        local_10a8._s_0.X = dVar217 * dVar147 + (double)in_XMM5._0_8_ + auVar98._8_8_ + dVar233;
        local_10a8._s_0.Y = dVar301 * dVar147 + in_XMM5._8_8_ + auVar181._0_8_ + dVar284;
        local_10a8._s_0.Z = auVar243._0_8_ * dVar147 + auVar293._0_8_ + auVar166._0_8_ + dVar307;
        local_758 = local_d40;
        dStack_750 = dStack_d38;
        local_748 = local_d30;
        FAnimInstanceProxy::AnimDrawDebugLine
                  (((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy,
                   (TVector<double> *)&local_10a8._s_0,(TVector<double> *)&local_10c0._s_0,
                   &FColor::Green,false,__real_bf800000,0.0,SDPG_World);
        auVar166 = ___xmm_7ff00000000000007ff0000000000000;
        iVar25 = local_1470._0_4_;
        iVar313 = local_1470._4_4_;
        iVar314 = local_1470._8_4_;
        iVar315 = iStack_1464;
        iVar316 = local_1488._0_4_;
        uVar318 = local_1488._4_4_;
        uVar319 = local_1280._0_4_;
        uVar298 = local_1280._4_4_;
        uVar300 = local_1280._8_4_;
        uVar216 = uStack_1274;
        uVar148 = dStack_1410;
        FVar149 = (FWeakObjectPtr)local_1460._8_8_;
        uVar55 = local_1418;
        uVar56 = local_1460._0_8_;
      }
      uVar144 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar146 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((((__real_3f1a36e2e0000000 <
             (double)CONCAT44((uint)((ulonglong)uVar55 >> 0x20) & uVar146,(uint)uVar55 & uVar144))
           || (uVar297 = (uint)uVar148 & uVar144,
              uVar299 = (uint)((ulonglong)uVar148 >> 0x20) & uVar146,
              __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar299,uVar297) &&
              (double)CONCAT44(uVar299,uVar297) != __real_3f1a36e2e0000000)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_1408 >> 0x20) & uVar146,
                            (uint)local_1408 & uVar144))) &&
         (((__real_3f1a36e2e0000000 <
            (double)CONCAT44(SUB84(uVar56,4) & uVar146,(uint)uVar56 & uVar144) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44(FVar149.ObjectSerialNumber & uVar146,FVar149.ObjectIndex & uVar144)))
          || (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)local_1450 >> 0x20) & uVar146,
                               (uint)local_1450 & uVar144))))) {
        pTVar30 = &local_fe8;
        pTVar33 = UE::Math::TQuat<double>::FindBetweenNormals
                            (pTVar30,(TVector<double> *)&local_1418,(TVector<double> *)local_1460);
        dVar147 = local_fe8.X;
        dVar301 = local_fe8.Z;
        dVar217 = local_fe8.Y;
        auVar182._8_4_ = local_fe8.Y._0_4_;
        auVar182._0_8_ = dVar217;
        auVar182._12_4_ = local_fe8.Y._4_4_;
        dVar306 = local_fe8.W;
        auVar99._8_4_ = local_fe8.W._0_4_;
        auVar99._0_8_ = dVar306;
        auVar99._12_4_ = local_fe8.W._4_4_;
        auVar100._8_4_ = local_fe8.Z._0_4_;
        auVar100._0_8_ = dVar301;
        auVar100._12_4_ = local_fe8.Z._4_4_;
        dVar232 = dVar147 * (double)local_3c8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                  dVar306 * (double)local_3d8._0_8_ +
                  dVar217 * (double)local_3c8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar301 * (double)local_3d8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar250 = dVar147 * (double)local_3c8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  auVar99._8_8_ * (double)local_3d8._8_8_ +
                  auVar182._8_8_ * (double)local_3c8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar100._8_8_ * (double)local_3d8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar101._8_4_ = SUB84(dVar250,0);
        auVar101._0_8_ = dVar232;
        auVar101._12_4_ = (int)((ulonglong)dVar250 >> 0x20);
        dVar311 = dVar147 * (double)local_3d8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  dVar306 * (double)local_3c8._0_8_ +
                  dVar217 * (double)local_3d8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar301 * (double)local_3c8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar217 = dVar147 * (double)local_3d8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                  dVar306 * (double)local_3c8._8_8_ +
                  dVar217 * (double)local_3d8._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar301 * (double)local_3c8._0_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar183._8_4_ = SUB84(dVar217,0);
        auVar183._0_8_ = dVar311;
        auVar183._12_4_ = (int)((ulonglong)dVar217 >> 0x20);
        auVar184._0_8_ = dVar311 * dVar311 + dVar232 * dVar232;
        auVar184._8_8_ = auVar183._8_8_ * dVar217 + auVar101._8_8_ * dVar250;
        auVar102._8_4_ = SUB84(auVar184._8_8_,0);
        auVar102._0_8_ = auVar184._0_8_;
        auVar102._12_4_ = (int)((ulonglong)auVar184._8_8_ >> 0x20);
        auVar103._0_8_ = auVar102._8_8_ + auVar184._0_8_;
        auVar103._8_8_ = auVar184._0_8_ + auVar184._8_8_;
        auVar65 = sqrtpd(auVar184,auVar103);
        uVar50 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar103._0_8_);
        uVar52 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar103._8_8_);
        auVar156 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar65);
        uVar51 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar103._0_8_);
        uVar53 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar103._8_8_);
        uVar297 = auVar166._0_4_;
        uVar299 = auVar166._4_4_;
        dVar147 = auVar166._0_8_;
        uVar26 = auVar166._12_4_;
        auVar262._0_8_ = uVar50 & (ulonglong)(auVar156._0_8_ * dVar232);
        uVar35 = uVar52 & (ulonglong)(auVar156._8_8_ * dVar250);
        auVar262._8_4_ = (undefined4)uVar35;
        auVar262._12_4_ = (undefined4)(uVar35 >> 0x20);
        auVar228._0_4_ = ~(uint)uVar50 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar228._4_4_ =
             ~(uint)(uVar50 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar228._8_4_ = ~(uint)uVar52 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar228._12_4_ =
             ~(uint)(uVar52 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_3d8 = auVar262 | auVar228;
        auVar65 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar65);
        dVar232 = auVar166._8_8_;
        auVar104._0_8_ = (double)CONCAT44(uVar299 & local_3d8._4_4_,uVar297 & local_3d8._0_4_);
        uVar146 = auVar166._8_4_;
        auVar104._8_4_ = uVar146 & local_3d8._8_4_;
        auVar104._12_4_ = uVar26 & local_3d8._12_4_;
        auVar229._0_8_ = (ulonglong)(auVar65._0_8_ * dVar311) & uVar51;
        uVar35 = uVar53 & (ulonglong)(auVar65._8_8_ * dVar217);
        auVar229._8_4_ = (undefined4)uVar35;
        auVar229._12_4_ = (undefined4)(uVar35 >> 0x20);
        auVar244._0_4_ = ~(uint)uVar51 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar244._4_4_ =
             ~(uint)(uVar51 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar244._8_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar244._12_4_ =
             ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_3c8 = auVar229 | auVar244;
        auVar185._0_8_ = (double)CONCAT44(uVar299 & local_3c8._4_4_,uVar297 & local_3c8._0_4_);
        auVar185._8_4_ = uVar146 & local_3c8._8_4_;
        auVar185._12_4_ = uVar26 & local_3c8._12_4_;
        auVar186._8_8_ = -(ulonglong)(auVar185._8_8_ == dVar232);
        auVar186._0_8_ = -(ulonglong)(auVar185._0_8_ == dVar147);
        uVar144 = movmskpd((int)pTVar33,auVar186);
        auVar105._8_8_ = -(ulonglong)(auVar104._8_8_ == dVar232);
        auVar105._0_8_ = -(ulonglong)(auVar104._0_8_ == dVar147);
        iVar34 = movmskpd((int)pTVar30,auVar105);
        if ((uVar144 & 0x3fffffff) == 0 && iVar34 == 0) {
          auVar187._0_8_ = (double)CONCAT44(uVar299 & local_3a8._4_4_,uVar297 & (uint)local_3a8);
          auVar187._8_4_ = uVar146 & (uint)uStack_3a0;
          auVar187._12_4_ = uVar26 & uStack_3a0._4_4_;
          auVar188._8_8_ = -(ulonglong)(auVar187._8_8_ == dVar232);
          auVar188._0_8_ = -(ulonglong)(auVar187._0_8_ == dVar147);
          uVar144 = movmskpd(0,auVar188);
          auVar106._0_8_ = (double)CONCAT44(uVar299 & local_3b8._4_4_,uVar297 & local_3b8._0_4_);
          auVar106._8_4_ = uVar146 & local_3b8._8_4_;
          auVar106._12_4_ = uVar26 & uStack_3ac;
          auVar107._8_8_ = -(ulonglong)(auVar106._8_8_ == dVar232);
          auVar107._0_8_ = -(ulonglong)(auVar106._0_8_ == dVar147);
          iVar34 = movmskpd(iVar34,auVar107);
          if ((uVar144 & 0x3fffffff) != 0 || iVar34 != 0) goto LAB_14a724626;
          auVar244._8_8_ = dStack_390;
          auVar244._0_8_ = local_398;
          auVar189._0_8_ = (double)CONCAT44(uVar299 & local_388._4_4_,uVar297 & (uint)local_388);
          auVar189._8_4_ = uVar146 & (uint)uStack_380;
          auVar189._12_4_ = uVar26 & uStack_380._4_4_;
          auVar190._8_8_ = -(ulonglong)(auVar189._8_8_ == dVar232);
          auVar190._0_8_ = -(ulonglong)(auVar189._0_8_ == dVar147);
          uVar144 = movmskpd(0,auVar190);
          auVar108._0_8_ =
               (double)CONCAT44(uVar299 & (uint)((ulonglong)local_398 >> 0x20),
                                uVar297 & SUB84(local_398,0));
          auVar108._8_4_ = uVar146 & SUB84(dStack_390,0);
          auVar108._12_4_ = uVar26 & (uint)((ulonglong)dStack_390 >> 0x20);
          auVar109._8_8_ = -(ulonglong)(auVar108._8_8_ == dVar232);
          auVar109._0_8_ = -(ulonglong)(auVar108._0_8_ == dVar147);
          iVar34 = movmskpd(iVar34,auVar109);
          if ((uVar144 & 0x3fffffff) != 0 || iVar34 != 0) goto LAB_14a724626;
LAB_14a724672:
          local_318 = pTVar44[-3].ArrayNum;
          local_308 = local_3d8;
          local_2f8 = local_3c8;
          local_2e8 = local_3b8._0_4_;
          uStack_2e4 = local_3b8._4_4_;
          uStack_2e0 = local_3b8._8_4_;
          uStack_2dc = uStack_3ac;
          local_2d8 = (uint)local_3a8;
          uStack_2d4 = local_3a8._4_4_;
          uStack_2d0 = (uint)uStack_3a0;
          uStack_2cc = uStack_3a0._4_4_;
          local_2c8 = auVar244;
          local_2b8 = (uint)local_388;
          uStack_2b4 = local_388._4_4_;
          uStack_2b0 = (uint)uStack_380;
          uStack_2ac = uStack_380._4_4_;
          if (((*(int **)FVar41 <= &local_318) &&
              (&local_318 < *(int **)FVar41 + (longlong)*(int *)((longlong)FVar41 + 0xc) * 0x1c)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar148 = auVar244._8_8_;
          iVar34 = *(int *)((longlong)FVar41 + 8);
          if (iVar34 == *(int *)((longlong)FVar41 + 0xc)) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1070,(ForAnyElementType *)FVar41,(int *)((longlong)FVar41 + 0xc));
            uVar148 = auVar244._8_8_;
          }
          *(int *)((longlong)FVar41 + 8) = iVar34 + 1;
          puVar38 = (undefined8 *)(*(longlong *)FVar41 + (longlong)iVar34 * 0x70);
          *puVar38 = CONCAT44(uStack_314,local_318);
          puVar38[1] = uStack_310;
          puVar38[2] = local_308._0_8_;
          puVar38[3] = local_308._8_8_;
          puVar38[4] = local_2f8._0_8_;
          puVar38[5] = local_2f8._8_8_;
          puVar38[6] = CONCAT44(uStack_2e4,local_2e8);
          puVar38[7] = CONCAT44(uStack_2dc,uStack_2e0);
          puVar38[8] = CONCAT44(uStack_2d4,local_2d8);
          puVar38[9] = CONCAT44(uStack_2cc,uStack_2d0);
          puVar38[10] = local_2c8._0_8_;
          puVar38[0xb] = local_2c8._8_8_;
          puVar38[0xc] = CONCAT44(uStack_2b4,local_2b8);
          puVar38[0xd] = CONCAT44(uStack_2ac,uStack_2b0);
        }
        else {
LAB_14a724626:
          local_1378 = (double *)local_3d8;
          bVar24 = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l119::<lambda_8>::
                   operator()(&local_1378);
          uVar148 = auVar244._8_8_;
          if (bVar24) {
            auVar244._8_8_ = dStack_390;
            auVar244._0_8_ = local_398;
            goto LAB_14a724672;
          }
        }
        dVar301 = (double)CONCAT44(iVar313,iVar25) - (double)CONCAT44(uVar298,uVar319);
        local_ce8 = (FAnimNode_SlopeWarping *)local_1448.Data;
        auVar21._4_8_ = uVar148;
        auVar21._0_4_ = local_3b8._4_4_;
        auVar245._0_8_ = auVar21._0_8_ << 0x20;
        auVar245._8_4_ = local_3b8._8_4_;
        auVar245._12_4_ = local_3b8._12_4_;
        local_d00 = CONCAT44(uVar318,iVar316);
        dVar250 = (double)CONCAT44(uVar318,iVar316) - (double)local_1448.Data;
        local_1080 = local_3a8;
        local_1090 = _local_3b8;
        local_ce0 = (pTVar44->AllocatorInstance).Data;
        dStack_cd8 = *(double *)&pTVar44->ArrayNum;
        local_cd0 = pTVar44[1].AllocatorInstance.Data;
        uStack_720._0_4_ = pTVar44[1].ArrayNum;
        uStack_720._4_4_ = pTVar44[1].ArrayMax;
        dVar217 = local_3b8._0_8_ - (double)local_ce0;
        dVar147 = auVar245._8_8_ - dStack_cd8;
        dVar232 = (double)CONCAT44(iVar315,iVar314) - (double)CONCAT44(uVar216,uVar300);
        fVar54 = (float)SQRT(dVar232 * dVar232 + dVar301 * dVar301 + dVar250 * dVar250);
        in_XMM5 = ZEXT416((uint)fVar54);
        local_d10 = iVar25;
        iStack_d0c = iVar313;
        iStack_d08 = iVar314;
        iStack_d04 = iVar315;
        local_cf8 = uVar319;
        uStack_cf4 = uVar298;
        uStack_cf0 = uVar300;
        uStack_cec = uVar216;
        local_738 = local_ce0;
        dStack_730 = dStack_cd8;
        local_728 = local_cd0;
        if (fVar54 < (float)SQRT(dVar147 * dVar147 + dVar217 * dVar217 +
                                 (local_3a8 - (double)local_cd0) * (local_3a8 - (double)local_cd0)))
        {
          dVar232 = (double)fVar54;
          local_cc8 = _local_3b8;
          local_cb8 = local_3a8;
          local_cb0 = (FScriptContainerElement *)
                      (dVar232 * (double)local_1460._0_8_ + local_3b8._0_8_);
          local_ca0 = (FScriptContainerElement *)(dVar232 * (double)local_1450 + local_3a8);
          dStack_ca8 = dVar232 * (double)local_1460._8_8_ + local_3b8._8_8_;
          (pTVar44->AllocatorInstance).Data = local_cb0;
          *(double *)&pTVar44->ArrayNum = dStack_ca8;
          pTVar44[1].AllocatorInstance.Data = local_ca0;
          pTVar44[1].ArrayNum = 0;
          pTVar44[1].ArrayMax = 0;
        }
      }
      auVar309._8_8_ = 0;
      auVar309._0_8_ = __real_3ff0000000000000;
      FVar49 = (ForElementType<unsigned_int>)((longlong)FVar49 + 0xb0);
      pTVar44 = pTVar44 + 0xb;
      pFVar37 = (FScriptContainerElement *)(ulonglong)uVar143;
    }
    FVar49 = local_1478;
    fVar317 = __real_bf800000;
    fVar54 = __real_40a00000;
    if (!bVar23) {
      uVar146 = auVar166._0_4_;
      uVar297 = auVar166._4_4_;
      auVar191._0_8_ =
           (double)CONCAT44(local_438.Rotation.ZW.m128d_f64[0]._4_4_ & uVar297,
                            local_438.Rotation.ZW.m128d_f64[0]._0_4_ & uVar146);
      uVar299 = auVar166._8_4_;
      auVar191._8_4_ = local_438.Rotation.ZW.m128d_f64[1]._0_4_ & uVar299;
      auVar191._12_4_ = local_438.Rotation.ZW.m128d_f64[1]._4_4_ & uVar144;
      dVar250 = auVar166._0_8_;
      auVar192._8_8_ = -(ulonglong)(auVar191._8_8_ == dVar232);
      auVar192._0_8_ = -(ulonglong)(auVar191._0_8_ == dVar250);
      uVar143 = movmskpd(local_1478._0_4_,auVar192);
      auVar110._0_8_ =
           (double)CONCAT44(local_438.Rotation.XY.m128d_f64[0]._4_4_ & uVar297,
                            local_438.Rotation.XY.m128d_f64[0]._0_4_ & uVar146);
      auVar110._8_4_ = local_438.Rotation.XY.m128d_f64[1]._0_4_ & uVar299;
      auVar110._12_4_ = local_438.Rotation.XY.m128d_f64[1]._4_4_ & uVar144;
      auVar111._8_8_ = -(ulonglong)(auVar110._8_8_ == dVar232);
      auVar111._0_8_ = -(ulonglong)(auVar110._0_8_ == dVar250);
      iVar25 = movmskpd((int)pFVar37,auVar111);
      if ((uVar143 & 0x3fffffff) == 0 && iVar25 == 0) {
        auVar193._0_8_ =
             (double)CONCAT44(local_438.Translation.ZW.m128d_f64[0]._4_4_ & uVar297,
                              local_438.Translation.ZW.m128d_f64[0]._0_4_ & uVar146);
        auVar193._8_4_ = local_438.Translation.ZW.m128d_f64[1]._0_4_ & uVar299;
        auVar193._12_4_ = local_438.Translation.ZW.m128d_f64[1]._4_4_ & uVar144;
        auVar194._8_8_ = -(ulonglong)(auVar193._8_8_ == dVar232);
        auVar194._0_8_ = -(ulonglong)(auVar193._0_8_ == dVar250);
        uVar143 = movmskpd(0,auVar194);
        auVar112._0_8_ =
             (double)CONCAT44(local_438.Translation.XY.m128d_f64[0]._4_4_ & uVar297,
                              local_438.Translation.XY.m128d_f64[0]._0_4_ & uVar146);
        auVar112._8_4_ = local_438.Translation.XY.m128d_f64[1]._0_4_ & uVar299;
        auVar112._12_4_ = local_438.Translation.XY.m128d_f64[1]._4_4_ & uVar144;
        auVar113._8_8_ = -(ulonglong)(auVar112._8_8_ == dVar232);
        auVar113._0_8_ = -(ulonglong)(auVar112._0_8_ == dVar250);
        iVar25 = movmskpd(iVar25,auVar113);
        if ((uVar143 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a7249db;
        auVar195._0_8_ =
             (double)CONCAT44(uVar297 & local_438.Scale3D.ZW.m128d_f64[0]._4_4_,
                              uVar146 & local_438.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar195._8_4_ = uVar299 & local_438.Scale3D.ZW.m128d_f64[1]._0_4_;
        auVar195._12_4_ = uVar144 & local_438.Scale3D.ZW.m128d_f64[1]._4_4_;
        auVar196._8_8_ = -(ulonglong)(auVar195._8_8_ == dVar232);
        auVar196._0_8_ = -(ulonglong)(auVar195._0_8_ == dVar250);
        uVar143 = movmskpd(0,auVar196);
        auVar114._0_8_ =
             (double)CONCAT44(uVar297 & local_438.Scale3D.XY.m128d_f64[0]._4_4_,
                              uVar146 & local_438.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar114._8_4_ = uVar299 & local_438.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar114._12_4_ = uVar144 & local_438.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar115._8_8_ = -(ulonglong)(auVar114._8_8_ == dVar232);
        auVar115._0_8_ = -(ulonglong)(auVar114._0_8_ == dVar250);
        iVar25 = movmskpd(iVar25,auVar115);
        if ((uVar143 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a7249db;
      }
      else {
LAB_14a7249db:
        local_1370 = &local_438;
        pFVar37 = (FScriptContainerElement *)&local_1370;
        FVar49._0_1_ = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::C]::<lambda_9>
                       ::operator()(pFVar37);
        FVar49._1_7_ = extraout_var_00;
        fVar317 = __real_bf800000;
        fVar54 = __real_40a00000;
        if (!FVar49._0_1_) goto LAB_14a724b5e;
      }
      local_2a8 = local_1498;
      local_298[0] = local_438.Rotation.XY.m128d_f64[0];
      local_298[1] = local_438.Rotation.XY.m128d_f64[1];
      local_278[0] = local_438.Translation.XY.m128d_f64[0];
      local_278[1] = local_438.Translation.XY.m128d_f64[1];
      local_268[0] = local_438.Translation.ZW.m128d_f64[0];
      local_268[1] = local_438.Translation.ZW.m128d_f64[1];
      local_258[0] = local_438.Scale3D.XY.m128d_f64[0];
      local_258[1] = local_438.Scale3D.XY.m128d_f64[1];
      local_248[0] = local_438.Scale3D.ZW.m128d_f64[0];
      local_248[1] = local_438.Scale3D.ZW.m128d_f64[1];
      local_288 = local_438.Rotation.ZW.m128d_f64[0]._0_4_;
      uStack_284 = local_438.Rotation.ZW.m128d_f64[0]._4_4_;
      uStack_280 = local_438.Rotation.ZW.m128d_f64[1]._0_4_;
      uStack_27c = local_438.Rotation.ZW.m128d_f64[1]._4_4_;
      if (((*(FCompactPoseBoneIndex **)FVar41 <= &local_2a8) &&
          (&local_2a8 <
           *(FCompactPoseBoneIndex **)FVar41 + (longlong)*(int *)((longlong)FVar41 + 0xc) * 0x1c))
         && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar24)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar25 = *(int *)((longlong)FVar41 + 8);
      if (iVar25 == *(int *)((longlong)FVar41 + 0xc)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,(ForAnyElementType *)FVar41,(int *)((longlong)FVar41 + 0xc));
      }
      FVar49 = (ForElementType<unsigned_int>)(longlong)iVar25;
      *(int *)((longlong)FVar41 + 8) = iVar25 + 1;
      pFVar37 = (FScriptContainerElement *)(*(longlong *)FVar41 + (longlong)FVar49 * 0x70);
      *(ulonglong *)pFVar37 = CONCAT44(uStack_2a4,local_2a8);
      *(undefined8 *)(pFVar37 + 8) = uStack_2a0;
      *(double *)(pFVar37 + 0x10) = local_298[0];
      *(double *)(pFVar37 + 0x18) = local_298[1];
      *(ulonglong *)(pFVar37 + 0x20) = CONCAT44(uStack_284,local_288);
      *(ulonglong *)(pFVar37 + 0x28) = CONCAT44(uStack_27c,uStack_280);
      *(double *)(pFVar37 + 0x30) = local_278[0];
      *(double *)(pFVar37 + 0x38) = local_278[1];
      *(double *)(pFVar37 + 0x40) = local_268[0];
      *(double *)(pFVar37 + 0x48) = local_268[1];
      *(double *)(pFVar37 + 0x50) = local_258[0];
      *(double *)(pFVar37 + 0x58) = local_258[1];
      *(double *)(pFVar37 + 0x60) = local_248[0];
      *(double *)(pFVar37 + 0x68) = local_248[1];
      fVar317 = __real_bf800000;
      fVar54 = __real_40a00000;
    }
  }
LAB_14a724b5e:
  uVar143 = auVar166._0_4_;
  uVar144 = auVar166._4_4_;
  uVar146 = auVar166._8_4_;
  uVar297 = auVar166._12_4_;
  dVar232 = auVar166._0_8_;
  dVar250 = auVar166._8_8_;
  if (bVar22) {
    pTVar28 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_00,(FCompactPoseBoneIndex)0x0);
    local_378 = *(undefined1 (*) [16])(pTVar28->Rotation).XY.m128d_f64;
    local_368 = *(uint *)(pTVar28->Rotation).ZW.m128d_f64;
    uStack_364 = *(uint *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 4);
    uStack_360 = *(uint *)((pTVar28->Rotation).ZW.m128d_f64 + 1);
    uStack_35c = *(uint *)((longlong)(pTVar28->Rotation).ZW.m128d_f64 + 0xc);
    local_338 = *(undefined1 (*) [16])(pTVar28->Scale3D).XY.m128d_f64;
    local_348._0_8_ = local_14b0._s_0.Z + (pTVar28->Translation).ZW.m128d_f64[0];
    local_348._8_8_ = (pTVar28->Translation).ZW.m128d_f64[1] + 0.0;
    local_358._0_8_ = local_14b0._s_0.X + (pTVar28->Translation).XY.m128d_f64[0];
    local_358._8_8_ = local_14b0._s_0.Y + (pTVar28->Translation).XY.m128d_f64[1];
    local_328 = *(undefined1 (*) [16])(pTVar28->Scale3D).ZW.m128d_f64;
    auVar197._0_8_ = (double)CONCAT44(uVar144 & uStack_364,uVar143 & local_368);
    auVar197._8_4_ = uVar146 & uStack_360;
    auVar197._12_4_ = uVar297 & uStack_35c;
    auVar198._8_8_ = -(ulonglong)(auVar197._8_8_ == dVar250);
    auVar198._0_8_ = -(ulonglong)(auVar197._0_8_ == dVar232);
    uVar299 = movmskpd((int)pTVar28,auVar198);
    auVar116._0_8_ = (double)CONCAT44(uVar144 & local_378._4_4_,uVar143 & local_378._0_4_);
    auVar116._8_4_ = uVar146 & local_378._8_4_;
    auVar116._12_4_ = uVar297 & local_378._12_4_;
    auVar117._8_8_ = -(ulonglong)(auVar116._8_8_ == dVar250);
    auVar117._0_8_ = -(ulonglong)(auVar116._0_8_ == dVar232);
    iVar25 = movmskpd((int)this_00,auVar117);
    if ((uVar299 & 0x3fffffff) == 0 && iVar25 == 0) {
      auVar199._0_8_ =
           (double)CONCAT44(uVar144 & (uint)((ulonglong)local_348._0_8_ >> 0x20),
                            uVar143 & SUB84(local_348._0_8_,0));
      auVar199._8_4_ = uVar146 & SUB84(local_348._8_8_,0);
      auVar199._12_4_ = uVar297 & (uint)((ulonglong)local_348._8_8_ >> 0x20);
      auVar118._0_8_ =
           (double)CONCAT44(uVar144 & (uint)((ulonglong)local_358._0_8_ >> 0x20),
                            uVar143 & SUB84(local_358._0_8_,0));
      auVar118._8_4_ = uVar146 & SUB84(local_358._8_8_,0);
      auVar118._12_4_ = uVar297 & (uint)((ulonglong)local_358._8_8_ >> 0x20);
      auVar200._8_8_ = -(ulonglong)(auVar199._8_8_ == dVar250);
      auVar200._0_8_ = -(ulonglong)(auVar199._0_8_ == dVar232);
      uVar299 = movmskpd(0,auVar200);
      auVar119._8_8_ = -(ulonglong)(auVar118._8_8_ == dVar250);
      auVar119._0_8_ = -(ulonglong)(auVar118._0_8_ == dVar232);
      iVar25 = movmskpd(iVar25,auVar119);
      if ((uVar299 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a724c5c;
      auVar201._0_8_ = (double)CONCAT44(uVar144 & local_328._4_4_,uVar143 & local_328._0_4_);
      auVar201._8_4_ = uVar146 & local_328._8_4_;
      auVar201._12_4_ = uVar297 & local_328._12_4_;
      auVar120._0_8_ = (double)CONCAT44(uVar144 & local_338._4_4_,uVar143 & local_338._0_4_);
      auVar120._8_4_ = uVar146 & local_338._8_4_;
      auVar120._12_4_ = uVar297 & local_338._12_4_;
      auVar202._8_8_ = -(ulonglong)(auVar201._8_8_ == dVar250);
      auVar202._0_8_ = -(ulonglong)(auVar201._0_8_ == dVar232);
      uVar299 = movmskpd(0,auVar202);
      auVar121._8_8_ = -(ulonglong)(auVar120._8_8_ == dVar250);
      auVar121._0_8_ = -(ulonglong)(auVar120._0_8_ == dVar232);
      iVar25 = movmskpd(iVar25,auVar121);
      if ((uVar299 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a724c5c;
    }
    else {
LAB_14a724c5c:
      local_1368 = local_378;
      pFVar37 = (FScriptContainerElement *)&local_1368;
      FVar49._0_1_ = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::I]::<lambda_10>::
                     operator()(pFVar37);
      FVar49._1_7_ = extraout_var_01;
      if (!FVar49._0_1_) goto LAB_14a724dc0;
    }
    local_238 = 0;
    local_228 = local_378;
    local_218 = local_368;
    uStack_214 = uStack_364;
    uStack_210 = uStack_360;
    uStack_20c = uStack_35c;
    local_208 = local_358;
    local_1f8 = local_348;
    local_1e8 = local_338;
    local_1d8 = local_328;
    if (((*(undefined4 **)FVar41 <= &local_238) &&
        (&local_238 < *(undefined4 **)FVar41 + (longlong)*(int *)((longlong)FVar41 + 0xc) * 0x1c))
       && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar22)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar25 = *(int *)((longlong)FVar41 + 8);
    if (iVar25 == *(int *)((longlong)FVar41 + 0xc)) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,(ForAnyElementType *)FVar41,(int *)((longlong)FVar41 + 0xc));
    }
    FVar49 = (ForElementType<unsigned_int>)(longlong)iVar25;
    *(int *)((longlong)FVar41 + 8) = iVar25 + 1;
    pFVar37 = (FScriptContainerElement *)(*(longlong *)FVar41 + (longlong)FVar49 * 0x70);
    *(ulonglong *)pFVar37 = CONCAT44(uStack_234,local_238);
    *(undefined8 *)(pFVar37 + 8) = uStack_230;
    *(undefined8 *)(pFVar37 + 0x10) = local_228._0_8_;
    *(undefined8 *)(pFVar37 + 0x18) = local_228._8_8_;
    *(ulonglong *)(pFVar37 + 0x20) = CONCAT44(uStack_214,local_218);
    *(ulonglong *)(pFVar37 + 0x28) = CONCAT44(uStack_20c,uStack_210);
    *(undefined8 *)(pFVar37 + 0x30) = local_208._0_8_;
    *(undefined8 *)(pFVar37 + 0x38) = local_208._8_8_;
    *(undefined8 *)(pFVar37 + 0x40) = local_1f8._0_8_;
    *(undefined8 *)(pFVar37 + 0x48) = local_1f8._8_8_;
    *(undefined8 *)(pFVar37 + 0x50) = local_1e8._0_8_;
    *(undefined8 *)(pFVar37 + 0x58) = local_1e8._8_8_;
    *(undefined8 *)(pFVar37 + 0x60) = local_1d8._0_8_;
    *(undefined8 *)(pFVar37 + 0x68) = local_1d8._8_8_;
  }
LAB_14a724dc0:
  if ((bVar23) && (FVar32._0_1_)) goto LAB_14a724fe0;
  auVar203._0_8_ =
       (double)CONCAT44(uVar144 & local_498.Rotation.ZW.m128d_f64[0]._4_4_,
                        uVar143 & local_498.Rotation.ZW.m128d_f64[0]._0_4_);
  auVar203._8_4_ = uVar146 & local_498.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar203._12_4_ = uVar297 & local_498.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar204._8_8_ = -(ulonglong)(auVar203._8_8_ == dVar250);
  auVar204._0_8_ = -(ulonglong)(auVar203._0_8_ == dVar232);
  uVar299 = movmskpd(FVar49._0_4_,auVar204);
  auVar122._0_8_ =
       (double)CONCAT44(uVar144 & local_498.Rotation.XY.m128d_f64[0]._4_4_,
                        uVar143 & local_498.Rotation.XY.m128d_f64[0]._0_4_);
  auVar122._8_4_ = uVar146 & local_498.Rotation.XY.m128d_f64[1]._0_4_;
  auVar122._12_4_ = uVar297 & local_498.Rotation.XY.m128d_f64[1]._4_4_;
  auVar123._8_8_ = -(ulonglong)(auVar122._8_8_ == dVar250);
  auVar123._0_8_ = -(ulonglong)(auVar122._0_8_ == dVar232);
  iVar25 = movmskpd((int)pFVar37,auVar123);
  if ((uVar299 & 0x3fffffff) == 0 && iVar25 == 0) {
    auVar205._0_8_ =
         (double)CONCAT44(uVar144 & local_498.Translation.ZW.m128d_f64[0]._4_4_,
                          uVar143 & local_498.Translation.ZW.m128d_f64[0]._0_4_);
    auVar205._8_4_ = uVar146 & local_498.Translation.ZW.m128d_f64[1]._0_4_;
    auVar205._12_4_ = uVar297 & local_498.Translation.ZW.m128d_f64[1]._4_4_;
    auVar124._0_8_ =
         (double)CONCAT44(uVar144 & local_498.Translation.XY.m128d_f64[0]._4_4_,
                          uVar143 & local_498.Translation.XY.m128d_f64[0]._0_4_);
    auVar124._8_4_ = uVar146 & local_498.Translation.XY.m128d_f64[1]._0_4_;
    auVar124._12_4_ = uVar297 & local_498.Translation.XY.m128d_f64[1]._4_4_;
    auVar206._8_8_ = -(ulonglong)(auVar205._8_8_ == dVar250);
    auVar206._0_8_ = -(ulonglong)(auVar205._0_8_ == dVar232);
    uVar299 = movmskpd(0,auVar206);
    auVar125._8_8_ = -(ulonglong)(auVar124._8_8_ == dVar250);
    auVar125._0_8_ = -(ulonglong)(auVar124._0_8_ == dVar232);
    iVar25 = movmskpd(iVar25,auVar125);
    if ((uVar299 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a724e79;
    auVar207._0_8_ =
         (double)CONCAT44(uVar144 & local_498.Scale3D.ZW.m128d_f64[0]._4_4_,
                          uVar143 & local_498.Scale3D.ZW.m128d_f64[0]._0_4_);
    auVar207._8_4_ = uVar146 & local_498.Scale3D.ZW.m128d_f64[1]._0_4_;
    auVar207._12_4_ = uVar297 & local_498.Scale3D.ZW.m128d_f64[1]._4_4_;
    auVar208._8_8_ = -(ulonglong)(auVar207._8_8_ == dVar250);
    auVar208._0_8_ = -(ulonglong)(auVar207._0_8_ == dVar232);
    uVar299 = movmskpd(0,auVar208);
    auVar126._0_8_ =
         (double)CONCAT44(uVar144 & local_498.Scale3D.XY.m128d_f64[0]._4_4_,
                          uVar143 & local_498.Scale3D.XY.m128d_f64[0]._0_4_);
    auVar126._8_4_ = uVar146 & local_498.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar126._12_4_ = uVar297 & local_498.Scale3D.XY.m128d_f64[1]._4_4_;
    auVar127._8_8_ = -(ulonglong)(auVar126._8_8_ == dVar250);
    auVar127._0_8_ = -(ulonglong)(auVar126._0_8_ == dVar232);
    iVar25 = movmskpd(iVar25,auVar127);
    if ((uVar299 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a724e79;
  }
  else {
LAB_14a724e79:
    local_1360 = &local_498;
    FVar49._0_1_ = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::O]::<lambda_11>::
                   operator()(&local_1360);
    FVar49._1_7_ = extraout_var_02;
    if (!FVar49._0_1_) goto LAB_14a724fe0;
  }
  local_1c8 = local_1494;
  local_198 = local_498.Translation.XY.m128d_f64[0];
  dStack_190 = local_498.Translation.XY.m128d_f64[1];
  local_188 = local_498.Translation.ZW.m128d_f64[0];
  dStack_180 = local_498.Translation.ZW.m128d_f64[1];
  local_1b8[0] = local_498.Rotation.XY.m128d_f64[0];
  local_1b8[1] = local_498.Rotation.XY.m128d_f64[1];
  local_1a8[0] = local_498.Rotation.ZW.m128d_f64[0];
  local_1a8[1] = local_498.Rotation.ZW.m128d_f64[1];
  local_178[0] = local_498.Scale3D.XY.m128d_f64[0];
  local_178[1] = local_498.Scale3D.XY.m128d_f64[1];
  local_168[0] = local_498.Scale3D.ZW.m128d_f64[0];
  local_168[1] = local_498.Scale3D.ZW.m128d_f64[1];
  if (((*(FCompactPoseBoneIndex **)FVar41 <= &local_1c8) &&
      (&local_1c8 <
       *(FCompactPoseBoneIndex **)FVar41 + (longlong)*(int *)((longlong)FVar41 + 0xc) * 0x1c)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar25 = *(int *)((longlong)FVar41 + 8);
  if (iVar25 == *(int *)((longlong)FVar41 + 0xc)) {
    iVar25 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,(ForAnyElementType *)FVar41,(int *)((longlong)FVar41 + 0xc));
  }
  FVar49 = (ForElementType<unsigned_int>)(longlong)iVar25;
  *(int *)((longlong)FVar41 + 8) = iVar25 + 1;
  puVar38 = (undefined8 *)(*(longlong *)FVar41 + (longlong)FVar49 * 0x70);
  *puVar38 = CONCAT44(uStack_1c4,local_1c8);
  puVar38[1] = uStack_1c0;
  puVar38[2] = local_1b8[0];
  puVar38[3] = local_1b8[1];
  puVar38[4] = local_1a8[0];
  puVar38[5] = local_1a8[1];
  puVar38[6] = local_198;
  puVar38[7] = dStack_190;
  puVar38[8] = local_188;
  puVar38[9] = dStack_180;
  puVar38[10] = local_178[0];
  puVar38[0xb] = local_178[1];
  puVar38[0xc] = local_168[0];
  puVar38[0xd] = local_168[1];
LAB_14a724fe0:
  if ((FVar45.Data)->bShowDebug != 0) {
    pFVar7 = ((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy;
    local_c88 = local_498.Translation.ZW.m128d_f64[0];
    local_c98 = local_498.Translation.XY.m128d_f64[0];
    dStack_c90 = local_498.Translation.XY.m128d_f64[1];
    local_718 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dStack_710 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
    local_708 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dStack_700 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1];
    local_688 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Translation.ZW.m128d_f64;
    dVar301 = local_498.Translation.XY.m128d_f64[0] * local_718;
    dVar306 = local_498.Translation.XY.m128d_f64[1] * dStack_710;
    local_6f8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
    auVar310._0_8_ = local_498.Translation.ZW.m128d_f64[0] * local_708;
    auVar310._8_8_ = dStack_700 * 0.0;
    local_6e8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
    dVar311 = local_6e8._0_8_;
    auVar65 = blendpd(local_6f8,local_6e8,2);
    dVar219 = local_6e8._8_8_;
    dVar147 = auVar310._0_8_ * local_6f8._8_8_ - dVar311 * dVar306;
    auVar128._8_4_ = SUB84(dVar306,0);
    auVar128._0_8_ = dVar301;
    auVar128._12_4_ = (int)((ulonglong)dVar306 >> 0x20);
    auVar166 = blendpd(auVar128,auVar310,2);
    auVar294._8_4_ = SUB84(dVar147,0);
    auVar294._0_8_ = dVar306 * local_6f8._0_8_ - local_6f8._8_8_ * dVar301;
    auVar294._12_4_ = (int)((ulonglong)dVar147 >> 0x20);
    auVar129._0_8_ = auVar166._0_8_ * dVar311 - auVar65._0_8_ * auVar310._0_8_;
    auVar129._8_8_ = auVar166._8_8_ * dVar219 - auVar65._8_8_ * auVar310._8_8_;
    local_6b8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
    auVar166 = blendpd(auVar294,auVar129,2);
    dVar147 = dVar147 + dVar147;
    dVar217 = auVar129._0_8_ + auVar129._0_8_;
    uVar318 = (undefined4)((ulonglong)dVar217 >> 0x20);
    auVar295._0_8_ = auVar166._0_8_ + auVar166._0_8_;
    auVar295._8_8_ = auVar166._8_8_ + auVar166._8_8_;
    auVar279._8_4_ = SUB84(dVar217,0);
    auVar279._0_8_ = dVar147;
    auVar279._12_4_ = uVar318;
    auVar263._8_4_ = SUB84(dVar217,0);
    auVar263._0_8_ = dVar147;
    auVar263._12_4_ = uVar318;
    auVar166 = blendpd(local_6b8,local_6e8,2);
    auVar280._0_8_ = auVar279._8_8_ * local_6b8._0_8_ - local_6b8._8_8_ * dVar147;
    auVar280._8_8_ = auVar295._0_8_ * local_6b8._8_8_ - dVar311 * dVar217;
    auVar65 = blendpd(auVar263,auVar295,2);
    local_698 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
    dStack_690 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
    auVar130._8_4_ = SUB84(auVar280._8_8_,0);
    auVar130._0_8_ = auVar280._0_8_;
    auVar130._12_4_ = (int)((ulonglong)auVar280._8_8_ >> 0x20);
    auVar264._0_8_ = auVar65._0_8_ * dVar311 - auVar166._0_8_ * auVar295._0_8_;
    auVar264._8_8_ = auVar65._8_8_ * dVar219 - auVar166._8_8_ * auVar295._8_8_;
    auVar209._8_4_ = local_6e8._8_4_;
    auVar209._0_8_ = dVar219;
    auVar209._12_4_ = local_6e8._12_4_;
    auVar166 = blendpd(auVar280,auVar264,2);
    local_1078._s_0.X = dVar219 * dVar147 + dVar301 + auVar130._8_8_ + local_698;
    local_1078._s_0.Y = auVar209._8_8_ * dVar217 + dVar306 + auVar264._0_8_ + dStack_690;
    local_1078._s_0.Z = dVar219 * auVar295._0_8_ + auVar310._0_8_ + auVar166._0_8_ + local_688._0_8_
    ;
    local_6d8 = local_6f8;
    local_6c8 = local_6e8;
    local_6a8 = local_6e8;
    FAnimInstanceProxy::AnimDrawDebugSphere
              (((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy,
               (TVector<double> *)&local_1078._s_0,fVar54,0x10,&FColor::Blue,false,fVar317,0.0,
               SDPG_World);
    FVar49 = extraout_RAX;
  }
  if (!bVar23) {
    uVar299 = (this->FeetData).ArrayNum;
    uVar35 = (ulonglong)(int)uVar299;
    pFVar47 = (pTVar2->AllocatorInstance).Data;
    pFVar37 = pFVar47 + 0x10;
    pFVar39 = pFVar47 + uVar35 * 0xb0;
    while( true ) {
      uVar318 = FVar49._0_4_;
      iVar25 = (int)uVar35;
      if ((this->FeetData).ArrayNum != iVar25) {
        this_01 = &local_14b9;
        local_14b9 = 0;
        bVar22 = `TCheckedPointerIterator<FSlopeWarpingFootData,int,0>::operator!='::__l2::
                 <lambda_1>::operator()(this_01);
        iVar25 = (int)this_01;
        uVar318 = (undefined4)CONCAT71(extraout_var_03,bVar22);
      }
      if (pFVar47 == pFVar39) break;
      local_668 = *(uint *)(pFVar37 + 0x10);
      uStack_664 = *(uint *)(pFVar37 + 0x14);
      uStack_660 = *(uint *)(pFVar37 + 0x18);
      uStack_65c = *(uint *)(pFVar37 + 0x1c);
      local_678 = *(uint *)pFVar37;
      uStack_674 = *(uint *)(pFVar37 + 4);
      uStack_670 = *(uint *)(pFVar37 + 8);
      uStack_66c = *(uint *)(pFVar37 + 0xc);
      auVar210._0_8_ = (double)CONCAT44(uStack_664 & uVar144,local_668 & uVar143);
      auVar210._8_4_ = uStack_660 & uVar146;
      auVar210._12_4_ = uStack_65c & uVar297;
      auVar131._0_8_ = (double)CONCAT44(uStack_674 & uVar144,local_678 & uVar143);
      auVar131._8_4_ = uStack_670 & uVar146;
      auVar131._12_4_ = uStack_66c & uVar297;
      auVar211._8_8_ = -(ulonglong)(auVar210._8_8_ == dVar250);
      auVar211._0_8_ = -(ulonglong)(auVar210._0_8_ == dVar232);
      uVar26 = movmskpd(uVar318,auVar211);
      auVar132._8_8_ = -(ulonglong)(auVar131._8_8_ == dVar250);
      auVar132._0_8_ = -(ulonglong)(auVar131._0_8_ == dVar232);
      iVar25 = movmskpd(iVar25,auVar132);
      if ((uVar26 & 0x3fffffff) == 0 && iVar25 == 0) {
        local_648 = *(uint *)(pFVar37 + 0x30);
        uStack_644 = *(uint *)(pFVar37 + 0x34);
        uStack_640 = *(uint *)(pFVar37 + 0x38);
        uStack_63c = *(uint *)(pFVar37 + 0x3c);
        local_658 = *(uint *)(pFVar37 + 0x20);
        uStack_654 = *(uint *)(pFVar37 + 0x24);
        uStack_650 = *(uint *)(pFVar37 + 0x28);
        uStack_64c = *(uint *)(pFVar37 + 0x2c);
        auVar212._0_8_ = (double)CONCAT44(uStack_644 & uVar144,local_648 & uVar143);
        auVar212._8_4_ = uStack_640 & uVar146;
        auVar212._12_4_ = uStack_63c & uVar297;
        auVar133._0_8_ = (double)CONCAT44(uStack_654 & uVar144,local_658 & uVar143);
        auVar133._8_4_ = uStack_650 & uVar146;
        auVar133._12_4_ = uStack_64c & uVar297;
        auVar213._8_8_ = -(ulonglong)(auVar212._8_8_ == dVar250);
        auVar213._0_8_ = -(ulonglong)(auVar212._0_8_ == dVar232);
        uVar26 = movmskpd(0,auVar213);
        auVar134._8_8_ = -(ulonglong)(auVar133._8_8_ == dVar250);
        auVar134._0_8_ = -(ulonglong)(auVar133._0_8_ == dVar232);
        iVar25 = movmskpd(iVar25,auVar134);
        if ((uVar26 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a72529c;
        local_628 = *(uint *)(pFVar37 + 0x50);
        uStack_624 = *(uint *)(pFVar37 + 0x54);
        uStack_620 = *(uint *)(pFVar37 + 0x58);
        uStack_61c = *(uint *)(pFVar37 + 0x5c);
        local_638 = *(uint *)(pFVar37 + 0x40);
        uStack_634 = *(uint *)(pFVar37 + 0x44);
        uStack_630 = *(uint *)(pFVar37 + 0x48);
        uStack_62c = *(uint *)(pFVar37 + 0x4c);
        auVar214._0_8_ = (double)CONCAT44(uStack_624 & uVar144,local_628 & uVar143);
        auVar214._8_4_ = uStack_620 & uVar146;
        auVar214._12_4_ = uStack_61c & uVar297;
        auVar135._0_8_ = (double)CONCAT44(uStack_634 & uVar144,local_638 & uVar143);
        auVar135._8_4_ = uStack_630 & uVar146;
        auVar135._12_4_ = uStack_62c & uVar297;
        auVar215._8_8_ = -(ulonglong)(auVar214._8_8_ == dVar250);
        auVar215._0_8_ = -(ulonglong)(auVar214._0_8_ == dVar232);
        uVar26 = movmskpd(0,auVar215);
        auVar136._8_8_ = -(ulonglong)(auVar135._8_8_ == dVar250);
        auVar136._0_8_ = -(ulonglong)(auVar135._0_8_ == dVar232);
        iVar25 = movmskpd(iVar25,auVar136);
        if ((uVar26 & 0x3fffffff) != 0 || iVar25 != 0) goto LAB_14a72529c;
LAB_14a7252b7:
        local_158 = *(undefined4 *)pFVar47;
        local_148 = *(undefined8 *)pFVar37;
        uStack_140 = *(undefined8 *)(pFVar37 + 8);
        local_138 = *(undefined8 *)(pFVar37 + 0x10);
        uStack_130 = *(undefined8 *)(pFVar37 + 0x18);
        local_128 = *(undefined8 *)(pFVar37 + 0x20);
        uStack_120 = *(undefined8 *)(pFVar37 + 0x28);
        local_118 = *(undefined8 *)(pFVar37 + 0x30);
        uStack_110 = *(undefined8 *)(pFVar37 + 0x38);
        local_108 = *(undefined8 *)(pFVar37 + 0x40);
        uStack_100 = *(undefined8 *)(pFVar37 + 0x48);
        local_f8 = *(undefined8 *)(pFVar37 + 0x50);
        uStack_f0 = *(undefined8 *)(pFVar37 + 0x58);
        if (((*(undefined4 **)FVar41 <= &local_158) &&
            (&local_158 < *(undefined4 **)FVar41 + (longlong)*(int *)((longlong)FVar41 + 0xc) * 0x1c
            )) && (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar22)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar25 = *(int *)((longlong)FVar41 + 8);
        if (iVar25 == *(int *)((longlong)FVar41 + 0xc)) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1070,(ForAnyElementType *)FVar41,(int *)((longlong)FVar41 + 0xc));
        }
        FVar49 = (ForElementType<unsigned_int>)(longlong)iVar25;
        *(int *)((longlong)FVar41 + 8) = iVar25 + 1;
        puVar38 = (undefined8 *)(*(longlong *)FVar41 + (longlong)FVar49 * 0x70);
        *puVar38 = CONCAT44(uStack_154,local_158);
        puVar38[1] = uStack_150;
        puVar38[2] = local_148;
        puVar38[3] = uStack_140;
        puVar38[4] = local_138;
        puVar38[5] = uStack_130;
        puVar38[6] = local_128;
        puVar38[7] = uStack_120;
        puVar38[8] = local_118;
        puVar38[9] = uStack_110;
        puVar38[10] = local_108;
        puVar38[0xb] = uStack_100;
        puVar38[0xc] = local_f8;
        puVar38[0xd] = uStack_f0;
      }
      else {
LAB_14a72529c:
        local_1328 = pFVar47;
        FVar49._0_1_ = `FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l155::
                       <lambda_12>::operator()(&local_1328);
        FVar49._1_7_ = extraout_var_04;
        if (FVar49._0_1_) goto LAB_14a7252b7;
      }
      if ((FVar45.Data)->bShowDebug != 0) {
        pFVar7 = ((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy;
        local_c70 = *(double *)(pFVar37 + 0x30);
        uStack_600 = *(undefined8 *)(pFVar37 + 0x38);
        local_c80 = *(double *)(pFVar37 + 0x20);
        dStack_c78 = *(double *)(pFVar37 + 0x28);
        local_5f8 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
        dStack_5f0 = (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
        local_5e8 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
        dStack_5e0 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1];
        auVar302._0_8_ = local_c70 * local_5e8;
        auVar302._8_8_ = dStack_5e0 * 0.0;
        local_b28 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
        dVar147 = local_c80 * local_5f8;
        dVar217 = dStack_c78 * dStack_5f0;
        uVar318 = (undefined4)((ulonglong)dVar217 >> 0x20);
        local_5d8 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
        auVar296._8_4_ = SUB84(dVar217,0);
        auVar296._0_8_ = dVar147;
        auVar296._12_4_ = uVar318;
        dVar301 = local_b28._0_8_;
        dVar306 = local_b28._8_8_;
        auVar65 = blendpd(local_5d8,local_b28,2);
        dVar311 = auVar302._0_8_ * local_5d8._8_8_ - dVar301 * dVar217;
        auVar281._8_4_ = SUB84(dVar311,0);
        auVar281._0_8_ = auVar296._8_8_ * local_5d8._0_8_ - local_5d8._8_8_ * dVar147;
        auVar281._12_4_ = (int)((ulonglong)dVar311 >> 0x20);
        auVar137._8_4_ = SUB84(dVar217,0);
        auVar137._0_8_ = dVar147;
        auVar137._12_4_ = uVar318;
        auVar166 = blendpd(auVar137,auVar302,2);
        auVar138._0_8_ = auVar166._0_8_ * dVar301 - auVar65._0_8_ * auVar302._0_8_;
        auVar138._8_8_ = auVar166._8_8_ * dVar306 - auVar65._8_8_ * auVar302._8_8_;
        local_b38 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
        auVar166 = blendpd(auVar281,auVar138,2);
        dVar311 = dVar311 + dVar311;
        dVar219 = auVar138._0_8_ + auVar138._0_8_;
        auVar282._0_8_ = auVar166._0_8_ + auVar166._0_8_;
        auVar282._8_8_ = auVar166._8_8_ + auVar166._8_8_;
        auVar265._8_4_ = SUB84(dVar219,0);
        auVar265._0_8_ = dVar311;
        uVar318 = (undefined4)((ulonglong)dVar219 >> 0x20);
        auVar265._12_4_ = uVar318;
        auVar246._8_4_ = SUB84(dVar219,0);
        auVar246._0_8_ = dVar311;
        auVar246._12_4_ = uVar318;
        auVar65 = blendpd(auVar246,auVar282,2);
        auVar166 = blendpd(local_b38,local_b28,2);
        auVar266._0_8_ = auVar265._8_8_ * local_b38._0_8_ - local_b38._8_8_ * dVar311;
        auVar266._8_8_ = auVar282._0_8_ * local_b38._8_8_ - dVar301 * dVar219;
        auVar247._0_8_ = auVar65._0_8_ * dVar301 - auVar166._0_8_ * auVar282._0_8_;
        auVar247._8_8_ = auVar65._8_8_ * dVar306 - auVar166._8_8_ * auVar282._8_8_;
        local_b18 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
        dStack_b10 = (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
        auVar139._8_4_ = SUB84(auVar266._8_8_,0);
        auVar139._0_8_ = auVar266._0_8_;
        auVar139._12_4_ = (int)((ulonglong)auVar266._8_8_ >> 0x20);
        auVar166 = blendpd(auVar266,auVar247,2);
        local_b08 = (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[0];
        dStack_b00 = (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[1];
        local_1060._0_8_ = dVar311 * dVar306 + dVar147 + auVar139._8_8_ + local_b18;
        local_1060._8_8_ = dVar219 * dVar306 + dVar217 + auVar247._0_8_ + dStack_b10;
        local_1060._s_0.Z = auVar282._0_8_ * dVar306 + auVar302._0_8_ + auVar166._0_8_ + local_b08;
        local_618 = local_c80;
        dStack_610 = dStack_c78;
        local_608 = local_c70;
        local_5c8 = local_b28;
        local_5b8 = local_5d8;
        local_5a8 = local_b28;
        FAnimInstanceProxy::AnimDrawDebugSphere
                  (((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy,
                   (TVector<double> *)&local_1060._s_0,fVar54,0x10,&FColor::Blue,false,fVar317,0.0,
                   SDPG_World);
        FVar49 = extraout_RAX_00;
      }
      uVar35 = (ulonglong)uVar299;
      pFVar47 = pFVar47 + 0xb0;
      pFVar37 = pFVar37 + 0xb0;
    }
  }
  if ((FVar45.Data)->bShowDebug != 0) {
    GetFootIKCentroid((TVector<double> *)&local_1048._s_0,
                      &((FAnimNode_SlopeWarping *)FVar45.Data)->FeetData);
    pFVar7 = ((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy;
    auVar166 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.ZW.m128d_f64;
    dVar306 = auVar166._0_8_;
    dVar232 = local_1048._s_0.X * (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar250 = local_1048._s_0.Y * (pFVar7->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar318 = (undefined4)((ulonglong)dVar250 >> 0x20);
    dVar147 = local_1048._s_0.Z * (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar217 = (pFVar7->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar65 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
    auVar303._8_4_ = SUB84(dVar250,0);
    auVar303._0_8_ = dVar232;
    auVar303._12_4_ = uVar318;
    dVar311 = auVar166._8_8_;
    auVar156 = blendpd(auVar65,auVar166,2);
    auVar304._0_8_ = auVar303._8_8_ * auVar65._0_8_ - auVar65._8_8_ * dVar232;
    auVar304._8_8_ = dVar147 * auVar65._8_8_ - dVar306 * dVar250;
    auVar267._8_4_ = SUB84(auVar304._8_8_,0);
    auVar267._0_8_ = auVar304._0_8_;
    auVar267._12_4_ = (int)((ulonglong)auVar304._8_8_ >> 0x20);
    auVar140._8_4_ = SUB84(dVar250,0);
    auVar140._0_8_ = dVar232;
    auVar140._12_4_ = uVar318;
    auVar11._8_4_ = SUB84(dVar217,0);
    auVar11._0_8_ = dVar147;
    auVar11._12_4_ = (int)((ulonglong)dVar217 >> 0x20);
    auVar65 = blendpd(auVar140,auVar11,2);
    auVar141._0_8_ = auVar65._0_8_ * dVar306 - auVar156._0_8_ * dVar147;
    auVar141._8_8_ = auVar65._8_8_ * dVar311 - auVar156._8_8_ * dVar217;
    auVar65 = *(undefined1 (*) [16])(pFVar7->ComponentTransform).Rotation.XY.m128d_f64;
    auVar156 = blendpd(auVar304,auVar141,2);
    dVar217 = auVar267._8_8_ + auVar267._8_8_;
    dVar301 = auVar141._0_8_ + auVar141._0_8_;
    auVar305._0_8_ = auVar156._0_8_ + auVar156._0_8_;
    auVar305._8_8_ = auVar156._8_8_ + auVar156._8_8_;
    auVar248._8_4_ = SUB84(dVar301,0);
    auVar248._0_8_ = dVar217;
    uVar318 = (undefined4)((ulonglong)dVar301 >> 0x20);
    auVar248._12_4_ = uVar318;
    auVar230._8_4_ = SUB84(dVar301,0);
    auVar230._0_8_ = dVar217;
    auVar230._12_4_ = uVar318;
    auVar156 = blendpd(auVar230,auVar305,2);
    auVar249._0_8_ = auVar248._8_8_ * auVar65._0_8_ - auVar65._8_8_ * dVar217;
    auVar249._8_8_ = auVar305._0_8_ * auVar65._8_8_ - dVar306 * dVar301;
    auVar166 = blendpd(auVar65,auVar166,2);
    auVar231._0_8_ = auVar156._0_8_ * dVar306 - auVar166._0_8_ * auVar305._0_8_;
    auVar231._8_8_ = auVar156._8_8_ * dVar311 - auVar166._8_8_ * auVar305._8_8_;
    auVar142._8_4_ = SUB84(auVar249._8_8_,0);
    auVar142._0_8_ = auVar249._0_8_;
    auVar142._12_4_ = (int)((ulonglong)auVar249._8_8_ >> 0x20);
    auVar166 = blendpd(auVar249,auVar231,2);
    local_1030._s_0.X =
         dVar217 * dVar311 + dVar232 + auVar142._8_8_ +
         (pFVar7->ComponentTransform).Translation.XY.m128d_f64[0];
    local_1030._s_0.Y =
         dVar301 * dVar311 + dVar250 + auVar231._0_8_ +
         (pFVar7->ComponentTransform).Translation.XY.m128d_f64[1];
    local_1030._s_0.Z =
         auVar305._0_8_ * dVar311 + dVar147 + auVar166._0_8_ +
         (pFVar7->ComponentTransform).Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugSphere
              (((FAnimNode_SlopeWarping *)FVar45.Data)->MyAnimInstanceProxy,
               (TVector<double> *)&local_1030._s_0,fVar54,4,&FColor::Blue,false,fVar317,0.0,
               SDPG_World);
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            (*(FBoneTransform **)FVar41,*(int *)((longlong)FVar41 + 8),local_14b7,
             (FCompareBoneTransformIndex *)&local_14b8);
  ((FAnimNode_SlopeWarping *)FVar45.Data)->CachedDeltaTime = 0.0;
  if ((local_13c8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13c8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13c8 & 4) != 0) {
    FThreadStats::AddMessage(local_13d0,CycleScopeEnd);
  }
  return;
}

// GatherDebugData @ 14a727c50

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
FAnimNode_SlopeWarping::GatherDebugData(FAnimNode_SlopeWarping *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping,(UObject *)pUVar1,
                         L"AnimNode_SlopeWarping");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_SlopeWarping.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// GetFloorNormalFromMovementComponent @ 14a729730

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

TVector<double> * __thiscall
FAnimNode_SlopeWarping::GetFloorNormalFromMovementComponent
          (FAnimNode_SlopeWarping *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  double dVar2;
  UCharacterMovementComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  double *pdVar8;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined8 local_28;
  double local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (this->MyMovementComponent == (UCharacterMovementComponent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MyMovementComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                       ,0x70,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pUVar3 = this->MyMovementComponent;
  if ((pUVar3->CurrentFloor).bBlockingHit == 0) {
    pdVar8 = (double *)&local_38;
    uVar1 = *(undefined8 *)((longlong)&(this->GravityDir).field0_0x0 + 0x10);
    local_38 = *(uint *)&(this->GravityDir).field0_0x0 ^
               (uint)__xmm_80000000000000008000000000000000;
    uStack_34 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 4) ^
                __xmm_80000000000000008000000000000000._4_4_;
    uStack_30 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 8) ^ _UNK_15066df78;
    uStack_2c = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    local_28 = CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  }
  else {
    pdVar8 = &local_20;
    local_20 = *(double *)&(pUVar3->CurrentFloor).HitResult.ImpactNormal;
    uStack_18 = *(undefined8 *)&(pUVar3->CurrentFloor).HitResult.ImpactNormal.field_0x8;
    local_10 = *(undefined8 *)&(pUVar3->CurrentFloor).HitResult.ImpactNormal.field_0x10;
  }
  dVar5 = pdVar8[1];
  dVar2 = pdVar8[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetSmoothedFloorInfo @ 14a72aac0

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
FAnimNode_SlopeWarping::GetSmoothedFloorInfo
          (FAnimNode_SlopeWarping *this,FCSPose<FCompactPose> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined1 *puVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  uchar uVar5;
  USkeletalMeshComponent *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined4 uVar14;
  bool bVar15;
  TVector<double> *pTVar16;
  TVector<double> *pTVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  double dVar22;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uVar23;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 in_XMM2_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TVector<double>_u_0 local_1b8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  TVector<double>_u_0 local_170;
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  double local_118;
  TVector<double> local_110;
  TVector<double> local_f8 [8];
  
  if ((this->MyMovementComponent == (UCharacterMovementComponent *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("MyMovementComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0xae,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->MySkelMeshComponent == (USkeletalMeshComponent *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("MySkelMeshComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0xaf,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar6 = this->MySkelMeshComponent;
  pTVar16 = &this->ActorLocation;
  local_140._0_8_ = pUVar6->_padding_;
  local_140._8_8_ = pUVar6->_padding_;
  local_130 = (double)pUVar6->_padding_;
  if ((this->bFloorSmoothingInitialized == 0) ||
     (auVar11._4_8_ = in_XMM2_Qb, auVar11._0_4_ = (int)((ulonglong)local_140._0_8_ >> 0x20),
     auVar25._0_8_ = auVar11._0_8_ << 0x20, auVar25._8_4_ = (int)local_140._8_8_,
     auVar25._12_4_ = (int)((ulonglong)local_140._8_8_ >> 0x20),
     dVar36 = auVar25._8_8_ - (this->ActorLocation).field0_0x0._s_0.Y,
     dVar22 = (double)local_140._0_8_ - (pTVar16->field0_0x0)._s_0.X,
     fVar2 = this->MyMovementComponent->NetworkNoSmoothUpdateDistance,
     (double)(fVar2 * fVar2) < dVar36 * dVar36 + dVar22 * dVar22)) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  uVar5 = (this->MyMovementComponent->MovementMode).Value;
  if (((uVar5 == '\x01') || (uVar5 == '\x02')) &&
     ((this->MyMovementComponent->CurrentFloor).bBlockingHit != 0)) {
    bVar19 = 1;
  }
  else {
    bVar19 = 0;
  }
  local_148 = (this->ActorLocation).field0_0x0._s_0.Z;
  dVar22 = (pTVar16->field0_0x0)._s_0.X;
  dVar36 = (this->ActorLocation).field0_0x0._s_0.Y;
  *(undefined1 (*) [16])&pTVar16->field0_0x0 = local_140;
  (this->ActorLocation).field0_0x0._s_0.Z = local_130;
  if (((this->bFloorSmoothingInitialized == 0) && (this->bFloorSmoothingInitialized == bVar18)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFloorSmoothingInitialized || (bFloorSmoothingInitialized != bJustTeleported)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0xbd,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar21 = __xmm_80000000000000008000000000000000._4_4_;
  uVar20 = (uint)__xmm_80000000000000008000000000000000;
  uVar48 = *(undefined4 *)&this->field_0x2ac;
  if (bVar18 == 0) {
    if (bVar19 == 0) {
      if (this->bShowDebug != 0) {
        ::FString::PrintfImpl(&local_1d8,L"SlopeWarping NOT ON GROUND");
        FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                  (this->MyAnimInstanceProxy,&local_1d8,&FColor::Red,
                   &UE::Math::TVector2<double>::UnitVector,SDPG_World);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
      }
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = (double)uVar3;
      (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar3 = *(undefined8 *)&(this->GravityDir).field0_0x0;
      uVar44 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 8);
      uVar33 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0xc);
      uVar34 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0x10);
      uVar35 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0x14);
      (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar21,(uint)uVar3 ^ uVar20);
      uVar33 = uVar33 ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar34 = uVar34 ^ _UNK_15066df78;
      uVar35 = uVar35 ^ _UNK_15066df7c;
      *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 8) =
           uVar44 ^ (uint)__xmm_80000000000000008000000000000000;
      *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0xc) = uVar33;
      *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0x10) = uVar34;
      *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0x14) = uVar35;
    }
    else {
      if (ZPULL(uVar48,3,1) != 0) {
        GetFloorNormalFromMovementComponent(this,(TVector<double> *)&local_1b8._s_0);
        dVar4 = (this->GravityDir).field0_0x0._s_0.X;
        dVar38 = (this->GravityDir).field0_0x0._s_0.Y;
        dVar49 = (this->GravityDir).field0_0x0._s_0.Z;
        dVar37 = dVar38 * local_1b8._s_0.Y + dVar4 * local_1b8._s_0.X + dVar49 * local_1b8._s_0.Z;
        if ((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3ee4f8b580000000) {
          dVar37 = (this->ActorLocation).field0_0x0._s_0.X;
          dVar56 = (this->ActorLocation).field0_0x0._s_0.Y;
          local_118 = (this->ActorLocation).field0_0x0._s_0.Z;
        }
        else {
          dVar37 = (this->ActorLocation).field0_0x0._s_0.X;
          dVar56 = (this->ActorLocation).field0_0x0._s_0.Y;
          local_118 = (this->ActorLocation).field0_0x0._s_0.Z;
          dVar22 = ((dVar36 - dVar56) * local_1b8._s_0.Y + (dVar22 - dVar37) * local_1b8._s_0.X +
                   (local_148 - local_118) * local_1b8._s_0.Z) /
                   (dVar38 * local_1b8._s_0.Y + dVar4 * local_1b8._s_0.X + dVar49 * local_1b8._s_0.Z
                   );
          dVar37 = dVar22 * dVar4 + dVar37;
          dVar56 = dVar22 * dVar38 + dVar56;
          local_118 = dVar22 * dVar49 + local_118;
        }
        dVar37 = (this->ActorLocation).field0_0x0._s_0.X - dVar37;
        dVar56 = (this->ActorLocation).field0_0x0._s_0.Y - dVar56;
        local_118 = (this->ActorLocation).field0_0x0._s_0.Z - local_118;
        uVar44 = SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar33 = (uint)((ulonglong)dVar37 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar34 = SUB84(dVar56,0);
        uVar35 = (uint)((ulonglong)dVar56 >> 0x20);
        if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar33,uVar44) &&
              (double)CONCAT44(uVar33,uVar44) != __real_3f1a36e2e0000000) ||
            (__real_3f1a36e2e0000000 <=
             (double)CONCAT44(uVar35 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar34 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) &&
             (double)CONCAT44(uVar35 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              uVar34 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) !=
             __real_3f1a36e2e0000000)) ||
           (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)local_118 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_118,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
          pUVar6 = this->MySkelMeshComponent;
          auVar57._8_4_ = uVar34;
          auVar57._0_8_ = dVar37;
          auVar57._12_4_ = uVar35;
          auVar24._8_4_ = uVar34;
          auVar24._0_8_ = dVar37;
          auVar24._12_4_ = uVar35;
          dVar22 = (double)pUVar6->_padding_ *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar36 = (double)pUVar6->_padding_ *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar4 = (double)pUVar6->_padding_ *
                  GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar38 = (double)pUVar6->_padding_ *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar48 = (undefined4)((ulonglong)dVar38 >> 0x20);
          auVar47._8_8_ = 0;
          auVar47._0_8_ = local_118;
          auVar25 = blendpd(auVar24,auVar47,2);
          auVar45._8_4_ = SUB84(dVar36,0);
          auVar45._0_8_ = dVar22;
          auVar45._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          auVar29._8_4_ = SUB84(dVar38,0);
          auVar29._0_8_ = dVar4;
          auVar29._12_4_ = uVar48;
          auVar29 = blendpd(auVar45,auVar29,2);
          auVar53._8_4_ = SUB84(dVar38,0);
          auVar53._0_8_ = dVar4;
          auVar53._12_4_ = uVar48;
          auVar58._0_8_ = auVar57._8_8_ * dVar22 - dVar36 * dVar37;
          auVar58._8_8_ = local_118 * dVar36 - dVar4 * dVar56;
          auVar50._8_4_ = SUB84(auVar58._8_8_,0);
          auVar50._0_8_ = auVar58._0_8_;
          auVar50._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
          auVar26._0_8_ = auVar25._0_8_ * dVar4 - auVar29._0_8_ * local_118;
          auVar26._8_8_ = auVar25._8_8_ * dVar38 - auVar29._8_8_ * 0.0;
          auVar25 = blendpd(auVar58,auVar26,2);
          dVar49 = auVar50._8_8_ + auVar50._8_8_;
          dVar52 = auVar26._0_8_ + auVar26._0_8_;
          auVar59._0_8_ = auVar25._0_8_ + auVar25._0_8_;
          auVar59._8_8_ = auVar25._8_8_ + auVar25._8_8_;
          auVar39._8_4_ = SUB84(dVar52,0);
          auVar39._0_8_ = dVar49;
          uVar48 = (undefined4)((ulonglong)dVar52 >> 0x20);
          auVar39._12_4_ = uVar48;
          auVar27._8_4_ = SUB84(dVar52,0);
          auVar27._0_8_ = dVar49;
          auVar27._12_4_ = uVar48;
          auVar25 = blendpd(auVar27,auVar59,2);
          auVar40._0_8_ = auVar39._8_8_ * dVar22 - dVar49 * dVar36;
          auVar40._8_8_ = auVar59._0_8_ * dVar36 - dVar52 * dVar4;
          auVar28._0_8_ = auVar25._0_8_ * dVar4 - auVar59._0_8_ * auVar29._0_8_;
          auVar28._8_8_ = auVar25._8_8_ * dVar38 - auVar59._8_8_ * auVar29._8_8_;
          auVar25 = blendpd(auVar40,auVar28,2);
          local_170._s_0.X = dVar49 * auVar53._8_8_ + dVar37 + auVar40._8_8_;
          local_170._s_0.Y = dVar52 * dVar38 + dVar56 + auVar28._0_8_;
          local_170._s_0.Z = auVar59._0_8_ * auVar53._8_8_ + local_118 + auVar25._0_8_;
          *(double *)&(this->FloorOffsetInterpolator).field_0x30 =
               *(double *)&(this->FloorOffsetInterpolator).field_0x30 - local_170._s_0.X;
          auVar12._4_8_ = auVar25._8_8_;
          auVar12._0_4_ = (int)((ulonglong)local_170._s_0.X >> 0x20);
          auVar41._0_8_ = auVar12._0_8_ << 0x20;
          auVar41._8_4_ = SUB84(local_170._s_0.Y,0);
          auVar41._12_4_ = (int)((ulonglong)local_170._s_0.Y >> 0x20);
          *(double *)&(this->FloorOffsetInterpolator).field_0x40 =
               *(double *)&(this->FloorOffsetInterpolator).field_0x40 - local_170._s_0.Z;
          *(double *)&(this->FloorOffsetInterpolator).field_0x38 =
               *(double *)&(this->FloorOffsetInterpolator).field_0x38 - auVar41._8_8_;
          dVar22 = (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y;
          (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X =
               (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X - local_170._s_0.X;
          dVar36 = (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z;
          (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = dVar22 - auVar41._8_8_;
          (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z = dVar36 - local_170._s_0.Z;
          if (this->bShowDebug != 0) {
            UE::Math::TVector<double>::ToCompactString
                      ((TVector<double> *)&local_170._s_0,&local_1a0);
            ::FString::PrintfImpl(&local_1e8,L"CapsuleMoveOffset: %s");
            if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
            }
            FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                      (this->MyAnimInstanceProxy,&local_1e8,&FColor::Red,
                       &UE::Math::TVector2<double>::UnitVector,SDPG_World);
            if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      SetWorldSpaceTargetFloorInfoFromMovementComponent(this);
    }
  }
  else {
    *(uint *)&this->field_0x2ac = uVar48 | 0x20;
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = (double)uVar3;
    (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar22 = (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y;
    *(double *)&(this->FloorOffsetInterpolator).field_0x30 =
         (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.X;
    *(double *)&(this->FloorOffsetInterpolator).field_0x38 = dVar22;
    *(double *)&(this->FloorOffsetInterpolator).field_0x40 =
         (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x48 = 0;
    *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x50 = 0;
    *(undefined8 *)&(this->FloorOffsetInterpolator).field_0x58 = 0;
    (this->FloorOffsetInterpolator).field_0x9 = 0;
    *(undefined4 *)&(this->FloorOffsetInterpolator).field_0xc = 0;
    uVar3 = *(undefined8 *)&(this->GravityDir).field0_0x0;
    uVar44 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 8);
    uVar33 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0xc);
    uVar34 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0x10);
    uVar35 = *(uint *)((longlong)&(this->GravityDir).field0_0x0 + 0x14);
    (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar21,(uint)uVar3 ^ uVar20);
    uVar33 = uVar33 ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar34 = uVar34 ^ _UNK_15066df78;
    uVar35 = uVar35 ^ _UNK_15066df7c;
    *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 8) =
         uVar44 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0xc) = uVar33;
    *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0x10) = uVar34;
    *(uint *)((longlong)&(this->TargetFloorNormalWorldSpace).field0_0x0 + 0x14) = uVar35;
    dVar22 = (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y;
    *(double *)&(this->FloorNormalInterpolator).field_0x30 =
         (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X;
    *(double *)&(this->FloorNormalInterpolator).field_0x38 = dVar22;
    *(double *)&(this->FloorNormalInterpolator).field_0x40 =
         (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z;
    *(undefined8 *)&(this->FloorNormalInterpolator).field_0x48 = 0;
    *(undefined8 *)&(this->FloorNormalInterpolator).field_0x50 = 0;
    *(undefined8 *)&(this->FloorNormalInterpolator).field_0x58 = 0;
    (this->FloorNormalInterpolator).field_0x9 = 0;
    *(undefined4 *)&(this->FloorNormalInterpolator).field_0xc = 0;
  }
  this->bWasOnGround = bVar19;
  bVar15 = FRK4SpringInterpolator<UE::Math::TVector<double>_>::IsPositionEqualTo
                     ((FRK4SpringInterpolator<UE::Math::TVector<double>_> *)
                      &this->FloorNormalInterpolator,&this->TargetFloorNormalWorldSpace);
  if (!bVar15) {
    pTVar16 = FRK4SpringInterpolator<UE::Math::TVector<double>_>::Update
                        ((FRK4SpringInterpolator<UE::Math::TVector<double>_> *)
                         &this->FloorNormalInterpolator,&local_110,
                         &this->TargetFloorNormalWorldSpace,&this->CachedDeltaTime);
    dVar22 = (pTVar16->field0_0x0)._s_0.X;
    dVar36 = (pTVar16->field0_0x0)._s_0.Y;
    dVar4 = (pTVar16->field0_0x0)._s_0.Z;
    dVar38 = dVar36 * dVar36 + dVar22 * dVar22 + dVar4 * dVar4;
    if (dVar38 == __real_3ff0000000000000) {
      uVar3 = (pTVar16->field0_0x0)._s_0.X;
      uVar13 = *(double *)((longlong)&pTVar16->field0_0x0 + 8);
      uVar23 = (pTVar16->field0_0x0)._s_0.Z;
    }
    else {
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar38) {
        dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
        uVar3 = dVar22 * dVar38;
        uVar13 = dVar36 * dVar38;
        uVar23 = dVar4 * dVar38;
      }
    }
    auVar8._8_4_ = (int)uVar13;
    auVar8._0_8_ = uVar3;
    auVar8._12_4_ = (int)((ulonglong)uVar13 >> 0x20);
    *(undefined1 (*) [16])&(this->FloorNormalInterpolator).field_0x30 = auVar8;
    *(undefined8 *)&(this->FloorNormalInterpolator).field_0x40 = uVar23;
  }
  pTVar16 = &this->TargetFloorOffsetLocalSpace;
  auVar25 = *(undefined1 (*) [16])&(this->FloorNormalInterpolator).field_0x30;
  dVar22 = *(double *)&(this->FloorNormalInterpolator).field_0x40;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = dVar22;
  pUVar6 = this->MySkelMeshComponent;
  dVar52 = auVar25._8_8_;
  auVar29 = blendpd(auVar25,auVar60,2);
  dVar38 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar49 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar37 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar56 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar48 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar46._8_4_ = SUB84(dVar49,0);
  auVar46._0_8_ = dVar38;
  auVar46._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  auVar51._8_4_ = SUB84(dVar56,0);
  auVar51._0_8_ = dVar37;
  auVar51._12_4_ = uVar48;
  auVar10._8_4_ = SUB84(dVar56,0);
  auVar10._0_8_ = dVar37;
  auVar10._12_4_ = uVar48;
  auVar47 = blendpd(auVar46,auVar10,2);
  auVar54._0_8_ = dVar52 * dVar38 - dVar49 * auVar25._0_8_;
  auVar54._8_8_ = dVar22 * dVar49 - dVar37 * dVar52;
  auVar30._0_8_ = auVar29._0_8_ * dVar37 - auVar47._0_8_ * dVar22;
  auVar30._8_8_ = auVar29._8_8_ * dVar56 - auVar47._8_8_ * 0.0;
  auVar29 = blendpd(auVar54,auVar30,2);
  auVar55._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar55._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  dVar36 = auVar54._8_8_ + auVar54._8_8_;
  dVar4 = auVar30._0_8_ + auVar30._0_8_;
  uVar48 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar42._8_4_ = SUB84(dVar4,0);
  auVar42._0_8_ = dVar36;
  auVar42._12_4_ = uVar48;
  auVar31._8_4_ = SUB84(dVar4,0);
  auVar31._0_8_ = dVar36;
  auVar31._12_4_ = uVar48;
  auVar29 = blendpd(auVar31,auVar55,2);
  auVar43._0_8_ = auVar42._8_8_ * dVar38 - dVar36 * dVar49;
  auVar43._8_8_ = auVar55._0_8_ * dVar49 - dVar4 * dVar37;
  auVar32._0_8_ = auVar29._0_8_ * dVar37 - auVar55._0_8_ * auVar47._0_8_;
  auVar32._8_8_ = auVar29._8_8_ * dVar56 - auVar55._8_8_ * auVar47._8_8_;
  auVar29 = blendpd(auVar43,auVar32,2);
  dVar4 = dVar4 * dVar56 + dVar52 + auVar32._0_8_;
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = dVar36 * auVar51._8_8_ + auVar25._0_8_ + auVar43._8_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&param_2->field0_0x0 = auVar9;
  (param_2->field0_0x0)._s_0.Z = auVar55._0_8_ * auVar51._8_8_ + dVar22 + auVar29._0_8_;
  if (this->bUseCustomFloorOffset == 0) {
    dVar36 = (double)this->MaxStepHeight;
    dVar4 = dVar36 * (this->GravityDir).field0_0x0._s_0.Z;
    dVar38 = dVar36 * (this->GravityDir).field0_0x0._s_0.X;
    dVar36 = dVar36 * (this->GravityDir).field0_0x0._s_0.Y;
    uVar44 = SUB84(dVar4,0) ^ uVar20;
    uVar33 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar21;
    dVar22 = *(double *)((longlong)&(this->TargetFloorOffsetLocalSpace).field0_0x0 + 0x10);
    if (dVar22 <= (double)CONCAT44(uVar33,uVar44)) {
      uVar44 = SUB84(dVar22,0);
      uVar33 = (uint)((ulonglong)dVar22 >> 0x20);
    }
    dVar49 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar21,SUB84(dVar36,0) ^ uVar20);
    dVar22 = (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y;
    if (dVar22 <= dVar49) {
      dVar49 = dVar22;
    }
    dVar22 = (double)CONCAT44(uVar33,uVar44);
    if ((double)CONCAT44(uVar33,uVar44) <= dVar4) {
      dVar22 = dVar4;
    }
    uVar20 = SUB84(dVar38,0) ^ uVar20;
    uVar21 = (uint)((ulonglong)dVar38 >> 0x20) ^ uVar21;
    dVar4 = *(double *)&pTVar16->field0_0x0;
    if (dVar4 <= (double)CONCAT44(uVar21,uVar20)) {
      uVar20 = SUB84(dVar4,0);
      uVar21 = (uint)((ulonglong)dVar4 >> 0x20);
    }
    if (dVar49 <= dVar36) {
      dVar49 = dVar36;
    }
    dVar36 = (double)CONCAT44(uVar21,uVar20);
    if ((double)CONCAT44(uVar21,uVar20) <= dVar38) {
      dVar36 = dVar38;
    }
    (pTVar16->field0_0x0)._s_0.X = dVar36;
    (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Y = dVar49;
    (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z = dVar22;
    pTVar17 = FRK4SpringInterpolator<UE::Math::TVector<double>_>::Update
                        ((FRK4SpringInterpolator<UE::Math::TVector<double>_> *)
                         &this->FloorOffsetInterpolator,local_f8,pTVar16,&this->CachedDeltaTime);
    dVar22 = (pTVar17->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar22;
    (param_3->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
    if (this->bShowDebug != 0) {
      UE::Math::TVector<double>::ToCompactString(pTVar16,&local_180);
      UE::Math::TVector<double>::ToCompactString(param_3,&local_190);
      ::FString::PrintfImpl(&local_1c8,L"OutFloorOffset: %s, TargetFloorOffsetLocalSpace: %s");
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                (this->MyAnimInstanceProxy,&local_1c8,&FColor::Red,
                 &UE::Math::TVector2<double>::UnitVector,SDPG_World);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    dVar22 = (this->CustomFloorOffset).field0_0x0._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (this->CustomFloorOffset).field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar22;
    (param_3->field0_0x0)._s_0.Z = (this->CustomFloorOffset).field0_0x0._s_0.Z;
    dVar22 = (this->CustomFloorOffset).field0_0x0._s_0.Y;
    *(double *)&(this->FloorOffsetInterpolator).field_0x30 =
         (this->CustomFloorOffset).field0_0x0._s_0.X;
    *(double *)&(this->FloorOffsetInterpolator).field_0x38 = dVar22;
    *(double *)&(this->FloorOffsetInterpolator).field_0x40 =
         (this->CustomFloorOffset).field0_0x0._s_0.Z;
  }
  return;
}

// InitializeBoneReferences @ 14a72c410

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
FAnimNode_SlopeWarping::InitializeBoneReferences
          (FAnimNode_SlopeWarping *this,FBoneContainer *param_1)

{
  int *piVar1;
  TArray<FSlopeWarpingFootData,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  FBoneReference *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  FCompactPoseBoneIndex FVar10;
  FCompactPoseBoneIndex FVar11;
  int iVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  FBoneReference *this_00;
  FBoneReference *this_01;
  undefined1 auStackY_178 [32];
  undefined1 local_128 [4];
  FCompactPoseBoneIndex local_124;
  FCompactPoseBoneIndex local_120;
  uint local_11c;
  FBoneReference *local_118;
  undefined1 local_110 [8];
  FCompactPoseBoneIndex local_108 [2];
  FBoneReference *local_100;
  int local_f8;
  FCompactPoseBoneIndex FStack_f4;
  FCompactPoseBoneIndex FStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [24];
  ForAnyElementType FStack_80;
  undefined8 local_78;
  ForAnyElementType FStack_70;
  undefined8 local_68;
  longlong lStack_60;
  FBoneReference *local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FBoneReference::Initialize(&this->IKFootRootBone,param_1);
  FBoneReference::Initialize(&this->PelvisBone,param_1);
  pTVar2 = &this->FeetData;
  piVar1 = &(this->FeetData).ArrayMax;
  (this->FeetData).ArrayNum = 0;
  if ((this->FeetData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if ((this->MySkelMeshComponent == (USkeletalMeshComponent *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MySkelMeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                         ,0x2c8,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_11c = (this->FeetDefinitions).ArrayNum;
  uVar13 = (ulonglong)(int)local_11c;
  this_01 = (FBoneReference *)(this->FeetDefinitions).AllocatorInstance.Data;
  local_100 = (FBoneReference *)((longlong)this_01 + uVar13 * 0x28);
  this_00 = this_01 + 1;
  while( true ) {
    pFVar6 = local_100;
    local_118 = this_00;
    if ((this->FeetDefinitions).ArrayNum != (int)uVar13) {
      local_128[0] = 0;
      `TCheckedPointerIterator<FSlopeWarpingFootDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (this_01 == pFVar6) break;
    FBoneReference::Initialize(this_01,param_1);
    FBoneReference::Initialize(this_00,param_1);
    local_f8._0_1_ = 0xff;
    local_f8._1_1_ = 0xff;
    local_f8._2_1_ = 0xff;
    local_f8._3_1_ = 0xff;
    FStack_f4._0_1_ = 0xff;
    FStack_f4._1_1_ = 0xff;
    FStack_f4._2_1_ = 0xff;
    FStack_f4._3_1_ = 0xff;
    FStack_f0 = (FCompactPoseBoneIndex)0xffffffff;
    local_58 = (FBoneReference *)0x0;
    local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
    ;
    local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
    ;
    local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20)
    ;
    local_b8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_b8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20)
    ;
    local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20)
    ;
    local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20)
    ;
    FVar10 = FBoneReference::GetCompactPoseIndex(this_01,(FBoneContainer *)local_110);
    local_f8 = *(undefined4 *)CONCAT44(extraout_var,FVar10);
    FVar10 = FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)(local_110 + 4));
    uVar3 = this_00[1].BoneName.ComparisonIndex.Value;
    local_124 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_00,FVar10);
    FStack_f4 = local_124;
    FVar11 = local_124;
    FVar10 = local_124;
    if (local_124 != (FCompactPoseBoneIndex)0xffffffff) {
      FBoneContainer::GetParentBoneIndex(param_1,&local_120);
      uVar5 = 1;
      FVar10 = local_124;
      local_124 = local_120;
      this_00 = local_118;
      if (1 < (int)uVar3) {
        uVar5 = uVar3;
        local_124 = local_120;
      }
      while ((local_120 = local_124, local_118 = this_00, 0 < (int)uVar5 &&
             (local_124 != (FCompactPoseBoneIndex)0xffffffff))) {
        FVar11 = FBoneContainer::GetParentBoneIndex(param_1,local_108);
        uVar5 = uVar5 - 1;
        FVar10 = local_124;
        this_00 = local_118;
        local_124 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_01,FVar11);
      }
      FVar11 = FStack_f4;
    }
    local_124 = FVar10;
    FStack_f0 = local_124;
    if (((local_f8 != -1) && (FVar11 != (FCompactPoseBoneIndex)0xffffffff)) &&
       (local_124 != (FCompactPoseBoneIndex)0xffffffff)) {
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      local_58 = this_01;
      if (((pFVar14 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar14 + (longlong)*piVar1 * 0xb0)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = (this->FeetData).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10b0,&pTVar2->AllocatorInstance,piVar1);
      }
      auVar8 = local_d8;
      auVar7 = local_e8;
      (this->FeetData).ArrayNum = iVar12 + 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0xb0;
      *(undefined8 *)pFVar14 = _local_f8;
      *(ulonglong *)(pFVar14 + 8) = CONCAT44(uStack_ec,FStack_f0);
      *(undefined8 *)(pFVar14 + 0x10) = local_e8._0_8_;
      *(undefined4 *)(pFVar14 + 0x18) = local_e8._8_4_;
      *(undefined4 *)(pFVar14 + 0x1c) = local_e8._12_4_;
      *(undefined4 *)(pFVar14 + 0x20) = local_d8._0_4_;
      *(undefined4 *)(pFVar14 + 0x24) = local_d8._4_4_;
      *(undefined4 *)(pFVar14 + 0x28) = local_d8._8_4_;
      *(undefined4 *)(pFVar14 + 0x2c) = local_d8._12_4_;
      *(undefined8 *)(pFVar14 + 0x30) = local_c8._0_8_;
      *(undefined8 *)(pFVar14 + 0x38) = local_c8._8_8_;
      *(undefined8 *)(pFVar14 + 0x40) = local_b8._0_8_;
      *(undefined8 *)(pFVar14 + 0x48) = local_b8._8_8_;
      *(undefined8 *)(pFVar14 + 0x50) = local_a8._0_8_;
      *(undefined8 *)(pFVar14 + 0x58) = local_a8._8_8_;
      *(undefined8 *)(pFVar14 + 0x60) = local_98._0_8_;
      *(undefined8 *)(pFVar14 + 0x68) = local_98._8_8_;
      *(undefined8 *)(pFVar14 + 0x70) = local_98._16_8_;
      *(FScriptContainerElement **)(pFVar14 + 0x78) = FStack_80.Data;
      *(undefined8 *)(pFVar14 + 0x80) = local_78;
      *(FScriptContainerElement **)(pFVar14 + 0x88) = FStack_70.Data;
      *(undefined8 *)(pFVar14 + 0x90) = local_68;
      *(longlong *)(pFVar14 + 0x98) = lStack_60;
      *(FBoneReference **)(pFVar14 + 0xa0) = local_58;
      *(longlong *)(pFVar14 + 0xa8) = lStack_50;
      local_e8 = auVar7;
      local_d8 = auVar8;
    }
    uVar13 = (ulonglong)local_11c;
    this_01 = (FBoneReference *)&this_01[2].field_0x8;
    this_00 = (FBoneReference *)&this_00[2].field_0x8;
  }
  return;
}

// Initialize_AnyThread @ 14a72c810

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
FAnimNode_SlopeWarping::Initialize_AnyThread
          (FAnimNode_SlopeWarping *this,FAnimationInitializeContext *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  USkeletalMeshComponent *pUVar5;
  UClass *pUVar6;
  UCharacterMovementComponent *pUVar7;
  UCharacterMovementComponent *pUVar8;
  uint uVar10;
  uint uVar11;
  UCharacterMovementComponent *pUVar9;
  
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  pUVar9 = (UCharacterMovementComponent *)0x0;
  pUVar8 = (UCharacterMovementComponent *)0x0;
  this->MyAnimInstanceProxy = *(FAnimInstanceProxy **)param_1;
  if (*(FAnimInstanceProxy **)param_1 == (FAnimInstanceProxy *)0x0) {
    this->MySkelMeshComponent = (USkeletalMeshComponent *)0x0;
    goto LAB_14a72c896;
  }
  pUVar5 = FAnimInstanceProxy::GetSkelMeshComponent(*(FAnimInstanceProxy **)param_1);
  this->MySkelMeshComponent = pUVar5;
  pUVar8 = pUVar9;
  if (pUVar5 == (USkeletalMeshComponent *)0x0) goto LAB_14a72c896;
  pUVar7 = (UCharacterMovementComponent *)pUVar5->_padding_;
  if (pUVar7 == (UCharacterMovementComponent *)0x0) {
LAB_14a72c87e:
    pUVar7 = pUVar9;
  }
  else {
    pUVar6 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) goto LAB_14a72c87e;
  }
  if (pUVar7 != (UCharacterMovementComponent *)0x0) {
    pUVar8 = (UCharacterMovementComponent *)(pUVar7->Acceleration).field0_0x0._s_0.Z;
  }
LAB_14a72c896:
  uVar3 = __xmm_80000000000000008000000000000000;
  this->MyMovementComponent = pUVar8;
  uVar1 = *(undefined8 *)&(this->GravityDir).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(this->GravityDir).field0_0x0 + 8);
  uVar10 = (uint)uVar3;
  uVar11 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar3 = *(undefined8 *)((longlong)&(this->GravityDir).field0_0x0 + 0x10);
  *(uint *)&(this->FloorNormalInterpolator).field_0x30 = (uint)uVar1 ^ uVar10;
  *(uint *)&(this->FloorNormalInterpolator).field_0x34 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar11;
  *(uint *)&(this->FloorNormalInterpolator).field_0x38 = (uint)uVar2 ^ uVar10;
  *(uint *)&(this->FloorNormalInterpolator).field_0x3c = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar11;
  *(ulonglong *)&(this->FloorNormalInterpolator).field_0x40 =
       CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar11,(uint)uVar3 ^ uVar10);
  return;
}

// IsValidToEvaluate @ 14a72c9c0

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
FAnimNode_SlopeWarping::IsValidToEvaluate
          (FAnimNode_SlopeWarping *this,USkeleton *param_1,FBoneContainer *param_2)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  FCompactPoseBoneIndex FVar3;
  longlong lVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  pTVar1 = CVarSlopeWarpingEnable.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar4 = 4;
      goto LAB_14a72c9f7;
    }
  }
  lVar4 = 0;
LAB_14a72c9f7:
  if ((this->MyMovementComponent != (UCharacterMovementComponent *)0x0) &&
     (*(int *)((longlong)pTVar1->ShadowedValue + lVar4) == 1)) {
    FVar3 = FBoneReference::GetCompactPoseIndex
                      (&this->IKFootRootBone,(FBoneContainer *)&stack0x00000008);
    if (*(int *)CONCAT44(extraout_var,FVar3) != -1) {
      FVar3 = FBoneReference::GetCompactPoseIndex
                        (&this->PelvisBone,(FBoneContainer *)&stack0x00000020);
      if ((*(int *)CONCAT44(extraout_var_00,FVar3) != -1) && (0 < (this->FeetData).ArrayNum)) {
        return true;
      }
    }
  }
  return false;
}

// SetWorldSpaceTargetFloorInfoFromMovementComponent @ 14a730050

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
FAnimNode_SlopeWarping::SetWorldSpaceTargetFloorInfoFromMovementComponent
          (FAnimNode_SlopeWarping *this)

{
  FFindFloorResult *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  USkeletalMeshComponent *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double dVar14;
  bool bVar15;
  TVector<double> *pTVar16;
  UClass *pUVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined4 uVar50;
  TVector<double>_u_0 local_218;
  TVector<double> local_200;
  TVector<double>_u_0 local_1e8;
  FString local_1d0;
  TVector<double>_u_0 local_1c0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TVector<double>_u_0 local_168 [14];
  
  pTVar16 = GetFloorNormalFromMovementComponent(this,&local_200);
  pUVar6 = this->MySkelMeshComponent;
  dVar30 = (pTVar16->field0_0x0)._s_0.Y;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X = (pTVar16->field0_0x0)._s_0.X;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y = dVar30;
  (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
  if ((pUVar6 == (USkeletalMeshComponent *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("MySkelMeshComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0x78,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->MyMovementComponent == (UCharacterMovementComponent *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("MyMovementComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_SlopeWarping.cpp"
                          ,0x79,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  lVar20 = this->MySkelMeshComponent->_padding_;
  local_218._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_218._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_218._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_218._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_218._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  if (lVar20 == 0) goto LAB_14a730643;
  pUVar17 = Z_Construct_UClass_ACharacter_NoRegister();
  iVar5 = (int)pUVar17->_padding_;
  if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar5) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar17->_padding_)) goto LAB_14a730643;
  lVar20 = *(longlong *)(lVar20 + 0x1b8);
  if (lVar20 == 0) {
LAB_14a730194:
    lVar20 = 0;
  }
  else {
    pUVar17 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
    iVar5 = (int)pUVar17->_padding_;
    if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) + (longlong)iVar5 * 8)
        != &pUVar17->_padding_)) goto LAB_14a730194;
  }
  if (lVar20 != 0) {
    local_1e8._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    uVar19 = pFVar1->bBlockingHit;
    local_168[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_168[0]._0_8_ = local_1e8._s_0.X;
    local_168[0]._8_8_ =
         CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                  UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    if (uVar19 != 0) {
      lVar18 = 0x450;
      if (pFVar1->bLineTrace == 0) {
        lVar18 = 0x44c;
      }
      dVar30 = (double)*(float *)(&this->MyMovementComponent->field_0x0 + lVar18);
      local_168[0]._16_8_ = dVar30 * (this->GravityDir).field0_0x0._s_0.Z;
      local_168[0]._0_8_ = dVar30 * (this->GravityDir).field0_0x0._s_0.X;
      local_168[0]._8_8_ = dVar30 * (this->GravityDir).field0_0x0._s_0.Y;
    }
    dVar30 = 0.0;
    local_1e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar10 = (double)local_168[0]._0_8_ + local_218._s_0.X;
    dVar11 = (double)local_168[0]._16_8_ + local_218._s_0.Z;
    dVar45 = (double)local_168[0]._8_8_ + local_218._s_0.Y;
    local_200.field0_0x0._s_0.Z = (double)local_168[0]._16_8_;
    local_1e8._s_0.Y =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    if (uVar19 != 0) {
      dVar2 = (this->GravityDir).field0_0x0._s_0.X;
      dVar3 = (this->GravityDir).field0_0x0._s_0.Z;
      pUVar6 = this->MySkelMeshComponent;
      dVar14 = (double)pUVar6->_padding_;
      dVar30 = (double)pUVar6->_padding_;
      dVar32 = (double)pUVar6->_padding_;
      dVar12 = (double)((float)*(double *)(lVar20 + 0x240) * *(float *)(lVar20 + 0x568));
      dVar38 = (this->GravityDir).field0_0x0._s_0.Y;
      dVar4 = (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y;
      dVar31 = dVar4 * dVar38 + (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X * dVar2 +
               (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z * dVar3;
      dVar21 = dVar14;
      dVar25 = dVar30;
      local_200.field0_0x0._s_0.Z = dVar32;
      if (__real_3ee4f8b580000000 <
          (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar21 = (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X;
        dVar42 = (dVar14 + dVar2) - dVar14;
        dVar37 = (dVar30 + (this->GravityDir).field0_0x0._s_0.Y) - dVar30;
        dVar31 = (dVar32 + (this->GravityDir).field0_0x0._s_0.Z) - dVar32;
        dVar25 = (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z;
        dVar2 = (((dVar12 * dVar38 + *(double *)(lVar20 + 0x218)) - dVar30) * dVar4 +
                 ((dVar12 * dVar2 + *(double *)(lVar20 + 0x210)) - dVar14) * dVar21 +
                ((dVar12 * dVar3 + *(double *)(lVar20 + 0x220)) - dVar32) * dVar25) /
                (dVar42 * dVar21 + dVar37 * dVar4 + dVar31 * dVar25);
        dVar21 = dVar42 * dVar2 + dVar14;
        dVar25 = dVar37 * dVar2 + dVar30;
        local_200.field0_0x0._s_0.Z = dVar31 * dVar2 + dVar32;
      }
      local_1e8._s_0.Z = dVar32 - local_200.field0_0x0._s_0.Z;
      local_1e8._s_0.X = dVar14 - dVar21;
      dVar30 = dVar30 - dVar25;
      dVar10 = dVar10 + local_1e8._s_0.X;
      dVar11 = dVar11 + local_1e8._s_0.Z;
      dVar45 = dVar45 + dVar30;
      local_1e8._s_0.Y = dVar30;
    }
    auVar34 = *(undefined1 (*) [16])(lVar20 + 0x230);
    dVar2 = (this->GravityDir).field0_0x0._s_0.X;
    auVar13._4_8_ = dVar30;
    auVar13._0_4_ = auVar34._4_4_;
    auVar44._0_8_ = auVar13._0_8_ << 0x20;
    auVar44._8_4_ = auVar34._8_4_;
    auVar44._12_4_ = auVar34._12_4_;
    dVar30 = (this->GravityDir).field0_0x0._s_0.Y;
    dVar3 = (this->GravityDir).field0_0x0._s_0.Z;
    uVar26 = auVar34._0_4_;
    uVar27 = auVar34._4_4_;
    if (auVar44._8_8_ <= auVar34._0_8_) {
      uVar26 = auVar34._8_4_;
      uVar27 = auVar34._12_4_;
    }
    dVar38 = (double)((float)(double)CONCAT44(uVar27,uVar26) * *(float *)(lVar20 + 0x56c));
    dVar32 = dVar3 * (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Z +
             dVar2 * (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.X +
             dVar30 * (this->TargetFloorNormalWorldSpace).field0_0x0._s_0.Y +
             __real_3ff0000000000000;
    local_1c0._s_0.Z = dVar3 * dVar38 * dVar32;
    local_1c0._s_0.X = dVar2 * dVar38 * dVar32;
    local_1c0._s_0.Y = dVar30 * dVar38 * dVar32;
    local_218._s_0.Z = dVar11 + local_1c0._s_0.Z;
    local_218._s_0.X = dVar10 + local_1c0._s_0.X;
    local_218._s_0.Y = dVar45 + local_1c0._s_0.Y;
    if (this->bShowDebug != 0) {
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_218._s_0,&local_178);
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1c0._s_0,&local_188);
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_1e8._s_0,&local_198);
      UE::Math::TVector<double>::ToCompactString((TVector<double> *)&local_168[0]._s_0,&local_1a8);
      ::FString::PrintfImpl
                (&local_1d0,
                 L"DistToFloorOffset: %s, MeshToCapsuleBaseOffset: %s, CapsuleRadiusAgainstSlopeOffset: %s, WorldSpaceFloorOffset: %s"
                );
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
                (this->MyAnimInstanceProxy,&local_1d0,&FColor::Red,
                 &UE::Math::TVector2<double>::UnitVector,SDPG_World);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
    uVar26 = local_218._0_4_;
    uVar27 = local_218._4_4_;
    uVar49 = local_218._8_4_;
    uVar50 = local_218._12_4_;
  }
LAB_14a730643:
  pUVar6 = this->MySkelMeshComponent;
  auVar46._4_4_ = uVar27;
  auVar46._0_4_ = uVar26;
  auVar46._8_4_ = uVar49;
  auVar46._12_4_ = uVar50;
  auVar33._4_4_ = uVar27;
  auVar33._0_4_ = uVar26;
  auVar33._8_4_ = uVar49;
  auVar33._12_4_ = uVar50;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_218._s_0.Z;
  auVar34 = blendpd(auVar33,auVar9,2);
  dVar11 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar45 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = (double)pUVar6->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar43._8_4_ = SUB84(dVar45,0);
  auVar43._0_8_ = dVar11;
  auVar43._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
  auVar8._8_4_ = SUB84(dVar3,0);
  auVar8._0_8_ = dVar2;
  auVar8._12_4_ = uVar28;
  auVar44 = blendpd(auVar43,auVar8,2);
  auVar39._8_4_ = SUB84(dVar3,0);
  auVar39._0_8_ = dVar2;
  auVar39._12_4_ = uVar28;
  auVar22._8_4_ = SUB84(dVar2,0);
  auVar22._0_8_ = dVar45;
  auVar22._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar35._0_8_ = auVar34._0_8_ * dVar2 - auVar44._0_8_ * local_218._s_0.Z;
  auVar35._8_8_ = auVar34._8_8_ * dVar3 - auVar44._8_8_ * 0.0;
  auVar47._0_8_ = auVar46._8_8_ * dVar11 - dVar45 * (double)CONCAT44(uVar27,uVar26);
  auVar47._8_8_ = local_218._s_0.Z * dVar45 - auVar22._8_8_ * (double)CONCAT44(uVar50,uVar49);
  dVar30 = auVar47._8_8_ + auVar47._8_8_;
  dVar10 = auVar35._0_8_ + auVar35._0_8_;
  uVar28 = SUB84(dVar10,0);
  uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar34 = blendpd(auVar47,auVar35,2);
  auVar48._0_8_ = auVar34._0_8_ + auVar34._0_8_;
  auVar48._8_8_ = auVar34._8_8_ + auVar34._8_8_;
  auVar36._8_4_ = uVar28;
  auVar36._0_8_ = dVar30;
  auVar36._12_4_ = uVar29;
  auVar23._8_4_ = uVar28;
  auVar23._0_8_ = dVar30;
  auVar23._12_4_ = uVar29;
  auVar34 = blendpd(auVar23,auVar48,2);
  auVar40._8_4_ = uVar28;
  auVar40._0_8_ = dVar30;
  auVar40._12_4_ = uVar29;
  auVar41._0_8_ = auVar40._8_8_ * dVar11 - dVar30 * dVar45;
  auVar41._8_8_ = auVar48._0_8_ * dVar45 - dVar10 * dVar2;
  auVar24._0_8_ = auVar34._0_8_ * dVar2 - auVar48._0_8_ * auVar44._0_8_;
  auVar24._8_8_ = auVar34._8_8_ * dVar3 - auVar48._8_8_ * auVar44._8_8_;
  auVar44 = blendpd(auVar41,auVar24,2);
  dVar10 = auVar24._0_8_ + auVar36._8_8_ * dVar3 + (double)CONCAT44(uVar50,uVar49);
  auVar34._8_4_ = SUB84(dVar10,0);
  auVar34._0_8_ = auVar41._8_8_ + dVar30 * auVar39._8_8_ + (double)CONCAT44(uVar27,uVar26);
  auVar34._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&(this->TargetFloorOffsetLocalSpace).field0_0x0 = auVar34;
  (this->TargetFloorOffsetLocalSpace).field0_0x0._s_0.Z =
       auVar44._0_8_ + auVar48._0_8_ * auVar39._8_8_ + local_218._s_0.Z;
  return;
}

// UpdateInternal @ 14a731140

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
FAnimNode_SlopeWarping::UpdateInternal
          (FAnimNode_SlopeWarping *this,FAnimationUpdateContext *param_1)

{
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  this->CachedDeltaTime = param_1->DeltaTime + this->CachedDeltaTime;
  return;
}

// operator() @ 150552bf0

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::I]::<lambda_10>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483424>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483424>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150552c57;
    }
  }
  bVar2 = false;
LAB_150552c57:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150552c90

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::O]::<lambda_11>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483416>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483416>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150552cf7;
    }
  }
  bVar2 = false;
LAB_150552cf7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150552d30

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l155::<lambda_12>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483398>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString
              ((TTransform<double> *)(*(longlong *)this + 0x10),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483398>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150552d9b;
    }
  }
  bVar2 = false;
LAB_150552d9b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553010

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483741>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483741>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553077;
    }
  }
  bVar2 = false;
LAB_150553077:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505531b0

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l13::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483733>);
  if (bVar2) {
    UE::Math::TVector<double>::ToCompactString
              ((TVector<double> *)(*(longlong *)this + 0x180),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483733>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055321e;
    }
  }
  bVar2 = false;
LAB_15055321e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553250

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l21::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483722>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString
              ((TTransform<double> *)(*(longlong *)this + 0x10),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483722>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505532bb;
    }
  }
  bVar2 = false;
LAB_1505532bb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505532f0

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l30::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483691>);
  if (bVar2) {
    UE::Math::TVector<double>::ToCompactString(*(TVector<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483691>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553357;
    }
  }
  bVar2 = false;
LAB_150553357:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553390

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l33::<lambda_5>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483686>);
  if (bVar2) {
    UE::Math::TVector<double>::ToCompactString(*(TVector<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483686>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505533f7;
    }
  }
  bVar2 = false;
LAB_1505533f7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553430

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l39::<lambda_6>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483662>);
  if (bVar2) {
    ::FString::PrintfImpl(&local_18,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483662>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505534ba;
    }
  }
  bVar2 = false;
LAB_1505534ba:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505534f0

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l63::<lambda_7>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483615>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483615>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553557;
    }
  }
  bVar2 = false;
LAB_150553557:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553590

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'::__l119::<lambda_8>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483459>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483459>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505535f7;
    }
  }
  bVar2 = false;
LAB_1505535f7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150553630

bool __thiscall
`FAnimNode_SlopeWarping::EvaluateSkeletalControl_AnyThread'[::C]::<lambda_9>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4102456197389483436>);
  if (bVar2) {
    UE::Math::TTransform<double>::ToString(*(TTransform<double> **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4102456197389483436>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150553697;
    }
  }
  bVar2 = false;
LAB_150553697:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

