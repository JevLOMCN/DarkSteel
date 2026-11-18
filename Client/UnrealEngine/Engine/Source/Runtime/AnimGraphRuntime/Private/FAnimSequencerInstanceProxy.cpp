// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 22

// StaticStruct @ 1463efa20

UScriptStruct * __cdecl FAnimSequencerInstanceProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSequencerInstanceProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimSequencerInstanceProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequencerInstanceProxy,(UObject *)pUVar1,
                         L"AnimSequencerInstanceProxy");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSequencerInstanceProxy.OuterSingleton;
}

// Initialize @ 1463efa60

void __thiscall
FAnimSequencerInstanceProxy::Initialize(FAnimSequencerInstanceProxy *this,UAnimInstance *param_1)

{
  FAnimInstanceProxy::Initialize((FAnimInstanceProxy *)this,param_1);
  (**(code **)(this->_padding_ + 0xa8))(this);
  (this->FullBodyBlendNode).bNormalizeAlpha = true;
  (this->FullBodyBlendNode).bAdditiveNode = false;
  (this->AdditiveBlendNode).bAdditiveNode = true;
  (this->AdditiveBlendNode).bNormalizeAlpha = false;
  FAnimNode_MultiWayBlend::ResetPoses(&this->FullBodyBlendNode);
  FAnimNode_MultiWayBlend::ResetPoses(&this->AdditiveBlendNode);
  (this->SnapshotNode).SnapshotName = UAnimSequencerInstance::SequencerPoseName;
  ClearSequencePlayerAndMirrorMaps(this);
  *(undefined4 *)&this->_padding_ = 0xffff;
  this->_padding_ = -1;
  if ((this->RootMotionOverride).bIsSet != false) {
    (this->RootMotionOverride).bIsSet = false;
  }
  return;
}

// Evaluate @ 1463efb00

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FAnimSequencerInstanceProxy::Evaluate(FAnimSequencerInstanceProxy *this,FPoseContext *param_1)

{
  TTransform<double> *pTVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  double *pdVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  undefined1 auVar22 [12];
  __m128d _Var23;
  __m128d _Var24;
  __m128d _Var25;
  __m128d _Var26;
  __m128d _Var27;
  bool bVar28;
  undefined1 uVar29;
  uint uVar30;
  FRootMotionOverride *pFVar31;
  longlong lVar32;
  int iVar33;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  (**(code **)((this->SequencerRootNode)._padding_ + 0x18))();
  if ((this->RootMotionOverride).bIsSet != false) {
    if ((this->RootMotionOverride).TypedValue.bBlendFirstChildOfRoot == false) {
      iVar2 = *(int *)&(param_1->Pose).field_0x8;
      iVar33 = 0;
      if (iVar2 != 0) {
        do {
          if (iVar33 == 0) {
            dVar12 = (this->RootMotionOverride).TypedValue.RootMotion.Rotation.ZW.m128d_f64[0];
            dVar13 = (this->RootMotionOverride).TypedValue.RootMotion.Rotation.ZW.m128d_f64[1];
            dVar14 = (this->RootMotionOverride).TypedValue.RootMotion.Translation.XY.m128d_f64[0];
            dVar15 = (this->RootMotionOverride).TypedValue.RootMotion.Translation.XY.m128d_f64[1];
            pTVar1 = &(this->RootMotionOverride).TypedValue.RootMotion;
            local_78 = *(undefined4 *)(pTVar1->Rotation).XY.m128d_f64;
            uStack_74 = *(undefined4 *)
                         ((longlong)
                          (this->RootMotionOverride).TypedValue.RootMotion.Rotation.XY.m128d_f64 + 4
                         );
            uStack_70 = *(undefined4 *)
                         ((this->RootMotionOverride).TypedValue.RootMotion.Rotation.XY.m128d_f64 + 1
                         );
            auVar22 = *(undefined1 (*) [12])(pTVar1->Rotation).XY.m128d_f64;
            uVar8 = *(undefined4 *)
                     ((longlong)
                      (this->RootMotionOverride).TypedValue.RootMotion.Rotation.XY.m128d_f64 + 0xc);
            dVar16 = (this->RootMotionOverride).TypedValue.RootMotion.Translation.ZW.m128d_f64[0];
            dVar17 = (this->RootMotionOverride).TypedValue.RootMotion.Translation.ZW.m128d_f64[1];
            dVar18 = (this->RootMotionOverride).TypedValue.RootMotion.Scale3D.XY.m128d_f64[0];
            dVar19 = (this->RootMotionOverride).TypedValue.RootMotion.Scale3D.XY.m128d_f64[1];
            dVar20 = (this->RootMotionOverride).TypedValue.RootMotion.Scale3D.ZW.m128d_f64[0];
            dVar21 = (this->RootMotionOverride).TypedValue.RootMotion.Scale3D.ZW.m128d_f64[1];
            if (*(int *)&(param_1->Pose).field_0x8 < 1) {
              bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar28) {
                pcVar7 = (code *)swi(3);
                uVar29 = (*pcVar7)();
                return (bool)uVar29;
              }
              local_78 = auVar22._0_4_;
              uStack_74 = auVar22._4_4_;
              uStack_70 = auVar22._8_4_;
            }
            puVar6 = *(undefined4 **)&param_1->Pose;
            *puVar6 = local_78;
            puVar6[1] = uStack_74;
            puVar6[2] = uStack_70;
            puVar6[3] = uVar8;
            *(double *)(puVar6 + 4) = dVar12;
            *(double *)(puVar6 + 6) = dVar13;
            *(double *)(puVar6 + 8) = dVar14;
            *(double *)(puVar6 + 10) = dVar15;
            *(double *)(puVar6 + 0xc) = dVar16;
            *(double *)(puVar6 + 0xe) = dVar17;
            *(double *)(puVar6 + 0x10) = dVar18;
            *(double *)(puVar6 + 0x12) = dVar19;
            *(double *)(puVar6 + 0x14) = dVar20;
            *(double *)(puVar6 + 0x16) = dVar21;
            break;
          }
          iVar33 = iVar33 + 1;
        } while (iVar33 != iVar2);
      }
    }
    else if ((this->RootMotionOverride).TypedValue.ChildBoneIndex != -1) {
      lVar4 = *(longlong *)&(param_1->Pose).field_0x10;
      if (((this->RootMotionOverride).bIsSet == false) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar28)) {
        pcVar7 = (code *)swi(3);
        uVar29 = (*pcVar7)();
        return (bool)uVar29;
      }
      uVar3 = (this->RootMotionOverride).TypedValue.ChildBoneIndex;
      if (((int)uVar3 < 0) || (*(int *)(lVar4 + 0x88) <= (int)uVar3)) {
        bVar28 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8192494858347217512>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                            ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
        if (bVar28) {
          pcVar7 = (code *)swi(3);
          uVar29 = (*pcVar7)();
          return (bool)uVar29;
        }
      }
      else {
        uVar30 = 0;
        if ((int)uVar3 < *(int *)(lVar4 + 0x88)) {
          uVar30 = ~uVar3 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar7 = (code *)swi(3);
          uVar29 = (*pcVar7)();
          return (bool)uVar29;
        }
        uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x80) + (longlong)(int)uVar3 * 4);
        if (uVar3 != 0xffffffff) {
          pFVar31 = TOptional<FRootMotionOverride>::GetValue(&this->RootMotionOverride);
          dVar12 = (pFVar31->RootMotion).Rotation.ZW.m128d_f64[0];
          dVar13 = (pFVar31->RootMotion).Rotation.ZW.m128d_f64[1];
          dVar14 = (pFVar31->RootMotion).Translation.XY.m128d_f64[0];
          dVar15 = (pFVar31->RootMotion).Translation.XY.m128d_f64[1];
          local_78 = *(undefined4 *)(pFVar31->RootMotion).Rotation.XY.m128d_f64;
          uStack_74 = *(undefined4 *)((longlong)(pFVar31->RootMotion).Rotation.XY.m128d_f64 + 4);
          uStack_70 = *(undefined4 *)((pFVar31->RootMotion).Rotation.XY.m128d_f64 + 1);
          auVar22 = *(undefined1 (*) [12])(pFVar31->RootMotion).Rotation.XY.m128d_f64;
          uVar8 = *(undefined4 *)((longlong)(pFVar31->RootMotion).Rotation.XY.m128d_f64 + 0xc);
          dVar16 = (pFVar31->RootMotion).Translation.ZW.m128d_f64[0];
          dVar17 = (pFVar31->RootMotion).Translation.ZW.m128d_f64[1];
          dVar18 = (pFVar31->RootMotion).Scale3D.XY.m128d_f64[0];
          dVar19 = (pFVar31->RootMotion).Scale3D.XY.m128d_f64[1];
          dVar20 = (pFVar31->RootMotion).Scale3D.ZW.m128d_f64[0];
          dVar21 = (pFVar31->RootMotion).Scale3D.ZW.m128d_f64[1];
          uVar30 = 0;
          if ((int)uVar3 < *(int *)&(param_1->Pose).field_0x8) {
            uVar30 = ~uVar3 >> 0x1f;
          }
          if (uVar30 == 0) {
            bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar28) {
              pcVar7 = (code *)swi(3);
              uVar29 = (*pcVar7)();
              return (bool)uVar29;
            }
            local_78 = auVar22._0_4_;
            uStack_74 = auVar22._4_4_;
            uStack_70 = auVar22._8_4_;
          }
          lVar4 = *(longlong *)&param_1->Pose;
          lVar32 = (longlong)(int)uVar3 * 0x60;
          puVar6 = (undefined4 *)(lVar32 + lVar4);
          *puVar6 = local_78;
          puVar6[1] = uStack_74;
          puVar6[2] = uStack_70;
          puVar6[3] = uVar8;
          pdVar5 = (double *)(lVar32 + 0x10 + lVar4);
          *pdVar5 = dVar12;
          pdVar5[1] = dVar13;
          pdVar5 = (double *)(lVar32 + 0x20 + lVar4);
          *pdVar5 = dVar14;
          pdVar5[1] = dVar15;
          pdVar5 = (double *)(lVar32 + 0x30 + lVar4);
          *pdVar5 = dVar16;
          pdVar5[1] = dVar17;
          pdVar5 = (double *)(lVar32 + 0x40 + lVar4);
          *pdVar5 = dVar18;
          pdVar5[1] = dVar19;
          pdVar5 = (double *)(lVar32 + 0x50 + lVar4);
          *pdVar5 = dVar20;
          pdVar5[1] = dVar21;
        }
      }
    }
  }
  if ((this->RootBoneTransform).bIsSet != false) {
    (this->RootBoneTransform).bIsSet = false;
  }
  if (this->SwapRootBone != SwapRootBone_None) {
    iVar2 = *(int *)&(param_1->Pose).field_0x8;
    iVar33 = 0;
    if (iVar2 != 0) {
      do {
        if (iVar33 == 0) {
          if ((iVar2 < 1) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            uVar29 = (*pcVar7)();
            return (bool)uVar29;
          }
          pdVar5 = *(double **)&param_1->Pose;
          if ((TOptional<UE::Math::TTransform<double>_> *)pdVar5 != &this->RootBoneTransform) {
            dVar12 = pdVar5[1];
            (this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64[0] = *pdVar5;
            (this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar12;
            dVar12 = pdVar5[3];
            (this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64[0] = pdVar5[2];
            (this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar12;
            dVar12 = pdVar5[5];
            (this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64[0] = pdVar5[4];
            (this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar12;
            dVar12 = pdVar5[7];
            (this->RootBoneTransform).TypedValue.Translation.ZW.m128d_f64[0] = pdVar5[6];
            (this->RootBoneTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar12;
            dVar12 = pdVar5[9];
            (this->RootBoneTransform).TypedValue.Scale3D.XY.m128d_f64[0] = pdVar5[8];
            (this->RootBoneTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar12;
            dVar12 = pdVar5[0xb];
            (this->RootBoneTransform).TypedValue.Scale3D.ZW.m128d_f64[0] = pdVar5[10];
            (this->RootBoneTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar12;
            (this->RootBoneTransform).bIsSet = true;
          }
          _Var27.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          _Var26.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          _Var25.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          _Var23.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          uVar8 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          uVar9 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          uVar10 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          uVar11 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          if ((*(int *)&(param_1->Pose).field_0x8 < 1) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar7 = (code *)swi(3);
            uVar29 = (*pcVar7)();
            return (bool)uVar29;
          }
          puVar6 = *(undefined4 **)&param_1->Pose;
          *puVar6 = uVar8;
          puVar6[1] = uVar9;
          puVar6[2] = uVar10;
          puVar6[3] = uVar11;
          local_28 = _Var23.m128d_f64[0];
          dStack_20 = _Var23.m128d_f64[1];
          *(double *)(puVar6 + 4) = local_28;
          *(double *)(puVar6 + 6) = dStack_20;
          local_38 = _Var24.m128d_f64[0];
          dStack_30 = _Var24.m128d_f64[1];
          *(double *)(puVar6 + 8) = local_38;
          *(double *)(puVar6 + 10) = dStack_30;
          local_48 = _Var25.m128d_f64[0];
          dStack_40 = _Var25.m128d_f64[1];
          *(double *)(puVar6 + 0xc) = local_48;
          *(double *)(puVar6 + 0xe) = dStack_40;
          local_58 = _Var26.m128d_f64[0];
          dStack_50 = _Var26.m128d_f64[1];
          *(double *)(puVar6 + 0x10) = local_58;
          *(double *)(puVar6 + 0x12) = dStack_50;
          local_68 = _Var27.m128d_f64[0];
          dStack_60 = _Var27.m128d_f64[1];
          *(double *)(puVar6 + 0x14) = local_68;
          *(double *)(puVar6 + 0x16) = dStack_60;
          return true;
        }
        iVar33 = iVar33 + 1;
      } while (iVar33 != iVar2);
    }
  }
  return true;
}

// PostEvaluate @ 1463efff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FAnimSequencerInstanceProxy::PostEvaluate(FAnimSequencerInstanceProxy *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *pUVar3;
  TRotator<double> *pTVar4;
  TVector<double>_u_0 *pTVar5;
  TRotator<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_268 [32];
  TRotator<double> local_208;
  TVector<double>_u_0 local_1e8;
  TRotator<double> local_1c8;
  TVector<double>_u_0 local_1a8;
  TQuat<double> local_188;
  TQuat<double> local_168;
  TRotator<double> local_148;
  TRotator<double> local_130 [3];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((this->_padding_ == 0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2821110184175206020>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                         ,0x17c,"SkeletalMeshComponent"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->_padding_ == 0) {
    return;
  }
  if (this->SwapRootBone == SwapRootBone_None) {
    return;
  }
  if ((this->RootBoneTransform).bIsSet == false) {
    return;
  }
  local_d8 = (this->RootBoneTransform).TypedValue.Scale3D.XY.m128d_f64[0];
  dStack_d0 = (this->RootBoneTransform).TypedValue.Scale3D.XY.m128d_f64[1];
  local_c8 = (this->RootBoneTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
  dStack_c0 = (this->RootBoneTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
  uVar7 = *(undefined4 *)(this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64;
  uVar8 = *(undefined4 *)((longlong)(this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64 + 4);
  uVar9 = *(undefined4 *)((this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64 + 1);
  uVar10 = *(undefined4 *)
            ((longlong)(this->RootBoneTransform).TypedValue.Rotation.XY.m128d_f64 + 0xc);
  uVar11 = *(undefined4 *)(this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64;
  uVar12 = *(undefined4 *)((longlong)(this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64 + 4)
  ;
  uVar13 = *(undefined4 *)((this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64 + 1);
  uVar14 = *(undefined4 *)
            ((longlong)(this->RootBoneTransform).TypedValue.Rotation.ZW.m128d_f64 + 0xc);
  uVar15 = *(undefined4 *)(this->RootBoneTransform).TypedValue.Translation.ZW.m128d_f64;
  uVar16 = *(undefined4 *)
            ((longlong)(this->RootBoneTransform).TypedValue.Translation.ZW.m128d_f64 + 4);
  uVar17 = *(undefined4 *)(this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64;
  uVar18 = *(undefined4 *)
            ((longlong)(this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64 + 4);
  uVar19 = *(undefined4 *)((this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64 + 1);
  uVar20 = *(undefined4 *)
            ((longlong)(this->RootBoneTransform).TypedValue.Translation.XY.m128d_f64 + 0xc);
  if ((this->InitialTransform).bIsSet != false) {
    if (((this->RootBoneTransform).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->InitialTransform).bIsSet == false) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_b8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_b8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_b8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_b8,&(this->RootBoneTransform).TypedValue,&(this->InitialTransform).TypedValue)
    ;
    uVar7 = local_b8.Rotation.XY.m128d_f64[0]._0_4_;
    uVar8 = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
    uVar9 = local_b8.Rotation.XY.m128d_f64[1]._0_4_;
    uVar10 = local_b8.Rotation.XY.m128d_f64[1]._4_4_;
    uVar11 = local_b8.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar12 = local_b8.Rotation.ZW.m128d_f64[0]._4_4_;
    uVar13 = local_b8.Rotation.ZW.m128d_f64[1]._0_4_;
    uVar14 = local_b8.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar15 = local_b8.Translation.ZW.m128d_f64[0]._0_4_;
    uVar16 = local_b8.Translation.ZW.m128d_f64[0]._4_4_;
    uVar17 = local_b8.Translation.XY.m128d_f64[0]._0_4_;
    uVar18 = local_b8.Translation.XY.m128d_f64[0]._4_4_;
    uVar19 = local_b8.Translation.XY.m128d_f64[1]._0_4_;
    uVar20 = local_b8.Translation.XY.m128d_f64[1]._4_4_;
  }
  if (this->SwapRootBone == SwapRootBone_Component) {
    pUVar3 = FAnimInstanceProxy::GetSkelMeshComponent((FAnimInstanceProxy *)this);
    local_188.X._0_4_ = uVar7;
    local_188.X._4_4_ = uVar8;
    local_188.Y._0_4_ = uVar9;
    local_188.Y._4_4_ = uVar10;
    local_188.Z._0_4_ = uVar11;
    local_188.Z._4_4_ = uVar12;
    local_188.W._0_4_ = uVar13;
    local_188.W._4_4_ = uVar14;
    pTVar4 = UE::Math::TQuat<double>::Rotator(&local_188,&local_148);
    local_1e8._s_0.Z = (double)CONCAT44(uVar16,uVar15);
    pTVar6 = &local_208;
    pTVar5 = &local_1e8;
    local_208.Pitch = pTVar4->Pitch;
    local_208.Yaw = pTVar4->Yaw;
    local_208.Roll = pTVar4->Roll;
    local_1e8._0_4_ = uVar17;
    local_1e8._4_4_ = uVar18;
    local_1e8._8_4_ = uVar19;
    local_1e8._12_4_ = uVar20;
  }
  else {
    if (this->SwapRootBone != SwapRootBone_Actor) {
      return;
    }
    pUVar3 = FAnimInstanceProxy::GetSkelMeshComponent((FAnimInstanceProxy *)this);
    if (pUVar3->_padding_ == 0) {
      return;
    }
    pUVar3 = *(USkeletalMeshComponent **)(pUVar3->_padding_ + 0x1b8);
    if (pUVar3 == (USkeletalMeshComponent *)0x0) {
      return;
    }
    local_168.X._0_4_ = uVar7;
    local_168.X._4_4_ = uVar8;
    local_168.Y._0_4_ = uVar9;
    local_168.Y._4_4_ = uVar10;
    local_168.Z._0_4_ = uVar11;
    local_168.Z._4_4_ = uVar12;
    local_168.W._0_4_ = uVar13;
    local_168.W._4_4_ = uVar14;
    pTVar4 = UE::Math::TQuat<double>::Rotator(&local_168,local_130);
    local_1a8._s_0.Z = (double)CONCAT44(uVar16,uVar15);
    pTVar6 = &local_1c8;
    pTVar5 = &local_1a8;
    local_1c8.Pitch = pTVar4->Pitch;
    local_1c8.Yaw = pTVar4->Yaw;
    local_1c8.Roll = pTVar4->Roll;
    local_1a8._0_4_ = uVar17;
    local_1a8._4_4_ = uVar18;
    local_1a8._8_4_ = uVar19;
    local_1a8._12_4_ = uVar20;
  }
  USceneComponent::SetRelativeLocationAndRotation
            ((USceneComponent *)pUVar3,(TVector<double> *)&pTVar5->_s_0,pTVar6,false,
             (FHitResult *)0x0,None);
  return;
}

// UpdateAnimationNode @ 1463f0330

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimationNode
          (FAnimSequencerInstanceProxy *this,FAnimationUpdateContext *param_1)

{
  *(short *)&this->_padding_ = (short)this->_padding_ + 1;
  this->_padding_ = GFrameCounter;
  if ((short)this->_padding_ == -1) {
    *(undefined2 *)&this->_padding_ = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001463f0362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->SequencerRootNode)._padding_ + 0x10))();
  return;
}

// ResetNodes @ 1463f03f0

void __thiscall FAnimSequencerInstanceProxy::ResetNodes(FAnimSequencerInstanceProxy *this)

{
  memset((this->FullBodyBlendNode).DesiredAlphas.AllocatorInstance.Data,0,
         (longlong)(this->FullBodyBlendNode).DesiredAlphas.ArrayMax << 2);
  memset((this->AdditiveBlendNode).DesiredAlphas.AllocatorInstance.Data,0,
         (longlong)(this->AdditiveBlendNode).DesiredAlphas.ArrayMax << 2);
  return;
}

// ResetPose @ 1463f0440

void __thiscall FAnimSequencerInstanceProxy::ResetPose(FAnimSequencerInstanceProxy *this)

{
  FPoseLinkBase::SetLinkNode
            ((FPoseLinkBase *)&(this->SequencerRootNode).Base,(FAnimNode_Base *)&this->SnapshotNode)
  ;
  return;
}

// ConstructNodes @ 1463f0460

void __thiscall FAnimSequencerInstanceProxy::ConstructNodes(FAnimSequencerInstanceProxy *this)

{
  FPoseLinkBase::SetLinkNode
            ((FPoseLinkBase *)&(this->SequencerRootNode).Base,
             (FAnimNode_Base *)&this->FullBodyBlendNode);
  FPoseLinkBase::SetLinkNode
            ((FPoseLinkBase *)&(this->SequencerRootNode).Additive,
             (FAnimNode_Base *)&this->AdditiveBlendNode);
  return;
}

// AddReferencedObjects @ 1463f04a0

void __thiscall
FAnimSequencerInstanceProxy::AddReferencedObjects
          (FAnimSequencerInstanceProxy *this,UAnimInstance *param_1,FReferenceCollector *param_2)

{
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *pTVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  code *pcVar9;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *pTVar10;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *pTVar11;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *pTVar12;
  bool bVar13;
  char cVar14;
  FName *pFVar15;
  UPackage *pUVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_res20 [8];
  undefined1 local_148 [8];
  ulonglong local_140;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *local_f8;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *local_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  FAnimInstanceProxy::AddReferencedObjects((FAnimInstanceProxy *)this,param_1,param_2);
  puVar3 = &(this->SequencerToPlayerMap).field_0x10;
  iVar4 = *(int *)&(this->SequencerToPlayerMap).field_0x28;
  local_138 = &this->SequencerToPlayerMap;
  local_140 = 1;
  iStack_130 = 0;
  local_118 = 0;
  uStack_12c = 1;
  iStack_11c = 0;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->SequencerToPlayerMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar3;
    }
    uStack_12c = *puVar21;
    local_118 = 0;
    while (uStack_12c == 0) {
      lVar17 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      uStack_12c = 1;
      iStack_11c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_1463f056e;
      uStack_12c = puVar21[lVar17 + 1];
    }
    uStack_12c = -uStack_12c & uStack_12c;
    uVar2 = (ulonglong)uStack_12c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_108 = (int)lVar17;
    iStack_11c = local_108 + -1 + local_118;
    if (iVar4 < iStack_11c) {
      iStack_11c = iVar4;
    }
  }
LAB_1463f056e:
  uStack_114 = local_44;
  iStack_110 = *(int *)&(this->SequencerToPlayerMap).field_0x8 -
               *(int *)&(this->SequencerToPlayerMap).field_0x34;
  uVar19 = *(uint *)&(this->SequencerToPlayerMap).field_0x28;
  uVar22 = uVar19 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_12c,iStack_130);
  uStack_120 = 0xffffffff;
  TStack_b8.CurrentBitIndex = iStack_11c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar19 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = local_118;
  uStack_98 = CONCAT44(uStack_10c,iStack_110);
  local_128 = puVar3;
  local_f8 = local_138;
  local_c0 = local_138;
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = local_f8;
  uVar5 = *(uint *)&(this->SequencerToPlayerMap).field_0x28;
  if (uVar19 != uVar5) {
    puVar20 = *(undefined1 **)&(this->SequencerToPlayerMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1463f06a0;
      uVar19 = *(uint *)(puVar20 + lVar17 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_104 = (int)lVar17;
    uVar19 = local_104 + -1 + uVar22;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_1463f06a0:
  while( true ) {
    pTVar11 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSequencerPlayerBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    lVar17 = (longlong)TStack_b8.CurrentBitIndex;
    if (((TStack_b8.CurrentBitIndex == uVar19) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar11 == pTVar10)
       ) break;
    lVar6 = *(longlong *)pTVar11;
    plVar7 = *(longlong **)(lVar6 + 8 + lVar17 * 0x18);
    pcVar9 = *(code **)(*plVar7 + 8);
    pFVar15 = FSequencerPlayerAnimSequence::GetTypeId();
    cVar14 = (*pcVar9)(plVar7,pFVar15);
    if (cVar14 != '\0') {
      lVar17 = *(longlong *)(lVar6 + lVar17 * 0x18 + 8);
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar16 = Z_Construct_UPackage__Script_AnimGraphRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone,
                             (UObject *)pUVar16,L"AnimNode_SequenceEvaluator_Standalone");
      }
      FReferenceCollector::AddPropertyReferencesWithStructARO
                (param_2,Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator_Standalone.
                         OuterSingleton,(void *)(lVar17 + 0xf0),(UObject *)0x0);
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  iStack_e8 = 0;
  local_d0 = 0;
  puVar3 = &(this->SequencerToMirrorMap).field_0x10;
  iVar4 = *(int *)&(this->SequencerToMirrorMap).field_0x28;
  pTVar1 = &this->SequencerToMirrorMap;
  iStack_d4 = 0;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->SequencerToMirrorMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar3;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar17 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      iStack_d4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_1463f07f1;
      uVar19 = puVar21[lVar17 + 1];
    }
    local_140 = (ulonglong)(-uVar19 & uVar19);
    uVar2 = local_140 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_100 = (int)lVar17;
    iStack_d4 = local_d0 + -1 + local_100;
    if (iVar4 < iStack_d4) {
      iStack_d4 = iVar4;
    }
  }
LAB_1463f07f1:
  uStack_e4 = (undefined4)local_140;
  iStack_cc = iStack_11c;
  iStack_c8 = *(int *)&(this->SequencerToMirrorMap).field_0x8 -
              *(int *)&(this->SequencerToMirrorMap).field_0x34;
  uVar19 = *(uint *)&(this->SequencerToMirrorMap).field_0x28;
  uStack_d8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_e4,iStack_e8);
  uVar22 = uVar19 & 0xffffffe0;
  TStack_88.CurrentBitIndex = iStack_d4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar19 >> 5;
  TStack_88._28_4_ = iStack_11c;
  TStack_88.BaseBitIndex = local_d0;
  uStack_68 = CONCAT44(uStack_c4,iStack_c8);
  local_f0 = pTVar1;
  local_e0 = puVar3;
  local_90 = pTVar1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->SequencerToMirrorMap).field_0x28;
  if (uVar19 != uVar5) {
    puVar20 = *(undefined1 **)&(this->SequencerToMirrorMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar3;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1463f08f0;
      uVar19 = *(uint *)(puVar20 + lVar17 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar19 = (int)lVar17 + -1 + uVar22;
    if ((int)uVar5 < (int)uVar19) {
      uVar19 = uVar5;
    }
  }
LAB_1463f08f0:
  while( true ) {
    pTVar12 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (((TStack_88.CurrentBitIndex == uVar19) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar12 == pTVar1))
    break;
    pvVar8 = *(void **)(*(longlong *)pTVar12 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar16 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror_Standalone,(UObject *)pUVar16,
                           L"AnimNode_Mirror_Standalone");
    }
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_2,Z_Registration_Info_UScriptStruct_FAnimNode_Mirror_Standalone.OuterSingleton,
               pvVar8,(UObject *)0x0);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// FindPlayer<FSequencerPlayerAnimSequence> @ 1463f5a00

FSequencerPlayerAnimSequence * __thiscall
FAnimSequencerInstanceProxy::FindPlayer<FSequencerPlayerAnimSequence>
          (FAnimSequencerInstanceProxy *this,uint param_1)

{
  longlong lVar1;
  FSequencerPlayerAnimSequence *pFVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  FName *pFVar6;
  FSequencerPlayerAnimSequence *pFVar7;
  undefined1 *puVar8;
  
  if (*(int *)&(this->SequencerToPlayerMap).field_0x8 !=
      *(int *)&(this->SequencerToPlayerMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SequencerToPlayerMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SequencerToPlayerMap).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SequencerToPlayerMap).field_0x48 - 1U & param_1) * 4)
    ;
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->SequencerToPlayerMap + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->SequencerToPlayerMap + (longlong)iVar5 * 0x18) == param_1)
        {
          if (lVar1 == 0) {
            return (FSequencerPlayerAnimSequence *)0x0;
          }
          pFVar2 = *(FSequencerPlayerAnimSequence **)(lVar1 + 8);
          if (pFVar2 == (FSequencerPlayerAnimSequence *)0x0) {
            return (FSequencerPlayerAnimSequence *)0x0;
          }
          pcVar3 = *(code **)(pFVar2->_padding_ + 8);
          pFVar6 = FSequencerPlayerAnimSequence::GetTypeId();
          cVar4 = (*pcVar3)(pFVar2,pFVar6);
          pFVar7 = (FSequencerPlayerAnimSequence *)0x0;
          if (cVar4 != '\0') {
            pFVar7 = pFVar2;
          }
          return pFVar7;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  return (FSequencerPlayerAnimSequence *)0x0;
}

// FAnimSequencerInstanceProxy @ 146406950

FAnimSequencerInstanceProxy * __thiscall
FAnimSequencerInstanceProxy::FAnimSequencerInstanceProxy
          (FAnimSequencerInstanceProxy *this,UAnimInstance *param_1)

{
  FAnimInstanceProxy::FAnimInstanceProxy((FAnimInstanceProxy *)this,param_1);
  this->_padding_ = (longlong)&___7FAnimSequencerInstanceProxy__6B_;
  FAnimNode_ApplyAdditive::FAnimNode_ApplyAdditive(&this->SequencerRootNode);
  (this->FullBodyBlendNode).bAdditiveNode = false;
  (this->FullBodyBlendNode).bNormalizeAlpha = true;
  (this->FullBodyBlendNode)._padding_ = 0;
  (this->FullBodyBlendNode)._padding_ = (longlong)&___7FAnimNode_MultiWayBlend__6B_;
  (this->AdditiveBlendNode)._padding_ = (longlong)&___7FAnimNode_MultiWayBlend__6B_;
  (this->SnapshotNode)._padding_ = (longlong)&___7FAnimNode_PoseSnapshot__6B_;
  (this->FullBodyBlendNode).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).Poses.ArrayNum = 0;
  (this->FullBodyBlendNode).Poses.ArrayMax = 0;
  (this->FullBodyBlendNode).DesiredAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).DesiredAlphas.ArrayNum = 0;
  (this->FullBodyBlendNode).DesiredAlphas.ArrayMax = 0;
  (this->FullBodyBlendNode).CachedAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).CachedAlphas.ArrayNum = 0;
  (this->FullBodyBlendNode).CachedAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode)._padding_ = 0;
  (this->AdditiveBlendNode).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).Poses.ArrayNum = 0;
  (this->AdditiveBlendNode).Poses.ArrayMax = 0;
  (this->AdditiveBlendNode).DesiredAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).DesiredAlphas.ArrayNum = 0;
  (this->AdditiveBlendNode).DesiredAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode).CachedAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).CachedAlphas.ArrayNum = 0;
  (this->AdditiveBlendNode).CachedAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode).bAdditiveNode = false;
  (this->AdditiveBlendNode).bNormalizeAlpha = true;
  (this->SnapshotNode)._padding_ = 0;
  (this->FullBodyBlendNode).AlphaScaleBias.Scale = 1.0;
  (this->FullBodyBlendNode).AlphaScaleBias.Bias = 0.0;
  (this->AdditiveBlendNode).AlphaScaleBias.Scale = 1.0;
  (this->AdditiveBlendNode).AlphaScaleBias.Bias = 0.0;
  (this->SnapshotNode).SnapshotName.ComparisonIndex = 0;
  (this->SnapshotNode).SnapshotName.Number = 0;
  (this->SnapshotNode).Snapshot.LocalTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SnapshotNode).Snapshot.LocalTransforms.ArrayNum = 0;
  (this->SnapshotNode).Snapshot.LocalTransforms.ArrayMax = 0;
  (this->SnapshotNode).Snapshot.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).Snapshot.BoneNames.ArrayNum = 0;
  (this->SnapshotNode).Snapshot.BoneNames.ArrayMax = 0;
  (this->SnapshotNode).Snapshot.SkeletalMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).Snapshot.SkeletalMeshName.Number = 0;
  (this->SnapshotNode).Snapshot.SnapshotName.ComparisonIndex = 0;
  (this->SnapshotNode).Snapshot.SnapshotName.Number = 0;
  (this->SnapshotNode).Snapshot.bIsValid = false;
  (this->SnapshotNode).Mode = NamedSnapshot;
  (this->SnapshotNode).SourceBoneMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).SourceBoneMapping.ArrayNum = 0;
  (this->SnapshotNode).SourceBoneMapping.ArrayMax = 0;
  (this->SnapshotNode).TargetBoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).TargetBoneNames.ArrayNum = 0;
  (this->SnapshotNode).TargetBoneNames.ArrayMax = 0;
  (this->SnapshotNode).MappedSourceMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).MappedSourceMeshName.Number = 0;
  (this->SnapshotNode).MappedTargetMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).MappedTargetMeshName.Number = 0;
  (this->SnapshotNode).TargetBoneNameMesh.ComparisonIndex = 0;
  (this->SnapshotNode).TargetBoneNameMesh.Number = 0;
  *(undefined8 *)&this->SequencerToPlayerMap = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x8 = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x20 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x28 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x34 = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x40 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x48 = 0;
  *(undefined8 *)&this->SequencerToMirrorMap = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x8 = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x20 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x28 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x34 = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x40 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x48 = 0;
  (this->RootMotionOverride).bIsSet = false;
  this->SwapRootBone = SwapRootBone_None;
  (this->InitialTransform).bIsSet = false;
  (this->RootBoneTransform).bIsSet = false;
  return this;
}

// FAnimSequencerInstanceProxy @ 146406b50

FAnimSequencerInstanceProxy * __thiscall
FAnimSequencerInstanceProxy::FAnimSequencerInstanceProxy(FAnimSequencerInstanceProxy *this)

{
  FAnimInstanceProxy::FAnimInstanceProxy((FAnimInstanceProxy *)this);
  this->_padding_ = (longlong)&___7FAnimSequencerInstanceProxy__6B_;
  FAnimNode_ApplyAdditive::FAnimNode_ApplyAdditive(&this->SequencerRootNode);
  (this->FullBodyBlendNode).bAdditiveNode = false;
  (this->FullBodyBlendNode).bNormalizeAlpha = true;
  (this->FullBodyBlendNode)._padding_ = 0;
  (this->FullBodyBlendNode)._padding_ = (longlong)&___7FAnimNode_MultiWayBlend__6B_;
  (this->AdditiveBlendNode)._padding_ = (longlong)&___7FAnimNode_MultiWayBlend__6B_;
  (this->SnapshotNode)._padding_ = (longlong)&___7FAnimNode_PoseSnapshot__6B_;
  (this->FullBodyBlendNode).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).Poses.ArrayNum = 0;
  (this->FullBodyBlendNode).Poses.ArrayMax = 0;
  (this->FullBodyBlendNode).DesiredAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).DesiredAlphas.ArrayNum = 0;
  (this->FullBodyBlendNode).DesiredAlphas.ArrayMax = 0;
  (this->FullBodyBlendNode).CachedAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FullBodyBlendNode).CachedAlphas.ArrayNum = 0;
  (this->FullBodyBlendNode).CachedAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode)._padding_ = 0;
  (this->AdditiveBlendNode).Poses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).Poses.ArrayNum = 0;
  (this->AdditiveBlendNode).Poses.ArrayMax = 0;
  (this->AdditiveBlendNode).DesiredAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).DesiredAlphas.ArrayNum = 0;
  (this->AdditiveBlendNode).DesiredAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode).CachedAlphas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditiveBlendNode).CachedAlphas.ArrayNum = 0;
  (this->AdditiveBlendNode).CachedAlphas.ArrayMax = 0;
  (this->AdditiveBlendNode).bAdditiveNode = false;
  (this->AdditiveBlendNode).bNormalizeAlpha = true;
  (this->SnapshotNode)._padding_ = 0;
  (this->FullBodyBlendNode).AlphaScaleBias.Scale = 1.0;
  (this->FullBodyBlendNode).AlphaScaleBias.Bias = 0.0;
  (this->AdditiveBlendNode).AlphaScaleBias.Scale = 1.0;
  (this->AdditiveBlendNode).AlphaScaleBias.Bias = 0.0;
  (this->SnapshotNode).SnapshotName.ComparisonIndex = 0;
  (this->SnapshotNode).SnapshotName.Number = 0;
  (this->SnapshotNode).Snapshot.LocalTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SnapshotNode).Snapshot.LocalTransforms.ArrayNum = 0;
  (this->SnapshotNode).Snapshot.LocalTransforms.ArrayMax = 0;
  (this->SnapshotNode).Snapshot.BoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).Snapshot.BoneNames.ArrayNum = 0;
  (this->SnapshotNode).Snapshot.BoneNames.ArrayMax = 0;
  (this->SnapshotNode).Snapshot.SkeletalMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).Snapshot.SkeletalMeshName.Number = 0;
  (this->SnapshotNode).Snapshot.SnapshotName.ComparisonIndex = 0;
  (this->SnapshotNode).Snapshot.SnapshotName.Number = 0;
  (this->SnapshotNode).Snapshot.bIsValid = false;
  (this->SnapshotNode).Mode = NamedSnapshot;
  (this->SnapshotNode).SourceBoneMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).SourceBoneMapping.ArrayNum = 0;
  (this->SnapshotNode).SourceBoneMapping.ArrayMax = 0;
  (this->SnapshotNode).TargetBoneNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotNode).TargetBoneNames.ArrayNum = 0;
  (this->SnapshotNode).TargetBoneNames.ArrayMax = 0;
  (this->SnapshotNode).MappedSourceMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).MappedSourceMeshName.Number = 0;
  (this->SnapshotNode).MappedTargetMeshName.ComparisonIndex = 0;
  (this->SnapshotNode).MappedTargetMeshName.Number = 0;
  (this->SnapshotNode).TargetBoneNameMesh.ComparisonIndex = 0;
  (this->SnapshotNode).TargetBoneNameMesh.Number = 0;
  *(undefined8 *)&this->SequencerToPlayerMap = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x8 = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x20 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x28 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x34 = 0;
  *(undefined8 *)&(this->SequencerToPlayerMap).field_0x40 = 0;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x48 = 0;
  *(undefined8 *)&this->SequencerToMirrorMap = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x8 = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x20 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x28 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x34 = 0;
  *(undefined8 *)&(this->SequencerToMirrorMap).field_0x40 = 0;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x48 = 0;
  (this->RootMotionOverride).bIsSet = false;
  this->SwapRootBone = SwapRootBone_None;
  (this->InitialTransform).bIsSet = false;
  (this->RootBoneTransform).bIsSet = false;
  return this;
}

// ~FAnimSequencerInstanceProxy @ 146409210

void __thiscall
FAnimSequencerInstanceProxy::~FAnimSequencerInstanceProxy(FAnimSequencerInstanceProxy *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FAnimSequencerInstanceProxy__6B_;
  ClearSequencePlayerAndMirrorMaps(this);
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequencerToMirrorMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequencerToMirrorMap);
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequencerToPlayerMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSequencerPlayerBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSequencerPlayerBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSequencerPlayerBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequencerToPlayerMap);
  pFVar2 = (this->SnapshotNode).TargetBoneNames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SnapshotNode).SourceBoneMapping.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SnapshotNode).Snapshot.BoneNames.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SnapshotNode).Snapshot.LocalTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SnapshotNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  pFVar2 = (this->AdditiveBlendNode).CachedAlphas.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AdditiveBlendNode).DesiredAlphas.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AdditiveBlendNode).Poses.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->AdditiveBlendNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  pFVar2 = (this->FullBodyBlendNode).CachedAlphas.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FullBodyBlendNode).DesiredAlphas.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FullBodyBlendNode).Poses.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->FullBodyBlendNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->SequencerRootNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  FAnimInstanceProxy::~FAnimInstanceProxy((FAnimInstanceProxy *)this);
  return;
}

// ClearSequencePlayerAndMirrorMaps @ 14641efd0

void __thiscall
FAnimSequencerInstanceProxy::ClearSequencePlayerAndMirrorMaps(FAnimSequencerInstanceProxy *this)

{
  undefined1 *puVar1;
  TMap<unsigned_int,FSequencerPlayerBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>_>
  *this_00;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *this_01;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<unsigned_int,FAnimNode_Mirror_Standalone_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  puVar1 = &(this->SequencerToPlayerMap).field_0x10;
  iVar14 = 0;
  iVar3 = *(int *)&(this->SequencerToPlayerMap).field_0x28;
  this_00 = &this->SequencerToPlayerMap;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->SequencerToPlayerMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14641f080;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14641f080:
  uVar13 = *(uint *)&(this->SequencerToPlayerMap).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_c8._padding_ = CONCAT44(uVar9,iVar14);
  TStack_c8.CurrentBitIndex = iVar10;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_c8._28_4_ = local_54;
  TStack_c8.BaseBitIndex = iVar16;
  uStack_a8 = CONCAT44(uStack_10c,
                       *(int *)&(this->SequencerToPlayerMap).field_0x8 -
                       *(int *)&(this->SequencerToPlayerMap).field_0x34);
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->SequencerToPlayerMap).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->SequencerToPlayerMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14641f1a0;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14641f1a0:
  while( true ) {
    if (*(int *)&(this->SequencerToPlayerMap).field_0x8 -
        *(int *)&(this->SequencerToPlayerMap).field_0x34 != (int)uStack_a8) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSequencerPlayerBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c8.CurrentBitIndex == uVar13) &&
       (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar4 = *(undefined8 **)
              (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_c8.CurrentBitIndex * 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  }
  bVar8 = 1 < *(int *)&(this->SequencerToPlayerMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SequencerToPlayerMap).field_0xc;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->SequencerToPlayerMap).field_0x2c;
  *(undefined4 *)&(this->SequencerToPlayerMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SequencerToPlayerMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SequencerToPlayerMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->SequencerToPlayerMap).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  puVar1 = &(this->SequencerToMirrorMap).field_0x10;
  iVar3 = *(int *)&(this->SequencerToMirrorMap).field_0x28;
  this_01 = &this->SequencerToMirrorMap;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->SequencerToMirrorMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14641f30e;
      uVar13 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_14641f30e:
  uVar13 = *(uint *)&(this->SequencerToMirrorMap).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar9,iVar14);
  TStack_98.CurrentBitIndex = iVar11;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_98._28_4_ = iVar10;
  TStack_98.BaseBitIndex = iVar16;
  uStack_78 = CONCAT44(uStack_d4,
                       *(int *)&(this->SequencerToMirrorMap).field_0x8 -
                       *(int *)&(this->SequencerToMirrorMap).field_0x34);
  local_a0 = this_01;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->SequencerToMirrorMap).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->SequencerToMirrorMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14641f420;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14641f420:
  while( true ) {
    pTVar7 = local_a0;
    if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) != (int)uStack_78
       ) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_98.CurrentBitIndex == uVar13) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_01))
    break;
    plVar5 = *(longlong **)
              (*(longlong *)&pTVar7->field_0x0 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x70))();
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  bVar8 = 1 < *(int *)&(this->SequencerToMirrorMap).field_0x48;
  if (!bVar8) {
    TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  puVar1 = &(this->SequencerToMirrorMap).field_0xc;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->SequencerToMirrorMap).field_0x2c;
  *(undefined4 *)&(this->SequencerToMirrorMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SequencerToMirrorMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SequencerToMirrorMap).field_0x10,0);
  }
  if (bVar8) {
    *(undefined4 *)&(this->SequencerToMirrorMap).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
              *)this_01);
  }
  return;
}

// EnsureAnimTrack @ 146426680

void __thiscall
FAnimSequencerInstanceProxy::EnsureAnimTrack
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,uint param_2)

{
  FAnimNode_SequenceEvaluator_Standalone *pFVar1;
  FSequencerPlayerAnimSequence *pFVar2;
  UAnimSequenceBase *pUVar3;
  
  pFVar2 = FindPlayer<FSequencerPlayerAnimSequence>(this,param_2);
  if (pFVar2 == (FSequencerPlayerAnimSequence *)0x0) {
    InitAnimTrack(this,param_1,param_2);
    return;
  }
  pFVar1 = &pFVar2->PlayerNode;
  pUVar3 = (UAnimSequenceBase *)(**(code **)(pFVar1->_padding_ + 0x170))(pFVar1);
  if (pUVar3 != param_1) {
    (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,param_1);
  }
  return;
}

// InitAnimTrack @ 146450db0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimSequencerInstanceProxy::InitAnimTrack
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,uint param_2)

{
  TArray<FPoseLink,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FSequencerPlayerAnimSequence *_Dst;
  FAnimNode_Base *pFVar8;
  FAnimNode_Base *pFVar9;
  undefined1 *puVar10;
  uint uVar11;
  longlong lVar12;
  FAnimNode_MultiWayBlend *this_00;
  uint uVar13;
  FAnimNode_SequenceEvaluator_Standalone *pFVar14;
  uint local_res18 [4];
  FAnimNode_Base *local_e8;
  TPairInitializer<unsigned_int_const_&,FAnimNode_Mirror_Standalone_*_const_&> local_e0;
  FSequencerPlayerAnimSequence *local_d0;
  FString local_c8;
  uint *local_b8;
  FSequencerPlayerAnimSequence **local_b0;
  uint *local_a8;
  FAnimNode_Base **local_a0;
  FAnimationBaseContext local_98;
  FAnimationBaseContext local_78;
  FAnimationBaseContext local_58;
  
  if (param_1 != (UAnimSequenceBase *)0x0) {
    local_res18[0] = param_2;
    _Dst = FindPlayer<FSequencerPlayerAnimSequence>(this,param_2);
    if (_Dst == (FSequencerPlayerAnimSequence *)0x0) {
      cVar5 = (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
      lVar12 = 0x920;
      if (cVar5 == '\0') {
        lVar12 = 0x8d0;
      }
      this_00 = (FAnimNode_MultiWayBlend *)((longlong)&this->_padding_ + lVar12);
      if (((cVar5 != '\0') &&
          (iVar7 = (**(code **)(param_1->_padding_ + 0x3b8))(param_1), iVar7 == 2)) &&
         (2 < (byte)LogAnimation._0_1_)) {
        local_e0._4_8_ = param_1->_padding_;
        ::FName::ToString((FName *)((longlong)&local_e0.Key + 4),&local_c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
      iVar7 = (this_00->Poses).ArrayNum;
      pTVar1 = &this_00->Poses;
      if (iVar7 == (this_00->Poses).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,&(this_00->Poses).ArrayMax);
      }
      (this_00->Poses).ArrayNum = iVar7 + 1;
      DefaultConstructItems<FPoseLink,int>
                ((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10,1);
      iVar7 = (this_00->DesiredAlphas).ArrayNum;
      piVar2 = &(this_00->DesiredAlphas).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this_00->DesiredAlphas).AllocatorInstance,piVar2);
      }
      (this_00->DesiredAlphas).ArrayNum = iVar7 + 1;
      *(undefined4 *)((this_00->DesiredAlphas).AllocatorInstance.Data + (longlong)iVar7 * 4) = 0;
      FAnimNode_MultiWayBlend::UpdateCachedAlphas(this_00);
      uVar11 = (this_00->Poses).ArrayNum - 1;
      _Dst = ::operator_new(0x160);
      if (_Dst == (FSequencerPlayerAnimSequence *)0x0) {
        _Dst = (FSequencerPlayerAnimSequence *)0x0;
      }
      else {
        memset(_Dst,0,0x160);
        *(undefined4 *)&(_Dst->PlayerNode)._padding_ = 0xfffffffe;
        *(undefined4 *)&(_Dst->PlayerNode)._padding_ = 0xfffffffe;
        _Dst->_padding_ = (longlong)&___7FSequencerPlayerAnimSequence__6B_;
        (_Dst->PlayerNode)._padding_ = 0;
        (_Dst->PlayerNode)._padding_ = (longlong)&___7FAnimNode_SequenceEvaluator_Standalone__6B_;
        (_Dst->PlayerNode)._padding_ = 0;
        (_Dst->PlayerNode).GroupName.ComparisonIndex = 0;
        (_Dst->PlayerNode).GroupName.Number = 0;
        (_Dst->PlayerNode).GroupRole = '\0';
        (_Dst->PlayerNode).Method = DoNotSync;
        (_Dst->PlayerNode).bIgnoreForRelevancyTest = false;
        (_Dst->PlayerNode).Sequence.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
        (_Dst->PlayerNode).ExplicitTime = 0.0;
        (_Dst->PlayerNode).bUseExplicitFrame = false;
        (_Dst->PlayerNode).ExplicitFrame = 0;
        (_Dst->PlayerNode).bShouldLoop = true;
        (_Dst->PlayerNode).bTeleportToExplicitTime = true;
        (_Dst->PlayerNode).ReinitializationBehavior.Value = '\x02';
        (_Dst->PlayerNode).StartPosition = 0.0;
      }
      pFVar9 = (FAnimNode_Base *)0x0;
      local_b8 = local_res18;
      *(uint *)&_Dst->_padding_ = uVar11;
      local_b0 = &local_d0;
      *(char *)((longlong)&_Dst->_padding_ + 4) = cVar5;
      local_d0 = _Dst;
      TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FSequencerPlayerBase_*_&&>_>
                ((TSet<TTuple<unsigned_int,FSequencerPlayerBase_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FSequencerPlayerBase_*,0>,FDefaultSetAllocator>
                  *)&this->SequencerToPlayerMap,
                 (TPairInitializer<unsigned_int_const_&,FSequencerPlayerBase_*_&&> *)
                 (local_res18 + 2),(bool *)&local_b8);
      pFVar8 = ::operator_new(0x60);
      if (pFVar8 != (FAnimNode_Base *)0x0) {
        pFVar8->NodeData = (FAnimNodeData *)0x0;
        pFVar8[1]._padding_ = 0;
        *(undefined4 *)&pFVar8[1].NodeData = 0xffffffff;
        *(undefined1 *)((longlong)&pFVar8[1].NodeData + 4) = 0;
        *(undefined2 *)&pFVar8[2]._padding_ = 0;
        pFVar8[2].NodeData = (FAnimNodeData *)0x0;
        pFVar8[3]._padding_ = 0;
        pFVar8[3].NodeData = (FAnimNodeData *)0x0;
        pFVar8[4]._padding_ = 0;
        pFVar8->_padding_ = (longlong)&___7FAnimNode_Mirror_Standalone__6B_;
        *(undefined1 *)&pFVar8[4].NodeData = 1;
        pFVar8[5]._padding_ = 0;
        *(undefined4 *)&pFVar8[5].NodeData = 0;
        *(undefined4 *)((longlong)&pFVar8[5].NodeData + 4) = 0x1010100;
        pFVar9 = pFVar8;
      }
      local_e8 = pFVar9;
      (**(code **)(pFVar9->_padding_ + 0xe0))(pFVar9,0);
      (**(code **)(local_e8->_padding_ + 0x110))(local_e8,&_Dst->PlayerNode);
      local_a8 = local_res18;
      local_a0 = &local_e8;
      TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FAnimNode_Mirror_Standalone_*_const_&>_>
                ((TSet<TTuple<unsigned_int,FAnimNode_Mirror_Standalone_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FAnimNode_Mirror_Standalone_*,0>,FDefaultSetAllocator>
                  *)&this->SequencerToMirrorMap,&local_e0,(bool *)&local_a8);
      (**(code **)((_Dst->PlayerNode)._padding_ + 0x160))(&_Dst->PlayerNode,0);
      uVar13 = 0;
      if ((int)uVar11 < (this_00->Poses).ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FPoseLinkBase::SetLinkNode
                ((FPoseLinkBase *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10),
                 local_e8);
    }
    pFVar14 = &_Dst->PlayerNode;
    (**(code **)(pFVar14->_padding_ + 0x150))(pFVar14,param_1);
    (**(code **)(pFVar14->_padding_ + 0x158))(pFVar14,0);
    pcVar4 = *(code **)pFVar14->_padding_;
    FAnimationBaseContext::FAnimationBaseContext
              (&local_98,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
    (*pcVar4)(pFVar14,&local_98);
    if (*(int *)&(this->SequencerToMirrorMap).field_0x8 !=
        *(int *)&(this->SequencerToMirrorMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->SequencerToMirrorMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->SequencerToMirrorMap).field_0x38;
      }
      iVar7 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->SequencerToMirrorMap).field_0x48 - 1U & local_res18[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar12 = *(longlong *)&this->SequencerToMirrorMap + (longlong)iVar7 * 0x18;
          if (*(uint *)(*(longlong *)&this->SequencerToMirrorMap + (longlong)iVar7 * 0x18) ==
              local_res18[0]) {
            if (lVar12 == 0) {
              return;
            }
            plVar3 = *(longlong **)(lVar12 + 8);
            if (plVar3 == (longlong *)0x0) {
              return;
            }
            pcVar4 = *(code **)*plVar3;
            FAnimationBaseContext::FAnimationBaseContext
                      (&local_78,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
            (*pcVar4)(plVar3,&local_78);
            pcVar4 = *(code **)(*plVar3 + 8);
            FAnimationBaseContext::FAnimationBaseContext
                      (&local_58,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
            (*pcVar4)(plVar3,&local_58);
            return;
          }
          iVar7 = *(int *)(lVar12 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  return;
}

// UpdateAnimTrack @ 146471140

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrack
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,uint param_2,
          TOptional<FRootMotionOverride> *param_3,TOptional<float> param_4,float param_5,
          float param_6,bool param_7,UMirrorDataTable *param_8)

{
  FAnimNode_SequenceEvaluator_Standalone *pFVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FSequencerPlayerAnimSequence *pFVar9;
  UAnimSequenceBase *pUVar10;
  UMirrorDataTable *pUVar11;
  undefined1 *puVar12;
  longlong lVar13;
  FAnimNode_MultiWayBlend *this_00;
  float fVar14;
  FAnimationBaseContext local_38;
  
  pFVar9 = FindPlayer<FSequencerPlayerAnimSequence>(this,param_2);
  if (pFVar9 == (FSequencerPlayerAnimSequence *)0x0) {
    InitAnimTrack(this,param_1,param_2);
  }
  else {
    pFVar1 = &pFVar9->PlayerNode;
    pUVar10 = (UAnimSequenceBase *)(**(code **)(pFVar1->_padding_ + 0x170))(pFVar1);
    if (pUVar10 != param_1) {
      (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,param_1);
    }
  }
  pFVar9 = FindPlayer<FSequencerPlayerAnimSequence>(this,param_2);
  pFVar1 = &pFVar9->PlayerNode;
  (**(code **)(pFVar1->_padding_ + 0x158))(pFVar1,param_5);
  if (*(char *)((longlong)param_4 + 4) != '\0') {
    *(undefined4 *)((longlong)&(pFVar9->PlayerNode)._padding_ + 4) = *(undefined4 *)param_4;
    (**(code **)(pFVar1->_padding_ + 0x168))(pFVar1,0);
  }
  if (*(int *)&(this->SequencerToMirrorMap).field_0x8 !=
      *(int *)&(this->SequencerToMirrorMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->SequencerToMirrorMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SequencerToMirrorMap).field_0x38;
    }
    iVar7 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->SequencerToMirrorMap).field_0x48 - 1U & param_2) * 4
                    );
    if (iVar7 != -1) {
      lVar13 = *(longlong *)&this->SequencerToMirrorMap;
      do {
        lVar2 = lVar13 + (longlong)iVar7 * 0x18;
        if (*(uint *)(lVar13 + (longlong)iVar7 * 0x18) == param_2) {
          if ((lVar2 != 0) && (plVar4 = *(longlong **)(lVar2 + 8), plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 0xe0))
                      (plVar4,CONCAT71((int7)((ulonglong)lVar13 >> 8),
                                       param_8 != (UMirrorDataTable *)0x0));
            pUVar11 = (UMirrorDataTable *)(**(code **)(*plVar4 + 0xa0))(plVar4);
            (**(code **)(*plVar4 + 0xa8))(plVar4,param_8);
            if ((param_8 != (UMirrorDataTable *)0x0) && (pUVar11 != param_8)) {
              pcVar5 = *(code **)(*plVar4 + 8);
              FAnimationBaseContext::FAnimationBaseContext
                        (&local_38,(FAnimInstanceProxy *)this,(FAnimationUpdateSharedContext *)0x0);
              (*pcVar5)(plVar4,&local_38);
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10);
      } while (iVar7 != -1);
    }
  }
  (**(code **)(pFVar1->_padding_ + 0x160))(pFVar1,!param_7);
  uVar3 = (uint)pFVar9->_padding_;
  lVar13 = 0x920;
  if (*(char *)((longlong)&pFVar9->_padding_ + 4) == '\0') {
    lVar13 = 0x8d0;
  }
  this_00 = (FAnimNode_MultiWayBlend *)((longlong)&this->_padding_ + lVar13);
  uVar8 = 0;
  if ((int)uVar3 < (this_00->DesiredAlphas).ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(float *)((this_00->DesiredAlphas).AllocatorInstance.Data + (longlong)(int)uVar3 * 4) = param_6;
  if (*(char *)((longlong)&pFVar9->_padding_ + 4) != '\0') {
    fVar14 = FAnimNode_MultiWayBlend::GetTotalAlpha(this_00);
    (this->SequencerRootNode).Alpha = fVar14;
  }
  TOptional<FRootMotionOverride>::operator=(&this->RootMotionOverride,param_3);
  return;
}

// UpdateAnimTrack @ 1464713c0

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrack
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,uint param_2,float param_3,
          float param_4,bool param_5)

{
  undefined1 local_f8 [4];
  undefined1 local_f4;
  TOptional<FRootMotionOverride> local_e8;
  
  local_f4 = 0;
  local_e8.bIsSet = false;
  UpdateAnimTrack(this,param_1,param_2,&local_e8,(TOptional<float>)local_f8,param_3,param_4,param_5,
                  (UMirrorDataTable *)0x0);
  return;
}

// UpdateAnimTrack @ 146471420

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrack
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,uint param_2,
          TOptional<float> param_3,float param_4,float param_5,bool param_6)

{
  undefined4 local_res20;
  char local_res24;
  TOptional<FRootMotionOverride> local_e8;
  
  local_res24 = *(char *)((longlong)param_3 + 4);
  if (local_res24 != '\0') {
    local_res20 = *(undefined4 *)param_3;
  }
  local_e8.bIsSet = false;
  UpdateAnimTrack(this,param_1,param_2,&local_e8,(TOptional<float>)&local_res20,param_4,param_5,
                  param_6,(UMirrorDataTable *)0x0);
  return;
}

// UpdateAnimTrackWithRootMotion @ 146471700

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrackWithRootMotion
          (FAnimSequencerInstanceProxy *this,FAnimSequencerData *param_1)

{
  double dVar1;
  float local_res8;
  undefined1 local_resc;
  
  this->SwapRootBone = param_1->SwapRootBone;
  if (&param_1->InitialTransform != &this->InitialTransform) {
    if ((param_1->InitialTransform).bIsSet == false) {
      if ((this->InitialTransform).bIsSet != false) {
        (this->InitialTransform).bIsSet = false;
      }
    }
    else {
      dVar1 = (param_1->InitialTransform).TypedValue.Rotation.XY.m128d_f64[1];
      (this->InitialTransform).TypedValue.Rotation.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Rotation.XY.m128d_f64[0];
      (this->InitialTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[1];
      (this->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[0];
      (this->InitialTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->InitialTransform).TypedValue.Translation.XY.m128d_f64[1];
      (this->InitialTransform).TypedValue.Translation.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Translation.XY.m128d_f64[0];
      (this->InitialTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->InitialTransform).TypedValue.Translation.ZW.m128d_f64[1];
      (this->InitialTransform).TypedValue.Translation.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Translation.ZW.m128d_f64[0];
      (this->InitialTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[1];
      (this->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[0];
      (this->InitialTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[1];
      (this->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
           (param_1->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[0];
      (this->InitialTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar1;
      (this->InitialTransform).bIsSet = true;
    }
  }
  local_res8 = param_1->FromPosition;
  local_resc = 1;
  UpdateAnimTrack(this,param_1->AnimSequence,param_1->SequenceId,param_1->RootMotion,
                  (TOptional<float>)&local_res8,param_1->ToPosition,param_1->Weight,
                  param_1->bFireNotifies,param_1->MirrorDataTable);
  return;
}

// UpdateAnimTrackWithRootMotion @ 1464717d0

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrackWithRootMotion
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,int param_2,
          TOptional<FRootMotionOverride> *param_3,float param_4,float param_5,float param_6,
          bool param_7)

{
  float local_18;
  undefined1 local_14;
  
  local_18 = param_4;
  local_14 = 1;
  UpdateAnimTrack(this,param_1,param_2,param_3,(TOptional<float>)&local_18,param_5,param_6,param_7,
                  (UMirrorDataTable *)0x0);
  return;
}

// UpdateAnimTrackWithRootMotion @ 146471840

void __thiscall
FAnimSequencerInstanceProxy::UpdateAnimTrackWithRootMotion
          (FAnimSequencerInstanceProxy *this,UAnimSequenceBase *param_1,int param_2,
          TOptional<FRootMotionOverride> *param_3,float param_4,float param_5,float param_6,
          bool param_7,UMirrorDataTable *param_8)

{
  float local_18;
  undefined1 local_14;
  
  local_18 = param_4;
  local_14 = 1;
  UpdateAnimTrack(this,param_1,param_2,param_3,(TOptional<float>)&local_18,param_5,param_6,param_7,
                  param_8);
  return;
}

