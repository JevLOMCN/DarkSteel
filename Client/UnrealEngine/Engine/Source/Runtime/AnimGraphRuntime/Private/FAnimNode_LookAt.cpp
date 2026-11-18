// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticStruct @ 1463d21f0

UScriptStruct * __cdecl FAnimNode_LookAt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt,(UObject *)pUVar1,
                         L"AnimNode_LookAt");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton;
}

// FAnimNode_LookAt @ 146403f60

FAnimNode_LookAt * __thiscall FAnimNode_LookAt::FAnimNode_LookAt(FAnimNode_LookAt *this)

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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  dVar34 = __real_3ff0000000000000;
  *(undefined ***)this = &___7FAnimNode_LookAt__6B_;
  (this->BoneToModify).BoneName.ComparisonIndex = 0;
  (this->BoneToModify).BoneName.Number = 0;
  puVar1 = &(this->BoneToModify).field_0x8;
  (this->BoneToModify).BoneIndex = -1;
  (this->BoneToModify).bUseSkeletonIndex = 0;
  (this->BoneToModify).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LookAtTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->LookAtTarget).BoneReference.BoneName.Number = 0;
  puVar1 = &(this->LookAtTarget).BoneReference.field_0x8;
  (this->LookAtTarget).BoneReference.BoneIndex = -1;
  (this->LookAtTarget).BoneReference.bUseSkeletonIndex = 0;
  (this->LookAtTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64 = auVar6
  ;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64 = auVar7
  ;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])
   (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64 = auVar9;
  (this->LookAtTarget).SocketReference.SocketName.ComparisonIndex = 0;
  (this->LookAtTarget).SocketReference.SocketName.Number = 0;
  (this->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
  (this->LookAtTarget).SocketReference.CachedSocketCompactBoneIndex =
       (FCompactPoseBoneIndex)0xffffffff;
  (this->LookAtTarget).bUseSocket = false;
  (this->LookAtTarget).BoneReference.BoneName.ComparisonIndex = 0;
  (this->LookAtTarget).BoneReference.BoneName.Number = 0;
  (this->LookAtLocation).field0_0x0._s_0.X = 100.0;
  (this->LookAtLocation).field0_0x0._s_0.Y = 0.0;
  (this->LookAtLocation).field0_0x0._s_0.Z = 0.0;
  (this->LookAt_Axis).bInLocalSpace = true;
  dVar32 = DefaultLookAtAxis.field0_0x0._s_0.Y * DefaultLookAtAxis.field0_0x0._s_0.Y +
           DefaultLookAtAxis.field0_0x0._s_0.X * DefaultLookAtAxis.field0_0x0._s_0.X +
           DefaultLookAtAxis.field0_0x0._s_0.Z * DefaultLookAtAxis.field0_0x0._s_0.Z;
  uVar33 = DefaultLookAtAxis.field0_0x0._s_0.Z;
  uVar30 = DefaultLookAtAxis.field0_0x0._s_0.X;
  uVar31 = DefaultLookAtAxis.field0_0x0._s_0.Y;
  if ((dVar32 != dVar34) &&
     (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar32)) {
    dVar32 = dVar34 / SQRT(dVar32);
    uVar33 = dVar32 * DefaultLookAtAxis.field0_0x0._s_0.Z;
    uVar30 = dVar32 * DefaultLookAtAxis.field0_0x0._s_0.X;
    uVar31 = dVar32 * DefaultLookAtAxis.field0_0x0._s_0.Y;
  }
  auVar28._8_4_ = (int)uVar31;
  auVar28._0_8_ = uVar30;
  auVar28._12_4_ = (int)((ulonglong)uVar31 >> 0x20);
  *(undefined1 (*) [16])&(this->LookAt_Axis).Axis.field0_0x0 = auVar28;
  (this->LookAt_Axis).Axis.field0_0x0._s_0.Z = (double)uVar33;
  this->bUseLookUpAxis = false;
  this->InterpolationType = '\0';
  (this->LookUp_Axis).bInLocalSpace = true;
  dVar32 = DefaultLookUpAxis.field0_0x0._s_0.Y * DefaultLookUpAxis.field0_0x0._s_0.Y +
           DefaultLookUpAxis.field0_0x0._s_0.X * DefaultLookUpAxis.field0_0x0._s_0.X +
           DefaultLookUpAxis.field0_0x0._s_0.Z * DefaultLookUpAxis.field0_0x0._s_0.Z;
  uVar33 = DefaultLookUpAxis.field0_0x0._s_0.Z;
  uVar30 = DefaultLookUpAxis.field0_0x0._s_0.X;
  uVar31 = DefaultLookUpAxis.field0_0x0._s_0.Y;
  if ((dVar32 != dVar34) &&
     (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar32)) {
    dVar34 = dVar34 / SQRT(dVar32);
    uVar33 = dVar34 * DefaultLookUpAxis.field0_0x0._s_0.Z;
    uVar30 = dVar34 * DefaultLookUpAxis.field0_0x0._s_0.X;
    uVar31 = dVar34 * DefaultLookUpAxis.field0_0x0._s_0.Y;
  }
  auVar29._8_4_ = (int)uVar31;
  auVar29._0_8_ = uVar30;
  auVar29._12_4_ = (int)((ulonglong)uVar31 >> 0x20);
  *(undefined1 (*) [16])&(this->LookUp_Axis).Axis.field0_0x0 = auVar29;
  (this->LookUp_Axis).Axis.field0_0x0._s_0.Z = (double)uVar33;
  this->LookAtClamp = 0.0;
  this->InterpolationTime = 0.0;
  this->InterpolationTriggerThreashold = 0.0;
  (this->CurrentLookAtLocation).field0_0x0._s_0.X = 0.0;
  (this->CurrentLookAtLocation).field0_0x0._s_0.Y = 0.0;
  (this->CurrentLookAtLocation).field0_0x0._s_0.Z = 0.0;
  (this->CurrentTargetLocation).field0_0x0._s_0.X = 0.0;
  (this->CurrentTargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->CurrentTargetLocation).field0_0x0._s_0.Z = 0.0;
  (this->PreviousTargetLocation).field0_0x0._s_0.X = 0.0;
  (this->PreviousTargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->PreviousTargetLocation).field0_0x0._s_0.Z = 0.0;
  this->AccumulatedInterpoolationTime = 0.0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Rotation.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar3,0);
  auVar11._0_8_ = (double)fVar2;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Rotation.ZW.m128d_f64 = auVar11;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Translation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar3,0);
  auVar13._0_8_ = (double)fVar2;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Translation.ZW.m128d_f64 = auVar13;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Scale3D.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar3,0);
  auVar15._0_8_ = (double)fVar2;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedOriginalTransform).Scale3D.ZW.m128d_f64 = auVar15;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Rotation.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar3,0);
  auVar17._0_8_ = (double)fVar2;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Rotation.ZW.m128d_f64 = auVar17;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Translation.XY.m128d_f64 = auVar18;
  auVar19._8_4_ = SUB84((double)fVar3,0);
  auVar19._0_8_ = (double)fVar2;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Translation.ZW.m128d_f64 = auVar19;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Scale3D.XY.m128d_f64 = auVar20;
  auVar21._8_4_ = SUB84((double)fVar3,0);
  auVar21._0_8_ = (double)fVar2;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedLookAtTransform).Scale3D.ZW.m128d_f64 = auVar21;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Rotation.XY.m128d_f64 = auVar22;
  auVar23._8_4_ = SUB84((double)fVar3,0);
  auVar23._0_8_ = (double)fVar2;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Rotation.ZW.m128d_f64 = auVar23;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Translation.XY.m128d_f64 = auVar24;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar2;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Translation.ZW.m128d_f64 = auVar25;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Scale3D.XY.m128d_f64 = auVar26;
  auVar27._8_4_ = SUB84((double)fVar3,0);
  auVar27._0_8_ = (double)fVar2;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->CachedTargetCoordinate).Scale3D.ZW.m128d_f64 = auVar27;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.X = 0.0;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Y = 0.0;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Z = 0.0;
  return this;
}

// operator= @ 14640b420

/* WARNING: Type propagation algorithm not settling */

FAnimNode_LookAt * __thiscall
FAnimNode_LookAt::operator=(FAnimNode_LookAt *this,FAnimNode_LookAt *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  bool bVar4;
  undefined7 uVar5;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  (this->BoneToModify).BoneName = (param_1->BoneToModify).BoneName;
  uVar1 = *(undefined4 *)&(param_1->BoneToModify).field_0x8;
  *(uint *)&(this->BoneToModify).field_0x8 =
       (uVar1 ^ *(uint *)&(this->BoneToModify).field_0x8) & 0x80000000 ^ uVar1;
  uVar2 = *(undefined4 *)&(param_1->BoneToModify).field_0x8;
  *(uint *)&(this->BoneToModify).field_0x8 =
       (SPULL(uVar2,0,0x1f) ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^ uVar2;
  (this->BoneToModify).CachedCompactPoseIndex = (param_1->BoneToModify).CachedCompactPoseIndex;
  (this->LookAtTarget).bUseSocket = (param_1->LookAtTarget).bUseSocket;
  (this->LookAtTarget).BoneReference.BoneName = (param_1->LookAtTarget).BoneReference.BoneName;
  uVar1 = *(undefined4 *)&(param_1->LookAtTarget).BoneReference.field_0x8;
  *(uint *)&(this->LookAtTarget).BoneReference.field_0x8 =
       (uVar1 ^ *(uint *)&(this->LookAtTarget).BoneReference.field_0x8) & 0x80000000 ^ uVar1;
  uVar2 = *(undefined4 *)&(param_1->LookAtTarget).BoneReference.field_0x8;
  *(uint *)&(this->LookAtTarget).BoneReference.field_0x8 =
       (SPULL(uVar2,0,0x1f) ^ SPULL(uVar1,0,0x1f)) & 0x7fffffffU ^ uVar2;
  (this->LookAtTarget).BoneReference.CachedCompactPoseIndex =
       (param_1->LookAtTarget).BoneReference.CachedCompactPoseIndex;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64
          [1];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64[0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64
          [1];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64[0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.
          m128d_f64[1];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64
       [0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.XY.m128d_f64[1] =
       dVar3;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.
          m128d_f64[1];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64
       [0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Translation.ZW.m128d_f64[1] =
       dVar3;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64[1]
  ;
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64[0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64[1]
  ;
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64[0] =
       (param_1->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64[0];
  (this->LookAtTarget).SocketReference.CachedSocketLocalTransform.Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->LookAtTarget).SocketReference.SocketName =
       (param_1->LookAtTarget).SocketReference.SocketName;
  (this->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex =
       (param_1->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex;
  (this->LookAtTarget).SocketReference.CachedSocketCompactBoneIndex =
       (param_1->LookAtTarget).SocketReference.CachedSocketCompactBoneIndex;
  dVar3 = (param_1->LookAtLocation).field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = (param_1->LookAtLocation).field0_0x0._s_0.X;
  (this->LookAtLocation).field0_0x0._s_0.Y = dVar3;
  (this->LookAtLocation).field0_0x0._s_0.Z = (param_1->LookAtLocation).field0_0x0._s_0.Z;
  dVar3 = (param_1->LookAt_Axis).Axis.field0_0x0._s_0.Y;
  (this->LookAt_Axis).Axis.field0_0x0._s_0.X = (param_1->LookAt_Axis).Axis.field0_0x0._s_0.X;
  (this->LookAt_Axis).Axis.field0_0x0._s_0.Y = dVar3;
  bVar4 = (param_1->LookAt_Axis).bInLocalSpace;
  uVar5 = *(undefined7 *)&(param_1->LookAt_Axis).field_0x19;
  (this->LookAt_Axis).Axis.field0_0x0._s_0.Z = (param_1->LookAt_Axis).Axis.field0_0x0._s_0.Z;
  (this->LookAt_Axis).bInLocalSpace = bVar4;
  *(undefined7 *)&(this->LookAt_Axis).field_0x19 = uVar5;
  this->bUseLookUpAxis = param_1->bUseLookUpAxis;
  (this->InterpolationType).Value = (param_1->InterpolationType).Value;
  dVar3 = (param_1->LookUp_Axis).Axis.field0_0x0._s_0.Y;
  (this->LookUp_Axis).Axis.field0_0x0._s_0.X = (param_1->LookUp_Axis).Axis.field0_0x0._s_0.X;
  (this->LookUp_Axis).Axis.field0_0x0._s_0.Y = dVar3;
  bVar4 = (param_1->LookUp_Axis).bInLocalSpace;
  uVar5 = *(undefined7 *)&(param_1->LookUp_Axis).field_0x19;
  (this->LookUp_Axis).Axis.field0_0x0._s_0.Z = (param_1->LookUp_Axis).Axis.field0_0x0._s_0.Z;
  (this->LookUp_Axis).bInLocalSpace = bVar4;
  *(undefined7 *)&(this->LookUp_Axis).field_0x19 = uVar5;
  this->LookAtClamp = param_1->LookAtClamp;
  this->InterpolationTime = param_1->InterpolationTime;
  this->InterpolationTriggerThreashold = param_1->InterpolationTriggerThreashold;
  dVar3 = (param_1->CurrentLookAtLocation).field0_0x0._s_0.Y;
  (this->CurrentLookAtLocation).field0_0x0._s_0.X =
       (param_1->CurrentLookAtLocation).field0_0x0._s_0.X;
  (this->CurrentLookAtLocation).field0_0x0._s_0.Y = dVar3;
  (this->CurrentLookAtLocation).field0_0x0._s_0.Z =
       (param_1->CurrentLookAtLocation).field0_0x0._s_0.Z;
  dVar3 = (param_1->CurrentTargetLocation).field0_0x0._s_0.Y;
  (this->CurrentTargetLocation).field0_0x0._s_0.X =
       (param_1->CurrentTargetLocation).field0_0x0._s_0.X;
  (this->CurrentTargetLocation).field0_0x0._s_0.Y = dVar3;
  (this->CurrentTargetLocation).field0_0x0._s_0.Z =
       (param_1->CurrentTargetLocation).field0_0x0._s_0.Z;
  dVar3 = (param_1->PreviousTargetLocation).field0_0x0._s_0.Y;
  (this->PreviousTargetLocation).field0_0x0._s_0.X =
       (param_1->PreviousTargetLocation).field0_0x0._s_0.X;
  (this->PreviousTargetLocation).field0_0x0._s_0.Y = dVar3;
  (this->PreviousTargetLocation).field0_0x0._s_0.Z =
       (param_1->PreviousTargetLocation).field0_0x0._s_0.Z;
  this->AccumulatedInterpoolationTime = param_1->AccumulatedInterpoolationTime;
  dVar3 = (param_1->CachedOriginalTransform).Rotation.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Rotation.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedOriginalTransform).Rotation.ZW.m128d_f64[1];
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Rotation.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedOriginalTransform).Translation.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Translation.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedOriginalTransform).Translation.ZW.m128d_f64[1];
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Translation.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedOriginalTransform).Scale3D.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Scale3D.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedOriginalTransform).Scale3D.ZW.m128d_f64[1];
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->CachedOriginalTransform).Scale3D.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Rotation.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Rotation.XY.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Rotation.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Rotation.ZW.m128d_f64[1];
  (this->CachedLookAtTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Rotation.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Translation.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Translation.XY.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Translation.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Translation.ZW.m128d_f64[1];
  (this->CachedLookAtTransform).Translation.ZW.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Translation.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Scale3D.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Scale3D.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedLookAtTransform).Scale3D.ZW.m128d_f64[1];
  (this->CachedLookAtTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->CachedLookAtTransform).Scale3D.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Rotation.XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Rotation.XY.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Rotation.XY.m128d_f64[0];
  (this->CachedTargetCoordinate).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Rotation.ZW.m128d_f64[1];
  (this->CachedTargetCoordinate).Rotation.ZW.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Rotation.ZW.m128d_f64[0];
  (this->CachedTargetCoordinate).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Translation.XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Translation.XY.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Translation.XY.m128d_f64[0];
  (this->CachedTargetCoordinate).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Translation.ZW.m128d_f64[1];
  (this->CachedTargetCoordinate).Translation.ZW.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Translation.ZW.m128d_f64[0];
  (this->CachedTargetCoordinate).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Scale3D.XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Scale3D.XY.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Scale3D.XY.m128d_f64[0];
  (this->CachedTargetCoordinate).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[1];
  (this->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[0] =
       (param_1->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[0];
  (this->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (param_1->CachedPreviousTargetLocation).field0_0x0._s_0.Y;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.X =
       (param_1->CachedPreviousTargetLocation).field0_0x0._s_0.X;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.Y = dVar3;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.Z =
       (param_1->CachedPreviousTargetLocation).field0_0x0._s_0.Z;
  dVar3 = (param_1->CachedCurrentLookAtLocation).field0_0x0._s_0.Y;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.X =
       (param_1->CachedCurrentLookAtLocation).field0_0x0._s_0.X;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.Y = dVar3;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.Z =
       (param_1->CachedCurrentLookAtLocation).field0_0x0._s_0.Z;
  dVar3 = (param_1->CachedCurrentTargetLocation).field0_0x0._s_0.Y;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.X =
       (param_1->CachedCurrentTargetLocation).field0_0x0._s_0.X;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Y = dVar3;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Z =
       (param_1->CachedCurrentTargetLocation).field0_0x0._s_0.Z;
  return this;
}

// AlphaToBlendType @ 1464159a0

float __cdecl FAnimNode_LookAt::AlphaToBlendType(float param_1,Type param_2)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case Cubic:
    fVar1 = param_1 * param_1 * __real_40400000 - (param_1 + param_1) * param_1 * param_1;
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1;
  case Sinusoidal:
    fVar1 = sinf(param_1 * __real_40490fdb - __real_3fc90fdb);
    fVar1 = (fVar1 + __real_3f800000) * __real_3f000000;
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1;
  case EaseInOutExponent2:
    fVar1 = param_1 + param_1;
    if (param_1 < __real_3f000000) {
LAB_146415ae4:
      fVar1 = fVar1 * fVar1;
      goto LAB_146415a70;
    }
    fVar1 = __real_3f800000 - (fVar1 - __real_3f800000);
    break;
  case EaseInOutExponent3:
    fVar1 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar2 = __real_3f800000 - (fVar1 - __real_3f800000);
      fVar1 = fVar2 * fVar2;
LAB_146415b3e:
      fVar1 = (__real_3f800000 - fVar1 * fVar2) + __real_3f800000;
    }
    else {
      fVar1 = fVar1 * fVar1 * fVar1;
    }
    goto LAB_146415b4d;
  case EaseInOutExponent4:
    fVar1 = param_1 + param_1;
    if (param_1 < __real_3f000000) {
      fVar1 = fVar1 * fVar1;
      goto LAB_146415ae4;
    }
    fVar1 = __real_3f800000 - (fVar1 - __real_3f800000);
    fVar1 = fVar1 * fVar1;
    break;
  case EaseInOutExponent5:
    fVar1 = param_1 + param_1;
    if (__real_3f000000 <= param_1) {
      fVar2 = __real_3f800000 - (fVar1 - __real_3f800000);
      fVar1 = fVar2 * fVar2 * fVar2 * fVar2;
      goto LAB_146415b3e;
    }
    fVar1 = fVar1 * fVar1 * fVar1 * fVar1 * fVar1;
LAB_146415b4d:
    param_1 = fVar1 * __real_3f000000;
    if (__real_3f800000 <= param_1) {
      param_1 = __real_3f800000;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
switchD_1464159c6_default:
    return param_1;
  default:
    goto switchD_1464159c6_default;
  }
  fVar1 = (__real_3f800000 - fVar1 * fVar1) + __real_3f800000;
LAB_146415a70:
  fVar2 = fVar1 * __real_3f000000;
  if (__real_3f800000 <= fVar1 * __real_3f000000) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}

// EvaluateComponentSpaceInternal @ 146426ac0

void __thiscall
FAnimNode_LookAt::EvaluateComponentSpaceInternal
          (FAnimNode_LookAt *this,FComponentSpacePoseContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::EvaluateComponentSpaceInternal");
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14642f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_LookAt::EvaluateSkeletalControl_AnyThread
          (FAnimNode_LookAt *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  FName *pFVar9;
  bool bVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStackY_2a8 [32];
  FIdentityFunctor local_268 [4];
  FCompactPoseBoneIndex local_264;
  FName local_260;
  FName local_258;
  TVector<double>_u_0 local_250;
  TVector<double>_u_0 local_238;
  double local_220;
  double dStack_218;
  double local_210;
  TQuat<double> local_208;
  double local_1d8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::EvaluateSkeletalControl_AnyThread");
  if (param_2->ArrayNum != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBoneTransforms.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_LookAt.cpp"
                       ,0x57,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FBoneReference::GetCompactPoseIndex(&this->BoneToModify,(FBoneContainer *)&local_264);
  pTVar7 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_264);
  local_108.Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1] = (pTVar7->Rotation).XY.m128d_f64[1];
  local_108.Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  local_108.Rotation.ZW.m128d_f64[1] = (pTVar7->Rotation).ZW.m128d_f64[1];
  local_108.Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = (pTVar7->Translation).XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = (pTVar7->Translation).ZW.m128d_f64[1];
  local_108.Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  local_108.Scale3D.XY.m128d_f64[1] = (pTVar7->Scale3D).XY.m128d_f64[1];
  local_108.Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  local_108.Scale3D.ZW.m128d_f64[1] = (pTVar7->Scale3D).ZW.m128d_f64[1];
  FBoneSocketTarget::GetTargetTransform<FCompactPose>
            (&this->LookAtTarget,&local_1c8,&this->LookAtLocation,&param_1->Pose,
             (TTransform<double> *)(param_1->_padding_ + 0x20));
  local_1d8 = (this->CurrentTargetLocation).field0_0x0._s_0.Z;
  fVar11 = this->InterpolationTriggerThreashold;
  dVar3 = local_1c8.Translation.XY.m128d_f64[0] - (this->CurrentTargetLocation).field0_0x0._s_0.X;
  dVar25 = local_1c8.Translation.XY.m128d_f64[1] - (this->CurrentTargetLocation).field0_0x0._s_0.Y;
  local_210 = local_1c8.Translation.ZW.m128d_f64[0];
  local_220 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_218 = local_1c8.Translation.XY.m128d_f64[1];
  if (dVar25 * dVar25 + dVar3 * dVar3 +
      (local_1c8.Translation.ZW.m128d_f64[0] - local_1d8) *
      (local_1c8.Translation.ZW.m128d_f64[0] - local_1d8) <= (double)(fVar11 * fVar11)) {
    if (fVar11 != 0.0) goto LAB_14642f3ab;
  }
  else {
    if (this->InterpolationTime < this->AccumulatedInterpoolationTime ||
        this->InterpolationTime == this->AccumulatedInterpoolationTime) {
      this->AccumulatedInterpoolationTime = 0.0;
    }
    dVar25 = (this->CurrentTargetLocation).field0_0x0._s_0.Y;
    dVar3 = (this->CurrentTargetLocation).field0_0x0._s_0.Z;
    (this->PreviousTargetLocation).field0_0x0._s_0.X =
         (this->CurrentTargetLocation).field0_0x0._s_0.X;
    (this->PreviousTargetLocation).field0_0x0._s_0.Y = dVar25;
    (this->PreviousTargetLocation).field0_0x0._s_0.Z = dVar3;
  }
  (this->CurrentTargetLocation).field0_0x0._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
  (this->CurrentTargetLocation).field0_0x0._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
  (this->CurrentTargetLocation).field0_0x0._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
LAB_14642f3ab:
  if (this->InterpolationTime <= 0.0) {
    dVar25 = (this->CurrentTargetLocation).field0_0x0._s_0.Y;
    dVar3 = (this->CurrentTargetLocation).field0_0x0._s_0.Z;
    (this->CurrentLookAtLocation).field0_0x0._s_0.X =
         (this->CurrentTargetLocation).field0_0x0._s_0.X;
    (this->CurrentLookAtLocation).field0_0x0._s_0.Y = dVar25;
    (this->CurrentLookAtLocation).field0_0x0._s_0.Z = dVar3;
  }
  else {
    fVar11 = this->AccumulatedInterpoolationTime / this->InterpolationTime;
    if (fVar11 < __real_3f800000) {
      dVar3 = (this->PreviousTargetLocation).field0_0x0._s_0.X;
      dVar25 = (this->PreviousTargetLocation).field0_0x0._s_0.Y;
      dVar4 = (this->PreviousTargetLocation).field0_0x0._s_0.Z;
      dVar33 = (this->CurrentTargetLocation).field0_0x0._s_0.Y;
      dVar5 = (this->CurrentTargetLocation).field0_0x0._s_0.Z;
      fVar11 = AlphaToBlendType(fVar11,(uint)(this->InterpolationType).Value);
      dVar19 = (double)fVar11;
      (this->CurrentLookAtLocation).field0_0x0._s_0.X =
           ((this->CurrentTargetLocation).field0_0x0._s_0.X - dVar3) * dVar19 + dVar3;
      (this->CurrentLookAtLocation).field0_0x0._s_0.Y = (dVar33 - dVar25) * dVar19 + dVar25;
      (this->CurrentLookAtLocation).field0_0x0._s_0.Z = (dVar5 - dVar4) * dVar19 + dVar4;
    }
  }
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[0] =
       local_108.Translation.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Translation.XY.m128d_f64[1] =
       local_108.Translation.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[0] =
       local_108.Translation.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Translation.ZW.m128d_f64[1] =
       local_108.Translation.ZW.m128d_f64[1];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
  (this->CachedOriginalTransform).Scale3D.XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
  (this->CachedOriginalTransform).Scale3D.ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
  pTVar7 = FBoneSocketTarget::GetTargetTransform<FCompactPose>
                     (&this->LookAtTarget,&local_168,&UE::Math::TVector<double>::ZeroVector,
                      &param_1->Pose,(TTransform<double> *)(param_1->_padding_ + 0x20));
  auVar27._8_8_ = local_108.Rotation.ZW.m128d_f64[1];
  auVar27._0_8_ = local_108.Rotation.ZW.m128d_f64[0];
  auVar31._8_8_ = local_108.Rotation.XY.m128d_f64[1];
  auVar31._0_8_ = local_108.Rotation.XY.m128d_f64[0];
  dVar3 = (pTVar7->Rotation).XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Rotation.XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (this->CachedTargetCoordinate).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (this->CachedTargetCoordinate).Rotation.ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  (this->CachedTargetCoordinate).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Translation.XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0]
  ;
  (this->CachedTargetCoordinate).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Translation).ZW.m128d_f64[1];
  (this->CachedTargetCoordinate).Translation.ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0]
  ;
  (this->CachedTargetCoordinate).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (this->CachedTargetCoordinate).Scale3D.XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  (this->CachedTargetCoordinate).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  dVar25 = (this->PreviousTargetLocation).field0_0x0._s_0.X;
  dVar4 = (this->PreviousTargetLocation).field0_0x0._s_0.Y;
  (this->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  (this->CachedTargetCoordinate).Scale3D.ZW.m128d_f64[1] = dVar3;
  dVar3 = (this->PreviousTargetLocation).field0_0x0._s_0.Z;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.X = dVar25;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.Y = dVar4;
  dVar25 = (this->CurrentLookAtLocation).field0_0x0._s_0.X;
  dVar4 = (this->CurrentLookAtLocation).field0_0x0._s_0.Y;
  (this->CachedPreviousTargetLocation).field0_0x0._s_0.Z = dVar3;
  dVar3 = (this->CurrentLookAtLocation).field0_0x0._s_0.Z;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.X = dVar25;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.Y = dVar4;
  dVar25 = (this->CurrentTargetLocation).field0_0x0._s_0.X;
  dVar4 = (this->CurrentTargetLocation).field0_0x0._s_0.Y;
  (this->CachedCurrentLookAtLocation).field0_0x0._s_0.Z = dVar3;
  dVar3 = (this->CurrentTargetLocation).field0_0x0._s_0.Z;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.X = dVar25;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Y = dVar4;
  (this->CachedCurrentTargetLocation).field0_0x0._s_0.Z = dVar3;
  if ((this->LookAt_Axis).bInLocalSpace == false) {
    local_238._0_16_ = *(undefined1 (*) [16])&(this->LookAt_Axis).Axis.field0_0x0;
    local_238._s_0.Z = (this->LookAt_Axis).Axis.field0_0x0._s_0.Z;
  }
  else {
    auVar1 = *(undefined1 (*) [16])&(this->LookAt_Axis).Axis.field0_0x0;
    dVar3 = (this->LookAt_Axis).Axis.field0_0x0._s_0.Z;
    dVar33 = auVar1._8_8_;
    auVar28._0_8_ =
         dVar33 * local_108.Rotation.XY.m128d_f64[0] -
         auVar1._0_8_ * local_108.Rotation.XY.m128d_f64[1];
    auVar28._8_8_ =
         dVar3 * local_108.Rotation.XY.m128d_f64[1] - dVar33 * local_108.Rotation.ZW.m128d_f64[0];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar3;
    auVar12 = blendpd(auVar1,auVar12,2);
    auVar26 = blendpd(auVar31,auVar27,2);
    auVar13._0_8_ = auVar12._0_8_ * local_108.Rotation.ZW.m128d_f64[0] - dVar3 * auVar26._0_8_;
    auVar13._8_8_ = auVar12._8_8_ * local_108.Rotation.ZW.m128d_f64[1] - auVar26._8_8_ * 0.0;
    auVar12 = blendpd(auVar28,auVar13,2);
    dVar25 = auVar28._8_8_ + auVar28._8_8_;
    dVar4 = auVar13._0_8_ + auVar13._0_8_;
    uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar29._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar29._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    auVar20._8_4_ = SUB84(dVar4,0);
    auVar20._0_8_ = dVar25;
    auVar20._12_4_ = uVar24;
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar25;
    auVar14._12_4_ = uVar24;
    auVar12 = blendpd(auVar14,auVar29,2);
    auVar21._0_8_ =
         auVar20._8_8_ * local_108.Rotation.XY.m128d_f64[0] -
         dVar25 * local_108.Rotation.XY.m128d_f64[1];
    auVar21._8_8_ =
         auVar29._0_8_ * local_108.Rotation.XY.m128d_f64[1] -
         dVar4 * local_108.Rotation.ZW.m128d_f64[0];
    auVar15._0_8_ =
         auVar12._0_8_ * local_108.Rotation.ZW.m128d_f64[0] - auVar29._0_8_ * auVar26._0_8_;
    auVar15._8_8_ =
         auVar12._8_8_ * local_108.Rotation.ZW.m128d_f64[1] - auVar29._8_8_ * auVar26._8_8_;
    auVar12 = blendpd(auVar21,auVar15,2);
    dVar4 = dVar4 * local_108.Rotation.ZW.m128d_f64[1] + dVar33 + auVar15._0_8_;
    local_238._s_0.Z = auVar29._0_8_ * local_108.Rotation.ZW.m128d_f64[1] + dVar3 + auVar12._0_8_;
    local_238._8_4_ = SUB84(dVar4,0);
    local_238._0_8_ = dVar25 * local_108.Rotation.ZW.m128d_f64[1] + auVar1._0_8_ + auVar21._8_8_;
    local_238._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  }
  if ((this->LookUp_Axis).bInLocalSpace == false) {
    local_250._0_16_ = *(undefined1 (*) [16])&(this->LookUp_Axis).Axis.field0_0x0;
    local_250._s_0.Z = (this->LookUp_Axis).Axis.field0_0x0._s_0.Z;
  }
  else {
    auVar1 = *(undefined1 (*) [16])&(this->LookUp_Axis).Axis.field0_0x0;
    dVar3 = (this->LookUp_Axis).Axis.field0_0x0._s_0.Z;
    dVar33 = auVar1._8_8_;
    auVar30._0_8_ =
         dVar33 * local_108.Rotation.XY.m128d_f64[0] -
         local_108.Rotation.XY.m128d_f64[1] * auVar1._0_8_;
    auVar30._8_8_ =
         dVar3 * local_108.Rotation.XY.m128d_f64[1] - local_108.Rotation.ZW.m128d_f64[0] * dVar33;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar3;
    auVar12 = blendpd(auVar1,auVar26,2);
    auVar27 = blendpd(auVar31,auVar27,2);
    auVar16._0_8_ = auVar12._0_8_ * local_108.Rotation.ZW.m128d_f64[0] - auVar27._0_8_ * dVar3;
    auVar16._8_8_ = auVar12._8_8_ * local_108.Rotation.ZW.m128d_f64[1] - auVar27._8_8_ * 0.0;
    auVar31 = blendpd(auVar30,auVar16,2);
    dVar25 = auVar30._8_8_ + auVar30._8_8_;
    dVar4 = auVar16._0_8_ + auVar16._0_8_;
    uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
    auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = dVar25;
    auVar22._12_4_ = uVar24;
    auVar17._8_4_ = SUB84(dVar4,0);
    auVar17._0_8_ = dVar25;
    auVar17._12_4_ = uVar24;
    auVar31 = blendpd(auVar17,auVar32,2);
    auVar23._0_8_ =
         auVar22._8_8_ * local_108.Rotation.XY.m128d_f64[0] -
         dVar25 * local_108.Rotation.XY.m128d_f64[1];
    auVar23._8_8_ =
         auVar32._0_8_ * local_108.Rotation.XY.m128d_f64[1] -
         dVar4 * local_108.Rotation.ZW.m128d_f64[0];
    auVar18._0_8_ =
         auVar31._0_8_ * local_108.Rotation.ZW.m128d_f64[0] - auVar32._0_8_ * auVar27._0_8_;
    auVar18._8_8_ =
         auVar31._8_8_ * local_108.Rotation.ZW.m128d_f64[1] - auVar32._8_8_ * auVar27._8_8_;
    auVar31 = blendpd(auVar23,auVar18,2);
    dVar4 = dVar4 * local_108.Rotation.ZW.m128d_f64[1] + dVar33 + auVar18._0_8_;
    local_250._s_0.Z = auVar32._0_8_ * local_108.Rotation.ZW.m128d_f64[1] + dVar3 + auVar31._0_8_;
    local_250._8_4_ = SUB84(dVar4,0);
    local_250._0_8_ = dVar25 * local_108.Rotation.ZW.m128d_f64[1] + auVar1._0_8_ + auVar23._8_8_;
    local_250._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  }
  AnimationCore::SolveAim
            (&local_208,&local_108,&this->CurrentLookAtLocation,(TVector<double> *)&local_238._s_0,
             this->bUseLookUpAxis,(TVector<double> *)&local_250._s_0,this->LookAtClamp);
  (**(code **)(*(longlong *)this + 0xd8))(this,param_1,param_2,&local_108);
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_268[0],
             (FCompareBoneTransformIndex *)local_268);
  (this->CachedLookAtTransform).Rotation.XY.m128d_f64[0] = local_108.Rotation.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Rotation.XY.m128d_f64[1] = local_108.Rotation.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Rotation.ZW.m128d_f64[0] = local_108.Rotation.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Rotation.ZW.m128d_f64[1] = local_108.Rotation.ZW.m128d_f64[1];
  (this->CachedLookAtTransform).Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Translation.ZW.m128d_f64[1] = local_108.Translation.ZW.m128d_f64[1];
  (this->CachedLookAtTransform).Scale3D.XY.m128d_f64[0] = local_108.Scale3D.XY.m128d_f64[0];
  (this->CachedLookAtTransform).Scale3D.XY.m128d_f64[1] = local_108.Scale3D.XY.m128d_f64[1];
  (this->CachedLookAtTransform).Scale3D.ZW.m128d_f64[0] = local_108.Scale3D.ZW.m128d_f64[0];
  (this->CachedLookAtTransform).Scale3D.ZW.m128d_f64[1] = local_108.Scale3D.ZW.m128d_f64[1];
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Bone",
             &(this->BoneToModify).BoneName);
  bVar6 = (this->LookAtTarget).bUseSocket;
  if (bVar6 == false) {
    bVar10 = (this->LookAtTarget).BoneReference.BoneIndex == -1;
  }
  else {
    bVar10 = (this->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex ==
             (FMeshPoseBoneIndex)0xffffffff;
  }
  if (bVar10) {
    pFVar9 = &local_260;
    local_260.ComparisonIndex.Value = 0;
    local_260.Number = 0;
  }
  else {
    pFVar9 = &local_258;
    lVar8 = 0x160;
    if (bVar6 == false) {
      lVar8 = 0xe4;
    }
    local_258 = *(FName *)(&this->field_0x0 + lVar8);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Look At Target",pFVar9);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Look At Location",&this->LookAtLocation);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Target Location",&this->CachedCurrentTargetLocation);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146443ee0

void __thiscall FAnimNode_LookAt::GatherDebugData(FAnimNode_LookAt *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  FName local_res8;
  FName local_res10;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt,(UObject *)pUVar1,
                         L"AnimNode_LookAt");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_LookAt.OuterSingleton)->_padding_
  ;
  ::FName::ToString(&local_res8,&local_b8);
  ::FString::PrintfImpl(&local_c8,L"%s<W:%.1f%%> %s");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_c8,"(",1);
  ::FString::PrintfImpl(&local_a8,L"Alpha: %.1f%%");
  iVar3 = local_a8.Data.ArrayNum + -1;
  if (local_a8.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(&local_c8,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar3);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((this->LookAtTarget).bUseSocket == false) {
    bVar4 = (this->LookAtTarget).BoneReference.BoneIndex == -1;
  }
  else {
    bVar4 = (this->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex ==
            (FMeshPoseBoneIndex)0xffffffff;
  }
  if (bVar4) {
    ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FName::ToString(&(this->BoneToModify).BoneName,local_58);
    ::FString::PrintfImpl(&local_78,L" Bone: %s, Look At Location : %s, Target Location : %s)");
    iVar3 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_c8,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar3);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
    ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
    lVar2 = 0x80;
    if ((this->LookAtTarget).bUseSocket == false) {
      lVar2 = 4;
    }
    local_res10 = *(FName *)((longlong)
                             (&(this->LookAtTarget).SocketReference.CachedSocketLocalTransform.
                               Rotation + -1) + lVar2);
    ::FName::ToString(&local_res10,local_58);
    ::FName::ToString(&(this->BoneToModify).BoneName,&local_68);
    ::FString::PrintfImpl
              (&local_98,
               L" Bone: %s, Look At Target: %s, Look At Location: %s, Target Location : %s)");
    iVar3 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_c8,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar3);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
      local_98.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_c8.Data.AllocatorInstance.Data;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.ArrayNum == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,local_c8.Data.ArrayNum,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_c8.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_b8,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 1464571b0

void __thiscall
FAnimNode_LookAt::InitializeBoneReferences(FAnimNode_LookAt *this,FBoneContainer *param_1)

{
  undefined1 *puVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::InitializeBoneReferences");
  FBoneReference::Initialize(&this->BoneToModify,param_1);
  if ((this->LookAtTarget).bUseSocket == false) {
    FBoneReference::Initialize(&(this->LookAtTarget).BoneReference,param_1);
    (this->LookAtTarget).SocketReference.CachedSocketMeshBoneIndex = (FMeshPoseBoneIndex)0xffffffff;
    (this->LookAtTarget).SocketReference.CachedSocketCompactBoneIndex =
         (FCompactPoseBoneIndex)0xffffffff;
  }
  else {
    FSocketReference::InitialzeCompactBoneIndex(&(this->LookAtTarget).SocketReference,param_1);
    (this->LookAtTarget).BoneReference.BoneIndex = -1;
    (this->LookAtTarget).BoneReference.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Initialize_AnyThread @ 1464598d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_LookAt::Initialize_AnyThread(FAnimNode_LookAt *this,FAnimationInitializeContext *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  FString local_28 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  this->field_0x41 = 0;
  this->field_0x8b = 0;
  FStatsHierarchical::EndMeasurement();
  if ((this->LookAtTarget).bUseSocket != false) {
    FSocketReference::InitializeSocketInfo
              (&(this->LookAtTarget).SocketReference,*(FAnimInstanceProxy **)param_1);
  }
  FAxis::Initialize(&this->LookUp_Axis);
  if ((((this->LookUp_Axis).Axis.field0_0x0._s_0.X == 0.0) &&
      ((this->LookUp_Axis).Axis.field0_0x0._s_0.Y == 0.0)) &&
     ((this->LookUp_Axis).Axis.field0_0x0._s_0.Z == 0.0)) {
    if (2 < (byte)LogAnimation._0_1_) {
      pUVar2 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
      if ((pUVar2 == (UObject *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,local_28,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    uVar1 = DefaultLookUpAxis.field0_0x0._s_0.Y;
    (this->LookUp_Axis).Axis.field0_0x0._s_0.X = DefaultLookUpAxis.field0_0x0._s_0.X;
    (this->LookUp_Axis).Axis.field0_0x0._s_0.Y = (double)uVar1;
    (this->LookUp_Axis).Axis.field0_0x0._s_0.Z = DefaultLookUpAxis.field0_0x0._s_0.Z;
  }
  FAxis::Initialize(&this->LookAt_Axis);
  if ((((this->LookAt_Axis).Axis.field0_0x0._s_0.X == 0.0) &&
      ((this->LookAt_Axis).Axis.field0_0x0._s_0.Y == 0.0)) &&
     ((this->LookAt_Axis).Axis.field0_0x0._s_0.Z == 0.0)) {
    if (2 < (byte)LogAnimation._0_1_) {
      pUVar2 = FAnimationBaseContext::GetAnimInstanceObject((FAnimationBaseContext *)param_1);
      if ((pUVar2 == (UObject *)0x0) || (*(longlong *)&pUVar2->field_0x10 == 0)) {
        ::FString::FString(local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar2,local_28,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    uVar1 = DefaultLookAtAxis.field0_0x0._s_0.Y;
    (this->LookAt_Axis).Axis.field0_0x0._s_0.X = DefaultLookAtAxis.field0_0x0._s_0.X;
    (this->LookAt_Axis).Axis.field0_0x0._s_0.Y = (double)uVar1;
    (this->LookAt_Axis).Axis.field0_0x0._s_0.Z = DefaultLookAtAxis.field0_0x0._s_0.Z;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bb50

bool __thiscall
FAnimNode_LookAt::IsValidToEvaluate
          (FAnimNode_LookAt *this,USkeleton *param_1,FBoneContainer *param_2)

{
  FName FVar1;
  bool bVar2;
  
  bVar2 = FBoneReference::IsValidToEvaluate(&this->BoneToModify,param_2);
  if (!bVar2) {
    return false;
  }
  bVar2 = (this->LookAtTarget).bUseSocket;
  if (bVar2 == false) {
    FVar1 = (this->LookAtTarget).BoneReference.BoneName;
  }
  else {
    FVar1 = (this->LookAtTarget).SocketReference.SocketName;
  }
  if (FVar1 != (FName)0x0) {
    if (bVar2 == false) {
      bVar2 = FBoneReference::IsValidToEvaluate(&(this->LookAtTarget).BoneReference,param_2);
    }
    else {
      bVar2 = (this->LookAtTarget).SocketReference.CachedSocketCompactBoneIndex !=
              (FCompactPoseBoneIndex)0xffffffff;
    }
    if (bVar2 == false) {
      return false;
    }
  }
  return true;
}

// ModifyPoseFromDeltaRotation @ 14645e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_LookAt::ModifyPoseFromDeltaRotation
          (FAnimNode_LookAt *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2,TTransform<double> *param_3,
          TQuat<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_f8 [48];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr FStack_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr FStack_b0;
  ForAnyElementType local_a8;
  double dStack_a0;
  ForAnyElementType local_98;
  double dStack_90;
  ForAnyElementType local_88;
  double dStack_80;
  ForAnyElementType local_78;
  
  local_78.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_148);
  dVar10 = (param_3->Rotation).XY.m128d_f64[0];
  dVar11 = (param_3->Rotation).XY.m128d_f64[1];
  dVar12 = (param_3->Rotation).ZW.m128d_f64[0];
  dVar13 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar14 = param_4->X;
  dVar15 = param_4->Y;
  dVar16 = param_4->Z;
  dVar17 = param_4->W;
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar9 = dVar12 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar11 * dVar17 +
          dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar16 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar7 = dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar13 * dVar17 +
          dVar11 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar13 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar10 * dVar17 +
                 dVar12 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar16 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64 = auVar8;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar14 * dVar11 * dVar3 + dVar12 * dVar17 + dVar10 * dVar15 * dVar5 +
                 dVar16 * dVar13 * dVar4;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64 = auVar6;
  FBoneReference::GetCompactPoseIndex(&this->BoneToModify,(FBoneContainer *)local_f8);
  local_f8._32_8_ = (param_3->Rotation).XY.m128d_f64[0];
  local_f8._40_8_ = *(ForElementType<unsigned_int> *)((param_3->Rotation).XY.m128d_f64 + 1);
  local_c8 = (FWeakObjectPtr)(param_3->Rotation).ZW.m128d_f64[0];
  FStack_c0 = *(FWeakObjectPtr *)((param_3->Rotation).ZW.m128d_f64 + 1);
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_b8 = (FWeakObjectPtr)(param_3->Translation).XY.m128d_f64[0];
  FStack_b0 = *(FWeakObjectPtr *)((param_3->Translation).XY.m128d_f64 + 1);
  local_a8.Data = (FScriptContainerElement *)(param_3->Translation).ZW.m128d_f64[0];
  dStack_a0 = (param_3->Translation).ZW.m128d_f64[1];
  local_f8._16_4_ = local_f8._0_4_;
  local_98.Data = (FScriptContainerElement *)(param_3->Scale3D).XY.m128d_f64[0];
  dStack_90 = (param_3->Scale3D).XY.m128d_f64[1];
  local_88.Data = (FScriptContainerElement *)(param_3->Scale3D).ZW.m128d_f64[0];
  dStack_80 = (param_3->Scale3D).ZW.m128d_f64[1];
  if ((pFVar1 <= (FScriptContainerElement *)(local_f8 + 0x10)) &&
     ((FScriptContainerElement *)(local_f8 + 0x10) < pFVar1 + (longlong)param_2->ArrayMax * 0x70)) {
    local_110 = (longlong)param_2->ArrayNum;
    local_108 = 0x70;
    local_128 = local_f8 + 0x10;
    local_120 = pFVar1;
    local_118 = (longlong)param_2->ArrayMax;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  lVar20 = (longlong)iVar19 * 0x70;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar1 + lVar20) = CONCAT44(local_f8._20_4_,local_f8._16_4_);
  *(undefined8 *)(pFVar1 + lVar20 + 8) = local_f8._24_8_;
  *(ForElementType<unsigned_int> *)(pFVar1 + lVar20 + 0x10) =
       (ForElementType<unsigned_int>)local_f8._32_8_;
  ((ForElementType<unsigned_int> *)(pFVar1 + lVar20 + 0x10))[1] =
       (ForElementType<unsigned_int>)local_f8._40_8_;
  *(FWeakObjectPtr *)(pFVar1 + lVar20 + 0x20) = local_c8;
  ((FWeakObjectPtr *)(pFVar1 + lVar20 + 0x20))[1] = FStack_c0;
  *(FWeakObjectPtr *)(pFVar1 + lVar20 + 0x30) = local_b8;
  ((FWeakObjectPtr *)(pFVar1 + lVar20 + 0x30))[1] = FStack_b0;
  *(FScriptContainerElement **)(pFVar1 + lVar20 + 0x40) = local_a8.Data;
  *(double *)(pFVar1 + lVar20 + 0x40 + 8) = dStack_a0;
  *(FScriptContainerElement **)(pFVar1 + lVar20 + 0x50) = local_98.Data;
  *(double *)(pFVar1 + lVar20 + 0x50 + 8) = dStack_90;
  *(FScriptContainerElement **)(pFVar1 + lVar20 + 0x60) = local_88.Data;
  *(double *)(pFVar1 + lVar20 + 0x60 + 8) = dStack_80;
  return;
}

// UpdateInternal @ 146474670

void __thiscall
FAnimNode_LookAt::UpdateInternal(FAnimNode_LookAt *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_LookAt::UpdateInternal");
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::UpdateInternal");
  FStatsHierarchical::EndMeasurement();
  fVar1 = param_1->DeltaTime + this->AccumulatedInterpoolationTime;
  if (this->InterpolationTime <= fVar1) {
    fVar1 = this->InterpolationTime;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  this->AccumulatedInterpoolationTime = fVar1;
  FStatsHierarchical::EndMeasurement();
  return;
}

