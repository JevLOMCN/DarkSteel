// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// SolveVelocityAverage @ 143a190f0

void __thiscall
Chaos::Private::FPBDCollisionSolver::SolveVelocityAverage(FPBDCollisionSolver *this,float param_1)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  FSolverBody *pFVar5;
  FSolverBody *pFVar6;
  longlong lVar7;
  ulonglong uVar8;
  FPBDCollisionSolverManifoldPoint *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  float local_238;
  undefined8 local_230;
  float local_228;
  float local_220;
  float local_218;
  float local_208;
  float local_1f8;
  float local_1e8;
  float local_1d8;
  float local_1c8;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1a8;
  float local_198;
  float local_188;
  float local_178;
  float local_170;
  float local_168;
  float local_158;
  float local_144;
  float fStack_100;
  float fStack_c0;
  
  fVar2 = __real_00800000;
  pFVar5 = (this->State).SolverBodies[0].Body;
  fStack_100 = (this->State).SolverBodies[0].State.ShockPropagationScale;
  fVar12 = fStack_100 * (this->State).SolverBodies[0].State.InvMScale * (pFVar5->State).InvM;
  local_1b8 = 0.0;
  local_238 = 0.0;
  if (fVar12 <= __real_00800000) {
    fStack_100 = 0.0;
    local_220 = 0.0;
    local_218 = 0.0;
    local_1e8 = 0.0;
    local_208 = 0.0;
    local_1f8 = 0.0;
    local_1c0 = 0.0;
    local_1c8 = 0.0;
    local_1d8 = 0.0;
  }
  else {
    fStack_100 = fStack_100 * (this->State).SolverBodies[0].State.InvIScale;
    local_1d8 = fStack_100 * *(float *)&(pFVar5->State).InvI;
    local_1f8 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x10;
    local_1c8 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x4;
    local_218 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x20;
    local_1c0 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x8;
    local_220 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x24;
    local_208 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x14;
    local_1e8 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x18;
    fStack_100 = fStack_100 * *(float *)&(pFVar5->State).InvI.field_0x28;
    local_1b8 = fVar12;
  }
  fStack_c0 = (this->State).SolverBodies[1].State.ShockPropagationScale;
  pFVar6 = (this->State).SolverBodies[1].Body;
  fVar12 = fStack_c0 * (this->State).SolverBodies[1].State.InvMScale * (pFVar6->State).InvM;
  if (fVar12 <= __real_00800000) {
    fStack_c0 = 0.0;
    local_1b4 = 0.0;
    local_1a8 = 0.0;
    local_178 = 0.0;
    local_198 = 0.0;
    local_188 = 0.0;
    local_158 = 0.0;
    local_170 = 0.0;
    local_168 = 0.0;
  }
  else {
    fStack_c0 = fStack_c0 * (this->State).SolverBodies[1].State.InvIScale;
    local_168 = fStack_c0 * *(float *)&(pFVar6->State).InvI;
    local_178 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x18;
    local_158 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x8;
    local_170 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x4;
    local_1a8 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x20;
    local_188 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x10;
    local_1b4 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x24;
    local_198 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x14;
    fStack_c0 = fStack_c0 * *(float *)&(pFVar6->State).InvI.field_0x28;
    local_238 = fVar12;
  }
  iVar4 = (this->State).NumManifoldPoints;
  lVar7 = (longlong)iVar4;
  uVar8 = 0;
  fVar12 = 0.0;
  local_230 = 0;
  fVar20 = 0.0;
  local_228 = 0.0;
  if (0 < iVar4) {
    pFVar9 = (this->State).ManifoldPoints;
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    uVar10 = uVar8;
    do {
      if (((0.0 < pFVar9->NetPushOutNormal) || (0.0 < pFVar9->NetSoftPushOutNormal)) ||
         (fVar14 = (this->State).SoftPhi,
         pFVar9->ContactDeltaNormal <= fVar14 && fVar14 != pFVar9->ContactDeltaNormal)) {
        fVar12 = fVar12 + pFVar9->NetPushOutNormal;
        uVar3 = *(undefined8 *)&pFVar9->RelativeContactPoints[0].field_0x4;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        local_228 = *(float *)&(pFVar9->ContactNormal).field_0x8;
        fVar20 = fVar20 + pFVar9->ContactTargetVelocityNormal;
        fVar13 = fVar13 + *(float *)pFVar9->RelativeContactPoints;
        fVar15 = fVar15 + (float)uVar3;
        fVar16 = fVar16 + *(float *)&pFVar9->RelativeContactPoints[1].field_0x4;
        fVar17 = fVar17 + (float)((ulonglong)uVar3 >> 0x20);
        local_230 = *(undefined8 *)&pFVar9->ContactNormal;
        fVar18 = fVar18 + *(float *)(pFVar9->RelativeContactPoints + 1);
        fVar19 = fVar19 + *(float *)&pFVar9->RelativeContactPoints[1].field_0x8;
      }
      pFVar9 = pFVar9 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (1 < (int)uVar10) {
      fVar25 = __real_3f800000 / (float)(int)uVar10;
      local_144 = 0.0;
      fVar21 = fVar15 * local_228 - fVar17 * local_230._4_4_;
      fVar24 = (float)local_230 * fVar17 - fVar13 * local_228;
      fVar14 = fVar13 * local_230._4_4_ - (float)local_230 * fVar15;
      fVar17 = 0.0;
      fVar23 = 0.0;
      fVar15 = fVar16 * local_228 - fVar19 * local_230._4_4_;
      fVar26 = 0.0;
      fVar27 = 0.0;
      fVar19 = (float)local_230 * fVar19 - fVar18 * local_228;
      fVar22 = 0.0;
      fVar13 = (this->State).InvMs[0];
      fVar16 = fVar18 * local_230._4_4_ - (float)local_230 * fVar16;
      if (__real_00800000 < fVar13) {
        fVar23 = local_220 * fVar24 + local_218 * fVar21 + fVar14 * fStack_100;
        fVar22 = fVar24 * local_208 + local_1f8 * fVar21 + fVar14 * local_1e8;
        local_144 = local_1d8 * fVar21 + fVar24 * local_1c8 + fVar14 * local_1c0;
        fVar17 = fVar21 * local_144 + fVar24 * fVar22 + fVar14 * fVar23 + local_1b8;
      }
      if ((this->State).InvMs[1] <= __real_00800000) {
        fVar18 = 0.0;
      }
      else {
        fVar18 = local_1b4 * fVar19 + fVar15 * local_1a8 + fStack_c0 * fVar16;
        fVar27 = local_198 * fVar19 + fVar15 * local_188 + local_178 * fVar16;
        fVar26 = local_170 * fVar19 + fVar15 * local_168 + local_158 * fVar16;
        fVar17 = fVar17 + fVar15 * fVar26 + fVar19 * fVar27 + fVar16 * fVar18 + local_238;
      }
      if (fVar17 <= __real_322bcc77) {
        fVar17 = 0.0;
      }
      else {
        fVar17 = __real_3f800000 / fVar17;
      }
      fVar12 = (__real_bf800000 / param_1) * fVar12;
      fVar20 = ((fVar19 * *(float *)&(pFVar6->State).W.field_0x4 +
                 fVar15 * *(float *)&(pFVar6->State).W +
                fVar16 * *(float *)&(pFVar6->State).W.field_0x8) -
               ((((*(float *)&(pFVar5->State).V.field_0x4 - *(float *)&(pFVar6->State).V.field_0x4)
                  * local_230._4_4_ +
                  (*(float *)&(pFVar5->State).V - *(float *)&(pFVar6->State).V) * (float)local_230 +
                 (*(float *)&(pFVar5->State).V.field_0x8 - *(float *)&(pFVar6->State).V.field_0x8) *
                 local_228) - fVar25 * fVar20) + fVar14 * *(float *)&(pFVar5->State).W.field_0x8 +
               fVar21 * *(float *)&(pFVar5->State).W +
               fVar24 * *(float *)&(pFVar5->State).W.field_0x4)) * fVar17 * (this->State).Stiffness;
      if (0.0 <= fVar12) {
        fVar12 = 0.0;
      }
      if (fVar20 <= fVar12) {
        fVar20 = fVar12;
      }
      if (__real_00800000 < fVar13) {
        fVar12 = *(float *)&(pFVar5->State).V.field_0x4;
        fVar15 = *(float *)&(pFVar5->State).V.field_0x8;
        *(float *)&(pFVar5->State).V =
             fVar13 * (float)local_230 * fVar20 + *(float *)&(pFVar5->State).V;
        *(float *)&(pFVar5->State).V.field_0x4 = fVar13 * fVar20 * local_230._4_4_ + fVar12;
        *(float *)&(pFVar5->State).V.field_0x8 = fVar13 * fVar20 * local_228 + fVar15;
        fVar12 = *(float *)&(pFVar5->State).W.field_0x4;
        fVar13 = *(float *)&(pFVar5->State).W.field_0x8;
        *(float *)&(pFVar5->State).W = fVar20 * local_144 + *(float *)&(pFVar5->State).W;
        *(float *)&(pFVar5->State).W.field_0x4 = fVar22 * fVar20 + fVar12;
        *(float *)&(pFVar5->State).W.field_0x8 = fVar23 * fVar20 + fVar13;
      }
      fVar12 = (this->State).InvMs[1];
      if (fVar2 < fVar12) {
        pFVar5 = (this->State).SolverBodies[1].Body;
        fVar12 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000);
        fVar15 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
        fVar2 = *(float *)&(pFVar5->State).V.field_0x4;
        fVar13 = *(float *)&(pFVar5->State).V.field_0x8;
        *(float *)&(pFVar5->State).V =
             fVar12 * (float)local_230 * fVar20 + *(float *)&(pFVar5->State).V;
        *(float *)&(pFVar5->State).V.field_0x4 = fVar12 * fVar20 * local_230._4_4_ + fVar2;
        *(float *)&(pFVar5->State).V.field_0x8 = fVar12 * fVar20 * local_228 + fVar13;
        fVar2 = *(float *)&(pFVar5->State).W.field_0x8;
        fVar12 = *(float *)&(pFVar5->State).W.field_0x4;
        *(float *)&(pFVar5->State).W = fVar15 * fVar26 + *(float *)&(pFVar5->State).W;
        *(float *)&(pFVar5->State).W.field_0x4 = fVar15 * fVar27 + fVar12;
        *(float *)&(pFVar5->State).W.field_0x8 = fVar15 * fVar18 + fVar2;
      }
      uVar10 = uVar8;
      if (0 < (this->State).NumManifoldPoints) {
        do {
          pFVar9 = (this->State).ManifoldPoints;
          if (((0.0 < *(float *)((longlong)&pFVar9->NetPushOutNormal + uVar8)) ||
              (0.0 < *(float *)((longlong)&pFVar9->NetSoftPushOutNormal + uVar8))) ||
             (fVar2 = (this->State).SoftPhi,
             pfVar1 = (float *)((longlong)(pFVar9->RelativeContactPoints + 5) + uVar8),
             *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
            *(float *)((longlong)&pFVar9->NetImpulseNormal + uVar8) =
                 fVar20 * fVar25 + *(float *)((longlong)&pFVar9->NetImpulseNormal + uVar8);
          }
          uVar11 = (int)uVar10 + 1;
          uVar8 = uVar8 + 0x10c;
          uVar10 = (ulonglong)uVar11;
        } while ((int)uVar11 < (this->State).NumManifoldPoints);
      }
    }
  }
  return;
}

