// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 19

// StaticStruct @ 14def0340

UScriptStruct * __cdecl FIKRetargetPelvisMotionOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp,(UObject *)pUVar1,
                         L"IKRetargetPelvisMotionOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton;
}

// Initialize @ 14def03c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetPelvisMotionOp::Initialize
          (FIKRetargetPelvisMotionOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  bool bVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FName local_res8;
  FString local_138;
  FName local_128;
  FName local_120;
  FText local_118;
  FText local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_60 = 0;
  this->field_0x1d = 0;
  uStack_68 = 0;
  (this->Source).BoneName.ComparisonIndex = 0;
  (this->Source).BoneName.Number = 0;
  *(undefined8 *)&(this->Source).BoneIndex = 0;
  (this->Source).InitialRotation.X = 0.0;
  (this->Source).InitialRotation.Y = 0.0;
  (this->Source).InitialRotation.Z = 0.0;
  (this->Source).InitialRotation.W = 0.0;
  *(undefined8 *)&(this->Source).InitialHeightInverse = 0;
  (this->Source).InitialPosition.field0_0x0._s_0.X = 0.0;
  (this->Source).InitialPosition.field0_0x0._s_0.Y = 0.0;
  (this->Source).InitialPosition.field0_0x0._s_0.Z = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.X = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.Y = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.Z = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.X = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Y = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Z = 0.0;
  local_f8 = 0;
  local_128 = (this->Settings).SourcePelvisBone.BoneName;
  (this->Source).CurrentRotation.X = 0.0;
  (this->Source).CurrentRotation.Y = 0.0;
  local_70 = 0;
  (this->Source).CurrentRotation.Z = 0.0;
  (this->Source).CurrentRotation.W = 0.0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  (this->Target).BoneName.ComparisonIndex = 0;
  (this->Target).BoneName.Number = 0;
  *(undefined8 *)&(this->Target).BoneIndex = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (this->Target).InitialPosition.field0_0x0._s_0.X = 0.0;
  (this->Target).InitialPosition.field0_0x0._s_0.Y = 0.0;
  (this->Target).InitialPosition.field0_0x0._s_0.Z = 0.0;
  (this->Target)._padding_ = 0;
  (this->Target).InitialRotation.X = 0.0;
  (this->Target).InitialRotation.Y = 0.0;
  (this->Target).InitialRotation.Z = 0.0;
  (this->Target).InitialRotation.W = 0.0;
  *(undefined8 *)&(this->Target).InitialHeight = 0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.X = 0.0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Y = 0.0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Z = 0.0;
  (this->Target).PelvisRotationDelta.X = 0.0;
  (this->Target).PelvisRotationDelta.Y = 0.0;
  (this->Target).PelvisRotationDelta.Z = 0.0;
  (this->Target).PelvisRotationDelta.W = 0.0;
  bVar1 = InitializeSource(this,local_128,param_2,param_5);
  if (!bVar1) {
    local_res8 = (FName)param_2->SkeletalMesh->_padding_;
    ::FName::ToString(&local_res8,&local_138);
    pFVar3 = FText::FromString(&local_58,&local_138);
    pFVar4 = FText::FromName(&local_48,&local_128);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_108,L"PelvisMotionOp",L"NoSourceRoot",
                        L"IK Retargeter unable to initialize source root, \'{0}\' on skeletal mesh: \'{1}\'"
                       );
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar5,Default);
    pFVar3 = FText::Format<FText,FText>(&local_118,pFVar6,pFVar4,pFVar3);
    FIKRigLogger::LogWarning(param_5,pFVar3);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  local_120 = (this->Settings).TargetPelvisBone.BoneName;
  bVar2 = InitializeTarget(this,local_120,param_3,param_5);
  if (!bVar2) {
    local_res8 = *(FName *)(param_3->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_138);
    pFVar3 = FText::FromString(&local_38,&local_138);
    pFVar4 = FText::FromName(&local_48,&local_120);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"PelvisMotionOp",L"NoTargetRoot",
                        L"IK Retargeter unable to initialize target root, \'{0}\' on skeletal mesh: \'{1}\'"
                       );
    pFVar6 = FTextFormat::FTextFormat((FTextFormat *)&local_58,pFVar5,Default);
    pFVar3 = FText::Format<FText,FText>(&local_108,pFVar6,pFVar4,pFVar3);
    FIKRigLogger::LogWarning(param_5,pFVar3);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar1) && (bVar2)) {
    this->field_0x1d = 1;
    return true;
  }
  this->field_0x1d = 0;
  return false;
}

// Run @ 14def0740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetPelvisMotionOp::Run
          (FIKRetargetPelvisMotionOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double dVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar2 = (this->Source).BoneIndex;
  uVar9 = 0;
  if ((int)uVar2 < param_3->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_98 = (longlong)(int)uVar2;
    local_90 = (longlong)param_3->ArrayNum;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  dVar11 = (double)(this->Source).InitialHeightInverse;
  lVar10 = (longlong)(int)uVar2 * 0x60;
  dVar1 = *(double *)(pFVar3 + lVar10 + 0x30);
  dVar7 = *(double *)(pFVar3 + lVar10 + 0x20 + 8);
  (this->Source).CurrentPosition.field0_0x0._s_0.X = *(double *)(pFVar3 + lVar10 + 0x20);
  (this->Source).CurrentPosition.field0_0x0._s_0.Y = dVar7;
  dVar7 = (this->Source).CurrentPosition.field0_0x0._s_0.Y;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Source).CurrentPosition.field0_0x0 + 8) = auVar6;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.X =
       dVar11 * (this->Source).CurrentPosition.field0_0x0._s_0.X;
  auVar5._8_4_ = SUB84(dVar11 * dVar1,0);
  auVar5._0_8_ = dVar11 * dVar7;
  auVar5._12_4_ = (int)((ulonglong)(dVar11 * dVar1) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Source).CurrentPositionNormalized.field0_0x0 + 8) =
       auVar5;
  dVar1 = *(double *)(pFVar3 + lVar10 + 8);
  dVar7 = *(double *)(pFVar3 + lVar10 + 0x10);
  dVar11 = *(double *)(pFVar3 + lVar10 + 0x10 + 8);
  (this->Source).CurrentRotation.X = *(double *)(pFVar3 + lVar10);
  (this->Source).CurrentRotation.Y = dVar1;
  (this->Source).CurrentRotation.Z = dVar7;
  (this->Source).CurrentRotation.W = dVar11;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  DecodePose(this,&local_88);
  FRetargetSkeleton::SetGlobalTransformAndUpdateChildren
            ((FRetargetSkeleton *)&param_1->TargetSkeleton,(this->Target).BoneIndex,&local_88,
             &(param_1->TargetSkeleton).OutputGlobalPose);
  return;
}

// OnAddedToStack @ 14def08d0

void __thiscall
FIKRetargetPelvisMotionOp::OnAddedToStack
          (FIKRetargetPelvisMotionOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  UIKRigDefinition *pUVar1;
  
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Source);
  if (pUVar1 != (UIKRigDefinition *)0x0) {
    (this->Settings).SourcePelvisBone.BoneName = (pUVar1->RetargetDefinition).RootBone;
  }
  pUVar1 = UIKRetargeter::GetIKRig(param_1,Target);
  if (pUVar1 != (UIKRigDefinition *)0x0) {
    (this->Settings).TargetPelvisBone.BoneName = (pUVar1->RetargetDefinition).RootBone;
  }
  return;
}

// OnAssignIKRig @ 14def0930

void __thiscall
FIKRetargetPelvisMotionOp::OnAssignIKRig
          (FIKRetargetPelvisMotionOp *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2
          ,FIKRetargetOpBase *param_3)

{
  longlong lVar1;
  
  if (param_2 != (UIKRigDefinition *)0x0) {
    lVar1 = 0x38;
    if (param_1 != Source) {
      lVar1 = 0x48;
    }
    *(FName *)(&this->field_0x0 + lVar1) = (param_2->RetargetDefinition).RootBone;
  }
  return;
}

// GetSettings @ 14def0960

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetPelvisMotionOp::GetSettings(FIKRetargetPelvisMotionOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14def0970

UScriptStruct * __thiscall
FIKRetargetPelvisMotionOp::GetSettingsType(FIKRetargetPelvisMotionOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOpSettings,
                         (UObject *)pUVar1,L"IKRetargetPelvisMotionOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOpSettings.OuterSingleton;
}

// GetType @ 14def09b0

UScriptStruct * __thiscall FIKRetargetPelvisMotionOp::GetType(FIKRetargetPelvisMotionOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPelvisMotionOp,(UObject *)pUVar1,
                         L"IKRetargetPelvisMotionOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetPelvisMotionOp.OuterSingleton;
}

// CollectRetargetedBones @ 14def09f0

void __thiscall
FIKRetargetPelvisMotionOp::CollectRetargetedBones
          (FIKRetargetPelvisMotionOp *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  int *piVar1;
  int local_res8 [8];
  
  piVar1 = &(this->Target).BoneIndex;
  if (*piVar1 != -1) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_1,local_res8,(bool *)piVar1);
  }
  return;
}

// DecodePose @ 14df2f560

void __thiscall
FIKRetargetPelvisMotionOp::DecodePose(FIKRetargetPelvisMotionOp *this,TTransform<double> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
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
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  ulonglong uVar27;
  double dVar28;
  undefined8 uVar29;
  TQuat<double> *pTVar30;
  TVector<double> *pTVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar46;
  undefined1 auVar42 [16];
  double dVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar57;
  undefined4 uVar58;
  undefined1 auVar56 [16];
  double dVar59;
  double dVar61;
  undefined1 auVar60 [16];
  double dStack_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  dVar10 = (this->Source).InitialRotation.Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = (this->Source).InitialRotation.W *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar1 = (this->Source).CurrentRotation.X;
  uVar3 = (this->Source).CurrentRotation.Y;
  dVar61 = (this->Source).InitialRotation.X *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar13 = (this->Source).InitialRotation.Y *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar14 = (this->Source).CurrentRotation.Z;
  dVar15 = (this->Source).CurrentRotation.W;
  auVar49._8_4_ = SUB84(dVar13,0);
  auVar49._0_8_ = dVar61;
  auVar49._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar53._8_4_ = (int)uVar3;
  auVar53._0_8_ = uVar3;
  auVar53._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  dVar37 = (this->Target).InitialRotation.X;
  dVar16 = (this->Target).InitialRotation.Y;
  dVar48 = (double)uVar1 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar15 * dVar61 +
           (double)uVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar14 * auVar49._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar24 = (double)uVar1 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar15 * dVar13 +
           auVar53._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar14 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar18 = (this->Target).InitialRotation.Z;
  dVar20 = (this->Target).InitialRotation.W;
  dVar59 = (double)uVar1 * auVar49._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar15 * dVar10 +
           (double)uVar3 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar61 = (double)uVar1 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + dVar15 * dVar11 +
           (double)uVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar10 = dVar48 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar11 = dVar48 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  auVar38._8_4_ = SUB84(dVar24,0);
  auVar38._0_8_ = dVar24;
  auVar38._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar44._8_4_ = SUB84(dVar11,0);
  auVar44._0_8_ = dVar10;
  auVar44._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dStack_110 = auVar44._8_8_;
  dVar55 = dVar10 + dVar61 * dVar37 +
           dVar24 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar59 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar57 = dStack_110 + dVar61 * dVar16 +
           auVar38._8_8_ * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar59 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar15 = dVar48 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar61 * dVar18 +
           dVar24 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar59 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar10 = dVar48 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar61 * dVar20 +
           dVar24 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar59 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar30 = UE::Math::TRotator<double>::Quaternion
                      (&(this->Settings).RotationOffsetLocal,(TQuat<double> *)local_c8);
  dVar11 = pTVar30->Z;
  dVar61 = pTVar30->W;
  dVar13 = pTVar30->X;
  dVar48 = pTVar30->Y;
  local_108._8_4_ = SUB84(dVar15,0);
  local_108._0_8_ = dVar15;
  local_108._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  uVar29 = local_108._s_0.Y;
  auVar39._8_4_ = SUB84(dVar57,0);
  auVar39._0_8_ = dVar57;
  uVar58 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar39._12_4_ = uVar58;
  local_e8._8_4_ = SUB84(dVar10,0);
  local_e8._s_0.X = dVar10;
  local_e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar21 = dVar55 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar10 * dVar13 +
           dVar57 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar15 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar22 = dVar55 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar10 * dVar48 +
           auVar39._8_8_ * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar57,0);
  auVar40._0_8_ = dVar57;
  auVar40._12_4_ = uVar58;
  dVar37 = dVar55 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar10 * dVar11 +
           dVar57 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar15 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar18 = dVar55 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar10 * dVar61 +
           auVar40._8_8_ * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + local_108._s_0.Y * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  pTVar30 = UE::Math::TRotator<double>::Quaternion
                      (&(this->Settings).RotationOffsetGlobal,(TQuat<double> *)local_c8);
  uVar2 = pTVar30->X;
  uVar4 = pTVar30->Y;
  auVar50._8_4_ = SUB84(dVar22,0);
  auVar50._0_8_ = dVar21;
  auVar50._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  dVar17 = pTVar30->Z;
  dVar19 = pTVar30->W;
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar41._8_4_ = (int)uVar4;
  auVar41._0_8_ = uVar4;
  auVar41._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  dVar46 = auVar41._8_8_ * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar10 = (this->Settings).RotationAlpha;
  dVar24 = (double)uVar2 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar21 * dVar19 +
           (double)uVar4 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar17 * auVar50._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar14 = (double)uVar2 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar22 * dVar19 + dVar46 +
           dVar17 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar61 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar48 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar16 = (double)uVar2 * auVar50._8_8_ * dVar11 + dVar19 * dVar37 +
           dVar21 * (double)uVar4 * dVar20 + dVar17 * dVar18 * dVar61;
  dVar37 = (double)uVar2 * dVar21 * dVar13 + dVar19 * dVar18 + dVar22 * (double)uVar4 * dVar59 +
           dVar17 * dVar37 * dVar48;
  auVar25._4_8_ = dVar46;
  auVar25._0_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar42._0_8_ = auVar25._0_8_ << 0x20;
  auVar42._8_4_ = SUB84(dVar37,0);
  auVar42._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  uVar34 = SUB84(dVar10,0);
  uVar36 = (uint)((ulonglong)dVar10 >> 0x20);
  dVar37 = __real_3ff0000000000000;
  if (auVar42._8_8_ * (this->Target).InitialRotation.W + dVar16 * (this->Target).InitialRotation.Z +
      dVar14 * (this->Target).InitialRotation.Y + dVar24 * (this->Target).InitialRotation.X < 0.0) {
    uVar34 = uVar34 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar36 = uVar36 ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar37 = __real_bff0000000000000;
  }
  dVar18 = (this->Target).InitialRotation.X;
  dVar46 = (this->Target).InitialRotation.Y;
  dVar37 = dVar37 - (double)CONCAT44(uVar36,uVar34);
  dVar28 = (this->Target).InitialRotation.Z;
  dVar22 = (this->Target).InitialRotation.W;
  dVar17 = dVar18 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar19 = dVar46 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar47 = dVar37 * dVar22;
  dVar21 = dVar28 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar22 = dVar22 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar18 = dVar24 * dVar10 + dVar37 * dVar18;
  dVar14 = dVar14 * dVar10 + dVar37 * dVar46;
  dVar24 = dVar16 * dVar10 + dVar37 * dVar28;
  dVar10 = auVar42._8_8_ * dVar10 + dVar47;
  auVar51._8_4_ = SUB84(dVar14,0);
  auVar51._0_8_ = dVar18;
  auVar51._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar26._4_8_ = dVar47;
  auVar26._0_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar43._0_8_ = auVar26._0_8_ << 0x20;
  auVar43._8_4_ = SUB84(dVar10,0);
  auVar43._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar37 = auVar43._8_8_;
  auVar52._0_8_ = dVar18 * dVar18 + dVar24 * dVar24;
  auVar52._8_8_ = auVar51._8_8_ * dVar14 + dVar37 * dVar37;
  dVar10 = auVar52._0_8_ + auVar52._8_8_;
  auVar7._8_4_ = SUB84(dVar10,0);
  auVar7._0_8_ = auVar52._8_8_ + auVar52._0_8_;
  auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar53 = sqrtpd(auVar52,auVar7);
  uVar32 = -(ulonglong)(__real_3e45798ee0000000 <= auVar52._8_8_ + auVar52._0_8_);
  uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= dVar10);
  uVar34 = (uint)(uVar32 >> 0x20);
  uVar36 = (uint)(uVar33 >> 0x20);
  auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar53);
  auVar53 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar53);
  auVar45._0_8_ = uVar32 & (ulonglong)(auVar44._0_8_ * dVar24);
  uVar27 = uVar33 & (ulonglong)(auVar44._8_8_ * dVar37);
  auVar45._8_4_ = (undefined4)uVar27;
  auVar45._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar56._0_8_ = (ulonglong)(auVar53._0_8_ * dVar18) & uVar32;
  uVar27 = (ulonglong)(auVar53._8_8_ * dVar14) & uVar33;
  auVar56._8_4_ = (undefined4)uVar27;
  auVar56._12_4_ = (undefined4)(uVar27 >> 0x20);
  auVar54._8_4_ = SUB84(dVar19,0);
  auVar54._0_8_ = dVar17;
  auVar54._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar60._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar60._4_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar60._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar60._12_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._4_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar12._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar12._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._12_4_ =
       ~uVar36 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  dVar24 = dVar55 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_e8._s_0.X * dVar17 +
           dVar57 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar15 * auVar54._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar14 = dVar55 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           local_e8._s_0.Y * dVar19 +
           dVar57 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           (double)uVar29 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
  ;
  dVar10 = (this->Settings).FloorConstraintWeight;
  dVar37 = (double)(this->Target).InitialHeight;
  auVar9._8_4_ = SUB84(dVar14,0);
  auVar9._0_8_ = dVar24;
  auVar9._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  (this->Target).PelvisRotationDelta.X = dVar24;
  (this->Target).PelvisRotationDelta.Y = (double)auVar9._8_8_;
  uVar34 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar36 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar5 = (double)CONCAT44(uVar36,uVar34) != __real_3e45798ee2308c3a;
  bVar6 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar36,uVar34);
  dVar11 = dVar55 * auVar54._8_8_ * dVar11 + local_e8._s_0.X * dVar21 + dVar57 * dVar17 * dVar20 +
           dVar15 * dVar22 * dVar61;
  dVar61 = dVar55 * dVar17 * dVar13 + local_e8._s_0.Y * dVar22 + dVar57 * dVar19 * dVar59 +
           (double)uVar29 * dVar21 * dVar48;
  auVar23._8_4_ = SUB84(dVar61,0);
  auVar23._0_8_ = dVar11;
  auVar23._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
  (this->Target).PelvisRotationDelta.Z = dVar11;
  (this->Target).PelvisRotationDelta.W = (double)auVar23._8_8_;
  dVar61 = dVar37 * (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Y;
  dVar11 = dVar37 * (this->Source).CurrentPositionNormalized.field0_0x0._s_0.X;
  dVar37 = dVar37 * (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Z;
  if (bVar6 && bVar5) {
    dVar13 = (this->Source).InitialPosition.field0_0x0._s_0.Z;
    dVar48 = (this->Source).CurrentPosition.field0_0x0._s_0.Z;
    dVar24 = (this->Target).InitialPosition.field0_0x0._s_0.Z;
    if (dVar13 < dVar48) {
      dVar37 = dVar37 + ((double)(float)((double)(float)(dVar24 - dVar13) + dVar48) - dVar37) *
                        dVar10;
    }
    else {
      fVar35 = (float)(dVar13 - (this->Settings).SourceCrotchOffset);
      if (fVar35 <= __real_3f800000) {
        fVar35 = __real_3f800000;
      }
      dVar37 = dVar37 + ((double)(float)((double)(((float)(dVar48 - (this->Settings).
                                                                    SourceCrotchOffset) / fVar35) *
                                                 (float)(dVar24 - (this->Settings).
                                                                  TargetCrotchOffset)) +
                                        (this->Settings).TargetCrotchOffset) - dVar37) * dVar10;
    }
  }
  local_e8._0_16_ = *(undefined1 (*) [16])&(this->Settings).TranslationOffsetLocal.field0_0x0;
  local_e8._s_0.Z = (this->Settings).TranslationOffsetLocal.field0_0x0._s_0.Z;
  dVar10 = (this->Settings).BlendToSourceTranslation;
  dVar13 = (this->Target).InitialPosition.field0_0x0._s_0.X;
  dVar48 = (this->Target).InitialPosition.field0_0x0._s_0.Y;
  dVar24 = (this->Target).InitialPosition.field0_0x0._s_0.Z;
  dVar14 = (this->Settings).ScaleHorizontal;
  local_c8 = auVar56 | auVar12;
  local_b8 = auVar60 | auVar45;
  pTVar31 = UE::Math::TQuat<double>::RotateVector
                      ((TQuat<double> *)local_c8,(TVector<double> *)&local_108._s_0,
                       (TVector<double> *)&local_e8._s_0);
  dVar15 = (this->Settings).TranslationAlpha;
  dVar13 = ((((((this->Source).CurrentPosition.field0_0x0._s_0.X - dVar11) *
               dVar10 * (this->Settings).BlendToSourceTranslationWeights.field0_0x0._s_0.X + dVar11)
             - dVar13) * dVar14 + (pTVar31->field0_0x0)._s_0.X +
            dVar13 + (this->Settings).TranslationOffsetGlobal.field0_0x0._s_0.X) - dVar13) * dVar15
           + dVar13;
  dVar48 = ((((((this->Source).CurrentPosition.field0_0x0._s_0.Y - dVar61) *
               dVar10 * (this->Settings).BlendToSourceTranslationWeights.field0_0x0._s_0.Y + dVar61)
             - dVar48) * dVar14 + dVar48 +
            (pTVar31->field0_0x0)._s_0.Y +
            (this->Settings).TranslationOffsetGlobal.field0_0x0._s_0.Y) - dVar48) * dVar15 + dVar48;
  dVar24 = (((dVar10 * (this->Settings).BlendToSourceTranslationWeights.field0_0x0._s_0.Z *
              ((this->Source).CurrentPosition.field0_0x0._s_0.Z - dVar37) + dVar37) *
             (this->Settings).ScaleVertical +
             (this->Settings).TranslationOffsetGlobal.field0_0x0._s_0.Z +
            (pTVar31->field0_0x0)._s_0.Z) - dVar24) * dVar15 + dVar24;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.X = dVar13 - dVar11;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Y = dVar48 - dVar61;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Z = dVar24 - dVar37;
  auVar8._8_4_ = SUB84(dVar48,0);
  auVar8._0_8_ = dVar13;
  auVar8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
  *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64 = auVar8;
  (param_1->Translation).ZW.m128d_f64[0] = dVar24;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar56 | auVar12;
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar60 | auVar45;
  return;
}

// EncodePose @ 14df30b40

void __thiscall
FIKRetargetPelvisMotionOp::EncodePose
          (FIKRetargetPelvisMotionOp *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  uVar2 = (this->Source).BoneIndex;
  uVar9 = 0;
  if ((int)uVar2 < param_1->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  lVar10 = (longlong)(int)uVar2 * 0x60;
  dVar11 = (double)(this->Source).InitialHeightInverse;
  dVar1 = *(double *)(pFVar3 + lVar10 + 0x30);
  dVar7 = *(double *)(pFVar3 + lVar10 + 0x20 + 8);
  (this->Source).CurrentPosition.field0_0x0._s_0.X = *(double *)(pFVar3 + lVar10 + 0x20);
  (this->Source).CurrentPosition.field0_0x0._s_0.Y = dVar7;
  dVar7 = (this->Source).CurrentPosition.field0_0x0._s_0.Y;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Source).CurrentPosition.field0_0x0 + 8) = auVar6;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.X =
       dVar11 * (this->Source).CurrentPosition.field0_0x0._s_0.X;
  auVar5._8_4_ = SUB84(dVar11 * dVar1,0);
  auVar5._0_8_ = dVar11 * dVar7;
  auVar5._12_4_ = (int)((ulonglong)(dVar11 * dVar1) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->Source).CurrentPositionNormalized.field0_0x0 + 8) =
       auVar5;
  dVar1 = *(double *)(pFVar3 + lVar10 + 8);
  dVar7 = *(double *)(pFVar3 + lVar10 + 0x10);
  dVar11 = *(double *)(pFVar3 + lVar10 + 0x10 + 8);
  (this->Source).CurrentRotation.X = *(double *)(pFVar3 + lVar10);
  (this->Source).CurrentRotation.Y = dVar1;
  (this->Source).CurrentRotation.Z = dVar7;
  (this->Source).CurrentRotation.W = dVar11;
  return;
}

// GetAffectIKWeightAsVector @ 14df34b30

TVector<double> * __thiscall
FIKRetargetPelvisMotionOp::GetAffectIKWeightAsVector
          (FIKRetargetPelvisMotionOp *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->Settings).AffectIKHorizontal;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->Settings).AffectIKVertical;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetGlobalScaleVector @ 14df383c0

TVector<double> * __thiscall
FIKRetargetPelvisMotionOp::GetGlobalScaleVector
          (FIKRetargetPelvisMotionOp *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  
  dVar1 = (this->Settings).ScaleHorizontal;
  dVar3 = (this->GlobalScaleFactor).field0_0x0._s_0.Y * dVar1;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (this->GlobalScaleFactor).field0_0x0._s_0.X * dVar1;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (this->GlobalScaleFactor).field0_0x0._s_0.Z * (this->Settings).ScaleVertical;
  return __return_storage_ptr__;
}

// GetPelvisBoneIndex @ 14df3b4c0

int __thiscall
FIKRetargetPelvisMotionOp::GetPelvisBoneIndex
          (FIKRetargetPelvisMotionOp *this,ERetargetSourceOrTarget param_1)

{
  if (param_1 == Source) {
    return (this->Source).BoneIndex;
  }
  return (this->Target).BoneIndex;
}

// GetPelvisBoneName @ 14df3b4e0

FName __thiscall
FIKRetargetPelvisMotionOp::GetPelvisBoneName
          (FIKRetargetPelvisMotionOp *this,ERetargetSourceOrTarget param_1)

{
  FName FVar1;
  FName FVar2;
  longlong lVar3;
  undefined7 in_register_00000011;
  char in_R8B;
  
  if (this->field_0x1d == '\0') {
    *(undefined8 *)CONCAT71(in_register_00000011,param_1) = 0;
    FVar1._1_7_ = in_register_00000011;
    FVar1.ComparisonIndex.Value._0_1_ = param_1;
    return FVar1;
  }
  lVar3 = 0x170;
  if (in_R8B != '\0') {
    lVar3 = 0x210;
  }
  *(undefined8 *)CONCAT71(in_register_00000011,param_1) = *(undefined8 *)(&this->field_0x0 + lVar3);
  FVar2._1_7_ = in_register_00000011;
  FVar2.ComparisonIndex.Value._0_1_ = param_1;
  return FVar2;
}

// GetPelvisTranslationOffset @ 14df3b530

TVector<double> * __thiscall
FIKRetargetPelvisMotionOp::GetPelvisTranslationOffset
          (FIKRetargetPelvisMotionOp *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Y;
  dVar1 = (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->Target).PelvisTranslationDelta.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// InitializeSource @ 14df472d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetPelvisMotionOp::InitializeSource
          (FIKRetargetPelvisMotionOp *this,FName param_1,FRetargetSkeleton *param_2,
          FIKRigLogger *param_3)

{
  uint uVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  undefined1 uVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  FName *pFVar23;
  float fVar24;
  FName local_res8;
  FName local_res10;
  FString local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FTextFormat local_c8 [11];
  
  (this->Source).BoneName = param_1;
  pFVar2 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  pFVar23 = pFVar2;
  do {
    local_res10 = param_1;
    if (pFVar23 == pFVar2 + (param_2->BoneNames).ArrayNum) {
      (this->Source).BoneIndex = -1;
LAB_14df4731c:
      local_res8 = (FName)param_2->SkeletalMesh->_padding_;
      ::FName::ToString(&local_res8,&local_128);
      pFVar15 = FText::FromString(&local_e8,&local_128);
      pFVar16 = FText::FromName(&local_d8,&local_res10);
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"PelvisMotionOp",L"MissingSourceRoot",
                           L"IK Retargeter could not find source root bone, {0} in mesh {1}");
      pFVar18 = FTextFormat::FTextFormat(local_c8,pFVar17,Default);
      pFVar15 = FText::Format<FText,FText>(&local_108,pFVar18,pFVar16,pFVar15);
      FIKRigLogger::LogWarning(param_3,pFVar15);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      if (local_f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (*pFVar23 == param_1) {
      iVar22 = (int)((longlong)pFVar23 - (longlong)pFVar2 >> 3);
      (this->Source).BoneIndex = iVar22;
      if (iVar22 != -1) {
        pTVar19 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&param_2->RetargetPoses);
        uVar1 = (this->Source).BoneIndex;
        uVar20 = 0;
        if ((int)uVar1 < pTVar19->ArrayNum) {
          uVar20 = ~uVar1 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        pFVar3 = (pTVar19->AllocatorInstance).Data;
        lVar21 = (longlong)(int)uVar1 * 0x60;
        dVar5 = *(double *)(pFVar3 + lVar21 + 0x30);
        dVar6 = *(double *)(pFVar3 + lVar21 + 0x20);
        dVar7 = *(double *)(pFVar3 + lVar21 + 0x20 + 8);
        dVar8 = *(double *)(pFVar3 + lVar21);
        dVar9 = *(double *)(pFVar3 + lVar21 + 8);
        dVar10 = *(double *)(pFVar3 + lVar21 + 0x10);
        dVar11 = *(double *)(pFVar3 + lVar21 + 0x10 + 8);
        (this->Source).CurrentPosition.field0_0x0._s_0.X = dVar6;
        (this->Source).CurrentPosition.field0_0x0._s_0.Y = dVar7;
        (this->Source).InitialPosition.field0_0x0._s_0.X = dVar6;
        (this->Source).InitialPosition.field0_0x0._s_0.Y = dVar7;
        (this->Source).CurrentPosition.field0_0x0._s_0.Z = dVar5;
        (this->Source).InitialPosition.field0_0x0._s_0.Z = dVar5;
        (this->Source).CurrentRotation.X = dVar8;
        (this->Source).CurrentRotation.Y = dVar9;
        (this->Source).CurrentRotation.Z = dVar10;
        (this->Source).CurrentRotation.W = dVar11;
        fVar12 = __real_3f800000;
        dVar6 = (this->Source).CurrentRotation.Y;
        (this->Source).InitialRotation.X = (this->Source).CurrentRotation.X;
        (this->Source).InitialRotation.Y = dVar6;
        bVar13 = (float)dVar5 < __real_38d1b717;
        (this->Source).InitialRotation.Z = dVar10;
        (this->Source).InitialRotation.W = dVar11;
        fVar24 = (float)dVar5;
        if (bVar13) {
          pFVar15 = FText::AsLocalizable_Advanced_LocText
                              (&local_118,L"PelvisMotionOp",L"BadPelvisHeight",
                               L"The source pelvis bone is very near the ground plane. This will cause the target to be moved very far. To resolve this, please create a retarget pose with the pelvis at the correct height off the ground."
                              );
          FIKRigLogger::LogError(param_3,pFVar15);
          fVar24 = fVar12;
          if (local_118.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
          }
        }
        (this->Source).InitialHeightInverse = fVar12 / fVar24;
        return true;
      }
      goto LAB_14df4731c;
    }
    pFVar23 = pFVar23 + 1;
  } while( true );
}

// InitializeTarget @ 14df47570

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetPelvisMotionOp::InitializeTarget
          (FIKRetargetPelvisMotionOp *this,FName param_1,FTargetSkeleton *param_2,
          FIKRigLogger *param_3)

{
  float fVar1;
  uint uVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  FText *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  FName *pFVar22;
  double dVar23;
  float fVar24;
  FName local_res8;
  FName local_res10;
  FString local_e8;
  FText local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FTextFormat local_98 [9];
  
  (this->Target).BoneName = param_1;
  pFVar3 = (FName *)param_2->_padding_;
  pFVar22 = pFVar3;
  do {
    local_res10 = param_1;
    if (pFVar22 == pFVar3 + (int)param_2->_padding_) {
      (this->Target).BoneIndex = -1;
LAB_14df475c3:
      local_res8 = *(FName *)(param_2->_padding_ + 0x18);
      ::FName::ToString(&local_res8,&local_e8);
      pFVar14 = FText::FromString(&local_b8,&local_e8);
      pFVar15 = FText::FromName(&local_a8,&local_res10);
      pFVar16 = FText::AsLocalizable_Advanced_LocText
                          (&local_c8,L"PelvisMotionOp",L"CountNotFindRootBone",
                           L"IK Retargeter could not find target root bone, {0} in mesh {1}");
      pFVar17 = FTextFormat::FTextFormat(local_98,pFVar16,Default);
      pFVar14 = FText::Format<FText,FText>(&local_d8,pFVar17,pFVar15,pFVar14);
      FIKRigLogger::LogWarning(param_3,pFVar14);
      if (local_d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
      }
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      return false;
    }
    if (*pFVar22 == param_1) {
      iVar21 = (int)((longlong)pFVar22 - (longlong)pFVar3 >> 3);
      (this->Target).BoneIndex = iVar21;
      if (iVar21 != -1) {
        pTVar18 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                            ((FResolvedRetargetPoseSet *)&param_2->_padding_);
        uVar2 = (this->Target).BoneIndex;
        uVar19 = 0;
        if ((int)uVar2 < pTVar18->ArrayNum) {
          uVar19 = ~uVar2 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          uVar13 = (*pcVar5)();
          return (bool)uVar13;
        }
        pFVar4 = (pTVar18->AllocatorInstance).Data;
        lVar20 = (longlong)(int)uVar2 * 0x60;
        dVar23 = *(double *)(pFVar4 + lVar20 + 0x30);
        dVar6 = *(double *)(pFVar4 + lVar20);
        dVar7 = *(double *)(pFVar4 + lVar20 + 8);
        dVar8 = *(double *)(pFVar4 + lVar20 + 0x10);
        dVar9 = *(double *)(pFVar4 + lVar20 + 0x10 + 8);
        dVar10 = *(double *)(pFVar4 + lVar20 + 0x20);
        dVar11 = *(double *)(pFVar4 + lVar20 + 0x20 + 8);
        fVar24 = (float)dVar23;
        (this->Target).InitialHeight = fVar24;
        (this->Target).InitialRotation.X = dVar6;
        (this->Target).InitialRotation.Y = dVar7;
        (this->Target).InitialRotation.Z = dVar8;
        (this->Target).InitialRotation.W = dVar9;
        fVar1 = (this->Source).InitialHeightInverse;
        (this->Target).InitialPosition.field0_0x0._s_0.X = dVar10;
        (this->Target).InitialPosition.field0_0x0._s_0.Y = dVar11;
        (this->Target).InitialPosition.field0_0x0._s_0.Z = dVar23;
        dVar23 = (double)(fVar24 * fVar1);
        (this->GlobalScaleFactor).field0_0x0._s_0.Z = dVar23;
        (this->GlobalScaleFactor).field0_0x0._s_0.X = dVar23;
        (this->GlobalScaleFactor).field0_0x0._s_0.Y = dVar23;
        return true;
      }
      goto LAB_14df475c3;
    }
    pFVar22 = pFVar22 + 1;
  } while( true );
}

// Reset @ 14df4e9c0

void __thiscall FIKRetargetPelvisMotionOp::Reset(FIKRetargetPelvisMotionOp *this)

{
  (this->Source).BoneName.ComparisonIndex = 0;
  (this->Source).BoneName.Number = 0;
  *(undefined8 *)&(this->Source).BoneIndex = 0;
  (this->Source).InitialRotation.X = 0.0;
  (this->Source).InitialRotation.Y = 0.0;
  (this->Source).InitialRotation.Z = 0.0;
  (this->Source).InitialRotation.W = 0.0;
  *(undefined8 *)&(this->Source).InitialHeightInverse = 0;
  (this->Source).InitialPosition.field0_0x0._s_0.X = 0.0;
  (this->Source).InitialPosition.field0_0x0._s_0.Y = 0.0;
  (this->Source).InitialPosition.field0_0x0._s_0.Z = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.X = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.Y = 0.0;
  (this->Source).CurrentPosition.field0_0x0._s_0.Z = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.X = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Y = 0.0;
  (this->Source).CurrentPositionNormalized.field0_0x0._s_0.Z = 0.0;
  (this->Source).CurrentRotation.X = 0.0;
  (this->Source).CurrentRotation.Y = 0.0;
  (this->Source).CurrentRotation.Z = 0.0;
  (this->Source).CurrentRotation.W = 0.0;
  (this->Target).BoneName.ComparisonIndex = 0;
  (this->Target).BoneName.Number = 0;
  *(undefined8 *)&(this->Target).BoneIndex = 0;
  (this->Target).InitialPosition.field0_0x0._s_0.X = 0.0;
  (this->Target).InitialPosition.field0_0x0._s_0.Y = 0.0;
  (this->Target).InitialPosition.field0_0x0._s_0.Z = 0.0;
  (this->Target)._padding_ = 0;
  (this->Target).InitialRotation.X = 0.0;
  (this->Target).InitialRotation.Y = 0.0;
  (this->Target).InitialRotation.Z = 0.0;
  (this->Target).InitialRotation.W = 0.0;
  *(undefined8 *)&(this->Target).InitialHeight = 0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.X = 0.0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Y = 0.0;
  (this->Target).PelvisTranslationDelta.field0_0x0._s_0.Z = 0.0;
  (this->Target).PelvisRotationDelta.X = 0.0;
  (this->Target).PelvisRotationDelta.Y = 0.0;
  (this->Target).PelvisRotationDelta.Z = 0.0;
  (this->Target).PelvisRotationDelta.W = 0.0;
  return;
}

