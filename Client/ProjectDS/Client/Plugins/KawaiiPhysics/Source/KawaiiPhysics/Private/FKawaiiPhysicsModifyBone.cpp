// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 3

// StaticStruct @ 14de3b3e0

UScriptStruct * __cdecl FKawaiiPhysicsModifyBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone,(UObject *)pUVar1,
                         L"KawaiiPhysicsModifyBone");
  }
  return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsModifyBone.OuterSingleton;
}

// FKawaiiPhysicsModifyBone @ 14de3d6b0

FKawaiiPhysicsModifyBone * __thiscall
FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone
          (FKawaiiPhysicsModifyBone *this,FKawaiiPhysicsModifyBone *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  double dVar4;
  undefined4 uVar5;
  FCompactPoseBoneIndex FVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = *(undefined4 *)&(param_1->BoneRef).field_0x8;
  FVar6 = (param_1->BoneRef).CachedCompactPoseIndex;
  pTVar1 = &this->ChildIndexs;
  (this->BoneRef).BoneName = (param_1->BoneRef).BoneName;
  *(undefined4 *)&(this->BoneRef).field_0x8 = uVar5;
  (this->BoneRef).CachedCompactPoseIndex = FVar6;
  this->ParentIndex = param_1->ParentIndex;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ChildIndexs).ArrayMax;
  iVar3 = (param_1->ChildIndexs).ArrayNum;
  _Src = (param_1->ChildIndexs).AllocatorInstance.Data;
  (this->ChildIndexs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  fVar7 = (param_1->PhysicsSettings).WorldDampingLocation;
  fVar8 = (param_1->PhysicsSettings).WorldDampingRotation;
  fVar9 = (param_1->PhysicsSettings).Stiffness;
  (this->PhysicsSettings).Damping = (param_1->PhysicsSettings).Damping;
  (this->PhysicsSettings).WorldDampingLocation = fVar7;
  (this->PhysicsSettings).WorldDampingRotation = fVar8;
  (this->PhysicsSettings).Stiffness = fVar9;
  fVar7 = (param_1->PhysicsSettings).LimitAngle;
  (this->PhysicsSettings).Radius = (param_1->PhysicsSettings).Radius;
  (this->PhysicsSettings).LimitAngle = fVar7;
  dVar4 = (param_1->Location).field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = dVar4;
  (this->Location).field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  dVar4 = (param_1->PrevLocation).field0_0x0._s_0.Y;
  (this->PrevLocation).field0_0x0._s_0.X = (param_1->PrevLocation).field0_0x0._s_0.X;
  (this->PrevLocation).field0_0x0._s_0.Y = dVar4;
  (this->PrevLocation).field0_0x0._s_0.Z = (param_1->PrevLocation).field0_0x0._s_0.Z;
  dVar4 = (param_1->PrevRotation).Y;
  (this->PrevRotation).X = (param_1->PrevRotation).X;
  (this->PrevRotation).Y = dVar4;
  dVar4 = (param_1->PrevRotation).W;
  (this->PrevRotation).Z = (param_1->PrevRotation).Z;
  (this->PrevRotation).W = dVar4;
  dVar4 = (param_1->PoseLocation).field0_0x0._s_0.Y;
  (this->PoseLocation).field0_0x0._s_0.X = (param_1->PoseLocation).field0_0x0._s_0.X;
  (this->PoseLocation).field0_0x0._s_0.Y = dVar4;
  (this->PoseLocation).field0_0x0._s_0.Z = (param_1->PoseLocation).field0_0x0._s_0.Z;
  dVar4 = (param_1->PoseRotation).Y;
  (this->PoseRotation).X = (param_1->PoseRotation).X;
  (this->PoseRotation).Y = dVar4;
  dVar4 = (param_1->PoseRotation).W;
  (this->PoseRotation).Z = (param_1->PoseRotation).Z;
  (this->PoseRotation).W = dVar4;
  dVar4 = (param_1->PoseScale).field0_0x0._s_0.Y;
  (this->PoseScale).field0_0x0._s_0.X = (param_1->PoseScale).field0_0x0._s_0.X;
  (this->PoseScale).field0_0x0._s_0.Y = dVar4;
  (this->PoseScale).field0_0x0._s_0.Z = (param_1->PoseScale).field0_0x0._s_0.Z;
  this->LengthFromRoot = param_1->LengthFromRoot;
  this->bDummy = param_1->bDummy;
  this->bSkipSimulate = param_1->bSkipSimulate;
  return this;
}

// FKawaiiPhysicsModifyBone @ 14de3d820

FKawaiiPhysicsModifyBone * __thiscall
FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone(FKawaiiPhysicsModifyBone *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  (this->BoneRef).BoneName.ComparisonIndex = 0;
  (this->BoneRef).BoneName.Number = 0;
  puVar1 = &(this->BoneRef).field_0x8;
  (this->BoneRef).BoneIndex = -1;
  (this->BoneRef).bUseSkeletonIndex = 0;
  *(undefined8 *)&(this->BoneRef).CachedCompactPoseIndex = 0xffffffffffffffff;
  (this->ChildIndexs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildIndexs).ArrayNum = 0;
  (this->ChildIndexs).ArrayMax = 0;
  (this->PhysicsSettings).Damping = 0.1;
  (this->PhysicsSettings).WorldDampingLocation = 0.8;
  (this->PhysicsSettings).WorldDampingRotation = 0.8;
  (this->PhysicsSettings).Stiffness = 0.05;
  (this->PhysicsSettings).Radius = 3.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PhysicsSettings).LimitAngle = 0.0;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar2;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PrevLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PrevLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->PrevLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->PrevRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->PrevRotation).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->PrevRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->PrevRotation).W = dVar3;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PoseLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PoseLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->PoseLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->PoseRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->PoseRotation).Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->PoseRotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->PoseRotation).W = dVar3;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->PoseScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->PoseScale).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->LengthFromRoot = 0.0;
  this->bDummy = false;
  this->bSkipSimulate = false;
  (this->PoseScale).field0_0x0._s_0.Z = (double)uVar2;
  return this;
}

