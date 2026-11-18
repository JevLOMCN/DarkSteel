// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FPBDUnilateralTetConstraints @ 143d91c20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPBDUnilateralTetConstraints * __thiscall
Chaos::Softs::FPBDUnilateralTetConstraints::FPBDUnilateralTetConstraints
          (FPBDUnilateralTetConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,float param_4,int param_5)

{
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
  (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = param_2->ArrayNum;
  (this->Constraints).ArrayMax = param_2->ArrayMax;
  param_2->ArrayNum = 0;
  param_2->ArrayMax = 0;
  (this->Volumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Volumes).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Volumes).ArrayNum = param_3->ArrayNum;
  (this->Volumes).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  (this->ConstraintIsActive).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintIsActive).ArrayNum = 0;
  (this->ConstraintIsActive).ArrayMax = 0;
  this->Stiffness = param_4;
  this->MaxNumIters = param_5;
  TrimKinematicConstraints(this,param_1);
  InitColor(this,param_1);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ConstraintIsActive,(this->Constraints).ArrayNum,Default);
  return this;
}

// Apply @ 143d9ba10

void __thiscall
Chaos::Softs::FPBDUnilateralTetConstraints::Apply
          (FPBDUnilateralTetConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FPAndInvM *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int iStack_12c;
  TArrayView<Chaos::Softs::FPAndInvM,int> aTStack_e8 [11];
  
  pFVar5 = (this->Constraints).AllocatorInstance.Data;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,aTStack_e8);
  iStack_12c = 0;
  pFVar6 = pTVar12->DataPtr;
  if (0 < this->MaxNumIters) {
    while( true ) {
      uVar15 = 0;
      bVar10 = false;
      lVar16 = 0;
      if ((this->Constraints).ArrayNum < 1) break;
      pFVar13 = pFVar5 + 8;
      do {
        fVar8 = __real_3e2aaaab;
        uVar14 = ~uVar15 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar15 < (this->ConstraintIsActive).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->ConstraintIsActive).AllocatorInstance.Data[lVar16] = (FScriptContainerElement)0x0;
        iVar1 = *(int *)(pFVar13 + -4);
        iVar2 = *(int *)pFVar13;
        iVar3 = *(int *)(pFVar13 + 4);
        iVar4 = *(int *)(pFVar13 + -8);
        fVar26 = *(float *)&pFVar6[iVar1].P.field_0x8;
        fVar23 = *(float *)&pFVar6[iVar1].P.field_0x4;
        fVar20 = *(float *)&pFVar6[iVar3].P.field_0x8 - fVar26;
        fVar21 = *(float *)&pFVar6[iVar1].P;
        fVar22 = *(float *)&pFVar6[iVar2].P.field_0x8 - fVar26;
        fVar31 = *(float *)&pFVar6[iVar3].P.field_0x4 - fVar23;
        fVar26 = *(float *)&pFVar6[iVar4].P.field_0x8 - fVar26;
        fVar25 = *(float *)&pFVar6[iVar4].P.field_0x4 - fVar23;
        fVar19 = *(float *)&pFVar6[iVar3].P - fVar21;
        fVar24 = *(float *)&pFVar6[iVar4].P - fVar21;
        fVar23 = *(float *)&pFVar6[iVar2].P.field_0x4 - fVar23;
        fVar21 = *(float *)&pFVar6[iVar2].P - fVar21;
        fVar17 = fVar31 * fVar26 - fVar20 * fVar25;
        fVar29 = fVar20 * fVar24 - fVar19 * fVar26;
        fVar27 = fVar19 * fVar25 - fVar31 * fVar24;
        fVar34 = fVar25 * fVar22 - fVar26 * fVar23;
        fVar28 = fVar26 * fVar21 - fVar24 * fVar22;
        fVar18 = fVar24 * fVar23 - fVar25 * fVar21;
        uVar11 = 0;
        if ((int)uVar15 < (this->Volumes).ArrayNum) {
          uVar11 = uVar14;
        }
        fVar33 = fVar20 * fVar23 - fVar31 * fVar22;
        fVar32 = fVar31 * fVar21 - fVar19 * fVar23;
        fVar31 = fVar33 * __real_3e2aaaab;
        fVar30 = fVar19 * fVar22 - fVar20 * fVar21;
        fVar22 = fVar32 * __real_3e2aaaab;
        fVar20 = fVar30 * __real_3e2aaaab;
        fVar23 = (float)((uint)(fVar34 * fVar8 + fVar17 * fVar8 + fVar31) ^
                        __xmm_80000000800000008000000080000000);
        fVar21 = (float)((uint)(fVar28 * fVar8 + fVar29 * fVar8 + fVar20) ^
                        __xmm_80000000800000008000000080000000);
        fVar19 = (float)((uint)(fVar18 * fVar8 + fVar27 * fVar8 + fVar22) ^
                        __xmm_80000000800000008000000080000000);
        fVar26 = (fVar30 * fVar25 + fVar33 * fVar24 + fVar32 * fVar26) * __real_3e2aaaab;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar26 - *(float *)((this->Volumes).AllocatorInstance.Data + lVar16 * 4) <
            __real_00000000) {
          uVar11 = 0;
          if ((int)uVar15 < (this->Volumes).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar24 = ((fVar26 - *(float *)((this->Volumes).AllocatorInstance.Data + lVar16 * 4)) *
                   this->Stiffness) /
                   ((fVar28 * fVar28 + fVar34 * fVar34 + fVar18 * fVar18) * __real_3ce38e3a *
                    pFVar6[iVar3].InvM +
                    (fVar30 * fVar30 + fVar33 * fVar33 + fVar32 * fVar32) * __real_3ce38e3a *
                    pFVar6[iVar4].InvM +
                   (fVar29 * fVar29 + fVar17 * fVar17 + fVar27 * fVar27) * __real_3ce38e3a *
                   pFVar6[iVar2].InvM +
                   (fVar23 * fVar23 + fVar21 * fVar21 + fVar19 * fVar19) * pFVar6[iVar1].InvM);
          fVar26 = fVar24 * pFVar6[iVar1].InvM;
          *(float *)&pFVar6[iVar1].P = *(float *)&pFVar6[iVar1].P - fVar26 * fVar23;
          *(float *)&pFVar6[iVar1].P.field_0x4 =
               *(float *)&pFVar6[iVar1].P.field_0x4 - fVar26 * fVar21;
          *(float *)&pFVar6[iVar1].P.field_0x8 =
               *(float *)&pFVar6[iVar1].P.field_0x8 - fVar26 * fVar19;
          fVar26 = fVar24 * pFVar6[iVar2].InvM;
          *(float *)&pFVar6[iVar2].P = *(float *)&pFVar6[iVar2].P - fVar26 * fVar17 * fVar8;
          *(float *)&pFVar6[iVar2].P.field_0x4 =
               *(float *)&pFVar6[iVar2].P.field_0x4 - fVar29 * fVar8 * fVar26;
          *(float *)&pFVar6[iVar2].P.field_0x8 =
               *(float *)&pFVar6[iVar2].P.field_0x8 - fVar27 * fVar8 * fVar26;
          fVar26 = fVar24 * pFVar6[iVar3].InvM;
          bVar10 = true;
          *(float *)&pFVar6[iVar3].P = *(float *)&pFVar6[iVar3].P - fVar26 * fVar34 * fVar8;
          *(float *)&pFVar6[iVar3].P.field_0x4 =
               *(float *)&pFVar6[iVar3].P.field_0x4 - fVar28 * fVar8 * fVar26;
          *(float *)&pFVar6[iVar3].P.field_0x8 =
               *(float *)&pFVar6[iVar3].P.field_0x8 - fVar26 * fVar18 * fVar8;
          fVar24 = fVar24 * pFVar6[iVar4].InvM;
          *(float *)&pFVar6[iVar4].P = *(float *)&pFVar6[iVar4].P - fVar31 * fVar24;
          *(float *)&pFVar6[iVar4].P.field_0x4 =
               *(float *)&pFVar6[iVar4].P.field_0x4 - fVar20 * fVar24;
          *(float *)&pFVar6[iVar4].P.field_0x8 =
               *(float *)&pFVar6[iVar4].P.field_0x8 - fVar24 * fVar22;
          uVar11 = 0;
          if ((int)uVar15 < (this->ConstraintIsActive).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->ConstraintIsActive).AllocatorInstance.Data[lVar16] = (FScriptContainerElement)0x1;
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 1;
        pFVar13 = pFVar13 + 0x10;
      } while ((int)uVar15 < (this->Constraints).ArrayNum);
      if (!bVar10) {
        return;
      }
      iStack_12c = iStack_12c + 1;
      if (this->MaxNumIters <= iStack_12c) {
        return;
      }
    }
  }
  return;
}

// ApplyVolumeConstraint @ 143d9d930

void __thiscall
Chaos::Softs::FPBDUnilateralTetConstraints::ApplyVolumeConstraint
          (FPBDUnilateralTetConstraints *this,FSolverParticlesRange *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FPAndInvM *pFVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_12c;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_e8 [11];
  
  pFVar5 = (this->Constraints).AllocatorInstance.Data;
  pTVar12 = FSolverParticlesRange::GetPAndInvM(param_1,local_e8);
  local_12c = 0;
  pFVar6 = pTVar12->DataPtr;
  if (0 < this->MaxNumIters) {
    while( true ) {
      uVar15 = 0;
      bVar10 = false;
      lVar16 = 0;
      if ((this->Constraints).ArrayNum < 1) break;
      pFVar13 = pFVar5 + 8;
      do {
        fVar8 = __real_3e2aaaab;
        uVar14 = ~uVar15 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar15 < (this->ConstraintIsActive).ArrayNum) {
          uVar11 = uVar14;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (this->ConstraintIsActive).AllocatorInstance.Data[lVar16] = (FScriptContainerElement)0x0;
        iVar1 = *(int *)(pFVar13 + -4);
        iVar2 = *(int *)pFVar13;
        iVar3 = *(int *)(pFVar13 + 4);
        iVar4 = *(int *)(pFVar13 + -8);
        fVar26 = *(float *)&pFVar6[iVar1].P.field_0x8;
        fVar23 = *(float *)&pFVar6[iVar1].P.field_0x4;
        fVar20 = *(float *)&pFVar6[iVar3].P.field_0x8 - fVar26;
        fVar21 = *(float *)&pFVar6[iVar1].P;
        fVar22 = *(float *)&pFVar6[iVar2].P.field_0x8 - fVar26;
        fVar31 = *(float *)&pFVar6[iVar3].P.field_0x4 - fVar23;
        fVar26 = *(float *)&pFVar6[iVar4].P.field_0x8 - fVar26;
        fVar25 = *(float *)&pFVar6[iVar4].P.field_0x4 - fVar23;
        fVar19 = *(float *)&pFVar6[iVar3].P - fVar21;
        fVar24 = *(float *)&pFVar6[iVar4].P - fVar21;
        fVar23 = *(float *)&pFVar6[iVar2].P.field_0x4 - fVar23;
        fVar21 = *(float *)&pFVar6[iVar2].P - fVar21;
        fVar17 = fVar31 * fVar26 - fVar20 * fVar25;
        fVar29 = fVar20 * fVar24 - fVar19 * fVar26;
        fVar27 = fVar19 * fVar25 - fVar31 * fVar24;
        fVar34 = fVar25 * fVar22 - fVar26 * fVar23;
        fVar28 = fVar26 * fVar21 - fVar24 * fVar22;
        fVar18 = fVar24 * fVar23 - fVar25 * fVar21;
        uVar11 = 0;
        if ((int)uVar15 < (this->Volumes).ArrayNum) {
          uVar11 = uVar14;
        }
        fVar33 = fVar20 * fVar23 - fVar31 * fVar22;
        fVar32 = fVar31 * fVar21 - fVar19 * fVar23;
        fVar31 = fVar33 * __real_3e2aaaab;
        fVar30 = fVar19 * fVar22 - fVar20 * fVar21;
        fVar22 = fVar32 * __real_3e2aaaab;
        fVar20 = fVar30 * __real_3e2aaaab;
        fVar23 = (float)((uint)(fVar34 * fVar8 + fVar17 * fVar8 + fVar31) ^
                        __xmm_80000000800000008000000080000000);
        fVar21 = (float)((uint)(fVar28 * fVar8 + fVar29 * fVar8 + fVar20) ^
                        __xmm_80000000800000008000000080000000);
        fVar19 = (float)((uint)(fVar18 * fVar8 + fVar27 * fVar8 + fVar22) ^
                        __xmm_80000000800000008000000080000000);
        fVar26 = (fVar30 * fVar25 + fVar33 * fVar24 + fVar32 * fVar26) * __real_3e2aaaab;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (fVar26 - *(float *)((this->Volumes).AllocatorInstance.Data + lVar16 * 4) <
            __real_00000000) {
          uVar11 = 0;
          if ((int)uVar15 < (this->Volumes).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar24 = ((fVar26 - *(float *)((this->Volumes).AllocatorInstance.Data + lVar16 * 4)) *
                   this->Stiffness) /
                   ((fVar28 * fVar28 + fVar34 * fVar34 + fVar18 * fVar18) * __real_3ce38e3a *
                    pFVar6[iVar3].InvM +
                    (fVar30 * fVar30 + fVar33 * fVar33 + fVar32 * fVar32) * __real_3ce38e3a *
                    pFVar6[iVar4].InvM +
                   (fVar29 * fVar29 + fVar17 * fVar17 + fVar27 * fVar27) * __real_3ce38e3a *
                   pFVar6[iVar2].InvM +
                   (fVar23 * fVar23 + fVar21 * fVar21 + fVar19 * fVar19) * pFVar6[iVar1].InvM);
          fVar26 = fVar24 * pFVar6[iVar1].InvM;
          *(float *)&pFVar6[iVar1].P = *(float *)&pFVar6[iVar1].P - fVar26 * fVar23;
          *(float *)&pFVar6[iVar1].P.field_0x4 =
               *(float *)&pFVar6[iVar1].P.field_0x4 - fVar26 * fVar21;
          *(float *)&pFVar6[iVar1].P.field_0x8 =
               *(float *)&pFVar6[iVar1].P.field_0x8 - fVar26 * fVar19;
          fVar26 = fVar24 * pFVar6[iVar2].InvM;
          *(float *)&pFVar6[iVar2].P = *(float *)&pFVar6[iVar2].P - fVar26 * fVar17 * fVar8;
          *(float *)&pFVar6[iVar2].P.field_0x4 =
               *(float *)&pFVar6[iVar2].P.field_0x4 - fVar29 * fVar8 * fVar26;
          *(float *)&pFVar6[iVar2].P.field_0x8 =
               *(float *)&pFVar6[iVar2].P.field_0x8 - fVar27 * fVar8 * fVar26;
          fVar26 = fVar24 * pFVar6[iVar3].InvM;
          bVar10 = true;
          *(float *)&pFVar6[iVar3].P = *(float *)&pFVar6[iVar3].P - fVar26 * fVar34 * fVar8;
          *(float *)&pFVar6[iVar3].P.field_0x4 =
               *(float *)&pFVar6[iVar3].P.field_0x4 - fVar28 * fVar8 * fVar26;
          *(float *)&pFVar6[iVar3].P.field_0x8 =
               *(float *)&pFVar6[iVar3].P.field_0x8 - fVar26 * fVar18 * fVar8;
          fVar24 = fVar24 * pFVar6[iVar4].InvM;
          *(float *)&pFVar6[iVar4].P = *(float *)&pFVar6[iVar4].P - fVar31 * fVar24;
          *(float *)&pFVar6[iVar4].P.field_0x4 =
               *(float *)&pFVar6[iVar4].P.field_0x4 - fVar20 * fVar24;
          *(float *)&pFVar6[iVar4].P.field_0x8 =
               *(float *)&pFVar6[iVar4].P.field_0x8 - fVar24 * fVar22;
          uVar11 = 0;
          if ((int)uVar15 < (this->ConstraintIsActive).ArrayNum) {
            uVar11 = uVar14;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          (this->ConstraintIsActive).AllocatorInstance.Data[lVar16] = (FScriptContainerElement)0x1;
        }
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 1;
        pFVar13 = pFVar13 + 0x10;
      } while ((int)uVar15 < (this->Constraints).ArrayNum);
      if (!bVar10) {
        return;
      }
      local_12c = local_12c + 1;
      if (this->MaxNumIters <= local_12c) {
        return;
      }
    }
  }
  return;
}

// InitColor @ 143dae3c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDUnilateralTetConstraints::InitColor
          (FPBDUnilateralTetConstraints *this,FSolverParticlesRange *param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  int *piVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  uint local_b8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_b0;
  FScriptContainerElement *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a0;
  FPBDUnilateralTetConstraints local_98;
  
  uVar15 = (this->Constraints).ArrayNum;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::Softs::FSolverParticlesRange,4,0>
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &local_98.ConstraintsPerColorStartIndex,&this->Constraints,param_1,0,
             *(int *)&param_1->field_0x14);
  local_98.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Constraints.ArrayNum = 0;
  local_98.Constraints.ArrayMax = 0;
  local_98.ConstraintIsActive.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ConstraintIsActive.ArrayNum = 0;
  local_98.ConstraintIsActive.ArrayMax = 0;
  local_98.Volumes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Volumes.ArrayNum = 0;
  local_98.Volumes.ArrayMax = 0;
  if ((int)uVar15 < 1) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar15,(ForAnyElementType *)&local_98,&local_98.Constraints.ArrayNum,
               &local_98.Constraints.ArrayMax);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&local_98.ConstraintIsActive,uVar15,
             Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_98.Volumes,uVar15,Default);
  uVar15 = local_98.ConstraintsPerColorStartIndex.ArrayNum + 1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  if ((this->ConstraintsPerColorStartIndex).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&(this->ConstraintsPerColorStartIndex).AllocatorInstance,0,
               &(this->ConstraintsPerColorStartIndex).ArrayMax);
  }
  uVar12 = (ulonglong)local_98.ConstraintsPerColorStartIndex.ArrayNum;
  local_b8[0] = 0;
  local_a0 = (TArray<int,TSizedDefaultAllocator<32>_> *)
             (local_98.ConstraintsPerColorStartIndex.AllocatorInstance.Data + uVar12 * 0x10);
  local_res20 = local_98.ConstraintsPerColorStartIndex.ArrayNum;
  FVar13.Data = local_98.ConstraintsPerColorStartIndex.AllocatorInstance.Data;
  do {
    pTVar7 = local_a0;
    piVar16 = &(this->ConstraintsPerColorStartIndex).ArrayMax;
    pTVar14 = &this->ConstraintsPerColorStartIndex;
    local_b0 = (TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data;
    if (local_98.ConstraintsPerColorStartIndex.ArrayNum != (uint)uVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    pFVar18 = (pTVar14->AllocatorInstance).Data;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data == pTVar7) {
      if (((pFVar18 <= (FScriptContainerElement *)local_b8) &&
          ((FScriptContainerElement *)local_b8 < pFVar18 + (longlong)*piVar16 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
      if (iVar9 == *piVar16) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar14->AllocatorInstance,piVar16);
      }
      (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
      *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b8[0];
      if (this != &local_98) {
        pFVar18 = (this->Constraints).AllocatorInstance.Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (this->Constraints).AllocatorInstance.Data = local_98.Constraints.AllocatorInstance.Data;
        (this->Constraints).ArrayNum = local_98.Constraints.ArrayNum;
        (this->Constraints).ArrayMax = local_98.Constraints.ArrayMax;
        local_98.Constraints.ArrayNum = 0;
        local_98.Constraints.ArrayMax = 0;
        local_98.Constraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pTVar1 = &this->Volumes;
      if (pTVar1 != &local_98.Volumes) {
        pFVar18 = (pTVar1->AllocatorInstance).Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pTVar1->AllocatorInstance).Data = local_98.Volumes.AllocatorInstance.Data;
        (this->Volumes).ArrayNum = local_98.Volumes.ArrayNum;
        (this->Volumes).ArrayMax = local_98.Volumes.ArrayMax;
        local_98.Volumes.ArrayNum = 0;
        local_98.Volumes.ArrayMax = 0;
        local_98.Volumes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_98.Volumes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Volumes.AllocatorInstance.Data);
      }
      if (local_98.ConstraintIsActive.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.ConstraintIsActive.AllocatorInstance.Data);
      }
      if (local_98.Constraints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Constraints.AllocatorInstance.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)
                 local_98.ConstraintsPerColorStartIndex.AllocatorInstance.Data,
                 local_98.ConstraintsPerColorStartIndex.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)
          local_98.ConstraintsPerColorStartIndex.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_98.ConstraintsPerColorStartIndex.AllocatorInstance.Data);
      }
      return;
    }
    if (((pFVar18 <= (FScriptContainerElement *)local_b8) &&
        ((FScriptContainerElement *)local_b8 < pFVar18 + (longlong)*piVar16 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (this->ConstraintsPerColorStartIndex).ArrayNum;
    if (iVar9 == *piVar16) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar14->AllocatorInstance,piVar16);
    }
    (this->ConstraintsPerColorStartIndex).ArrayNum = iVar9 + 1;
    *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_b8[0];
    local_res18 = ((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum;
    uVar12 = (ulonglong)(int)local_res18;
    pFVar18 = (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->AllocatorInstance).Data;
    local_a8 = pFVar18 + uVar12 * 4;
    while( true ) {
      pFVar2 = local_a8;
      if (((TArray<int,TSizedDefaultAllocator<32>_> *)FVar13.Data)->ArrayNum != (int)uVar12) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar18 == pFVar2) break;
      uVar15 = *(uint *)pFVar18;
      uVar10 = 0;
      if ((int)uVar15 < (this->Constraints).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar17 = (longlong)(int)local_b8[0];
      pFVar2 = (this->Constraints).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
      uVar5 = *(undefined8 *)pFVar2;
      uVar6 = *(undefined8 *)(pFVar2 + 8);
      uVar11 = 0;
      uVar10 = uVar11;
      if ((int)local_b8[0] < local_98.Constraints.ArrayNum) {
        uVar10 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(local_98.Constraints.AllocatorInstance.Data + lVar17 * 0x10) = uVar5;
      *(undefined8 *)(local_98.Constraints.AllocatorInstance.Data + lVar17 * 0x10 + 8) = uVar6;
      uVar10 = uVar11;
      if ((int)uVar15 < (this->Volumes).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar17 = (longlong)(int)local_b8[0];
      uVar3 = *(undefined4 *)((this->Volumes).AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
      if ((int)local_b8[0] < local_98.Volumes.ArrayNum) {
        uVar11 = ~local_b8[0] >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = (ulonglong)local_res18;
      *(undefined4 *)(local_98.Volumes.AllocatorInstance.Data + lVar17 * 4) = uVar3;
      local_b8[0] = local_b8[0] + 1;
      pFVar18 = pFVar18 + 4;
      FVar13.Data = (FScriptContainerElement *)local_b0;
    }
    uVar12 = (ulonglong)local_res20;
    FVar13.Data = FVar13.Data + 0x10;
  } while( true );
}

// TrimKinematicConstraints @ 143dba700

void __thiscall
Chaos::Softs::FPBDUnilateralTetConstraints::TrimKinematicConstraints
          (FPBDUnilateralTetConstraints *this,FSolverParticlesRange *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  
  uVar4 = (this->Constraints).ArrayNum;
  uVar7 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar4,&local_48,0,(int *)((longlong)&local_40 + 4));
  }
  uVar4 = (this->Constraints).ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (local_50._4_4_ < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar4,&local_58,(int)local_50,(int *)((longlong)&local_50 + 4));
  }
  iVar5 = (this->Constraints).ArrayNum;
  uVar10 = uVar7;
  uVar11 = uVar7;
  if (0 < iVar5) {
    do {
      uVar9 = (uint)uVar7;
      uVar12 = ~uVar9 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar9 < iVar5) {
        uVar4 = uVar12;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)((this->Constraints).AllocatorInstance.Data + uVar10);
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar13 = TDynamicParticles<float,3>::InvM
                         (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                          *(int *)&param_1->field_0x10 + iVar5);
      if (fVar13 == 0.0) {
        uVar4 = 0;
        if ((int)uVar9 < (this->Constraints).ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = *(int *)((this->Constraints).AllocatorInstance.Data + uVar10 + 4);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar13 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar5);
        if (fVar13 != 0.0) goto LAB_143dbaa21;
        uVar4 = 0;
        if ((int)uVar9 < (this->Constraints).ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = *(int *)((this->Constraints).AllocatorInstance.Data + uVar10 + 8);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar13 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar5);
        if (fVar13 != 0.0) goto LAB_143dbaa21;
        uVar4 = 0;
        if ((int)uVar9 < (this->Constraints).ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = *(int *)((this->Constraints).AllocatorInstance.Data + uVar10 + 0xc);
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Particles",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                               ,0x56,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar13 = TDynamicParticles<float,3>::InvM
                           (*(TDynamicParticles<float,3> **)&param_1->field_0x8,
                            *(int *)&param_1->field_0x10 + iVar5);
        if (fVar13 != 0.0) goto LAB_143dbaa21;
      }
      else {
LAB_143dbaa21:
        uVar4 = 0;
        if ((int)uVar9 < (this->Constraints).ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->Constraints).AllocatorInstance.Data + uVar10;
        if (((local_48.Data <= pFVar8) && (pFVar8 < local_48.Data + (longlong)local_40._4_4_ * 0x10)
            ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&local_48,(int *)((longlong)&local_40 + 4));
        }
        local_40._0_4_ = iVar5 + 1;
        uVar2 = *(undefined8 *)(pFVar8 + 8);
        *(undefined8 *)(local_48.Data + (longlong)iVar5 * 0x10) = *(undefined8 *)pFVar8;
        *(undefined8 *)(local_48.Data + (longlong)iVar5 * 0x10 + 8) = uVar2;
        uVar4 = 0;
        if ((int)uVar9 < (this->Volumes).ArrayNum) {
          uVar4 = uVar12;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = (this->Volumes).AllocatorInstance.Data + uVar11 * 4;
        if (((local_58.Data <= pFVar8) && (pFVar8 < local_58.Data + (longlong)local_50._4_4_ * 4))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = CONCAT44(local_50._4_4_,iVar5 + 1);
        *(undefined4 *)(local_58.Data + (longlong)iVar5 * 4) = *(undefined4 *)pFVar8;
      }
      iVar5 = (this->Constraints).ArrayNum;
      uVar7 = (ulonglong)(uVar9 + 1);
      uVar10 = uVar10 + 0x10;
      uVar11 = uVar11 + 1;
    } while ((int)(uVar9 + 1) < iVar5);
  }
  if (local_40._4_4_ != (int)local_40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,(int)local_40,&local_48,(int)local_40,(int *)((longlong)&local_40 + 4));
  }
  if (local_50._4_4_ != (int)local_50) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_50,&local_58,(int)local_50,(int *)((longlong)&local_50 + 4));
  }
  if (this != (FPBDUnilateralTetConstraints *)&local_48) {
    pFVar8 = (this->Constraints).AllocatorInstance.Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (this->Constraints).AllocatorInstance.Data = local_48.Data;
    (this->Constraints).ArrayNum = (int)local_40;
    (this->Constraints).ArrayMax = local_40._4_4_;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    local_48.Data = (FScriptContainerElement *)0x0;
  }
  pTVar6 = &this->Volumes;
  if (pTVar6 != (TArray<float,TSizedDefaultAllocator<32>_> *)&local_58) {
    pFVar8 = (pTVar6->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar6->AllocatorInstance).Data = local_58.Data;
    (this->Volumes).ArrayNum = (int)local_50;
    (this->Volumes).ArrayMax = local_50._4_4_;
    local_50 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

