// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// <lambda_invoker_cdecl> @ 143a248c0

void __cdecl
`Chaos::Softs::FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeNeohookeanLambdas'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (PMatrix<float,3,3> *param_1,float param_2,float param_3,PMatrix<float,3,3> *param_4)

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
  
  fVar1 = *(float *)&param_1->field_0x20;
  fVar2 = *(float *)&param_1->field_0x8;
  fVar3 = *(float *)&param_1->field_0x14;
  fVar4 = *(float *)param_1;
  fVar5 = *(float *)&param_1->field_0x18;
  fVar6 = *(float *)&param_1->field_0x4;
  fVar7 = *(float *)&param_1->field_0x28;
  fVar8 = *(float *)&param_1->field_0x24;
  fVar9 = *(float *)&param_1->field_0x10;
  fVar10 = fVar3 * fVar7 - fVar5 * fVar8;
  fVar11 = fVar9 * fVar8 - fVar3 * fVar1;
  fVar12 = (((fVar10 * fVar4 - (fVar9 * fVar7 - fVar5 * fVar1) * fVar6) + fVar2 * fVar11) -
           (param_2 / (param_2 + param_3) + __real_3f800000)) * (param_2 + param_3);
  *(float *)param_4 = fVar12 * fVar10 + fVar4 * param_2;
  *(float *)&param_4->field_0x4 = (fVar5 * fVar1 - fVar9 * fVar7) * fVar12 + fVar6 * param_2;
  *(float *)&param_4->field_0x8 = fVar2 * param_2 + fVar12 * fVar11;
  *(undefined4 *)&param_4->field_0xc = 0;
  *(float *)&param_4->field_0x10 = (fVar2 * fVar8 - fVar6 * fVar7) * fVar12 + fVar9 * param_2;
  *(float *)&param_4->field_0x14 = (fVar7 * fVar4 - fVar2 * fVar1) * fVar12 + fVar3 * param_2;
  *(float *)&param_4->field_0x18 = (fVar6 * fVar1 - fVar8 * fVar4) * fVar12 + fVar5 * param_2;
  *(undefined4 *)&param_4->field_0x1c = 0;
  *(float *)&param_4->field_0x20 = (fVar6 * fVar5 - fVar2 * fVar3) * fVar12 + fVar1 * param_2;
  *(float *)&param_4->field_0x24 = (fVar9 * fVar2 - fVar5 * fVar4) * fVar12 + fVar8 * param_2;
  *(float *)&param_4->field_0x28 = (fVar3 * fVar4 - fVar9 * fVar6) * fVar12 + fVar7 * param_2;
  *(undefined8 *)&param_4->field_0x2c = 0;
  *(undefined8 *)&param_4->field_0x34 = 0;
  *(undefined4 *)&param_4->field_0x3c = 0x3f800000;
  return;
}

// <lambda_invoker_cdecl> @ 143a24920

void __cdecl
`Chaos::Softs::FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeNeohookeanLambdas'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,float param_3,float param_4,
          int param_5,float param_6,PMatrix<float,3,3> *param_7)

{
  undefined1 local_18 [24];
  
  operator()(local_18,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// ~FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles> @ 143a38a80

void __thiscall
Chaos::Softs::FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles>::
~FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles>
          (FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles> *this)

{
  *(undefined ***)this =
       &___7__FGaussSeidelNeohookeanConstraints_MVFSolverParticles_Softs_Chaos___Softs_Chaos__6B_;
  FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>::
  ~FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles>
            ((FGaussSeidelCorotatedConstraints<float,Chaos::Softs::FSolverParticles> *)this);
  return;
}

// operator() @ 143a437f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::Softs::FGaussSeidelNeohookeanConstraints<float,Chaos::Softs::FSolverParticles>::
InitializeNeohookeanLambdas'::__l2::<lambda_2>::operator()
          (void *this,PMatrix<float,3,3> *param_1,PMatrix<float,3,3> *param_2,float param_3,
          float param_4,int param_5,float param_6,PMatrix<float,3,3> *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_238 [32];
  float local_218;
  float local_210 [5];
  float afStack_1fc [4];
  float afStack_1ec [4];
  float afStack_1dc [5];
  float local_1c8 [2];
  float afStack_1c0 [2];
  float local_1b8 [6];
  float afStack_1a0 [2];
  float local_198 [2];
  float afStack_190 [2];
  float local_188 [2];
  float afStack_180 [2];
  TMatrix<float> local_178;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_238;
  fVar9 = *(float *)&param_1->field_0x28;
  fVar10 = *(float *)&param_1->field_0x8;
  fVar11 = *(float *)&param_1->field_0x18;
  fVar12 = *(float *)param_1;
  fVar13 = *(float *)&param_1->field_0x10;
  lVar7 = (longlong)param_5;
  fVar3 = *(float *)&param_1->field_0x20;
  fVar4 = *(float *)&param_1->field_0x4;
  fVar5 = *(float *)&param_1->field_0x24;
  local_178.M[0][3] = 0.0;
  fVar6 = *(float *)&param_1->field_0x14;
  local_178.M[1][3] = 0.0;
  local_178.M[2][3] = 0.0;
  local_178.M[0][0] = fVar6 * fVar9 - fVar11 * fVar5;
  local_178.M[0][1] = fVar10 * fVar5 - fVar4 * fVar9;
  local_178.M[0][2] = fVar4 * fVar11 - fVar10 * fVar6;
  local_178.M[1][0] = fVar3 * fVar11 - fVar13 * fVar9;
  local_178.M[1][1] = fVar12 * fVar9 - fVar3 * fVar10;
  local_178.M[1][2] = fVar13 * fVar10 - fVar12 * fVar11;
  local_178.M[2][0] = fVar13 * fVar5 - fVar3 * fVar6;
  local_178.M[2][2] = fVar12 * fVar6 - fVar13 * fVar4;
  local_178.M[2][1] = fVar3 * fVar4 - fVar12 * fVar5;
  local_178.M[3]._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_178.M[3]._8_8_ = _UNK_150689648;
  local_218 = param_3;
  if (param_5 == 0) {
    fVar11 = *(float *)&param_2->field_0x24 + *(float *)&param_2->field_0x20 +
             *(float *)&param_2->field_0x28;
    fVar9 = *(float *)&param_2->field_0x14 + *(float *)&param_2->field_0x10 +
            *(float *)&param_2->field_0x18;
    fVar10 = *(float *)&param_2->field_0x4 + *(float *)param_2 + *(float *)&param_2->field_0x8;
    fVar9 = (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9) * param_3 * param_6;
    *(float *)param_7 = fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x14 = fVar9 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x28 = fVar9 + *(float *)&param_7->field_0x28;
    VectorMatrixMultiply(&local_138,&local_178,(TMatrix<float> *)param_2);
    pfVar8 = local_1b8 + 1;
    lVar7 = 0;
    local_1b8[0] = local_138.M[0][0];
    local_1b8[1] = local_138.M[0][1];
    local_1b8[2] = local_138.M[0][2];
    local_1b8[3] = local_138.M[0][3];
    local_1b8[4] = local_138.M[1][0];
    local_1b8[5] = local_138.M[1][1];
    afStack_1a0[0] = local_138.M[1][2];
    afStack_1a0[1] = local_138.M[1][3];
    local_198[0] = local_138.M[2][0];
    local_198[1] = local_138.M[2][1];
    afStack_190[0] = local_138.M[2][2];
    afStack_190[1] = local_138.M[2][3];
    local_188[0] = local_138.M[3][0];
    local_188[1] = local_138.M[3][1];
    afStack_180[0] = local_138.M[3][2];
    afStack_180[1] = local_138.M[3][3];
    local_210[0] = 0.0;
    local_210[1] = 0.0;
    local_210[2] = 0.0;
    do {
      pfVar1 = pfVar8 + -1;
      pfVar2 = pfVar8 + 1;
      fVar9 = *pfVar8;
      pfVar8 = pfVar8 + 4;
      local_210[lVar7] = *pfVar1 + local_210[lVar7] + *pfVar2 + fVar9;
      lVar7 = lVar7 + 1;
    } while (lVar7 < 3);
    fVar9 = (param_3 + param_4) * param_6;
    *(undefined8 *)&param_7->field_0x30 = 0;
    fVar10 = fVar9 * local_210[0];
    *(float *)&param_7->field_0x10 = local_210[1] * fVar10 + *(float *)&param_7->field_0x10;
    *(float *)param_7 = fVar10 * local_210[0] + *(float *)param_7;
    fVar11 = local_210[1] * fVar9;
    *(float *)&param_7->field_0x20 = local_210[2] * fVar10 + *(float *)&param_7->field_0x20;
    *(float *)&param_7->field_0x14 = local_210[1] * fVar11 + *(float *)&param_7->field_0x14;
    fVar9 = local_210[2] * fVar9;
    *(float *)&param_7->field_0x4 = fVar11 * local_210[0] + *(float *)&param_7->field_0x4;
    *(float *)&param_7->field_0x24 = local_210[2] * fVar11 + *(float *)&param_7->field_0x24;
    *(float *)&param_7->field_0x18 = local_210[1] * fVar9 + *(float *)&param_7->field_0x18;
    *(float *)&param_7->field_0x28 = local_210[2] * fVar9 + *(float *)&param_7->field_0x28;
    *(float *)&param_7->field_0x8 = fVar9 * local_210[0] + *(float *)&param_7->field_0x8;
    *(undefined4 *)&param_7->field_0x38 = 0;
  }
  else {
    fVar9 = *(float *)((longlong)param_2 + lVar7 * 4 + -4);
    fVar9 = (fVar9 * fVar9 +
             *(float *)(&param_2->field_0xc + lVar7 * 4) *
             *(float *)(&param_2->field_0xc + lVar7 * 4) +
            *(float *)(&param_2->field_0x1c + lVar7 * 4) *
            *(float *)(&param_2->field_0x1c + lVar7 * 4)) * param_3 * param_6;
    *(float *)param_7 = fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x14 = fVar9 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x28 = fVar9 + *(float *)&param_7->field_0x28;
    VectorMatrixMultiply(&local_f8,&local_178,(TMatrix<float> *)param_2);
    fVar13 = (param_3 + param_4) * param_6;
    afStack_1fc[1] = local_f8.M[0][0];
    afStack_1fc[2] = local_f8.M[0][1];
    afStack_1fc[3] = local_f8.M[0][2];
    afStack_1ec[0] = local_f8.M[0][3];
    afStack_1ec[1] = local_f8.M[1][0];
    afStack_1ec[2] = local_f8.M[1][1];
    afStack_1ec[3] = local_f8.M[1][2];
    afStack_1dc[0] = local_f8.M[1][3];
    afStack_1dc[1] = local_f8.M[2][0];
    afStack_1dc[2] = local_f8.M[2][1];
    afStack_1dc[3] = local_f8.M[2][2];
    afStack_1dc[4] = local_f8.M[2][3];
    local_1c8[0] = local_f8.M[3][0];
    local_1c8[1] = local_f8.M[3][1];
    afStack_1c0[0] = local_f8.M[3][2];
    afStack_1c0[1] = local_f8.M[3][3];
    fVar9 = afStack_1fc[lVar7];
    fVar10 = afStack_1dc[lVar7];
    fVar11 = afStack_1ec[lVar7];
    fVar12 = fVar13 * fVar9;
    *(undefined8 *)&param_7->field_0x30 = 0;
    *(float *)param_7 = fVar12 * fVar9 + *(float *)param_7;
    *(float *)&param_7->field_0x10 = fVar12 * fVar11 + *(float *)&param_7->field_0x10;
    *(float *)&param_7->field_0x20 = fVar12 * fVar10 + *(float *)&param_7->field_0x20;
    fVar12 = fVar13 * fVar11;
    fVar13 = fVar13 * fVar10;
    *(float *)&param_7->field_0x4 = fVar12 * fVar9 + *(float *)&param_7->field_0x4;
    *(float *)&param_7->field_0x14 = fVar12 * fVar11 + *(float *)&param_7->field_0x14;
    *(float *)&param_7->field_0x24 = fVar12 * fVar10 + *(float *)&param_7->field_0x24;
    *(float *)&param_7->field_0x8 = fVar13 * fVar9 + *(float *)&param_7->field_0x8;
    *(float *)&param_7->field_0x18 = fVar13 * fVar11 + *(float *)&param_7->field_0x18;
    *(float *)&param_7->field_0x28 = fVar13 * fVar10 + *(float *)&param_7->field_0x28;
    *(undefined4 *)&param_7->field_0x38 = 0;
  }
  return;
}

