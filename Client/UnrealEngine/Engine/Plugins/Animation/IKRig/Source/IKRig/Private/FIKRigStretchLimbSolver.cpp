// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 39

// StaticStruct @ 14def9520

UScriptStruct * __cdecl FIKRigStretchLimbSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigStretchLimbSolver,(UObject *)pUVar1,
                         L"IKRigStretchLimbSolver");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSolver.OuterSingleton;
}

// Initialize @ 14def95a0

void __thiscall
FIKRigStretchLimbSolver::Initialize(FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<double,TSizedDefaultAllocator<32>_> *this_01;
  undefined4 uVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  double dVar22;
  undefined1 local_res8 [8];
  FIKRigSkeleton *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_f8;
  uint local_f4;
  uint local_f0 [2];
  ForAnyElementType local_e8;
  int local_e0;
  int iStack_dc;
  double local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  
  FVar4 = (this->Settings).Goal;
  this->bIsInitialized = false;
  if (((FVar4 != (FName)0x0) && ((this->Settings).EndBone != (FName)0x0)) &&
     ((this->Settings).StartBone != (FName)0x0)) {
    local_res10 = param_1;
    uVar11 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).EndBone);
    local_c8 = uVar11;
    uVar12 = FIKRigSkeleton::GetBoneIndexFromName(param_1,(this->Settings).StartBone);
    if ((uVar11 != 0xffffffff) && (uVar12 != 0xffffffff)) {
      this_00 = &this->BoneIndices;
      local_d0 = uVar11;
      local_cc = uVar12;
      TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                (this_00,(int *)&local_d0,1,(this->BoneIndices).ArrayMax);
      for (local_f8 = FIKRigSkeleton::GetParentIndex(param_1,uVar11);
          (local_f8 != -1 && ((int)uVar12 <= local_f8));
          local_f8 = FIKRigSkeleton::GetParentIndex(param_1,local_f8)) {
        pFVar21 = (this_00->AllocatorInstance).Data;
        if ((pFVar21 <= (FScriptContainerElement *)&local_f8) &&
           (((FScriptContainerElement *)&local_f8 <
             pFVar21 + (longlong)(this->BoneIndices).ArrayMax * 4 &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = (this->BoneIndices).ArrayNum;
        if (iVar13 == (this->BoneIndices).ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this_00->AllocatorInstance,&(this->BoneIndices).ArrayMax);
          (this->BoneIndices).ArrayNum = iVar13;
        }
        (this->BoneIndices).ArrayNum = iVar13 + 1;
        *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_f8;
      }
      iVar13 = (this->BoneIndices).ArrayNum;
      if (1 < iVar13) {
        pFVar21 = (this_00->AllocatorInstance).Data;
        lVar16 = 0;
        if (0 < iVar13 / 2) {
          pFVar20 = pFVar21 + (longlong)(iVar13 + -1) * 4;
          do {
            uVar3 = *(undefined4 *)(pFVar21 + lVar16 * 4);
            *(undefined4 *)(pFVar21 + lVar16 * 4) = *(undefined4 *)pFVar20;
            lVar16 = lVar16 + 1;
            *(undefined4 *)pFVar20 = uVar3;
            pFVar20 = pFVar20 + -4;
          } while (lVar16 < iVar13 / 2);
        }
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = 0;
        iStack_dc = 0;
        iVar13 = FIKRigSkeleton::GetCachedEndOfBranchIndex(param_1,uVar12);
        if (iVar13 != -1) {
          while (local_f4 = uVar12 + 1, (int)local_f4 <= iVar13) {
            if (((local_e8.Data <= (FScriptContainerElement *)&local_f4) &&
                ((FScriptContainerElement *)&local_f4 < local_e8.Data + (longlong)iStack_dc * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (local_e0 == iStack_dc) {
              local_e0 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_e8,&iStack_dc);
            }
            *(uint *)(local_e8.Data + (longlong)local_e0 * 4) = local_f4;
            local_e0 = local_e0 + 1;
            uVar12 = local_f4;
          }
        }
        iVar13 = local_e0;
        pFVar21 = local_e8.Data + (longlong)local_e0 * 4;
        FVar18.Data = local_e8.Data;
        while( true ) {
          if (local_e0 != iVar13) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar18.Data == pFVar21) break;
          pFVar15 = (this_00->AllocatorInstance).Data;
          local_f0[0] = *(uint *)FVar18.Data;
          pFVar20 = pFVar15 + (longlong)(this->BoneIndices).ArrayNum * 4;
          for (; pFVar15 != pFVar20; pFVar15 = pFVar15 + 4) {
            if (*(uint *)pFVar15 == local_f0[0]) goto LAB_14def9983;
          }
          pTVar2 = &this->ChildrenToUpdate;
          pFVar20 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar20 <= (FScriptContainerElement *)local_f0) &&
              ((FScriptContainerElement *)local_f0 <
               pFVar20 + (longlong)(this->ChildrenToUpdate).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (this->ChildrenToUpdate).ArrayNum;
          piVar1 = &(this->ChildrenToUpdate).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ChildrenToUpdate).ArrayNum = iVar14 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_f0[0];
LAB_14def9983:
          FVar18.Data = FVar18.Data + 4;
        }
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                  (&this->BonePositionsPreOffset,&UE::Math::TVector<double>::ZeroVector,
                   (this->BoneIndices).ArrayNum);
        this_01 = &this->PoleVectorParams;
        TArray<double,TSizedDefaultAllocator<32>_>::Reset(this_01,(this->BoneIndices).ArrayNum);
        lVar16 = (longlong)(int)local_cc;
        uVar12 = 0;
        if ((int)local_cc < (param_1->RefPoseGlobal).ArrayNum) {
          uVar12 = ~local_cc >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
        lVar19 = (longlong)(int)local_c8;
        pFVar21 = pFVar20 + lVar16 * 0x60 + 0x20;
        local_c0 = *(double *)pFVar21;
        dStack_b8 = *(double *)(pFVar21 + 8);
        local_b0 = *(double *)(pFVar20 + lVar16 * 0x60 + 0x30);
        uVar12 = 0;
        if ((int)local_c8 < (param_1->RefPoseGlobal).ArrayNum) {
          uVar12 = ~local_c8 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar20 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
        pFVar21 = pFVar20 + lVar19 * 0x60 + 0x20;
        local_a8 = *(double *)pFVar21;
        dStack_a0 = *(double *)(pFVar21 + 8);
        local_98 = *(double *)(pFVar20 + lVar19 * 0x60 + 0x30);
        dVar9 = local_a8 - local_c0;
        dVar7 = dStack_a0 - dStack_b8;
        dVar8 = local_98 - local_b0;
        dVar22 = dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8;
        if (dVar22 <= __real_3f1a36e2eb1c432d) {
          dVar22 = __real_3f1a36e2eb1c432d;
        }
        this->InitialPoleVectorLenSq = dVar22;
        pFVar20 = (this_00->AllocatorInstance).Data;
        iVar13 = (this->BoneIndices).ArrayNum;
        pFVar21 = pFVar20 + (longlong)iVar13 * 4;
        while( true ) {
          if ((this->BoneIndices).ArrayNum != iVar13) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar20 == pFVar21) break;
          uVar12 = *(uint *)pFVar20;
          uVar11 = 0;
          if ((int)uVar12 < (local_res10->RefPoseGlobal).ArrayNum) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (this_01->AllocatorInstance).Data;
          pFVar5 = (local_res10->RefPoseGlobal).AllocatorInstance.Data;
          pFVar15 = pFVar5 + (longlong)(int)uVar12 * 0x60 + 0x20;
          local_90 = *(double *)pFVar15;
          dStack_88 = *(double *)(pFVar15 + 8);
          local_80 = *(double *)(pFVar5 + (longlong)(int)uVar12 * 0x60 + 0x30);
          local_d8 = ((local_90 - local_c0) * dVar9 + (dStack_88 - dStack_b8) * dVar7 +
                     (local_80 - local_b0) * dVar8) / this->InitialPoleVectorLenSq;
          if (((pFVar17 <= (FScriptContainerElement *)&local_d8) &&
              ((FScriptContainerElement *)&local_d8 <
               pFVar17 + (longlong)(this->PoleVectorParams).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar14 = (this->PoleVectorParams).ArrayNum;
          piVar1 = &(this->PoleVectorParams).ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&this_01->AllocatorInstance,piVar1);
          }
          (this->PoleVectorParams).ArrayNum = iVar14 + 1;
          pFVar20 = pFVar20 + 4;
          *(double *)((this_01->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_d8;
        }
        iVar13 = (this->AllBoneSettings).ArrayNum;
        pFVar21 = (this->AllBoneSettings).AllocatorInstance.Data;
        pFVar20 = pFVar21 + (longlong)iVar13 * 0x30;
LAB_14def9c80:
        if ((this->AllBoneSettings).ArrayNum != iVar13) {
          `TCheckedPointerIterator<FIKRigStretchLimbBoneSettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar21 != pFVar20) {
          iVar14 = FIKRigSkeleton::GetBoneIndexFromName(local_res10,*(FName *)(pFVar21 + 8));
          pFVar15 = (this_00->AllocatorInstance).Data;
          for (pFVar17 = pFVar15; pFVar17 != pFVar15 + (longlong)(this->BoneIndices).ArrayNum * 4;
              pFVar17 = pFVar17 + 4) {
            if (*(int *)pFVar17 == iVar14) {
              *(int *)(pFVar21 + 0x28) = (int)((longlong)pFVar17 - (longlong)pFVar15 >> 2);
              pFVar21 = pFVar21 + 0x30;
              goto LAB_14def9c80;
            }
          }
          *(undefined4 *)(pFVar21 + 0x28) = 0xffffffff;
          pFVar21 = pFVar21 + 0x30;
          goto LAB_14def9c80;
        }
        this->bIsInitialized = true;
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
      }
    }
  }
  return;
}

// Solve @ 14def9d90

void __thiscall
FIKRigStretchLimbSolver::Solve
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,FIKRigGoalContainer *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FIKRigGoal *pFVar3;
  FIKRigGoal *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->bIsInitialized != false) {
    pFVar4 = (FIKRigGoal *)(param_2->Goals).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (param_2->Goals).ArrayNum;
    while( true ) {
      if (pFVar4 == pFVar3) {
        `FIKRigStretchLimbSolver::Solve'::__l8::<lambda_1>::operator()(local_res8);
        return;
      }
      if (pFVar4->Name == (this->Settings).Goal) break;
      pFVar4 = pFVar4 + 1;
    }
    UpdateRestLengths(this,param_1);
    AimChainAtGoal(this,param_1,&pFVar4->FinalBlendedPosition);
    StoreBonePositions(this,param_1);
    SquashOrStretchChainParallel(this,param_1,&pFVar4->FinalBlendedPosition);
    SquashChainPerpendicular(this,param_1);
    RunFABRIK(this,param_1,&pFVar4->FinalBlendedPosition);
    StretchChainFinal(this,param_1,&pFVar4->FinalBlendedPosition);
    UpdateBoneOrientations(this,param_1);
    RotateEndBoneWithGoal(this,param_1,pFVar4);
    pFVar5 = (this->BoneIndices).AllocatorInstance.Data;
    iVar2 = (this->BoneIndices).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->BoneIndices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      FIKRigSkeleton::UpdateLocalTransformFromGlobal(param_1,*(int *)pFVar5);
      pFVar5 = pFVar5 + 4;
    }
    pFVar5 = (this->ChildrenToUpdate).AllocatorInstance.Data;
    iVar2 = (this->ChildrenToUpdate).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ChildrenToUpdate).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      FIKRigSkeleton::UpdateGlobalTransformFromLocal(param_1,*(int *)pFVar5);
      pFVar5 = pFVar5 + 4;
    }
  }
  return;
}

// GetRequiredBones @ 14def9f10

void __thiscall
FIKRigStretchLimbSolver::GetRequiredBones
          (FIKRigStretchLimbSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).StartBone);
  return;
}

// GetRequiredGoals @ 14def9f40

void __thiscall
FIKRigStretchLimbSolver::GetRequiredGoals
          (FIKRigStretchLimbSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  FName local_res8 [4];
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
            (param_1,local_res8,(bool *)&(this->Settings).Goal);
  return;
}

// GetSolverSettings @ 14def9f70

FIKRigSolverSettingsBase * __thiscall
FIKRigStretchLimbSolver::GetSolverSettings(FIKRigStretchLimbSolver *this)

{
  return (FIKRigSolverSettingsBase *)&this->Settings;
}

// GetSolverSettingsType @ 14def9f80

UScriptStruct * __thiscall
FIKRigStretchLimbSolver::GetSolverSettingsType(FIKRigStretchLimbSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigStretchLimbSettings,(UObject *)pUVar1,
                         L"IKRigStretchLimbSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbSettings.OuterSingleton;
}

// AddGoal @ 14def9fc0

void __thiscall
FIKRigStretchLimbSolver::AddGoal(FIKRigStretchLimbSolver *this,UIKRigEffectorGoal *param_1)

{
  (this->Settings).Goal = param_1->GoalName;
  (this->Settings).EndBone = param_1->BoneName;
  return;
}

// OnGoalRemoved @ 14def9fe0

void __thiscall FIKRigStretchLimbSolver::OnGoalRemoved(FIKRigStretchLimbSolver *this,FName *param_1)

{
  if (*param_1 == (this->Settings).Goal) {
    (this->Settings).Goal.ComparisonIndex = 0;
    (this->Settings).Goal.Number = 0;
    (this->Settings).EndBone.ComparisonIndex = 0;
    (this->Settings).EndBone.Number = 0;
  }
  return;
}

// OnGoalRenamed @ 14defa010

void __thiscall
FIKRigStretchLimbSolver::OnGoalRenamed(FIKRigStretchLimbSolver *this,FName *param_1,FName *param_2)

{
  if (*param_1 == (this->Settings).Goal) {
    (this->Settings).Goal = *param_2;
  }
  return;
}

// OnGoalMovedToDifferentBone @ 14defa030

void __thiscall
FIKRigStretchLimbSolver::OnGoalMovedToDifferentBone
          (FIKRigStretchLimbSolver *this,FName *param_1,FName *param_2)

{
  if (*param_1 == (this->Settings).Goal) {
    (this->Settings).StartBone = *param_2;
  }
  return;
}

// UsesCustomGoalSettings @ 14defa050

bool __thiscall FIKRigStretchLimbSolver::UsesCustomGoalSettings(FIKRigStretchLimbSolver *this)

{
  return false;
}

// UsesCustomBoneSettings @ 14defa060

bool __thiscall FIKRigStretchLimbSolver::UsesCustomBoneSettings(FIKRigStretchLimbSolver *this)

{
  return true;
}

// AddSettingsToBone @ 14defa070

void __thiscall
FIKRigStretchLimbSolver::AddSettingsToBone(FIKRigStretchLimbSolver *this,FName *param_1)

{
  TArray<FIKRigStretchLimbBoneSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  FName FVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  iVar4 = (this->AllBoneSettings).ArrayNum;
  pTVar1 = &this->AllBoneSettings;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar4 * 0x30;
  if (pFVar5 != pFVar6) {
    do {
      if (*(FName *)(pFVar5 + 8) == *param_1) {
        return;
      }
      pFVar5 = pFVar5 + 0x30;
    } while (pFVar5 != pFVar6);
  }
  if (iVar4 == (this->AllBoneSettings).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar1->AllocatorInstance,&(this->AllBoneSettings).ArrayMax);
  }
  (this->AllBoneSettings).ArrayNum = iVar4 + 1;
  FVar2 = *param_1;
  pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)(pFVar5 + 8) = 0;
  *(undefined ***)pFVar5 = &___7FIKRigStretchLimbBoneSettings__6B_;
  uVar3 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x10) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  *(undefined8 *)(pFVar5 + 0x18) = uVar3;
  *(double *)(pFVar5 + 0x20) = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  *(FName *)(pFVar5 + 8) = FVar2;
  return;
}

// RemoveSettingsOnBone @ 14defa120

void __thiscall
FIKRigStretchLimbSolver::RemoveSettingsOnBone(FIKRigStretchLimbSolver *this,FName *param_1)

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
        pFVar2 = (FName *)(pFVar1 + lVar3 * 0x30 + 8);
        do {
          if (bVar9 != (*pFVar2 != *param_1)) break;
          iVar6 = iVar6 + 1;
          lVar3 = lVar3 + 1;
          pFVar2 = pFVar2 + 6;
        } while (lVar3 < lVar7);
      }
      iVar4 = iVar6 - iVar5;
      if (bVar9 == false) {
        DestructItems<FIKRigStretchLimbBoneSettings,int>
                  ((FIKRigStretchLimbBoneSettings *)(pFVar1 + (longlong)iVar5 * 0x30),iVar4);
      }
      else {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x30,pFVar1 + (longlong)iVar5 * 0x30,
                  (longlong)iVar4 * 0x30);
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

// GetBoneSettings @ 14defa290

FIKRigBoneSettingsBase * __thiscall
FIKRigStretchLimbSolver::GetBoneSettings(FIKRigStretchLimbSolver *this,FName *param_1)

{
  int iVar1;
  FIKRigBoneSettingsBase *pFVar2;
  FIKRigBoneSettingsBase *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (FIKRigBoneSettingsBase *)(this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 3;
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigStretchLimbBoneSettings,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->Bone == *param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 3;
  }
  return (FIKRigBoneSettingsBase *)0x0;
}

// GetBoneSettingsType @ 14defa310

UScriptStruct * __thiscall
FIKRigStretchLimbSolver::GetBoneSettingsType(FIKRigStretchLimbSolver *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRigStretchLimbBoneSettings,(UObject *)pUVar1,
                         L"IKRigStretchLimbBoneSettings");
  }
  return Z_Registration_Info_UScriptStruct_FIKRigStretchLimbBoneSettings.OuterSingleton;
}

// HasSettingsOnBone @ 14defa350

bool __thiscall
FIKRigStretchLimbSolver::HasSettingsOnBone(FIKRigStretchLimbSolver *this,FName *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigStretchLimbBoneSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(FName *)(pFVar2 + 8) == *param_1) {
      return true;
    }
    pFVar2 = pFVar2 + 0x30;
  }
  return false;
}

// GetBonesWithSettings @ 14defa6f0

void __thiscall
FIKRigStretchLimbSolver::GetBonesWithSettings
          (FIKRigStretchLimbSolver *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FName local_res18;
  
  iVar1 = (this->AllBoneSettings).ArrayNum;
  pFVar2 = (this->AllBoneSettings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->AllBoneSettings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FIKRigStretchLimbBoneSettings_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (param_1,&local_res18,(bool *)(pFVar2 + 8));
    pFVar2 = pFVar2 + 0x30;
  }
  return;
}

// UsesStartBone @ 14defa770

bool __thiscall FIKRigStretchLimbSolver::UsesStartBone(FIKRigStretchLimbSolver *this)

{
  return true;
}

// GetStartBone @ 14defa780

FName __thiscall FIKRigStretchLimbSolver::GetStartBone(FIKRigStretchLimbSolver *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = (this->Settings).StartBone;
  return in_RDX;
}

// SetStartBone @ 14defa7a0

void __thiscall FIKRigStretchLimbSolver::SetStartBone(FIKRigStretchLimbSolver *this,FName *param_1)

{
  (this->Settings).StartBone = *param_1;
  return;
}

// FIKRigStretchLimbSolver @ 14df17f80

FIKRigStretchLimbSolver * __thiscall
FIKRigStretchLimbSolver::FIKRigStretchLimbSolver(FIKRigStretchLimbSolver *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  (this->Settings).StartBone.ComparisonIndex = 0;
  (this->Settings).StartBone.Number = 0;
  this->_padding_ = (longlong)&___7FIKRigStretchLimbSolver__6B_;
  (this->Settings)._padding_ = (longlong)&___7FIKRigStretchLimbSettings__6B_;
  (this->Settings).MaximumStretchDistance = -1.0;
  (this->Settings).StretchStartPercent = 0.95;
  (this->Settings).RotateEndBoneWithGoal = 1.0;
  (this->Settings).SquashStrength = 50.0;
  (this->Settings).EndBone.ComparisonIndex = 0;
  (this->Settings).EndBone.Number = 0;
  (this->Settings).Goal.ComparisonIndex = 0;
  (this->Settings).Goal.Number = 0;
  (this->Settings).bEnableStretching = true;
  (this->Settings).RotationMode = OrientToGoal;
  (this->Settings).Iterations = 8;
  (this->Settings).SquashMode = Uniform;
  (this->AllBoneSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllBoneSettings).ArrayNum = 0;
  (this->AllBoneSettings).ArrayMax = 0;
  this->bIsInitialized = false;
  (this->BoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndices).ArrayNum = 0;
  (this->BoneIndices).ArrayMax = 0;
  (this->ChildrenToUpdate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenToUpdate).ArrayNum = 0;
  (this->ChildrenToUpdate).ArrayMax = 0;
  (this->BonePositionsPreOffset).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonePositionsPreOffset).ArrayNum = 0;
  (this->BonePositionsPreOffset).ArrayMax = 0;
  (this->RestLengths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RestLengths).ArrayNum = 0;
  (this->RestLengths).ArrayMax = 0;
  (this->PoleVectorParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoleVectorParams).ArrayNum = 0;
  (this->PoleVectorParams).ArrayMax = 0;
  return this;
}

// ~FIKRigStretchLimbSolver @ 14df1c020

void __thiscall FIKRigStretchLimbSolver::~FIKRigStretchLimbSolver(FIKRigStretchLimbSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PoleVectorParams).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RestLengths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BonePositionsPreOffset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildrenToUpdate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FIKRigStretchLimbBoneSettings,int>
            ((FIKRigStretchLimbBoneSettings *)(this->AllBoneSettings).AllocatorInstance.Data,
             (this->AllBoneSettings).ArrayNum);
  pFVar1 = (this->AllBoneSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->Settings)._padding_ = (longlong)&___7FIKRigSettingsBase__6B_;
  this->_padding_ = (longlong)&___7FIKRigSolverBase__6B_;
  return;
}

// AimChainAtGoal @ 14df243d0

void __thiscall
FIKRigStretchLimbSolver::AimChainAtGoal
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
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
  bool bVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 local_res8 [8];
  TQuat<double> local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  
  if ((this->Settings).RotationMode == OrientToGoal) {
    if (((this->BoneIndices).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar20 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
    uVar22 = 0;
    if ((int)uVar20 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar22 = ~uVar20 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    iVar2 = (this->BoneIndices).ArrayNum;
    uVar22 = iVar2 - 1;
    pFVar1 = pFVar3 + (longlong)(int)uVar20 * 0x60 + 0x20;
    dVar17 = *(double *)pFVar1;
    dVar18 = *(double *)(pFVar1 + 8);
    dVar14 = *(double *)(pFVar3 + (longlong)(int)uVar20 * 0x60 + 0x30);
    uVar20 = 0;
    if ((int)uVar22 < iVar2) {
      uVar20 = ~uVar22 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar20 = *(uint *)((this->BoneIndices).AllocatorInstance.Data +
                      (longlong)(this->BoneIndices).ArrayNum * 4 + -4);
    uVar22 = 0;
    if ((int)uVar20 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar22 = ~uVar20 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    local_138._s_0.Y = (param_2->field0_0x0)._s_0.Y - dVar18;
    pFVar1 = pFVar3 + (longlong)(int)uVar20 * 0x60 + 0x20;
    local_108 = *(double *)pFVar1;
    dStack_100 = *(double *)(pFVar1 + 8);
    local_f8 = *(double *)(pFVar3 + (longlong)(int)uVar20 * 0x60 + 0x30);
    local_120._s_0.X = local_108 - dVar17;
    local_120._s_0.Y = dStack_100 - dVar18;
    local_138._s_0.X = (param_2->field0_0x0)._s_0.X - dVar17;
    local_120._s_0.Z = local_f8 - dVar14;
    local_138._s_0.Z = (param_2->field0_0x0)._s_0.Z - dVar14;
    UE::Math::TQuat<double>::FindBetweenVectors
              (&local_158,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_138._s_0);
    if (((this->BoneIndices).ArrayNum < 1) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar20 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
    uVar22 = 0;
    if ((int)uVar20 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar22 = ~uVar20 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    pFVar23 = (this->BoneIndices).AllocatorInstance.Data;
    iVar2 = (this->BoneIndices).ArrayNum;
    pFVar1 = pFVar23 + (longlong)iVar2 * 4;
    pFVar3 = pFVar4 + (longlong)(int)uVar20 * 0x60 + 0x20;
    dVar17 = *(double *)pFVar3;
    dVar18 = *(double *)(pFVar3 + 8);
    dVar14 = *(double *)(pFVar4 + (longlong)(int)uVar20 * 0x60 + 0x30);
    while( true ) {
      if ((this->BoneIndices).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar23 == pFVar1) break;
      uVar20 = *(uint *)pFVar23;
      uVar22 = 0;
      if ((int)uVar20 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar22 = ~uVar20 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar20 * 0x60;
      local_f0 = *(double *)(pFVar3 + lVar21 + 0x20);
      dStack_e8 = *(double *)(pFVar3 + lVar21 + 0x20 + 8);
      local_e0 = *(double *)(pFVar3 + lVar21 + 0x30);
      dVar7 = local_f0 - dVar17;
      dVar13 = local_e0 - dVar14;
      dVar12 = dStack_e8 - dVar18;
      dVar11 = local_158.Y * dVar13 - local_158.Z * dVar12;
      dVar11 = dVar11 + dVar11;
      dVar25 = local_158.Z * dVar7 - local_158.X * dVar13;
      dVar9 = local_158.X * dVar12 - local_158.Y * dVar7;
      dVar25 = dVar25 + dVar25;
      dVar9 = dVar9 + dVar9;
      dVar24 = (local_158.Y * dVar9 - local_158.Z * dVar25) + local_158.W * dVar11 + dVar7 + dVar17;
      local_c8 = (local_158.X * dVar25 - local_158.Y * dVar11) + local_158.W * dVar9 + dVar13 +
                 dVar14;
      dVar7 = (local_158.Z * dVar11 - local_158.X * dVar9) + local_158.W * dVar25 + dVar12 + dVar18;
      uVar26 = SUB84(dVar7,0);
      uVar27 = (undefined4)((ulonglong)dVar7 >> 0x20);
      local_d8._8_4_ = uVar26;
      local_d8._0_8_ = dVar24;
      local_d8._12_4_ = uVar27;
      auVar6._8_4_ = uVar26;
      auVar6._0_8_ = dVar24;
      auVar6._12_4_ = uVar27;
      *(undefined1 (*) [16])(pFVar3 + lVar21 + 0x20) = auVar6;
      *(double *)(pFVar3 + lVar21 + 0x30) = local_c8;
      *(double *)(pFVar3 + lVar21 + 0x30 + 8) = 0.0;
      dVar24 = *(double *)(pFVar3 + lVar21);
      dVar25 = *(double *)(pFVar3 + lVar21 + 8);
      dVar15 = *(double *)(pFVar3 + lVar21 + 0x10);
      dVar16 = *(double *)(pFVar3 + lVar21 + 0x10 + 8);
      pFVar23 = pFVar23 + 4;
      dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar13 = local_158.X * dVar15 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar25 * local_158.W +
               dVar16 * local_158.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               local_158.Z * dVar24 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar12 = local_158.X * dVar24 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar16 * local_158.W +
               dVar25 * local_158.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               local_158.Z * dVar15 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar10._8_4_ = SUB84(dVar13,0);
      auVar10._0_8_ =
           local_158.X * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar24 * local_158.W +
           dVar15 * local_158.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_158.Z * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(pFVar3 + lVar21) = auVar10;
      auVar8._8_4_ = SUB84(dVar12,0);
      auVar8._0_8_ = local_158.X * dVar25 * dVar7 + dVar15 * local_158.W +
                     dVar24 * local_158.Y * dVar9 + local_158.Z * dVar16 * dVar11;
      auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(pFVar3 + lVar21 + 0x10) = auVar8;
    }
  }
  return;
}

// ApplyParallelOffsetToChain @ 14df25e80

void __thiscall
FIKRigStretchLimbSolver::ApplyParallelOffsetToChain
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  double dVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  longlong local_res20;
  
  dVar26 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_4->field0_0x0)._s_0.X;
  dVar3 = (param_4->field0_0x0)._s_0.Y;
  dVar4 = (param_4->field0_0x0)._s_0.Z;
  auVar24._0_8_ = dVar3 * dVar3;
  auVar24._8_8_ = 0;
  dVar3 = (param_3->field0_0x0)._s_0.Z;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = dVar2 * dVar2 + auVar24._0_8_ + dVar4 * dVar4;
  auVar27 = sqrtpd(in_XMM3,auVar25);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar26 * dVar26 + dVar1 * dVar1 + dVar3 * dVar3;
  auVar25 = sqrtpd(auVar24,auVar16);
  dVar26 = auVar27._0_8_ - auVar25._0_8_;
  if ((__real_3e45798ee2308c3a <
       (double)CONCAT44((uint)((ulonglong)dVar26 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar26,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
     (uVar22 = 1, 1 < (this->BoneIndices).ArrayNum)) {
    lVar23 = 4;
    local_res20 = 8;
    do {
      uVar21 = ~uVar22 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar22 < (this->BoneIndices).ArrayNum) {
        uVar19 = uVar21;
      }
      if ((uVar19 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar19 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar23);
      uVar20 = 0;
      if ((int)uVar19 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar14 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
      uVar20 = 0;
      if ((int)uVar22 < (this->PoleVectorParams).ArrayNum) {
        uVar20 = uVar21;
      }
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      dVar3 = *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x20);
      dVar4 = *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x28);
      dVar17 = *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x30);
      dVar26 = *(double *)((this->PoleVectorParams).AllocatorInstance.Data + local_res20);
      dVar1 = (param_4->field0_0x0)._s_0.X;
      dVar2 = (param_4->field0_0x0)._s_0.Y;
      uVar20 = 0;
      if ((int)uVar22 < (this->PoleVectorParams).ArrayNum) {
        uVar20 = uVar21;
      }
      dVar5 = (param_4->field0_0x0)._s_0.Z;
      dVar6 = (param_2->field0_0x0)._s_0.X;
      dVar7 = (param_2->field0_0x0)._s_0.Y;
      dVar8 = (param_2->field0_0x0)._s_0.Z;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 4;
      dVar9 = *(double *)((this->PoleVectorParams).AllocatorInstance.Data + local_res20);
      local_res20 = local_res20 + 8;
      dVar10 = (param_3->field0_0x0)._s_0.Z;
      dVar11 = (param_3->field0_0x0)._s_0.Y;
      dVar12 = (param_2->field0_0x0)._s_0.Z;
      dVar13 = (param_2->field0_0x0)._s_0.Y;
      *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x20) =
           dVar9 * (param_3->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X +
           (dVar3 - (dVar26 * dVar1 + dVar6));
      *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x28) =
           dVar9 * dVar11 + dVar13 + (dVar4 - (dVar26 * dVar2 + dVar7));
      *(double *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x30) =
           dVar9 * dVar10 + dVar12 + (dVar17 - (dVar26 * dVar5 + dVar8));
      *(undefined8 *)(pFVar14 + (longlong)(int)uVar19 * 0x60 + 0x38) = 0;
    } while ((int)uVar22 < (this->BoneIndices).ArrayNum);
  }
  return;
}

// CalculateCurrentChainLength @ 14df281f0

double __thiscall
FIKRigStretchLimbSolver::CalculateCurrentChainLength
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  
  iVar11 = (this->BoneIndices).ArrayNum;
  uVar9 = iVar11 - 1;
  dVar4 = 0.0;
  if ((int)uVar9 < 1) {
    return 0.0;
  }
  iVar11 = iVar11 + -2;
  lVar10 = (longlong)(int)uVar9 * 4;
  do {
    uVar7 = 0;
    if ((int)uVar9 < (this->BoneIndices).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    uVar7 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar10);
    uVar8 = 0;
    if ((int)uVar7 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    pFVar2 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    pFVar1 = pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x20;
    dVar5 = *(double *)pFVar1;
    dVar13 = *(double *)(pFVar1 + 8);
    dVar12 = *(double *)(pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x30);
    uVar7 = 0;
    if (iVar11 < (this->BoneIndices).ArrayNum) {
      uVar7 = -uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    lVar10 = lVar10 + -4;
    uVar7 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar10);
    uVar8 = 0;
    if ((int)uVar7 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    pFVar2 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    uVar9 = uVar9 - 1;
    iVar11 = iVar11 + -1;
    pFVar1 = pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x20;
    dVar13 = *(double *)(pFVar1 + 8) - dVar13;
    dVar12 = *(double *)(pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x30) - dVar12;
    dVar5 = *(double *)pFVar1 - dVar5;
    dVar4 = dVar4 + SQRT(dVar13 * dVar13 + dVar5 * dVar5 + dVar12 * dVar12);
  } while (0 < (int)uVar9);
  return dVar4;
}

// RotateEndBoneWithGoal @ 14df51fd0

void __thiscall
FIKRigStretchLimbSolver::RotateEndBoneWithGoal
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,FIKRigGoal *param_2)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  ulonglong uVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  double dVar17;
  undefined1 in_XMM1 [16];
  undefined8 uVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined8 uVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  
  iVar2 = (this->BoneIndices).ArrayNum;
  uVar13 = iVar2 - 1;
  uVar16 = 0;
  if ((int)uVar13 < iVar2) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar23 = in_XMM1._8_8_;
  uVar28 = in_XMM2._8_8_;
  uVar16 = *(uint *)((this->BoneIndices).AllocatorInstance.Data +
                    (longlong)(this->BoneIndices).ArrayNum * 4 + -4);
  uVar13 = 0;
  if ((int)uVar16 < (param_1->CurrentPoseGlobal).ArrayNum) {
    uVar13 = ~uVar16 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    uVar23 = in_XMM1._8_8_;
    uVar28 = in_XMM2._8_8_;
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar1 = (this->Settings).RotateEndBoneWithGoal;
  pFVar12 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x60;
  auVar20 = *(undefined1 (*) [16])pFVar12;
  auVar27 = *(undefined1 (*) [16])(pFVar12 + 0x10);
  auVar8._4_8_ = uVar28;
  auVar8._0_4_ = auVar20._4_4_;
  auVar25._0_8_ = auVar8._0_8_ << 0x20;
  auVar25._8_4_ = auVar20._8_4_;
  auVar25._12_4_ = auVar20._12_4_;
  auVar9._4_8_ = uVar23;
  auVar9._0_4_ = auVar27._4_4_;
  auVar18._0_8_ = auVar9._0_8_ << 0x20;
  auVar18._8_4_ = auVar27._8_4_;
  auVar18._12_4_ = auVar27._12_4_;
  auVar26._0_8_ =
       auVar25._8_8_ * (param_2->FinalBlendedRotation).Y +
       auVar20._0_8_ * (param_2->FinalBlendedRotation).X +
       auVar18._8_8_ * (param_2->FinalBlendedRotation).W +
       auVar27._0_8_ * (param_2->FinalBlendedRotation).Z;
  auVar26._8_8_ = auVar20._8_8_;
  uVar16 = SUB84(dVar1,0);
  uVar13 = (uint)((ulonglong)dVar1 >> 0x20);
  dVar17 = __real_3ff0000000000000;
  if (auVar26._0_8_ < 0.0) {
    uVar16 = uVar16 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar13 = uVar13 ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar17 = __real_bff0000000000000;
  }
  dVar17 = dVar17 - (double)CONCAT44(uVar13,uVar16);
  dVar6 = auVar20._0_8_ * dVar17 + dVar1 * (param_2->FinalBlendedRotation).X;
  dVar7 = auVar20._8_8_ * dVar17 + dVar1 * (param_2->FinalBlendedRotation).Y;
  dVar4 = dVar1 * (param_2->FinalBlendedRotation).Z + auVar27._0_8_ * dVar17;
  dVar5 = dVar1 * (param_2->FinalBlendedRotation).W + auVar27._8_8_ * dVar17;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar17 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar24 = auVar19._8_8_ * dVar5 + dVar7 * dVar7;
  dVar1 = dVar24 + dVar17;
  dVar17 = dVar17 + dVar24;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar1;
  auVar20._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar27 = sqrtpd(auVar26,auVar20);
  uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= dVar17);
  uVar16 = (uint)(uVar14 >> 0x20);
  uVar13 = (uint)(uVar15 >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  auVar21._0_8_ = uVar14 & (ulonglong)(auVar20._0_8_ * dVar4);
  uVar10 = uVar15 & (ulonglong)(auVar20._8_8_ * dVar5);
  auVar21._8_4_ = (undefined4)uVar10;
  auVar21._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar29._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar29._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar29._12_4_ =
       ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  auVar22._0_8_ = (ulonglong)(auVar20._0_8_ * dVar6) & uVar14;
  uVar10 = (ulonglong)(auVar20._8_8_ * dVar7) & uVar15;
  auVar22._8_4_ = (undefined4)uVar10;
  auVar22._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar27._4_4_ =
       ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar27._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar27._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar27._12_4_ =
       ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])pFVar12 = auVar22 | auVar27;
  *(undefined1 (*) [16])(pFVar12 + 0x10) = auVar29 | auVar21;
  return;
}

// RunFABRIK @ 14df52210

void __thiscall
FIKRigStretchLimbSolver::RunFABRIK
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if ((2 < (this->BoneIndices).ArrayNum) && (0 < (this->Settings).Iterations)) {
    uVar12 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
    uVar11 = 0;
    if ((int)uVar12 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar11 = ~uVar12 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    local_d8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_c0._s_0.Z = (double)*(undefined8 *)(pFVar3 + (longlong)(int)uVar12 * 0x60 + 0x30);
    pFVar3 = pFVar3 + (longlong)(int)uVar12 * 0x60 + 0x20;
    dVar5 = *(double *)pFVar3;
    dVar6 = *(double *)(pFVar3 + 8);
    local_d8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_d8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_c0._s_0.X = dVar5;
    local_c0._s_0.Y = dVar6;
    if ((this->Settings).bEnableStretching != false) {
      local_a8._s_0.X = local_d8._s_0.X - dVar5;
      local_a8._s_0.Y = local_d8._s_0.Y - dVar6;
      local_a8._s_0.Z = local_d8._s_0.Z - local_c0._s_0.Z;
      UE::Math::TVector<double>::GetClampedToMaxSize
                ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_90._s_0,
                 this->TotalRestLength * (this->Settings).StretchStartPercent);
      local_d8._s_0.X = local_90._s_0.X + dVar5;
      local_d8._s_0.Y = local_90._s_0.Y + dVar6;
      local_d8._s_0.Z = local_90._s_0.Z + local_c0._s_0.Z;
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_e8,&UE::Math::TVector<double>::UpVector,(this->BoneIndices).ArrayNum);
    uVar12 = 0;
    if (0 < (this->BoneIndices).ArrayNum) {
      lVar15 = 0;
      lVar14 = 0;
      do {
        uVar11 = 0;
        if ((int)uVar12 < (this->BoneIndices).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar11 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar14);
        uVar10 = 0;
        if ((int)uVar11 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
        uVar2 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x30);
        pFVar3 = pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x20;
        uVar7 = *(undefined8 *)pFVar3;
        uVar8 = *(undefined8 *)(pFVar3 + 8);
        uVar11 = 0;
        if ((int)uVar12 < local_e8.ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        local_78 = uVar7;
        uStack_70 = uVar8;
        local_68 = uVar2;
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 4;
        *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar15) = uVar7;
        *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar15 + 8) = uVar8;
        *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar15 + 0x10) = uVar2;
        lVar15 = lVar15 + 0x18;
      } while ((int)uVar12 < (this->BoneIndices).ArrayNum);
    }
    iVar13 = 0;
    if (0 < (this->Settings).Iterations) {
      do {
        RunFABRIKForwardPass(this,(TVector<double> *)&local_c0._s_0,&local_e8);
        RunFABRIKBackwardPass(this,(TVector<double> *)&local_d8._s_0,&local_e8);
        iVar13 = iVar13 + 1;
      } while (iVar13 < (this->Settings).Iterations);
    }
    RunFABRIKForwardPass(this,(TVector<double> *)&local_c0._s_0,&local_e8);
    uVar12 = 1;
    if (1 < (this->BoneIndices).ArrayNum) {
      lVar15 = 0x18;
      lVar14 = 4;
      do {
        uVar11 = 0;
        if ((int)uVar12 < (this->BoneIndices).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar11 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar14);
        uVar10 = 0;
        if ((int)uVar11 < (param_1->CurrentPoseGlobal).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar12 < local_e8.ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 4;
        pFVar1 = local_e8.AllocatorInstance.Data + lVar15;
        uVar7 = *(undefined8 *)(pFVar1 + 8);
        uVar2 = *(undefined8 *)(local_e8.AllocatorInstance.Data + lVar15 + 0x10);
        lVar15 = lVar15 + 0x18;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x20) = *(undefined8 *)pFVar1;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x28) = uVar7;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x30) = uVar2;
        *(undefined8 *)(pFVar3 + (longlong)(int)uVar11 * 0x60 + 0x38) = 0;
      } while ((int)uVar12 < (this->BoneIndices).ArrayNum);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
  }
  return;
}

// RunFABRIKBackwardPass @ 14df526e0

void __thiscall
FIKRigStretchLimbSolver::RunFABRIKBackwardPass
          (FIKRigStretchLimbSolver *this,TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  
  if ((param_2->ArrayNum < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("BonePositions.Num() >= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigStretchLimb.cpp"
                          ,0x192,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->RestLengths).ArrayNum != param_2->ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RestLengths.Num() == BonePositions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigStretchLimb.cpp"
                          ,0x193,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar9 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar2;
  uVar15 = param_2->ArrayNum - 1;
  uVar14 = 0;
  if ((int)uVar15 < param_2->ArrayNum) {
    uVar14 = ~uVar15 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar5 = param_2->ArrayNum;
  pFVar6 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar6 + (longlong)iVar5 * 0x18 + -0x18;
  *(double *)pFVar1 = dVar3;
  *(double *)(pFVar1 + 8) = dVar9;
  *(double *)(pFVar6 + (longlong)iVar5 * 0x18 + -8) = dVar2;
  dVar2 = __real_3f1a36e2e0000000;
  uVar14 = param_2->ArrayNum;
  uVar15 = uVar14 - 2;
  if (-1 < (int)uVar15) {
    lVar16 = (longlong)(int)uVar15 * 0x18;
    lVar18 = (longlong)(int)uVar15 * 8 + 8;
    do {
      uVar14 = uVar14 - 1;
      uVar17 = ~uVar14 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar14 < (this->RestLengths).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar3 = *(double *)((this->RestLengths).AllocatorInstance.Data + lVar18);
      uVar13 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar13 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (param_2->AllocatorInstance).Data;
      dVar9 = *(double *)(pFVar1 + lVar16) - *(double *)(pFVar6 + lVar16 + 0x18);
      dVar10 = *(double *)(pFVar1 + lVar16 + 8) - *(double *)(pFVar6 + lVar16 + 0x20);
      dVar11 = *(double *)(pFVar1 + lVar16 + 0x10) - *(double *)(pFVar6 + lVar16 + 0x28);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar10 * dVar10 + dVar9 * dVar9 + dVar11 * dVar11;
      auVar19 = sqrtpd(auVar19,auVar8);
      if (dVar2 <= auVar19._0_8_) {
        uVar13 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        dVar3 = dVar3 / auVar19._0_8_;
        auVar19._0_8_ = dVar3 * dVar9 + *(double *)(pFVar1 + lVar16 + 0x18);
        auVar19._8_8_ = 0;
        dVar9 = *(double *)(pFVar1 + lVar16 + 0x20);
        dVar4 = *(double *)(pFVar1 + lVar16 + 0x28);
        uVar13 = 0;
        if ((int)uVar15 < param_2->ArrayNum) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        *(double *)(pFVar1 + lVar16) = auVar19._0_8_;
        *(double *)(pFVar1 + lVar16 + 8) = dVar3 * dVar10 + dVar9;
        *(double *)(pFVar1 + lVar16 + 0x10) = dVar3 * dVar11 + dVar4;
      }
      lVar18 = lVar18 + -8;
      lVar16 = lVar16 + -0x18;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return;
}

// RunFABRIKForwardPass @ 14df52ae0

void __thiscall
FIKRigStretchLimbSolver::RunFABRIKForwardPass
          (FIKRigStretchLimbSolver *this,TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  
  if ((param_2->ArrayNum < 2) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BonePositions.Num() >= 2",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigStretchLimb.cpp"
                          ,0x1aa,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->RestLengths).ArrayNum != param_2->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RestLengths.Num() == BonePositions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigStretchLimb.cpp"
                          ,0x1ab,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = dVar1;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  if ((param_2->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar13 = 1;
  *(double *)pFVar4 = dVar2;
  *(double *)(pFVar4 + 8) = dVar8;
  *(double *)(pFVar4 + 0x10) = dVar1;
  dVar1 = __real_3f1a36e2e0000000;
  if (1 < param_2->ArrayNum) {
    lVar15 = 0x18;
    lVar16 = 1;
    do {
      uVar14 = ~uVar13 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar13 < (this->RestLengths).ArrayNum) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      dVar2 = *(double *)((this->RestLengths).AllocatorInstance.Data + lVar16 * 8);
      uVar12 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar12 = uVar14;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)(uVar13 - 1) < param_2->ArrayNum) {
        uVar12 = -uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      dVar8 = *(double *)(pFVar4 + lVar15) - *(double *)(pFVar5 + lVar15 + -0x18);
      dVar9 = *(double *)(pFVar4 + lVar15 + 8) - *(double *)(pFVar5 + lVar15 + -0x10);
      dVar10 = *(double *)(pFVar4 + lVar15 + 0x10) - *(double *)(pFVar5 + lVar15 + -8);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
      auVar17 = sqrtpd(auVar17,auVar7);
      if (dVar1 <= auVar17._0_8_) {
        uVar12 = 0;
        if ((int)(uVar13 - 1) < param_2->ArrayNum) {
          uVar12 = -uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        dVar2 = dVar2 / auVar17._0_8_;
        auVar17._0_8_ = dVar2 * dVar8 + *(double *)(pFVar4 + lVar15 + -0x18);
        auVar17._8_8_ = 0;
        dVar8 = *(double *)(pFVar4 + lVar15 + -0x10);
        dVar3 = *(double *)(pFVar4 + lVar15 + -8);
        uVar12 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar12 = uVar14;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        *(double *)(pFVar4 + lVar15) = auVar17._0_8_;
        *(double *)(pFVar4 + lVar15 + 8) = dVar2 * dVar9 + dVar8;
        *(double *)(pFVar4 + lVar15 + 0x10) = dVar2 * dVar10 + dVar3;
      }
      uVar13 = uVar13 + 1;
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((int)uVar13 < param_2->ArrayNum);
  }
  return;
}

// SquashChainPerpendicular @ 14df58450

void __thiscall
FIKRigStretchLimbSolver::SquashChainPerpendicular
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  EStretchLimbSquashMode EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  FIKRigSkeleton *pFVar17;
  bool bVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  double dVar34;
  undefined4 uVar35;
  undefined1 local_res8 [8];
  FIKRigSkeleton *local_res10;
  FScriptContainerElement *local_res18;
  longlong local_res20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  
  if (((2 < (this->BoneIndices).ArrayNum) && ((this->Settings).SquashMode != None)) &&
     (dVar31 = (this->Settings).SquashStrength,
     uVar27 = SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar28 = (uint)((ulonglong)dVar31 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3e45798ee2308c3a <= (double)CONCAT44(uVar28,uVar27) &&
     (double)CONCAT44(uVar28,uVar27) != __real_3e45798ee2308c3a)) {
    uVar27 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
    uVar28 = 0;
    if ((int)uVar27 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar28 = ~uVar27 >> 0x1f;
    }
    local_res10 = param_1;
    if ((uVar28 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar25 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    iVar4 = (this->BoneIndices).ArrayNum;
    uVar28 = iVar4 - 1;
    pFVar23 = pFVar25 + (longlong)(int)uVar27 * 0x60 + 0x20;
    local_1c8 = *(double *)pFVar23;
    dStack_1c0 = *(double *)(pFVar23 + 8);
    local_1b8 = *(double *)(pFVar25 + (longlong)(int)uVar27 * 0x60 + 0x30);
    uVar27 = 0;
    if ((int)uVar28 < iVar4) {
      uVar27 = ~uVar28 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar27 = *(uint *)((this->BoneIndices).AllocatorInstance.Data +
                      (longlong)(this->BoneIndices).ArrayNum * 4 + -4);
    uVar28 = 0;
    if ((int)uVar27 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar28 = ~uVar27 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    dVar32 = __real_3e45798ee0000000;
    dVar16 = __real_3ff0000000000000;
    pFVar25 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    pFVar23 = pFVar25 + (longlong)(int)uVar27 * 0x60 + 0x20;
    local_138 = *(double *)pFVar23;
    dStack_130 = *(double *)(pFVar23 + 8);
    local_128 = *(double *)(pFVar25 + (longlong)(int)uVar27 * 0x60 + 0x30);
    dVar12 = local_138 - local_1c8;
    dVar31 = dStack_130 - dStack_1c0;
    dVar34 = local_128 - local_1b8;
    dVar29 = dVar31 * dVar31 + dVar12 * dVar12 + dVar34 * dVar34;
    dVar30 = dVar29;
    if (dVar29 <= __real_3f847ae147ae147b) {
      dVar30 = __real_3f847ae147ae147b;
    }
    if (dVar30 < this->InitialPoleVectorLenSq) {
      uVar13 = dVar12;
      uVar14 = dVar31;
      uVar15 = dVar34;
      if ((dVar29 != __real_3ff0000000000000) &&
         (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
         uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
         uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
         __real_3e45798ee0000000 <= dVar29)) {
        local_1b0 = __real_3ff0000000000000 / SQRT(dVar29);
        uVar13 = dVar12 * local_1b0;
        uVar14 = dVar31 * local_1b0;
        uVar15 = dVar34 * local_1b0;
      }
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = 0;
      local_1d8.ArrayMax = 0;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (&local_1d8,&UE::Math::TVector<double>::UpVector,(this->BoneIndices).ArrayNum);
      pFVar17 = local_res10;
      uVar27 = 1;
      local_res20 = 0x18;
      if (1 < (this->BoneIndices).ArrayNum + -1) {
        lVar26 = 0x18;
        lVar24 = 4;
        do {
          uVar28 = 0;
          if ((int)uVar27 < (this->BoneIndices).ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar28 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar24);
          uVar22 = 0;
          if ((int)uVar28 < (pFVar17->CurrentPoseGlobal).ArrayNum) {
            uVar22 = ~uVar28 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar25 = (pFVar17->CurrentPoseGlobal).AllocatorInstance.Data;
          pFVar23 = pFVar25 + (longlong)(int)uVar28 * 0x60 + 0x20;
          local_120 = *(double *)pFVar23;
          dStack_118 = *(double *)(pFVar23 + 8);
          local_110 = *(double *)(pFVar25 + (longlong)(int)uVar28 * 0x60 + 0x30);
          dVar31 = (dStack_118 - dStack_1c0) * (double)uVar14 +
                   (local_120 - local_1c8) * (double)uVar13 +
                   (local_110 - local_1b8) * (double)uVar15;
          uVar10 = local_120 - ((double)uVar13 * dVar31 + local_1c8);
          uVar11 = dStack_118 - ((double)uVar14 * dVar31 + dStack_1c0);
          dVar34 = local_110 - ((double)uVar15 * dVar31 + local_1b8);
          dVar31 = (double)uVar11 * (double)uVar11 + (double)uVar10 * (double)uVar10 +
                   dVar34 * dVar34;
          if (dVar31 == dVar16) {
LAB_14df5891f:
            uVar33 = SUB84(dVar34,0);
            uVar35 = (undefined4)((ulonglong)dVar34 >> 0x20);
            local_f8 = dVar34;
          }
          else {
            if (dVar32 <= dVar31) {
              local_1a8 = dVar16 / SQRT(dVar31);
              uVar10 = (double)uVar10 * local_1a8;
              uVar11 = (double)uVar11 * local_1a8;
              dVar34 = dVar34 * local_1a8;
              goto LAB_14df5891f;
            }
            uVar33 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
            uVar35 = (undefined4)
                     ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
            uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          }
          uVar28 = 0;
          if ((int)uVar27 < local_1d8.ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + 4;
          auVar9._8_4_ = (int)uVar11;
          auVar9._0_8_ = uVar10;
          auVar9._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
          *(undefined1 (*) [16])(local_1d8.AllocatorInstance.Data + lVar26) = auVar9;
          *(ulonglong *)(local_1d8.AllocatorInstance.Data + lVar26 + 0x10) = CONCAT44(uVar35,uVar33)
          ;
          lVar26 = lVar26 + 0x18;
          param_1 = local_res10;
        } while ((int)uVar27 < (this->BoneIndices).ArrayNum + -1);
      }
      iVar4 = (this->AllBoneSettings).ArrayNum;
      uVar20 = (ulonglong)iVar4;
      pFVar23 = (this->AllBoneSettings).AllocatorInstance.Data;
      local_res18 = (FScriptContainerElement *)CONCAT44(local_res18._4_4_,iVar4);
      pFVar25 = pFVar23 + uVar20 * 0x30;
      while( true ) {
        if ((this->AllBoneSettings).ArrayNum != (int)uVar20) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FIKRigStretchLimbBoneSettings,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar23 == pFVar25) break;
        uVar27 = *(uint *)(pFVar23 + 0x28);
        lVar24 = (longlong)(int)uVar27;
        dVar31 = *(double *)(pFVar23 + 0x20);
        dVar34 = *(double *)(pFVar23 + 0x10);
        dVar12 = *(double *)(pFVar23 + 0x18);
        if (uVar27 != 0xffffffff) {
          uVar28 = 0;
          if ((int)uVar27 < (this->BoneIndices).ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar28 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar24 * 4);
          uVar22 = 0;
          if ((int)uVar28 < (local_res10->CurrentPoseGlobal).ArrayNum) {
            uVar22 = ~uVar28 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          param_1 = local_res10;
          pFVar5 = (local_res10->CurrentPoseGlobal).AllocatorInstance.Data;
          pFVar1 = pFVar5 + (longlong)(int)uVar28 * 0x60;
          local_158.X = *(double *)pFVar1;
          local_158.Y = *(double *)(pFVar1 + 8);
          pFVar5 = pFVar5 + (longlong)(int)uVar28 * 0x60 + 0x10;
          local_158.Z = *(double *)pFVar5;
          local_158.W = *(double *)(pFVar5 + 8);
          local_198._s_0.X = dVar34;
          local_198._s_0.Y = dVar12;
          local_198._s_0.Z = dVar31;
          UE::Math::TQuat<double>::RotateVector
                    (&local_158,(TVector<double> *)&local_178._s_0,
                     (TVector<double> *)&local_198._s_0);
          uVar15 = local_178._s_0.Z;
          uVar14 = local_178._s_0.Y;
          uVar13 = local_178._s_0.X;
          uVar28 = 0;
          if ((int)uVar27 < local_1d8.ArrayNum) {
            uVar28 = ~uVar27 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar24 * 0x18) = uVar13;
          *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar24 * 0x18 + 8) = uVar14;
          *(undefined8 *)(local_1d8.AllocatorInstance.Data + lVar24 * 0x18 + 0x10) = uVar15;
        }
        uVar20 = (ulonglong)local_res18 & 0xffffffff;
        pFVar23 = pFVar23 + 0x30;
      }
      uVar27 = 1;
      dVar31 = dVar16 - dVar30 / this->InitialPoleVectorLenSq;
      if (1 < (this->BoneIndices).ArrayNum + -1) {
        lVar24 = 1;
        do {
          uVar22 = ~uVar27 >> 0x1f;
          uVar28 = 0;
          if ((int)uVar27 < (this->BoneIndices).ArrayNum) {
            uVar28 = uVar22;
          }
          if ((uVar28 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar28 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar24 * 4);
          uVar19 = 0;
          if ((int)uVar27 < local_1d8.ArrayNum) {
            uVar19 = uVar22;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          EVar3 = (this->Settings).SquashMode;
          local_res18 = local_1d8.AllocatorInstance.Data;
          uVar19 = 0;
          if ((int)uVar27 < (this->PoleVectorParams).ArrayNum) {
            uVar19 = uVar22;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar34 = dVar16;
          if (EVar3 != Uniform) {
            if (EVar3 == Bulge) {
              dVar34 = *(double *)((this->PoleVectorParams).AllocatorInstance.Data + lVar24 * 8);
              if (dVar16 <= dVar34) {
                dVar34 = dVar16;
              }
              if (dVar34 <= 0.0) {
                dVar34 = 0.0;
              }
              dVar34 = SQRT((dVar16 - dVar34) * dVar34);
              dVar34 = dVar34 + dVar34;
            }
            else {
              bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Rig\\Solvers\\IKRigStretchLimb.cpp"
                                  ,0x11d,L"");
              if (bVar18) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
          uVar22 = 0;
          if ((int)uVar28 < (param_1->CurrentPoseGlobal).ArrayNum) {
            uVar22 = ~uVar28 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar12 = (this->Settings).SquashStrength;
          pFVar25 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
          lVar21 = (longlong)(int)uVar28 * 0x60;
          uVar27 = uVar27 + 1;
          lVar24 = lVar24 + 1;
          pFVar23 = local_res18 + local_res20;
          lVar26 = local_res20 + 0x10;
          lVar2 = local_res20 + 8;
          local_res20 = local_res20 + 0x18;
          dVar32 = dVar31 * dVar34 * dVar12 * *(double *)pFVar23;
          dVar30 = dVar12 * *(double *)(local_res18 + lVar2) * dVar31 * dVar34;
          local_e0 = dVar12 * *(double *)(local_res18 + lVar26) * dVar31 * dVar34;
          local_f0._8_4_ = SUB84(dVar30,0);
          local_f0._0_8_ = dVar32;
          local_f0._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          dVar30 = dVar30 + *(double *)(pFVar25 + lVar21 + 0x20 + 8);
          dVar34 = *(double *)(pFVar25 + lVar21 + 0x30 + 8) + 0.0;
          auVar7._8_4_ = SUB84(dVar30,0);
          auVar7._0_8_ = dVar32 + *(double *)(pFVar25 + lVar21 + 0x20);
          auVar7._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          *(undefined1 (*) [16])(pFVar25 + lVar21 + 0x20) = auVar7;
          auVar8._8_4_ = SUB84(dVar34,0);
          auVar8._0_8_ = local_e0 + *(double *)(pFVar25 + lVar21 + 0x30);
          auVar8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          *(undefined1 (*) [16])(pFVar25 + lVar21 + 0x30) = auVar8;
        } while ((int)uVar27 < (this->BoneIndices).ArrayNum + -1);
      }
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SquashOrStretchChainParallel @ 14df58e60

void __thiscall
FIKRigStretchLimbSolver::SquashOrStretchChainParallel
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [4];
  
  if (((this->BoneIndices).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
  uVar9 = 0;
  if ((int)uVar8 < (param_1->CurrentPoseGlobal).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
  iVar2 = (this->BoneIndices).ArrayNum;
  uVar9 = iVar2 - 1;
  pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x60 + 0x20;
  local_c8._s_0.X = (double)*(undefined8 *)pFVar1;
  local_c8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
  local_c8._s_0.Z = (double)*(undefined8 *)(pFVar3 + (longlong)(int)uVar8 * 0x60 + 0x30);
  uVar8 = 0;
  if ((int)uVar9 < iVar2) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)((this->BoneIndices).AllocatorInstance.Data +
                   (longlong)(this->BoneIndices).ArrayNum * 4 + -4);
  uVar9 = 0;
  if ((int)uVar8 < (param_1->CurrentPoseGlobal).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar8 * 0x60 + 0x20;
  local_98._s_0.X = *(double *)pFVar1 - local_c8._s_0.X;
  local_98._s_0.Y = *(double *)(pFVar1 + 8) - local_c8._s_0.Y;
  local_98._s_0.Z = *(double *)(pFVar3 + (longlong)(int)uVar8 * 0x60 + 0x30) - local_c8._s_0.Z;
  local_b0 = (param_2->field0_0x0)._s_0.X;
  dStack_a8 = (param_2->field0_0x0)._s_0.Y;
  local_a0 = (param_2->field0_0x0)._s_0.Z;
  dVar12 = dStack_a8;
  dVar14 = local_a0;
  dVar5 = local_b0;
  if ((this->Settings).bEnableStretching != false) {
    dVar14 = (param_2->field0_0x0)._s_0.X - local_c8._s_0.X;
    dVar15 = (param_2->field0_0x0)._s_0.Y - local_c8._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.Z - local_c8._s_0.Z;
    dVar12 = this->TotalRestLength * (this->Settings).StretchStartPercent;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if ((__real_3f1a36e2e0000000 <= dVar12) &&
       (dVar11 = dVar15 * dVar15 + dVar14 * dVar14 + dVar5 * dVar5, uVar10 = dVar15, uVar13 = dVar5,
       uVar6 = dVar14, dVar12 * dVar12 < dVar11)) {
      dVar12 = (__real_3ff0000000000000 / SQRT(dVar11)) * dVar12;
      uVar10 = dVar12 * dVar15;
      uVar13 = dVar12 * dVar5;
      uVar6 = dVar12 * dVar14;
    }
    dVar12 = (double)uVar10 + local_c8._s_0.Y;
    dVar14 = (double)uVar13 + local_c8._s_0.Z;
    dVar5 = (double)uVar6 + local_c8._s_0.X;
  }
  local_80[0]._0_8_ = dVar5 - local_c8._s_0.X;
  local_80[0]._8_8_ = dVar12 - local_c8._s_0.Y;
  local_80[0]._16_8_ = dVar14 - local_c8._s_0.Z;
  ApplyParallelOffsetToChain
            (this,param_1,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_80[0]._s_0,
             (TVector<double> *)&local_98._s_0);
  return;
}

// StoreBonePositions @ 14df5a400

void __thiscall
FIKRigStretchLimbSolver::StoreBonePositions(FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar10 = 0;
  if (0 < (this->BoneIndices).ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->BoneIndices).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar12);
      uVar9 = 0;
      if ((int)uVar8 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
      uVar1 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar8 * 0x60 + 0x30);
      pFVar2 = pFVar2 + (longlong)(int)uVar8 * 0x60 + 0x20;
      uVar5 = *(undefined8 *)pFVar2;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
      uVar8 = 0;
      if ((int)uVar10 < (this->BonePositionsPreOffset).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->BonePositionsPreOffset).AllocatorInstance.Data;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 4;
      pFVar2 = pFVar3 + lVar11;
      *(undefined8 *)pFVar2 = uVar5;
      *(undefined8 *)(pFVar2 + 8) = uVar6;
      *(undefined8 *)(pFVar3 + lVar11 + 0x10) = uVar1;
      lVar11 = lVar11 + 0x18;
    } while ((int)uVar10 < (this->BoneIndices).ArrayNum);
  }
  return;
}

// StretchChainFinal @ 14df5aa90

void __thiscall
FIKRigStretchLimbSolver::StretchChainFinal
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 local_58 [2];
  TVector<double> local_28;
  
  if ((this->Settings).bEnableStretching != false) {
    if ((this->BoneIndices).ArrayNum < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = *(uint *)(this->BoneIndices).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar7 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    iVar3 = (this->BoneIndices).ArrayNum;
    uVar9 = iVar3 - 1;
    pFVar1 = pFVar4 + (longlong)(int)uVar7 * 0x60 + 0x20;
    local_70._s_0.X = (double)*(undefined8 *)pFVar1;
    local_70._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
    local_70._s_0.Z = (double)*(undefined8 *)(pFVar4 + (longlong)(int)uVar7 * 0x60 + 0x30);
    uVar7 = 0;
    if ((int)uVar9 < iVar3) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar7 = *(uint *)((this->BoneIndices).AllocatorInstance.Data +
                     (longlong)(this->BoneIndices).ArrayNum * 4 + -4);
    uVar9 = 0;
    if ((int)uVar7 < (param_1->CurrentPoseGlobal).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
    local_88._s_0.Y = (param_2->field0_0x0)._s_0.Y - local_70._s_0.Y;
    pFVar1 = pFVar4 + (longlong)(int)uVar7 * 0x60 + 0x20;
    local_58[0]._0_8_ = *(double *)pFVar1 - local_70._s_0.X;
    local_58[0]._16_8_ = *(double *)(pFVar4 + (longlong)(int)uVar7 * 0x60 + 0x30) - local_70._s_0.Z;
    local_58[0]._8_8_ = *(double *)(pFVar1 + 8) - local_70._s_0.Y;
    local_88._s_0.X = (param_2->field0_0x0)._s_0.X - local_70._s_0.X;
    dVar2 = (this->Settings).MaximumStretchDistance;
    local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z - local_70._s_0.Z;
    if (0.0 <= dVar2) {
      pTVar8 = UE::Math::TVector<double>::GetClampedToMaxSize
                         ((TVector<double> *)&local_88._s_0,&local_28,dVar2 + this->TotalRestLength)
      ;
      local_88._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      local_88._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
      local_88._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    }
    ApplyParallelOffsetToChain
              (this,param_1,(TVector<double> *)&local_70._s_0,(TVector<double> *)&local_88._s_0,
               (TVector<double> *)&local_58[0]._s_0);
  }
  return;
}

// UpdateBoneOrientations @ 14df5c970

void __thiscall
FIKRigStretchLimbSolver::UpdateBoneOrientations
          (FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TQuat<double> local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  
  if (0 < (this->BoneIndices).ArrayNum + -1) {
    lVar20 = 0;
    lVar22 = 0;
    uVar18 = 0;
    do {
      uVar21 = uVar18 + 1;
      uVar16 = 0;
      if ((int)uVar21 < (this->BonePositionsPreOffset).ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = (this->BonePositionsPreOffset).AllocatorInstance.Data;
      uVar16 = 0;
      if ((int)uVar18 < (this->BonePositionsPreOffset).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->BonePositionsPreOffset).AllocatorInstance.Data;
      local_f0._s_0.Z = *(double *)(pFVar19 + lVar22 + 0x28) - *(double *)(pFVar1 + lVar22 + 0x10);
      local_f0._s_0.Y = *(double *)(pFVar19 + lVar22 + 0x20) - *(double *)(pFVar1 + lVar22 + 8);
      local_f0._s_0.X = *(double *)(pFVar19 + lVar22 + 0x18) - *(double *)(pFVar1 + lVar22);
      uVar16 = 0;
      if ((int)uVar18 < (this->BoneIndices).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar20 * 4);
      uVar16 = 0;
      if ((int)uVar21 < (this->BoneIndices).ArrayNum) {
        uVar16 = ~uVar21 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar16 = *(uint *)((this->BoneIndices).AllocatorInstance.Data + lVar20 * 4 + 4);
      uVar17 = 0;
      if ((int)uVar18 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar19 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x60;
      uVar18 = 0;
      if ((int)uVar16 < (param_1->CurrentPoseGlobal).ArrayNum) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a0 = *(double *)&pFVar19[0x20].field_0x0;
      dStack_98 = *(double *)(pFVar19 + 0x28);
      local_90 = *(double *)&pFVar19[0x30].field_0x0;
      pFVar2 = (param_1->CurrentPoseGlobal).AllocatorInstance.Data;
      pFVar1 = pFVar2 + (longlong)(int)uVar16 * 0x60 + 0x20;
      local_b8 = *(double *)pFVar1;
      dStack_b0 = *(double *)(pFVar1 + 8);
      local_a8 = *(double *)(pFVar2 + (longlong)(int)uVar16 * 0x60 + 0x30);
      local_108._s_0.X = local_b8 - local_a0;
      local_108._s_0.Z = local_a8 - local_90;
      local_108._s_0.Y = dStack_b0 - dStack_98;
      UE::Math::TQuat<double>::FindBetweenVectors
                (&local_d8,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_108._s_0);
      dVar11 = *(double *)&pFVar19->field_0x0;
      dVar12 = *(double *)(pFVar19 + 8);
      lVar20 = lVar20 + 1;
      dVar13 = *(double *)&pFVar19[0x10].field_0x0;
      dVar14 = *(double *)(pFVar19 + 0x18);
      dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar10 = local_d8.X * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
               + local_d8.W * dVar12 +
               local_d8.Y * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
               + local_d8.Z * dVar11 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar8 = local_d8.X * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
              + local_d8.W * dVar14 +
              local_d8.Y * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
              + local_d8.Z * dVar13 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = local_d8.X * dVar14 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_d8.W * dVar11 +
                     local_d8.Y * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     local_d8.Z * dVar12 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])pFVar19 = auVar9;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = local_d8.X * dVar12 * dVar4 + local_d8.W * dVar13 + local_d8.Y * dVar11 * dVar5
                     + local_d8.Z * dVar14 * dVar6;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(pFVar19 + 0x10) = auVar7;
      lVar22 = lVar22 + 0x18;
      uVar18 = uVar21;
    } while ((int)uVar21 < (this->BoneIndices).ArrayNum + -1);
  }
  return;
}

// UpdateFKChildren @ 14df5cdf0

void __thiscall
FIKRigStretchLimbSolver::UpdateFKChildren(FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BoneIndices).AllocatorInstance.Data;
  iVar2 = (this->BoneIndices).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->BoneIndices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FIKRigSkeleton::UpdateLocalTransformFromGlobal(param_1,*(int *)pFVar3);
    pFVar3 = pFVar3 + 4;
  }
  pFVar3 = (this->ChildrenToUpdate).AllocatorInstance.Data;
  iVar2 = (this->ChildrenToUpdate).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->ChildrenToUpdate).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    FIKRigSkeleton::UpdateGlobalTransformFromLocal(param_1,*(int *)pFVar3);
    pFVar3 = pFVar3 + 4;
  }
  return;
}

// UpdateRestLengths @ 14df5ed70

void __thiscall
FIKRigStretchLimbSolver::UpdateRestLengths(FIKRigStretchLimbSolver *this,FIKRigSkeleton *param_1)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  TPlus<void> local_res8;
  undefined1 local_res18 [8];
  uint local_res20;
  double local_98;
  double local_90;
  FScriptContainerElement *local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  uVar4 = (this->BoneIndices).ArrayNum;
  pTVar2 = &this->RestLengths;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->RestLengths).ArrayMax;
  (this->RestLengths).ArrayNum = 0;
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_res20 = (this->BoneIndices).ArrayNum;
  uVar13 = (ulonglong)(int)local_res20;
  pFVar15 = (this->BoneIndices).AllocatorInstance.Data;
  local_88 = pFVar15 + uVar13 * 4;
  while( true ) {
    pFVar3 = local_88;
    if ((this->BoneIndices).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar3) break;
    uVar4 = *(uint *)pFVar15;
    lVar14 = (longlong)(int)uVar4;
    if (((int)uVar4 < 0) || ((param_1->BoneNames).ArrayNum <= (int)uVar4)) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = 0;
      if ((int)uVar4 < (param_1->ParentIndices).ArrayNum) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar10 = *(uint *)((param_1->ParentIndices).AllocatorInstance.Data + lVar14 * 4);
    }
    iVar11 = (param_1->RefPoseGlobal).ArrayNum;
    if (uVar10 == 0xffffffff) {
      uVar10 = 0;
      if ((int)uVar4 < iVar11) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pFVar3 = pFVar5 + lVar14 * 0x60 + 0x20;
      local_68 = *(double *)pFVar3;
      dStack_60 = *(double *)(pFVar3 + 8);
      local_58 = *(double *)(pFVar5 + lVar14 * 0x60 + 0x30);
      local_98 = SQRT(local_68 * local_68 + dStack_60 * dStack_60 + local_58 * local_58);
      if ((pFVar6 <= (FScriptContainerElement *)&local_98) &&
         ((FScriptContainerElement *)&local_98 < pFVar6 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->RestLengths).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar16 = SUB84(local_98,0);
      uVar17 = (undefined4)((ulonglong)local_98 >> 0x20);
    }
    else {
      uVar12 = 0;
      if ((int)uVar10 < iVar11) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
      pFVar3 = pFVar5 + (longlong)(int)uVar10 * 0x60 + 0x20;
      local_80 = *(double *)pFVar3;
      dStack_78 = *(double *)(pFVar3 + 8);
      local_70 = *(double *)(pFVar5 + (longlong)(int)uVar10 * 0x60 + 0x30);
      uVar10 = 0;
      if ((int)uVar4 < (param_1->RefPoseGlobal).ArrayNum) {
        uVar10 = ~uVar4 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar5 = (param_1->RefPoseGlobal).AllocatorInstance.Data;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pFVar3 = pFVar5 + lVar14 * 0x60 + 0x20;
      local_50 = *(double *)pFVar3;
      dStack_48 = *(double *)(pFVar3 + 8);
      local_40 = *(double *)(pFVar5 + lVar14 * 0x60 + 0x30);
      local_90 = SQRT((dStack_48 - dStack_78) * (dStack_48 - dStack_78) +
                      (local_50 - local_80) * (local_50 - local_80) +
                      (local_40 - local_70) * (local_40 - local_70));
      if ((pFVar6 <= (FScriptContainerElement *)&local_90) &&
         ((FScriptContainerElement *)&local_90 < pFVar6 + (longlong)*piVar1 * 8)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->RestLengths).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar16 = SUB84(local_90,0);
      uVar17 = (undefined4)((ulonglong)local_90 >> 0x20);
    }
    pFVar15 = pFVar15 + 4;
    (this->RestLengths).ArrayNum = iVar11 + 1;
    *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) =
         CONCAT44(uVar17,uVar16);
    uVar13 = (ulonglong)local_res20;
  }
  local_res8 = SUB81(this,0);
  dVar8 = Algo::Accumulate<double,TArray<double,TSizedDefaultAllocator<32>_>,TPlus<void>_>
                    (pTVar2,0.0,local_res8);
  this->TotalRestLength = dVar8;
  return;
}

// operator() @ 150591700

bool __thiscall `FIKRigStretchLimbSolver::Solve'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4283263157931081828>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4283263157931081828>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

