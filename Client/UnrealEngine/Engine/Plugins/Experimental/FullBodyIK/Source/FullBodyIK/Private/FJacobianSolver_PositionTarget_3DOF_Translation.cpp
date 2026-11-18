// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// FJacobianSolver_PositionTarget_3DOF_Translation @ 14df73c10

FJacobianSolver_PositionTarget_3DOF_Translation * __thiscall
FJacobianSolver_PositionTarget_3DOF_Translation::FJacobianSolver_PositionTarget_3DOF_Translation
          (FJacobianSolver_PositionTarget_3DOF_Translation *this)

{
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)this);
  *(undefined ***)this = &___7FJacobianSolver_PositionTarget_3DOF_Translation__6B_;
  return this;
}

// InitializeSolver @ 14df80970

void __thiscall
FJacobianSolver_PositionTarget_3DOF_Translation::InitializeSolver
          (FJacobianSolver_PositionTarget_3DOF_Translation *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_40;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *local_38;
  undefined2 local_30;
  
  FJacobianSolver_PositionTarget_3DOF::InitializeSolver
            ((FJacobianSolver_PositionTarget_3DOF *)this,param_1,param_2);
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2);
  local_30 = 0;
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar7 = local_98._24_8_ >> 0x20;
  local_38 = (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2;
  if (local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
    do {
      lVar8 = (longlong)(int)uVar7 * 0xa0;
      lVar1 = *local_68;
      uStack_50 = uStack_50 & ~auStack_60._4_4_;
      *(undefined1 *)(lVar8 + 0x10 + lVar1) = 1;
      *(undefined1 *)(lVar8 + 0x30 + lVar1) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
      uVar7 = (ulonglong)uStack_4c;
    } while ((int)uStack_4c < *(int *)(auStack_60._8_8_ + 0x18));
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar12 = *(int *)&(local_38->Elements).field_0x8 - *(int *)&(local_38->Elements).field_0x34;
      if (uVar12 < 4) {
        iVar4 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        local_res18 = (undefined4)lVar1;
        iVar4 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar12) && (local_38->HashSize < iVar4)) || (iVar4 < local_38->HashSize)) {
        local_38->HashSize = iVar4;
        TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
        ::Rehash(local_38);
      }
    }
  }
  iVar4 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar11 + (longlong)iVar4 * 0x130;
  do {
    if (param_1->ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFBIKLinkData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar9) {
      return;
    }
    iVar5 = *(int *)(pFVar11 + 0x100);
    uVar7 = 0;
    uVar10 = 0;
    if (0 < iVar5) {
      do {
        uVar12 = (uint)uVar7;
        if ((((int)uVar12 < 0) || (iVar5 <= (int)uVar12)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("MotionBaseAxes.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                               ,0xd8,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = 0;
        if ((int)uVar12 < *(int *)(pFVar11 + 0x100)) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar1 = *(longlong *)(pFVar11 + 0xf8);
        *(undefined4 *)(uVar10 + 0x18 + lVar1) = 0;
        *(undefined4 *)(uVar10 + 0x1c + lVar1) = 0x3f800000;
        iVar5 = *(int *)(pFVar11 + 0x100);
        uVar7 = (ulonglong)(uVar12 + 1);
        uVar10 = uVar10 + 0x20;
      } while ((int)(uVar12 + 1) < iVar5);
    }
    pFVar11 = pFVar11 + 0x130;
  } while( true );
}

