// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> @ 143a35350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> * __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          bool param_4,float param_5,float param_6,float param_7,float *param_8,float *param_9)

{
  undefined1 *puVar1;
  float fVar2;
  uint uVar3;
  TMPMGrid<float> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  float fVar8;
  FSolverParticles *pFVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  float *pfVar18;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_1e8 [32];
  longlong local_1b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1b0;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  FSolverParticles *local_190;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_188;
  float local_178 [4];
  float local_168 [4];
  float local_158 [4];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_190 = param_1;
  local_188 = param_2;
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
            ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,param_1,param_2
             ,param_3,param_8,param_9);
  *(undefined ***)this =
       &___7__FXPBDGridBasedCorotatedConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  uVar16 = 0;
  this->MaxDt = param_5;
  uVar15 = 2;
  this->CFLCoeff = param_7;
  this->MinDt = param_6;
  (this->MPMGrid).interp = linear;
  (this->MPMGrid).NPerDir = 2;
  *(float *)((longlong)&(this->MPMGrid)._padding_ + 4) = param_3;
  *(float *)&(this->MPMGrid)._padding_ = param_3;
  *(float *)((longlong)&(this->MPMGrid)._padding_ + 4) = param_3;
  lVar22 = param_1->_padding_;
  (this->MPMTransfer).Grid = &this->MPMGrid;
  (this->MPMTransfer).NPerSec = 4;
  (this->MPMTransfer).NPerEle = 8;
  (this->MPMTransfer).Weights.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).Weights.ArrayNum = 0;
  (this->MPMTransfer).Weights.ArrayMax = 0;
  (this->MPMTransfer).Indices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).Indices.ArrayNum = 0;
  (this->MPMTransfer).Indices.ArrayMax = 0;
  (this->MPMTransfer).CellData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).CellData.ArrayNum = 0;
  (this->MPMTransfer).CellData.ArrayMax = 0;
  (this->MPMTransfer).ElementGridNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).ElementGridNodes.ArrayNum = 0;
  (this->MPMTransfer).ElementGridNodes.ArrayMax = 0;
  (this->MPMTransfer).ElementGridNodeWeights.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->MPMTransfer).ElementGridNodeWeights.ArrayNum = 0;
  (this->MPMTransfer).ElementGridNodeWeights.ArrayMax = 0;
  (this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum = 0;
  (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayMax = 0;
  (this->MPMTransfer).ElementGridNodesSet.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).ElementGridNodesSet.ArrayNum = 0;
  (this->MPMTransfer).ElementGridNodesSet.ArrayMax = 0;
  (this->MPMTransfer).AArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MPMTransfer).AArray.ArrayNum = 0;
  (this->MPMTransfer).AArray.ArrayMax = 0;
  (this->MPMTransfer).NTransfer = 3;
  (this->MPMTransfer).NumModes = 3;
  uVar3 = ((this->MPMTransfer).Grid)->NPerDir;
  if (((uVar3 != 2) && (uVar3 != 3)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_345276067352674252>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\MPMTransfer.h"
                          ,0x34,"Grid.NPerDir == 2 || Grid.NPerDir == 3"), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
              (*pcVar6)();
    return pFVar14;
  }
  pTVar4 = (this->MPMTransfer).Grid;
  local_1a0 = 0.0;
  uVar3 = pTVar4->NPerDir;
  (this->MPMTransfer).NPerSec = uVar3 * uVar3;
  (this->MPMTransfer).NPerEle = uVar3 * pTVar4->NPerDir * uVar3;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&(this->MPMTransfer).AArray,&local_1a0,(int)lVar22 * 9);
  (this->ElementsPerColor).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsPerColor).ArrayNum = 0;
  (this->ElementsPerColor).ArrayMax = 0;
  this->PreviousColoring =
       (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PreviousColoringPtr).Ptr =
       (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0;
  (this->ElementsPerSubColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementsPerSubColors).ArrayNum = 0;
  (this->ElementsPerSubColors).ArrayMax = 0;
  (this->GridData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridData).ArrayNum = 0;
  (this->GridData).ArrayMax = 0;
  (this->GridPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridPositions).ArrayNum = 0;
  (this->GridPositions).ArrayMax = 0;
  this->InitialGridDataWritten = false;
  TMPMGrid<float>::UpdateGridFromPositions(&this->MPMGrid,(TDynamicParticles<float,3> *)local_190);
  local_19c = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x8,&local_19c,
             *(int *)&this->field_0xa8 * 2);
  local_198 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0x18,&local_198,
             *(int *)&this->field_0xa8 * 9);
  local_194 = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->field_0xb0,&local_194,
             *(int *)&this->field_0xa8);
  fVar2 = *param_9;
  *(float *)&this->field_0x48 =
       (fVar2 * *param_8) / ((__real_3f800000 - (fVar2 + fVar2)) * (fVar2 + __real_3f800000));
  *(float *)&this->field_0x44 = *param_8 / (*param_9 + *param_9 + __real_40000000);
  fVar8 = __real_3e2aaaab;
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_322bcc77;
  uVar11 = 0;
  if (0 < local_188->ArrayNum) {
    local_1b8 = 0;
    uVar21 = uVar16;
    do {
      uVar20 = (uint)uVar21;
      FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::DsInit
                ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                 (PMatrix<float,3,3> *)&local_138,uVar20,local_190);
      if (((((fVar2 < (float)((uint)local_138.M[0][0] & uVar3)) ||
            (fVar2 < (float)((uint)local_138.M[0][1] & uVar3))) ||
           ((fVar2 < (float)((uint)local_138.M[0][2] & uVar3) ||
            ((fVar2 < (float)((uint)local_138.M[1][0] & uVar3) ||
             (fVar2 < (float)((uint)local_138.M[1][1] & uVar3))))))) ||
          (fVar2 < (float)((uint)local_138.M[1][2] & uVar3))) ||
         (((fVar2 < (float)((uint)local_138.M[2][0] & uVar3) ||
           (fVar2 < (float)((uint)local_138.M[2][1] & uVar3))) ||
          (fVar36 = UE::Math::TMatrix<float>::Identity.M[0][0],
          fVar37 = UE::Math::TMatrix<float>::Identity.M[0][1],
          fVar38 = UE::Math::TMatrix<float>::Identity.M[0][2],
          fVar23 = UE::Math::TMatrix<float>::Identity.M[0][3],
          fVar24 = UE::Math::TMatrix<float>::Identity.M[1][0],
          fVar25 = UE::Math::TMatrix<float>::Identity.M[1][1],
          fVar26 = UE::Math::TMatrix<float>::Identity.M[1][2],
          fVar27 = UE::Math::TMatrix<float>::Identity.M[1][3],
          fVar28 = UE::Math::TMatrix<float>::Identity.M[2][0],
          fVar29 = UE::Math::TMatrix<float>::Identity.M[2][1],
          fVar30 = UE::Math::TMatrix<float>::Identity.M[2][2],
          fVar31 = UE::Math::TMatrix<float>::Identity.M[2][3],
          fVar32 = UE::Math::TMatrix<float>::Identity.M[3][0],
          fVar33 = UE::Math::TMatrix<float>::Identity.M[3][1],
          fVar34 = UE::Math::TMatrix<float>::Identity.M[3][2],
          fVar35 = UE::Math::TMatrix<float>::Identity.M[3][3],
          fVar2 < (float)((uint)local_138.M[2][2] & uVar3))))) {
        FMath::MatrixInverse(&local_f8,&local_138);
        fVar36 = local_f8.M[0][0];
        fVar37 = local_f8.M[0][1];
        fVar38 = local_f8.M[0][2];
        fVar23 = local_f8.M[0][3];
        fVar24 = local_f8.M[1][0];
        fVar25 = local_f8.M[1][1];
        fVar26 = local_f8.M[1][2];
        fVar27 = local_f8.M[1][3];
        fVar28 = local_f8.M[2][0];
        fVar29 = local_f8.M[2][1];
        fVar30 = local_f8.M[2][2];
        fVar31 = local_f8.M[2][3];
        fVar32 = local_f8.M[3][0];
        fVar33 = local_f8.M[3][1];
        fVar34 = local_f8.M[3][2];
        fVar35 = local_f8.M[3][3];
      }
      local_178[0] = fVar36;
      local_178[1] = fVar37;
      local_178[2] = fVar38;
      local_178[3] = fVar23;
      pfVar18 = local_158;
      local_168[0] = fVar24;
      local_168[1] = fVar25;
      local_168[2] = fVar26;
      local_168[3] = fVar27;
      lVar22 = 3;
      local_158[0] = fVar28;
      local_158[1] = fVar29;
      local_158[2] = fVar30;
      local_158[3] = fVar31;
      local_148 = fVar32;
      fStack_144 = fVar33;
      fStack_140 = fVar34;
      fStack_13c = fVar35;
      do {
        fVar36 = pfVar18[-8];
        uVar12 = 0;
        if ((int)(uVar15 - 2) < *(int *)&this->field_0x20) {
          uVar12 = ~(uVar15 - 2) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar6)();
          return pFVar14;
        }
        *(float *)(uVar16 + *(longlong *)&this->field_0x18) = fVar36;
        fVar36 = pfVar18[-4];
        uVar12 = uVar11;
        if ((int)(uVar15 - 1) < *(int *)&this->field_0x20) {
          uVar12 = ~(uVar15 - 1) >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar6)();
          return pFVar14;
        }
        *(float *)(uVar16 + 4 + *(longlong *)&this->field_0x18) = fVar36;
        fVar36 = *pfVar18;
        uVar12 = uVar11;
        if ((int)uVar15 < *(int *)&this->field_0x20) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar6)();
          return pFVar14;
        }
        uVar15 = uVar15 + 3;
        pfVar18 = pfVar18 + 1;
        *(float *)(uVar16 + 8 + *(longlong *)&this->field_0x18) = fVar36;
        uVar16 = uVar16 + 0xc;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      puVar1 = &this->field_0xb0;
      uVar17 = ~uVar20 >> 0x1f;
      uVar12 = uVar11;
      if ((int)uVar20 < *(int *)&this->field_0xb8) {
        uVar12 = uVar17;
      }
      fVar38 = (local_138.M[2][2] * local_138.M[1][1] - local_138.M[2][1] * local_138.M[1][2]) *
               local_138.M[0][0];
      fVar37 = (local_138.M[2][1] * local_138.M[1][0] - local_138.M[2][0] * local_138.M[1][1]) *
               local_138.M[0][2];
      fVar36 = (local_138.M[2][2] * local_138.M[1][0] - local_138.M[2][0] * local_138.M[1][2]) *
               local_138.M[0][1];
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar6)();
        return pFVar14;
      }
      *(float *)(local_1b8 + *(longlong *)puVar1) = ((fVar38 - fVar36) + fVar37) * fVar8;
      uVar12 = uVar11;
      if ((int)uVar20 < *(int *)&this->field_0xb8) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                  (*pcVar6)();
        return pFVar14;
      }
      if (*(float *)(local_1b8 + *(longlong *)puVar1) <= 0.0 &&
          *(float *)(local_1b8 + *(longlong *)puVar1) != 0.0) {
        uVar12 = uVar11;
        if ((int)uVar20 < *(int *)&this->field_0xb8) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar6)();
          return pFVar14;
        }
        uVar12 = *(uint *)(local_1b8 + *(longlong *)puVar1);
        uVar13 = uVar11;
        if ((int)uVar20 < *(int *)&this->field_0xb8) {
          uVar13 = uVar17;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar14 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
                    (*pcVar6)();
          return pFVar14;
        }
        *(uint *)(local_1b8 + *(longlong *)puVar1) = uVar12 ^ uVar7;
      }
      local_1b8 = local_1b8 + 4;
      uVar21 = (ulonglong)(uVar20 + 1);
    } while ((int)(uVar20 + 1) < local_188->ArrayNum);
  }
  pFVar9 = local_190;
  pTVar19 = &this->ElementsPerColor;
  FGraphColoring::ComputeGraphColoringParticlesOrRange<Chaos::TDynamicParticles<float,3>,4,1>
            (&local_1b0,
             (TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)&this->field_0xa0,
             (TDynamicParticles<float,3> *)local_190,0,(int)local_190->_padding_);
  if (pTVar19 != &local_1b0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar19->AllocatorInstance).Data,
               (this->ElementsPerColor).ArrayNum);
    pFVar5 = (pTVar19->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar19->AllocatorInstance).Data = local_1b0.AllocatorInstance.Data;
    (this->ElementsPerColor).ArrayNum = local_1b0.ArrayNum;
    (this->ElementsPerColor).ArrayMax = local_1b0.ArrayMax;
    local_1b0.ArrayMax = 0;
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data,
             local_1b0.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_1b0.AllocatorInstance.Data);
  }
  Init(this,pFVar9,0.0);
  WriteGridNodes(this);
  return this;
}

// operator() @ 143a3e690

void __thiscall
`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FinalG2P'::
__l2::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector<float,3> *pTVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_res18;
  TVector<int,3>_u_0 local_d8 [13];
  
  uVar21 = (ulonglong)param_1;
  pTVar12 = Chaos::Softs::FSolverParticles::P(*(FSolverParticles **)this,param_1);
  local_res18 = 0;
  *(undefined8 *)pTVar12 = 0;
  *(undefined4 *)&pTVar12->field_0x8 = 0;
  fVar8 = __real_3fc00000;
  fVar7 = __real_3e800000;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  lVar18 = *(longlong *)((longlong)this + 8);
  if (0 < *(int *)(lVar18 + 0x1d8)) {
    uVar16 = (uint)~param_1 >> 0x1f;
    uVar22 = uVar21;
    do {
      uVar10 = 0;
      if ((int)uVar22 < *(int *)(lVar18 + 0x200)) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar26 = *(float *)(*(longlong *)(lVar18 + 0x1f8) + uVar21 * 0xc);
      if (*(int *)(lVar18 + 0x1d4) == 1) {
        fVar26 = ((fVar26 + fVar26) - fVar5) * (float)local_res18 + (fVar5 - fVar26);
      }
      else {
        fVar23 = (float)local_res18 - fVar5;
        fVar26 = ((((fVar26 * fVar26 - fVar26) * fVar8 - fVar7) * fVar23 + (fVar26 * fVar6 - fVar7))
                  * fVar23 - fVar26 * fVar26) + fVar26 + fVar6;
      }
      lVar18 = *(longlong *)((longlong)this + 8);
      iVar20 = 0;
      if (0 < *(int *)(lVar18 + 0x1d8)) {
        do {
          uVar10 = 0;
          if ((int)uVar22 < *(int *)(lVar18 + 0x200)) {
            uVar10 = uVar16;
          }
          if ((uVar10 == 0) &&
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
          fVar23 = *(float *)(*(longlong *)(lVar18 + 0x1f8) + 4 + uVar21 * 0xc);
          if (*(int *)(lVar18 + 0x1d4) == 1) {
            fVar23 = ((fVar23 + fVar23) - fVar5) * (float)iVar20 + (fVar5 - fVar23);
          }
          else {
            fVar25 = (float)iVar20 - fVar5;
            fVar23 = ((((fVar23 * fVar23 - fVar23) * fVar8 - fVar7) * fVar25 +
                      (fVar23 * fVar6 - fVar7)) * fVar25 - fVar23 * fVar23) + fVar23 + fVar6;
          }
          lVar18 = *(longlong *)((longlong)this + 8);
          iVar19 = 0;
          if (0 < *(int *)(lVar18 + 0x1d8)) {
            do {
              uVar10 = 0;
              if ((int)uVar22 < *(int *)(lVar18 + 0x200)) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
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
              fVar25 = *(float *)(*(longlong *)(lVar18 + 0x1f8) + 8 + uVar21 * 0xc);
              if (*(int *)(lVar18 + 0x1d4) == 1) {
                fVar25 = ((fVar25 + fVar25) - fVar5) * (float)iVar19 + (fVar5 - fVar25);
              }
              else {
                fVar24 = (float)iVar19 - fVar5;
                fVar25 = ((((fVar25 * fVar25 - fVar25) * fVar8 - fVar7) * fVar24 +
                          (fVar25 * fVar6 - fVar7)) * fVar24 - fVar25 * fVar25) + fVar25 + fVar6;
              }
              lVar18 = *(longlong *)((longlong)this + 8);
              uVar10 = 0;
              if ((int)uVar22 < *(int *)(lVar18 + 0x210)) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
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
              lVar17 = *(longlong *)(lVar18 + 0x208);
              if (*(int *)(lVar18 + 0x1d4) == 1) {
                iVar14 = *(int *)(lVar17 + 4 + uVar21 * 0xc);
                iVar15 = *(int *)(lVar17 + 8 + uVar21 * 0xc);
                iVar13 = local_res18;
              }
              else {
                iVar13 = local_res18 + -1;
                iVar14 = *(int *)(lVar17 + 4 + uVar21 * 0xc) + -1;
                iVar15 = *(int *)(lVar17 + 8 + uVar21 * 0xc) + -1;
              }
              local_d8[0]._s_0.Y = iVar14 + iVar20;
              local_d8[0]._s_0.X = *(int *)(lVar17 + uVar21 * 0xc) + iVar13;
              local_d8[0]._8_4_ = iVar15 + iVar19;
              uVar11 = Chaos::TMPMGrid<float>::FlatIndex
                                 ((TMPMGrid<float> *)(*(longlong *)((longlong)this + 8) + 0x1a4),
                                  (TVector<int,3> *)&local_d8[0]._s_0);
              lVar18 = *(longlong *)((longlong)this + 8);
              lVar17 = (longlong)(int)uVar11;
              uVar10 = 0;
              if ((int)uVar11 < *(int *)(lVar18 + 0x2c8)) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
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
              lVar18 = *(longlong *)(lVar18 + 0x2c0);
              lVar3 = *(longlong *)this;
              uVar22 = (ulonglong)(uint)param_1;
              fVar25 = fVar26 * fVar23 * fVar25;
              fVar24 = *(float *)(lVar18 + lVar17 * 0xc);
              fVar1 = *(float *)(lVar18 + 4 + lVar17 * 0xc);
              fVar2 = *(float *)(lVar18 + 8 + lVar17 * 0xc);
              uVar10 = 0;
              if (param_1 < *(int *)(lVar3 + 0xb0)) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
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
              lVar18 = *(longlong *)(lVar3 + 0xa8);
              iVar19 = iVar19 + 1;
              *(float *)(lVar18 + uVar21 * 0x10) =
                   fVar25 * fVar24 + *(float *)(lVar18 + uVar21 * 0x10);
              *(float *)(lVar18 + 4 + uVar21 * 0x10) =
                   fVar25 * fVar1 + *(float *)(lVar18 + 4 + uVar21 * 0x10);
              *(float *)(lVar18 + 8 + uVar21 * 0x10) =
                   fVar25 * fVar2 + *(float *)(lVar18 + 8 + uVar21 * 0x10);
              lVar18 = *(longlong *)((longlong)this + 8);
            } while (iVar19 < *(int *)(lVar18 + 0x1d8));
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(lVar18 + 0x1d8));
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < *(int *)(lVar18 + 0x1d8));
  }
  return;
}

// operator() @ 143a411a0

void __thiscall
`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyInParallel'::__l6::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)this;
  uVar7 = **(uint **)((longlong)this + 8);
  uVar6 = 0;
  if ((int)uVar7 < *(int *)(lVar2 + 0x2a8)) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x2a0);
  uVar6 = **(uint **)((longlong)this + 0x10);
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar2 + 8 + (longlong)(int)uVar7 * 0x10)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + (longlong)(int)uVar7 * 0x10);
  uVar7 = 0;
  if (param_1 < *(int *)(lVar2 + 8 + (longlong)(int)uVar6 * 0x10)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = *(int *)(*(longlong *)(lVar2 + (longlong)(int)uVar6 * 0x10) + (longlong)param_1 * 4);
  Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyPolar
            (*(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)this,
             *(FSolverParticles **)((longlong)this + 0x18),**(float **)((longlong)this + 0x20),iVar1
            );
  Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyDet
            (*(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **)this,
             *(FSolverParticles **)((longlong)this + 0x18),**(float **)((longlong)this + 0x20),iVar1
            );
  return;
}

// ApplyDet @ 143a4d930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyDet
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_178 [32];
  longlong local_138;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_130;
  float local_120 [2];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  TVector<Chaos::TVector<float,3>,4> local_100;
  TVector<Chaos::TVector<float,3>,4> local_d0;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_178;
  lVar18 = (longlong)param_3;
  TMPMTransfer<float>::SparseG2P(&this->MPMTransfer,&local_100,&this->GridPositions,param_3);
  local_120[0] = 0.0;
  GetDetGradient(this,&local_d0,&local_100,param_3,local_120,__real_38d1b717);
  if (local_120[0] != 0.0) {
    TMPMTransfer<float>::SparseP2G(&this->MPMTransfer,&local_130,&local_d0,param_3);
    uVar12 = (uint)~param_3 >> 0x1f;
    uVar16 = 0;
    if (param_3 < *(int *)&this->field_0xb8) {
      uVar16 = uVar12;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar21 = param_3 * 2 + 1;
    local_118 = CONCAT44(local_118._4_4_,~uVar21 >> 0x1f);
    uVar16 = 0;
    if ((int)uVar21 < *(int *)&this->field_0x10) {
      uVar16 = ~uVar21 >> 0x1f;
    }
    fVar23 = __real_40000000 /
             (*(float *)(*(longlong *)&this->field_0xb0 + lVar18 * 4) * *(float *)&this->field_0x48
             * param_2 * param_2);
    local_110 = lVar18;
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar16 = 0;
    fVar24 = (float)((uint)local_120[0] ^ __xmm_80000000800000008000000080000000);
    local_108 = (longlong)(int)uVar21;
    lVar18 = local_110 * 0x10;
    lVar20 = 0;
    fVar22 = fVar23 * *(float *)(*(longlong *)&this->field_0x8 + local_108 * 4);
    local_138 = 0;
    while( true ) {
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar21 = uVar12;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data +
                  lVar18 + 8) <= (int)uVar16) break;
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodes.ArrayNum) {
        uVar21 = uVar12;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->MPMTransfer).ElementGridNodes.AllocatorInstance.Data;
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar21 = uVar12;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data;
      uVar17 = ~uVar16 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar16 < *(int *)(pFVar7 + lVar18 + 8)) {
        uVar21 = uVar17;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = *(longlong *)(pFVar7 + lVar18);
      if ((*(int *)(lVar19 + 8 + local_138) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = **(uint **)(lVar19 + local_138);
      uVar14 = 0;
      if ((int)uVar21 < *(int *)(pFVar6 + lVar18 + 8)) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar14 = ((this->MPMTransfer).NTransfer + 1) *
               *(int *)(*(longlong *)(pFVar6 + lVar18) + (longlong)(int)uVar21 * 4);
      uVar21 = 0;
      if ((int)uVar14 < (this->GridData).ArrayNum) {
        uVar21 = ~uVar14 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar1 = *(float *)((this->GridData).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      if (fVar1 != 0.0) {
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar9.Data = local_130.AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar2 = *(float *)(local_130.AllocatorInstance.Data + lVar20);
        fVar3 = *(float *)(FVar9.Data + lVar20);
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar9.Data = local_130.AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar4 = *(float *)(local_130.AllocatorInstance.Data + lVar20 + 4);
        fVar5 = *(float *)(FVar9.Data + lVar20 + 4);
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar9.Data = local_130.AllocatorInstance.Data;
        uVar21 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar23 = fVar23 + (*(float *)(local_130.AllocatorInstance.Data + lVar20 + 8) *
                           *(float *)(FVar9.Data + lVar20 + 8) + fVar4 * fVar5 + fVar2 * fVar3) /
                          fVar1;
      }
      local_138 = local_138 + 0x10;
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0xc;
    }
    iVar13 = param_3 * 2 + 1;
    fVar23 = (fVar24 - fVar22) / fVar23;
    iVar11 = 0;
    if (iVar13 < *(int *)&this->field_0x10) {
      iVar11 = (int)local_118;
    }
    lVar20 = local_108;
    if (iVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      lVar20 = (longlong)iVar13;
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    fVar22 = __real_3f800000;
    uVar16 = 0;
    local_118 = 0;
    lVar19 = 0;
    *(float *)(*(longlong *)&this->field_0x8 + lVar20 * 4) =
         fVar23 + *(float *)(*(longlong *)&this->field_0x8 + lVar20 * 4);
    while( true ) {
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar21 = uVar12;
      }
      local_110 = lVar19;
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data +
                  lVar18 + 8) <= (int)uVar16) break;
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodes.ArrayNum) {
        uVar21 = uVar12;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->MPMTransfer).ElementGridNodes.AllocatorInstance.Data;
      uVar21 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar21 = uVar12;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data;
      uVar17 = ~uVar16 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar16 < *(int *)(pFVar7 + lVar18 + 8)) {
        uVar21 = uVar17;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar20 = *(longlong *)(pFVar7 + lVar18);
      if ((*(int *)(lVar20 + 8 + lVar19) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = **(uint **)(lVar20 + lVar19);
      uVar14 = 0;
      if ((int)uVar21 < *(int *)(pFVar6 + lVar18 + 8)) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar21 = *(uint *)(*(longlong *)(pFVar6 + lVar18) + (longlong)(int)uVar21 * 4);
      lVar20 = (longlong)(int)uVar21;
      uVar15 = ((this->MPMTransfer).NTransfer + 1) * uVar21;
      uVar14 = 0;
      if ((int)uVar15 < (this->GridData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar24 = *(float *)((this->GridData).AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
      if (fVar24 != 0.0) {
        uVar14 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar15 = ~uVar21 >> 0x1f;
        fVar1 = *(float *)(local_130.AllocatorInstance.Data + local_118);
        uVar14 = 0;
        if ((int)uVar21 < (this->GridPositions).ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar20 * 0xc) =
             fVar23 * fVar1 * (fVar22 / fVar24) + *(float *)(pFVar6 + lVar20 * 0xc);
        uVar14 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar1 = *(float *)(local_130.AllocatorInstance.Data + local_118 + 4);
        uVar14 = 0;
        if ((int)uVar21 < (this->GridPositions).ArrayNum) {
          uVar14 = uVar15;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar20 * 0xc + 4) =
             fVar23 * fVar1 * (fVar22 / fVar24) + *(float *)(pFVar6 + lVar20 * 0xc + 4);
        uVar14 = 0;
        if ((int)uVar16 < local_130.ArrayNum) {
          uVar14 = uVar17;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar1 = *(float *)(local_130.AllocatorInstance.Data + local_118 + 8);
        uVar17 = 0;
        if ((int)uVar21 < (this->GridPositions).ArrayNum) {
          uVar17 = uVar15;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar20 * 0xc + 8) =
             (fVar23 * fVar1) / fVar24 + *(float *)(pFVar6 + lVar20 * 0xc + 8);
      }
      uVar16 = uVar16 + 1;
      lVar19 = local_110 + 0x10;
      local_118 = local_118 + 0xc;
    }
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyInParallel @ 143a4e950

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
ApplyInParallel(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
               FSolverParticles *param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint local_res8 [2];
  float local_res18 [2];
  uint local_res20 [2];
  code *local_78;
  FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> **local_70;
  FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_68;
  uint *local_60;
  uint *local_58;
  FSolverParticles *local_50;
  float *local_48;
  
  local_res20[0] = 0;
  local_res18[0] = param_2;
  if (0 < (this->ElementsPerSubColors).ArrayNum) {
    do {
      local_res8[0] = 0;
      while( true ) {
        lVar5 = (longlong)(int)local_res20[0];
        uVar4 = 0;
        if ((int)local_res20[0] < (this->ElementsPerSubColors).ArrayNum) {
          uVar4 = ~local_res20[0] >> 0x1f;
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
        if (*(int *)((this->ElementsPerSubColors).AllocatorInstance.Data + lVar5 * 0x10 + 8) <=
            (int)local_res8[0]) break;
        lVar5 = (longlong)(int)local_res20[0];
        uVar4 = 0;
        if ((int)local_res20[0] < (this->ElementsPerSubColors).ArrayNum) {
          uVar4 = ~local_res20[0] >> 0x1f;
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
        lVar6 = (longlong)(int)local_res8[0];
        pFVar7 = (this->ElementsPerSubColors).AllocatorInstance.Data + lVar5 * 0x10;
        uVar4 = 0;
        if ((int)local_res8[0] < *(int *)(pFVar7 + 8)) {
          uVar4 = ~local_res8[0] >> 0x1f;
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
        lVar5 = (longlong)(int)local_res20[0];
        iVar1 = *(int *)(*(longlong *)pFVar7 + 8 + lVar6 * 0x10);
        local_60 = local_res20;
        local_58 = local_res8;
        local_48 = local_res18;
        local_70 = &local_68;
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyInParallel'::__l6::<lambda_1>,void,int>
                   ::Call;
        uVar4 = 0;
        if ((int)local_res20[0] < (this->ElementsPerSubColors).ArrayNum) {
          uVar4 = ~local_res20[0] >> 0x1f;
        }
        local_68 = this;
        local_50 = param_1;
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
        lVar6 = (longlong)(int)local_res8[0];
        pFVar7 = (this->ElementsPerSubColors).AllocatorInstance.Data + lVar5 * 0x10;
        uVar4 = 0;
        if ((int)local_res8[0] < *(int *)(pFVar7 + 8)) {
          uVar4 = ~local_res8[0] >> 0x1f;
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
        PhysicsParallelFor(*(int *)(*(longlong *)pFVar7 + 8 + lVar6 * 0x10),
                           (TFunctionRef<void___cdecl(int)> *)&local_78,iVar1 < 0x1e);
        local_res8[0] = local_res8[0] + 1;
      }
      local_res20[0] = local_res20[0] + 1;
    } while ((int)local_res20[0] < (this->ElementsPerSubColors).ArrayNum);
  }
  return;
}

// ApplyPolar @ 143a4ffd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ApplyPolar
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackY_198 [32];
  longlong local_158;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_150;
  float local_140 [2];
  longlong local_138;
  uint local_130;
  longlong local_128;
  ulonglong local_120;
  TVector<Chaos::TVector<float,3>,4> local_118;
  TVector<Chaos::TVector<float,3>,4> local_e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_198;
  uVar21 = (ulonglong)param_3;
  TMPMTransfer<float>::SparseG2P(&this->MPMTransfer,&local_118,&this->GridPositions,param_3);
  local_140[0] = 0.0;
  GetPolarGradient(this,&local_e8,&local_118,param_3,local_140,__real_38d1b717);
  if (local_140[0] != 0.0) {
    TMPMTransfer<float>::SparseP2G(&this->MPMTransfer,&local_150,&local_e8,param_3);
    local_130 = (uint)~param_3 >> 0x1f;
    uVar17 = 0;
    if (param_3 < *(int *)&this->field_0xb8) {
      uVar17 = local_130;
    }
    if ((uVar17 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar9 = __real_3f800000;
    uVar17 = param_3 * 2;
    uVar16 = 0;
    if ((int)uVar17 < *(int *)&this->field_0x10) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    local_138 = CONCAT44(local_138._4_4_,~uVar17 >> 0x1f);
    fVar24 = __real_3f800000 /
             (*(float *)(*(longlong *)&this->field_0xb0 + uVar21 * 4) * *(float *)&this->field_0x44
             * param_2 * param_2);
    local_120 = uVar21;
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar16 = 0;
    fVar25 = (float)((uint)local_140[0] ^ __xmm_80000000800000008000000080000000);
    local_128 = (longlong)(int)uVar17;
    lVar15 = uVar21 * 0x10;
    lVar19 = 0;
    fVar23 = fVar24 * *(float *)(*(longlong *)&this->field_0x8 + local_128 * 4);
    local_158 = 0;
    while( true ) {
      uVar17 = local_130;
      iVar20 = (int)uVar21;
      uVar18 = 0;
      if (iVar20 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar18 = local_130;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data +
                  lVar15 + 8) <= (int)uVar16) break;
      uVar18 = 0;
      if (iVar20 < (this->MPMTransfer).ElementGridNodes.ArrayNum) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->MPMTransfer).ElementGridNodes.AllocatorInstance.Data;
      uVar18 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data;
      uVar18 = ~uVar16 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar16 < *(int *)(pFVar7 + lVar15 + 8)) {
        uVar17 = uVar18;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar22 = *(longlong *)(pFVar7 + lVar15);
      if ((*(int *)(lVar22 + 8 + local_158) < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = **(uint **)(lVar22 + local_158);
      uVar13 = 0;
      if ((int)uVar17 < *(int *)(pFVar6 + lVar15 + 8)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = ((this->MPMTransfer).NTransfer + 1) *
               *(int *)(*(longlong *)(pFVar6 + lVar15) + (longlong)(int)uVar17 * 4);
      uVar17 = 0;
      if ((int)uVar13 < (this->GridData).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar1 = *(float *)((this->GridData).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
      if (fVar1 != 0.0) {
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar10.Data = local_150.AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar2 = *(float *)(local_150.AllocatorInstance.Data + lVar19);
        fVar3 = *(float *)(FVar10.Data + lVar19);
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar10.Data = local_150.AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar4 = *(float *)(local_150.AllocatorInstance.Data + lVar19 + 4);
        fVar5 = *(float *)(FVar10.Data + lVar19 + 4);
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar10.Data = local_150.AllocatorInstance.Data;
        uVar17 = 0;
        if ((int)uVar16 < local_150.ArrayNum) {
          uVar17 = uVar18;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar24 = fVar24 + (*(float *)(local_150.AllocatorInstance.Data + lVar19 + 8) *
                           *(float *)(FVar10.Data + lVar19 + 8) + fVar4 * fVar5 + fVar2 * fVar3) /
                          fVar1;
      }
      local_158 = local_158 + 0x10;
      uVar16 = uVar16 + 1;
      uVar21 = (ulonglong)(uint)param_3;
      lVar19 = lVar19 + 0xc;
    }
    fVar24 = (fVar25 - fVar23) / fVar24;
    iVar12 = 0;
    if (iVar20 * 2 < *(int *)&this->field_0x10) {
      iVar12 = (int)local_138;
    }
    lVar19 = local_128;
    if (iVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      lVar19 = (longlong)(iVar20 * 2);
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar17 = 0;
    local_138 = 0;
    lVar22 = 0;
    *(float *)(*(longlong *)&this->field_0x8 + lVar19 * 4) =
         fVar24 + *(float *)(*(longlong *)&this->field_0x8 + lVar19 * 4);
    while( true ) {
      uVar16 = local_130;
      uVar18 = 0;
      if ((int)uVar21 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar18 = local_130;
      }
      local_128 = lVar22;
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(int *)((this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data +
                  lVar15 + 8) <= (int)uVar17) break;
      uVar18 = 0;
      if ((int)uVar21 < (this->MPMTransfer).ElementGridNodes.ArrayNum) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (this->MPMTransfer).ElementGridNodes.AllocatorInstance.Data;
      uVar18 = 0;
      if (param_3 < (this->MPMTransfer).ElementGridNodeIncidentElements.ArrayNum) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->MPMTransfer).ElementGridNodeIncidentElements.AllocatorInstance.Data;
      uVar18 = ~uVar17 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar17 < *(int *)(pFVar7 + lVar15 + 8)) {
        uVar16 = uVar18;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = *(longlong *)(pFVar7 + lVar15);
      if ((*(int *)(lVar22 + 8 + lVar19) < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = **(uint **)(lVar22 + lVar19);
      uVar13 = 0;
      if ((int)uVar16 < *(int *)(pFVar6 + lVar15 + 8)) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = *(uint *)(*(longlong *)(pFVar6 + lVar15) + (longlong)(int)uVar16 * 4);
      lVar19 = (longlong)(int)uVar16;
      uVar14 = ((this->MPMTransfer).NTransfer + 1) * uVar16;
      uVar13 = 0;
      if ((int)uVar14 < (this->GridData).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      fVar23 = *(float *)((this->GridData).AllocatorInstance.Data + (longlong)(int)uVar14 * 4);
      if (fVar23 != 0.0) {
        uVar13 = 0;
        if ((int)uVar17 < local_150.ArrayNum) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar14 = ~uVar16 >> 0x1f;
        fVar25 = *(float *)(local_150.AllocatorInstance.Data + local_138);
        uVar13 = 0;
        if ((int)uVar16 < (this->GridPositions).ArrayNum) {
          uVar13 = uVar14;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar19 * 0xc) =
             fVar24 * fVar25 * (fVar9 / fVar23) + *(float *)(pFVar6 + lVar19 * 0xc);
        uVar13 = 0;
        if ((int)uVar17 < local_150.ArrayNum) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar25 = *(float *)(local_150.AllocatorInstance.Data + local_138 + 4);
        uVar13 = 0;
        if ((int)uVar16 < (this->GridPositions).ArrayNum) {
          uVar13 = uVar14;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar19 * 0xc + 4) =
             fVar24 * fVar25 * (fVar9 / fVar23) + *(float *)(pFVar6 + lVar19 * 0xc + 4);
        uVar13 = 0;
        if ((int)uVar17 < local_150.ArrayNum) {
          uVar13 = uVar18;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar25 = *(float *)(local_150.AllocatorInstance.Data + local_138 + 8);
        uVar18 = 0;
        if ((int)uVar16 < (this->GridPositions).ArrayNum) {
          uVar18 = uVar14;
        }
        if ((uVar18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar6 = (this->GridPositions).AllocatorInstance.Data;
        *(float *)(pFVar6 + lVar19 * 0xc + 8) =
             (fVar24 * fVar25) / fVar23 + *(float *)(pFVar6 + lVar19 * 0xc + 8);
      }
      uVar17 = uVar17 + 1;
      lVar22 = local_128 + 0x10;
      uVar21 = (ulonglong)(uint)param_3;
      local_138 = local_138 + 0xc;
    }
    if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.AllocatorInstance.Data);
    }
  }
  return;
}

// Ds @ 143a65a60

PMatrix<float,3,3> * __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Ds
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          PMatrix<float,3,3> *__return_storage_ptr__,TVector<Chaos::TVector<float,3>,4> *param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  PMatrix<float,3,3> *pPVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x3f800000;
  pfVar5 = (float *)&__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  pfVar7 = (float *)&param_1->V[1].field_0x4;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *pfVar5 = 0.0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  iVar6 = 1;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  lVar8 = 3;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = 0;
  do {
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x90,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pPVar4 = (PMatrix<float,3,3> *)(*pcVar2)();
        return pPVar4;
      }
    }
    else if ((3 < iVar6) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                ,0x91,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pPVar4 = (PMatrix<float,3,3> *)(*pcVar2)();
      return pPVar4;
    }
    *(float *)(pfVar5 + -2) = pfVar7[-1] - *(float *)param_1->V;
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x90,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pPVar4 = (PMatrix<float,3,3> *)(*pcVar2)();
        return pPVar4;
      }
    }
    else if ((3 < iVar6) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                ,0x91,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pPVar4 = (PMatrix<float,3,3> *)(*pcVar2)();
      return pPVar4;
    }
    pfVar5[-1] = *pfVar7 - *(float *)&param_1->V[0].field_0x4;
    if (iVar6 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                         ,0x90,L"");
      if (bVar3) {
code_r0x000143a65c1d:
        pcVar2 = (code *)swi(3);
        pPVar4 = (PMatrix<float,3,3> *)(*pcVar2)();
        return pPVar4;
      }
    }
    else if ((3 < iVar6) &&
            (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                ,0x91,L""), bVar3)) goto code_r0x000143a65c1d;
    pfVar1 = pfVar7 + 1;
    iVar6 = iVar6 + 1;
    pfVar7 = pfVar7 + 3;
    *pfVar5 = *pfVar1 - *(float *)&param_1->V[0].field_0x8;
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetDetGradient @ 143a69280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
GetDetGradient(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
              TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,
              TVector<Chaos::TVector<float,3>,4> *param_1,int param_2,float *param_3,float param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  PMatrix<float,3,3> *pPVar7;
  PMatrix<float,3,3> *pPVar8;
  TVector<Chaos::TVector<float,3>,4> *pTVar9;
  char *pcVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_348 [40];
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  float local_2e8 [8];
  float local_2c8 [4];
  float local_2b8 [2];
  float afStack_2b0 [2];
  TMatrix<float> local_2a8;
  TMatrix<float> local_268;
  TMatrix<float> local_228;
  TMatrix<float> local_1e8;
  PMatrix<float,3,3> local_1a8;
  PMatrix<float,3,3> local_168;
  PMatrix<float,3,3> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_348;
  pPVar7 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                     ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                      &local_1a8,param_2);
  pPVar8 = Ds(this,&local_168,param_1);
  VectorMatrixMultiply(&local_228,(TMatrix<float> *)pPVar7,(TMatrix<float> *)pPVar8);
  pPVar7 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                     ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                      &local_128,param_2);
  uVar4 = _UNK_150689648;
  uVar2 = ___xmm_3f800000000000000000000000000000;
  local_268.M[1][2] = *(float *)&pPVar7->field_0x24;
  local_268.M[2][2] = *(float *)&pPVar7->field_0x28;
  local_268.M[0][2] = *(float *)&pPVar7->field_0x20;
  local_268.M[2][1] = *(float *)&pPVar7->field_0x18;
  local_268.M[1][1] = *(float *)&pPVar7->field_0x14;
  local_268.M[0][1] = *(float *)&pPVar7->field_0x10;
  local_268.M[2][0] = *(float *)&pPVar7->field_0x8;
  local_268.M[1][0] = *(float *)&pPVar7->field_0x4;
  local_268.M[0][0] = *(float *)pPVar7;
  local_268.M[0][3] = 0.0;
  local_268.M[1][3] = 0.0;
  local_268.M[2][3] = 0.0;
  local_2a8.M[0][2] = local_228.M[2][1] * local_228.M[1][0] - local_228.M[1][1] * local_228.M[2][0];
  local_2a8.M[0][0] = local_228.M[2][2] * local_228.M[1][1] - local_228.M[1][2] * local_228.M[2][1];
  local_268.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_268.M[3][1] = _UNK_150689644;
  local_268.M[3][2] = _UNK_150689648;
  local_268.M[3][3] = _UNK_15068964c;
  fVar16 = ((local_2a8.M[0][0] * local_228.M[0][0] -
            (local_228.M[2][2] * local_228.M[1][0] - local_228.M[1][2] * local_228.M[2][0]) *
            local_228.M[0][1]) + local_2a8.M[0][2] * local_228.M[0][2]) - __real_3f800000;
  if (param_4 <= fVar16) {
    *param_3 = fVar16;
    uVar5 = _UNK_150689648;
    uVar3 = ___xmm_3f800000000000000000000000000000;
    local_320 = 0;
    uStack_318 = 0;
    local_2a8.M[0][3] = 0.0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_2a8.M[1][3] = 0.0;
    local_310 = 0;
    uStack_308 = 0;
    local_2a8.M[2][3] = 0.0;
    local_2a8.M[0][1] =
         local_228.M[1][2] * local_228.M[2][0] - local_228.M[2][2] * local_228.M[1][0];
    ___xmm_3f800000000000000000000000000000 = (float)uVar2;
    _UNK_150689644 = SUB84(uVar2,4);
    local_2a8.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_2a8.M[3][1] = _UNK_150689644;
    _UNK_150689648 = (float)uVar4;
    _UNK_15068964c = SUB84(uVar4,4);
    local_2a8.M[3][2] = _UNK_150689648;
    local_2a8.M[3][3] = _UNK_15068964c;
    local_2a8.M[1][0] =
         local_228.M[0][2] * local_228.M[2][1] - local_228.M[0][1] * local_228.M[2][2];
    local_2a8.M[2][0] =
         local_228.M[0][1] * local_228.M[1][2] - local_228.M[0][2] * local_228.M[1][1];
    local_2a8.M[1][1] =
         local_228.M[0][0] * local_228.M[2][2] - local_228.M[0][2] * local_228.M[2][0];
    local_2a8.M[2][1] =
         local_228.M[0][2] * local_228.M[1][0] - local_228.M[0][0] * local_228.M[1][2];
    local_2a8.M[1][2] =
         local_228.M[0][1] * local_228.M[2][0] - local_228.M[0][0] * local_228.M[2][1];
    local_2a8.M[2][2] =
         local_228.M[0][0] * local_228.M[1][1] - local_228.M[0][1] * local_228.M[1][0];
    ___xmm_3f800000000000000000000000000000 = uVar3;
    _UNK_150689648 = uVar5;
    VectorMatrixMultiply(&local_1e8,&local_268,&local_2a8);
    pfVar11 = (float *)&local_310;
    pfVar13 = local_2e8 + 1;
    local_2e8[0] = local_1e8.M[0][0];
    local_2e8[1] = local_1e8.M[0][1];
    local_2e8[2] = local_1e8.M[0][2];
    local_2e8[3] = local_1e8.M[0][3];
    iVar12 = 1;
    lVar15 = 3;
    local_2e8[4] = local_1e8.M[1][0];
    local_2e8[5] = local_1e8.M[1][1];
    local_2e8[6] = local_1e8.M[1][2];
    local_2e8[7] = local_1e8.M[1][3];
    local_2c8[0] = local_1e8.M[2][0];
    local_2c8[1] = local_1e8.M[2][1];
    local_2c8[2] = local_1e8.M[2][2];
    local_2c8[3] = local_1e8.M[2][3];
    local_2b8[0] = local_1e8.M[3][0];
    local_2b8[1] = local_1e8.M[3][1];
    afStack_2b0[0] = local_1e8.M[3][2];
    afStack_2b0[1] = local_1e8.M[3][3];
    do {
      fVar16 = pfVar13[-1];
      if (iVar12 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x86,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
          return pTVar9;
        }
      }
      else if (3 < iVar12) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x87,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
          return pTVar9;
        }
      }
      pfVar11[-1] = fVar16;
      fVar16 = *pfVar13;
      if (iVar12 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x86,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
          return pTVar9;
        }
      }
      else if (3 < iVar12) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,0x87,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
          return pTVar9;
        }
      }
      *pfVar11 = fVar16;
      fVar16 = pfVar13[1];
      if (iVar12 < 0) {
        iVar14 = 0x86;
        pcVar10 = "Index >= 0";
LAB_143a696de:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          (pcVar10,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                           ,iVar14,L"");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          pTVar9 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar1)();
          return pTVar9;
        }
      }
      else if (3 < iVar12) {
        iVar14 = 0x87;
        pcVar10 = "Index < NumElements";
        goto LAB_143a696de;
      }
      pfVar11[1] = fVar16;
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 3;
      pfVar13 = pfVar13 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    lVar15 = 0;
    do {
      *(float *)((longlong)&local_320 + lVar15) =
           ((*(float *)((longlong)&local_320 + lVar15) - *(float *)((longlong)local_2e8 + lVar15)) -
           *(float *)((longlong)local_2e8 + lVar15 + 0x10)) -
           *(float *)((longlong)local_2c8 + lVar15);
      lVar15 = lVar15 + 4;
    } while (lVar15 < 0xc);
    *(undefined8 *)__return_storage_ptr__->V = local_320;
    *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = uStack_318;
    *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = local_310;
    *(undefined8 *)(__return_storage_ptr__->V + 2) = uStack_308;
    *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = local_300;
    *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = uStack_2f8;
  }
  else {
    *param_3 = 0.0;
    *(undefined8 *)__return_storage_ptr__->V = 0;
    *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = 0;
    *(undefined8 *)(__return_storage_ptr__->V + 2) = 0;
    *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = 0;
  }
  return __return_storage_ptr__;
}

// GetPolarGradient @ 143a6e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<Chaos::TVector<float,3>,4> * __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
GetPolarGradient(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
                TVector<Chaos::TVector<float,3>,4> *__return_storage_ptr__,
                TVector<Chaos::TVector<float,3>,4> *param_1,int param_2,float *param_3,float param_4
                )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  PMatrix<float,3,3> *pPVar12;
  PMatrix<float,3,3> *pPVar13;
  TVector<Chaos::TVector<float,3>,4> *pTVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  float fVar25;
  undefined1 auStack_6e8 [32];
  longlong local_6c8;
  float *local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  float local_698 [14];
  float afStack_660 [2];
  longlong local_658;
  TVector<Chaos::TVector<float,3>,4> *local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  float local_618 [4];
  float local_608 [4];
  float local_5f8 [4];
  float local_5e8 [2];
  float afStack_5e0 [2];
  float local_5d8 [4];
  float local_5c8 [4];
  float local_5b8 [4];
  float local_5a8 [2];
  float afStack_5a0 [2];
  float local_598 [6];
  float afStack_580 [2];
  float local_578 [2];
  float afStack_570 [2];
  float local_568 [2];
  float afStack_560 [2];
  float local_558 [6];
  float afStack_540 [2];
  float local_538 [2];
  float afStack_530 [2];
  float local_528 [2];
  float afStack_520 [2];
  undefined1 local_518 [56];
  float afStack_4e0 [2];
  TVector<float,81> local_4d8;
  TMatrix<float> local_388;
  TMatrix<float> local_348;
  TMatrix<float> local_308;
  TMatrix<float> local_2c8;
  TMatrix<float> local_288;
  TMatrix<float> local_248;
  TMatrix<float> local_208;
  TMatrix<float> local_1c8;
  PMatrix<float,3,3> local_188;
  PMatrix<float,3,3> local_148;
  PMatrix<float,3,3> local_108;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_6e8;
  local_650 = __return_storage_ptr__;
  pPVar12 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                      ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                       &local_188,param_2);
  pPVar13 = Ds(this,&local_148,param_1);
  VectorMatrixMultiply(&local_1c8,(TMatrix<float> *)pPVar12,(TMatrix<float> *)pPVar13);
  uVar9 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  local_308.M[0][0] = local_1c8.M[0][0];
  local_308.M[0][1] = local_1c8.M[0][1];
  local_308.M[0][2] = local_1c8.M[0][2];
  local_308.M[0][3] = local_1c8.M[0][3];
  local_308.M[1][0] = local_1c8.M[1][0];
  local_308.M[1][1] = local_1c8.M[1][1];
  local_308.M[1][2] = local_1c8.M[1][2];
  local_308.M[1][3] = local_1c8.M[1][3];
  local_308.M[2][0] = local_1c8.M[2][0];
  local_308.M[2][1] = local_1c8.M[2][1];
  local_308.M[2][2] = local_1c8.M[2][2];
  local_308.M[2][3] = local_1c8.M[2][3];
  local_308.M[3][0] = local_1c8.M[3][0];
  local_308.M[3][1] = local_1c8.M[3][1];
  local_308.M[3][2] = local_1c8.M[3][2];
  local_308.M[3][3] = local_1c8.M[3][3];
  local_388.M[0][0] = 0.0;
  local_388.M[0][1] = 0.0;
  local_388.M[1][0] = 0.0;
  local_388.M[1][1] = 0.0;
  local_388.M[2][0] = 0.0;
  local_388.M[2][1] = 0.0;
  local_388.M[0][2] = 0.0;
  local_388.M[0][3] = 0.0;
  local_388.M[1][2] = 0.0;
  local_388.M[1][3] = 0.0;
  local_388.M[2][2] = 0.0;
  local_388.M[2][3] = 0.0;
  local_388.M[3][0] = ___xmm_3f800000000000000000000000000000;
  local_388.M[3][1] = _UNK_150689644;
  local_388.M[3][2] = _UNK_150689648;
  local_388.M[3][3] = _UNK_15068964c;
  local_518._0_8_ = 0;
  local_518._16_8_ = 0;
  local_518._32_8_ = 0;
  local_518._8_8_ = 0;
  local_518._24_8_ = 0;
  local_518._40_8_ = 0;
  local_518._48_4_ = ___xmm_3f800000000000000000000000000000;
  local_518._52_4_ = _UNK_150689644;
  afStack_4e0[0] = _UNK_150689648;
  afStack_4e0[1] = _UNK_15068964c;
  PolarDecomposition<float>
            ((PMatrix<float,3,3> *)&local_308,(PMatrix<float,3,3> *)&local_388,
             (PMatrix<float,3,3> *)local_518);
  uVar10 = _UNK_150689648;
  uVar8 = ___xmm_3f800000000000000000000000000000;
  pfVar15 = local_698 + 8;
  fVar25 = 0.0;
  lVar16 = 3;
  local_698[0] = local_308.M[0][0] - local_388.M[0][0];
  local_698[4] = local_308.M[1][0] - local_388.M[1][0];
  local_698[8] = local_308.M[2][0] - local_388.M[2][0];
  local_698[1] = local_308.M[0][1] - local_388.M[0][1];
  local_698[5] = local_308.M[1][1] - local_388.M[1][1];
  local_698[9] = local_308.M[2][1] - local_388.M[2][1];
  local_698[2] = local_308.M[0][2] - local_388.M[0][2];
  local_698[6] = local_308.M[1][2] - local_388.M[1][2];
  local_698[10] = local_308.M[2][2] - local_388.M[2][2];
  do {
    ___xmm_3f800000000000000000000000000000 = (float)uVar7;
    _UNK_150689644 = SUB84(uVar7,4);
    local_698[0xc] = ___xmm_3f800000000000000000000000000000;
    local_698[0xd] = _UNK_150689644;
    _UNK_150689648 = (float)uVar9;
    _UNK_15068964c = SUB84(uVar9,4);
    afStack_660[0] = _UNK_150689648;
    afStack_660[1] = _UNK_15068964c;
    local_698[3] = 0.0;
    local_698[7] = 0.0;
    local_698[0xb] = 0.0;
    pfVar17 = pfVar15 + -8;
    local_698[3] = 0.0;
    ___xmm_3f800000000000000000000000000000 = (float)uVar7;
    _UNK_150689644 = SUB84(uVar7,4);
    local_698[0xc] = ___xmm_3f800000000000000000000000000000;
    local_698[0xd] = _UNK_150689644;
    _UNK_150689648 = (float)uVar9;
    _UNK_15068964c = SUB84(uVar9,4);
    afStack_660[0] = _UNK_150689648;
    afStack_660[1] = _UNK_15068964c;
    local_698[7] = 0.0;
    local_698[0xb] = 0.0;
    pfVar18 = pfVar15 + -4;
    local_698[3] = 0.0;
    ___xmm_3f800000000000000000000000000000 = (float)uVar7;
    _UNK_150689644 = SUB84(uVar7,4);
    local_698[0xc] = ___xmm_3f800000000000000000000000000000;
    local_698[0xd] = _UNK_150689644;
    _UNK_150689648 = (float)uVar9;
    _UNK_15068964c = SUB84(uVar9,4);
    afStack_660[0] = _UNK_150689648;
    afStack_660[1] = _UNK_15068964c;
    local_698[7] = 0.0;
    local_698[0xb] = 0.0;
    fVar1 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    fVar25 = fVar25 + *pfVar17 * *pfVar17 + *pfVar18 * *pfVar18 + fVar1 * fVar1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  fVar25 = SQRT(fVar25);
  ___xmm_3f800000000000000000000000000000 = uVar8;
  _UNK_150689648 = uVar10;
  if (param_4 <= fVar25) {
    *param_3 = fVar25;
    pPVar12 = FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::ElementDmInv
                        ((FXPBDCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this,
                         &local_108,param_2);
    uVar10 = _UNK_150689648;
    uVar8 = ___xmm_3f800000000000000000000000000000;
    lVar16 = 2;
    local_348.M[0][0] = *(float *)pPVar12;
    local_348.M[2][2] = *(float *)&pPVar12->field_0x28;
    local_348.M[1][2] = *(float *)&pPVar12->field_0x24;
    local_348.M[0][2] = *(float *)&pPVar12->field_0x20;
    local_348.M[2][1] = *(float *)&pPVar12->field_0x18;
    local_348.M[1][1] = *(float *)&pPVar12->field_0x14;
    local_348.M[0][1] = *(float *)&pPVar12->field_0x10;
    local_348.M[2][0] = *(float *)&pPVar12->field_0x8;
    local_348.M[1][0] = *(float *)&pPVar12->field_0x4;
    ___xmm_3f800000000000000000000000000000 = (float)uVar7;
    _UNK_150689644 = SUB84(uVar7,4);
    local_348.M[3][0] = ___xmm_3f800000000000000000000000000000;
    local_348.M[3][1] = _UNK_150689644;
    _UNK_150689648 = (float)uVar9;
    _UNK_15068964c = SUB84(uVar9,4);
    local_348.M[3][2] = _UNK_150689648;
    local_348.M[3][3] = _UNK_15068964c;
    local_348.M[0][3] = 0.0;
    local_348.M[1][3] = 0.0;
    local_348.M[2][3] = 0.0;
    pfVar15 = local_4d8.V;
    do {
      pfVar17 = pfVar15;
      pfVar17[0] = 0.0;
      pfVar17[1] = 0.0;
      pfVar17[2] = 0.0;
      pfVar17[3] = 0.0;
      pfVar17[4] = 0.0;
      pfVar17[5] = 0.0;
      pfVar17[6] = 0.0;
      pfVar17[7] = 0.0;
      pfVar17[8] = 0.0;
      pfVar17[9] = 0.0;
      pfVar17[10] = 0.0;
      pfVar17[0xb] = 0.0;
      pfVar17[0xc] = 0.0;
      pfVar17[0xd] = 0.0;
      pfVar17[0xe] = 0.0;
      pfVar17[0xf] = 0.0;
      pfVar17[0x10] = 0.0;
      pfVar17[0x11] = 0.0;
      pfVar17[0x12] = 0.0;
      pfVar17[0x13] = 0.0;
      pfVar17[0x14] = 0.0;
      pfVar17[0x15] = 0.0;
      pfVar17[0x16] = 0.0;
      pfVar17[0x17] = 0.0;
      pfVar17[0x18] = 0.0;
      pfVar17[0x19] = 0.0;
      pfVar17[0x1a] = 0.0;
      pfVar17[0x1b] = 0.0;
      pfVar15 = pfVar17 + 0x20;
      pfVar17[0x1c] = 0.0;
      pfVar17[0x1d] = 0.0;
      pfVar17[0x1e] = 0.0;
      pfVar17[0x1f] = 0.0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    pfVar15[0] = 0.0;
    pfVar15[1] = 0.0;
    pfVar17[0x22] = 0.0;
    pfVar17[0x23] = 0.0;
    pfVar17[0x24] = 0.0;
    pfVar17[0x25] = 0.0;
    pfVar17[0x26] = 0.0;
    pfVar17[0x27] = 0.0;
    pfVar17[0x28] = 0.0;
    pfVar17[0x29] = 0.0;
    pfVar17[0x2a] = 0.0;
    pfVar17[0x2b] = 0.0;
    pfVar17[0x2c] = 0.0;
    pfVar17[0x2d] = 0.0;
    pfVar17[0x2e] = 0.0;
    pfVar17[0x2f] = 0.0;
    pfVar17[0x30] = 0.0;
    ___xmm_3f800000000000000000000000000000 = uVar8;
    _UNK_150689648 = uVar10;
    dRdFCorotated<float>((PMatrix<float,3,3> *)&local_308,&local_4d8);
    local_648 = 0;
    uStack_640 = 0;
    lVar16 = 0;
    local_638 = 0;
    uStack_630 = 0;
    local_628 = 0;
    uStack_620 = 0;
    do {
      VectorMatrixMultiply(&local_2c8,&local_348,&local_388);
      local_618[0] = local_2c8.M[0][0];
      local_618[1] = local_2c8.M[0][1];
      local_618[2] = local_2c8.M[0][2];
      local_618[3] = local_2c8.M[0][3];
      local_608[0] = local_2c8.M[1][0];
      local_608[1] = local_2c8.M[1][1];
      local_608[2] = local_2c8.M[1][2];
      local_608[3] = local_2c8.M[1][3];
      local_5f8[0] = local_2c8.M[2][0];
      local_5f8[1] = local_2c8.M[2][1];
      local_5f8[2] = local_2c8.M[2][2];
      local_5f8[3] = local_2c8.M[2][3];
      local_5e8[0] = local_2c8.M[3][0];
      local_5e8[1] = local_2c8.M[3][1];
      afStack_5e0[0] = local_2c8.M[3][2];
      afStack_5e0[1] = local_2c8.M[3][3];
      VectorMatrixMultiply(&local_288,&local_348,&local_308);
      fVar1 = *(float *)((longlong)local_618 + lVar16);
      local_5d8[0] = local_288.M[0][0];
      local_5d8[1] = local_288.M[0][1];
      local_5d8[2] = local_288.M[0][2];
      local_5d8[3] = local_288.M[0][3];
      local_5c8[0] = local_288.M[1][0];
      local_5c8[1] = local_288.M[1][1];
      local_5c8[2] = local_288.M[1][2];
      local_5c8[3] = local_288.M[1][3];
      local_5b8[0] = local_288.M[2][0];
      local_5b8[1] = local_288.M[2][1];
      local_5b8[2] = local_288.M[2][2];
      local_5b8[3] = local_288.M[2][3];
      local_5a8[0] = local_288.M[3][0];
      local_5a8[1] = local_288.M[3][1];
      afStack_5a0[0] = local_288.M[3][2];
      afStack_5a0[1] = local_288.M[3][3];
      fVar2 = *(float *)((longlong)local_5d8 + lVar16);
      VectorMatrixMultiply(&local_2c8,&local_348,&local_388);
      local_618[0] = local_2c8.M[0][0];
      local_618[1] = local_2c8.M[0][1];
      local_618[2] = local_2c8.M[0][2];
      local_618[3] = local_2c8.M[0][3];
      local_608[0] = local_2c8.M[1][0];
      local_608[1] = local_2c8.M[1][1];
      local_608[2] = local_2c8.M[1][2];
      local_608[3] = local_2c8.M[1][3];
      local_5f8[0] = local_2c8.M[2][0];
      local_5f8[1] = local_2c8.M[2][1];
      local_5f8[2] = local_2c8.M[2][2];
      local_5f8[3] = local_2c8.M[2][3];
      local_5e8[0] = local_2c8.M[3][0];
      local_5e8[1] = local_2c8.M[3][1];
      afStack_5e0[0] = local_2c8.M[3][2];
      afStack_5e0[1] = local_2c8.M[3][3];
      VectorMatrixMultiply(&local_288,&local_348,&local_308);
      fVar3 = *(float *)((longlong)local_608 + lVar16);
      local_5d8[0] = local_288.M[0][0];
      local_5d8[1] = local_288.M[0][1];
      local_5d8[2] = local_288.M[0][2];
      local_5d8[3] = local_288.M[0][3];
      local_5c8[0] = local_288.M[1][0];
      local_5c8[1] = local_288.M[1][1];
      local_5c8[2] = local_288.M[1][2];
      local_5c8[3] = local_288.M[1][3];
      local_5b8[0] = local_288.M[2][0];
      local_5b8[1] = local_288.M[2][1];
      local_5b8[2] = local_288.M[2][2];
      local_5b8[3] = local_288.M[2][3];
      local_5a8[0] = local_288.M[3][0];
      local_5a8[1] = local_288.M[3][1];
      afStack_5a0[0] = local_288.M[3][2];
      afStack_5a0[1] = local_288.M[3][3];
      fVar4 = *(float *)((longlong)local_5c8 + lVar16);
      VectorMatrixMultiply(&local_2c8,&local_348,&local_388);
      local_618[0] = local_2c8.M[0][0];
      local_618[1] = local_2c8.M[0][1];
      local_618[2] = local_2c8.M[0][2];
      local_618[3] = local_2c8.M[0][3];
      local_608[0] = local_2c8.M[1][0];
      local_608[1] = local_2c8.M[1][1];
      local_608[2] = local_2c8.M[1][2];
      local_608[3] = local_2c8.M[1][3];
      local_5f8[0] = local_2c8.M[2][0];
      local_5f8[1] = local_2c8.M[2][1];
      local_5f8[2] = local_2c8.M[2][2];
      local_5f8[3] = local_2c8.M[2][3];
      local_5e8[0] = local_2c8.M[3][0];
      local_5e8[1] = local_2c8.M[3][1];
      afStack_5e0[0] = local_2c8.M[3][2];
      afStack_5e0[1] = local_2c8.M[3][3];
      VectorMatrixMultiply(&local_288,&local_348,&local_308);
      local_5d8[0] = local_288.M[0][0];
      local_5d8[1] = local_288.M[0][1];
      local_5d8[2] = local_288.M[0][2];
      local_5d8[3] = local_288.M[0][3];
      local_5b8[0] = local_288.M[2][0];
      local_5b8[1] = local_288.M[2][1];
      local_5b8[2] = local_288.M[2][2];
      local_5b8[3] = local_288.M[2][3];
      local_5c8[0] = local_288.M[1][0];
      local_5c8[1] = local_288.M[1][1];
      local_5c8[2] = local_288.M[1][2];
      local_5c8[3] = local_288.M[1][3];
      local_5a8[0] = local_288.M[3][0];
      local_5a8[1] = local_288.M[3][1];
      afStack_5a0[0] = local_288.M[3][2];
      afStack_5a0[1] = local_288.M[3][3];
      *(float *)((longlong)&local_648 + lVar16) =
           (*(float *)((longlong)local_5f8 + lVar16) - *(float *)((longlong)local_5b8 + lVar16)) +
           (fVar3 - fVar4) + (fVar1 - fVar2) + *(float *)((longlong)&local_648 + lVar16);
      lVar16 = lVar16 + 4;
    } while (lVar16 < 0xc);
    iVar20 = 1;
    pfVar15 = (float *)&local_638;
    iVar19 = 1;
    lVar16 = 0;
    lVar23 = 3;
    do {
      VectorMatrixMultiply(&local_248,&local_348,&local_308);
      local_598[0] = local_248.M[0][0];
      local_598[1] = local_248.M[0][1];
      local_598[2] = local_248.M[0][2];
      local_598[3] = local_248.M[0][3];
      local_598[4] = local_248.M[1][0];
      local_598[5] = local_248.M[1][1];
      afStack_580[0] = local_248.M[1][2];
      afStack_580[1] = local_248.M[1][3];
      local_578[0] = local_248.M[2][0];
      local_578[1] = local_248.M[2][1];
      afStack_570[0] = local_248.M[2][2];
      afStack_570[1] = local_248.M[2][3];
      local_568[0] = local_248.M[3][0];
      local_568[1] = local_248.M[3][1];
      afStack_560[0] = local_248.M[3][2];
      afStack_560[1] = local_248.M[3][3];
      VectorMatrixMultiply(&local_208,&local_348,&local_388);
      fVar1 = *(float *)((longlong)local_598 + lVar16);
      local_558[0] = local_208.M[0][0];
      local_558[1] = local_208.M[0][1];
      local_558[2] = local_208.M[0][2];
      local_558[3] = local_208.M[0][3];
      local_558[4] = local_208.M[1][0];
      local_558[5] = local_208.M[1][1];
      afStack_540[0] = local_208.M[1][2];
      afStack_540[1] = local_208.M[1][3];
      local_538[0] = local_208.M[2][0];
      local_538[1] = local_208.M[2][1];
      afStack_530[0] = local_208.M[2][2];
      afStack_530[1] = local_208.M[2][3];
      local_528[0] = local_208.M[3][0];
      local_528[1] = local_208.M[3][1];
      afStack_520[0] = local_208.M[3][2];
      afStack_520[1] = local_208.M[3][3];
      fVar2 = *(float *)((longlong)local_558 + lVar16);
      if (iVar19 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                            ,0x86,L"");
        if (bVar11) {
code_r0x000143a6ecfe:
          pcVar6 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
          return pTVar14;
        }
      }
      else if ((3 < iVar19) &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < NumElements",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                   ,0x87,L""), bVar11)) goto code_r0x000143a6ecfe;
      pfVar15[-1] = fVar1 - fVar2;
      VectorMatrixMultiply(&local_248,&local_348,&local_308);
      local_598[0] = local_248.M[0][0];
      local_598[1] = local_248.M[0][1];
      local_598[2] = local_248.M[0][2];
      local_598[3] = local_248.M[0][3];
      local_598[4] = local_248.M[1][0];
      local_598[5] = local_248.M[1][1];
      afStack_580[0] = local_248.M[1][2];
      afStack_580[1] = local_248.M[1][3];
      local_578[0] = local_248.M[2][0];
      local_578[1] = local_248.M[2][1];
      afStack_570[0] = local_248.M[2][2];
      afStack_570[1] = local_248.M[2][3];
      local_568[0] = local_248.M[3][0];
      local_568[1] = local_248.M[3][1];
      afStack_560[0] = local_248.M[3][2];
      afStack_560[1] = local_248.M[3][3];
      VectorMatrixMultiply(&local_208,&local_348,&local_388);
      fVar1 = *(float *)((longlong)local_598 + lVar16 + 4);
      local_558[0] = local_208.M[0][0];
      local_558[1] = local_208.M[0][1];
      local_558[2] = local_208.M[0][2];
      local_558[3] = local_208.M[0][3];
      local_558[4] = local_208.M[1][0];
      local_558[5] = local_208.M[1][1];
      afStack_540[0] = local_208.M[1][2];
      afStack_540[1] = local_208.M[1][3];
      local_538[0] = local_208.M[2][0];
      local_538[1] = local_208.M[2][1];
      afStack_530[0] = local_208.M[2][2];
      afStack_530[1] = local_208.M[2][3];
      local_528[0] = local_208.M[3][0];
      local_528[1] = local_208.M[3][1];
      afStack_520[0] = local_208.M[3][2];
      afStack_520[1] = local_208.M[3][3];
      fVar2 = *(float *)((longlong)local_558 + lVar16 + 4);
      if (iVar19 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                            ,0x86,L"");
        if (bVar11) {
code_r0x000143a6ee03:
          pcVar6 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
          return pTVar14;
        }
      }
      else if ((3 < iVar19) &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < NumElements",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                   ,0x87,L""), bVar11)) goto code_r0x000143a6ee03;
      *pfVar15 = fVar1 - fVar2;
      VectorMatrixMultiply(&local_248,&local_348,&local_308);
      local_598[0] = local_248.M[0][0];
      local_598[1] = local_248.M[0][1];
      local_598[2] = local_248.M[0][2];
      local_598[3] = local_248.M[0][3];
      local_598[4] = local_248.M[1][0];
      local_598[5] = local_248.M[1][1];
      afStack_580[0] = local_248.M[1][2];
      afStack_580[1] = local_248.M[1][3];
      local_578[0] = local_248.M[2][0];
      local_578[1] = local_248.M[2][1];
      afStack_570[0] = local_248.M[2][2];
      afStack_570[1] = local_248.M[2][3];
      local_568[0] = local_248.M[3][0];
      local_568[1] = local_248.M[3][1];
      afStack_560[0] = local_248.M[3][2];
      afStack_560[1] = local_248.M[3][3];
      VectorMatrixMultiply(&local_208,&local_348,&local_388);
      fVar1 = *(float *)((longlong)local_598 + lVar16 + 8);
      local_558[0] = local_208.M[0][0];
      local_558[1] = local_208.M[0][1];
      local_558[2] = local_208.M[0][2];
      local_558[3] = local_208.M[0][3];
      local_558[4] = local_208.M[1][0];
      local_558[5] = local_208.M[1][1];
      afStack_540[0] = local_208.M[1][2];
      afStack_540[1] = local_208.M[1][3];
      local_538[0] = local_208.M[2][0];
      local_538[1] = local_208.M[2][1];
      afStack_530[0] = local_208.M[2][2];
      afStack_530[1] = local_208.M[2][3];
      local_528[0] = local_208.M[3][0];
      local_528[1] = local_208.M[3][1];
      afStack_520[0] = local_208.M[3][2];
      afStack_520[1] = local_208.M[3][3];
      fVar2 = *(float *)((longlong)local_558 + lVar16 + 8);
      if (iVar19 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                            ,0x86,L"");
        if (bVar11) {
code_r0x000143a6ef07:
          pcVar6 = (code *)swi(3);
          pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
          return pTVar14;
        }
      }
      else if ((3 < iVar19) &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index < NumElements",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                   ,0x87,L""), bVar11)) goto code_r0x000143a6ef07;
      pfVar15[1] = fVar1 - fVar2;
      iVar19 = iVar19 + 1;
      pfVar15 = pfVar15 + 3;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    local_6a8 = 3;
    local_658 = 9;
    pfVar15 = (float *)((longlong)&uStack_640 + 4);
    pfVar17 = local_348.M[0] + 1;
    do {
      pfVar18 = local_4d8.V + 9;
      local_6b8 = 9;
      local_6b0 = 3;
      do {
        local_6c8 = 0;
        lVar16 = local_6b8;
        local_6c0 = pfVar18;
        do {
          lVar22 = 3;
          lVar23 = local_6c8;
          do {
            fVar1 = (*(float (*) [4])(pfVar17 + -1))[0];
            if (lVar16 + -9 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6efe1:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16 + -9) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6efe1;
            fVar2 = *(float *)((longlong)local_308.M[0] + lVar23);
            fVar3 = *(float *)((longlong)local_388.M[0] + lVar23);
            fVar4 = ((TVector<float,81> *)(pfVar18 + -9))->V[0];
            if (iVar20 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f052:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((3 < iVar20) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f052;
            fVar5 = *pfVar17;
            *pfVar15 = *pfVar15 - (fVar2 - fVar3) * fVar4 * fVar1;
            if (lVar16 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f0bd:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f0bd;
            fVar1 = *(float *)((longlong)local_308.M[0] + lVar23);
            fVar2 = *(float *)((longlong)local_388.M[0] + lVar23);
            fVar3 = *pfVar18;
            if (iVar20 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f12d:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((3 < iVar20) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f12d;
            fVar4 = pfVar17[1];
            *pfVar15 = *pfVar15 - (fVar1 - fVar2) * fVar3 * fVar5;
            if (lVar16 + 9 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f19d:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16 + 9) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f19d;
            fVar1 = *(float *)((longlong)local_308.M[0] + lVar23);
            fVar2 = *(float *)((longlong)local_388.M[0] + lVar23);
            fVar3 = pfVar18[9];
            if (iVar20 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f20e:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((3 < iVar20) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f20e;
            lVar16 = lVar16 + 1;
            lVar23 = lVar23 + 0x10;
            pfVar18 = pfVar18 + 1;
            *pfVar15 = *pfVar15 - (fVar1 - fVar2) * fVar3 * fVar4;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          local_6c8 = local_6c8 + 4;
        } while (local_6c8 < 0xc);
        pfVar15 = pfVar15 + 1;
        pfVar18 = local_6c0 + 0x1b;
        local_6b8 = local_6b8 + 0x1b;
        local_6b0 = local_6b0 + -1;
      } while (local_6b0 != 0);
      iVar20 = iVar20 + 1;
      pfVar17 = pfVar17 + 4;
      local_6a8 = local_6a8 + -1;
    } while (local_6a8 != 0);
    pfVar17 = local_4d8.V + 9;
    local_6c8 = 3;
    pfVar15 = (float *)&local_648;
    do {
      local_6b8 = 0;
      lVar16 = local_658;
      local_6c0 = pfVar17;
      do {
        local_6b0 = 3;
        pfVar18 = (float *)((longlong)local_388.M[0] + local_6b8);
        pfVar24 = (float *)((longlong)local_308.M[0] + local_6b8);
        do {
          pfVar21 = local_348.M[0] + 1;
          local_6a8 = 3;
          do {
            fVar1 = (*(float (*) [4])(pfVar21 + -1))[0];
            fVar2 = *pfVar18;
            fVar3 = *pfVar24;
            if (lVar16 + -9 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f365:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16 + -9) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f365;
            fVar4 = *pfVar18;
            fVar5 = *pfVar21;
            *pfVar15 = (fVar3 - fVar2) * ((TVector<float,81> *)(pfVar17 + -9))->V[0] * fVar1 +
                       *pfVar15;
            fVar1 = *pfVar24;
            if (lVar16 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f3e4:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f3e4;
            fVar2 = *pfVar18;
            fVar3 = pfVar21[1];
            *pfVar15 = (fVar1 - fVar4) * *pfVar17 * fVar5 + *pfVar15;
            fVar1 = *pfVar24;
            if (lVar16 + 9 < 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                  ,0x86,L"");
              if (bVar11) {
code_r0x000143a6f463:
                pcVar6 = (code *)swi(3);
                pTVar14 = (TVector<Chaos::TVector<float,3>,4> *)(*pcVar6)();
                return pTVar14;
              }
            }
            else if ((0x50 < lVar16 + 9) &&
                    (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Index < NumElements",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\Vector.h"
                                         ,0x87,L""), bVar11)) goto code_r0x000143a6f463;
            pfVar21 = pfVar21 + 4;
            local_6a8 = local_6a8 + -1;
            *pfVar15 = (fVar1 - fVar2) * pfVar17[9] * fVar3 + *pfVar15;
          } while (local_6a8 != 0);
          lVar16 = lVar16 + 1;
          pfVar18 = pfVar18 + 4;
          pfVar17 = pfVar17 + 1;
          pfVar24 = pfVar24 + 4;
          local_6b0 = local_6b0 + -1;
        } while (local_6b0 != 0);
        local_6b8 = local_6b8 + 4;
      } while (local_6b8 < 0xc);
      pfVar15 = pfVar15 + 1;
      local_658 = local_658 + 0x1b;
      pfVar17 = local_6c0 + 0x1b;
      local_6c8 = local_6c8 + -1;
    } while (local_6c8 != 0);
    if (fVar25 != 0.0) {
      fVar25 = __real_3f800000 / fVar25;
      lVar16 = 4;
      pfVar15 = (float *)((longlong)&local_648 + 4);
      do {
        pfVar15[-1] = fVar25 * pfVar15[-1];
        *pfVar15 = fVar25 * *pfVar15;
        pfVar15[1] = fVar25 * pfVar15[1];
        lVar16 = lVar16 + -1;
        pfVar15 = pfVar15 + 3;
      } while (lVar16 != 0);
    }
    *(undefined8 *)local_650->V = local_648;
    *(undefined8 *)&local_650->V[0].field_0x8 = uStack_640;
    *(undefined8 *)&local_650->V[1].field_0x4 = local_638;
    *(undefined8 *)(local_650->V + 2) = uStack_630;
    *(undefined8 *)&local_650->V[2].field_0x8 = local_628;
    *(undefined8 *)&local_650->V[3].field_0x4 = uStack_620;
    __return_storage_ptr__ = local_650;
  }
  else {
    *param_3 = 0.0;
    *(undefined8 *)__return_storage_ptr__->V = 0;
    *(undefined8 *)&__return_storage_ptr__->V[0].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[1].field_0x4 = 0;
    *(undefined8 *)(__return_storage_ptr__->V + 2) = 0;
    *(undefined8 *)&__return_storage_ptr__->V[2].field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->V[3].field_0x4 = 0;
  }
  return __return_storage_ptr__;
}

// Init @ 143a71a90

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  TMPMGrid<float> *pTVar4;
  int iVar5;
  undefined4 *puVar6;
  TMPMTransfer<float> *this_00;
  bool bVar7;
  undefined1 local_res8 [8];
  
  puVar6 = *(undefined4 **)&this->field_0x8;
  iVar2 = *(int *)&this->field_0x10;
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x10 != iVar2) {
      `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar6 == puVar1) break;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  if (CpuChannel->Enabled < 0) {
    TMPMGrid<float>::UpdateGridFromPositions
              ((this->MPMTransfer).Grid,(TDynamicParticles<float,3> *)param_1);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
                ::__l7::__CpuProfilerEventSpecId126,"STAT_ChaosXPBDGridBasedCorotatedUpdateGrid",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x7e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
               ::__l7::__CpuProfilerEventSpecId126);
    TMPMGrid<float>::UpdateGridFromPositions
              ((this->MPMTransfer).Grid,(TDynamicParticles<float,3> *)param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_00 = &this->MPMTransfer;
  if (CpuChannel->Enabled < 0) {
    TMPMTransfer<float>::InitialP2G(this_00,(TDynamicParticles<float,3> *)param_1,&this->GridData);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
                ::__l8::__CpuProfilerEventSpecId130,"STAT_ChaosXPBDGridBasedCorotatedInitialP2G",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x82);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
               ::__l8::__CpuProfilerEventSpecId130);
    TMPMTransfer<float>::InitialP2G(this_00,(TDynamicParticles<float,3> *)param_1,&this->GridData);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    TMPMTransfer<float>::ComputeElementMetaData
              (this_00,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)
                       &this->field_0xa0);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
                ::__l9::__CpuProfilerEventSpecId134,
               "STAT_ChaosXPBDGridBasedCorotatedMetaDataComputation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x86);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
               ::__l9::__CpuProfilerEventSpecId134);
    TMPMTransfer<float>::ComputeElementMetaData
              (this_00,(TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *)
                       &this->field_0xa0);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
                ::__l10::__CpuProfilerEventSpecId138,"STAT_ChaosXPBDGridBasedCorotatedSubcoloring",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x8a);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
               ::__l10::__CpuProfilerEventSpecId138);
  }
  pTVar4 = (this->MPMTransfer).Grid;
  iVar2 = (int)pTVar4->_padding_;
  iVar3 = *(int *)((longlong)&pTVar4->_padding_ + 4);
  iVar5 = (int)pTVar4->_padding_;
  if (pTVar4->interp == linear) {
    iVar5 = iVar3 * iVar2 * iVar5;
  }
  else {
    iVar5 = (iVar3 + 1) * (iVar2 + 1) * (iVar5 + 1);
  }
  ComputeGridBasedGraphSubColoringPointer<float>
            (&this->ElementsPerColor,pTVar4,iVar5,&this->PreviousColoringPtr,
             &(this->MPMTransfer).ElementGridNodesSet,&this->ElementsPerSubColors);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    TMPMTransfer<float>::ComputeGridPositions(this_00,&this->GridData,param_2,&this->GridPositions);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
                ::__l11::__CpuProfilerEventSpecId142,
               "STAT_ChaosXPBDGridBasedCorotatedComputeGridPositions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x8e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::Init(Chaos::Softs::FSolverParticles_const&___ptr64,float)___ptr64'
               ::__l11::__CpuProfilerEventSpecId142);
    TMPMTransfer<float>::ComputeGridPositions(this_00,&this->GridData,param_2,&this->GridPositions);
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TimeStepPostprocessing @ 143a94880

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
TimeStepPostprocessing
          (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this,
          FSolverParticles *param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  float local_res8 [2];
  FSolverParticles *local_58;
  FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *local_50;
  FSolverParticles *local_48;
  code *local_40;
  FSolverParticles **local_38;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
                ::__l3::__CpuProfilerEventSpecId150,"STAT_ChaosXPBDGridBasedCorotatedGrid::FinalG2P"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
               ::__l3::__CpuProfilerEventSpecId150);
  }
  uVar1 = (uint)param_1->_padding_;
  local_38 = &local_58;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::FinalG2P'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = param_1;
  local_50 = this;
  PhysicsParallelFor(uVar1,(TFunctionRef<void___cdecl(int)> *)&local_40,uVar1 < 0x32);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (CpuChannel->Enabled < 0) {
    TMPMTransfer<float>::GridPositionsToGridData
              (&this->MPMTransfer,&this->GridPositions,param_2,&this->GridData);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
                ::__l4::__CpuProfilerEventSpecId155,
               "STAT_ChaosXPBDGridBasedCorotated::GridPositions2GridData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0x9b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
               ::__l4::__CpuProfilerEventSpecId155);
    TMPMTransfer<float>::GridPositionsToGridData
              (&this->MPMTransfer,&this->GridPositions,param_2,&this->GridData);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
                ::__l5::__CpuProfilerEventSpecId160,
               "STAT_ChaosXPBDGridBasedCorotated::ComputeAArray",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\XPBDGridBasedCorotatedConstraints.h"
               ,0xa0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::TimeStepPostprocessing(Chaos::Softs::FSolverParticles&___ptr64,float)___ptr64'
               ::__l5::__CpuProfilerEventSpecId160);
  }
  local_res8[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            (&(this->MPMTransfer).AArray,local_res8,
             (this->MPMTransfer).NumModes * (int)param_1->_padding_ * 3);
  uVar1 = (uint)param_1->_padding_;
  local_38 = &local_58;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::TMPMTransfer<float>::ComputeAArray'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = (FSolverParticles *)&this->MPMTransfer;
  local_50 = (FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)
             &this->GridData;
  local_48 = param_1;
  PhysicsParallelFor(uVar1,(TFunctionRef<void___cdecl(int)> *)&local_40,uVar1 < 0x32);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// WriteGridNodes @ 143a9dad0

void __thiscall
Chaos::Softs::FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
WriteGridNodes(FXPBDGridBasedCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPlatformFileManager *this_00;
  IFileManager *pIVar4;
  FString *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ForAnyElementType local_308;
  undefined8 local_300;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  TVector<float,3> local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  FScriptContainerElement *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  FString local_268;
  FString local_258;
  FString local_248;
  FScriptContainerElement *local_238;
  uint uStack_230;
  undefined4 uStack_22c;
  FScriptContainerElement *local_228;
  uint uStack_220;
  undefined4 uStack_21c;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  TStringView<wchar_t> local_78;
  FString local_68 [2];
  
  FPaths::ProjectDir(&local_2f8);
  ::FString::AppendChars(&local_2f8,L"/HoudiniOutput/GridData.geo",0x1b);
  uVar17 = 0;
  local_308.Data = (FScriptContainerElement *)0x0;
  uVar21 = 0;
  local_300 = 0;
  uVar19 = uVar17;
  while( true ) {
    iVar18 = (int)(this->MPMGrid)._padding_;
    iVar12 = *(int *)((longlong)&(this->MPMGrid)._padding_ + 4);
    iVar1 = (int)(this->MPMGrid)._padding_;
    if ((this->MPMGrid).interp == linear) {
      iVar12 = iVar18 * iVar1 * iVar12;
    }
    else {
      iVar12 = (iVar18 + 1) * (iVar1 + 1) * (iVar12 + 1);
    }
    iVar18 = (int)uVar19;
    if (iVar12 <= iVar18) break;
    uVar14 = ((this->MPMTransfer).NTransfer + 1) * iVar18;
    uVar15 = uVar21;
    if ((int)uVar14 < (this->GridData).ArrayNum) {
      uVar15 = ~uVar14 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (0.0 < *(float *)((this->GridData).AllocatorInstance.Data + (longlong)(int)uVar14 * 4)) {
      TMPMGrid<float>::Node(&this->MPMGrid,&local_2b8,iVar18);
      iVar12 = (int)local_300;
      if ((int)local_300 == local_300._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_308,(int *)((longlong)&local_300 + 4));
      }
      local_300 = CONCAT44(local_300._4_4_,iVar12 + 1);
      *(undefined8 *)(local_308.Data + (longlong)iVar12 * 0xc) = local_2b8._0_8_;
      *(undefined4 *)(local_308.Data + (longlong)iVar12 * 0xc + 8) = local_2b8._8_4_;
    }
    uVar19 = (ulonglong)(iVar18 + 1);
  }
  iVar18 = (int)local_300;
  lVar16 = (longlong)(int)local_300;
  this_00 = FPlatformFileManager::Get();
  FPlatformFileManager::GetPlatformFile(this_00);
  pIVar4 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::FString(&local_178,L"PGEOMETRY V5\r\n");
  local_278 = (pFVar5->Data).AllocatorInstance.Data;
  iVar12 = (pFVar5->Data).ArrayNum;
  iStack_270 = iVar12 + -1;
  if (iVar12 == 0) {
    iStack_270 = 0;
  }
  local_188._12_4_ = uStack_26c;
  local_188.Size = iStack_270;
  local_188.DataPtr = (wchar_t *)local_278;
  FFileHelper::SaveStringToFile(&local_188,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,0);
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  pFVar5 = ::FString::FString(&local_148,L"\r\n");
  local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c8.Data.ArrayNum = 0;
  local_2c8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2c8,0);
  pFVar6 = ::FString::FString(&local_158,L" NPrims ");
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_2d8,iVar18);
  pFVar7 = ::FString::FString(&local_168,L"NPoints ");
  ::FString::ConcatFF(&local_248,pFVar7,&local_2d8);
  ::FString::ConcatFF(&local_258,&local_248,pFVar6);
  ::FString::ConcatFF(&local_268,&local_258,&local_2c8);
  ::FString::ConcatFF(&local_288,&local_268,pFVar5);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_298,
                     L"NPointGroups 0 NPrimGroups 0\r\nNPointAttrib 0 NVertexAttrib 0 NPrimAttrib 0 NAttrib 0\r\n"
                    );
  pIVar4 = IFileManager::Get();
  local_238 = local_288.Data.AllocatorInstance.Data;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  uStack_230 = local_288.Data.ArrayNum - 1;
  if (local_288.Data.ArrayNum == 0) {
    uStack_230 = uVar21;
  }
  local_138._12_4_ = uStack_22c;
  local_138.Size = uStack_230;
  local_138.DataPtr = (wchar_t *)local_288.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_138,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,8);
  pIVar4 = IFileManager::Get();
  local_228 = local_298.Data.AllocatorInstance.Data;
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  uStack_220 = local_298.Data.ArrayNum - 1;
  if (local_298.Data.ArrayNum == 0) {
    uStack_220 = uVar21;
  }
  local_128._12_4_ = uStack_21c;
  local_128.Size = uStack_220;
  local_128.DataPtr = (wchar_t *)local_298.Data.AllocatorInstance.Data;
  FFileHelper::SaveStringToFile(&local_128,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,8);
  uVar19 = uVar17;
  uVar20 = uVar17;
  if (0 < iVar18) {
    do {
      pFVar5 = ::FString::FString(&local_b8,L"\r\n");
      local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e8.Data.ArrayNum = 0;
      local_2e8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_2e8,1);
      pFVar6 = ::FString::FString(&local_c8,L" ");
      uVar14 = (uint)uVar19;
      uVar15 = ~uVar14 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar14 < (int)local_300) {
        uVar21 = uVar15;
      }
      if ((uVar21 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar7 = ::FString::SanitizeFloat(&local_d8,(double)*(float *)(local_308.Data + uVar20 + 8),1)
      ;
      pFVar8 = ::FString::FString(&local_e8,L" ");
      uVar21 = 0;
      if ((int)uVar14 < (int)local_300) {
        uVar21 = uVar15;
      }
      if ((uVar21 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = ::FString::SanitizeFloat(&local_f8,(double)*(float *)(local_308.Data + uVar20 + 4),1)
      ;
      pFVar10 = ::FString::FString(&local_108,L" ");
      uVar21 = 0;
      if ((int)uVar14 < (int)local_300) {
        uVar21 = uVar15;
      }
      if ((uVar21 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = ::FString::SanitizeFloat(&local_118,(double)*(float *)(local_308.Data + uVar20),1);
      ::FString::ConcatFF(&local_1c8,pFVar11,pFVar10);
      ::FString::ConcatFF(&local_1d8,&local_1c8,pFVar9);
      ::FString::ConcatFF(&local_1e8,&local_1d8,pFVar8);
      ::FString::ConcatFF(&local_1f8,&local_1e8,pFVar7);
      ::FString::ConcatFF(&local_208,&local_1f8,pFVar6);
      ::FString::ConcatFF(&local_218,&local_208,&local_2e8);
      ::FString::ConcatFF(&local_2a8,&local_218,pFVar5);
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      pIVar4 = IFileManager::Get();
      local_1b8 = local_2a8.Data.AllocatorInstance.Data;
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_2f8.Data.ArrayNum != 0) {
        FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
      }
      iStack_1b0 = local_2a8.Data.ArrayNum + -1;
      if (local_2a8.Data.ArrayNum == 0) {
        iStack_1b0 = 0;
      }
      local_a8._12_4_ = uStack_1ac;
      local_a8.Size = iStack_1b0;
      local_a8.DataPtr = (wchar_t *)local_2a8.Data.AllocatorInstance.Data;
      FFileHelper::SaveStringToFile(&local_a8,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,8);
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      uVar17 = uVar17 + 1;
      uVar19 = (ulonglong)(uVar14 + 1);
      uVar20 = uVar20 + 0xc;
    } while ((longlong)uVar17 < lVar16);
  }
  pIVar4 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::FString(&local_88,L"beginExtra\n");
  local_1a8 = (pFVar5->Data).AllocatorInstance.Data;
  iVar18 = (pFVar5->Data).ArrayNum;
  iStack_1a0 = iVar18 + -1;
  if (iVar18 == 0) {
    iStack_1a0 = 0;
  }
  local_98._12_4_ = uStack_19c;
  local_98.Size = iStack_1a0;
  local_98.DataPtr = (wchar_t *)local_1a8;
  FFileHelper::SaveStringToFile(&local_98,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pIVar4 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_2f8.Data.ArrayNum != 0) {
    FVar13.Data = local_2f8.Data.AllocatorInstance.Data;
  }
  pFVar5 = ::FString::FString(local_68,L"endExtra\n");
  local_198 = (pFVar5->Data).AllocatorInstance.Data;
  iVar18 = (pFVar5->Data).ArrayNum;
  iStack_190 = iVar18 + -1;
  if (iVar18 == 0) {
    iStack_190 = 0;
  }
  local_78._12_4_ = uStack_18c;
  local_78.Size = iStack_190;
  local_78.DataPtr = (wchar_t *)local_198;
  FFileHelper::SaveStringToFile(&local_78,(wchar_t *)FVar13.Data,AutoDetect,pIVar4,8);
  if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  if (local_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data);
  }
  if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
  }
  return;
}

