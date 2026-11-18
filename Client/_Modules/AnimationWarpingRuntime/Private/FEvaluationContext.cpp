// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// FEvaluationContext @ 14a71bc50

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

FEvaluationContext * __thiscall
UE::Anim::FootPlacement::FEvaluationContext::FEvaluationContext
          (FEvaluationContext *this,FComponentSpacePoseContext *param_1,TVector<double> *param_2,
          float param_3)

{
  TTransform<double> *pTVar1;
  double dVar2;
  int iVar3;
  FComponentSpacePoseContext *pFVar4;
  longlong lVar5;
  UActorComponent *this_00;
  AActor *pAVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  FEvaluationContext *pFVar15;
  UWorld *pUVar16;
  UClass *pUVar17;
  IAnimRootMotionProvider *pIVar18;
  UCharacterMovementComponent *pUVar19;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  uVar24 = _UNK_15066df7c;
  uVar23 = _UNK_15066df78;
  uVar13 = __xmm_80000000000000008000000000000000._4_4_;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  pTVar1 = &this->RootMotionTransformDelta;
  this->CSPContext = param_1;
  pUVar19 = (UCharacterMovementComponent *)0x0;
  this->OwningActor = (AActor *)0x0;
  this->World = (UWorld *)0x0;
  this->MovementComponent = (UCharacterMovementComponent *)0x0;
  *&(this->OwningComponentToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OwningComponentToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OwningComponentToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OwningComponentToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OwningComponentToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OwningComponentToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(pTVar1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootMotionTransformDelta).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootMotionTransformDelta).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->UpdateDeltaTime = param_3;
  uVar22 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^ uVar13;
  uVar23 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^ uVar23;
  uVar24 = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^ uVar24;
  uVar28 = SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0);
  uVar11 = (ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >> 0x20;
  *(uint *)&(this->ApproachDirWS).field0_0x0 =
       UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^ uVar12;
  *(uint *)((longlong)&(this->ApproachDirWS).field0_0x0 + 4) = uVar22;
  *(uint *)((longlong)&(this->ApproachDirWS).field0_0x0 + 8) = uVar23;
  *(uint *)((longlong)&(this->ApproachDirWS).field0_0x0 + 0xc) = uVar24;
  (this->ApproachDirWS).field0_0x0._s_0.Z = (double)CONCAT44((uint)uVar11 ^ uVar13,uVar28 ^ uVar12);
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  pFVar4 = this->CSPContext;
  (this->ApproachDirCS).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->ApproachDirCS).field0_0x0._s_0.Y = dVar2;
  (this->ApproachDirCS).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  lVar5 = pFVar4->_padding_;
  if (*(longlong *)(lVar5 + 0x158) == 0) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_2821110184175206020>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                        ,0x17c,"SkeletalMeshComponent");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      pFVar15 = (FEvaluationContext *)(*pcVar7)();
      return pFVar15;
    }
  }
  this_00 = *(UActorComponent **)(lVar5 + 0x158);
  this->OwningActor = this_00->OwnerPrivate;
  pUVar16 = this_00->WorldPrivate;
  if (pUVar16 == (UWorld *)0x0) {
    pUVar16 = UActorComponent::GetWorld_Uncached(this_00);
  }
  pAVar6 = this->OwningActor;
  this->World = pUVar16;
  if (pAVar6 != (AActor *)0x0) {
    pUVar17 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar3 = (int)pUVar17->_padding_;
    if ((iVar3 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar17->_padding_)) {
      pUVar19 = *(UCharacterMovementComponent **)
                 &pAVar6[1].AttachmentReplication.LocationOffset.field_0x10;
    }
  }
  this->MovementComponent = pUVar19;
  pFVar10 = this_00[2].AssetUserData.AllocatorInstance.Data;
  (this->OwningComponentToWorld).Rotation.XY.m128d_f64[0] =
       *(double *)&this_00[2].ComponentTags.ArrayNum;
  (this->OwningComponentToWorld).Rotation.XY.m128d_f64[1] = (double)pFVar10;
  dVar2 = *(double *)&this_00[2].field_0x88;
  (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] =
       *(double *)&this_00[2].AssetUserData.ArrayNum;
  (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)&this_00[2].field_0x98;
  (this->OwningComponentToWorld).Translation.XY.m128d_f64[0] =
       *(double *)&this_00[2].UCSSerializationIndex;
  (this->OwningComponentToWorld).Translation.XY.m128d_f64[1] = dVar2;
  pAVar6 = this_00[2].OwnerPrivate;
  (this->OwningComponentToWorld).Translation.ZW.m128d_f64[0] =
       (double)this_00[2].PhysicsStateAsyncCreationScene;
  (this->OwningComponentToWorld).Translation.ZW.m128d_f64[1] = (double)pAVar6;
  dVar2 = *(double *)&this_00[2].field_0xb8;
  (this->OwningComponentToWorld).Scale3D.XY.m128d_f64[0] = (double)this_00[2].WorldPrivate;
  (this->OwningComponentToWorld).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (double)this_00[3]._padding_;
  (this->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0] = (double)this_00[3]._padding_;
  (this->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] = dVar2;
  auVar34 = *(undefined1 (*) [16])&(this->ApproachDirCS).field0_0x0;
  dVar2 = (this->ApproachDirCS).field0_0x0._s_0.Z;
  auVar26 = *(undefined1 (*) [16])(this->OwningComponentToWorld).Rotation.XY.m128d_f64;
  dVar9 = (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
  auVar25 = blendpd(auVar26,*(undefined1 (*) [16])
                             (this->OwningComponentToWorld).Rotation.ZW.m128d_f64,2);
  dVar8 = auVar34._8_8_;
  auVar35._0_8_ = dVar8 * auVar26._0_8_ - auVar26._8_8_ * auVar34._0_8_;
  auVar35._8_8_ =
       dVar2 * auVar26._8_8_ - (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] * dVar8;
  auVar26 = *(undefined1 (*) [16])(this->OwningComponentToWorld).Rotation.XY.m128d_f64;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar2;
  auVar20 = blendpd(auVar34,auVar20,2);
  auVar21._0_8_ =
       auVar20._0_8_ * (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] -
       auVar25._0_8_ * dVar2;
  auVar21._8_8_ =
       auVar20._8_8_ * (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[1] - auVar25._8_8_ * 0.0
  ;
  auVar20 = blendpd(auVar35,auVar21,2);
  dVar29 = auVar35._8_8_ + auVar35._8_8_;
  dVar30 = auVar21._0_8_ + auVar21._0_8_;
  auVar36._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar36._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar32._8_4_ = SUB84(dVar30,0);
  auVar32._0_8_ = dVar29;
  auVar32._12_4_ = uVar31;
  auVar25._8_4_ = SUB84(dVar30,0);
  auVar25._0_8_ = dVar29;
  auVar25._12_4_ = uVar31;
  auVar20 = blendpd(auVar26,*(undefined1 (*) [16])
                             (this->OwningComponentToWorld).Rotation.ZW.m128d_f64,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar29;
  auVar33._8_8_ =
       auVar36._0_8_ * auVar26._8_8_ -
       (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] * dVar30;
  auVar26 = blendpd(auVar25,auVar36,2);
  auVar27._0_8_ =
       auVar26._0_8_ * (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] -
       auVar20._0_8_ * auVar36._0_8_;
  auVar27._8_8_ =
       auVar26._8_8_ * (this->OwningComponentToWorld).Rotation.ZW.m128d_f64[1] -
       auVar20._8_8_ * auVar36._8_8_;
  auVar26._8_4_ = SUB84(auVar33._8_8_,0);
  auVar26._0_8_ = auVar33._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  (this->ApproachDirWS).field0_0x0._s_0.X = auVar26._8_8_ + dVar29 * dVar9 + auVar34._0_8_;
  (this->ApproachDirWS).field0_0x0._s_0.Y = auVar27._0_8_ + dVar30 * dVar9 + dVar8;
  auVar34 = blendpd(auVar33,auVar27,2);
  (this->ApproachDirWS).field0_0x0._s_0.Z = auVar34._0_8_ + auVar36._0_8_ * dVar9 + dVar2;
  *&(pTVar1->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->RootMotionTransformDelta).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->RootMotionTransformDelta).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->RootMotionTransformDelta).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  pIVar18 = IAnimRootMotionProvider::Get();
  if (pIVar18 != (IAnimRootMotionProvider *)0x0) {
    (**(code **)((longlong)*pIVar18 + 0x20))(pIVar18,&this->CSPContext->CustomAttributes,pTVar1);
  }
  return this;
}

