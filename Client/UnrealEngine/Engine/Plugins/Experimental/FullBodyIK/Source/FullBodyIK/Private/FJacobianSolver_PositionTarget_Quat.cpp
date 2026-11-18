// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 3

// FJacobianSolver_PositionTarget_Quat @ 14df73c40

FJacobianSolver_PositionTarget_Quat * __thiscall
FJacobianSolver_PositionTarget_Quat::FJacobianSolver_PositionTarget_Quat
          (FJacobianSolver_PositionTarget_Quat *this)

{
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)this);
  *(undefined ***)this = &___7FJacobianSolver_PositionTarget_Quat__6B_;
  return this;
}

// InitializeSolver @ 14df80bd0

void __thiscall
FJacobianSolver_PositionTarget_Quat::InitializeSolver
          (FJacobianSolver_PositionTarget_Quat *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar4 = (longlong)(int)uVar3 * 0xa0;
      lVar1 = *local_48;
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      *(undefined1 *)(lVar4 + 0x10 + lVar1) = 1;
      *(undefined1 *)(lVar4 + 0x30 + lVar1) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

// PreSolve @ 14df822f0

void __thiscall
FJacobianSolver_PositionTarget_Quat::PreSolve
          (FJacobianSolver_PositionTarget_Quat *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  iVar6 = param_1->ArrayNum;
  uVar4 = 0;
  if (0 < iVar6) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < iVar6) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = (param_1->AllocatorInstance).Data + lVar5 + 0xf8;
      iVar6 = *(int *)(pFVar7 + 0xc);
      *(undefined4 *)&pFVar7[8].field_0x0 = 0;
      if (iVar6 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
      }
      iVar6 = param_1->ArrayNum;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x130;
    } while ((int)uVar4 < iVar6);
  }
  CalculateRotationAxisBasedOnEffectorPosition(param_1,param_2);
  return;
}

