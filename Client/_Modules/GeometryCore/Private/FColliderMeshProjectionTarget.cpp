// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// Project @ 143514680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
UE::Geometry::FColliderMeshProjectionTarget::Project
          (FColliderMeshProjectionTarget *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,int param_3)

{
  FColliderMesh *pFVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [8];
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  undefined1 auStack_120 [24];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double *pdStack_98;
  undefined8 local_90;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_138._s_0.X = __real_7fefffffffffffff;
  pFVar1 = this->ColliderMesh;
  local_138._s_0.Z = 0.0;
  local_108._s_0.Y = 0.0;
  local_108._16_1_ = 0;
  if ((-1 < (pFVar1->AABBTree).RootIndex) && ((pFVar1->AABBTree).MeshChangeStamp == 0)) {
    iVar4 = (**(code **)((pFVar1->AABBTree)._padding_ + 0x20))
                      (&pFVar1->AABBTree,param_1,local_158,&local_138);
    if (local_138._s_0.Z != 0.0) {
      uVar5 = &(((TVector<double>_u_0 *)auStack_120)->_s_0).Y;
      if ((double *)local_108._s_0.Y != (double *)0x0) {
        uVar5 = local_108._s_0.Y;
      }
      (**(code **)((longlong)*(double *)uVar5 + 0x10))();
    }
    if (-1 < iVar4) {
      FColliderMesh::GetTriVertices
                (this->ColliderMesh,iVar4,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&((TVector<double>_u_0 *)auStack_120)->_s_0,
                 (TVector<double> *)&local_108._s_0);
      VectorUtil::Normal<double>
                ((TVector<double> *)&local_150._s_0,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&((TVector<double>_u_0 *)auStack_120)->_s_0,
                 (TVector<double> *)&local_108._s_0);
      (param_2->field0_0x0)._s_0.X = local_150._s_0.X;
      (param_2->field0_0x0)._s_0.Y = local_150._s_0.Y;
      (param_2->field0_0x0)._s_0.Z = local_150._s_0.Z;
      local_e8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_e8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_d0 = local_138._s_0.X;
      dStack_c8 = local_138._s_0.Y;
      local_b0 = (double)auStack_120._8_8_;
      dStack_a8 = (double)auStack_120._16_8_;
      local_90 = CONCAT71(local_108._17_7_,local_108._16_1_);
      local_c0 = local_138._s_0.Z;
      dStack_b8 = (double)auStack_120._0_8_;
      local_a0 = local_108._s_0.X;
      pdStack_98 = (double *)local_108._s_0.Y;
      TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_e8._s_0);
      sVar3 = _dclass(local_70);
      if (sVar3 < 1) {
        sVar3 = _dclass((int)local_68);
        if ((sVar3 < 1) && (sVar3 = _dclass((int)local_60), sVar3 < 1)) {
          *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_70;
          *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uStack_6c;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (int)local_68;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) =
               (int)((ulonglong)local_68 >> 0x20);
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = local_60;
          return __return_storage_ptr__;
        }
      }
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// Project @ 143514850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TVector<double> * __thiscall
UE::Geometry::FColliderMeshProjectionTarget::Project
          (FColliderMeshProjectionTarget *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,int param_2)

{
  FColliderMesh *pFVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [16];
  TVector<double>_u_0 local_128;
  undefined1 auStack_110 [24];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double *pdStack_88;
  undefined8 local_80;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128._s_0.X = __real_7fefffffffffffff;
  pFVar1 = this->ColliderMesh;
  local_128._s_0.Z = 0.0;
  local_f8._s_0.Y = 0.0;
  local_f8._16_1_ = 0;
  if ((-1 < (pFVar1->AABBTree).RootIndex) && ((pFVar1->AABBTree).MeshChangeStamp == 0)) {
    iVar4 = (**(code **)((pFVar1->AABBTree)._padding_ + 0x20))
                      (&pFVar1->AABBTree,param_1,local_138,&local_128);
    if (local_128._s_0.Z != 0.0) {
      uVar5 = &(((TVector<double>_u_0 *)auStack_110)->_s_0).Y;
      if ((double *)local_f8._s_0.Y != (double *)0x0) {
        uVar5 = local_f8._s_0.Y;
      }
      (**(code **)((longlong)*(double *)uVar5 + 0x10))();
    }
    if (-1 < iVar4) {
      FColliderMesh::GetTriVertices
                (this->ColliderMesh,iVar4,(TVector<double> *)&local_128._s_0,
                 (TVector<double> *)&((TVector<double>_u_0 *)auStack_110)->_s_0,
                 (TVector<double> *)&local_f8._s_0);
      local_d8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_d8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_d8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_c0 = local_128._s_0.X;
      dStack_b8 = local_128._s_0.Y;
      local_a0 = (double)auStack_110._8_8_;
      dStack_98 = (double)auStack_110._16_8_;
      local_80 = CONCAT71(local_f8._17_7_,local_f8._16_1_);
      local_b0 = local_128._s_0.Z;
      dStack_a8 = (double)auStack_110._0_8_;
      local_90 = local_f8._s_0.X;
      pdStack_88 = (double *)local_f8._s_0.Y;
      TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_d8._s_0);
      sVar3 = _dclass(local_60);
      if (sVar3 < 1) {
        sVar3 = _dclass((int)local_58);
        if ((sVar3 < 1) && (sVar3 = _dclass((int)local_50), sVar3 < 1)) {
          *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_60;
          *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uStack_5c;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (int)local_58;
          *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) =
               (int)((ulonglong)local_58 >> 0x20);
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = local_50;
          return __return_storage_ptr__;
        }
      }
    }
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

