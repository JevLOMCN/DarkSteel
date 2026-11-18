// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// NullaryExpr<Eigen::internal::scalar_constant_op<float>_> @ 14f06f200

CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,3,1,0,3,1>_> __cdecl
Eigen::DenseBase<Eigen::Matrix<float,3,1,2,3,1>_>::
NullaryExpr<Eigen::internal::scalar_constant_op<float>_>
          (long64 param_1,long64 param_2,scalar_constant_op<float> *param_3)

{
  undefined4 *in_R9;
  
  *(undefined4 *)(param_1 + 4) = *in_R9;
  return (CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,3,1,0,3,1>_>
         )param_1;
}

// WorldPosition @ 14f06f210

WorldPosition * __thiscall vraudio::WorldPosition::WorldPosition(WorldPosition *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  return this;
}

// WorldRotation @ 14f06f230

WorldRotation * __thiscall vraudio::WorldRotation::WorldRotation(WorldRotation *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0xc = 0x3f800000;
  return this;
}

// LinearLeastSquareFitting @ 14f06f250

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
vraudio::LinearLeastSquareFitting
          (vector<float,std::allocator<float>_> *param_1,
          vector<float,std::allocator<float>_> *param_2,float *param_3,float *param_4,float *param_5
          )

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
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
  
  fVar10 = __real_3f800000;
  pfVar2 = (param_1->_Mypair)._Myval2._Myfirst;
  pfVar3 = (param_2->_Mypair)._Myval2._Myfirst;
  uVar15 = (longlong)(param_1->_Mypair)._Myval2._Mylast - (longlong)pfVar2 >> 2;
  if (uVar15 != (longlong)(param_2->_Mypair)._Myval2._Mylast - (longlong)pfVar3 >> 2) {
    return false;
  }
  if (uVar15 < 2) {
    return false;
  }
  uVar12 = 0;
  fVar28 = 0.0;
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar40 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar44 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar32 = 0.0;
  fVar33 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  uVar13 = uVar12;
  if (uVar15 < 8) {
LAB_14f06f3b7:
    if (3 < uVar15 - uVar13) {
      do {
        fVar20 = pfVar2[uVar13];
        pfVar11 = pfVar3 + uVar13;
        lVar14 = uVar13 + 1;
        fVar21 = pfVar2[uVar13 + 1];
        fVar22 = pfVar2[uVar13 + 2];
        lVar8 = uVar13 + 2;
        fVar23 = pfVar2[uVar13 + 3];
        lVar9 = uVar13 + 3;
        fVar40 = fVar40 + *pfVar11 + pfVar3[lVar14] + pfVar3[lVar8] + pfVar3[lVar9];
        uVar13 = uVar13 + 4;
        fVar28 = fVar28 + fVar20 + fVar21 + fVar22 + fVar23;
        fVar32 = fVar32 + *pfVar11 * fVar20 + pfVar3[lVar14] * fVar21 + pfVar3[lVar8] * fVar22 +
                 pfVar3[lVar9] * fVar23;
        fVar44 = fVar44 + fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22 + fVar23 * fVar23;
      } while (uVar13 < uVar15 - 3);
      if (uVar15 <= uVar13) goto LAB_14f06f4ce;
    }
    pfVar11 = pfVar3 + uVar13;
    lVar14 = uVar15 - uVar13;
    do {
      fVar20 = *(float *)(((longlong)pfVar2 - (longlong)pfVar3) + (longlong)pfVar11);
      fVar40 = fVar40 + *pfVar11;
      fVar28 = fVar28 + fVar20;
      fVar21 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      fVar44 = fVar44 + fVar20 * fVar20;
      fVar32 = fVar32 + fVar20 * fVar21;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    fVar39 = 0.0;
    fVar40 = 0.0;
    fVar41 = 0.0;
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar44 = 0.0;
    fVar45 = 0.0;
    fVar46 = 0.0;
    fVar47 = 0.0;
    do {
      pfVar11 = pfVar2 + uVar13;
      fVar4 = *pfVar11;
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      pfVar11 = pfVar3 + uVar13;
      fVar16 = fVar16 + fVar4;
      fVar17 = fVar17 + fVar5;
      fVar18 = fVar18 + fVar6;
      fVar19 = fVar19 + fVar7;
      fVar40 = fVar40 + *pfVar11;
      fVar41 = fVar41 + pfVar11[1];
      fVar42 = fVar42 + pfVar11[2];
      fVar43 = fVar43 + pfVar11[3];
      pfVar1 = pfVar3 + uVar13 + 4;
      fVar44 = fVar44 + fVar4 * fVar4;
      fVar45 = fVar45 + fVar5 * fVar5;
      fVar46 = fVar46 + fVar6 * fVar6;
      fVar47 = fVar47 + fVar7 * fVar7;
      fVar32 = fVar32 + *pfVar11 * fVar4;
      fVar33 = fVar33 + pfVar11[1] * fVar5;
      fVar34 = fVar34 + pfVar11[2] * fVar6;
      fVar35 = fVar35 + pfVar11[3] * fVar7;
      pfVar11 = pfVar2 + uVar13 + 4;
      fVar4 = *pfVar11;
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      uVar13 = uVar13 + 8;
      fVar28 = fVar28 + *pfVar1;
      fVar29 = fVar29 + pfVar1[1];
      fVar30 = fVar30 + pfVar1[2];
      fVar31 = fVar31 + pfVar1[3];
      fVar36 = fVar36 + fVar4;
      fVar37 = fVar37 + fVar5;
      fVar38 = fVar38 + fVar6;
      fVar39 = fVar39 + fVar7;
      fVar20 = fVar20 + *pfVar1 * fVar4;
      fVar21 = fVar21 + pfVar1[1] * fVar5;
      fVar22 = fVar22 + pfVar1[2] * fVar6;
      fVar23 = fVar23 + pfVar1[3] * fVar7;
      fVar24 = fVar24 + fVar4 * fVar4;
      fVar25 = fVar25 + fVar5 * fVar5;
      fVar26 = fVar26 + fVar6 * fVar6;
      fVar27 = fVar27 + fVar7 * fVar7;
    } while (uVar13 < uVar15 - ((uint)uVar15 & 7));
    fVar32 = fVar22 + fVar34 + fVar20 + fVar32 + fVar23 + fVar35 + fVar21 + fVar33;
    fVar44 = fVar26 + fVar46 + fVar24 + fVar44 + fVar27 + fVar47 + fVar25 + fVar45;
    fVar40 = fVar30 + fVar42 + fVar28 + fVar40 + fVar31 + fVar43 + fVar29 + fVar41;
    fVar28 = fVar38 + fVar18 + fVar36 + fVar16 + fVar39 + fVar19 + fVar37 + fVar17;
    if (uVar13 < uVar15) goto LAB_14f06f3b7;
  }
LAB_14f06f4ce:
  fVar20 = __real_3f800000 / (float)uVar15;
  fVar28 = fVar20 * fVar28;
  fVar40 = fVar20 * fVar40;
  if (fVar20 * fVar44 == fVar28 * fVar28) {
    return false;
  }
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar20 = (fVar20 * fVar32 - fVar40 * fVar28) / (fVar20 * fVar44 - fVar28 * fVar28);
  *param_3 = fVar20;
  fVar28 = fVar40 - fVar20 * fVar28;
  *param_4 = fVar28;
  uVar15 = (longlong)(param_1->_Mypair)._Myval2._Mylast -
           (longlong)(param_1->_Mypair)._Myval2._Myfirst >> 2;
  if (uVar15 == 0) goto LAB_14f06f7a7;
  if (uVar15 < 8) {
LAB_14f06f64b:
    fVar20 = *param_3;
    if (3 < uVar15 - uVar12) {
      do {
        lVar14 = uVar12 + 3;
        fVar26 = pfVar3[uVar12] - fVar40;
        fVar29 = (fVar20 * pfVar2[uVar12] + fVar28) - pfVar3[uVar12];
        fVar27 = (fVar20 * pfVar2[uVar12 + 1] + fVar28) - pfVar3[uVar12 + 1];
        fVar24 = pfVar3[uVar12 + 1] - fVar40;
        fVar23 = pfVar3[uVar12 + 2] - fVar40;
        fVar25 = (fVar20 * pfVar2[uVar12 + 2] + fVar28) - pfVar3[uVar12 + 2];
        fVar44 = pfVar3[lVar14] - fVar40;
        lVar8 = uVar12 + 3;
        uVar12 = uVar12 + 4;
        fVar21 = fVar26 * fVar26 + fVar21 + fVar24 * fVar24 + fVar23 * fVar23 + fVar44 * fVar44;
        fVar44 = (fVar20 * pfVar2[lVar8] + fVar28) - pfVar3[lVar14];
        fVar22 = fVar29 * fVar29 + fVar22 + fVar27 * fVar27 + fVar25 * fVar25 + fVar44 * fVar44;
      } while (uVar12 < uVar15 - 3);
      if (uVar15 <= uVar12) goto LAB_14f06f79b;
    }
    do {
      pfVar11 = pfVar3 + uVar12;
      pfVar1 = pfVar2 + uVar12;
      uVar12 = uVar12 + 1;
      fVar44 = *pfVar11 - fVar40;
      fVar23 = (fVar20 * *pfVar1 + fVar28) - *pfVar11;
      fVar21 = fVar21 + fVar44 * fVar44;
      fVar22 = fVar22 + fVar23 * fVar23;
    } while (uVar12 < uVar15);
  }
  else {
    fVar20 = *param_3;
    fVar44 = 0.0;
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    fVar22 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar16 = 0.0;
    do {
      pfVar11 = pfVar3 + uVar12;
      fVar17 = *pfVar11 - fVar40;
      fVar18 = pfVar11[1] - fVar40;
      fVar19 = pfVar11[2] - fVar40;
      fVar36 = pfVar11[3] - fVar40;
      fVar44 = fVar44 + fVar17 * fVar17;
      fVar21 = fVar21 + fVar18 * fVar18;
      fVar23 = fVar23 + fVar19 * fVar19;
      fVar24 = fVar24 + fVar36 * fVar36;
      pfVar1 = pfVar2 + uVar12;
      fVar17 = (*pfVar1 * fVar20 + fVar28) - *pfVar11;
      fVar18 = (pfVar1[1] * fVar20 + fVar28) - pfVar11[1];
      fVar19 = (pfVar1[2] * fVar20 + fVar28) - pfVar11[2];
      fVar36 = (pfVar1[3] * fVar20 + fVar28) - pfVar11[3];
      pfVar11 = pfVar3 + uVar12 + 4;
      fVar33 = fVar33 + fVar17 * fVar17;
      fVar34 = fVar34 + fVar18 * fVar18;
      fVar35 = fVar35 + fVar19 * fVar19;
      fVar16 = fVar16 + fVar36 * fVar36;
      fVar17 = *pfVar11 - fVar40;
      fVar18 = pfVar11[1] - fVar40;
      fVar19 = pfVar11[2] - fVar40;
      fVar36 = pfVar11[3] - fVar40;
      fVar29 = fVar29 + fVar17 * fVar17;
      fVar30 = fVar30 + fVar18 * fVar18;
      fVar31 = fVar31 + fVar19 * fVar19;
      fVar32 = fVar32 + fVar36 * fVar36;
      pfVar1 = pfVar2 + uVar12 + 4;
      uVar12 = uVar12 + 8;
      fVar17 = (*pfVar1 * fVar20 + fVar28) - *pfVar11;
      fVar18 = (pfVar1[1] * fVar20 + fVar28) - pfVar11[1];
      fVar19 = (pfVar1[2] * fVar20 + fVar28) - pfVar11[2];
      fVar36 = (pfVar1[3] * fVar20 + fVar28) - pfVar11[3];
      fVar22 = fVar22 + fVar17 * fVar17;
      fVar25 = fVar25 + fVar18 * fVar18;
      fVar26 = fVar26 + fVar19 * fVar19;
      fVar27 = fVar27 + fVar36 * fVar36;
    } while (uVar12 < uVar15 - ((uint)uVar15 & 7));
    fVar22 = fVar26 + fVar35 + fVar22 + fVar33 + fVar27 + fVar16 + fVar25 + fVar34;
    fVar21 = fVar31 + fVar23 + fVar29 + fVar44 + fVar32 + fVar24 + fVar30 + fVar21;
    if (uVar12 < uVar15) goto LAB_14f06f64b;
  }
LAB_14f06f79b:
  if (fVar21 != 0.0) {
    *param_5 = fVar10 - fVar22 / fVar21;
    return true;
  }
  if (fVar22 != 0.0) {
    return false;
  }
LAB_14f06f7a7:
  *param_5 = 1.0;
  return true;
}

