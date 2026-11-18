// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// ~FWorldSpaceProjectionTarget @ 14c949a20

void __thiscall
UE::Geometry::FWorldSpaceProjectionTarget::~FWorldSpaceProjectionTarget
          (FWorldSpaceProjectionTarget *this)

{
  this->_padding_ = (longlong)&___7IProjectionTarget_Geometry_UE__6B_;
  return;
}

// Project @ 14c9839a0

TVector<double> * __thiscall
UE::Geometry::FWorldSpaceProjectionTarget::Project
          (FWorldSpaceProjectionTarget *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,int param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  TVector<double> local_58 [2];
  
  local_88._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_88._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_70._s_0.X = local_88._s_0.X * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
  local_70._s_0.Z = local_88._s_0.Z * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
  local_70._s_0.Y = local_88._s_0.Y * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
  pTVar5 = operator*<double>(local_58,&(this->ToolMeshLocalToWorld).Rotation,
                             (TVector<double> *)&local_70._s_0);
  local_88._s_0.Y =
       (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Y + (pTVar5->field0_0x0)._s_0.Y;
  local_88._s_0.Z =
       (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Z + (pTVar5->field0_0x0)._s_0.Z;
  local_88._s_0.X =
       (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.X + (pTVar5->field0_0x0)._s_0.X;
  pTVar5 = TTransformSRT3<double>::InverseTransformPosition<double>
                     (&this->TargetMeshLocalToWorld,local_58,(TVector<double> *)&local_88._s_0);
  local_88._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  local_88._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
  local_88._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  FMeshProjectionTarget::Project
            ((FMeshProjectionTarget *)this,__return_storage_ptr__,(TVector<double> *)&local_88._s_0,
             param_2,param_3);
  local_70._s_0.X =
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.X *
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  local_70._s_0.Y =
       (__return_storage_ptr__->field0_0x0)._s_0.Y *
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
  local_70._s_0.Z =
       (__return_storage_ptr__->field0_0x0)._s_0.Z *
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
  pTVar5 = operator*<double>(local_58,&(this->TargetMeshLocalToWorld).Rotation,
                             (TVector<double> *)&local_70._s_0);
  dVar9 = (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Z;
  dVar10 = (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.X;
  dVar13 = (pTVar5->field0_0x0)._s_0.Z;
  dVar1 = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Y + (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 + dVar13;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar10 + dVar1;
  pTVar5 = TTransformSRT3<double>::InverseTransformPosition<double>
                     (&this->ToolMeshLocalToWorld,local_58,__return_storage_ptr__);
  dVar9 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  dVar1 = __real_3ff0000000000000;
  dVar9 = (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
  dVar10 = (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
  dVar13 = (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
  dVar12 = dVar9 * dVar13;
  dVar3 = 0.0;
  dVar4 = __real_3ff0000000000000;
  if (dVar10 * dVar12 < 0.0) {
    dVar4 = __real_bff0000000000000;
  }
  dVar11 = dVar10 * dVar4 * dVar9 * (param_2->field0_0x0)._s_0.X;
  dVar12 = dVar12 * dVar4 * (param_2->field0_0x0)._s_0.Z;
  dVar9 = dVar10 * dVar4 * dVar13 * (param_2->field0_0x0)._s_0.Y;
  auVar6._0_8_ = dVar9 * dVar9;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar11 * dVar11 + auVar6._0_8_ + dVar12 * dVar12;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (auVar7._0_8_ <= 0.0) {
    local_88._s_0.Z = 0.0;
    local_88._s_0.X = 0.0;
    local_88._s_0.Y = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / auVar7._0_8_;
    local_88._s_0.X = dVar10 * dVar11;
    local_88._s_0.Y = dVar10 * dVar9;
    local_88._s_0.Z = dVar10 * dVar12;
  }
  operator*<double>((TVector<double> *)&local_70._s_0,&(this->TargetMeshLocalToWorld).Rotation,
                    (TVector<double> *)&local_88._s_0);
  (param_2->field0_0x0)._s_0.X = local_70._s_0.X;
  (param_2->field0_0x0)._s_0.Y = local_70._s_0.Y;
  (param_2->field0_0x0)._s_0.Z = local_70._s_0.Z;
  TQuaternion<double>::InverseMultiply
            (&(this->ToolMeshLocalToWorld).Rotation,(TVector<double> *)&local_70._s_0,param_2);
  dVar10 = local_70._s_0.X * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
  dVar9 = local_70._s_0.Y * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
  dVar13 = local_70._s_0.Z * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
  auVar8._0_8_ = dVar10 * dVar10;
  auVar8._8_8_ = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar9 * dVar9 + auVar8._0_8_ + dVar13 * dVar13;
  auVar7 = sqrtpd(auVar8,auVar2);
  if (auVar7._0_8_ <= 0.0) {
    dVar9 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = dVar1 / auVar7._0_8_;
    dVar3 = dVar1 * dVar13;
    dVar9 = dVar1 * dVar9;
    dVar1 = dVar1 * dVar10;
  }
  (param_2->field0_0x0)._s_0.X = dVar1;
  (param_2->field0_0x0)._s_0.Y = dVar9;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  return __return_storage_ptr__;
}

// Project @ 14c983cc0

TVector<double> * __thiscall
UE::Geometry::FWorldSpaceProjectionTarget::Project
          (FWorldSpaceProjectionTarget *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  local_58._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_58._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_40._s_0.X = local_58._s_0.X * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.X;
  local_40._s_0.Z = local_58._s_0.Z * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z;
  local_40._s_0.Y = local_58._s_0.Y * (this->ToolMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y;
  pTVar5 = operator*<double>(&local_28,&(this->ToolMeshLocalToWorld).Rotation,
                             (TVector<double> *)&local_40._s_0);
  local_58._s_0.Y =
       (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Y + (pTVar5->field0_0x0)._s_0.Y;
  local_58._s_0.Z =
       (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.Z + (pTVar5->field0_0x0)._s_0.Z;
  local_58._s_0.X =
       (pTVar5->field0_0x0)._s_0.X + (this->ToolMeshLocalToWorld).Translation.field0_0x0._s_0.X;
  pTVar5 = TTransformSRT3<double>::InverseTransformPosition<double>
                     (&this->TargetMeshLocalToWorld,&local_28,(TVector<double> *)&local_58._s_0);
  local_58._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  local_58._s_0.Y = (pTVar5->field0_0x0)._s_0.Y;
  local_58._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  FMeshProjectionTarget::Project
            ((FMeshProjectionTarget *)this,__return_storage_ptr__,(TVector<double> *)&local_58._s_0,
             param_2);
  local_40._s_0.X =
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.X *
       (__return_storage_ptr__->field0_0x0)._s_0.X;
  local_40._s_0.Y =
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Y *
       (__return_storage_ptr__->field0_0x0)._s_0.Y;
  local_40._s_0.Z =
       (this->TargetMeshLocalToWorld).Scale3D.field0_0x0._s_0.Z *
       (__return_storage_ptr__->field0_0x0)._s_0.Z;
  pTVar5 = operator*<double>(&local_28,&(this->TargetMeshLocalToWorld).Rotation,
                             (TVector<double> *)&local_40._s_0);
  dVar1 = (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Z;
  dVar2 = (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.X;
  dVar3 = (pTVar5->field0_0x0)._s_0.Z;
  dVar4 = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (this->TargetMeshLocalToWorld).Translation.field0_0x0._s_0.Y + (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 + dVar4;
  pTVar5 = TTransformSRT3<double>::InverseTransformPosition<double>
                     (&this->ToolMeshLocalToWorld,&local_28,__return_storage_ptr__);
  dVar1 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

