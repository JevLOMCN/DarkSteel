// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 11

// StaticStruct @ 14deead60

UScriptStruct * __cdecl FIKRigSetTransform::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSetTransform,(UObject *)pUVar1,
                         L"IKRigSetTransform");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSetTransform.OuterSingleton;
}

// Initialize @ 14deeada0

void __thiscall FIKRigSetTransform::Initialize(FIKRigSetTransform *this,FIKRigSkeleton *param_1)

{
  int iVar1;
  
  iVar1 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).BoneToAffect);
  this->BoneIndex = iVar1;
  return;
}

// Solve @ 14deeae10

void __thiscall
FIKRigSetTransform::Solve
          (FIKRigSetTransform *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  TQuat<double> *pTVar11;
  FName *pFVar12;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  uint uVar26;
  uint uVar27;
  TQuat<double> local_78;
  TQuat<double> local_58 [2];
  
  uVar26 = this->BoneIndex;
  if (uVar26 != 0xffffffff) {
    pFVar13 = (FName *)(param_2->Goals).AllocatorInstance.Data;
    pFVar12 = pFVar13 + (longlong)(param_2->Goals).ArrayNum * 0x16;
    for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 0x16) {
      if (*pFVar13 == (this->Settings).Goal) {
        bVar2 = __real_38d1b717 < (this->Settings).PositionAlpha;
        bVar3 = __real_38d1b717 < (this->Settings).RotationAlpha;
        if ((!bVar2) && (!bVar3)) {
          return;
        }
        if ((this->Settings).Alpha <= __real_38d1b717) {
          return;
        }
        uVar27 = 0;
        if ((int)uVar26 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x60
        ;
        if (bVar2) {
          dVar24 = *(double *)(pFVar14 + 0x28);
          dVar18 = *(double *)&pFVar14[0x30].field_0x0;
          dVar17 = (double)((this->Settings).Alpha * (this->Settings).PositionAlpha);
          FVar1 = pFVar13[0xf];
          in_XMM2._8_8_ = dVar24;
          in_XMM2._0_8_ = dVar24;
          dVar24 = ((double)pFVar13[0xe] - dVar24) * dVar17 + dVar24;
          auVar19._8_4_ = SUB84(dVar24,0);
          auVar19._0_8_ =
               ((double)pFVar13[0xd] - *(double *)&pFVar14[0x20].field_0x0) * dVar17 +
               *(double *)&pFVar14[0x20].field_0x0;
          auVar19._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          *(undefined1 (*) [16])(pFVar14 + 0x20) = auVar19;
          *(double *)&pFVar14[0x30].field_0x0 = ((double)FVar1 - dVar18) * dVar17 + dVar18;
          *(undefined8 *)(pFVar14 + 0x38) = 0;
        }
        if (bVar3) {
          local_78.Z = *(double *)&pFVar14[0x10].field_0x0;
          local_78.W = *(double *)(pFVar14 + 0x18);
          local_78.X = *(double *)&pFVar14->field_0x0;
          local_78.Y = *(double *)(pFVar14 + 8);
          pTVar11 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (local_58,&local_78,(TQuat<double> *)(pFVar13 + 0x10),
                               (double)((this->Settings).RotationAlpha * (this->Settings).Alpha));
          dVar17 = pTVar11->X;
          dVar7 = pTVar11->Y;
          dVar8 = pTVar11->Z;
          dVar9 = pTVar11->W;
          dVar18 = dVar17 * dVar17 + dVar8 * dVar8;
          dVar22 = dVar7 * dVar7 + dVar9 * dVar9;
          dVar24 = dVar22 + dVar18;
          dVar18 = dVar18 + dVar22;
          auVar23._8_4_ = SUB84(dVar18,0);
          auVar23._0_8_ = dVar24;
          auVar23._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          auVar23 = sqrtpd(in_XMM2,auVar23);
          uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar24);
          uVar16 = -(ulonglong)(__real_3e45798ee0000000 <= dVar18);
          uVar26 = (uint)(uVar15 >> 0x20);
          uVar27 = (uint)(uVar16 >> 0x20);
          auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar23);
          auVar20._0_8_ = uVar15 & (ulonglong)(auVar19._0_8_ * dVar8);
          uVar6 = uVar16 & (ulonglong)(auVar19._8_8_ * dVar9);
          auVar20._8_4_ = (undefined4)uVar6;
          auVar20._12_4_ = (undefined4)(uVar6 >> 0x20);
          auVar25._0_4_ =
               ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar25._4_4_ =
               ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar25._8_4_ =
               ~(uint)uVar16 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar25._12_4_ =
               ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
          auVar21._0_8_ = (ulonglong)(auVar19._0_8_ * dVar17) & uVar15;
          uVar6 = (ulonglong)(auVar19._8_8_ * dVar7) & uVar16;
          auVar21._8_4_ = (undefined4)uVar6;
          auVar21._12_4_ = (undefined4)(uVar6 >> 0x20);
          auVar5._4_4_ = ~uVar26 & (uint)((ulonglong)
                                          (double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                         0x20);
          auVar5._0_4_ = ~(uint)uVar15 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar5._8_4_ = ~(uint)uVar16 &
                         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar5._12_4_ =
               ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          *(undefined1 (*) [16])pFVar14 = auVar21 | auVar5;
          *(undefined1 (*) [16])(pFVar14 + 0x10) = auVar25 | auVar20;
        }
        if ((this->Settings).bPropagateToChildren == false) {
          return;
        }
        FIKRigSkeleton::PropagateGlobalPoseBelowBone(param_1,this->BoneIndex);
        return;
      }
    }
  }
  return;
}

// GetRequiredBones @ 14deeb0f0

void __thiscall
FIKRigSetTransform::GetRequiredBones
          (FIKRigSetTransform *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).BoneToAffect);
  return;
}

// GetRequiredGoals @ 14deeb120

void __thiscall
FIKRigSetTransform::GetRequiredGoals
          (FIKRigSetTransform *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  FName local_res8;
  
  FVar1 = (this->Settings).Goal;
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 != FVar3) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res8,(bool *)&(this->Settings).Goal);
  }
  return;
}

// GetSolverSettings @ 14deeb180

FIKRigSolverSettingsBase * __thiscall
FIKRigSetTransform::GetSolverSettings(FIKRigSetTransform *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14deeb190

UScriptStruct * __thiscall FIKRigSetTransform::GetSolverSettingsType(FIKRigSetTransform *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigSetTransformSettings,(UObject *)pUVar1,
                         L"IKRigSetTransformSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigSetTransformSettings.OuterSingleton;
}

// AddGoal @ 14deeb210

void __thiscall FIKRigSetTransform::AddGoal(FIKRigSetTransform *this,UIKRigEffectorGoal *param_1)

{
  (this->Settings).Goal = param_1->GoalName;
  (this->Settings).BoneToAffect = param_1->BoneName;
  return;
}

// OnGoalRemoved @ 14deeb230

void __thiscall FIKRigSetTransform::OnGoalRemoved(FIKRigSetTransform *this,FName *param_1)

{
  if ((this->Settings).Goal == *param_1) {
    (this->Settings).Goal.ComparisonIndex = 0;
    (this->Settings).Goal.Number = 0;
    (this->Settings).BoneToAffect.ComparisonIndex = 0;
    (this->Settings).BoneToAffect.Number = 0;
  }
  return;
}

// OnGoalRenamed @ 14deeb310

void __thiscall
FIKRigSetTransform::OnGoalRenamed(FIKRigSetTransform *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).Goal == *param_1) {
    (this->Settings).Goal = *param_2;
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14deeb3b0

void __thiscall
FIKRigSetTransform::OnGoalMovedToDifferentBone
          (FIKRigSetTransform *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).Goal == *param_1) {
    (this->Settings).BoneToAffect = *param_2;
  }
  return;
}

