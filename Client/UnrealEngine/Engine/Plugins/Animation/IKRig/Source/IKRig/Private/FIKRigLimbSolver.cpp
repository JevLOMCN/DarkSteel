// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 15

// StaticStruct @ 14df007b0

UScriptStruct * __cdecl FIKRigLimbSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigLimbSolver,(UObject *)pUVar1,
                         L"IKRigLimbSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigLimbSolver.OuterSingleton;
}

// Initialize @ 14df007f0

void __thiscall FIKRigLimbSolver::Initialize(FIKRigLimbSolver *this,FIKRigSkeleton *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  FIKRigSkeleton *pFVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 local_res8 [8];
  FIKRigSkeleton *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_c8 [2];
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  longlong local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar17 = 0;
  (this->Solver).Length = 0.0;
  piVar1 = &(this->Solver).Links.ArrayMax;
  (this->Solver).Links.ArrayNum = 0;
  local_res10 = param_1;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->Solver).Links.AllocatorInstance,0,piVar1);
  }
  local_90 = &this->ChildrenToUpdate;
  piVar1 = &(this->ChildrenToUpdate).ArrayMax;
  (this->ChildrenToUpdate).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&local_90->AllocatorInstance,0,piVar1);
  }
  if ((((this->Settings).GoalName != (FName)0x0) && ((this->Settings).EndBone != (FName)0x0)) &&
     ((this->Settings).StartBone != (FName)0x0)) {
    local_c8[0] = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).EndBone);
    iVar14 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).StartBone);
    uVar21 = local_c8[0];
    if ((local_c8[0] != 0xffffffff) && (iVar14 != -1)) {
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&local_c0,1,&local_b4);
      *(uint *)local_c0.Data = uVar21;
      local_c8[0] = FIKRigSkeleton::GetParentIndex(param_1,local_c8[0]);
      FVar18.Data = local_c0.Data;
      iVar10 = local_b8;
      while ((local_c0.Data = FVar18.Data, local_b8 = iVar10, local_c8[0] != -1 &&
             (iVar14 <= (int)local_c8[0]))) {
        if ((FVar18.Data <= (FScriptContainerElement *)local_c8) &&
           (((FScriptContainerElement *)local_c8 < FVar18.Data + (longlong)local_b4 * 4 &&
            (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)))) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8 == local_b4) {
          local_b8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_c0,&local_b4);
        }
        *(uint *)(local_c0.Data + (longlong)local_b8 * 4) = local_c8[0];
        local_b8 = local_b8 + 1;
        local_c8[0] = FIKRigSkeleton::GetParentIndex(param_1,local_c8[0]);
        FVar18.Data = local_c0.Data;
        iVar10 = local_b8;
      }
      if (2 < iVar10) {
        if (0 < iVar10 / 2) {
          pFVar20 = FVar18.Data + (longlong)(iVar10 + -1) * 4;
          do {
            uVar5 = *(undefined4 *)(FVar18.Data + lVar17 * 4);
            *(undefined4 *)(FVar18.Data + lVar17 * 4) = *(undefined4 *)pFVar20;
            lVar17 = lVar17 + 1;
            *(undefined4 *)pFVar20 = uVar5;
            pFVar20 = pFVar20 + -4;
          } while (lVar17 < iVar10 / 2);
        }
        pFVar20 = FVar18.Data + (longlong)iVar10 * 4;
        while( true ) {
          if (local_b8 != iVar10) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          uVar21 = 0;
          if (FVar18.Data == pFVar20) break;
          uVar19 = *(uint *)FVar18.Data;
          if ((int)uVar19 < (param_1->CurrentPoseGlobal).ArrayNum) {
            uVar21 = ~uVar19 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar6 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
          pFVar3 = pFVar6 + (longlong)(int)uVar19 * 0x60 + 0x20;
          uVar8 = *(undefined8 *)pFVar3;
          uVar9 = *(undefined8 *)(pFVar3 + 8);
          uVar4 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar19 * 0x60 + 0x30);
          iVar14 = (this->Solver).Links.ArrayNum;
          local_80 = uVar8;
          uStack_78 = uVar9;
          local_70 = uVar4;
          if (iVar14 == (this->Solver).Links.ArrayMax) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x868,&(this->Solver).Links.AllocatorInstance,
                                &(this->Solver).Links.ArrayMax);
            (this->Solver).Links.ArrayNum = iVar14;
          }
          (this->Solver).Links.ArrayNum = iVar14 + 1;
          lVar17 = (longlong)iVar14 * 0x68;
          pFVar3 = (this->Solver).Links.AllocatorInstance.Data;
          FVar18.Data = FVar18.Data + 4;
          *(undefined8 *)(pFVar3 + lVar17) = uVar8;
          *(undefined8 *)(pFVar3 + lVar17 + 8) = uVar9;
          *(undefined4 *)(pFVar3 + lVar17 + 0x18) = 0;
          *(undefined8 *)(pFVar3 + lVar17 + 0x10) = uVar4;
          *(uint *)(pFVar3 + lVar17 + 0x1c) = uVar19;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar3 + lVar17 + 0x20) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar3 + lVar17 + 0x20 + 8) = uVar4;
          *(double *)(pFVar3 + lVar17 + 0x30) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar3 + lVar17 + 0x38) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar3 + lVar17 + 0x38 + 8) = uVar4;
          *(double *)(pFVar3 + lVar17 + 0x48) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          *(double *)(pFVar3 + lVar17 + 0x50) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          *(undefined8 *)(pFVar3 + lVar17 + 0x50 + 8) = uVar4;
          *(double *)(pFVar3 + lVar17 + 0x60) =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          param_1 = local_res10;
        }
        iVar14 = (this->Solver).Links.ArrayNum;
        uVar19 = 1;
        lVar17 = 0x68;
        (this->Solver).Length = 0.0;
        if (1 < iVar14) {
          do {
            uVar15 = uVar21;
            if ((int)uVar19 < (this->Solver).Links.ArrayNum) {
              uVar15 = ~uVar19 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar20 = (this->Solver).Links.AllocatorInstance.Data;
            uVar15 = uVar21;
            if ((int)(uVar19 - 1) < (this->Solver).Links.ArrayNum) {
              uVar15 = -uVar19 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar3 = (this->Solver).Links.AllocatorInstance.Data;
            uVar19 = uVar19 + 1;
            auVar22._0_8_ =
                 (*(double *)(pFVar3 + lVar17 + -0x58) - *(double *)(pFVar20 + lVar17 + 0x10)) *
                 (*(double *)(pFVar3 + lVar17 + -0x58) - *(double *)(pFVar20 + lVar17 + 0x10));
            auVar22._8_8_ = 0;
            auVar23._8_8_ = 0;
            auVar23._0_8_ =
                 (*(double *)(pFVar3 + lVar17 + -0x60) - *(double *)(pFVar20 + lVar17 + 8)) *
                 (*(double *)(pFVar3 + lVar17 + -0x60) - *(double *)(pFVar20 + lVar17 + 8)) +
                 (*(double *)(pFVar3 + lVar17 + -0x68) - *(double *)(pFVar20 + lVar17)) *
                 (*(double *)(pFVar3 + lVar17 + -0x68) - *(double *)(pFVar20 + lVar17)) +
                 auVar22._0_8_;
            auVar23 = sqrtpd(auVar22,auVar23);
            *(float *)(pFVar20 + lVar17 + 0x18) = (float)auVar23._0_8_;
            lVar17 = lVar17 + 0x68;
            (this->Solver).Length = (float)auVar23._0_8_ + (this->Solver).Length;
            iVar14 = (this->Solver).Links.ArrayNum;
          } while ((int)uVar19 < iVar14);
        }
        if (2 < iVar14) {
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          local_res20 = 0;
          if (0 < local_b8 + -1) {
            pTVar2 = &this->ChildrenToUpdate;
            local_98 = 0;
            do {
              lVar17 = local_98;
              uVar21 = local_res20;
              uVar19 = 0;
              if ((int)local_res20 < local_b8) {
                uVar19 = ~local_res20 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FIKRigSkeleton::GetChildIndices(param_1,*(int *)(local_c0.Data + lVar17),&local_a8);
              uVar19 = 0;
              if ((int)(uVar21 + 1) < local_b8) {
                uVar19 = ~(uVar21 + 1) >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pTVar12 = local_90;
              pFVar11 = local_res10;
              iVar10 = local_a8.ArrayNum;
              iVar14 = *(int *)(local_c0.Data + lVar17 + 4);
              pFVar20 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4;
              FVar18.Data = local_a8.AllocatorInstance.Data;
              while( true ) {
                if (local_a8.ArrayNum != iVar10) {
                  local_res18[0] = 0;
                  `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_res18);
                }
                if (FVar18.Data == pFVar20) break;
                local_b0[0] = *(int *)FVar18.Data;
                if (local_b0[0] != iVar14) {
                  pFVar3 = (pTVar2->AllocatorInstance).Data;
                  if (((pFVar3 <= (FScriptContainerElement *)local_b0) &&
                      ((FScriptContainerElement *)local_b0 <
                       pFVar3 + (longlong)(this->ChildrenToUpdate).ArrayMax * 4)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar13)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar16 = (this->ChildrenToUpdate).ArrayNum;
                  if (iVar16 == (this->ChildrenToUpdate).ArrayMax) {
                    iVar16 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar2->AllocatorInstance,&pTVar12->ArrayMax);
                  }
                  (this->ChildrenToUpdate).ArrayNum = iVar16 + 1;
                  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_b0[0];
                  GatherChildren(local_b0[0],pFVar11,pTVar12);
                }
                FVar18.Data = FVar18.Data + 4;
              }
              local_res20 = local_res20 + 1;
              local_98 = local_98 + 4;
              param_1 = local_res10;
            } while ((int)local_res20 < local_b8 + -1);
          }
          uVar21 = 0;
          if ((int)(local_b8 - 1U) < local_b8) {
            uVar21 = ~(local_b8 - 1U) >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          GatherChildren(*(int *)(local_c0.Data + (longlong)(local_b8 + -1) * 4),param_1,local_90);
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
        }
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
    }
  }
  return;
}

// Solve @ 14df00f90

void __thiscall
FIKRigLimbSolver::Solve(FIKRigLimbSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FName *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  
  if (2 < (this->Solver).Links.ArrayNum) {
    pFVar10 = (FName *)(param_2->Goals).AllocatorInstance.Data;
    pFVar6 = pFVar10 + (longlong)(param_2->Goals).ArrayNum * 0x16;
    if (pFVar10 != pFVar6) {
      while (*pFVar10 != (this->Settings).GoalName) {
        pFVar10 = pFVar10 + 0x16;
        if (pFVar10 == pFVar6) {
          return;
        }
      }
      bVar3 = FLimbSolver::Solve(&this->Solver,&param_1->CurrentPoseGlobal,
                                 (TVector<double> *)(pFVar10 + 0xd),
                                 (TQuat<double> *)(pFVar10 + 0x10),
                                 (FLimbSolverSettings *)&this->Settings);
      if (bVar3) {
        iVar4 = (this->Solver).Links.ArrayNum;
        uVar7 = 0;
        if (0 < iVar4) {
          lVar9 = 0;
          do {
            if ((((int)uVar7 < -1) || (iVar4 <= (int)uVar7)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= INDEX_NONE && Index < Links.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\LimbSolver.cpp"
                                   ,0x60,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar5 = 0;
            if ((int)uVar7 < (this->Solver).Links.ArrayNum) {
              uVar5 = ~uVar7 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FIKRigSkeleton::UpdateLocalTransformFromGlobal
                      (param_1,*(int *)((this->Solver).Links.AllocatorInstance.Data + lVar9 + 0x1c))
            ;
            iVar4 = (this->Solver).Links.ArrayNum;
            uVar7 = uVar7 + 1;
            lVar9 = lVar9 + 0x68;
          } while ((int)uVar7 < iVar4);
        }
        pFVar8 = (this->ChildrenToUpdate).AllocatorInstance.Data;
        iVar4 = (this->ChildrenToUpdate).ArrayNum;
        pFVar1 = pFVar8 + (longlong)iVar4 * 4;
        while( true ) {
          if ((this->ChildrenToUpdate).ArrayNum != iVar4) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar8 == pFVar1) break;
          FIKRigSkeleton::UpdateGlobalTransformFromLocal(param_1,*(int *)pFVar8);
          pFVar8 = pFVar8 + 4;
        }
      }
    }
  }
  return;
}

// GetRequiredBones @ 14df01120

void __thiscall
FIKRigLimbSolver::GetRequiredBones
          (FIKRigLimbSolver *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  FName local_res8;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,&local_res8,(bool *)&(this->Settings).StartBone);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,&local_res8,(bool *)&(this->Settings).EndBone);
  return;
}

// GetRequiredGoals @ 14df01170

void __thiscall
FIKRigLimbSolver::GetRequiredGoals
          (FIKRigLimbSolver *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1
          )

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).GoalName);
  return;
}

// GetSolverSettings @ 14df011a0

FIKRigSolverSettingsBase * __thiscall FIKRigLimbSolver::GetSolverSettings(FIKRigLimbSolver *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14df011b0

UScriptStruct * __thiscall FIKRigLimbSolver::GetSolverSettingsType(FIKRigLimbSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigLimbSolverSettings,(UObject *)pUVar1,
                         L"IKRigLimbSolverSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigLimbSolverSettings.OuterSingleton;
}

// AddGoal @ 14df011f0

void __thiscall FIKRigLimbSolver::AddGoal(FIKRigLimbSolver *this,UIKRigEffectorGoal *param_1)

{
  (this->Settings).GoalName = param_1->GoalName;
  (this->Settings).EndBone = param_1->BoneName;
  return;
}

// OnGoalRenamed @ 14df01210

void __thiscall
FIKRigLimbSolver::OnGoalRenamed(FIKRigLimbSolver *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).GoalName == *param_1) {
    (this->Settings).GoalName = *param_2;
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14df01370

void __thiscall
FIKRigLimbSolver::OnGoalMovedToDifferentBone(FIKRigLimbSolver *this,FName *param_1,FName *param_2)

{
  if ((this->Settings).GoalName == *param_1) {
    (this->Settings).EndBone = *param_2;
  }
  return;
}

// OnGoalRemoved @ 14df01390

void __thiscall FIKRigLimbSolver::OnGoalRemoved(FIKRigLimbSolver *this,FName *param_1)

{
  if ((this->Settings).GoalName == *param_1) {
    (this->Settings).GoalName.ComparisonIndex = 0;
    (this->Settings).GoalName.Number = 0;
    (this->Settings).EndBone.ComparisonIndex = 0;
    (this->Settings).EndBone.Number = 0;
  }
  return;
}

// UsesStartBone @ 14df013c0

bool __thiscall FIKRigLimbSolver::UsesStartBone(FIKRigLimbSolver *this)

{
  return true;
}

// SetStartBone @ 14df013d0

void __thiscall FIKRigLimbSolver::SetStartBone(FIKRigLimbSolver *this,FName *param_1)

{
  (this->Settings).StartBone = *param_1;
  return;
}

// GetStartBone @ 14df013e0

FName __thiscall FIKRigLimbSolver::GetStartBone(FIKRigLimbSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).StartBone;
  return in_RDX;
}

// GatherChildren @ 14df33d50

void __cdecl
FIKRigLimbSolver::GatherChildren
          (int param_1,FIKRigSkeleton *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  undefined1 local_res20 [8];
  int local_38 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_30;
  
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  FIKRigSkeleton::GetChildIndices(param_2,param_1,&local_30);
  iVar4 = local_30.ArrayNum;
  uVar7 = (ulonglong)local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar1) break;
    local_38[0] = *(int *)FVar8.Data;
    pFVar2 = (param_3->AllocatorInstance).Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)param_3->ArrayMax * 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
      param_3->ArrayNum = iVar6;
    }
    param_3->ArrayNum = iVar6 + 1;
    *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
    GatherChildren(local_38[0],param_2,param_3);
    uVar7 = local_30._8_8_ & 0xffffffff;
    FVar8.Data = FVar8.Data + 4;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

