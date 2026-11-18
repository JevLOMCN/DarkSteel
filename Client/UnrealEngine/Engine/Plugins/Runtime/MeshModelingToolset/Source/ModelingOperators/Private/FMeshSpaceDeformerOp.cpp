// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// CalculateResult @ 14c966820

void __thiscall
UE::Geometry::FMeshSpaceDeformerOp::CalculateResult
          (FMeshSpaceDeformerOp *this,FProgressCancel *param_1)

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
  code *pcVar15;
  longlong *plVar16;
  FDynamicMesh3 *pFVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  undefined8 uVar25;
  TMatrix<double> *pTVar26;
  double *pdVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  FMeshSpaceDeformerOp *pFVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  double dVar36;
  double local_238 [8];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double dStack_1c0;
  TTransform<double> local_198;
  TMatrix<double> local_138 [2];
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar15 = *(code **)&param_1->CancelF;
    plVar16 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar28 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar16 != (longlong *)0x0) {
      plVar28 = plVar16;
    }
    uVar25 = (**(code **)(*plVar28 + 8))();
    bVar24 = (bool)(*pcVar15)(uVar25);
    param_1->WasCancelled = bVar24;
    if (bVar24 != false) {
      return;
    }
  }
  pFVar17 = (this->OriginalMesh).Object;
  if ((pFVar17 != (FDynamicMesh3 *)0x0) &&
     ((FDynamicMesh3::Copy((FDynamicMesh3 *)this->_padding_,pFVar17,true,true,true,true),
      param_1 == (FProgressCancel *)0x0 || (bVar24 = FProgressCancel::Cancelled(param_1), !bVar24)))
     ) {
    dVar1 = (this->GizmoFrame).Rotation.field0_0x0._s_0.X;
    dVar2 = (this->GizmoFrame).Rotation.field0_0x0._s_0.Z;
    lVar32 = 0;
    dVar3 = (this->GizmoFrame).Rotation.field0_0x0._s_0.W;
    dVar18 = dVar2 + dVar2;
    local_238[0] = 0.0;
    local_238[1] = 0.0;
    local_238[2] = 0.0;
    local_238[4] = 0.0;
    local_238[5] = 0.0;
    local_238[6] = 0.0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    dVar4 = (this->GizmoFrame).Rotation.field0_0x0._s_0.Y;
    dVar20 = dVar4 + dVar4;
    dVar35 = dVar3 * (dVar1 + dVar1);
    dVar36 = (dVar1 + dVar1) * dVar1;
    dVar23 = __real_3ff0000000000000 - (dVar18 * dVar2 + dVar20 * dVar4);
    dVar21 = dVar20 * dVar1 + dVar3 * dVar18;
    dVar22 = __real_3ff0000000000000 - (dVar18 * dVar2 + dVar36);
    dVar19 = dVar18 * dVar4 + dVar35;
    dVar35 = dVar18 * dVar4 - dVar35;
    dVar2 = dVar18 * dVar1 - dVar3 * dVar20;
    dVar36 = __real_3ff0000000000000 - (dVar20 * dVar4 + dVar36);
    dVar4 = dVar20 * dVar1 - dVar3 * dVar18;
    dVar1 = dVar18 * dVar1 + dVar3 * dVar20;
    lVar30 = lVar32;
    do {
      while( true ) {
        while (lVar30 == 0) {
          local_238[0] = dVar23;
          local_238[1] = dVar21;
          local_238[2] = dVar2;
          lVar30 = 1;
        }
        if (lVar30 != 1) break;
        lVar30 = 2;
        local_238[4] = dVar4;
        local_238[5] = dVar22;
        local_238[6] = dVar19;
      }
      lVar29 = lVar30 + 1;
      local_238[lVar30 * 4] = dVar1;
      local_238[lVar30 * 4 + 1] = dVar35;
      local_238[lVar30 * 4 + 2] = dVar36;
      lVar30 = lVar29;
    } while (lVar29 < 3);
    dVar3 = (this->GizmoFrame).Origin.field0_0x0._s_0.X;
    dVar18 = (this->GizmoFrame).Origin.field0_0x0._s_0.Y;
    dVar20 = (this->GizmoFrame).Origin.field0_0x0._s_0.Z;
    local_198.Rotation.ZW.m128d_f64[0]._0_4_ = (undefined4)this->_padding_;
    local_198.Rotation.ZW.m128d_f64[0]._4_4_ = *(undefined4 *)((longlong)&this->_padding_ + 4);
    local_198.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)this->_padding_;
    local_198.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)this->_padding_ >> 0x20);
    local_198.Scale3D.ZW.m128d_f64[0] = (double)this->_padding_;
    dVar2 = dVar21 * dVar18 + dVar23 * dVar3 + dVar2 * dVar20;
    uVar33 = (uint)__xmm_80000000000000008000000000000000;
    uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_198.Translation.XY.m128d_f64[0] = (double)this->_padding_;
    local_198.Translation.XY.m128d_f64[1] = (double)this->_padding_;
    dVar1 = dVar35 * dVar18 + dVar1 * dVar3 + dVar36 * dVar20;
    dStack_1c0 = __real_3ff0000000000000;
    local_198.Scale3D.XY.m128d_f64[0] = (double)this->_padding_;
    local_198.Scale3D.XY.m128d_f64[1] = (double)this->_padding_;
    dVar3 = dVar22 * dVar18 + dVar4 * dVar3 + dVar19 * dVar20;
    local_238[3] = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar34,
                                    SUB84(dVar2,0) ^ uVar33);
    uStack_1e0 = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar34,SUB84(dVar1,0) ^ uVar33);
    local_198.Rotation.XY.m128d_f64[0] = (double)this->_padding_;
    local_198.Rotation.XY.m128d_f64[1] = (double)this->_padding_;
    local_238[7] = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar34,
                                    SUB84(dVar3,0) ^ uVar33);
    local_198.Translation.ZW.m128d_f64[0] = (double)this->_padding_;
    local_198.Translation.ZW.m128d_f64[1] = 0.0;
    local_198.Scale3D.ZW.m128d_f64[1] = 0.0;
    pTVar26 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_198,local_138);
    dVar1 = pTVar26->M[1][2];
    dVar2 = pTVar26->M[0][2];
    dVar3 = pTVar26->M[0][0];
    dVar4 = pTVar26->M[1][0];
    dVar18 = pTVar26->M[2][0];
    dVar19 = pTVar26->M[3][0];
    dVar36 = pTVar26->M[0][1];
    dVar20 = pTVar26->M[1][1];
    dVar35 = pTVar26->M[2][1];
    dVar21 = pTVar26->M[3][1];
    dVar22 = pTVar26->M[2][2];
    dVar23 = pTVar26->M[3][2];
    dVar5 = pTVar26->M[0][3];
    dVar6 = pTVar26->M[1][3];
    dVar7 = pTVar26->M[2][3];
    dVar8 = pTVar26->M[3][3];
    (this->ObjectToGizmo).M[0][0] = 0.0;
    (this->ObjectToGizmo).M[0][1] = 0.0;
    lVar30 = 4;
    (this->ObjectToGizmo).M[0][2] = 0.0;
    (this->ObjectToGizmo).M[0][3] = 0.0;
    (this->ObjectToGizmo).M[1][0] = 0.0;
    (this->ObjectToGizmo).M[1][1] = 0.0;
    (this->ObjectToGizmo).M[1][2] = 0.0;
    (this->ObjectToGizmo).M[1][3] = 0.0;
    (this->ObjectToGizmo).M[2][0] = 0.0;
    (this->ObjectToGizmo).M[2][1] = 0.0;
    (this->ObjectToGizmo).M[2][2] = 0.0;
    (this->ObjectToGizmo).M[2][3] = 0.0;
    (this->ObjectToGizmo).M[3][0] = 0.0;
    (this->ObjectToGizmo).M[3][1] = 0.0;
    (this->ObjectToGizmo).M[3][2] = 0.0;
    (this->ObjectToGizmo).M[3][3] = 0.0;
    pFVar31 = this;
    do {
      pdVar27 = (double *)((longlong)local_238 + lVar32);
      dVar9 = *pdVar27;
      dVar10 = *(double *)((longlong)local_238 + lVar32 + 8);
      dVar11 = *(double *)((longlong)local_238 + lVar32 + 0x10);
      dVar12 = *(double *)((longlong)local_238 + lVar32 + 0x18);
      dVar13 = (pFVar31->ObjectToGizmo).M[0][1];
      pFVar31 = (FMeshSpaceDeformerOp *)&pFVar31->_padding_;
      *(double *)((longlong)this + (0xe0 - (longlong)local_238) + (longlong)pdVar27) =
           dVar3 * dVar9 +
           *(double *)((longlong)this + (0xe0 - (longlong)local_238) + (longlong)pdVar27) +
           dVar10 * dVar36 + dVar12 * dVar5 + dVar11 * dVar2;
      dVar14 = *(double *)((longlong)(this->ObjectToGizmo).M[0] + lVar32 + 0x10);
      *(double *)((longlong)(this->ObjectToGizmo).M[0] + lVar32 + 8) =
           dVar4 * dVar9 + dVar13 + dVar10 * dVar20 + dVar12 * dVar6 + dVar11 * dVar1;
      *(double *)((longlong)(this->ObjectToGizmo).M[0] + lVar32 + 0x10) =
           dVar18 * dVar9 + dVar14 + dVar10 * dVar35 + dVar7 * dVar12 + dVar11 * dVar22;
      *(double *)((longlong)(this->ObjectToGizmo).M[0] + lVar32 + 0x18) =
           dVar19 * dVar9 + *(double *)((longlong)(this->ObjectToGizmo).M[0] + lVar32 + 0x18) +
           dVar10 * dVar21 + dVar8 * dVar12 + dVar11 * dVar23;
      lVar32 = lVar32 + 0x20;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  return;
}

// SetTransform @ 14c985830

void __thiscall
UE::Geometry::FMeshSpaceDeformerOp::SetTransform
          (FMeshSpaceDeformerOp *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

