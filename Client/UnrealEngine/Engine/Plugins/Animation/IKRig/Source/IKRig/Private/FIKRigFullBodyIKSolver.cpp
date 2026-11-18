// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 28

// StaticStruct @ 14df03250

UScriptStruct * __cdecl FIKRigFullBodyIKSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFullBodyIKSolver,(UObject *)pUVar1,
                         L"IKRigFullBodyIKSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigFullBodyIKSolver.OuterSingleton;
}

// Initialize @ 14df051b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FIKRigFullBodyIKSolver::Initialize(FIKRigFullBodyIKSolver *this,FIKRigSkeleton *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_118 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  longlong local_e0;
  TVector<double>_u_0 local_d8;
  TQuat<double> local_b8 [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar8 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar9 = 0;
  iVar7 = (this->AllGoalSettings).ArrayNum;
  pFVar11 = (FName *)(pFVar8 + 0x10);
  pFVar14 = pFVar8 + (longlong)iVar7 * 0x30;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar7) {
      local_e8 = 0;
      `TCheckedPointerIterator<FIKRigFBIKGoalSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_e8);
    }
    if (pFVar8 == pFVar14) break;
    iVar3 = FIKRigSkeleton::GetBoneIndexFromName(param_1,*pFVar11);
    if (iVar3 != -1) {
      iVar9 = iVar9 + 1;
    }
    pFVar8 = pFVar8 + 0x30;
    pFVar11 = pFVar11 + 6;
  }
  if ((0 < iVar9) && ((this->Settings).RootBone != (FName)0x0)) {
    FPBIKSolver::Reset(&this->Solver);
    iVar7 = (param_1->BoneNames).ArrayNum;
    uVar10 = 0;
    if (0 < iVar7) {
      local_e0 = 0;
      lVar13 = 0;
      do {
        lVar12 = local_e0;
        uVar4 = 0;
        if ((int)uVar10 < iVar7) {
          uVar4 = ~uVar10 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (param_1->BoneNames).AllocatorInstance.Data;
        uVar4 = FIKRigSkeleton::GetParentIndex(param_1,uVar10);
        for (; uVar4 != 0xffffffff;
            uVar4 = *(uint *)((param_1->ParentIndices).AllocatorInstance.Data +
                             (longlong)(int)uVar4 * 4)) {
          if (((int)uVar4 < 0) || ((param_1->BoneNames).ArrayNum <= (int)uVar4)) {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4012152839248806228>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\IKRigSkeleton.cpp"
                               ,0x154,"BoneNames.IsValidIndex(BoneIndex)");
            lVar12 = local_e0;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            break;
          }
          if (((int)uVar4 < 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar6 = (param_1->ExcludedBones).AllocatorInstance.Data;
          pFVar14 = pFVar6 + (longlong)(param_1->ExcludedBones).ArrayNum * 8;
          lVar12 = local_e0;
          if (pFVar6 == pFVar14) break;
          while (*(longlong *)pFVar6 !=
                 *(longlong *)
                  ((param_1->BoneNames).AllocatorInstance.Data + (longlong)(int)uVar4 * 8)) {
            pFVar6 = pFVar6 + 8;
            if (pFVar6 == pFVar14) goto LAB_14df05401;
          }
          if ((param_1->BoneNames).ArrayNum <= (int)uVar4) {
            uVar4 = 0xffffffff;
            break;
          }
          uVar5 = 0;
          if ((int)uVar4 < (param_1->ParentIndices).ArrayNum) {
            uVar5 = ~uVar4 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar12 = local_e0;
        }
LAB_14df05401:
        uVar5 = 0;
        if ((int)uVar10 < (param_1->RefPoseGlobal).ArrayNum) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar14 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
        local_b8[0].X = *(double *)(pFVar14 + lVar12);
        local_b8[0].Y = *(double *)(pFVar14 + lVar12 + 8);
        local_b8[0].Z = *(double *)(pFVar14 + lVar12 + 0x10);
        local_b8[0].W = *(double *)(pFVar14 + lVar12 + 0x10 + 8);
        local_d8._s_0.X = (double)*(undefined8 *)(pFVar14 + lVar12 + 0x20);
        local_d8._s_0.Y = (double)*(undefined8 *)(pFVar14 + lVar12 + 0x20 + 8);
        local_d8._s_0.Z = (double)*(undefined8 *)(pFVar14 + lVar12 + 0x30);
        FPBIKSolver::AddBone
                  (&this->Solver,*(FName *)(pFVar8 + lVar13),uVar4,(TVector<double> *)&local_d8._s_0
                   ,local_b8,*(FName *)(pFVar8 + lVar13) == (this->Settings).RootBone);
        iVar7 = (param_1->BoneNames).ArrayNum;
        local_e0 = lVar12 + 0x60;
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 8;
      } while ((int)uVar10 < iVar7);
    }
    iVar7 = (this->AllGoalSettings).ArrayNum;
    pFVar8 = (this->AllGoalSettings).AllocatorInstance.Data;
    pFVar14 = pFVar8 + (longlong)iVar7 * 0x30;
    while( true ) {
      if ((this->AllGoalSettings).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FIKRigFBIKGoalSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e7);
      }
      if (pFVar8 == pFVar14) break;
      iVar9 = FPBIKSolver::AddEffector(&this->Solver,*(FName *)(pFVar8 + 0x10));
      *(int *)(pFVar8 + 0x28) = iVar9;
      pFVar8 = pFVar8 + 0x30;
    }
    FPBIKSolver::Initialize(&this->Solver);
  }
  return;
}

// Solve @ 14df055a0

void __thiscall
FIKRigFullBodyIKSolver::Solve
          (FIKRigFullBodyIKSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FPBIKSolver *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FBoneSettings *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FEffectorSettings local_88;
  FPBIKSolverSettings local_68;
  
  this_00 = &this->Solver;
  bVar3 = FPBIKSolver::IsReadyToSimulate(this_00);
  if ((bVar3) && (iVar1 = (this->Solver).Bones.ArrayNum, iVar1 == (param_1->BoneNames).ArrayNum)) {
    uVar8 = 0;
    if (0 < iVar1) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPBIKSolver::SetBoneTransform
                  (this_00,uVar8,
                   (TTransform<double> *)
                   ((param_1->CurrentPoseGlobal).AllocatorInstance.Data +
                   (longlong)(int)uVar8 * 0x60));
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->Solver).Bones.ArrayNum);
    }
    iVar1 = (this->AllBoneSettings).ArrayNum;
    pFVar9 = (this->AllBoneSettings).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x58;
    while( true ) {
      if ((this->AllBoneSettings).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FIKRigFBIKBoneSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar10) break;
      iVar5 = FPBIKSolver::GetBoneIndex(this_00,*(FName *)(pFVar9 + 8));
      pFVar6 = FPBIKSolver::GetBoneSettings(this_00,iVar5);
      if (pFVar6 != (FBoneSettings *)0x0) {
        pFVar6->RotationStiffness = *(float *)(pFVar9 + 0x10);
        pFVar6->PositionStiffness = *(float *)(pFVar9 + 0x14);
        pFVar6->X = (ELimitType)pFVar9[0x18];
        pFVar6->MinX = *(float *)(pFVar9 + 0x1c);
        pFVar6->MaxX = *(float *)(pFVar9 + 0x20);
        pFVar6->Y = (ELimitType)pFVar9[0x24];
        pFVar6->MinY = *(float *)(pFVar9 + 0x28);
        pFVar6->MaxY = *(float *)(pFVar9 + 0x2c);
        pFVar6->Z = (ELimitType)pFVar9[0x30];
        pFVar6->MinZ = *(float *)(pFVar9 + 0x34);
        pFVar6->MaxZ = *(float *)(pFVar9 + 0x38);
        pFVar6->bUsePreferredAngles = (bool)pFVar9[0x3c];
        (pFVar6->PreferredAngles).Pitch = *(double *)(pFVar9 + 0x48);
        (pFVar6->PreferredAngles).Yaw = *(double *)(pFVar9 + 0x50);
        (pFVar6->PreferredAngles).Roll = *(double *)(pFVar9 + 0x40);
      }
      pFVar9 = pFVar9 + 0x58;
    }
    iVar1 = (this->AllGoalSettings).ArrayNum;
    pFVar9 = (this->AllGoalSettings).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((this->AllGoalSettings).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FIKRigFBIKGoalSettings,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar9 == pFVar10) break;
      if (-1 < *(int *)(pFVar9 + 0x28)) {
        pFVar11 = (param_2->Goals).AllocatorInstance.Data;
        pFVar7 = pFVar11 + (longlong)(param_2->Goals).ArrayNum * 0xb0;
        while( true ) {
          if (pFVar11 == pFVar7) {
            return;
          }
          if (*(longlong *)pFVar11 == *(longlong *)(pFVar9 + 8)) break;
          pFVar11 = pFVar11 + 0xb0;
        }
        local_88.StrengthAlpha = *(float *)(pFVar9 + 0x1c);
        local_88.ChainDepth = *(int *)(pFVar9 + 0x18);
        local_88.PinRotation = *(float *)(pFVar9 + 0x24);
        local_88.PullChainAlpha = *(float *)(pFVar9 + 0x20);
        local_88.PositionAlpha = 1.0;
        local_88.RotationAlpha = 1.0;
        FPBIKSolver::SetEffectorGoal
                  (this_00,*(int *)(pFVar9 + 0x28),(TVector<double> *)(pFVar11 + 0x68),
                   (TQuat<double> *)(pFVar11 + 0x80),&local_88);
      }
      pFVar9 = pFVar9 + 0x30;
    }
    local_68.MassMultiplier = (this->Settings).MassMultiplier;
    local_68.Iterations = (this->Settings).Iterations;
    local_68.PrePullRootSettings.PositionAlpha = (this->Settings).PrePullRootSettings.PositionAlpha;
    local_68.PrePullRootSettings.PositionAlphaX =
         (this->Settings).PrePullRootSettings.PositionAlphaX;
    local_68.PrePullRootSettings.PositionAlphaY =
         (this->Settings).PrePullRootSettings.PositionAlphaY;
    local_68.PrePullRootSettings.PositionAlphaZ =
         (this->Settings).PrePullRootSettings.PositionAlphaZ;
    local_68.SubIterations = (this->Settings).SubIterations;
    local_68.PrePullRootSettings.RotationAlpha = (this->Settings).PrePullRootSettings.RotationAlpha;
    local_68.PrePullRootSettings.RotationAlphaX =
         (this->Settings).PrePullRootSettings.RotationAlphaX;
    local_68.PrePullRootSettings.RotationAlphaY =
         (this->Settings).PrePullRootSettings.RotationAlphaY;
    local_68.PrePullRootSettings.RotationAlphaZ =
         (this->Settings).PrePullRootSettings.RotationAlphaZ;
    local_68.bAllowStretch = (this->Settings).bAllowStretch;
    local_68.GlobalPullChainAlpha = (this->Settings).GlobalPullChainAlpha;
    local_68.OverRelaxation = (this->Settings).OverRelaxation;
    local_68.RootBehavior = (this->Settings).RootBehavior;
    local_68.MaxAngle = (this->Settings).MaxAngle;
    local_68.bStartSolveFromInputPose_DEPRECATED = true;
    FPBIKSolver::Solve(this_00,&local_68);
    uVar8 = 0;
    if (0 < (this->Solver).Bones.ArrayNum) {
      do {
        uVar4 = 0;
        if ((int)uVar8 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FPBIKSolver::GetBoneGlobalTransform
                  (this_00,uVar8,
                   (TTransform<double> *)
                   ((param_1->CurrentPoseGlobal).AllocatorInstance.Data +
                   (longlong)(int)uVar8 * 0x60));
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->Solver).Bones.ArrayNum);
    }
  }
  return;
}

// GetRequiredBones @ 14df059d0

void __thiscall
FIKRigFullBodyIKSolver::GetRequiredBones
          (FIKRigFullBodyIKSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FName local_res8;
  FName local_res18;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,&local_res8,(bool *)&(this->Settings).RootBone);
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKGoalSettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 0x10));
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// GetRequiredGoals @ 14df05a60

void __thiscall
FIKRigFullBodyIKSolver::GetRequiredGoals
          (FIKRigFullBodyIKSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKGoalSettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// GetSolverSettings @ 14df05b20

FIKRigSolverSettingsBase * __thiscall
FIKRigFullBodyIKSolver::GetSolverSettings(FIKRigFullBodyIKSolver *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14df05b30

UScriptStruct * __thiscall
FIKRigFullBodyIKSolver::GetSolverSettingsType(FIKRigFullBodyIKSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFBIKSettings,(UObject *)pUVar1,
                         L"IKRigFBIKSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigFBIKSettings.OuterSingleton;
}

// AddGoal @ 14df05b70

void __thiscall
FIKRigFullBodyIKSolver::AddGoal(FIKRigFullBodyIKSolver *this,UIKRigEffectorGoal *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  FName FVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (this->AllGoalSettings).ArrayNum;
  piVar1 = &(this->AllGoalSettings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->AllGoalSettings).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  (this->AllGoalSettings).ArrayNum = iVar5 + 1;
  FVar3 = param_1->GoalName;
  lVar6 = (longlong)iVar5;
  FVar4 = param_1->BoneName;
  *(undefined ***)(pFVar2 + lVar6 * 0x30) = &___7FIKRigFBIKGoalSettings__6B_;
  *(FName *)(pFVar2 + lVar6 * 0x30 + 0x10) = FVar4;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x18) = 0;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x1c) = 0x3f800000;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x20) = 0x3f800000;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x24) = 0x3f800000;
  *(undefined4 *)(pFVar2 + lVar6 * 0x30 + 0x28) = 0xffffffff;
  *(FName *)(pFVar2 + lVar6 * 0x30 + 8) = FVar3;
  return;
}

// OnGoalRenamed @ 14df05c10

void __thiscall
FIKRigFullBodyIKSolver::OnGoalRenamed(FIKRigFullBodyIKSolver *this,FName *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar6 = pFVar1;
  if (pFVar1 != pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x30) {
    while (*(FName *)(pFVar6 + 8) != *param_1) {
      pFVar6 = pFVar6 + 0x30;
      if (pFVar6 == pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x30) {
        return;
      }
    }
    lVar7 = ((longlong)pFVar6 - (longlong)pFVar1) / 6 +
            ((longlong)pFVar6 - (longlong)pFVar1 >> 0x3f);
    uVar8 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
    if (uVar8 != 0xffffffff) {
      FVar2 = *param_2;
      uVar5 = 0;
      if ((int)uVar8 < (this->AllGoalSettings).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FName *)((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30 + 8) =
           FVar2;
    }
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14df05d00

void __thiscall
FIKRigFullBodyIKSolver::OnGoalMovedToDifferentBone
          (FIKRigFullBodyIKSolver *this,FName *param_1,FName *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  uint uVar8;
  
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar6 = pFVar1;
  if (pFVar1 != pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x30) {
    while (*(FName *)(pFVar6 + 8) != *param_1) {
      pFVar6 = pFVar6 + 0x30;
      if (pFVar6 == pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x30) {
        return;
      }
    }
    lVar7 = ((longlong)pFVar6 - (longlong)pFVar1) / 6 +
            ((longlong)pFVar6 - (longlong)pFVar1 >> 0x3f);
    uVar8 = (int)(lVar7 >> 3) - (int)(lVar7 >> 0x3f);
    if (uVar8 != 0xffffffff) {
      FVar2 = *param_2;
      uVar5 = 0;
      if ((int)uVar8 < (this->AllGoalSettings).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FName *)((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30 + 0x10
                ) = FVar2;
    }
  }
  return;
}

// OnGoalRemoved @ 14df05df0

void __thiscall FIKRigFullBodyIKSolver::OnGoalRemoved(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  TArray<FIKRigFBIKGoalSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  iVar8 = (this->AllGoalSettings).ArrayNum;
  pTVar1 = &this->AllGoalSettings;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar7;
  if (pFVar7 != pFVar7 + (longlong)iVar8 * 0x30) {
    while (*(FName *)(pFVar6 + 8) != *param_1) {
      pFVar6 = pFVar6 + 0x30;
      if (pFVar6 == pFVar7 + (longlong)iVar8 * 0x30) {
        return;
      }
    }
    lVar9 = ((longlong)pFVar6 - (longlong)pFVar7) / 6 +
            ((longlong)pFVar6 - (longlong)pFVar7 >> 0x3f);
    uVar10 = (int)(lVar9 >> 3) - (int)(lVar9 >> 0x3f);
    if (uVar10 != 0xffffffff) {
      uVar5 = 0;
      if ((int)uVar10 < iVar8) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x30;
      *(undefined ***)pFVar7 = &___7FIKRigSettingsBase__6B_;
      iVar8 = (this->AllGoalSettings).ArrayNum + ~uVar10;
      if (iVar8 != 0) {
        memmove(pFVar7,pFVar7 + 0x30,(longlong)iVar8 * 0x30);
      }
      piVar2 = &(this->AllGoalSettings).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,&pTVar1->AllocatorInstance,(this->AllGoalSettings).ArrayNum,
                 &(this->AllGoalSettings).ArrayMax);
    }
  }
  return;
}

// UsesCustomGoalSettings @ 14df05f20

bool __thiscall FIKRigFullBodyIKSolver::UsesCustomGoalSettings(FIKRigFullBodyIKSolver *this)

{
  return true;
}

// GetGoalSettings @ 14df05f30

FIKRigGoalSettingsBase * __thiscall
FIKRigFullBodyIKSolver::GetGoalSettings(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FIKRigGoalSettingsBase *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  uint uVar9;
  
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar7 = pFVar2;
  while( true ) {
    if (pFVar7 == pFVar2 + (longlong)iVar1 * 0x30) {
      return (FIKRigGoalSettingsBase *)0x0;
    }
    if (*(FName *)(pFVar7 + 8) == *param_1) break;
    pFVar7 = pFVar7 + 0x30;
  }
  lVar8 = ((longlong)pFVar7 - (longlong)pFVar2) / 6 + ((longlong)pFVar7 - (longlong)pFVar2 >> 0x3f);
  uVar9 = (int)(lVar8 >> 3) - (int)(lVar8 >> 0x3f);
  if (uVar9 == 0xffffffff) {
    return (FIKRigGoalSettingsBase *)0x0;
  }
  uVar5 = 0;
  if ((int)uVar9 < iVar1) {
    uVar5 = ~uVar9 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FIKRigGoalSettingsBase *)(*pcVar3)();
    return pFVar6;
  }
  return (FIKRigGoalSettingsBase *)
         ((this->AllGoalSettings).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30);
}

// GetGoalSettingsType @ 14df06010

UScriptStruct * __thiscall FIKRigFullBodyIKSolver::GetGoalSettingsType(FIKRigFullBodyIKSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFBIKGoalSettings,(UObject *)pUVar1,
                         L"IKRigFBIKGoalSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigFBIKGoalSettings.OuterSingleton;
}

// GetGoalsWithSettings @ 14df06050

void __thiscall
FIKRigFullBodyIKSolver::GetGoalsWithSettings
          (FIKRigFullBodyIKSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllGoalSettings).ArrayNum;
  pFVar2 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AllGoalSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKGoalSettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// UsesStartBone @ 14df060d0

bool __thiscall FIKRigFullBodyIKSolver::UsesStartBone(FIKRigFullBodyIKSolver *this)

{
  return true;
}

// SetStartBone @ 14df060e0

void __thiscall FIKRigFullBodyIKSolver::SetStartBone(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  (this->Settings).RootBone = *param_1;
  return;
}

// GetStartBone @ 14df060f0

FName __thiscall FIKRigFullBodyIKSolver::GetStartBone(FIKRigFullBodyIKSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).RootBone;
  return in_RDX;
}

// UsesCustomBoneSettings @ 14df06110

bool __thiscall FIKRigFullBodyIKSolver::UsesCustomBoneSettings(FIKRigFullBodyIKSolver *this)

{
  return true;
}

// AddSettingsToBone @ 14df06120

void __thiscall
FIKRigFullBodyIKSolver::AddSettingsToBone(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  
  iVar3 = (this->AllBoneSettings).ArrayNum;
  pFVar4 = (this->AllBoneSettings).AllocatorInstance.Data;
  pFVar6 = pFVar4 + (longlong)iVar3 * 0x58;
  if (pFVar4 != pFVar6) {
    do {
      if (*(FName *)(pFVar4 + 8) == *param_1) {
        return;
      }
      pFVar4 = pFVar4 + 0x58;
    } while (pFVar4 != pFVar6);
  }
  if (iVar3 == (this->AllBoneSettings).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&(this->AllBoneSettings).AllocatorInstance,
                       &(this->AllBoneSettings).ArrayMax);
  }
  (this->AllBoneSettings).ArrayNum = iVar3 + 1;
  pFVar4 = (this->AllBoneSettings).AllocatorInstance.Data;
  lVar5 = (longlong)iVar3 * 0x58;
  FVar1 = *param_1;
  *(undefined8 *)(pFVar4 + lVar5 + 8) = 0;
  *(undefined ***)(pFVar4 + lVar5) = &___7FIKRigFBIKBoneSettings__6B_;
  *(undefined8 *)(pFVar4 + lVar5 + 0x10) = 0;
  pFVar4[lVar5 + 0x18] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar4 + lVar5 + 0x1c) = 0;
  pFVar4[lVar5 + 0x24] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar4 + lVar5 + 0x28) = 0;
  pFVar4[lVar5 + 0x30] = (FScriptContainerElement)0x0;
  *(undefined8 *)(pFVar4 + lVar5 + 0x34) = 0;
  pFVar4[lVar5 + 0x3c] = (FScriptContainerElement)0x0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(pFVar4 + lVar5 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar4 + lVar5 + 0x40 + 8) = uVar2;
  *(double *)(pFVar4 + lVar5 + 0x50) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(FName *)(pFVar4 + lVar5 + 8) = FVar1;
  return;
}

// RemoveSettingsOnBone @ 14df06200

void __thiscall
FIKRigFullBodyIKSolver::RemoveSettingsOnBone(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = (this->AllBoneSettings).ArrayNum;
  lVar7 = (longlong)iVar5;
  if (iVar5 != 0) {
    pFVar1 = (this->AllBoneSettings).AllocatorInstance.Data;
    iVar8 = 0;
    bVar9 = *(FName *)(pFVar1 + 8) != *param_1;
    lVar3 = 0;
    iVar5 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar6 = iVar5 + 1;
      if (lVar3 < lVar7) {
        pFVar2 = (FName *)(pFVar1 + lVar3 * 0x58 + 8);
        do {
          if (bVar9 != (*pFVar2 != *param_1)) break;
          iVar6 = iVar6 + 1;
          lVar3 = lVar3 + 1;
          pFVar2 = pFVar2 + 0xb;
        } while (lVar3 < lVar7);
      }
      iVar4 = iVar6 - iVar5;
      if (bVar9 == false) {
        DestructItems<FIKRigFBIKBoneSettings,int>
                  ((FIKRigFBIKBoneSettings *)(pFVar1 + (longlong)iVar5 * 0x58),iVar4);
      }
      else {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x58,pFVar1 + (longlong)iVar5 * 0x58,
                  (longlong)iVar4 * 0x58);
        }
        iVar8 = iVar8 + iVar4;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar5 = iVar6;
    } while (lVar3 < lVar7);
    (this->AllBoneSettings).ArrayNum = iVar8;
  }
  return;
}

// GetBoneSettings @ 14df06320

FIKRigBoneSettingsBase * __thiscall
FIKRigFullBodyIKSolver::GetBoneSettings(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  int iVar1;
  FIKRigBoneSettingsBase *pFVar2;
  FIKRigBoneSettingsBase *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (FIKRigBoneSettingsBase *)(this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = (FIKRigBoneSettingsBase *)((longlong)pFVar2 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKBoneSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->Bone == *param_1) {
      return pFVar2;
    }
    pFVar2 = (FIKRigBoneSettingsBase *)&pFVar2[5].Bone;
  }
  return (FIKRigBoneSettingsBase *)0x0;
}

// GetBoneSettingsType @ 14df06390

UScriptStruct * __thiscall FIKRigFullBodyIKSolver::GetBoneSettingsType(FIKRigFullBodyIKSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigFBIKBoneSettings,(UObject *)pUVar1,
                         L"IKRigFBIKBoneSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigFBIKBoneSettings.OuterSingleton;
}

// HasSettingsOnBone @ 14df063d0

bool __thiscall
FIKRigFullBodyIKSolver::HasSettingsOnBone(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKBoneSettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(FName *)(pFVar2 + 8) == *param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 0x58;
  }
  return false;
}

// GetBonesWithSettings @ 14df065c0

void __thiscall
FIKRigFullBodyIKSolver::GetBonesWithSettings
          (FIKRigFullBodyIKSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigFBIKBoneSettings_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x58;
  }
  return;
}

// FIKRigFullBodyIKSolver @ 14df17960

FIKRigFullBodyIKSolver * __thiscall
FIKRigFullBodyIKSolver::FIKRigFullBodyIKSolver(FIKRigFullBodyIKSolver *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FIKRigFullBodyIKSolver__6B_;
  (this->Settings)._padding_ = (longlong)&___7FIKRigFBIKSettings__6B_;
  (this->Settings).RootBone.ComparisonIndex = 0;
  (this->Settings).RootBone.Number = 0;
  (this->Settings).bAllowStretch = false;
  (this->Settings).RootBehavior = PrePull;
  (this->Settings).PrePullRootSettings.RotationAlpha = 0.0;
  (this->AllGoalSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllGoalSettings).ArrayNum = 0;
  (this->AllGoalSettings).ArrayMax = 0;
  (this->AllBoneSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllBoneSettings).ArrayNum = 0;
  (this->AllBoneSettings).ArrayMax = 0;
  (this->Solver).SolverRoot = (FBone *)0x0;
  (this->Solver).Bones.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver).Bones.ArrayNum = 0;
  (this->Solver).Bones.ArrayMax = 0;
  (this->Solver).Bodies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver).Bodies.ArrayNum = 0;
  (this->Solver).Bodies.ArrayMax = 0;
  (this->Solver).Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver).Constraints.ArrayNum = 0;
  (this->Solver).Constraints.ArrayMax = 0;
  (this->Solver).Effectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Solver).Effectors.ArrayNum = 0;
  (this->Solver).Effectors.ArrayMax = 0;
  (this->Solver).bHasSubChains = false;
  (this->Solver).bReadyToSimulate = false;
  (this->Settings).Iterations = 0x14;
  (this->Settings).SubIterations = 0;
  (this->Settings).MassMultiplier = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaX = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaY = 1.0;
  (this->Settings).PrePullRootSettings.RotationAlphaZ = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlpha = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaX = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaY = 1.0;
  (this->Settings).PrePullRootSettings.PositionAlphaZ = 1.0;
  (this->Settings).GlobalPullChainAlpha = 1.0;
  (this->Settings).MaxAngle = 30.0;
  (this->Settings).OverRelaxation = 1.3;
  return this;
}

// ~FIKRigFullBodyIKSolver @ 14df1bdc0

void __thiscall FIKRigFullBodyIKSolver::~FIKRigFullBodyIKSolver(FIKRigFullBodyIKSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  FPBIKSolver::~FPBIKSolver(&this->Solver);
  DestructItems<FIKRigFBIKBoneSettings,int>
            ((FIKRigFBIKBoneSettings *)(this->AllBoneSettings).AllocatorInstance.Data,
             (this->AllBoneSettings).ArrayNum);
  pFVar1 = (this->AllBoneSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FIKRigFBIKGoalSettings,int>
            ((FIKRigFBIKGoalSettings *)(this->AllGoalSettings).AllocatorInstance.Data,
             (this->AllGoalSettings).ArrayNum);
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  return;
}

// GetIndexOfGoal @ 14df38f70

int __thiscall FIKRigFullBodyIKSolver::GetIndexOfGoal(FIKRigFullBodyIKSolver *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllGoalSettings).AllocatorInstance.Data;
  pFVar2 = pFVar1;
  while( true ) {
    if (pFVar2 == pFVar1 + (longlong)(this->AllGoalSettings).ArrayNum * 0x30) {
      return -1;
    }
    if (*(FName *)(pFVar2 + 8) == *param_1) break;
    pFVar2 = pFVar2 + 0x30;
  }
  return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0x30);
}

