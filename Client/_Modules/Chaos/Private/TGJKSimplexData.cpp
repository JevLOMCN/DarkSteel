// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// Restore2 @ 1438d0770

void __thiscall
Chaos::TGJKSimplexData<double>::Restore2
          (TGJKSimplexData<double> *this,TRigidTransform<double,3> *param_1,int *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4,double *param_5,double param_6)

{
  int *piVar1;
  double dVar2;
  undefined1 auVar3 [12];
  double dVar4;
  int iVar5;
  TVector<double,3> *pTVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double local_98;
  double local_90;
  double local_88;
  
  iVar5 = 0;
  *param_2 = 0;
  piVar1 = &this->NumVerts;
  if (0 < *piVar1) {
    pTVar6 = this->Bs;
    do {
      auVar12 = *(undefined1 (*) [16])&param_1->field_0x10;
      dVar10 = auVar12._0_8_;
      iVar5 = iVar5 + 1;
      auVar9 = *(undefined1 (*) [16])pTVar6;
      dVar7 = *(double *)&pTVar6->field_0x10;
      auVar8 = *(undefined1 (*) [16])param_1;
      auVar14 = *(undefined1 (*) [16])param_1;
      dVar4 = *(double *)&param_1->field_0x18;
      auVar13 = blendpd(auVar8,auVar12,2);
      dVar25 = auVar9._8_8_;
      auVar23._0_8_ = dVar25 * auVar8._0_8_ - auVar8._8_8_ * auVar9._0_8_;
      auVar23._8_8_ = dVar7 * auVar8._8_8_ - dVar10 * dVar25;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar7;
      auVar8 = blendpd(auVar9,auVar8,2);
      auVar16._0_8_ = auVar8._0_8_ * dVar10 - auVar13._0_8_ * dVar7;
      auVar16._8_8_ = auVar8._8_8_ * auVar12._8_8_ - auVar13._8_8_ * 0.0;
      auVar8 = blendpd(auVar23,auVar16,2);
      dVar19 = auVar23._8_8_ + auVar23._8_8_;
      dVar21 = auVar16._0_8_ + auVar16._0_8_;
      auVar24._0_8_ = auVar8._0_8_ + auVar8._0_8_;
      auVar24._8_8_ = auVar8._8_8_ + auVar8._8_8_;
      auVar17._8_4_ = SUB84(dVar21,0);
      auVar17._0_8_ = dVar19;
      uVar22 = (undefined4)((ulonglong)dVar21 >> 0x20);
      auVar17._12_4_ = uVar22;
      auVar13._8_4_ = SUB84(dVar21,0);
      auVar13._0_8_ = dVar19;
      auVar13._12_4_ = uVar22;
      auVar8 = blendpd(auVar13,auVar24,2);
      auVar16 = blendpd(auVar14,auVar12,2);
      dVar2 = *(double *)&((TGJKSimplexData<double> *)(pTVar6 + -4))->As[0].field_0x8;
      auVar18._0_8_ = auVar17._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar19;
      auVar18._8_8_ = auVar24._0_8_ * auVar14._8_8_ - dVar10 * dVar21;
      auVar14._0_8_ = auVar8._0_8_ * dVar10 - auVar16._0_8_ * auVar24._0_8_;
      auVar14._8_8_ = auVar8._8_8_ * auVar12._8_8_ - auVar16._8_8_ * auVar24._8_8_;
      auVar12._8_4_ = SUB84(auVar18._8_8_,0);
      auVar12._0_8_ = auVar18._0_8_;
      auVar12._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
      auVar8 = blendpd(auVar18,auVar14,2);
      dVar20 = dVar19 * dVar4 + auVar9._0_8_ + auVar12._8_8_ + *(double *)&param_1->field_0x20;
      dVar19 = dVar21 * dVar4 + dVar25 + auVar14._0_8_ + *(double *)&param_1->field_0x28;
      dVar10 = *(double *)&((TGJKSimplexData<double> *)(pTVar6 + -4))->As[0].field_0x10;
      auVar3._4_8_ = auVar14._0_8_;
      auVar3._0_4_ = (int)((ulonglong)dVar20 >> 0x20);
      auVar9._0_8_ = auVar3._0_8_ << 0x20;
      auVar9._8_4_ = SUB84(dVar19,0);
      auVar9._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      dVar19 = *(double *)&param_1->field_0x30;
      *(double *)((longlong)pTVar6 + (longlong)param_3 + (-0x60 - (longlong)this)) =
           *(double *)((TGJKSimplexData<double> *)(pTVar6 + -4))->As - dVar20;
      *(double *)((longlong)pTVar6 + (longlong)param_3 + (-0x58 - (longlong)this)) =
           dVar2 - auVar9._8_8_;
      *(double *)((longlong)pTVar6 + (longlong)param_3 + (-0x50 - (longlong)this)) =
           dVar10 - (auVar24._0_8_ * dVar4 + dVar7 + auVar8._0_8_ + dVar19);
      pTVar6 = pTVar6 + 1;
    } while (iVar5 < *piVar1);
    SimplexFindClosestToOrigin2<double>
              ((TVector<double,3> *)&local_98,param_3,piVar1,this->Barycentric,this->As,this->Bs);
    dVar7 = __real_3ff0000000000000;
    auVar11._0_8_ = local_88 * local_88;
    auVar11._8_8_ = 0;
    auVar15._0_8_ = local_90 * local_90 + local_98 * local_98 + auVar11._0_8_;
    auVar15._8_8_ = 0;
    if (param_6 * param_6 < auVar15._0_8_) {
      auVar12 = sqrtpd(auVar11,auVar15);
      *param_2 = this->NumVerts;
      dVar7 = dVar7 / auVar12._0_8_;
      *(double *)param_4 = dVar7 * local_98;
      *(double *)&param_4->field_0x8 = local_90 * dVar7;
      *(double *)&param_4->field_0x10 = local_88 * dVar7;
      *param_5 = auVar12._0_8_;
    }
  }
  return;
}

// Restore @ 1438d09d0

void __thiscall
Chaos::TGJKSimplexData<double>::Restore
          (TGJKSimplexData<double> *this,TRigidTransform<double,3> *param_1,FSimplex *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4,double *param_5,double param_6)

{
  double dVar1;
  undefined1 auVar2 [12];
  FSimplex *pFVar3;
  double dVar4;
  TVector<double,3> *pTVar5;
  int iVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined4 uVar21;
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double local_98;
  double local_90;
  double local_88;
  
  if (0 < this->NumVerts) {
    param_2->NumVerts = this->NumVerts;
    iVar6 = 0;
    pTVar5 = this->Bs;
    pFVar3 = param_2;
    if (0 < this->NumVerts) {
      do {
        pFVar3->Idxs[0] = iVar6;
        iVar6 = iVar6 + 1;
        auVar19 = *(undefined1 (*) [16])&param_1->field_0x10;
        auVar9 = *(undefined1 (*) [16])pTVar5;
        dVar17 = *(double *)&pTVar5->field_0x10;
        auVar8 = *(undefined1 (*) [16])param_1;
        auVar11 = *(undefined1 (*) [16])param_1;
        dVar4 = *(double *)&param_1->field_0x18;
        auVar10 = blendpd(auVar8,auVar19,2);
        dVar24 = auVar9._8_8_;
        dVar1 = auVar19._0_8_;
        auVar22._0_8_ = dVar24 * auVar8._0_8_ - auVar8._8_8_ * auVar9._0_8_;
        auVar22._8_8_ = dVar17 * auVar8._8_8_ - dVar1 * dVar24;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = dVar17;
        auVar8 = blendpd(auVar9,auVar8,2);
        auVar18._8_4_ = SUB84(auVar22._8_8_,0);
        auVar18._0_8_ = auVar22._0_8_;
        auVar18._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
        auVar13._0_8_ = auVar8._0_8_ * dVar1 - auVar10._0_8_ * dVar17;
        auVar13._8_8_ = auVar8._8_8_ * auVar19._8_8_ - auVar10._8_8_ * 0.0;
        auVar8 = blendpd(auVar22,auVar13,2);
        dVar16 = auVar18._8_8_ + auVar18._8_8_;
        dVar20 = auVar13._0_8_ + auVar13._0_8_;
        auVar23._0_8_ = auVar8._0_8_ + auVar8._0_8_;
        auVar23._8_8_ = auVar8._8_8_ + auVar8._8_8_;
        auVar14._8_4_ = SUB84(dVar20,0);
        auVar14._0_8_ = dVar16;
        uVar21 = (undefined4)((ulonglong)dVar20 >> 0x20);
        auVar14._12_4_ = uVar21;
        auVar10._8_4_ = SUB84(dVar20,0);
        auVar10._0_8_ = dVar16;
        auVar10._12_4_ = uVar21;
        auVar8 = blendpd(auVar10,auVar23,2);
        auVar13 = blendpd(auVar11,auVar19,2);
        dVar7 = *(double *)&((TGJKSimplexData<double> *)(pTVar5 + -4))->As[0].field_0x8;
        auVar15._0_8_ = auVar14._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar16;
        auVar15._8_8_ = auVar23._0_8_ * auVar11._8_8_ - dVar1 * dVar20;
        auVar11._0_8_ = auVar8._0_8_ * dVar1 - auVar13._0_8_ * auVar23._0_8_;
        auVar11._8_8_ = auVar8._8_8_ * auVar19._8_8_ - auVar13._8_8_ * auVar23._8_8_;
        auVar19._8_4_ = SUB84(auVar15._8_8_,0);
        auVar19._0_8_ = auVar15._0_8_;
        auVar19._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
        auVar8 = blendpd(auVar15,auVar11,2);
        in_XMM5._0_8_ =
             dVar16 * dVar4 + auVar9._0_8_ + auVar19._8_8_ + *(double *)&param_1->field_0x20;
        in_XMM5._8_8_ = dVar20 * dVar4 + dVar24 + auVar11._0_8_ + *(double *)&param_1->field_0x28;
        dVar1 = *(double *)&((TGJKSimplexData<double> *)(pTVar5 + -4))->As[0].field_0x10;
        auVar2._4_8_ = auVar11._0_8_;
        auVar2._0_4_ = (int)((ulonglong)in_XMM5._0_8_ >> 0x20);
        auVar9._0_8_ = auVar2._0_8_ << 0x20;
        auVar9._8_4_ = SUB84(in_XMM5._8_8_,0);
        auVar9._12_4_ = (int)((ulonglong)in_XMM5._8_8_ >> 0x20);
        dVar16 = *(double *)&param_1->field_0x30;
        *(double *)((longlong)pTVar5 + (longlong)param_3 + (-0x60 - (longlong)this)) =
             *(double *)((TGJKSimplexData<double> *)(pTVar5 + -4))->As - in_XMM5._0_8_;
        *(double *)((longlong)pTVar5 + (longlong)param_3 + (-0x58 - (longlong)this)) =
             dVar7 - auVar9._8_8_;
        *(double *)((longlong)pTVar5 + (longlong)param_3 + (-0x50 - (longlong)this)) =
             dVar1 - (auVar23._0_8_ * dVar4 + dVar17 + auVar8._0_8_ + dVar16);
        pTVar5 = pTVar5 + 1;
        pFVar3 = (FSimplex *)pFVar3->Idxs;
      } while (iVar6 < this->NumVerts);
    }
    SimplexFindClosestToOrigin<double>
              ((TVector<double,3> *)&local_98,param_3,param_2,this->Barycentric,this->As,this->Bs);
    auVar12._0_8_ = local_90 * local_90 + local_98 * local_98 + local_88 * local_88;
    auVar12._8_8_ = 0;
    auVar19 = sqrtpd(in_XMM5,auVar12);
    dVar17 = auVar19._0_8_;
    if (param_6 < dVar17) {
      dVar7 = __real_3ff0000000000000 / dVar17;
      *(double *)param_4 = dVar7 * local_98;
      *(double *)&param_4->field_0x8 = local_90 * dVar7;
      *(double *)&param_4->field_0x10 = local_88 * dVar7;
      *param_5 = dVar17;
      return;
    }
    param_2->NumVerts = 0;
  }
  return;
}

