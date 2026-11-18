// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FJointSolverConstraints @ 143b84590

FJointSolverConstraints * __thiscall
Chaos::FJointSolverConstraints::FJointSolverConstraints(FJointSolverConstraints *this)

{
  this->JointIndex = -1;
  this->LinearRowIndexBegin = -1;
  this->PositionTolerance = 0.0;
  this->AngleTolerance = 0.0;
  this->bNeedSwingTwist = false;
  this->bNeedLockedAxes = false;
  this->LinearRowIndexEnd = -1;
  this->AngularRowIndexBegin = -1;
  this->AngularRowIndexEnd = -1;
  return this;
}

// AddCylindricalPositionConstraint @ 143b85500

void __thiscall
Chaos::FJointSolverConstraints::AddCylindricalPositionConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,EJointMotionType param_3,EJointMotionType param_4,
          FPBDJointSolverSettings *param_5,FPBDJointSettings *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,2,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
  lVar8 = (longlong)(int)uVar6 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>
            ((param_1->AllocatorInstance).Data + lVar8,2);
  uVar9 = uVar6 + 1;
  this->LinearRowIndexEnd = uVar6 + 2;
  uVar7 = 0;
  if ((int)uVar6 < param_1->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar11 = __real_47efffffe0000000;
  pFVar2 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar2 + lVar8) = 3;
  *(undefined4 *)(pFVar2 + lVar8 + 0xc) = 1;
  iVar1 = this->JointIndex;
  *(int *)(pFVar2 + lVar8 + 8) = param_2;
  *(int *)(pFVar2 + lVar8 + 4) = iVar1;
  if (param_3 == Limited) {
    if (param_6->bSoftLinearLimitsEnabled == false) {
      dVar10 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
      *(double *)(pFVar2 + lVar8 + 0x10) = dVar10;
      dVar10 = param_6->LinearLimit;
    }
    else {
      dVar10 = FPBDJointUtilities::GetSoftLinearStiffness(param_5,param_6);
      *(double *)(pFVar2 + lVar8 + 0x10) = dVar10;
      dVar10 = FPBDJointUtilities::GetSoftLinearDamping(param_5,param_6);
      *(double *)(pFVar2 + lVar8 + 0x18) = dVar10;
      FVar5 = (FScriptContainerElement)
              FPBDJointUtilities::GetLinearSoftAccelerationMode(param_5,param_6);
      pFVar2[lVar8 + 0x28] = FVar5;
      pFVar2[lVar8 + 0x29] = (FScriptContainerElement)0x1;
      dVar10 = param_6->LinearLimit;
    }
  }
  else if (param_3 == Locked) {
    dVar10 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
    *(double *)(pFVar2 + lVar8 + 0x10) = dVar10;
    dVar10 = 0.0;
  }
  else {
    *(undefined8 *)(pFVar2 + lVar8 + 0x10) = 0;
    dVar10 = dVar11;
  }
  *(double *)(pFVar2 + lVar8 + 0x20) = dVar10;
  uVar7 = 0;
  if ((int)uVar9 < param_1->ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  lVar8 = (longlong)(int)uVar9;
  *(undefined4 *)(pFVar2 + lVar8 * 0x30) = 0;
  *(undefined4 *)(pFVar2 + lVar8 * 0x30 + 0xc) = 1;
  *(int *)(pFVar2 + lVar8 * 0x30 + 4) = this->JointIndex;
  *(int *)(pFVar2 + lVar8 * 0x30 + 8) = param_2;
  if (param_4 == Limited) {
    if (param_6->bSoftLinearLimitsEnabled == false) {
      dVar11 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
      *(double *)(pFVar2 + lVar8 * 0x30 + 0x10) = dVar11;
      *(double *)(pFVar2 + lVar8 * 0x30 + 0x20) = param_6->LinearLimit;
    }
    else {
      dVar11 = FPBDJointUtilities::GetSoftLinearStiffness(param_5,param_6);
      *(double *)(pFVar2 + lVar8 * 0x30 + 0x10) = dVar11;
      dVar11 = FPBDJointUtilities::GetSoftLinearDamping(param_5,param_6);
      *(double *)(pFVar2 + lVar8 * 0x30 + 0x18) = dVar11;
      FVar5 = (FScriptContainerElement)
              FPBDJointUtilities::GetLinearSoftAccelerationMode(param_5,param_6);
      pFVar2[lVar8 * 0x30 + 0x28] = FVar5;
      pFVar2[lVar8 * 0x30 + 0x29] = (FScriptContainerElement)0x1;
      *(double *)(pFVar2 + lVar8 * 0x30 + 0x20) = param_6->LinearLimit;
    }
  }
  else if (param_4 == Locked) {
    dVar11 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
    *(double *)(pFVar2 + lVar8 * 0x30 + 0x10) = dVar11;
    *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x20) = 0;
  }
  else {
    *(undefined8 *)(pFVar2 + lVar8 * 0x30 + 0x10) = 0;
    *(double *)(pFVar2 + lVar8 * 0x30 + 0x20) = dVar11;
  }
  return;
}

// AddPlanarPositionConstraint @ 143b85800

void __thiscall
Chaos::FJointSolverConstraints::AddPlanarPositionConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,EJointMotionType param_3,FPBDJointSolverSettings *param_4,
          FPBDJointSettings *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  this->LinearRowIndexEnd = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar7) = 4;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(double *)(pFVar1 + lVar7 + 0x20) = param_5->LinearLimit;
  if ((param_3 == Limited) && (param_5->bSoftLinearLimitsEnabled != false)) {
    dVar8 = FPBDJointUtilities::GetSoftLinearStiffness(param_4,param_5);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
    dVar8 = FPBDJointUtilities::GetSoftLinearDamping(param_4,param_5);
    *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
    FVar4 = (FScriptContainerElement)
            FPBDJointUtilities::GetLinearSoftAccelerationMode(param_4,param_5);
    pFVar1[lVar7 + 0x28] = FVar4;
    pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  }
  else {
    dVar8 = FPBDJointUtilities::GetLinearStiffness(param_4,param_5);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  }
  return;
}

// AddPointPositionConstraint @ 143b85960

void __thiscall
Chaos::FJointSolverConstraints::AddPointPositionConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar4 = param_1->ArrayNum;
  if (uVar4 == param_1->ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar4 + 1;
  lVar7 = (longlong)(int)uVar4 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  this->LinearRowIndexEnd = uVar4 + 1;
  uVar6 = 0;
  if ((int)uVar4 < param_1->ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar7) = 1;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  dVar8 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(undefined4 *)(pFVar1 + lVar7 + 8) = 0;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  uVar4 = param_1->ArrayNum;
  if (uVar4 == param_1->ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar4 + 1;
  lVar7 = (longlong)(int)uVar4 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>
            ((param_1->AllocatorInstance).Data + lVar7,1);
  this->LinearRowIndexEnd = uVar4 + 1;
  uVar6 = 0;
  if ((int)uVar4 < param_1->ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar7) = 1;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  dVar8 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(undefined4 *)(pFVar1 + lVar7 + 8) = 1;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  uVar4 = param_1->ArrayNum;
  if (uVar4 == param_1->ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar4 + 1;
  lVar7 = (longlong)(int)uVar4 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>
            ((param_1->AllocatorInstance).Data + lVar7,1);
  this->LinearRowIndexEnd = uVar4 + 1;
  uVar6 = 0;
  if ((int)uVar4 < param_1->ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar7) = 1;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  dVar8 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  uVar4 = 0;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(undefined4 *)(pFVar1 + lVar7 + 8) = 2;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  if (bChaos_Joint_MultiDimension != 0) {
    uVar5 = param_1->ArrayNum - 3;
    uVar6 = uVar4;
    if ((int)uVar5 < param_1->ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x30 + -0x84)
         = 3;
    uVar5 = param_1->ArrayNum - 2;
    uVar6 = uVar4;
    if ((int)uVar5 < param_1->ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x30 + -0x54)
         = 0;
    uVar6 = param_1->ArrayNum - 1;
    if ((int)uVar6 < param_1->ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 0x30 + -0x24)
         = 0;
  }
  return;
}

// AddPositionConstraints @ 143b85d40

void __thiscall
Chaos::FJointSolverConstraints::AddPositionConstraints
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  EJointMotionType EVar12;
  longlong lVar13;
  double dVar14;
  
  this->PositionTolerance = param_2->PositionTolerance;
  iVar11 = param_1->ArrayNum;
  this->LinearRowIndexBegin = iVar11;
  this->LinearRowIndexEnd = iVar11;
  EVar1 = (param_3->LinearMotionTypes).field0_0x0._s_0.X;
  EVar12 = (param_3->LinearMotionTypes).field0_0x0._s_0.Y;
  EVar2 = (param_3->LinearMotionTypes).field0_0x0._s_0.Z;
  if (EVar1 == Locked) {
    if ((EVar12 == Locked) && (EVar2 == Locked)) {
      AddPointPositionConstraint(this,param_1,param_2,param_3);
      goto LAB_143b8603e;
    }
LAB_143b85f1e:
    if (EVar1 == Locked) {
      if (EVar2 != Locked) {
        if (EVar12 != Locked) goto LAB_143b85f71;
        if (EVar2 == Locked) goto LAB_143b86026;
LAB_143b85fea:
        AddCylindricalPositionConstraint(this,param_1,2,EVar2,EVar12,param_2,param_3);
        goto LAB_143b8603e;
      }
      if (EVar12 != Locked) {
        AddCylindricalPositionConstraint(this,param_1,1,EVar12,Locked,param_2,param_3);
        goto LAB_143b8603e;
      }
    }
    else {
LAB_143b85f71:
      if ((EVar12 != Limited) || (EVar2 != Limited)) goto LAB_143b85fa7;
      if (EVar1 != Limited) {
        AddCylindricalPositionConstraint(this,param_1,0,EVar1,Limited,param_2,param_3);
        goto LAB_143b8603e;
      }
    }
LAB_143b86026:
    iVar11 = 0;
    EVar12 = EVar1;
  }
  else {
    if ((EVar1 != Limited) || (EVar12 != Limited)) {
      if ((EVar12 != Locked) || (EVar2 != Locked)) goto LAB_143b85f1e;
      if (EVar1 != Locked) {
        AddCylindricalPositionConstraint(this,param_1,0,EVar1,Locked,param_2,param_3);
        goto LAB_143b8603e;
      }
      goto LAB_143b86026;
    }
    if (EVar2 == Limited) {
      uVar9 = param_1->ArrayNum;
      if (uVar9 == param_1->ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = uVar9 + 1;
      lVar13 = (longlong)(int)uVar9 * 0x30;
      DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar3 + lVar13,1);
      this->LinearRowIndexEnd = uVar9 + 1;
      uVar10 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      *(undefined4 *)(pFVar3 + lVar13) = 2;
      *(undefined4 *)(pFVar3 + lVar13 + 0xc) = 1;
      *(int *)(pFVar3 + lVar13 + 4) = this->JointIndex;
      *(double *)(pFVar3 + lVar13 + 0x20) = param_3->LinearLimit;
      if (param_3->bSoftLinearLimitsEnabled == false) {
        dVar14 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
        *(double *)(pFVar3 + lVar13 + 0x10) = dVar14;
      }
      else {
        dVar14 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
        *(double *)(pFVar3 + lVar13 + 0x10) = dVar14;
        dVar14 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
        *(double *)(pFVar3 + lVar13 + 0x18) = dVar14;
        FVar8 = (FScriptContainerElement)
                FPBDJointUtilities::GetLinearSoftAccelerationMode(param_2,param_3);
        pFVar3[lVar13 + 0x28] = FVar8;
        pFVar3[lVar13 + 0x29] = (FScriptContainerElement)0x1;
      }
      goto LAB_143b8603e;
    }
LAB_143b85fa7:
    if (EVar1 == Limited) {
      if (EVar2 == Limited) {
        if (EVar12 != Limited) {
          AddCylindricalPositionConstraint(this,param_1,1,EVar12,Limited,param_2,param_3);
          goto LAB_143b8603e;
        }
      }
      else if ((EVar12 == Limited) && (EVar2 != Limited)) goto LAB_143b85fea;
      goto LAB_143b86026;
    }
    if (EVar1 == Locked) goto LAB_143b86026;
    if (EVar12 - Limited < 2) {
      iVar11 = 1;
    }
    else {
      if (1 < EVar2 - Limited) goto LAB_143b8603e;
      iVar11 = 2;
      EVar12 = EVar2;
    }
  }
  AddPlanarPositionConstraint(this,param_1,iVar11,EVar12,param_2,param_3);
LAB_143b8603e:
  if (param_2->bEnableDrives != false) {
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.X == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.X == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Y == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Z == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar7) {
      if (bVar5) {
        if (bVar6) {
          AddPositionDrive(this,param_1,param_2,param_3,Linear_SphericalDrive,-1);
          return;
        }
        AddPositionDrive(this,param_1,param_2,param_3,Linear_CircularDrive,1);
        return;
      }
      if (bVar6) {
        AddPositionDrive(this,param_1,param_2,param_3,Linear_CircularDrive,2);
        return;
      }
      iVar11 = 0;
    }
    else if (bVar6) {
      if (bVar5) {
        AddPositionDrive(this,param_1,param_2,param_3,Linear_CircularDrive,0);
        return;
      }
      iVar11 = 1;
    }
    else {
      if (!bVar5) {
        return;
      }
      iVar11 = 2;
    }
    AddPositionDrive(this,param_1,param_2,param_3,Linear_AxialDrive,iVar11);
  }
  return;
}

// AddPositionDrive @ 143b861c0

void __thiscall
Chaos::FJointSolverConstraints::AddPositionDrive
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3,
          EJointSolverConstraintUpdateType param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  this->LinearRowIndexEnd = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(EJointSolverConstraintUpdateType *)(pFVar1 + lVar7) = param_4;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(int *)(pFVar1 + lVar7 + 8) = param_5;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  dVar8 = FPBDJointUtilities::GetLinearDriveStiffness(param_2,param_3,param_5);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  dVar8 = FPBDJointUtilities::GetLinearDriveDamping(param_2,param_3,param_5);
  *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
  FVar4 = (FScriptContainerElement)
          FPBDJointUtilities::GetLinearDriveAccelerationMode(param_2,param_3);
  pFVar1[lVar7 + 0x28] = FVar4;
  pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  return;
}

// AddRotationConstraints @ 143b86310

void __thiscall
Chaos::FJointSolverConstraints::AddRotationConstraints
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  int iVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement FVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  EJointSolverConstraintUpdateType EVar14;
  EJointAngularConstraintIndex EVar15;
  EJointAngularConstraintIndex EVar16;
  
  this->AngleTolerance = param_2->AngleTolerance;
  iVar1 = param_1->ArrayNum;
  this->AngularRowIndexBegin = iVar1;
  this->AngularRowIndexEnd = iVar1;
  EVar2 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  EVar3 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar4 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  if (param_2->bEnableTwistLimits != false) {
    if (EVar2 == Limited) {
      bVar7 = param_3->bSoftTwistLimitsEnabled;
      EVar14 = Angular_Twist;
    }
    else {
      if (EVar2 != Locked) goto LAB_143b86399;
      bVar7 = false;
      EVar14 = Angular_Locked;
    }
    AddTwistConstraint(this,param_1,param_2,param_3,EVar14,bVar7);
  }
LAB_143b86399:
  if (param_2->bEnableSwingLimits == false) goto LAB_143b8651e;
  bVar7 = param_3->bSoftSwingLimitsEnabled;
  if (EVar3 == Limited) {
    if (EVar4 == Limited) {
      EVar15 = Swing1;
      EVar14 = Angular_Cone;
    }
    else if (EVar4 == Locked) {
      AddSwingConstraint(this,param_1,param_2,param_3,Angular_SingleLockedSwing,Swing2,false);
      EVar15 = Swing1;
      EVar14 = Angular_SingleLimitedSwing;
    }
    else {
      if (EVar4 != Free) goto LAB_143b8651e;
      EVar15 = Swing1;
      EVar14 = Angular_DualConeSwing;
    }
LAB_143b8650d:
    AddSwingConstraint(this,param_1,param_2,param_3,EVar14,EVar15,bVar7);
  }
  else {
    if (EVar3 == Locked) {
      if (EVar4 == Limited) {
        AddSwingConstraint(this,param_1,param_2,param_3,Angular_SingleLockedSwing,Swing1,false);
        EVar15 = Swing2;
        EVar14 = Angular_SingleLimitedSwing;
      }
      else if (EVar4 == Locked) {
        AddSwingConstraint(this,param_1,param_2,param_3,Angular_Locked,Swing1,false);
        bVar7 = false;
        EVar15 = Swing2;
        EVar14 = Angular_Locked;
      }
      else {
        if (EVar4 != Free) goto LAB_143b8651e;
        EVar15 = Swing1;
LAB_143b86505:
        bVar7 = false;
        EVar14 = Angular_SingleLockedSwing;
      }
      goto LAB_143b8650d;
    }
    if (EVar3 == Free) {
      if (EVar4 == Limited) {
        EVar15 = Swing2;
        EVar14 = Angular_DualConeSwing;
        goto LAB_143b8650d;
      }
      if (EVar4 == Locked) {
        EVar15 = Swing2;
        goto LAB_143b86505;
      }
    }
  }
LAB_143b8651e:
  if (param_2->bEnableDrives == false) goto LAB_143b867b9;
  if ((((param_3->bAngularSLerpPositionDriveEnabled != false) ||
       (param_3->bAngularSLerpVelocityDriveEnabled != false)) && (EVar2 != Locked)) &&
     ((EVar3 != Locked && (EVar4 != Locked)))) {
    uVar9 = param_1->ArrayNum;
    if (uVar9 == param_1->ArrayMax) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = uVar9 + 1;
    lVar12 = (longlong)(int)uVar9 * 0x30;
    DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar5 + lVar12,1);
    uVar10 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    this->AngularRowIndexEnd = uVar9 + 1;
    *(int *)(pFVar5 + lVar12 + 4) = this->JointIndex;
    *(undefined4 *)(pFVar5 + lVar12) = 0x11;
    *(undefined4 *)(pFVar5 + lVar12 + 0xc) = 1;
    *(undefined8 *)(pFVar5 + lVar12 + 0x20) = 0;
    dVar13 = FPBDJointUtilities::GetAngularSLerpDriveStiffness(param_2,param_3);
    *(double *)(pFVar5 + lVar12 + 0x10) = dVar13;
    dVar13 = FPBDJointUtilities::GetAngularSLerpDriveDamping(param_2,param_3);
    *(double *)(pFVar5 + lVar12 + 0x18) = dVar13;
    FVar8 = (FScriptContainerElement)
            FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
    pFVar5[lVar12 + 0x28] = FVar8;
    pFVar5[lVar12 + 0x29] = (FScriptContainerElement)0x1;
    goto LAB_143b867b9;
  }
  if (((param_3->bAngularTwistPositionDriveEnabled != false) ||
      (param_3->bAngularTwistVelocityDriveEnabled != false)) && (EVar2 != Locked)) {
    uVar9 = param_1->ArrayNum;
    if (uVar9 == param_1->ArrayMax) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    param_1->ArrayNum = uVar9 + 1;
    lVar12 = (longlong)(int)uVar9 * 0x30;
    DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar5 + lVar12,1);
    uVar10 = 0;
    if ((int)uVar9 < param_1->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = (param_1->AllocatorInstance).Data;
    this->AngularRowIndexEnd = uVar9 + 1;
    *(int *)(pFVar5 + lVar12 + 4) = this->JointIndex;
    *(undefined4 *)(pFVar5 + lVar12) = 0xe;
    *(undefined4 *)(pFVar5 + lVar12 + 0xc) = 1;
    *(undefined8 *)(pFVar5 + lVar12 + 0x20) = 0;
    dVar13 = FPBDJointUtilities::GetAngularTwistDriveStiffness(param_2,param_3);
    *(double *)(pFVar5 + lVar12 + 0x10) = dVar13;
    dVar13 = FPBDJointUtilities::GetAngularTwistDriveDamping(param_2,param_3);
    *(double *)(pFVar5 + lVar12 + 0x18) = dVar13;
    FVar8 = (FScriptContainerElement)
            FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
    pFVar5[lVar12 + 0x28] = FVar8;
    pFVar5[lVar12 + 0x29] = (FScriptContainerElement)0x1;
  }
  if ((param_3->bAngularSwingPositionDriveEnabled == false) &&
     (param_3->bAngularSwingVelocityDriveEnabled == false)) goto LAB_143b867b9;
  if (EVar3 == Locked) {
    if (EVar4 == Locked) goto LAB_143b867b9;
    EVar15 = Swing2;
LAB_143b867ac:
    EVar16 = EVar15;
    EVar14 = Angular_SwingDrive;
  }
  else {
    EVar16 = Swing1;
    EVar15 = Swing1;
    if (EVar4 == Locked) goto LAB_143b867ac;
    EVar14 = Angular_ConeDrive;
  }
  AddSwingDrive(this,param_1,param_2,param_3,EVar14,EVar16);
LAB_143b867b9:
  uVar11 = (ulonglong)this->AngularRowIndexBegin;
  this->bNeedSwingTwist = false;
  this->bNeedLockedAxes = false;
  if (this->AngularRowIndexBegin < this->AngularRowIndexEnd) {
    lVar12 = uVar11 * 0x30;
    do {
      uVar10 = (uint)uVar11;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar1 = *(int *)((param_1->AllocatorInstance).Data + lVar12);
      if (((iVar1 == 8) || (iVar1 == 9)) || (iVar1 == 0xb)) {
        this->bNeedSwingTwist = true;
      }
      else if (iVar1 == 0xd) {
        this->bNeedLockedAxes = true;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      lVar12 = lVar12 + 0x30;
    } while ((int)(uVar10 + 1) < this->AngularRowIndexEnd);
  }
  return;
}

// AddSLerpDrive @ 143b86880

void __thiscall
Chaos::FJointSolverConstraints::AddSLerpDrive
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  this->AngularRowIndexEnd = uVar5 + 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(undefined4 *)(pFVar1 + lVar7) = 0x11;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  dVar8 = FPBDJointUtilities::GetAngularSLerpDriveStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  dVar8 = FPBDJointUtilities::GetAngularSLerpDriveDamping(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
  FVar4 = (FScriptContainerElement)
          FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  pFVar1[lVar7 + 0x28] = FVar4;
  pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  return;
}

// AddSphericalPositionConstraint @ 143b869b0

void __thiscall
Chaos::FJointSolverConstraints::AddSphericalPositionConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  this->LinearRowIndexEnd = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(undefined4 *)(pFVar1 + lVar7) = 2;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(double *)(pFVar1 + lVar7 + 0x20) = param_3->LinearLimit;
  if (param_3->bSoftLinearLimitsEnabled == false) {
    dVar8 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  }
  else {
    dVar8 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
    dVar8 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
    FVar4 = (FScriptContainerElement)
            FPBDJointUtilities::GetLinearSoftAccelerationMode(param_2,param_3);
    pFVar1[lVar7 + 0x28] = FVar4;
    pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  }
  return;
}

// AddSwingConstraint @ 143b86b00

void __thiscall
Chaos::FJointSolverConstraints::AddSwingConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3,
          EJointSolverConstraintUpdateType param_4,EJointAngularConstraintIndex param_5,bool param_6
          )

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  this->AngularRowIndexEnd = uVar5 + 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(EJointSolverConstraintUpdateType *)(pFVar1 + lVar7) = param_4;
  *(EJointAngularConstraintIndex *)(pFVar1 + lVar7 + 8) = param_5;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  if (Swing1 < param_5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(double *)(pFVar1 + lVar7 + 0x20) =
       *(double *)
        ((longlong)(&param_3->ConnectorTransforms + 1) + ((longlong)(int)param_5 + 0xd) * 8);
  if (param_6) {
    dVar8 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
    dVar8 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
    FVar4 = (FScriptContainerElement)
            FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
    pFVar1[lVar7 + 0x28] = FVar4;
    pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  }
  else {
    dVar8 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  }
  return;
}

// AddSwingDrive @ 143b86c90

void __thiscall
Chaos::FJointSolverConstraints::AddSwingDrive
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3,
          EJointSolverConstraintUpdateType param_4,EJointAngularConstraintIndex param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  this->AngularRowIndexEnd = uVar5 + 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(EJointSolverConstraintUpdateType *)(pFVar1 + lVar7) = param_4;
  *(EJointAngularConstraintIndex *)(pFVar1 + lVar7 + 8) = param_5;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  dVar8 = FPBDJointUtilities::GetAngularSwingDriveStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  dVar8 = FPBDJointUtilities::GetAngularSwingDriveDamping(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
  FVar4 = (FScriptContainerElement)
          FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  pFVar1[lVar7 + 0x28] = FVar4;
  pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  return;
}

// AddTwistConstraint @ 143b86dd0

void __thiscall
Chaos::FJointSolverConstraints::AddTwistConstraint
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3,
          EJointSolverConstraintUpdateType param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  this->AngularRowIndexEnd = uVar5 + 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(EJointSolverConstraintUpdateType *)(pFVar1 + lVar7) = param_4;
  *(undefined4 *)(pFVar1 + lVar7 + 8) = 0;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = *(undefined8 *)&param_3->AngularLimits;
  if (param_5) {
    dVar8 = FPBDJointUtilities::GetSoftTwistStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
    dVar8 = FPBDJointUtilities::GetSoftTwistDamping(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
    FVar4 = (FScriptContainerElement)
            FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
    pFVar1[lVar7 + 0x28] = FVar4;
    pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  }
  else {
    dVar8 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
    *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  }
  return;
}

// AddTwistDrive @ 143b86f30

void __thiscall
Chaos::FJointSolverConstraints::AddTwistDrive
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          FPBDJointSolverSettings *param_2,FPBDJointSettings *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  double dVar8;
  
  uVar5 = param_1->ArrayNum;
  if (uVar5 == param_1->ArrayMax) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = uVar5 + 1;
  lVar7 = (longlong)(int)uVar5 * 0x30;
  DefaultConstructItems<Chaos::FJointSolverConstraintRowData,int>(pFVar1 + lVar7,1);
  uVar6 = 0;
  if ((int)uVar5 < param_1->ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  this->AngularRowIndexEnd = uVar5 + 1;
  *(int *)(pFVar1 + lVar7 + 4) = this->JointIndex;
  *(undefined4 *)(pFVar1 + lVar7) = 0xe;
  *(undefined4 *)(pFVar1 + lVar7 + 0xc) = 1;
  *(undefined8 *)(pFVar1 + lVar7 + 0x20) = 0;
  dVar8 = FPBDJointUtilities::GetAngularTwistDriveStiffness(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x10) = dVar8;
  dVar8 = FPBDJointUtilities::GetAngularTwistDriveDamping(param_2,param_3);
  *(double *)(pFVar1 + lVar7 + 0x18) = dVar8;
  FVar4 = (FScriptContainerElement)
          FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  pFVar1[lVar7 + 0x28] = FVar4;
  pFVar1[lVar7 + 0x29] = (FScriptContainerElement)0x1;
  return;
}

// UpdatePositionConstraints @ 143bb05c0

void __thiscall
Chaos::FJointSolverConstraints::UpdatePositionConstraints
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FJointSolverConstraintRowState,TSizedDefaultAllocator<32>_> *param_2,
          FJointSolverJointState *param_3,FPBDJointSettings *param_4)

{
  TVector<double,3> *pTVar1;
  TVector<double,3> *pTVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 unaff_XMM6 [16];
  uint uVar26;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  longlong local_240;
  longlong local_238;
  FScriptContainerElement *local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  TVector<double,3> local_1b0;
  TVector<double,3> local_198;
  TVector<double,3> local_180;
  TVector<double,3> local_168;
  TVector<double,3> local_150;
  TVector<double,3> local_138 [2];
  double local_108;
  TVector<double,3> local_f8 [7];
  
  local_268 = *(double *)param_3->Rs;
  dStack_260 = *(double *)&param_3->Rs[0].field_0x8;
  uVar17 = (ulonglong)this->LinearRowIndexBegin;
  pTVar1 = param_3->Xs + 1;
  local_258 = *(double *)&param_3->Rs[0].field_0x10;
  dStack_250 = *(double *)&param_3->Rs[0].field_0x18;
  pTVar2 = param_3->Xs;
  iVar10 = this->LinearRowIndexEnd;
  if (this->LinearRowIndexBegin < iVar10) {
    lVar13 = uVar17 * 0x88;
    do {
      uVar15 = (uint)uVar17;
      uVar12 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar19 = (param_2->AllocatorInstance).Data;
      uVar17 = (ulonglong)(uVar15 + 1);
      *(undefined8 *)(pFVar19 + lVar13) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 8) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x10) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x18) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x20) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x28) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x30) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x38) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x40) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x48) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x50) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x58) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x60) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x68) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x70) = 0;
      *(undefined8 *)(pFVar19 + lVar13 + 0x78) = 0;
      lVar13 = lVar13 + 0x88;
      iVar10 = this->LinearRowIndexEnd;
    } while ((int)(uVar15 + 1) < iVar10);
  }
  dVar8 = __real_3f1a36e2e0000000;
  dVar7 = __real_3ff0000000000000;
  uVar12 = this->LinearRowIndexBegin;
  if ((int)uVar12 < iVar10) {
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    do {
      uVar16 = ~uVar12 >> 0x1f;
      uVar20 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar20 = uVar16;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar13 = (longlong)(int)uVar12;
      switch(*(undefined4 *)((param_1->AllocatorInstance).Data + lVar13 * 0x30)) {
      case 1:
        dVar23 = *(double *)&param_3->Xs[1].field_0x10 - *(double *)&param_3->Xs[0].field_0x10;
        dVar3 = *(double *)&param_3->Xs[1].field_0x8 - *(double *)&param_3->Xs[0].field_0x8;
        dVar24 = *(double *)pTVar1 - *(double *)pTVar2;
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar11 = lVar13 * 0x88;
        *(undefined8 *)(pFVar19 + lVar11 + 0x60) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar19 + lVar11 + 0x68) = 0;
        *(undefined8 *)(pFVar19 + lVar11 + 0x70) = 0;
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar25 = *(double *)((param_1->AllocatorInstance).Data + lVar13 * 0x30 + 0x20);
        *(undefined8 *)(pFVar19 + lVar11 + 0x78) = 0;
        if (dVar24 < dVar25) {
          uVar20 = SUB84(dVar25,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar25 >> 0x20) ^ uVar26;
          if (dVar24 < (double)CONCAT44(uVar16,uVar20) || dVar24 == (double)CONCAT44(uVar16,uVar20))
          {
            dVar24 = dVar24 + dVar25;
            goto LAB_143bb0946;
          }
        }
        else {
          dVar24 = dVar24 - dVar25;
LAB_143bb0946:
          *(double *)(pFVar19 + lVar11 + 0x78) = dVar24;
        }
        unaff_XMM6._8_8_ = 0;
        unaff_XMM6._0_8_ = dVar24;
        uVar20 = uVar12 + 1;
        uVar18 = ~uVar20 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar13 = (longlong)(int)uVar20 * 0x88;
        *(undefined8 *)(pFVar19 + lVar13 + 0x60) = 0;
        *(undefined8 *)(pFVar19 + lVar13 + 0x68) = 0x3ff0000000000000;
        *(undefined8 *)(pFVar19 + lVar13 + 0x70) = 0;
        uVar16 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        uVar16 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar24 = *(double *)
                  ((param_1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x30 + 0x20);
        *(undefined8 *)(pFVar19 + lVar13 + 0x78) = 0;
        if (dVar3 < dVar24) {
          uVar20 = SUB84(dVar24,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar24 >> 0x20) ^ uVar26;
          if (dVar3 < (double)CONCAT44(uVar16,uVar20) || dVar3 == (double)CONCAT44(uVar16,uVar20)) {
            dVar3 = dVar3 + dVar24;
            goto LAB_143bb0a8c;
          }
        }
        else {
          dVar3 = dVar3 - dVar24;
LAB_143bb0a8c:
          *(double *)(pFVar19 + lVar13 + 0x78) = dVar3;
        }
        uVar20 = uVar12 + 2;
        uVar18 = ~uVar20 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar13 = (longlong)(int)uVar20 * 0x88;
        *(undefined8 *)(pFVar19 + lVar13 + 0x60) = 0;
        *(undefined8 *)(pFVar19 + lVar13 + 0x68) = 0;
        *(undefined8 *)(pFVar19 + lVar13 + 0x70) = 0x3ff0000000000000;
        uVar16 = 0;
        if ((int)uVar20 < param_2->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        uVar16 = 0;
        if ((int)uVar20 < param_1->ArrayNum) {
          uVar16 = uVar18;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar3 = *(double *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x30 + 0x20)
        ;
        *(undefined8 *)(pFVar19 + lVar13 + 0x78) = 0;
        if (dVar23 < dVar3) {
          uVar20 = SUB84(dVar3,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
          if (dVar23 < (double)CONCAT44(uVar16,uVar20) || dVar23 == (double)CONCAT44(uVar16,uVar20))
          {
            *(double *)(pFVar19 + lVar13 + 0x78) = dVar23 + dVar3;
          }
          uVar12 = uVar12 + 3;
        }
        else {
          uVar12 = uVar12 + 3;
          *(double *)(pFVar19 + lVar13 + 0x78) = dVar23 - dVar3;
        }
        break;
      case 2:
        dVar24 = *(double *)&param_3->Xs[1].field_0x8 - *(double *)&param_3->Xs[0].field_0x8;
        dVar3 = *(double *)pTVar1 - *(double *)pTVar2;
        dVar23 = *(double *)&param_3->Xs[1].field_0x10 - *(double *)&param_3->Xs[0].field_0x10;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar3 * dVar3 + dVar24 * dVar24 + dVar23 * dVar23;
        unaff_XMM6 = sqrtpd(unaff_XMM6,auVar5);
        dVar25 = unaff_XMM6._0_8_;
        if (dVar25 <= dVar8) {
LAB_143bb0d9a:
          uVar12 = uVar12 + 1;
        }
        else {
          dVar6 = dVar7 / dVar25;
          uVar20 = 0;
          if ((int)uVar12 < param_2->ArrayNum) {
            uVar20 = uVar16;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = (param_2->AllocatorInstance).Data;
          lVar11 = lVar13 * 0x88;
          *(double *)(pFVar19 + lVar11 + 0x60) = dVar3 * dVar6;
          *(double *)(pFVar19 + lVar11 + 0x68) = dVar6 * dVar24;
          *(double *)(pFVar19 + lVar11 + 0x70) = dVar6 * dVar23;
          uVar20 = 0;
          if ((int)uVar12 < param_2->ArrayNum) {
            uVar20 = uVar16;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar19 = (param_2->AllocatorInstance).Data;
          uVar20 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar20 = uVar16;
          }
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar3 = *(double *)((param_1->AllocatorInstance).Data + lVar13 * 0x30 + 0x20);
          *(undefined8 *)(pFVar19 + lVar11 + 0x78) = 0;
          if (dVar25 < dVar3) {
            uVar20 = SUB84(dVar3,0) ^ uVar15;
            uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
            if ((double)CONCAT44(uVar16,uVar20) <= dVar25 &&
                dVar25 != (double)CONCAT44(uVar16,uVar20)) goto LAB_143bb0d9a;
            uVar12 = uVar12 + 1;
            *(double *)(pFVar19 + lVar11 + 0x78) = dVar3 + dVar25;
          }
          else {
            unaff_XMM6._0_8_ = dVar25 - dVar3;
            uVar12 = uVar12 + 1;
            *(double *)(pFVar19 + lVar11 + 0x78) = unaff_XMM6._0_8_;
          }
        }
        break;
      case 3:
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        uVar18 = ~(uVar12 + 1) >> 0x1f;
        uVar20 = 0;
        if ((int)(uVar12 + 1) < param_1->ArrayNum) {
          uVar20 = uVar18;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_240 = (longlong)(int)(uVar12 + 1);
        local_230 = (param_1->AllocatorInstance).Data;
        local_238 = local_240 * 0x30;
        if ((*(int *)(local_230 + local_238) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("RadialData.UpdateType == EJointSolverConstraintUpdateType::None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\JointSolverConstraints.inl"
                               ,0xec,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FPBDJointUtilities::GetCylindricalAxesDeltas
                  ((TRotation<double,3> *)&local_268,pTVar2,pTVar1,
                   *(int *)(pFVar19 + lVar13 * 0x30 + 8),&local_1b0,&local_248,&local_198,&local_228
                  );
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data;
        lVar11 = lVar13 * 0x88;
        *(undefined8 *)(pFVar14 + lVar11 + 0x60) = local_1b0._0_8_;
        *(undefined8 *)(pFVar14 + lVar11 + 0x60 + 8) = local_1b0._8_8_;
        *(undefined8 *)(pFVar14 + lVar11 + 0x70) = local_1b0._16_8_;
        dVar3 = *(double *)(pFVar19 + lVar13 * 0x30 + 0x20);
        *(undefined8 *)(pFVar14 + lVar11 + 0x78) = 0;
        if (local_248 < dVar3) {
          uVar20 = SUB84(dVar3,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
          if (local_248 < (double)CONCAT44(uVar16,uVar20) ||
              local_248 == (double)CONCAT44(uVar16,uVar20)) {
            *(double *)(pFVar14 + lVar11 + 0x78) = dVar3 + local_248;
          }
        }
        else {
          *(double *)(pFVar14 + lVar11 + 0x78) = local_248 - dVar3;
        }
        uVar20 = 0;
        if ((int)(uVar12 + 1) < param_2->ArrayNum) {
          uVar20 = uVar18;
        }
        lVar13 = local_240;
        if (uVar20 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          lVar13 = (longlong)(int)(uVar12 + 1);
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar13 = lVar13 * 0x88;
        *(undefined8 *)(pFVar19 + lVar13 + 0x60) = local_198._0_8_;
        *(undefined8 *)(pFVar19 + lVar13 + 0x60 + 8) = local_198._8_8_;
        *(undefined8 *)(pFVar19 + lVar13 + 0x70) = local_198._16_8_;
        dVar3 = *(double *)(local_230 + local_238 + 0x20);
        *(undefined8 *)(pFVar19 + lVar13 + 0x78) = 0;
        if (local_228 < dVar3) {
          uVar20 = SUB84(dVar3,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
          if (local_228 < (double)CONCAT44(uVar16,uVar20) ||
              local_228 == (double)CONCAT44(uVar16,uVar20)) {
            *(double *)(pFVar19 + lVar13 + 0x78) = local_228 + dVar3;
          }
          uVar12 = uVar12 + 2;
        }
        else {
          uVar12 = uVar12 + 2;
          *(double *)(pFVar19 + lVar13 + 0x78) = local_228 - dVar3;
        }
        break;
      case 4:
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        FPBDJointUtilities::GetPlanarAxisDelta
                  ((TRotation<double,3> *)&local_268,pTVar2,pTVar1,
                   *(int *)(pFVar19 + lVar13 * 0x30 + 8),&local_180,&local_220);
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (param_2->AllocatorInstance).Data;
        lVar11 = lVar13 * 0x88;
        *(undefined8 *)(pFVar14 + lVar11 + 0x60) = local_180._0_8_;
        *(undefined8 *)(pFVar14 + lVar11 + 0x60 + 8) = local_180._8_8_;
        *(undefined8 *)(pFVar14 + lVar11 + 0x70) = local_180._16_8_;
        dVar3 = *(double *)(pFVar19 + lVar13 * 0x30 + 0x20);
        *(undefined8 *)(pFVar14 + lVar11 + 0x78) = 0;
        if (local_220 < dVar3) {
          uVar20 = SUB84(dVar3,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
          if (local_220 < (double)CONCAT44(uVar16,uVar20) ||
              local_220 == (double)CONCAT44(uVar16,uVar20)) {
            *(double *)(pFVar14 + lVar11 + 0x78) = local_220 + dVar3;
          }
          uVar12 = uVar12 + 1;
        }
        else {
          uVar12 = uVar12 + 1;
          *(double *)(pFVar14 + lVar11 + 0x78) = local_220 - dVar3;
        }
        break;
      case 5:
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        unaff_XMM6 = *(undefined1 (*) [16])&param_4->LinearDrivePositionTarget;
        local_108 = *(double *)&(param_4->LinearDrivePositionTarget).field_0x10;
        pFVar14 = (param_2->AllocatorInstance).Data;
        dVar24 = unaff_XMM6._0_8_;
        dVar3 = unaff_XMM6._8_8_;
        dVar6 = local_108 * dStack_260 - dVar3 * local_258;
        dVar6 = dVar6 + dVar6;
        dVar25 = dVar24 * local_258 - local_108 * local_268;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar3 * local_268 - dVar24 * dStack_260;
        dVar23 = dVar23 + dVar23;
        local_200 = (dVar23 * dStack_260 - dVar25 * local_258) + dVar6 * dStack_250 + dVar24 +
                    *(double *)pTVar2;
        local_1f8 = (dVar6 * local_258 - dVar23 * local_268) + dVar25 * dStack_250 + dVar3 +
                    *(double *)&param_3->Xs[0].field_0x8;
        local_1f0 = (dVar25 * local_268 - dVar6 * dStack_260) + dVar23 * dStack_250 + local_108 +
                    *(double *)&param_3->Xs[0].field_0x10;
        FPBDJointUtilities::GetSphericalAxisDelta
                  ((TVector<double,3> *)&local_200,pTVar1,&local_168,&local_218);
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60) = local_168._0_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60 + 8) = local_168._8_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x70) = local_168._16_8_;
        uVar21 = SUB84(local_218,0);
        uVar22 = (undefined4)((ulonglong)local_218 >> 0x20);
        goto LAB_143bb130d;
      case 6:
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        unaff_XMM6 = *(undefined1 (*) [16])&param_4->LinearDrivePositionTarget;
        local_108 = *(double *)&(param_4->LinearDrivePositionTarget).field_0x10;
        pFVar14 = (param_2->AllocatorInstance).Data;
        dVar24 = unaff_XMM6._0_8_;
        dVar3 = unaff_XMM6._8_8_;
        dVar6 = local_108 * dStack_260 - dVar3 * local_258;
        dVar6 = dVar6 + dVar6;
        dVar25 = dVar24 * local_258 - local_108 * local_268;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar3 * local_268 - dVar24 * dStack_260;
        dVar23 = dVar23 + dVar23;
        local_1e8 = (dVar23 * dStack_260 - dVar25 * local_258) + dVar6 * dStack_250 + dVar24 +
                    *(double *)pTVar2;
        local_1e0 = (dVar6 * local_258 - dVar23 * local_268) + dVar25 * dStack_250 + dVar3 +
                    *(double *)&param_3->Xs[0].field_0x8;
        local_1d8 = (dVar25 * local_268 - dVar6 * dStack_260) + dVar23 * dStack_250 + local_108 +
                    *(double *)&param_3->Xs[0].field_0x10;
        FPBDJointUtilities::GetCylindricalAxesDeltas
                  ((TRotation<double,3> *)&local_268,(TVector<double,3> *)&local_1e8,pTVar1,
                   *(int *)(pFVar19 + lVar13 * 0x30 + 8),local_f8,&local_1b8,&local_150,&local_210);
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60) = local_150._0_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60 + 8) = local_150._8_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x70) = local_150._16_8_;
        uVar21 = SUB84(local_210,0);
        uVar22 = (undefined4)((ulonglong)local_210 >> 0x20);
        goto LAB_143bb130d;
      case 7:
        uVar20 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        uVar20 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar20 = uVar16;
        }
        if ((uVar20 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        unaff_XMM6 = *(undefined1 (*) [16])&param_4->LinearDrivePositionTarget;
        local_108 = *(double *)&(param_4->LinearDrivePositionTarget).field_0x10;
        pFVar14 = (param_2->AllocatorInstance).Data;
        dVar24 = unaff_XMM6._0_8_;
        dVar3 = unaff_XMM6._8_8_;
        dVar6 = local_108 * dStack_260 - dVar3 * local_258;
        dVar6 = dVar6 + dVar6;
        dVar25 = dVar24 * local_258 - local_108 * local_268;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar3 * local_268 - dVar24 * dStack_260;
        dVar23 = dVar23 + dVar23;
        local_1d0 = (dStack_260 * dVar23 - dVar25 * local_258) + dVar6 * dStack_250 + dVar24 +
                    *(double *)pTVar2;
        local_1c8 = (dVar6 * local_258 - local_268 * dVar23) + dVar25 * dStack_250 + dVar3 +
                    *(double *)&param_3->Xs[0].field_0x8;
        local_1c0 = (dVar25 * local_268 - dVar6 * dStack_260) + dStack_250 * dVar23 + local_108 +
                    *(double *)&param_3->Xs[0].field_0x10;
        FPBDJointUtilities::GetPlanarAxisDelta
                  ((TRotation<double,3> *)&local_268,(TVector<double,3> *)&local_1d0,pTVar1,
                   *(int *)(pFVar19 + lVar13 * 0x30 + 8),local_138,&local_208);
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60) = local_138[0]._0_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x60 + 8) = local_138[0]._8_8_;
        *(undefined8 *)(pFVar14 + lVar13 * 0x88 + 0x70) = local_138[0]._16_8_;
        uVar21 = SUB84(local_208,0);
        uVar22 = (undefined4)((ulonglong)local_208 >> 0x20);
LAB_143bb130d:
        lVar11 = lVar13 * 0x88;
        dVar3 = *(double *)(pFVar19 + lVar13 * 0x30 + 0x20);
        *(undefined8 *)(pFVar14 + lVar11 + 0x78) = 0;
        if ((double)CONCAT44(uVar22,uVar21) < dVar3) {
          uVar20 = SUB84(dVar3,0) ^ uVar15;
          uVar16 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar26;
          if ((double)CONCAT44(uVar22,uVar21) < (double)CONCAT44(uVar16,uVar20) ||
              (double)CONCAT44(uVar22,uVar21) == (double)CONCAT44(uVar16,uVar20)) {
            *(double *)(pFVar14 + lVar11 + 0x78) = (double)CONCAT44(uVar22,uVar21) + dVar3;
          }
          uVar12 = uVar12 + 1;
        }
        else {
          uVar12 = uVar12 + 1;
          *(double *)(pFVar14 + lVar11 + 0x78) = (double)CONCAT44(uVar22,uVar21) - dVar3;
        }
      }
    } while ((int)uVar12 < this->LinearRowIndexEnd);
  }
  return;
}

// UpdateRotationConstraints @ 143bb1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FJointSolverConstraints::UpdateRotationConstraints
          (FJointSolverConstraints *this,
          TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::FJointSolverConstraintRowState,TSizedDefaultAllocator<32>_> *param_2,
          FJointSolverJointState *param_3,FPBDJointSettings *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar39;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined8 uVar40;
  undefined1 extraout_XMM0_02 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 extraout_XMM0_04 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar50;
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar61;
  undefined4 uVar62;
  uint uVar63;
  undefined4 uVar64;
  uint uVar65;
  uint uVar66;
  double dVar67;
  undefined1 auVar68 [16];
  double dVar69;
  uint uVar70;
  uint uVar71;
  double dVar73;
  undefined1 auVar72 [16];
  undefined1 auStackY_458 [32];
  double dStack_420;
  double local_408 [2];
  TQuat<double> local_3f8;
  TQuat<double> local_3d8;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined8 local_398;
  TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  TVector<double>_u_0 local_350;
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  double local_248;
  double local_240;
  TVector<double> local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  undefined1 local_1e8 [2] [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [24];
  undefined1 auStack_130 [24];
  undefined1 local_118 [16];
  undefined8 local_108;
  ulonglong local_f8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_458;
  dVar24 = 0.0;
  local_3f8.Z = *(double *)&param_3->Rs[1].field_0x10;
  local_3f8.W = *(double *)&param_3->Rs[1].field_0x18;
  local_3f8.X = *(double *)(param_3->Rs + 1);
  local_3f8.Y = *(double *)&param_3->Rs[1].field_0x8;
  local_3d8.X = *(double *)param_3->Rs;
  local_3d8.Y = *(double *)&param_3->Rs[0].field_0x8;
  local_3d8.Z = *(double *)&param_3->Rs[0].field_0x10;
  local_3d8.W = *(double *)&param_3->Rs[0].field_0x18;
  uVar70 = SUB84(__real_3ff0000000000000,0);
  uVar71 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar49 = local_3d8.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = local_3d8.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar54._8_4_ = SUB84(dVar5,0);
  auVar54._0_8_ = dVar49;
  auVar54._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar4 = local_3d8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar42 = local_3d8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar67 = 0.0;
  auVar43._8_4_ = SUB84(dVar42,0);
  auVar43._0_8_ = dVar42;
  auVar43._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  auVar55._8_4_ = SUB84(dVar49,0);
  auVar55._0_8_ = dVar49;
  auVar55._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  dVar39 = auVar55._8_8_ * local_3f8.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar41 = 0.0;
  dVar7 = dVar4 * local_3f8.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          local_3f8.X * auVar54._8_8_ +
          dVar42 * local_3f8.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar49 * local_3f8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar60 = dVar4 * local_3f8.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           local_3f8.Y * dVar5 +
           auVar43._8_8_ * local_3f8.W *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar39;
  uVar52 = SUB84(dVar60,0);
  uVar53 = (undefined4)((ulonglong)dVar60 >> 0x20);
  auVar56._0_8_ = auVar54._8_8_ * local_3f8.Z;
  auVar56._8_8_ = dVar5 * local_3f8.W;
  auVar8._4_8_ = dVar39;
  auVar8._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar68._0_8_ = auVar8._0_8_ << 0x20;
  auVar68._8_4_ = uVar52;
  auVar68._12_4_ = uVar53;
  local_338 = auVar68._8_8_;
  dVar5 = dVar4 * local_3f8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          auVar56._0_8_ +
          local_3f8.X * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar49 * local_3f8.W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar4 * local_3f8.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          auVar56._8_8_ +
          local_3f8.Y * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar49 * local_3f8.Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar62 = (undefined4)((ulonglong)dVar4 >> 0x20);
  local_268 = ZEXT816(0);
  auVar6._8_4_ = uVar52;
  auVar6._0_8_ = dVar7;
  auVar6._12_4_ = uVar53;
  local_3b8._8_4_ = SUB84(dVar4,0);
  local_3b8._0_8_ = dVar5;
  local_3b8._12_4_ = uVar62;
  local_258._8_8_ = _UNK_15061cbc8;
  local_258._0_8_ = ___xmm_3ff00000000000000000000000000000;
  local_318 = ZEXT816(0);
  local_2f8 = ZEXT816(0);
  local_328 = ZEXT816(0);
  dStack_300 = 0.0;
  dVar42 = __real_3ff0000000000000;
  if (this->bNeedSwingTwist != false) {
    local_268 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
    local_258 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
    if (dVar7 != 0.0) {
      local_248 = __real_3e45798ee0000000;
      dVar42 = dVar7 * dVar7 + 0.0;
      dVar49 = dVar4 * dVar4 + 0.0;
      auVar25._8_4_ = SUB84(dVar49,0);
      auVar25._0_8_ = dVar42;
      auVar25._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      auVar26._0_8_ = auVar25._8_8_ + dVar42;
      auVar26._8_8_ = dVar42 + dVar49;
      auVar55 = sqrtpd(auVar56,auVar26);
      uVar22 = -(ulonglong)(__real_3e45798ee0000000 <= auVar26._0_8_);
      uVar23 = -(ulonglong)(__real_3e45798ee0000000 <= auVar26._8_8_);
      uVar61 = (uint)(uVar22 >> 0x20);
      uVar63 = (uint)(uVar23 >> 0x20);
      auVar68 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar55);
      local_188._0_8_ = uVar22 & (ulonglong)(auVar68._0_8_ * dVar7);
      uVar20 = uVar23 & (ulonglong)(auVar68._8_8_ * 0.0);
      local_188._8_4_ = (undefined4)uVar20;
      local_188._12_4_ = (undefined4)(uVar20 >> 0x20);
      auVar44._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar44._4_4_ =
           ~uVar61 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar44._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar44._12_4_ =
           ~uVar63 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_188 = local_188 | auVar44;
      auVar55 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar55);
      local_178._0_4_ =
           ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      local_178._4_4_ =
           ~uVar61 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_178._8_4_ =
           ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_178._12_4_ =
           ~uVar63 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar45._0_8_ = (ulonglong)(auVar55._0_8_ * 0.0) & uVar22;
      uVar23 = (ulonglong)(auVar55._8_8_ * dVar4) & uVar23;
      auVar45._8_4_ = (undefined4)uVar23;
      auVar45._12_4_ = (undefined4)(uVar23 >> 0x20);
      local_178 = local_178 | auVar45;
      local_268 = local_188;
      local_258 = local_178;
    }
    dVar39 = local_258._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar73 = local_258._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(dVar4,0);
    auVar27._0_8_ = dVar4;
    auVar27._12_4_ = uVar62;
    auVar46._8_4_ = uVar52;
    auVar46._0_8_ = local_338;
    auVar46._12_4_ = uVar53;
    dVar42 = local_268._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar49 = local_268._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar28._8_4_ = SUB84(dVar5,0);
    auVar28._0_8_ = dVar5;
    auVar28._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar56._0_8_ =
         local_338 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    auVar56._8_8_ =
         local_338 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar24 = dVar7 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar4 * dVar42 +
             local_338 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar5 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar41 = dVar7 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar27._8_8_ * dVar49 +
             auVar46._8_8_ * dVar73 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar28._8_8_ * dVar42 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar53 = (undefined4)((ulonglong)dVar41 >> 0x20);
    dVar67 = dVar7 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar4 * dVar39 + auVar56._0_8_ +
             dVar5 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dStack_300 = dVar7 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar4 * dVar73 + auVar56._8_8_ +
                 dVar5 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar52 = (undefined4)((ulonglong)dStack_300 >> 0x20);
    local_318._8_4_ = SUB84(dVar41,0);
    local_318._0_8_ = dVar24;
    local_318._12_4_ = uVar53;
    auVar9._4_8_ = dVar73;
    auVar9._0_4_ = (int)((ulonglong)dVar67 >> 0x20);
    auVar72._0_8_ = auVar9._0_8_ << 0x20;
    auVar72._8_4_ = SUB84(dStack_300,0);
    auVar72._12_4_ = uVar52;
    dVar42 = auVar72._8_8_;
    local_2f8._8_4_ = SUB84(dVar41,0);
    local_2f8._0_8_ = dVar41;
    local_2f8._12_4_ = uVar53;
    local_328._8_4_ = SUB84(dStack_300,0);
    local_328._0_8_ = dVar67;
    local_328._12_4_ = uVar52;
  }
  auVar34 = ZEXT816(0);
  local_148._0_16_ = auVar34;
  stack0xfffffffffffffec8 = ZEXT816(0);
  auStack_130._8_16_ = auVar34;
  local_118 = ZEXT816(0);
  local_108 = 0;
  local_388 = param_1;
  dStack_330 = dVar60;
  local_308 = dVar42;
  if (this->bNeedLockedAxes != false) {
    FPBDJointUtilities::GetLockedRotationAxes
              ((TRotation<double,3> *)&local_3d8,(TRotation<double,3> *)&local_3f8,
               (TVector<double,3> *)local_148,(TVector<double,3> *)auStack_130,
               (TVector<double,3> *)local_118);
    auVar34 = extraout_XMM0;
  }
  uVar20 = (ulonglong)this->AngularRowIndexBegin;
  if (this->AngularRowIndexBegin < this->AngularRowIndexEnd) {
    uVar61 = (uint)__xmm_80000000000000008000000000000000;
    uVar63 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    lVar18 = uVar20 * 0x88;
    lVar21 = uVar20 * 0x30;
    dVar49 = __real_bff0000000000000;
    do {
      uVar19 = (uint)uVar20;
      uVar50 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar50 = ~uVar19 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         auVar34 = extraout_XMM0_00, bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      uVar50 = 0;
      if ((int)uVar19 < param_2->ArrayNum) {
        uVar50 = ~uVar19 >> 0x1f;
      }
      if ((uVar50 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         auVar34 = extraout_XMM0_01, bVar17)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar40 = auVar34._8_8_;
      pFVar2 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 8) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x10) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x20) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x28) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x30) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x38) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x40) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x48) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x50) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x58) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x60) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x68) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x70) = 0;
      *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
      dStack_420 = auVar6._8_8_;
      switch(*(undefined4 *)(pFVar1 + lVar21)) {
      case 8:
        if (this->bNeedSwingTwist == false) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("bNeedSwingTwist",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\JointSolverConstraints.cpp"
                              ,0x168,L"");
          uVar40 = extraout_XMM0_02._8_8_;
          if (bVar17) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar50 = SUB84(local_3f8.Y,0) ^ uVar61;
        uVar51 = (uint)((ulonglong)local_3f8.Y >> 0x20) ^ uVar63;
        dVar49 = local_3f8.Z + local_3f8.Z;
        auVar10._4_8_ = uVar40;
        auVar10._0_4_ = (int)((ulonglong)local_3f8.Z >> 0x20);
        auVar29._0_8_ = auVar10._0_8_ << 0x20;
        auVar29._8_4_ = SUB84(local_3f8.W,0);
        auVar29._12_4_ = (int)((ulonglong)local_3f8.W >> 0x20);
        dVar42 = (double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar51,uVar50);
        dVar67 = (double)CONCAT44(uVar51,uVar50) * __real_c000000000000000;
        auVar56._0_8_ = dVar42 * auVar29._8_8_;
        auVar56._8_8_ = 0.0;
        *(double *)(pFVar2 + lVar18 + 0x60) =
             (dVar42 * local_3f8.Y - dVar49 * local_3f8.Z) + (double)CONCAT44(uVar71,uVar70);
        *(double *)(pFVar2 + lVar18 + 0x68) = dVar67 * local_3f8.X + dVar49 * auVar29._8_8_;
        *(double *)(pFVar2 + lVar18 + 0x70) = dVar49 * local_3f8.X + auVar56._0_8_;
        dVar42 = *(double *)(pFVar1 + lVar21 + 0x20);
        auVar30._0_8_ = FPBDJointUtilities::GetTwistAngle((TRotation<double,3> *)local_268);
        auVar30._8_8_ = extraout_XMM0_Qb;
        *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
        dVar49 = __real_bff0000000000000;
        if (dVar42 <= auVar30._0_8_) {
          *(double *)(pFVar2 + lVar18 + 0x78) = auVar30._0_8_ - dVar42;
          auVar34 = auVar30;
          dVar49 = __real_bff0000000000000;
        }
        else {
          auVar34._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar63,SUB84(dVar42,0) ^ uVar61)
          ;
          auVar34._8_8_ = 0;
          if (auVar30._0_8_ <= auVar34._0_8_) {
            *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 + auVar30._0_8_;
          }
        }
        break;
      case 9:
        if ((this->bNeedSwingTwist == false) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("bNeedSwingTwist",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\JointSolverConstraints.cpp"
                                ,0x16c,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((dVar49 <= dVar42) && (dVar49 = dVar42, (double)CONCAT44(uVar71,uVar70) <= dVar42)) {
          dVar49 = (double)CONCAT44(uVar71,uVar70);
        }
        dVar42 = acos(dVar49);
        dVar42 = dVar42 + dVar42;
        dVar49 = dVar41 * dVar41 + dVar24 * dVar24 + dVar67 * dVar67;
        if (dVar49 <= __real_3eb0c6f7a0000000) {
          local_358 = (double)CONCAT44(uVar71,uVar70);
          local_368 = 0.0;
          dStack_360 = 0.0;
        }
        else {
          auVar56._0_8_ = (double)CONCAT44(uVar71,uVar70) / SQRT(dVar49);
          auVar56._8_8_ = 0.0;
          local_368 = dVar24 * auVar56._0_8_;
          dStack_360 = dVar41 * auVar56._0_8_;
          local_358 = dVar67 * auVar56._0_8_;
          local_240 = auVar56._0_8_;
        }
        if (__real_400921fb60000000 < dVar42) {
          dVar42 = dVar42 + __real_c01921fb60000000;
        }
        auVar11._4_8_ = auVar56._8_8_;
        auVar11._0_4_ = (int)((ulonglong)local_3d8.Z >> 0x20);
        auVar57._0_8_ = auVar11._0_8_ << 0x20;
        auVar57._8_4_ = SUB84(local_3d8.W,0);
        auVar57._12_4_ = (int)((ulonglong)local_3d8.W >> 0x20);
        dVar60 = auVar57._8_8_;
        auVar56._8_8_ = local_3d8.W;
        auVar56._0_8_ = dVar60;
        dVar67 = local_358 * local_3d8.Y - dStack_360 * local_3d8.Z;
        dVar67 = dVar67 + dVar67;
        dVar49 = local_368 * local_3d8.Z - local_358 * local_3d8.X;
        dVar49 = dVar49 + dVar49;
        dVar24 = dStack_360 * local_3d8.X - local_368 * local_3d8.Y;
        dVar24 = dVar24 + dVar24;
        *(double *)(pFVar2 + lVar18 + 0x60) =
             (dVar24 * local_3d8.Y - dVar49 * local_3d8.Z) + dVar67 * dVar60 + local_368;
        *(double *)(pFVar2 + lVar18 + 0x68) =
             dVar49 * dVar60 + dStack_360 + (dVar67 * local_3d8.Z - dVar24 * local_3d8.X);
        *(double *)(pFVar2 + lVar18 + 0x70) =
             (dVar49 * local_3d8.X - dVar67 * local_3d8.Y) + dVar24 * dVar60 + local_358;
        auVar31._0_8_ =
             FPBDJointUtilities::GetConeAngleLimit(param_4,(TVector<double,3> *)&local_368,dVar42);
        auVar31._8_8_ = extraout_XMM0_Qb_00;
        *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
        dVar49 = __real_bff0000000000000;
        uVar70 = SUB84(__real_3ff0000000000000,0);
        uVar71 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
        auVar34._8_4_ = (undefined4)extraout_XMM0_Qb_00;
        auVar34._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        if (auVar31._0_8_ <= dVar42) {
          *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 - auVar31._0_8_;
          auVar34 = auVar31;
          dVar60 = dStack_420;
          dVar49 = __real_bff0000000000000;
        }
        else {
          auVar34._0_8_ =
               (double)CONCAT44((uint)((ulonglong)auVar31._0_8_ >> 0x20) ^ uVar63,
                                SUB84(auVar31._0_8_,0) ^ uVar61);
          dVar60 = dStack_420;
          if (dVar42 <= auVar34._0_8_) {
            *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 + auVar31._0_8_;
          }
        }
        break;
      case 10:
        uVar52 = (undefined4)((ulonglong)local_3f8.W >> 0x20);
        uVar50 = SUB84(local_3f8.Y,0) ^ uVar61;
        uVar51 = (uint)((ulonglong)local_3f8.Y >> 0x20) ^ uVar63;
        dVar49 = local_3f8.Z + local_3f8.Z;
        dVar24 = (double)CONCAT44(uVar51,uVar50) + (double)CONCAT44(uVar51,uVar50);
        auVar58._8_4_ = SUB84(local_3f8.W,0);
        dVar42 = (dVar24 * local_3f8.Y - dVar49 * local_3f8.Z) + (double)CONCAT44(uVar71,uVar70);
        dVar67 = dVar49 * local_3f8.W -
                 (double)CONCAT44(uVar51,uVar50) * __real_4000000000000000 * local_3f8.X;
        dVar49 = dVar24 * local_3f8.W + dVar49 * local_3f8.X;
        if (*(int *)(pFVar1 + lVar21 + 8) == 2) {
          local_2e8._s_0.Z = 0.0;
          local_2e8._s_0.Y = (double)CONCAT44(uVar71,uVar70);
        }
        else {
          local_2e8._s_0.Z = (double)CONCAT44(uVar71,uVar70);
          local_2e8._s_0.Y = 0.0;
        }
        local_2e8._s_0.X = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_3d8,&local_238,(TVector<double> *)&local_2e8._s_0);
        auVar58._0_8_ = dVar67;
        auVar58._12_4_ = uVar52;
        local_198 = local_238.field0_0x0._s_0.Z;
        dVar41 = local_238.field0_0x0._0_8_;
        auVar56._8_8_ = auVar58._8_8_;
        dVar24 = local_238.field0_0x0._8_8_;
        auVar56._0_8_ = dVar67 * dVar41 - dVar42 * dVar24;
        auVar32._8_4_ = auVar58._8_4_;
        auVar32._0_8_ = dVar67;
        auVar32._12_4_ = uVar52;
        auVar12._4_8_ = auVar32._8_8_;
        auVar12._0_4_ = local_238.field0_0x0._4_4_;
        auVar33._0_8_ = auVar12._0_8_ << 0x20;
        auVar33._8_4_ = local_238.field0_0x0._8_4_;
        auVar33._12_4_ = local_238.field0_0x0._12_4_;
        auVar34._8_8_ = dVar24;
        auVar34._0_8_ = auVar33._8_8_;
        *(double *)(pFVar2 + lVar18 + 0x60) = dVar49 * dVar24 - dVar67 * local_238.field0_0x0._s_0.Z
        ;
        *(double *)(pFVar2 + lVar18 + 0x68) = dVar42 * local_238.field0_0x0._s_0.Z - dVar49 * dVar41
        ;
        *(double *)(pFVar2 + lVar18 + 0x70) = auVar56._0_8_;
        dVar24 = *(double *)(pFVar1 + lVar21 + 0x20);
        dVar42 = dVar67 * auVar33._8_8_ + dVar42 * dVar41 + dVar49 * local_238.field0_0x0._s_0.Z;
        dVar42 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar63,
                                  SUB84(dVar42,0) ^ uVar61);
        if (dVar42 < dVar24) {
          auVar34._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ uVar63,SUB84(dVar24,0) ^ uVar61)
          ;
          auVar34._8_8_ = 0;
          dVar49 = __real_bff0000000000000;
          if (dVar42 <= auVar34._0_8_) {
            *(double *)(pFVar2 + lVar18 + 0x78) = dVar24 + dVar42;
            dVar49 = __real_bff0000000000000;
          }
        }
        else {
          *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 - dVar24;
          dVar49 = __real_bff0000000000000;
        }
        break;
      case 0xb:
        if ((this->bNeedSwingTwist == false) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("bNeedSwingTwist",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\JointSolverConstraints.cpp"
                                ,0x173,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(int *)(pFVar1 + lVar21 + 8) == 0) || (*(int *)(pFVar1 + lVar21 + 8) != 2)) {
          dVar67 = dVar41;
        }
        dVar42 = FGenericPlatformMath::Atan2(dVar67,dVar42 + (double)CONCAT44(uVar71,uVar70));
        dVar42 = dVar42 * __real_4010000000000000;
        if (*(int *)(pFVar1 + lVar21 + 8) == 2) {
          local_2c8._s_0.Z = (double)CONCAT44(uVar71,uVar70);
          local_2c8._s_0.Y = 0.0;
        }
        else {
          local_2c8._s_0.Z = 0.0;
          local_2c8._s_0.Y = (double)CONCAT44(uVar71,uVar70);
        }
        local_2c8._s_0.X = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_3d8,(TVector<double> *)&local_220._s_0,(TVector<double> *)&local_2c8._s_0)
        ;
        *(undefined1 (*) [16])(pFVar2 + lVar18 + 0x60) = local_220._0_16_;
        *(double *)(pFVar2 + lVar18 + 0x70) = local_220._s_0.Z;
        dVar67 = *(double *)(pFVar1 + lVar21 + 0x20);
        *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
        if (dVar42 < dVar67) {
          auVar34._0_8_ =
               (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) ^ uVar63,SUB84(dVar67,0) ^ uVar61)
          ;
          auVar34._8_8_ = 0;
          if (dVar42 <= auVar34._0_8_) {
            *(double *)(pFVar2 + lVar18 + 0x78) = dVar67 + dVar42;
          }
        }
        else {
          *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 - dVar67;
          auVar34 = local_220._0_16_;
        }
        break;
      case 0xc:
        local_208._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_208._s_0.Y = _UNK_150689518;
        local_208._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_3f8,(TVector<double> *)&local_288._s_0,(TVector<double> *)&local_208._s_0)
        ;
        if (*(int *)(pFVar1 + lVar21 + 8) == 2) {
          local_2a8._s_0.Z = 0.0;
          local_2a8._s_0.Y = (double)CONCAT44(uVar71,uVar70);
        }
        else {
          local_2a8._s_0.Z = (double)CONCAT44(uVar71,uVar70);
          local_2a8._s_0.Y = 0.0;
        }
        local_2a8._s_0.X = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  (&local_3d8,(TVector<double> *)&local_350._s_0,(TVector<double> *)&local_2a8._s_0)
        ;
        uVar16 = local_288._s_0.Z;
        uVar15 = local_288._s_0.Y;
        uVar14 = local_288._s_0.X;
        uVar13 = local_350._s_0.Z;
        uVar40 = local_350._s_0.Y;
        local_380 = local_350._s_0.Y * local_288._s_0.Z - local_288._s_0.Y * local_350._s_0.Z;
        dStack_378 = local_288._s_0.X * local_350._s_0.Z - local_350._s_0.X * local_288._s_0.Z;
        local_370 = local_350._s_0.X * local_288._s_0.Y - local_288._s_0.X * local_350._s_0.Y;
        bVar17 = Utilities::NormalizeSafe((TVector<double,3> *)&local_380,__real_3f1a36e2e0000000);
        dVar49 = __real_bff0000000000000;
        auVar34 = extraout_XMM0_03;
        if (bVar17) {
          dVar42 = (double)uVar14 * local_350._s_0.X + (double)uVar40 * (double)uVar15 +
                   (double)uVar16 * (double)uVar13;
          uVar50 = SUB84(dVar42,0) ^ uVar61;
          uVar51 = (uint)((ulonglong)dVar42 >> 0x20) ^ uVar63;
          if ((double)CONCAT44(uVar71,uVar70) <= (double)CONCAT44(uVar51,uVar50)) {
            uVar50 = uVar70;
            uVar51 = uVar71;
          }
          uVar65 = SUB84(__real_bff0000000000000,0);
          uVar66 = (uint)((ulonglong)__real_bff0000000000000 >> 0x20);
          if ((double)CONCAT44(uVar51,uVar50) <= __real_bff0000000000000) {
            uVar50 = uVar65;
            uVar51 = uVar66;
          }
          if ((__real_bff0000000000000 <= (double)CONCAT44(uVar51,uVar50)) &&
             (uVar65 = uVar50, uVar66 = uVar51,
             (double)CONCAT44(uVar71,uVar70) <= (double)CONCAT44(uVar51,uVar50))) {
            uVar65 = uVar70;
            uVar66 = uVar71;
          }
          auVar35._0_8_ = asin((double)CONCAT44(uVar66,uVar65));
          auVar35._8_8_ = extraout_XMM0_Qb_01;
          auVar56._8_4_ = (int)extraout_XMM0_Qb_01;
          auVar56._0_8_ = auVar35._0_8_;
          auVar56._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          *(double *)(pFVar2 + lVar18 + 0x60) = local_380;
          *(double *)(pFVar2 + lVar18 + 0x60 + 8) = dStack_378;
          *(double *)(pFVar2 + lVar18 + 0x70) = local_370;
          dVar42 = *(double *)(pFVar1 + lVar21 + 0x20);
          if (auVar35._0_8_ < dVar42) {
            auVar34._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar63,
                                  SUB84(dVar42,0) ^ uVar61);
            auVar34._8_8_ = 0;
            if (auVar35._0_8_ <= auVar34._0_8_) {
              *(double *)(pFVar2 + lVar18 + 0x78) = dVar42 + auVar35._0_8_;
            }
          }
          else {
            auVar56._0_8_ = auVar35._0_8_ - dVar42;
            *(double *)(pFVar2 + lVar18 + 0x78) = auVar56._0_8_;
            auVar34 = auVar35;
          }
        }
        break;
      case 0xd:
        if ((this->bNeedLockedAxes == false) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("bNeedLockedAxes",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\JointSolverConstraints.cpp"
                                ,0x17b,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar20 = 0;
        if (*(int *)(pFVar1 + lVar21 + 8) != 0) {
          uVar20 = (ulonglong)((*(int *)(pFVar1 + lVar21 + 8) == 2) + 1);
        }
        uVar40 = *(undefined8 *)(local_148 + uVar20 * 0x18 + 8);
        *(undefined8 *)(pFVar2 + lVar18 + 0x60) = *(undefined8 *)(local_148 + uVar20 * 0x18);
        *(undefined8 *)(pFVar2 + lVar18 + 0x60 + 8) = uVar40;
        *(undefined8 *)(pFVar2 + lVar18 + 0x70) = *(undefined8 *)(local_148 + uVar20 * 0x18 + 0x10);
        if ((int)uVar20 == 0) {
          auVar34._8_4_ = SUB84(dVar60,0);
          auVar34._0_8_ = dVar7;
          auVar34._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
          *(double *)(pFVar2 + lVar18 + 0x78) = dVar7;
        }
        else if ((int)uVar20 == 1) {
          auVar34._8_8_ = 0;
          auVar34._0_8_ = local_338;
          *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
          *(double *)(pFVar2 + lVar18 + 0x78) = local_338;
        }
        else {
          auVar34._8_4_ = SUB84(dVar4,0);
          auVar34._0_8_ = dVar5;
          auVar34._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          *(undefined8 *)(pFVar2 + lVar18 + 0x78) = 0;
          *(double *)(pFVar2 + lVar18 + 0x78) = dVar5;
        }
        break;
      case 0x11:
        auVar36._8_4_ = SUB84(local_3d8.W,0);
        auVar36._0_8_ = local_3d8.W;
        auVar36._12_4_ = (int)((ulonglong)local_3d8.W >> 0x20);
        dVar4 = *(double *)&(param_4->AngularDrivePositionTarget).field_0x10;
        dVar42 = *(double *)&(param_4->AngularDrivePositionTarget).field_0x18;
        dVar49 = *(double *)&param_4->AngularDrivePositionTarget;
        dVar5 = *(double *)&(param_4->AngularDrivePositionTarget).field_0x8;
        auVar47._8_4_ = SUB84(local_3d8.Y,0);
        auVar47._0_8_ = local_3d8.Y;
        auVar47._12_4_ = (int)((ulonglong)local_3d8.Y >> 0x20);
        auVar37._8_4_ = SUB84(local_3d8.Z,0);
        auVar37._0_8_ = local_3d8.Z;
        auVar37._12_4_ = (int)((ulonglong)local_3d8.Z >> 0x20);
        dVar73 = local_3f8.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar69 = local_3f8.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar67 = local_3d8.X * dVar42 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_3d8.W * dVar49 +
                 local_3d8.Y * dVar4 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_3d8.Z * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar60 = local_3d8.X * dVar4 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar36._8_8_ * dVar5 +
                 auVar47._8_8_ * dVar42 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar37._8_8_ * dVar49 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar24 = local_3d8.X * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 local_3d8.W * dVar4 +
                 local_3d8.Y * dVar49 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 local_3d8.Z * dVar42 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar41 = local_3d8.X * dVar49 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_3d8.W * dVar42 +
                 local_3d8.Y * dVar5 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 local_3d8.Z * dVar4 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar49 = local_3f8.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar5 = local_3f8.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar48._8_4_ = SUB84(dVar60,0);
        auVar48._0_8_ = dVar60;
        auVar48._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
        auVar59._8_4_ = SUB84(dVar5,0);
        auVar59._0_8_ = dVar49;
        auVar59._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar38._8_4_ = SUB84(dVar41,0);
        auVar38._0_8_ = dVar41;
        auVar38._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        dVar39 = auVar59._8_8_;
        auVar56._8_8_ = dVar49;
        auVar56._0_8_ = dVar39;
        dVar4 = dVar67 * dVar69 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar41 * dVar49 +
                dVar60 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar24 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar42 = dVar67 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar38._8_8_ * dVar5 +
                 auVar48._8_8_ * dVar69 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar24 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar52 = SUB84(dVar42,0);
        uVar53 = (undefined4)((ulonglong)dVar42 >> 0x20);
        dVar42 = dVar67 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar41 * dVar73 +
                 dVar60 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar24 * dVar69 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar49 = dVar67 * dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar41 * dVar69 +
                 dVar60 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar24 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar62 = SUB84(dVar49,0);
        uVar64 = (undefined4)((ulonglong)dVar49 >> 0x20);
        local_3a8 = ___xmm_00000000000000003ff0000000000000;
        dStack_3a0 = _UNK_150689518;
        local_398 = 0;
        local_168._8_4_ = uVar52;
        local_168._0_8_ = dVar4;
        local_168._12_4_ = uVar53;
        local_158._8_4_ = uVar62;
        local_158._0_8_ = dVar42;
        local_158._12_4_ = uVar64;
        local_1c8._8_4_ = uVar52;
        local_1c8._0_8_ = dVar4;
        local_1c8._12_4_ = uVar53;
        local_1b8._8_4_ = uVar62;
        local_1b8._0_8_ = dVar42;
        local_1b8._12_4_ = uVar64;
        bVar17 = TRotation<double,3>::ToAxisAndAngleSafe
                           ((TRotation<double,3> *)local_1c8,(TVector<double,3> *)local_1e8,
                            local_408,(TVector<double,3> *)&local_3a8,__real_3eb0c6f7a0000000);
        uVar61 = (uint)__xmm_80000000000000008000000000000000;
        uVar63 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        uVar70 = SUB84(__real_3ff0000000000000,0);
        uVar71 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
        auVar34 = extraout_XMM0_04;
        dVar60 = dStack_420;
        dVar5 = (double)local_3b8._0_8_;
        dVar4 = (double)local_3b8._8_8_;
        dVar49 = __real_bff0000000000000;
        if (bVar17) {
          if (__real_400921fb60000000 < local_408[0]) {
            local_408[0] = local_408[0] + __real_c01921fb60000000;
          }
          uVar50 = SUB84(local_408[0],0) ^ uVar61;
          uVar51 = (uint)((ulonglong)local_408[0] >> 0x20) ^ uVar63;
          *(undefined1 (*) [16])(pFVar2 + lVar18 + 0x60) = local_1e8[0];
          *(undefined8 *)(pFVar2 + lVar18 + 0x70) = local_1e8[1]._0_8_;
          dVar49 = __real_bff0000000000000;
          dVar42 = *(double *)(pFVar1 + lVar21 + 0x20);
          auVar56._8_8_ = 0.0;
          auVar56._0_8_ = dVar42;
          if (dVar42 <= (double)CONCAT44(uVar51,uVar50)) {
            *(double *)(pFVar2 + lVar18 + 0x78) = (double)CONCAT44(uVar51,uVar50) - dVar42;
            auVar34 = local_1e8[0];
            dVar49 = __real_bff0000000000000;
          }
          else {
            auVar34._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) ^ uVar63,
                                  SUB84(dVar42,0) ^ uVar61);
            auVar34._8_8_ = 0;
            if ((double)CONCAT44(uVar51,uVar50) < auVar34._0_8_ ||
                (double)CONCAT44(uVar51,uVar50) == auVar34._0_8_) {
              auVar56._0_8_ = dVar42 + (double)CONCAT44(uVar51,uVar50);
              auVar56._8_8_ = 0.0;
              *(double *)(pFVar2 + lVar18 + 0x78) = auVar56._0_8_;
            }
          }
        }
      }
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar21 = lVar21 + 0x30;
      lVar18 = lVar18 + 0x88;
      param_1 = local_388;
      dVar67 = (double)local_328._0_8_;
      dVar24 = (double)local_318._0_8_;
      dVar41 = (double)local_2f8._0_8_;
      dVar42 = local_308;
    } while ((int)(uVar19 + 1) < this->AngularRowIndexEnd);
  }
  return;
}

