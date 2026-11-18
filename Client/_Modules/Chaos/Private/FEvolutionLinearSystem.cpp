// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FEvolutionLinearSystem @ 143dfb8e0

FEvolutionLinearSystem * __thiscall
Chaos::Softs::FEvolutionLinearSystem::FEvolutionLinearSystem
          (FEvolutionLinearSystem *this,FEvolutionLinearSystem *param_1)

{
  int iVar1;
  
  this->Parameters = param_1->Parameters;
  iVar1 = param_1->NumCompactIndices;
  (this->CompactifiedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->NumCompactIndices = iVar1;
  (this->CompactifiedIndices).AllocatorInstance.Data =
       (param_1->CompactifiedIndices).AllocatorInstance.Data;
  (param_1->CompactifiedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactifiedIndices).ArrayNum = (param_1->CompactifiedIndices).ArrayNum;
  (this->CompactifiedIndices).ArrayMax = (param_1->CompactifiedIndices).ArrayMax;
  (param_1->CompactifiedIndices).ArrayNum = 0;
  (param_1->CompactifiedIndices).ArrayMax = 0;
  (this->RHS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHS).AllocatorInstance.Data = (param_1->RHS).AllocatorInstance.Data;
  (param_1->RHS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHS).ArrayNum = (param_1->RHS).ArrayNum;
  (this->RHS).ArrayMax = (param_1->RHS).ArrayMax;
  (param_1->RHS).ArrayNum = 0;
  (param_1->RHS).ArrayMax = 0;
  TBlockSparseSymmetricLinearSystem<float,3>::TBlockSparseSymmetricLinearSystem<float,3>
            (&this->Matrix,&param_1->Matrix);
  this->bDfDxTimesVTerm = param_1->bDfDxTimesVTerm;
  this->LastSolveIterations = 0;
  this->LastSolveError = 0.0;
  return this;
}

// FEvolutionLinearSystem @ 143dfb980

FEvolutionLinearSystem * __thiscall
Chaos::Softs::FEvolutionLinearSystem::FEvolutionLinearSystem
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1)

{
  undefined1 local_18 [16];
  
  this->Parameters = (FEvolutionLinearSystemSolverParameters *)0x0;
  (this->CompactifiedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactifiedIndices).ArrayNum = 0;
  (this->CompactifiedIndices).ArrayMax = 0;
  (this->RHS).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHS).ArrayNum = 0;
  (this->RHS).ArrayMax = 0;
  TBlockSparseSymmetricLinearSystem<float,3>::TBlockSparseSymmetricLinearSystem<float,3>
            (&this->Matrix);
  this->bDfDxTimesVTerm = false;
  this->LastSolveIterations = 0;
  this->LastSolveError = 0.0;
  CalculateCompactIndices(this,param_1);
  local_18._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_18._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&this->RHS,(TVector<float,3> *)local_18,this->NumCompactIndices);
  return this;
}

// AddForce @ 143e09460

void __thiscall
Chaos::Softs::FEvolutionLinearSystem::AddForce
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1,TVector<float,3> *param_2,
          int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar9 = 0;
  if (param_3 < (this->CompactifiedIndices).ArrayNum) {
    uVar9 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + (longlong)param_3 * 4);
  lVar10 = (longlong)(int)uVar9;
  if (this->Parameters->bDoQuasistatics != false) {
    param_4 = __real_3f800000;
  }
  if (uVar9 != 0xffffffff) {
    fVar1 = *(float *)param_2;
    fVar2 = *(float *)&param_2->field_0x4;
    uVar11 = 0;
    if ((int)uVar9 < (this->RHS).ArrayNum) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    fVar3 = *(float *)&param_2->field_0x8;
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = (this->RHS).AllocatorInstance.Data;
    fVar4 = *(float *)(pFVar6 + lVar10 * 0xc + 4);
    fVar5 = *(float *)(pFVar6 + lVar10 * 0xc + 8);
    *(float *)(pFVar6 + lVar10 * 0xc) = param_4 * fVar1 + *(float *)(pFVar6 + lVar10 * 0xc);
    *(float *)(pFVar6 + lVar10 * 0xc + 4) = param_4 * fVar2 + fVar4;
    *(float *)(pFVar6 + lVar10 * 0xc + 8) = param_4 * fVar3 + fVar5;
  }
  return;
}

// AddSymmetricForceDerivative @ 143e0b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Softs::FEvolutionLinearSystem::AddSymmetricForceDerivative
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1,PMatrix<float,3,3> *param_2,
          PMatrix<float,3,3> *param_3,int param_4,int param_5,float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  code *pcVar18;
  uint uVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  TVector<float,3> *pTVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  FSolverParticlesRange *local_248;
  undefined4 uStack_22c;
  float local_228;
  float local_224;
  float local_220;
  undefined4 local_21c;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  float local_208;
  float local_204;
  float local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined4 local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  undefined4 local_15c;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  PMatrix<float,3,3> local_128;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_248 = param_1;
  if ((this->Parameters == (FEvolutionLinearSystemSolverParameters *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolutionLinearSystem.cpp"
                          ,0x7f,L""), bVar21)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  iVar16 = (this->CompactifiedIndices).ArrayNum;
  uVar24 = 0;
  if (param_4 < iVar16) {
    uVar24 = (uint)~param_4 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (local_268 = (longlong)param_4, local_260 = (longlong)iVar16,
     bVar21 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  iVar16 = (this->CompactifiedIndices).ArrayNum;
  uVar24 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + (longlong)param_4 * 4);
  lVar26 = (longlong)(int)uVar24;
  uVar22 = 0;
  if (param_5 < iVar16) {
    uVar22 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar22 == 0) &&
     (local_268 = (longlong)param_5, local_260 = (longlong)iVar16,
     bVar21 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  uVar22 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + (longlong)param_5 * 4);
  lVar25 = (longlong)(int)uVar22;
  if (this->Parameters->bDoQuasistatics == false) {
    if ((uVar24 != 0xffffffff) && (uVar22 != 0xffffffff)) {
      if (param_2 == (PMatrix<float,3,3> *)0x0) {
        if (param_3 == (PMatrix<float,3,3> *)0x0) {
          return;
        }
        local_19c = 0;
        local_18c = 0;
        local_17c = 0;
        local_1a8 = (float)((uint)(param_6 * *(float *)param_3) ^
                           __xmm_80000000800000008000000080000000);
        local_198 = (float)((uint)(param_6 * *(float *)&param_3->field_0x10) ^
                           __xmm_80000000800000008000000080000000);
        local_188 = (float)((uint)(param_6 * *(float *)&param_3->field_0x20) ^
                           __xmm_80000000800000008000000080000000);
        local_1a4 = (float)((uint)(param_6 * *(float *)&param_3->field_0x4) ^
                           __xmm_80000000800000008000000080000000);
        local_194 = (float)((uint)(param_6 * *(float *)&param_3->field_0x14) ^
                           __xmm_80000000800000008000000080000000);
        local_184 = (float)((uint)(param_6 * *(float *)&param_3->field_0x24) ^
                           __xmm_80000000800000008000000080000000);
        local_1a0 = (float)((uint)(param_6 * *(float *)&param_3->field_0x8) ^
                           __xmm_80000000800000008000000080000000);
        local_190 = (float)((uint)(param_6 * *(float *)&param_3->field_0x18) ^
                           __xmm_80000000800000008000000080000000);
        local_180 = (float)((uint)(param_6 * *(float *)&param_3->field_0x28) ^
                           __xmm_80000000800000008000000080000000);
        local_178 = ___xmm_3f800000000000000000000000000000;
        uStack_170 = _UNK_150689648;
        local_168 = local_1a8;
        local_164 = local_1a4;
        local_160 = local_1a0;
        local_158 = local_198;
        local_154 = local_194;
        local_150 = local_190;
        local_148 = local_188;
        local_144 = local_184;
        local_140 = local_180;
      }
      else {
        fVar27 = param_6 * param_6;
        local_21c = 0;
        local_1f8 = ___xmm_3f800000000000000000000000000000;
        uStack_1f0 = _UNK_150689648;
        local_20c = 0;
        local_1fc = 0;
        local_250 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x20) ^
                           __xmm_80000000800000008000000080000000);
        local_258 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x14) ^
                           __xmm_80000000800000008000000080000000);
        local_24c = (float)((uint)(fVar27 * *(float *)&param_2->field_0x24) ^
                           __xmm_80000000800000008000000080000000);
        local_254 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x18) ^
                           __xmm_80000000800000008000000080000000);
        local_228 = (float)((uint)(fVar27 * *(float *)param_2) ^
                           __xmm_80000000800000008000000080000000);
        local_218 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x10) ^
                           __xmm_80000000800000008000000080000000);
        local_224 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x4) ^
                           __xmm_80000000800000008000000080000000);
        local_220 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x8) ^
                           __xmm_80000000800000008000000080000000);
        local_200 = (float)((uint)(fVar27 * *(float *)&param_2->field_0x28) ^
                           __xmm_80000000800000008000000080000000);
        local_214 = local_258;
        local_210 = local_254;
        local_208 = local_250;
        local_204 = local_24c;
        local_168 = local_228;
        local_164 = local_224;
        local_160 = local_220;
        local_158 = local_218;
        local_154 = local_258;
        local_150 = local_254;
        local_148 = local_250;
        local_144 = local_24c;
        local_140 = local_200;
        if (param_3 != (PMatrix<float,3,3> *)0x0) {
          local_1dc = 0;
          local_1cc = 0;
          local_1bc = 0;
          local_1e0 = (float)((uint)(param_6 * *(float *)&param_3->field_0x8) ^
                             __xmm_80000000800000008000000080000000);
          local_160 = local_220 + local_1e0;
          local_1e4 = (float)((uint)(param_6 * *(float *)&param_3->field_0x4) ^
                             __xmm_80000000800000008000000080000000);
          local_1d0 = (float)((uint)(param_6 * *(float *)&param_3->field_0x18) ^
                             __xmm_80000000800000008000000080000000);
          local_1d4 = (float)((uint)(param_6 * *(float *)&param_3->field_0x14) ^
                             __xmm_80000000800000008000000080000000);
          local_154 = local_258 + local_1d4;
          local_164 = local_224 + local_1e4;
          local_150 = local_254 + local_1d0;
          local_1e8 = (float)((uint)(param_6 * *(float *)param_3) ^
                             __xmm_80000000800000008000000080000000);
          local_168 = local_228 + local_1e8;
          local_1d8 = (float)((uint)(param_6 * *(float *)&param_3->field_0x10) ^
                             __xmm_80000000800000008000000080000000);
          local_1c8 = (float)((uint)(param_6 * *(float *)&param_3->field_0x20) ^
                             __xmm_80000000800000008000000080000000);
          local_148 = local_250 + local_1c8;
          local_158 = local_218 + local_1d8;
          local_1c4 = (float)((uint)(param_6 * *(float *)&param_3->field_0x24) ^
                             __xmm_80000000800000008000000080000000);
          local_144 = local_24c + local_1c4;
          local_1c0 = (float)((uint)(param_6 * *(float *)&param_3->field_0x28) ^
                             __xmm_80000000800000008000000080000000);
          local_140 = local_200 + local_1c0;
          local_1b8 = ___xmm_3f800000000000000000000000000000;
          uStack_1b0 = _UNK_150689648;
        }
      }
      uStack_130 = _UNK_150689648;
      local_138 = ___xmm_3f800000000000000000000000000000;
      local_13c = 0;
      local_14c = 0;
      local_15c = 0;
      TBlockSparseSymmetricLinearSystem<float,3>::AddMatrixEntry
                (&this->Matrix,uVar24,uVar22,(PMatrix<float,3,3> *)&local_168);
    }
    if ((this->bDfDxTimesVTerm != false) && (param_2 != (PMatrix<float,3,3> *)0x0)) {
      if (uVar24 != 0xffffffff) {
        pTVar23 = FSolverParticlesRange::V(local_248,param_4);
        iVar16 = (this->RHS).ArrayNum;
        fVar28 = param_6 * param_6;
        uStack_22c = 0;
        fVar27 = *(float *)pTVar23;
        fVar1 = *(float *)&pTVar23->field_0x4;
        fVar2 = *(float *)&pTVar23->field_0x8;
        uVar19 = 0;
        if ((int)uVar24 < iVar16) {
          uVar19 = ~uVar24 >> 0x1f;
        }
        fVar5 = *(float *)&param_2->field_0x10;
        fVar6 = *(float *)&param_2->field_0x14;
        fVar7 = *(float *)&param_2->field_0x18;
        fVar8 = *(float *)param_2;
        fVar9 = *(float *)&param_2->field_0x4;
        fVar10 = *(float *)&param_2->field_0x8;
        fVar11 = *(float *)&param_2->field_0x20;
        fVar12 = *(float *)&param_2->field_0x24;
        fVar13 = *(float *)&param_2->field_0x28;
        fVar14 = *(float *)&param_2->field_0x30;
        fVar15 = *(float *)&param_2->field_0x34;
        fVar20 = *(float *)&param_2->field_0x38;
        if ((uVar19 == 0) &&
           (local_268 = lVar26, local_260 = (longlong)iVar16,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pFVar17 = (this->RHS).AllocatorInstance.Data;
        fVar3 = *(float *)(pFVar17 + lVar26 * 0xc + 4);
        fVar4 = *(float *)(pFVar17 + lVar26 * 0xc + 8);
        *(float *)(pFVar17 + lVar26 * 0xc) =
             fVar28 * (fVar1 * fVar5 + fVar27 * fVar8 + fVar2 * fVar11 + fVar14 * 0.0) +
             *(float *)(pFVar17 + lVar26 * 0xc);
        *(float *)(pFVar17 + lVar26 * 0xc + 4) =
             fVar28 * (fVar1 * fVar6 + fVar27 * fVar9 + fVar2 * fVar12 + fVar15 * 0.0) + fVar3;
        *(float *)(pFVar17 + lVar26 * 0xc + 8) =
             fVar28 * (fVar1 * fVar7 + fVar27 * fVar10 + fVar2 * fVar13 + fVar20 * 0.0) + fVar4;
      }
      fVar27 = param_6 * param_6;
      if ((uVar22 != 0xffffffff) && (uVar24 != uVar22)) {
        pTVar23 = FSolverParticlesRange::V(local_248,param_5);
        iVar16 = (this->RHS).ArrayNum;
        local_260 = (longlong)iVar16;
        fVar1 = *(float *)pTVar23;
        fVar2 = *(float *)&pTVar23->field_0x4;
        fVar28 = *(float *)&pTVar23->field_0x8;
        fVar5 = *(float *)&param_2->field_0x4;
        fVar6 = *(float *)param_2;
        fVar7 = *(float *)&param_2->field_0x8;
        fVar8 = *(float *)&param_2->field_0x14;
        fVar9 = *(float *)&param_2->field_0x24;
        uVar24 = 0;
        if ((int)uVar22 < iVar16) {
          uVar24 = ~uVar22 >> 0x1f;
        }
        fVar10 = *(float *)&param_2->field_0x10;
        fVar11 = *(float *)&param_2->field_0x20;
        fVar12 = *(float *)&param_2->field_0x18;
        fVar13 = *(float *)&param_2->field_0x28;
        if ((uVar24 == 0) &&
           (local_268 = lVar25,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pFVar17 = (this->RHS).AllocatorInstance.Data;
        fVar14 = *(float *)(pFVar17 + lVar25 * 0xc + 4);
        fVar15 = *(float *)(pFVar17 + lVar25 * 0xc + 8);
        *(float *)(pFVar17 + lVar25 * 0xc) =
             (fVar2 * fVar5 + fVar1 * fVar6 + fVar28 * fVar7) * fVar27 +
             *(float *)(pFVar17 + lVar25 * 0xc);
        *(float *)(pFVar17 + lVar25 * 0xc + 4) =
             (fVar2 * fVar8 + fVar1 * fVar10 + fVar28 * fVar12) * fVar27 + fVar14;
        *(float *)(pFVar17 + lVar25 * 0xc + 8) =
             (fVar2 * fVar9 + fVar1 * fVar11 + fVar28 * fVar13) * fVar27 + fVar15;
      }
    }
  }
  else if (((uVar24 != 0xffffffff) && (uVar22 != 0xffffffff)) &&
          (param_2 != (PMatrix<float,3,3> *)0x0)) {
    local_128._0_4_ = *(uint *)param_2 ^ __xmm_80000000800000008000000080000000;
    local_128._32_4_ = *(uint *)&param_2->field_0x20 ^ __xmm_80000000800000008000000080000000;
    local_128._16_4_ = *(uint *)&param_2->field_0x10 ^ __xmm_80000000800000008000000080000000;
    local_128._20_4_ = *(uint *)&param_2->field_0x14 ^ __xmm_80000000800000008000000080000000;
    local_128._4_4_ = *(uint *)&param_2->field_0x4 ^ __xmm_80000000800000008000000080000000;
    local_128._8_4_ = *(uint *)&param_2->field_0x8 ^ __xmm_80000000800000008000000080000000;
    local_128._36_4_ = *(uint *)&param_2->field_0x24 ^ __xmm_80000000800000008000000080000000;
    local_128._40_4_ = *(uint *)&param_2->field_0x28 ^ __xmm_80000000800000008000000080000000;
    local_128._24_4_ = *(uint *)&param_2->field_0x18 ^ __xmm_80000000800000008000000080000000;
    local_128._48_8_ = ___xmm_3f800000000000000000000000000000;
    local_128._56_8_ = _UNK_150689648;
    local_128._12_4_ = 0;
    local_128._28_4_ = 0;
    local_128._44_4_ = 0;
    TBlockSparseSymmetricLinearSystem<float,3>::AddMatrixEntry
              (&this->Matrix,uVar24,uVar22,&local_128);
  }
  return;
}

// CalculateCompactIndices @ 143e142a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FEvolutionLinearSystem::CalculateCompactIndices
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  this->NumCompactIndices = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->CompactifiedIndices,*(int *)&param_1->field_0x14,Default);
  uVar6 = 0;
  if (0 < *(int *)&param_1->field_0x14) {
    lVar8 = 0;
    do {
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Particles",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                             ,0x56,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&param_1->field_0x8;
      uVar7 = *(int *)&param_1->field_0x10 + uVar6;
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar2 + 0x98)) {
        uVar5 = ~uVar7 >> 0x1f;
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
      if (*(float *)(*(longlong *)(lVar2 + 0x90) + (longlong)(int)uVar7 * 4) == 0.0) {
        uVar5 = 0;
        if ((int)uVar6 < (this->CompactifiedIndices).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar8) = 0xffffffff;
      }
      else {
        iVar1 = this->NumCompactIndices;
        this->NumCompactIndices = iVar1 + 1;
        uVar5 = 0;
        if ((int)uVar6 < (this->CompactifiedIndices).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar8) = iVar1;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
    } while ((int)uVar6 < *(int *)&param_1->field_0x14);
  }
  return;
}

// Init @ 143e31f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Softs::FEvolutionLinearSystem::Init
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1,float param_2,bool param_3,
          FEvolutionLinearSystemSolverParameters *param_4)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FEvolutionLinearSystemSolverParameters *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  float *local_120;
  float *local_118;
  undefined1 local_110 [16];
  TArrayView<float_const_,int> local_100;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_f0;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_e0;
  TArrayView<float_const_,int> local_d0;
  PMatrix<float,3,3> local_b8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->Parameters = param_4;
  if ((this->CompactifiedIndices).ArrayNum != *(int *)&param_1->field_0x14) {
    CalculateCompactIndices(this,param_1);
  }
  bVar23 = CpuChannel->Enabled < 0;
  if (bVar23) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId39,"FEvolutionLinearSystem_Init",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolutionLinearSystem.cpp"
               ,0x27);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId39);
  }
  cVar18 = !bVar23;
  pFVar10 = this->Parameters;
  if (((pFVar10->bDoQuasistatics == false) && (pFVar10->bXPBDInitialGuess == false)) && (param_3)) {
    this->bDfDxTimesVTerm = true;
  }
  else {
    this->bDfDxTimesVTerm = false;
    if (pFVar10->bDoQuasistatics == false) {
      if (((this->CompactifiedIndices).ArrayNum != *(int *)&param_1->field_0x14) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompactifiedIndices.Num() == Particles.GetRangeSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolutionLinearSystem.cpp"
                              ,0x51,L""), bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->RHS,this->NumCompactIndices,Default);
      puVar1 = &param_1->field_0x8;
      if ((*(longlong *)&param_1->field_0x8 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_100,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(*(longlong *)puVar1 + 0x78));
      local_118 = local_100.DataPtr;
      if ((*(longlong *)puVar1 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_f0,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)puVar1 + 0x48));
      if ((*(longlong *)puVar1 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Particles",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                              ,0x56,L""), bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      TParticlesRange<Chaos::Softs::FSolverParticles,void>::
      GetConstArrayView<Chaos::TVector<float,3>_>
                ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_e0,
                 (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)puVar1 + 0x60));
      pfVar15 = local_118;
      uVar19 = 0;
      if (0 < *(int *)&param_1->field_0x14) {
        lVar22 = 0;
        pfVar20 = (float *)&(local_f0.DataPtr)->field_0x4;
        local_120 = (float *)&(local_e0.DataPtr)->field_0x4;
        do {
          iVar9 = (this->CompactifiedIndices).ArrayNum;
          uVar16 = 0;
          if ((int)uVar19 < iVar9) {
            uVar16 = ~uVar19 >> 0x1f;
          }
          if (uVar16 == 0) {
            local_138 = (longlong)(int)uVar19;
            local_130 = (longlong)iVar9;
            bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar23) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
          }
          if (*(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar22) != -1) {
            fVar2 = *(float *)((longlong)pfVar15 + lVar22);
            fVar3 = local_120[-1];
            fVar4 = *local_120;
            fVar5 = local_120[1];
            iVar9 = (this->CompactifiedIndices).ArrayNum;
            fVar6 = pfVar20[-1];
            fVar7 = *pfVar20;
            fVar8 = pfVar20[1];
            uVar16 = 0;
            if ((int)uVar19 < iVar9) {
              uVar16 = ~uVar19 >> 0x1f;
            }
            if (uVar16 == 0) {
              local_138 = (longlong)(int)uVar19;
              local_130 = (longlong)iVar9;
              bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar23) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            iVar9 = (this->RHS).ArrayNum;
            uVar16 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar22);
            lVar21 = (longlong)(int)uVar16;
            uVar17 = 0;
            if ((int)uVar16 < iVar9) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_138 = lVar21, local_130 = (longlong)iVar9,
               bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar11 = (this->RHS).AllocatorInstance.Data;
            *(float *)(pFVar11 + lVar21 * 0xc) = (fVar3 - fVar6) * fVar2;
            *(float *)(pFVar11 + lVar21 * 0xc + 4) = (fVar4 - fVar7) * fVar2;
            *(float *)(pFVar11 + lVar21 * 0xc + 8) = (fVar5 - fVar8) * fVar2;
          }
          local_120 = local_120 + 3;
          uVar19 = uVar19 + 1;
          pfVar20 = pfVar20 + 3;
          lVar22 = lVar22 + 4;
          cVar18 = local_128;
        } while ((int)uVar19 < *(int *)&param_1->field_0x14);
      }
      goto LAB_143e32308;
    }
  }
  local_110._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_110._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&this->RHS,(TVector<float,3> *)local_110,this->NumCompactIndices);
LAB_143e32308:
  TBlockSparseSymmetricLinearSystem<float,3>::Reset(&this->Matrix,this->NumCompactIndices);
  if (this->Parameters->bDoQuasistatics == false) {
    TBlockSparseSymmetricLinearSystem<float,3>::ReserveForParallelAdd
              (&this->Matrix,this->NumCompactIndices,0);
    if ((*(longlong *)&param_1->field_0x8 == 0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("Particles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                            ,0x56,L""), bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetConstArrayView<float>
              ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_d0,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)&param_1->field_0x8 + 0x78));
    uVar14 = _UNK_150689648;
    uVar13 = ___xmm_3f800000000000000000000000000000;
    uVar19 = 0;
    if (0 < *(int *)&param_1->field_0x14) {
      lVar22 = 0;
      do {
        iVar9 = (this->CompactifiedIndices).ArrayNum;
        uVar16 = 0;
        if ((int)uVar19 < iVar9) {
          uVar16 = ~uVar19 >> 0x1f;
        }
        if (uVar16 == 0) {
          local_138 = (longlong)(int)uVar19;
          local_130 = (longlong)iVar9;
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar9 = *(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar22);
        if (iVar9 != -1) {
          local_b8._20_4_ = *(uint *)(lVar22 + (longlong)local_d0.DataPtr);
          local_b8._4_4_ = 0;
          local_b8._0_4_ = local_b8._20_4_;
          local_b8._12_8_ = 0;
          local_b8._32_8_ = 0;
          local_b8._8_4_ = 0;
          local_b8._24_8_ = 0;
          local_b8._48_8_ = uVar13;
          local_b8._56_8_ = uVar14;
          local_b8._44_4_ = 0;
          local_b8._40_4_ = local_b8._20_4_;
          TBlockSparseSymmetricLinearSystem<float,3>::AddMatrixEntry
                    (&this->Matrix,iVar9,iVar9,&local_b8);
        }
        uVar19 = uVar19 + 1;
        lVar22 = lVar22 + 4;
      } while ((int)uVar19 < *(int *)&param_1->field_0x14);
    }
  }
  if (cVar18 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Solve @ 143e50550

bool __thiscall
Chaos::Softs::FEvolutionLinearSystem::Solve
          (FEvolutionLinearSystem *this,FSolverParticlesRange *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  FEvolutionLinearSystemSolverParameters *pFVar11;
  FPAndInvM *pFVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  TArrayView<Chaos::Softs::FPAndInvM,int> *pTVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  longlong lVar23;
  float *pfVar24;
  uint uVar25;
  longlong lVar26;
  bool bVar27;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_f8;
  undefined1 local_e8 [16];
  TArrayView<Chaos::TVector<float,3>,int> local_d8;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_c8;
  TArrayView<Chaos::TVector<float,3>,int> local_b8;
  TArrayView<Chaos::TVector<float,3>,int> local_a8;
  TArrayView<Chaos::TVector<float,3>,int> local_98;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_88;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_78;
  TArrayView<Chaos::Softs::FPAndInvM,int> local_68 [3];
  
  bVar27 = -1 < CpuChannel->Enabled;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"FEvolutionLinearSystem_Solve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolutionLinearSystem.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if ((this->Parameters == (FEvolutionLinearSystemSolverParameters *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parameters",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\SoftsEvolutionLinearSystem.cpp"
                          ,0xb6,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    uVar15 = (*pcVar13)();
    return (bool)uVar15;
  }
  TBlockSparseSymmetricLinearSystem<float,3>::FinalizeSystem(&this->Matrix);
  local_e8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_e8._8_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::Init
            (&local_f8,(TVector<float,3> *)local_e8,this->NumCompactIndices);
  pFVar11 = this->Parameters;
  local_d8.ArrayNum = local_f8.ArrayNum;
  bVar14 = pFVar11->bCheckCGResidual;
  fVar1 = pFVar11->CGResidualTolerance;
  iVar9 = pFVar11->MaxNumCGIterations;
  local_d8.DataPtr = (TVector<float,3> *)local_f8.AllocatorInstance.Data;
  if ((local_f8.ArrayNum < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    uVar15 = (*pcVar13)();
    return (bool)uVar15;
  }
  local_c8.DataPtr = (TVector<float,3> *)(this->RHS).AllocatorInstance.Data;
  iVar10 = (this->RHS).ArrayNum;
  if ((iVar10 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    uVar15 = (*pcVar13)();
    return (bool)uVar15;
  }
  local_c8.ArrayNum = iVar10;
  bVar14 = TBlockSparseSymmetricLinearSystem<float,3>::Solve
                     (&this->Matrix,&local_c8,&local_d8,iVar9,fVar1,bVar14,
                      &this->LastSolveIterations,&this->LastSolveError);
  if (bVar14) {
    if (this->Parameters->bDoQuasistatics == false) {
      if (this->bDfDxTimesVTerm == false) {
        pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,local_68);
        pFVar12 = pTVar19->DataPtr;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          uVar15 = (*pcVar13)();
          return (bool)uVar15;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_98,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x48));
        uVar21 = 0;
        if (0 < *(int *)&param_1->field_0x14) {
          lVar23 = 0;
          pfVar22 = (float *)&(pFVar12->P).field_0x8;
          pfVar20 = (float *)&(local_98.DataPtr)->field_0x8;
          do {
            uVar25 = ~uVar21 >> 0x1f;
            uVar17 = 0;
            if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
              uVar17 = uVar25;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              uVar15 = (*pcVar13)();
              return (bool)uVar15;
            }
            if (*(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23 * 4) != -1) {
              uVar17 = 0;
              if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
                uVar17 = uVar25;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              uVar17 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23 * 4);
              uVar18 = 0;
              if ((int)uVar17 < local_f8.ArrayNum) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              lVar26 = (longlong)(int)uVar17;
              pfVar20[-2] = pfVar20[-2] + *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc)
              ;
              pfVar20[-1] = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 4) +
                            pfVar20[-1];
              *pfVar20 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 8) + *pfVar20;
              uVar17 = 0;
              if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
                uVar17 = uVar25;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              uVar17 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23 * 4);
              lVar26 = (longlong)(int)uVar17;
              uVar25 = 0;
              if ((int)uVar17 < local_f8.ArrayNum) {
                uVar25 = ~uVar17 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              fVar1 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 8);
              fVar2 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc);
              pfVar22[-1] = param_2 * *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 4)
                            + pfVar22[-1];
              *pfVar22 = param_2 * fVar1 + *pfVar22;
              pfVar22[-2] = param_2 * fVar2 + pfVar22[-2];
            }
            uVar21 = uVar21 + 1;
            lVar23 = lVar23 + 1;
            pfVar20 = pfVar20 + 3;
            pfVar22 = pfVar22 + 4;
          } while ((int)uVar21 < *(int *)&param_1->field_0x14);
        }
      }
      else {
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          uVar15 = (*pcVar13)();
          return (bool)uVar15;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_b8,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x28));
        pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_78);
        pFVar12 = pTVar19->DataPtr;
        if ((*(longlong *)&param_1->field_0x8 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Particles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticlesRange.h"
                                ,0x57,L""), bVar14)) {
          pcVar13 = (code *)swi(3);
          uVar15 = (*pcVar13)();
          return (bool)uVar15;
        }
        TParticlesRange<Chaos::Softs::FSolverParticles,void>::GetArrayView<Chaos::TVector<float,3>_>
                  ((TParticlesRange<Chaos::Softs::FSolverParticles,void> *)param_1,&local_a8,
                   (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                   (*(longlong *)&param_1->field_0x8 + 0x48));
        uVar21 = 0;
        if (0 < *(int *)&param_1->field_0x14) {
          pfVar20 = (float *)&(pFVar12->P).field_0x8;
          lVar23 = 0;
          pfVar22 = (float *)&(local_b8.DataPtr)->field_0x4;
          pfVar24 = (float *)&(local_a8.DataPtr)->field_0x8;
          do {
            uVar17 = 0;
            if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              uVar15 = (*pcVar13)();
              return (bool)uVar15;
            }
            if (*(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23) != -1) {
              uVar17 = 0;
              if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
                uVar17 = ~uVar21 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              uVar17 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23);
              lVar26 = (longlong)(int)uVar17;
              uVar25 = 0;
              if ((int)uVar17 < local_f8.ArrayNum) {
                uVar25 = ~uVar17 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar13 = (code *)swi(3);
                uVar15 = (*pcVar13)();
                return (bool)uVar15;
              }
              fVar1 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc);
              fVar2 = pfVar24[-2];
              pfVar24[-2] = fVar1 + fVar2;
              fVar3 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 4);
              fVar4 = pfVar24[-1];
              pfVar24[-1] = fVar3 + fVar4;
              fVar5 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 8);
              fVar6 = *pfVar24;
              *pfVar24 = fVar5 + fVar6;
              fVar7 = *pfVar22;
              fVar8 = pfVar22[1];
              *(float *)(pfVar20 + -2) = (fVar1 + fVar2) * param_2 + pfVar22[-1];
              pfVar20[-1] = (fVar3 + fVar4) * param_2 + fVar7;
              *pfVar20 = (fVar5 + fVar6) * param_2 + fVar8;
            }
            pfVar22 = pfVar22 + 3;
            pfVar20 = pfVar20 + 4;
            uVar21 = uVar21 + 1;
            lVar23 = lVar23 + 4;
            pfVar24 = pfVar24 + 3;
          } while ((int)uVar21 < *(int *)&param_1->field_0x14);
          bVar14 = true;
          goto LAB_143e50d9a;
        }
      }
    }
    else {
      pTVar19 = FSolverParticlesRange::GetPAndInvM(param_1,&local_88);
      uVar21 = 0;
      if (0 < *(int *)&param_1->field_0x14) {
        lVar23 = 0;
        pfVar22 = (float *)&(pTVar19->DataPtr->P).field_0x8;
        do {
          uVar17 = 0;
          if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
            uVar17 = ~uVar21 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            uVar15 = (*pcVar13)();
            return (bool)uVar15;
          }
          if (*(int *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23) != -1) {
            uVar17 = 0;
            if ((int)uVar21 < (this->CompactifiedIndices).ArrayNum) {
              uVar17 = ~uVar21 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              uVar15 = (*pcVar13)();
              return (bool)uVar15;
            }
            uVar17 = *(uint *)((this->CompactifiedIndices).AllocatorInstance.Data + lVar23);
            lVar26 = (longlong)(int)uVar17;
            uVar25 = 0;
            if ((int)uVar17 < local_f8.ArrayNum) {
              uVar25 = ~uVar17 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              uVar15 = (*pcVar13)();
              return (bool)uVar15;
            }
            pfVar22[-2] = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc) + pfVar22[-2];
            pfVar22[-1] = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 4) +
                          pfVar22[-1];
            *pfVar22 = *(float *)(local_f8.AllocatorInstance.Data + lVar26 * 0xc + 8) + *pfVar22;
          }
          uVar21 = uVar21 + 1;
          lVar23 = lVar23 + 4;
          pfVar22 = pfVar22 + 4;
        } while ((int)uVar21 < *(int *)&param_1->field_0x14);
        bVar14 = true;
        goto LAB_143e50d9a;
      }
    }
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
LAB_143e50d9a:
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar14;
}

