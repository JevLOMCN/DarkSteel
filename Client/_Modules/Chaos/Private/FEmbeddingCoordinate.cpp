// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FEmbeddingCoordinate @ 143eb0d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FEmbeddingCoordinate * __thiscall
Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::FEmbeddingCoordinate
          (FEmbeddingCoordinate *this,TVector<int,3> *param_1,TVector<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  FEmbeddingCoordinate *pFVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  *(undefined8 *)&(this->CellIndex).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  iVar9 = (param_1->field0_0x0)._s_0.Z;
  (this->CellIndex).field0_0x0._s_0.Z = iVar9;
  iVar3 = (this->CellIndex).field0_0x0._s_0.Y;
  iVar4 = (this->CellIndex).field0_0x0._s_0.X;
  this->LocalTetrahedron = -1;
  dVar12 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)&param_2->field_0x10;
  dVar2 = *(double *)param_2;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((iVar9 + iVar3 + iVar4 & 1U) == 0) {
    if ((iVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      EvenPlaneTests[0]._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
      EvenPlaneTests[0]._8_8_ = _UNK_15076b868;
      EvenPlaneTests[1]._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
      EvenPlaneTests[1]._8_8_ = _UNK_150689688;
      EvenPlaneTests[2]._0_8_ = ___xmm_bff00000000000003ff0000000000000;
      EvenPlaneTests[2]._8_8_ = _UNK_15076c6f8;
      EvenPlaneTests[1]._16_8_ = ___xmm_c0000000000000003ff0000000000000;
      EvenPlaneTests[1]._24_8_ = _UNK_15076c778;
      EvenPlaneTests[3]._0_8_ = ___xmm_bff0000000000000bff0000000000000;
      EvenPlaneTests[3]._8_8_ = _UNK_15076c718;
      EvenPlaneTests[0]._16_8_ = ___xmm_0000000000000000bff0000000000000;
      EvenPlaneTests[0]._24_8_ = _UNK_15076ad98;
      EvenPlaneTests[2]._16_8_ = ___xmm_0000000000000000bff0000000000000;
      EvenPlaneTests[2]._24_8_ = _UNK_15076ad98;
      EvenPlaneTests[3]._16_8_ = ___xmm_00000000000000003ff0000000000000;
      EvenPlaneTests[3]._24_8_ = _UNK_150689518;
      _Init_thread_footer(&::_TSS0);
    }
    iVar9 = 0;
    this->LocalTetrahedron = 0;
    do {
      dVar10 = dVar12 * *(double *)&EvenPlaneTests[iVar9].field_0x8 +
               dVar2 * *(double *)(EvenPlaneTests + iVar9) +
               dVar1 * *(double *)&EvenPlaneTests[iVar9].field_0x10 +
               *(double *)&EvenPlaneTests[iVar9].field_0x18;
      if (0.0 <= dVar10) break;
      iVar9 = iVar9 + 1;
      this->LocalTetrahedron = iVar9;
    } while (iVar9 < 4);
    if (iVar9 == 0) {
      *(double *)&this->BarycentricCoordinate = dVar10;
      *(double *)&(this->BarycentricCoordinate).field_0x8 = __real_3ff0000000000000 - dVar12;
      *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar2;
      return this;
    }
    if (iVar9 == 1) {
      *(double *)&this->BarycentricCoordinate = dVar10;
      dVar12 = __real_3ff0000000000000 - dVar12;
      *(double *)&(this->BarycentricCoordinate).field_0x8 = __real_3ff0000000000000 - dVar1;
      *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar12;
      return this;
    }
    if (iVar9 == 2) {
      *(double *)&this->BarycentricCoordinate = dVar10;
      *(double *)&(this->BarycentricCoordinate).field_0x8 = dVar1;
    }
    else {
      if (iVar9 != 3) {
        if (iVar9 == 4) {
          dVar14 = (double)EvenPlaneTests[2]._24_8_ * __real_bfe0000000000000;
          dVar13 = (double)EvenPlaneTests[1]._24_8_ * __real_bfe0000000000000;
          dVar10 = (dVar2 * (double)EvenPlaneTests[2]._0_8_ +
                    (double)EvenPlaneTests[2]._8_8_ * dVar12 +
                   (double)EvenPlaneTests[2]._16_8_ * dVar1) * __real_3fe0000000000000;
          dVar11 = (dVar2 * (double)EvenPlaneTests[1]._0_8_ +
                    (double)EvenPlaneTests[1]._8_8_ * dVar12 +
                   (double)EvenPlaneTests[1]._16_8_ * dVar1) * __real_3fe0000000000000;
          *(double *)&this->BarycentricCoordinate =
               (double)EvenPlaneTests[3]._24_8_ * __real_bfe0000000000000 -
               (dVar2 * (double)EvenPlaneTests[3]._0_8_ + (double)EvenPlaneTests[3]._8_8_ * dVar12 +
               (double)EvenPlaneTests[3]._16_8_ * dVar1) * __real_3fe0000000000000;
          *(double *)&(this->BarycentricCoordinate).field_0x8 = dVar14 - dVar10;
          *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar13 - dVar11;
          return this;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                           ,0x39,L"");
        if (!bVar7) {
          return this;
        }
        goto code_r0x000143eb1188;
      }
      *(double *)&this->BarycentricCoordinate = dVar10;
      *(double *)&(this->BarycentricCoordinate).field_0x8 = __real_3ff0000000000000 - dVar1;
    }
  }
  else {
    if ((iVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      OddPlaneTests[0]._16_8_ = ___xmm_3ff0000000000000bff0000000000000;
      OddPlaneTests[0]._24_8_ = _UNK_15076b868;
      OddPlaneTests[1]._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
      OddPlaneTests[1]._8_8_ = _UNK_15076b868;
      OddPlaneTests[3]._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
      OddPlaneTests[3]._8_8_ = _UNK_150689688;
      OddPlaneTests[0]._0_8_ = ___xmm_bff0000000000000bff0000000000000;
      OddPlaneTests[0]._8_8_ = _UNK_15076c718;
      OddPlaneTests[1]._16_8_ = ___xmm_bff00000000000003ff0000000000000;
      OddPlaneTests[1]._24_8_ = _UNK_15076c6f8;
      OddPlaneTests[2]._0_8_ = ___xmm_bff00000000000003ff0000000000000;
      OddPlaneTests[2]._8_8_ = _UNK_15076c6f8;
      OddPlaneTests[2]._16_8_ = ___xmm_bff00000000000003ff0000000000000;
      OddPlaneTests[2]._24_8_ = _UNK_15076c6f8;
      OddPlaneTests[3]._16_8_ = ___xmm_bff0000000000000bff0000000000000;
      OddPlaneTests[3]._24_8_ = _UNK_15076c718;
      _Init_thread_footer(&::_TSS1);
    }
    iVar9 = 0;
    this->LocalTetrahedron = 0;
    do {
      dVar10 = dVar12 * *(double *)&OddPlaneTests[iVar9].field_0x8 +
               dVar2 * *(double *)(OddPlaneTests + iVar9) +
               dVar1 * *(double *)&OddPlaneTests[iVar9].field_0x10 +
               *(double *)&OddPlaneTests[iVar9].field_0x18;
      if (0.0 <= dVar10) break;
      iVar9 = iVar9 + 1;
      this->LocalTetrahedron = iVar9;
    } while (iVar9 < 4);
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        *(double *)&this->BarycentricCoordinate = dVar10;
        *(double *)&(this->BarycentricCoordinate).field_0x8 = __real_3ff0000000000000 - dVar1;
        *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar2;
        return this;
      }
      if (iVar9 == 2) {
        *(double *)&this->BarycentricCoordinate = dVar10;
        *(double *)&(this->BarycentricCoordinate).field_0x8 = dVar12;
        *(double *)&(this->BarycentricCoordinate).field_0x10 = __real_3ff0000000000000 - dVar1;
        return this;
      }
      if (iVar9 == 3) {
        *(double *)&this->BarycentricCoordinate = dVar10;
        dVar12 = __real_3ff0000000000000 - dVar12;
        *(double *)&(this->BarycentricCoordinate).field_0x8 = __real_3ff0000000000000 - dVar2;
        *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar12;
        return this;
      }
      if (iVar9 == 4) {
        dVar14 = (double)OddPlaneTests[2]._24_8_ * __real_bfe0000000000000;
        dVar10 = (double)OddPlaneTests[0]._24_8_ * __real_bfe0000000000000;
        dVar11 = ((double)OddPlaneTests[0]._8_8_ * dVar12 + (double)OddPlaneTests[0]._0_8_ * dVar2 +
                 (double)OddPlaneTests[0]._16_8_ * dVar1) * __real_3fe0000000000000;
        dVar13 = ((double)OddPlaneTests[2]._8_8_ * dVar12 + (double)OddPlaneTests[2]._0_8_ * dVar2 +
                 (double)OddPlaneTests[2]._16_8_ * dVar1) * __real_3fe0000000000000;
        *(double *)&this->BarycentricCoordinate =
             (double)OddPlaneTests[1]._24_8_ * __real_bfe0000000000000 -
             ((double)OddPlaneTests[1]._8_8_ * dVar12 + (double)OddPlaneTests[1]._0_8_ * dVar2 +
             (double)OddPlaneTests[1]._16_8_ * dVar1) * __real_3fe0000000000000;
        *(double *)&(this->BarycentricCoordinate).field_0x8 = dVar10 - dVar11;
        *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar14 - dVar13;
        return this;
      }
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                         ,0x60,L"");
      if (!bVar7) {
        return this;
      }
code_r0x000143eb1188:
      pcVar6 = (code *)swi(3);
      pFVar8 = (FEmbeddingCoordinate *)(*pcVar6)();
      return pFVar8;
    }
    *(double *)&this->BarycentricCoordinate = dVar10;
    *(double *)&(this->BarycentricCoordinate).field_0x8 = dVar2;
  }
  *(double *)&(this->BarycentricCoordinate).field_0x10 = dVar12;
  return this;
}

// operator() @ 143eb33e0

void __thiscall
`Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformationTransform'::__l2::
<lambda_1>::operator()(void *this,TMatrix<double> *param_1)

{
  double *pdVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  
  dVar15 = __real_3f50624dd2f1a9fc;
  dVar14 = __real_3ff0000000000000;
  lVar19 = 0;
  do {
    pdVar1 = *(double **)((longlong)this + 0x10);
    lVar2 = *(longlong *)((longlong)this + 8);
    piVar3 = *(int **)this;
    lVar4 = *(longlong *)((longlong)this + 0x18);
    iVar21 = *(int *)(lVar19 + 4 + lVar2) + piVar3[1];
    iVar22 = *piVar3 + *(int *)(lVar19 + lVar2);
    iVar18 = *(int *)(lVar19 + 8 + lVar2) + piVar3[2];
    dVar24 = param_1->M[1][2];
    uVar20 = (iVar21 + iVar22 * *(int *)(lVar4 + 4)) * *(int *)(lVar4 + 8) + iVar18;
    dVar7 = *pdVar1 + (double)iVar22 * pdVar1[8];
    uVar17 = 0;
    if ((int)uVar20 < *(int *)(lVar4 + 0x18)) {
      uVar17 = ~uVar20 >> 0x1f;
    }
    dVar27 = pdVar1[2] + (double)iVar18 * pdVar1[10];
    dVar6 = pdVar1[1] + (double)iVar21 * pdVar1[9];
    auVar23._8_4_ = SUB84(dVar7,0);
    auVar23._0_8_ = dVar7;
    auVar23._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    dVar26 = param_1->M[2][1] * dVar27;
    dVar8 = dVar6 * param_1->M[1][0] + dVar7 * param_1->M[0][0] + param_1->M[2][0] * dVar27 +
            param_1->M[3][0] * dVar14;
    dVar9 = dVar6 * param_1->M[1][1] + auVar23._8_8_ * param_1->M[0][1] + dVar26 +
            param_1->M[3][1] * dVar14;
    dVar11 = param_1->M[0][2];
    dVar12 = param_1->M[2][2];
    dVar13 = param_1->M[3][2];
    if (uVar17 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    auVar10._4_8_ = dVar26;
    auVar10._0_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar25._0_8_ = auVar10._0_8_ << 0x20;
    auVar25._8_4_ = SUB84(dVar9,0);
    auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    pdVar1 = (double *)(*(longlong *)(lVar4 + 0x10) + (longlong)(int)uVar20 * 0x18);
    dVar7 = (dVar24 * dVar6 + dVar7 * dVar11 + dVar27 * dVar12 + dVar13 * dVar14) -
            *(double *)(*(longlong *)(lVar4 + 0x10) + 0x10 + (longlong)(int)uVar20 * 0x18);
    dVar8 = dVar8 - *pdVar1;
    dVar24 = auVar25._8_8_ - pdVar1[1];
    if (dVar15 <= dVar8 * dVar8 + dVar24 * dVar24 + dVar7 * dVar7) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("DiffSq < Tolerance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                          ,0x71,L"");
      if (bVar16) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar19 = lVar19 + 0xc;
  } while (lVar19 < 0x30);
  return;
}

// DeformationTransform @ 143ebb590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformationTransform
          (FEmbeddingCoordinate *this,TMatrix<double> *__return_storage_ptr__,
          TArrayND<Chaos::TVector<double,3>,3> *param_1,TUniformGrid<double,3> *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  double dVar21;
  bool bVar22;
  longlong lVar23;
  TMatrix<double> *pTVar24;
  TVector<double>_u_0 *pTVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  TVector<double>_u_0 *pTVar33;
  TVector<Chaos::TVector<int,3>,4> *pTVar34;
  TVector<double>_u_0 *pTVar35;
  TVector<double>_u_0 *pTVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  FEmbeddingCoordinate *local_908;
  TVector<Chaos::TVector<int,3>,4> *local_900;
  TUniformGrid<double,3> *local_8f8;
  TArrayND<Chaos::TVector<double,3>,3> *local_8f0;
  TVector<double>_u_0 local_8e8;
  TVector<double>_u_0 local_8d0;
  TVector<double>_u_0 local_8b8;
  TVector<double>_u_0 local_8a0;
  TVector<double>_u_0 local_888;
  TVector<double>_u_0 local_870;
  TVector<double>_u_0 local_858;
  TVector<double>_u_0 local_840;
  TVector<double>_u_0 local_828;
  TVector<double>_u_0 local_810;
  TVector<double>_u_0 local_7f8;
  TVector<double>_u_0 local_7e0;
  TVector<double>_u_0 local_7c8;
  TVector<double>_u_0 local_7b0;
  TVector<double>_u_0 local_798;
  TVector<double>_u_0 local_780;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_750;
  TVector<double>_u_0 local_738;
  TVector<double>_u_0 local_720;
  TVector<double>_u_0 local_708;
  TVector<double>_u_0 local_6f0;
  TVector<double>_u_0 local_6d8;
  TVector<double>_u_0 local_6c0;
  TVector<double>_u_0 local_6a8;
  TVector<double>_u_0 local_690;
  TVector<double>_u_0 local_678;
  TVector<double>_u_0 local_660;
  TVector<double>_u_0 local_648;
  TVector<double>_u_0 local_630;
  TVector<double>_u_0 local_618;
  TVector<double>_u_0 local_600;
  TVector<double>_u_0 local_5e8;
  TVector<double>_u_0 local_5d0;
  double local_5b8;
  double dStack_5b0;
  TVector<double>_u_0 local_5a0;
  TVector<double>_u_0 local_588;
  double local_570;
  double dStack_568;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_540;
  TVector<double>_u_0 local_528;
  double local_510;
  double dStack_508;
  TVector<double>_u_0 local_4f8;
  TMatrix<double> local_4d8;
  TMatrix<double> local_458;
  TMatrix<double> local_3d8;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158 [2];
  
  pTVar33 = &local_888;
  iVar7 = (this->CellIndex).field0_0x0._s_0.Y;
  iVar8 = (this->CellIndex).field0_0x0._s_0.Z;
  iVar9 = this->LocalTetrahedron;
  iVar10 = (this->CellIndex).field0_0x0._s_0.X;
  lVar38 = (longlong)iVar9 * 0x30;
  if ((iVar8 + iVar7 + iVar10 & 1U) == 0) {
    pTVar34 = EvenIndexTetrahedraOffsets;
    lVar31 = 0x154bb06fc;
    lVar32 = 0x154bb0708;
    lVar23 = 0x154bb0714;
  }
  else {
    pTVar34 = OddIndexTetrahedraOffsets;
    lVar31 = 0x154bb07ec;
    lVar32 = 0x154bb07f8;
    lVar23 = 0x154bb0804;
  }
  pTVar34 = pTVar34 + iVar9;
  uVar30 = ((pTVar34->V[0].field0_0x0._s_0.X + iVar10) * *(int *)&param_1->field_0x4 + iVar7 +
           pTVar34->V[0].field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           pTVar34->V[0].field0_0x0._s_0.Z + iVar8;
  local_908 = this;
  local_900 = pTVar34;
  local_8f8 = param_2;
  local_8f0 = param_1;
  if (3 < iVar9) {
    uVar39 = 0;
    uVar37 = uVar39;
    if ((int)uVar30 < *(int *)&param_1->field_0x18) {
      uVar37 = ~uVar30 >> 0x1f;
    }
    if ((uVar37 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar16 = (code *)swi(3);
      pTVar24 = (TMatrix<double> *)(*pcVar16)();
      return pTVar24;
    }
    lVar26 = (longlong)(int)uVar30;
    lVar13 = *(longlong *)&param_1->field_0x10;
    uVar37 = (((this->CellIndex).field0_0x0._s_0.X + *(int *)(lVar31 + lVar38)) *
              *(int *)&param_1->field_0x4 + *(int *)(lVar31 + 4 + lVar38) +
             (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
             *(int *)(lVar31 + 8 + lVar38) + (this->CellIndex).field0_0x0._s_0.Z;
    uVar30 = uVar39;
    if ((int)uVar37 < *(int *)&param_1->field_0x18) {
      uVar30 = ~uVar37 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar16 = (code *)swi(3);
      pTVar24 = (TMatrix<double> *)(*pcVar16)();
      return pTVar24;
    }
    lVar27 = (longlong)(int)uVar37;
    lVar14 = *(longlong *)&param_1->field_0x10;
    uVar37 = ((*(int *)(lVar32 + lVar38) + (this->CellIndex).field0_0x0._s_0.X) *
              *(int *)&param_1->field_0x4 + *(int *)(lVar32 + 4 + lVar38) +
             (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
             *(int *)(lVar32 + 8 + lVar38) + (this->CellIndex).field0_0x0._s_0.Z;
    uVar30 = uVar39;
    if ((int)uVar37 < *(int *)&param_1->field_0x18) {
      uVar30 = ~uVar37 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar16 = (code *)swi(3);
      pTVar24 = (TMatrix<double> *)(*pcVar16)();
      return pTVar24;
    }
    lVar15 = *(longlong *)&param_1->field_0x10;
    lVar28 = (longlong)(int)uVar37;
    uVar30 = (((this->CellIndex).field0_0x0._s_0.X + *(int *)(lVar23 + lVar38)) *
              *(int *)&param_1->field_0x4 + *(int *)(lVar23 + 4 + lVar38) +
             (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
             *(int *)(lVar23 + 8 + lVar38) + (this->CellIndex).field0_0x0._s_0.Z;
    if ((int)uVar30 < *(int *)&param_1->field_0x18) {
      uVar39 = ~uVar30 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar16 = (code *)swi(3);
      pTVar24 = (TMatrix<double> *)(*pcVar16)();
      return pTVar24;
    }
    lVar23 = *(longlong *)&param_1->field_0x10;
    lVar29 = (longlong)(int)uVar30;
    dVar5 = *(double *)(lVar14 + 0x10 + lVar27 * 0x18);
    dVar42 = *(double *)(lVar14 + 8 + lVar27 * 0x18);
    dVar43 = *(double *)(lVar23 + 0x10 + lVar29 * 0x18);
    dVar41 = *(double *)(lVar23 + 8 + lVar29 * 0x18);
    if (((this->CellIndex).field0_0x0._s_0.Y + (this->CellIndex).field0_0x0._s_0.X +
         (this->CellIndex).field0_0x0._s_0.Z & 1U) == 0) {
      dVar5 = *(double *)(lVar13 + lVar26 * 0x18);
      dVar18 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      dVar43 = *(double *)(lVar13 + 0x10 + lVar26 * 0x18);
      dVar40 = *(double *)(lVar15 + 0x10 + lVar28 * 0x18);
      local_5a0._s_0.X = 0.0;
      local_5a0._s_0.Y = 0.0;
      local_5a0._s_0.Z = 0.0;
      local_6c0._s_0.Z =
           (((*(double *)(lVar14 + 0x10 + lVar27 * 0x18) +
             *(double *)(lVar23 + 0x10 + lVar29 * 0x18)) - dVar43) - dVar40) *
           __real_3fe0000000000000 * dVar18;
      local_6c0._s_0.X =
           (((*(double *)(lVar23 + lVar29 * 0x18) + *(double *)(lVar14 + lVar27 * 0x18)) - dVar5) -
           *(double *)(lVar15 + lVar28 * 0x18)) * __real_3fe0000000000000 * dVar18;
      dVar58 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar48 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_6a8._s_0.X =
           (((dVar5 + *(double *)(lVar23 + lVar29 * 0x18)) - *(double *)(lVar14 + lVar27 * 0x18)) -
           *(double *)(lVar15 + lVar28 * 0x18)) * __real_3fe0000000000000 * dVar48;
      local_6c0._s_0.Y =
           (((dVar41 + dVar42) - *(double *)(lVar13 + 8 + lVar26 * 0x18)) -
           *(double *)(lVar15 + 8 + lVar28 * 0x18)) * __real_3fe0000000000000 * dVar18;
      pdVar1 = (double *)(lVar14 + lVar27 * 0x18);
      local_6a8._s_0.Y =
           (((dVar41 + *(double *)(lVar13 + 8 + lVar26 * 0x18)) -
            *(double *)(lVar14 + 8 + lVar27 * 0x18)) - *(double *)(lVar15 + 8 + lVar28 * 0x18)) *
           __real_3fe0000000000000 * dVar48;
      pdVar2 = (double *)(lVar13 + lVar26 * 0x18);
      pdVar3 = (double *)(lVar15 + lVar28 * 0x18);
      pdVar4 = (double *)(lVar23 + lVar29 * 0x18);
      dVar5 = *(double *)(lVar23 + 0x10 + lVar29 * 0x18);
      dVar42 = (((pdVar1[1] + pdVar2[1]) - pdVar3[1]) - pdVar4[1]) * dVar58 * _UNK_150689678;
      local_588._8_4_ = SUB84(dVar42,0);
      local_588._0_8_ =
           (((*pdVar1 + *pdVar2) - *pdVar3) - *pdVar4) * dVar58 *
           ___xmm_3fe00000000000003fe0000000000000;
      local_588._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      local_588._s_0.Z =
           (((*(double *)(lVar14 + 0x10 + lVar27 * 0x18) + dVar43) - dVar40) - dVar5) *
           __real_3fe0000000000000 * dVar58;
      local_6a8._s_0.Z =
           (((dVar5 + dVar43) - *(double *)(lVar14 + 0x10 + lVar27 * 0x18)) - dVar40) *
           __real_3fe0000000000000 * dVar48;
      UE::Math::TMatrix<double>::TMatrix<double>
                (__return_storage_ptr__,(TVector<double> *)&local_6a8._s_0,
                 (TVector<double> *)&local_588._s_0,(TVector<double> *)&local_6c0._s_0,
                 (TVector<double> *)&local_5a0._s_0);
      iVar7 = (this->CellIndex).field0_0x0._s_0.X;
      iVar8 = *(int *)(lVar32 + 4 + lVar38);
      iVar9 = (this->CellIndex).field0_0x0._s_0.Y;
      iVar10 = (this->CellIndex).field0_0x0._s_0.Z;
      dVar41 = *(double *)param_2;
      dStack_568 = *(double *)&param_2->field_0x8;
      iVar11 = *(int *)(lVar32 + 8 + lVar38);
      iVar12 = *(int *)(lVar32 + lVar38);
      dVar5 = *(double *)&param_2->field_0x10;
      local_570 = dVar41;
      dVar42 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,0);
      dVar41 = dVar41 + dVar42 * (double)(iVar7 + iVar12);
      dVar42 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,1);
      dVar42 = dStack_568 + dVar42 * (double)(iVar8 + iVar9);
      dVar43 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,2);
      dVar5 = dVar5 + dVar43 * (double)(iVar10 + iVar11);
      auVar52._8_4_ = SUB84(dVar42,0);
      auVar52._0_8_ = dVar42;
      auVar52._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      dVar43 = __return_storage_ptr__->M[0][0] * dVar41 + dVar42 * __return_storage_ptr__->M[1][0] +
               __return_storage_ptr__->M[2][0] * dVar5 + __return_storage_ptr__->M[3][0] * 0.0;
      dVar40 = __return_storage_ptr__->M[0][1] * dVar41 +
               auVar52._8_8_ * __return_storage_ptr__->M[1][1] +
               __return_storage_ptr__->M[2][1] * dVar5 + __return_storage_ptr__->M[3][1] * 0.0;
      uVar6 = *(undefined8 *)(lVar15 + 0x10 + lVar28 * 0x18);
      uVar53 = (undefined4)uVar6;
      uVar54 = (undefined4)((ulonglong)uVar6 >> 0x20);
      dVar41 = __return_storage_ptr__->M[1][2] * dVar42 + __return_storage_ptr__->M[0][2] * dVar41 +
               __return_storage_ptr__->M[2][2] * dVar5 + __return_storage_ptr__->M[3][2] * 0.0;
      auVar19._4_8_ = __return_storage_ptr__->M[3][3] * 0.0;
      auVar19._0_4_ = (int)((ulonglong)dVar43 >> 0x20);
      auVar45._0_8_ = auVar19._0_8_ << 0x20;
      auVar45._8_4_ = SUB84(dVar40,0);
      auVar45._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dVar42 = *(double *)(lVar15 + 8 + lVar28 * 0x18) - auVar45._8_8_;
      dVar5 = *(double *)(lVar15 + lVar28 * 0x18);
    }
    else {
      dVar50 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      dVar40 = *(double *)(lVar13 + 0x10 + lVar26 * 0x18);
      pdVar1 = (double *)(lVar14 + lVar27 * 0x18);
      dVar17 = *pdVar1;
      dVar47 = pdVar1[1];
      pdVar1 = (double *)(lVar23 + lVar29 * 0x18);
      dVar56 = *pdVar1;
      dVar59 = pdVar1[1];
      dVar18 = *(double *)(lVar15 + 0x10 + lVar28 * 0x18);
      dVar48 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      pdVar1 = (double *)(lVar13 + lVar26 * 0x18);
      dVar49 = *pdVar1;
      dVar57 = pdVar1[1];
      dVar58 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      pdVar1 = (double *)(lVar15 + lVar28 * 0x18);
      dVar55 = *pdVar1;
      dVar21 = pdVar1[1];
      local_558._s_0.X = 0.0;
      local_558._s_0.Y = 0.0;
      local_558._s_0.Z = 0.0;
      local_690._s_0.Y =
           (((dVar41 + dVar42) - *(double *)(lVar13 + 8 + lVar26 * 0x18)) -
           *(double *)(lVar15 + 8 + lVar28 * 0x18)) * __real_3fe0000000000000 * dVar50;
      local_690._s_0.X =
           (((*(double *)(lVar14 + lVar27 * 0x18) + *(double *)(lVar23 + lVar29 * 0x18)) -
            *(double *)(lVar13 + lVar26 * 0x18)) - *(double *)(lVar15 + lVar28 * 0x18)) *
           __real_3fe0000000000000 * dVar50;
      local_690._s_0.Z = (((dVar5 + dVar43) - dVar40) - dVar18) * __real_3fe0000000000000 * dVar50;
      local_540._s_0.X =
           (((dVar17 + dVar55) - dVar49) - dVar56) * dVar48 *
           ___xmm_3fe00000000000003fe0000000000000;
      local_540._s_0.Y = (((dVar47 + dVar21) - dVar57) - dVar59) * dVar48 * _UNK_150689678;
      local_540._s_0.Z = (((dVar5 + dVar18) - dVar40) - dVar43) * __real_3fe0000000000000 * dVar48;
      local_528._s_0.Z = (((dVar5 + dVar40) - dVar18) - dVar43) * __real_3fe0000000000000 * dVar58;
      dVar5 = (((dVar47 + dVar57) - dVar21) - dVar59) * dVar58 * _UNK_150689678;
      local_528._8_4_ = SUB84(dVar5,0);
      local_528._0_8_ =
           (((dVar17 + dVar49) - dVar55) - dVar56) * dVar58 *
           ___xmm_3fe00000000000003fe0000000000000;
      local_528._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      UE::Math::TMatrix<double>::TMatrix<double>
                (__return_storage_ptr__,(TVector<double> *)&local_528._s_0,
                 (TVector<double> *)&local_540._s_0,(TVector<double> *)&local_690._s_0,
                 (TVector<double> *)&local_558._s_0);
      iVar7 = (this->CellIndex).field0_0x0._s_0.X;
      iVar8 = *(int *)(lVar31 + lVar38);
      iVar9 = *(int *)(lVar31 + 4 + lVar38);
      iVar10 = (this->CellIndex).field0_0x0._s_0.Y;
      iVar11 = (this->CellIndex).field0_0x0._s_0.Z;
      dVar41 = *(double *)param_2;
      dStack_508 = *(double *)&param_2->field_0x8;
      iVar12 = *(int *)(lVar31 + 8 + lVar38);
      dVar5 = *(double *)&param_2->field_0x10;
      local_510 = dVar41;
      dVar42 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,0);
      dVar41 = dVar41 + dVar42 * (double)(iVar7 + iVar8);
      dVar42 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,1);
      dVar42 = dStack_508 + dVar42 * (double)(iVar9 + iVar10);
      dVar43 = UE::Math::TVector<double>::Component((TVector<double> *)&param_2->field_0x40,2);
      dVar5 = dVar5 + dVar43 * (double)(iVar11 + iVar12);
      dVar43 = dVar42 * __return_storage_ptr__->M[1][0] + __return_storage_ptr__->M[0][0] * dVar41 +
               __return_storage_ptr__->M[2][0] * dVar5 + __return_storage_ptr__->M[3][0] * 0.0;
      dVar40 = dVar42 * __return_storage_ptr__->M[1][1] + __return_storage_ptr__->M[0][1] * dVar41 +
               __return_storage_ptr__->M[2][1] * dVar5 + __return_storage_ptr__->M[3][1] * 0.0;
      uVar6 = *(undefined8 *)(lVar14 + 0x10 + lVar27 * 0x18);
      uVar53 = (undefined4)uVar6;
      uVar54 = (undefined4)((ulonglong)uVar6 >> 0x20);
      dVar41 = __return_storage_ptr__->M[1][2] * dVar42 + __return_storage_ptr__->M[0][2] * dVar41 +
               __return_storage_ptr__->M[2][2] * dVar5 + __return_storage_ptr__->M[3][2] * 0.0;
      auVar20._4_8_ = __return_storage_ptr__->M[3][3] * 0.0;
      auVar20._0_4_ = (int)((ulonglong)dVar43 >> 0x20);
      auVar46._0_8_ = auVar20._0_8_ << 0x20;
      auVar46._8_4_ = SUB84(dVar40,0);
      auVar46._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dVar42 = *(double *)(lVar14 + 8 + lVar27 * 0x18) - auVar46._8_8_;
      dVar5 = *(double *)(lVar14 + lVar27 * 0x18);
    }
    __return_storage_ptr__->M[3][1] = dVar42;
    __return_storage_ptr__->M[3][2] = (double)CONCAT44(uVar54,uVar53) - dVar41;
    __return_storage_ptr__->M[3][0] = dVar5 - dVar43;
    goto LAB_143ebcafd;
  }
  uVar37 = 0;
  if ((int)uVar30 < *(int *)&param_1->field_0x18) {
    uVar37 = ~uVar30 >> 0x1f;
  }
  if ((uVar37 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar16 = (code *)swi(3);
    pTVar24 = (TMatrix<double> *)(*pcVar16)();
    return pTVar24;
  }
  pdVar1 = (double *)(*(longlong *)&param_1->field_0x10 + (longlong)(int)uVar30 * 0x18);
  dVar42 = *pdVar1;
  dVar43 = pdVar1[1];
  dVar5 = *(double *)(*(longlong *)&param_1->field_0x10 + 0x10 + (longlong)(int)uVar30 * 0x18);
  uVar37 = ((pTVar34->V[1].field0_0x0._s_0.X + (this->CellIndex).field0_0x0._s_0.X) *
            *(int *)&param_1->field_0x4 + pTVar34->V[1].field0_0x0._s_0.Y +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           pTVar34->V[1].field0_0x0._s_0.Z + (this->CellIndex).field0_0x0._s_0.Z;
  uVar30 = 0;
  if ((int)uVar37 < *(int *)&param_1->field_0x18) {
    uVar30 = ~uVar37 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar16 = (code *)swi(3);
    pTVar24 = (TMatrix<double> *)(*pcVar16)();
    return pTVar24;
  }
  lVar23 = (longlong)(int)uVar37;
  lVar38 = *(longlong *)&param_1->field_0x10;
  dVar18 = *(double *)(lVar38 + 0x10 + lVar23 * 0x18) - dVar5;
  dVar41 = *(double *)(lVar38 + 8 + lVar23 * 0x18) - dVar43;
  dVar40 = *(double *)(lVar38 + lVar23 * 0x18) - dVar42;
  uVar37 = ((pTVar34->V[2].field0_0x0._s_0.X + (this->CellIndex).field0_0x0._s_0.X) *
            *(int *)&param_1->field_0x4 + pTVar34->V[2].field0_0x0._s_0.Y +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           pTVar34->V[2].field0_0x0._s_0.Z + (this->CellIndex).field0_0x0._s_0.Z;
  uVar30 = 0;
  if ((int)uVar37 < *(int *)&param_1->field_0x18) {
    uVar30 = ~uVar37 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar16 = (code *)swi(3);
    pTVar24 = (TMatrix<double> *)(*pcVar16)();
    return pTVar24;
  }
  lVar23 = (longlong)(int)uVar37;
  lVar38 = *(longlong *)&param_1->field_0x10;
  dVar17 = *(double *)(lVar38 + 0x10 + lVar23 * 0x18) - dVar5;
  dVar48 = *(double *)(lVar38 + 8 + lVar23 * 0x18) - dVar43;
  dVar58 = *(double *)(lVar38 + lVar23 * 0x18) - dVar42;
  uVar37 = ((pTVar34->V[3].field0_0x0._s_0.X + (this->CellIndex).field0_0x0._s_0.X) *
            *(int *)&param_1->field_0x4 + pTVar34->V[3].field0_0x0._s_0.Y +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           pTVar34->V[3].field0_0x0._s_0.Z + (this->CellIndex).field0_0x0._s_0.Z;
  uVar30 = 0;
  if ((int)uVar37 < *(int *)&param_1->field_0x18) {
    uVar30 = ~uVar37 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar16 = (code *)swi(3);
    pTVar24 = (TMatrix<double> *)(*pcVar16)();
    return pTVar24;
  }
  lVar23 = (longlong)(int)uVar37;
  lVar38 = *(longlong *)&param_1->field_0x10;
  dVar59 = *(double *)(lVar38 + 0x10 + lVar23 * 0x18) - dVar5;
  dVar47 = *(double *)(lVar38 + 8 + lVar23 * 0x18) - dVar43;
  dVar56 = *(double *)(lVar38 + lVar23 * 0x18) - dVar42;
  iVar7 = this->LocalTetrahedron;
  if (((this->CellIndex).field0_0x0._s_0.Y + (this->CellIndex).field0_0x0._s_0.X +
       (this->CellIndex).field0_0x0._s_0.Z & 1U) == 0) {
    if (iVar7 == 0) {
      pTVar25 = &local_630;
      local_630._s_0.Z = 0.0;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar36 = &local_828;
      pTVar35 = &local_810;
      pTVar33 = &local_7f8;
      pTVar24 = &local_358;
      local_630._s_0.X = 0.0;
      local_630._s_0.Y = 0.0;
      local_828._s_0.X = dVar49 * dVar56;
      local_828._s_0.Y = dVar49 * dVar47;
      local_828._s_0.Z = dVar49 * dVar59;
      dVar56 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      dVar47 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      local_810._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x48) * dVar18;
      dVar40 = dVar40 * dVar47;
      dVar41 = dVar41 * dVar47;
      local_7f8._s_0.X = dVar58 * dVar56;
      local_7f8._s_0.Y = dVar48 * dVar56;
      local_7f8._s_0.Z = dVar17 * dVar56;
      local_810._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar40,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_810._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000);
      goto LAB_143ebc13a;
    }
    if (iVar7 == 1) {
      pTVar25 = &local_648;
      pTVar36 = &local_870;
      pTVar35 = &local_858;
      local_648._s_0.Z = 0.0;
      local_648._s_0.X = 0.0;
      local_648._s_0.Y = 0.0;
      pTVar33 = &local_840;
      pTVar24 = &local_3d8;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      dVar41 = dVar49 * dVar41;
      dVar49 = dVar49 * dVar40;
      local_870._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar41 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar40 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_870._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar49,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar58 = dVar58 * dVar41;
      dVar48 = dVar48 * dVar41;
      local_870._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x50) * dVar18;
      dVar56 = dVar56 * dVar40;
      dVar47 = dVar47 * dVar40;
      local_858._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x48) * dVar17;
      local_840._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x40) * dVar59;
      local_858._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar58,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_858._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar48,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_840._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar56,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_840._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
      goto LAB_143ebc13a;
    }
    if (iVar7 == 2) {
      pTVar25 = &local_660;
      local_660._s_0.Z = 0.0;
      local_660._s_0.X = 0.0;
      local_660._s_0.Y = 0.0;
      pTVar36 = &local_8b8;
      pTVar35 = &local_8a0;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar24 = &local_458;
      local_8b8._s_0.X = dVar49 * dVar40;
      local_8b8._s_0.Y = dVar49 * dVar41;
      local_8b8._s_0.Z = dVar49 * dVar18;
      dVar41 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar40 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_8a0._s_0.X = dVar58 * dVar41;
      local_8a0._s_0.Y = dVar48 * dVar41;
      local_8a0._s_0.Z = dVar17 * dVar41;
      dVar56 = dVar56 * dVar40;
      dVar47 = dVar47 * dVar40;
      local_888._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x40) * dVar59;
      local_888._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar56,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_888._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
      goto LAB_143ebc13a;
    }
    if (iVar7 == 3) {
      pTVar25 = &local_4f8;
      local_4f8._s_0.Z = 0.0;
      local_4f8._s_0.X = 0.0;
      local_4f8._s_0.Y = 0.0;
      pTVar36 = &local_678;
      pTVar35 = &local_8e8;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar33 = &local_8d0;
      pTVar24 = &local_4d8;
      dVar57 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar55 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_8e8._s_0.X = dVar58 * dVar57;
      dVar40 = dVar49 * dVar40;
      dVar49 = dVar49 * dVar41;
      local_8e8._s_0.Y = dVar48 * dVar57;
      local_678._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar40,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_8e8._s_0.Z = dVar17 * dVar57;
      local_678._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x50) * dVar18;
      local_8d0._s_0.X = dVar56 * dVar55;
      local_8d0._s_0.Y = dVar47 * dVar55;
      local_8d0._s_0.Z = dVar59 * dVar55;
      local_678._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar49,0) ^ (uint)__xmm_80000000000000008000000000000000);
      goto LAB_143ebc13a;
    }
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                        ,0x91,L"");
    if (bVar22) {
code_r0x000143ebbd5a:
      pcVar16 = (code *)swi(3);
      pTVar24 = (TMatrix<double> *)(*pcVar16)();
      return pTVar24;
    }
  }
  else {
    if (iVar7 == 0) {
      pTVar25 = &local_5d0;
      local_5d0._s_0.Z = 0.0;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar36 = &local_708;
      pTVar35 = &local_6f0;
      pTVar33 = &local_6d8;
      pTVar24 = local_158;
      local_5d0._s_0.X = 0.0;
      local_5d0._s_0.Y = 0.0;
      local_708._s_0.X = dVar49 * dVar56;
      local_708._s_0.Y = dVar49 * dVar47;
      local_708._s_0.Z = dVar49 * dVar59;
      dVar47 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar56 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_6f0._s_0.X = dVar58 * dVar47;
      local_6f0._s_0.Y = dVar48 * dVar47;
      local_6f0._s_0.Z = dVar17 * dVar47;
      local_6d8._s_0.X = dVar40 * dVar56;
      local_6d8._s_0.Y = dVar41 * dVar56;
      local_6d8._s_0.Z = dVar18 * dVar56;
    }
    else if (iVar7 == 1) {
      pTVar25 = &local_5e8;
      pTVar36 = &local_750;
      pTVar35 = &local_738;
      local_5e8._s_0.Z = 0.0;
      pTVar33 = &local_720;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar24 = &local_1d8;
      local_5e8._s_0.X = 0.0;
      local_5e8._s_0.Y = 0.0;
      dVar41 = dVar49 * dVar41;
      dVar49 = dVar49 * dVar40;
      local_750._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar40 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      dVar41 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      local_750._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar49,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_720._s_0.X = dVar58 * dVar40;
      dVar56 = dVar56 * dVar41;
      dVar47 = dVar47 * dVar41;
      local_750._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x50) * dVar18;
      local_738._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x48) * dVar59;
      local_720._s_0.Y = dVar48 * dVar40;
      local_720._s_0.Z = dVar17 * dVar40;
      local_738._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar56,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_738._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    else if (iVar7 == 2) {
      pTVar25 = &local_600;
      pTVar36 = &local_798;
      pTVar35 = &local_780;
      local_600._s_0.Z = 0.0;
      pTVar33 = &local_768;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar24 = &local_258;
      local_600._s_0.X = 0.0;
      local_600._s_0.Y = 0.0;
      dVar48 = dVar49 * dVar48;
      dVar49 = dVar49 * dVar58;
      local_798._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar48,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar48 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar58 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      local_798._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar49 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar49,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_780._s_0.X = dVar40 * dVar48;
      dVar56 = dVar56 * dVar58;
      dVar47 = dVar47 * dVar58;
      local_798._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x50) * dVar17;
      local_780._s_0.Y = dVar41 * dVar48;
      local_780._s_0.Z = dVar18 * dVar48;
      local_768._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x40) * dVar59;
      local_768._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar56 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar56,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_768._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar47 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar47,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    else {
      if (iVar7 != 3) {
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\WeightedLatticeImplicitObject.cpp"
                            ,0xa5,L"");
        if (bVar22) goto code_r0x000143ebbd5a;
        goto LAB_143ebc18a;
      }
      pTVar25 = &local_618;
      pTVar36 = &local_7e0;
      local_618._s_0.Z = 0.0;
      pTVar35 = &local_7c8;
      dVar49 = __real_3ff0000000000000 / *(double *)&param_2->field_0x50;
      pTVar33 = &local_7b0;
      pTVar24 = &local_2d8;
      local_618._s_0.X = 0.0;
      local_618._s_0.Y = 0.0;
      local_7e0._s_0.X = dVar49 * dVar56;
      local_7e0._s_0.Z = dVar49 * dVar59;
      local_7e0._s_0.Y = dVar49 * dVar47;
      dVar47 = __real_3ff0000000000000 / *(double *)&param_2->field_0x48;
      dVar56 = __real_3ff0000000000000 / *(double *)&param_2->field_0x40;
      dVar58 = dVar58 * dVar47;
      dVar48 = dVar48 * dVar47;
      dVar40 = dVar40 * dVar56;
      dVar41 = dVar41 * dVar56;
      local_7c8._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x48) * dVar17;
      local_7b0._s_0.Z = (__real_bff0000000000000 / *(double *)&param_2->field_0x40) * dVar18;
      local_7c8._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar58,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_7c8._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar48,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_7b0._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar40,0) ^ (uint)__xmm_80000000000000008000000000000000);
      local_7b0._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
LAB_143ebc13a:
    pTVar24 = UE::Math::TMatrix<double>::TMatrix<double>
                        (pTVar24,(TVector<double> *)&pTVar33->_s_0,(TVector<double> *)&pTVar35->_s_0
                         ,(TVector<double> *)&pTVar36->_s_0,(TVector<double> *)&pTVar25->_s_0);
    dVar41 = pTVar24->M[0][1];
    __return_storage_ptr__->M[0][0] = pTVar24->M[0][0];
    __return_storage_ptr__->M[0][1] = dVar41;
    dVar41 = pTVar24->M[0][3];
    __return_storage_ptr__->M[0][2] = pTVar24->M[0][2];
    __return_storage_ptr__->M[0][3] = dVar41;
    dVar41 = pTVar24->M[1][1];
    __return_storage_ptr__->M[1][0] = pTVar24->M[1][0];
    __return_storage_ptr__->M[1][1] = dVar41;
    dVar41 = pTVar24->M[1][3];
    __return_storage_ptr__->M[1][2] = pTVar24->M[1][2];
    __return_storage_ptr__->M[1][3] = dVar41;
    dVar41 = pTVar24->M[2][1];
    __return_storage_ptr__->M[2][0] = pTVar24->M[2][0];
    __return_storage_ptr__->M[2][1] = dVar41;
    dVar41 = pTVar24->M[2][3];
    __return_storage_ptr__->M[2][2] = pTVar24->M[2][2];
    __return_storage_ptr__->M[2][3] = dVar41;
    dVar41 = pTVar24->M[3][1];
    __return_storage_ptr__->M[3][0] = pTVar24->M[3][0];
    __return_storage_ptr__->M[3][1] = dVar41;
    dVar41 = pTVar24->M[3][3];
    __return_storage_ptr__->M[3][2] = pTVar24->M[3][2];
    __return_storage_ptr__->M[3][3] = dVar41;
  }
LAB_143ebc18a:
  local_5b8 = *(double *)param_2;
  dStack_5b0 = *(double *)&param_2->field_0x8;
  dVar57 = (double)((this->CellIndex).field0_0x0._s_0.X + pTVar34->V[0].field0_0x0._s_0.X) *
           *(double *)&param_2->field_0x40 + local_5b8;
  dVar40 = __return_storage_ptr__->M[1][2];
  dVar49 = dStack_5b0 +
           (double)(pTVar34->V[0].field0_0x0._s_0.Y + (this->CellIndex).field0_0x0._s_0.Y) *
           *(double *)&param_2->field_0x48;
  dVar18 = __return_storage_ptr__->M[1][1];
  dVar48 = __return_storage_ptr__->M[0][1];
  dVar41 = (double)(pTVar34->V[0].field0_0x0._s_0.Z + (this->CellIndex).field0_0x0._s_0.Z) *
           *(double *)&param_2->field_0x50 + *(double *)&param_2->field_0x10;
  auVar44._8_4_ = SUB84(dVar57,0);
  auVar44._0_8_ = dVar57;
  auVar44._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
  dVar58 = __return_storage_ptr__->M[2][1];
  auVar51._8_4_ = SUB84(dVar41,0);
  auVar51._0_8_ = dVar41;
  auVar51._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  dVar17 = __return_storage_ptr__->M[3][1];
  dVar47 = __return_storage_ptr__->M[0][2];
  dVar56 = __return_storage_ptr__->M[2][2];
  dVar59 = __return_storage_ptr__->M[3][2];
  __return_storage_ptr__->M[3][0] =
       dVar42 - (dVar49 * __return_storage_ptr__->M[1][0] + dVar57 * __return_storage_ptr__->M[0][0]
                 + dVar41 * __return_storage_ptr__->M[2][0] + __return_storage_ptr__->M[3][0] * 0.0)
  ;
  __return_storage_ptr__->M[3][1] =
       dVar43 - (dVar49 * dVar18 + auVar44._8_8_ * dVar48 + auVar51._8_8_ * dVar58 + dVar17 * 0.0);
  __return_storage_ptr__->M[3][2] =
       dVar5 - (dVar40 * dVar49 + dVar47 * dVar57 + dVar56 * dVar41 + dVar59 * 0.0);
LAB_143ebcafd:
  `Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformationTransform'::__l2::
  <lambda_1>::operator()(&local_908,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// DeformedPosition @ 143ebcb90

TVector<double,3> * __thiscall
Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::DeformedPosition
          (FEmbeddingCoordinate *this,TVector<double,3> *__return_storage_ptr__,
          TArrayND<Chaos::TVector<double,3>,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  code *pcVar17;
  bool bVar18;
  longlong lVar19;
  TVector<double,3> *pTVar20;
  longlong lVar21;
  TVector<Chaos::TVector<int,3>,4> *pTVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  double dVar27;
  
  iVar15 = (this->CellIndex).field0_0x0._s_0.Y;
  iVar16 = (this->CellIndex).field0_0x0._s_0.Z;
  pTVar22 = EvenIndexTetrahedraOffsets;
  lVar19 = (longlong)this->LocalTetrahedron;
  lVar24 = lVar19 * 0x30;
  uVar26 = iVar16 + iVar15 + (this->CellIndex).field0_0x0._s_0.X & 1;
  if (uVar26 != 0) {
    pTVar22 = OddIndexTetrahedraOffsets;
  }
  uVar25 = ((pTVar22[lVar19].V[0].field0_0x0._s_0.X + (this->CellIndex).field0_0x0._s_0.X) *
            *(int *)&param_1->field_0x4 + pTVar22[lVar19].V[0].field0_0x0._s_0.Y + iVar15) *
           *(int *)&param_1->field_0x8 + pTVar22[lVar19].V[0].field0_0x0._s_0.Z + iVar16;
  uVar23 = 0;
  if ((int)uVar25 < *(int *)&param_1->field_0x18) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if (uVar23 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar17 = (code *)swi(3);
      pTVar20 = (TVector<double,3> *)(*pcVar17)();
      return pTVar20;
    }
  }
  dVar1 = *(double *)&this->BarycentricCoordinate;
  lVar21 = (longlong)(int)uVar25;
  lVar19 = *(longlong *)&param_1->field_0x10;
  dVar2 = *(double *)(lVar19 + lVar21 * 0x18);
  dVar3 = *(double *)(lVar19 + 8 + lVar21 * 0x18);
  dVar4 = *(double *)(lVar19 + 0x10 + lVar21 * 0x18);
  lVar19 = 0x154bb06fc;
  if (uVar26 != 0) {
    lVar19 = 0x154bb07ec;
  }
  uVar25 = (((this->CellIndex).field0_0x0._s_0.X + *(int *)(lVar19 + lVar24)) *
            *(int *)&param_1->field_0x4 + *(int *)(lVar19 + 4 + lVar24) +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           *(int *)(lVar19 + 8 + lVar24) + (this->CellIndex).field0_0x0._s_0.Z;
  uVar23 = 0;
  if ((int)uVar25 < *(int *)&param_1->field_0x18) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if (uVar23 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar17 = (code *)swi(3);
      pTVar20 = (TVector<double,3> *)(*pcVar17)();
      return pTVar20;
    }
  }
  dVar5 = *(double *)&(this->BarycentricCoordinate).field_0x8;
  lVar21 = (longlong)(int)uVar25;
  lVar19 = *(longlong *)&param_1->field_0x10;
  dVar6 = *(double *)(lVar19 + lVar21 * 0x18);
  dVar7 = *(double *)(lVar19 + 8 + lVar21 * 0x18);
  dVar8 = *(double *)(lVar19 + 0x10 + lVar21 * 0x18);
  lVar19 = 0x154bb0708;
  if (uVar26 != 0) {
    lVar19 = 0x154bb07f8;
  }
  uVar25 = (((this->CellIndex).field0_0x0._s_0.X + *(int *)(lVar19 + lVar24)) *
            *(int *)&param_1->field_0x4 + *(int *)(lVar19 + 4 + lVar24) +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           *(int *)(lVar19 + 8 + lVar24) + (this->CellIndex).field0_0x0._s_0.Z;
  uVar23 = 0;
  if ((int)uVar25 < *(int *)&param_1->field_0x18) {
    uVar23 = ~uVar25 >> 0x1f;
  }
  if (uVar23 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar17 = (code *)swi(3);
      pTVar20 = (TVector<double,3> *)(*pcVar17)();
      return pTVar20;
    }
  }
  dVar9 = *(double *)&(this->BarycentricCoordinate).field_0x10;
  lVar21 = (longlong)(int)uVar25;
  lVar19 = *(longlong *)&param_1->field_0x10;
  dVar10 = *(double *)(lVar19 + lVar21 * 0x18);
  dVar11 = *(double *)(lVar19 + 8 + lVar21 * 0x18);
  dVar12 = *(double *)(lVar19 + 0x10 + lVar21 * 0x18);
  lVar19 = 0x154bb0714;
  if (uVar26 != 0) {
    lVar19 = 0x154bb0804;
  }
  uVar23 = (this->CellIndex).field0_0x0._s_0.Z +
           ((*(int *)(lVar19 + lVar24) + (this->CellIndex).field0_0x0._s_0.X) *
            *(int *)&param_1->field_0x4 + *(int *)(lVar19 + 4 + lVar24) +
           (this->CellIndex).field0_0x0._s_0.Y) * *(int *)&param_1->field_0x8 +
           *(int *)(lVar19 + 8 + lVar24);
  uVar26 = 0;
  if ((int)uVar23 < *(int *)&param_1->field_0x18) {
    uVar26 = ~uVar23 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar18) {
      pcVar17 = (code *)swi(3);
      pTVar20 = (TVector<double,3> *)(*pcVar17)();
      return pTVar20;
    }
  }
  lVar24 = (longlong)(int)uVar23;
  lVar19 = *(longlong *)&param_1->field_0x10;
  dVar27 = ((__real_3ff0000000000000 - *(double *)&this->BarycentricCoordinate) -
           *(double *)&(this->BarycentricCoordinate).field_0x8) -
           *(double *)&(this->BarycentricCoordinate).field_0x10;
  dVar13 = *(double *)(lVar19 + 8 + lVar24 * 0x18);
  dVar14 = *(double *)(lVar19 + 0x10 + lVar24 * 0x18);
  *(double *)__return_storage_ptr__ =
       dVar27 * *(double *)(lVar19 + lVar24 * 0x18) + dVar9 * dVar10 + dVar5 * dVar6 + dVar1 * dVar2
  ;
  *(double *)&__return_storage_ptr__->field_0x8 =
       dVar27 * dVar13 + dVar9 * dVar11 + dVar5 * dVar7 + dVar1 * dVar3;
  *(double *)&__return_storage_ptr__->field_0x10 =
       dVar27 * dVar14 + dVar9 * dVar12 + dVar5 * dVar8 + dVar1 * dVar4;
  return __return_storage_ptr__;
}

// UndeformedPosition @ 143ed4ae0

TVector<double,3> * __thiscall
Chaos::FWeightedLatticeImplicitObject::FEmbeddingCoordinate::UndeformedPosition
          (FEmbeddingCoordinate *this,TVector<double,3> *__return_storage_ptr__,
          TUniformGrid<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<Chaos::TVector<int,3>,4> *pTVar14;
  
  iVar6 = (this->CellIndex).field0_0x0._s_0.Y;
  pTVar14 = EvenIndexTetrahedraOffsets;
  iVar7 = (this->CellIndex).field0_0x0._s_0.Z;
  iVar8 = (this->CellIndex).field0_0x0._s_0.X;
  dVar1 = *(double *)&param_1->field_0x40;
  dVar12 = *(double *)param_1;
  dVar13 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x48;
  dVar3 = *(double *)&this->BarycentricCoordinate;
  dVar4 = *(double *)&(this->BarycentricCoordinate).field_0x10;
  dVar5 = *(double *)&param_1->field_0x10;
  if ((iVar7 + iVar6 + iVar8 & 1U) != 0) {
    pTVar14 = OddIndexTetrahedraOffsets;
  }
  iVar9 = this->LocalTetrahedron;
  dVar11 = ((__real_3ff0000000000000 - dVar3) - *(double *)&(this->BarycentricCoordinate).field_0x8)
           - dVar4;
  iVar10 = pTVar14[iVar9].V[3].field0_0x0._s_0.Y;
  *(double *)__return_storage_ptr__ =
       ((double)(pTVar14[iVar9].V[1].field0_0x0._s_0.X + iVar8) * dVar1 + dVar12) *
       *(double *)&(this->BarycentricCoordinate).field_0x8 +
       ((double)(pTVar14[iVar9].V[0].field0_0x0._s_0.X + iVar8) * dVar1 + dVar12) * dVar3 +
       ((double)(pTVar14[iVar9].V[3].field0_0x0._s_0.X + iVar8) * dVar1 + dVar12) * dVar11 +
       ((double)(pTVar14[iVar9].V[2].field0_0x0._s_0.X + iVar8) * dVar1 + dVar12) * dVar4;
  dVar1 = *(double *)&param_1->field_0x50;
  iVar8 = pTVar14[iVar9].V[3].field0_0x0._s_0.Z;
  *(double *)&__return_storage_ptr__->field_0x8 =
       ((double)(iVar10 + iVar6) * dVar2 + dVar13) * dVar11 +
       ((double)(pTVar14[iVar9].V[2].field0_0x0._s_0.Y + iVar6) * dVar2 + dVar13) * dVar4 +
       ((double)(pTVar14[iVar9].V[0].field0_0x0._s_0.Y + iVar6) * dVar2 + dVar13) * dVar3 +
       ((double)(pTVar14[iVar9].V[1].field0_0x0._s_0.Y + iVar6) * dVar2 + dVar13) *
       *(double *)&(this->BarycentricCoordinate).field_0x8;
  *(double *)&__return_storage_ptr__->field_0x10 =
       ((double)(iVar8 + iVar7) * dVar1 + dVar5) * dVar11 +
       ((double)(pTVar14[iVar9].V[2].field0_0x0._s_0.Z + iVar7) * dVar1 + dVar5) * dVar4 +
       ((double)(pTVar14[iVar9].V[0].field0_0x0._s_0.Z + iVar7) * dVar1 + dVar5) * dVar3 +
       ((double)(pTVar14[iVar9].V[1].field0_0x0._s_0.Z + iVar7) * dVar1 + dVar5) *
       *(double *)&(this->BarycentricCoordinate).field_0x8;
  return __return_storage_ptr__;
}

