// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCore
// Functions: 1

// FindClosestIntersection @ 1436280c0

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TCorePlane<double,3>::FindClosestIntersection
          (TCorePlane<double,3> *this,Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,
          TVector<double,3> *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double *pdVar10;
  double dVar11;
  undefined1 unaff_XMM15 [16];
  undefined1 auVar12 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  
  dVar1 = *(double *)&param_1->field_0x10;
  dVar7 = *(double *)&param_2->field_0x10 - dVar1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_2->field_0x8 - dVar2;
  dVar3 = *(double *)param_1;
  dVar5 = *(double *)param_2 - dVar3;
  dVar11 = dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar11;
  auVar12 = sqrtpd(unaff_XMM15,auVar12);
  uVar4 = dVar7;
  uVar8 = dVar6;
  uVar9 = dVar5;
  if ((dVar11 != __real_3ff0000000000000) &&
     (uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar11)) {
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    uVar4 = dVar7 * dVar11;
    uVar8 = dVar6 * dVar11;
    uVar9 = dVar5 * dVar11;
  }
  local_d0 = *(double *)&(this->MX).field_0x8;
  local_c0 = *(double *)&this->MNormal * param_3 + *(double *)&this->MX;
  local_b0 = *(double *)&(this->MNormal).field_0x10 * param_3 + *(double *)&(this->MX).field_0x10;
  dStack_b8 = *(double *)&(this->MNormal).field_0x8 * param_3 + local_d0;
  local_c0 = local_c0 - dVar3;
  dStack_b8 = dStack_b8 - dVar2;
  local_c8 = *(double *)&(this->MX).field_0x10 - *(double *)&(this->MNormal).field_0x10 * param_3;
  local_b0 = local_b0 - dVar1;
  local_d0 = local_d0 - *(double *)&(this->MNormal).field_0x8 * param_3;
  local_c8 = local_c8 - dVar1;
  local_d0 = local_d0 - dVar2;
  local_d8 = *(double *)&this->MX - *(double *)&this->MNormal * param_3;
  local_d8 = local_d8 - dVar3;
  pdVar10 = &local_d8;
  if (SQRT(dStack_b8 * dStack_b8 + local_c0 * local_c0 + local_b0 * local_b0) <=
      SQRT(local_d8 * local_d8 + local_d0 * local_d0 + local_c8 * local_c8)) {
    pdVar10 = &local_c0;
  }
  dVar5 = *(double *)&this->MNormal * (double)uVar9 +
          *(double *)&(this->MNormal).field_0x8 * (double)uVar8 +
          *(double *)&(this->MNormal).field_0x10 * (double)uVar4;
  dVar11 = (pdVar10[1] - dVar2) * *(double *)&(this->MNormal).field_0x8 +
           (*pdVar10 - dVar3) * *(double *)&this->MNormal +
           (pdVar10[2] - dVar1) * *(double *)&(this->MNormal).field_0x10;
  if (dVar5 == 0.0) {
    if (dVar11 == 0.0) {
      uVar8 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)&param_2->field_0x8;
      __return_storage_ptr__->Second = true;
      uVar4 = *(undefined8 *)&param_2->field_0x10;
      *(undefined8 *)&__return_storage_ptr__->First = uVar8;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = uVar9;
      *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = uVar4;
      return __return_storage_ptr__;
    }
  }
  else {
    dVar11 = dVar11 / dVar5;
    if ((0.0 <= dVar11) && (dVar11 <= auVar12._0_8_)) {
      *(double *)&__return_storage_ptr__->First = (double)uVar9 * dVar11 + dVar3;
      *(double *)&(__return_storage_ptr__->First).field_0x8 = (double)uVar8 * dVar11 + dVar2;
      *(double *)&(__return_storage_ptr__->First).field_0x10 = (double)uVar4 * dVar11 + dVar1;
      __return_storage_ptr__->Second = true;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->First = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->First).field_0x10 = 0;
  __return_storage_ptr__->Second = false;
  return __return_storage_ptr__;
}

