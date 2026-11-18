// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// Initialize @ 14df42750

bool __thiscall
FChainStretcher::Initialize
          (FChainStretcher *this,FRetargetStretchChainSettings *param_1,FResolvedBoneChain *param_2,
          FResolvedBoneChain *param_3,FRetargetSkeleton *param_4,FRetargetSkeleton *param_5)

{
  int *piVar1;
  FResolvedBoneChain *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  byte bVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  
  this->Settings = param_1;
  lVar12 = 0;
  this->SourceBoneChain = param_2;
  piVar1 = &(this->AllChildrenOfChain).ArrayMax;
  this->TargetBoneChain = param_3;
  (this->AllChildrenOfChain).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar2 = this->TargetBoneChain;
  if (((pFVar2->BoneIndices).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  FRetargetSkeleton::GetChildrenIndicesRecursive
            (param_5,*(int *)(pFVar2->BoneIndices).AllocatorInstance.Data,&this->AllChildrenOfChain)
  ;
  iVar10 = (this->AllChildrenOfChain).ArrayNum;
  lVar13 = (longlong)iVar10;
  pFVar2 = this->TargetBoneChain;
  if (iVar10 != 0) {
    pFVar9 = (pFVar2->BoneIndices).AllocatorInstance.Data;
    iVar10 = 0;
    pFVar3 = (this->AllChildrenOfChain).AllocatorInstance.Data;
    iVar15 = 0;
    pFVar4 = pFVar9 + (longlong)(pFVar2->BoneIndices).ArrayNum * 4;
    if (pFVar9 != pFVar4) {
      do {
        if (*(int *)pFVar9 == *(int *)pFVar3) {
          bVar14 = 0;
          goto LAB_14df42850;
        }
        pFVar9 = pFVar9 + 4;
      } while (pFVar9 != pFVar4);
    }
    bVar14 = 1;
LAB_14df42850:
    do {
      lVar12 = lVar12 + 1;
      iVar11 = iVar10 + 1;
      if (lVar12 < lVar13) {
        pFVar4 = (pFVar2->BoneIndices).AllocatorInstance.Data;
        do {
          if (pFVar4 != pFVar4 + (longlong)(pFVar2->BoneIndices).ArrayNum * 4) {
            pFVar9 = pFVar4;
            do {
              if (*(int *)pFVar9 == *(int *)(pFVar3 + lVar12 * 4)) {
                bVar8 = 0;
                goto LAB_14df42897;
              }
              pFVar9 = pFVar9 + 4;
            } while (pFVar9 != pFVar4 + (longlong)(pFVar2->BoneIndices).ArrayNum * 4);
          }
          bVar8 = 1;
LAB_14df42897:
          if (bVar14 != bVar8) break;
          iVar11 = iVar11 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar13);
      }
      if (bVar14 != 0) {
        if (iVar15 != iVar10) {
          memmove(pFVar3 + (longlong)iVar15 * 4,pFVar3 + (longlong)iVar10 * 4,
                  (longlong)(iVar11 - iVar10) << 2);
        }
        iVar15 = iVar15 + (iVar11 - iVar10);
      }
      bVar14 = bVar14 ^ 1;
      iVar10 = iVar11;
    } while (lVar12 < lVar13);
    (this->AllChildrenOfChain).ArrayNum = iVar15;
  }
  return true;
}

// StretchChain @ 14df5a5c0

void __thiscall
FChainStretcher::StretchChain
          (FChainStretcher *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FRetargetSkeleton *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FResolvedBoneChain *pFVar3;
  FResolvedBoneChain *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ForAnyElementType FVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong local_res8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_118;
  longlong local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_d0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_c0;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  
  dVar2 = __real_3e45798ee2308c3a;
  dVar7 = this->Settings->ScaleChainLength - __real_3ff0000000000000;
  uVar17 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar7 = this->Settings->MatchSourceLength;
  uVar18 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar20 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((__real_3e45798ee2308c3a <= (double)CONCAT44(uVar20,uVar18) &&
       (double)CONCAT44(uVar20,uVar18) != __real_3e45798ee2308c3a) ||
     (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar19,uVar17) &&
      (double)CONCAT44(uVar19,uVar17) != __real_3e45798ee2308c3a)) {
    FRetargetSkeleton::GetLocalTransformsOfMultipleBones
              (param_2,&local_c0,&this->AllChildrenOfChain,param_3);
    FResolvedBoneChain::GetChainTransformsFromPose(this->TargetBoneChain,&local_118,param_3);
    FResolvedBoneChain::GetChainTransformsFromPose(this->SourceBoneChain,&local_d0,param_1);
    dVar7 = FResolvedBoneChain::GetChainLength(&local_118);
    dVar8 = FResolvedBoneChain::GetChainLength(&local_d0);
    uVar17 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar18 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar2 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar2) {
      uVar17 = 1;
      dVar2 = this->Settings->MatchSourceLength;
      if (1 < (this->TargetBoneChain->BoneIndices).ArrayNum) {
        local_res8 = 0x60;
        local_108 = 4;
        do {
          iVar14 = local_118.ArrayNum;
          uVar18 = 0;
          if ((int)uVar17 < local_118.ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar13.Data = local_118.AllocatorInstance.Data;
          local_100 = *(double *)(local_118.AllocatorInstance.Data + local_res8 + 0x20);
          dStack_f8 = *(double *)(local_118.AllocatorInstance.Data + local_res8 + 0x20 + 8);
          local_f0 = *(double *)(local_118.AllocatorInstance.Data + local_res8 + 0x30);
          uVar18 = 0;
          if ((int)(uVar17 - 1) < iVar14) {
            uVar18 = -uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = this->TargetBoneChain;
          pFVar1 = FVar13.Data + local_res8 + -0x40;
          local_b0 = *(double *)pFVar1;
          dStack_a8 = *(double *)(pFVar1 + 8);
          local_a0 = *(double *)(FVar13.Data + local_res8 + -0x30);
          dVar10 = local_100 - local_b0;
          dVar12 = local_f0 - local_a0;
          dVar9 = (((dVar8 - dVar7) * dVar2 + dVar7) / dVar7) * this->Settings->ScaleChainLength;
          dVar11 = dStack_f8 - dStack_a8;
          uVar18 = 0;
          if ((int)uVar17 < (pFVar3->BoneIndices).ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = local_108;
          pFVar4 = this->TargetBoneChain;
          uVar18 = *(uint *)((pFVar3->BoneIndices).AllocatorInstance.Data + local_108);
          uVar19 = 0;
          if ((int)(uVar17 - 1) < (pFVar4->BoneIndices).ArrayNum) {
            uVar19 = -uVar17 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar19 = *(uint *)((pFVar4->BoneIndices).AllocatorInstance.Data + lVar15 + -4);
          uVar20 = 0;
          if ((int)uVar19 < param_3->ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_3->AllocatorInstance).Data;
          pFVar1 = pFVar5 + (longlong)(int)uVar19 * 0x60 + 0x20;
          local_98 = *(double *)pFVar1;
          dStack_90 = *(double *)(pFVar1 + 8);
          local_88 = *(double *)(pFVar5 + (longlong)(int)uVar19 * 0x60 + 0x30);
          local_e8 = dVar10 * dVar9 + local_98;
          local_d8 = dVar12 * dVar9 + local_88;
          uVar19 = 0;
          if ((int)uVar18 < param_3->ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          dStack_e0 = dVar11 * dVar9 + dStack_90;
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (param_3->AllocatorInstance).Data;
          local_108 = lVar15 + 4;
          local_res8 = local_res8 + 0x60;
          uVar17 = uVar17 + 1;
          pFVar1 = pFVar5 + (longlong)(int)uVar18 * 0x60 + 0x20;
          *(double *)pFVar1 = local_e8;
          *(double *)(pFVar1 + 8) = dStack_e0;
          pFVar5 = pFVar5 + (longlong)(int)uVar18 * 0x60 + 0x30;
          *(double *)pFVar5 = local_d8;
          *(double *)(pFVar5 + 8) = 0.0;
        } while ((int)uVar17 < (this->TargetBoneChain->BoneIndices).ArrayNum);
      }
      FRetargetSkeleton::UpdateGlobalTransformsOfMultipleBones
                (param_2,&this->AllChildrenOfChain,&local_c0,param_3);
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
  }
  return;
}

