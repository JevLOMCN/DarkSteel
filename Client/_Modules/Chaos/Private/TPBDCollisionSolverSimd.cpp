// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// SolvePositionNoFriction @ 143a15950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::SolvePositionNoFriction
          (TPBDCollisionSolverSimd<4> *this,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_1,
          TSimdValue<Chaos::FSolverBody_*,4> *param_2,TSimdValue<Chaos::FSolverBody_*,4> *param_3,
          TSimdRealf<4> *param_4)

{
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar1;
  TSimdVec3f<4> *pTVar2;
  float *pfVar3;
  float *pfVar4;
  TSimdVec3f<4> *pTVar5;
  TSimdVec3f<4> *pTVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  TSimdVec3f<4> *pTVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  TSimdRealf<4> *pTVar14;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar15;
  code *pcVar16;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  bool bVar77;
  uint uVar78;
  int iVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auStackY_278 [32];
  TSimdVec3f<4> local_1b8;
  TSimdVec3f<4> local_188;
  TSimdVec3f<4> local_158;
  TSimdVec3f<4> local_128;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  GatherBodyPositionCorrections(param_2,param_3,&local_128,&local_158,&local_188,&local_1b8);
  iVar79 = 0;
  if (0 < this->MaxManifoldPoints) {
    do {
      fVar76 = local_128.VZ[3];
      fVar75 = local_128.VZ[2];
      fVar74 = local_128.VZ[1];
      fVar73 = local_128.VZ[0];
      fVar72 = local_128.VY[3];
      fVar71 = local_128.VY[2];
      fVar70 = local_128.VY[1];
      fVar69 = local_128.VY[0];
      fVar68 = local_128.VX[3];
      fVar67 = local_128.VX[2];
      fVar66 = local_128.VX[1];
      fVar65 = local_128.VX[0];
      fVar64 = local_158.VZ[3];
      fVar63 = local_158.VZ[2];
      fVar62 = local_158.VZ[1];
      fVar61 = local_158.VZ[0];
      fVar60 = local_158.VY[3];
      fVar59 = local_158.VY[2];
      fVar58 = local_158.VY[1];
      fVar57 = local_158.VY[0];
      fVar56 = local_158.VX[3];
      fVar55 = local_158.VX[2];
      fVar54 = local_158.VX[1];
      fVar53 = local_158.VX[0];
      fVar52 = local_188.VZ[3];
      fVar51 = local_188.VZ[2];
      fVar50 = local_188.VZ[1];
      fVar49 = local_188.VZ[0];
      fVar48 = local_188.VY[3];
      fVar47 = local_188.VY[2];
      fVar46 = local_188.VY[1];
      fVar45 = local_188.VY[0];
      fVar44 = local_188.VX[3];
      fVar43 = local_188.VX[2];
      fVar42 = local_188.VX[1];
      fVar41 = local_188.VX[0];
      fVar40 = local_1b8.VZ[3];
      fVar39 = local_1b8.VZ[2];
      fVar38 = local_1b8.VZ[1];
      fVar37 = local_1b8.VZ[0];
      fVar36 = local_1b8.VY[3];
      fVar35 = local_1b8.VY[2];
      fVar34 = local_1b8.VY[1];
      fVar33 = local_1b8.VY[0];
      fVar32 = local_1b8.VX[3];
      fVar31 = local_1b8.VX[2];
      fVar30 = local_1b8.VX[1];
      fVar29 = local_1b8.VX[0];
      uVar78 = this->ManifoldPointBeginIndex + iVar79;
      uVar88 = 0;
      if ((int)uVar78 < param_1->ArrayNum) {
        uVar88 = ~uVar78 >> 0x1f;
      }
      if ((uVar88 == 0) &&
         (bVar77 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar77)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pTVar15 = param_1->DataPtr;
      pTVar2 = &pTVar15[(int)uVar78].SimdRelativeContactPoint1;
      pfVar3 = pTVar15[(int)uVar78].SimdRelativeContactPoint1.VZ;
      pfVar4 = pTVar15[(int)uVar78].SimdRelativeContactPoint1.VZ;
      pTVar5 = &pTVar15[(int)uVar78].SimdRelativeContactPoint0;
      pTVar6 = &pTVar15[(int)uVar78].SimdContactNormal;
      fVar17 = pTVar6->VX[0];
      fVar18 = pTVar6->VX[1];
      fVar19 = pTVar6->VX[2];
      fVar20 = pTVar6->VX[3];
      pfVar12 = pTVar15[(int)uVar78].SimdContactNormal.VY;
      fVar21 = *pfVar12;
      fVar22 = pfVar12[1];
      fVar23 = pfVar12[2];
      fVar24 = pfVar12[3];
      pfVar12 = pTVar15[(int)uVar78].SimdRelativeContactPoint0.VZ;
      pfVar13 = pTVar15[(int)uVar78].SimdContactNormal.VZ;
      fVar25 = *pfVar13;
      fVar26 = pfVar13[1];
      fVar27 = pfVar13[2];
      fVar28 = pfVar13[3];
      pTVar14 = &pTVar15[(int)uVar78].SimdNetPushOutNormal;
      fVar81 = pTVar14->V[0];
      fVar83 = pTVar14->V[1];
      fVar85 = pTVar14->V[2];
      fVar87 = pTVar14->V[3];
      pfVar13 = pTVar15[(int)uVar78].SimdRelativeContactPoint1.VY;
      pfVar7 = pTVar15[(int)uVar78].SimdRelativeContactPoint0.VY;
      pfVar8 = pTVar15[(int)uVar78].SimdRelativeContactPoint0.VZ;
      pTVar6 = &pTVar15[(int)uVar78].SimdRelativeContactPoint1;
      pfVar9 = pTVar15[(int)uVar78].SimdRelativeContactPoint1.VY;
      pTVar10 = &pTVar15[(int)uVar78].SimdRelativeContactPoint0;
      pfVar11 = pTVar15[(int)uVar78].SimdRelativeContactPoint0.VY;
      fVar80 = 0.0 - param_4->V[0];
      fVar82 = 0.0 - param_4->V[1];
      fVar84 = 0.0 - param_4->V[2];
      fVar86 = 0.0 - param_4->V[3];
      pTVar14 = &pTVar15[(int)uVar78].SimdContactDeltaNormal;
      fVar92 = (((fVar61 * pTVar5->VX[0] - fVar53 * *pfVar12) + fVar69) -
               ((fVar37 * pTVar2->VX[0] - fVar29 * *pfVar3) + fVar45)) * fVar21 +
               (((fVar57 * *pfVar8 - fVar61 * *pfVar7) + fVar65) -
               ((fVar33 * *pfVar4 - fVar37 * *pfVar13) + fVar41)) * fVar17 +
               (((fVar53 * *pfVar11 - fVar57 * pTVar10->VX[0]) + fVar73) -
               ((fVar29 * *pfVar9 - fVar33 * pTVar6->VX[0]) + fVar49)) * fVar25 + pTVar14->V[0];
      fVar93 = (((fVar62 * pTVar5->VX[1] - fVar54 * pfVar12[1]) + fVar70) -
               ((fVar38 * pTVar2->VX[1] - fVar30 * pfVar3[1]) + fVar46)) * fVar22 +
               (((fVar58 * pfVar8[1] - fVar62 * pfVar7[1]) + fVar66) -
               ((fVar34 * pfVar4[1] - fVar38 * pfVar13[1]) + fVar42)) * fVar18 +
               (((fVar54 * pfVar11[1] - fVar58 * pTVar10->VX[1]) + fVar74) -
               ((fVar30 * pfVar9[1] - fVar34 * pTVar6->VX[1]) + fVar50)) * fVar26 + pTVar14->V[1];
      fVar94 = (((fVar63 * pTVar5->VX[2] - fVar55 * pfVar12[2]) + fVar71) -
               ((fVar39 * pTVar2->VX[2] - fVar31 * pfVar3[2]) + fVar47)) * fVar23 +
               (((fVar59 * pfVar8[2] - fVar63 * pfVar7[2]) + fVar67) -
               ((fVar35 * pfVar4[2] - fVar39 * pfVar13[2]) + fVar43)) * fVar19 +
               (((fVar55 * pfVar11[2] - fVar59 * pTVar10->VX[2]) + fVar75) -
               ((fVar31 * pfVar9[2] - fVar35 * pTVar6->VX[2]) + fVar51)) * fVar27 + pTVar14->V[2];
      fVar95 = (((fVar64 * pTVar5->VX[3] - fVar56 * pfVar12[3]) + fVar72) -
               ((fVar40 * pTVar2->VX[3] - fVar32 * pfVar3[3]) + fVar48)) * fVar24 +
               (((fVar60 * pfVar8[3] - fVar64 * pfVar7[3]) + fVar68) -
               ((fVar36 * pfVar4[3] - fVar40 * pfVar13[3]) + fVar44)) * fVar20 +
               (((fVar56 * pfVar11[3] - fVar60 * pTVar10->VX[3]) + fVar76) -
               ((fVar32 * pfVar9[3] - fVar36 * pTVar6->VX[3]) + fVar52)) * fVar28 + pTVar14->V[3];
      uVar88 = -(uint)(fVar92 < fVar80 && fVar80 < 0.0);
      uVar89 = -(uint)(fVar93 < fVar82 && fVar82 < 0.0);
      uVar90 = -(uint)(fVar94 < fVar84 && fVar84 < 0.0);
      uVar91 = -(uint)(fVar95 < fVar86 && fVar86 < 0.0);
      fVar80 = (float)(uVar88 & (uint)fVar80 | ~uVar88 & (uint)fVar92);
      fVar82 = (float)(uVar89 & (uint)fVar82 | ~uVar89 & (uint)fVar93);
      fVar84 = (float)(uVar90 & (uint)fVar84 | ~uVar90 & (uint)fVar94);
      fVar86 = (float)(uVar91 & (uint)fVar86 | ~uVar91 & (uint)fVar95);
      pTVar14 = &pTVar15[(int)uVar78].SimdContactMassNormal;
      pTVar1 = pTVar15 + (int)uVar78;
      fVar80 = 0.0 - (float)(-(uint)(0.0 < fVar81 || fVar80 < 0.0) & (uint)(pTVar1->IsValid).V[0] &
                            (uint)fVar80) * pTVar14->V[0] * (this->SimdStiffness).V[0];
      fVar82 = 0.0 - (float)(-(uint)(0.0 < fVar83 || fVar82 < 0.0) & (uint)(pTVar1->IsValid).V[1] &
                            (uint)fVar82) * pTVar14->V[1] * (this->SimdStiffness).V[1];
      fVar84 = 0.0 - (float)(-(uint)(0.0 < fVar85 || fVar84 < 0.0) & (uint)(pTVar1->IsValid).V[2] &
                            (uint)fVar84) * pTVar14->V[2] * (this->SimdStiffness).V[2];
      fVar86 = 0.0 - (float)(-(uint)(0.0 < fVar87 || fVar86 < 0.0) & (uint)(pTVar1->IsValid).V[3] &
                            (uint)fVar86) * pTVar14->V[3] * (this->SimdStiffness).V[3];
      iVar79 = iVar79 + 1;
      uVar88 = -(uint)(0.0 < fVar80 + fVar81);
      uVar89 = -(uint)(0.0 < fVar82 + fVar83);
      uVar90 = -(uint)(0.0 < fVar84 + fVar85);
      uVar91 = -(uint)(0.0 < fVar86 + fVar87);
      fVar92 = (float)(~uVar88 & (uint)(0.0 - fVar81) | uVar88 & (uint)fVar80);
      fVar93 = (float)(~uVar89 & (uint)(0.0 - fVar83) | uVar89 & (uint)fVar82);
      fVar94 = (float)(~uVar90 & (uint)(0.0 - fVar85) | uVar90 & (uint)fVar84);
      fVar95 = (float)(~uVar91 & (uint)(0.0 - fVar87) | uVar91 & (uint)fVar86);
      pTVar14 = &pTVar15[(int)uVar78].SimdNetPushOutNormal;
      pTVar14->V[0] = fVar92 + fVar81;
      pTVar14->V[1] = fVar93 + fVar83;
      pTVar14->V[2] = fVar94 + fVar85;
      pTVar14->V[3] = fVar95 + fVar87;
      fVar80 = fVar92 * (this->SimdInvM1).V[0];
      fVar82 = fVar93 * (this->SimdInvM1).V[1];
      fVar84 = fVar94 * (this->SimdInvM1).V[2];
      fVar86 = fVar95 * (this->SimdInvM1).V[3];
      fVar81 = (this->SimdInvM0).V[0] * fVar92;
      fVar83 = (this->SimdInvM0).V[1] * fVar93;
      fVar85 = (this->SimdInvM0).V[2] * fVar94;
      fVar87 = (this->SimdInvM0).V[3] * fVar95;
      local_128.VX[0] = fVar65 + fVar17 * fVar81;
      local_128.VX[1] = fVar66 + fVar18 * fVar83;
      local_128.VX[2] = fVar67 + fVar19 * fVar85;
      local_128.VX[3] = fVar68 + fVar20 * fVar87;
      local_128.VY[0] = fVar69 + fVar21 * fVar81;
      local_128.VY[1] = fVar70 + fVar22 * fVar83;
      local_128.VY[2] = fVar71 + fVar23 * fVar85;
      local_128.VY[3] = fVar72 + fVar24 * fVar87;
      local_128.VZ[0] = fVar73 + fVar25 * fVar81;
      local_128.VZ[1] = fVar74 + fVar26 * fVar83;
      local_128.VZ[2] = fVar75 + fVar27 * fVar85;
      local_128.VZ[3] = fVar76 + fVar28 * fVar87;
      pTVar2 = &pTVar15[(int)uVar78].SimdContactNormalAngular0;
      local_188.VZ[0] = fVar49 - fVar25 * fVar80;
      local_188.VZ[1] = fVar50 - fVar26 * fVar82;
      local_188.VZ[2] = fVar51 - fVar27 * fVar84;
      local_188.VZ[3] = fVar52 - fVar28 * fVar86;
      local_158.VX[0] = fVar53 + pTVar2->VX[0] * fVar92;
      local_158.VX[1] = fVar54 + pTVar2->VX[1] * fVar93;
      local_158.VX[2] = fVar55 + pTVar2->VX[2] * fVar94;
      local_158.VX[3] = fVar56 + pTVar2->VX[3] * fVar95;
      pfVar3 = pTVar15[(int)uVar78].SimdContactNormalAngular0.VY;
      local_188.VY[0] = fVar45 - fVar21 * fVar80;
      local_188.VY[1] = fVar46 - fVar22 * fVar82;
      local_188.VY[2] = fVar47 - fVar23 * fVar84;
      local_188.VY[3] = fVar48 - fVar24 * fVar86;
      local_158.VY[0] = fVar57 + *pfVar3 * fVar92;
      local_158.VY[1] = fVar58 + pfVar3[1] * fVar93;
      local_158.VY[2] = fVar59 + pfVar3[2] * fVar94;
      local_158.VY[3] = fVar60 + pfVar3[3] * fVar95;
      pfVar3 = pTVar15[(int)uVar78].SimdContactNormalAngular0.VZ;
      local_188.VX[0] = fVar41 - fVar17 * fVar80;
      local_188.VX[1] = fVar42 - fVar18 * fVar82;
      local_188.VX[2] = fVar43 - fVar19 * fVar84;
      local_188.VX[3] = fVar44 - fVar20 * fVar86;
      local_158.VZ[0] = fVar61 + *pfVar3 * fVar92;
      local_158.VZ[1] = fVar62 + pfVar3[1] * fVar93;
      local_158.VZ[2] = fVar63 + pfVar3[2] * fVar94;
      local_158.VZ[3] = fVar64 + pfVar3[3] * fVar95;
      pTVar2 = &pTVar15[(int)uVar78].SimdContactNormalAngular1;
      local_1b8.VX[0] = fVar29 - pTVar2->VX[0] * fVar92;
      local_1b8.VX[1] = fVar30 - pTVar2->VX[1] * fVar93;
      local_1b8.VX[2] = fVar31 - pTVar2->VX[2] * fVar94;
      local_1b8.VX[3] = fVar32 - pTVar2->VX[3] * fVar95;
      pfVar3 = pTVar15[(int)uVar78].SimdContactNormalAngular1.VY;
      local_1b8.VY[0] = fVar33 - *pfVar3 * fVar92;
      local_1b8.VY[1] = fVar34 - pfVar3[1] * fVar93;
      local_1b8.VY[2] = fVar35 - pfVar3[2] * fVar94;
      local_1b8.VY[3] = fVar36 - pfVar3[3] * fVar95;
      pfVar3 = pTVar15[(int)uVar78].SimdContactNormalAngular1.VZ;
      local_1b8.VZ[0] = fVar37 - *pfVar3 * fVar92;
      local_1b8.VZ[1] = fVar38 - pfVar3[1] * fVar93;
      local_1b8.VZ[2] = fVar39 - pfVar3[2] * fVar94;
      local_1b8.VZ[3] = fVar40 - pfVar3[3] * fVar95;
    } while (iVar79 < this->MaxManifoldPoints);
  }
  ScatterBodyPositionCorrections(&local_128,&local_158,&local_188,&local_1b8,param_2,param_3);
  return;
}

// SolvePositionWithFriction @ 143a16750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::SolvePositionWithFriction
          (TPBDCollisionSolverSimd<4> *this,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_1,
          TSimdValue<Chaos::FSolverBody_*,4> *param_2,TSimdValue<Chaos::FSolverBody_*,4> *param_3,
          TSimdRealf<4> *param_4,TSimdRealf<4> *param_5)

{
  TSimdVec3f<4> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  TSimdVec3f<4> *pTVar4;
  float *pfVar5;
  float *pfVar6;
  TSimdVec3f<4> *pTVar7;
  float *pfVar8;
  float *pfVar9;
  TSimdRealf<4> *pTVar10;
  TSimdRealf<4> *pTVar11;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar12;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar13;
  code *pcVar14;
  undefined1 auVar15 [16];
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  __m128 _Var38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  bool bVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  float fVar48;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [16];
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar56 [16];
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined4 uVar75;
  float fVar76;
  float fVar77;
  undefined4 uVar78;
  float fVar79;
  float fVar80;
  undefined4 uVar81;
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  float fVar86;
  undefined4 uVar87;
  float fVar88;
  undefined4 uVar89;
  float fVar90;
  undefined4 uVar91;
  float fVar92;
  undefined4 uVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  undefined1 auStackY_338 [32];
  __m128 local_308;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  TSimdVec3f<4> local_1b8;
  TSimdVec3f<4> local_188;
  TSimdVec3f<4> local_158;
  TSimdVec3f<4> local_128;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  GatherBodyPositionCorrections(param_2,param_3,&local_128,&local_158,&local_188,&local_1b8);
  fVar37 = _UNK_1506895ec;
  fVar36 = _UNK_1506895e8;
  fVar35 = _UNK_1506895e4;
  fVar34 = ___xmm_38d1b71738d1b71738d1b71738d1b717;
  iVar47 = 0;
  iVar44 = this->MaxManifoldPoints;
  local_308 = (__m128)ZEXT816(0);
  auVar119 = ZEXT816(0);
  local_1e8 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fStack_1e4 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fStack_1e0 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fStack_1dc = GlobalVectorConstants::FloatOne.m128_f32[3];
  if (0 < iVar44) {
    local_308 = (__m128)ZEXT816(0);
    _local_258 = ZEXT816(0);
    uVar75 = 0;
    uVar78 = 0;
    uVar81 = 0;
    uVar84 = 0;
    uVar87 = 0;
    uVar89 = 0;
    uVar91 = 0;
    uVar93 = 0;
    do {
      fVar100 = local_128.VZ[3];
      fVar98 = local_128.VZ[2];
      fVar96 = local_128.VZ[1];
      fVar85 = local_128.VZ[0];
      fVar82 = local_128.VY[3];
      fVar79 = local_128.VY[2];
      fVar76 = local_128.VY[1];
      fVar73 = local_128.VY[0];
      fVar71 = local_128.VX[3];
      fVar69 = local_128.VX[2];
      fVar67 = local_128.VX[1];
      fVar32 = local_128.VX[0];
      fVar31 = local_158.VZ[3];
      fVar30 = local_158.VZ[2];
      fVar29 = local_158.VZ[1];
      fVar28 = local_158.VZ[0];
      fVar27 = local_158.VY[3];
      fVar26 = local_158.VY[2];
      fVar25 = local_158.VY[1];
      fVar24 = local_158.VY[0];
      fVar94 = local_158.VX[3];
      fVar92 = local_158.VX[2];
      fVar90 = local_158.VX[1];
      fVar88 = local_158.VX[0];
      fVar86 = local_188.VZ[3];
      fVar83 = local_188.VZ[2];
      fVar80 = local_188.VZ[1];
      fVar77 = local_188.VZ[0];
      fVar19 = local_188.VY[3];
      fVar18 = local_188.VY[2];
      fVar17 = local_188.VY[1];
      fVar16 = local_188.VY[0];
      fVar74 = local_188.VX[3];
      fVar72 = local_188.VX[2];
      fVar70 = local_188.VX[1];
      fVar68 = local_188.VX[0];
      fVar23 = local_1b8.VZ[3];
      fVar22 = local_1b8.VZ[2];
      fVar21 = local_1b8.VZ[1];
      fVar20 = local_1b8.VZ[0];
      fVar42 = local_1b8.VY[3];
      fVar41 = local_1b8.VY[2];
      fVar40 = local_1b8.VY[1];
      fVar39 = local_1b8.VY[0];
      fVar53 = local_1b8.VX[3];
      fVar52 = local_1b8.VX[2];
      fVar51 = local_1b8.VX[1];
      fVar48 = local_1b8.VX[0];
      _Var38 = local_308;
      uVar45 = this->ManifoldPointBeginIndex + iVar47;
      uVar63 = 0;
      if ((int)uVar45 < param_1->ArrayNum) {
        uVar63 = ~uVar45 >> 0x1f;
      }
      auVar118 = _local_258;
      if (uVar63 == 0) {
        local_308.m128_f32[1] = (float)uVar78;
        local_308.m128_f32[0] = (float)uVar75;
        local_308.m128_f32[2] = (float)uVar81;
        local_308.m128_f32[3] = (float)uVar84;
        auVar118._4_4_ = uVar89;
        auVar118._0_4_ = uVar87;
        auVar118._8_4_ = uVar91;
        auVar118._12_4_ = uVar93;
        bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar43) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
      }
      pTVar12 = param_1->DataPtr;
      pTVar1 = &pTVar12[(int)uVar45].SimdRelativeContactPoint1;
      pfVar2 = pTVar12[(int)uVar45].SimdRelativeContactPoint1.VZ;
      pfVar3 = pTVar12[(int)uVar45].SimdRelativeContactPoint0.VZ;
      pTVar4 = &pTVar12[(int)uVar45].SimdRelativeContactPoint0;
      pfVar5 = pTVar12[(int)uVar45].SimdRelativeContactPoint1.VY;
      pfVar6 = pTVar12[(int)uVar45].SimdRelativeContactPoint0.VY;
      pTVar7 = &pTVar12[(int)uVar45].SimdContactNormal;
      fVar102 = pTVar7->VX[0];
      fVar103 = pTVar7->VX[1];
      fVar104 = pTVar7->VX[2];
      fVar105 = pTVar7->VX[3];
      pfVar9 = pTVar12[(int)uVar45].SimdContactNormal.VY;
      fVar106 = *pfVar9;
      fVar107 = pfVar9[1];
      fVar108 = pfVar9[2];
      fVar109 = pfVar9[3];
      pfVar9 = pTVar12[(int)uVar45].SimdContactNormal.VZ;
      fVar110 = *pfVar9;
      fVar111 = pfVar9[1];
      fVar112 = pfVar9[2];
      fVar113 = pfVar9[3];
      pTVar10 = &pTVar12[(int)uVar45].SimdNetPushOutNormal;
      fVar55 = pTVar10->V[0];
      fVar58 = pTVar10->V[1];
      fVar60 = pTVar10->V[2];
      fVar62 = pTVar10->V[3];
      fVar54 = 0.0 - param_4->V[0];
      fVar57 = 0.0 - param_4->V[1];
      fVar59 = 0.0 - param_4->V[2];
      fVar61 = 0.0 - param_4->V[3];
      pTVar10 = &pTVar12[(int)uVar45].SimdContactDeltaNormal;
      fVar95 = (((pTVar4->VX[0] * fVar28 - *pfVar3 * fVar88) + fVar73) -
               ((pTVar1->VX[0] * fVar20 - *pfVar2 * fVar48) + fVar16)) * fVar106 +
               (((*pfVar3 * fVar24 - *pfVar6 * fVar28) + fVar32) -
               ((*pfVar2 * fVar39 - *pfVar5 * fVar20) + fVar68)) * fVar102 +
               (((*pfVar6 * fVar88 - pTVar4->VX[0] * fVar24) + fVar85) -
               ((*pfVar5 * fVar48 - pTVar1->VX[0] * fVar39) + fVar77)) * fVar110 + pTVar10->V[0];
      fVar97 = (((pTVar4->VX[1] * fVar29 - pfVar3[1] * fVar90) + fVar76) -
               ((pTVar1->VX[1] * fVar21 - pfVar2[1] * fVar51) + fVar17)) * fVar107 +
               (((pfVar3[1] * fVar25 - pfVar6[1] * fVar29) + fVar67) -
               ((pfVar2[1] * fVar40 - pfVar5[1] * fVar21) + fVar70)) * fVar103 +
               (((pfVar6[1] * fVar90 - pTVar4->VX[1] * fVar25) + fVar96) -
               ((pfVar5[1] * fVar51 - pTVar1->VX[1] * fVar40) + fVar80)) * fVar111 + pTVar10->V[1];
      fVar99 = (((pTVar4->VX[2] * fVar30 - pfVar3[2] * fVar92) + fVar79) -
               ((pTVar1->VX[2] * fVar22 - pfVar2[2] * fVar52) + fVar18)) * fVar108 +
               (((pfVar3[2] * fVar26 - pfVar6[2] * fVar30) + fVar69) -
               ((pfVar2[2] * fVar41 - pfVar5[2] * fVar22) + fVar72)) * fVar104 +
               (((pfVar6[2] * fVar92 - pTVar4->VX[2] * fVar26) + fVar98) -
               ((pfVar5[2] * fVar52 - pTVar1->VX[2] * fVar41) + fVar83)) * fVar112 + pTVar10->V[2];
      fVar101 = (((pTVar4->VX[3] * fVar31 - pfVar3[3] * fVar94) + fVar82) -
                ((pTVar1->VX[3] * fVar23 - pfVar2[3] * fVar53) + fVar19)) * fVar109 +
                (((pfVar3[3] * fVar27 - pfVar6[3] * fVar31) + fVar71) -
                ((pfVar2[3] * fVar42 - pfVar5[3] * fVar23) + fVar74)) * fVar105 +
                (((pfVar6[3] * fVar94 - pTVar4->VX[3] * fVar27) + fVar100) -
                ((pfVar5[3] * fVar53 - pTVar1->VX[3] * fVar42) + fVar86)) * fVar113 + pTVar10->V[3];
      uVar63 = -(uint)(fVar54 < 0.0 && fVar95 < fVar54);
      uVar64 = -(uint)(fVar57 < 0.0 && fVar97 < fVar57);
      uVar65 = -(uint)(fVar59 < 0.0 && fVar99 < fVar59);
      uVar66 = -(uint)(fVar61 < 0.0 && fVar101 < fVar61);
      fVar54 = (float)(uVar63 & (uint)fVar54 | ~uVar63 & (uint)fVar95);
      fVar57 = (float)(uVar64 & (uint)fVar57 | ~uVar64 & (uint)fVar97);
      fVar59 = (float)(uVar65 & (uint)fVar59 | ~uVar65 & (uint)fVar99);
      fVar61 = (float)(uVar66 & (uint)fVar61 | ~uVar66 & (uint)fVar101);
      pTVar10 = &pTVar12[(int)uVar45].SimdContactMassNormal;
      pTVar13 = pTVar12 + (int)uVar45;
      fVar54 = 0.0 - (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < fVar55 ||
                                    fVar54 < 0.0) & (uint)(pTVar13->IsValid).V[0] & (uint)fVar54) *
                     pTVar10->V[0] * (this->SimdStiffness).V[0];
      fVar57 = 0.0 - (float)(-(uint)(_UNK_1506895d4 < fVar58 || fVar57 < 0.0) &
                             (uint)(pTVar13->IsValid).V[1] & (uint)fVar57) *
                     pTVar10->V[1] * (this->SimdStiffness).V[1];
      fVar59 = 0.0 - (float)(-(uint)(_UNK_1506895d8 < fVar60 || fVar59 < 0.0) &
                             (uint)(pTVar13->IsValid).V[2] & (uint)fVar59) *
                     pTVar10->V[2] * (this->SimdStiffness).V[2];
      fVar61 = 0.0 - (float)(-(uint)(_UNK_1506895dc < fVar62 || fVar61 < 0.0) &
                             (uint)(pTVar13->IsValid).V[3] & (uint)fVar61) *
                     pTVar10->V[3] * (this->SimdStiffness).V[3];
      uVar63 = -(uint)(0.0 < fVar54 + fVar55);
      uVar64 = -(uint)(0.0 < fVar57 + fVar58);
      uVar65 = -(uint)(0.0 < fVar59 + fVar60);
      uVar66 = -(uint)(0.0 < fVar61 + fVar62);
      fVar95 = (float)(~uVar63 & (uint)(0.0 - fVar55) | uVar63 & (uint)fVar54);
      fVar97 = (float)(~uVar64 & (uint)(0.0 - fVar58) | uVar64 & (uint)fVar57);
      fVar99 = (float)(~uVar65 & (uint)(0.0 - fVar60) | uVar65 & (uint)fVar59);
      fVar101 = (float)(~uVar66 & (uint)(0.0 - fVar62) | uVar66 & (uint)fVar61);
      pTVar10 = &pTVar12[(int)uVar45].SimdNetPushOutNormal;
      pTVar10->V[0] = fVar95 + fVar55;
      pTVar10->V[1] = fVar97 + fVar58;
      pTVar10->V[2] = fVar99 + fVar60;
      pTVar10->V[3] = fVar101 + fVar62;
      fVar55 = fVar95 * (this->SimdInvM0).V[0];
      fVar58 = fVar97 * (this->SimdInvM0).V[1];
      fVar60 = fVar99 * (this->SimdInvM0).V[2];
      fVar62 = fVar101 * (this->SimdInvM0).V[3];
      fVar54 = (this->SimdInvM1).V[0] * fVar95;
      fVar57 = (this->SimdInvM1).V[1] * fVar97;
      fVar59 = (this->SimdInvM1).V[2] * fVar99;
      fVar61 = (this->SimdInvM1).V[3] * fVar101;
      local_128.VX[0] = fVar32 + fVar55 * fVar102;
      local_128.VX[1] = fVar67 + fVar58 * fVar103;
      local_128.VX[2] = fVar69 + fVar60 * fVar104;
      local_128.VX[3] = fVar71 + fVar62 * fVar105;
      local_128.VY[0] = fVar73 + fVar55 * fVar106;
      local_128.VY[1] = fVar76 + fVar58 * fVar107;
      local_128.VY[2] = fVar79 + fVar60 * fVar108;
      local_128.VY[3] = fVar82 + fVar62 * fVar109;
      pTVar1 = &pTVar12[(int)uVar45].SimdContactNormalAngular0;
      local_128.VZ[0] = fVar85 + fVar55 * fVar110;
      local_128.VZ[1] = fVar96 + fVar58 * fVar111;
      local_128.VZ[2] = fVar98 + fVar60 * fVar112;
      local_128.VZ[3] = fVar100 + fVar62 * fVar113;
      local_158.VX[0] = fVar88 + pTVar1->VX[0] * fVar95;
      local_158.VX[1] = fVar90 + pTVar1->VX[1] * fVar97;
      local_158.VX[2] = fVar92 + pTVar1->VX[2] * fVar99;
      local_158.VX[3] = fVar94 + pTVar1->VX[3] * fVar101;
      pfVar2 = pTVar12[(int)uVar45].SimdContactNormalAngular0.VY;
      local_158.VY[0] = fVar24 + *pfVar2 * fVar95;
      local_158.VY[1] = fVar25 + pfVar2[1] * fVar97;
      local_158.VY[2] = fVar26 + pfVar2[2] * fVar99;
      local_158.VY[3] = fVar27 + pfVar2[3] * fVar101;
      pfVar2 = pTVar12[(int)uVar45].SimdContactNormalAngular0.VZ;
      local_158.VZ[0] = fVar28 + *pfVar2 * fVar95;
      local_158.VZ[1] = fVar29 + pfVar2[1] * fVar97;
      local_158.VZ[2] = fVar30 + pfVar2[2] * fVar99;
      local_158.VZ[3] = fVar31 + pfVar2[3] * fVar101;
      local_188.VX[0] = fVar68 - fVar54 * fVar102;
      local_188.VX[1] = fVar70 - fVar57 * fVar103;
      local_188.VX[2] = fVar72 - fVar59 * fVar104;
      local_188.VX[3] = fVar74 - fVar61 * fVar105;
      local_188.VY[0] = fVar16 - fVar54 * fVar106;
      local_188.VY[1] = fVar17 - fVar57 * fVar107;
      local_188.VY[2] = fVar18 - fVar59 * fVar108;
      local_188.VY[3] = fVar19 - fVar61 * fVar109;
      pTVar1 = &pTVar12[(int)uVar45].SimdContactNormalAngular1;
      local_188.VZ[0] = fVar77 - fVar54 * fVar110;
      local_188.VZ[1] = fVar80 - fVar57 * fVar111;
      local_188.VZ[2] = fVar83 - fVar59 * fVar112;
      local_188.VZ[3] = fVar86 - fVar61 * fVar113;
      local_1b8.VX[0] = fVar48 - pTVar1->VX[0] * fVar95;
      local_1b8.VX[1] = fVar51 - pTVar1->VX[1] * fVar97;
      local_1b8.VX[2] = fVar52 - pTVar1->VX[2] * fVar99;
      local_1b8.VX[3] = fVar53 - pTVar1->VX[3] * fVar101;
      pfVar2 = pTVar12[(int)uVar45].SimdContactNormalAngular1.VY;
      local_1b8.VY[0] = fVar39 - *pfVar2 * fVar95;
      local_1b8.VY[1] = fVar40 - pfVar2[1] * fVar97;
      local_1b8.VY[2] = fVar41 - pfVar2[2] * fVar99;
      local_1b8.VY[3] = fVar42 - pfVar2[3] * fVar101;
      pfVar2 = pTVar12[(int)uVar45].SimdContactNormalAngular1.VZ;
      local_1b8.VZ[0] = fVar20 - *pfVar2 * fVar95;
      local_1b8.VZ[1] = fVar21 - pfVar2[1] * fVar97;
      local_1b8.VZ[2] = fVar22 - pfVar2[2] * fVar99;
      local_1b8.VZ[3] = fVar23 - pfVar2[3] * fVar101;
      pTVar10 = &pTVar12[(int)uVar45].SimdNetPushOutNormal;
      iVar44 = this->MaxManifoldPoints;
      auVar49._0_4_ = ~uVar63 & local_308._0_4_;
      auVar49._4_4_ = ~uVar64 & local_308._4_4_;
      auVar49._8_4_ = ~uVar65 & local_308._8_4_;
      auVar49._12_4_ = ~uVar66 & local_308._12_4_;
      iVar47 = iVar47 + 1;
      auVar117._0_4_ = (uint)(_Var38._0_4_ + pTVar10->V[0]) & uVar63;
      auVar117._4_4_ = (uint)(_Var38._4_4_ + pTVar10->V[1]) & uVar64;
      auVar117._8_4_ = (uint)(_Var38._8_4_ + pTVar10->V[2]) & uVar65;
      auVar117._12_4_ = (uint)(_Var38._12_4_ + pTVar10->V[3]) & uVar66;
      local_308 = (__m128)(auVar117 | auVar49);
      auVar119._0_4_ = (uint)(auVar118._0_4_ + local_1e8) & uVar63;
      auVar119._4_4_ = (uint)(auVar118._4_4_ + fStack_1e4) & uVar64;
      auVar119._8_4_ = (uint)(auVar118._8_4_ + fStack_1e0) & uVar65;
      auVar119._12_4_ = (uint)(auVar118._12_4_ + fStack_1dc) & uVar66;
      uVar75 = local_308.m128_f32[0];
      uVar78 = local_308.m128_f32[1];
      uVar81 = local_308.m128_f32[2];
      uVar84 = local_308.m128_f32[3];
      auVar15._4_4_ = ~uVar64 & local_258._4_4_;
      auVar15._0_4_ = ~uVar63 & local_258._0_4_;
      auVar15._8_4_ = ~uVar65 & (uint)fStack_250;
      auVar15._12_4_ = ~uVar66 & (uint)fStack_24c;
      auVar119 = auVar119 | auVar15;
      uVar87 = auVar119._0_4_;
      uVar89 = auVar119._4_4_;
      uVar91 = auVar119._8_4_;
      uVar93 = auVar119._12_4_;
      _local_258 = auVar119;
    } while (iVar47 < iVar44);
  }
  auVar118 = divps((undefined1  [16])local_308,auVar119);
  iVar47 = 0;
  local_258._4_4_ = local_158.VZ[1];
  local_258._0_4_ = local_158.VZ[0];
  fStack_250 = local_158.VZ[2];
  fStack_24c = local_158.VZ[3];
  fVar48 = (float)(-(uint)(0.0 < auVar119._0_4_) & auVar118._0_4_);
  fVar51 = (float)(-(uint)(0.0 < auVar119._4_4_) & auVar118._4_4_);
  fVar52 = (float)(-(uint)(0.0 < auVar119._8_4_) & auVar118._8_4_);
  fVar53 = (float)(-(uint)(0.0 < auVar119._12_4_) & auVar118._12_4_);
  if (0 < iVar44) {
    uVar63 = -(uint)(fVar34 <= fVar48);
    uVar45 = -(uint)(fVar35 <= fVar51);
    uVar64 = -(uint)(fVar36 <= fVar52);
    uVar65 = -(uint)(fVar37 <= fVar53);
    local_308 = GlobalVectorConstants::FloatOne;
    local_268 = local_1b8.VZ[0];
    fStack_264 = local_1b8.VZ[1];
    fStack_260 = local_1b8.VZ[2];
    fStack_25c = local_1b8.VZ[3];
    local_2e8 = local_1b8.VX[0];
    fStack_2e4 = local_1b8.VX[1];
    fStack_2e0 = local_1b8.VX[2];
    fStack_2dc = local_1b8.VX[3];
    local_2d8 = local_1b8.VY[0];
    fStack_2d4 = local_1b8.VY[1];
    fStack_2d0 = local_1b8.VY[2];
    fStack_2cc = local_1b8.VY[3];
    local_2a8 = local_158.VY[0];
    fStack_2a4 = local_158.VY[1];
    fStack_2a0 = local_158.VY[2];
    fStack_29c = local_158.VY[3];
    local_288 = local_188.VY[0];
    fStack_284 = local_188.VY[1];
    fStack_280 = local_188.VY[2];
    fStack_27c = local_188.VY[3];
    local_2b8 = local_128.VY[0];
    fStack_2b4 = local_128.VY[1];
    fStack_2b0 = local_128.VY[2];
    fStack_2ac = local_128.VY[3];
    local_298 = local_188.VX[0];
    fStack_294 = local_188.VX[1];
    fStack_290 = local_188.VX[2];
    fStack_28c = local_188.VX[3];
    local_278 = local_188.VZ[0];
    fStack_274 = local_188.VZ[1];
    fStack_270 = local_188.VZ[2];
    fStack_26c = local_188.VZ[3];
    local_248 = local_128.VZ[0];
    fStack_244 = local_128.VZ[1];
    fStack_240 = local_128.VZ[2];
    fStack_23c = local_128.VZ[3];
    local_2c8 = local_128.VX[0];
    fStack_2c4 = local_128.VX[1];
    fStack_2c0 = local_128.VX[2];
    fStack_2bc = local_128.VX[3];
    while( true ) {
      fVar23 = local_158.VZ[3];
      fVar22 = local_158.VZ[2];
      fVar21 = local_158.VZ[1];
      fVar20 = local_158.VZ[0];
      fVar42 = local_158.VX[3];
      fVar41 = local_158.VX[2];
      fVar40 = local_158.VX[1];
      fVar39 = local_158.VX[0];
      uVar46 = this->ManifoldPointBeginIndex + iVar47;
      uVar66 = 0;
      if ((int)uVar46 < param_1->ArrayNum) {
        uVar66 = ~uVar46 >> 0x1f;
      }
      if (uVar66 == 0) {
        GlobalVectorConstants::FloatOne = local_308;
        local_1b8.VX[0] = local_2e8;
        local_1b8.VX[1] = fStack_2e4;
        local_1b8.VX[2] = fStack_2e0;
        local_1b8.VX[3] = fStack_2dc;
        local_1b8.VY[0] = local_2d8;
        local_1b8.VY[1] = fStack_2d4;
        local_1b8.VY[2] = fStack_2d0;
        local_1b8.VY[3] = fStack_2cc;
        local_1b8.VZ[0] = local_268;
        local_1b8.VZ[1] = fStack_264;
        local_1b8.VZ[2] = fStack_260;
        local_1b8.VZ[3] = fStack_25c;
        local_188.VX[0] = local_298;
        local_188.VX[1] = fStack_294;
        local_188.VX[2] = fStack_290;
        local_188.VX[3] = fStack_28c;
        local_188.VY[0] = local_288;
        local_188.VY[1] = fStack_284;
        local_188.VY[2] = fStack_280;
        local_188.VY[3] = fStack_27c;
        local_188.VZ[0] = local_278;
        local_188.VZ[1] = fStack_274;
        local_188.VZ[2] = fStack_270;
        local_188.VZ[3] = fStack_26c;
        local_158.VY[0] = local_2a8;
        local_158.VY[1] = fStack_2a4;
        local_158.VY[2] = fStack_2a0;
        local_158.VY[3] = fStack_29c;
        local_128.VX[0] = local_2c8;
        local_128.VX[1] = fStack_2c4;
        local_128.VX[2] = fStack_2c0;
        local_128.VX[3] = fStack_2bc;
        local_128.VY[0] = local_2b8;
        local_128.VY[1] = fStack_2b4;
        local_128.VY[2] = fStack_2b0;
        local_128.VY[3] = fStack_2ac;
        local_128.VZ[0] = local_248;
        local_128.VZ[1] = fStack_244;
        local_128.VZ[2] = fStack_240;
        local_128.VZ[3] = fStack_23c;
        bVar43 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar43) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_308 = GlobalVectorConstants::FloatOne;
      }
      fVar67 = (this->SimdStiffness).V[0] * param_5->V[0];
      fVar69 = (this->SimdStiffness).V[1] * param_5->V[1];
      fVar71 = (this->SimdStiffness).V[2] * param_5->V[2];
      fVar73 = (this->SimdStiffness).V[3] * param_5->V[3];
      pTVar13 = param_1->DataPtr;
      pfVar2 = pTVar13[(int)uVar46].SimdRelativeContactPoint1.VY;
      pfVar3 = pTVar13[(int)uVar46].SimdRelativeContactPoint1.VZ;
      pfVar5 = pTVar13[(int)uVar46].SimdRelativeContactPoint0.VZ;
      pTVar1 = &pTVar13[(int)uVar46].SimdRelativeContactPoint0;
      pfVar6 = pTVar13[(int)uVar46].SimdRelativeContactPoint0.VY;
      pTVar4 = &pTVar13[(int)uVar46].SimdContactTangentU;
      fVar68 = pTVar4->VX[0];
      fVar70 = pTVar4->VX[1];
      fVar72 = pTVar4->VX[2];
      fVar74 = pTVar4->VX[3];
      pfVar9 = pTVar13[(int)uVar46].SimdRelativeContactPoint0.VY;
      pfVar8 = pTVar13[(int)uVar46].SimdRelativeContactPoint1.VZ;
      fVar111 = ((local_2a8 * *pfVar5 - fVar20 * *pfVar9) + local_2c8) -
                ((local_2d8 * *pfVar3 - local_268 * *pfVar2) + local_298);
      fVar113 = ((fStack_2a4 * pfVar5[1] - fVar21 * pfVar9[1]) + fStack_2c4) -
                ((fStack_2d4 * pfVar3[1] - fStack_264 * pfVar2[1]) + fStack_294);
      fVar58 = ((fStack_2a0 * pfVar5[2] - fVar22 * pfVar9[2]) + fStack_2c0) -
               ((fStack_2d0 * pfVar3[2] - fStack_260 * pfVar2[2]) + fStack_290);
      fVar62 = ((fStack_29c * pfVar5[3] - fVar23 * pfVar9[3]) + fStack_2bc) -
               ((fStack_2cc * pfVar3[3] - fStack_25c * pfVar2[3]) + fStack_28c);
      pTVar4 = &pTVar13[(int)uVar46].SimdRelativeContactPoint1;
      pfVar2 = pTVar13[(int)uVar46].SimdRelativeContactPoint0.VZ;
      pTVar10 = &pTVar13[(int)uVar46].SimdNetPushOutTangentU;
      fVar16 = pTVar10->V[0];
      fVar17 = pTVar10->V[1];
      fVar18 = pTVar10->V[2];
      fVar19 = pTVar10->V[3];
      pTVar7 = &pTVar13[(int)uVar46].SimdRelativeContactPoint1;
      fVar107 = ((fVar20 * pTVar1->VX[0] - fVar39 * *pfVar2) + local_2b8) -
                ((local_268 * pTVar4->VX[0] - local_2e8 * *pfVar8) + local_288);
      fVar108 = ((fVar21 * pTVar1->VX[1] - fVar40 * pfVar2[1]) + fStack_2b4) -
                ((fStack_264 * pTVar4->VX[1] - fStack_2e4 * pfVar8[1]) + fStack_284);
      fVar109 = ((fVar22 * pTVar1->VX[2] - fVar41 * pfVar2[2]) + fStack_2b0) -
                ((fStack_260 * pTVar4->VX[2] - fStack_2e0 * pfVar8[2]) + fStack_280);
      fVar110 = ((fVar23 * pTVar1->VX[3] - fVar42 * pfVar2[3]) + fStack_2ac) -
                ((fStack_25c * pTVar4->VX[3] - fStack_2dc * pfVar8[3]) + fStack_27c);
      pfVar2 = pTVar13[(int)uVar46].SimdRelativeContactPoint1.VY;
      pTVar10 = &pTVar13[(int)uVar46].SimdNetPushOutTangentV;
      fVar20 = pTVar10->V[0];
      fVar21 = pTVar10->V[1];
      fVar22 = pTVar10->V[2];
      fVar23 = pTVar10->V[3];
      pTVar1 = &pTVar13[(int)uVar46].SimdRelativeContactPoint0;
      pTVar10 = &pTVar13[(int)uVar46].SimdNetPushOutNormal;
      fVar76 = ((fVar39 * *pfVar6 - local_2a8 * pTVar1->VX[0]) + local_248) -
               ((local_2e8 * *pfVar2 - local_2d8 * pTVar7->VX[0]) + local_278);
      fVar79 = ((fVar40 * pfVar6[1] - fStack_2a4 * pTVar1->VX[1]) + fStack_244) -
               ((fStack_2e4 * pfVar2[1] - fStack_2d4 * pTVar7->VX[1]) + fStack_274);
      fVar82 = ((fVar41 * pfVar6[2] - fStack_2a0 * pTVar1->VX[2]) + fStack_240) -
               ((fStack_2e0 * pfVar2[2] - fStack_2d0 * pTVar7->VX[2]) + fStack_270);
      fVar85 = ((fVar42 * pfVar6[3] - fStack_29c * pTVar1->VX[3]) + fStack_23c) -
               ((fStack_2dc * pfVar2[3] - fStack_2cc * pTVar7->VX[3]) + fStack_26c);
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentU.VY;
      fVar77 = *pfVar2;
      fVar80 = pfVar2[1];
      fVar83 = pfVar2[2];
      fVar86 = pfVar2[3];
      uVar120 = -(uint)(((fVar20 != 0.0 || fVar16 != 0.0) || 0.0 < pTVar10->V[0]) &&
                       0.0 < (this->SimdStaticFriction).V[0]);
      uVar121 = -(uint)(((fVar21 != 0.0 || fVar17 != 0.0) || 0.0 < pTVar10->V[1]) &&
                       0.0 < (this->SimdStaticFriction).V[1]);
      uVar122 = -(uint)(((fVar22 != 0.0 || fVar18 != 0.0) || 0.0 < pTVar10->V[2]) &&
                       0.0 < (this->SimdStaticFriction).V[2]);
      uVar123 = -(uint)(((fVar23 != 0.0 || fVar19 != 0.0) || 0.0 < pTVar10->V[3]) &&
                       0.0 < (this->SimdStaticFriction).V[3]);
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentU.VZ;
      fVar88 = *pfVar2;
      fVar90 = pfVar2[1];
      fVar92 = pfVar2[2];
      fVar94 = pfVar2[3];
      pTVar1 = &pTVar13[(int)uVar46].SimdContactTangentV;
      auVar33 = *(undefined1 (*) [12])pTVar1->VX;
      fVar24 = pTVar1->VX[3];
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentV.VZ;
      fVar25 = *pfVar2;
      fVar26 = pfVar2[1];
      fVar27 = pfVar2[2];
      fVar28 = pfVar2[3];
      pTVar10 = &pTVar13[(int)uVar46].SimdContactDeltaTangentU;
      pTVar11 = &pTVar13[(int)uVar46].SimdContactMassTangentU;
      fVar96 = 0.0 - (fVar77 * fVar107 + fVar68 * fVar111 + fVar88 * fVar76 + pTVar10->V[0]) *
                     pTVar11->V[0] * fVar67;
      fVar98 = 0.0 - (fVar80 * fVar108 + fVar70 * fVar113 + fVar90 * fVar79 + pTVar10->V[1]) *
                     pTVar11->V[1] * fVar69;
      fVar100 = 0.0 - (fVar83 * fVar109 + fVar72 * fVar58 + fVar92 * fVar82 + pTVar10->V[2]) *
                      pTVar11->V[2] * fVar71;
      fVar102 = 0.0 - (fVar86 * fVar110 + fVar74 * fVar62 + fVar94 * fVar85 + pTVar10->V[3]) *
                      pTVar11->V[3] * fVar73;
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentV.VY;
      fVar29 = *pfVar2;
      fVar30 = pfVar2[1];
      fVar31 = pfVar2[2];
      fVar32 = pfVar2[3];
      fVar103 = fVar16 + fVar96;
      fVar104 = fVar17 + fVar98;
      fVar105 = fVar18 + fVar100;
      fVar106 = fVar19 + fVar102;
      fVar112 = fVar48 * (this->SimdStaticFriction).V[0];
      fVar55 = fVar51 * (this->SimdStaticFriction).V[1];
      fVar60 = fVar52 * (this->SimdStaticFriction).V[2];
      fVar54 = fVar53 * (this->SimdStaticFriction).V[3];
      auVar50._0_4_ = fVar103 * fVar103;
      auVar50._4_4_ = fVar104 * fVar104;
      auVar50._8_4_ = fVar105 * fVar105;
      auVar50._12_4_ = fVar106 * fVar106;
      pTVar10 = &pTVar13[(int)uVar46].SimdContactDeltaTangentV;
      pTVar11 = &pTVar13[(int)uVar46].SimdContactMassTangentV;
      fVar76 = 0.0 - (fVar29 * fVar107 + pTVar1->VX[0] * fVar111 + fVar25 * fVar76 + pTVar10->V[0])
                     * pTVar11->V[0] * fVar67;
      fVar79 = 0.0 - (fVar30 * fVar108 + pTVar1->VX[1] * fVar113 + fVar26 * fVar79 + pTVar10->V[1])
                     * pTVar11->V[1] * fVar69;
      fVar82 = 0.0 - (fVar31 * fVar109 + pTVar1->VX[2] * fVar58 + fVar27 * fVar82 + pTVar10->V[2]) *
                     pTVar11->V[2] * fVar71;
      fVar85 = 0.0 - (fVar32 * fVar110 + fVar24 * fVar62 + fVar28 * fVar85 + pTVar10->V[3]) *
                     pTVar11->V[3] * fVar73;
      fVar107 = fVar20 + fVar76;
      fVar108 = fVar21 + fVar79;
      fVar109 = fVar22 + fVar82;
      fVar110 = fVar23 + fVar85;
      auVar56._0_4_ = fVar107 * fVar107 + auVar50._0_4_;
      auVar56._4_4_ = fVar108 * fVar108 + auVar50._4_4_;
      auVar56._8_4_ = fVar109 * fVar109 + auVar50._8_4_;
      auVar56._12_4_ = fVar110 * fVar110 + auVar50._12_4_;
      auVar119 = sqrtps(auVar50,auVar56);
      uVar66 = -(uint)(fVar112 * fVar112 < auVar56._0_4_ && fVar34 <= fVar48);
      uVar114 = -(uint)(fVar55 * fVar55 < auVar56._4_4_ && fVar35 <= fVar51);
      uVar115 = -(uint)(fVar60 * fVar60 < auVar56._8_4_ && fVar36 <= fVar52);
      uVar116 = -(uint)(fVar54 * fVar54 < auVar56._12_4_ && fVar37 <= fVar53);
      auVar119 = divps((undefined1  [16])local_308,auVar119);
      fVar67 = auVar119._0_4_ * fVar48 * (this->SimdDynamicFriction).V[0];
      fVar69 = auVar119._4_4_ * fVar51 * (this->SimdDynamicFriction).V[1];
      fVar71 = auVar119._8_4_ * fVar52 * (this->SimdDynamicFriction).V[2];
      fVar73 = auVar119._12_4_ * fVar53 * (this->SimdDynamicFriction).V[3];
      fVar96 = (float)((((uint)(fVar67 * fVar103 - fVar16) & uVar66 | ~uVar66 & (uint)fVar96) &
                        uVar63 | ~uVar63 & (uint)(0.0 - fVar16)) & uVar120);
      fVar98 = (float)((((uint)(fVar69 * fVar104 - fVar17) & uVar114 | ~uVar114 & (uint)fVar98) &
                        uVar45 | ~uVar45 & (uint)(0.0 - fVar17)) & uVar121);
      fVar100 = (float)((((uint)(fVar71 * fVar105 - fVar18) & uVar115 | ~uVar115 & (uint)fVar100) &
                         uVar64 | ~uVar64 & (uint)(0.0 - fVar18)) & uVar122);
      fVar102 = (float)((((uint)(fVar73 * fVar106 - fVar19) & uVar116 | ~uVar116 & (uint)fVar102) &
                         uVar65 | ~uVar65 & (uint)(0.0 - fVar19)) & uVar123);
      fVar76 = (float)((((uint)(fVar67 * fVar107 - fVar20) & uVar66 | ~uVar66 & (uint)fVar76) &
                        uVar63 | ~uVar63 & (uint)(0.0 - fVar20)) & uVar120);
      fVar79 = (float)((((uint)(fVar69 * fVar108 - fVar21) & uVar114 | ~uVar114 & (uint)fVar79) &
                        uVar45 | ~uVar45 & (uint)(0.0 - fVar21)) & uVar121);
      fVar82 = (float)((((uint)(fVar71 * fVar109 - fVar22) & uVar115 | ~uVar115 & (uint)fVar82) &
                        uVar64 | ~uVar64 & (uint)(0.0 - fVar22)) & uVar122);
      fVar85 = (float)((((uint)(fVar73 * fVar110 - fVar23) & uVar116 | ~uVar116 & (uint)fVar85) &
                        uVar65 | ~uVar65 & (uint)(0.0 - fVar23)) & uVar123);
      local_208 = auVar33._0_4_;
      fStack_204 = auVar33._4_4_;
      fStack_200 = auVar33._8_4_;
      pTVar10 = &pTVar13[(int)uVar46].SimdStaticFrictionRatio;
      GlobalVectorConstants::FloatOne = local_308;
      pTVar10->V[0] =
           (float)((~uVar66 & (uint)local_1e8 | (uint)fVar67 & uVar66) & uVar63 & uVar120 |
                  ~uVar120 & (uint)local_1e8);
      pTVar10->V[1] =
           (float)((~uVar114 & (uint)fStack_1e4 | (uint)fVar69 & uVar114) & uVar45 & uVar121 |
                  ~uVar121 & (uint)fStack_1e4);
      pTVar10->V[2] =
           (float)((~uVar115 & (uint)fStack_1e0 | (uint)fVar71 & uVar115) & uVar64 & uVar122 |
                  ~uVar122 & (uint)fStack_1e0);
      pTVar10->V[3] =
           (float)((~uVar116 & (uint)fStack_1dc | (uint)fVar73 & uVar116) & uVar65 & uVar123 |
                  ~uVar123 & (uint)fStack_1dc);
      pTVar10 = &pTVar13[(int)uVar46].SimdNetPushOutTangentV;
      pTVar10->V[0] =
           (float)((~uVar66 & (uint)fVar107 | (uint)(fVar67 * fVar107) & uVar66) & uVar63 & uVar120
                  | ~uVar120 & (uint)fVar20);
      pTVar10->V[1] =
           (float)((~uVar114 & (uint)fVar108 | (uint)(fVar69 * fVar108) & uVar114) & uVar45 &
                   uVar121 | ~uVar121 & (uint)fVar21);
      pTVar10->V[2] =
           (float)((~uVar115 & (uint)fVar109 | (uint)(fVar71 * fVar109) & uVar115) & uVar64 &
                   uVar122 | ~uVar122 & (uint)fVar22);
      pTVar10->V[3] =
           (float)((~uVar116 & (uint)fVar110 | (uint)(fVar73 * fVar110) & uVar116) & uVar65 &
                   uVar123 | ~uVar123 & (uint)fVar23);
      pTVar10 = &pTVar13[(int)uVar46].SimdNetPushOutTangentU;
      pTVar10->V[0] =
           (float)((~uVar66 & (uint)fVar103 | (uint)(fVar67 * fVar103) & uVar66) & uVar63 & uVar120
                  | ~uVar120 & (uint)fVar16);
      pTVar10->V[1] =
           (float)((~uVar114 & (uint)fVar104 | (uint)(fVar69 * fVar104) & uVar114) & uVar45 &
                   uVar121 | ~uVar121 & (uint)fVar17);
      pTVar10->V[2] =
           (float)((~uVar115 & (uint)fVar105 | (uint)(fVar71 * fVar105) & uVar115) & uVar64 &
                   uVar122 | ~uVar122 & (uint)fVar18);
      pTVar10->V[3] =
           (float)((~uVar116 & (uint)fVar106 | (uint)(fVar73 * fVar106) & uVar116) & uVar65 &
                   uVar123 | ~uVar123 & (uint)fVar19);
      fVar20 = (this->SimdInvM0).V[0];
      fVar21 = (this->SimdInvM0).V[1];
      fVar22 = (this->SimdInvM0).V[2];
      fVar23 = (this->SimdInvM0).V[3];
      fVar16 = (this->SimdInvM1).V[0];
      fVar17 = (this->SimdInvM1).V[1];
      fVar18 = (this->SimdInvM1).V[2];
      fVar19 = (this->SimdInvM1).V[3];
      fVar88 = fVar25 * fVar76 + fVar88 * fVar96;
      fVar90 = fVar26 * fVar79 + fVar90 * fVar98;
      fVar92 = fVar27 * fVar82 + fVar92 * fVar100;
      fVar94 = fVar28 * fVar85 + fVar94 * fVar102;
      fVar68 = local_208 * fVar76 + fVar68 * fVar96;
      fVar70 = fStack_204 * fVar79 + fVar70 * fVar98;
      fVar72 = fStack_200 * fVar82 + fVar72 * fVar100;
      fVar74 = fVar24 * fVar85 + fVar74 * fVar102;
      fVar77 = fVar29 * fVar76 + fVar77 * fVar96;
      fVar80 = fVar30 * fVar79 + fVar80 * fVar98;
      fVar83 = fVar31 * fVar82 + fVar83 * fVar100;
      fVar86 = fVar32 * fVar85 + fVar86 * fVar102;
      local_128.VX[0] = local_2c8 + fVar68 * fVar20;
      local_128.VX[1] = fStack_2c4 + fVar70 * fVar21;
      local_128.VX[2] = fStack_2c0 + fVar72 * fVar22;
      local_128.VX[3] = fStack_2bc + fVar74 * fVar23;
      local_128.VY[0] = local_2b8 + fVar77 * fVar20;
      local_128.VY[1] = fStack_2b4 + fVar80 * fVar21;
      local_128.VY[2] = fStack_2b0 + fVar83 * fVar22;
      local_128.VY[3] = fStack_2ac + fVar86 * fVar23;
      pTVar1 = &pTVar13[(int)uVar46].SimdContactTangentVAngular0;
      local_128.VZ[0] = local_248 + fVar88 * fVar20;
      local_128.VZ[1] = fStack_244 + fVar90 * fVar21;
      local_128.VZ[2] = fStack_240 + fVar92 * fVar22;
      local_128.VZ[3] = fStack_23c + fVar94 * fVar23;
      pTVar4 = &pTVar13[(int)uVar46].SimdContactTangentUAngular0;
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentUAngular0.VY;
      local_188.VX[0] = local_298 - fVar68 * fVar16;
      local_188.VX[1] = fStack_294 - fVar70 * fVar17;
      local_188.VX[2] = fStack_290 - fVar72 * fVar18;
      local_188.VX[3] = fStack_28c - fVar74 * fVar19;
      local_188.VY[0] = local_288 - fVar77 * fVar16;
      local_188.VY[1] = fStack_284 - fVar80 * fVar17;
      local_188.VY[2] = fStack_280 - fVar83 * fVar18;
      local_188.VY[3] = fStack_27c - fVar86 * fVar19;
      local_158.VX[0] = fVar39 + pTVar1->VX[0] * fVar76 + pTVar4->VX[0] * fVar96;
      local_158.VX[1] = fVar40 + pTVar1->VX[1] * fVar79 + pTVar4->VX[1] * fVar98;
      local_158.VX[2] = fVar41 + pTVar1->VX[2] * fVar82 + pTVar4->VX[2] * fVar100;
      local_158.VX[3] = fVar42 + pTVar1->VX[3] * fVar85 + pTVar4->VX[3] * fVar102;
      pfVar3 = pTVar13[(int)uVar46].SimdContactTangentVAngular0.VY;
      pfVar5 = pTVar13[(int)uVar46].SimdContactTangentUAngular0.VZ;
      local_158.VY[0] = local_2a8 + *pfVar3 * fVar76 + *pfVar2 * fVar96;
      local_158.VY[1] = fStack_2a4 + pfVar3[1] * fVar79 + pfVar2[1] * fVar98;
      local_158.VY[2] = fStack_2a0 + pfVar3[2] * fVar82 + pfVar2[2] * fVar100;
      local_158.VY[3] = fStack_29c + pfVar3[3] * fVar85 + pfVar2[3] * fVar102;
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentVAngular0.VZ;
      local_158.VZ[0] = (float)local_258._0_4_ + *pfVar2 * fVar76 + *pfVar5 * fVar96;
      local_158.VZ[1] = (float)local_258._4_4_ + pfVar2[1] * fVar79 + pfVar5[1] * fVar98;
      local_158.VZ[2] = fStack_250 + pfVar2[2] * fVar82 + pfVar5[2] * fVar100;
      local_158.VZ[3] = fStack_24c + pfVar2[3] * fVar85 + pfVar5[3] * fVar102;
      local_258._4_4_ = local_158.VZ[1];
      local_258._0_4_ = local_158.VZ[0];
      fStack_250 = local_158.VZ[2];
      fStack_24c = local_158.VZ[3];
      iVar47 = iVar47 + 1;
      pTVar1 = &pTVar13[(int)uVar46].SimdContactTangentVAngular1;
      pTVar4 = &pTVar13[(int)uVar46].SimdContactTangentUAngular1;
      local_188.VZ[0] = local_278 - fVar88 * fVar16;
      local_188.VZ[1] = fStack_274 - fVar90 * fVar17;
      local_188.VZ[2] = fStack_270 - fVar92 * fVar18;
      local_188.VZ[3] = fStack_26c - fVar94 * fVar19;
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentUAngular1.VY;
      local_1b8.VX[0] = local_2e8 - (pTVar1->VX[0] * fVar76 + pTVar4->VX[0] * fVar96);
      local_1b8.VX[1] = fStack_2e4 - (pTVar1->VX[1] * fVar79 + pTVar4->VX[1] * fVar98);
      local_1b8.VX[2] = fStack_2e0 - (pTVar1->VX[2] * fVar82 + pTVar4->VX[2] * fVar100);
      local_1b8.VX[3] = fStack_2dc - (pTVar1->VX[3] * fVar85 + pTVar4->VX[3] * fVar102);
      pfVar3 = pTVar13[(int)uVar46].SimdContactTangentVAngular1.VY;
      pfVar5 = pTVar13[(int)uVar46].SimdContactTangentUAngular1.VZ;
      local_1b8.VY[0] = local_2d8 - (*pfVar3 * fVar76 + *pfVar2 * fVar96);
      local_1b8.VY[1] = fStack_2d4 - (pfVar3[1] * fVar79 + pfVar2[1] * fVar98);
      local_1b8.VY[2] = fStack_2d0 - (pfVar3[2] * fVar82 + pfVar2[2] * fVar100);
      local_1b8.VY[3] = fStack_2cc - (pfVar3[3] * fVar85 + pfVar2[3] * fVar102);
      pfVar2 = pTVar13[(int)uVar46].SimdContactTangentVAngular1.VZ;
      local_1b8.VZ[0] = local_268 - (*pfVar2 * fVar76 + *pfVar5 * fVar96);
      local_1b8.VZ[1] = fStack_264 - (pfVar2[1] * fVar79 + pfVar5[1] * fVar98);
      local_1b8.VZ[2] = fStack_260 - (pfVar2[2] * fVar82 + pfVar5[2] * fVar100);
      local_1b8.VZ[3] = fStack_25c - (pfVar2[3] * fVar85 + pfVar5[3] * fVar102);
      if (this->MaxManifoldPoints <= iVar47) break;
      local_308 = GlobalVectorConstants::FloatOne;
      local_268 = local_1b8.VZ[0];
      fStack_264 = local_1b8.VZ[1];
      fStack_260 = local_1b8.VZ[2];
      fStack_25c = local_1b8.VZ[3];
      local_2e8 = local_1b8.VX[0];
      fStack_2e4 = local_1b8.VX[1];
      fStack_2e0 = local_1b8.VX[2];
      fStack_2dc = local_1b8.VX[3];
      local_2d8 = local_1b8.VY[0];
      fStack_2d4 = local_1b8.VY[1];
      fStack_2d0 = local_1b8.VY[2];
      fStack_2cc = local_1b8.VY[3];
      local_2a8 = local_158.VY[0];
      fStack_2a4 = local_158.VY[1];
      fStack_2a0 = local_158.VY[2];
      fStack_29c = local_158.VY[3];
      local_288 = local_188.VY[0];
      fStack_284 = local_188.VY[1];
      fStack_280 = local_188.VY[2];
      fStack_27c = local_188.VY[3];
      local_2b8 = local_128.VY[0];
      fStack_2b4 = local_128.VY[1];
      fStack_2b0 = local_128.VY[2];
      fStack_2ac = local_128.VY[3];
      local_298 = local_188.VX[0];
      fStack_294 = local_188.VX[1];
      fStack_290 = local_188.VX[2];
      fStack_28c = local_188.VX[3];
      local_278 = local_188.VZ[0];
      fStack_274 = local_188.VZ[1];
      fStack_270 = local_188.VZ[2];
      fStack_26c = local_188.VZ[3];
      local_248 = local_128.VZ[0];
      fStack_244 = local_128.VZ[1];
      fStack_240 = local_128.VZ[2];
      fStack_23c = local_128.VZ[3];
      local_2c8 = local_128.VX[0];
      fStack_2c4 = local_128.VX[1];
      fStack_2c0 = local_128.VX[2];
      fStack_2bc = local_128.VX[3];
    }
  }
  ScatterBodyPositionCorrections(&local_128,&local_158,&local_188,&local_1b8,param_2,param_3);
  return;
}

// SolveVelocityNoFriction @ 143a1ab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::SolveVelocityNoFriction
          (TPBDCollisionSolverSimd<4> *this,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_1,
          TSimdValue<Chaos::FSolverBody_*,4> *param_2,TSimdValue<Chaos::FSolverBody_*,4> *param_3,
          TSimdRealf<4> *param_4)

{
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  TSimdVec3f<4> *pTVar4;
  TSimdVec3f<4> *pTVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  TSimdVec3f<4> *pTVar10;
  TSimdVec3f<4> *pTVar11;
  float *pfVar12;
  TSimdVec3f<4> *pTVar13;
  float *pfVar14;
  TSimdRealf<4> *pTVar15;
  TSimdRealf<4> *pTVar16;
  TSimdRealf<4> *pTVar17;
  TSimdRealf<4> *pTVar18;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar19;
  code *pcVar20;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  bool bVar73;
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar86;
  float fVar87;
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auStackY_278 [32];
  TSimdVec3f<4> local_1b8;
  TSimdVec3f<4> local_188;
  TSimdVec3f<4> local_158;
  TSimdVec3f<4> local_128;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  GatherBodyVelocities(param_2,param_3,&local_128,&local_158,&local_188,&local_1b8);
  iVar75 = 0;
  if (0 < this->MaxManifoldPoints) {
    do {
      fVar72 = local_128.VZ[3];
      fVar71 = local_128.VZ[2];
      fVar70 = local_128.VZ[1];
      fVar69 = local_128.VZ[0];
      fVar68 = local_128.VY[3];
      fVar67 = local_128.VY[2];
      fVar66 = local_128.VY[1];
      fVar65 = local_128.VY[0];
      fVar64 = local_128.VX[3];
      fVar63 = local_128.VX[2];
      fVar62 = local_128.VX[1];
      fVar61 = local_128.VX[0];
      fVar60 = local_158.VZ[3];
      fVar59 = local_158.VZ[2];
      fVar58 = local_158.VZ[1];
      fVar57 = local_158.VZ[0];
      fVar56 = local_158.VY[3];
      fVar55 = local_158.VY[2];
      fVar54 = local_158.VY[1];
      fVar53 = local_158.VY[0];
      fVar52 = local_158.VX[3];
      fVar51 = local_158.VX[2];
      fVar50 = local_158.VX[1];
      fVar49 = local_158.VX[0];
      fVar48 = local_188.VZ[3];
      fVar47 = local_188.VZ[2];
      fVar46 = local_188.VZ[1];
      fVar45 = local_188.VZ[0];
      fVar44 = local_188.VY[3];
      fVar43 = local_188.VY[2];
      fVar42 = local_188.VY[1];
      fVar41 = local_188.VY[0];
      fVar40 = local_188.VX[3];
      fVar39 = local_188.VX[2];
      fVar38 = local_188.VX[1];
      fVar37 = local_188.VX[0];
      fVar36 = local_1b8.VZ[3];
      fVar35 = local_1b8.VZ[2];
      fVar34 = local_1b8.VZ[1];
      fVar33 = local_1b8.VZ[0];
      fVar32 = local_1b8.VY[3];
      fVar31 = local_1b8.VY[2];
      fVar30 = local_1b8.VY[1];
      fVar29 = local_1b8.VY[0];
      fVar28 = local_1b8.VX[3];
      fVar27 = local_1b8.VX[2];
      fVar26 = local_1b8.VX[1];
      fVar25 = local_1b8.VX[0];
      uVar74 = this->ManifoldPointBeginIndex + iVar75;
      uVar76 = 0;
      if ((int)uVar74 < param_1->ArrayNum) {
        uVar76 = ~uVar74 >> 0x1f;
      }
      if ((uVar76 == 0) &&
         (bVar73 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar73)) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      pTVar19 = param_1->DataPtr;
      pfVar2 = pTVar19[(int)uVar74].SimdRelativeContactPoint0.VZ;
      pfVar3 = pTVar19[(int)uVar74].SimdRelativeContactPoint1.VZ;
      pTVar4 = &pTVar19[(int)uVar74].SimdRelativeContactPoint1;
      pTVar5 = &pTVar19[(int)uVar74].SimdRelativeContactPoint0;
      pfVar6 = pTVar19[(int)uVar74].SimdRelativeContactPoint0.VY;
      pfVar14 = pTVar19[(int)uVar74].SimdContactNormal.VY;
      fVar84 = *pfVar14;
      fVar86 = pfVar14[1];
      fVar87 = pfVar14[2];
      fVar88 = pfVar14[3];
      pfVar14 = pTVar19[(int)uVar74].SimdContactNormal.VZ;
      fVar90 = *pfVar14;
      fVar92 = pfVar14[1];
      fVar94 = pfVar14[2];
      fVar96 = pfVar14[3];
      pTVar15 = &pTVar19[(int)uVar74].SimdContactDeltaNormal;
      pfVar14 = pTVar19[(int)uVar74].SimdRelativeContactPoint0.VZ;
      pfVar7 = pTVar19[(int)uVar74].SimdRelativeContactPoint0.VY;
      pfVar8 = pTVar19[(int)uVar74].SimdRelativeContactPoint1.VY;
      pfVar9 = pTVar19[(int)uVar74].SimdRelativeContactPoint1.VZ;
      pTVar10 = &pTVar19[(int)uVar74].SimdRelativeContactPoint0;
      pTVar11 = &pTVar19[(int)uVar74].SimdRelativeContactPoint1;
      pfVar12 = pTVar19[(int)uVar74].SimdRelativeContactPoint1.VY;
      pTVar13 = &pTVar19[(int)uVar74].SimdContactNormal;
      pTVar16 = &pTVar19[(int)uVar74].SimdContactMassNormal;
      pTVar17 = &pTVar19[(int)uVar74].SimdNetPushOutNormal;
      auVar85._0_4_ = 0.0 - pTVar17->V[0];
      auVar85._4_4_ = 0.0 - pTVar17->V[1];
      auVar85._8_4_ = 0.0 - pTVar17->V[2];
      auVar85._12_4_ = 0.0 - pTVar17->V[3];
      auVar85 = divps(auVar85,*(undefined1 (*) [16])param_4->V);
      pTVar18 = &pTVar19[(int)uVar74].SimdNetImpulseNormal;
      fVar21 = pTVar18->V[0];
      fVar22 = pTVar18->V[1];
      fVar23 = pTVar18->V[2];
      fVar24 = pTVar18->V[3];
      pTVar18 = &pTVar19[(int)uVar74].SimdContactTargetVelocityNormal;
      auVar85 = minps(auVar85,ZEXT816(0));
      fVar89 = 0.0 - (((((fVar57 * pTVar5->VX[0] - fVar49 * *pfVar2) + fVar65) -
                       ((fVar33 * pTVar4->VX[0] - fVar25 * *pfVar3) + fVar41)) * fVar84 +
                       (((fVar53 * *pfVar14 - fVar57 * *pfVar7) + fVar61) -
                       ((fVar29 * *pfVar9 - fVar33 * *pfVar8) + fVar37)) * pTVar13->VX[0] +
                      (((fVar49 * *pfVar6 - fVar53 * pTVar10->VX[0]) + fVar69) -
                      ((fVar25 * *pfVar12 - fVar29 * pTVar11->VX[0]) + fVar45)) * fVar90) -
                     pTVar18->V[0]) * pTVar16->V[0] * (this->SimdStiffness).V[0];
      fVar91 = 0.0 - (((((fVar58 * pTVar5->VX[1] - fVar50 * pfVar2[1]) + fVar66) -
                       ((fVar34 * pTVar4->VX[1] - fVar26 * pfVar3[1]) + fVar42)) * fVar86 +
                       (((fVar54 * pfVar14[1] - fVar58 * pfVar7[1]) + fVar62) -
                       ((fVar30 * pfVar9[1] - fVar34 * pfVar8[1]) + fVar38)) * pTVar13->VX[1] +
                      (((fVar50 * pfVar6[1] - fVar54 * pTVar10->VX[1]) + fVar70) -
                      ((fVar26 * pfVar12[1] - fVar30 * pTVar11->VX[1]) + fVar46)) * fVar92) -
                     pTVar18->V[1]) * pTVar16->V[1] * (this->SimdStiffness).V[1];
      fVar93 = 0.0 - (((((fVar59 * pTVar5->VX[2] - fVar51 * pfVar2[2]) + fVar67) -
                       ((fVar35 * pTVar4->VX[2] - fVar27 * pfVar3[2]) + fVar43)) * fVar87 +
                       (((fVar55 * pfVar14[2] - fVar59 * pfVar7[2]) + fVar63) -
                       ((fVar31 * pfVar9[2] - fVar35 * pfVar8[2]) + fVar39)) * pTVar13->VX[2] +
                      (((fVar51 * pfVar6[2] - fVar55 * pTVar10->VX[2]) + fVar71) -
                      ((fVar27 * pfVar12[2] - fVar31 * pTVar11->VX[2]) + fVar47)) * fVar94) -
                     pTVar18->V[2]) * pTVar16->V[2] * (this->SimdStiffness).V[2];
      fVar95 = 0.0 - (((((fVar60 * pTVar5->VX[3] - fVar52 * pfVar2[3]) + fVar68) -
                       ((fVar36 * pTVar4->VX[3] - fVar28 * pfVar3[3]) + fVar44)) * fVar88 +
                       (((fVar56 * pfVar14[3] - fVar60 * pfVar7[3]) + fVar64) -
                       ((fVar32 * pfVar9[3] - fVar36 * pfVar8[3]) + fVar40)) * pTVar13->VX[3] +
                      (((fVar52 * pfVar6[3] - fVar56 * pTVar10->VX[3]) + fVar72) -
                      ((fVar28 * pfVar12[3] - fVar32 * pTVar11->VX[3]) + fVar48)) * fVar96) -
                     pTVar18->V[3]) * pTVar16->V[3] * (this->SimdStiffness).V[3];
      pTVar1 = pTVar19 + (int)uVar74;
      uVar76 = -(uint)(fVar21 + fVar89 < auVar85._0_4_);
      uVar77 = -(uint)(fVar22 + fVar91 < auVar85._4_4_);
      uVar78 = -(uint)(fVar23 + fVar93 < auVar85._8_4_);
      uVar79 = -(uint)(fVar24 + fVar95 < auVar85._12_4_);
      fVar97 = (float)(-(uint)(pTVar15->V[0] < 0.0 || 0.0 < pTVar17->V[0]) &
                       (uint)(pTVar1->IsValid).V[0] &
                      ((uint)(auVar85._0_4_ - fVar21) & uVar76 | ~uVar76 & (uint)fVar89));
      fVar98 = (float)(-(uint)(pTVar15->V[1] < 0.0 || 0.0 < pTVar17->V[1]) &
                       (uint)(pTVar1->IsValid).V[1] &
                      ((uint)(auVar85._4_4_ - fVar22) & uVar77 | ~uVar77 & (uint)fVar91));
      fVar99 = (float)(-(uint)(pTVar15->V[2] < 0.0 || 0.0 < pTVar17->V[2]) &
                       (uint)(pTVar1->IsValid).V[2] &
                      ((uint)(auVar85._8_4_ - fVar23) & uVar78 | ~uVar78 & (uint)fVar93));
      fVar100 = (float)(-(uint)(pTVar15->V[3] < 0.0 || 0.0 < pTVar17->V[3]) &
                        (uint)(pTVar1->IsValid).V[3] &
                       ((uint)(auVar85._12_4_ - fVar24) & uVar79 | ~uVar79 & (uint)fVar95));
      pTVar15 = &pTVar19[(int)uVar74].SimdNetImpulseNormal;
      pTVar15->V[0] = fVar97 + fVar21;
      pTVar15->V[1] = fVar98 + fVar22;
      pTVar15->V[2] = fVar99 + fVar23;
      pTVar15->V[3] = fVar100 + fVar24;
      pTVar4 = &pTVar19[(int)uVar74].SimdContactNormal;
      fVar80 = fVar97 * pTVar4->VX[0];
      fVar81 = fVar98 * pTVar4->VX[1];
      fVar82 = fVar99 * pTVar4->VX[2];
      fVar83 = fVar100 * pTVar4->VX[3];
      fVar21 = (this->SimdInvM0).V[0];
      fVar22 = (this->SimdInvM0).V[1];
      fVar23 = (this->SimdInvM0).V[2];
      fVar24 = (this->SimdInvM0).V[3];
      fVar89 = (this->SimdInvM1).V[0];
      fVar91 = (this->SimdInvM1).V[1];
      fVar93 = (this->SimdInvM1).V[2];
      fVar95 = (this->SimdInvM1).V[3];
      iVar75 = iVar75 + 1;
      fVar84 = fVar97 * fVar84;
      fVar86 = fVar98 * fVar86;
      fVar87 = fVar99 * fVar87;
      fVar88 = fVar100 * fVar88;
      fVar90 = fVar97 * fVar90;
      fVar92 = fVar98 * fVar92;
      fVar94 = fVar99 * fVar94;
      fVar96 = fVar100 * fVar96;
      local_128.VX[0] = fVar61 + fVar21 * fVar80;
      local_128.VX[1] = fVar62 + fVar22 * fVar81;
      local_128.VX[2] = fVar63 + fVar23 * fVar82;
      local_128.VX[3] = fVar64 + fVar24 * fVar83;
      local_128.VY[0] = fVar65 + fVar21 * fVar84;
      local_128.VY[1] = fVar66 + fVar22 * fVar86;
      local_128.VY[2] = fVar67 + fVar23 * fVar87;
      local_128.VY[3] = fVar68 + fVar24 * fVar88;
      pTVar4 = &pTVar19[(int)uVar74].SimdContactNormalAngular0;
      local_128.VZ[0] = fVar69 + fVar21 * fVar90;
      local_128.VZ[1] = fVar70 + fVar22 * fVar92;
      local_128.VZ[2] = fVar71 + fVar23 * fVar94;
      local_128.VZ[3] = fVar72 + fVar24 * fVar96;
      local_158.VX[0] = fVar49 + pTVar4->VX[0] * fVar97;
      local_158.VX[1] = fVar50 + pTVar4->VX[1] * fVar98;
      local_158.VX[2] = fVar51 + pTVar4->VX[2] * fVar99;
      local_158.VX[3] = fVar52 + pTVar4->VX[3] * fVar100;
      pfVar2 = pTVar19[(int)uVar74].SimdContactNormalAngular0.VY;
      local_158.VY[0] = fVar53 + *pfVar2 * fVar97;
      local_158.VY[1] = fVar54 + pfVar2[1] * fVar98;
      local_158.VY[2] = fVar55 + pfVar2[2] * fVar99;
      local_158.VY[3] = fVar56 + pfVar2[3] * fVar100;
      pfVar2 = pTVar19[(int)uVar74].SimdContactNormalAngular0.VZ;
      local_158.VZ[0] = fVar57 + *pfVar2 * fVar97;
      local_158.VZ[1] = fVar58 + pfVar2[1] * fVar98;
      local_158.VZ[2] = fVar59 + pfVar2[2] * fVar99;
      local_158.VZ[3] = fVar60 + pfVar2[3] * fVar100;
      local_188.VX[0] = fVar37 - fVar89 * fVar80;
      local_188.VX[1] = fVar38 - fVar91 * fVar81;
      local_188.VX[2] = fVar39 - fVar93 * fVar82;
      local_188.VX[3] = fVar40 - fVar95 * fVar83;
      local_188.VY[0] = fVar41 - fVar89 * fVar84;
      local_188.VY[1] = fVar42 - fVar91 * fVar86;
      local_188.VY[2] = fVar43 - fVar93 * fVar87;
      local_188.VY[3] = fVar44 - fVar95 * fVar88;
      pTVar4 = &pTVar19[(int)uVar74].SimdContactNormalAngular1;
      local_188.VZ[0] = fVar45 - fVar89 * fVar90;
      local_188.VZ[1] = fVar46 - fVar91 * fVar92;
      local_188.VZ[2] = fVar47 - fVar93 * fVar94;
      local_188.VZ[3] = fVar48 - fVar95 * fVar96;
      local_1b8.VX[0] = fVar25 - pTVar4->VX[0] * fVar97;
      local_1b8.VX[1] = fVar26 - pTVar4->VX[1] * fVar98;
      local_1b8.VX[2] = fVar27 - pTVar4->VX[2] * fVar99;
      local_1b8.VX[3] = fVar28 - pTVar4->VX[3] * fVar100;
      pfVar2 = pTVar19[(int)uVar74].SimdContactNormalAngular1.VY;
      local_1b8.VY[0] = fVar29 - *pfVar2 * fVar97;
      local_1b8.VY[1] = fVar30 - pfVar2[1] * fVar98;
      local_1b8.VY[2] = fVar31 - pfVar2[2] * fVar99;
      local_1b8.VY[3] = fVar32 - pfVar2[3] * fVar100;
      pfVar2 = pTVar19[(int)uVar74].SimdContactNormalAngular1.VZ;
      local_1b8.VZ[0] = fVar33 - *pfVar2 * fVar97;
      local_1b8.VZ[1] = fVar34 - pfVar2[1] * fVar98;
      local_1b8.VZ[2] = fVar35 - pfVar2[2] * fVar99;
      local_1b8.VZ[3] = fVar36 - pfVar2[3] * fVar100;
    } while (iVar75 < this->MaxManifoldPoints);
  }
  ScatterBodyVelocities(&local_128,&local_158,&local_188,&local_1b8,param_2,param_3);
  return;
}

// SolveVelocityWithFrictionImpl @ 143a1b0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::SolveVelocityWithFrictionImpl
          (TPBDCollisionSolverSimd<4> *this,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_1,
          TSimdValue<Chaos::FSolverBody_*,4> *param_2,TSimdValue<Chaos::FSolverBody_*,4> *param_3,
          TSimdRealf<4> *param_4,TSimdRealf<4> *param_5)

{
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  TSimdVec3f<4> *pTVar7;
  TSimdVec3f<4> *pTVar8;
  TSimdRealf<4> *pTVar9;
  TSimdRealf<4> *pTVar10;
  float *pfVar11;
  TSimdVec3f<4> *pTVar12;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar13;
  code *pcVar14;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  bool bVar87;
  uint uVar88;
  int iVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  uint uVar93;
  float fVar94;
  uint uVar95;
  float fVar96;
  uint uVar97;
  float fVar98;
  uint uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  undefined1 auVar127 [16];
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  uint uVar138;
  uint uVar139;
  uint uVar140;
  uint uVar141;
  undefined1 auStackY_308 [32];
  TSimdVec3f<4> local_1b8;
  TSimdVec3f<4> local_188;
  TSimdVec3f<4> local_158;
  TSimdVec3f<4> local_128;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  GatherBodyVelocities(param_2,param_3,&local_128,&local_158,&local_188,&local_1b8);
  iVar89 = 0;
  if (0 < this->MaxManifoldPoints) {
    do {
      fVar86 = local_128.VZ[3];
      fVar85 = local_128.VZ[2];
      fVar84 = local_128.VZ[1];
      fVar83 = local_128.VZ[0];
      fVar82 = local_128.VY[3];
      fVar81 = local_128.VY[2];
      fVar80 = local_128.VY[1];
      fVar79 = local_128.VY[0];
      fVar78 = local_128.VX[3];
      fVar77 = local_128.VX[2];
      fVar76 = local_128.VX[1];
      fVar75 = local_128.VX[0];
      fVar74 = local_158.VZ[3];
      fVar73 = local_158.VZ[2];
      fVar72 = local_158.VZ[1];
      fVar71 = local_158.VZ[0];
      fVar70 = local_158.VY[3];
      fVar69 = local_158.VY[2];
      fVar68 = local_158.VY[1];
      fVar67 = local_158.VY[0];
      fVar66 = local_158.VX[3];
      fVar65 = local_158.VX[2];
      fVar64 = local_158.VX[1];
      fVar63 = local_158.VX[0];
      fVar62 = local_188.VZ[3];
      fVar61 = local_188.VZ[2];
      fVar60 = local_188.VZ[1];
      fVar59 = local_188.VZ[0];
      fVar58 = local_188.VY[3];
      fVar57 = local_188.VY[2];
      fVar56 = local_188.VY[1];
      fVar55 = local_188.VY[0];
      fVar54 = local_188.VX[3];
      fVar53 = local_188.VX[2];
      fVar52 = local_188.VX[1];
      fVar51 = local_188.VX[0];
      fVar50 = local_1b8.VZ[3];
      fVar49 = local_1b8.VZ[2];
      fVar48 = local_1b8.VZ[1];
      fVar47 = local_1b8.VZ[0];
      fVar46 = local_1b8.VY[3];
      fVar45 = local_1b8.VY[2];
      fVar44 = local_1b8.VY[1];
      fVar43 = local_1b8.VY[0];
      fVar42 = local_1b8.VX[3];
      fVar41 = local_1b8.VX[2];
      fVar40 = local_1b8.VX[1];
      fVar39 = local_1b8.VX[0];
      uVar88 = this->ManifoldPointBeginIndex + iVar89;
      uVar93 = 0;
      if ((int)uVar88 < param_1->ArrayNum) {
        uVar93 = ~uVar88 >> 0x1f;
      }
      if ((uVar93 == 0) &&
         (bVar87 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar87)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      fVar101 = (this->SimdStiffness).V[0] * param_5->V[0];
      fVar103 = (this->SimdStiffness).V[1] * param_5->V[1];
      fVar105 = (this->SimdStiffness).V[2] * param_5->V[2];
      fVar107 = (this->SimdStiffness).V[3] * param_5->V[3];
      pTVar13 = param_1->DataPtr;
      pTVar9 = &pTVar13[(int)uVar88].SimdNetPushOutNormal;
      pfVar2 = pTVar13[(int)uVar88].SimdRelativeContactPoint1.VZ;
      pfVar3 = pTVar13[(int)uVar88].SimdRelativeContactPoint1.VZ;
      pTVar10 = &pTVar13[(int)uVar88].SimdContactDeltaNormal;
      pfVar11 = pTVar13[(int)uVar88].SimdContactNormal.VZ;
      fVar15 = *pfVar11;
      fVar16 = pfVar11[1];
      fVar17 = pfVar11[2];
      fVar18 = pfVar11[3];
      pTVar1 = pTVar13 + (int)uVar88;
      uVar138 = -(uint)(pTVar10->V[0] < 0.0 || 0.0 < pTVar9->V[0]) & (uint)(pTVar1->IsValid).V[0];
      uVar139 = -(uint)(pTVar10->V[1] < 0.0 || 0.0 < pTVar9->V[1]) & (uint)(pTVar1->IsValid).V[1];
      uVar140 = -(uint)(pTVar10->V[2] < 0.0 || 0.0 < pTVar9->V[2]) & (uint)(pTVar1->IsValid).V[2];
      uVar141 = -(uint)(pTVar10->V[3] < 0.0 || 0.0 < pTVar9->V[3]) & (uint)(pTVar1->IsValid).V[3];
      pfVar11 = pTVar13[(int)uVar88].SimdRelativeContactPoint1.VY;
      uVar93 = -(uint)(0.0 < (this->SimdVelocityFriction).V[0]) & uVar138;
      uVar95 = -(uint)(0.0 < (this->SimdVelocityFriction).V[1]) & uVar139;
      uVar97 = -(uint)(0.0 < (this->SimdVelocityFriction).V[2]) & uVar140;
      uVar99 = -(uint)(0.0 < (this->SimdVelocityFriction).V[3]) & uVar141;
      pfVar4 = pTVar13[(int)uVar88].SimdRelativeContactPoint0.VY;
      pfVar5 = pTVar13[(int)uVar88].SimdRelativeContactPoint0.VZ;
      pfVar6 = pTVar13[(int)uVar88].SimdRelativeContactPoint0.VZ;
      fVar134 = ((fVar67 * *pfVar5 - fVar71 * *pfVar4) + fVar75) -
                ((fVar43 * *pfVar2 - fVar47 * *pfVar11) + fVar51);
      fVar135 = ((fVar68 * pfVar5[1] - fVar72 * pfVar4[1]) + fVar76) -
                ((fVar44 * pfVar2[1] - fVar48 * pfVar11[1]) + fVar52);
      fVar136 = ((fVar69 * pfVar5[2] - fVar73 * pfVar4[2]) + fVar77) -
                ((fVar45 * pfVar2[2] - fVar49 * pfVar11[2]) + fVar53);
      fVar137 = ((fVar70 * pfVar5[3] - fVar74 * pfVar4[3]) + fVar78) -
                ((fVar46 * pfVar2[3] - fVar50 * pfVar11[3]) + fVar54);
      pTVar7 = &pTVar13[(int)uVar88].SimdRelativeContactPoint1;
      pfVar2 = pTVar13[(int)uVar88].SimdRelativeContactPoint0.VY;
      pTVar12 = &pTVar13[(int)uVar88].SimdContactTangentU;
      fVar94 = pTVar12->VX[0];
      fVar96 = pTVar12->VX[1];
      fVar98 = pTVar12->VX[2];
      fVar100 = pTVar12->VX[3];
      pTVar12 = &pTVar13[(int)uVar88].SimdRelativeContactPoint0;
      pTVar8 = &pTVar13[(int)uVar88].SimdRelativeContactPoint1;
      pfVar11 = pTVar13[(int)uVar88].SimdContactTangentU.VY;
      fVar102 = *pfVar11;
      fVar104 = pfVar11[1];
      fVar106 = pfVar11[2];
      fVar108 = pfVar11[3];
      fVar125 = ((fVar71 * pTVar12->VX[0] - fVar63 * *pfVar6) + fVar79) -
                ((fVar47 * pTVar7->VX[0] - fVar39 * *pfVar3) + fVar55);
      fVar128 = ((fVar72 * pTVar12->VX[1] - fVar64 * pfVar6[1]) + fVar80) -
                ((fVar48 * pTVar7->VX[1] - fVar40 * pfVar3[1]) + fVar56);
      fVar130 = ((fVar73 * pTVar12->VX[2] - fVar65 * pfVar6[2]) + fVar81) -
                ((fVar49 * pTVar7->VX[2] - fVar41 * pfVar3[2]) + fVar57);
      fVar132 = ((fVar74 * pTVar12->VX[3] - fVar66 * pfVar6[3]) + fVar82) -
                ((fVar50 * pTVar7->VX[3] - fVar42 * pfVar3[3]) + fVar58);
      pfVar3 = pTVar13[(int)uVar88].SimdRelativeContactPoint1.VY;
      pTVar7 = &pTVar13[(int)uVar88].SimdRelativeContactPoint0;
      pTVar12 = &pTVar13[(int)uVar88].SimdContactNormal;
      fVar110 = pTVar12->VX[0];
      fVar112 = pTVar12->VX[1];
      fVar114 = pTVar12->VX[2];
      fVar116 = pTVar12->VX[3];
      fVar121 = ((fVar63 * *pfVar2 - fVar67 * pTVar7->VX[0]) + fVar83) -
                ((fVar39 * *pfVar3 - fVar43 * pTVar8->VX[0]) + fVar59);
      fVar122 = ((fVar64 * pfVar2[1] - fVar68 * pTVar7->VX[1]) + fVar84) -
                ((fVar40 * pfVar3[1] - fVar44 * pTVar8->VX[1]) + fVar60);
      fVar123 = ((fVar65 * pfVar2[2] - fVar69 * pTVar7->VX[2]) + fVar85) -
                ((fVar41 * pfVar3[2] - fVar45 * pTVar8->VX[2]) + fVar61);
      fVar124 = ((fVar66 * pfVar2[3] - fVar70 * pTVar7->VX[3]) + fVar86) -
                ((fVar42 * pfVar3[3] - fVar46 * pTVar8->VX[3]) + fVar62);
      pfVar2 = pTVar13[(int)uVar88].SimdContactNormal.VY;
      fVar19 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar21 = pfVar2[2];
      fVar22 = pfVar2[3];
      pTVar9 = &pTVar13[(int)uVar88].SimdContactMassNormal;
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentU.VZ;
      fVar23 = *pfVar2;
      fVar24 = pfVar2[1];
      fVar25 = pfVar2[2];
      fVar26 = pfVar2[3];
      pTVar10 = &pTVar13[(int)uVar88].SimdContactTargetVelocityNormal;
      fVar109 = 0.0 - ((fVar19 * fVar125 + fVar110 * fVar134 + fVar15 * fVar121) - pTVar10->V[0]) *
                      pTVar9->V[0] * (this->SimdStiffness).V[0];
      fVar111 = 0.0 - ((fVar20 * fVar128 + fVar112 * fVar135 + fVar16 * fVar122) - pTVar10->V[1]) *
                      pTVar9->V[1] * (this->SimdStiffness).V[1];
      fVar113 = 0.0 - ((fVar21 * fVar130 + fVar114 * fVar136 + fVar17 * fVar123) - pTVar10->V[2]) *
                      pTVar9->V[2] * (this->SimdStiffness).V[2];
      fVar115 = 0.0 - ((fVar22 * fVar132 + fVar116 * fVar137 + fVar18 * fVar124) - pTVar10->V[3]) *
                      pTVar9->V[3] * (this->SimdStiffness).V[3];
      pTVar7 = &pTVar13[(int)uVar88].SimdContactTangentV;
      fVar27 = pTVar7->VX[0];
      fVar28 = pTVar7->VX[1];
      fVar29 = pTVar7->VX[2];
      fVar30 = pTVar7->VX[3];
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentV.VY;
      fVar31 = *pfVar2;
      fVar32 = pfVar2[1];
      fVar33 = pfVar2[2];
      fVar34 = pfVar2[3];
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentV.VZ;
      fVar35 = *pfVar2;
      fVar36 = pfVar2[1];
      fVar37 = pfVar2[2];
      fVar38 = pfVar2[3];
      pTVar9 = &pTVar13[(int)uVar88].SimdContactMassTangentU;
      fVar117 = (float)((uint)(0.0 - (fVar102 * fVar125 + fVar94 * fVar134 + fVar23 * fVar121) *
                                     pTVar9->V[0] * fVar101) & uVar93);
      fVar118 = (float)((uint)(0.0 - (fVar104 * fVar128 + fVar96 * fVar135 + fVar24 * fVar122) *
                                     pTVar9->V[1] * fVar103) & uVar95);
      fVar119 = (float)((uint)(0.0 - (fVar106 * fVar130 + fVar98 * fVar136 + fVar25 * fVar123) *
                                     pTVar9->V[2] * fVar105) & uVar97);
      fVar120 = (float)((uint)(0.0 - (fVar108 * fVar132 + fVar100 * fVar137 + fVar26 * fVar124) *
                                     pTVar9->V[3] * fVar107) & uVar99);
      pTVar9 = &pTVar13[(int)uVar88].SimdContactMassTangentV;
      auVar90 = divps(*(undefined1 (*) [16])pTVar13[(int)uVar88].SimdNetPushOutNormal.V,
                      *(undefined1 (*) [16])param_4->V);
      auVar92._0_4_ = 0.0 - auVar90._0_4_;
      auVar92._4_4_ = 0.0 - auVar90._4_4_;
      auVar92._8_4_ = 0.0 - auVar90._8_4_;
      auVar92._12_4_ = 0.0 - auVar90._12_4_;
      auVar127 = minps(auVar92,ZEXT816(0));
      fVar121 = (float)((uint)(0.0 - (fVar31 * fVar125 + fVar27 * fVar134 + fVar35 * fVar121) *
                                     pTVar9->V[0] * fVar101) & uVar93);
      fVar122 = (float)((uint)(0.0 - (fVar32 * fVar128 + fVar28 * fVar135 + fVar36 * fVar122) *
                                     pTVar9->V[1] * fVar103) & uVar95);
      fVar123 = (float)((uint)(0.0 - (fVar33 * fVar130 + fVar29 * fVar136 + fVar37 * fVar123) *
                                     pTVar9->V[2] * fVar105) & uVar97);
      fVar124 = (float)((uint)(0.0 - (fVar34 * fVar132 + fVar30 * fVar137 + fVar38 * fVar124) *
                                     pTVar9->V[3] * fVar107) & uVar99);
      pTVar9 = &pTVar13[(int)uVar88].SimdNetImpulseNormal;
      fVar101 = pTVar9->V[0];
      fVar103 = pTVar9->V[1];
      fVar105 = pTVar9->V[2];
      fVar107 = pTVar9->V[3];
      uVar93 = -(uint)(fVar101 + fVar109 < auVar127._0_4_);
      uVar95 = -(uint)(fVar103 + fVar111 < auVar127._4_4_);
      uVar97 = -(uint)(fVar105 + fVar113 < auVar127._8_4_);
      uVar99 = -(uint)(fVar107 + fVar115 < auVar127._12_4_);
      fVar126 = (float)((uint)(auVar127._0_4_ - fVar101) & uVar93 | ~uVar93 & (uint)fVar109);
      fVar129 = (float)((uint)(auVar127._4_4_ - fVar103) & uVar95 | ~uVar95 & (uint)fVar111);
      fVar131 = (float)((uint)(auVar127._8_4_ - fVar105) & uVar97 | ~uVar97 & (uint)fVar113);
      fVar133 = (float)((uint)(auVar127._12_4_ - fVar107) & uVar99 | ~uVar99 & (uint)fVar115);
      auVar127._0_4_ = (fVar126 + auVar90._0_4_ + fVar101) * (this->SimdVelocityFriction).V[0];
      auVar127._4_4_ = (fVar129 + auVar90._4_4_ + fVar103) * (this->SimdVelocityFriction).V[1];
      auVar127._8_4_ = (fVar131 + auVar90._8_4_ + fVar105) * (this->SimdVelocityFriction).V[2];
      auVar127._12_4_ = (fVar133 + auVar90._12_4_ + fVar107) * (this->SimdVelocityFriction).V[3];
      auVar92 = maxps(ZEXT816(0),auVar127);
      auVar90._0_4_ = fVar117 * fVar117;
      auVar90._4_4_ = fVar118 * fVar118;
      auVar90._8_4_ = fVar119 * fVar119;
      auVar90._12_4_ = fVar120 * fVar120;
      auVar91._0_4_ = fVar121 * fVar121 + auVar90._0_4_;
      auVar91._4_4_ = fVar122 * fVar122 + auVar90._4_4_;
      auVar91._8_4_ = fVar123 * fVar123 + auVar90._8_4_;
      auVar91._12_4_ = fVar124 * fVar124 + auVar90._12_4_;
      auVar127 = sqrtps(auVar90,auVar91);
      auVar127 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar127);
      fVar109 = auVar92._0_4_;
      fVar125 = auVar127._0_4_ * fVar109;
      fVar111 = auVar92._4_4_;
      fVar130 = auVar127._4_4_ * fVar111;
      fVar113 = auVar92._8_4_;
      fVar134 = auVar127._8_4_ * fVar113;
      fVar115 = auVar92._12_4_;
      fVar136 = auVar127._12_4_ * fVar115;
      uVar93 = -(uint)(fVar109 * fVar109 + ___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar91._0_4_);
      uVar95 = -(uint)(fVar111 * fVar111 + _UNK_1506895d4 < auVar91._4_4_);
      uVar97 = -(uint)(fVar113 * fVar113 + _UNK_1506895d8 < auVar91._8_4_);
      uVar99 = -(uint)(fVar115 * fVar115 + _UNK_1506895dc < auVar91._12_4_);
      fVar126 = (float)((uint)fVar126 & uVar138);
      fVar129 = (float)((uint)fVar129 & uVar139);
      fVar131 = (float)((uint)fVar131 & uVar140);
      fVar133 = (float)((uint)fVar133 & uVar141);
      fVar128 = (float)(((uint)(fVar125 * fVar121) & uVar93 | ~uVar93 & (uint)fVar121) & uVar138);
      fVar132 = (float)(((uint)(fVar130 * fVar122) & uVar95 | ~uVar95 & (uint)fVar122) & uVar139);
      fVar135 = (float)(((uint)(fVar134 * fVar123) & uVar97 | ~uVar97 & (uint)fVar123) & uVar140);
      fVar137 = (float)(((uint)(fVar136 * fVar124) & uVar99 | ~uVar99 & (uint)fVar124) & uVar141);
      fVar121 = (float)(((uint)(fVar125 * fVar117) & uVar93 | ~uVar93 & (uint)fVar117) & uVar138);
      fVar122 = (float)(((uint)(fVar130 * fVar118) & uVar95 | ~uVar95 & (uint)fVar118) & uVar139);
      fVar123 = (float)(((uint)(fVar134 * fVar119) & uVar97 | ~uVar97 & (uint)fVar119) & uVar140);
      fVar124 = (float)(((uint)(fVar136 * fVar120) & uVar99 | ~uVar99 & (uint)fVar120) & uVar141);
      pTVar9 = &pTVar13[(int)uVar88].SimdNetImpulseTangentU;
      fVar109 = fVar121 + pTVar9->V[0];
      fVar111 = fVar122 + pTVar9->V[1];
      fVar113 = fVar123 + pTVar9->V[2];
      fVar115 = fVar124 + pTVar9->V[3];
      pTVar9 = &pTVar13[(int)uVar88].SimdNetImpulseNormal;
      pTVar9->V[0] = fVar126 + fVar101;
      pTVar9->V[1] = fVar129 + fVar103;
      pTVar9->V[2] = fVar131 + fVar105;
      pTVar9->V[3] = fVar133 + fVar107;
      pTVar9 = &pTVar13[(int)uVar88].SimdNetImpulseTangentU;
      pTVar9->V[0] = fVar109;
      pTVar9->V[1] = fVar111;
      pTVar9->V[2] = fVar113;
      pTVar9->V[3] = fVar115;
      pTVar9 = &pTVar13[(int)uVar88].SimdNetImpulseTangentV;
      pTVar9->V[0] = fVar128 + fVar109;
      pTVar9->V[1] = fVar132 + fVar111;
      pTVar9->V[2] = fVar135 + fVar113;
      pTVar9->V[3] = fVar137 + fVar115;
      fVar101 = (this->SimdInvM1).V[0];
      fVar103 = (this->SimdInvM1).V[1];
      fVar105 = (this->SimdInvM1).V[2];
      fVar107 = (this->SimdInvM1).V[3];
      fVar110 = fVar128 * fVar27 + fVar121 * fVar94 + fVar126 * fVar110;
      fVar112 = fVar132 * fVar28 + fVar122 * fVar96 + fVar129 * fVar112;
      fVar114 = fVar135 * fVar29 + fVar123 * fVar98 + fVar131 * fVar114;
      fVar116 = fVar137 * fVar30 + fVar124 * fVar100 + fVar133 * fVar116;
      fVar102 = fVar128 * fVar31 + fVar121 * fVar102 + fVar126 * fVar19;
      fVar104 = fVar132 * fVar32 + fVar122 * fVar104 + fVar129 * fVar20;
      fVar106 = fVar135 * fVar33 + fVar123 * fVar106 + fVar131 * fVar21;
      fVar108 = fVar137 * fVar34 + fVar124 * fVar108 + fVar133 * fVar22;
      fVar94 = fVar128 * fVar35 + fVar121 * fVar23 + fVar126 * fVar15;
      fVar96 = fVar132 * fVar36 + fVar122 * fVar24 + fVar129 * fVar16;
      fVar98 = fVar135 * fVar37 + fVar123 * fVar25 + fVar131 * fVar17;
      fVar100 = fVar137 * fVar38 + fVar124 * fVar26 + fVar133 * fVar18;
      fVar15 = (this->SimdInvM0).V[0];
      fVar16 = (this->SimdInvM0).V[1];
      fVar17 = (this->SimdInvM0).V[2];
      fVar18 = (this->SimdInvM0).V[3];
      local_128.VX[0] = fVar75 + fVar110 * fVar15;
      local_128.VX[1] = fVar76 + fVar112 * fVar16;
      local_128.VX[2] = fVar77 + fVar114 * fVar17;
      local_128.VX[3] = fVar78 + fVar116 * fVar18;
      local_128.VY[0] = fVar79 + fVar102 * fVar15;
      local_128.VY[1] = fVar80 + fVar104 * fVar16;
      local_128.VY[2] = fVar81 + fVar106 * fVar17;
      local_128.VY[3] = fVar82 + fVar108 * fVar18;
      pTVar7 = &pTVar13[(int)uVar88].SimdContactTangentVAngular0;
      local_128.VZ[0] = fVar83 + fVar94 * fVar15;
      local_128.VZ[1] = fVar84 + fVar96 * fVar16;
      local_128.VZ[2] = fVar85 + fVar98 * fVar17;
      local_128.VZ[3] = fVar86 + fVar100 * fVar18;
      pTVar12 = &pTVar13[(int)uVar88].SimdContactTangentUAngular0;
      pTVar8 = &pTVar13[(int)uVar88].SimdContactNormalAngular0;
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentUAngular0.VY;
      local_158.VX[0] =
           fVar63 + pTVar7->VX[0] * fVar128 + pTVar12->VX[0] * fVar121 + pTVar8->VX[0] * fVar126;
      local_158.VX[1] =
           fVar64 + pTVar7->VX[1] * fVar132 + pTVar12->VX[1] * fVar122 + pTVar8->VX[1] * fVar129;
      local_158.VX[2] =
           fVar65 + pTVar7->VX[2] * fVar135 + pTVar12->VX[2] * fVar123 + pTVar8->VX[2] * fVar131;
      local_158.VX[3] =
           fVar66 + pTVar7->VX[3] * fVar137 + pTVar12->VX[3] * fVar124 + pTVar8->VX[3] * fVar133;
      pfVar3 = pTVar13[(int)uVar88].SimdContactTangentVAngular0.VY;
      pfVar11 = pTVar13[(int)uVar88].SimdContactNormalAngular0.VY;
      pfVar4 = pTVar13[(int)uVar88].SimdContactTangentUAngular0.VZ;
      local_158.VY[0] = fVar67 + *pfVar3 * fVar128 + *pfVar2 * fVar121 + *pfVar11 * fVar126;
      local_158.VY[1] = fVar68 + pfVar3[1] * fVar132 + pfVar2[1] * fVar122 + pfVar11[1] * fVar129;
      local_158.VY[2] = fVar69 + pfVar3[2] * fVar135 + pfVar2[2] * fVar123 + pfVar11[2] * fVar131;
      local_158.VY[3] = fVar70 + pfVar3[3] * fVar137 + pfVar2[3] * fVar124 + pfVar11[3] * fVar133;
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentVAngular0.VZ;
      pfVar3 = pTVar13[(int)uVar88].SimdContactNormalAngular0.VZ;
      local_158.VZ[0] = fVar71 + *pfVar2 * fVar128 + *pfVar4 * fVar121 + *pfVar3 * fVar126;
      local_158.VZ[1] = fVar72 + pfVar2[1] * fVar132 + pfVar4[1] * fVar122 + pfVar3[1] * fVar129;
      local_158.VZ[2] = fVar73 + pfVar2[2] * fVar135 + pfVar4[2] * fVar123 + pfVar3[2] * fVar131;
      local_158.VZ[3] = fVar74 + pfVar2[3] * fVar137 + pfVar4[3] * fVar124 + pfVar3[3] * fVar133;
      pTVar7 = &pTVar13[(int)uVar88].SimdContactTangentVAngular1;
      iVar89 = iVar89 + 1;
      pTVar12 = &pTVar13[(int)uVar88].SimdContactTangentUAngular1;
      local_188.VX[0] = fVar51 - fVar110 * fVar101;
      local_188.VX[1] = fVar52 - fVar112 * fVar103;
      local_188.VX[2] = fVar53 - fVar114 * fVar105;
      local_188.VX[3] = fVar54 - fVar116 * fVar107;
      local_188.VY[0] = fVar55 - fVar102 * fVar101;
      local_188.VY[1] = fVar56 - fVar104 * fVar103;
      local_188.VY[2] = fVar57 - fVar106 * fVar105;
      local_188.VY[3] = fVar58 - fVar108 * fVar107;
      pTVar8 = &pTVar13[(int)uVar88].SimdContactNormalAngular1;
      local_188.VZ[0] = fVar59 - fVar94 * fVar101;
      local_188.VZ[1] = fVar60 - fVar96 * fVar103;
      local_188.VZ[2] = fVar61 - fVar98 * fVar105;
      local_188.VZ[3] = fVar62 - fVar100 * fVar107;
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentUAngular1.VY;
      local_1b8.VX[0] =
           fVar39 - (pTVar7->VX[0] * fVar128 + pTVar12->VX[0] * fVar121 + pTVar8->VX[0] * fVar126);
      local_1b8.VX[1] =
           fVar40 - (pTVar7->VX[1] * fVar132 + pTVar12->VX[1] * fVar122 + pTVar8->VX[1] * fVar129);
      local_1b8.VX[2] =
           fVar41 - (pTVar7->VX[2] * fVar135 + pTVar12->VX[2] * fVar123 + pTVar8->VX[2] * fVar131);
      local_1b8.VX[3] =
           fVar42 - (pTVar7->VX[3] * fVar137 + pTVar12->VX[3] * fVar124 + pTVar8->VX[3] * fVar133);
      pfVar3 = pTVar13[(int)uVar88].SimdContactTangentVAngular1.VY;
      pfVar11 = pTVar13[(int)uVar88].SimdContactNormalAngular1.VY;
      pfVar4 = pTVar13[(int)uVar88].SimdContactTangentUAngular1.VZ;
      local_1b8.VY[0] = fVar43 - (*pfVar3 * fVar128 + *pfVar2 * fVar121 + *pfVar11 * fVar126);
      local_1b8.VY[1] = fVar44 - (pfVar3[1] * fVar132 + pfVar2[1] * fVar122 + pfVar11[1] * fVar129);
      local_1b8.VY[2] = fVar45 - (pfVar3[2] * fVar135 + pfVar2[2] * fVar123 + pfVar11[2] * fVar131);
      local_1b8.VY[3] = fVar46 - (pfVar3[3] * fVar137 + pfVar2[3] * fVar124 + pfVar11[3] * fVar133);
      pfVar2 = pTVar13[(int)uVar88].SimdContactTangentVAngular1.VZ;
      pfVar3 = pTVar13[(int)uVar88].SimdContactNormalAngular1.VZ;
      local_1b8.VZ[0] = fVar47 - (*pfVar2 * fVar128 + *pfVar4 * fVar121 + *pfVar3 * fVar126);
      local_1b8.VZ[1] = fVar48 - (pfVar2[1] * fVar132 + pfVar4[1] * fVar122 + pfVar3[1] * fVar129);
      local_1b8.VZ[2] = fVar49 - (pfVar2[2] * fVar135 + pfVar4[2] * fVar123 + pfVar3[2] * fVar131);
      local_1b8.VZ[3] = fVar50 - (pfVar2[3] * fVar137 + pfVar4[3] * fVar124 + pfVar3[3] * fVar133);
    } while (iVar89 < this->MaxManifoldPoints);
  }
  ScatterBodyVelocities(&local_128,&local_158,&local_188,&local_1b8,param_2,param_3);
  return;
}

// UpdateManifoldPointMass @ 143a217a0

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::UpdateManifoldPointMass
          (TPBDCollisionSolverSimd<4> *this,int param_1,int param_2,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_3,
          FSolverBody *param_4,FSolverBody *param_5,float param_6,float param_7,float param_8,
          float param_9)

{
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar1;
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
  float local_res10;
  float local_d0;
  float local_cc;
  
  pTVar1 = TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int>::operator[]
                     (param_3,param_1 + this->ManifoldPointBeginIndex);
  if ((pTVar1->IsValid).V[param_2] != 0.0) {
    (this->SimdInvM0).V[param_2] = 0.0;
    (this->SimdInvM1).V[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular0).VX[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular0).VY[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular0).VZ[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular0).VX[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular0).VY[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular0).VZ[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular0).VX[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular0).VY[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular0).VZ[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular1).VX[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular1).VY[param_2] = 0.0;
    (pTVar1->SimdContactNormalAngular1).VZ[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular1).VX[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular1).VY[param_2] = 0.0;
    (pTVar1->SimdContactTangentUAngular1).VZ[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular1).VX[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular1).VY[param_2] = 0.0;
    (pTVar1->SimdContactTangentVAngular1).VZ[param_2] = 0.0;
    fVar6 = (pTVar1->SimdContactTangentU).VX[param_2];
    fVar8 = param_6 * (param_4->State).InvM;
    fVar7 = (pTVar1->SimdContactTangentU).VY[param_2];
    fVar11 = (pTVar1->SimdContactNormal).VZ[param_2];
    fVar14 = (pTVar1->SimdContactNormal).VX[param_2];
    fVar18 = (pTVar1->SimdContactTangentU).VZ[param_2];
    fVar20 = (pTVar1->SimdContactTangentV).VX[param_2];
    fVar24 = (pTVar1->SimdContactNormal).VY[param_2];
    fVar25 = (pTVar1->SimdContactTangentV).VY[param_2];
    fVar29 = (pTVar1->SimdContactTangentV).VZ[param_2];
    fVar2 = param_8 * (param_5->State).InvM;
    local_d0 = 0.0;
    local_cc = 0.0;
    local_res10 = 0.0;
    if (0.0 < fVar8) {
      fVar5 = (pTVar1->SimdRelativeContactPoint0).VY[param_2];
      fVar3 = param_7 * *(float *)&(param_4->State).InvI;
      fVar10 = (pTVar1->SimdRelativeContactPoint0).VZ[param_2];
      fVar13 = (pTVar1->SimdRelativeContactPoint0).VX[param_2];
      fVar26 = param_7 * *(float *)&(param_4->State).InvI.field_0x8;
      fVar12 = param_7 * *(float *)&(param_4->State).InvI.field_0x20;
      fVar9 = param_7 * *(float *)&(param_4->State).InvI.field_0x24;
      fVar19 = param_7 * *(float *)&(param_4->State).InvI.field_0x10;
      fVar35 = param_7 * *(float *)&(param_4->State).InvI.field_0x14;
      fVar32 = param_7 * *(float *)&(param_4->State).InvI.field_0x18;
      fVar4 = param_7 * *(float *)&(param_4->State).InvI.field_0x4;
      fVar15 = param_7 * *(float *)&(param_4->State).InvI.field_0x28;
      fVar21 = fVar5 * fVar11 - fVar10 * fVar24;
      fVar37 = fVar10 * fVar14 - fVar13 * fVar11;
      fVar36 = fVar13 * fVar24 - fVar5 * fVar14;
      fVar38 = fVar5 * fVar18 - fVar10 * fVar7;
      fVar34 = fVar10 * fVar6 - fVar13 * fVar18;
      fVar33 = fVar13 * fVar7 - fVar5 * fVar6;
      fVar27 = fVar5 * fVar29 - fVar10 * fVar25;
      fVar30 = fVar10 * fVar20 - fVar13 * fVar29;
      fVar5 = fVar13 * fVar25 - fVar5 * fVar20;
      fVar31 = fVar21 * fVar12 + fVar37 * fVar9 + fVar36 * fVar15;
      fVar22 = fVar21 * fVar19 + fVar37 * fVar35 + fVar36 * fVar32;
      fVar23 = fVar37 * fVar4 + fVar21 * fVar3 + fVar36 * fVar26;
      fVar28 = fVar34 * fVar9 + fVar38 * fVar12 + fVar33 * fVar15;
      fVar16 = fVar38 * fVar19 + fVar34 * fVar35 + fVar33 * fVar32;
      fVar17 = fVar38 * fVar3 + fVar34 * fVar4 + fVar33 * fVar26;
      fVar9 = fVar30 * fVar9 + fVar27 * fVar12 + fVar5 * fVar15;
      fVar13 = fVar30 * fVar35 + fVar27 * fVar19 + fVar5 * fVar32;
      (this->SimdInvM0).V[param_2] = fVar8;
      (pTVar1->SimdContactNormalAngular0).VX[param_2] = fVar23;
      (pTVar1->SimdContactNormalAngular0).VY[param_2] = fVar22;
      (pTVar1->SimdContactNormalAngular0).VZ[param_2] = fVar31;
      fVar10 = fVar30 * fVar4 + fVar27 * fVar3 + fVar5 * fVar26;
      (pTVar1->SimdContactTangentUAngular0).VX[param_2] = fVar17;
      (pTVar1->SimdContactTangentUAngular0).VY[param_2] = fVar16;
      (pTVar1->SimdContactTangentUAngular0).VZ[param_2] = fVar28;
      (pTVar1->SimdContactTangentVAngular0).VX[param_2] = fVar10;
      local_d0 = fVar22 * fVar37 + fVar23 * fVar21 + fVar31 * fVar36 + fVar8;
      (pTVar1->SimdContactTangentVAngular0).VY[param_2] = fVar13;
      (pTVar1->SimdContactTangentVAngular0).VZ[param_2] = fVar9;
      local_cc = fVar16 * fVar34 + fVar17 * fVar38 + fVar28 * fVar33 + fVar8;
      local_res10 = fVar27 * fVar10 + fVar30 * fVar13 + fVar5 * fVar9 + fVar8;
    }
    if (0.0 < fVar2) {
      fVar8 = (pTVar1->SimdRelativeContactPoint1).VY[param_2];
      fVar5 = (pTVar1->SimdRelativeContactPoint1).VZ[param_2];
      fVar13 = param_9 * *(float *)&(param_5->State).InvI;
      fVar10 = (pTVar1->SimdRelativeContactPoint1).VX[param_2];
      fVar15 = param_9 * *(float *)&(param_5->State).InvI.field_0x24;
      fVar21 = param_9 * *(float *)&(param_5->State).InvI.field_0x20;
      fVar9 = param_9 * *(float *)&(param_5->State).InvI.field_0x10;
      fVar12 = param_9 * *(float *)&(param_5->State).InvI.field_0x8;
      fVar22 = param_9 * *(float *)&(param_5->State).InvI.field_0x18;
      fVar3 = param_9 * *(float *)&(param_5->State).InvI.field_0x4;
      fVar4 = param_9 * *(float *)&(param_5->State).InvI.field_0x14;
      fVar28 = param_9 * *(float *)&(param_5->State).InvI.field_0x28;
      fVar26 = fVar24 * fVar10 - fVar14 * fVar8;
      fVar23 = fVar14 * fVar5 - fVar11 * fVar10;
      fVar24 = fVar11 * fVar8 - fVar24 * fVar5;
      fVar27 = fVar18 * fVar8 - fVar7 * fVar5;
      fVar16 = fVar7 * fVar10 - fVar6 * fVar8;
      fVar17 = fVar6 * fVar5 - fVar18 * fVar10;
      fVar19 = fVar29 * fVar8 - fVar25 * fVar5;
      fVar5 = fVar20 * fVar5 - fVar29 * fVar10;
      fVar6 = fVar25 * fVar10 - fVar20 * fVar8;
      fVar29 = fVar15 * fVar23 + fVar21 * fVar24 + fVar28 * fVar26;
      fVar25 = fVar4 * fVar23 + fVar9 * fVar24 + fVar22 * fVar26;
      fVar18 = fVar3 * fVar23 + fVar13 * fVar24 + fVar12 * fVar26;
      fVar20 = fVar15 * fVar17 + fVar21 * fVar27 + fVar28 * fVar16;
      fVar14 = fVar4 * fVar17 + fVar9 * fVar27 + fVar22 * fVar16;
      fVar11 = fVar3 * fVar17 + fVar13 * fVar27 + fVar12 * fVar16;
      fVar7 = fVar15 * fVar5 + fVar21 * fVar19 + fVar28 * fVar6;
      fVar10 = fVar4 * fVar5 + fVar9 * fVar19 + fVar22 * fVar6;
      fVar8 = fVar3 * fVar5 + fVar13 * fVar19 + fVar12 * fVar6;
      (this->SimdInvM1).V[param_2] = fVar2;
      (pTVar1->SimdContactNormalAngular1).VY[param_2] = fVar25;
      (pTVar1->SimdContactNormalAngular1).VX[param_2] = fVar18;
      (pTVar1->SimdContactNormalAngular1).VZ[param_2] = fVar29;
      (pTVar1->SimdContactTangentUAngular1).VY[param_2] = fVar14;
      (pTVar1->SimdContactTangentUAngular1).VX[param_2] = fVar11;
      (pTVar1->SimdContactTangentUAngular1).VZ[param_2] = fVar20;
      (pTVar1->SimdContactTangentVAngular1).VX[param_2] = fVar8;
      (pTVar1->SimdContactTangentVAngular1).VY[param_2] = fVar10;
      (pTVar1->SimdContactTangentVAngular1).VZ[param_2] = fVar7;
      local_d0 = local_d0 + fVar25 * fVar23 + fVar18 * fVar24 + fVar29 * fVar26 + fVar2;
      local_cc = local_cc + fVar14 * fVar17 + fVar11 * fVar27 + fVar20 * fVar16 + fVar2;
      local_res10 = local_res10 + fVar10 * fVar5 + fVar8 * fVar19 + fVar7 * fVar6 + fVar2;
    }
    fVar7 = __real_3f800000;
    fVar6 = __real_322bcc77;
    if (local_d0 <= __real_322bcc77) {
      local_d0 = 0.0;
    }
    else {
      local_d0 = __real_3f800000 / local_d0;
    }
    (pTVar1->SimdContactMassNormal).V[param_2] = local_d0;
    if (local_cc <= fVar6) {
      local_cc = 0.0;
    }
    else {
      local_cc = fVar7 / local_cc;
    }
    (pTVar1->SimdContactMassTangentU).V[param_2] = local_cc;
    if (local_res10 <= fVar6) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = fVar7 / local_res10;
    }
    (pTVar1->SimdContactMassTangentV).V[param_2] = fVar7;
  }
  return;
}

// UpdateMassNormal @ 143a236e0

void __thiscall
Chaos::Private::TPBDCollisionSolverSimd<4>::UpdateMassNormal
          (TPBDCollisionSolverSimd<4> *this,int param_1,
          TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int> *param_2,
          FSolverBody *param_3,FSolverBody *param_4,float param_5,float param_6,float param_7,
          float param_8)

{
  float fVar1;
  int iVar2;
  float fVar3;
  TPBDCollisionSolverManifoldPointsSimd<4> *pTVar4;
  int iVar5;
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
  float fVar16;
  float fVar17;
  
  fVar3 = __real_322bcc77;
  iVar5 = 0;
  iVar2 = (this->SimdNumManifoldPoints).V[param_1];
  if (0 < iVar2) {
    do {
      pTVar4 = TArrayView<Chaos::Private::TPBDCollisionSolverManifoldPointsSimd<4>,int>::operator[]
                         (param_2,this->ManifoldPointBeginIndex + iVar5);
      if ((pTVar4->IsValid).V[param_1] != 0.0) {
        fVar14 = 0.0;
        (this->SimdInvM0).V[param_1] = 0.0;
        (this->SimdInvM1).V[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular0).VX[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular0).VY[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular0).VZ[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular1).VX[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular1).VY[param_1] = 0.0;
        (pTVar4->SimdContactNormalAngular1).VZ[param_1] = 0.0;
        fVar17 = param_5 * (param_3->State).InvM;
        fVar6 = (pTVar4->SimdContactNormal).VX[param_1];
        fVar1 = (pTVar4->SimdContactNormal).VY[param_1];
        fVar8 = (pTVar4->SimdContactNormal).VZ[param_1];
        fVar16 = param_7 * (param_4->State).InvM;
        if (0.0 < fVar17) {
          fVar13 = fVar8 * (pTVar4->SimdRelativeContactPoint0).VY[param_1] -
                   fVar1 * (pTVar4->SimdRelativeContactPoint0).VZ[param_1];
          fVar11 = fVar6 * (pTVar4->SimdRelativeContactPoint0).VZ[param_1] -
                   fVar8 * (pTVar4->SimdRelativeContactPoint0).VX[param_1];
          fVar9 = fVar1 * (pTVar4->SimdRelativeContactPoint0).VX[param_1] -
                  fVar6 * (pTVar4->SimdRelativeContactPoint0).VY[param_1];
          fVar7 = param_6 * *(float *)&(param_3->State).InvI.field_0x24 * fVar11 +
                  param_6 * *(float *)&(param_3->State).InvI.field_0x20 * fVar13 +
                  param_6 * *(float *)&(param_3->State).InvI.field_0x28 * fVar9;
          fVar14 = *(float *)&(param_3->State).InvI.field_0x4;
          fVar15 = param_6 * *(float *)&(param_3->State).InvI.field_0x14 * fVar11 +
                   param_6 * *(float *)&(param_3->State).InvI.field_0x10 * fVar13 +
                   param_6 * *(float *)&(param_3->State).InvI.field_0x18 * fVar9;
          fVar10 = *(float *)&(param_3->State).InvI.field_0x8;
          fVar12 = *(float *)&(param_3->State).InvI;
          (this->SimdInvM0).V[param_1] = fVar17;
          (pTVar4->SimdContactNormalAngular0).VY[param_1] = fVar15;
          (pTVar4->SimdContactNormalAngular0).VZ[param_1] = fVar7;
          fVar14 = param_6 * fVar14 * fVar11 + param_6 * fVar12 * fVar13 + param_6 * fVar10 * fVar9;
          (pTVar4->SimdContactNormalAngular0).VX[param_1] = fVar14;
          fVar14 = fVar15 * fVar11 + fVar14 * fVar13 + fVar7 * fVar9 + fVar17;
        }
        if (0.0 < fVar16) {
          fVar7 = fVar8 * (pTVar4->SimdRelativeContactPoint1).VY[param_1] -
                  fVar1 * (pTVar4->SimdRelativeContactPoint1).VZ[param_1];
          fVar17 = *(float *)&(param_4->State).InvI.field_0x4;
          fVar12 = fVar6 * (pTVar4->SimdRelativeContactPoint1).VZ[param_1] -
                   fVar8 * (pTVar4->SimdRelativeContactPoint1).VX[param_1];
          fVar9 = fVar1 * (pTVar4->SimdRelativeContactPoint1).VX[param_1] -
                  fVar6 * (pTVar4->SimdRelativeContactPoint1).VY[param_1];
          fVar10 = param_8 * *(float *)&(param_4->State).InvI.field_0x24 * fVar12 +
                   param_8 * *(float *)&(param_4->State).InvI.field_0x20 * fVar7 +
                   param_8 * *(float *)&(param_4->State).InvI.field_0x28 * fVar9;
          fVar6 = *(float *)&(param_4->State).InvI;
          fVar8 = param_8 * *(float *)&(param_4->State).InvI.field_0x14 * fVar12 +
                  param_8 * *(float *)&(param_4->State).InvI.field_0x10 * fVar7 +
                  param_8 * *(float *)&(param_4->State).InvI.field_0x18 * fVar9;
          fVar1 = *(float *)&(param_4->State).InvI.field_0x8;
          (this->SimdInvM1).V[param_1] = fVar16;
          (pTVar4->SimdContactNormalAngular1).VY[param_1] = fVar8;
          (pTVar4->SimdContactNormalAngular1).VZ[param_1] = fVar10;
          fVar6 = param_8 * fVar17 * fVar12 + param_8 * fVar6 * fVar7 + param_8 * fVar1 * fVar9;
          (pTVar4->SimdContactNormalAngular1).VX[param_1] = fVar6;
          fVar14 = fVar14 + fVar8 * fVar12 + fVar6 * fVar7 + fVar10 * fVar9 + fVar16;
        }
        if (fVar14 <= fVar3) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = __real_3f800000 / fVar14;
        }
        (pTVar4->SimdContactMassNormal).V[param_1] = fVar14;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

