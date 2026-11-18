// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 12

// StaticStruct @ 14def5dc0

UScriptStruct * __cdecl FIKRetargetRootMotionOp::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOp,(UObject *)pUVar1,
                         L"IKRetargetRootMotionOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton;
}

// Initialize @ 14def5e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FIKRetargetRootMotionOp::Initialize
          (FIKRetargetRootMotionOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  TTransform<double> *pTVar13;
  int iVar14;
  FName *pFVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_188 [32];
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8;
  FText local_d8;
  FTextFormat local_c8;
  FText local_b8;
  FTextFormat local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  this->SourceRootIndex = -1;
  this->TargetRootIndex = -1;
  this->TargetPelvisIndex = -1;
  (this->NonRetargetedChildrenOfRoot).ArrayNum = 0;
  if ((this->NonRetargetedChildrenOfRoot).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NonRetargetedChildrenOfRoot).AllocatorInstance,0,
               &(this->NonRetargetedChildrenOfRoot).ArrayMax);
  }
  pFVar1 = (FName *)(param_2->BoneNames).AllocatorInstance.Data;
  if (pFVar1 != pFVar1 + (param_2->BoneNames).ArrayNum) {
    pFVar15 = pFVar1;
    do {
      if (*pFVar15 == (this->Settings).SourceRoot.BoneName) {
        bVar5 = true;
        iVar14 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 3);
        this->SourceRootIndex = iVar14;
        if (iVar14 == -1) goto LAB_14def5ebc;
        goto LAB_14def5f40;
      }
      pFVar15 = pFVar15 + 1;
    } while (pFVar15 != pFVar1 + (param_2->BoneNames).ArrayNum);
  }
  this->SourceRootIndex = -1;
LAB_14def5ebc:
  pFVar8 = FText::FromName(&local_f8,&(this->Settings).SourceRoot.BoneName);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_148,L"RootMotionGeneratorOp",L"MissingSourceRootBone",
                      L"Root Motion Remap Op, missing source root bone {0}.");
  pFVar10 = FTextFormat::FTextFormat(&local_e8,pFVar9,Default);
  pFVar8 = FText::Format<FText>(&local_158,pFVar10,pFVar8);
  FIKRigLogger::LogWarning(param_5,pFVar8);
  if (local_158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
  }
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  bVar5 = false;
LAB_14def5f40:
  pFVar1 = (FName *)param_3->_padding_;
  if (pFVar1 != pFVar1 + (int)param_3->_padding_) {
    pFVar15 = pFVar1;
    do {
      if (*pFVar15 == (this->Settings).TargetRoot.BoneName) {
        iVar14 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 3);
        this->TargetRootIndex = iVar14;
        if (iVar14 == -1) goto LAB_14def5f73;
        goto LAB_14def5ff7;
      }
      pFVar15 = pFVar15 + 1;
    } while (pFVar15 != pFVar1 + (int)param_3->_padding_);
  }
  this->TargetRootIndex = -1;
LAB_14def5f73:
  pFVar8 = FText::FromName(&local_d8,&(this->Settings).TargetRoot.BoneName);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_128,L"RootMotionGeneratorOp",L"MissingTargetRootBone",
                      L"Root Motion Remap Op, missing target root bone {0}.");
  pFVar10 = FTextFormat::FTextFormat(&local_c8,pFVar9,Default);
  pFVar8 = FText::Format<FText>(&local_138,pFVar10,pFVar8);
  FIKRigLogger::LogWarning(param_5,pFVar8);
  if (local_138.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
  }
  if (local_128.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
  }
  bVar5 = false;
LAB_14def5ff7:
  pFVar1 = (FName *)param_3->_padding_;
  if (pFVar1 != pFVar1 + (int)param_3->_padding_) {
    pFVar15 = pFVar1;
    do {
      if (*pFVar15 == (this->Settings).TargetPelvis.BoneName) {
        iVar14 = (int)((longlong)pFVar15 - (longlong)pFVar1 >> 3);
        this->TargetPelvisIndex = iVar14;
        if (iVar14 != -1) {
          if (!bVar5) {
            return false;
          }
          pTVar11 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                              ((FResolvedRetargetPoseSet *)&param_3->_padding_);
          pTVar12 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&param_2->RetargetPoses);
          uVar7 = this->TargetPelvisIndex;
          uVar17 = 0;
          if ((int)uVar7 < pTVar11->ArrayNum) {
            uVar17 = ~uVar7 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar2 = (pTVar11->AllocatorInstance).Data;
          uVar17 = this->SourceRootIndex;
          lVar16 = (longlong)(int)uVar7 * 0x60;
          dVar4 = *(double *)(pFVar2 + lVar16 + 8);
          (this->TargetPelvisInRefPose).Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16);
          (this->TargetPelvisInRefPose).Rotation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
          (this->TargetPelvisInRefPose).Rotation.ZW.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x10);
          (this->TargetPelvisInRefPose).Rotation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
          (this->TargetPelvisInRefPose).Translation.XY.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x20);
          (this->TargetPelvisInRefPose).Translation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
          (this->TargetPelvisInRefPose).Translation.ZW.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x30);
          (this->TargetPelvisInRefPose).Translation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x40 + 8);
          (this->TargetPelvisInRefPose).Scale3D.XY.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x40);
          (this->TargetPelvisInRefPose).Scale3D.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x50 + 8);
          (this->TargetPelvisInRefPose).Scale3D.ZW.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x50);
          (this->TargetPelvisInRefPose).Scale3D.ZW.m128d_f64[1] = dVar4;
          uVar7 = 0;
          if ((int)uVar17 < pTVar12->ArrayNum) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar2 = (pTVar12->AllocatorInstance).Data;
          uVar7 = this->TargetRootIndex;
          lVar16 = (longlong)(int)uVar17 * 0x60;
          dVar4 = *(double *)(pFVar2 + lVar16 + 8);
          (this->SourceRootInRefPose).Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16);
          (this->SourceRootInRefPose).Rotation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
          (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x10)
          ;
          (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
          (this->SourceRootInRefPose).Translation.XY.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x20);
          (this->SourceRootInRefPose).Translation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
          (this->SourceRootInRefPose).Translation.ZW.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x30);
          (this->SourceRootInRefPose).Translation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x40 + 8);
          (this->SourceRootInRefPose).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x40);
          (this->SourceRootInRefPose).Scale3D.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x50 + 8);
          (this->SourceRootInRefPose).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x50);
          (this->SourceRootInRefPose).Scale3D.ZW.m128d_f64[1] = dVar4;
          uVar17 = 0;
          if ((int)uVar7 < pTVar11->ArrayNum) {
            uVar17 = ~uVar7 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar2 = (pTVar11->AllocatorInstance).Data;
          lVar16 = (longlong)(int)uVar7 * 0x60;
          dVar4 = *(double *)(pFVar2 + lVar16 + 8);
          (this->TargetRootInRefPose).Rotation.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16);
          (this->TargetRootInRefPose).Rotation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
          (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x10)
          ;
          (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x20 + 8);
          (this->TargetRootInRefPose).Translation.XY.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x20);
          (this->TargetRootInRefPose).Translation.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x30 + 8);
          (this->TargetRootInRefPose).Translation.ZW.m128d_f64[0] =
               *(double *)(pFVar2 + lVar16 + 0x30);
          (this->TargetRootInRefPose).Translation.ZW.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x40 + 8);
          (this->TargetRootInRefPose).Scale3D.XY.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x40);
          (this->TargetRootInRefPose).Scale3D.XY.m128d_f64[1] = dVar4;
          dVar4 = *(double *)(pFVar2 + lVar16 + 0x50 + 8);
          (this->TargetRootInRefPose).Scale3D.ZW.m128d_f64[0] = *(double *)(pFVar2 + lVar16 + 0x50);
          (this->TargetRootInRefPose).Scale3D.ZW.m128d_f64[1] = dVar4;
          pTVar13 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&this->TargetRootInRefPose,&local_98,&this->TargetPelvisInRefPose);
          dVar4 = (pTVar13->Rotation).XY.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.XY.m128d_f64[0] =
               (pTVar13->Rotation).XY.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.XY.m128d_f64[1] = dVar4;
          dVar4 = (pTVar13->Rotation).ZW.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.ZW.m128d_f64[0] =
               (pTVar13->Rotation).ZW.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.ZW.m128d_f64[1] = dVar4;
          dVar4 = (pTVar13->Translation).XY.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Translation.XY.m128d_f64[0] =
               (pTVar13->Translation).XY.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Translation.XY.m128d_f64[1] = dVar4;
          dVar4 = (pTVar13->Translation).ZW.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Translation.ZW.m128d_f64[0] =
               (pTVar13->Translation).ZW.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Translation.ZW.m128d_f64[1] = dVar4;
          dVar4 = (pTVar13->Scale3D).XY.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.XY.m128d_f64[0] =
               (pTVar13->Scale3D).XY.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.XY.m128d_f64[1] = dVar4;
          dVar4 = (pTVar13->Scale3D).ZW.m128d_f64[1];
          (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.ZW.m128d_f64[0] =
               (pTVar13->Scale3D).ZW.m128d_f64[0];
          (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.ZW.m128d_f64[1] = dVar4;
          *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
          return true;
        }
        goto LAB_14def602c;
      }
      pFVar15 = pFVar15 + 1;
    } while (pFVar15 != pFVar1 + (int)param_3->_padding_);
  }
  this->TargetPelvisIndex = -1;
LAB_14def602c:
  pFVar8 = FText::FromName(&local_b8,&(this->Settings).TargetPelvis.BoneName);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_108,L"RootMotionGeneratorOp",L"MissingPelvisBone",
                      L"Root Motion Remap Op, missing target pelvis bone {0}.");
  pFVar10 = FTextFormat::FTextFormat(&local_a8,pFVar9,Default);
  pFVar8 = FText::Format<FText>(&local_118,pFVar10,pFVar8);
  FIKRigLogger::LogWarning(param_5,pFVar8);
  if (local_118.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
  }
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  return false;
}

// Run @ 14def6380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FIKRetargetRootMotionOp::Run
          (FIKRetargetRootMotionOp *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar19;
  undefined7 extraout_var;
  TTransform<double> *this_00;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined1 local_2a8 [4];
  uint local_2a4;
  longlong local_2a0;
  FScriptContainerElement *local_298;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  uint uVar18;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  if ((this->Settings).RootMotionSource == GenerateFromTargetPelvis) {
    GenerateRootMotionFromTargetPelvis(this,&local_1c8,param_3,param_4);
  }
  else {
    CopyRootMotionFromSourceRoot(this,&local_1c8,param_1,param_3);
  }
  if ((this->Settings).bPropagateToNonRetargetedChildren != false) {
    uVar21 = this->TargetRootIndex;
    iVar19 = param_4->ArrayNum;
    lVar22 = (longlong)iVar19;
    uVar18 = 0;
    if ((int)uVar21 < iVar19) {
      uVar18 = ~uVar21 >> 0x1f;
    }
    if (uVar18 == 0) {
      iVar19 = 0x506109c0;
      local_2b8 = (longlong)(int)uVar21;
      local_2b0 = lVar22;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      uVar18 = (uint)CONCAT71(extraout_var,bVar17);
      if (bVar17) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (TTransform<double> *)
              ((param_4->AllocatorInstance).Data + (longlong)(int)uVar21 * 0x60);
    auVar24._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 4),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                          *(uint *)(this_00->Scale3D).XY.m128d_f64);
    auVar24._8_4_ = _UNK_15061cc88 & *(uint *)((this_00->Scale3D).XY.m128d_f64 + 1);
    auVar24._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(this_00->Scale3D).XY.m128d_f64 + 0xc);
    lVar22 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(_UNK_15061cc8c &
                               *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 0xc),
                               _UNK_15061cc88 & *(uint *)((this_00->Scale3D).ZW.m128d_f64 + 1)));
    auVar4._8_4_ = (int)lVar22;
    auVar4._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                     *(uint *)((longlong)(this_00->Scale3D).ZW.m128d_f64 + 4),
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                     *(uint *)(this_00->Scale3D).ZW.m128d_f64));
    auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    uVar21 = movmskpd(iVar19,auVar4);
    lVar22 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar24._8_8_);
    auVar3._8_4_ = (int)lVar22;
    auVar3._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar24._0_8_);
    auVar3._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    iVar19 = movmskpd(uVar18,auVar3);
    if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
      local_168.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_168.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_168.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_168.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_168.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_168.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(this_00,&local_168);
    }
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
    UE::Math::TTransform<double>::Multiply(&local_108,&local_168,&local_1c8);
    local_2a4 = (this->NonRetargetedChildrenOfRoot).ArrayNum;
    uVar20 = (ulonglong)(int)local_2a4;
    pFVar23 = (this->NonRetargetedChildrenOfRoot).AllocatorInstance.Data;
    local_298 = pFVar23 + uVar20 * 4;
    while( true ) {
      pFVar1 = local_298;
      if ((this->NonRetargetedChildrenOfRoot).ArrayNum != (int)uVar20) {
        local_2a8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2a8);
      }
      if (pFVar23 == pFVar1) break;
      uVar21 = *(uint *)pFVar23;
      lVar22 = (longlong)(int)uVar21;
      uVar18 = 0;
      if ((int)uVar21 < param_4->ArrayNum) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_2b8 = lVar22, local_2b0 = (longlong)param_4->ArrayNum,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_2a0 = lVar22 * 0x60;
      local_288.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_288.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_288.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_288.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_288.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_288.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_288.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_288.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_288.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_288.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_288.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_288.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_288,(TTransform<double> *)((param_4->AllocatorInstance).Data + local_2a0),
                 &local_108);
      dVar5 = local_288.Rotation.XY.m128d_f64[0];
      dVar6 = local_288.Rotation.XY.m128d_f64[1];
      dVar7 = local_288.Rotation.ZW.m128d_f64[0];
      dVar8 = local_288.Rotation.ZW.m128d_f64[1];
      dVar9 = local_288.Translation.XY.m128d_f64[0];
      dVar10 = local_288.Translation.XY.m128d_f64[1];
      uVar18 = 0;
      if ((int)uVar21 < param_4->ArrayNum) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      dVar11 = local_288.Translation.ZW.m128d_f64[0];
      dVar12 = local_288.Translation.ZW.m128d_f64[1];
      dVar13 = local_288.Scale3D.XY.m128d_f64[0];
      dVar14 = local_288.Scale3D.XY.m128d_f64[1];
      dVar15 = local_288.Scale3D.ZW.m128d_f64[0];
      dVar16 = local_288.Scale3D.ZW.m128d_f64[1];
      if ((uVar18 == 0) &&
         (local_2b8 = lVar22, local_2b0 = (longlong)param_4->ArrayNum,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar23 = pFVar23 + 4;
      pFVar1 = (param_4->AllocatorInstance).Data;
      *(double *)(pFVar1 + local_2a0) = dVar5;
      *(double *)(pFVar1 + local_2a0 + 8) = dVar6;
      *(double *)(pFVar1 + local_2a0 + 0x10) = dVar7;
      *(double *)(pFVar1 + local_2a0 + 0x10 + 8) = dVar8;
      *(double *)(pFVar1 + local_2a0 + 0x20) = dVar9;
      *(double *)(pFVar1 + local_2a0 + 0x20 + 8) = dVar10;
      *(double *)(pFVar1 + local_2a0 + 0x30) = dVar11;
      *(double *)(pFVar1 + local_2a0 + 0x30 + 8) = dVar12;
      *(double *)(pFVar1 + local_2a0 + 0x40) = dVar13;
      *(double *)(pFVar1 + local_2a0 + 0x40 + 8) = dVar14;
      *(double *)(pFVar1 + local_2a0 + 0x50) = dVar15;
      *(double *)(pFVar1 + local_2a0 + 0x50 + 8) = dVar16;
      uVar20 = (ulonglong)local_2a4;
    }
  }
  local_228.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_228.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_228.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_228.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_228.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_228.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_228,&local_1c8,&(this->Settings).GlobalOffset);
  uVar21 = this->TargetRootIndex;
  local_2b0 = (longlong)param_4->ArrayNum;
  dVar5 = local_228.Rotation.XY.m128d_f64[0];
  dVar6 = local_228.Rotation.XY.m128d_f64[1];
  dVar7 = local_228.Rotation.ZW.m128d_f64[0];
  dVar8 = local_228.Rotation.ZW.m128d_f64[1];
  dVar9 = local_228.Translation.XY.m128d_f64[0];
  dVar10 = local_228.Translation.XY.m128d_f64[1];
  dVar11 = local_228.Translation.ZW.m128d_f64[0];
  dVar12 = local_228.Translation.ZW.m128d_f64[1];
  dVar13 = local_228.Scale3D.XY.m128d_f64[0];
  dVar14 = local_228.Scale3D.XY.m128d_f64[1];
  dVar15 = local_228.Scale3D.ZW.m128d_f64[0];
  dVar16 = local_228.Scale3D.ZW.m128d_f64[1];
  uVar18 = 0;
  if ((int)uVar21 < param_4->ArrayNum) {
    uVar18 = ~uVar21 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (local_2b8 = (longlong)(int)uVar21,
     bVar17 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar23 = (param_4->AllocatorInstance).Data;
  lVar22 = (longlong)(int)uVar21 * 0x60;
  *(double *)(pFVar23 + lVar22) = dVar5;
  *(double *)(pFVar23 + lVar22 + 8) = dVar6;
  *(double *)(pFVar23 + lVar22 + 0x10) = dVar7;
  *(double *)(pFVar23 + lVar22 + 0x10 + 8) = dVar8;
  *(double *)(pFVar23 + lVar22 + 0x20) = dVar9;
  *(double *)(pFVar23 + lVar22 + 0x20 + 8) = dVar10;
  *(double *)(pFVar23 + lVar22 + 0x30) = dVar11;
  *(double *)(pFVar23 + lVar22 + 0x30 + 8) = dVar12;
  *(double *)(pFVar23 + lVar22 + 0x40) = dVar13;
  *(double *)(pFVar23 + lVar22 + 0x40 + 8) = dVar14;
  *(double *)(pFVar23 + lVar22 + 0x50) = dVar15;
  *(double *)(pFVar23 + lVar22 + 0x50 + 8) = dVar16;
  return;
}

// PostInitialize @ 14def6910

void __thiscall
FIKRetargetRootMotionOp::PostInitialize
          (FIKRetargetRootMotionOp *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint local_28 [4];
  
  iVar3 = (int)param_3->_padding_;
  pTVar2 = &this->NonRetargetedChildrenOfRoot;
  piVar1 = &(this->NonRetargetedChildrenOfRoot).ArrayMax;
  (this->NonRetargetedChildrenOfRoot).ArrayNum = 0;
  if ((this->NonRetargetedChildrenOfRoot).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_28[0] = 1;
  uVar6 = local_28[0];
  if (1 < iVar3) {
    do {
      for (; uVar6 != 0xffffffff; uVar6 = *(uint *)(param_3->_padding_ + (longlong)(int)uVar6 * 4))
      {
        if (param_3->bIsMaskInitialized == false) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4490890690292613645>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                             ,0x20d,"bIsMaskInitialized");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar8 = 0;
          if ((int)uVar6 < (param_3->IsBoneRetargeted).ArrayNum) {
            uVar8 = ~uVar6 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((param_3->IsBoneRetargeted).AllocatorInstance.Data[(int)uVar6] !=
              (FScriptContainerElement)0x0) goto LAB_14def6b24;
        }
        uVar8 = 0;
        if ((int)uVar6 < (int)param_3->_padding_) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->NonRetargetedChildrenOfRoot).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->NonRetargetedChildrenOfRoot).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_28[0];
LAB_14def6b24:
      local_28[0] = local_28[0] + 1;
      uVar6 = local_28[0];
    } while ((int)local_28[0] < iVar3);
  }
  return;
}

// OnAddedToStack @ 14def6bf0

void __thiscall
FIKRetargetRootMotionOp::OnAddedToStack
          (FIKRetargetRootMotionOp *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  return;
}

// GetSettings @ 14def6c00

FIKRetargetOpSettingsBase * __thiscall
FIKRetargetRootMotionOp::GetSettings(FIKRetargetRootMotionOp *this)

{
  return (FIKRetargetOpSettingsBase *)&this->Settings;
}

// GetSettingsType @ 14def6c10

UScriptStruct * __thiscall FIKRetargetRootMotionOp::GetSettingsType(FIKRetargetRootMotionOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOpSettings,(UObject *)pUVar1
                         ,L"IKRetargetRootMotionOpSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOpSettings.OuterSingleton;
}

// GetType @ 14def6c50

UScriptStruct * __thiscall FIKRetargetRootMotionOp::GetType(FIKRetargetRootMotionOp *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetRootMotionOp,(UObject *)pUVar1,
                         L"IKRetargetRootMotionOp");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetRootMotionOp.OuterSingleton;
}

// FIKRetargetRootMotionOp @ 14df17000

/* WARNING: Type propagation algorithm not settling */

FIKRetargetRootMotionOp * __thiscall
FIKRetargetRootMotionOp::FIKRetargetRootMotionOp(FIKRetargetRootMotionOp *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FIKRetargetRootMotionOp__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Settings)._padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 1;
  (this->Settings)._padding_ = (longlong)&___7FIKRetargetRootMotionOpSettings__6B_;
  *(undefined4 *)&(this->Settings)._padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&(this->Settings)._padding_ + 4) = 1;
  (this->Settings).SourceRoot.BoneName.ComparisonIndex = 0;
  (this->Settings).SourceRoot.BoneName.Number = 0;
  puVar1 = &(this->Settings).SourceRoot.field_0x8;
  (this->Settings).SourceRoot.BoneIndex = -1;
  (this->Settings).SourceRoot.bUseSkeletonIndex = 0;
  (this->Settings).SourceRoot.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Settings).TargetRoot.BoneName.ComparisonIndex = 0;
  (this->Settings).TargetRoot.BoneName.Number = 0;
  puVar1 = &(this->Settings).TargetRoot.field_0x8;
  (this->Settings).TargetRoot.BoneIndex = -1;
  (this->Settings).TargetRoot.bUseSkeletonIndex = 0;
  (this->Settings).TargetRoot.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Settings).RootMotionSource = CopyFromSourceRoot;
  (this->Settings).TargetPelvis.BoneName.ComparisonIndex = 0;
  (this->Settings).TargetPelvis.BoneName.Number = 0;
  puVar1 = &(this->Settings).TargetPelvis.field_0x8;
  (this->Settings).TargetPelvis.BoneIndex = -1;
  (this->Settings).TargetPelvis.bUseSkeletonIndex = 0;
  (this->Settings).TargetPelvis.CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->Settings).bRotateWithPelvis = false;
  (this->Settings).RootHeightSource = CopyHeightFromSource;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->Settings).GlobalOffset.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->Settings).GlobalOffset.Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->Settings).GlobalOffset.Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Settings).GlobalOffset.Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->Settings).GlobalOffset.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->Settings).GlobalOffset.Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->Settings).GlobalOffset.Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->Settings).GlobalOffset.Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->Settings).GlobalOffset.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->Settings).GlobalOffset.Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->Settings).GlobalOffset.Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->Settings).GlobalOffset.Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->Settings).bMaintainOffsetFromPelvis = true;
  (this->Settings).bPropagateToNonRetargetedChildren = true;
  (this->Settings).SourceRootBone_DEPRECATED.ComparisonIndex = 0;
  (this->Settings).SourceRootBone_DEPRECATED.Number = 0;
  (this->Settings).TargetRootBone_DEPRECATED.ComparisonIndex = 0;
  (this->Settings).TargetRootBone_DEPRECATED.Number = 0;
  (this->Settings).TargetPelvisBone_DEPRECATED.ComparisonIndex = 0;
  (this->Settings).TargetPelvisBone_DEPRECATED.Number = 0;
  this->SourceRootIndex = -1;
  this->TargetRootIndex = -1;
  this->TargetPelvisIndex = -1;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisRelativeToTargetRootRefPose).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetPelvisRelativeToTargetRootRefPose).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetPelvisRelativeToTargetRootRefPose).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisRelativeToTargetRootRefPose).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisRelativeToTargetRootRefPose).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisRelativeToTargetRootRefPose).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetPelvisInRefPose).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetPelvisInRefPose).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisInRefPose).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisInRefPose).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetPelvisInRefPose).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetPelvisInRefPose).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisInRefPose).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisInRefPose).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetPelvisInRefPose).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetPelvisInRefPose).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetPelvisInRefPose).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetPelvisInRefPose).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->SourceRootInRefPose).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->SourceRootInRefPose).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->SourceRootInRefPose).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->SourceRootInRefPose).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->SourceRootInRefPose).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->SourceRootInRefPose).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->SourceRootInRefPose).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->SourceRootInRefPose).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->SourceRootInRefPose).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->SourceRootInRefPose).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetRootInRefPose).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetRootInRefPose).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetRootInRefPose).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetRootInRefPose).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetRootInRefPose).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetRootInRefPose).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetRootInRefPose).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetRootInRefPose).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetRootInRefPose).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetRootInRefPose).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  (this->NonRetargetedChildrenOfRoot).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonRetargetedChildrenOfRoot).ArrayNum = 0;
  (this->NonRetargetedChildrenOfRoot).ArrayMax = 0;
  return this;
}

// CopyRootMotionFromSourceRoot @ 14df2d250

void __thiscall
FIKRetargetRootMotionOp::CopyRootMotionFromSourceRoot
          (FIKRetargetRootMotionOp *this,TTransform<double> *param_1,FIKRetargetProcessor *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
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
  double dVar22;
  bool bVar23;
  FIKRetargetPelvisMotionOp *pFVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double local_c8;
  
  uVar3 = this->SourceRootIndex;
  uVar25 = 0;
  if ((int)uVar3 < param_3->ArrayNum) {
    uVar25 = ~uVar3 >> 0x1f;
  }
  if (uVar25 == 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (param_3->AllocatorInstance).Data;
  dVar16 = (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[0];
  dVar17 = (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[1];
  dVar26 = (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar27 = (this->SourceRootInRefPose).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  pFVar1 = pFVar4 + (longlong)(int)uVar3 * 0x60;
  dVar15 = *(double *)pFVar1;
  dVar18 = *(double *)(pFVar1 + 8);
  pFVar4 = pFVar4 + (longlong)(int)uVar3 * 0x60 + 0x10;
  dVar19 = *(double *)pFVar4;
  dVar20 = *(double *)(pFVar4 + 8);
  dVar7 = (this->SourceRootInRefPose).Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = (this->SourceRootInRefPose).Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = dVar15 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar20 * dVar7 +
           dVar18 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar19 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar13 = dVar15 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar20 * dVar9 +
           dVar18 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar19 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar21 = (this->TargetRootInRefPose).Rotation.XY.m128d_f64[0];
  dVar22 = (this->TargetRootInRefPose).Rotation.XY.m128d_f64[1];
  dVar14 = dVar15 * dVar9 * dVar8 + dVar20 * dVar26 + dVar18 * dVar7 * dVar11 +
           dVar19 * dVar27 * dVar2;
  dVar15 = dVar15 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar20 * dVar27 +
           dVar18 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar19 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar22 * dVar15 +
          dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar14 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar7 = dVar12 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar17 * dVar15 +
          dVar22 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar9,0);
  auVar10._0_8_ =
       dVar17 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar21 * dVar15 +
       dVar16 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar14 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar10;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar12 * dVar22 * dVar8 + dVar16 * dVar15 + dVar21 * dVar13 * dVar11 +
                 dVar14 * dVar17 * dVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar6;
  uVar3 = this->SourceRootIndex;
  uVar25 = 0;
  if ((int)uVar3 < param_3->ArrayNum) {
    uVar25 = ~uVar3 >> 0x1f;
  }
  if (uVar25 == 0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar23) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (param_3->AllocatorInstance).Data;
  pFVar1 = pFVar4 + (longlong)(int)uVar3 * 0x60 + 0x20;
  dVar11 = *(double *)pFVar1 - (this->SourceRootInRefPose).Translation.XY.m128d_f64[0];
  dVar8 = *(double *)(pFVar1 + 8) - (this->SourceRootInRefPose).Translation.XY.m128d_f64[1];
  local_c8 = *(double *)(pFVar4 + (longlong)(int)uVar3 * 0x60 + 0x30) -
             (this->SourceRootInRefPose).Translation.ZW.m128d_f64[0];
  pFVar24 = FIKRetargetProcessor::GetFirstRetargetOpOfType<FIKRetargetPelvisMotionOp>
                      (param_2,ProcessorOps);
  if (pFVar24 != (FIKRetargetPelvisMotionOp *)0x0) {
    dVar2 = (pFVar24->Settings).ScaleHorizontal;
    dVar8 = dVar8 * dVar2 * (pFVar24->GlobalScaleFactor).field0_0x0._s_0.Y;
    dVar11 = dVar11 * dVar2 * (pFVar24->GlobalScaleFactor).field0_0x0._s_0.X;
    local_c8 = local_c8 *
               (pFVar24->Settings).ScaleVertical * (pFVar24->GlobalScaleFactor).field0_0x0._s_0.Z;
  }
  dVar2 = (this->SourceRootInRefPose).Translation.XY.m128d_f64[1];
  local_c8 = (this->SourceRootInRefPose).Translation.ZW.m128d_f64[0] + local_c8;
  if ((this->Settings).RootHeightSource == SnapToGround) {
    local_c8 = 0.0;
  }
  (param_1->Translation).XY.m128d_f64[0] =
       (this->SourceRootInRefPose).Translation.XY.m128d_f64[0] + dVar11;
  (param_1->Translation).XY.m128d_f64[1] = dVar2 + dVar8;
  (param_1->Translation).ZW.m128d_f64[0] = local_c8;
  (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  return;
}

// GenerateRootMotionFromTargetPelvis @ 14df347c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRetargetRootMotionOp::GenerateRootMotionFromTargetPelvis
          (FIKRetargetRootMotionOp *this,TTransform<double> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  ERootMotionHeightSource EVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  double local_128;
  double dStack_120;
  double local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar2 = this->TargetPelvisIndex;
  lVar11 = (longlong)(int)uVar2;
  iVar3 = param_3->ArrayNum;
  if ((this->Settings).bMaintainOffsetFromPelvis == false) {
    uVar10 = 0;
    if ((int)uVar2 < iVar3) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_138 = lVar11;
      local_130 = (longlong)iVar3;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_3->AllocatorInstance).Data;
    lVar11 = lVar11 * 0x60;
    dVar7 = *(double *)(pFVar4 + lVar11 + 8);
    (param_1->Rotation).XY.m128d_f64[0] = *(double *)(pFVar4 + lVar11);
    (param_1->Rotation).XY.m128d_f64[1] = dVar7;
    dVar7 = *(double *)(pFVar4 + lVar11 + 0x10 + 8);
    (param_1->Rotation).ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar11 + 0x10);
    (param_1->Rotation).ZW.m128d_f64[1] = dVar7;
    dVar7 = *(double *)(pFVar4 + lVar11 + 0x20 + 8);
    (param_1->Translation).XY.m128d_f64[0] = *(double *)(pFVar4 + lVar11 + 0x20);
    (param_1->Translation).XY.m128d_f64[1] = dVar7;
    dVar7 = *(double *)(pFVar4 + lVar11 + 0x30 + 8);
    (param_1->Translation).ZW.m128d_f64[0] = *(double *)(pFVar4 + lVar11 + 0x30);
    (param_1->Translation).ZW.m128d_f64[1] = dVar7;
    dVar7 = *(double *)(pFVar4 + lVar11 + 0x40 + 8);
    (param_1->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar4 + lVar11 + 0x40);
    (param_1->Scale3D).XY.m128d_f64[1] = dVar7;
    pFVar4 = pFVar4 + lVar11 + 0x50;
    uVar12 = *(undefined4 *)pFVar4;
    uVar13 = *(undefined4 *)(pFVar4 + 4);
    uVar14 = *(undefined4 *)(pFVar4 + 8);
    uVar15 = *(undefined4 *)(pFVar4 + 0xc);
  }
  else {
    uVar10 = 0;
    if ((int)uVar2 < iVar3) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_138 = lVar11;
      local_130 = (longlong)iVar3;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
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
              (&local_b8,&this->TargetPelvisRelativeToTargetRootRefPose,
               (TTransform<double> *)((param_3->AllocatorInstance).Data + lVar11 * 0x60));
    (param_1->Rotation).XY.m128d_f64[0] = local_b8.Rotation.XY.m128d_f64[0];
    (param_1->Rotation).XY.m128d_f64[1] = local_b8.Rotation.XY.m128d_f64[1];
    (param_1->Rotation).ZW.m128d_f64[0] = local_b8.Rotation.ZW.m128d_f64[0];
    (param_1->Rotation).ZW.m128d_f64[1] = local_b8.Rotation.ZW.m128d_f64[1];
    (param_1->Translation).XY.m128d_f64[0] = local_b8.Translation.XY.m128d_f64[0];
    (param_1->Translation).XY.m128d_f64[1] = local_b8.Translation.XY.m128d_f64[1];
    (param_1->Translation).ZW.m128d_f64[0] = local_b8.Translation.ZW.m128d_f64[0];
    (param_1->Translation).ZW.m128d_f64[1] = local_b8.Translation.ZW.m128d_f64[1];
    (param_1->Scale3D).XY.m128d_f64[0] = local_b8.Scale3D.XY.m128d_f64[0];
    (param_1->Scale3D).XY.m128d_f64[1] = local_b8.Scale3D.XY.m128d_f64[1];
    uVar12 = local_b8.Scale3D.ZW.m128d_f64[0]._0_4_;
    uVar13 = local_b8.Scale3D.ZW.m128d_f64[0]._4_4_;
    uVar14 = local_b8.Scale3D.ZW.m128d_f64[1]._0_4_;
    uVar15 = local_b8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  *(undefined4 *)(param_1->Scale3D).ZW.m128d_f64 = uVar12;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4) = uVar13;
  *(undefined4 *)((param_1->Scale3D).ZW.m128d_f64 + 1) = uVar14;
  *(undefined4 *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc) = uVar15;
  if ((this->Settings).bRotateWithPelvis == false) {
    dVar7 = (this->TargetRootInRefPose).Rotation.XY.m128d_f64[1];
    dVar8 = (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[0];
    dVar6 = (this->TargetRootInRefPose).Rotation.ZW.m128d_f64[1];
    (param_1->Rotation).XY.m128d_f64[0] = (this->TargetRootInRefPose).Rotation.XY.m128d_f64[0];
    (param_1->Rotation).XY.m128d_f64[1] = dVar7;
    (param_1->Rotation).ZW.m128d_f64[0] = dVar8;
    (param_1->Rotation).ZW.m128d_f64[1] = dVar6;
  }
  EVar1 = (this->Settings).RootHeightSource;
  if (EVar1 == SnapToGround) {
    dVar7 = (param_1->Translation).XY.m128d_f64[1];
    (param_1->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
    (param_1->Translation).XY.m128d_f64[1] = dVar7;
    (param_1->Translation).ZW.m128d_f64[0] = 0.0;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  }
  else if (EVar1 == CopyHeightFromSource) {
    uVar2 = this->SourceRootIndex;
    local_130 = (longlong)param_2->ArrayNum;
    local_118 = (param_1->Translation).ZW.m128d_f64[0];
    dVar7 = (param_1->Translation).XY.m128d_f64[0];
    dVar8 = (param_1->Translation).XY.m128d_f64[1];
    uVar10 = 0;
    if ((int)uVar2 < param_2->ArrayNum) {
      uVar10 = ~uVar2 >> 0x1f;
    }
    if (uVar10 == 0) {
      local_138 = (longlong)(int)uVar2;
      local_128 = dVar7;
      dStack_120 = dVar8;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    dVar6 = *(double *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar2 * 0x60 + 0x30);
    (param_1->Translation).XY.m128d_f64[0] = dVar7;
    (param_1->Translation).XY.m128d_f64[1] = dVar8;
    (param_1->Translation).ZW.m128d_f64[0] = dVar6;
    (param_1->Translation).ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// Reset @ 14df4eb10

void __thiscall FIKRetargetRootMotionOp::Reset(FIKRetargetRootMotionOp *this)

{
  this->SourceRootIndex = -1;
  this->TargetRootIndex = -1;
  this->TargetPelvisIndex = -1;
  (this->NonRetargetedChildrenOfRoot).ArrayNum = 0;
  if ((this->NonRetargetedChildrenOfRoot).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->NonRetargetedChildrenOfRoot).AllocatorInstance,0,
               &(this->NonRetargetedChildrenOfRoot).ArrayMax);
  }
  return;
}

