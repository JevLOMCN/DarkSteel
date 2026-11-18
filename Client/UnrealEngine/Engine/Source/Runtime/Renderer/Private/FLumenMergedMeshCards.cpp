// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// AddInstance @ 144c273b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLumenMergedMeshCards::AddInstance
          (FLumenMergedMeshCards *this,TBox<double> *param_1,TMatrix<double> *param_2,
          FMeshCardsBuildData *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
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
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  TBox<double> *pTVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_158 [32];
  TVector<float>_u_0 local_138;
  undefined1 local_128 [8];
  TBox<double> local_120;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_158;
  pTVar22 = UE::Math::TBox<double>::TransformBy(param_1,&local_120,param_2);
  if ((this->MergedBounds).IsValid == '\0') {
    if (pTVar22->IsValid != '\0') {
      dVar1 = (pTVar22->Min).field0_0x0._s_0.Y;
      (this->MergedBounds).Min.field0_0x0._s_0.X = (pTVar22->Min).field0_0x0._s_0.X;
      (this->MergedBounds).Min.field0_0x0._s_0.Y = dVar1;
      dVar1 = (pTVar22->Max).field0_0x0._s_0.X;
      (this->MergedBounds).Min.field0_0x0._s_0.Z = (pTVar22->Min).field0_0x0._s_0.Z;
      (this->MergedBounds).Max.field0_0x0._s_0.X = dVar1;
      dVar1 = (pTVar22->Max).field0_0x0._s_0.Z;
      (this->MergedBounds).Max.field0_0x0._s_0.Y = (pTVar22->Max).field0_0x0._s_0.Y;
      (this->MergedBounds).Max.field0_0x0._s_0.Z = dVar1;
      uVar15 = pTVar22->Pad[0];
      uVar16 = pTVar22->Pad[1];
      uVar17 = pTVar22->Pad[2];
      uVar18 = pTVar22->Pad[3];
      uVar19 = pTVar22->Pad[4];
      uVar20 = pTVar22->Pad[5];
      uVar21 = pTVar22->Pad[6];
      (this->MergedBounds).IsValid = pTVar22->IsValid;
      (this->MergedBounds).Pad[0] = uVar15;
      (this->MergedBounds).Pad[1] = uVar16;
      (this->MergedBounds).Pad[2] = uVar17;
      (this->MergedBounds).Pad[3] = uVar18;
      (this->MergedBounds).Pad[4] = uVar19;
      (this->MergedBounds).Pad[5] = uVar20;
      (this->MergedBounds).Pad[6] = uVar21;
    }
  }
  else if (pTVar22->IsValid != '\0') {
    dVar1 = *(double *)&(this->MergedBounds).Min.field0_0x0;
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(pTVar22->Min).field0_0x0;
    if (dVar2 <= dVar1) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar26,uVar25);
    dVar1 = *(double *)((longlong)&(pTVar22->Min).field0_0x0 + 8);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->MergedBounds).Min.field0_0x0 + 8);
    if (dVar2 <= dVar1) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar26,uVar25);
    dVar1 = *(double *)((longlong)&(pTVar22->Min).field0_0x0 + 0x10);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->MergedBounds).Min.field0_0x0 + 0x10);
    if (dVar2 <= dVar1) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar25);
    dVar1 = *(double *)&(pTVar22->Max).field0_0x0;
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(this->MergedBounds).Max.field0_0x0;
    if (dVar1 <= dVar2) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar26,uVar25);
    dVar1 = *(double *)((longlong)&(pTVar22->Max).field0_0x0 + 8);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->MergedBounds).Max.field0_0x0 + 8);
    if (dVar1 <= dVar2) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar26,uVar25);
    dVar1 = *(double *)((longlong)&(pTVar22->Max).field0_0x0 + 0x10);
    uVar25 = SUB84(dVar1,0);
    uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->MergedBounds).Max.field0_0x0 + 0x10);
    if (dVar1 <= dVar2) {
      uVar25 = SUB84(dVar2,0);
      uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->MergedBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar26,uVar25);
  }
  iVar3 = (param_3->CardBuildData).ArrayNum;
  pFVar24 = (param_3->CardBuildData).AllocatorInstance.Data;
  pFVar23 = pFVar24 + (longlong)iVar3 * 0x40;
  while( true ) {
    if ((param_3->CardBuildData).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FLumenCardBuildData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_128);
    }
    if (pFVar24 == pFVar23) break;
    dVar1 = (double)(float)*(undefined8 *)(pFVar24 + 0xc);
    dVar30 = (double)(float)((ulonglong)*(undefined8 *)(pFVar24 + 0xc) >> 0x20);
    dVar5 = param_2->M[1][2];
    dVar6 = param_2->M[2][2];
    dVar7 = param_2->M[3][0];
    dVar8 = param_2->M[3][1];
    dVar9 = param_2->M[0][0];
    dVar10 = param_2->M[0][1];
    dVar11 = param_2->M[1][0];
    dVar12 = param_2->M[1][1];
    dVar13 = param_2->M[2][0];
    dVar14 = param_2->M[2][1];
    dVar28 = (double)*(float *)(pFVar24 + 0x14);
    fVar35 = (float)(dVar30 * dVar5 + dVar1 * param_2->M[0][2] + dVar28 * dVar6 +
                    param_2->M[3][2] * 0.0);
    dVar2 = (double)(float)*(undefined8 *)(pFVar24 + 0x18);
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)(pFVar24 + 0x18) >> 0x20);
    dVar29 = (double)*(float *)(pFVar24 + 0x20);
    fVar36 = (float)(dVar30 * dVar11 + dVar1 * dVar9 + dVar28 * dVar13 + dVar7 * 0.0);
    fVar37 = (float)(dVar30 * dVar12 + dVar1 * dVar10 + dVar28 * dVar14 + dVar8 * 0.0);
    fVar33 = (float)(dVar4 * dVar11 + dVar2 * dVar9 + dVar29 * dVar13 + dVar7 * 0.0);
    fVar34 = (float)(dVar4 * dVar12 + dVar2 * dVar10 + dVar29 * dVar14 + dVar8 * 0.0);
    dVar30 = (double)*(float *)(pFVar24 + 0x2c);
    fVar32 = (float)(dVar4 * dVar5 + dVar2 * param_2->M[0][2] + dVar29 * dVar6 +
                    param_2->M[3][2] * 0.0);
    dVar1 = (double)(float)*(undefined8 *)(pFVar24 + 0x24);
    dVar2 = (double)(float)((ulonglong)*(undefined8 *)(pFVar24 + 0x24) >> 0x20);
    fVar27 = (float)(dVar2 * dVar11 + dVar1 * dVar9 + dVar30 * dVar13 + param_2->M[3][0] * 0.0);
    fVar31 = (float)(dVar2 * dVar12 + dVar1 * dVar10 + dVar30 * dVar14 + param_2->M[3][1] * 0.0);
    fVar34 = SQRT((fVar34 * fVar34 + fVar33 * fVar33 + fVar32 * fVar32) *
                  (fVar37 * fVar37 + fVar36 * fVar36 + fVar35 * fVar35)) *
             *(float *)(pFVar24 + 0x34) * *(float *)(pFVar24 + 0x30);
    fVar32 = (float)(dVar2 * param_2->M[1][2] + dVar1 * param_2->M[0][2] + dVar30 * param_2->M[2][2]
                    + param_2->M[3][2] * 0.0);
    fVar33 = __real_3f800000 / SQRT(fVar31 * fVar31 + fVar27 * fVar27 + fVar32 * fVar32);
    fVar27 = fVar33 * fVar27;
    fVar31 = fVar33 * fVar31;
    fVar33 = fVar33 * fVar32;
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,0);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[0] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[0];
    }
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,1);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[1] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[1];
    }
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,2);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[2] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[2];
    }
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,3);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[3] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[3];
    }
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,4);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[4] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[4];
    }
    MeshCardRepresentation::GetAxisAlignedDirection((TVector<float> *)&local_138._s_0,5);
    fVar32 = fVar31 * local_138._s_0.Y + fVar27 * local_138._s_0.X + fVar33 * local_138._s_0.Z;
    if (0.0 < fVar32) {
      this->InstanceCardAreaPerDirection[5] =
           fVar32 * fVar34 + this->InstanceCardAreaPerDirection[5];
    }
    pFVar24 = pFVar24 + 0x40;
  }
  return;
}

